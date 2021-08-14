#ifndef TELEGRAMCLIENT_H
#define TELEGRAMCLIENT_H

#include <QObject>
#include "apivalues.h"
#include "telegramsession.h"
#include "telegramstream.h"
#include <QTcpSocket>
#include <QList>
#include <QMap>

class TelegramClient : public QObject
{
    Q_OBJECT
private:
    TelegramSession session;
    QTcpSocket *socket;
    TelegramStream *stream;

    QByteArray nonce;
    QByteArray newNonce;
    QByteArray serverNonce;

    QMap<quint64, QByteArray> messages;
    QList<quint64> confirm;

    void sendMTPacket(QByteArray raw, bool ignoreConfirm = false);
    void sendPlainPacket(QByteArray raw);
    void sendMessage(QByteArray raw);
    QByteArray readMessage();
    void handleMessage(QByteArray messageData);

    quint64 getNewMessageId();
    qint32 generateSequence(bool confirmed);
public:
    explicit TelegramClient(QObject *parent = 0, TelegramSession session = TelegramSession());

    void handleResPQ(QByteArray data);
    void handleServerDHParamsOk(QByteArray data);
    void handleDhGenOk(QByteArray data);

    void initConnection();
signals:
    void handleResponse(QByteArray data, qint32 conId);
public slots:
    void start();
    void stop();
    void sync();
private slots:
    void socket_connected();
    void socket_disconnected();
    void socket_readyRead();
    void socket_bytesWritten(qint64 count);
    void socket_error(QAbstractSocket::SocketError error);
};

#endif // TELEGRAMCLIENT_H
