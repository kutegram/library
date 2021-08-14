#include "telegramstream.h"

#define VECTOR_ID 481674261
#define BOOL_TRUE -1720552011
#define BOOL_FALSE -1132882121

TelegramStream::TelegramStream(QByteArray input) :
    QObject(0), array(new QByteArray(input)), stream(new QDataStream(array, QIODevice::ReadWrite))
{
    stream->setByteOrder(QDataStream::LittleEndian);
}

TelegramStream::TelegramStream(QIODevice *parent) :
    QObject(parent), array(0), stream(new QDataStream(parent))
{
    stream->setByteOrder(QDataStream::LittleEndian);
}

TelegramStream::~TelegramStream()
{
    if (stream) delete stream;
    if (array) delete array;
}

void TelegramStream::skipRawBytes(qint32 i)
{
    stream->skipRawData(i);
}

void TelegramStream::writeRawBytes(QByteArray i)
{
    stream->writeRawData(i.constData(), i.length());
}

void TelegramStream::readRawBytes(QByteArray &i, qint32 count)
{
    i.resize(count);
    //i.reserve(count);
    qint32 readedTotal = 0;
    while (count > 0) {
        //TODO: leave if no data for long time
        qint32 readed = stream->readRawData(i.data() + readedTotal, count);
        if (readed == -1) break;
        else {
            readedTotal += readed;
            count -= readed;
        }
    }
}

QByteArray TelegramStream::toByteArray()
{
    return (array ? QByteArray(*array) : QByteArray());
}

void TelegramStream::setByteOrder(QDataStream::ByteOrder order)
{
    stream->setByteOrder(order);
}

void writeUInt8(TelegramStream& stream, QVariant i, void* callback)
{
    *(stream.stream) << (quint8) i.toUInt();
}

void writeUInt32(TelegramStream& stream, QVariant i, void* callback)
{
    *(stream.stream) << i.toUInt();
}

void writeUInt64(TelegramStream& stream, QVariant i, void* callback)
{
    *(stream.stream) << i.toULongLong();
}

void writeInt32(TelegramStream &stream, QVariant i, void *callback)
{
    *(stream.stream) << i.toInt();
}

void writeInt64(TelegramStream &stream, QVariant i, void *callback)
{
    *(stream.stream) << i.toLongLong();
}

void writeDouble(TelegramStream &stream, QVariant i, void *callback)
{
    *(stream.stream) << i.toDouble();
}

void writeBool(TelegramStream &stream, QVariant i, void *callback)
{
    *(stream.stream) << (i.toBool() ? BOOL_TRUE : BOOL_FALSE);
}

void writeString(TelegramStream &stream, QVariant i, void *callback)
{
    writeByteArray(stream, i.toString().toUtf8(), callback);
}

void writeByteArray(TelegramStream &stream, QVariant i, void *callback)
{
    qint32 startOffset = 1;
    QByteArray array = i.toByteArray();
    if (array.length() >= 254) {
        startOffset = 4;
        writeUInt8(stream, 254, callback);
        writeUInt8(stream, (array.length() & 0xFF), callback);
        writeUInt8(stream, ((array.length() >> 8) & 0xFF), callback);
        writeUInt8(stream, ((array.length() >> 16) & 0xFF), callback);
    } else {
        writeUInt8(stream, (array.length() & 0xFF), callback);
    }

    stream.writeRawBytes(array);

    qint32 offset = (array.length() + startOffset) % 4;
    if (offset) {
        stream.writeRawBytes(QByteArray(4 - offset, 0));
    }
}

void writeInt128(TelegramStream &stream, QVariant i, void *callback)
{
    QByteArray array = i.toByteArray();
    array.resize(INT128_BYTES);
    stream.writeRawBytes(array);
}

void writeInt256(TelegramStream &stream, QVariant i, void *callback)
{
    QByteArray array = i.toByteArray();
    array.resize(INT256_BYTES);
    stream.writeRawBytes(array);
}

void writeVector(TelegramStream &stream, QVariant i, void *callback)
{
    QVariantList list = i.toList();
    writeInt32(stream, VECTOR_ID, callback);
    writeInt32(stream, list.length(), callback);
    if (callback) for (qint32 i = 0; i < list.length(); ++i) {
        (*((WRITE_METHOD) callback))(stream, list[i], callback);
    }
}

void readUInt8(TelegramStream &stream, QVariant &i, void *callback)
{
    quint8 var;
    *(stream.stream) >> var;
    i = quint32(var);
}

void readUInt32(TelegramStream &stream, QVariant &i, void *callback)
{
    quint32 var;
    *(stream.stream) >> var;
    i = var;
}

void readUInt64(TelegramStream &stream, QVariant &i, void *callback)
{
    quint64 var;
    *(stream.stream) >> var;
    i = var;
}

void readInt32(TelegramStream &stream, QVariant &i, void *callback)
{
    qint32 var;
    *(stream.stream) >> var;
    i = var;
}

void readInt64(TelegramStream &stream, QVariant &i, void *callback)
{
    qint64 var;
    *(stream.stream) >> var;
    i = var;
}

void readDouble(TelegramStream &stream, QVariant &i, void *callback)
{
    double var;
    *(stream.stream) >> var;
    i = var;
}

void readBool(TelegramStream &stream, QVariant &i, void *callback)
{
    qint32 var;
    *(stream.stream) >> var;
    i = (var == BOOL_TRUE);
}

void readString(TelegramStream &stream, QVariant &i, void *callback)
{
    QVariant var;
    readByteArray(stream, var, callback);
    i = QString::fromUtf8(var.toByteArray());
}

void readByteArray(TelegramStream &stream, QVariant &i, void *callback)
{
    QVariant var;
    readUInt8(stream, var, callback);

    qint32 startOffset = 1;
    qint32 length = var.toInt();
    if (length >= 254) {
        readUInt8(stream, var, callback);
        length = var.toInt();
        readUInt8(stream, var, callback);
        length += (var.toInt() << 8);
        readUInt8(stream, var, callback);
        length += (var.toInt() << 16);
        startOffset = 4;
    }

    QByteArray array;
    stream.readRawBytes(array, length);
    qint32 offset = (length + startOffset) % 4;
    if (offset) {
        stream.skipRawBytes(4 - offset);
    }
    i = array;
}

void readInt128(TelegramStream &stream, QVariant &i, void *callback)
{
    QByteArray var;
    stream.readRawBytes(var, INT128_BYTES);
    i = var;
}

void readInt256(TelegramStream &stream, QVariant &i, void *callback)
{
    QByteArray var;
    stream.readRawBytes(var, INT256_BYTES);
    i = var;
}

void readVector(TelegramStream &stream, QVariant &i, void *callback)
{
    QVariant var;
    readInt32(stream, var, callback);
    if (var.toInt() != VECTOR_ID) return;
    readInt32(stream, var, callback);
    qint32 length = var.toInt();
    QVariantList list;
    if (callback) for (qint32 i = 0; i < length; ++i) {
        (*((READ_METHOD) callback))(stream, var, callback);
        list.append(var);
    }
    i = list;
}
