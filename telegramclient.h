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
#include "tlmessages.h"
#include <QMutex>

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
    QSettings sessionFile;

    QByteArray nonce;
    QByteArray newNonce;
    QByteArray serverNonce;
    qint64 retryId;

    QMap<qint64, QByteArray> messages;
    QList<qint64> confirm;

    State state;

    QMutex readMutex;
    QMutex msgMutex;

    //TODO gzip send MTProto messages
    template <WRITE_METHOD W> qint64 sendMTObject(QVariant obj, bool ignoreConfirm = false);
    qint64 sendMTPacket(QByteArray raw, bool ignoreConfirm = false);
    void sendPlainPacket(QByteArray raw);
    void sendMessage(QByteArray raw);
    QByteArray readMessage();
    void handleMessage(QByteArray messageData, qint64 mtm);

    qint64 getNewMessageId();
    qint32 generateSequence(bool confirmed);
    void changeState(State state);

public:
    explicit TelegramClient(QObject *parent = 0, QString sessionId = "kg");

    void handleResPQ(QByteArray data, qint64 mtm);
    void handleServerDHParamsOk(QByteArray data, qint64 mtm);
    void handleDhGenOk(QByteArray data, qint64 mtm);
    void handleBadServerSalt(QByteArray data, qint64 mtm);
    void handleRpcResult(QByteArray data, qint64 mtm);
    void handleGzipPacked(QByteArray data, qint64 mtm);
    void handleMsgContainer(QByteArray data, qint64 mtm);
    void handleBadMsgNotification(QByteArray data, qint64 mtm);
    void handleNewSessionCreated(QByteArray data, qint64 mtm);
    void handleRpcError(QByteArray data, qint64 mtm);
    void handleConfig(QByteArray data, qint64 mtm);
    void handleMsgCopy(QByteArray data, qint64 mtm);
    void handleDhGenRetry(QByteArray data, qint64 mtm);
    void handleDhGenFail(QByteArray data, qint64 mtm);
    void handleLoginToken(QByteArray data, qint64 mtm);
    void handleSentCode(QByteArray data, qint64 mtm);
    void handleAuthorization(QByteArray data, qint64 mtm);
    void handleDialogs(QByteArray data, qint64 mtm);
    void handleDialogsSlice(QByteArray data, qint64 mtm);
    void handleFile(QByteArray data, qint64 mtm);

    void initConnection();

    bool isLoggedIn();
    bool isAuthorized();
    bool isOpened();
    bool isConnected();
    bool apiReady();

    State getState();

    void exportLoginToken(); //TODO QR-code login
    void sendCode(QString phone_number);
    void signIn(QString phone_number, QString phone_code_hash, QString phone_code);
    void getUpdatesState(); //TODO updates.state handle
    void getDialogs(qint32 offsetDate = 0, qint32 offsetId = 0, TLInputPeer offsetPeer = TLInputPeer(), qint32 limit = 40);
    qint64 getFile(TLInputFileLocation location, qint32 limit = 524288, qint32 offset = 0);

signals:
    void handleResponse(QByteArray data, qint32 conId, qint64 mtm);
    void stateChanged(State state);

    void gotSocketError(QAbstractSocket::SocketError error);
    void gotMTError(qint32 error_code);
    void gotDHError(bool fail);
    void gotMessageError(qint32 error_code);
    void gotRPCError(qint32 error_code, QString error_message);

    void gotLoginToken(qint32 expires, QString tokenUrl);
    void gotSentCode(QString phone_code_hash); //TODO timeout and more params
    void gotAuthorization();

    void gotDialogs(qint32 count, QList<TLDialog> dialogs, QList<TLMessage> messages, QList<TLChat> chats, QList<TLUser> users);
    void gotFile(qint64 mtMessageId, TLType::Types type, qint32 mtime, QByteArray bytes);

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

template <WRITE_METHOD W> qint64 TelegramClient::sendMTObject(QVariant obj, bool ignoreConfirm)
{
    if (!W) return 0;
    TelegramPacket packet;
    (*W)(packet, obj, 0);

    return sendMTPacket(packet.toByteArray(), ignoreConfirm);
}

#endif // TELEGRAMCLIENT_H
