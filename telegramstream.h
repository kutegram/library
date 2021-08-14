#ifndef TELEGRAMSTREAM_H
#define TELEGRAMSTREAM_H

#include <QObject>
#include <QDataStream>
#include <QVariantMap>
#include <QByteArray>

typedef QVariantMap TelegramObject;
typedef QVariantList TelegramVector;
typedef QByteArray TelegramInt128;
typedef QByteArray TelegramInt256;

typedef void (*WRITE_METHOD)(TelegramStream&, QVariant, void*);
typedef void (*READ_METHOD)(TelegramStream&, QVariant&, void*);

#define TGOBJECT(name, id)  \
    TelegramObject name;    \
    name["_"] = id;

#define GETID(name)         \
    name["_"].toInt()

#define INT32_BYTES 4
#define INT64_BYTES 8
#define INT128_BYTES 16
#define INT256_BYTES 32

class TelegramStream : public QObject
{
    Q_OBJECT
public:
    QByteArray *array;
    QDataStream *stream;
    explicit TelegramStream(QByteArray input = QByteArray());
    explicit TelegramStream(QIODevice *parent);
    ~TelegramStream();

    void skipRawBytes(qint32 i);
    void readRawBytes(QByteArray &i, qint32 count);
    void writeRawBytes(QByteArray i);
    QByteArray toByteArray();
    void setByteOrder(QDataStream::ByteOrder order);
signals:
    
public slots:

};

typedef TelegramStream TelegramPacket;

void readUInt8(TelegramStream& stream, QVariant &i, void* callback = 0);
void readUInt32(TelegramStream& stream, QVariant &i, void* callback = 0);
void readUInt64(TelegramStream& stream, QVariant &i, void* callback = 0);
void readInt32(TelegramStream& stream, QVariant &i, void* callback = 0);
void readInt64(TelegramStream& stream, QVariant &i, void* callback = 0);
void readDouble(TelegramStream& stream, QVariant &i, void* callback = 0);
void readBool(TelegramStream& stream, QVariant &i, void* callback = 0);
void readString(TelegramStream& stream, QVariant &i, void* callback = 0);
void readByteArray(TelegramStream& stream, QVariant &i, void* callback = 0);
void readInt128(TelegramStream& stream, QVariant &i, void* callback = 0);
void readInt256(TelegramStream& stream, QVariant &i, void* callback = 0);
void readVector(TelegramStream& stream, QVariant &i, void* callback);

void writeUInt8(TelegramStream& stream, QVariant i, void* callback = 0);
void writeUInt32(TelegramStream& stream, QVariant i, void* callback = 0);
void writeUInt64(TelegramStream& stream, QVariant i, void* callback = 0);
void writeInt32(TelegramStream& stream, QVariant i, void* callback = 0);
void writeInt64(TelegramStream& stream, QVariant i, void* callback = 0);
void writeDouble(TelegramStream& stream, QVariant i, void* callback = 0);
void writeBool(TelegramStream& stream, QVariant i, void* callback = 0);
void writeString(TelegramStream& stream, QVariant i, void* callback = 0);
void writeByteArray(TelegramStream& stream, QVariant i, void* callback = 0);
void writeInt128(TelegramStream& stream, QVariant i, void* callback = 0);
void writeInt256(TelegramStream& stream, QVariant i, void* callback = 0);
void writeVector(TelegramStream& stream, QVariant i, void* callback);

#endif // TELEGRAMSTREAM_H
