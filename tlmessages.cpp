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

TLPeer::TLPeer(TLChat c) :
    type(c.isChannel() ? TLType::PeerChannel : TLType::PeerChat),
    id(c.id)
{

}

TLPeer::TLPeer(TLUser u) :
    type(TLType::PeerUser),
    id(u.id)
{

}

TLDialog::TLDialog(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    peer(var["peer"].toMap()),
    pinned(var["pinned"].toBool()),
    topMessage(var["top_message"].toInt())
{

}

TLFileLocation::TLFileLocation(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    volumeId(var["volume_id"].toLongLong()),
    localId(var["local_id"].toInt())
{

}

TLInputFileLocation::TLInputFileLocation(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    big(var["big"].toBool()),
    peer(var["peer"].toMap()),
    volumeId(var["volume_id"].toLongLong()),
    localId(var["local_id"].toInt())
{

}

TLInputFileLocation::TLInputFileLocation(TLFileLocation loc, TLInputPeer p, bool b) :
    type(TLType::InputPeerPhotoFileLocation),
    big(b),
    peer(p),
    volumeId(loc.volumeId),
    localId(loc.localId)
{

}

QVariantMap TLInputFileLocation::serialize()
{
    //TODO other types
    TGOBJECT(obj, type);

    switch (type) {
    case TLType::InputPeerPhotoFileLocation:
        if (big) obj["big"] = true; //because of flags.
        obj["peer"] = peer.serialize();
        obj["volume_id"] = volumeId;
        obj["local_id"] = localId;
        return obj;
    default:
        return obj;
    }
}

TLProfilePhoto::TLProfilePhoto(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    hasVideo(var["has_video"].toBool()),
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

bool TLChat::isChannel()
{
    return type == TLType::Channel || type == TLType::ChannelForbidden;
}

TLMessage::TLMessage(QVariantMap var) :
    type((TLType::Types) GETID(var)),
    id(var["id"].toInt()),
    date(var["date"].toInt()),
    peer(var["peer_id"].toMap()),
    message(var["message"].toString()),
    action(var["action"].toMap()),
    media(var["media"].toMap())
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

TLInputPeer::TLInputPeer(TLChat c) :
    type(c.isChannel() ? TLType::InputPeerChannel : TLType::InputPeerChat),
    id(c.id),
    messageId(),
    accessHash(c.accessHash),
    peer()
{

}

TLInputPeer::TLInputPeer(TLUser u) :
    type(TLType::InputPeerUser),
    id(u.id),
    messageId(),
    accessHash(u.accessHash),
    peer()
{

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
    self(var["self"].toBool()),
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

void TelegramClient::handleDialogs(QByteArray data, qint64 mtm)
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

void TelegramClient::handleDialogsSlice(QByteArray data, qint64 mtm)
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

void TelegramClient::getHistory(TLInputPeer peer, qint32 offsetId, qint32 offsetDate, qint32 addOffset, qint32 limit)
{
    TGOBJECT(getHistory, TLType::MessagesGetHistoryMethod);

    getHistory["peer"] = peer.serialize();
    getHistory["offset_id"] = offsetId;
    getHistory["offset_date"] = offsetDate;
    getHistory["add_offset"] = addOffset;
    getHistory["limit"] = limit;

    sendMTObject<&writeTLMethodMessagesGetHistory>(getHistory);
}

void TelegramClient::handleMessages(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLMessagesMessages(packet, var);
    TelegramObject obj = var.toMap();

    TelegramVector vector = obj["messages"].toList();
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

    emit gotMessages(obj["count"].toInt(), messages, chats, users, obj["next_rate"].toInt(), obj["offset_id_offset"].toInt(), obj["inexact"].toBool());
}

void TelegramClient::handleMessagesSlice(QByteArray data, qint64 mtm)
{
    handleMessages(data, mtm);
}

void TelegramClient::handleChannelMessages(QByteArray data, qint64 mtm)
{
    handleMessages(data, mtm);
}
