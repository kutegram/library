#ifndef TELEGRAMCLIENT_H
#define TELEGRAMCLIENT_H

#define DC_IP "149.154.167.40" //"149.154.167.50" - production
#define DC_PORT 443

#include <QObject>
#include "apivalues.h"
#include "telegramsession.h"
#include "telegramstream.h"
#include <QTcpSocket>

class TelegramClient : public QObject
{
    Q_OBJECT
private:
    TelegramSession *session;
    QTcpSocket *socket;
    TelegramStream *stream;
public:
    explicit TelegramClient(QObject *parent = 0);
public slots:
    void start();
    void stop();
private slots:
    void socket_connected();
    void socket_disconnected();
    void socket_readyRead();
    void socket_bytesWritten(qint64 count);
    void socket_error(QAbstractSocket::SocketError error);
};

#endif // TELEGRAMCLIENT_H
