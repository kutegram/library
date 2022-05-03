#ifndef TELEGRAMSESSION_H
#define TELEGRAMSESSION_H

#include <QByteArray>
#include <QVariantMap>

struct AuthKey
{
    QByteArray key;
    quint64 id;
    quint64 auxHash;

    AuthKey();
    AuthKey& operator =(QByteArray key);
    QByteArray calcNewNonceHash(QByteArray newNonce, quint8 number);

    AuthKey& deserialize(QVariantMap obj);
    QVariantMap serialize();
};

struct TelegramSession
{
    TelegramSession();

    //TODO currentDc, sessionExpires

    qint64 userId;
    AuthKey authKey;
    quint64 salt;
    qint32 timeOffset;
    qint64 id;
    qint64 lastMessageId;
    qint32 sequence;

    qint32 currentDc;
    qint32 currentPort;
    QString currentIp;
    qint32 migrateDc;
    qint64 importId;
    QByteArray importBytes;

    QString lastPhoneNumber;
    QString lastPhoneCodeHash;

    TelegramSession& deserialize(QVariantMap obj);
    QVariantMap serialize();
};

#endif // TELEGRAMSESSION_H
