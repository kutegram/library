#include "telegramclient.h"
#include "tlschema.h"
#include <QList>
#include "crypto.h"
#include <QtCore>

qint64 TelegramClient::getDialogs(qint32 offsetDate, qint32 offsetId, TObject offsetPeer, qint32 limit)
{
    TGOBJECT(getDialogs, TLType::MessagesGetDialogsMethod);

    //getDialogs["exclude_pinned"] = true;
    getDialogs["folder_id"] = 0; //0 for main list, 1 for archived chats
    getDialogs["offset_date"] = offsetDate;
    getDialogs["offset_id"] = offsetId;
    if (!ID(offsetPeer))
        offsetPeer = getInputPeer(offsetPeer);
    getDialogs["offset_peer"] = offsetPeer;
    getDialogs["limit"] = limit;

    return sendMTObject< &writeTLMethodMessagesGetDialogs >(getDialogs);
}

void TelegramClient::handleDialogs(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLMessagesDialogs(packet, var);
    TelegramObject obj = var.toMap();

    dbInsert(obj["users"].toList());
    dbInsert(obj["chats"].toList());
    //dbInsert(obj["messages"].toList());
    //dbInsert(obj["dialogs"].toList());

    emit gotDialogs(mtm, 0, obj["dialogs"].toList(), obj["messages"].toList(), obj["chats"].toList(), obj["users"].toList());
}

void TelegramClient::handleDialogsSlice(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLMessagesDialogs(packet, var);
    TelegramObject obj = var.toMap();

    dbInsert(obj["users"].toList());
    dbInsert(obj["chats"].toList());
    //dbInsert(obj["messages"].toList());
    //dbInsert(obj["dialogs"].toList());

    emit gotDialogs(mtm, obj["count"].toInt(), obj["dialogs"].toList(), obj["messages"].toList(), obj["chats"].toList(), obj["users"].toList());
}

qint64 TelegramClient::getHistory(TObject peer, qint32 offsetId, qint32 offsetDate, qint32 addOffset, qint32 limit)
{
    TGOBJECT(getHistory, TLType::MessagesGetHistoryMethod);

    getHistory["peer"] = peer;
    getHistory["offset_id"] = offsetId;
    getHistory["offset_date"] = offsetDate;
    getHistory["add_offset"] = addOffset;
    getHistory["limit"] = limit;

    return sendMTObject<&writeTLMethodMessagesGetHistory>(getHistory);
}

void TelegramClient::handleMessages(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLMessagesMessages(packet, var);
    TelegramObject obj = var.toMap();

    dbInsert(obj["users"].toList());
    dbInsert(obj["chats"].toList());
    //dbInsert(obj["messages"].toList());

    emit gotMessages(mtm, obj["count"].toInt(), obj["messages"].toList(), obj["chats"].toList(), obj["users"].toList(), obj["next_rate"].toInt(), obj["offset_id_offset"].toInt(), obj["inexact"].toBool());
}

void TelegramClient::handleMessagesSlice(QByteArray data, qint64 mtm)
{
    handleMessages(data, mtm);
}

void TelegramClient::handleChannelMessages(QByteArray data, qint64 mtm)
{
    handleMessages(data, mtm);
}

qint64 TelegramClient::sendMessage(TObject peer, QString message)
{
    TGOBJECT(sendMessage, TLType::MessagesSendMessageMethod);

    sendMessage["peer"] = peer;
    sendMessage["message"] = message;
    sendMessage["random_id"] = qFromLittleEndian<qint64>((const uchar*) randomBytes(sizeof(qint64)).constData()); //TODO random id handling

    return sendMTObject<&writeTLMethodMessagesSendMessage>(sendMessage);
}

qint64 TelegramClient::getMessages(TVector ids)
{
    TGOBJECT(getMessages, TLType::MessagesGetMessagesMethod);

    getMessages["id"] = ids;

    return sendMTObject<&writeTLMethodMessagesGetMessages>(getMessages);
}
