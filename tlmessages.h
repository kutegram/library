#ifndef TLMESSAGES_H
#define TLMESSAGES_H

#include <QVariant>
#include "tlschema.h"
#include "tlfiles.h"

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

    bool isChannel();
    TLChat(QVariantMap var = QVariantMap());
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

struct TLPeer
{
    TLType::Types type;
    qint32 id;

    TLPeer(TLChat c);
    TLPeer(TLUser u);
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

struct TLInputPeer
{
    TLType::Types type;
    qint32 id;
    qint32 messageId;
    qint64 accessHash;
    QVariantMap peer;

    TLInputPeer(TLChat c);
    TLInputPeer(TLUser u);
    TLInputPeer(TLPeer p, qint64 aH = 0);
    TLInputPeer(QVariantMap var = QVariantMap());
    QVariantMap serialize();
};

struct TLInputFileLocation
{
    TLType::Types type;
    bool big;
    TLInputPeer peer;
    qint64 volumeId;
    qint32 localId;

    TLInputFileLocation(QVariantMap var = QVariantMap());
    TLInputFileLocation(TLFileLocation loc, TLInputPeer p, bool b = true);
    QVariantMap serialize();
};

struct TLMessage
{
    TLType::Types type;
    qint32 id;
    qint32 date;
    TLPeer peer;

    TLMessage(QVariantMap var = QVariantMap());
};

#endif // TLMESSAGES_H
