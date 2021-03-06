#include "telegramclient.h"
#include "tlschema.h"
#include <QDebug>

void TelegramClient::handleUpdatesTooLong(QByteArray data, qint64 mtm)
{
    getUpdatesDifference();
}

void TelegramClient::handleUpdateShortMessage(QByteArray data, qint64 mtm)
{
    //Update about outcoming (incoming) user message.

    TelegramPacket packet(data);
    QVariant var;

    readTLUpdates(packet, var);
    TelegramObject obj = var.toMap();

    if (this->updatePts + obj["pts_count"].toInt() == obj["pts"].toInt()) {
        applyUpdate(obj, mtm);

        this->updatePts = qMax(this->updatePts, obj["pts"].toInt());
        this->updateDate = qMax(this->updateDate, obj["date"].toInt());
    } else if (this->updatePts + obj["pts_count"].toInt() < obj["pts"].toInt()) {
        getUpdatesDifference();
    } else {
        qDebug() << "[UPD] Got an UpdateShortMessage that already applied. Weird.";
    }
}

void TelegramClient::handleUpdateShortChatMessage(QByteArray data, qint64 mtm)
{
    //Update about incoming chat message.

    TelegramPacket packet(data);
    QVariant var;

    readTLUpdates(packet, var);
    TelegramObject obj = var.toMap();

    if (this->updatePts + obj["pts_count"].toInt() == obj["pts"].toInt()) {
        applyUpdate(obj, mtm);

        this->updatePts = qMax(this->updatePts, obj["pts"].toInt());
        this->updateDate = qMax(this->updateDate, obj["date"].toInt());
    } else if (this->updatePts + obj["pts_count"].toInt() < obj["pts"].toInt()) {
        getUpdatesDifference();
    } else {
        qDebug() << "[UPD] Got an UpdateShortChatMessage that already applied. Weird.";
    }
}

void TelegramClient::handleUpdateShort(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLUpdates(packet, var);
    TelegramObject obj = var.toMap();

    applyUpdate(obj["update"].toMap(), mtm);
    this->updateDate = qMax(this->updateDate, obj["date"].toInt());
}

void TelegramClient::handleUpdatesCombined(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLUpdates(packet, var);
    TelegramObject obj = var.toMap();

    if (this->updateSeq + 1 == obj["seq_start"].toInt()) {
        TelegramVector updates = obj["updates"].toList();
        for (qint32 i = 0; i < updates.size(); ++i)
            applyUpdate(updates[i].toMap(), mtm);

        this->updateSeq = qMax(this->updateSeq, obj["seq"].toInt());
        this->updateDate = qMax(this->updateDate, obj["date"].toInt());
    } else if (this->updateSeq + 1 < obj["seq_start"].toInt()) {
        getUpdatesDifference();
    } else {
        qDebug() << "[UPD] Got an UpdatesCombined that already applied. Weird.";
    }
}

void TelegramClient::handleUpdates(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLUpdates(packet, var);
    TelegramObject obj = var.toMap();

    //Sequence always is zero.
//    if (this->updateSeq + 1 == obj["seq"].toInt()) {
    TelegramVector updates = obj["updates"].toList();
    for (qint32 i = 0; i < updates.size(); ++i)
        applyUpdate(updates[i].toMap(), mtm);

    this->updateSeq = qMax(this->updateSeq, obj["seq"].toInt());
    this->updateDate = qMax(this->updateDate, obj["date"].toInt());
//    } else if (this->updateSeq + 1 < obj["seq"].toInt()) {
//        getUpdatesDifference();
//    } else {
//        qDebug() << "[UPD] Got an Updates that already applied. Weird.";
//    }
}

void TelegramClient::handleUpdateShortSentMessage(QByteArray data, qint64 mtm)
{
    //Update about sent message.

    TelegramPacket packet(data);
    QVariant var;

    readTLUpdates(packet, var);
    TelegramObject obj = var.toMap();

    if (this->updatePts + obj["pts_count"].toInt() == obj["pts"].toInt()) {
        //TODO: handle this update.

        this->updatePts = qMax(this->updatePts, obj["pts"].toInt());
        this->updateDate = qMax(this->updateDate, obj["date"].toInt());
    } else if (this->updatePts + obj["pts_count"].toInt() < obj["pts"].toInt()) {
        getUpdatesDifference();
    } else {
        qDebug() << "[UPD] Got an UpdateShortSentMessage that already applied. Weird.";
    }
}

void TelegramClient::applyUpdate(TelegramObject obj, qint64 mtm)
{
    switch (GETID(obj)) {
    case TLType::UpdateNewMessage:
    case TLType::UpdateNewChannelMessage:
        emit updateNewMessage(obj["message"].toMap(), obj["pts"].toInt(), obj["pts_count"].toInt());
        break;
    case TLType::UpdateEditMessage:
    case TLType::UpdateEditChannelMessage:
        emit updateEditMessage(obj["message"].toMap(), obj["pts"].toInt(), obj["pts_count"].toInt());
        break;
    case TLType::UpdateDeleteMessages:
    case TLType::UpdateDeleteChannelMessages:
        emit updateDeleteMessages(obj["messages"].toList(), obj["pts"].toInt(), obj["pts_count"].toInt());
        break;
    case TLType::UpdateShortMessage:
    {
        ID_PROPERTY(obj) = TLType::Message;

        TOBJECT(newPeer, TLType::PeerUser);
        newPeer["user_id"] = obj["user_id"];
        obj["from_id"] = obj["peer_id"] = newPeer;

        emit updateNewMessage(obj, obj["pts"].toInt(), obj["pts_count"].toInt());
        break;
    }
    case TLType::UpdateShortChatMessage:
    {
        ID_PROPERTY(obj) = TLType::Message;

        TOBJECT(newUserPeer, TLType::PeerUser);
        newUserPeer["user_id"] = obj["from_id"];
        obj["from_id"] = newUserPeer;

        TOBJECT(newChatPeer, TLType::PeerChat);
        newChatPeer["chat_id"] = obj["chat_id"];
        obj["peer_id"] = newChatPeer;

        emit updateNewMessage(obj, obj["pts"].toInt(), obj["pts_count"].toInt());
        break;
    }
    default:
        qDebug() << "[UPD] Got an unhandled update with ID:" << QString::number((quint32) GETID(obj), 16);
        break;
    }
}

//void TelegramClient::handleUpdateLoginToken(QByteArray data, qint64 mtm)
//{
//    exportLoginToken();
//}

//void TelegramClient::handleUpdateNewMessage(QByteArray data, qint64 mtm)
//{
//    TelegramPacket packet(data);
//    QVariant var;

//    readTLUpdate(packet, var);
//    TelegramObject obj = var.toMap();

//    emit gotNewMessage(mtm, TLMessage(obj["message"].toMap()));
//}

//void TelegramClient::handleUpdateNewChannelMessage(QByteArray data, qint64 mtm)
//{
//    handleUpdateNewMessage(data, mtm);
//}
