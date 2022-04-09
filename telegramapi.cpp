#include "telegramclient.h"
#include "tlschema.h"
#include <QDebug>

qint64 TelegramClient::exportLoginToken()
{
    TGOBJECT(exportToken, TLType::AuthExportLoginTokenMethod);
    exportToken["api_id"] = APP_ID;
    exportToken["api_hash"] = APP_HASH;

    return sendMTObject<&writeTLMethodAuthExportLoginToken>(exportToken);
}

void TelegramClient::handleLoginToken(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLAuthLoginToken(packet, var);
    TelegramObject loginToken = var.toMap();

    emit gotLoginToken(mtm, loginToken["expires"].toInt(), "tg://login?token=" + QString::fromAscii(loginToken["token"].toByteArray().toBase64()).replace("+", "-").replace("/", "_"));
}

void TelegramClient::handleLoginTokenSuccess(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLAuthLoginToken(packet, var);
    TelegramObject loginToken = var.toMap();

    TelegramPacket authPacket;
    writeTLAuthAuthorization(authPacket, loginToken["authorization"].toMap());

    handleAuthorization(authPacket.toByteArray(), mtm);
}

void TelegramClient::handleLoginTokenMigrateTo(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLAuthLoginToken(packet, var);
    TelegramObject loginToken = var.toMap();

    //reconnectToDC(loginToken["dc_id"].toInt());
    //auth.importLoginToken
}

qint64 TelegramClient::sendCode(QString phone_number)
{
    TGOBJECT(sendCode, TLType::AuthSendCodeMethod);
    sendCode["phone_number"] = phone_number;
    sendCode["api_id"] = APP_ID;
    sendCode["api_hash"] = APP_HASH;

    TGOBJECT(codeSettings, TLType::CodeSettings);
    sendCode["settings"] = codeSettings;

    session.lastPhoneNumber = phone_number;
    sync();

    return sendMTObject<&writeTLMethodAuthSendCode>(sendCode);
}

void TelegramClient::handleSentCode(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLAuthSentCode(packet, var);
    TelegramObject sentCode = var.toMap();

    if (!isLoggedIn()) {
        session.lastPhoneCodeHash = sentCode["phone_code_hash"].toString();
        sync();

        emit gotSentCode(mtm, sentCode["phone_code_hash"].toString());
    }
}

qint64 TelegramClient::signIn(QString phone_code, QString phone_code_hash, QString phone_number)
{
    TGOBJECT(signIn, TLType::AuthSignInMethod);
    if (phone_number.isEmpty()) phone_number = session.lastPhoneNumber;
    signIn["phone_number"] = phone_number;
    if (phone_code_hash.isEmpty()) phone_code_hash = session.lastPhoneCodeHash;
    signIn["phone_code_hash"] = phone_code_hash;
    signIn["phone_code"] = phone_code;

    return sendMTObject<&writeTLMethodAuthSignIn>(signIn);
}

void TelegramClient::handleAuthorization(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLAuthAuthorization(packet, var);
    TelegramObject auth = var.toMap();

    session.userId = auth["user"].toMap()["id"].toLongLong();
    sync();
    changeState(LOGGED_IN);

    emit gotAuthorization(mtm);
}

qint64 TelegramClient::getUpdatesState()
{
    qDebug() << "[LOG] Getting updates state.";

    TGOBJECT(getState, TLType::UpdatesGetStateMethod);

    return sendMTObject<&writeTLMethodUpdatesGetState>(getState);
}

void TelegramClient::handleUpdatesState(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLUpdatesState(packet, var);
    TelegramObject state = var.toMap();

    this->updatePts = qMax(this->updatePts, state["pts"].toInt());
    this->updateQts = qMax(this->updateQts, state["qts"].toInt());
    this->updateDate = qMax(this->updateDate, state["date"].toInt());
    this->updateSeq = qMax(this->updateSeq, state["seq"].toInt());
}

qint64 TelegramClient::getUpdatesDifference()
{
    qDebug() << "[LOG] Getting updates difference.";

    TGOBJECT(getDifference, TLType::UpdatesGetDifferenceMethod);

    getDifference["pts"] = this->updatePts;
    getDifference["qts"] = this->updateQts;
    getDifference["date"] = this->updateDate;

    return sendMTObject<&writeTLMethodUpdatesGetDifference>(getDifference);
}
