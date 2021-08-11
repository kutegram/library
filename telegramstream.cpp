#include "telegramstream.h"

TelegramStream::TelegramStream(QIODevice *parent) :
    QObject(parent), stream(new QDataStream(parent))
{
    stream->setByteOrder(QDataStream::LittleEndian);
}


TelegramStream::~TelegramStream()
{
    delete stream;
}

void writeUInt8(TelegramStream& stream, QVariant i)
{
    *(stream.stream) << (quint8) i.toInt();
}
