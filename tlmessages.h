#ifndef TLMESSAGES_H
#define TLMESSAGES_H

#include <QVariant>
#include "tlschema.h"

struct TLPeer
{
    qint32 id;
    TLType::Types type;

    TLPeer(QVariantMap var);
};

struct TLDialog
{
    TLPeer peer;
    bool pinned;
    qint32 topMessage;

    TLDialog(QVariantMap var);
};

struct TLChat
{
    TLChat(QVariantMap var);
};

struct TLChannel
{
    TLChannel(QVariantMap var);
};

struct TLMessage
{
    TLMessage(QVariantMap var);
};

struct TLInputPeer
{
    TLInputPeer(QVariantMap var);
};

struct TLUser
{
    TLUser(QVariantMap var);
};

#endif // TLMESSAGES_H
