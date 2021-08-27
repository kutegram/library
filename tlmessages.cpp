#include "tlmessages.h"

#include "telegramclient.h"
#include "tlschema.h"
#include <QList>

#ifndef QT_NO_DEBUG_OUTPUT
#include <QtDebug>
#endif

TLPeer::TLPeer(QVariantMap var) :
    id(),
    type((TLType::Types) GETID(var))
{
    switch (GETID(var)) {
    case TLType::PeerUser:
        id = var["user_id"].toInt();
        break;
    case TLType::PeerChat:
        id = var["chat_id"].toInt();
        break;
    case TLType::PeerChannel:
        id = var["channel_id"].toInt();
        break;
    }
}

TLDialog::TLDialog(QVariantMap var) :
    peer(var["peer"].toMap()),
    pinned(var["flags"].toInt() & 4),
    topMessage(var["top_message"].toInt()),
    type((TLType::Types) GETID(var))
{

}

TLChat::TLChat(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    id(var["id"].toInt()),
    title(var["title"].toString())
{

}

TLMessage::TLMessage(QVariantMap var)
{
    //TODO
}

TLInputPeer::TLInputPeer(QVariantMap var)
{
    //TODO
}

TLUser::TLUser(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    id(var["id"].toInt()),
    self(var["flags"].toInt() & 1024),
    firstName(var["first_name"].toString()),
    lastName(var["last_name"].toString()),
    username(var["username"].toString())
{

}

void TelegramClient::getDialogs()
{
    TGOBJECT(getDialogs, TLType::MessagesGetDialogsMethod);

    //getDialogs["exclude_pinned"] = true;
    getDialogs["folder_id"] = 0; //0 for main list, 1 for archived chats

    TGOBJECT(offsetPeer, TLType::InputPeerEmpty);

    getDialogs["offset_peer"] = offsetPeer;
    getDialogs["limit"] = 40;

    sendMTObject< &writeTLMethodMessagesGetDialogs >(getDialogs);
}

void TelegramClient::handleDialogs(QByteArray data)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLMessagesDialogs(packet, var);
    TelegramObject obj = var.toMap();

    TelegramVector vector = obj["dialogs"].toList();
    QList<TLDialog> dialogs;
    for (qint32 i = 0; i < vector.size(); ++i) {
        dialogs << TLDialog(vector[i].toMap());
    }

    vector = obj["messages"].toList();
    QList<TLMessage> messages;
    for (qint32 i = 0; i < vector.size(); ++i) {
        messages << TLMessage(vector[i].toMap());
    }

    vector = obj["chats"].toList();
    QList<TLChat> chats;
    for (qint32 i = 0; i < vector.size(); ++i) {
        chats << TLChat(vector[i].toMap());
    }

    vector = obj["users"].toList();
    QList<TLUser> users;
    for (qint32 i = 0; i < vector.size(); ++i) {
        users << TLUser(vector[i].toMap());
    }

    emit gotDialogs(dialogs.size(), dialogs, messages, chats, users);
}

void TelegramClient::handleDialogsSlice(QByteArray data)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLMessagesDialogs(packet, var);
    TelegramObject obj = var.toMap();

    TelegramVector vector = obj["dialogs"].toList();
    QList<TLDialog> dialogs;
    for (qint32 i = 0; i < vector.size(); ++i) {
        dialogs << TLDialog(vector[i].toMap());
    }

    vector = obj["messages"].toList();
    QList<TLMessage> messages;
    for (qint32 i = 0; i < vector.size(); ++i) {
        messages << TLMessage(vector[i].toMap());
    }

    vector = obj["chats"].toList();
    QList<TLChat> chats;
    for (qint32 i = 0; i < vector.size(); ++i) {
        chats << TLChat(vector[i].toMap());
    }

    vector = obj["users"].toList();
    QList<TLUser> users;
    for (qint32 i = 0; i < vector.size(); ++i) {
        users << TLUser(vector[i].toMap());
    }

    emit gotDialogs(qMax(obj["count"].toInt(), dialogs.size()), dialogs, messages, chats, users);
}
