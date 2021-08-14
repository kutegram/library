#include "crypto.h"

#ifndef QT_NO_DEBUG_OUTPUT
#include <QDebug>
#endif

#include <QDateTime>
#include "thirdparty/picosha2.h"
#include "thirdparty/aes.hpp"
#include <QCryptographicHash>
#include "mtschema.h"

DHKey::DHKey(QString publicKey, qint64 fingerprint, QString exponent) :
    publicKey(QByteArray::fromHex(publicKey.toAscii())),
    exponent(QByteArray::fromHex(exponent.toAscii())),
    fingerprint(fingerprint)
{

}

QByteArray randomBytes(qint32 size)
{
    QByteArray array;

    qsrand(QDateTime::currentDateTime().toMSecsSinceEpoch() / 1000);
    array.reserve(size);
    while (array.length() < size) array.append((quint8) (qrand() % 256));
    array.resize(size);

    return array;
}

quint64 gcd(quint64 a, quint64 b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }

    int shift = 0;
    while ((a & 1) == 0 && (b & 1) == 0) {
        a >>= 1;
        b >>= 1;
        shift++;
    }

    while (true) {
        while ((a & 1) == 0) {
            a >>= 1;
        }
        while ((b & 1) == 0) {
            b >>= 1;
        }
        if (a > b) {
            a -= b;
        } else if (b > a) {
            b -= a;
        } else {
            return a << shift;
        }
    }
}

quint64 findDivider(quint64 number)
{
    qsrand(QDateTime::currentDateTime().toMSecsSinceEpoch() / 1000);
    int it = 0;
    quint64 g = 0;
    for (int i = 0; i < 3 || it < 10000; ++i) {
        const quint64 q = ((qrand() & 15) + 17) % number;
        quint64 x = (quint64) qrand() % (number - 1) + 1;
        quint64 y = x;
        const quint32 lim = 1 << (i + 18);
        for (quint32 j = 1; j < lim; j++) {
            ++it;
            quint64 a = x;
            quint64 b = x;
            quint64 c = q;
            while (b) {
                if (b & 1) {
                    c += a;
                    if (c >= number) {
                        c -= number;
                    }
                }
                a += a;
                if (a >= number) {
                    a -= number;
                }
                b >>= 1;
            }
            x = c;
            const quint64 z = x < y ? number + x - y : x - y;
            g = gcd(z, number);
            if (g != 1) {
                return g;
            }
            if (!(j & (j - 1))) {
                y = x;
            }
        }

        if (g > 1 && g < number) {
            return g;
        }
    }

    return 1;
}

QByteArray reverse(QByteArray array)
{
    for (int low = 0, high = array.size() - 1; low < high; ++low, --high) {
        qSwap(array.data()[low], array.data()[high]);
    }
    return array;
}

QByteArray xorArray(QByteArray a, QByteArray b)
{
    QByteArray result(a.length(), 0);
    for (qint32 i = 0; i < a.length(); ++i) {
        result[i] = (a[i] ^ b[i]);
    }
    return result;
}

Integer toBig(QByteArray a)
{
    return Integer((const byte*) a.constData(), a.size());
}

QByteArray fromBig(Integer a)
{
    QByteArray hash(a.ByteCount(), 0);
    for (qint32 i = 0; i < hash.size(); ++i) hash[i] = a.GetByte(a.ByteCount() - i - 1);
    return hash;
}

QByteArray decryptAES256IGE(QByteArray data, QByteArray iv, QByteArray key)
{
    QByteArray result(data);
    AES_ctx ctx;
    AES_init_ctx_iv32(&ctx, (const uint8_t*) key.constData(), (const uint8_t*) iv.constData());
    AES_IGE_decrypt_buffer(&ctx, (uint8_t*) result.data(), result.size());
    return result;
}

QByteArray encryptAES256IGE(QByteArray data, QByteArray iv, QByteArray key)
{
    QByteArray result(data);
    AES_ctx ctx;
    AES_init_ctx_iv32(&ctx, (const uint8_t*) key.constData(), (const uint8_t*) iv.constData());
    AES_IGE_encrypt_buffer(&ctx, (uint8_t*) result.data(), result.size());
    return result;
}

QByteArray encryptRSA(QByteArray data, QByteArray key, QByteArray exp)
{
    Integer message = toBig(data);
    Integer n = toBig(key);
    Integer e = toBig(exp);
    RSA::PublicKey publicKey;
    publicKey.Initialize(n, e);
    return fromBig(publicKey.ApplyFunction(message));
}

QByteArray hashSHA256(QByteArray dataToHash)
{
    QByteArray dataHash(32, 0);
    picosha2::hash256(dataToHash.data(), dataToHash.data() + dataToHash.size(), dataHash.data(), dataHash.data() + dataHash.size());
    return dataHash;
}

QByteArray hashSHA1(QByteArray dataToHash)
{
    return QCryptographicHash::hash(dataToHash, QCryptographicHash::Sha1);
}

void writeMTPQInnerDataCustom(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case PQINNERDATA_ID:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["pq"], callback);
        writeByteArray(stream, obj["p"], callback);
        writeByteArray(stream, obj["q"], callback);
        writeInt128(stream, obj["nonce"], callback);
        writeInt128(stream, obj["server_nonce"], callback);
        writeInt256(stream, obj["new_nonce"], callback);
    break;
    default:
        writeMTPQInnerData(stream, i, callback);
    break;
    }
}

QByteArray calcMessageKey(QByteArray a)
{
    return hashSHA1(a).mid(4, 16);
}

QByteArray calcEncryptionKey(QByteArray sharedKey, QByteArray msgKey, QByteArray &iv, bool client)
{
    qint32 x = client ? 0 : 8;

    QByteArray sha1a = hashSHA1(msgKey.mid(0, 16) + sharedKey.mid(x, 32));
    QByteArray sha1b = hashSHA1(sharedKey.mid(32+x, 16) + msgKey.mid(0, 16) + sharedKey.mid(48+x, 16));
    QByteArray sha1c = hashSHA1(sharedKey.mid(64+x, 32) + msgKey.mid(0, 16));
    QByteArray sha1d = hashSHA1(msgKey.mid(0, 16) + sharedKey.mid(96+x, 32));

    iv = sha1a.mid(8, 12) + sha1b.mid(0, 8) + sha1c.mid(16, 4) + sha1d.mid(0, 8);

    return (sha1a.mid(0, 8) + sha1b.mid(8, 12) + sha1c.mid(4, 12));
}
