#include "telegramclient.h"
#include "tlschema.h"

void TelegramClient::handleUpdateLoginToken(QByteArray data, qint64 mtm)
{
    exportLoginToken();
}

void TelegramClient::handleUpdateNewMessage(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLUpdate(packet, var);
    TelegramObject obj = var.toMap();

    emit gotNewMessage(mtm, TLMessage(obj["message"].toMap()));
}

void TelegramClient::handleUpdateNewChannelMessage(QByteArray data, qint64 mtm)
{
    handleUpdateNewMessage(data, mtm);
}
