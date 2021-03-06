#include "telegramclient.h"

#include "mtschema.h"
#include <QStringList>
#include <QDebug>
#include <QtEndian>
#include <qcompressor.h>
#include "tlschema.h"

qint64 TelegramClient::pingDelayDisconnect(qint64 ping_id, qint32 delay)
{
    qDebug() << "[PING] Sending ID:" << ping_id << "with delay:" << delay;

    TGOBJECT(pingDD, MTType::PingDelayDisconnectMethod);
    pingDD["ping_id"] = ping_id;
    pingDD["disconnect_delay"] = delay;

    return sendMTObject<&writeMTMethodPingDelayDisconnect>(pingDD);
}

void TelegramClient::handlePong(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readMTPong(packet, var);
    TelegramObject obj = var.toMap();

    qDebug() << "[PONG] Got ID:" << obj["ping_id"].toLongLong() << "from message ID:" << obj["msg_id"].toLongLong();
}

void TelegramClient::handleBadServerSalt(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readMTBadMsgNotification(packet, var);
    TelegramObject badServerSalt = var.toMap();

    qDebug() << "Got a bad salt notification:" << badServerSalt["error_code"].toInt();

    session.salt = badServerSalt["new_server_salt"].toULongLong();

    sendMTPacket(messages[badServerSalt["bad_msg_id"].toLongLong()]);
    messages.remove(badServerSalt["bad_msg_id"].toLongLong());
    messagesConIds.remove(badServerSalt["bad_msg_id"].toLongLong());

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

    messages.remove(mtm);
    messagesConIds.remove(mtm);
}

void TelegramClient::handleGzipPacked(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    packet.skipRawBytes(4); //conId

    QVariant var;
    readByteArray(packet, var);

    if (!QCompressor::gzipDecompress(var.toByteArray(), data)) {
        qDebug() << "[ERROR] Gzip decompression error.";
        return;
    }

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

    qDebug() << "Got a bad msg notification:" << badMsgNotify["error_code"].toInt();

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

    qDebug() << "New session created.";
    sync();
}

void TelegramClient::handleRpcError(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readMTRpcError(packet, var);
    TelegramObject rpcError = var.toMap();
    qDebug() << "Got RPC error:" << QString::number((quint32) messagesConIds[mtm], 16) << rpcError["error_code"].toInt() << rpcError["error_message"].toString();

    QString errorMsg = rpcError["error_message"].toString();

    bool handled = true;

    if (errorMsg.startsWith("PHONE_MIGRATE_")) {
        reconnectToDC(errorMsg.split("PHONE_MIGRATE_").last().toInt());
        resendRequired.append(messages[mtm]);
    }
    else if (errorMsg.startsWith("FILE_MIGRATE_")) {
        reconnectToDC(errorMsg.split("FILE_MIGRATE_").last().toInt());
        resendRequired.append(messages[mtm]);
    }
    else if (errorMsg.startsWith("USER_MIGRATE_")) {
        reconnectToDC(errorMsg.split("USER_MIGRATE_").last().toInt());
        resendRequired.append(messages[mtm]);
    }
    else if (errorMsg.startsWith("NETWORK_MIGRATE_")) {
        reconnectToDC(errorMsg.split("NETWORK_MIGRATE_").last().toInt());
        resendRequired.append(messages[mtm]);
    }
    else if (errorMsg.startsWith("INPUT_METHOD_INVALID_")) {
        //TODO
    }
    else if (errorMsg == "AUTH_KEY_UNREGISTERED" || errorMsg == "SESSION_REVOKED") {
        reset();
    }

    emit gotRPCError(mtm, rpcError["error_code"].toInt(), rpcError["error_message"].toString(), handled);

    //TODO handle errors
    //PHONE_CODE_INVALID
    //SESSION_PASSWORD_NEEDED
    //FLOOD_WAIT_

    messages.remove(mtm);
    messagesConIds.remove(mtm);
}

void TelegramClient::handleConfig(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLConfig(packet, var);
    dcConfig = var.toMap();

    changeState(INITED);

    if (session.importId && !session.importBytes.isEmpty()) {
        TGOBJECT(imp, TLType::AuthImportAuthorizationMethod);
        imp["id"] = session.importId;
        imp["bytes"] = session.importBytes;

        sendMTObject<&writeTLMethodAuthImportAuthorization>(imp);
    }
    else if (isLoggedIn()) {
        changeState(LOGGED_IN);
    }

    qDebug() << "Got a config. Connection inited.";

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
