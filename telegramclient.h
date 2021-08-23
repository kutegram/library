#ifndef TELEGRAMCLIENT_H
#define TELEGRAMCLIENT_H

#include <QObject>
#include "apivalues.h"
#include "telegramsession.h"
#include "telegramstream.h"
#include <QTcpSocket>
#include <QList>
#include <QMap>
#include <QSettings>

enum State
{
    STOPPED,
    CONNECTING,
    DH_STEP_1,
    DH_STEP_2,
    DH_STEP_3,
    DH_STEP_4,
    DH_STEP_5,
    DH_STEP_6,
    DH_STEP_7,
    DH_STEP_8,
    DH_STEP_9,
    AUTHORIZED,
    INITED,
    LOGGED_IN
};

class TelegramClient : public QObject
{
    Q_OBJECT
private:
    TelegramSession session;
    //TODO network session saving (see fortune client example)
    QTcpSocket *socket;
    TelegramStream *stream;
    QSettings sessionFile;

    QByteArray nonce;
    QByteArray newNonce;
    QByteArray serverNonce;
    qint64 retryId;

    QMap<qint64, QByteArray> messages;
    QList<qint64> confirm;

    State state;

    //TODO send packets via objects arguments with callback or template
    void sendMTPacket(QByteArray raw, bool ignoreConfirm = false);
    void sendPlainPacket(QByteArray raw);
    void sendMessage(QByteArray raw);
    QByteArray readMessage();
    void handleMessage(QByteArray messageData);

    qint64 getNewMessageId();
    qint32 generateSequence(bool confirmed);
    void changeState(State state);
public:
    explicit TelegramClient(QObject *parent = 0, QString sessionId = "kg");

    void handleResPQ(QByteArray data);
    void handleServerDHParamsOk(QByteArray data);
    void handleDhGenOk(QByteArray data);
    void handleBadServerSalt(QByteArray data);
    void handleRpcResult(QByteArray data);
    void handleGzipPacked(QByteArray data);
    void handleMsgContainer(QByteArray data);
    void handleBadMsgNotification(QByteArray data);
    void handleNewSessionCreated(QByteArray data);
    void handleRpcError(QByteArray data);
    void handleConfig(QByteArray data);
    void handleMsgCopy(QByteArray data);
    void handleDhGenRetry(QByteArray data);
    void handleDhGenFail(QByteArray data);
    void handleLoginToken(QByteArray data);
    void handleSentCode(QByteArray data);
    void handleAuthorization(QByteArray data);

    void initConnection();
    bool isLoggedIn();
    bool isAuthorized();
    bool isOpened();
    bool isConnected();

    State getState();

    void exportLoginToken(); //TODO QR-code login
    void sendCode(QString phone_number);
    void signIn(QString phone_number, QString phone_code_hash, QString phone_code);
signals:
    void handleResponse(QByteArray data, qint32 conId);
    void stateChanged(State state);

    void gotSocketError(QAbstractSocket::SocketError error);
    void gotMTError(qint32 error_code);
    void gotDHError(bool fail);
    void gotMessageError(qint32 error_code);
    void gotRPCError(qint32 error_code, QString error_message);

    void gotLoginToken(qint32 expires, QString tokenUrl);
    void gotSentCode(QString phone_code_hash); //TODO timeout and more params
    void gotAuthorization();
public slots:
    void start();
    void stop();
    void sync(); //TODO session save
private slots:
    void socket_connected();
    void socket_disconnected();
    void socket_readyRead();
    void socket_bytesWritten(qint64 count);
    void socket_error(QAbstractSocket::SocketError error);
};

#endif // TELEGRAMCLIENT_H
