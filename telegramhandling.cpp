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
}

void TelegramClient::handleRpcResult(QByteArray data)
{
    data.remove(0, 12);
    handleMessage(data);
}

void TelegramClient::handleGzipPacked(QByteArray data)
{
    data.remove(0, 4);
    Gunzip unzipper;
    unzipper.Put((const byte*) data.constData(), data.size(), true);
    unzipper.MessageEnd();

    QByteArray decompressed;
    decompressed.resize(unzipper.MaxRetrievable());
    unzipper.Get((byte*) decompressed.data(), decompressed.size());

    handleMessage(decompressed);
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
}

void TelegramClient::handleNewSessionCreated(QByteArray data)
{
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

//    if (rpcError["error_message"].toString() == "AUTH_KEY_UNREGISTERED") {
//        _session.keyAuthenticated = false;
//        sync();
//    }

#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Got RPC error:" << rpcError["error_code"].toInt() << rpcError["error_message"].toString();
#endif
}

void TelegramClient::handleConfig(QByteArray data)
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Got a config. Connection inited.";
#endif
    sync();
}
