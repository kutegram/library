#include "telegramclient.h"

#include "mtschema.h"
#include "cryptopp/gzip.h"
#include <QStringList>

using namespace CryptoPP;

void TelegramClient::handleBadServerSalt(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readMTBadMsgNotification(packet, var);
    TelegramObject badServerSalt = var.toMap();

#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Got a bad salt notification:" << badServerSalt["error_code"].toInt();
#endif

    session.salt = badServerSalt["new_server_salt"].toULongLong();
    sendMTPacket(messages[badServerSalt["bad_msg_id"].toLongLong()]);

    emit gotMessageError(mtm, badServerSalt["error_code"].toInt());
}

void TelegramClient::handleRpcResult(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    packet.skipRawBytes(4); //conId

    QVariant var;
    readInt64(packet, var);

    data.remove(0, 12);
    handleMessage(data, var.toLongLong());
}

void TelegramClient::handleGzipPacked(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    packet.skipRawBytes(4); //conId

    QVariant var;
    readByteArray(packet, var);
    data = var.toByteArray();

    Gunzip unzipper;
    unzipper.Put((const byte*) data.constData(), data.size());
    unzipper.MessageEnd();

    data.reserve(unzipper.MaxRetrievable());
    data.resize(unzipper.MaxRetrievable());
    unzipper.Get((byte*) data.data(), data.size());

    handleMessage(data, mtm);
}

void TelegramClient::handleMsgContainer(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readInt32(packet, var); //conId
    readInt32(packet, var); //size
    qint32 size = var.toInt();
    QByteArray array;
    for (qint32 i = 0; i < size; ++i) {
        readInt64(packet, var); //msgId
        readInt32(packet, var); //seqNo
        readInt32(packet, var); //size
        packet.readRawBytes(array, var.toInt());
        handleMessage(array, mtm);
    }
}

void TelegramClient::handleBadMsgNotification(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readMTBadMsgNotification(packet, var);
    TelegramObject badMsgNotify = var.toMap();

#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Got a bad msg notification:" << badMsgNotify["error_code"].toInt();
#endif

    emit gotMessageError(mtm, badMsgNotify["error_code"].toInt());
}

void TelegramClient::handleNewSessionCreated(QByteArray data, qint64 mtm)
{
    //changeState(AUTHORIZED);

    TelegramPacket packet(data);
    QVariant var;

    readMTNewSession(packet, var);
    TelegramObject newSessionCreated = var.toMap();
    session.salt = newSessionCreated["server_salt"].toULongLong();

#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "New session created.";
#endif
    sync();
}

void TelegramClient::handleRpcError(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readMTRpcError(packet, var);
    TelegramObject rpcError = var.toMap();


#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Got RPC error:" << rpcError["error_code"].toInt() << rpcError["error_message"].toString();
#endif

    emit gotRPCError(mtm, rpcError["error_code"].toInt(), rpcError["error_message"].toString());

    QString errorMsg = rpcError["error_message"].toString();

    if (errorMsg.startsWith("PHONE_MIGRATE_")) {
        reconnectToDC(errorMsg.split("PHONE_MIGRATE_").last().toInt());
        //TODO resend request
    }
    else if (errorMsg.startsWith("FILE_MIGRATE_")) {
        reconnectToDC(errorMsg.split("FILE_MIGRATE_").last().toInt());
        //TODO resend request
    }
    else if (errorMsg.startsWith("USER_MIGRATE_")) {
        reconnectToDC(errorMsg.split("USER_MIGRATE_").last().toInt());
        //TODO resend request
    }
    else if (errorMsg.startsWith("NETWORK_MIGRATE_")) {
        reconnectToDC(errorMsg.split("NETWORK_MIGRATE_").last().toInt());
        //TODO resend request
    }
    else if (errorMsg == "AUTH_KEY_UNREGISTERED") {
        //TODO reauth
        reset();
    }

    //TODO handle errors
    //PHONE_CODE_INVALID
    //SESSION_PASSWORD_NEEDED
    //FLOOD_WAIT_
}

void TelegramClient::handleConfig(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLConfig(packet, var);
    dcConfig = var.toMap();

    changeState(INITED);

    if (session.migrateDc) {
        TGOBJECT(imp, TLType::AuthImportAuthorizationMethod);
        imp["id"] = session.importId;
        imp["bytes"] = session.importBytes;

        sendMTObject<&writeTLMethodAuthImportAuthorization>(imp);
    }
    else if (isLoggedIn()) {
        changeState(LOGGED_IN);
    }

#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Got a config. Connection inited.";
#endif

    sync();
}

void TelegramClient::handleMsgCopy(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readInt32(packet, var); //conId
    readInt64(packet, var); //msgId
    readInt32(packet, var); //seqNo
    readInt32(packet, var); //size
    QByteArray array;
    packet.readRawBytes(array, var.toInt());
    handleMessage(array, mtm);
}
