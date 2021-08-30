#include "telegramclient.h"

#include "tlschema.h"

void TelegramClient::exportLoginToken()
{
    TGOBJECT(exportToken, TLType::AuthExportLoginTokenMethod);
    exportToken["api_id"] = APP_ID;
    exportToken["api_hash"] = APP_HASH;

    sendMTObject<&writeTLMethodAuthExportLoginToken>(exportToken);
}

void TelegramClient::handleLoginToken(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLAuthLoginToken(packet, var);
    TelegramObject loginToken = var.toMap();

    emit gotLoginToken(loginToken["expires"].toInt(), "tg://login?token=" + QString::fromAscii(loginToken["token"].toByteArray().toBase64()).replace("+", "-").replace("/", "_"));
}

void TelegramClient::sendCode(QString phone_number)
{
    TGOBJECT(sendCode, TLType::AuthSendCodeMethod);
    sendCode["phone_number"] = phone_number;
    sendCode["api_id"] = APP_ID;
    sendCode["api_hash"] = APP_HASH;

    TGOBJECT(codeSettings, TLType::CodeSettings);
    sendCode["settings"] = codeSettings;

    sendMTObject<&writeTLMethodAuthSendCode>(sendCode);
}

void TelegramClient::handleSentCode(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLAuthSentCode(packet, var);
    TelegramObject sentCode = var.toMap();

    emit gotSentCode(sentCode["phone_code_hash"].toString());
}

void TelegramClient::signIn(QString phone_number, QString phone_code_hash, QString phone_code)
{
    TGOBJECT(signIn, TLType::AuthSignInMethod);
    signIn["phone_number"] = phone_number;
    signIn["phone_code_hash"] = phone_code_hash;
    signIn["phone_code"] = phone_code;

    sendMTObject<&writeTLMethodAuthSignIn>(signIn);
}

void TelegramClient::handleAuthorization(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLAuthAuthorization(packet, var);
    TelegramObject auth = var.toMap();

    session.migrateDc = 0;
    session.userId = auth["user"].toMap()["id"].toInt();
    sync();
    changeState(LOGGED_IN);

    emit gotAuthorization();
}

void TelegramClient::getUpdatesState()
{
    TGOBJECT(getState, TLType::UpdatesGetStateMethod);

    sendMTObject<&writeTLMethodUpdatesGetState>(getState);
}
