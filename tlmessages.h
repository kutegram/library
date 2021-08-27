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
    TLType::Types type;

    TLDialog(QVariantMap var);
};

struct TLChat
{
    TLType::Types type;
    qint32 id;
    QString title;

    TLChat(QVariantMap var);
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
    TLType::Types type;
    qint32 id;
    bool self;
    QString firstName;
    QString lastName;
    QString username;

    TLUser(QVariantMap var);
};

#endif // TLMESSAGES_H
