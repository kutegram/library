#ifndef TELEGRAMSESSION_H
#define TELEGRAMSESSION_H

#include <QByteArray>

struct AuthKey
{
    QByteArray key;
    quint64 id;
    quint64 auxHash;

    AuthKey();
    AuthKey& operator =(QByteArray key);
    QByteArray calcNewNonceHash(QByteArray newNonce, quint8 number);
};

struct TelegramSession
{
    TelegramSession();

    AuthKey authKey;
    quint64 salt;
    qint32 timeOffset;
    qint64 id;
    qint64 lastMessageId;
    qint32 sequence;

    TelegramSession& deserialize(QString hex);
    QString serialize();
};

#endif // TELEGRAMSESSION_H
