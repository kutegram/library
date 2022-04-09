#include "telegramclient.h"

#include <QDateTime>
#include "mtschema.h"
#include "crypto.h"
#include <QHash>
#include <QtCore>
#include "tlschema.h"
#include <QApplication>
#if QT_VERSION >= 0x040702
#include <QNetworkConfigurationManager>
#endif
#include <openssl/bn.h>
#include <qcompressor.h>
#include <QDebug>
#include <cstdlib>
#include "systemname.h"

typedef void (TelegramClient::*HANDLE_METHOD)(QByteArray, qint64);

QHash<qint32, HANDLE_METHOD> getHandleMap()
{
    QHash<qint32, HANDLE_METHOD> map;

    map[MTType::ResPQ] = &TelegramClient::handleResPQ;
    map[MTType::ServerDHParamsOk] = &TelegramClient::handleServerDHParamsOk;
    map[MTType::DhGenOk] = &TelegramClient::handleDhGenOk;
    map[MTType::DhGenFail] = &TelegramClient::handleDhGenFail;
    map[MTType::DhGenRetry] = &TelegramClient::handleDhGenRetry;
    map[MTType::BadServerSalt] = &TelegramClient::handleBadServerSalt;
    map[MTType::RpcResult] = &TelegramClient::handleRpcResult;
    map[MTType::GzipPacked] = &TelegramClient::handleGzipPacked;
    map[MTType::MsgContainer] = &TelegramClient::handleMsgContainer;
    map[MTType::BadMsgNotification] = &TelegramClient::handleBadMsgNotification;
    map[MTType::NewSessionCreated] = &TelegramClient::handleNewSessionCreated;
    map[MTType::RpcError] = &TelegramClient::handleRpcError;
    map[MTType::MsgCopy] = &TelegramClient::handleMsgCopy;
    map[MTType::Pong] = &TelegramClient::handlePong;

    map[TLType::Config] = &TelegramClient::handleConfig;
    map[TLType::AuthSentCode] = &TelegramClient::handleSentCode;
    map[TLType::AuthAuthorization] = &TelegramClient::handleAuthorization;
    map[TLType::AuthLoginToken] = &TelegramClient::handleLoginToken;
    map[TLType::AuthLoginTokenMigrateTo] = &TelegramClient::handleLoginTokenMigrateTo;
    map[TLType::AuthLoginTokenSuccess] = &TelegramClient::handleLoginTokenSuccess;
    map[TLType::MessagesDialogs] = &TelegramClient::handleDialogs;
    map[TLType::MessagesDialogsSlice] = &TelegramClient::handleDialogsSlice;
    map[TLType::UploadFile] = &TelegramClient::handleFile;
    map[TLType::AuthExportedAuthorization] = &TelegramClient::handleExportedAuthorization;
    map[TLType::MessagesMessages] = &TelegramClient::handleMessages;
    map[TLType::MessagesMessagesSlice] = &TelegramClient::handleMessagesSlice;
    map[TLType::MessagesChannelMessages] = &TelegramClient::handleChannelMessages;
    map[TLType::UpdatesState] = &TelegramClient::handleUpdatesState;
    map[TLType::UpdatesTooLong] = &TelegramClient::handleUpdatesTooLong;
    map[TLType::UpdateShortMessage] = &TelegramClient::handleUpdateShortMessage;
    map[TLType::UpdateShortChatMessage] = &TelegramClient::handleUpdateShortChatMessage;
    map[TLType::UpdateShort] = &TelegramClient::handleUpdateShort;
    map[TLType::UpdatesCombined] = &TelegramClient::handleUpdatesCombined;
    map[TLType::Updates] = &TelegramClient::handleUpdates;
    map[TLType::UpdateShortSentMessage] = &TelegramClient::handleUpdateShortSentMessage;

    return map;
}

QHash<qint32, HANDLE_METHOD> HANDLE_METHODS(getHandleMap());

TelegramClient::TelegramClient(QObject *parent, QString sessionId) :
    QObject(parent),
    session(),
    socket(this),
    newNonce(),
    nonce(),
    messagesConIds(),
    messages(),
    resendRequired(),
    confirm(),
    state(STOPPED),
    retryId(),
    sessionFile(sessionId + ".session", QSettings::IniFormat, this),
    readMutex(QMutex::Recursive),
    msgMutex(QMutex::Recursive),
#if QT_VERSION >= 0x040702
    networkSession(0),
#endif
    dcConfig(),
    updateDate(),
    updateSeq(),
    updatePts(),
    updateQts(),
    timer(this),
    lastPhoneNumber(),
    lastPhoneCodeHash()
{
    session.deserialize(sessionFile.value("session").toMap());

    socket.setSocketOption(QTcpSocket::LowDelayOption, 1);
    socket.setSocketOption(QTcpSocket::KeepAliveOption, 1);

    connect(&socket, SIGNAL(connected()), this, SLOT(socket_connected()));
    connect(&socket, SIGNAL(disconnected()), this, SLOT(socket_disconnected()));
    connect(&socket, SIGNAL(readyRead()), this, SLOT(socket_readyRead()));
    connect(&socket, SIGNAL(bytesWritten(qint64)), this, SLOT(socket_bytesWritten(qint64)));
    connect(&socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(socket_error(QAbstractSocket::SocketError)));

    timer.setSingleShot(false);
    timer.setInterval(60000);

    connect(&timer, SIGNAL(timeout()), this, SLOT(timer_timeout()));

#if QT_VERSION >= 0x040702
    QNetworkConfigurationManager manager;
    if (manager.capabilities() & QNetworkConfigurationManager::NetworkSessionRequired) {
        QNetworkConfiguration config = manager.configurationFromIdentifier(sessionFile.value("network").toString());
        if ((config.state() & QNetworkConfiguration::Discovered) != QNetworkConfiguration::Discovered) {
            config = manager.defaultConfiguration();
        }

        networkSession = new QNetworkSession(config, this);
        connect(networkSession, SIGNAL(opened()), this, SLOT(networkSession_opened()));
        networkSession->open(); //TODO network session error handling?
    }
#endif
}

void TelegramClient::timer_timeout()
{
    if (isOpened() && isAuthorized()) {
        pingDelayDisconnect(0, timer.interval() * 1.2);
        sendMsgsAck();
    } else {
        timer.stop();
    }
}

QByteArray TelegramClient::message(qint64 mtm)
{
    return messages[mtm];
}

qint32 TelegramClient::messageConstructor(qint64 mtm)
{
    return messagesConIds[mtm];
}

void TelegramClient::changeState(State s)
{
    if (s == state) return;
    state = s;

    if (s >= AUTHORIZED) {
        timer.start(60000);
    } else {
        timer.stop();
    }

    switch (s) {
    case INITED:
    {
        //TODO: what about packets that require to be logged in? This is only legal for auth methods.
        //TODO: think about packet spam!
        QList<QByteArray> clone(resendRequired);
        resendRequired.clear();
        for (qint32 i = 0; i < clone.size(); ++i) {
            sendMTPacket(clone[i]);
        }
        break;
    }
    case AUTHORIZED:
    {
        initConnection();
        break;
    }
    case LOGGED_IN:
    {
        lastPhoneNumber = "";
        lastPhoneCodeHash = "";
        getUpdatesState();
        break;
    }
    }

    emit stateChanged(s);
}

bool TelegramClient::isLoggedIn()
{
    return isAuthorized() && session.userId;
}

bool TelegramClient::isAuthorized()
{
    return !session.authKey.key.isEmpty() && session.salt && session.authKey.auxHash && session.authKey.id;
}

qint64 TelegramClient::userId()
{
    return session.userId;
}

bool TelegramClient::isOpened()
{
    return socket.isOpen();
}

State TelegramClient::getState()
{
    return state;
}

bool TelegramClient::isConnected()
{
    return isOpened() && isAuthorized() && state > AUTHORIZED;
}

bool TelegramClient::apiReady()
{
    return isConnected() && isLoggedIn() && state == LOGGED_IN;
}

void TelegramClient::start()
{
    //if (isOpened()) return;
    stop();

    if (session.currentIp.isEmpty() || !session.currentPort) {
        session.currentIp = DC_IP;
        session.currentPort = DC_PORT;
        session.currentDc = DC_NUMBER;
        sync();
    }

    changeState(CONNECTING);
    socket.connectToHost(session.currentIp, session.currentPort);
}

void TelegramClient::stop()
{
    if (!isOpened()) return;

    socket.abort();
    changeState(STOPPED);
    messages.clear();
    messagesConIds.clear();
    sync();
}

void TelegramClient::finishDCMigration()
{
    TelegramVector options = dcConfig["dc_options"].toList();
    QString newIp;
    qint32 newPort;
    for (qint32 i = 0; i < options.length(); ++i) {
        TelegramObject dcOption = options[i].toMap();
        if (dcOption["id"].toInt() != session.migrateDc || (dcOption["flags"].toUInt() & 2)) continue; //Ignore media only DCs.
        QString ip = dcOption["ip_address"].toString();
        if (ip.isEmpty()) continue;
        if (newIp.isEmpty() || !(dcOption["flags"].toUInt() & 1)) { //Prefer non IPV6.
            newIp = ip;
            newPort = dcOption["port"].toInt();
        }
    }

    session.currentDc = session.migrateDc;
    session.currentPort = newPort;
    session.currentIp = newIp;
    session.authKey = AuthKey();
    session.migrateDc = 0;
    session.userId = 0;

    sync();

    qDebug() << "Migrating to DC" << session.migrateDc;

    start();
}

void TelegramClient::reconnectToDC(qint32 dcId)
{
    session.migrateDc = dcId;
    sync();

    if (!isLoggedIn()) {
        stop();
        finishDCMigration();
        return;
    }

    TGOBJECT(exp, TLType::AuthExportAuthorizationMethod);
    exp["dc_id"] = dcId;

    sendMTObject<&writeTLMethodAuthExportAuthorization>(exp);
}

void TelegramClient::handleExportedAuthorization(QByteArray data, qint64 mtm)
{
    if (!session.migrateDc) return;
    TelegramPacket packet(data);
    QVariant var;

    readTLAuthExportedAuthorization(packet, var);
    TelegramObject obj = var.toMap();

    session.importId = obj["id"].toInt();
    session.importBytes = obj["bytes"].toByteArray();

    stop();

    finishDCMigration();
}

void TelegramClient::socket_connected()
{
    if (!isOpened()) return;

    qDebug() << "Socket was connected to" << socket.peerName() << ":" << socket.peerPort();

    //Init MTProto transport
    socket.putChar(0xef);

    //If we are authorized - skip to request DC config
    if (isAuthorized()) {
        changeState(AUTHORIZED);
        return;
    }

    //Authorizing a key
    //Sending ReqPqMulti
    changeState(DH_STEP_1);

    TGOBJECT(reqPqMulti, MTType::ReqPqMultiMethod);
    reqPqMulti["nonce"] = nonce = randomBytes(INT128_BYTES);

    TelegramPacket packet;
    writeMTMethodReqPqMulti(packet, reqPqMulti);
    sendPlainPacket(packet.toByteArray());
}

void TelegramClient::socket_disconnected()
{
    qDebug() << "Socket was disconnected";

    stop();
}

void TelegramClient::socket_readyRead()
{
    qDebug() << "Socket is ready to read";

    readMutex.lock();

    while (socket.bytesAvailable()) {
        qDebug() << "Bytes are avaliable, trying to read";

        //Read message
        QByteArray messageArray = readMessage();
        qDebug() << "Socket was" << messageArray.length() << "byte(s) readed";

        TelegramPacket message(messageArray);

        QVariant id;

        //If length of message is <= 4, it is an negative integer error.
        if (messageArray.length() <= 4) {
            readInt32(message, id);
            qDebug() << "Got an message error:" << id.toInt();
            emit gotMTError(id.toInt());
            return;
        }

        //Reading message id
        readUInt64(message, id);
        QByteArray plainData;
        qint64 mtMsgId;

        if (!id.toULongLong()) {
            //qDebug() << "Got an plain message.";
            //auth_key_id == 0: it is a plain message.
            readInt64(message, id); //message_id
            readInt32(message, id);
            message.readRawBytes(plainData, id.toInt());
        } else {
            //qDebug() << "Got an MTProto message.";
            if (state < AUTHORIZED) return;
            //auth_key_id != 0: it is a MTProto message.
            //TODO: Important checks
            //TODO: check auth key id
            //TODO: check msg_key correctness
            //TODO: add to confirmation / confirmation timer

            QByteArray messageKey;
            message.readRawBytes(messageKey, 16);
            QByteArray keyIv;
            QByteArray keyData = calcEncryptionKey(session.authKey.key, messageKey, keyIv, false);
            //TODO: NB: after decryption, msg_key must be equal to SHA-256 of data thus obtained.
            TelegramStream messagePlain(decryptAES256IGE(messageArray.mid(24), keyIv, keyData));
            readUInt64(messagePlain, id); //remoteSalt
            readUInt64(messagePlain, id); //remoteId
            readInt64(messagePlain, id); //remoteMessageId
            mtMsgId = id.toLongLong();
            confirm.append(mtMsgId);
            readInt32(messagePlain, id); //remoteSequence
            readInt32(messagePlain, id); //messageLength
            messagePlain.readRawBytes(plainData, id.toInt());
        }

        handleMessage(plainData, mtMsgId);
    }

    readMutex.unlock();
}

void TelegramClient::socket_bytesWritten(qint64 count)
{
    qDebug() << "Socket was" << count << "byte(s) written";
}

void TelegramClient::socket_error(QAbstractSocket::SocketError error)
{
    qDebug() << "Socket has got an error:" << error;

    emit gotSocketError(error);
}

void TelegramClient::sendPlainPacket(QByteArray raw)
{
    qDebug() << "Sending plain object: ( id" << QByteArray::number(qFromLittleEndian<quint32>((uchar*) raw.mid(0, 4).data()), 16) << ")";

    TelegramPacket packet;

    writeInt64(packet, 0);
    writeInt64(packet, (((quint64) (QDateTime::currentDateTime().toUTC().toTime_t())) << 32));
    writeInt32(packet, raw.length());
    packet.writeRawBytes(raw);

    sendMessage(packet.toByteArray());
}

void TelegramClient::sendMessage(QByteArray raw)
{
    if (!isOpened()) return;

    qint32 length = raw.length() * 0.25;
    if (length >= 127) {
        QByteArray header(4, 0);
        qToLittleEndian(length, (uchar*) header.data());
        header.resize(3);
        socket.putChar(127);
        socket.write(header);
    } else socket.putChar(length);

    socket.write(raw);
}

QByteArray TelegramClient::readMessage()
{
    if (!isOpened() || !socket.bytesAvailable()) return QByteArray();

    QByteArray header(4, 0);
    socket.read(header.data(), 1);
    qint32 length = header.at(0) & 0xFF;
    if (length >= 127) {
        socket.read(header.data(), 3);
        length = qFromLittleEndian<qint32>((uchar*) header.data());
    }

    length *= 4;

    //qDebug() << "AVALIABLE BYTES AND REQUIRED (" << socket.bytesAvailable() << "/" << length << ")";

    QByteArray i;
    i.reserve(length);
    i.resize(length);

    qint32 total = 0;
    while (length > 0) {
        qint32 readed = socket.read(i.data() + total, length);
        if (readed < 0) return QByteArray();
        if (!readed) socket.waitForReadyRead();
        total += readed;
        length -= readed;
    }

    return i;
}

void TelegramClient::handleMessage(QByteArray messageData, qint64 mtm)
{
    if (messageData.length() < 4) return;
    qint32 conId = qFromLittleEndian<qint32>((uchar*) messageData.mid(0, 4).data());

    HANDLE_METHOD method = HANDLE_METHODS.value(conId, (HANDLE_METHOD) 0);
    if (!method) {
        qDebug() << "[ERR] Got an unknown TL object ( id" << QString::number((quint32) conId, 16) << ")";
    } else {
        qDebug() << "[GOT] ( id" << QString::number((quint32) conId, 16) << ")";
        (this->*method)(messageData, mtm);
    }

    emit handleResponse(mtm, messageData, conId);
}

void TelegramClient::handleResPQ(QByteArray data, qint64 mtm)
{
    changeState(DH_STEP_2);

    TelegramPacket packet(data);
    QVariant var;

    readMTResPQ(packet, var);
    TelegramObject resPQ = var.toMap();

    if (nonce != resPQ["nonce"].toByteArray()) {
        qDebug() << "SECURITY ERROR: nonces are mismatched!";
        return;
    }

    serverNonce = resPQ["server_nonce"].toByteArray();

    QList<DHKey> keychain = QList<DHKey>() //<< DHKey("be6a71558ee577ff03023cfa17aab4e6c86383cff8a7ad38edb9fafe6f323f2d5106cbc8cafb83b869cffd1ccf121cd743d509e589e68765c96601e813dc5b9dfc4be415c7a6526132d0035ca33d6d6075d4f535122a1cdfe017041f1088d1419f65c8e5490ee613e16dbf662698c0f54870f0475fa893fc41eb55b08ff1ac211bc045ded31be27d12c96d8d3cfc6a7ae8aa50bf2ee0f30ed507cc2581e3dec56de94f5dc0a7abee0be990b893f2887bd2c6310a1e0a9e3e38bd34fded2541508dc102a9c9b4c95effd9dd2dfe96c29be647d6c69d66ca500843cfaed6e440196f1dbe0e2e22163c61ca48c79116fa77216726749a976a1c4b0944b5121e8c01", 6491968696586960280LL)
            //<< DHKey("b3f762b739be98f343eb1921cf0148cfa27ff7af02b6471213fed9daa0098976e667750324f1abcea4c31e43b7d11f1579133f2b3d9fe27474e462058884e5e1b123be9cbbc6a443b2925c08520e7325e6f1a6d50e117eb61ea49d2534c8bb4d2ae4153fabe832b9edf4c5755fdd8b19940b81d1d96cf433d19e6a22968a85dc80f0312f596bd2530c1cfb28b5fe019ac9bc25cd9c2a5d8a0f3a1c0c79bcca524d315b5e21b5c26b46babe3d75d06d1cd33329ec782a0f22891ed1db42a1d6c0dea431428bc4d7aabdcf3e0eb6fda4e23eb7733e7727e9a1915580796c55188d2596d2665ad1182ba7abf15aaa5a8b779ea996317a20ae044b820bff35b6e8a1", -5859577972006586033LL)
            //<< DHKey("bdf2c77d81f6afd47bd30f29ac76e55adfe70e487e5e48297e5a9055c9c07d2b93b4ed3994d3eca5098bf18d978d54f8b7c713eb10247607e69af9ef44f38e28f8b439f257a11572945cc0406fe3f37bb92b79112db69eedf2dc71584a661638ea5becb9e23585074b80d57d9f5710dd30d2da940e0ada2f1b878397dc1a72b5ce2531b6f7dd158e09c828d03450ca0ff8a174deacebcaa22dde84ef66ad370f259d18af806638012da0ca4a70baa83d9c158f3552bc9158e69bf332a45809e1c36905a5caa12348dd57941a482131be7b2355a5f4635374f3bd3ddf5ff925bf4809ee27c1e67d9120c5fe08a9de458b1b4a3c5d0a428437f2beca81f4e2d5ff", 1562291298945373506LL)
            //<< DHKey("aeec36c8ffc109cb099624685b97815415657bd76d8c9c3e398103d7ad16c9bba6f525ed0412d7ae2c2de2b44e77d72cbf4b7438709a4e646a05c43427c7f184debf72947519680e651500890c6832796dd11f772c25ff8f576755afe055b0a3752c696eb7d8da0d8be1faf38c9bdd97ce0a77d3916230c4032167100edd0f9e7a3a9b602d04367b689536af0d64b613ccba7962939d3b57682beb6dae5b608130b2e52aca78ba023cf6ce806b1dc49c72cf928a7199d22e3d7ac84e47bc9427d0236945d10dbd15177bab413fbf0edfda09f014c7a7da088dde9759702ca760af2b8e4e97cc055c617bd74c3d97008635b98dc4d621b4891da9fb0473047927", 847625836280919973LL)
            << DHKey("c150023e2f70db7985ded064759cfecf0af328e69a41daf4d6f01b538135a6f91f8f8b2a0ec9ba9720ce352efcf6c5680ffc424bd634864902de0b4bd6d49f4e580230e3ae97d95c8b19442b3c0a10d8f5633fecedd6926a7f6dab0ddb7d457f9ea81b8465fcd6fffeed114011df91c059caedaf97625f6c96ecc74725556934ef781d866b34f011fce4d835a090196e9a5f0e4449af7eb697ddb9076494ca5f81104a305b6dd27665722c46b60e5df680fb16b210607ef217652e60236c255f6a28315f4083a96791d7214bf64c1df4fd0db1944fb26a2a57031b32eee64ad15a8ba68885cde74a5bfc920f6abf59ba5c75506373e7130f9042da922179251f", -4344800451088585951LL);

    TelegramVector fingerprints = resPQ["server_public_key_fingerprints"].toList();
    qDebug() << "Fingerprints:" << fingerprints;

    QList<DHKey> matched;
    for (qint32 i = 0; i < keychain.size(); ++i) {
        for (qint32 j = 0; j < fingerprints.size(); j++) {
            if (fingerprints[j].toLongLong() == keychain[i].fingerprint) {
                matched << keychain[i];
                break;
            }
        }
    }

    if (matched.isEmpty()) {
        qDebug() << "SECURITY ERROR: none of fingerprints are matched!";
        return;
    }

    changeState(DH_STEP_3);

    QByteArray pqBytes = resPQ["pq"].toByteArray();
    quint64 pq = qFromBigEndian<quint64>((uchar*) pqBytes.data());
    quint32 p = findDivider(pq);
    lldiv_t output;
    output = lldiv(pq, p);
    quint32 q = output.quot;
    if (p > q) qSwap(p, q);

    QByteArray pBytes(INT32_BYTES, 0);
    qToBigEndian(p, (uchar*) pBytes.data());
    QByteArray qBytes(INT32_BYTES, 0);
    qToBigEndian(q, (uchar*) qBytes.data());

    //Generating ReqDHParams
    changeState(DH_STEP_4);

    TGOBJECT(reqDHParams, MTType::ReqDHParamsMethod);
    reqDHParams["nonce"] = nonce;
    reqDHParams["server_nonce"] = serverNonce;
    reqDHParams["p"] = pBytes;
    reqDHParams["q"] = qBytes;
    reqDHParams["public_key_fingerprint"] = matched[0].fingerprint;

    //Generating PQInnerData
    TGOBJECT(pqInnerData, MTType::PQInnerDataDc);
    pqInnerData["pq"] = pqBytes;
    pqInnerData["p"] = pBytes;
    pqInnerData["q"] = qBytes;
    pqInnerData["nonce"] = nonce;
    pqInnerData["server_nonce"] = serverNonce;
    pqInnerData["new_nonce"] = newNonce = randomBytes(INT256_BYTES);
    pqInnerData["dc"] = session.currentDc; //required by PQInnerDataDc

    TelegramPacket pqInnerDataPacket;
    writeMTPQInnerData(pqInnerDataPacket, pqInnerData);
    qDebug() << "PQInnerData:" << pqInnerDataPacket.toByteArray().toHex();

    QByteArray pqInnerArray = pqInnerDataPacket.toByteArray();
    //MTProto RSA-PAD encrypted / required by PQInnerDataDc
    //    QByteArray dataArray = pqInnerArray + randomBytes(192 - pqInnerArray.length());
    //    Integer modulus = toBig(matched[0].publicKey);

    //    while (true) {
    //        QByteArray tempKey = randomBytes(32);
    //        QByteArray dataWithHash = reverse(dataArray) + hashSHA256(tempKey + dataArray);
    //        QByteArray decryptedData = encryptAES256IGE(dataWithHash, QByteArray(32, 0), tempKey);
    //        decryptedData = xorArray(tempKey, hashSHA256(decryptedData)) + decryptedData;
    //        Integer compare = toBig(decryptedData);

    //        if (compare < modulus) {
    //            reqDHParams["encrypted_data"] = encryptRSA(decryptedData, matched[0].publicKey, matched[0].exponent);
    //            break;
    //        }
    //    }

    //MTProto RSA encrypted
    QByteArray dataWithHash = hashSHA1(pqInnerArray) + pqInnerArray;
    dataWithHash += randomBytes(255 - dataWithHash.size());
    reqDHParams["encrypted_data"] = encryptRSA(dataWithHash, matched[0].publicKey, matched[0].exponent);

    //Sending ReqDHParams
    TelegramPacket reqDHParamsPacket;
    writeMTMethodReqDHParams(reqDHParamsPacket, reqDHParams);
    qDebug() << "ReqDHParams:" << reqDHParamsPacket.toByteArray().toHex();
    sendPlainPacket(reqDHParamsPacket.toByteArray());
}

void TelegramClient::handleServerDHParamsOk(QByteArray data, qint64 mtm)
{
    changeState(DH_STEP_5);

    TelegramPacket packet(data);
    QVariant var;

    readMTServerDHParams(packet, var);
    TelegramObject serverDHParams = var.toMap();

    if (nonce != serverDHParams["nonce"].toByteArray()) {
        qDebug() << "SECURITY ERROR: nonces are mismatched!";
        return;
    }

    if (serverNonce != serverDHParams["server_nonce"].toByteArray()) {
        qDebug() << "SECURITY ERROR: server nonces are mismatched!";
        return;
    }

    QByteArray answer = serverDHParams["encrypted_answer"].toByteArray();

    if (answer.size() & 15) {
        qDebug() << "SECURITY ERROR: bad padding for encrypted answer!";
        return;
    }

    //Handling ServerDHInnerData
    QByteArray tempAesKey = hashSHA1(newNonce + serverNonce) + hashSHA1(serverNonce + newNonce).mid(0, 12);
    QByteArray tempAesIv = hashSHA1(serverNonce + newNonce).mid(12, 8) + hashSHA1(newNonce + newNonce) + newNonce.mid(0, 4);
    TelegramPacket answerPacket(decryptAES256IGE(answer, tempAesIv, tempAesKey));
    answerPacket.readRawBytes(answer, 20);
    readMTServerDHInnerData(answerPacket, var);
    TelegramObject serverDHInnerData = var.toMap();

    session.timeOffset = serverDHInnerData["server_time"].toInt()  - (qint32) (QDateTime::currentDateTime().toUTC().toTime_t());

    QByteArray gBytes(INT32_BYTES, 0);
    qToBigEndian(serverDHInnerData["g"].toInt(), (uchar*) gBytes.data());

    changeState(DH_STEP_6);

    QByteArray randomByteArray = randomBytes(256);
    QByteArray dhByteArray = serverDHInnerData["dh_prime"].toByteArray();
    QByteArray gaByteArray = serverDHInnerData["g_a"].toByteArray();

    changeState(DH_STEP_7);

    //Sending setClientDHParams
    TGOBJECT(setClientDHParams, MTType::SetClientDHParamsMethod);
    setClientDHParams["nonce"] = nonce;
    setClientDHParams["server_nonce"] = serverNonce;

    //Generating encrypted data / ClientDHInnerData
    TGOBJECT(clientDHInnerData, MTType::ClientDHInnerData);
    clientDHInnerData["nonce"] = nonce;
    clientDHInnerData["server_nonce"] = serverNonce;
    clientDHInnerData["retry_id"] = 0; //retryId++; //TODO retry id
    clientDHInnerData["g_b"] = encryptRSA(gBytes, dhByteArray, randomByteArray); //gBytes ^ randomByteArray mod dhByteArray

    TelegramPacket clientDHInnerDataPacket;
    writeMTClientDHInnerData(clientDHInnerDataPacket, clientDHInnerData);
    QByteArray clientDHIDArray = clientDHInnerDataPacket.toByteArray();

    QByteArray clientDataWithHash = hashSHA1(clientDHIDArray) + clientDHIDArray;
    clientDataWithHash += randomBytes(16 - (clientDataWithHash.size() % 16));
    setClientDHParams["encrypted_data"] = encryptAES256IGE(clientDataWithHash, tempAesIv, tempAesKey);

    changeState(DH_STEP_8);

    QByteArray mainKey = encryptRSA(gaByteArray, dhByteArray, randomByteArray); //gaByteArray ^ randomByteArray mod dhByteArray
    session.authKey = QByteArray(256 - mainKey.size(), 0) + mainKey;

    TelegramPacket setCDHPPacket;
    writeMTMethodSetClientDHParams(setCDHPPacket, setClientDHParams);
    sendPlainPacket(setCDHPPacket.toByteArray());
}

void TelegramClient::handleDhGenOk(QByteArray data, qint64 mtm)
{
    changeState(DH_STEP_9);

    TelegramPacket packet(data);
    QVariant var;

    readMTSetClientDHParamsAnswer(packet, var);
    TelegramObject dhGenOk = var.toMap();

    if (nonce != dhGenOk["nonce"].toByteArray()) {
        qDebug() << "SECURITY ERROR: nonces are mismatched!";
        return;
    }

    if (serverNonce != dhGenOk["server_nonce"].toByteArray()) {
        qDebug() << "SECURITY ERROR: server nonces are mismatched!";
        return;
    }

    QByteArray newNonceHash1 = dhGenOk["new_nonce_hash1"].toByteArray();
    if (session.authKey.calcNewNonceHash(newNonce, 1) != newNonceHash1) {
        qDebug() << "SECURITY ERROR: new nonce hashes are mismatched!";
        return;
    }

    session.salt = qFromBigEndian<quint64>((uchar*) xorArray(newNonce.mid(0, 8), serverNonce.mid(0, 8)).data());
    session.id = qFromBigEndian<qint64>((uchar*) randomBytes(INT64_BYTES).data());

    //Success.
    //TODO: handle dhgen errors, auth errors.
    qDebug() << "Authorization succeeded.";

    changeState(AUTHORIZED);
}

qint64 TelegramClient::getNewMessageId()
{
    msgMutex.lock();
    qint64 time = QDateTime::currentDateTime().toUTC().toTime_t();
    qint64 newMessageId = ((time + session.timeOffset) << 32) | ((time % 1000) << 22);

    if (session.lastMessageId >= newMessageId) newMessageId = session.lastMessageId + 4;
    session.lastMessageId = newMessageId;
    msgMutex.unlock();
    return newMessageId;
}

qint32 TelegramClient::generateSequence(bool confirmed)
{
    msgMutex.lock();
    qint32 result = confirmed ? session.sequence++ * 2 + 1 : session.sequence * 2;
    msgMutex.unlock();
    return result;
}

//TODO: Fix INPUT_METHOD_INVALID
void TelegramClient::sendMsgsAck()
{
    if (!apiReady()) return;
    //TODO: add timer send timeout, spam protection
    while (!confirm.isEmpty()) {
        TGOBJECT(msgsAck, MTType::MsgsAck);

        qDebug() << "MSGACK SENT:";
        TelegramVector msgIds;
        QList<qint64> forAck = confirm.mid(0, 8192);
        for (qint32 i = 0; i < forAck.size(); ++i) {
            msgIds << forAck[i];
            qDebug() << forAck[i];
            confirm.removeOne(forAck[i]);
        }

        msgsAck["msg_ids"] = msgIds;
        sendMTObject<&writeMTMsgsAck>(msgsAck, true);
    }
}

QByteArray TelegramClient::gzipPacket(QByteArray data)
{
    TGOBJECT(zipped, MTType::GzipPacked);

    QByteArray packedData;
    if (!QCompressor::gzipCompress(data, packedData)) {
        qDebug() << "[ERROR] Gzip compression error.";
        return data;
    }

    zipped["packed_data"] = packedData;

    TelegramPacket packet;
    writeMTObject(packet, zipped);
    return packet.toByteArray();
}

qint64 TelegramClient::sendMTPacket(QByteArray raw, bool ignoreConfirm, bool binary)
{
    if (state < AUTHORIZED) return 0;
    //if (!ignoreConfirm) sendMsgsAck();

    if (raw.isEmpty()) return 0;

    qDebug() << "Sending MTProto object: ( id" << qFromLittleEndian<qint32>((uchar*) raw.mid(0, 4).data()) << ")";

    qint32 packetConId = qFromLittleEndian<qint32>((const uchar*) raw.mid(0, 4).constData());
    if (!binary && raw.size() > 255) raw = gzipPacket(raw);

    qint64 messageId = getNewMessageId();
    messages.insert(messageId, raw);
    messagesConIds.insert(messageId, packetConId);

    TelegramPacket packet;
    writeUInt64(packet, session.salt);
    writeInt64(packet, session.id);
    writeInt64(packet, messageId);
    writeInt32(packet, generateSequence(true)); //TODO: check confirmed variable
    writeInt32(packet, raw.length());
    packet.writeRawBytes(raw);
    packet.writeRawBytes(randomBytes(randomInt(64) * 16 + 16 - (32 + raw.length()) % 16));

    QByteArray packetBytes = packet.toByteArray();
    QByteArray messageKey = calcMessageKey(session.authKey.key, packetBytes);
    QByteArray keyIv;
    QByteArray keyData = calcEncryptionKey(session.authKey.key, messageKey, keyIv, true);
    QByteArray cipherText = encryptAES256IGE(packetBytes, keyIv, keyData);

    TelegramPacket cipherPacket;
    writeUInt64(cipherPacket, session.authKey.id);
    cipherPacket.writeRawBytes(messageKey);
    cipherPacket.writeRawBytes(cipherText);

    sendMessage(cipherPacket.toByteArray());
    sync();

    return messageId;
}

void TelegramClient::initConnection()
{
    TGOBJECT(getDCC, TLType::HelpGetConfigMethod);

    TGOBJECT(initRequest, TLType::InitConnectionMethod);
    initRequest["api_id"] = APP_ID;
    initRequest["device_model"] = deviceName();
    initRequest["system_version"] = osName();
    QString appVersion = QApplication::applicationVersion();
    if (appVersion.isEmpty()) appVersion = "1.0.0";
    initRequest["app_version"] = appVersion;
    initRequest["system_lang_code"] = QLocale::system().name().split("_")[0];
    initRequest["lang_pack"] = "";
    initRequest["lang_code"] = QLocale::system().name().split("_")[0];
    initRequest["query"] = getDCC;

    TGOBJECT(invoke, TLType::InvokeWithLayerMethod);
    invoke["layer"] = API_LAYER;
    invoke["query"] = initRequest;

    sendMTObject< &writeTLMethodInvokeWithLayer
            < &readTLMethodInitConnection
            < &readTLMethodHelpGetConfig ,
            &writeTLMethodHelpGetConfig > ,
            &writeTLMethodInitConnection
            < &readTLMethodHelpGetConfig ,
            &writeTLMethodHelpGetConfig > > >(invoke);
}

void TelegramClient::sync()
{
    sessionFile.setValue("session", session.serialize());
    //sessionFile.sync();
    qDebug() << "Session synced.";
}

void TelegramClient::handleDhGenFail(QByteArray data, qint64 mtm)
{
    qDebug() << "DH generation failed.";

    //TODO reauth
    emit gotDHError(true);
    stop();
}

void TelegramClient::handleDhGenRetry(QByteArray data, qint64 mtm)
{
    qDebug() << "DH generation requires a retry.";

    //TODO reauth
    emit gotDHError(false);
    stop();
}

void TelegramClient::networkSession_opened()
{
#if QT_VERSION >= 0x040702
    QNetworkConfiguration config = networkSession->configuration();
    QString id;
    if (config.type() == QNetworkConfiguration::UserChoice) id = networkSession->sessionProperty(QLatin1String("UserChoiceConfiguration")).toString();
    else id = config.identifier();

    sessionFile.setValue("network", id);
#endif
}

void TelegramClient::reset()
{
    stop();

    session.authKey = AuthKey();
    session.userId = 0;
    sync();
}
