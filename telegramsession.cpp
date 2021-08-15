#include "telegramsession.h"

#include "crypto.h"

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

TelegramSession::TelegramSession() :
    authKey(), salt(), timeOffset(), id(), lastMessageId(), sequence()
{
}

TelegramSession& TelegramSession::deserialize(QString hex)
{
    TelegramPacket packet(QByteArray::fromHex(hex.toAscii()));

    QVariant var;
    readUInt64(packet, var);
    authKey.auxHash = var.toULongLong();
    readUInt64(packet, var);
    authKey.id = var.toULongLong();
    readByteArray(packet, var);
    authKey.key = var.toByteArray();
    readUInt64(packet, var);
    salt = var.toULongLong();
    readInt32(packet, var);
    timeOffset = var.toInt();
    readInt64(packet, var);
    id = var.toLongLong();
    readInt64(packet, var);
    lastMessageId = var.toLongLong();
    readInt32(packet, var);
    sequence = var.toInt();

    return *this;
}

QString TelegramSession::serialize()
{
    TelegramPacket packet;

    writeUInt64(packet, authKey.auxHash);
    writeUInt64(packet, authKey.id);
    writeByteArray(packet, authKey.key);
    writeUInt64(packet, salt);
    writeInt32(packet, timeOffset);
    writeInt64(packet, id);
    writeInt64(packet, lastMessageId);
    writeInt32(packet, sequence);

    return QString::fromAscii(packet.toByteArray().toHex());
}
