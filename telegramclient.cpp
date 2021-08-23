#include "telegramclient.h"

#ifndef QT_NO_DEBUG_OUTPUT
#include <QtDebug>
#endif

#include <QDateTime>
#include "mtschema.h"
#include "crypto.h"
#include <QMap>
#include <QtCore>
#include "tlschema.h"
#include <QApplication>
#include <QMutex>

typedef void (TelegramClient::*HANDLE_METHOD)(QByteArray);

QMap<qint32, HANDLE_METHOD> getHandleMap()
{
    QMap<qint32, HANDLE_METHOD> map;

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

    map[TLType::Config] = &TelegramClient::handleConfig;
    map[TLType::AuthSentCode] = &TelegramClient::handleSentCode;
    map[TLType::AuthAuthorization] = &TelegramClient::handleAuthorization;
    map[TLType::AuthLoginToken] = &TelegramClient::handleLoginToken;
    map[TLType::MessagesDialogs] = &TelegramClient::handleDialogs;
    map[TLType::MessagesDialogsSlice] = &TelegramClient::handleDialogsSlice;

    return map;
}

QMap<qint32, HANDLE_METHOD> HANDLE_METHODS(getHandleMap());
QMutex lock(QMutex::Recursive);

TelegramClient::TelegramClient(QObject *parent, QString sessionId) :
    QObject(parent), session(), socket(0), stream(0), newNonce(), nonce(), messages(), confirm(), state(STOPPED), retryId(), sessionFile(sessionId + ".session", QSettings::IniFormat, this)
{
    session.deserialize(sessionFile.value("session").toMap());
}

void TelegramClient::changeState(State s)
{
    state = s;

    switch (s) {
    case AUTHORIZED:
    {
        initConnection();
        break;
    }
    case LOGGED_IN:
    {
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

bool TelegramClient::isOpened()
{
    return socket && socket->isOpen();
}

State TelegramClient::getState()
{
    return state;
}

bool TelegramClient::isConnected()
{
    return isOpened() && isAuthorized() && state == INITED;
}

void TelegramClient::start()
{
    if (socket) return;
    socket = new QTcpSocket(this);
    socket->setSocketOption(QTcpSocket::LowDelayOption, 1);
    socket->setSocketOption(QTcpSocket::KeepAliveOption, 1);

    connect(socket, SIGNAL(connected()), this, SLOT(socket_connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(socket_disconnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(socket_readyRead()));
    connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(socket_bytesWritten(qint64)));
    connect(socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(socket_error(QAbstractSocket::SocketError)));

    stream = new TelegramStream(socket);
    changeState(CONNECTING);
    socket->connectToHost(DC_IP, DC_PORT);
}

void TelegramClient::stop()
{
    if (!socket) return;

    socket->abort();
    socket->deleteLater();
    //socket = 0; //TODO After deletion
    //stream = 0; //TODO After deletion

    changeState(STOPPED);
    sync();
}

void TelegramClient::socket_connected()
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket was connected to" << socket->peerName() << ":" << socket->peerPort();
#endif

    if (!stream) return;

    //Init MTProto transport
    writeUInt8(*stream, 0xEF);

    //If we are authorized - skip to request DC config
    //FIXME TODO: It sends same packets every time, but not new's one, why?
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
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket was disconnected";
#endif

    stop();
}

void TelegramClient::socket_readyRead()
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket is ready to read";
#endif

    //Read message
    QByteArray messageArray = readMessage();
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket was" << messageArray.length() << "byte(s) readed";
#endif
    TelegramPacket message(messageArray);

    QVariant id;

    //If length of message is <= 4, it is an negative integer error.
    if (messageArray.length() <= 4) {
        readInt32(message, id);
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "Got an message error:" << id.toInt();
#endif
        emit gotMTError(id.toInt());
        return;
    }

    //Reading message id
    readUInt64(message, id);
    QByteArray plainData;

    if (!id.toULongLong()) {
#ifndef QT_NO_DEBUG_OUTPUT
        //qDebug() << "Got an plain message.";
#endif
        //auth_key_id == 0: it is a plain message.
        message.skipRawBytes(8); //message_id
        QVariant messageLength;
        readInt32(message, messageLength);
        message.readRawBytes(plainData, messageLength.toInt());
    } else {
#ifndef QT_NO_DEBUG_OUTPUT
        //qDebug() << "Got an MTProto message.";
#endif
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
        QVariant var;
        readUInt64(messagePlain, var); //remoteSalt
        readUInt64(messagePlain, var); //remoteId
        readInt64(messagePlain, var); //remoteMessageId
        confirm.append(var.toLongLong());
        readInt32(messagePlain, var); //remoteSequence
        readInt32(messagePlain, var); //messageLength
        messagePlain.readRawBytes(plainData, var.toInt());
    }

    handleMessage(plainData);
}

void TelegramClient::socket_bytesWritten(qint64 count)
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket was" << count << "byte(s) written";
#endif
}

void TelegramClient::socket_error(QAbstractSocket::SocketError error)
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket has got an error:" << error;
#endif

    emit gotSocketError(error);
}

void TelegramClient::sendPlainPacket(QByteArray raw)
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Sending plain object: ( id" << qFromLittleEndian<qint32>((uchar*) raw.mid(0, 4).data()) << ")";
#endif

    TelegramPacket packet;

    writeInt64(packet, 0);
    writeInt64(packet, ((QDateTime::currentDateTime().toUTC().toTime_t()) << 32));
    writeInt32(packet, raw.length());
    packet.writeRawBytes(raw);

    sendMessage(packet.toByteArray());
}

void TelegramClient::sendMessage(QByteArray raw)
{
    if (!stream) return;
    TelegramPacket packet;

    qint32 length = raw.length() / 4;
    if (length >= 127) {
        writeUInt8(packet, 127);
        writeUInt8(packet, (length & 0xFF));
        writeUInt8(packet, ((length >> 8) & 0xFF));
        writeUInt8(packet, ((length >> 16) & 0xFF));
    } else {
        writeUInt8(packet, length);
    }

    packet.writeRawBytes(raw);

    stream->writeRawBytes(packet.toByteArray());
}

QByteArray TelegramClient::readMessage()
{
    if (!stream) return QByteArray();

    QVariant var;
    readUInt8(*stream, var);

    qint32 length = var.toInt();
    if (length >= 127) {
        readUInt8(*stream, var);
        length = var.toInt();
        readUInt8(*stream, var);
        length += (var.toInt() << 8);
        readUInt8(*stream, var);
        length += (var.toInt() << 16);
    }

    QByteArray array;
    stream->readRawBytes(array, length * 4);
    return array;
}

void TelegramClient::handleMessage(QByteArray messageData)
{
    if (messageData.length() < 4) return;
    qint32 conId = qFromLittleEndian<qint32>((uchar*) messageData.mid(0, 4).data());

    HANDLE_METHOD method = HANDLE_METHODS.value(conId, (HANDLE_METHOD) 0);
    if (!method) {
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "Got an unknown TL object ( id" << conId << ")";
#endif
    } else {
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "Got a known TL object ( id" << conId << ")";
#endif
        (this->*method)(messageData);
    }

    emit handleResponse(messageData, conId);
}

void TelegramClient::handleResPQ(QByteArray data)
{
    changeState(DH_STEP_2);

    TelegramPacket packet(data);
    QVariant var;

    readMTResPQ(packet, var);
    TelegramObject resPQ = var.toMap();

    if (nonce != resPQ["nonce"].toByteArray()) {
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "SECURITY ERROR: nonces are mismatched!";
#endif
        return;
    }

    serverNonce = resPQ["server_nonce"].toByteArray();

    static QList<DHKey> keychain = QList<DHKey>() //<< DHKey("be6a71558ee577ff03023cfa17aab4e6c86383cff8a7ad38edb9fafe6f323f2d5106cbc8cafb83b869cffd1ccf121cd743d509e589e68765c96601e813dc5b9dfc4be415c7a6526132d0035ca33d6d6075d4f535122a1cdfe017041f1088d1419f65c8e5490ee613e16dbf662698c0f54870f0475fa893fc41eb55b08ff1ac211bc045ded31be27d12c96d8d3cfc6a7ae8aa50bf2ee0f30ed507cc2581e3dec56de94f5dc0a7abee0be990b893f2887bd2c6310a1e0a9e3e38bd34fded2541508dc102a9c9b4c95effd9dd2dfe96c29be647d6c69d66ca500843cfaed6e440196f1dbe0e2e22163c61ca48c79116fa77216726749a976a1c4b0944b5121e8c01", 6491968696586960280LL)
            //<< DHKey("b3f762b739be98f343eb1921cf0148cfa27ff7af02b6471213fed9daa0098976e667750324f1abcea4c31e43b7d11f1579133f2b3d9fe27474e462058884e5e1b123be9cbbc6a443b2925c08520e7325e6f1a6d50e117eb61ea49d2534c8bb4d2ae4153fabe832b9edf4c5755fdd8b19940b81d1d96cf433d19e6a22968a85dc80f0312f596bd2530c1cfb28b5fe019ac9bc25cd9c2a5d8a0f3a1c0c79bcca524d315b5e21b5c26b46babe3d75d06d1cd33329ec782a0f22891ed1db42a1d6c0dea431428bc4d7aabdcf3e0eb6fda4e23eb7733e7727e9a1915580796c55188d2596d2665ad1182ba7abf15aaa5a8b779ea996317a20ae044b820bff35b6e8a1", -5859577972006586033LL)
            //<< DHKey("bdf2c77d81f6afd47bd30f29ac76e55adfe70e487e5e48297e5a9055c9c07d2b93b4ed3994d3eca5098bf18d978d54f8b7c713eb10247607e69af9ef44f38e28f8b439f257a11572945cc0406fe3f37bb92b79112db69eedf2dc71584a661638ea5becb9e23585074b80d57d9f5710dd30d2da940e0ada2f1b878397dc1a72b5ce2531b6f7dd158e09c828d03450ca0ff8a174deacebcaa22dde84ef66ad370f259d18af806638012da0ca4a70baa83d9c158f3552bc9158e69bf332a45809e1c36905a5caa12348dd57941a482131be7b2355a5f4635374f3bd3ddf5ff925bf4809ee27c1e67d9120c5fe08a9de458b1b4a3c5d0a428437f2beca81f4e2d5ff", 1562291298945373506LL)
            //<< DHKey("aeec36c8ffc109cb099624685b97815415657bd76d8c9c3e398103d7ad16c9bba6f525ed0412d7ae2c2de2b44e77d72cbf4b7438709a4e646a05c43427c7f184debf72947519680e651500890c6832796dd11f772c25ff8f576755afe055b0a3752c696eb7d8da0d8be1faf38c9bdd97ce0a77d3916230c4032167100edd0f9e7a3a9b602d04367b689536af0d64b613ccba7962939d3b57682beb6dae5b608130b2e52aca78ba023cf6ce806b1dc49c72cf928a7199d22e3d7ac84e47bc9427d0236945d10dbd15177bab413fbf0edfda09f014c7a7da088dde9759702ca760af2b8e4e97cc055c617bd74c3d97008635b98dc4d621b4891da9fb0473047927", 847625836280919973LL)
            << DHKey("c150023e2f70db7985ded064759cfecf0af328e69a41daf4d6f01b538135a6f91f8f8b2a0ec9ba9720ce352efcf6c5680ffc424bd634864902de0b4bd6d49f4e580230e3ae97d95c8b19442b3c0a10d8f5633fecedd6926a7f6dab0ddb7d457f9ea81b8465fcd6fffeed114011df91c059caedaf97625f6c96ecc74725556934ef781d866b34f011fce4d835a090196e9a5f0e4449af7eb697ddb9076494ca5f81104a305b6dd27665722c46b60e5df680fb16b210607ef217652e60236c255f6a28315f4083a96791d7214bf64c1df4fd0db1944fb26a2a57031b32eee64ad15a8ba68885cde74a5bfc920f6abf59ba5c75506373e7130f9042da922179251f", -4344800451088585951LL);

    TelegramVector fingerprints = resPQ["server_public_key_fingerprints"].toList();
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Fingerprints:" << fingerprints;
#endif

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
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "SECURITY ERROR: none of fingerprints are matched!";
#endif
        return;
    }

    changeState(DH_STEP_3);

    QByteArray pqBytes = resPQ["pq"].toByteArray();
    quint64 pq = qFromBigEndian<quint64>((uchar*) pqBytes.data());
    quint32 p = findDivider(pq);
    quint32 q = pq / p;
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
    //TGOBJECT(pqInnerData, MTType::PQInnerDataDc);
    TGOBJECT(pqInnerData, PQINNERDATA_ID); //TODO: PQInnerDataDc doesn't works. Telegram, why?
    pqInnerData["pq"] = pqBytes;
    pqInnerData["p"] = pBytes;
    pqInnerData["q"] = qBytes;
    pqInnerData["nonce"] = nonce;
    pqInnerData["server_nonce"] = serverNonce;
    pqInnerData["new_nonce"] = newNonce = randomBytes(INT256_BYTES);
    //pqInnerData["dc"] = DC_NUMBER; //required by PQInnerDataDc

    TelegramPacket pqInnerDataPacket;
    writeMTPQInnerDataCustom(pqInnerDataPacket, pqInnerData);
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "PQInnerData:" << pqInnerDataPacket.toByteArray().toHex();
#endif

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
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "ReqDHParams:" << reqDHParamsPacket.toByteArray().toHex();
#endif
    sendPlainPacket(reqDHParamsPacket.toByteArray());
}

void TelegramClient::handleServerDHParamsOk(QByteArray data)
{
    changeState(DH_STEP_5);

    TelegramPacket packet(data);
    QVariant var;

    readMTServerDHParams(packet, var);
    TelegramObject serverDHParams = var.toMap();

    if (nonce != serverDHParams["nonce"].toByteArray()) {
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "SECURITY ERROR: nonces are mismatched!";
#endif
        return;
    }

    if (serverNonce != serverDHParams["server_nonce"].toByteArray()) {
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "SECURITY ERROR: server nonces are mismatched!";
#endif
        return;
    }

    QByteArray answer = serverDHParams["encrypted_answer"].toByteArray();

    if (answer.size() & 15) {
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "SECURITY ERROR: bad padding for encrypted answer!";
#endif
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

    Integer bb = toBig(randomBytes(256));
    Integer bg = toBig(gBytes);
    ModularArithmetic mr(toBig(serverDHInnerData["dh_prime"].toByteArray()));

    changeState(DH_STEP_7);

    //Sending setClientDHParams
    TGOBJECT(setClientDHParams, MTType::SetClientDHParamsMethod);
    setClientDHParams["nonce"] = nonce;
    setClientDHParams["server_nonce"] = serverNonce;

    //Generating encrypted data / ClientDHInnerData
    TGOBJECT(clientDHInnerData, MTType::ClientDHInnerData);
    clientDHInnerData["nonce"] = nonce;
    clientDHInnerData["server_nonce"] = serverNonce;
    clientDHInnerData["retry_id"] = retryId++;
    clientDHInnerData["g_b"] = fromBig(mr.Exponentiate(bg, bb));

    TelegramPacket clientDHInnerDataPacket;
    writeMTClientDHInnerData(clientDHInnerDataPacket, clientDHInnerData);
    QByteArray clientDHIDArray = clientDHInnerDataPacket.toByteArray();

    QByteArray clientDataWithHash = hashSHA1(clientDHIDArray) + clientDHIDArray;
    clientDataWithHash += randomBytes(16 - (clientDataWithHash.size() % 16));
    setClientDHParams["encrypted_data"] = encryptAES256IGE(clientDataWithHash, tempAesIv, tempAesKey);

    changeState(DH_STEP_8);

    QByteArray mainKey = fromBig(mr.Exponentiate(toBig(serverDHInnerData["g_a"].toByteArray()), bb));
    session.authKey = QByteArray(256 - mainKey.size(), 0) + mainKey;

    TelegramPacket setCDHPPacket;
    writeMTMethodSetClientDHParams(setCDHPPacket, setClientDHParams);
    sendPlainPacket(setCDHPPacket.toByteArray());
}

void TelegramClient::handleDhGenOk(QByteArray data)
{
    changeState(DH_STEP_9);

    TelegramPacket packet(data);
    QVariant var;

    readMTSetClientDHParamsAnswer(packet, var);
    TelegramObject dhGenOk = var.toMap();

    if (nonce != dhGenOk["nonce"].toByteArray()) {
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "SECURITY ERROR: nonces are mismatched!";
#endif
        return;
    }

    if (serverNonce != dhGenOk["server_nonce"].toByteArray()) {
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "SECURITY ERROR: server nonces are mismatched!";
#endif
        return;
    }

    QByteArray newNonceHash1 = dhGenOk["new_nonce_hash1"].toByteArray();
    if (session.authKey.calcNewNonceHash(newNonce, 1) != newNonceHash1) {
#ifndef QT_NO_DEBUG_OUTPUT
        qDebug() << "SECURITY ERROR: new nonce hashes are mismatched!";
#endif
        return;
    }

    session.salt = qFromBigEndian<quint64>((uchar*) xorArray(newNonce.mid(0, 8), serverNonce.mid(0, 8)).data());
    session.id = qFromBigEndian<qint64>((uchar*) randomBytes(INT64_BYTES).data());

    //Success.
    //TODO: handle dhgen errors, auth errors.
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Authorization succeeded.";
#endif

    changeState(AUTHORIZED);
}

//TODO: Use QSysInfo
QString osName()
{
#if defined(Q_OS_ANDROID)
    return QString("Android");
#elif defined(Q_OS_BLACKBERRY)
    return QString("Blackberry OS");
#elif defined(Q_OS_IOS)
    return QString("iOS");
#elif defined(Q_OS_MACOS)
    return QString("macOS");
#elif defined(Q_OS_WINCE)
    return QString("Windows CE");
#elif defined(Q_OS_WIN)
    return QString("Windows");
#elif defined(Q_OS_LINUX)
    return QString("Linux");
#elif defined(Q_OS_UNIX)
    return QString("Unix");
#elif defined(Q_OS_SYMBIAN)
    return QString("Symbian");
#else
    return QString("Unknown");
#endif
}

qint64 TelegramClient::getNewMessageId()
{
    lock.lock();
    qint64 time = QDateTime::currentDateTime().toUTC().toTime_t();
    qint64 newMessageId = ((time + session.timeOffset) << 32) | ((time % 1000) << 22);

    if (session.lastMessageId >= newMessageId) newMessageId = session.lastMessageId + 4;
    session.lastMessageId = newMessageId;
    lock.unlock();
    return newMessageId;
}

qint32 TelegramClient::generateSequence(bool confirmed)
{
    lock.lock();
    return confirmed ? session.sequence++ * 2 + 1 : session.sequence * 2;
    lock.unlock();
}

void TelegramClient::sendMTPacket(QByteArray raw, bool ignoreConfirm)
{
    if (state < AUTHORIZED) return;
    //TODO: add timer send timeout
    while (!ignoreConfirm && !confirm.isEmpty()) {
        TGOBJECT(msgsAck, MTType::MsgsAck);
        TelegramVector msgIds;
        qint32 count = qMin(confirm.size(), 8192);
        for (qint32 i = 0; i < count; ++i) {
            msgIds << confirm[i];
        }
        confirm.erase(confirm.begin(), confirm.begin() + count); //TODO: remove only on msgsAck recieved
        msgsAck["msg_ids"] = msgIds;

        sendMTObject<&writeMTMsgsAck>(msgsAck, true);
    }

    if (raw.isEmpty()) return;

#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Sending MTProto object: ( id" << qFromLittleEndian<qint32>((uchar*) raw.mid(0, 4).data()) << ")";
#endif

    qint64 messageId = getNewMessageId();
    messages.insert(messageId, raw);

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
}

void TelegramClient::initConnection()
{
    TGOBJECT(getDCC, TLType::HelpGetConfigMethod);

    TGOBJECT(initRequest, TLType::InitConnectionMethod);
    initRequest["api_id"] = APP_ID;
    initRequest["device_model"] = osName() + "-based Device";
    initRequest["system_version"] = osName();
    initRequest["app_version"] = QApplication::applicationVersion();
    initRequest["system_lang_code"] = "en"; //TODO
    initRequest["lang_pack"] = "";
    initRequest["lang_code"] = "en"; //TODO
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
    //sessionFile.sync(); //TODO: do we need to call it?
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Session synced.";
#endif
}

void TelegramClient::handleDhGenFail(QByteArray data)
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "DH generation failed.";
#endif

    emit gotDHError(true);
    stop();
}

void TelegramClient::handleDhGenRetry(QByteArray data)
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "DH generation requires a retry.";
#endif

    emit gotDHError(false);
    stop();
}
