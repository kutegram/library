#ifndef TELEGRAMSTREAM_H
#define TELEGRAMSTREAM_H

#include <QObject>
#include <QDataStream>
#include <QVariantMap>
#include <QByteArray>

class TelegramStream : public QObject
{
    Q_OBJECT
public:
    QByteArray array;
    QDataStream stream;
    explicit TelegramStream(QByteArray input = QByteArray());

    void skipRawBytes(qint32 i);
    void readRawBytes(QByteArray &i, qint32 count);
    void writeRawBytes(QByteArray i);
    QByteArray toByteArray();
    void setByteOrder(QDataStream::ByteOrder order);
signals:
    
public slots:

};

typedef TelegramStream TelegramPacket;
typedef void (*WRITE_METHOD)(TelegramStream&, QVariant, void*);
typedef void (*READ_METHOD)(TelegramStream&, QVariant&, void*);

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

#include <QVariantMap>
#include <QVariantList>
#include <QByteArray>

typedef QVariantMap TelegramObject;
typedef QVariantList TelegramVector;
typedef QByteArray TelegramInt128;
typedef QByteArray TelegramInt256;

typedef QVariantMap TObject;
typedef QVariantList TVector;
typedef QByteArray TInt128;
typedef QByteArray TInt256;

#define TOBJECT(name, id) \
    TelegramObject name;  \
    name["_"] = id;

#define TGOBJECT(name, id) \
    TOBJECT(name, id)

#define ID_PROPERTY(name) \
    name["_"]

#define ID(name) \
    ID_PROPERTY(name).toInt()

#define GETID(name) \
    ID(name)

#define INT32_BYTES 4
#define INT64_BYTES 8
#define INT128_BYTES 16
#define INT256_BYTES 32

#define VECTOR_ID 481674261
#define BOOL_TRUE -1720552011
#define BOOL_FALSE -1132882121

QVariant getPeerId(TObject obj);
TObject getInputPeer(TObject obj);
TObject getInputMessage(TObject obj);
qint32 commonPeerType(TObject peer);
bool peersEqual(TObject peer1, TObject peer2);

template <WRITE_METHOD W> QByteArray tlSerialize(QVariant obj)
{
    TelegramPacket packet;
    if (W) (*W)(packet, obj, 0);
    return packet.toByteArray();
}

template <READ_METHOD R> QVariant tlDeserialize(QByteArray array)
{
    QVariant obj;
    TelegramPacket packet(array);
    if (R) (*R)(packet, obj, 0);
    return obj;
}

#endif // TELEGRAMSTREAM_H
