#include "tlmessages.h"

#include "telegramclient.h"
#include "tlschema.h"
#include <QList>

#ifndef QT_NO_DEBUG_OUTPUT
#include <QtDebug>
#endif

TLPeer::TLPeer(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    id()
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
    type((TLType::Types) GETID(var)),
    peer(var["peer"].toMap()),
    pinned(var["flags"].toInt() & 4),
    topMessage(var["top_message"].toInt())
{

}

TLFileLocation::TLFileLocation(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    volumeId(var["volume_id"].toLongLong()),
    localId(var["local_id"].toInt())
{

}

TLProfilePhoto::TLProfilePhoto(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    hasVideo(var["flags"].toInt() & 1),
    dcId(var["dc_id"].toInt()),
    photoId(var["photo_id"].toInt()),
    photoSmall(var["photo_small"].toMap()),
    photoBig(var["photo_big"].toMap())
{

}

TLChat::TLChat(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    id(var["id"].toInt()),
    title(var["title"].toString()),
    accessHash(var["access_hash"].toLongLong()),
    photo(var["photo"].toMap())
{

}

TLMessage::TLMessage(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    id(var["id"].toInt()),
    date(var["date"].toInt()),
    peer(var["peer_id"].toMap())
{

}

TLInputPeer::TLInputPeer(TLPeer p, qint64 aH) :
    type(),
    id(),
    messageId(),
    accessHash(),
    peer()
{
    switch (p.type) {
    case TLType::PeerChannel:
        type = TLType::InputPeerChannel;
        id = p.id;
        accessHash = aH;
        break;
    case TLType::PeerUser:
        type = TLType::InputPeerUser;
        id = p.id;
        accessHash = aH;
        break;
    case TLType::PeerChat:
        type = TLType::InputPeerChat;
        id = p.id;
        break;
    default:
        type = TLType::InputPeerEmpty;
        break;
    }
}

TLInputPeer::TLInputPeer(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    id(),
    messageId(var["msg_id"].toLongLong()),
    accessHash(var["access_hash"].toLongLong()),
    peer(var["peer"].toMap())
{
    switch (GETID(var)) {
    case TLType::InputPeerChat:
        id = var["chat_id"].toInt();
        break;
    case TLType::InputPeerUser:
    case TLType::InputPeerUserFromMessage:
        id = var["user_id"].toInt();
        break;
    case TLType::InputPeerChannel:
    case TLType::InputPeerChannelFromMessage:
        id = var["channel_id"].toInt();
        break;
    }
}

QVariantMap TLInputPeer::serialize()
{
    TGOBJECT(obj, type);

    switch (type) {
    case TLType::InputPeerChannelFromMessage:
    {
        obj["channel_id"] = id;
        obj["msg_id"] = messageId;
        obj["peer"] = peer;
        return obj;
    }
    case TLType::InputPeerUserFromMessage:
    {
        obj["user_id"] = id;
        obj["msg_id"] = messageId;
        obj["peer"] = peer;
        return obj;
    }
    case TLType::InputPeerChannel:
    {
        obj["channel_id"] = id;
        obj["access_hash"] = accessHash;
        return obj;
    }
    case TLType::InputPeerUser:
    {
        obj["user_id"] = id;
        obj["access_hash"] = accessHash;
        return obj;
    }
    case TLType::InputPeerChat:
    {
        obj["chat_id"] = id;
        return obj;
    }
    case TLType::InputPeerSelf:
    {
        return obj;
    }
    default:
    {
        TGOBJECT(empty, TLType::InputPeerEmpty);
        return empty;
    }
    }
}

TLUser::TLUser(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    id(var["id"].toInt()),
    self(var["flags"].toInt() & 1024),
    firstName(var["first_name"].toString()),
    lastName(var["last_name"].toString()),
    username(var["username"].toString()),
    accessHash(var["access_hash"].toLongLong()),
    photo(var["photo"].toMap())
{

}

void TelegramClient::getDialogs(qint32 offsetDate, qint32 offsetId, TLInputPeer offsetPeer, qint32 limit)
{
    TGOBJECT(getDialogs, TLType::MessagesGetDialogsMethod);

    //getDialogs["exclude_pinned"] = true;
    getDialogs["folder_id"] = 0; //0 for main list, 1 for archived chats
    getDialogs["offset_date"] = offsetDate;
    getDialogs["offset_id"] = offsetId;
    getDialogs["offset_peer"] = offsetPeer.serialize();
    getDialogs["limit"] = limit;

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

    emit gotDialogs(0, dialogs, messages, chats, users);
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

    emit gotDialogs(obj["count"].toInt(), dialogs, messages, chats, users);
}
