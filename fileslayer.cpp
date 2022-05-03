#include "telegramclient.h"
#include "tlschema.h"

qint64 TelegramClient::getFile(TObject location, qint32 limit, qint32 offset)
{
    TGOBJECT(getFile, TLType::UploadGetFileMethod);

    getFile["location"] = location;
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

    TLType::Types type = TLType::StorageFileUnknown;
    TelegramObject typeObj = obj["type"].toMap();
    if (GETID(typeObj)) type = (TLType::Types) GETID(typeObj);

    //emit gotFilePart(mtm, type, obj["mtime"].toInt(), obj["bytes"].toByteArray());
}

void TelegramClient::requestFile(TObject fileId)
{
    if (fileClient.isNull())
        fileClient = new TelegramClient(this, "file_" + sessionId);

    fileClient->fileQueue.enqueue(fileId);
    if (!fileClient->fileFuture.isRunning())
        fileClient->fileFuture = QtConcurrent::run(fileClient.data(), &TelegramClient::processFiles);
}

void TelegramClient::processFiles()
{
    //Check client state and authorization
    //If api is not ready -> start client -> wait for DH/initialization
    //If client is not authorized -> authorize -> wait for authorization
    //If file is downloaded -> check file hashes
    //If file hashes are invalid or file does not exists -> download file -> check file hashes -> skip file after few attempts
    //Get next file in queue -> go two steps back
    //Queue ends -> Stop client and queue

    while (!fileQueue.isEmpty()) {
        TObject fileId = fileQueue.dequeue();
    }
}
