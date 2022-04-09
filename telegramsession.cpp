#include "telegramsession.h"

#include "crypto.h"
#include "apivalues.h"

AuthKey::AuthKey() :
    key(), id(), auxHash()
{

}

AuthKey& AuthKey::operator =(QByteArray key)
{
    this->key = key;

    TelegramPacket hash(hashSHA1(key));

    QVariant var;
    readUInt64(hash, var);
    auxHash = var.toULongLong();
    hash.skipRawBytes(4);
    readUInt64(hash, var);
    id = var.toULongLong();

    return *this;
}

QByteArray AuthKey::calcNewNonceHash(QByteArray newNonce, quint8 number)
{
    TelegramPacket packet;

    packet.writeRawBytes(newNonce);
    writeUInt8(packet, number);
    writeUInt64(packet, auxHash);

    return hashSHA1(packet.toByteArray()).mid(4, 16);
}

AuthKey& AuthKey::deserialize(QVariantMap obj)
{
    key = obj["key"].toByteArray();
    id = obj["id"].toULongLong();
    auxHash = obj["auxHash"].toULongLong();

    return *this;
}

QVariantMap AuthKey::serialize()
{
    QVariantMap obj;

    obj["key"] = key;
    obj["id"] = id;
    obj["auxHash"] = auxHash;

    return obj;
}

TelegramSession::TelegramSession() :
    authKey(),
    salt(),
    timeOffset(),
    id(),
    lastMessageId(),
    sequence(),
    userId(),
    currentDc(DC_NUMBER),
    currentIp(DC_IP),
    currentPort(DC_PORT),
    migrateDc(),
    importId(),
    importBytes(),
    lastPhoneNumber(),
    lastPhoneCodeHash()
{
}

TelegramSession& TelegramSession::deserialize(QVariantMap obj)
{
    authKey.deserialize(obj["authKey"].toMap());
    salt = obj["salt"].toULongLong();
    timeOffset = obj["timeOffset"].toInt();
    id = obj["id"].toLongLong();
    lastMessageId = obj["lastMessageId"].toLongLong();
    sequence = obj["sequence"].toInt();
    userId = obj["userId"].toLongLong();
    currentDc = obj["currentDc"].toInt();
    currentIp = obj["currentIp"].toString();
    currentPort = obj["currentPort"].toInt();
    if (!currentPort || !currentDc || currentIp.isEmpty()) {
        currentIp = DC_IP;
        currentPort = DC_PORT;
        currentDc = DC_NUMBER;
    }
    migrateDc = obj["migrateDc"].toInt();
    importId = obj["importId"].toInt();
    importBytes = obj["importBytes"].toByteArray();
    lastPhoneNumber = obj["lastPhoneNumber"].toString();
    lastPhoneCodeHash = obj["lastPhoneCodeHash"].toString();

    return *this;
}

QVariantMap TelegramSession::serialize()
{
    QVariantMap obj;

    obj["authKey"] = authKey.serialize();
    obj["salt"] = salt;
    obj["timeOffset"] = timeOffset;
    obj["id"] = id;
    obj["lastMessageId"] = lastMessageId;
    obj["sequence"] = sequence;
    obj["userId"] = userId;
    obj["currentDc"] = currentDc;
    obj["currentIp"] = currentIp;
    obj["currentPort"] = currentPort;
    obj["migrateDc"] = migrateDc;
    obj["importId"] = importId;
    obj["importBytes"] = importBytes;
    obj["lastPhoneNumber"] = lastPhoneNumber;
    obj["lastPhoneCodeHash"] = lastPhoneCodeHash;

    return obj;
}
