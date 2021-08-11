#ifndef TELEGRAMSTREAM_H
#define TELEGRAMSTREAM_H

#include <QObject>
#include <QDataStream>
#include <QVariantMap>

typedef QVariantMap TelegramObject;

class TelegramStream : public QObject
{
    Q_OBJECT
public:
    QDataStream *stream;
    explicit TelegramStream(QIODevice *parent);
    ~TelegramStream();

    void skipRawBytes(qint32 i);
    void readRawBytes(QByteArray &i);
    void writeRawBytes(QByteArray i);
signals:
    
public slots:

};

void readUInt8(TelegramStream& stream, QVariant &i);
void readUInt32(TelegramStream& stream, QVariant &i);
void readUInt64(TelegramStream& stream, QVariant &i);
void readInt32(TelegramStream& stream, QVariant &i);
void readInt64(TelegramStream& stream, QVariant &i);
void readDouble(TelegramStream& stream, QVariant &i);
void readBool(TelegramStream& stream, QVariant &i);
void readString(TelegramStream& stream, QVariant &i);
void readByteArray(TelegramStream& stream, QVariant &i);
void readInt128(TelegramStream& stream, QVariant &i);
void readInt256(TelegramStream& stream, QVariant &i);
void readVector(TelegramStream& stream, QVariant &i, void (*callback)(TelegramStream&, QVariant&));

void writeUInt8(TelegramStream& stream, QVariant i);
void writeUInt32(TelegramStream& stream, QVariant i);
void writeUInt64(TelegramStream& stream, QVariant i);
void writeInt32(TelegramStream& stream, QVariant i);
void writeInt64(TelegramStream& stream, QVariant i);
void writeDouble(TelegramStream& stream, QVariant i);
void writeBool(TelegramStream& stream, QVariant i);
void writeString(TelegramStream& stream, QVariant i);
void writeByteArray(TelegramStream& stream, QVariant i);
void writeInt128(TelegramStream& stream, QVariant i);
void writeInt256(TelegramStream& stream, QVariant i);
void writeVector(TelegramStream& stream, QVariant i, void (*callback)(TelegramStream&, QVariant));

#endif // TELEGRAMSTREAM_H
