#include "tlmessages.h"

#include "telegramclient.h"
#include "tlschema.h"
#include <QList>

#ifndef QT_NO_DEBUG_OUTPUT
#include <QtDebug>
#endif

TLPeer::TLPeer(QVariantMap var)
{
    //TODO
}

TLDialog::TLDialog(QVariantMap var) :
    peer(var)
{
    //TODO
}

TLChat::TLChat(QVariantMap var)
{
    //TODO
}

TLChannel::TLChannel(QVariantMap var)
{
    //TODO
}

TLMessage::TLMessage(QVariantMap var)
{
    //TODO
}

TLInputPeer::TLInputPeer(QVariantMap var)
{
    //TODO
}

TLUser::TLUser(QVariantMap var)
{
    //TODO
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
