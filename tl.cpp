#include "tl.h"
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
    default:
        qWarning() << "[getPeerId] Invalid object.";
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
        qWarning() << "[getInputPeer] Empty object.";

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
        TOBJECT(v, InputMessageID);

        v["id"] = obj["reply_to_msg_id"];

        return v;
    }
    default:
        qWarning() << "[getInputMessage] Invalid object.";
        return TObject();
    }
}
