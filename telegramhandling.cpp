#include "telegramclient.h"

#include "mtschema.h"

void TelegramClient::handleBadServerSalt(QByteArray data)
{
    TelegramPacket packet(data);
    QVariant var;

    readMTBadMsgNotification(packet, var);
    TelegramObject badServerSalt = var.toMap();

    session.salt = badServerSalt["new_server_salt"].toULongLong();
    sendMTPacket(messages[badServerSalt["bad_msg_id"].toLongLong()]);
}

void TelegramClient::handleRpcResult(QByteArray data)
{
    //TelegramPacket packet(data);
    //QVariant var;

    //readMTRpcResult(packet, var);
    //TelegramObject rpcResult = var.toMap();
}
