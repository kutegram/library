#include "telegramclient.h"

#ifndef QT_NO_DEBUG_OUTPUT
#include <QtDebug>
#endif

TelegramClient::TelegramClient(QObject *parent) :
    QObject(parent), session(0), socket(0), stream(0)
{

}

void TelegramClient::start()
{
    if (socket) return;
    socket = new QTcpSocket(this);
    socket->setSocketOption(QTcpSocket::LowDelayOption, 1);
    socket->setSocketOption(QTcpSocket::KeepAliveOption, 1);

    connect(socket, SIGNAL(connected()), this, SLOT(socket_connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(socket_disconnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(socket_readyRead()));
    connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(socket_bytesWritten(qint64)));
    connect(socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(socket_error(QAbstractSocket::SocketError)));

    stream = new TelegramStream(socket);
    socket->connectToHost(DC_IP, DC_PORT);
}

void TelegramClient::stop()
{
    if (!socket) return;

    socket->abort();
    socket->deleteLater();
    socket = 0;

    //stream->deleteLater();
    stream = 0;
}

void TelegramClient::socket_connected()
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket was connected to" << socket->peerName() << ":" << socket->peerPort();
#endif

    //Init MTProto transport
    writeUInt8(*stream, 0xEF);

    //If we are authorized - skip to request DC config

    //Authorizing a key

}

void TelegramClient::socket_disconnected()
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket was disconnected";
#endif

    stop();
}

void TelegramClient::socket_readyRead()
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket is ready to read";
#endif
}

void TelegramClient::socket_bytesWritten(qint64 count)
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket was" << count << "byte(s) written";
#endif
}

void TelegramClient::socket_error(QAbstractSocket::SocketError error)
{
#ifndef QT_NO_DEBUG_OUTPUT
    qDebug() << "Socket has got an error:" << error;
#endif
}
