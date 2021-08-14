#ifndef CRYPTO_H
#define CRYPTO_H

#include <QByteArray>
#include <QString>
#include "cryptopp/rsa.h"
#include "telegramstream.h"

#define PQINNERDATA_ID 0x83c95aec

using namespace CryptoPP;

struct DHKey
{
    QByteArray publicKey;
    QByteArray exponent;
    qint64 fingerprint;

    DHKey(QString publicKey, qint64 fingerprint, QString exponent = "010001");
};

QByteArray randomBytes(qint32 size);
quint64 findDivider(quint64 number);
QByteArray reverse(QByteArray array);
QByteArray xorArray(QByteArray a, QByteArray b);
Integer toBig(QByteArray a);
QByteArray fromBig(Integer a);
QByteArray decryptAES256IGE(QByteArray data, QByteArray iv, QByteArray key);
QByteArray encryptAES256IGE(QByteArray data, QByteArray iv, QByteArray key);
QByteArray encryptRSA(QByteArray data, QByteArray key, QByteArray exp);
QByteArray hashSHA256(QByteArray dataToHash);
QByteArray hashSHA1(QByteArray dataToHash);
void writeMTPQInnerDataCustom(TelegramStream &stream, QVariant i, void* callback = 0);
QByteArray calcMessageKey(QByteArray a);
QByteArray calcEncryptionKey(QByteArray sharedKey, QByteArray msgKey, QByteArray &iv, bool client);

#endif // CRYPTO_H
