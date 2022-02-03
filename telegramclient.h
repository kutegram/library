#ifndef TELEGRAMCLIENT_H
#define TELEGRAMCLIENT_H

#include <QObject>
#include "apivalues.h"
#include "telegramsession.h"
#include "telegramstream.h"
#include <QTcpSocket>
#include <QList>
#include <QHash>
#include <QSettings>
#include "tlmessages.h"
#include <QMutex>
#if QT_VERSION >= 0x040702
#include <QNetworkSession>
#endif
#include <QTimer>

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
    //TODO support all MTProto service-messages.
    //TODO move users, chats, messages, MTProto message, confirm to session
    TelegramSession session;
    QTcpSocket socket;
#if QT_VERSION >= 0x040702
    QNetworkSession* networkSession;
#endif
    QSettings sessionFile;
    QTimer timer;

    QByteArray nonce;
    QByteArray newNonce;
    QByteArray serverNonce;
    qint64 retryId;

    QHash<qint64, qint32> messagesConIds;
    QHash<qint64, QByteArray> messages;
    QList<QByteArray> resendRequired;
    QList<qint64> confirm;

    TelegramObject dcConfig;

    State state;

    QMutex readMutex;
    QMutex msgMutex;

    qint32 updateDate;
    qint32 updateSeq;
    qint32 updatePts;
    qint32 updateQts;

    template <WRITE_METHOD W> qint64 sendMTObject(QVariant obj, bool ignoreConfirm = false, bool binary = false);
    qint64 sendMTPacket(QByteArray raw, bool ignoreConfirm = false, bool binary = false);
    void sendPlainPacket(QByteArray raw);
    //TODO use timer and floodrate
    void sendMessage(QByteArray raw);
    QByteArray readMessage();
    void handleMessage(QByteArray messageData, qint64 mtm);

    qint64 getNewMessageId();
    qint32 generateSequence(bool confirmed);
    void changeState(State state);

    void sendMsgsAck();
    QByteArray gzipPacket(QByteArray data);
public:
    explicit TelegramClient(QObject *parent = 0, QString sessionId = "kg");

    //TODO: handleMsgsAck

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
    void handlePong(QByteArray data, qint64 mtm);

    void handleConfig(QByteArray data, qint64 mtm);
    void handleMsgCopy(QByteArray data, qint64 mtm);
    void handleDhGenRetry(QByteArray data, qint64 mtm);
    void handleDhGenFail(QByteArray data, qint64 mtm);
    void handleLoginToken(QByteArray data, qint64 mtm);
    void handleLoginTokenSuccess(QByteArray data, qint64 mtm);
    void handleLoginTokenMigrateTo(QByteArray data, qint64 mtm);
    void handleSentCode(QByteArray data, qint64 mtm);
    void handleAuthorization(QByteArray data, qint64 mtm);
    void handleDialogs(QByteArray data, qint64 mtm);
    void handleDialogsSlice(QByteArray data, qint64 mtm);
    void handleFile(QByteArray data, qint64 mtm);
    void handleExportedAuthorization(QByteArray data, qint64 mtm);
    void handleMessages(QByteArray data, qint64 mtm);
    void handleMessagesSlice(QByteArray data, qint64 mtm);
    void handleChannelMessages(QByteArray data, qint64 mtm);
    void handleUpdatesState(QByteArray data, qint64 mtm);
    void handleUpdatesTooLong(QByteArray data, qint64 mtm);
    void handleUpdateShortMessage(QByteArray data, qint64 mtm);
    void handleUpdateShortChatMessage(QByteArray data, qint64 mtm);
    void handleUpdateShort(QByteArray data, qint64 mtm);
    void handleUpdatesCombined(QByteArray data, qint64 mtm);
    void handleUpdates(QByteArray data, qint64 mtm);
    void handleUpdateShortSentMessage(QByteArray data, qint64 mtm);

    //TODO Mutex for handleUpdates* and applyUpdate?
    void applyUpdate(TelegramObject obj, qint64 mtm);

    void initConnection();

    bool isLoggedIn();
    bool isAuthorized();
    bool isOpened();
    bool isConnected();
    bool apiReady();

    State getState();

    qint64 pingDelayDisconnect(qint64 ping_id, qint32 delay); //TODO: handle pong

    qint64 exportLoginToken(); //TODO QR-code login
    qint64 sendCode(QString phone_number);
    qint64 signIn(QString phone_number, QString phone_code_hash, QString phone_code);
    qint64 getUpdatesState(); //TODO updates.state handle
    qint64 getUpdatesDifference(); //TODO updates.difference handle
    qint64 getDialogs(qint32 offsetDate = 0, qint32 offsetId = 0, TLInputPeer offsetPeer = TLInputPeer(), qint32 limit = 40);
    qint64 getHistory(TLInputPeer peer, qint32 offsetId = 0, qint32 offsetDate = 0, qint32 addOffset = 0, qint32 limit = 40);
    qint64 getFile(TLInputFileLocation location, qint32 limit = 524288, qint32 offset = 0);
    qint64 sendMessage(TLInputPeer peer, QString message); //TODO handle result: Updates
    qint64 getMessages(QList<TLInputMessage> ids);

    void reconnectToDC(qint32 dcId);
signals:
    void handleResponse(qint64 mtm, QByteArray data, qint32 conId);
    void stateChanged(State state);

    void gotSocketError(QAbstractSocket::SocketError error);
    void gotMTError(qint32 error_code);
    void gotDHError(bool fail);
    void gotMessageError(qint64 mtm, qint32 error_code);
    void gotRPCError(qint64 mtm, qint32 error_code, QString error_message, bool handled);

    void gotLoginToken(qint64 mtm, qint32 expires, QString tokenUrl);
    void gotSentCode(qint64 mtm, QString phone_code_hash); //TODO timeout and more params
    void gotAuthorization(qint64 mtm);

    void gotDialogs(qint64 mtm, qint32 count, QList<TLDialog> dialogs, QList<TLMessage> messages, QList<TLChat> chats, QList<TLUser> users);
    void gotMessages(qint64 mtm, qint32 count, QList<TLMessage> messages, QList<TLChat> chats, QList<TLUser> users, qint32 offsetIdOffset, qint32 nextRate, bool inexact);
    void gotFilePart(qint64 mtm, TLType::Types type, qint32 mtime, QByteArray bytes);

    void gotNewMessage(qint64 mtm, TLMessage msg);
    //TODO void gotFullFile(qint64 mtm, TLType::Types type, qint32 mtime, QByteArray bytes);
public slots:
    void start();
    void stop();
    void sync();
    void reset();
    QByteArray message(qint64 mtm);
    qint32 messageConstructor(qint64 mtm);

private slots:
    void socket_connected();
    void socket_disconnected();
    void socket_readyRead();
    void socket_bytesWritten(qint64 count);
    void socket_error(QAbstractSocket::SocketError error);
    void networkSession_opened();
    void finishDCMigration();
    void timer_timeout();
};

template <WRITE_METHOD W> qint64 TelegramClient::sendMTObject(QVariant obj, bool ignoreConfirm, bool binary)
{
    if (!W) return 0;
    TelegramPacket packet;
    (*W)(packet, obj, 0);

    return sendMTPacket(packet.toByteArray(), ignoreConfirm, binary);
}

#endif // TELEGRAMCLIENT_H
