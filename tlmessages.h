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

struct TLFileLocation
{
    TLType::Types type;
    qint64 volumeId;
    qint32 localId;

    TLFileLocation(QVariantMap var = QVariantMap());
};

struct TLProfilePhoto
{
    TLType::Types type;
    bool hasVideo;
    qint32 dcId;
    qint32 photoId;
    TLFileLocation photoSmall;
    TLFileLocation photoBig;

    TLProfilePhoto(QVariantMap var = QVariantMap());
};

struct TLChat
{
    TLType::Types type;
    qint32 id;
    QString title;
    qint64 accessHash;
    TLProfilePhoto photo;

    TLChat(QVariantMap var = QVariantMap());
};

struct TLMessage
{
    TLType::Types type;
    qint32 id;
    qint32 date;
    TLPeer peer;

    TLMessage(QVariantMap var = QVariantMap());
};

struct TLInputPeer
{
    TLType::Types type;
    qint32 id;
    qint32 messageId;
    qint64 accessHash;
    QVariantMap peer;

    TLInputPeer(TLPeer p, qint64 aH = 0);
    TLInputPeer(QVariantMap var = QVariantMap());
    QVariantMap serialize();
};

struct TLUser
{
    TLType::Types type;
    qint32 id;
    bool self;
    QString firstName;
    QString lastName;
    QString username;
    qint64 accessHash;
    TLProfilePhoto photo;

    TLUser(QVariantMap var = QVariantMap());
};

#endif // TLMESSAGES_H
