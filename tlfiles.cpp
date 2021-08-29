#include "tlfiles.h"

#include "telegramclient.h"

qint64 TelegramClient::getFile(TLInputFileLocation location, qint32 limit, qint32 offset)
{
    TGOBJECT(getFile, TLType::UploadGetFileMethod);

    getFile["location"] = location.serialize();
    getFile["offset"] = offset;
    getFile["limit"] = limit;

    return sendMTObject<&writeTLMethodUploadGetFile>(getFile);
}

void TelegramClient::handleFile(QByteArray data, qint64 mtm)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLUploadFile(packet, var);
    TelegramObject obj = var.toMap();

    emit gotFile(mtm, GETID(obj) ? (TLType::Types) GETID(obj) : TLType::StorageFileUnknown, obj["mtime"].toInt(), obj["bytes"].toByteArray());
}
