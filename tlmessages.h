#ifndef TLMESSAGES_H
#define TLMESSAGES_H

#include <QVariant>
#include "tlschema.h"

struct TLPeer
{
    TLType::Types type;
    qint32 id;

    TLPeer(QVariantMap var = QVariantMap());
};

struct TLDialog
{
    TLType::Types type;
    TLPeer peer;
    bool pinned;
    qint32 topMessage;

    TLDialog(QVariantMap var = QVariantMap());
};

struct TLChat
{
    TLType::Types type;
    qint32 id;
    QString title;

    TLChat(QVariantMap var = QVariantMap());
};

struct TLMessage
{
    TLType::Types type;
    qint32 id;

    TLMessage(QVariantMap var = QVariantMap());
};

struct TLInputPeer
{
    TLInputPeer(QVariantMap var = QVariantMap());
};

struct TLUser
{
    TLType::Types type;
    qint32 id;
    bool self;
    QString firstName;
    QString lastName;
    QString username;

    TLUser(QVariantMap var = QVariantMap());
};

#endif // TLMESSAGES_H
