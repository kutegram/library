#include "telegramstream.h"
#include "tlschema.h"
#include <QDebug>

using namespace TLType;

QVariant getPeerId(TObject obj)
{
    switch (ID(obj)) {
    case PeerUser:
        return obj["user_id"];
    case PeerChat:
        return obj["chat_id"];
    case PeerChannel:
        return obj["channel_id"];
    case InputUserEmpty:
        return 0;
    case InputUserSelf:
        return 0; //TODO: current account ID
    case InputUser:
        return obj["user_id"];
    case InputUserFromMessage:
        return obj["user_id"];
    case InputPeerEmpty:
        return 0;
    case InputPeerSelf:
        return 0; //TODO: current account ID
    case InputPeerChat:
        return obj["chat_id"];
    case InputPeerUser:
        return obj["user_id"];
    case InputPeerChannel:
        return obj["channel_id"];
    case InputPeerUserFromMessage:
        return obj["user_id"];
    case InputPeerChannelFromMessage:
        return obj["channel_id"];
    case TLType::User:
        return obj["id"];
    case UserEmpty:
        return obj["id"];
    case Chat:
        return obj["id"];
    case ChatEmpty:
        return obj["id"];
    case ChatForbidden:
        return obj["id"];
    case Channel:
        return obj["id"];
    case ChannelForbidden:
        return obj["id"];
    default:
        qWarning() << "[getPeerId] Invalid object." << ID(obj);
        return QVariant();
    }
}

TObject getInputPeer(TObject obj)
{
    switch (ID(obj)) {
    case ChatEmpty:
    case Chat:
    case ChatForbidden:
    {
        TOBJECT(v, InputPeerChat);

        v["chat_id"] = obj["id"];

        return v;
    }
    case Channel:
    case ChannelForbidden:
    {
        TOBJECT(v, InputPeerChannel);

        v["channel_id"] = obj["id"];
        v["access_hash"] = obj["access_hash"];

        return v;
    }
    case TLType::User:
    case UserEmpty:
    {
        TOBJECT(v, InputPeerUser);

        v["user_id"] = obj["id"];
        v["access_hash"] = obj["access_hash"];

        return v;
    }
    default:
    {
        qWarning() << "[getInputPeer] Empty object." << ID(obj);

        TOBJECT(v, InputPeerEmpty);

        return v;
    }
    }
}

TObject getInputMessage(TObject obj)
{
    switch (ID(obj)) {
    case MessageEmpty:
    case Message:
    case MessageService:
    {
        TOBJECT(v, InputMessageID);

        v["id"] = obj["id"];

        return v;
    }
    case MessageReplyHeader:
    {
        TOBJECT(v, InputMessageReplyTo);

        v["id"] = obj["id"];

        return v;
    }
    default:
        qWarning() << "[getInputMessage] Invalid object." << ID(obj);
        return TObject();
    }
}

qint32 commonPeerType(TObject peer)
{
    switch (ID(peer)) {
    case InputUserEmpty:
    case InputUserSelf:
    case InputUser:
    case InputUserFromMessage:
    case TLType::User:
    case UserEmpty:
    case PeerUser:
    case InputPeerEmpty:
    case InputPeerSelf:
    case InputPeerUser:
    case InputPeerUserFromMessage:
        return TLType::User;
    case Chat:
    case ChatEmpty:
    case ChatForbidden:
    case Channel:
    case ChannelForbidden:
    case PeerChat:
    case PeerChannel:
    case InputPeerChat:
    case InputPeerChannel:
    case InputPeerChannelFromMessage:
        return Chat;
    }
}

bool peersEqual(TObject peer1, TObject peer2)
{
    return commonPeerType(peer1) == commonPeerType(peer2) && getPeerId(peer1) == getPeerId(peer2);
}
