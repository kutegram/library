#include "telegramclient.h"

#include "mtschema.h"
#include "cryptopp/gzip.h"

using namespace CryptoPP;

void TelegramClient::handleBadServerSalt(QByteArray data)
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

    emit gotMessageError(badServerSalt["error_code"].toInt());
}

void TelegramClient::handleRpcResult(QByteArray data)
{
    data.remove(0, 12);
    handleMessage(data);
}

void TelegramClient::handleGzipPacked(QByteArray data)
{
    TelegramPacket packet(data);
    packet.skipRawBytes(4); //conId

    QVariant var;
    readByteArray(packet, var);
    data = var.toByteArray();

    Gunzip unzipper;
    unzipper.Put((const byte*) data.constData(), data.size(), true);
    unzipper.MessageEnd();

    data.resize(unzipper.MaxRetrievable());
    unzipper.Get((byte*) data.data(), data.size());

    handleMessage(data);
}

void TelegramClient::handleMsgContainer(QByteArray data)
{
    TelegramPacket packet(data);
    QVariant var;

    readInt32(packet, var); //conId
    if (var.toInt() != VECTOR_ID) return;
    readInt32(packet, var); //size
    qint32 size = var.toInt();
    QByteArray array;
    for (qint32 i = 0; i < size; ++i) {
        readInt64(packet, var); //msgId
        readInt32(packet, var); //seqNo
        readInt32(packet, var); //size
        packet.readRawBytes(array, var.toInt());
        handleMessage(array);
    }
}

void TelegramClient::handleBadMsgNotification(QByteArray data)
{
    TelegramPacket packet(data);
    QVariant var;

    readMTBadMsgNotification(packet, var);
    TelegramObject badMsgNotify = var.toMap();

#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Got a bad msg notification:" << badMsgNotify["error_code"].toInt();
#endif

    emit gotMessageError(badMsgNotify["error_code"].toInt());
}

void TelegramClient::handleNewSessionCreated(QByteArray data)
{
    changeState(AUTHORIZED);

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

void TelegramClient::handleRpcError(QByteArray data)
{
    TelegramPacket packet(data);
    QVariant var;

    readMTRpcError(packet, var);
    TelegramObject rpcError = var.toMap();


#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Got RPC error:" << rpcError["error_code"].toInt() << rpcError["error_message"].toString();
#endif

    emit gotRPCError(rpcError["error_code"].toInt(), rpcError["error_message"].toString());

    if (rpcError["error_message"].toString() == "AUTH_KEY_UNREGISTERED") {
        stop();
        session.authKey = AuthKey();
        sync();
    }
}

void TelegramClient::handleConfig(QByteArray data)
{
    changeState(INITED);

#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Got a config. Connection inited.";
#endif
    sync();
}

void TelegramClient::handleMsgCopy(QByteArray data)
{
    TelegramPacket packet(data);
    QVariant var;

    readInt32(packet, var); //conId
    readInt64(packet, var); //msgId
    readInt32(packet, var); //seqNo
    readInt32(packet, var); //size
    QByteArray array;
    packet.readRawBytes(array, var.toInt());
    handleMessage(array);
}
