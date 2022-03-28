//Generated code.

#include "tlschema.h"

void readTLBool(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1132882121:
        obj["_"] = conId.toInt();
    break;
    case -1720552011:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLBool(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1132882121:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1720552011:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLTrue(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1072550713:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLTrue(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1072550713:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLVector(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 481674261:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLVector(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 481674261:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLError(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -994444869:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["code"], callback);
        readString(stream, obj["text"], callback);
    break;
    }
    i = obj;
}

void writeTLError(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -994444869:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["code"], callback);
        writeString(stream, obj["text"], callback);
    break;
    }
}

void readTLNull(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1450380236:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLNull(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1450380236:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLInputPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2134579434:
        obj["_"] = conId.toInt();
    break;
    case 2107670217:
        obj["_"] = conId.toInt();
    break;
    case 900291769:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["chat_id"], callback);
    break;
    case -571955892:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case 666680316:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case -1468331492:
        obj["_"] = conId.toInt();
        readTLInputPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["msg_id"], callback);
        readInt64(stream, obj["user_id"], callback);
    break;
    case -1121318848:
        obj["_"] = conId.toInt();
        readTLInputPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["msg_id"], callback);
        readInt64(stream, obj["channel_id"], callback);
    break;
    }
    i = obj;
}

void writeTLInputPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2134579434:
        writeInt32(stream, obj["_"], callback);
    break;
    case 2107670217:
        writeInt32(stream, obj["_"], callback);
    break;
    case 900291769:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
    break;
    case -571955892:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case 666680316:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case -1468331492:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
    break;
    case -1121318848:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeInt64(stream, obj["channel_id"], callback);
    break;
    }
}

void readTLInputUser(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1182234929:
        obj["_"] = conId.toInt();
    break;
    case -138301121:
        obj["_"] = conId.toInt();
    break;
    case -233744186:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case 497305826:
        obj["_"] = conId.toInt();
        readTLInputPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["msg_id"], callback);
        readInt64(stream, obj["user_id"], callback);
    break;
    }
    i = obj;
}

void writeTLInputUser(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1182234929:
        writeInt32(stream, obj["_"], callback);
    break;
    case -138301121:
        writeInt32(stream, obj["_"], callback);
    break;
    case -233744186:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case 497305826:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
    break;
    }
}

void readTLInputContact(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -208488460:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["client_id"], callback);
        readString(stream, obj["phone"], callback);
        readString(stream, obj["first_name"], callback);
        readString(stream, obj["last_name"], callback);
    break;
    }
    i = obj;
}

void writeTLInputContact(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -208488460:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["client_id"], callback);
        writeString(stream, obj["phone"], callback);
        writeString(stream, obj["first_name"], callback);
        writeString(stream, obj["last_name"], callback);
    break;
    }
}

void readTLInputFile(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -181407105:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt32(stream, obj["parts"], callback);
        readString(stream, obj["name"], callback);
        readString(stream, obj["md5_checksum"], callback);
    break;
    case -95482955:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt32(stream, obj["parts"], callback);
        readString(stream, obj["name"], callback);
    break;
    }
    i = obj;
}

void writeTLInputFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -181407105:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt32(stream, obj["parts"], callback);
        writeString(stream, obj["name"], callback);
        writeString(stream, obj["md5_checksum"], callback);
    break;
    case -95482955:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt32(stream, obj["parts"], callback);
        writeString(stream, obj["name"], callback);
    break;
    }
}

void readTLInputMedia(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1771768449:
        obj["_"] = conId.toInt();
    break;
    case 505969924:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLInputFile(stream, obj["file"], callback);
        if (obj["flags"].toUInt() & 1) readVector(stream, obj["stickers"], (void*) &readTLInputDocument);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["ttl_seconds"], callback);
    break;
    case -1279654347:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLInputPhoto(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["ttl_seconds"], callback);
    break;
    case -104578748:
        obj["_"] = conId.toInt();
        readTLInputGeoPoint(stream, obj["geo_point"], callback);
    break;
    case -122978821:
        obj["_"] = conId.toInt();
        readString(stream, obj["phone_number"], callback);
        readString(stream, obj["first_name"], callback);
        readString(stream, obj["last_name"], callback);
        readString(stream, obj["vcard"], callback);
    break;
    case 1530447553:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 8) obj["nosound_video"] = true;
        if (obj["flags"].toUInt() & 16) obj["force_file"] = true;
        readTLInputFile(stream, obj["file"], callback);
        if (obj["flags"].toUInt() & 4) readTLInputFile(stream, obj["thumb"], callback);
        readString(stream, obj["mime_type"], callback);
        readVector(stream, obj["attributes"], (void*) &readTLDocumentAttribute);
        if (obj["flags"].toUInt() & 1) readVector(stream, obj["stickers"], (void*) &readTLInputDocument);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["ttl_seconds"], callback);
    break;
    case 860303448:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLInputDocument(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["ttl_seconds"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["query"], callback);
    break;
    case -1052959727:
        obj["_"] = conId.toInt();
        readTLInputGeoPoint(stream, obj["geo_point"], callback);
        readString(stream, obj["title"], callback);
        readString(stream, obj["address"], callback);
        readString(stream, obj["provider"], callback);
        readString(stream, obj["venue_id"], callback);
        readString(stream, obj["venue_type"], callback);
    break;
    case -440664550:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["ttl_seconds"], callback);
    break;
    case -78455655:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["ttl_seconds"], callback);
    break;
    case -750828557:
        obj["_"] = conId.toInt();
        readTLInputGame(stream, obj["id"], callback);
    break;
    case -646342540:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["title"], callback);
        readString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 1) readTLInputWebDocument(stream, obj["photo"], callback);
        readTLInvoice(stream, obj["invoice"], callback);
        readByteArray(stream, obj["payload"], callback);
        readString(stream, obj["provider"], callback);
        readTLDataJSON(stream, obj["provider_data"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["start_param"], callback);
    break;
    case -1759532989:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["stopped"] = true;
        readTLInputGeoPoint(stream, obj["geo_point"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["heading"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["period"], callback);
        if (obj["flags"].toUInt() & 8) readInt32(stream, obj["proximity_notification_radius"], callback);
    break;
    case 261416433:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLPoll(stream, obj["poll"], callback);
        if (obj["flags"].toUInt() & 1) readVector(stream, obj["correct_answers"], (void*) &readByteArray);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["solution"], callback);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["solution_entities"], (void*) &readTLMessageEntity);
    break;
    case -428884101:
        obj["_"] = conId.toInt();
        readString(stream, obj["emoticon"], callback);
    break;
    }
    i = obj;
}

void writeTLInputMedia(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1771768449:
        writeInt32(stream, obj["_"], callback);
    break;
    case 505969924:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["stickers"].isNull()) | 
            (!obj["ttl_seconds"].isNull() << 1) | 
        0), callback);
        writeTLInputFile(stream, obj["file"], callback);
        if (obj["flags"].toUInt() & 1) writeVector(stream, obj["stickers"], (void*) &writeTLInputDocument);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["ttl_seconds"], callback);
    break;
    case -1279654347:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["ttl_seconds"].isNull()) | 
        0), callback);
        writeTLInputPhoto(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["ttl_seconds"], callback);
    break;
    case -104578748:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGeoPoint(stream, obj["geo_point"], callback);
    break;
    case -122978821:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeString(stream, obj["first_name"], callback);
        writeString(stream, obj["last_name"], callback);
        writeString(stream, obj["vcard"], callback);
    break;
    case 1530447553:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["nosound_video"].isNull() << 3) | 
            (!obj["force_file"].isNull() << 4) | 
            (!obj["thumb"].isNull() << 2) | 
            (!obj["stickers"].isNull()) | 
            (!obj["ttl_seconds"].isNull() << 1) | 
        0), callback);
        writeTLInputFile(stream, obj["file"], callback);
        if (obj["flags"].toUInt() & 4) writeTLInputFile(stream, obj["thumb"], callback);
        writeString(stream, obj["mime_type"], callback);
        writeVector(stream, obj["attributes"], (void*) &writeTLDocumentAttribute);
        if (obj["flags"].toUInt() & 1) writeVector(stream, obj["stickers"], (void*) &writeTLInputDocument);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["ttl_seconds"], callback);
    break;
    case 860303448:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["ttl_seconds"].isNull()) | 
            (!obj["query"].isNull() << 1) | 
        0), callback);
        writeTLInputDocument(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["ttl_seconds"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["query"], callback);
    break;
    case -1052959727:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGeoPoint(stream, obj["geo_point"], callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["address"], callback);
        writeString(stream, obj["provider"], callback);
        writeString(stream, obj["venue_id"], callback);
        writeString(stream, obj["venue_type"], callback);
    break;
    case -440664550:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["ttl_seconds"].isNull()) | 
        0), callback);
        writeString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["ttl_seconds"], callback);
    break;
    case -78455655:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["ttl_seconds"].isNull()) | 
        0), callback);
        writeString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["ttl_seconds"], callback);
    break;
    case -750828557:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGame(stream, obj["id"], callback);
    break;
    case -646342540:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["photo"].isNull()) | 
            (!obj["start_param"].isNull() << 1) | 
        0), callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 1) writeTLInputWebDocument(stream, obj["photo"], callback);
        writeTLInvoice(stream, obj["invoice"], callback);
        writeByteArray(stream, obj["payload"], callback);
        writeString(stream, obj["provider"], callback);
        writeTLDataJSON(stream, obj["provider_data"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["start_param"], callback);
    break;
    case -1759532989:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["stopped"].isNull()) | 
            (!obj["heading"].isNull() << 2) | 
            (!obj["period"].isNull() << 1) | 
            (!obj["proximity_notification_radius"].isNull() << 3) | 
        0), callback);
        writeTLInputGeoPoint(stream, obj["geo_point"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["heading"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["period"], callback);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["proximity_notification_radius"], callback);
    break;
    case 261416433:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["correct_answers"].isNull()) | 
            (!obj["solution"].isNull() << 1) | 
            (!obj["solution_entities"].isNull() << 1) | 
        0), callback);
        writeTLPoll(stream, obj["poll"], callback);
        if (obj["flags"].toUInt() & 1) writeVector(stream, obj["correct_answers"], (void*) &writeByteArray);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["solution"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["solution_entities"], (void*) &writeTLMessageEntity);
    break;
    case -428884101:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["emoticon"], callback);
    break;
    }
}

void readTLInputChatPhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 480546647:
        obj["_"] = conId.toInt();
    break;
    case -968723890:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readTLInputFile(stream, obj["file"], callback);
        if (obj["flags"].toUInt() & 2) readTLInputFile(stream, obj["video"], callback);
        if (obj["flags"].toUInt() & 4) readDouble(stream, obj["video_start_ts"], callback);
    break;
    case -1991004873:
        obj["_"] = conId.toInt();
        readTLInputPhoto(stream, obj["id"], callback);
    break;
    }
    i = obj;
}

void writeTLInputChatPhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 480546647:
        writeInt32(stream, obj["_"], callback);
    break;
    case -968723890:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["file"].isNull()) | 
            (!obj["video"].isNull() << 1) | 
            (!obj["video_start_ts"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeTLInputFile(stream, obj["file"], callback);
        if (obj["flags"].toUInt() & 2) writeTLInputFile(stream, obj["video"], callback);
        if (obj["flags"].toUInt() & 4) writeDouble(stream, obj["video_start_ts"], callback);
    break;
    case -1991004873:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPhoto(stream, obj["id"], callback);
    break;
    }
}

void readTLInputGeoPoint(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -457104426:
        obj["_"] = conId.toInt();
    break;
    case 1210199983:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readDouble(stream, obj["lat"], callback);
        readDouble(stream, obj["long"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["accuracy_radius"], callback);
    break;
    }
    i = obj;
}

void writeTLInputGeoPoint(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -457104426:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1210199983:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["accuracy_radius"].isNull()) | 
        0), callback);
        writeDouble(stream, obj["lat"], callback);
        writeDouble(stream, obj["long"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["accuracy_radius"], callback);
    break;
    }
}

void readTLInputPhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 483901197:
        obj["_"] = conId.toInt();
    break;
    case 1001634122:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readByteArray(stream, obj["file_reference"], callback);
    break;
    }
    i = obj;
}

void writeTLInputPhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 483901197:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1001634122:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeByteArray(stream, obj["file_reference"], callback);
    break;
    }
}

void readTLInputFileLocation(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -539317279:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["volume_id"], callback);
        readInt32(stream, obj["local_id"], callback);
        readInt64(stream, obj["secret"], callback);
        readByteArray(stream, obj["file_reference"], callback);
    break;
    case -182231723:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case -1160743548:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readByteArray(stream, obj["file_reference"], callback);
        readString(stream, obj["thumb_size"], callback);
    break;
    case -876089816:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case 700340377:
        obj["_"] = conId.toInt();
    break;
    case 1075322878:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readByteArray(stream, obj["file_reference"], callback);
        readString(stream, obj["thumb_size"], callback);
    break;
    case -667654413:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readByteArray(stream, obj["file_reference"], callback);
        readInt64(stream, obj["volume_id"], callback);
        readInt32(stream, obj["local_id"], callback);
        readInt64(stream, obj["secret"], callback);
    break;
    case 925204121:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["big"] = true;
        readTLInputPeer(stream, obj["peer"], callback);
        readInt64(stream, obj["photo_id"], callback);
    break;
    case -1652231205:
        obj["_"] = conId.toInt();
        readTLInputStickerSet(stream, obj["stickerset"], callback);
        readInt32(stream, obj["thumb_version"], callback);
    break;
    case 93890858:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLInputGroupCall(stream, obj["call"], callback);
        readInt64(stream, obj["time_ms"], callback);
        readInt32(stream, obj["scale"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["video_channel"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["video_quality"], callback);
    break;
    }
    i = obj;
}

void writeTLInputFileLocation(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -539317279:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["volume_id"], callback);
        writeInt32(stream, obj["local_id"], callback);
        writeInt64(stream, obj["secret"], callback);
        writeByteArray(stream, obj["file_reference"], callback);
    break;
    case -182231723:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case -1160743548:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeByteArray(stream, obj["file_reference"], callback);
        writeString(stream, obj["thumb_size"], callback);
    break;
    case -876089816:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case 700340377:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1075322878:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeByteArray(stream, obj["file_reference"], callback);
        writeString(stream, obj["thumb_size"], callback);
    break;
    case -667654413:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeByteArray(stream, obj["file_reference"], callback);
        writeInt64(stream, obj["volume_id"], callback);
        writeInt32(stream, obj["local_id"], callback);
        writeInt64(stream, obj["secret"], callback);
    break;
    case 925204121:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["big"].isNull()) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt64(stream, obj["photo_id"], callback);
    break;
    case -1652231205:
        writeInt32(stream, obj["_"], callback);
        writeTLInputStickerSet(stream, obj["stickerset"], callback);
        writeInt32(stream, obj["thumb_version"], callback);
    break;
    case 93890858:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["video_channel"].isNull()) | 
            (!obj["video_quality"].isNull()) | 
        0), callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeInt64(stream, obj["time_ms"], callback);
        writeInt32(stream, obj["scale"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["video_channel"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["video_quality"], callback);
    break;
    }
}

void readTLPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1498486562:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
    break;
    case 918946202:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["chat_id"], callback);
    break;
    case -1566230754:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
    break;
    }
    i = obj;
}

void writeTLPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1498486562:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
    break;
    case 918946202:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
    break;
    case -1566230754:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
    break;
    }
}

void readTLStorageFileType(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1432995067:
        obj["_"] = conId.toInt();
    break;
    case 1086091090:
        obj["_"] = conId.toInt();
    break;
    case 8322574:
        obj["_"] = conId.toInt();
    break;
    case -891180321:
        obj["_"] = conId.toInt();
    break;
    case 172975040:
        obj["_"] = conId.toInt();
    break;
    case -1373745011:
        obj["_"] = conId.toInt();
    break;
    case 1384777335:
        obj["_"] = conId.toInt();
    break;
    case 1258941372:
        obj["_"] = conId.toInt();
    break;
    case -1278304028:
        obj["_"] = conId.toInt();
    break;
    case 276907596:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLStorageFileType(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1432995067:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1086091090:
        writeInt32(stream, obj["_"], callback);
    break;
    case 8322574:
        writeInt32(stream, obj["_"], callback);
    break;
    case -891180321:
        writeInt32(stream, obj["_"], callback);
    break;
    case 172975040:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1373745011:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1384777335:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1258941372:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1278304028:
        writeInt32(stream, obj["_"], callback);
    break;
    case 276907596:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLUser(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -742634630:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
    break;
    case 1073147056:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1024) obj["self"] = true;
        if (obj["flags"].toUInt() & 2048) obj["contact"] = true;
        if (obj["flags"].toUInt() & 4096) obj["mutual_contact"] = true;
        if (obj["flags"].toUInt() & 8192) obj["deleted"] = true;
        if (obj["flags"].toUInt() & 16384) obj["bot"] = true;
        if (obj["flags"].toUInt() & 32768) obj["bot_chat_history"] = true;
        if (obj["flags"].toUInt() & 65536) obj["bot_nochats"] = true;
        if (obj["flags"].toUInt() & 131072) obj["verified"] = true;
        if (obj["flags"].toUInt() & 262144) obj["restricted"] = true;
        if (obj["flags"].toUInt() & 1048576) obj["min"] = true;
        if (obj["flags"].toUInt() & 2097152) obj["bot_inline_geo"] = true;
        if (obj["flags"].toUInt() & 8388608) obj["support"] = true;
        if (obj["flags"].toUInt() & 16777216) obj["scam"] = true;
        if (obj["flags"].toUInt() & 33554432) obj["apply_min_photo"] = true;
        if (obj["flags"].toUInt() & 67108864) obj["fake"] = true;
        readInt64(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) readInt64(stream, obj["access_hash"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["first_name"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["last_name"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["username"], callback);
        if (obj["flags"].toUInt() & 16) readString(stream, obj["phone"], callback);
        if (obj["flags"].toUInt() & 32) readTLUserProfilePhoto(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 64) readTLUserStatus(stream, obj["status"], callback);
        if (obj["flags"].toUInt() & 16384) readInt32(stream, obj["bot_info_version"], callback);
        if (obj["flags"].toUInt() & 262144) readVector(stream, obj["restriction_reason"], (void*) &readTLRestrictionReason);
        if (obj["flags"].toUInt() & 524288) readString(stream, obj["bot_inline_placeholder"], callback);
        if (obj["flags"].toUInt() & 4194304) readString(stream, obj["lang_code"], callback);
    break;
    }
    i = obj;
}

void writeTLUser(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -742634630:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
    break;
    case 1073147056:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["self"].isNull() << 10) | 
            (!obj["contact"].isNull() << 11) | 
            (!obj["mutual_contact"].isNull() << 12) | 
            (!obj["deleted"].isNull() << 13) | 
            (!obj["bot"].isNull() << 14) | 
            (!obj["bot_chat_history"].isNull() << 15) | 
            (!obj["bot_nochats"].isNull() << 16) | 
            (!obj["verified"].isNull() << 17) | 
            (!obj["restricted"].isNull() << 18) | 
            (!obj["min"].isNull() << 20) | 
            (!obj["bot_inline_geo"].isNull() << 21) | 
            (!obj["support"].isNull() << 23) | 
            (!obj["scam"].isNull() << 24) | 
            (!obj["apply_min_photo"].isNull() << 25) | 
            (!obj["fake"].isNull() << 26) | 
            (!obj["access_hash"].isNull()) | 
            (!obj["first_name"].isNull() << 1) | 
            (!obj["last_name"].isNull() << 2) | 
            (!obj["username"].isNull() << 3) | 
            (!obj["phone"].isNull() << 4) | 
            (!obj["photo"].isNull() << 5) | 
            (!obj["status"].isNull() << 6) | 
            (!obj["bot_info_version"].isNull() << 14) | 
            (!obj["restriction_reason"].isNull() << 18) | 
            (!obj["bot_inline_placeholder"].isNull() << 19) | 
            (!obj["lang_code"].isNull() << 22) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) writeInt64(stream, obj["access_hash"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["first_name"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["last_name"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["username"], callback);
        if (obj["flags"].toUInt() & 16) writeString(stream, obj["phone"], callback);
        if (obj["flags"].toUInt() & 32) writeTLUserProfilePhoto(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 64) writeTLUserStatus(stream, obj["status"], callback);
        if (obj["flags"].toUInt() & 16384) writeInt32(stream, obj["bot_info_version"], callback);
        if (obj["flags"].toUInt() & 262144) writeVector(stream, obj["restriction_reason"], (void*) &writeTLRestrictionReason);
        if (obj["flags"].toUInt() & 524288) writeString(stream, obj["bot_inline_placeholder"], callback);
        if (obj["flags"].toUInt() & 4194304) writeString(stream, obj["lang_code"], callback);
    break;
    }
}

void readTLUserProfilePhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1326562017:
        obj["_"] = conId.toInt();
    break;
    case -2100168954:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["has_video"] = true;
        readInt64(stream, obj["photo_id"], callback);
        if (obj["flags"].toUInt() & 2) readByteArray(stream, obj["stripped_thumb"], callback);
        readInt32(stream, obj["dc_id"], callback);
    break;
    }
    i = obj;
}

void writeTLUserProfilePhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1326562017:
        writeInt32(stream, obj["_"], callback);
    break;
    case -2100168954:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["has_video"].isNull()) | 
            (!obj["stripped_thumb"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["photo_id"], callback);
        if (obj["flags"].toUInt() & 2) writeByteArray(stream, obj["stripped_thumb"], callback);
        writeInt32(stream, obj["dc_id"], callback);
    break;
    }
}

void readTLUserStatus(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 164646985:
        obj["_"] = conId.toInt();
    break;
    case -306628279:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["expires"], callback);
    break;
    case 9203775:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["was_online"], callback);
    break;
    case -496024847:
        obj["_"] = conId.toInt();
    break;
    case 129960444:
        obj["_"] = conId.toInt();
    break;
    case 2011940674:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLUserStatus(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 164646985:
        writeInt32(stream, obj["_"], callback);
    break;
    case -306628279:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["expires"], callback);
    break;
    case 9203775:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["was_online"], callback);
    break;
    case -496024847:
        writeInt32(stream, obj["_"], callback);
    break;
    case 129960444:
        writeInt32(stream, obj["_"], callback);
    break;
    case 2011940674:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLChat(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 693512293:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
    break;
    case 1103884886:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["creator"] = true;
        if (obj["flags"].toUInt() & 2) obj["kicked"] = true;
        if (obj["flags"].toUInt() & 4) obj["left"] = true;
        if (obj["flags"].toUInt() & 32) obj["deactivated"] = true;
        if (obj["flags"].toUInt() & 8388608) obj["call_active"] = true;
        if (obj["flags"].toUInt() & 16777216) obj["call_not_empty"] = true;
        if (obj["flags"].toUInt() & 33554432) obj["noforwards"] = true;
        readInt64(stream, obj["id"], callback);
        readString(stream, obj["title"], callback);
        readTLChatPhoto(stream, obj["photo"], callback);
        readInt32(stream, obj["participants_count"], callback);
        readInt32(stream, obj["date"], callback);
        readInt32(stream, obj["version"], callback);
        if (obj["flags"].toUInt() & 64) readTLInputChannel(stream, obj["migrated_to"], callback);
        if (obj["flags"].toUInt() & 16384) readTLChatAdminRights(stream, obj["admin_rights"], callback);
        if (obj["flags"].toUInt() & 262144) readTLChatBannedRights(stream, obj["default_banned_rights"], callback);
    break;
    case 1704108455:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readString(stream, obj["title"], callback);
    break;
    case -2107528095:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["creator"] = true;
        if (obj["flags"].toUInt() & 4) obj["left"] = true;
        if (obj["flags"].toUInt() & 32) obj["broadcast"] = true;
        if (obj["flags"].toUInt() & 128) obj["verified"] = true;
        if (obj["flags"].toUInt() & 256) obj["megagroup"] = true;
        if (obj["flags"].toUInt() & 512) obj["restricted"] = true;
        if (obj["flags"].toUInt() & 2048) obj["signatures"] = true;
        if (obj["flags"].toUInt() & 4096) obj["min"] = true;
        if (obj["flags"].toUInt() & 524288) obj["scam"] = true;
        if (obj["flags"].toUInt() & 1048576) obj["has_link"] = true;
        if (obj["flags"].toUInt() & 2097152) obj["has_geo"] = true;
        if (obj["flags"].toUInt() & 4194304) obj["slowmode_enabled"] = true;
        if (obj["flags"].toUInt() & 8388608) obj["call_active"] = true;
        if (obj["flags"].toUInt() & 16777216) obj["call_not_empty"] = true;
        if (obj["flags"].toUInt() & 33554432) obj["fake"] = true;
        if (obj["flags"].toUInt() & 67108864) obj["gigagroup"] = true;
        if (obj["flags"].toUInt() & 134217728) obj["noforwards"] = true;
        readInt64(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 8192) readInt64(stream, obj["access_hash"], callback);
        readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 64) readString(stream, obj["username"], callback);
        readTLChatPhoto(stream, obj["photo"], callback);
        readInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 512) readVector(stream, obj["restriction_reason"], (void*) &readTLRestrictionReason);
        if (obj["flags"].toUInt() & 16384) readTLChatAdminRights(stream, obj["admin_rights"], callback);
        if (obj["flags"].toUInt() & 32768) readTLChatBannedRights(stream, obj["banned_rights"], callback);
        if (obj["flags"].toUInt() & 262144) readTLChatBannedRights(stream, obj["default_banned_rights"], callback);
        if (obj["flags"].toUInt() & 131072) readInt32(stream, obj["participants_count"], callback);
    break;
    case 399807445:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 32) obj["broadcast"] = true;
        if (obj["flags"].toUInt() & 256) obj["megagroup"] = true;
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 65536) readInt32(stream, obj["until_date"], callback);
    break;
    }
    i = obj;
}

void writeTLChat(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 693512293:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
    break;
    case 1103884886:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["creator"].isNull()) | 
            (!obj["kicked"].isNull() << 1) | 
            (!obj["left"].isNull() << 2) | 
            (!obj["deactivated"].isNull() << 5) | 
            (!obj["call_active"].isNull() << 23) | 
            (!obj["call_not_empty"].isNull() << 24) | 
            (!obj["noforwards"].isNull() << 25) | 
            (!obj["migrated_to"].isNull() << 6) | 
            (!obj["admin_rights"].isNull() << 14) | 
            (!obj["default_banned_rights"].isNull() << 18) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeString(stream, obj["title"], callback);
        writeTLChatPhoto(stream, obj["photo"], callback);
        writeInt32(stream, obj["participants_count"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt32(stream, obj["version"], callback);
        if (obj["flags"].toUInt() & 64) writeTLInputChannel(stream, obj["migrated_to"], callback);
        if (obj["flags"].toUInt() & 16384) writeTLChatAdminRights(stream, obj["admin_rights"], callback);
        if (obj["flags"].toUInt() & 262144) writeTLChatBannedRights(stream, obj["default_banned_rights"], callback);
    break;
    case 1704108455:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeString(stream, obj["title"], callback);
    break;
    case -2107528095:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["creator"].isNull()) | 
            (!obj["left"].isNull() << 2) | 
            (!obj["broadcast"].isNull() << 5) | 
            (!obj["verified"].isNull() << 7) | 
            (!obj["megagroup"].isNull() << 8) | 
            (!obj["restricted"].isNull() << 9) | 
            (!obj["signatures"].isNull() << 11) | 
            (!obj["min"].isNull() << 12) | 
            (!obj["scam"].isNull() << 19) | 
            (!obj["has_link"].isNull() << 20) | 
            (!obj["has_geo"].isNull() << 21) | 
            (!obj["slowmode_enabled"].isNull() << 22) | 
            (!obj["call_active"].isNull() << 23) | 
            (!obj["call_not_empty"].isNull() << 24) | 
            (!obj["fake"].isNull() << 25) | 
            (!obj["gigagroup"].isNull() << 26) | 
            (!obj["noforwards"].isNull() << 27) | 
            (!obj["access_hash"].isNull() << 13) | 
            (!obj["username"].isNull() << 6) | 
            (!obj["restriction_reason"].isNull() << 9) | 
            (!obj["admin_rights"].isNull() << 14) | 
            (!obj["banned_rights"].isNull() << 15) | 
            (!obj["default_banned_rights"].isNull() << 18) | 
            (!obj["participants_count"].isNull() << 17) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 8192) writeInt64(stream, obj["access_hash"], callback);
        writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 64) writeString(stream, obj["username"], callback);
        writeTLChatPhoto(stream, obj["photo"], callback);
        writeInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 512) writeVector(stream, obj["restriction_reason"], (void*) &writeTLRestrictionReason);
        if (obj["flags"].toUInt() & 16384) writeTLChatAdminRights(stream, obj["admin_rights"], callback);
        if (obj["flags"].toUInt() & 32768) writeTLChatBannedRights(stream, obj["banned_rights"], callback);
        if (obj["flags"].toUInt() & 262144) writeTLChatBannedRights(stream, obj["default_banned_rights"], callback);
        if (obj["flags"].toUInt() & 131072) writeInt32(stream, obj["participants_count"], callback);
    break;
    case 399807445:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["broadcast"].isNull() << 5) | 
            (!obj["megagroup"].isNull() << 8) | 
            (!obj["until_date"].isNull() << 16) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 65536) writeInt32(stream, obj["until_date"], callback);
    break;
    }
}

void readTLChatFull(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -779165146:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 128) obj["can_set_username"] = true;
        if (obj["flags"].toUInt() & 256) obj["has_scheduled"] = true;
        readInt64(stream, obj["id"], callback);
        readString(stream, obj["about"], callback);
        readTLChatParticipants(stream, obj["participants"], callback);
        if (obj["flags"].toUInt() & 4) readTLPhoto(stream, obj["chat_photo"], callback);
        readTLPeerNotifySettings(stream, obj["notify_settings"], callback);
        if (obj["flags"].toUInt() & 8192) readTLExportedChatInvite(stream, obj["exported_invite"], callback);
        if (obj["flags"].toUInt() & 8) readVector(stream, obj["bot_info"], (void*) &readTLBotInfo);
        if (obj["flags"].toUInt() & 64) readInt32(stream, obj["pinned_msg_id"], callback);
        if (obj["flags"].toUInt() & 2048) readInt32(stream, obj["folder_id"], callback);
        if (obj["flags"].toUInt() & 4096) readTLInputGroupCall(stream, obj["call"], callback);
        if (obj["flags"].toUInt() & 16384) readInt32(stream, obj["ttl_period"], callback);
        if (obj["flags"].toUInt() & 32768) readTLPeer(stream, obj["groupcall_default_join_as"], callback);
        if (obj["flags"].toUInt() & 65536) readString(stream, obj["theme_emoticon"], callback);
        if (obj["flags"].toUInt() & 131072) readInt32(stream, obj["requests_pending"], callback);
        if (obj["flags"].toUInt() & 131072) readVector(stream, obj["recent_requesters"], (void*) &readInt64);
        if (obj["flags"].toUInt() & 262144) readVector(stream, obj["available_reactions"], (void*) &readString);
    break;
    case -516145888:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 8) obj["can_view_participants"] = true;
        if (obj["flags"].toUInt() & 64) obj["can_set_username"] = true;
        if (obj["flags"].toUInt() & 128) obj["can_set_stickers"] = true;
        if (obj["flags"].toUInt() & 1024) obj["hidden_prehistory"] = true;
        if (obj["flags"].toUInt() & 65536) obj["can_set_location"] = true;
        if (obj["flags"].toUInt() & 524288) obj["has_scheduled"] = true;
        if (obj["flags"].toUInt() & 1048576) obj["can_view_stats"] = true;
        if (obj["flags"].toUInt() & 4194304) obj["blocked"] = true;
        if (obj["flags"].toUInt() & 2147483648) obj["can_delete_history"] = true;
        readInt64(stream, obj["id"], callback);
        readString(stream, obj["about"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["participants_count"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["admins_count"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["kicked_count"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["banned_count"], callback);
        if (obj["flags"].toUInt() & 8192) readInt32(stream, obj["online_count"], callback);
        readInt32(stream, obj["read_inbox_max_id"], callback);
        readInt32(stream, obj["read_outbox_max_id"], callback);
        readInt32(stream, obj["unread_count"], callback);
        readTLPhoto(stream, obj["chat_photo"], callback);
        readTLPeerNotifySettings(stream, obj["notify_settings"], callback);
        if (obj["flags"].toUInt() & 8388608) readTLExportedChatInvite(stream, obj["exported_invite"], callback);
        readVector(stream, obj["bot_info"], (void*) &readTLBotInfo);
        if (obj["flags"].toUInt() & 16) readInt64(stream, obj["migrated_from_chat_id"], callback);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["migrated_from_max_id"], callback);
        if (obj["flags"].toUInt() & 32) readInt32(stream, obj["pinned_msg_id"], callback);
        if (obj["flags"].toUInt() & 256) readTLStickerSet(stream, obj["stickerset"], callback);
        if (obj["flags"].toUInt() & 512) readInt32(stream, obj["available_min_id"], callback);
        if (obj["flags"].toUInt() & 2048) readInt32(stream, obj["folder_id"], callback);
        if (obj["flags"].toUInt() & 16384) readInt64(stream, obj["linked_chat_id"], callback);
        if (obj["flags"].toUInt() & 32768) readTLChannelLocation(stream, obj["location"], callback);
        if (obj["flags"].toUInt() & 131072) readInt32(stream, obj["slowmode_seconds"], callback);
        if (obj["flags"].toUInt() & 262144) readInt32(stream, obj["slowmode_next_send_date"], callback);
        if (obj["flags"].toUInt() & 4096) readInt32(stream, obj["stats_dc"], callback);
        readInt32(stream, obj["pts"], callback);
        if (obj["flags"].toUInt() & 2097152) readTLInputGroupCall(stream, obj["call"], callback);
        if (obj["flags"].toUInt() & 16777216) readInt32(stream, obj["ttl_period"], callback);
        if (obj["flags"].toUInt() & 33554432) readVector(stream, obj["pending_suggestions"], (void*) &readString);
        if (obj["flags"].toUInt() & 67108864) readTLPeer(stream, obj["groupcall_default_join_as"], callback);
        if (obj["flags"].toUInt() & 134217728) readString(stream, obj["theme_emoticon"], callback);
        if (obj["flags"].toUInt() & 268435456) readInt32(stream, obj["requests_pending"], callback);
        if (obj["flags"].toUInt() & 268435456) readVector(stream, obj["recent_requesters"], (void*) &readInt64);
        if (obj["flags"].toUInt() & 536870912) readTLPeer(stream, obj["default_send_as"], callback);
        if (obj["flags"].toUInt() & 1073741824) readVector(stream, obj["available_reactions"], (void*) &readString);
    break;
    }
    i = obj;
}

void writeTLChatFull(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -779165146:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["can_set_username"].isNull() << 7) | 
            (!obj["has_scheduled"].isNull() << 8) | 
            (!obj["chat_photo"].isNull() << 2) | 
            (!obj["exported_invite"].isNull() << 13) | 
            (!obj["bot_info"].isNull() << 3) | 
            (!obj["pinned_msg_id"].isNull() << 6) | 
            (!obj["folder_id"].isNull() << 11) | 
            (!obj["call"].isNull() << 12) | 
            (!obj["ttl_period"].isNull() << 14) | 
            (!obj["groupcall_default_join_as"].isNull() << 15) | 
            (!obj["theme_emoticon"].isNull() << 16) | 
            (!obj["requests_pending"].isNull() << 17) | 
            (!obj["recent_requesters"].isNull() << 17) | 
            (!obj["available_reactions"].isNull() << 18) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeString(stream, obj["about"], callback);
        writeTLChatParticipants(stream, obj["participants"], callback);
        if (obj["flags"].toUInt() & 4) writeTLPhoto(stream, obj["chat_photo"], callback);
        writeTLPeerNotifySettings(stream, obj["notify_settings"], callback);
        if (obj["flags"].toUInt() & 8192) writeTLExportedChatInvite(stream, obj["exported_invite"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["bot_info"], (void*) &writeTLBotInfo);
        if (obj["flags"].toUInt() & 64) writeInt32(stream, obj["pinned_msg_id"], callback);
        if (obj["flags"].toUInt() & 2048) writeInt32(stream, obj["folder_id"], callback);
        if (obj["flags"].toUInt() & 4096) writeTLInputGroupCall(stream, obj["call"], callback);
        if (obj["flags"].toUInt() & 16384) writeInt32(stream, obj["ttl_period"], callback);
        if (obj["flags"].toUInt() & 32768) writeTLPeer(stream, obj["groupcall_default_join_as"], callback);
        if (obj["flags"].toUInt() & 65536) writeString(stream, obj["theme_emoticon"], callback);
        if (obj["flags"].toUInt() & 131072) writeInt32(stream, obj["requests_pending"], callback);
        if (obj["flags"].toUInt() & 131072) writeVector(stream, obj["recent_requesters"], (void*) &writeInt64);
        if (obj["flags"].toUInt() & 262144) writeVector(stream, obj["available_reactions"], (void*) &writeString);
    break;
    case -516145888:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["can_view_participants"].isNull() << 3) | 
            (!obj["can_set_username"].isNull() << 6) | 
            (!obj["can_set_stickers"].isNull() << 7) | 
            (!obj["hidden_prehistory"].isNull() << 10) | 
            (!obj["can_set_location"].isNull() << 16) | 
            (!obj["has_scheduled"].isNull() << 19) | 
            (!obj["can_view_stats"].isNull() << 20) | 
            (!obj["blocked"].isNull() << 22) | 
            (!obj["can_delete_history"].isNull() << 31) | 
            (!obj["participants_count"].isNull()) | 
            (!obj["admins_count"].isNull() << 1) | 
            (!obj["kicked_count"].isNull() << 2) | 
            (!obj["banned_count"].isNull() << 2) | 
            (!obj["online_count"].isNull() << 13) | 
            (!obj["exported_invite"].isNull() << 23) | 
            (!obj["migrated_from_chat_id"].isNull() << 4) | 
            (!obj["migrated_from_max_id"].isNull() << 4) | 
            (!obj["pinned_msg_id"].isNull() << 5) | 
            (!obj["stickerset"].isNull() << 8) | 
            (!obj["available_min_id"].isNull() << 9) | 
            (!obj["folder_id"].isNull() << 11) | 
            (!obj["linked_chat_id"].isNull() << 14) | 
            (!obj["location"].isNull() << 15) | 
            (!obj["slowmode_seconds"].isNull() << 17) | 
            (!obj["slowmode_next_send_date"].isNull() << 18) | 
            (!obj["stats_dc"].isNull() << 12) | 
            (!obj["call"].isNull() << 21) | 
            (!obj["ttl_period"].isNull() << 24) | 
            (!obj["pending_suggestions"].isNull() << 25) | 
            (!obj["groupcall_default_join_as"].isNull() << 26) | 
            (!obj["theme_emoticon"].isNull() << 27) | 
            (!obj["requests_pending"].isNull() << 28) | 
            (!obj["recent_requesters"].isNull() << 28) | 
            (!obj["default_send_as"].isNull() << 29) | 
            (!obj["available_reactions"].isNull() << 30) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeString(stream, obj["about"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["participants_count"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["admins_count"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["kicked_count"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["banned_count"], callback);
        if (obj["flags"].toUInt() & 8192) writeInt32(stream, obj["online_count"], callback);
        writeInt32(stream, obj["read_inbox_max_id"], callback);
        writeInt32(stream, obj["read_outbox_max_id"], callback);
        writeInt32(stream, obj["unread_count"], callback);
        writeTLPhoto(stream, obj["chat_photo"], callback);
        writeTLPeerNotifySettings(stream, obj["notify_settings"], callback);
        if (obj["flags"].toUInt() & 8388608) writeTLExportedChatInvite(stream, obj["exported_invite"], callback);
        writeVector(stream, obj["bot_info"], (void*) &writeTLBotInfo);
        if (obj["flags"].toUInt() & 16) writeInt64(stream, obj["migrated_from_chat_id"], callback);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["migrated_from_max_id"], callback);
        if (obj["flags"].toUInt() & 32) writeInt32(stream, obj["pinned_msg_id"], callback);
        if (obj["flags"].toUInt() & 256) writeTLStickerSet(stream, obj["stickerset"], callback);
        if (obj["flags"].toUInt() & 512) writeInt32(stream, obj["available_min_id"], callback);
        if (obj["flags"].toUInt() & 2048) writeInt32(stream, obj["folder_id"], callback);
        if (obj["flags"].toUInt() & 16384) writeInt64(stream, obj["linked_chat_id"], callback);
        if (obj["flags"].toUInt() & 32768) writeTLChannelLocation(stream, obj["location"], callback);
        if (obj["flags"].toUInt() & 131072) writeInt32(stream, obj["slowmode_seconds"], callback);
        if (obj["flags"].toUInt() & 262144) writeInt32(stream, obj["slowmode_next_send_date"], callback);
        if (obj["flags"].toUInt() & 4096) writeInt32(stream, obj["stats_dc"], callback);
        writeInt32(stream, obj["pts"], callback);
        if (obj["flags"].toUInt() & 2097152) writeTLInputGroupCall(stream, obj["call"], callback);
        if (obj["flags"].toUInt() & 16777216) writeInt32(stream, obj["ttl_period"], callback);
        if (obj["flags"].toUInt() & 33554432) writeVector(stream, obj["pending_suggestions"], (void*) &writeString);
        if (obj["flags"].toUInt() & 67108864) writeTLPeer(stream, obj["groupcall_default_join_as"], callback);
        if (obj["flags"].toUInt() & 134217728) writeString(stream, obj["theme_emoticon"], callback);
        if (obj["flags"].toUInt() & 268435456) writeInt32(stream, obj["requests_pending"], callback);
        if (obj["flags"].toUInt() & 268435456) writeVector(stream, obj["recent_requesters"], (void*) &writeInt64);
        if (obj["flags"].toUInt() & 536870912) writeTLPeer(stream, obj["default_send_as"], callback);
        if (obj["flags"].toUInt() & 1073741824) writeVector(stream, obj["available_reactions"], (void*) &writeString);
    break;
    }
}

void readTLChatParticipant(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1070776313:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt64(stream, obj["inviter_id"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    case -462696732:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
    break;
    case -1600962725:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt64(stream, obj["inviter_id"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    }
    i = obj;
}

void writeTLChatParticipant(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1070776313:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt64(stream, obj["inviter_id"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    case -462696732:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
    break;
    case -1600962725:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt64(stream, obj["inviter_id"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    }
}

void readTLChatParticipants(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2023500831:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["chat_id"], callback);
        if (obj["flags"].toUInt() & 1) readTLChatParticipant(stream, obj["self_participant"], callback);
    break;
    case 1018991608:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["chat_id"], callback);
        readVector(stream, obj["participants"], (void*) &readTLChatParticipant);
        readInt32(stream, obj["version"], callback);
    break;
    }
    i = obj;
}

void writeTLChatParticipants(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2023500831:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["self_participant"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["chat_id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLChatParticipant(stream, obj["self_participant"], callback);
    break;
    case 1018991608:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeVector(stream, obj["participants"], (void*) &writeTLChatParticipant);
        writeInt32(stream, obj["version"], callback);
    break;
    }
}

void readTLChatPhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 935395612:
        obj["_"] = conId.toInt();
    break;
    case 476978193:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["has_video"] = true;
        readInt64(stream, obj["photo_id"], callback);
        if (obj["flags"].toUInt() & 2) readByteArray(stream, obj["stripped_thumb"], callback);
        readInt32(stream, obj["dc_id"], callback);
    break;
    }
    i = obj;
}

void writeTLChatPhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 935395612:
        writeInt32(stream, obj["_"], callback);
    break;
    case 476978193:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["has_video"].isNull()) | 
            (!obj["stripped_thumb"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["photo_id"], callback);
        if (obj["flags"].toUInt() & 2) writeByteArray(stream, obj["stripped_thumb"], callback);
        writeInt32(stream, obj["dc_id"], callback);
    break;
    }
}

void readTLMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1868117372:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) readTLPeer(stream, obj["peer_id"], callback);
    break;
    case 940666592:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["out"] = true;
        if (obj["flags"].toUInt() & 16) obj["mentioned"] = true;
        if (obj["flags"].toUInt() & 32) obj["media_unread"] = true;
        if (obj["flags"].toUInt() & 8192) obj["silent"] = true;
        if (obj["flags"].toUInt() & 16384) obj["post"] = true;
        if (obj["flags"].toUInt() & 262144) obj["from_scheduled"] = true;
        if (obj["flags"].toUInt() & 524288) obj["legacy"] = true;
        if (obj["flags"].toUInt() & 2097152) obj["edit_hide"] = true;
        if (obj["flags"].toUInt() & 16777216) obj["pinned"] = true;
        if (obj["flags"].toUInt() & 67108864) obj["noforwards"] = true;
        readInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 256) readTLPeer(stream, obj["from_id"], callback);
        readTLPeer(stream, obj["peer_id"], callback);
        if (obj["flags"].toUInt() & 4) readTLMessageFwdHeader(stream, obj["fwd_from"], callback);
        if (obj["flags"].toUInt() & 2048) readInt64(stream, obj["via_bot_id"], callback);
        if (obj["flags"].toUInt() & 8) readTLMessageReplyHeader(stream, obj["reply_to"], callback);
        readInt32(stream, obj["date"], callback);
        readString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 512) readTLMessageMedia(stream, obj["media"], callback);
        if (obj["flags"].toUInt() & 64) readTLReplyMarkup(stream, obj["reply_markup"], callback);
        if (obj["flags"].toUInt() & 128) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        if (obj["flags"].toUInt() & 1024) readInt32(stream, obj["views"], callback);
        if (obj["flags"].toUInt() & 1024) readInt32(stream, obj["forwards"], callback);
        if (obj["flags"].toUInt() & 8388608) readTLMessageReplies(stream, obj["replies"], callback);
        if (obj["flags"].toUInt() & 32768) readInt32(stream, obj["edit_date"], callback);
        if (obj["flags"].toUInt() & 65536) readString(stream, obj["post_author"], callback);
        if (obj["flags"].toUInt() & 131072) readInt64(stream, obj["grouped_id"], callback);
        if (obj["flags"].toUInt() & 1048576) readTLMessageReactions(stream, obj["reactions"], callback);
        if (obj["flags"].toUInt() & 4194304) readVector(stream, obj["restriction_reason"], (void*) &readTLRestrictionReason);
        if (obj["flags"].toUInt() & 33554432) readInt32(stream, obj["ttl_period"], callback);
    break;
    case 721967202:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["out"] = true;
        if (obj["flags"].toUInt() & 16) obj["mentioned"] = true;
        if (obj["flags"].toUInt() & 32) obj["media_unread"] = true;
        if (obj["flags"].toUInt() & 8192) obj["silent"] = true;
        if (obj["flags"].toUInt() & 16384) obj["post"] = true;
        if (obj["flags"].toUInt() & 524288) obj["legacy"] = true;
        readInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 256) readTLPeer(stream, obj["from_id"], callback);
        readTLPeer(stream, obj["peer_id"], callback);
        if (obj["flags"].toUInt() & 8) readTLMessageReplyHeader(stream, obj["reply_to"], callback);
        readInt32(stream, obj["date"], callback);
        readTLMessageAction(stream, obj["action"], callback);
        if (obj["flags"].toUInt() & 33554432) readInt32(stream, obj["ttl_period"], callback);
    break;
    }
    i = obj;
}

void writeTLMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1868117372:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["peer_id"].isNull()) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLPeer(stream, obj["peer_id"], callback);
    break;
    case 940666592:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["out"].isNull() << 1) | 
            (!obj["mentioned"].isNull() << 4) | 
            (!obj["media_unread"].isNull() << 5) | 
            (!obj["silent"].isNull() << 13) | 
            (!obj["post"].isNull() << 14) | 
            (!obj["from_scheduled"].isNull() << 18) | 
            (!obj["legacy"].isNull() << 19) | 
            (!obj["edit_hide"].isNull() << 21) | 
            (!obj["pinned"].isNull() << 24) | 
            (!obj["noforwards"].isNull() << 26) | 
            (!obj["from_id"].isNull() << 8) | 
            (!obj["fwd_from"].isNull() << 2) | 
            (!obj["via_bot_id"].isNull() << 11) | 
            (!obj["reply_to"].isNull() << 3) | 
            (!obj["media"].isNull() << 9) | 
            (!obj["reply_markup"].isNull() << 6) | 
            (!obj["entities"].isNull() << 7) | 
            (!obj["views"].isNull() << 10) | 
            (!obj["forwards"].isNull() << 10) | 
            (!obj["replies"].isNull() << 23) | 
            (!obj["edit_date"].isNull() << 15) | 
            (!obj["post_author"].isNull() << 16) | 
            (!obj["grouped_id"].isNull() << 17) | 
            (!obj["reactions"].isNull() << 20) | 
            (!obj["restriction_reason"].isNull() << 22) | 
            (!obj["ttl_period"].isNull() << 25) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 256) writeTLPeer(stream, obj["from_id"], callback);
        writeTLPeer(stream, obj["peer_id"], callback);
        if (obj["flags"].toUInt() & 4) writeTLMessageFwdHeader(stream, obj["fwd_from"], callback);
        if (obj["flags"].toUInt() & 2048) writeInt64(stream, obj["via_bot_id"], callback);
        if (obj["flags"].toUInt() & 8) writeTLMessageReplyHeader(stream, obj["reply_to"], callback);
        writeInt32(stream, obj["date"], callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 512) writeTLMessageMedia(stream, obj["media"], callback);
        if (obj["flags"].toUInt() & 64) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
        if (obj["flags"].toUInt() & 128) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 1024) writeInt32(stream, obj["views"], callback);
        if (obj["flags"].toUInt() & 1024) writeInt32(stream, obj["forwards"], callback);
        if (obj["flags"].toUInt() & 8388608) writeTLMessageReplies(stream, obj["replies"], callback);
        if (obj["flags"].toUInt() & 32768) writeInt32(stream, obj["edit_date"], callback);
        if (obj["flags"].toUInt() & 65536) writeString(stream, obj["post_author"], callback);
        if (obj["flags"].toUInt() & 131072) writeInt64(stream, obj["grouped_id"], callback);
        if (obj["flags"].toUInt() & 1048576) writeTLMessageReactions(stream, obj["reactions"], callback);
        if (obj["flags"].toUInt() & 4194304) writeVector(stream, obj["restriction_reason"], (void*) &writeTLRestrictionReason);
        if (obj["flags"].toUInt() & 33554432) writeInt32(stream, obj["ttl_period"], callback);
    break;
    case 721967202:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["out"].isNull() << 1) | 
            (!obj["mentioned"].isNull() << 4) | 
            (!obj["media_unread"].isNull() << 5) | 
            (!obj["silent"].isNull() << 13) | 
            (!obj["post"].isNull() << 14) | 
            (!obj["legacy"].isNull() << 19) | 
            (!obj["from_id"].isNull() << 8) | 
            (!obj["reply_to"].isNull() << 3) | 
            (!obj["ttl_period"].isNull() << 25) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 256) writeTLPeer(stream, obj["from_id"], callback);
        writeTLPeer(stream, obj["peer_id"], callback);
        if (obj["flags"].toUInt() & 8) writeTLMessageReplyHeader(stream, obj["reply_to"], callback);
        writeInt32(stream, obj["date"], callback);
        writeTLMessageAction(stream, obj["action"], callback);
        if (obj["flags"].toUInt() & 33554432) writeInt32(stream, obj["ttl_period"], callback);
    break;
    }
}

void readTLMessageMedia(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1038967584:
        obj["_"] = conId.toInt();
    break;
    case 1766936791:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readTLPhoto(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["ttl_seconds"], callback);
    break;
    case 1457575028:
        obj["_"] = conId.toInt();
        readTLGeoPoint(stream, obj["geo"], callback);
    break;
    case 1882335561:
        obj["_"] = conId.toInt();
        readString(stream, obj["phone_number"], callback);
        readString(stream, obj["first_name"], callback);
        readString(stream, obj["last_name"], callback);
        readString(stream, obj["vcard"], callback);
        readInt64(stream, obj["user_id"], callback);
    break;
    case -1618676578:
        obj["_"] = conId.toInt();
    break;
    case -1666158377:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["ttl_seconds"], callback);
    break;
    case -1557277184:
        obj["_"] = conId.toInt();
        readTLWebPage(stream, obj["webpage"], callback);
    break;
    case 784356159:
        obj["_"] = conId.toInt();
        readTLGeoPoint(stream, obj["geo"], callback);
        readString(stream, obj["title"], callback);
        readString(stream, obj["address"], callback);
        readString(stream, obj["provider"], callback);
        readString(stream, obj["venue_id"], callback);
        readString(stream, obj["venue_type"], callback);
    break;
    case -38694904:
        obj["_"] = conId.toInt();
        readTLGame(stream, obj["game"], callback);
    break;
    case -2074799289:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["shipping_address_requested"] = true;
        if (obj["flags"].toUInt() & 8) obj["test"] = true;
        readString(stream, obj["title"], callback);
        readString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 1) readTLWebDocument(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["receipt_msg_id"], callback);
        readString(stream, obj["currency"], callback);
        readInt64(stream, obj["total_amount"], callback);
        readString(stream, obj["start_param"], callback);
    break;
    case -1186937242:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLGeoPoint(stream, obj["geo"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["heading"], callback);
        readInt32(stream, obj["period"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["proximity_notification_radius"], callback);
    break;
    case 1272375192:
        obj["_"] = conId.toInt();
        readTLPoll(stream, obj["poll"], callback);
        readTLPollResults(stream, obj["results"], callback);
    break;
    case 1065280907:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["value"], callback);
        readString(stream, obj["emoticon"], callback);
    break;
    }
    i = obj;
}

void writeTLMessageMedia(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1038967584:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1766936791:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["photo"].isNull()) | 
            (!obj["ttl_seconds"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeTLPhoto(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["ttl_seconds"], callback);
    break;
    case 1457575028:
        writeInt32(stream, obj["_"], callback);
        writeTLGeoPoint(stream, obj["geo"], callback);
    break;
    case 1882335561:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeString(stream, obj["first_name"], callback);
        writeString(stream, obj["last_name"], callback);
        writeString(stream, obj["vcard"], callback);
        writeInt64(stream, obj["user_id"], callback);
    break;
    case -1618676578:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1666158377:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["document"].isNull()) | 
            (!obj["ttl_seconds"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["ttl_seconds"], callback);
    break;
    case -1557277184:
        writeInt32(stream, obj["_"], callback);
        writeTLWebPage(stream, obj["webpage"], callback);
    break;
    case 784356159:
        writeInt32(stream, obj["_"], callback);
        writeTLGeoPoint(stream, obj["geo"], callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["address"], callback);
        writeString(stream, obj["provider"], callback);
        writeString(stream, obj["venue_id"], callback);
        writeString(stream, obj["venue_type"], callback);
    break;
    case -38694904:
        writeInt32(stream, obj["_"], callback);
        writeTLGame(stream, obj["game"], callback);
    break;
    case -2074799289:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["shipping_address_requested"].isNull() << 1) | 
            (!obj["test"].isNull() << 3) | 
            (!obj["photo"].isNull()) | 
            (!obj["receipt_msg_id"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 1) writeTLWebDocument(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["receipt_msg_id"], callback);
        writeString(stream, obj["currency"], callback);
        writeInt64(stream, obj["total_amount"], callback);
        writeString(stream, obj["start_param"], callback);
    break;
    case -1186937242:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["heading"].isNull()) | 
            (!obj["proximity_notification_radius"].isNull() << 1) | 
        0), callback);
        writeTLGeoPoint(stream, obj["geo"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["heading"], callback);
        writeInt32(stream, obj["period"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["proximity_notification_radius"], callback);
    break;
    case 1272375192:
        writeInt32(stream, obj["_"], callback);
        writeTLPoll(stream, obj["poll"], callback);
        writeTLPollResults(stream, obj["results"], callback);
    break;
    case 1065280907:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["value"], callback);
        writeString(stream, obj["emoticon"], callback);
    break;
    }
}

void readTLMessageAction(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1230047312:
        obj["_"] = conId.toInt();
    break;
    case -1119368275:
        obj["_"] = conId.toInt();
        readString(stream, obj["title"], callback);
        readVector(stream, obj["users"], (void*) &readInt64);
    break;
    case -1247687078:
        obj["_"] = conId.toInt();
        readString(stream, obj["title"], callback);
    break;
    case 2144015272:
        obj["_"] = conId.toInt();
        readTLPhoto(stream, obj["photo"], callback);
    break;
    case -1780220945:
        obj["_"] = conId.toInt();
    break;
    case 365886720:
        obj["_"] = conId.toInt();
        readVector(stream, obj["users"], (void*) &readInt64);
    break;
    case -1539362612:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
    break;
    case 51520707:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["inviter_id"], callback);
    break;
    case -1781355374:
        obj["_"] = conId.toInt();
        readString(stream, obj["title"], callback);
    break;
    case -519864430:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
    break;
    case -365344535:
        obj["_"] = conId.toInt();
        readString(stream, obj["title"], callback);
        readInt64(stream, obj["chat_id"], callback);
    break;
    case -1799538451:
        obj["_"] = conId.toInt();
    break;
    case -1615153660:
        obj["_"] = conId.toInt();
    break;
    case -1834538890:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["game_id"], callback);
        readInt32(stream, obj["score"], callback);
    break;
    case -1892568281:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["currency"], callback);
        readInt64(stream, obj["total_amount"], callback);
        readByteArray(stream, obj["payload"], callback);
        if (obj["flags"].toUInt() & 1) readTLPaymentRequestedInfo(stream, obj["info"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["shipping_option_id"], callback);
        readTLPaymentCharge(stream, obj["charge"], callback);
    break;
    case 1080663248:
        obj["_"] = conId.toInt();
        readString(stream, obj["currency"], callback);
        readInt64(stream, obj["total_amount"], callback);
    break;
    case -2132731265:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 4) obj["video"] = true;
        readInt64(stream, obj["call_id"], callback);
        if (obj["flags"].toUInt() & 1) readTLPhoneCallDiscardReason(stream, obj["reason"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["duration"], callback);
    break;
    case 1200788123:
        obj["_"] = conId.toInt();
    break;
    case -85549226:
        obj["_"] = conId.toInt();
        readString(stream, obj["message"], callback);
    break;
    case -1410748418:
        obj["_"] = conId.toInt();
        readString(stream, obj["domain"], callback);
    break;
    case 455635795:
        obj["_"] = conId.toInt();
        readVector(stream, obj["values"], (void*) &readTLSecureValue);
        readTLSecureCredentialsEncrypted(stream, obj["credentials"], callback);
    break;
    case -648257196:
        obj["_"] = conId.toInt();
        readVector(stream, obj["types"], (void*) &readTLSecureValueType);
    break;
    case -202219658:
        obj["_"] = conId.toInt();
    break;
    case -1730095465:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["from_id"], callback);
        readTLPeer(stream, obj["to_id"], callback);
        readInt32(stream, obj["distance"], callback);
    break;
    case 2047704898:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLInputGroupCall(stream, obj["call"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["duration"], callback);
    break;
    case 1345295095:
        obj["_"] = conId.toInt();
        readTLInputGroupCall(stream, obj["call"], callback);
        readVector(stream, obj["users"], (void*) &readInt64);
    break;
    case -1441072131:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["period"], callback);
    break;
    case -1281329567:
        obj["_"] = conId.toInt();
        readTLInputGroupCall(stream, obj["call"], callback);
        readInt32(stream, obj["schedule_date"], callback);
    break;
    case -1434950843:
        obj["_"] = conId.toInt();
        readString(stream, obj["emoticon"], callback);
    break;
    case -339958837:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLMessageAction(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1230047312:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1119368275:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["title"], callback);
        writeVector(stream, obj["users"], (void*) &writeInt64);
    break;
    case -1247687078:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["title"], callback);
    break;
    case 2144015272:
        writeInt32(stream, obj["_"], callback);
        writeTLPhoto(stream, obj["photo"], callback);
    break;
    case -1780220945:
        writeInt32(stream, obj["_"], callback);
    break;
    case 365886720:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["users"], (void*) &writeInt64);
    break;
    case -1539362612:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
    break;
    case 51520707:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["inviter_id"], callback);
    break;
    case -1781355374:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["title"], callback);
    break;
    case -519864430:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
    break;
    case -365344535:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["title"], callback);
        writeInt64(stream, obj["chat_id"], callback);
    break;
    case -1799538451:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1615153660:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1834538890:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["game_id"], callback);
        writeInt32(stream, obj["score"], callback);
    break;
    case -1892568281:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["info"].isNull()) | 
            (!obj["shipping_option_id"].isNull() << 1) | 
        0), callback);
        writeString(stream, obj["currency"], callback);
        writeInt64(stream, obj["total_amount"], callback);
        writeByteArray(stream, obj["payload"], callback);
        if (obj["flags"].toUInt() & 1) writeTLPaymentRequestedInfo(stream, obj["info"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["shipping_option_id"], callback);
        writeTLPaymentCharge(stream, obj["charge"], callback);
    break;
    case 1080663248:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["currency"], callback);
        writeInt64(stream, obj["total_amount"], callback);
    break;
    case -2132731265:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["video"].isNull() << 2) | 
            (!obj["reason"].isNull()) | 
            (!obj["duration"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["call_id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLPhoneCallDiscardReason(stream, obj["reason"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["duration"], callback);
    break;
    case 1200788123:
        writeInt32(stream, obj["_"], callback);
    break;
    case -85549226:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["message"], callback);
    break;
    case -1410748418:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["domain"], callback);
    break;
    case 455635795:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["values"], (void*) &writeTLSecureValue);
        writeTLSecureCredentialsEncrypted(stream, obj["credentials"], callback);
    break;
    case -648257196:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["types"], (void*) &writeTLSecureValueType);
    break;
    case -202219658:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1730095465:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["from_id"], callback);
        writeTLPeer(stream, obj["to_id"], callback);
        writeInt32(stream, obj["distance"], callback);
    break;
    case 2047704898:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["duration"].isNull()) | 
        0), callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["duration"], callback);
    break;
    case 1345295095:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeVector(stream, obj["users"], (void*) &writeInt64);
    break;
    case -1441072131:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["period"], callback);
    break;
    case -1281329567:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeInt32(stream, obj["schedule_date"], callback);
    break;
    case -1434950843:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["emoticon"], callback);
    break;
    case -339958837:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLDialog(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1460809483:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 4) obj["pinned"] = true;
        if (obj["flags"].toUInt() & 8) obj["unread_mark"] = true;
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["top_message"], callback);
        readInt32(stream, obj["read_inbox_max_id"], callback);
        readInt32(stream, obj["read_outbox_max_id"], callback);
        readInt32(stream, obj["unread_count"], callback);
        readInt32(stream, obj["unread_mentions_count"], callback);
        readInt32(stream, obj["unread_reactions_count"], callback);
        readTLPeerNotifySettings(stream, obj["notify_settings"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["pts"], callback);
        if (obj["flags"].toUInt() & 2) readTLDraftMessage(stream, obj["draft"], callback);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["folder_id"], callback);
    break;
    case 1908216652:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 4) obj["pinned"] = true;
        readTLFolder(stream, obj["folder"], callback);
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["top_message"], callback);
        readInt32(stream, obj["unread_muted_peers_count"], callback);
        readInt32(stream, obj["unread_unmuted_peers_count"], callback);
        readInt32(stream, obj["unread_muted_messages_count"], callback);
        readInt32(stream, obj["unread_unmuted_messages_count"], callback);
    break;
    }
    i = obj;
}

void writeTLDialog(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1460809483:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["pinned"].isNull() << 2) | 
            (!obj["unread_mark"].isNull() << 3) | 
            (!obj["pts"].isNull()) | 
            (!obj["draft"].isNull() << 1) | 
            (!obj["folder_id"].isNull() << 4) | 
        0), callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["top_message"], callback);
        writeInt32(stream, obj["read_inbox_max_id"], callback);
        writeInt32(stream, obj["read_outbox_max_id"], callback);
        writeInt32(stream, obj["unread_count"], callback);
        writeInt32(stream, obj["unread_mentions_count"], callback);
        writeInt32(stream, obj["unread_reactions_count"], callback);
        writeTLPeerNotifySettings(stream, obj["notify_settings"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["pts"], callback);
        if (obj["flags"].toUInt() & 2) writeTLDraftMessage(stream, obj["draft"], callback);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["folder_id"], callback);
    break;
    case 1908216652:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["pinned"].isNull() << 2) | 
        0), callback);
        writeTLFolder(stream, obj["folder"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["top_message"], callback);
        writeInt32(stream, obj["unread_muted_peers_count"], callback);
        writeInt32(stream, obj["unread_unmuted_peers_count"], callback);
        writeInt32(stream, obj["unread_muted_messages_count"], callback);
        writeInt32(stream, obj["unread_unmuted_messages_count"], callback);
    break;
    }
}

void readTLPhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 590459437:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
    break;
    case -82216347:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["has_stickers"] = true;
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readByteArray(stream, obj["file_reference"], callback);
        readInt32(stream, obj["date"], callback);
        readVector(stream, obj["sizes"], (void*) &readTLPhotoSize);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["video_sizes"], (void*) &readTLVideoSize);
        readInt32(stream, obj["dc_id"], callback);
    break;
    }
    i = obj;
}

void writeTLPhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 590459437:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
    break;
    case -82216347:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["has_stickers"].isNull()) | 
            (!obj["video_sizes"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeByteArray(stream, obj["file_reference"], callback);
        writeInt32(stream, obj["date"], callback);
        writeVector(stream, obj["sizes"], (void*) &writeTLPhotoSize);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["video_sizes"], (void*) &writeTLVideoSize);
        writeInt32(stream, obj["dc_id"], callback);
    break;
    }
}

void readTLPhotoSize(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 236446268:
        obj["_"] = conId.toInt();
        readString(stream, obj["type"], callback);
    break;
    case 1976012384:
        obj["_"] = conId.toInt();
        readString(stream, obj["type"], callback);
        readInt32(stream, obj["w"], callback);
        readInt32(stream, obj["h"], callback);
        readInt32(stream, obj["size"], callback);
    break;
    case 35527382:
        obj["_"] = conId.toInt();
        readString(stream, obj["type"], callback);
        readInt32(stream, obj["w"], callback);
        readInt32(stream, obj["h"], callback);
        readByteArray(stream, obj["bytes"], callback);
    break;
    case -525288402:
        obj["_"] = conId.toInt();
        readString(stream, obj["type"], callback);
        readByteArray(stream, obj["bytes"], callback);
    break;
    case -96535659:
        obj["_"] = conId.toInt();
        readString(stream, obj["type"], callback);
        readInt32(stream, obj["w"], callback);
        readInt32(stream, obj["h"], callback);
        readVector(stream, obj["sizes"], (void*) &readInt32);
    break;
    case -668906175:
        obj["_"] = conId.toInt();
        readString(stream, obj["type"], callback);
        readByteArray(stream, obj["bytes"], callback);
    break;
    }
    i = obj;
}

void writeTLPhotoSize(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 236446268:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["type"], callback);
    break;
    case 1976012384:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["type"], callback);
        writeInt32(stream, obj["w"], callback);
        writeInt32(stream, obj["h"], callback);
        writeInt32(stream, obj["size"], callback);
    break;
    case 35527382:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["type"], callback);
        writeInt32(stream, obj["w"], callback);
        writeInt32(stream, obj["h"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    case -525288402:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["type"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    case -96535659:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["type"], callback);
        writeInt32(stream, obj["w"], callback);
        writeInt32(stream, obj["h"], callback);
        writeVector(stream, obj["sizes"], (void*) &writeInt32);
    break;
    case -668906175:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["type"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    }
}

void readTLGeoPoint(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 286776671:
        obj["_"] = conId.toInt();
    break;
    case -1297942941:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readDouble(stream, obj["long"], callback);
        readDouble(stream, obj["lat"], callback);
        readInt64(stream, obj["access_hash"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["accuracy_radius"], callback);
    break;
    }
    i = obj;
}

void writeTLGeoPoint(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 286776671:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1297942941:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["accuracy_radius"].isNull()) | 
        0), callback);
        writeDouble(stream, obj["long"], callback);
        writeDouble(stream, obj["lat"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["accuracy_radius"], callback);
    break;
    }
}

void readTLAuthSentCode(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1577067778:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLAuthSentCodeType(stream, obj["type"], callback);
        readString(stream, obj["phone_code_hash"], callback);
        if (obj["flags"].toUInt() & 2) readTLAuthCodeType(stream, obj["next_type"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["timeout"], callback);
    break;
    }
    i = obj;
}

void writeTLAuthSentCode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1577067778:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["next_type"].isNull() << 1) | 
            (!obj["timeout"].isNull() << 2) | 
        0), callback);
        writeTLAuthSentCodeType(stream, obj["type"], callback);
        writeString(stream, obj["phone_code_hash"], callback);
        if (obj["flags"].toUInt() & 2) writeTLAuthCodeType(stream, obj["next_type"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["timeout"], callback);
    break;
    }
}

void readTLAuthAuthorization(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 872119224:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["setup_password_required"] = true;
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["otherwise_relogin_days"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["tmp_sessions"], callback);
        readTLUser(stream, obj["user"], callback);
    break;
    case 1148485274:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readTLHelpTermsOfService(stream, obj["terms_of_service"], callback);
    break;
    }
    i = obj;
}

void writeTLAuthAuthorization(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 872119224:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["setup_password_required"].isNull() << 1) | 
            (!obj["otherwise_relogin_days"].isNull() << 1) | 
            (!obj["tmp_sessions"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["otherwise_relogin_days"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["tmp_sessions"], callback);
        writeTLUser(stream, obj["user"], callback);
    break;
    case 1148485274:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["terms_of_service"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeTLHelpTermsOfService(stream, obj["terms_of_service"], callback);
    break;
    }
}

void readTLAuthExportedAuthorization(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1271602504:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readByteArray(stream, obj["bytes"], callback);
    break;
    }
    i = obj;
}

void writeTLAuthExportedAuthorization(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1271602504:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    }
}

void readTLInputNotifyPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1195615476:
        obj["_"] = conId.toInt();
        readTLInputPeer(stream, obj["peer"], callback);
    break;
    case 423314455:
        obj["_"] = conId.toInt();
    break;
    case 1251338318:
        obj["_"] = conId.toInt();
    break;
    case -1311015810:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLInputNotifyPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1195615476:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    case 423314455:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1251338318:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1311015810:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLInputPeerNotifySettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1673717362:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readBool(stream, obj["show_previews"], callback);
        if (obj["flags"].toUInt() & 2) readBool(stream, obj["silent"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["mute_until"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["sound"], callback);
    break;
    }
    i = obj;
}

void writeTLInputPeerNotifySettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1673717362:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["show_previews"].isNull()) | 
            (!obj["silent"].isNull() << 1) | 
            (!obj["mute_until"].isNull() << 2) | 
            (!obj["sound"].isNull() << 3) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeBool(stream, obj["show_previews"], callback);
        if (obj["flags"].toUInt() & 2) writeBool(stream, obj["silent"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["mute_until"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["sound"], callback);
    break;
    }
}

void readTLPeerNotifySettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1353671392:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readBool(stream, obj["show_previews"], callback);
        if (obj["flags"].toUInt() & 2) readBool(stream, obj["silent"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["mute_until"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["sound"], callback);
    break;
    }
    i = obj;
}

void writeTLPeerNotifySettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1353671392:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["show_previews"].isNull()) | 
            (!obj["silent"].isNull() << 1) | 
            (!obj["mute_until"].isNull() << 2) | 
            (!obj["sound"].isNull() << 3) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeBool(stream, obj["show_previews"], callback);
        if (obj["flags"].toUInt() & 2) writeBool(stream, obj["silent"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["mute_until"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["sound"], callback);
    break;
    }
}

void readTLPeerSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1525149427:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["report_spam"] = true;
        if (obj["flags"].toUInt() & 2) obj["add_contact"] = true;
        if (obj["flags"].toUInt() & 4) obj["block_contact"] = true;
        if (obj["flags"].toUInt() & 8) obj["share_contact"] = true;
        if (obj["flags"].toUInt() & 16) obj["need_contacts_exception"] = true;
        if (obj["flags"].toUInt() & 32) obj["report_geo"] = true;
        if (obj["flags"].toUInt() & 128) obj["autoarchived"] = true;
        if (obj["flags"].toUInt() & 256) obj["invite_members"] = true;
        if (obj["flags"].toUInt() & 1024) obj["request_chat_broadcast"] = true;
        if (obj["flags"].toUInt() & 64) readInt32(stream, obj["geo_distance"], callback);
        if (obj["flags"].toUInt() & 512) readString(stream, obj["request_chat_title"], callback);
        if (obj["flags"].toUInt() & 512) readInt32(stream, obj["request_chat_date"], callback);
    break;
    }
    i = obj;
}

void writeTLPeerSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1525149427:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["report_spam"].isNull()) | 
            (!obj["add_contact"].isNull() << 1) | 
            (!obj["block_contact"].isNull() << 2) | 
            (!obj["share_contact"].isNull() << 3) | 
            (!obj["need_contacts_exception"].isNull() << 4) | 
            (!obj["report_geo"].isNull() << 5) | 
            (!obj["autoarchived"].isNull() << 7) | 
            (!obj["invite_members"].isNull() << 8) | 
            (!obj["request_chat_broadcast"].isNull() << 10) | 
            (!obj["geo_distance"].isNull() << 6) | 
            (!obj["request_chat_title"].isNull() << 9) | 
            (!obj["request_chat_date"].isNull() << 9) | 
        0), callback);
        if (obj["flags"].toUInt() & 64) writeInt32(stream, obj["geo_distance"], callback);
        if (obj["flags"].toUInt() & 512) writeString(stream, obj["request_chat_title"], callback);
        if (obj["flags"].toUInt() & 512) writeInt32(stream, obj["request_chat_date"], callback);
    break;
    }
}

void readTLWallPaper(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1539849235:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["creator"] = true;
        if (obj["flags"].toUInt() & 2) obj["default"] = true;
        if (obj["flags"].toUInt() & 8) obj["pattern"] = true;
        if (obj["flags"].toUInt() & 16) obj["dark"] = true;
        readInt64(stream, obj["access_hash"], callback);
        readString(stream, obj["slug"], callback);
        readTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 4) readTLWallPaperSettings(stream, obj["settings"], callback);
    break;
    case -528465642:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["default"] = true;
        if (obj["flags"].toUInt() & 16) obj["dark"] = true;
        if (obj["flags"].toUInt() & 4) readTLWallPaperSettings(stream, obj["settings"], callback);
    break;
    }
    i = obj;
}

void writeTLWallPaper(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1539849235:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["creator"].isNull()) | 
            (!obj["default"].isNull() << 1) | 
            (!obj["pattern"].isNull() << 3) | 
            (!obj["dark"].isNull() << 4) | 
            (!obj["settings"].isNull() << 2) | 
        0), callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeString(stream, obj["slug"], callback);
        writeTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 4) writeTLWallPaperSettings(stream, obj["settings"], callback);
    break;
    case -528465642:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["default"].isNull() << 1) | 
            (!obj["dark"].isNull() << 4) | 
            (!obj["settings"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 4) writeTLWallPaperSettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLReportReason(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1490799288:
        obj["_"] = conId.toInt();
    break;
    case 505595789:
        obj["_"] = conId.toInt();
    break;
    case 777640226:
        obj["_"] = conId.toInt();
    break;
    case -1376497949:
        obj["_"] = conId.toInt();
    break;
    case -1041980751:
        obj["_"] = conId.toInt();
    break;
    case -1685456582:
        obj["_"] = conId.toInt();
    break;
    case -606798099:
        obj["_"] = conId.toInt();
    break;
    case -170010905:
        obj["_"] = conId.toInt();
    break;
    case 177124030:
        obj["_"] = conId.toInt();
    break;
    case -1631091139:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLReportReason(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1490799288:
        writeInt32(stream, obj["_"], callback);
    break;
    case 505595789:
        writeInt32(stream, obj["_"], callback);
    break;
    case 777640226:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1376497949:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1041980751:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1685456582:
        writeInt32(stream, obj["_"], callback);
    break;
    case -606798099:
        writeInt32(stream, obj["_"], callback);
    break;
    case -170010905:
        writeInt32(stream, obj["_"], callback);
    break;
    case 177124030:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1631091139:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLUserFull(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -818518751:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["blocked"] = true;
        if (obj["flags"].toUInt() & 16) obj["phone_calls_available"] = true;
        if (obj["flags"].toUInt() & 32) obj["phone_calls_private"] = true;
        if (obj["flags"].toUInt() & 128) obj["can_pin_message"] = true;
        if (obj["flags"].toUInt() & 4096) obj["has_scheduled"] = true;
        if (obj["flags"].toUInt() & 8192) obj["video_calls_available"] = true;
        readInt64(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["about"], callback);
        readTLPeerSettings(stream, obj["settings"], callback);
        if (obj["flags"].toUInt() & 4) readTLPhoto(stream, obj["profile_photo"], callback);
        readTLPeerNotifySettings(stream, obj["notify_settings"], callback);
        if (obj["flags"].toUInt() & 8) readTLBotInfo(stream, obj["bot_info"], callback);
        if (obj["flags"].toUInt() & 64) readInt32(stream, obj["pinned_msg_id"], callback);
        readInt32(stream, obj["common_chats_count"], callback);
        if (obj["flags"].toUInt() & 2048) readInt32(stream, obj["folder_id"], callback);
        if (obj["flags"].toUInt() & 16384) readInt32(stream, obj["ttl_period"], callback);
        if (obj["flags"].toUInt() & 32768) readString(stream, obj["theme_emoticon"], callback);
        if (obj["flags"].toUInt() & 65536) readString(stream, obj["private_forward_name"], callback);
    break;
    }
    i = obj;
}

void writeTLUserFull(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -818518751:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["blocked"].isNull()) | 
            (!obj["phone_calls_available"].isNull() << 4) | 
            (!obj["phone_calls_private"].isNull() << 5) | 
            (!obj["can_pin_message"].isNull() << 7) | 
            (!obj["has_scheduled"].isNull() << 12) | 
            (!obj["video_calls_available"].isNull() << 13) | 
            (!obj["about"].isNull() << 1) | 
            (!obj["profile_photo"].isNull() << 2) | 
            (!obj["bot_info"].isNull() << 3) | 
            (!obj["pinned_msg_id"].isNull() << 6) | 
            (!obj["folder_id"].isNull() << 11) | 
            (!obj["ttl_period"].isNull() << 14) | 
            (!obj["theme_emoticon"].isNull() << 15) | 
            (!obj["private_forward_name"].isNull() << 16) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["about"], callback);
        writeTLPeerSettings(stream, obj["settings"], callback);
        if (obj["flags"].toUInt() & 4) writeTLPhoto(stream, obj["profile_photo"], callback);
        writeTLPeerNotifySettings(stream, obj["notify_settings"], callback);
        if (obj["flags"].toUInt() & 8) writeTLBotInfo(stream, obj["bot_info"], callback);
        if (obj["flags"].toUInt() & 64) writeInt32(stream, obj["pinned_msg_id"], callback);
        writeInt32(stream, obj["common_chats_count"], callback);
        if (obj["flags"].toUInt() & 2048) writeInt32(stream, obj["folder_id"], callback);
        if (obj["flags"].toUInt() & 16384) writeInt32(stream, obj["ttl_period"], callback);
        if (obj["flags"].toUInt() & 32768) writeString(stream, obj["theme_emoticon"], callback);
        if (obj["flags"].toUInt() & 65536) writeString(stream, obj["private_forward_name"], callback);
    break;
    }
}

void readTLContact(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 341499403:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readBool(stream, obj["mutual"], callback);
    break;
    }
    i = obj;
}

void writeTLContact(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 341499403:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeBool(stream, obj["mutual"], callback);
    break;
    }
}

void readTLImportedContact(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1052885936:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt64(stream, obj["client_id"], callback);
    break;
    }
    i = obj;
}

void writeTLImportedContact(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1052885936:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt64(stream, obj["client_id"], callback);
    break;
    }
}

void readTLContactStatus(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 383348795:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readTLUserStatus(stream, obj["status"], callback);
    break;
    }
    i = obj;
}

void writeTLContactStatus(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 383348795:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeTLUserStatus(stream, obj["status"], callback);
    break;
    }
}

void readTLContactsContacts(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1219778094:
        obj["_"] = conId.toInt();
    break;
    case -353862078:
        obj["_"] = conId.toInt();
        readVector(stream, obj["contacts"], (void*) &readTLContact);
        readInt32(stream, obj["saved_count"], callback);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLContactsContacts(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1219778094:
        writeInt32(stream, obj["_"], callback);
    break;
    case -353862078:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["contacts"], (void*) &writeTLContact);
        writeInt32(stream, obj["saved_count"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLContactsImportedContacts(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2010127419:
        obj["_"] = conId.toInt();
        readVector(stream, obj["imported"], (void*) &readTLImportedContact);
        readVector(stream, obj["popular_invites"], (void*) &readTLPopularContact);
        readVector(stream, obj["retry_contacts"], (void*) &readInt64);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLContactsImportedContacts(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2010127419:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["imported"], (void*) &writeTLImportedContact);
        writeVector(stream, obj["popular_invites"], (void*) &writeTLPopularContact);
        writeVector(stream, obj["retry_contacts"], (void*) &writeInt64);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLContactsBlocked(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 182326673:
        obj["_"] = conId.toInt();
        readVector(stream, obj["blocked"], (void*) &readTLPeerBlocked);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case -513392236:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["blocked"], (void*) &readTLPeerBlocked);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLContactsBlocked(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 182326673:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["blocked"], (void*) &writeTLPeerBlocked);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case -513392236:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["blocked"], (void*) &writeTLPeerBlocked);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLMessagesDialogs(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 364538944:
        obj["_"] = conId.toInt();
        readVector(stream, obj["dialogs"], (void*) &readTLDialog);
        readVector(stream, obj["messages"], (void*) &readTLMessage);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case 1910543603:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["dialogs"], (void*) &readTLDialog);
        readVector(stream, obj["messages"], (void*) &readTLMessage);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case -253500010:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesDialogs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 364538944:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["dialogs"], (void*) &writeTLDialog);
        writeVector(stream, obj["messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case 1910543603:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["dialogs"], (void*) &writeTLDialog);
        writeVector(stream, obj["messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case -253500010:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
    break;
    }
}

void readTLMessagesMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1938715001:
        obj["_"] = conId.toInt();
        readVector(stream, obj["messages"], (void*) &readTLMessage);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case 978610270:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["inexact"] = true;
        readInt32(stream, obj["count"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["next_rate"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["offset_id_offset"], callback);
        readVector(stream, obj["messages"], (void*) &readTLMessage);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case 1682413576:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["inexact"] = true;
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["count"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["offset_id_offset"], callback);
        readVector(stream, obj["messages"], (void*) &readTLMessage);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case 1951620897:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1938715001:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case 978610270:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["inexact"].isNull() << 1) | 
            (!obj["next_rate"].isNull()) | 
            (!obj["offset_id_offset"].isNull() << 2) | 
        0), callback);
        writeInt32(stream, obj["count"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["next_rate"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["offset_id_offset"], callback);
        writeVector(stream, obj["messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case 1682413576:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["inexact"].isNull() << 1) | 
            (!obj["offset_id_offset"].isNull() << 2) | 
        0), callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["count"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["offset_id_offset"], callback);
        writeVector(stream, obj["messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case 1951620897:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
    break;
    }
}

void readTLMessagesChats(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1694474197:
        obj["_"] = conId.toInt();
        readVector(stream, obj["chats"], (void*) &readTLChat);
    break;
    case -1663561404:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["chats"], (void*) &readTLChat);
    break;
    }
    i = obj;
}

void writeTLMessagesChats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1694474197:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
    break;
    case -1663561404:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
    break;
    }
}

void readTLMessagesChatFull(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -438840932:
        obj["_"] = conId.toInt();
        readTLChatFull(stream, obj["full_chat"], callback);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesChatFull(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -438840932:
        writeInt32(stream, obj["_"], callback);
        writeTLChatFull(stream, obj["full_chat"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLMessagesAffectedHistory(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1269012015:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
        readInt32(stream, obj["offset"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesAffectedHistory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1269012015:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
        writeInt32(stream, obj["offset"], callback);
    break;
    }
}

void readTLMessagesFilter(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1474492012:
        obj["_"] = conId.toInt();
    break;
    case -1777752804:
        obj["_"] = conId.toInt();
    break;
    case -1614803355:
        obj["_"] = conId.toInt();
    break;
    case 1458172132:
        obj["_"] = conId.toInt();
    break;
    case -1629621880:
        obj["_"] = conId.toInt();
    break;
    case 2129714567:
        obj["_"] = conId.toInt();
    break;
    case -3644025:
        obj["_"] = conId.toInt();
    break;
    case 1358283666:
        obj["_"] = conId.toInt();
    break;
    case 928101534:
        obj["_"] = conId.toInt();
    break;
    case 975236280:
        obj["_"] = conId.toInt();
    break;
    case -2134272152:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["missed"] = true;
    break;
    case 2054952868:
        obj["_"] = conId.toInt();
    break;
    case -1253451181:
        obj["_"] = conId.toInt();
    break;
    case -1040652646:
        obj["_"] = conId.toInt();
    break;
    case -419271411:
        obj["_"] = conId.toInt();
    break;
    case -530392189:
        obj["_"] = conId.toInt();
    break;
    case 464520273:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLMessagesFilter(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1474492012:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1777752804:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1614803355:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1458172132:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1629621880:
        writeInt32(stream, obj["_"], callback);
    break;
    case 2129714567:
        writeInt32(stream, obj["_"], callback);
    break;
    case -3644025:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1358283666:
        writeInt32(stream, obj["_"], callback);
    break;
    case 928101534:
        writeInt32(stream, obj["_"], callback);
    break;
    case 975236280:
        writeInt32(stream, obj["_"], callback);
    break;
    case -2134272152:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["missed"].isNull()) | 
        0), callback);
    break;
    case 2054952868:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1253451181:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1040652646:
        writeInt32(stream, obj["_"], callback);
    break;
    case -419271411:
        writeInt32(stream, obj["_"], callback);
    break;
    case -530392189:
        writeInt32(stream, obj["_"], callback);
    break;
    case 464520273:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLUpdate(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 522914557:
        obj["_"] = conId.toInt();
        readTLMessage(stream, obj["message"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case 1318109142:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["id"], callback);
        readInt64(stream, obj["random_id"], callback);
    break;
    case -1576161051:
        obj["_"] = conId.toInt();
        readVector(stream, obj["messages"], (void*) &readInt32);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case -1071741569:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readTLSendMessageAction(stream, obj["action"], callback);
    break;
    case -2092401936:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["chat_id"], callback);
        readTLPeer(stream, obj["from_id"], callback);
        readTLSendMessageAction(stream, obj["action"], callback);
    break;
    case 125178264:
        obj["_"] = conId.toInt();
        readTLChatParticipants(stream, obj["participants"], callback);
    break;
    case -440534818:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readTLUserStatus(stream, obj["status"], callback);
    break;
    case -1007549728:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readString(stream, obj["first_name"], callback);
        readString(stream, obj["last_name"], callback);
        readString(stream, obj["username"], callback);
    break;
    case -232290676:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt32(stream, obj["date"], callback);
        readTLUserProfilePhoto(stream, obj["photo"], callback);
        readBool(stream, obj["previous"], callback);
    break;
    case 314359194:
        obj["_"] = conId.toInt();
        readTLEncryptedMessage(stream, obj["message"], callback);
        readInt32(stream, obj["qts"], callback);
    break;
    case 386986326:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["chat_id"], callback);
    break;
    case -1264392051:
        obj["_"] = conId.toInt();
        readTLEncryptedChat(stream, obj["chat"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    case 956179895:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["chat_id"], callback);
        readInt32(stream, obj["max_date"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    case 1037718609:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["chat_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        readInt64(stream, obj["inviter_id"], callback);
        readInt32(stream, obj["date"], callback);
        readInt32(stream, obj["version"], callback);
    break;
    case -483443337:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["chat_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        readInt32(stream, obj["version"], callback);
    break;
    case -1906403213:
        obj["_"] = conId.toInt();
        readVector(stream, obj["dc_options"], (void*) &readTLDcOption);
    break;
    case -1094555409:
        obj["_"] = conId.toInt();
        readTLNotifyPeer(stream, obj["peer"], callback);
        readTLPeerNotifySettings(stream, obj["notify_settings"], callback);
    break;
    case -337352679:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["popup"] = true;
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["inbox_date"], callback);
        readString(stream, obj["type"], callback);
        readString(stream, obj["message"], callback);
        readTLMessageMedia(stream, obj["media"], callback);
        readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
    break;
    case -298113238:
        obj["_"] = conId.toInt();
        readTLPrivacyKey(stream, obj["key"], callback);
        readVector(stream, obj["rules"], (void*) &readTLPrivacyRule);
    break;
    case 88680979:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readString(stream, obj["phone"], callback);
    break;
    case -1667805217:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["folder_id"], callback);
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["max_id"], callback);
        readInt32(stream, obj["still_unread_count"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case 791617983:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["max_id"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case 2139689491:
        obj["_"] = conId.toInt();
        readTLWebPage(stream, obj["webpage"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case 1757493555:
        obj["_"] = conId.toInt();
        readVector(stream, obj["messages"], (void*) &readInt32);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case 277713951:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["channel_id"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["pts"], callback);
    break;
    case 1666927625:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
    break;
    case 1656358105:
        obj["_"] = conId.toInt();
        readTLMessage(stream, obj["message"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case -1842450928:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["folder_id"], callback);
        readInt64(stream, obj["channel_id"], callback);
        readInt32(stream, obj["max_id"], callback);
        readInt32(stream, obj["still_unread_count"], callback);
        readInt32(stream, obj["pts"], callback);
    break;
    case -1020437742:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
        readVector(stream, obj["messages"], (void*) &readInt32);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case -232346616:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
        readInt32(stream, obj["id"], callback);
        readInt32(stream, obj["views"], callback);
    break;
    case -674602590:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["chat_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        readBool(stream, obj["is_admin"], callback);
        readInt32(stream, obj["version"], callback);
    break;
    case 1753886890:
        obj["_"] = conId.toInt();
        readTLMessagesStickerSet(stream, obj["stickerset"], callback);
    break;
    case 196268545:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["masks"] = true;
        readVector(stream, obj["order"], (void*) &readInt64);
    break;
    case 1135492588:
        obj["_"] = conId.toInt();
    break;
    case -1821035490:
        obj["_"] = conId.toInt();
    break;
    case 1232025500:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["query_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        readString(stream, obj["query"], callback);
        if (obj["flags"].toUInt() & 1) readTLGeoPoint(stream, obj["geo"], callback);
        if (obj["flags"].toUInt() & 2) readTLInlineQueryPeerType(stream, obj["peer_type"], callback);
        readString(stream, obj["offset"], callback);
    break;
    case 317794823:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["user_id"], callback);
        readString(stream, obj["query"], callback);
        if (obj["flags"].toUInt() & 1) readTLGeoPoint(stream, obj["geo"], callback);
        readString(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 2) readTLInputBotInlineMessageID(stream, obj["msg_id"], callback);
    break;
    case 457133559:
        obj["_"] = conId.toInt();
        readTLMessage(stream, obj["message"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case -1177566067:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["query_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["msg_id"], callback);
        readInt64(stream, obj["chat_instance"], callback);
        if (obj["flags"].toUInt() & 1) readByteArray(stream, obj["data"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["game_short_name"], callback);
    break;
    case -469536605:
        obj["_"] = conId.toInt();
        readTLMessage(stream, obj["message"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case 1763610706:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["query_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        readTLInputBotInlineMessageID(stream, obj["msg_id"], callback);
        readInt64(stream, obj["chat_instance"], callback);
        if (obj["flags"].toUInt() & 1) readByteArray(stream, obj["data"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["game_short_name"], callback);
    break;
    case -1218471511:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
        readInt32(stream, obj["max_id"], callback);
    break;
    case -299124375:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readTLDraftMessage(stream, obj["draft"], callback);
    break;
    case 1461528386:
        obj["_"] = conId.toInt();
    break;
    case -1706939360:
        obj["_"] = conId.toInt();
    break;
    case -1574314746:
        obj["_"] = conId.toInt();
    break;
    case 861169551:
        obj["_"] = conId.toInt();
    break;
    case 791390623:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
        readTLWebPage(stream, obj["webpage"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case 1852826908:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["pinned"] = true;
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["folder_id"], callback);
        readTLDialogPeer(stream, obj["peer"], callback);
    break;
    case -99664734:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["folder_id"], callback);
        if (obj["flags"].toUInt() & 1) readVector(stream, obj["order"], (void*) &readTLDialogPeer);
    break;
    case -2095595325:
        obj["_"] = conId.toInt();
        readTLDataJSON(stream, obj["data"], callback);
    break;
    case -1684914010:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["query_id"], callback);
        readTLDataJSON(stream, obj["data"], callback);
        readInt32(stream, obj["timeout"], callback);
    break;
    case -1246823043:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["query_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        readByteArray(stream, obj["payload"], callback);
        readTLPostAddress(stream, obj["shipping_address"], callback);
    break;
    case -1934976362:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["query_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        readByteArray(stream, obj["payload"], callback);
        if (obj["flags"].toUInt() & 1) readTLPaymentRequestedInfo(stream, obj["info"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["shipping_option_id"], callback);
        readString(stream, obj["currency"], callback);
        readInt64(stream, obj["total_amount"], callback);
    break;
    case -1425052898:
        obj["_"] = conId.toInt();
        readTLPhoneCall(stream, obj["phone_call"], callback);
    break;
    case 1180041828:
        obj["_"] = conId.toInt();
        readString(stream, obj["lang_code"], callback);
    break;
    case 1442983757:
        obj["_"] = conId.toInt();
        readTLLangPackDifference(stream, obj["difference"], callback);
    break;
    case -451831443:
        obj["_"] = conId.toInt();
    break;
    case 1153291573:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
        readVector(stream, obj["messages"], (void*) &readInt32);
    break;
    case 1887741886:
        obj["_"] = conId.toInt();
    break;
    case -1304443240:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
        readInt32(stream, obj["available_min_id"], callback);
    break;
    case -513517117:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["unread"] = true;
        readTLDialogPeer(stream, obj["peer"], callback);
    break;
    case -1398708869:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["poll_id"], callback);
        if (obj["flags"].toUInt() & 1) readTLPoll(stream, obj["poll"], callback);
        readTLPollResults(stream, obj["results"], callback);
    break;
    case 1421875280:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readTLChatBannedRights(stream, obj["default_banned_rights"], callback);
        readInt32(stream, obj["version"], callback);
    break;
    case 422972864:
        obj["_"] = conId.toInt();
        readVector(stream, obj["folder_peers"], (void*) &readTLFolderPeer);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case 1786671974:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readTLPeerSettings(stream, obj["settings"], callback);
    break;
    case -1263546448:
        obj["_"] = conId.toInt();
        readVector(stream, obj["peers"], (void*) &readTLPeerLocated);
    break;
    case 967122427:
        obj["_"] = conId.toInt();
        readTLMessage(stream, obj["message"], callback);
    break;
    case -1870238482:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readVector(stream, obj["messages"], (void*) &readInt32);
    break;
    case -2112423005:
        obj["_"] = conId.toInt();
        readTLTheme(stream, obj["theme"], callback);
    break;
    case -2027964103:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["msg_id"], callback);
    break;
    case 1448076945:
        obj["_"] = conId.toInt();
    break;
    case 274961865:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["poll_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        readVector(stream, obj["options"], (void*) &readByteArray);
        readInt32(stream, obj["qts"], callback);
    break;
    case 654302845:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) readTLDialogFilter(stream, obj["filter"], callback);
    break;
    case -1512627963:
        obj["_"] = conId.toInt();
        readVector(stream, obj["order"], (void*) &readInt32);
    break;
    case 889491791:
        obj["_"] = conId.toInt();
    break;
    case 643940105:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["phone_call_id"], callback);
        readByteArray(stream, obj["data"], callback);
    break;
    case -761649164:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
        readInt32(stream, obj["id"], callback);
        readInt32(stream, obj["forwards"], callback);
    break;
    case -693004986:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["channel_id"], callback);
        readInt32(stream, obj["top_msg_id"], callback);
        readInt32(stream, obj["read_max_id"], callback);
        if (obj["flags"].toUInt() & 1) readInt64(stream, obj["broadcast_id"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["broadcast_post"], callback);
    break;
    case 1767677564:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
        readInt32(stream, obj["top_msg_id"], callback);
        readInt32(stream, obj["read_max_id"], callback);
    break;
    case 610945826:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer_id"], callback);
        readBool(stream, obj["blocked"], callback);
    break;
    case -1937192669:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["channel_id"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["top_msg_id"], callback);
        readTLPeer(stream, obj["from_id"], callback);
        readTLSendMessageAction(stream, obj["action"], callback);
    break;
    case -309990731:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["pinned"] = true;
        readTLPeer(stream, obj["peer"], callback);
        readVector(stream, obj["messages"], (void*) &readInt32);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case 1538885128:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["pinned"] = true;
        readInt64(stream, obj["channel_id"], callback);
        readVector(stream, obj["messages"], (void*) &readInt32);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    case -124097970:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["chat_id"], callback);
    break;
    case -219423922:
        obj["_"] = conId.toInt();
        readTLInputGroupCall(stream, obj["call"], callback);
        readVector(stream, obj["participants"], (void*) &readTLGroupCallParticipant);
        readInt32(stream, obj["version"], callback);
    break;
    case 347227392:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["chat_id"], callback);
        readTLGroupCall(stream, obj["call"], callback);
    break;
    case -1147422299:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["ttl_period"], callback);
    break;
    case -796432838:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["chat_id"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["actor_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        if (obj["flags"].toUInt() & 1) readTLChatParticipant(stream, obj["prev_participant"], callback);
        if (obj["flags"].toUInt() & 2) readTLChatParticipant(stream, obj["new_participant"], callback);
        if (obj["flags"].toUInt() & 4) readTLExportedChatInvite(stream, obj["invite"], callback);
        readInt32(stream, obj["qts"], callback);
    break;
    case -1738720581:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["channel_id"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["actor_id"], callback);
        readInt64(stream, obj["user_id"], callback);
        if (obj["flags"].toUInt() & 1) readTLChannelParticipant(stream, obj["prev_participant"], callback);
        if (obj["flags"].toUInt() & 2) readTLChannelParticipant(stream, obj["new_participant"], callback);
        if (obj["flags"].toUInt() & 4) readTLExportedChatInvite(stream, obj["invite"], callback);
        readInt32(stream, obj["qts"], callback);
    break;
    case -997782967:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt32(stream, obj["date"], callback);
        readBool(stream, obj["stopped"], callback);
        readInt32(stream, obj["qts"], callback);
    break;
    case 192428418:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["presentation"] = true;
        readTLDataJSON(stream, obj["params"], callback);
    break;
    case 1299263278:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readInt64(stream, obj["bot_id"], callback);
        readVector(stream, obj["commands"], (void*) &readTLBotCommand);
    break;
    case 1885586395:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["requests_pending"], callback);
        readVector(stream, obj["recent_requesters"], (void*) &readInt64);
    break;
    case 299870598:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["user_id"], callback);
        readString(stream, obj["about"], callback);
        readTLExportedChatInvite(stream, obj["invite"], callback);
        readInt32(stream, obj["qts"], callback);
    break;
    case 357013699:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["msg_id"], callback);
        readTLMessageReactions(stream, obj["reactions"], callback);
    break;
    }
    i = obj;
}

void writeTLUpdate(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 522914557:
        writeInt32(stream, obj["_"], callback);
        writeTLMessage(stream, obj["message"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case 1318109142:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["id"], callback);
        writeInt64(stream, obj["random_id"], callback);
    break;
    case -1576161051:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["messages"], (void*) &writeInt32);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case -1071741569:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeTLSendMessageAction(stream, obj["action"], callback);
    break;
    case -2092401936:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeTLPeer(stream, obj["from_id"], callback);
        writeTLSendMessageAction(stream, obj["action"], callback);
    break;
    case 125178264:
        writeInt32(stream, obj["_"], callback);
        writeTLChatParticipants(stream, obj["participants"], callback);
    break;
    case -440534818:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeTLUserStatus(stream, obj["status"], callback);
    break;
    case -1007549728:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeString(stream, obj["first_name"], callback);
        writeString(stream, obj["last_name"], callback);
        writeString(stream, obj["username"], callback);
    break;
    case -232290676:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt32(stream, obj["date"], callback);
        writeTLUserProfilePhoto(stream, obj["photo"], callback);
        writeBool(stream, obj["previous"], callback);
    break;
    case 314359194:
        writeInt32(stream, obj["_"], callback);
        writeTLEncryptedMessage(stream, obj["message"], callback);
        writeInt32(stream, obj["qts"], callback);
    break;
    case 386986326:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["chat_id"], callback);
    break;
    case -1264392051:
        writeInt32(stream, obj["_"], callback);
        writeTLEncryptedChat(stream, obj["chat"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    case 956179895:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["chat_id"], callback);
        writeInt32(stream, obj["max_date"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    case 1037718609:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt64(stream, obj["inviter_id"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt32(stream, obj["version"], callback);
    break;
    case -483443337:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt32(stream, obj["version"], callback);
    break;
    case -1906403213:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["dc_options"], (void*) &writeTLDcOption);
    break;
    case -1094555409:
        writeInt32(stream, obj["_"], callback);
        writeTLNotifyPeer(stream, obj["peer"], callback);
        writeTLPeerNotifySettings(stream, obj["notify_settings"], callback);
    break;
    case -337352679:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["popup"].isNull()) | 
            (!obj["inbox_date"].isNull() << 1) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["inbox_date"], callback);
        writeString(stream, obj["type"], callback);
        writeString(stream, obj["message"], callback);
        writeTLMessageMedia(stream, obj["media"], callback);
        writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
    break;
    case -298113238:
        writeInt32(stream, obj["_"], callback);
        writeTLPrivacyKey(stream, obj["key"], callback);
        writeVector(stream, obj["rules"], (void*) &writeTLPrivacyRule);
    break;
    case 88680979:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeString(stream, obj["phone"], callback);
    break;
    case -1667805217:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["folder_id"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["folder_id"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["max_id"], callback);
        writeInt32(stream, obj["still_unread_count"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case 791617983:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["max_id"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case 2139689491:
        writeInt32(stream, obj["_"], callback);
        writeTLWebPage(stream, obj["webpage"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case 1757493555:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["messages"], (void*) &writeInt32);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case 277713951:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["pts"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["channel_id"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["pts"], callback);
    break;
    case 1666927625:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
    break;
    case 1656358105:
        writeInt32(stream, obj["_"], callback);
        writeTLMessage(stream, obj["message"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case -1842450928:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["folder_id"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["folder_id"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeInt32(stream, obj["max_id"], callback);
        writeInt32(stream, obj["still_unread_count"], callback);
        writeInt32(stream, obj["pts"], callback);
    break;
    case -1020437742:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeVector(stream, obj["messages"], (void*) &writeInt32);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case -232346616:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeInt32(stream, obj["id"], callback);
        writeInt32(stream, obj["views"], callback);
    break;
    case -674602590:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeBool(stream, obj["is_admin"], callback);
        writeInt32(stream, obj["version"], callback);
    break;
    case 1753886890:
        writeInt32(stream, obj["_"], callback);
        writeTLMessagesStickerSet(stream, obj["stickerset"], callback);
    break;
    case 196268545:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["masks"].isNull()) | 
        0), callback);
        writeVector(stream, obj["order"], (void*) &writeInt64);
    break;
    case 1135492588:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1821035490:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1232025500:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["geo"].isNull()) | 
            (!obj["peer_type"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["query_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeString(stream, obj["query"], callback);
        if (obj["flags"].toUInt() & 1) writeTLGeoPoint(stream, obj["geo"], callback);
        if (obj["flags"].toUInt() & 2) writeTLInlineQueryPeerType(stream, obj["peer_type"], callback);
        writeString(stream, obj["offset"], callback);
    break;
    case 317794823:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["geo"].isNull()) | 
            (!obj["msg_id"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["user_id"], callback);
        writeString(stream, obj["query"], callback);
        if (obj["flags"].toUInt() & 1) writeTLGeoPoint(stream, obj["geo"], callback);
        writeString(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 2) writeTLInputBotInlineMessageID(stream, obj["msg_id"], callback);
    break;
    case 457133559:
        writeInt32(stream, obj["_"], callback);
        writeTLMessage(stream, obj["message"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case -1177566067:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["data"].isNull()) | 
            (!obj["game_short_name"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["query_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeInt64(stream, obj["chat_instance"], callback);
        if (obj["flags"].toUInt() & 1) writeByteArray(stream, obj["data"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["game_short_name"], callback);
    break;
    case -469536605:
        writeInt32(stream, obj["_"], callback);
        writeTLMessage(stream, obj["message"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case 1763610706:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["data"].isNull()) | 
            (!obj["game_short_name"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["query_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeTLInputBotInlineMessageID(stream, obj["msg_id"], callback);
        writeInt64(stream, obj["chat_instance"], callback);
        if (obj["flags"].toUInt() & 1) writeByteArray(stream, obj["data"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["game_short_name"], callback);
    break;
    case -1218471511:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeInt32(stream, obj["max_id"], callback);
    break;
    case -299124375:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeTLDraftMessage(stream, obj["draft"], callback);
    break;
    case 1461528386:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1706939360:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1574314746:
        writeInt32(stream, obj["_"], callback);
    break;
    case 861169551:
        writeInt32(stream, obj["_"], callback);
    break;
    case 791390623:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeTLWebPage(stream, obj["webpage"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case 1852826908:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["pinned"].isNull()) | 
            (!obj["folder_id"].isNull() << 1) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["folder_id"], callback);
        writeTLDialogPeer(stream, obj["peer"], callback);
    break;
    case -99664734:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["folder_id"].isNull() << 1) | 
            (!obj["order"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["folder_id"], callback);
        if (obj["flags"].toUInt() & 1) writeVector(stream, obj["order"], (void*) &writeTLDialogPeer);
    break;
    case -2095595325:
        writeInt32(stream, obj["_"], callback);
        writeTLDataJSON(stream, obj["data"], callback);
    break;
    case -1684914010:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["query_id"], callback);
        writeTLDataJSON(stream, obj["data"], callback);
        writeInt32(stream, obj["timeout"], callback);
    break;
    case -1246823043:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["query_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeByteArray(stream, obj["payload"], callback);
        writeTLPostAddress(stream, obj["shipping_address"], callback);
    break;
    case -1934976362:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["info"].isNull()) | 
            (!obj["shipping_option_id"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["query_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeByteArray(stream, obj["payload"], callback);
        if (obj["flags"].toUInt() & 1) writeTLPaymentRequestedInfo(stream, obj["info"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["shipping_option_id"], callback);
        writeString(stream, obj["currency"], callback);
        writeInt64(stream, obj["total_amount"], callback);
    break;
    case -1425052898:
        writeInt32(stream, obj["_"], callback);
        writeTLPhoneCall(stream, obj["phone_call"], callback);
    break;
    case 1180041828:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_code"], callback);
    break;
    case 1442983757:
        writeInt32(stream, obj["_"], callback);
        writeTLLangPackDifference(stream, obj["difference"], callback);
    break;
    case -451831443:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1153291573:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeVector(stream, obj["messages"], (void*) &writeInt32);
    break;
    case 1887741886:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1304443240:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeInt32(stream, obj["available_min_id"], callback);
    break;
    case -513517117:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["unread"].isNull()) | 
        0), callback);
        writeTLDialogPeer(stream, obj["peer"], callback);
    break;
    case -1398708869:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["poll"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["poll_id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLPoll(stream, obj["poll"], callback);
        writeTLPollResults(stream, obj["results"], callback);
    break;
    case 1421875280:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeTLChatBannedRights(stream, obj["default_banned_rights"], callback);
        writeInt32(stream, obj["version"], callback);
    break;
    case 422972864:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["folder_peers"], (void*) &writeTLFolderPeer);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case 1786671974:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeTLPeerSettings(stream, obj["settings"], callback);
    break;
    case -1263546448:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["peers"], (void*) &writeTLPeerLocated);
    break;
    case 967122427:
        writeInt32(stream, obj["_"], callback);
        writeTLMessage(stream, obj["message"], callback);
    break;
    case -1870238482:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["messages"], (void*) &writeInt32);
    break;
    case -2112423005:
        writeInt32(stream, obj["_"], callback);
        writeTLTheme(stream, obj["theme"], callback);
    break;
    case -2027964103:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
    break;
    case 1448076945:
        writeInt32(stream, obj["_"], callback);
    break;
    case 274961865:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["poll_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeVector(stream, obj["options"], (void*) &writeByteArray);
        writeInt32(stream, obj["qts"], callback);
    break;
    case 654302845:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["filter"].isNull()) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLDialogFilter(stream, obj["filter"], callback);
    break;
    case -1512627963:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["order"], (void*) &writeInt32);
    break;
    case 889491791:
        writeInt32(stream, obj["_"], callback);
    break;
    case 643940105:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["phone_call_id"], callback);
        writeByteArray(stream, obj["data"], callback);
    break;
    case -761649164:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeInt32(stream, obj["id"], callback);
        writeInt32(stream, obj["forwards"], callback);
    break;
    case -693004986:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["broadcast_id"].isNull()) | 
            (!obj["broadcast_post"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeInt32(stream, obj["top_msg_id"], callback);
        writeInt32(stream, obj["read_max_id"], callback);
        if (obj["flags"].toUInt() & 1) writeInt64(stream, obj["broadcast_id"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["broadcast_post"], callback);
    break;
    case 1767677564:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeInt32(stream, obj["top_msg_id"], callback);
        writeInt32(stream, obj["read_max_id"], callback);
    break;
    case 610945826:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer_id"], callback);
        writeBool(stream, obj["blocked"], callback);
    break;
    case -1937192669:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["top_msg_id"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["channel_id"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["top_msg_id"], callback);
        writeTLPeer(stream, obj["from_id"], callback);
        writeTLSendMessageAction(stream, obj["action"], callback);
    break;
    case -309990731:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["pinned"].isNull()) | 
        0), callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["messages"], (void*) &writeInt32);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case 1538885128:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["pinned"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeVector(stream, obj["messages"], (void*) &writeInt32);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    case -124097970:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
    break;
    case -219423922:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeVector(stream, obj["participants"], (void*) &writeTLGroupCallParticipant);
        writeInt32(stream, obj["version"], callback);
    break;
    case 347227392:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeTLGroupCall(stream, obj["call"], callback);
    break;
    case -1147422299:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["ttl_period"].isNull()) | 
        0), callback);
        writeTLPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["ttl_period"], callback);
    break;
    case -796432838:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["prev_participant"].isNull()) | 
            (!obj["new_participant"].isNull() << 1) | 
            (!obj["invite"].isNull() << 2) | 
        0), callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["actor_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLChatParticipant(stream, obj["prev_participant"], callback);
        if (obj["flags"].toUInt() & 2) writeTLChatParticipant(stream, obj["new_participant"], callback);
        if (obj["flags"].toUInt() & 4) writeTLExportedChatInvite(stream, obj["invite"], callback);
        writeInt32(stream, obj["qts"], callback);
    break;
    case -1738720581:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["prev_participant"].isNull()) | 
            (!obj["new_participant"].isNull() << 1) | 
            (!obj["invite"].isNull() << 2) | 
        0), callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["actor_id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLChannelParticipant(stream, obj["prev_participant"], callback);
        if (obj["flags"].toUInt() & 2) writeTLChannelParticipant(stream, obj["new_participant"], callback);
        if (obj["flags"].toUInt() & 4) writeTLExportedChatInvite(stream, obj["invite"], callback);
        writeInt32(stream, obj["qts"], callback);
    break;
    case -997782967:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt32(stream, obj["date"], callback);
        writeBool(stream, obj["stopped"], callback);
        writeInt32(stream, obj["qts"], callback);
    break;
    case 192428418:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["presentation"].isNull()) | 
        0), callback);
        writeTLDataJSON(stream, obj["params"], callback);
    break;
    case 1299263278:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt64(stream, obj["bot_id"], callback);
        writeVector(stream, obj["commands"], (void*) &writeTLBotCommand);
    break;
    case 1885586395:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["requests_pending"], callback);
        writeVector(stream, obj["recent_requesters"], (void*) &writeInt64);
    break;
    case 299870598:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeString(stream, obj["about"], callback);
        writeTLExportedChatInvite(stream, obj["invite"], callback);
        writeInt32(stream, obj["qts"], callback);
    break;
    case 357013699:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeTLMessageReactions(stream, obj["reactions"], callback);
    break;
    }
}

void readTLUpdatesState(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1519637954:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["qts"], callback);
        readInt32(stream, obj["date"], callback);
        readInt32(stream, obj["seq"], callback);
        readInt32(stream, obj["unread_count"], callback);
    break;
    }
    i = obj;
}

void writeTLUpdatesState(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1519637954:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["qts"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt32(stream, obj["seq"], callback);
        writeInt32(stream, obj["unread_count"], callback);
    break;
    }
}

void readTLUpdatesDifference(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1567990072:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["date"], callback);
        readInt32(stream, obj["seq"], callback);
    break;
    case 16030880:
        obj["_"] = conId.toInt();
        readVector(stream, obj["new_messages"], (void*) &readTLMessage);
        readVector(stream, obj["new_encrypted_messages"], (void*) &readTLEncryptedMessage);
        readVector(stream, obj["other_updates"], (void*) &readTLUpdate);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
        readTLUpdatesState(stream, obj["state"], callback);
    break;
    case -1459938943:
        obj["_"] = conId.toInt();
        readVector(stream, obj["new_messages"], (void*) &readTLMessage);
        readVector(stream, obj["new_encrypted_messages"], (void*) &readTLEncryptedMessage);
        readVector(stream, obj["other_updates"], (void*) &readTLUpdate);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
        readTLUpdatesState(stream, obj["intermediate_state"], callback);
    break;
    case 1258196845:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["pts"], callback);
    break;
    }
    i = obj;
}

void writeTLUpdatesDifference(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1567990072:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt32(stream, obj["seq"], callback);
    break;
    case 16030880:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["new_messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["new_encrypted_messages"], (void*) &writeTLEncryptedMessage);
        writeVector(stream, obj["other_updates"], (void*) &writeTLUpdate);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
        writeTLUpdatesState(stream, obj["state"], callback);
    break;
    case -1459938943:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["new_messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["new_encrypted_messages"], (void*) &writeTLEncryptedMessage);
        writeVector(stream, obj["other_updates"], (void*) &writeTLUpdate);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
        writeTLUpdatesState(stream, obj["intermediate_state"], callback);
    break;
    case 1258196845:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["pts"], callback);
    break;
    }
}

void readTLUpdates(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -484987010:
        obj["_"] = conId.toInt();
    break;
    case 826001400:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["out"] = true;
        if (obj["flags"].toUInt() & 16) obj["mentioned"] = true;
        if (obj["flags"].toUInt() & 32) obj["media_unread"] = true;
        if (obj["flags"].toUInt() & 8192) obj["silent"] = true;
        readInt32(stream, obj["id"], callback);
        readInt64(stream, obj["user_id"], callback);
        readString(stream, obj["message"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
        readInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 4) readTLMessageFwdHeader(stream, obj["fwd_from"], callback);
        if (obj["flags"].toUInt() & 2048) readInt64(stream, obj["via_bot_id"], callback);
        if (obj["flags"].toUInt() & 8) readTLMessageReplyHeader(stream, obj["reply_to"], callback);
        if (obj["flags"].toUInt() & 128) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        if (obj["flags"].toUInt() & 33554432) readInt32(stream, obj["ttl_period"], callback);
    break;
    case 1299050149:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["out"] = true;
        if (obj["flags"].toUInt() & 16) obj["mentioned"] = true;
        if (obj["flags"].toUInt() & 32) obj["media_unread"] = true;
        if (obj["flags"].toUInt() & 8192) obj["silent"] = true;
        readInt32(stream, obj["id"], callback);
        readInt64(stream, obj["from_id"], callback);
        readInt64(stream, obj["chat_id"], callback);
        readString(stream, obj["message"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
        readInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 4) readTLMessageFwdHeader(stream, obj["fwd_from"], callback);
        if (obj["flags"].toUInt() & 2048) readInt64(stream, obj["via_bot_id"], callback);
        if (obj["flags"].toUInt() & 8) readTLMessageReplyHeader(stream, obj["reply_to"], callback);
        if (obj["flags"].toUInt() & 128) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        if (obj["flags"].toUInt() & 33554432) readInt32(stream, obj["ttl_period"], callback);
    break;
    case 2027216577:
        obj["_"] = conId.toInt();
        readTLUpdate(stream, obj["update"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    case 1918567619:
        obj["_"] = conId.toInt();
        readVector(stream, obj["updates"], (void*) &readTLUpdate);
        readVector(stream, obj["users"], (void*) &readTLUser);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readInt32(stream, obj["date"], callback);
        readInt32(stream, obj["seq_start"], callback);
        readInt32(stream, obj["seq"], callback);
    break;
    case 1957577280:
        obj["_"] = conId.toInt();
        readVector(stream, obj["updates"], (void*) &readTLUpdate);
        readVector(stream, obj["users"], (void*) &readTLUser);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readInt32(stream, obj["date"], callback);
        readInt32(stream, obj["seq"], callback);
    break;
    case -1877614335:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["out"] = true;
        readInt32(stream, obj["id"], callback);
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
        readInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 512) readTLMessageMedia(stream, obj["media"], callback);
        if (obj["flags"].toUInt() & 128) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        if (obj["flags"].toUInt() & 33554432) readInt32(stream, obj["ttl_period"], callback);
    break;
    }
    i = obj;
}

void writeTLUpdates(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -484987010:
        writeInt32(stream, obj["_"], callback);
    break;
    case 826001400:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["out"].isNull() << 1) | 
            (!obj["mentioned"].isNull() << 4) | 
            (!obj["media_unread"].isNull() << 5) | 
            (!obj["silent"].isNull() << 13) | 
            (!obj["fwd_from"].isNull() << 2) | 
            (!obj["via_bot_id"].isNull() << 11) | 
            (!obj["reply_to"].isNull() << 3) | 
            (!obj["entities"].isNull() << 7) | 
            (!obj["ttl_period"].isNull() << 25) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeString(stream, obj["message"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
        writeInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 4) writeTLMessageFwdHeader(stream, obj["fwd_from"], callback);
        if (obj["flags"].toUInt() & 2048) writeInt64(stream, obj["via_bot_id"], callback);
        if (obj["flags"].toUInt() & 8) writeTLMessageReplyHeader(stream, obj["reply_to"], callback);
        if (obj["flags"].toUInt() & 128) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 33554432) writeInt32(stream, obj["ttl_period"], callback);
    break;
    case 1299050149:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["out"].isNull() << 1) | 
            (!obj["mentioned"].isNull() << 4) | 
            (!obj["media_unread"].isNull() << 5) | 
            (!obj["silent"].isNull() << 13) | 
            (!obj["fwd_from"].isNull() << 2) | 
            (!obj["via_bot_id"].isNull() << 11) | 
            (!obj["reply_to"].isNull() << 3) | 
            (!obj["entities"].isNull() << 7) | 
            (!obj["ttl_period"].isNull() << 25) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        writeInt64(stream, obj["from_id"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeString(stream, obj["message"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
        writeInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 4) writeTLMessageFwdHeader(stream, obj["fwd_from"], callback);
        if (obj["flags"].toUInt() & 2048) writeInt64(stream, obj["via_bot_id"], callback);
        if (obj["flags"].toUInt() & 8) writeTLMessageReplyHeader(stream, obj["reply_to"], callback);
        if (obj["flags"].toUInt() & 128) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 33554432) writeInt32(stream, obj["ttl_period"], callback);
    break;
    case 2027216577:
        writeInt32(stream, obj["_"], callback);
        writeTLUpdate(stream, obj["update"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    case 1918567619:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["updates"], (void*) &writeTLUpdate);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeInt32(stream, obj["date"], callback);
        writeInt32(stream, obj["seq_start"], callback);
        writeInt32(stream, obj["seq"], callback);
    break;
    case 1957577280:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["updates"], (void*) &writeTLUpdate);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeInt32(stream, obj["date"], callback);
        writeInt32(stream, obj["seq"], callback);
    break;
    case -1877614335:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["out"].isNull() << 1) | 
            (!obj["media"].isNull() << 9) | 
            (!obj["entities"].isNull() << 7) | 
            (!obj["ttl_period"].isNull() << 25) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
        writeInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 512) writeTLMessageMedia(stream, obj["media"], callback);
        if (obj["flags"].toUInt() & 128) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 33554432) writeInt32(stream, obj["ttl_period"], callback);
    break;
    }
}

void readTLPhotosPhotos(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1916114267:
        obj["_"] = conId.toInt();
        readVector(stream, obj["photos"], (void*) &readTLPhoto);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case 352657236:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["photos"], (void*) &readTLPhoto);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLPhotosPhotos(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1916114267:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["photos"], (void*) &writeTLPhoto);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case 352657236:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["photos"], (void*) &writeTLPhoto);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLPhotosPhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 539045032:
        obj["_"] = conId.toInt();
        readTLPhoto(stream, obj["photo"], callback);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLPhotosPhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 539045032:
        writeInt32(stream, obj["_"], callback);
        writeTLPhoto(stream, obj["photo"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLUploadFile(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 157948117:
        obj["_"] = conId.toInt();
        readTLStorageFileType(stream, obj["type"], callback);
        readInt32(stream, obj["mtime"], callback);
        readByteArray(stream, obj["bytes"], callback);
    break;
    case -242427324:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["dc_id"], callback);
        readByteArray(stream, obj["file_token"], callback);
        readByteArray(stream, obj["encryption_key"], callback);
        readByteArray(stream, obj["encryption_iv"], callback);
        readVector(stream, obj["file_hashes"], (void*) &readTLFileHash);
    break;
    }
    i = obj;
}

void writeTLUploadFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 157948117:
        writeInt32(stream, obj["_"], callback);
        writeTLStorageFileType(stream, obj["type"], callback);
        writeInt32(stream, obj["mtime"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    case -242427324:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["dc_id"], callback);
        writeByteArray(stream, obj["file_token"], callback);
        writeByteArray(stream, obj["encryption_key"], callback);
        writeByteArray(stream, obj["encryption_iv"], callback);
        writeVector(stream, obj["file_hashes"], (void*) &writeTLFileHash);
    break;
    }
}

void readTLDcOption(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 414687501:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["ipv6"] = true;
        if (obj["flags"].toUInt() & 2) obj["media_only"] = true;
        if (obj["flags"].toUInt() & 4) obj["tcpo_only"] = true;
        if (obj["flags"].toUInt() & 8) obj["cdn"] = true;
        if (obj["flags"].toUInt() & 16) obj["static"] = true;
        readInt32(stream, obj["id"], callback);
        readString(stream, obj["ip_address"], callback);
        readInt32(stream, obj["port"], callback);
        if (obj["flags"].toUInt() & 1024) readByteArray(stream, obj["secret"], callback);
    break;
    }
    i = obj;
}

void writeTLDcOption(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 414687501:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["ipv6"].isNull()) | 
            (!obj["media_only"].isNull() << 1) | 
            (!obj["tcpo_only"].isNull() << 2) | 
            (!obj["cdn"].isNull() << 3) | 
            (!obj["static"].isNull() << 4) | 
            (!obj["secret"].isNull() << 10) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        writeString(stream, obj["ip_address"], callback);
        writeInt32(stream, obj["port"], callback);
        if (obj["flags"].toUInt() & 1024) writeByteArray(stream, obj["secret"], callback);
    break;
    }
}

void readTLConfig(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 856375399:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["phonecalls_enabled"] = true;
        if (obj["flags"].toUInt() & 8) obj["default_p2p_contacts"] = true;
        if (obj["flags"].toUInt() & 16) obj["preload_featured_stickers"] = true;
        if (obj["flags"].toUInt() & 32) obj["ignore_phone_entities"] = true;
        if (obj["flags"].toUInt() & 64) obj["revoke_pm_inbox"] = true;
        if (obj["flags"].toUInt() & 256) obj["blocked_mode"] = true;
        if (obj["flags"].toUInt() & 8192) obj["pfs_enabled"] = true;
        readInt32(stream, obj["date"], callback);
        readInt32(stream, obj["expires"], callback);
        readBool(stream, obj["test_mode"], callback);
        readInt32(stream, obj["this_dc"], callback);
        readVector(stream, obj["dc_options"], (void*) &readTLDcOption);
        readString(stream, obj["dc_txt_domain_name"], callback);
        readInt32(stream, obj["chat_size_max"], callback);
        readInt32(stream, obj["megagroup_size_max"], callback);
        readInt32(stream, obj["forwarded_count_max"], callback);
        readInt32(stream, obj["online_update_period_ms"], callback);
        readInt32(stream, obj["offline_blur_timeout_ms"], callback);
        readInt32(stream, obj["offline_idle_timeout_ms"], callback);
        readInt32(stream, obj["online_cloud_timeout_ms"], callback);
        readInt32(stream, obj["notify_cloud_delay_ms"], callback);
        readInt32(stream, obj["notify_default_delay_ms"], callback);
        readInt32(stream, obj["push_chat_period_ms"], callback);
        readInt32(stream, obj["push_chat_limit"], callback);
        readInt32(stream, obj["saved_gifs_limit"], callback);
        readInt32(stream, obj["edit_time_limit"], callback);
        readInt32(stream, obj["revoke_time_limit"], callback);
        readInt32(stream, obj["revoke_pm_time_limit"], callback);
        readInt32(stream, obj["rating_e_decay"], callback);
        readInt32(stream, obj["stickers_recent_limit"], callback);
        readInt32(stream, obj["stickers_faved_limit"], callback);
        readInt32(stream, obj["channels_read_media_period"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["tmp_sessions"], callback);
        readInt32(stream, obj["pinned_dialogs_count_max"], callback);
        readInt32(stream, obj["pinned_infolder_count_max"], callback);
        readInt32(stream, obj["call_receive_timeout_ms"], callback);
        readInt32(stream, obj["call_ring_timeout_ms"], callback);
        readInt32(stream, obj["call_connect_timeout_ms"], callback);
        readInt32(stream, obj["call_packet_timeout_ms"], callback);
        readString(stream, obj["me_url_prefix"], callback);
        if (obj["flags"].toUInt() & 128) readString(stream, obj["autoupdate_url_prefix"], callback);
        if (obj["flags"].toUInt() & 512) readString(stream, obj["gif_search_username"], callback);
        if (obj["flags"].toUInt() & 1024) readString(stream, obj["venue_search_username"], callback);
        if (obj["flags"].toUInt() & 2048) readString(stream, obj["img_search_username"], callback);
        if (obj["flags"].toUInt() & 4096) readString(stream, obj["static_maps_provider"], callback);
        readInt32(stream, obj["caption_length_max"], callback);
        readInt32(stream, obj["message_length_max"], callback);
        readInt32(stream, obj["webfile_dc_id"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["suggested_lang_code"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["lang_pack_version"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["base_lang_pack_version"], callback);
    break;
    }
    i = obj;
}

void writeTLConfig(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 856375399:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["phonecalls_enabled"].isNull() << 1) | 
            (!obj["default_p2p_contacts"].isNull() << 3) | 
            (!obj["preload_featured_stickers"].isNull() << 4) | 
            (!obj["ignore_phone_entities"].isNull() << 5) | 
            (!obj["revoke_pm_inbox"].isNull() << 6) | 
            (!obj["blocked_mode"].isNull() << 8) | 
            (!obj["pfs_enabled"].isNull() << 13) | 
            (!obj["tmp_sessions"].isNull()) | 
            (!obj["autoupdate_url_prefix"].isNull() << 7) | 
            (!obj["gif_search_username"].isNull() << 9) | 
            (!obj["venue_search_username"].isNull() << 10) | 
            (!obj["img_search_username"].isNull() << 11) | 
            (!obj["static_maps_provider"].isNull() << 12) | 
            (!obj["suggested_lang_code"].isNull() << 2) | 
            (!obj["lang_pack_version"].isNull() << 2) | 
            (!obj["base_lang_pack_version"].isNull() << 2) | 
        0), callback);
        writeInt32(stream, obj["date"], callback);
        writeInt32(stream, obj["expires"], callback);
        writeBool(stream, obj["test_mode"], callback);
        writeInt32(stream, obj["this_dc"], callback);
        writeVector(stream, obj["dc_options"], (void*) &writeTLDcOption);
        writeString(stream, obj["dc_txt_domain_name"], callback);
        writeInt32(stream, obj["chat_size_max"], callback);
        writeInt32(stream, obj["megagroup_size_max"], callback);
        writeInt32(stream, obj["forwarded_count_max"], callback);
        writeInt32(stream, obj["online_update_period_ms"], callback);
        writeInt32(stream, obj["offline_blur_timeout_ms"], callback);
        writeInt32(stream, obj["offline_idle_timeout_ms"], callback);
        writeInt32(stream, obj["online_cloud_timeout_ms"], callback);
        writeInt32(stream, obj["notify_cloud_delay_ms"], callback);
        writeInt32(stream, obj["notify_default_delay_ms"], callback);
        writeInt32(stream, obj["push_chat_period_ms"], callback);
        writeInt32(stream, obj["push_chat_limit"], callback);
        writeInt32(stream, obj["saved_gifs_limit"], callback);
        writeInt32(stream, obj["edit_time_limit"], callback);
        writeInt32(stream, obj["revoke_time_limit"], callback);
        writeInt32(stream, obj["revoke_pm_time_limit"], callback);
        writeInt32(stream, obj["rating_e_decay"], callback);
        writeInt32(stream, obj["stickers_recent_limit"], callback);
        writeInt32(stream, obj["stickers_faved_limit"], callback);
        writeInt32(stream, obj["channels_read_media_period"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["tmp_sessions"], callback);
        writeInt32(stream, obj["pinned_dialogs_count_max"], callback);
        writeInt32(stream, obj["pinned_infolder_count_max"], callback);
        writeInt32(stream, obj["call_receive_timeout_ms"], callback);
        writeInt32(stream, obj["call_ring_timeout_ms"], callback);
        writeInt32(stream, obj["call_connect_timeout_ms"], callback);
        writeInt32(stream, obj["call_packet_timeout_ms"], callback);
        writeString(stream, obj["me_url_prefix"], callback);
        if (obj["flags"].toUInt() & 128) writeString(stream, obj["autoupdate_url_prefix"], callback);
        if (obj["flags"].toUInt() & 512) writeString(stream, obj["gif_search_username"], callback);
        if (obj["flags"].toUInt() & 1024) writeString(stream, obj["venue_search_username"], callback);
        if (obj["flags"].toUInt() & 2048) writeString(stream, obj["img_search_username"], callback);
        if (obj["flags"].toUInt() & 4096) writeString(stream, obj["static_maps_provider"], callback);
        writeInt32(stream, obj["caption_length_max"], callback);
        writeInt32(stream, obj["message_length_max"], callback);
        writeInt32(stream, obj["webfile_dc_id"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["suggested_lang_code"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["lang_pack_version"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["base_lang_pack_version"], callback);
    break;
    }
}

void readTLNearestDc(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1910892683:
        obj["_"] = conId.toInt();
        readString(stream, obj["country"], callback);
        readInt32(stream, obj["this_dc"], callback);
        readInt32(stream, obj["nearest_dc"], callback);
    break;
    }
    i = obj;
}

void writeTLNearestDc(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1910892683:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["country"], callback);
        writeInt32(stream, obj["this_dc"], callback);
        writeInt32(stream, obj["nearest_dc"], callback);
    break;
    }
}

void readTLHelpAppUpdate(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -860107216:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["can_not_skip"] = true;
        readInt32(stream, obj["id"], callback);
        readString(stream, obj["version"], callback);
        readString(stream, obj["text"], callback);
        readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        if (obj["flags"].toUInt() & 2) readTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 8) readTLDocument(stream, obj["sticker"], callback);
    break;
    case -1000708810:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLHelpAppUpdate(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -860107216:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["can_not_skip"].isNull()) | 
            (!obj["document"].isNull() << 1) | 
            (!obj["url"].isNull() << 2) | 
            (!obj["sticker"].isNull() << 3) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        writeString(stream, obj["version"], callback);
        writeString(stream, obj["text"], callback);
        writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 2) writeTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 8) writeTLDocument(stream, obj["sticker"], callback);
    break;
    case -1000708810:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLHelpInviteText(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 415997816:
        obj["_"] = conId.toInt();
        readString(stream, obj["message"], callback);
    break;
    }
    i = obj;
}

void writeTLHelpInviteText(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 415997816:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["message"], callback);
    break;
    }
}

void readTLEncryptedChat(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1417756512:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["id"], callback);
    break;
    case 1722964307:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["admin_id"], callback);
        readInt64(stream, obj["participant_id"], callback);
    break;
    case 1223809356:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["folder_id"], callback);
        readInt32(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["admin_id"], callback);
        readInt64(stream, obj["participant_id"], callback);
        readByteArray(stream, obj["g_a"], callback);
    break;
    case 1643173063:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["admin_id"], callback);
        readInt64(stream, obj["participant_id"], callback);
        readByteArray(stream, obj["g_a_or_b"], callback);
        readInt64(stream, obj["key_fingerprint"], callback);
    break;
    case 505183301:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["history_deleted"] = true;
        readInt32(stream, obj["id"], callback);
    break;
    }
    i = obj;
}

void writeTLEncryptedChat(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1417756512:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["id"], callback);
    break;
    case 1722964307:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["admin_id"], callback);
        writeInt64(stream, obj["participant_id"], callback);
    break;
    case 1223809356:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["folder_id"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["folder_id"], callback);
        writeInt32(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["admin_id"], callback);
        writeInt64(stream, obj["participant_id"], callback);
        writeByteArray(stream, obj["g_a"], callback);
    break;
    case 1643173063:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["admin_id"], callback);
        writeInt64(stream, obj["participant_id"], callback);
        writeByteArray(stream, obj["g_a_or_b"], callback);
        writeInt64(stream, obj["key_fingerprint"], callback);
    break;
    case 505183301:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["history_deleted"].isNull()) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
    break;
    }
}

void readTLInputEncryptedChat(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -247351839:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["chat_id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    }
    i = obj;
}

void writeTLInputEncryptedChat(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -247351839:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["chat_id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    }
}

void readTLEncryptedFile(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1038136962:
        obj["_"] = conId.toInt();
    break;
    case 1248893260:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["size"], callback);
        readInt32(stream, obj["dc_id"], callback);
        readInt32(stream, obj["key_fingerprint"], callback);
    break;
    }
    i = obj;
}

void writeTLEncryptedFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1038136962:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1248893260:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["size"], callback);
        writeInt32(stream, obj["dc_id"], callback);
        writeInt32(stream, obj["key_fingerprint"], callback);
    break;
    }
}

void readTLInputEncryptedFile(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 406307684:
        obj["_"] = conId.toInt();
    break;
    case 1690108678:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt32(stream, obj["parts"], callback);
        readString(stream, obj["md5_checksum"], callback);
        readInt32(stream, obj["key_fingerprint"], callback);
    break;
    case 1511503333:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case 767652808:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt32(stream, obj["parts"], callback);
        readInt32(stream, obj["key_fingerprint"], callback);
    break;
    }
    i = obj;
}

void writeTLInputEncryptedFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 406307684:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1690108678:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt32(stream, obj["parts"], callback);
        writeString(stream, obj["md5_checksum"], callback);
        writeInt32(stream, obj["key_fingerprint"], callback);
    break;
    case 1511503333:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case 767652808:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt32(stream, obj["parts"], callback);
        writeInt32(stream, obj["key_fingerprint"], callback);
    break;
    }
}

void readTLEncryptedMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -317144808:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["random_id"], callback);
        readInt32(stream, obj["chat_id"], callback);
        readInt32(stream, obj["date"], callback);
        readByteArray(stream, obj["bytes"], callback);
        readTLEncryptedFile(stream, obj["file"], callback);
    break;
    case 594758406:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["random_id"], callback);
        readInt32(stream, obj["chat_id"], callback);
        readInt32(stream, obj["date"], callback);
        readByteArray(stream, obj["bytes"], callback);
    break;
    }
    i = obj;
}

void writeTLEncryptedMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -317144808:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["random_id"], callback);
        writeInt32(stream, obj["chat_id"], callback);
        writeInt32(stream, obj["date"], callback);
        writeByteArray(stream, obj["bytes"], callback);
        writeTLEncryptedFile(stream, obj["file"], callback);
    break;
    case 594758406:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["random_id"], callback);
        writeInt32(stream, obj["chat_id"], callback);
        writeInt32(stream, obj["date"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    }
}

void readTLMessagesDhConfig(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1058912715:
        obj["_"] = conId.toInt();
        readByteArray(stream, obj["random"], callback);
    break;
    case 740433629:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["g"], callback);
        readByteArray(stream, obj["p"], callback);
        readInt32(stream, obj["version"], callback);
        readByteArray(stream, obj["random"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesDhConfig(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1058912715:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["random"], callback);
    break;
    case 740433629:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["g"], callback);
        writeByteArray(stream, obj["p"], callback);
        writeInt32(stream, obj["version"], callback);
        writeByteArray(stream, obj["random"], callback);
    break;
    }
}

void readTLMessagesSentEncryptedMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1443858741:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["date"], callback);
    break;
    case -1802240206:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["date"], callback);
        readTLEncryptedFile(stream, obj["file"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesSentEncryptedMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1443858741:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    case -1802240206:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["date"], callback);
        writeTLEncryptedFile(stream, obj["file"], callback);
    break;
    }
}

void readTLInputDocument(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1928391342:
        obj["_"] = conId.toInt();
    break;
    case 448771445:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readByteArray(stream, obj["file_reference"], callback);
    break;
    }
    i = obj;
}

void writeTLInputDocument(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1928391342:
        writeInt32(stream, obj["_"], callback);
    break;
    case 448771445:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeByteArray(stream, obj["file_reference"], callback);
    break;
    }
}

void readTLDocument(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 922273905:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
    break;
    case 512177195:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readByteArray(stream, obj["file_reference"], callback);
        readInt32(stream, obj["date"], callback);
        readString(stream, obj["mime_type"], callback);
        readInt32(stream, obj["size"], callback);
        if (obj["flags"].toUInt() & 1) readVector(stream, obj["thumbs"], (void*) &readTLPhotoSize);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["video_thumbs"], (void*) &readTLVideoSize);
        readInt32(stream, obj["dc_id"], callback);
        readVector(stream, obj["attributes"], (void*) &readTLDocumentAttribute);
    break;
    }
    i = obj;
}

void writeTLDocument(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 922273905:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
    break;
    case 512177195:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["thumbs"].isNull()) | 
            (!obj["video_thumbs"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeByteArray(stream, obj["file_reference"], callback);
        writeInt32(stream, obj["date"], callback);
        writeString(stream, obj["mime_type"], callback);
        writeInt32(stream, obj["size"], callback);
        if (obj["flags"].toUInt() & 1) writeVector(stream, obj["thumbs"], (void*) &writeTLPhotoSize);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["video_thumbs"], (void*) &writeTLVideoSize);
        writeInt32(stream, obj["dc_id"], callback);
        writeVector(stream, obj["attributes"], (void*) &writeTLDocumentAttribute);
    break;
    }
}

void readTLHelpSupport(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 398898678:
        obj["_"] = conId.toInt();
        readString(stream, obj["phone_number"], callback);
        readTLUser(stream, obj["user"], callback);
    break;
    }
    i = obj;
}

void writeTLHelpSupport(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 398898678:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeTLUser(stream, obj["user"], callback);
    break;
    }
}

void readTLNotifyPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1613493288:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
    break;
    case -1261946036:
        obj["_"] = conId.toInt();
    break;
    case -1073230141:
        obj["_"] = conId.toInt();
    break;
    case -703403793:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLNotifyPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1613493288:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
    break;
    case -1261946036:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1073230141:
        writeInt32(stream, obj["_"], callback);
    break;
    case -703403793:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLSendMessageAction(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 381645902:
        obj["_"] = conId.toInt();
    break;
    case -44119819:
        obj["_"] = conId.toInt();
    break;
    case -1584933265:
        obj["_"] = conId.toInt();
    break;
    case -378127636:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["progress"], callback);
    break;
    case -718310409:
        obj["_"] = conId.toInt();
    break;
    case -212740181:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["progress"], callback);
    break;
    case -774682074:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["progress"], callback);
    break;
    case -1441998364:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["progress"], callback);
    break;
    case 393186209:
        obj["_"] = conId.toInt();
    break;
    case 1653390447:
        obj["_"] = conId.toInt();
    break;
    case -580219064:
        obj["_"] = conId.toInt();
    break;
    case -1997373508:
        obj["_"] = conId.toInt();
    break;
    case 608050278:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["progress"], callback);
    break;
    case -651419003:
        obj["_"] = conId.toInt();
    break;
    case -606432698:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["progress"], callback);
    break;
    case -1336228175:
        obj["_"] = conId.toInt();
    break;
    case 630664139:
        obj["_"] = conId.toInt();
        readString(stream, obj["emoticon"], callback);
        readInt32(stream, obj["msg_id"], callback);
        readTLDataJSON(stream, obj["interaction"], callback);
    break;
    case -1234857938:
        obj["_"] = conId.toInt();
        readString(stream, obj["emoticon"], callback);
    break;
    }
    i = obj;
}

void writeTLSendMessageAction(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 381645902:
        writeInt32(stream, obj["_"], callback);
    break;
    case -44119819:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1584933265:
        writeInt32(stream, obj["_"], callback);
    break;
    case -378127636:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["progress"], callback);
    break;
    case -718310409:
        writeInt32(stream, obj["_"], callback);
    break;
    case -212740181:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["progress"], callback);
    break;
    case -774682074:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["progress"], callback);
    break;
    case -1441998364:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["progress"], callback);
    break;
    case 393186209:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1653390447:
        writeInt32(stream, obj["_"], callback);
    break;
    case -580219064:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1997373508:
        writeInt32(stream, obj["_"], callback);
    break;
    case 608050278:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["progress"], callback);
    break;
    case -651419003:
        writeInt32(stream, obj["_"], callback);
    break;
    case -606432698:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["progress"], callback);
    break;
    case -1336228175:
        writeInt32(stream, obj["_"], callback);
    break;
    case 630664139:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["emoticon"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeTLDataJSON(stream, obj["interaction"], callback);
    break;
    case -1234857938:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["emoticon"], callback);
    break;
    }
}

void readTLContactsFound(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1290580579:
        obj["_"] = conId.toInt();
        readVector(stream, obj["my_results"], (void*) &readTLPeer);
        readVector(stream, obj["results"], (void*) &readTLPeer);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLContactsFound(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1290580579:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["my_results"], (void*) &writeTLPeer);
        writeVector(stream, obj["results"], (void*) &writeTLPeer);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLInputPrivacyKey(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1335282456:
        obj["_"] = conId.toInt();
    break;
    case -1107622874:
        obj["_"] = conId.toInt();
    break;
    case -88417185:
        obj["_"] = conId.toInt();
    break;
    case -610373422:
        obj["_"] = conId.toInt();
    break;
    case -1529000952:
        obj["_"] = conId.toInt();
    break;
    case 1461304012:
        obj["_"] = conId.toInt();
    break;
    case 55761658:
        obj["_"] = conId.toInt();
    break;
    case -786326563:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLInputPrivacyKey(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1335282456:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1107622874:
        writeInt32(stream, obj["_"], callback);
    break;
    case -88417185:
        writeInt32(stream, obj["_"], callback);
    break;
    case -610373422:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1529000952:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1461304012:
        writeInt32(stream, obj["_"], callback);
    break;
    case 55761658:
        writeInt32(stream, obj["_"], callback);
    break;
    case -786326563:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLPrivacyKey(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1137792208:
        obj["_"] = conId.toInt();
    break;
    case 1343122938:
        obj["_"] = conId.toInt();
    break;
    case 1030105979:
        obj["_"] = conId.toInt();
    break;
    case 961092808:
        obj["_"] = conId.toInt();
    break;
    case 1777096355:
        obj["_"] = conId.toInt();
    break;
    case -1777000467:
        obj["_"] = conId.toInt();
    break;
    case -778378131:
        obj["_"] = conId.toInt();
    break;
    case 1124062251:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLPrivacyKey(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1137792208:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1343122938:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1030105979:
        writeInt32(stream, obj["_"], callback);
    break;
    case 961092808:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1777096355:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1777000467:
        writeInt32(stream, obj["_"], callback);
    break;
    case -778378131:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1124062251:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLInputPrivacyRule(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 218751099:
        obj["_"] = conId.toInt();
    break;
    case 407582158:
        obj["_"] = conId.toInt();
    break;
    case 320652927:
        obj["_"] = conId.toInt();
        readVector(stream, obj["users"], (void*) &readTLInputUser);
    break;
    case 195371015:
        obj["_"] = conId.toInt();
    break;
    case -697604407:
        obj["_"] = conId.toInt();
    break;
    case -1877932953:
        obj["_"] = conId.toInt();
        readVector(stream, obj["users"], (void*) &readTLInputUser);
    break;
    case -2079962673:
        obj["_"] = conId.toInt();
        readVector(stream, obj["chats"], (void*) &readInt64);
    break;
    case -380694650:
        obj["_"] = conId.toInt();
        readVector(stream, obj["chats"], (void*) &readInt64);
    break;
    }
    i = obj;
}

void writeTLInputPrivacyRule(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 218751099:
        writeInt32(stream, obj["_"], callback);
    break;
    case 407582158:
        writeInt32(stream, obj["_"], callback);
    break;
    case 320652927:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLInputUser);
    break;
    case 195371015:
        writeInt32(stream, obj["_"], callback);
    break;
    case -697604407:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1877932953:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLInputUser);
    break;
    case -2079962673:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["chats"], (void*) &writeInt64);
    break;
    case -380694650:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["chats"], (void*) &writeInt64);
    break;
    }
}

void readTLPrivacyRule(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -123988:
        obj["_"] = conId.toInt();
    break;
    case 1698855810:
        obj["_"] = conId.toInt();
    break;
    case -1198497870:
        obj["_"] = conId.toInt();
        readVector(stream, obj["users"], (void*) &readInt64);
    break;
    case -125240806:
        obj["_"] = conId.toInt();
    break;
    case -1955338397:
        obj["_"] = conId.toInt();
    break;
    case -463335103:
        obj["_"] = conId.toInt();
        readVector(stream, obj["users"], (void*) &readInt64);
    break;
    case 1796427406:
        obj["_"] = conId.toInt();
        readVector(stream, obj["chats"], (void*) &readInt64);
    break;
    case 1103656293:
        obj["_"] = conId.toInt();
        readVector(stream, obj["chats"], (void*) &readInt64);
    break;
    }
    i = obj;
}

void writeTLPrivacyRule(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -123988:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1698855810:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1198497870:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["users"], (void*) &writeInt64);
    break;
    case -125240806:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1955338397:
        writeInt32(stream, obj["_"], callback);
    break;
    case -463335103:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["users"], (void*) &writeInt64);
    break;
    case 1796427406:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["chats"], (void*) &writeInt64);
    break;
    case 1103656293:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["chats"], (void*) &writeInt64);
    break;
    }
}

void readTLAccountPrivacyRules(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1352683077:
        obj["_"] = conId.toInt();
        readVector(stream, obj["rules"], (void*) &readTLPrivacyRule);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLAccountPrivacyRules(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1352683077:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["rules"], (void*) &writeTLPrivacyRule);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLAccountDaysTTL(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1194283041:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["days"], callback);
    break;
    }
    i = obj;
}

void writeTLAccountDaysTTL(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1194283041:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["days"], callback);
    break;
    }
}

void readTLDocumentAttribute(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1815593308:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["w"], callback);
        readInt32(stream, obj["h"], callback);
    break;
    case 297109817:
        obj["_"] = conId.toInt();
    break;
    case 1662637586:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["mask"] = true;
        readString(stream, obj["alt"], callback);
        readTLInputStickerSet(stream, obj["stickerset"], callback);
        if (obj["flags"].toUInt() & 1) readTLMaskCoords(stream, obj["mask_coords"], callback);
    break;
    case 250621158:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["round_message"] = true;
        if (obj["flags"].toUInt() & 2) obj["supports_streaming"] = true;
        readInt32(stream, obj["duration"], callback);
        readInt32(stream, obj["w"], callback);
        readInt32(stream, obj["h"], callback);
    break;
    case -1739392570:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1024) obj["voice"] = true;
        readInt32(stream, obj["duration"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["performer"], callback);
        if (obj["flags"].toUInt() & 4) readByteArray(stream, obj["waveform"], callback);
    break;
    case 358154344:
        obj["_"] = conId.toInt();
        readString(stream, obj["file_name"], callback);
    break;
    case -1744710921:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLDocumentAttribute(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1815593308:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["w"], callback);
        writeInt32(stream, obj["h"], callback);
    break;
    case 297109817:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1662637586:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["mask"].isNull() << 1) | 
            (!obj["mask_coords"].isNull()) | 
        0), callback);
        writeString(stream, obj["alt"], callback);
        writeTLInputStickerSet(stream, obj["stickerset"], callback);
        if (obj["flags"].toUInt() & 1) writeTLMaskCoords(stream, obj["mask_coords"], callback);
    break;
    case 250621158:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["round_message"].isNull()) | 
            (!obj["supports_streaming"].isNull() << 1) | 
        0), callback);
        writeInt32(stream, obj["duration"], callback);
        writeInt32(stream, obj["w"], callback);
        writeInt32(stream, obj["h"], callback);
    break;
    case -1739392570:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["voice"].isNull() << 10) | 
            (!obj["title"].isNull()) | 
            (!obj["performer"].isNull() << 1) | 
            (!obj["waveform"].isNull() << 2) | 
        0), callback);
        writeInt32(stream, obj["duration"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["performer"], callback);
        if (obj["flags"].toUInt() & 4) writeByteArray(stream, obj["waveform"], callback);
    break;
    case 358154344:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["file_name"], callback);
    break;
    case -1744710921:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMessagesStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -244016606:
        obj["_"] = conId.toInt();
    break;
    case 816245886:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["hash"], callback);
        readVector(stream, obj["stickers"], (void*) &readTLDocument);
    break;
    }
    i = obj;
}

void writeTLMessagesStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -244016606:
        writeInt32(stream, obj["_"], callback);
    break;
    case 816245886:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
        writeVector(stream, obj["stickers"], (void*) &writeTLDocument);
    break;
    }
}

void readTLStickerPack(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 313694676:
        obj["_"] = conId.toInt();
        readString(stream, obj["emoticon"], callback);
        readVector(stream, obj["documents"], (void*) &readInt64);
    break;
    }
    i = obj;
}

void writeTLStickerPack(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 313694676:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["emoticon"], callback);
        writeVector(stream, obj["documents"], (void*) &writeInt64);
    break;
    }
}

void readTLMessagesAllStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -395967805:
        obj["_"] = conId.toInt();
    break;
    case -843329861:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["hash"], callback);
        readVector(stream, obj["sets"], (void*) &readTLStickerSet);
    break;
    }
    i = obj;
}

void writeTLMessagesAllStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -395967805:
        writeInt32(stream, obj["_"], callback);
    break;
    case -843329861:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
        writeVector(stream, obj["sets"], (void*) &writeTLStickerSet);
    break;
    }
}

void readTLMessagesAffectedMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2066640507:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesAffectedMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2066640507:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
    break;
    }
}

void readTLWebPage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -350980120:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
    break;
    case -981018084:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    case -392411726:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["id"], callback);
        readString(stream, obj["url"], callback);
        readString(stream, obj["display_url"], callback);
        readInt32(stream, obj["hash"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["site_name"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 16) readTLPhoto(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 32) readString(stream, obj["embed_url"], callback);
        if (obj["flags"].toUInt() & 32) readString(stream, obj["embed_type"], callback);
        if (obj["flags"].toUInt() & 64) readInt32(stream, obj["embed_width"], callback);
        if (obj["flags"].toUInt() & 64) readInt32(stream, obj["embed_height"], callback);
        if (obj["flags"].toUInt() & 128) readInt32(stream, obj["duration"], callback);
        if (obj["flags"].toUInt() & 256) readString(stream, obj["author"], callback);
        if (obj["flags"].toUInt() & 512) readTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 1024) readTLPage(stream, obj["cached_page"], callback);
        if (obj["flags"].toUInt() & 4096) readVector(stream, obj["attributes"], (void*) &readTLWebPageAttribute);
    break;
    case 1930545681:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["cached_page_views"], callback);
    break;
    }
    i = obj;
}

void writeTLWebPage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -350980120:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
    break;
    case -981018084:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    case -392411726:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["type"].isNull()) | 
            (!obj["site_name"].isNull() << 1) | 
            (!obj["title"].isNull() << 2) | 
            (!obj["description"].isNull() << 3) | 
            (!obj["photo"].isNull() << 4) | 
            (!obj["embed_url"].isNull() << 5) | 
            (!obj["embed_type"].isNull() << 5) | 
            (!obj["embed_width"].isNull() << 6) | 
            (!obj["embed_height"].isNull() << 6) | 
            (!obj["duration"].isNull() << 7) | 
            (!obj["author"].isNull() << 8) | 
            (!obj["document"].isNull() << 9) | 
            (!obj["cached_page"].isNull() << 10) | 
            (!obj["attributes"].isNull() << 12) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeString(stream, obj["url"], callback);
        writeString(stream, obj["display_url"], callback);
        writeInt32(stream, obj["hash"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["site_name"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 16) writeTLPhoto(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 32) writeString(stream, obj["embed_url"], callback);
        if (obj["flags"].toUInt() & 32) writeString(stream, obj["embed_type"], callback);
        if (obj["flags"].toUInt() & 64) writeInt32(stream, obj["embed_width"], callback);
        if (obj["flags"].toUInt() & 64) writeInt32(stream, obj["embed_height"], callback);
        if (obj["flags"].toUInt() & 128) writeInt32(stream, obj["duration"], callback);
        if (obj["flags"].toUInt() & 256) writeString(stream, obj["author"], callback);
        if (obj["flags"].toUInt() & 512) writeTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 1024) writeTLPage(stream, obj["cached_page"], callback);
        if (obj["flags"].toUInt() & 4096) writeVector(stream, obj["attributes"], (void*) &writeTLWebPageAttribute);
    break;
    case 1930545681:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["cached_page_views"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["cached_page_views"], callback);
    break;
    }
}

void readTLAuthorization(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1392388579:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["current"] = true;
        if (obj["flags"].toUInt() & 2) obj["official_app"] = true;
        if (obj["flags"].toUInt() & 4) obj["password_pending"] = true;
        if (obj["flags"].toUInt() & 8) obj["encrypted_requests_disabled"] = true;
        if (obj["flags"].toUInt() & 16) obj["call_requests_disabled"] = true;
        readInt64(stream, obj["hash"], callback);
        readString(stream, obj["device_model"], callback);
        readString(stream, obj["platform"], callback);
        readString(stream, obj["system_version"], callback);
        readInt32(stream, obj["api_id"], callback);
        readString(stream, obj["app_name"], callback);
        readString(stream, obj["app_version"], callback);
        readInt32(stream, obj["date_created"], callback);
        readInt32(stream, obj["date_active"], callback);
        readString(stream, obj["ip"], callback);
        readString(stream, obj["country"], callback);
        readString(stream, obj["region"], callback);
    break;
    }
    i = obj;
}

void writeTLAuthorization(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1392388579:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["current"].isNull()) | 
            (!obj["official_app"].isNull() << 1) | 
            (!obj["password_pending"].isNull() << 2) | 
            (!obj["encrypted_requests_disabled"].isNull() << 3) | 
            (!obj["call_requests_disabled"].isNull() << 4) | 
        0), callback);
        writeInt64(stream, obj["hash"], callback);
        writeString(stream, obj["device_model"], callback);
        writeString(stream, obj["platform"], callback);
        writeString(stream, obj["system_version"], callback);
        writeInt32(stream, obj["api_id"], callback);
        writeString(stream, obj["app_name"], callback);
        writeString(stream, obj["app_version"], callback);
        writeInt32(stream, obj["date_created"], callback);
        writeInt32(stream, obj["date_active"], callback);
        writeString(stream, obj["ip"], callback);
        writeString(stream, obj["country"], callback);
        writeString(stream, obj["region"], callback);
    break;
    }
}

void readTLAccountAuthorizations(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1275039392:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["authorization_ttl_days"], callback);
        readVector(stream, obj["authorizations"], (void*) &readTLAuthorization);
    break;
    }
    i = obj;
}

void writeTLAccountAuthorizations(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1275039392:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["authorization_ttl_days"], callback);
        writeVector(stream, obj["authorizations"], (void*) &writeTLAuthorization);
    break;
    }
}

void readTLAccountPassword(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 408623183:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["has_recovery"] = true;
        if (obj["flags"].toUInt() & 2) obj["has_secure_values"] = true;
        if (obj["flags"].toUInt() & 4) obj["has_password"] = true;
        if (obj["flags"].toUInt() & 4) readTLPasswordKdfAlgo(stream, obj["current_algo"], callback);
        if (obj["flags"].toUInt() & 4) readByteArray(stream, obj["srp_B"], callback);
        if (obj["flags"].toUInt() & 4) readInt64(stream, obj["srp_id"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["hint"], callback);
        if (obj["flags"].toUInt() & 16) readString(stream, obj["email_unconfirmed_pattern"], callback);
        readTLPasswordKdfAlgo(stream, obj["new_algo"], callback);
        readTLSecurePasswordKdfAlgo(stream, obj["new_secure_algo"], callback);
        readByteArray(stream, obj["secure_random"], callback);
        if (obj["flags"].toUInt() & 32) readInt32(stream, obj["pending_reset_date"], callback);
    break;
    }
    i = obj;
}

void writeTLAccountPassword(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 408623183:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["has_recovery"].isNull()) | 
            (!obj["has_secure_values"].isNull() << 1) | 
            (!obj["has_password"].isNull() << 2) | 
            (!obj["current_algo"].isNull() << 2) | 
            (!obj["srp_B"].isNull() << 2) | 
            (!obj["srp_id"].isNull() << 2) | 
            (!obj["hint"].isNull() << 3) | 
            (!obj["email_unconfirmed_pattern"].isNull() << 4) | 
            (!obj["pending_reset_date"].isNull() << 5) | 
        0), callback);
        if (obj["flags"].toUInt() & 4) writeTLPasswordKdfAlgo(stream, obj["current_algo"], callback);
        if (obj["flags"].toUInt() & 4) writeByteArray(stream, obj["srp_B"], callback);
        if (obj["flags"].toUInt() & 4) writeInt64(stream, obj["srp_id"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["hint"], callback);
        if (obj["flags"].toUInt() & 16) writeString(stream, obj["email_unconfirmed_pattern"], callback);
        writeTLPasswordKdfAlgo(stream, obj["new_algo"], callback);
        writeTLSecurePasswordKdfAlgo(stream, obj["new_secure_algo"], callback);
        writeByteArray(stream, obj["secure_random"], callback);
        if (obj["flags"].toUInt() & 32) writeInt32(stream, obj["pending_reset_date"], callback);
    break;
    }
}

void readTLAccountPasswordSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1705233435:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["email"], callback);
        if (obj["flags"].toUInt() & 2) readTLSecureSecretSettings(stream, obj["secure_settings"], callback);
    break;
    }
    i = obj;
}

void writeTLAccountPasswordSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1705233435:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["email"].isNull()) | 
            (!obj["secure_settings"].isNull() << 1) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["email"], callback);
        if (obj["flags"].toUInt() & 2) writeTLSecureSecretSettings(stream, obj["secure_settings"], callback);
    break;
    }
}

void readTLAccountPasswordInputSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1036572727:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readTLPasswordKdfAlgo(stream, obj["new_algo"], callback);
        if (obj["flags"].toUInt() & 1) readByteArray(stream, obj["new_password_hash"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["hint"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["email"], callback);
        if (obj["flags"].toUInt() & 4) readTLSecureSecretSettings(stream, obj["new_secure_settings"], callback);
    break;
    }
    i = obj;
}

void writeTLAccountPasswordInputSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1036572727:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["new_algo"].isNull()) | 
            (!obj["new_password_hash"].isNull()) | 
            (!obj["hint"].isNull()) | 
            (!obj["email"].isNull() << 1) | 
            (!obj["new_secure_settings"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeTLPasswordKdfAlgo(stream, obj["new_algo"], callback);
        if (obj["flags"].toUInt() & 1) writeByteArray(stream, obj["new_password_hash"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["hint"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["email"], callback);
        if (obj["flags"].toUInt() & 4) writeTLSecureSecretSettings(stream, obj["new_secure_settings"], callback);
    break;
    }
}

void readTLAuthPasswordRecovery(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 326715557:
        obj["_"] = conId.toInt();
        readString(stream, obj["email_pattern"], callback);
    break;
    }
    i = obj;
}

void writeTLAuthPasswordRecovery(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 326715557:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["email_pattern"], callback);
    break;
    }
}

void readTLReceivedNotifyMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1551583367:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["id"], callback);
        readInt32(stream, obj["flags"], callback);
    break;
    }
    i = obj;
}

void writeTLReceivedNotifyMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1551583367:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["id"], callback);
        writeInt32(stream, obj["flags"], callback);
    break;
    }
}

void readTLExportedChatInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 179611673:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["revoked"] = true;
        if (obj["flags"].toUInt() & 32) obj["permanent"] = true;
        if (obj["flags"].toUInt() & 64) obj["request_needed"] = true;
        readString(stream, obj["link"], callback);
        readInt64(stream, obj["admin_id"], callback);
        readInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["start_date"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["expire_date"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["usage_limit"], callback);
        if (obj["flags"].toUInt() & 8) readInt32(stream, obj["usage"], callback);
        if (obj["flags"].toUInt() & 128) readInt32(stream, obj["requested"], callback);
        if (obj["flags"].toUInt() & 256) readString(stream, obj["title"], callback);
    break;
    }
    i = obj;
}

void writeTLExportedChatInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 179611673:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["revoked"].isNull()) | 
            (!obj["permanent"].isNull() << 5) | 
            (!obj["request_needed"].isNull() << 6) | 
            (!obj["start_date"].isNull() << 4) | 
            (!obj["expire_date"].isNull() << 1) | 
            (!obj["usage_limit"].isNull() << 2) | 
            (!obj["usage"].isNull() << 3) | 
            (!obj["requested"].isNull() << 7) | 
            (!obj["title"].isNull() << 8) | 
        0), callback);
        writeString(stream, obj["link"], callback);
        writeInt64(stream, obj["admin_id"], callback);
        writeInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["start_date"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["expire_date"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["usage_limit"], callback);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["usage"], callback);
        if (obj["flags"].toUInt() & 128) writeInt32(stream, obj["requested"], callback);
        if (obj["flags"].toUInt() & 256) writeString(stream, obj["title"], callback);
    break;
    }
}

void readTLChatInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1516793212:
        obj["_"] = conId.toInt();
        readTLChat(stream, obj["chat"], callback);
    break;
    case 806110401:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["channel"] = true;
        if (obj["flags"].toUInt() & 2) obj["broadcast"] = true;
        if (obj["flags"].toUInt() & 4) obj["public"] = true;
        if (obj["flags"].toUInt() & 8) obj["megagroup"] = true;
        if (obj["flags"].toUInt() & 64) obj["request_needed"] = true;
        readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 32) readString(stream, obj["about"], callback);
        readTLPhoto(stream, obj["photo"], callback);
        readInt32(stream, obj["participants_count"], callback);
        if (obj["flags"].toUInt() & 16) readVector(stream, obj["participants"], (void*) &readTLUser);
    break;
    case 1634294960:
        obj["_"] = conId.toInt();
        readTLChat(stream, obj["chat"], callback);
        readInt32(stream, obj["expires"], callback);
    break;
    }
    i = obj;
}

void writeTLChatInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1516793212:
        writeInt32(stream, obj["_"], callback);
        writeTLChat(stream, obj["chat"], callback);
    break;
    case 806110401:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["channel"].isNull()) | 
            (!obj["broadcast"].isNull() << 1) | 
            (!obj["public"].isNull() << 2) | 
            (!obj["megagroup"].isNull() << 3) | 
            (!obj["request_needed"].isNull() << 6) | 
            (!obj["about"].isNull() << 5) | 
            (!obj["participants"].isNull() << 4) | 
        0), callback);
        writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 32) writeString(stream, obj["about"], callback);
        writeTLPhoto(stream, obj["photo"], callback);
        writeInt32(stream, obj["participants_count"], callback);
        if (obj["flags"].toUInt() & 16) writeVector(stream, obj["participants"], (void*) &writeTLUser);
    break;
    case 1634294960:
        writeInt32(stream, obj["_"], callback);
        writeTLChat(stream, obj["chat"], callback);
        writeInt32(stream, obj["expires"], callback);
    break;
    }
}

void readTLInputStickerSet(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -4838507:
        obj["_"] = conId.toInt();
    break;
    case -1645763991:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case -2044933984:
        obj["_"] = conId.toInt();
        readString(stream, obj["short_name"], callback);
    break;
    case 42402760:
        obj["_"] = conId.toInt();
    break;
    case -427863538:
        obj["_"] = conId.toInt();
        readString(stream, obj["emoticon"], callback);
    break;
    case 215889721:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLInputStickerSet(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -4838507:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1645763991:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case -2044933984:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["short_name"], callback);
    break;
    case 42402760:
        writeInt32(stream, obj["_"], callback);
    break;
    case -427863538:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["emoticon"], callback);
    break;
    case 215889721:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLStickerSet(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -673242758:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["archived"] = true;
        if (obj["flags"].toUInt() & 4) obj["official"] = true;
        if (obj["flags"].toUInt() & 8) obj["masks"] = true;
        if (obj["flags"].toUInt() & 32) obj["animated"] = true;
        if (obj["flags"].toUInt() & 64) obj["videos"] = true;
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["installed_date"], callback);
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readString(stream, obj["title"], callback);
        readString(stream, obj["short_name"], callback);
        if (obj["flags"].toUInt() & 16) readVector(stream, obj["thumbs"], (void*) &readTLPhotoSize);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["thumb_dc_id"], callback);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["thumb_version"], callback);
        readInt32(stream, obj["count"], callback);
        readInt32(stream, obj["hash"], callback);
    break;
    }
    i = obj;
}

void writeTLStickerSet(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -673242758:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["archived"].isNull() << 1) | 
            (!obj["official"].isNull() << 2) | 
            (!obj["masks"].isNull() << 3) | 
            (!obj["animated"].isNull() << 5) | 
            (!obj["videos"].isNull() << 6) | 
            (!obj["installed_date"].isNull()) | 
            (!obj["thumbs"].isNull() << 4) | 
            (!obj["thumb_dc_id"].isNull() << 4) | 
            (!obj["thumb_version"].isNull() << 4) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["installed_date"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["short_name"], callback);
        if (obj["flags"].toUInt() & 16) writeVector(stream, obj["thumbs"], (void*) &writeTLPhotoSize);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["thumb_dc_id"], callback);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["thumb_version"], callback);
        writeInt32(stream, obj["count"], callback);
        writeInt32(stream, obj["hash"], callback);
    break;
    }
}

void readTLMessagesStickerSet(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1240849242:
        obj["_"] = conId.toInt();
        readTLStickerSet(stream, obj["set"], callback);
        readVector(stream, obj["packs"], (void*) &readTLStickerPack);
        readVector(stream, obj["documents"], (void*) &readTLDocument);
    break;
    case -738646805:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLMessagesStickerSet(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1240849242:
        writeInt32(stream, obj["_"], callback);
        writeTLStickerSet(stream, obj["set"], callback);
        writeVector(stream, obj["packs"], (void*) &writeTLStickerPack);
        writeVector(stream, obj["documents"], (void*) &writeTLDocument);
    break;
    case -738646805:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLBotCommand(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1032140601:
        obj["_"] = conId.toInt();
        readString(stream, obj["command"], callback);
        readString(stream, obj["description"], callback);
    break;
    }
    i = obj;
}

void writeTLBotCommand(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1032140601:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["command"], callback);
        writeString(stream, obj["description"], callback);
    break;
    }
}

void readTLBotInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 460632885:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readString(stream, obj["description"], callback);
        readVector(stream, obj["commands"], (void*) &readTLBotCommand);
    break;
    }
    i = obj;
}

void writeTLBotInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 460632885:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeString(stream, obj["description"], callback);
        writeVector(stream, obj["commands"], (void*) &writeTLBotCommand);
    break;
    }
}

void readTLKeyboardButton(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1560655744:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
    break;
    case 629866245:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
        readString(stream, obj["url"], callback);
    break;
    case 901503851:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["requires_password"] = true;
        readString(stream, obj["text"], callback);
        readByteArray(stream, obj["data"], callback);
    break;
    case -1318425559:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
    break;
    case -59151553:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
    break;
    case 90744648:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["same_peer"] = true;
        readString(stream, obj["text"], callback);
        readString(stream, obj["query"], callback);
    break;
    case 1358175439:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
    break;
    case -1344716869:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
    break;
    case 280464681:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["text"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["fwd_text"], callback);
        readString(stream, obj["url"], callback);
        readInt32(stream, obj["button_id"], callback);
    break;
    case -802258988:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["request_write_access"] = true;
        readString(stream, obj["text"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["fwd_text"], callback);
        readString(stream, obj["url"], callback);
        readTLInputUser(stream, obj["bot"], callback);
    break;
    case -1144565411:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readBool(stream, obj["quiz"], callback);
        readString(stream, obj["text"], callback);
    break;
    case -376962181:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
        readTLInputUser(stream, obj["user_id"], callback);
    break;
    case 814112961:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
        readInt64(stream, obj["user_id"], callback);
    break;
    }
    i = obj;
}

void writeTLKeyboardButton(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1560655744:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case 629866245:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
        writeString(stream, obj["url"], callback);
    break;
    case 901503851:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["requires_password"].isNull()) | 
        0), callback);
        writeString(stream, obj["text"], callback);
        writeByteArray(stream, obj["data"], callback);
    break;
    case -1318425559:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case -59151553:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case 90744648:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["same_peer"].isNull()) | 
        0), callback);
        writeString(stream, obj["text"], callback);
        writeString(stream, obj["query"], callback);
    break;
    case 1358175439:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case -1344716869:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case 280464681:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["fwd_text"].isNull()) | 
        0), callback);
        writeString(stream, obj["text"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["fwd_text"], callback);
        writeString(stream, obj["url"], callback);
        writeInt32(stream, obj["button_id"], callback);
    break;
    case -802258988:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["request_write_access"].isNull()) | 
            (!obj["fwd_text"].isNull() << 1) | 
        0), callback);
        writeString(stream, obj["text"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["fwd_text"], callback);
        writeString(stream, obj["url"], callback);
        writeTLInputUser(stream, obj["bot"], callback);
    break;
    case -1144565411:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["quiz"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeBool(stream, obj["quiz"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case -376962181:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
    break;
    case 814112961:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
        writeInt64(stream, obj["user_id"], callback);
    break;
    }
}

void readTLKeyboardButtonRow(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2002815875:
        obj["_"] = conId.toInt();
        readVector(stream, obj["buttons"], (void*) &readTLKeyboardButton);
    break;
    }
    i = obj;
}

void writeTLKeyboardButtonRow(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2002815875:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["buttons"], (void*) &writeTLKeyboardButton);
    break;
    }
}

void readTLReplyMarkup(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1606526075:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 4) obj["selective"] = true;
    break;
    case -2035021048:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["single_use"] = true;
        if (obj["flags"].toUInt() & 4) obj["selective"] = true;
        if (obj["flags"].toUInt() & 8) readString(stream, obj["placeholder"], callback);
    break;
    case -2049074735:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["resize"] = true;
        if (obj["flags"].toUInt() & 2) obj["single_use"] = true;
        if (obj["flags"].toUInt() & 4) obj["selective"] = true;
        readVector(stream, obj["rows"], (void*) &readTLKeyboardButtonRow);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["placeholder"], callback);
    break;
    case 1218642516:
        obj["_"] = conId.toInt();
        readVector(stream, obj["rows"], (void*) &readTLKeyboardButtonRow);
    break;
    }
    i = obj;
}

void writeTLReplyMarkup(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1606526075:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["selective"].isNull() << 2) | 
        0), callback);
    break;
    case -2035021048:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["single_use"].isNull() << 1) | 
            (!obj["selective"].isNull() << 2) | 
            (!obj["placeholder"].isNull() << 3) | 
        0), callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["placeholder"], callback);
    break;
    case -2049074735:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["resize"].isNull()) | 
            (!obj["single_use"].isNull() << 1) | 
            (!obj["selective"].isNull() << 2) | 
            (!obj["placeholder"].isNull() << 3) | 
        0), callback);
        writeVector(stream, obj["rows"], (void*) &writeTLKeyboardButtonRow);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["placeholder"], callback);
    break;
    case 1218642516:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["rows"], (void*) &writeTLKeyboardButtonRow);
    break;
    }
}

void readTLMessageEntity(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1148011883:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case -100378723:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case 1868782349:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case 1827637959:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case 1859134776:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case 1692693954:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case -1117713463:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case -2106619040:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case 681706865:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case 1938967520:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
        readString(stream, obj["language"], callback);
    break;
    case 1990644519:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
        readString(stream, obj["url"], callback);
    break;
    case -595914432:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
        readInt64(stream, obj["user_id"], callback);
    break;
    case 546203849:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
        readTLInputUser(stream, obj["user_id"], callback);
    break;
    case -1687559349:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case 1280209983:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case -1672577397:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case -1090087980:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case 34469328:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case 1981704948:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    case 852137487:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    }
    i = obj;
}

void writeTLMessageEntity(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1148011883:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case -100378723:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 1868782349:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 1827637959:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 1859134776:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 1692693954:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case -1117713463:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case -2106619040:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 681706865:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 1938967520:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
        writeString(stream, obj["language"], callback);
    break;
    case 1990644519:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
        writeString(stream, obj["url"], callback);
    break;
    case -595914432:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
        writeInt64(stream, obj["user_id"], callback);
    break;
    case 546203849:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
    break;
    case -1687559349:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 1280209983:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case -1672577397:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case -1090087980:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 34469328:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 1981704948:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 852137487:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    }
}

void readTLInputChannel(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -292807034:
        obj["_"] = conId.toInt();
    break;
    case -212145112:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["channel_id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case 1536380829:
        obj["_"] = conId.toInt();
        readTLInputPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["msg_id"], callback);
        readInt64(stream, obj["channel_id"], callback);
    break;
    }
    i = obj;
}

void writeTLInputChannel(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -292807034:
        writeInt32(stream, obj["_"], callback);
    break;
    case -212145112:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["channel_id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case 1536380829:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeInt64(stream, obj["channel_id"], callback);
    break;
    }
}

void readTLContactsResolvedPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2131196633:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLContactsResolvedPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2131196633:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLMessageRange(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 182649427:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["min_id"], callback);
        readInt32(stream, obj["max_id"], callback);
    break;
    }
    i = obj;
}

void writeTLMessageRange(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 182649427:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["min_id"], callback);
        writeInt32(stream, obj["max_id"], callback);
    break;
    }
}

void readTLUpdatesChannelDifference(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1041346555:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["final"] = true;
        readInt32(stream, obj["pts"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["timeout"], callback);
    break;
    case -1531132162:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["final"] = true;
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["timeout"], callback);
        readTLDialog(stream, obj["dialog"], callback);
        readVector(stream, obj["messages"], (void*) &readTLMessage);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case 543450958:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["final"] = true;
        readInt32(stream, obj["pts"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["timeout"], callback);
        readVector(stream, obj["new_messages"], (void*) &readTLMessage);
        readVector(stream, obj["other_updates"], (void*) &readTLUpdate);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLUpdatesChannelDifference(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1041346555:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["final"].isNull()) | 
            (!obj["timeout"].isNull() << 1) | 
        0), callback);
        writeInt32(stream, obj["pts"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["timeout"], callback);
    break;
    case -1531132162:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["final"].isNull()) | 
            (!obj["timeout"].isNull() << 1) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["timeout"], callback);
        writeTLDialog(stream, obj["dialog"], callback);
        writeVector(stream, obj["messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case 543450958:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["final"].isNull()) | 
            (!obj["timeout"].isNull() << 1) | 
        0), callback);
        writeInt32(stream, obj["pts"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["timeout"], callback);
        writeVector(stream, obj["new_messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["other_updates"], (void*) &writeTLUpdate);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLChannelMessagesFilter(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1798033689:
        obj["_"] = conId.toInt();
    break;
    case -847783593:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["exclude_new_messages"] = true;
        readVector(stream, obj["ranges"], (void*) &readTLMessageRange);
    break;
    }
    i = obj;
}

void writeTLChannelMessagesFilter(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1798033689:
        writeInt32(stream, obj["_"], callback);
    break;
    case -847783593:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["exclude_new_messages"].isNull() << 1) | 
        0), callback);
        writeVector(stream, obj["ranges"], (void*) &writeTLMessageRange);
    break;
    }
}

void readTLChannelParticipant(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1072953408:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    case 900251559:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["via_request"] = true;
        readInt64(stream, obj["user_id"], callback);
        readInt64(stream, obj["inviter_id"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    case 803602899:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["user_id"], callback);
        readTLChatAdminRights(stream, obj["admin_rights"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["rank"], callback);
    break;
    case 885242707:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["can_edit"] = true;
        if (obj["flags"].toUInt() & 2) obj["self"] = true;
        readInt64(stream, obj["user_id"], callback);
        if (obj["flags"].toUInt() & 2) readInt64(stream, obj["inviter_id"], callback);
        readInt64(stream, obj["promoted_by"], callback);
        readInt32(stream, obj["date"], callback);
        readTLChatAdminRights(stream, obj["admin_rights"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["rank"], callback);
    break;
    case 1844969806:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["left"] = true;
        readTLPeer(stream, obj["peer"], callback);
        readInt64(stream, obj["kicked_by"], callback);
        readInt32(stream, obj["date"], callback);
        readTLChatBannedRights(stream, obj["banned_rights"], callback);
    break;
    case 453242886:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
    break;
    }
    i = obj;
}

void writeTLChannelParticipant(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1072953408:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    case 900251559:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["via_request"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt64(stream, obj["inviter_id"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    case 803602899:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["rank"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["user_id"], callback);
        writeTLChatAdminRights(stream, obj["admin_rights"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["rank"], callback);
    break;
    case 885242707:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["can_edit"].isNull()) | 
            (!obj["self"].isNull() << 1) | 
            (!obj["inviter_id"].isNull() << 1) | 
            (!obj["rank"].isNull() << 2) | 
        0), callback);
        writeInt64(stream, obj["user_id"], callback);
        if (obj["flags"].toUInt() & 2) writeInt64(stream, obj["inviter_id"], callback);
        writeInt64(stream, obj["promoted_by"], callback);
        writeInt32(stream, obj["date"], callback);
        writeTLChatAdminRights(stream, obj["admin_rights"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["rank"], callback);
    break;
    case 1844969806:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["left"].isNull()) | 
        0), callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt64(stream, obj["kicked_by"], callback);
        writeInt32(stream, obj["date"], callback);
        writeTLChatBannedRights(stream, obj["banned_rights"], callback);
    break;
    case 453242886:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLChannelParticipantsFilter(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -566281095:
        obj["_"] = conId.toInt();
    break;
    case -1268741783:
        obj["_"] = conId.toInt();
    break;
    case -1548400251:
        obj["_"] = conId.toInt();
        readString(stream, obj["q"], callback);
    break;
    case -1328445861:
        obj["_"] = conId.toInt();
    break;
    case 338142689:
        obj["_"] = conId.toInt();
        readString(stream, obj["q"], callback);
    break;
    case 106343499:
        obj["_"] = conId.toInt();
        readString(stream, obj["q"], callback);
    break;
    case -1150621555:
        obj["_"] = conId.toInt();
        readString(stream, obj["q"], callback);
    break;
    case -531931925:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["q"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["top_msg_id"], callback);
    break;
    }
    i = obj;
}

void writeTLChannelParticipantsFilter(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -566281095:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1268741783:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1548400251:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["q"], callback);
    break;
    case -1328445861:
        writeInt32(stream, obj["_"], callback);
    break;
    case 338142689:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["q"], callback);
    break;
    case 106343499:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["q"], callback);
    break;
    case -1150621555:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["q"], callback);
    break;
    case -531931925:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["q"].isNull()) | 
            (!obj["top_msg_id"].isNull() << 1) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["q"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["top_msg_id"], callback);
    break;
    }
}

void readTLChannelsChannelParticipants(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1699676497:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["participants"], (void*) &readTLChannelParticipant);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case -266911767:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLChannelsChannelParticipants(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1699676497:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["participants"], (void*) &writeTLChannelParticipant);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case -266911767:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLChannelsChannelParticipant(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -541588713:
        obj["_"] = conId.toInt();
        readTLChannelParticipant(stream, obj["participant"], callback);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLChannelsChannelParticipant(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -541588713:
        writeInt32(stream, obj["_"], callback);
        writeTLChannelParticipant(stream, obj["participant"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLHelpTermsOfService(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2013922064:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["popup"] = true;
        readTLDataJSON(stream, obj["id"], callback);
        readString(stream, obj["text"], callback);
        readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["min_age_confirm"], callback);
    break;
    }
    i = obj;
}

void writeTLHelpTermsOfService(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2013922064:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["popup"].isNull()) | 
            (!obj["min_age_confirm"].isNull() << 1) | 
        0), callback);
        writeTLDataJSON(stream, obj["id"], callback);
        writeString(stream, obj["text"], callback);
        writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["min_age_confirm"], callback);
    break;
    }
}

void readTLMessagesSavedGifs(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -402498398:
        obj["_"] = conId.toInt();
    break;
    case -2069878259:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["hash"], callback);
        readVector(stream, obj["gifs"], (void*) &readTLDocument);
    break;
    }
    i = obj;
}

void writeTLMessagesSavedGifs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -402498398:
        writeInt32(stream, obj["_"], callback);
    break;
    case -2069878259:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
        writeVector(stream, obj["gifs"], (void*) &writeTLDocument);
    break;
    }
}

void readTLInputBotInlineMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 864077702:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 1036876423:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["no_webpage"] = true;
        readString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case -1768777083:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLInputGeoPoint(stream, obj["geo_point"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["heading"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["period"], callback);
        if (obj["flags"].toUInt() & 8) readInt32(stream, obj["proximity_notification_radius"], callback);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 1098628881:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLInputGeoPoint(stream, obj["geo_point"], callback);
        readString(stream, obj["title"], callback);
        readString(stream, obj["address"], callback);
        readString(stream, obj["provider"], callback);
        readString(stream, obj["venue_id"], callback);
        readString(stream, obj["venue_type"], callback);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case -1494368259:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["phone_number"], callback);
        readString(stream, obj["first_name"], callback);
        readString(stream, obj["last_name"], callback);
        readString(stream, obj["vcard"], callback);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 1262639204:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case -672693723:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["title"], callback);
        readString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 1) readTLInputWebDocument(stream, obj["photo"], callback);
        readTLInvoice(stream, obj["invoice"], callback);
        readByteArray(stream, obj["payload"], callback);
        readString(stream, obj["provider"], callback);
        readTLDataJSON(stream, obj["provider_data"], callback);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    }
    i = obj;
}

void writeTLInputBotInlineMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 864077702:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["entities"].isNull() << 1) | 
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 1036876423:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["no_webpage"].isNull()) | 
            (!obj["entities"].isNull() << 1) | 
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case -1768777083:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["heading"].isNull()) | 
            (!obj["period"].isNull() << 1) | 
            (!obj["proximity_notification_radius"].isNull() << 3) | 
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeTLInputGeoPoint(stream, obj["geo_point"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["heading"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["period"], callback);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["proximity_notification_radius"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 1098628881:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeTLInputGeoPoint(stream, obj["geo_point"], callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["address"], callback);
        writeString(stream, obj["provider"], callback);
        writeString(stream, obj["venue_id"], callback);
        writeString(stream, obj["venue_type"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case -1494368259:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["phone_number"], callback);
        writeString(stream, obj["first_name"], callback);
        writeString(stream, obj["last_name"], callback);
        writeString(stream, obj["vcard"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 1262639204:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case -672693723:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["photo"].isNull()) | 
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 1) writeTLInputWebDocument(stream, obj["photo"], callback);
        writeTLInvoice(stream, obj["invoice"], callback);
        writeByteArray(stream, obj["payload"], callback);
        writeString(stream, obj["provider"], callback);
        writeTLDataJSON(stream, obj["provider_data"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    }
}

void readTLInputBotInlineResult(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2000710887:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["id"], callback);
        readString(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 16) readTLInputWebDocument(stream, obj["thumb"], callback);
        if (obj["flags"].toUInt() & 32) readTLInputWebDocument(stream, obj["content"], callback);
        readTLInputBotInlineMessage(stream, obj["send_message"], callback);
    break;
    case -1462213465:
        obj["_"] = conId.toInt();
        readString(stream, obj["id"], callback);
        readString(stream, obj["type"], callback);
        readTLInputPhoto(stream, obj["photo"], callback);
        readTLInputBotInlineMessage(stream, obj["send_message"], callback);
    break;
    case -459324:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["id"], callback);
        readString(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["description"], callback);
        readTLInputDocument(stream, obj["document"], callback);
        readTLInputBotInlineMessage(stream, obj["send_message"], callback);
    break;
    case 1336154098:
        obj["_"] = conId.toInt();
        readString(stream, obj["id"], callback);
        readString(stream, obj["short_name"], callback);
        readTLInputBotInlineMessage(stream, obj["send_message"], callback);
    break;
    }
    i = obj;
}

void writeTLInputBotInlineResult(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2000710887:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["title"].isNull() << 1) | 
            (!obj["description"].isNull() << 2) | 
            (!obj["url"].isNull() << 3) | 
            (!obj["thumb"].isNull() << 4) | 
            (!obj["content"].isNull() << 5) | 
        0), callback);
        writeString(stream, obj["id"], callback);
        writeString(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 16) writeTLInputWebDocument(stream, obj["thumb"], callback);
        if (obj["flags"].toUInt() & 32) writeTLInputWebDocument(stream, obj["content"], callback);
        writeTLInputBotInlineMessage(stream, obj["send_message"], callback);
    break;
    case -1462213465:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["id"], callback);
        writeString(stream, obj["type"], callback);
        writeTLInputPhoto(stream, obj["photo"], callback);
        writeTLInputBotInlineMessage(stream, obj["send_message"], callback);
    break;
    case -459324:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["title"].isNull() << 1) | 
            (!obj["description"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["id"], callback);
        writeString(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["description"], callback);
        writeTLInputDocument(stream, obj["document"], callback);
        writeTLInputBotInlineMessage(stream, obj["send_message"], callback);
    break;
    case 1336154098:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["id"], callback);
        writeString(stream, obj["short_name"], callback);
        writeTLInputBotInlineMessage(stream, obj["send_message"], callback);
    break;
    }
}

void readTLBotInlineMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1984755728:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case -1937807902:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["no_webpage"] = true;
        readString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 85477117:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLGeoPoint(stream, obj["geo"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["heading"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["period"], callback);
        if (obj["flags"].toUInt() & 8) readInt32(stream, obj["proximity_notification_radius"], callback);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case -1970903652:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLGeoPoint(stream, obj["geo"], callback);
        readString(stream, obj["title"], callback);
        readString(stream, obj["address"], callback);
        readString(stream, obj["provider"], callback);
        readString(stream, obj["venue_id"], callback);
        readString(stream, obj["venue_type"], callback);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 416402882:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["phone_number"], callback);
        readString(stream, obj["first_name"], callback);
        readString(stream, obj["last_name"], callback);
        readString(stream, obj["vcard"], callback);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 894081801:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["shipping_address_requested"] = true;
        if (obj["flags"].toUInt() & 8) obj["test"] = true;
        readString(stream, obj["title"], callback);
        readString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 1) readTLWebDocument(stream, obj["photo"], callback);
        readString(stream, obj["currency"], callback);
        readInt64(stream, obj["total_amount"], callback);
        if (obj["flags"].toUInt() & 4) readTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    }
    i = obj;
}

void writeTLBotInlineMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1984755728:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["entities"].isNull() << 1) | 
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case -1937807902:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["no_webpage"].isNull()) | 
            (!obj["entities"].isNull() << 1) | 
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 85477117:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["heading"].isNull()) | 
            (!obj["period"].isNull() << 1) | 
            (!obj["proximity_notification_radius"].isNull() << 3) | 
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeTLGeoPoint(stream, obj["geo"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["heading"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["period"], callback);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["proximity_notification_radius"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case -1970903652:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeTLGeoPoint(stream, obj["geo"], callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["address"], callback);
        writeString(stream, obj["provider"], callback);
        writeString(stream, obj["venue_id"], callback);
        writeString(stream, obj["venue_type"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 416402882:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["phone_number"], callback);
        writeString(stream, obj["first_name"], callback);
        writeString(stream, obj["last_name"], callback);
        writeString(stream, obj["vcard"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    case 894081801:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["shipping_address_requested"].isNull() << 1) | 
            (!obj["test"].isNull() << 3) | 
            (!obj["photo"].isNull()) | 
            (!obj["reply_markup"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 1) writeTLWebDocument(stream, obj["photo"], callback);
        writeString(stream, obj["currency"], callback);
        writeInt64(stream, obj["total_amount"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
    break;
    }
}

void readTLBotInlineResult(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 295067450:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["id"], callback);
        readString(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 16) readTLWebDocument(stream, obj["thumb"], callback);
        if (obj["flags"].toUInt() & 32) readTLWebDocument(stream, obj["content"], callback);
        readTLBotInlineMessage(stream, obj["send_message"], callback);
    break;
    case 400266251:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["id"], callback);
        readString(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 1) readTLPhoto(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 2) readTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["description"], callback);
        readTLBotInlineMessage(stream, obj["send_message"], callback);
    break;
    }
    i = obj;
}

void writeTLBotInlineResult(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 295067450:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["title"].isNull() << 1) | 
            (!obj["description"].isNull() << 2) | 
            (!obj["url"].isNull() << 3) | 
            (!obj["thumb"].isNull() << 4) | 
            (!obj["content"].isNull() << 5) | 
        0), callback);
        writeString(stream, obj["id"], callback);
        writeString(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 16) writeTLWebDocument(stream, obj["thumb"], callback);
        if (obj["flags"].toUInt() & 32) writeTLWebDocument(stream, obj["content"], callback);
        writeTLBotInlineMessage(stream, obj["send_message"], callback);
    break;
    case 400266251:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["photo"].isNull()) | 
            (!obj["document"].isNull() << 1) | 
            (!obj["title"].isNull() << 2) | 
            (!obj["description"].isNull() << 3) | 
        0), callback);
        writeString(stream, obj["id"], callback);
        writeString(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 1) writeTLPhoto(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 2) writeTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["description"], callback);
        writeTLBotInlineMessage(stream, obj["send_message"], callback);
    break;
    }
}

void readTLMessagesBotResults(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1803769784:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["gallery"] = true;
        readInt64(stream, obj["query_id"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["next_offset"], callback);
        if (obj["flags"].toUInt() & 4) readTLInlineBotSwitchPM(stream, obj["switch_pm"], callback);
        readVector(stream, obj["results"], (void*) &readTLBotInlineResult);
        readInt32(stream, obj["cache_time"], callback);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesBotResults(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1803769784:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["gallery"].isNull()) | 
            (!obj["next_offset"].isNull() << 1) | 
            (!obj["switch_pm"].isNull() << 2) | 
        0), callback);
        writeInt64(stream, obj["query_id"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["next_offset"], callback);
        if (obj["flags"].toUInt() & 4) writeTLInlineBotSwitchPM(stream, obj["switch_pm"], callback);
        writeVector(stream, obj["results"], (void*) &writeTLBotInlineResult);
        writeInt32(stream, obj["cache_time"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLExportedMessageLink(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1571494644:
        obj["_"] = conId.toInt();
        readString(stream, obj["link"], callback);
        readString(stream, obj["html"], callback);
    break;
    }
    i = obj;
}

void writeTLExportedMessageLink(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1571494644:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["link"], callback);
        writeString(stream, obj["html"], callback);
    break;
    }
}

void readTLMessageFwdHeader(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1601666510:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 128) obj["imported"] = true;
        if (obj["flags"].toUInt() & 1) readTLPeer(stream, obj["from_id"], callback);
        if (obj["flags"].toUInt() & 32) readString(stream, obj["from_name"], callback);
        readInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["channel_post"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["post_author"], callback);
        if (obj["flags"].toUInt() & 16) readTLPeer(stream, obj["saved_from_peer"], callback);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["saved_from_msg_id"], callback);
        if (obj["flags"].toUInt() & 64) readString(stream, obj["psa_type"], callback);
    break;
    }
    i = obj;
}

void writeTLMessageFwdHeader(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1601666510:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["imported"].isNull() << 7) | 
            (!obj["from_id"].isNull()) | 
            (!obj["from_name"].isNull() << 5) | 
            (!obj["channel_post"].isNull() << 2) | 
            (!obj["post_author"].isNull() << 3) | 
            (!obj["saved_from_peer"].isNull() << 4) | 
            (!obj["saved_from_msg_id"].isNull() << 4) | 
            (!obj["psa_type"].isNull() << 6) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeTLPeer(stream, obj["from_id"], callback);
        if (obj["flags"].toUInt() & 32) writeString(stream, obj["from_name"], callback);
        writeInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["channel_post"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["post_author"], callback);
        if (obj["flags"].toUInt() & 16) writeTLPeer(stream, obj["saved_from_peer"], callback);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["saved_from_msg_id"], callback);
        if (obj["flags"].toUInt() & 64) writeString(stream, obj["psa_type"], callback);
    break;
    }
}

void readTLAuthCodeType(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1923290508:
        obj["_"] = conId.toInt();
    break;
    case 1948046307:
        obj["_"] = conId.toInt();
    break;
    case 577556219:
        obj["_"] = conId.toInt();
    break;
    case -702884114:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLAuthCodeType(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1923290508:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1948046307:
        writeInt32(stream, obj["_"], callback);
    break;
    case 577556219:
        writeInt32(stream, obj["_"], callback);
    break;
    case -702884114:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLAuthSentCodeType(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1035688326:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["length"], callback);
    break;
    case -1073693790:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["length"], callback);
    break;
    case 1398007207:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["length"], callback);
    break;
    case -1425815847:
        obj["_"] = conId.toInt();
        readString(stream, obj["pattern"], callback);
    break;
    case -2113903484:
        obj["_"] = conId.toInt();
        readString(stream, obj["prefix"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    }
    i = obj;
}

void writeTLAuthSentCodeType(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1035688326:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case -1073693790:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case 1398007207:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    case -1425815847:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["pattern"], callback);
    break;
    case -2113903484:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["prefix"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    }
}

void readTLMessagesBotCallbackAnswer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 911761060:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["alert"] = true;
        if (obj["flags"].toUInt() & 8) obj["has_url"] = true;
        if (obj["flags"].toUInt() & 16) obj["native_ui"] = true;
        if (obj["flags"].toUInt() & 1) readString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["url"], callback);
        readInt32(stream, obj["cache_time"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesBotCallbackAnswer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 911761060:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["alert"].isNull() << 1) | 
            (!obj["has_url"].isNull() << 3) | 
            (!obj["native_ui"].isNull() << 4) | 
            (!obj["message"].isNull()) | 
            (!obj["url"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["url"], callback);
        writeInt32(stream, obj["cache_time"], callback);
    break;
    }
}

void readTLMessagesMessageEditData(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 649453030:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["caption"] = true;
    break;
    }
    i = obj;
}

void writeTLMessagesMessageEditData(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 649453030:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["caption"].isNull()) | 
        0), callback);
    break;
    }
}

void readTLInputBotInlineMessageID(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1995686519:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["dc_id"], callback);
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case -1227287081:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["dc_id"], callback);
        readInt64(stream, obj["owner_id"], callback);
        readInt32(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    }
    i = obj;
}

void writeTLInputBotInlineMessageID(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1995686519:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["dc_id"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case -1227287081:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["dc_id"], callback);
        writeInt64(stream, obj["owner_id"], callback);
        writeInt32(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    }
}

void readTLInlineBotSwitchPM(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1008755359:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
        readString(stream, obj["start_param"], callback);
    break;
    }
    i = obj;
}

void writeTLInlineBotSwitchPM(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1008755359:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
        writeString(stream, obj["start_param"], callback);
    break;
    }
}

void readTLMessagesPeerDialogs(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 863093588:
        obj["_"] = conId.toInt();
        readVector(stream, obj["dialogs"], (void*) &readTLDialog);
        readVector(stream, obj["messages"], (void*) &readTLMessage);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
        readTLUpdatesState(stream, obj["state"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesPeerDialogs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 863093588:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["dialogs"], (void*) &writeTLDialog);
        writeVector(stream, obj["messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
        writeTLUpdatesState(stream, obj["state"], callback);
    break;
    }
}

void readTLTopPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -305282981:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readDouble(stream, obj["rating"], callback);
    break;
    }
    i = obj;
}

void writeTLTopPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -305282981:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeDouble(stream, obj["rating"], callback);
    break;
    }
}

void readTLTopPeerCategory(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1419371685:
        obj["_"] = conId.toInt();
    break;
    case 344356834:
        obj["_"] = conId.toInt();
    break;
    case 104314861:
        obj["_"] = conId.toInt();
    break;
    case -1122524854:
        obj["_"] = conId.toInt();
    break;
    case 371037736:
        obj["_"] = conId.toInt();
    break;
    case 511092620:
        obj["_"] = conId.toInt();
    break;
    case -1472172887:
        obj["_"] = conId.toInt();
    break;
    case -68239120:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLTopPeerCategory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1419371685:
        writeInt32(stream, obj["_"], callback);
    break;
    case 344356834:
        writeInt32(stream, obj["_"], callback);
    break;
    case 104314861:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1122524854:
        writeInt32(stream, obj["_"], callback);
    break;
    case 371037736:
        writeInt32(stream, obj["_"], callback);
    break;
    case 511092620:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1472172887:
        writeInt32(stream, obj["_"], callback);
    break;
    case -68239120:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLTopPeerCategoryPeers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -75283823:
        obj["_"] = conId.toInt();
        readTLTopPeerCategory(stream, obj["category"], callback);
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["peers"], (void*) &readTLTopPeer);
    break;
    }
    i = obj;
}

void writeTLTopPeerCategoryPeers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -75283823:
        writeInt32(stream, obj["_"], callback);
        writeTLTopPeerCategory(stream, obj["category"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["peers"], (void*) &writeTLTopPeer);
    break;
    }
}

void readTLContactsTopPeers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -567906571:
        obj["_"] = conId.toInt();
    break;
    case 1891070632:
        obj["_"] = conId.toInt();
        readVector(stream, obj["categories"], (void*) &readTLTopPeerCategoryPeers);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case -1255369827:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLContactsTopPeers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -567906571:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1891070632:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["categories"], (void*) &writeTLTopPeerCategoryPeers);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case -1255369827:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLDraftMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 453805082:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["date"], callback);
    break;
    case -40996577:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["no_webpage"] = true;
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["reply_to_msg_id"], callback);
        readString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 8) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        readInt32(stream, obj["date"], callback);
    break;
    }
    i = obj;
}

void writeTLDraftMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 453805082:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["date"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["date"], callback);
    break;
    case -40996577:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["no_webpage"].isNull() << 1) | 
            (!obj["reply_to_msg_id"].isNull()) | 
            (!obj["entities"].isNull() << 3) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["reply_to_msg_id"], callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        writeInt32(stream, obj["date"], callback);
    break;
    }
}

void readTLMessagesFeaturedStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -958657434:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
    break;
    case -2067782896:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["hash"], callback);
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["sets"], (void*) &readTLStickerSetCovered);
        readVector(stream, obj["unread"], (void*) &readInt64);
    break;
    }
    i = obj;
}

void writeTLMessagesFeaturedStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -958657434:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
    break;
    case -2067782896:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["sets"], (void*) &writeTLStickerSetCovered);
        writeVector(stream, obj["unread"], (void*) &writeInt64);
    break;
    }
}

void readTLMessagesRecentStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 186120336:
        obj["_"] = conId.toInt();
    break;
    case -1999405994:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["hash"], callback);
        readVector(stream, obj["packs"], (void*) &readTLStickerPack);
        readVector(stream, obj["stickers"], (void*) &readTLDocument);
        readVector(stream, obj["dates"], (void*) &readInt32);
    break;
    }
    i = obj;
}

void writeTLMessagesRecentStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 186120336:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1999405994:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
        writeVector(stream, obj["packs"], (void*) &writeTLStickerPack);
        writeVector(stream, obj["stickers"], (void*) &writeTLDocument);
        writeVector(stream, obj["dates"], (void*) &writeInt32);
    break;
    }
}

void readTLMessagesArchivedStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1338747336:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["sets"], (void*) &readTLStickerSetCovered);
    break;
    }
    i = obj;
}

void writeTLMessagesArchivedStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1338747336:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["sets"], (void*) &writeTLStickerSetCovered);
    break;
    }
}

void readTLMessagesStickerSetInstallResult(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 946083368:
        obj["_"] = conId.toInt();
    break;
    case 904138920:
        obj["_"] = conId.toInt();
        readVector(stream, obj["sets"], (void*) &readTLStickerSetCovered);
    break;
    }
    i = obj;
}

void writeTLMessagesStickerSetInstallResult(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 946083368:
        writeInt32(stream, obj["_"], callback);
    break;
    case 904138920:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["sets"], (void*) &writeTLStickerSetCovered);
    break;
    }
}

void readTLStickerSetCovered(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1678812626:
        obj["_"] = conId.toInt();
        readTLStickerSet(stream, obj["set"], callback);
        readTLDocument(stream, obj["cover"], callback);
    break;
    case 872932635:
        obj["_"] = conId.toInt();
        readTLStickerSet(stream, obj["set"], callback);
        readVector(stream, obj["covers"], (void*) &readTLDocument);
    break;
    }
    i = obj;
}

void writeTLStickerSetCovered(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1678812626:
        writeInt32(stream, obj["_"], callback);
        writeTLStickerSet(stream, obj["set"], callback);
        writeTLDocument(stream, obj["cover"], callback);
    break;
    case 872932635:
        writeInt32(stream, obj["_"], callback);
        writeTLStickerSet(stream, obj["set"], callback);
        writeVector(stream, obj["covers"], (void*) &writeTLDocument);
    break;
    }
}

void readTLMaskCoords(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1361650766:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["n"], callback);
        readDouble(stream, obj["x"], callback);
        readDouble(stream, obj["y"], callback);
        readDouble(stream, obj["zoom"], callback);
    break;
    }
    i = obj;
}

void writeTLMaskCoords(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1361650766:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["n"], callback);
        writeDouble(stream, obj["x"], callback);
        writeDouble(stream, obj["y"], callback);
        writeDouble(stream, obj["zoom"], callback);
    break;
    }
}

void readTLInputStickeredMedia(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1251549527:
        obj["_"] = conId.toInt();
        readTLInputPhoto(stream, obj["id"], callback);
    break;
    case 70813275:
        obj["_"] = conId.toInt();
        readTLInputDocument(stream, obj["id"], callback);
    break;
    }
    i = obj;
}

void writeTLInputStickeredMedia(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1251549527:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPhoto(stream, obj["id"], callback);
    break;
    case 70813275:
        writeInt32(stream, obj["_"], callback);
        writeTLInputDocument(stream, obj["id"], callback);
    break;
    }
}

void readTLGame(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1107729093:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readString(stream, obj["short_name"], callback);
        readString(stream, obj["title"], callback);
        readString(stream, obj["description"], callback);
        readTLPhoto(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 1) readTLDocument(stream, obj["document"], callback);
    break;
    }
    i = obj;
}

void writeTLGame(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1107729093:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["document"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeString(stream, obj["short_name"], callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["description"], callback);
        writeTLPhoto(stream, obj["photo"], callback);
        if (obj["flags"].toUInt() & 1) writeTLDocument(stream, obj["document"], callback);
    break;
    }
}

void readTLInputGame(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 53231223:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case -1020139510:
        obj["_"] = conId.toInt();
        readTLInputUser(stream, obj["bot_id"], callback);
        readString(stream, obj["short_name"], callback);
    break;
    }
    i = obj;
}

void writeTLInputGame(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 53231223:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case -1020139510:
        writeInt32(stream, obj["_"], callback);
        writeTLInputUser(stream, obj["bot_id"], callback);
        writeString(stream, obj["short_name"], callback);
    break;
    }
}

void readTLHighScore(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1940093419:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["pos"], callback);
        readInt64(stream, obj["user_id"], callback);
        readInt32(stream, obj["score"], callback);
    break;
    }
    i = obj;
}

void writeTLHighScore(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1940093419:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["pos"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt32(stream, obj["score"], callback);
    break;
    }
}

void readTLMessagesHighScores(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1707344487:
        obj["_"] = conId.toInt();
        readVector(stream, obj["scores"], (void*) &readTLHighScore);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesHighScores(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1707344487:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["scores"], (void*) &writeTLHighScore);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLRichText(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -599948721:
        obj["_"] = conId.toInt();
    break;
    case 1950782688:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
    break;
    case 1730456516:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case -653089380:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case -1054465340:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case -1678197867:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case 1816074681:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case 1009288385:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
        readString(stream, obj["url"], callback);
        readInt64(stream, obj["webpage_id"], callback);
    break;
    case -564523562:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
        readString(stream, obj["email"], callback);
    break;
    case 2120376535:
        obj["_"] = conId.toInt();
        readVector(stream, obj["texts"], (void*) &readTLRichText);
    break;
    case -311786236:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case -939827711:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case 55281185:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case 483104362:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
        readString(stream, obj["phone"], callback);
    break;
    case 136105807:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["document_id"], callback);
        readInt32(stream, obj["w"], callback);
        readInt32(stream, obj["h"], callback);
    break;
    case 894777186:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
        readString(stream, obj["name"], callback);
    break;
    }
    i = obj;
}

void writeTLRichText(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -599948721:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1950782688:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case 1730456516:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -653089380:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -1054465340:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -1678197867:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case 1816074681:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case 1009288385:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
        writeString(stream, obj["url"], callback);
        writeInt64(stream, obj["webpage_id"], callback);
    break;
    case -564523562:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
        writeString(stream, obj["email"], callback);
    break;
    case 2120376535:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["texts"], (void*) &writeTLRichText);
    break;
    case -311786236:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -939827711:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case 55281185:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case 483104362:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
        writeString(stream, obj["phone"], callback);
    break;
    case 136105807:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["document_id"], callback);
        writeInt32(stream, obj["w"], callback);
        writeInt32(stream, obj["h"], callback);
    break;
    case 894777186:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
        writeString(stream, obj["name"], callback);
    break;
    }
}

void readTLPageBlock(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 324435594:
        obj["_"] = conId.toInt();
    break;
    case 1890305021:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case -1879401953:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case -1162877472:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["author"], callback);
        readInt32(stream, obj["published_date"], callback);
    break;
    case -1076861716:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case -248793375:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case 1182402406:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case -1066346178:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
        readString(stream, obj["language"], callback);
    break;
    case 1216809369:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case -618614392:
        obj["_"] = conId.toInt();
    break;
    case -837994576:
        obj["_"] = conId.toInt();
        readString(stream, obj["name"], callback);
    break;
    case -454524911:
        obj["_"] = conId.toInt();
        readVector(stream, obj["items"], (void*) &readTLPageListItem);
    break;
    case 641563686:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
        readTLRichText(stream, obj["caption"], callback);
    break;
    case 1329878739:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
        readTLRichText(stream, obj["caption"], callback);
    break;
    case 391759200:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt64(stream, obj["photo_id"], callback);
        readTLPageCaption(stream, obj["caption"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 1) readInt64(stream, obj["webpage_id"], callback);
    break;
    case 2089805750:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["autoplay"] = true;
        if (obj["flags"].toUInt() & 2) obj["loop"] = true;
        readInt64(stream, obj["video_id"], callback);
        readTLPageCaption(stream, obj["caption"], callback);
    break;
    case 972174080:
        obj["_"] = conId.toInt();
        readTLPageBlock(stream, obj["cover"], callback);
    break;
    case -1468953147:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["full_width"] = true;
        if (obj["flags"].toUInt() & 8) obj["allow_scrolling"] = true;
        if (obj["flags"].toUInt() & 2) readString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["html"], callback);
        if (obj["flags"].toUInt() & 16) readInt64(stream, obj["poster_photo_id"], callback);
        if (obj["flags"].toUInt() & 32) readInt32(stream, obj["w"], callback);
        if (obj["flags"].toUInt() & 32) readInt32(stream, obj["h"], callback);
        readTLPageCaption(stream, obj["caption"], callback);
    break;
    case -229005301:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readInt64(stream, obj["webpage_id"], callback);
        readInt64(stream, obj["author_photo_id"], callback);
        readString(stream, obj["author"], callback);
        readInt32(stream, obj["date"], callback);
        readVector(stream, obj["blocks"], (void*) &readTLPageBlock);
        readTLPageCaption(stream, obj["caption"], callback);
    break;
    case 1705048653:
        obj["_"] = conId.toInt();
        readVector(stream, obj["items"], (void*) &readTLPageBlock);
        readTLPageCaption(stream, obj["caption"], callback);
    break;
    case 52401552:
        obj["_"] = conId.toInt();
        readVector(stream, obj["items"], (void*) &readTLPageBlock);
        readTLPageCaption(stream, obj["caption"], callback);
    break;
    case -283684427:
        obj["_"] = conId.toInt();
        readTLChat(stream, obj["channel"], callback);
    break;
    case -2143067670:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["audio_id"], callback);
        readTLPageCaption(stream, obj["caption"], callback);
    break;
    case 504660880:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case -1085412734:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["bordered"] = true;
        if (obj["flags"].toUInt() & 2) obj["striped"] = true;
        readTLRichText(stream, obj["title"], callback);
        readVector(stream, obj["rows"], (void*) &readTLPageTableRow);
    break;
    case -1702174239:
        obj["_"] = conId.toInt();
        readVector(stream, obj["items"], (void*) &readTLPageListOrderedItem);
    break;
    case 1987480557:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["open"] = true;
        readVector(stream, obj["blocks"], (void*) &readTLPageBlock);
        readTLRichText(stream, obj["title"], callback);
    break;
    case 370236054:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["title"], callback);
        readVector(stream, obj["articles"], (void*) &readTLPageRelatedArticle);
    break;
    case -1538310410:
        obj["_"] = conId.toInt();
        readTLGeoPoint(stream, obj["geo"], callback);
        readInt32(stream, obj["zoom"], callback);
        readInt32(stream, obj["w"], callback);
        readInt32(stream, obj["h"], callback);
        readTLPageCaption(stream, obj["caption"], callback);
    break;
    }
    i = obj;
}

void writeTLPageBlock(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 324435594:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1890305021:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -1879401953:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -1162877472:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["author"], callback);
        writeInt32(stream, obj["published_date"], callback);
    break;
    case -1076861716:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -248793375:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case 1182402406:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -1066346178:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
        writeString(stream, obj["language"], callback);
    break;
    case 1216809369:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -618614392:
        writeInt32(stream, obj["_"], callback);
    break;
    case -837994576:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["name"], callback);
    break;
    case -454524911:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["items"], (void*) &writeTLPageListItem);
    break;
    case 641563686:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
        writeTLRichText(stream, obj["caption"], callback);
    break;
    case 1329878739:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
        writeTLRichText(stream, obj["caption"], callback);
    break;
    case 391759200:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["url"].isNull()) | 
            (!obj["webpage_id"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["photo_id"], callback);
        writeTLPageCaption(stream, obj["caption"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 1) writeInt64(stream, obj["webpage_id"], callback);
    break;
    case 2089805750:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["autoplay"].isNull()) | 
            (!obj["loop"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["video_id"], callback);
        writeTLPageCaption(stream, obj["caption"], callback);
    break;
    case 972174080:
        writeInt32(stream, obj["_"], callback);
        writeTLPageBlock(stream, obj["cover"], callback);
    break;
    case -1468953147:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["full_width"].isNull()) | 
            (!obj["allow_scrolling"].isNull() << 3) | 
            (!obj["url"].isNull() << 1) | 
            (!obj["html"].isNull() << 2) | 
            (!obj["poster_photo_id"].isNull() << 4) | 
            (!obj["w"].isNull() << 5) | 
            (!obj["h"].isNull() << 5) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["html"], callback);
        if (obj["flags"].toUInt() & 16) writeInt64(stream, obj["poster_photo_id"], callback);
        if (obj["flags"].toUInt() & 32) writeInt32(stream, obj["w"], callback);
        if (obj["flags"].toUInt() & 32) writeInt32(stream, obj["h"], callback);
        writeTLPageCaption(stream, obj["caption"], callback);
    break;
    case -229005301:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeInt64(stream, obj["webpage_id"], callback);
        writeInt64(stream, obj["author_photo_id"], callback);
        writeString(stream, obj["author"], callback);
        writeInt32(stream, obj["date"], callback);
        writeVector(stream, obj["blocks"], (void*) &writeTLPageBlock);
        writeTLPageCaption(stream, obj["caption"], callback);
    break;
    case 1705048653:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["items"], (void*) &writeTLPageBlock);
        writeTLPageCaption(stream, obj["caption"], callback);
    break;
    case 52401552:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["items"], (void*) &writeTLPageBlock);
        writeTLPageCaption(stream, obj["caption"], callback);
    break;
    case -283684427:
        writeInt32(stream, obj["_"], callback);
        writeTLChat(stream, obj["channel"], callback);
    break;
    case -2143067670:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["audio_id"], callback);
        writeTLPageCaption(stream, obj["caption"], callback);
    break;
    case 504660880:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -1085412734:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["bordered"].isNull()) | 
            (!obj["striped"].isNull() << 1) | 
        0), callback);
        writeTLRichText(stream, obj["title"], callback);
        writeVector(stream, obj["rows"], (void*) &writeTLPageTableRow);
    break;
    case -1702174239:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["items"], (void*) &writeTLPageListOrderedItem);
    break;
    case 1987480557:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["open"].isNull()) | 
        0), callback);
        writeVector(stream, obj["blocks"], (void*) &writeTLPageBlock);
        writeTLRichText(stream, obj["title"], callback);
    break;
    case 370236054:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["title"], callback);
        writeVector(stream, obj["articles"], (void*) &writeTLPageRelatedArticle);
    break;
    case -1538310410:
        writeInt32(stream, obj["_"], callback);
        writeTLGeoPoint(stream, obj["geo"], callback);
        writeInt32(stream, obj["zoom"], callback);
        writeInt32(stream, obj["w"], callback);
        writeInt32(stream, obj["h"], callback);
        writeTLPageCaption(stream, obj["caption"], callback);
    break;
    }
}

void readTLPhoneCallDiscardReason(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2048646399:
        obj["_"] = conId.toInt();
    break;
    case -527056480:
        obj["_"] = conId.toInt();
    break;
    case 1471006352:
        obj["_"] = conId.toInt();
    break;
    case -84416311:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLPhoneCallDiscardReason(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2048646399:
        writeInt32(stream, obj["_"], callback);
    break;
    case -527056480:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1471006352:
        writeInt32(stream, obj["_"], callback);
    break;
    case -84416311:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLDataJSON(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2104790276:
        obj["_"] = conId.toInt();
        readString(stream, obj["data"], callback);
    break;
    }
    i = obj;
}

void writeTLDataJSON(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2104790276:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["data"], callback);
    break;
    }
}

void readTLLabeledPrice(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -886477832:
        obj["_"] = conId.toInt();
        readString(stream, obj["label"], callback);
        readInt64(stream, obj["amount"], callback);
    break;
    }
    i = obj;
}

void writeTLLabeledPrice(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -886477832:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["label"], callback);
        writeInt64(stream, obj["amount"], callback);
    break;
    }
}

void readTLInvoice(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 215516896:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["test"] = true;
        if (obj["flags"].toUInt() & 2) obj["name_requested"] = true;
        if (obj["flags"].toUInt() & 4) obj["phone_requested"] = true;
        if (obj["flags"].toUInt() & 8) obj["email_requested"] = true;
        if (obj["flags"].toUInt() & 16) obj["shipping_address_requested"] = true;
        if (obj["flags"].toUInt() & 32) obj["flexible"] = true;
        if (obj["flags"].toUInt() & 64) obj["phone_to_provider"] = true;
        if (obj["flags"].toUInt() & 128) obj["email_to_provider"] = true;
        readString(stream, obj["currency"], callback);
        readVector(stream, obj["prices"], (void*) &readTLLabeledPrice);
        if (obj["flags"].toUInt() & 256) readInt64(stream, obj["max_tip_amount"], callback);
        if (obj["flags"].toUInt() & 256) readVector(stream, obj["suggested_tip_amounts"], (void*) &readInt64);
    break;
    }
    i = obj;
}

void writeTLInvoice(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 215516896:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["test"].isNull()) | 
            (!obj["name_requested"].isNull() << 1) | 
            (!obj["phone_requested"].isNull() << 2) | 
            (!obj["email_requested"].isNull() << 3) | 
            (!obj["shipping_address_requested"].isNull() << 4) | 
            (!obj["flexible"].isNull() << 5) | 
            (!obj["phone_to_provider"].isNull() << 6) | 
            (!obj["email_to_provider"].isNull() << 7) | 
            (!obj["max_tip_amount"].isNull() << 8) | 
            (!obj["suggested_tip_amounts"].isNull() << 8) | 
        0), callback);
        writeString(stream, obj["currency"], callback);
        writeVector(stream, obj["prices"], (void*) &writeTLLabeledPrice);
        if (obj["flags"].toUInt() & 256) writeInt64(stream, obj["max_tip_amount"], callback);
        if (obj["flags"].toUInt() & 256) writeVector(stream, obj["suggested_tip_amounts"], (void*) &writeInt64);
    break;
    }
}

void readTLPaymentCharge(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -368917890:
        obj["_"] = conId.toInt();
        readString(stream, obj["id"], callback);
        readString(stream, obj["provider_charge_id"], callback);
    break;
    }
    i = obj;
}

void writeTLPaymentCharge(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -368917890:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["id"], callback);
        writeString(stream, obj["provider_charge_id"], callback);
    break;
    }
}

void readTLPostAddress(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 512535275:
        obj["_"] = conId.toInt();
        readString(stream, obj["street_line1"], callback);
        readString(stream, obj["street_line2"], callback);
        readString(stream, obj["city"], callback);
        readString(stream, obj["state"], callback);
        readString(stream, obj["country_iso2"], callback);
        readString(stream, obj["post_code"], callback);
    break;
    }
    i = obj;
}

void writeTLPostAddress(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 512535275:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["street_line1"], callback);
        writeString(stream, obj["street_line2"], callback);
        writeString(stream, obj["city"], callback);
        writeString(stream, obj["state"], callback);
        writeString(stream, obj["country_iso2"], callback);
        writeString(stream, obj["post_code"], callback);
    break;
    }
}

void readTLPaymentRequestedInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1868808300:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["name"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["phone"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["email"], callback);
        if (obj["flags"].toUInt() & 8) readTLPostAddress(stream, obj["shipping_address"], callback);
    break;
    }
    i = obj;
}

void writeTLPaymentRequestedInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1868808300:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["name"].isNull()) | 
            (!obj["phone"].isNull() << 1) | 
            (!obj["email"].isNull() << 2) | 
            (!obj["shipping_address"].isNull() << 3) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["name"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["phone"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["email"], callback);
        if (obj["flags"].toUInt() & 8) writeTLPostAddress(stream, obj["shipping_address"], callback);
    break;
    }
}

void readTLPaymentSavedCredentials(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -842892769:
        obj["_"] = conId.toInt();
        readString(stream, obj["id"], callback);
        readString(stream, obj["title"], callback);
    break;
    }
    i = obj;
}

void writeTLPaymentSavedCredentials(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -842892769:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["id"], callback);
        writeString(stream, obj["title"], callback);
    break;
    }
}

void readTLWebDocument(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 475467473:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["size"], callback);
        readString(stream, obj["mime_type"], callback);
        readVector(stream, obj["attributes"], (void*) &readTLDocumentAttribute);
    break;
    case -104284986:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readInt32(stream, obj["size"], callback);
        readString(stream, obj["mime_type"], callback);
        readVector(stream, obj["attributes"], (void*) &readTLDocumentAttribute);
    break;
    }
    i = obj;
}

void writeTLWebDocument(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 475467473:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["size"], callback);
        writeString(stream, obj["mime_type"], callback);
        writeVector(stream, obj["attributes"], (void*) &writeTLDocumentAttribute);
    break;
    case -104284986:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeInt32(stream, obj["size"], callback);
        writeString(stream, obj["mime_type"], callback);
        writeVector(stream, obj["attributes"], (void*) &writeTLDocumentAttribute);
    break;
    }
}

void readTLInputWebDocument(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1678949555:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readInt32(stream, obj["size"], callback);
        readString(stream, obj["mime_type"], callback);
        readVector(stream, obj["attributes"], (void*) &readTLDocumentAttribute);
    break;
    }
    i = obj;
}

void writeTLInputWebDocument(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1678949555:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeInt32(stream, obj["size"], callback);
        writeString(stream, obj["mime_type"], callback);
        writeVector(stream, obj["attributes"], (void*) &writeTLDocumentAttribute);
    break;
    }
}

void readTLInputWebFileLocation(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1036396922:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case -1625153079:
        obj["_"] = conId.toInt();
        readTLInputGeoPoint(stream, obj["geo_point"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["w"], callback);
        readInt32(stream, obj["h"], callback);
        readInt32(stream, obj["zoom"], callback);
        readInt32(stream, obj["scale"], callback);
    break;
    }
    i = obj;
}

void writeTLInputWebFileLocation(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1036396922:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case -1625153079:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGeoPoint(stream, obj["geo_point"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["w"], callback);
        writeInt32(stream, obj["h"], callback);
        writeInt32(stream, obj["zoom"], callback);
        writeInt32(stream, obj["scale"], callback);
    break;
    }
}

void readTLUploadWebFile(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 568808380:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["size"], callback);
        readString(stream, obj["mime_type"], callback);
        readTLStorageFileType(stream, obj["file_type"], callback);
        readInt32(stream, obj["mtime"], callback);
        readByteArray(stream, obj["bytes"], callback);
    break;
    }
    i = obj;
}

void writeTLUploadWebFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 568808380:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["size"], callback);
        writeString(stream, obj["mime_type"], callback);
        writeTLStorageFileType(stream, obj["file_type"], callback);
        writeInt32(stream, obj["mtime"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    }
}

void readTLPaymentsPaymentForm(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 378828315:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 4) obj["can_save_credentials"] = true;
        if (obj["flags"].toUInt() & 8) obj["password_missing"] = true;
        readInt64(stream, obj["form_id"], callback);
        readInt64(stream, obj["bot_id"], callback);
        readTLInvoice(stream, obj["invoice"], callback);
        readInt64(stream, obj["provider_id"], callback);
        readString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 16) readString(stream, obj["native_provider"], callback);
        if (obj["flags"].toUInt() & 16) readTLDataJSON(stream, obj["native_params"], callback);
        if (obj["flags"].toUInt() & 1) readTLPaymentRequestedInfo(stream, obj["saved_info"], callback);
        if (obj["flags"].toUInt() & 2) readTLPaymentSavedCredentials(stream, obj["saved_credentials"], callback);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLPaymentsPaymentForm(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 378828315:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["can_save_credentials"].isNull() << 2) | 
            (!obj["password_missing"].isNull() << 3) | 
            (!obj["native_provider"].isNull() << 4) | 
            (!obj["native_params"].isNull() << 4) | 
            (!obj["saved_info"].isNull()) | 
            (!obj["saved_credentials"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["form_id"], callback);
        writeInt64(stream, obj["bot_id"], callback);
        writeTLInvoice(stream, obj["invoice"], callback);
        writeInt64(stream, obj["provider_id"], callback);
        writeString(stream, obj["url"], callback);
        if (obj["flags"].toUInt() & 16) writeString(stream, obj["native_provider"], callback);
        if (obj["flags"].toUInt() & 16) writeTLDataJSON(stream, obj["native_params"], callback);
        if (obj["flags"].toUInt() & 1) writeTLPaymentRequestedInfo(stream, obj["saved_info"], callback);
        if (obj["flags"].toUInt() & 2) writeTLPaymentSavedCredentials(stream, obj["saved_credentials"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLPaymentsValidatedRequestedInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -784000893:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["shipping_options"], (void*) &readTLShippingOption);
    break;
    }
    i = obj;
}

void writeTLPaymentsValidatedRequestedInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -784000893:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["id"].isNull()) | 
            (!obj["shipping_options"].isNull() << 1) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["shipping_options"], (void*) &writeTLShippingOption);
    break;
    }
}

void readTLPaymentsPaymentResult(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1314881805:
        obj["_"] = conId.toInt();
        readTLUpdates(stream, obj["updates"], callback);
    break;
    case -666824391:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
    break;
    }
    i = obj;
}

void writeTLPaymentsPaymentResult(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1314881805:
        writeInt32(stream, obj["_"], callback);
        writeTLUpdates(stream, obj["updates"], callback);
    break;
    case -666824391:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
    break;
    }
}

void readTLPaymentsPaymentReceipt(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1891958275:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["bot_id"], callback);
        readInt64(stream, obj["provider_id"], callback);
        readString(stream, obj["title"], callback);
        readString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 4) readTLWebDocument(stream, obj["photo"], callback);
        readTLInvoice(stream, obj["invoice"], callback);
        if (obj["flags"].toUInt() & 1) readTLPaymentRequestedInfo(stream, obj["info"], callback);
        if (obj["flags"].toUInt() & 2) readTLShippingOption(stream, obj["shipping"], callback);
        if (obj["flags"].toUInt() & 8) readInt64(stream, obj["tip_amount"], callback);
        readString(stream, obj["currency"], callback);
        readInt64(stream, obj["total_amount"], callback);
        readString(stream, obj["credentials_title"], callback);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLPaymentsPaymentReceipt(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1891958275:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["photo"].isNull() << 2) | 
            (!obj["info"].isNull()) | 
            (!obj["shipping"].isNull() << 1) | 
            (!obj["tip_amount"].isNull() << 3) | 
        0), callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["bot_id"], callback);
        writeInt64(stream, obj["provider_id"], callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 4) writeTLWebDocument(stream, obj["photo"], callback);
        writeTLInvoice(stream, obj["invoice"], callback);
        if (obj["flags"].toUInt() & 1) writeTLPaymentRequestedInfo(stream, obj["info"], callback);
        if (obj["flags"].toUInt() & 2) writeTLShippingOption(stream, obj["shipping"], callback);
        if (obj["flags"].toUInt() & 8) writeInt64(stream, obj["tip_amount"], callback);
        writeString(stream, obj["currency"], callback);
        writeInt64(stream, obj["total_amount"], callback);
        writeString(stream, obj["credentials_title"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLPaymentsSavedInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -74456004:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["has_saved_credentials"] = true;
        if (obj["flags"].toUInt() & 1) readTLPaymentRequestedInfo(stream, obj["saved_info"], callback);
    break;
    }
    i = obj;
}

void writeTLPaymentsSavedInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -74456004:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["has_saved_credentials"].isNull() << 1) | 
            (!obj["saved_info"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeTLPaymentRequestedInfo(stream, obj["saved_info"], callback);
    break;
    }
}

void readTLInputPaymentCredentials(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1056001329:
        obj["_"] = conId.toInt();
        readString(stream, obj["id"], callback);
        readByteArray(stream, obj["tmp_password"], callback);
    break;
    case 873977640:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["save"] = true;
        readTLDataJSON(stream, obj["data"], callback);
    break;
    case 178373535:
        obj["_"] = conId.toInt();
        readTLDataJSON(stream, obj["payment_data"], callback);
    break;
    case -1966921727:
        obj["_"] = conId.toInt();
        readTLDataJSON(stream, obj["payment_token"], callback);
    break;
    }
    i = obj;
}

void writeTLInputPaymentCredentials(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1056001329:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["id"], callback);
        writeByteArray(stream, obj["tmp_password"], callback);
    break;
    case 873977640:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["save"].isNull()) | 
        0), callback);
        writeTLDataJSON(stream, obj["data"], callback);
    break;
    case 178373535:
        writeInt32(stream, obj["_"], callback);
        writeTLDataJSON(stream, obj["payment_data"], callback);
    break;
    case -1966921727:
        writeInt32(stream, obj["_"], callback);
        writeTLDataJSON(stream, obj["payment_token"], callback);
    break;
    }
}

void readTLAccountTmpPassword(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -614138572:
        obj["_"] = conId.toInt();
        readByteArray(stream, obj["tmp_password"], callback);
        readInt32(stream, obj["valid_until"], callback);
    break;
    }
    i = obj;
}

void writeTLAccountTmpPassword(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -614138572:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["tmp_password"], callback);
        writeInt32(stream, obj["valid_until"], callback);
    break;
    }
}

void readTLShippingOption(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1239335713:
        obj["_"] = conId.toInt();
        readString(stream, obj["id"], callback);
        readString(stream, obj["title"], callback);
        readVector(stream, obj["prices"], (void*) &readTLLabeledPrice);
    break;
    }
    i = obj;
}

void writeTLShippingOption(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1239335713:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["id"], callback);
        writeString(stream, obj["title"], callback);
        writeVector(stream, obj["prices"], (void*) &writeTLLabeledPrice);
    break;
    }
}

void readTLInputStickerSetItem(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -6249322:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLInputDocument(stream, obj["document"], callback);
        readString(stream, obj["emoji"], callback);
        if (obj["flags"].toUInt() & 1) readTLMaskCoords(stream, obj["mask_coords"], callback);
    break;
    }
    i = obj;
}

void writeTLInputStickerSetItem(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -6249322:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["mask_coords"].isNull()) | 
        0), callback);
        writeTLInputDocument(stream, obj["document"], callback);
        writeString(stream, obj["emoji"], callback);
        if (obj["flags"].toUInt() & 1) writeTLMaskCoords(stream, obj["mask_coords"], callback);
    break;
    }
}

void readTLInputPhoneCall(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 506920429:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    }
    i = obj;
}

void writeTLInputPhoneCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 506920429:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    }
}

void readTLPhoneCall(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1399245077:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
    break;
    case -987599081:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 64) obj["video"] = true;
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["admin_id"], callback);
        readInt64(stream, obj["participant_id"], callback);
        readTLPhoneCallProtocol(stream, obj["protocol"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["receive_date"], callback);
    break;
    case 347139340:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 64) obj["video"] = true;
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["admin_id"], callback);
        readInt64(stream, obj["participant_id"], callback);
        readByteArray(stream, obj["g_a_hash"], callback);
        readTLPhoneCallProtocol(stream, obj["protocol"], callback);
    break;
    case 912311057:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 64) obj["video"] = true;
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["admin_id"], callback);
        readInt64(stream, obj["participant_id"], callback);
        readByteArray(stream, obj["g_b"], callback);
        readTLPhoneCallProtocol(stream, obj["protocol"], callback);
    break;
    case -1770029977:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 32) obj["p2p_allowed"] = true;
        if (obj["flags"].toUInt() & 64) obj["video"] = true;
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["admin_id"], callback);
        readInt64(stream, obj["participant_id"], callback);
        readByteArray(stream, obj["g_a_or_b"], callback);
        readInt64(stream, obj["key_fingerprint"], callback);
        readTLPhoneCallProtocol(stream, obj["protocol"], callback);
        readVector(stream, obj["connections"], (void*) &readTLPhoneConnection);
        readInt32(stream, obj["start_date"], callback);
    break;
    case 1355435489:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 4) obj["need_rating"] = true;
        if (obj["flags"].toUInt() & 8) obj["need_debug"] = true;
        if (obj["flags"].toUInt() & 64) obj["video"] = true;
        readInt64(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) readTLPhoneCallDiscardReason(stream, obj["reason"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["duration"], callback);
    break;
    }
    i = obj;
}

void writeTLPhoneCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1399245077:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
    break;
    case -987599081:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["video"].isNull() << 6) | 
            (!obj["receive_date"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["admin_id"], callback);
        writeInt64(stream, obj["participant_id"], callback);
        writeTLPhoneCallProtocol(stream, obj["protocol"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["receive_date"], callback);
    break;
    case 347139340:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["video"].isNull() << 6) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["admin_id"], callback);
        writeInt64(stream, obj["participant_id"], callback);
        writeByteArray(stream, obj["g_a_hash"], callback);
        writeTLPhoneCallProtocol(stream, obj["protocol"], callback);
    break;
    case 912311057:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["video"].isNull() << 6) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["admin_id"], callback);
        writeInt64(stream, obj["participant_id"], callback);
        writeByteArray(stream, obj["g_b"], callback);
        writeTLPhoneCallProtocol(stream, obj["protocol"], callback);
    break;
    case -1770029977:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["p2p_allowed"].isNull() << 5) | 
            (!obj["video"].isNull() << 6) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["admin_id"], callback);
        writeInt64(stream, obj["participant_id"], callback);
        writeByteArray(stream, obj["g_a_or_b"], callback);
        writeInt64(stream, obj["key_fingerprint"], callback);
        writeTLPhoneCallProtocol(stream, obj["protocol"], callback);
        writeVector(stream, obj["connections"], (void*) &writeTLPhoneConnection);
        writeInt32(stream, obj["start_date"], callback);
    break;
    case 1355435489:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["need_rating"].isNull() << 2) | 
            (!obj["need_debug"].isNull() << 3) | 
            (!obj["video"].isNull() << 6) | 
            (!obj["reason"].isNull()) | 
            (!obj["duration"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLPhoneCallDiscardReason(stream, obj["reason"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["duration"], callback);
    break;
    }
}

void readTLPhoneConnection(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1655957568:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readString(stream, obj["ip"], callback);
        readString(stream, obj["ipv6"], callback);
        readInt32(stream, obj["port"], callback);
        readByteArray(stream, obj["peer_tag"], callback);
    break;
    case 1667228533:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["turn"] = true;
        if (obj["flags"].toUInt() & 2) obj["stun"] = true;
        readInt64(stream, obj["id"], callback);
        readString(stream, obj["ip"], callback);
        readString(stream, obj["ipv6"], callback);
        readInt32(stream, obj["port"], callback);
        readString(stream, obj["username"], callback);
        readString(stream, obj["password"], callback);
    break;
    }
    i = obj;
}

void writeTLPhoneConnection(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1655957568:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeString(stream, obj["ip"], callback);
        writeString(stream, obj["ipv6"], callback);
        writeInt32(stream, obj["port"], callback);
        writeByteArray(stream, obj["peer_tag"], callback);
    break;
    case 1667228533:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["turn"].isNull()) | 
            (!obj["stun"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeString(stream, obj["ip"], callback);
        writeString(stream, obj["ipv6"], callback);
        writeInt32(stream, obj["port"], callback);
        writeString(stream, obj["username"], callback);
        writeString(stream, obj["password"], callback);
    break;
    }
}

void readTLPhoneCallProtocol(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -58224696:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["udp_p2p"] = true;
        if (obj["flags"].toUInt() & 2) obj["udp_reflector"] = true;
        readInt32(stream, obj["min_layer"], callback);
        readInt32(stream, obj["max_layer"], callback);
        readVector(stream, obj["library_versions"], (void*) &readString);
    break;
    }
    i = obj;
}

void writeTLPhoneCallProtocol(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -58224696:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["udp_p2p"].isNull()) | 
            (!obj["udp_reflector"].isNull() << 1) | 
        0), callback);
        writeInt32(stream, obj["min_layer"], callback);
        writeInt32(stream, obj["max_layer"], callback);
        writeVector(stream, obj["library_versions"], (void*) &writeString);
    break;
    }
}

void readTLPhonePhoneCall(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -326966976:
        obj["_"] = conId.toInt();
        readTLPhoneCall(stream, obj["phone_call"], callback);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLPhonePhoneCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -326966976:
        writeInt32(stream, obj["_"], callback);
        writeTLPhoneCall(stream, obj["phone_call"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLUploadCdnFile(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -290921362:
        obj["_"] = conId.toInt();
        readByteArray(stream, obj["request_token"], callback);
    break;
    case -1449145777:
        obj["_"] = conId.toInt();
        readByteArray(stream, obj["bytes"], callback);
    break;
    }
    i = obj;
}

void writeTLUploadCdnFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -290921362:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["request_token"], callback);
    break;
    case -1449145777:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    }
}

void readTLCdnPublicKey(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -914167110:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["dc_id"], callback);
        readString(stream, obj["public_key"], callback);
    break;
    }
    i = obj;
}

void writeTLCdnPublicKey(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -914167110:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["dc_id"], callback);
        writeString(stream, obj["public_key"], callback);
    break;
    }
}

void readTLCdnConfig(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1462101002:
        obj["_"] = conId.toInt();
        readVector(stream, obj["public_keys"], (void*) &readTLCdnPublicKey);
    break;
    }
    i = obj;
}

void writeTLCdnConfig(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1462101002:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["public_keys"], (void*) &writeTLCdnPublicKey);
    break;
    }
}

void readTLLangPackString(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -892239370:
        obj["_"] = conId.toInt();
        readString(stream, obj["key"], callback);
        readString(stream, obj["value"], callback);
    break;
    case 1816636575:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["key"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["zero_value"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["one_value"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["two_value"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["few_value"], callback);
        if (obj["flags"].toUInt() & 16) readString(stream, obj["many_value"], callback);
        readString(stream, obj["other_value"], callback);
    break;
    case 695856818:
        obj["_"] = conId.toInt();
        readString(stream, obj["key"], callback);
    break;
    }
    i = obj;
}

void writeTLLangPackString(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -892239370:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["key"], callback);
        writeString(stream, obj["value"], callback);
    break;
    case 1816636575:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["zero_value"].isNull()) | 
            (!obj["one_value"].isNull() << 1) | 
            (!obj["two_value"].isNull() << 2) | 
            (!obj["few_value"].isNull() << 3) | 
            (!obj["many_value"].isNull() << 4) | 
        0), callback);
        writeString(stream, obj["key"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["zero_value"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["one_value"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["two_value"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["few_value"], callback);
        if (obj["flags"].toUInt() & 16) writeString(stream, obj["many_value"], callback);
        writeString(stream, obj["other_value"], callback);
    break;
    case 695856818:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["key"], callback);
    break;
    }
}

void readTLLangPackDifference(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -209337866:
        obj["_"] = conId.toInt();
        readString(stream, obj["lang_code"], callback);
        readInt32(stream, obj["from_version"], callback);
        readInt32(stream, obj["version"], callback);
        readVector(stream, obj["strings"], (void*) &readTLLangPackString);
    break;
    }
    i = obj;
}

void writeTLLangPackDifference(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -209337866:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_code"], callback);
        writeInt32(stream, obj["from_version"], callback);
        writeInt32(stream, obj["version"], callback);
        writeVector(stream, obj["strings"], (void*) &writeTLLangPackString);
    break;
    }
}

void readTLLangPackLanguage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -288727837:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["official"] = true;
        if (obj["flags"].toUInt() & 4) obj["rtl"] = true;
        if (obj["flags"].toUInt() & 8) obj["beta"] = true;
        readString(stream, obj["name"], callback);
        readString(stream, obj["native_name"], callback);
        readString(stream, obj["lang_code"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["base_lang_code"], callback);
        readString(stream, obj["plural_code"], callback);
        readInt32(stream, obj["strings_count"], callback);
        readInt32(stream, obj["translated_count"], callback);
        readString(stream, obj["translations_url"], callback);
    break;
    }
    i = obj;
}

void writeTLLangPackLanguage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -288727837:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["official"].isNull()) | 
            (!obj["rtl"].isNull() << 2) | 
            (!obj["beta"].isNull() << 3) | 
            (!obj["base_lang_code"].isNull() << 1) | 
        0), callback);
        writeString(stream, obj["name"], callback);
        writeString(stream, obj["native_name"], callback);
        writeString(stream, obj["lang_code"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["base_lang_code"], callback);
        writeString(stream, obj["plural_code"], callback);
        writeInt32(stream, obj["strings_count"], callback);
        writeInt32(stream, obj["translated_count"], callback);
        writeString(stream, obj["translations_url"], callback);
    break;
    }
}

void readTLChannelAdminLogEventAction(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -421545947:
        obj["_"] = conId.toInt();
        readString(stream, obj["prev_value"], callback);
        readString(stream, obj["new_value"], callback);
    break;
    case 1427671598:
        obj["_"] = conId.toInt();
        readString(stream, obj["prev_value"], callback);
        readString(stream, obj["new_value"], callback);
    break;
    case 1783299128:
        obj["_"] = conId.toInt();
        readString(stream, obj["prev_value"], callback);
        readString(stream, obj["new_value"], callback);
    break;
    case 1129042607:
        obj["_"] = conId.toInt();
        readTLPhoto(stream, obj["prev_photo"], callback);
        readTLPhoto(stream, obj["new_photo"], callback);
    break;
    case 460916654:
        obj["_"] = conId.toInt();
        readBool(stream, obj["new_value"], callback);
    break;
    case 648939889:
        obj["_"] = conId.toInt();
        readBool(stream, obj["new_value"], callback);
    break;
    case -370660328:
        obj["_"] = conId.toInt();
        readTLMessage(stream, obj["message"], callback);
    break;
    case 1889215493:
        obj["_"] = conId.toInt();
        readTLMessage(stream, obj["prev_message"], callback);
        readTLMessage(stream, obj["new_message"], callback);
    break;
    case 1121994683:
        obj["_"] = conId.toInt();
        readTLMessage(stream, obj["message"], callback);
    break;
    case 405815507:
        obj["_"] = conId.toInt();
    break;
    case -124291086:
        obj["_"] = conId.toInt();
    break;
    case -484690728:
        obj["_"] = conId.toInt();
        readTLChannelParticipant(stream, obj["participant"], callback);
    break;
    case -422036098:
        obj["_"] = conId.toInt();
        readTLChannelParticipant(stream, obj["prev_participant"], callback);
        readTLChannelParticipant(stream, obj["new_participant"], callback);
    break;
    case -714643696:
        obj["_"] = conId.toInt();
        readTLChannelParticipant(stream, obj["prev_participant"], callback);
        readTLChannelParticipant(stream, obj["new_participant"], callback);
    break;
    case -1312568665:
        obj["_"] = conId.toInt();
        readTLInputStickerSet(stream, obj["prev_stickerset"], callback);
        readTLInputStickerSet(stream, obj["new_stickerset"], callback);
    break;
    case 1599903217:
        obj["_"] = conId.toInt();
        readBool(stream, obj["new_value"], callback);
    break;
    case 771095562:
        obj["_"] = conId.toInt();
        readTLChatBannedRights(stream, obj["prev_banned_rights"], callback);
        readTLChatBannedRights(stream, obj["new_banned_rights"], callback);
    break;
    case -1895328189:
        obj["_"] = conId.toInt();
        readTLMessage(stream, obj["message"], callback);
    break;
    case 84703944:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["prev_value"], callback);
        readInt64(stream, obj["new_value"], callback);
    break;
    case 241923758:
        obj["_"] = conId.toInt();
        readTLChannelLocation(stream, obj["prev_value"], callback);
        readTLChannelLocation(stream, obj["new_value"], callback);
    break;
    case 1401984889:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["prev_value"], callback);
        readInt32(stream, obj["new_value"], callback);
    break;
    case 589338437:
        obj["_"] = conId.toInt();
        readTLInputGroupCall(stream, obj["call"], callback);
    break;
    case -610299584:
        obj["_"] = conId.toInt();
        readTLInputGroupCall(stream, obj["call"], callback);
    break;
    case -115071790:
        obj["_"] = conId.toInt();
        readTLGroupCallParticipant(stream, obj["participant"], callback);
    break;
    case -431740480:
        obj["_"] = conId.toInt();
        readTLGroupCallParticipant(stream, obj["participant"], callback);
    break;
    case 1456906823:
        obj["_"] = conId.toInt();
        readBool(stream, obj["join_muted"], callback);
    break;
    case 1557846647:
        obj["_"] = conId.toInt();
        readTLExportedChatInvite(stream, obj["invite"], callback);
    break;
    case 1515256996:
        obj["_"] = conId.toInt();
        readTLExportedChatInvite(stream, obj["invite"], callback);
    break;
    case 1091179342:
        obj["_"] = conId.toInt();
        readTLExportedChatInvite(stream, obj["invite"], callback);
    break;
    case -384910503:
        obj["_"] = conId.toInt();
        readTLExportedChatInvite(stream, obj["prev_invite"], callback);
        readTLExportedChatInvite(stream, obj["new_invite"], callback);
    break;
    case 1048537159:
        obj["_"] = conId.toInt();
        readTLGroupCallParticipant(stream, obj["participant"], callback);
    break;
    case 1855199800:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["prev_value"], callback);
        readInt32(stream, obj["new_value"], callback);
    break;
    case -1347021750:
        obj["_"] = conId.toInt();
        readTLExportedChatInvite(stream, obj["invite"], callback);
        readInt64(stream, obj["approved_by"], callback);
    break;
    case -886388890:
        obj["_"] = conId.toInt();
        readBool(stream, obj["new_value"], callback);
    break;
    case 663693416:
        obj["_"] = conId.toInt();
        readTLMessage(stream, obj["message"], callback);
    break;
    case -1661470870:
        obj["_"] = conId.toInt();
        readVector(stream, obj["prev_value"], (void*) &readString);
        readVector(stream, obj["new_value"], (void*) &readString);
    break;
    }
    i = obj;
}

void writeTLChannelAdminLogEventAction(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -421545947:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["prev_value"], callback);
        writeString(stream, obj["new_value"], callback);
    break;
    case 1427671598:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["prev_value"], callback);
        writeString(stream, obj["new_value"], callback);
    break;
    case 1783299128:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["prev_value"], callback);
        writeString(stream, obj["new_value"], callback);
    break;
    case 1129042607:
        writeInt32(stream, obj["_"], callback);
        writeTLPhoto(stream, obj["prev_photo"], callback);
        writeTLPhoto(stream, obj["new_photo"], callback);
    break;
    case 460916654:
        writeInt32(stream, obj["_"], callback);
        writeBool(stream, obj["new_value"], callback);
    break;
    case 648939889:
        writeInt32(stream, obj["_"], callback);
        writeBool(stream, obj["new_value"], callback);
    break;
    case -370660328:
        writeInt32(stream, obj["_"], callback);
        writeTLMessage(stream, obj["message"], callback);
    break;
    case 1889215493:
        writeInt32(stream, obj["_"], callback);
        writeTLMessage(stream, obj["prev_message"], callback);
        writeTLMessage(stream, obj["new_message"], callback);
    break;
    case 1121994683:
        writeInt32(stream, obj["_"], callback);
        writeTLMessage(stream, obj["message"], callback);
    break;
    case 405815507:
        writeInt32(stream, obj["_"], callback);
    break;
    case -124291086:
        writeInt32(stream, obj["_"], callback);
    break;
    case -484690728:
        writeInt32(stream, obj["_"], callback);
        writeTLChannelParticipant(stream, obj["participant"], callback);
    break;
    case -422036098:
        writeInt32(stream, obj["_"], callback);
        writeTLChannelParticipant(stream, obj["prev_participant"], callback);
        writeTLChannelParticipant(stream, obj["new_participant"], callback);
    break;
    case -714643696:
        writeInt32(stream, obj["_"], callback);
        writeTLChannelParticipant(stream, obj["prev_participant"], callback);
        writeTLChannelParticipant(stream, obj["new_participant"], callback);
    break;
    case -1312568665:
        writeInt32(stream, obj["_"], callback);
        writeTLInputStickerSet(stream, obj["prev_stickerset"], callback);
        writeTLInputStickerSet(stream, obj["new_stickerset"], callback);
    break;
    case 1599903217:
        writeInt32(stream, obj["_"], callback);
        writeBool(stream, obj["new_value"], callback);
    break;
    case 771095562:
        writeInt32(stream, obj["_"], callback);
        writeTLChatBannedRights(stream, obj["prev_banned_rights"], callback);
        writeTLChatBannedRights(stream, obj["new_banned_rights"], callback);
    break;
    case -1895328189:
        writeInt32(stream, obj["_"], callback);
        writeTLMessage(stream, obj["message"], callback);
    break;
    case 84703944:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["prev_value"], callback);
        writeInt64(stream, obj["new_value"], callback);
    break;
    case 241923758:
        writeInt32(stream, obj["_"], callback);
        writeTLChannelLocation(stream, obj["prev_value"], callback);
        writeTLChannelLocation(stream, obj["new_value"], callback);
    break;
    case 1401984889:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["prev_value"], callback);
        writeInt32(stream, obj["new_value"], callback);
    break;
    case 589338437:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
    break;
    case -610299584:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
    break;
    case -115071790:
        writeInt32(stream, obj["_"], callback);
        writeTLGroupCallParticipant(stream, obj["participant"], callback);
    break;
    case -431740480:
        writeInt32(stream, obj["_"], callback);
        writeTLGroupCallParticipant(stream, obj["participant"], callback);
    break;
    case 1456906823:
        writeInt32(stream, obj["_"], callback);
        writeBool(stream, obj["join_muted"], callback);
    break;
    case 1557846647:
        writeInt32(stream, obj["_"], callback);
        writeTLExportedChatInvite(stream, obj["invite"], callback);
    break;
    case 1515256996:
        writeInt32(stream, obj["_"], callback);
        writeTLExportedChatInvite(stream, obj["invite"], callback);
    break;
    case 1091179342:
        writeInt32(stream, obj["_"], callback);
        writeTLExportedChatInvite(stream, obj["invite"], callback);
    break;
    case -384910503:
        writeInt32(stream, obj["_"], callback);
        writeTLExportedChatInvite(stream, obj["prev_invite"], callback);
        writeTLExportedChatInvite(stream, obj["new_invite"], callback);
    break;
    case 1048537159:
        writeInt32(stream, obj["_"], callback);
        writeTLGroupCallParticipant(stream, obj["participant"], callback);
    break;
    case 1855199800:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["prev_value"], callback);
        writeInt32(stream, obj["new_value"], callback);
    break;
    case -1347021750:
        writeInt32(stream, obj["_"], callback);
        writeTLExportedChatInvite(stream, obj["invite"], callback);
        writeInt64(stream, obj["approved_by"], callback);
    break;
    case -886388890:
        writeInt32(stream, obj["_"], callback);
        writeBool(stream, obj["new_value"], callback);
    break;
    case 663693416:
        writeInt32(stream, obj["_"], callback);
        writeTLMessage(stream, obj["message"], callback);
    break;
    case -1661470870:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["prev_value"], (void*) &writeString);
        writeVector(stream, obj["new_value"], (void*) &writeString);
    break;
    }
}

void readTLChannelAdminLogEvent(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 531458253:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt32(stream, obj["date"], callback);
        readInt64(stream, obj["user_id"], callback);
        readTLChannelAdminLogEventAction(stream, obj["action"], callback);
    break;
    }
    i = obj;
}

void writeTLChannelAdminLogEvent(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 531458253:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeTLChannelAdminLogEventAction(stream, obj["action"], callback);
    break;
    }
}

void readTLChannelsAdminLogResults(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -309659827:
        obj["_"] = conId.toInt();
        readVector(stream, obj["events"], (void*) &readTLChannelAdminLogEvent);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLChannelsAdminLogResults(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -309659827:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["events"], (void*) &writeTLChannelAdminLogEvent);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLChannelAdminLogEventsFilter(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -368018716:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["join"] = true;
        if (obj["flags"].toUInt() & 2) obj["leave"] = true;
        if (obj["flags"].toUInt() & 4) obj["invite"] = true;
        if (obj["flags"].toUInt() & 8) obj["ban"] = true;
        if (obj["flags"].toUInt() & 16) obj["unban"] = true;
        if (obj["flags"].toUInt() & 32) obj["kick"] = true;
        if (obj["flags"].toUInt() & 64) obj["unkick"] = true;
        if (obj["flags"].toUInt() & 128) obj["promote"] = true;
        if (obj["flags"].toUInt() & 256) obj["demote"] = true;
        if (obj["flags"].toUInt() & 512) obj["info"] = true;
        if (obj["flags"].toUInt() & 1024) obj["settings"] = true;
        if (obj["flags"].toUInt() & 2048) obj["pinned"] = true;
        if (obj["flags"].toUInt() & 4096) obj["edit"] = true;
        if (obj["flags"].toUInt() & 8192) obj["delete"] = true;
        if (obj["flags"].toUInt() & 16384) obj["group_call"] = true;
        if (obj["flags"].toUInt() & 32768) obj["invites"] = true;
        if (obj["flags"].toUInt() & 65536) obj["send"] = true;
    break;
    }
    i = obj;
}

void writeTLChannelAdminLogEventsFilter(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -368018716:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["join"].isNull()) | 
            (!obj["leave"].isNull() << 1) | 
            (!obj["invite"].isNull() << 2) | 
            (!obj["ban"].isNull() << 3) | 
            (!obj["unban"].isNull() << 4) | 
            (!obj["kick"].isNull() << 5) | 
            (!obj["unkick"].isNull() << 6) | 
            (!obj["promote"].isNull() << 7) | 
            (!obj["demote"].isNull() << 8) | 
            (!obj["info"].isNull() << 9) | 
            (!obj["settings"].isNull() << 10) | 
            (!obj["pinned"].isNull() << 11) | 
            (!obj["edit"].isNull() << 12) | 
            (!obj["delete"].isNull() << 13) | 
            (!obj["group_call"].isNull() << 14) | 
            (!obj["invites"].isNull() << 15) | 
            (!obj["send"].isNull() << 16) | 
        0), callback);
    break;
    }
}

void readTLPopularContact(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1558266229:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["client_id"], callback);
        readInt32(stream, obj["importers"], callback);
    break;
    }
    i = obj;
}

void writeTLPopularContact(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1558266229:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["client_id"], callback);
        writeInt32(stream, obj["importers"], callback);
    break;
    }
}

void readTLMessagesFavedStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1634752813:
        obj["_"] = conId.toInt();
    break;
    case 750063767:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["hash"], callback);
        readVector(stream, obj["packs"], (void*) &readTLStickerPack);
        readVector(stream, obj["stickers"], (void*) &readTLDocument);
    break;
    }
    i = obj;
}

void writeTLMessagesFavedStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1634752813:
        writeInt32(stream, obj["_"], callback);
    break;
    case 750063767:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
        writeVector(stream, obj["packs"], (void*) &writeTLStickerPack);
        writeVector(stream, obj["stickers"], (void*) &writeTLDocument);
    break;
    }
}

void readTLRecentMeUrl(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1189204285:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
    break;
    case -1188296222:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readInt64(stream, obj["user_id"], callback);
    break;
    case -1294306862:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readInt64(stream, obj["chat_id"], callback);
    break;
    case -347535331:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readTLChatInvite(stream, obj["chat_invite"], callback);
    break;
    case -1140172836:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readTLStickerSetCovered(stream, obj["set"], callback);
    break;
    }
    i = obj;
}

void writeTLRecentMeUrl(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1189204285:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
    break;
    case -1188296222:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeInt64(stream, obj["user_id"], callback);
    break;
    case -1294306862:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeInt64(stream, obj["chat_id"], callback);
    break;
    case -347535331:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeTLChatInvite(stream, obj["chat_invite"], callback);
    break;
    case -1140172836:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeTLStickerSetCovered(stream, obj["set"], callback);
    break;
    }
}

void readTLHelpRecentMeUrls(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 235081943:
        obj["_"] = conId.toInt();
        readVector(stream, obj["urls"], (void*) &readTLRecentMeUrl);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLHelpRecentMeUrls(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 235081943:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["urls"], (void*) &writeTLRecentMeUrl);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLInputSingleMedia(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 482797855:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLInputMedia(stream, obj["media"], callback);
        readInt64(stream, obj["random_id"], callback);
        readString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 1) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
    break;
    }
    i = obj;
}

void writeTLInputSingleMedia(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 482797855:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["entities"].isNull()) | 
        0), callback);
        writeTLInputMedia(stream, obj["media"], callback);
        writeInt64(stream, obj["random_id"], callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 1) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
    break;
    }
}

void readTLWebAuthorization(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1493633966:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["hash"], callback);
        readInt64(stream, obj["bot_id"], callback);
        readString(stream, obj["domain"], callback);
        readString(stream, obj["browser"], callback);
        readString(stream, obj["platform"], callback);
        readInt32(stream, obj["date_created"], callback);
        readInt32(stream, obj["date_active"], callback);
        readString(stream, obj["ip"], callback);
        readString(stream, obj["region"], callback);
    break;
    }
    i = obj;
}

void writeTLWebAuthorization(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1493633966:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
        writeInt64(stream, obj["bot_id"], callback);
        writeString(stream, obj["domain"], callback);
        writeString(stream, obj["browser"], callback);
        writeString(stream, obj["platform"], callback);
        writeInt32(stream, obj["date_created"], callback);
        writeInt32(stream, obj["date_active"], callback);
        writeString(stream, obj["ip"], callback);
        writeString(stream, obj["region"], callback);
    break;
    }
}

void readTLAccountWebAuthorizations(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -313079300:
        obj["_"] = conId.toInt();
        readVector(stream, obj["authorizations"], (void*) &readTLWebAuthorization);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLAccountWebAuthorizations(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -313079300:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["authorizations"], (void*) &writeTLWebAuthorization);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLInputMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1502174430:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["id"], callback);
    break;
    case -1160215659:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["id"], callback);
    break;
    case -2037963464:
        obj["_"] = conId.toInt();
    break;
    case -1392895362:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["id"], callback);
        readInt64(stream, obj["query_id"], callback);
    break;
    }
    i = obj;
}

void writeTLInputMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1502174430:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["id"], callback);
    break;
    case -1160215659:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["id"], callback);
    break;
    case -2037963464:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1392895362:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["id"], callback);
        writeInt64(stream, obj["query_id"], callback);
    break;
    }
}

void readTLInputDialogPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -55902537:
        obj["_"] = conId.toInt();
        readTLInputPeer(stream, obj["peer"], callback);
    break;
    case 1684014375:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["folder_id"], callback);
    break;
    }
    i = obj;
}

void writeTLInputDialogPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -55902537:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    case 1684014375:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["folder_id"], callback);
    break;
    }
}

void readTLDialogPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -445792507:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
    break;
    case 1363483106:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["folder_id"], callback);
    break;
    }
    i = obj;
}

void writeTLDialogPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -445792507:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
    break;
    case 1363483106:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["folder_id"], callback);
    break;
    }
}

void readTLMessagesFoundStickerSets(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 223655517:
        obj["_"] = conId.toInt();
    break;
    case -1963942446:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["hash"], callback);
        readVector(stream, obj["sets"], (void*) &readTLStickerSetCovered);
    break;
    }
    i = obj;
}

void writeTLMessagesFoundStickerSets(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 223655517:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1963942446:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
        writeVector(stream, obj["sets"], (void*) &writeTLStickerSetCovered);
    break;
    }
}

void readTLFileHash(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1648543603:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["offset"], callback);
        readInt32(stream, obj["limit"], callback);
        readByteArray(stream, obj["hash"], callback);
    break;
    }
    i = obj;
}

void writeTLFileHash(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1648543603:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeByteArray(stream, obj["hash"], callback);
    break;
    }
}

void readTLInputClientProxy(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1968737087:
        obj["_"] = conId.toInt();
        readString(stream, obj["address"], callback);
        readInt32(stream, obj["port"], callback);
    break;
    }
    i = obj;
}

void writeTLInputClientProxy(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1968737087:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["address"], callback);
        writeInt32(stream, obj["port"], callback);
    break;
    }
}

void readTLHelpTermsOfServiceUpdate(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -483352705:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["expires"], callback);
    break;
    case 686618977:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["expires"], callback);
        readTLHelpTermsOfService(stream, obj["terms_of_service"], callback);
    break;
    }
    i = obj;
}

void writeTLHelpTermsOfServiceUpdate(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -483352705:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["expires"], callback);
    break;
    case 686618977:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["expires"], callback);
        writeTLHelpTermsOfService(stream, obj["terms_of_service"], callback);
    break;
    }
}

void readTLInputSecureFile(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 859091184:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt32(stream, obj["parts"], callback);
        readString(stream, obj["md5_checksum"], callback);
        readByteArray(stream, obj["file_hash"], callback);
        readByteArray(stream, obj["secret"], callback);
    break;
    case 1399317950:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    }
    i = obj;
}

void writeTLInputSecureFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 859091184:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt32(stream, obj["parts"], callback);
        writeString(stream, obj["md5_checksum"], callback);
        writeByteArray(stream, obj["file_hash"], callback);
        writeByteArray(stream, obj["secret"], callback);
    break;
    case 1399317950:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    }
}

void readTLSecureFile(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1679398724:
        obj["_"] = conId.toInt();
    break;
    case -534283678:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["size"], callback);
        readInt32(stream, obj["dc_id"], callback);
        readInt32(stream, obj["date"], callback);
        readByteArray(stream, obj["file_hash"], callback);
        readByteArray(stream, obj["secret"], callback);
    break;
    }
    i = obj;
}

void writeTLSecureFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1679398724:
        writeInt32(stream, obj["_"], callback);
    break;
    case -534283678:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["size"], callback);
        writeInt32(stream, obj["dc_id"], callback);
        writeInt32(stream, obj["date"], callback);
        writeByteArray(stream, obj["file_hash"], callback);
        writeByteArray(stream, obj["secret"], callback);
    break;
    }
}

void readTLSecureData(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1964327229:
        obj["_"] = conId.toInt();
        readByteArray(stream, obj["data"], callback);
        readByteArray(stream, obj["data_hash"], callback);
        readByteArray(stream, obj["secret"], callback);
    break;
    }
    i = obj;
}

void writeTLSecureData(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1964327229:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["data"], callback);
        writeByteArray(stream, obj["data_hash"], callback);
        writeByteArray(stream, obj["secret"], callback);
    break;
    }
}

void readTLSecurePlainData(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2103482845:
        obj["_"] = conId.toInt();
        readString(stream, obj["phone"], callback);
    break;
    case 569137759:
        obj["_"] = conId.toInt();
        readString(stream, obj["email"], callback);
    break;
    }
    i = obj;
}

void writeTLSecurePlainData(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2103482845:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone"], callback);
    break;
    case 569137759:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["email"], callback);
    break;
    }
}

void readTLSecureValueType(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1658158621:
        obj["_"] = conId.toInt();
    break;
    case 1034709504:
        obj["_"] = conId.toInt();
    break;
    case 115615172:
        obj["_"] = conId.toInt();
    break;
    case -1596951477:
        obj["_"] = conId.toInt();
    break;
    case -1717268701:
        obj["_"] = conId.toInt();
    break;
    case -874308058:
        obj["_"] = conId.toInt();
    break;
    case -63531698:
        obj["_"] = conId.toInt();
    break;
    case -1995211763:
        obj["_"] = conId.toInt();
    break;
    case -1954007928:
        obj["_"] = conId.toInt();
    break;
    case -1713143702:
        obj["_"] = conId.toInt();
    break;
    case -368907213:
        obj["_"] = conId.toInt();
    break;
    case -1289704741:
        obj["_"] = conId.toInt();
    break;
    case -1908627474:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLSecureValueType(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1658158621:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1034709504:
        writeInt32(stream, obj["_"], callback);
    break;
    case 115615172:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1596951477:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1717268701:
        writeInt32(stream, obj["_"], callback);
    break;
    case -874308058:
        writeInt32(stream, obj["_"], callback);
    break;
    case -63531698:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1995211763:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1954007928:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1713143702:
        writeInt32(stream, obj["_"], callback);
    break;
    case -368907213:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1289704741:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1908627474:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLSecureValue(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 411017418:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLSecureValueType(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 1) readTLSecureData(stream, obj["data"], callback);
        if (obj["flags"].toUInt() & 2) readTLSecureFile(stream, obj["front_side"], callback);
        if (obj["flags"].toUInt() & 4) readTLSecureFile(stream, obj["reverse_side"], callback);
        if (obj["flags"].toUInt() & 8) readTLSecureFile(stream, obj["selfie"], callback);
        if (obj["flags"].toUInt() & 64) readVector(stream, obj["translation"], (void*) &readTLSecureFile);
        if (obj["flags"].toUInt() & 16) readVector(stream, obj["files"], (void*) &readTLSecureFile);
        if (obj["flags"].toUInt() & 32) readTLSecurePlainData(stream, obj["plain_data"], callback);
        readByteArray(stream, obj["hash"], callback);
    break;
    }
    i = obj;
}

void writeTLSecureValue(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 411017418:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["data"].isNull()) | 
            (!obj["front_side"].isNull() << 1) | 
            (!obj["reverse_side"].isNull() << 2) | 
            (!obj["selfie"].isNull() << 3) | 
            (!obj["translation"].isNull() << 6) | 
            (!obj["files"].isNull() << 4) | 
            (!obj["plain_data"].isNull() << 5) | 
        0), callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 1) writeTLSecureData(stream, obj["data"], callback);
        if (obj["flags"].toUInt() & 2) writeTLSecureFile(stream, obj["front_side"], callback);
        if (obj["flags"].toUInt() & 4) writeTLSecureFile(stream, obj["reverse_side"], callback);
        if (obj["flags"].toUInt() & 8) writeTLSecureFile(stream, obj["selfie"], callback);
        if (obj["flags"].toUInt() & 64) writeVector(stream, obj["translation"], (void*) &writeTLSecureFile);
        if (obj["flags"].toUInt() & 16) writeVector(stream, obj["files"], (void*) &writeTLSecureFile);
        if (obj["flags"].toUInt() & 32) writeTLSecurePlainData(stream, obj["plain_data"], callback);
        writeByteArray(stream, obj["hash"], callback);
    break;
    }
}

void readTLInputSecureValue(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -618540889:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLSecureValueType(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 1) readTLSecureData(stream, obj["data"], callback);
        if (obj["flags"].toUInt() & 2) readTLInputSecureFile(stream, obj["front_side"], callback);
        if (obj["flags"].toUInt() & 4) readTLInputSecureFile(stream, obj["reverse_side"], callback);
        if (obj["flags"].toUInt() & 8) readTLInputSecureFile(stream, obj["selfie"], callback);
        if (obj["flags"].toUInt() & 64) readVector(stream, obj["translation"], (void*) &readTLInputSecureFile);
        if (obj["flags"].toUInt() & 16) readVector(stream, obj["files"], (void*) &readTLInputSecureFile);
        if (obj["flags"].toUInt() & 32) readTLSecurePlainData(stream, obj["plain_data"], callback);
    break;
    }
    i = obj;
}

void writeTLInputSecureValue(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -618540889:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["data"].isNull()) | 
            (!obj["front_side"].isNull() << 1) | 
            (!obj["reverse_side"].isNull() << 2) | 
            (!obj["selfie"].isNull() << 3) | 
            (!obj["translation"].isNull() << 6) | 
            (!obj["files"].isNull() << 4) | 
            (!obj["plain_data"].isNull() << 5) | 
        0), callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        if (obj["flags"].toUInt() & 1) writeTLSecureData(stream, obj["data"], callback);
        if (obj["flags"].toUInt() & 2) writeTLInputSecureFile(stream, obj["front_side"], callback);
        if (obj["flags"].toUInt() & 4) writeTLInputSecureFile(stream, obj["reverse_side"], callback);
        if (obj["flags"].toUInt() & 8) writeTLInputSecureFile(stream, obj["selfie"], callback);
        if (obj["flags"].toUInt() & 64) writeVector(stream, obj["translation"], (void*) &writeTLInputSecureFile);
        if (obj["flags"].toUInt() & 16) writeVector(stream, obj["files"], (void*) &writeTLInputSecureFile);
        if (obj["flags"].toUInt() & 32) writeTLSecurePlainData(stream, obj["plain_data"], callback);
    break;
    }
}

void readTLSecureValueHash(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -316748368:
        obj["_"] = conId.toInt();
        readTLSecureValueType(stream, obj["type"], callback);
        readByteArray(stream, obj["hash"], callback);
    break;
    }
    i = obj;
}

void writeTLSecureValueHash(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -316748368:
        writeInt32(stream, obj["_"], callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        writeByteArray(stream, obj["hash"], callback);
    break;
    }
}

void readTLSecureValueError(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -391902247:
        obj["_"] = conId.toInt();
        readTLSecureValueType(stream, obj["type"], callback);
        readByteArray(stream, obj["data_hash"], callback);
        readString(stream, obj["field"], callback);
        readString(stream, obj["text"], callback);
    break;
    case 12467706:
        obj["_"] = conId.toInt();
        readTLSecureValueType(stream, obj["type"], callback);
        readByteArray(stream, obj["file_hash"], callback);
        readString(stream, obj["text"], callback);
    break;
    case -2037765467:
        obj["_"] = conId.toInt();
        readTLSecureValueType(stream, obj["type"], callback);
        readByteArray(stream, obj["file_hash"], callback);
        readString(stream, obj["text"], callback);
    break;
    case -449327402:
        obj["_"] = conId.toInt();
        readTLSecureValueType(stream, obj["type"], callback);
        readByteArray(stream, obj["file_hash"], callback);
        readString(stream, obj["text"], callback);
    break;
    case 2054162547:
        obj["_"] = conId.toInt();
        readTLSecureValueType(stream, obj["type"], callback);
        readByteArray(stream, obj["file_hash"], callback);
        readString(stream, obj["text"], callback);
    break;
    case 1717706985:
        obj["_"] = conId.toInt();
        readTLSecureValueType(stream, obj["type"], callback);
        readVector(stream, obj["file_hash"], (void*) &readByteArray);
        readString(stream, obj["text"], callback);
    break;
    case -2036501105:
        obj["_"] = conId.toInt();
        readTLSecureValueType(stream, obj["type"], callback);
        readByteArray(stream, obj["hash"], callback);
        readString(stream, obj["text"], callback);
    break;
    case -1592506512:
        obj["_"] = conId.toInt();
        readTLSecureValueType(stream, obj["type"], callback);
        readByteArray(stream, obj["file_hash"], callback);
        readString(stream, obj["text"], callback);
    break;
    case 878931416:
        obj["_"] = conId.toInt();
        readTLSecureValueType(stream, obj["type"], callback);
        readVector(stream, obj["file_hash"], (void*) &readByteArray);
        readString(stream, obj["text"], callback);
    break;
    }
    i = obj;
}

void writeTLSecureValueError(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -391902247:
        writeInt32(stream, obj["_"], callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        writeByteArray(stream, obj["data_hash"], callback);
        writeString(stream, obj["field"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case 12467706:
        writeInt32(stream, obj["_"], callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        writeByteArray(stream, obj["file_hash"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case -2037765467:
        writeInt32(stream, obj["_"], callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        writeByteArray(stream, obj["file_hash"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case -449327402:
        writeInt32(stream, obj["_"], callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        writeByteArray(stream, obj["file_hash"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case 2054162547:
        writeInt32(stream, obj["_"], callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        writeByteArray(stream, obj["file_hash"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case 1717706985:
        writeInt32(stream, obj["_"], callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        writeVector(stream, obj["file_hash"], (void*) &writeByteArray);
        writeString(stream, obj["text"], callback);
    break;
    case -2036501105:
        writeInt32(stream, obj["_"], callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        writeByteArray(stream, obj["hash"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case -1592506512:
        writeInt32(stream, obj["_"], callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        writeByteArray(stream, obj["file_hash"], callback);
        writeString(stream, obj["text"], callback);
    break;
    case 878931416:
        writeInt32(stream, obj["_"], callback);
        writeTLSecureValueType(stream, obj["type"], callback);
        writeVector(stream, obj["file_hash"], (void*) &writeByteArray);
        writeString(stream, obj["text"], callback);
    break;
    }
}

void readTLSecureCredentialsEncrypted(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 871426631:
        obj["_"] = conId.toInt();
        readByteArray(stream, obj["data"], callback);
        readByteArray(stream, obj["hash"], callback);
        readByteArray(stream, obj["secret"], callback);
    break;
    }
    i = obj;
}

void writeTLSecureCredentialsEncrypted(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 871426631:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["data"], callback);
        writeByteArray(stream, obj["hash"], callback);
        writeByteArray(stream, obj["secret"], callback);
    break;
    }
}

void readTLAccountAuthorizationForm(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1389486888:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readVector(stream, obj["required_types"], (void*) &readTLSecureRequiredType);
        readVector(stream, obj["values"], (void*) &readTLSecureValue);
        readVector(stream, obj["errors"], (void*) &readTLSecureValueError);
        readVector(stream, obj["users"], (void*) &readTLUser);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["privacy_policy_url"], callback);
    break;
    }
    i = obj;
}

void writeTLAccountAuthorizationForm(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1389486888:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["privacy_policy_url"].isNull()) | 
        0), callback);
        writeVector(stream, obj["required_types"], (void*) &writeTLSecureRequiredType);
        writeVector(stream, obj["values"], (void*) &writeTLSecureValue);
        writeVector(stream, obj["errors"], (void*) &writeTLSecureValueError);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["privacy_policy_url"], callback);
    break;
    }
}

void readTLAccountSentEmailCode(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2128640689:
        obj["_"] = conId.toInt();
        readString(stream, obj["email_pattern"], callback);
        readInt32(stream, obj["length"], callback);
    break;
    }
    i = obj;
}

void writeTLAccountSentEmailCode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2128640689:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["email_pattern"], callback);
        writeInt32(stream, obj["length"], callback);
    break;
    }
}

void readTLHelpDeepLinkInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1722786150:
        obj["_"] = conId.toInt();
    break;
    case 1783556146:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["update_app"] = true;
        readString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
    break;
    }
    i = obj;
}

void writeTLHelpDeepLinkInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1722786150:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1783556146:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["update_app"].isNull()) | 
            (!obj["entities"].isNull() << 1) | 
        0), callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
    break;
    }
}

void readTLSavedContact(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 289586518:
        obj["_"] = conId.toInt();
        readString(stream, obj["phone"], callback);
        readString(stream, obj["first_name"], callback);
        readString(stream, obj["last_name"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    }
    i = obj;
}

void writeTLSavedContact(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 289586518:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone"], callback);
        writeString(stream, obj["first_name"], callback);
        writeString(stream, obj["last_name"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    }
}

void readTLAccountTakeout(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1304052993:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
    break;
    }
    i = obj;
}

void writeTLAccountTakeout(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1304052993:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
    break;
    }
}

void readTLPasswordKdfAlgo(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -732254058:
        obj["_"] = conId.toInt();
    break;
    case 982592842:
        obj["_"] = conId.toInt();
        readByteArray(stream, obj["salt1"], callback);
        readByteArray(stream, obj["salt2"], callback);
        readInt32(stream, obj["g"], callback);
        readByteArray(stream, obj["p"], callback);
    break;
    }
    i = obj;
}

void writeTLPasswordKdfAlgo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -732254058:
        writeInt32(stream, obj["_"], callback);
    break;
    case 982592842:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["salt1"], callback);
        writeByteArray(stream, obj["salt2"], callback);
        writeInt32(stream, obj["g"], callback);
        writeByteArray(stream, obj["p"], callback);
    break;
    }
}

void readTLSecurePasswordKdfAlgo(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 4883767:
        obj["_"] = conId.toInt();
    break;
    case -1141711456:
        obj["_"] = conId.toInt();
        readByteArray(stream, obj["salt"], callback);
    break;
    case -2042159726:
        obj["_"] = conId.toInt();
        readByteArray(stream, obj["salt"], callback);
    break;
    }
    i = obj;
}

void writeTLSecurePasswordKdfAlgo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 4883767:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1141711456:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["salt"], callback);
    break;
    case -2042159726:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["salt"], callback);
    break;
    }
}

void readTLSecureSecretSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 354925740:
        obj["_"] = conId.toInt();
        readTLSecurePasswordKdfAlgo(stream, obj["secure_algo"], callback);
        readByteArray(stream, obj["secure_secret"], callback);
        readInt64(stream, obj["secure_secret_id"], callback);
    break;
    }
    i = obj;
}

void writeTLSecureSecretSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 354925740:
        writeInt32(stream, obj["_"], callback);
        writeTLSecurePasswordKdfAlgo(stream, obj["secure_algo"], callback);
        writeByteArray(stream, obj["secure_secret"], callback);
        writeInt64(stream, obj["secure_secret_id"], callback);
    break;
    }
}

void readTLInputCheckPasswordSRP(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1736378792:
        obj["_"] = conId.toInt();
    break;
    case -763367294:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["srp_id"], callback);
        readByteArray(stream, obj["A"], callback);
        readByteArray(stream, obj["M1"], callback);
    break;
    }
    i = obj;
}

void writeTLInputCheckPasswordSRP(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1736378792:
        writeInt32(stream, obj["_"], callback);
    break;
    case -763367294:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["srp_id"], callback);
        writeByteArray(stream, obj["A"], callback);
        writeByteArray(stream, obj["M1"], callback);
    break;
    }
}

void readTLSecureRequiredType(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2103600678:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["native_names"] = true;
        if (obj["flags"].toUInt() & 2) obj["selfie_required"] = true;
        if (obj["flags"].toUInt() & 4) obj["translation_required"] = true;
        readTLSecureValueType(stream, obj["type"], callback);
    break;
    case 41187252:
        obj["_"] = conId.toInt();
        readVector(stream, obj["types"], (void*) &readTLSecureRequiredType);
    break;
    }
    i = obj;
}

void writeTLSecureRequiredType(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2103600678:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["native_names"].isNull()) | 
            (!obj["selfie_required"].isNull() << 1) | 
            (!obj["translation_required"].isNull() << 2) | 
        0), callback);
        writeTLSecureValueType(stream, obj["type"], callback);
    break;
    case 41187252:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["types"], (void*) &writeTLSecureRequiredType);
    break;
    }
}

void readTLHelpPassportConfig(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1078332329:
        obj["_"] = conId.toInt();
    break;
    case -1600596305:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["hash"], callback);
        readTLDataJSON(stream, obj["countries_langs"], callback);
    break;
    }
    i = obj;
}

void writeTLHelpPassportConfig(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1078332329:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1600596305:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["hash"], callback);
        writeTLDataJSON(stream, obj["countries_langs"], callback);
    break;
    }
}

void readTLInputAppEvent(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 488313413:
        obj["_"] = conId.toInt();
        readDouble(stream, obj["time"], callback);
        readString(stream, obj["type"], callback);
        readInt64(stream, obj["peer"], callback);
        readTLJSONValue(stream, obj["data"], callback);
    break;
    }
    i = obj;
}

void writeTLInputAppEvent(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 488313413:
        writeInt32(stream, obj["_"], callback);
        writeDouble(stream, obj["time"], callback);
        writeString(stream, obj["type"], callback);
        writeInt64(stream, obj["peer"], callback);
        writeTLJSONValue(stream, obj["data"], callback);
    break;
    }
}

void readTLJSONObjectValue(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1059185703:
        obj["_"] = conId.toInt();
        readString(stream, obj["key"], callback);
        readTLJSONValue(stream, obj["value"], callback);
    break;
    }
    i = obj;
}

void writeTLJSONObjectValue(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1059185703:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["key"], callback);
        writeTLJSONValue(stream, obj["value"], callback);
    break;
    }
}

void readTLJSONValue(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1064139624:
        obj["_"] = conId.toInt();
    break;
    case -952869270:
        obj["_"] = conId.toInt();
        readBool(stream, obj["value"], callback);
    break;
    case 736157604:
        obj["_"] = conId.toInt();
        readDouble(stream, obj["value"], callback);
    break;
    case -1222740358:
        obj["_"] = conId.toInt();
        readString(stream, obj["value"], callback);
    break;
    case -146520221:
        obj["_"] = conId.toInt();
        readVector(stream, obj["value"], (void*) &readTLJSONValue);
    break;
    case -1715350371:
        obj["_"] = conId.toInt();
        readVector(stream, obj["value"], (void*) &readTLJSONObjectValue);
    break;
    }
    i = obj;
}

void writeTLJSONValue(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1064139624:
        writeInt32(stream, obj["_"], callback);
    break;
    case -952869270:
        writeInt32(stream, obj["_"], callback);
        writeBool(stream, obj["value"], callback);
    break;
    case 736157604:
        writeInt32(stream, obj["_"], callback);
        writeDouble(stream, obj["value"], callback);
    break;
    case -1222740358:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["value"], callback);
    break;
    case -146520221:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["value"], (void*) &writeTLJSONValue);
    break;
    case -1715350371:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["value"], (void*) &writeTLJSONObjectValue);
    break;
    }
}

void readTLPageTableCell(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 878078826:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["header"] = true;
        if (obj["flags"].toUInt() & 8) obj["align_center"] = true;
        if (obj["flags"].toUInt() & 16) obj["align_right"] = true;
        if (obj["flags"].toUInt() & 32) obj["valign_middle"] = true;
        if (obj["flags"].toUInt() & 64) obj["valign_bottom"] = true;
        if (obj["flags"].toUInt() & 128) readTLRichText(stream, obj["text"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["colspan"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["rowspan"], callback);
    break;
    }
    i = obj;
}

void writeTLPageTableCell(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 878078826:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["header"].isNull()) | 
            (!obj["align_center"].isNull() << 3) | 
            (!obj["align_right"].isNull() << 4) | 
            (!obj["valign_middle"].isNull() << 5) | 
            (!obj["valign_bottom"].isNull() << 6) | 
            (!obj["text"].isNull() << 7) | 
            (!obj["colspan"].isNull() << 1) | 
            (!obj["rowspan"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 128) writeTLRichText(stream, obj["text"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["colspan"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["rowspan"], callback);
    break;
    }
}

void readTLPageTableRow(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -524237339:
        obj["_"] = conId.toInt();
        readVector(stream, obj["cells"], (void*) &readTLPageTableCell);
    break;
    }
    i = obj;
}

void writeTLPageTableRow(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -524237339:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["cells"], (void*) &writeTLPageTableCell);
    break;
    }
}

void readTLPageCaption(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1869903447:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
        readTLRichText(stream, obj["credit"], callback);
    break;
    }
    i = obj;
}

void writeTLPageCaption(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1869903447:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
        writeTLRichText(stream, obj["credit"], callback);
    break;
    }
}

void readTLPageListItem(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1188055347:
        obj["_"] = conId.toInt();
        readTLRichText(stream, obj["text"], callback);
    break;
    case 635466748:
        obj["_"] = conId.toInt();
        readVector(stream, obj["blocks"], (void*) &readTLPageBlock);
    break;
    }
    i = obj;
}

void writeTLPageListItem(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1188055347:
        writeInt32(stream, obj["_"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case 635466748:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["blocks"], (void*) &writeTLPageBlock);
    break;
    }
}

void readTLPageListOrderedItem(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1577484359:
        obj["_"] = conId.toInt();
        readString(stream, obj["num"], callback);
        readTLRichText(stream, obj["text"], callback);
    break;
    case -1730311882:
        obj["_"] = conId.toInt();
        readString(stream, obj["num"], callback);
        readVector(stream, obj["blocks"], (void*) &readTLPageBlock);
    break;
    }
    i = obj;
}

void writeTLPageListOrderedItem(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1577484359:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["num"], callback);
        writeTLRichText(stream, obj["text"], callback);
    break;
    case -1730311882:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["num"], callback);
        writeVector(stream, obj["blocks"], (void*) &writeTLPageBlock);
    break;
    }
}

void readTLPageRelatedArticle(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1282352120:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["url"], callback);
        readInt64(stream, obj["webpage_id"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 4) readInt64(stream, obj["photo_id"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["author"], callback);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["published_date"], callback);
    break;
    }
    i = obj;
}

void writeTLPageRelatedArticle(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1282352120:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["title"].isNull()) | 
            (!obj["description"].isNull() << 1) | 
            (!obj["photo_id"].isNull() << 2) | 
            (!obj["author"].isNull() << 3) | 
            (!obj["published_date"].isNull() << 4) | 
        0), callback);
        writeString(stream, obj["url"], callback);
        writeInt64(stream, obj["webpage_id"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["description"], callback);
        if (obj["flags"].toUInt() & 4) writeInt64(stream, obj["photo_id"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["author"], callback);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["published_date"], callback);
    break;
    }
}

void readTLPage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1738178803:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["part"] = true;
        if (obj["flags"].toUInt() & 2) obj["rtl"] = true;
        if (obj["flags"].toUInt() & 4) obj["v2"] = true;
        readString(stream, obj["url"], callback);
        readVector(stream, obj["blocks"], (void*) &readTLPageBlock);
        readVector(stream, obj["photos"], (void*) &readTLPhoto);
        readVector(stream, obj["documents"], (void*) &readTLDocument);
        if (obj["flags"].toUInt() & 8) readInt32(stream, obj["views"], callback);
    break;
    }
    i = obj;
}

void writeTLPage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1738178803:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["part"].isNull()) | 
            (!obj["rtl"].isNull() << 1) | 
            (!obj["v2"].isNull() << 2) | 
            (!obj["views"].isNull() << 3) | 
        0), callback);
        writeString(stream, obj["url"], callback);
        writeVector(stream, obj["blocks"], (void*) &writeTLPageBlock);
        writeVector(stream, obj["photos"], (void*) &writeTLPhoto);
        writeVector(stream, obj["documents"], (void*) &writeTLDocument);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["views"], callback);
    break;
    }
}

void readTLHelpSupportName(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1945767479:
        obj["_"] = conId.toInt();
        readString(stream, obj["name"], callback);
    break;
    }
    i = obj;
}

void writeTLHelpSupportName(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1945767479:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["name"], callback);
    break;
    }
}

void readTLHelpUserInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -206688531:
        obj["_"] = conId.toInt();
    break;
    case 32192344:
        obj["_"] = conId.toInt();
        readString(stream, obj["message"], callback);
        readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
        readString(stream, obj["author"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    }
    i = obj;
}

void writeTLHelpUserInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -206688531:
        writeInt32(stream, obj["_"], callback);
    break;
    case 32192344:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["message"], callback);
        writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        writeString(stream, obj["author"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    }
}

void readTLPollAnswer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1823064809:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
        readByteArray(stream, obj["option"], callback);
    break;
    }
    i = obj;
}

void writeTLPollAnswer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1823064809:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
        writeByteArray(stream, obj["option"], callback);
    break;
    }
}

void readTLPoll(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2032041631:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["closed"] = true;
        if (obj["flags"].toUInt() & 2) obj["public_voters"] = true;
        if (obj["flags"].toUInt() & 4) obj["multiple_choice"] = true;
        if (obj["flags"].toUInt() & 8) obj["quiz"] = true;
        readString(stream, obj["question"], callback);
        readVector(stream, obj["answers"], (void*) &readTLPollAnswer);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["close_period"], callback);
        if (obj["flags"].toUInt() & 32) readInt32(stream, obj["close_date"], callback);
    break;
    }
    i = obj;
}

void writeTLPoll(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2032041631:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["closed"].isNull()) | 
            (!obj["public_voters"].isNull() << 1) | 
            (!obj["multiple_choice"].isNull() << 2) | 
            (!obj["quiz"].isNull() << 3) | 
            (!obj["close_period"].isNull() << 4) | 
            (!obj["close_date"].isNull() << 5) | 
        0), callback);
        writeString(stream, obj["question"], callback);
        writeVector(stream, obj["answers"], (void*) &writeTLPollAnswer);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["close_period"], callback);
        if (obj["flags"].toUInt() & 32) writeInt32(stream, obj["close_date"], callback);
    break;
    }
}

void readTLPollAnswerVoters(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 997055186:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["chosen"] = true;
        if (obj["flags"].toUInt() & 2) obj["correct"] = true;
        readByteArray(stream, obj["option"], callback);
        readInt32(stream, obj["voters"], callback);
    break;
    }
    i = obj;
}

void writeTLPollAnswerVoters(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 997055186:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["chosen"].isNull()) | 
            (!obj["correct"].isNull() << 1) | 
        0), callback);
        writeByteArray(stream, obj["option"], callback);
        writeInt32(stream, obj["voters"], callback);
    break;
    }
}

void readTLPollResults(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -591909213:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["min"] = true;
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["results"], (void*) &readTLPollAnswerVoters);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["total_voters"], callback);
        if (obj["flags"].toUInt() & 8) readVector(stream, obj["recent_voters"], (void*) &readInt64);
        if (obj["flags"].toUInt() & 16) readString(stream, obj["solution"], callback);
        if (obj["flags"].toUInt() & 16) readVector(stream, obj["solution_entities"], (void*) &readTLMessageEntity);
    break;
    }
    i = obj;
}

void writeTLPollResults(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -591909213:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["min"].isNull()) | 
            (!obj["results"].isNull() << 1) | 
            (!obj["total_voters"].isNull() << 2) | 
            (!obj["recent_voters"].isNull() << 3) | 
            (!obj["solution"].isNull() << 4) | 
            (!obj["solution_entities"].isNull() << 4) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["results"], (void*) &writeTLPollAnswerVoters);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["total_voters"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["recent_voters"], (void*) &writeInt64);
        if (obj["flags"].toUInt() & 16) writeString(stream, obj["solution"], callback);
        if (obj["flags"].toUInt() & 16) writeVector(stream, obj["solution_entities"], (void*) &writeTLMessageEntity);
    break;
    }
}

void readTLChatOnlines(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -264117680:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["onlines"], callback);
    break;
    }
    i = obj;
}

void writeTLChatOnlines(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -264117680:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["onlines"], callback);
    break;
    }
}

void readTLStatsURL(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1202287072:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
    break;
    }
    i = obj;
}

void writeTLStatsURL(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1202287072:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
    break;
    }
}

void readTLChatAdminRights(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1605510357:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["change_info"] = true;
        if (obj["flags"].toUInt() & 2) obj["post_messages"] = true;
        if (obj["flags"].toUInt() & 4) obj["edit_messages"] = true;
        if (obj["flags"].toUInt() & 8) obj["delete_messages"] = true;
        if (obj["flags"].toUInt() & 16) obj["ban_users"] = true;
        if (obj["flags"].toUInt() & 32) obj["invite_users"] = true;
        if (obj["flags"].toUInt() & 128) obj["pin_messages"] = true;
        if (obj["flags"].toUInt() & 512) obj["add_admins"] = true;
        if (obj["flags"].toUInt() & 1024) obj["anonymous"] = true;
        if (obj["flags"].toUInt() & 2048) obj["manage_call"] = true;
        if (obj["flags"].toUInt() & 4096) obj["other"] = true;
    break;
    }
    i = obj;
}

void writeTLChatAdminRights(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1605510357:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["change_info"].isNull()) | 
            (!obj["post_messages"].isNull() << 1) | 
            (!obj["edit_messages"].isNull() << 2) | 
            (!obj["delete_messages"].isNull() << 3) | 
            (!obj["ban_users"].isNull() << 4) | 
            (!obj["invite_users"].isNull() << 5) | 
            (!obj["pin_messages"].isNull() << 7) | 
            (!obj["add_admins"].isNull() << 9) | 
            (!obj["anonymous"].isNull() << 10) | 
            (!obj["manage_call"].isNull() << 11) | 
            (!obj["other"].isNull() << 12) | 
        0), callback);
    break;
    }
}

void readTLChatBannedRights(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1626209256:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["view_messages"] = true;
        if (obj["flags"].toUInt() & 2) obj["send_messages"] = true;
        if (obj["flags"].toUInt() & 4) obj["send_media"] = true;
        if (obj["flags"].toUInt() & 8) obj["send_stickers"] = true;
        if (obj["flags"].toUInt() & 16) obj["send_gifs"] = true;
        if (obj["flags"].toUInt() & 32) obj["send_games"] = true;
        if (obj["flags"].toUInt() & 64) obj["send_inline"] = true;
        if (obj["flags"].toUInt() & 128) obj["embed_links"] = true;
        if (obj["flags"].toUInt() & 256) obj["send_polls"] = true;
        if (obj["flags"].toUInt() & 1024) obj["change_info"] = true;
        if (obj["flags"].toUInt() & 32768) obj["invite_users"] = true;
        if (obj["flags"].toUInt() & 131072) obj["pin_messages"] = true;
        readInt32(stream, obj["until_date"], callback);
    break;
    }
    i = obj;
}

void writeTLChatBannedRights(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1626209256:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["view_messages"].isNull()) | 
            (!obj["send_messages"].isNull() << 1) | 
            (!obj["send_media"].isNull() << 2) | 
            (!obj["send_stickers"].isNull() << 3) | 
            (!obj["send_gifs"].isNull() << 4) | 
            (!obj["send_games"].isNull() << 5) | 
            (!obj["send_inline"].isNull() << 6) | 
            (!obj["embed_links"].isNull() << 7) | 
            (!obj["send_polls"].isNull() << 8) | 
            (!obj["change_info"].isNull() << 10) | 
            (!obj["invite_users"].isNull() << 15) | 
            (!obj["pin_messages"].isNull() << 17) | 
        0), callback);
        writeInt32(stream, obj["until_date"], callback);
    break;
    }
}

void readTLInputWallPaper(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -433014407:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case 1913199744:
        obj["_"] = conId.toInt();
        readString(stream, obj["slug"], callback);
    break;
    case -1770371538:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
    break;
    }
    i = obj;
}

void writeTLInputWallPaper(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -433014407:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case 1913199744:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["slug"], callback);
    break;
    case -1770371538:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
    break;
    }
}

void readTLAccountWallPapers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 471437699:
        obj["_"] = conId.toInt();
    break;
    case -842824308:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["hash"], callback);
        readVector(stream, obj["wallpapers"], (void*) &readTLWallPaper);
    break;
    }
    i = obj;
}

void writeTLAccountWallPapers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 471437699:
        writeInt32(stream, obj["_"], callback);
    break;
    case -842824308:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
        writeVector(stream, obj["wallpapers"], (void*) &writeTLWallPaper);
    break;
    }
}

void readTLCodeSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1973130814:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["allow_flashcall"] = true;
        if (obj["flags"].toUInt() & 2) obj["current_number"] = true;
        if (obj["flags"].toUInt() & 16) obj["allow_app_hash"] = true;
        if (obj["flags"].toUInt() & 32) obj["allow_missed_call"] = true;
        if (obj["flags"].toUInt() & 64) readVector(stream, obj["logout_tokens"], (void*) &readByteArray);
    break;
    }
    i = obj;
}

void writeTLCodeSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1973130814:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["allow_flashcall"].isNull()) | 
            (!obj["current_number"].isNull() << 1) | 
            (!obj["allow_app_hash"].isNull() << 4) | 
            (!obj["allow_missed_call"].isNull() << 5) | 
            (!obj["logout_tokens"].isNull() << 6) | 
        0), callback);
        if (obj["flags"].toUInt() & 64) writeVector(stream, obj["logout_tokens"], (void*) &writeByteArray);
    break;
    }
}

void readTLWallPaperSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 499236004:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["blur"] = true;
        if (obj["flags"].toUInt() & 4) obj["motion"] = true;
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["background_color"], callback);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["second_background_color"], callback);
        if (obj["flags"].toUInt() & 32) readInt32(stream, obj["third_background_color"], callback);
        if (obj["flags"].toUInt() & 64) readInt32(stream, obj["fourth_background_color"], callback);
        if (obj["flags"].toUInt() & 8) readInt32(stream, obj["intensity"], callback);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["rotation"], callback);
    break;
    }
    i = obj;
}

void writeTLWallPaperSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 499236004:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["blur"].isNull() << 1) | 
            (!obj["motion"].isNull() << 2) | 
            (!obj["background_color"].isNull()) | 
            (!obj["second_background_color"].isNull() << 4) | 
            (!obj["third_background_color"].isNull() << 5) | 
            (!obj["fourth_background_color"].isNull() << 6) | 
            (!obj["intensity"].isNull() << 3) | 
            (!obj["rotation"].isNull() << 4) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["background_color"], callback);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["second_background_color"], callback);
        if (obj["flags"].toUInt() & 32) writeInt32(stream, obj["third_background_color"], callback);
        if (obj["flags"].toUInt() & 64) writeInt32(stream, obj["fourth_background_color"], callback);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["intensity"], callback);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["rotation"], callback);
    break;
    }
}

void readTLAutoDownloadSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -532532493:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["disabled"] = true;
        if (obj["flags"].toUInt() & 2) obj["video_preload_large"] = true;
        if (obj["flags"].toUInt() & 4) obj["audio_preload_next"] = true;
        if (obj["flags"].toUInt() & 8) obj["phonecalls_less_data"] = true;
        readInt32(stream, obj["photo_size_max"], callback);
        readInt32(stream, obj["video_size_max"], callback);
        readInt32(stream, obj["file_size_max"], callback);
        readInt32(stream, obj["video_upload_maxbitrate"], callback);
    break;
    }
    i = obj;
}

void writeTLAutoDownloadSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -532532493:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["disabled"].isNull()) | 
            (!obj["video_preload_large"].isNull() << 1) | 
            (!obj["audio_preload_next"].isNull() << 2) | 
            (!obj["phonecalls_less_data"].isNull() << 3) | 
        0), callback);
        writeInt32(stream, obj["photo_size_max"], callback);
        writeInt32(stream, obj["video_size_max"], callback);
        writeInt32(stream, obj["file_size_max"], callback);
        writeInt32(stream, obj["video_upload_maxbitrate"], callback);
    break;
    }
}

void readTLAccountAutoDownloadSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1674235686:
        obj["_"] = conId.toInt();
        readTLAutoDownloadSettings(stream, obj["low"], callback);
        readTLAutoDownloadSettings(stream, obj["medium"], callback);
        readTLAutoDownloadSettings(stream, obj["high"], callback);
    break;
    }
    i = obj;
}

void writeTLAccountAutoDownloadSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1674235686:
        writeInt32(stream, obj["_"], callback);
        writeTLAutoDownloadSettings(stream, obj["low"], callback);
        writeTLAutoDownloadSettings(stream, obj["medium"], callback);
        writeTLAutoDownloadSettings(stream, obj["high"], callback);
    break;
    }
}

void readTLEmojiKeyword(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -709641735:
        obj["_"] = conId.toInt();
        readString(stream, obj["keyword"], callback);
        readVector(stream, obj["emoticons"], (void*) &readString);
    break;
    case 594408994:
        obj["_"] = conId.toInt();
        readString(stream, obj["keyword"], callback);
        readVector(stream, obj["emoticons"], (void*) &readString);
    break;
    }
    i = obj;
}

void writeTLEmojiKeyword(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -709641735:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["keyword"], callback);
        writeVector(stream, obj["emoticons"], (void*) &writeString);
    break;
    case 594408994:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["keyword"], callback);
        writeVector(stream, obj["emoticons"], (void*) &writeString);
    break;
    }
}

void readTLEmojiKeywordsDifference(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1556570557:
        obj["_"] = conId.toInt();
        readString(stream, obj["lang_code"], callback);
        readInt32(stream, obj["from_version"], callback);
        readInt32(stream, obj["version"], callback);
        readVector(stream, obj["keywords"], (void*) &readTLEmojiKeyword);
    break;
    }
    i = obj;
}

void writeTLEmojiKeywordsDifference(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1556570557:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_code"], callback);
        writeInt32(stream, obj["from_version"], callback);
        writeInt32(stream, obj["version"], callback);
        writeVector(stream, obj["keywords"], (void*) &writeTLEmojiKeyword);
    break;
    }
}

void readTLEmojiURL(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1519029347:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
    break;
    }
    i = obj;
}

void writeTLEmojiURL(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1519029347:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
    break;
    }
}

void readTLEmojiLanguage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1275374751:
        obj["_"] = conId.toInt();
        readString(stream, obj["lang_code"], callback);
    break;
    }
    i = obj;
}

void writeTLEmojiLanguage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1275374751:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_code"], callback);
    break;
    }
}

void readTLFolder(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -11252123:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["autofill_new_broadcasts"] = true;
        if (obj["flags"].toUInt() & 2) obj["autofill_public_groups"] = true;
        if (obj["flags"].toUInt() & 4) obj["autofill_new_correspondents"] = true;
        readInt32(stream, obj["id"], callback);
        readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 8) readTLChatPhoto(stream, obj["photo"], callback);
    break;
    }
    i = obj;
}

void writeTLFolder(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -11252123:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["autofill_new_broadcasts"].isNull()) | 
            (!obj["autofill_public_groups"].isNull() << 1) | 
            (!obj["autofill_new_correspondents"].isNull() << 2) | 
            (!obj["photo"].isNull() << 3) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 8) writeTLChatPhoto(stream, obj["photo"], callback);
    break;
    }
}

void readTLInputFolderPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -70073706:
        obj["_"] = conId.toInt();
        readTLInputPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["folder_id"], callback);
    break;
    }
    i = obj;
}

void writeTLInputFolderPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -70073706:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["folder_id"], callback);
    break;
    }
}

void readTLFolderPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -373643672:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["folder_id"], callback);
    break;
    }
    i = obj;
}

void writeTLFolderPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -373643672:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["folder_id"], callback);
    break;
    }
}

void readTLMessagesSearchCounter(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -398136321:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["inexact"] = true;
        readTLMessagesFilter(stream, obj["filter"], callback);
        readInt32(stream, obj["count"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesSearchCounter(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -398136321:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["inexact"].isNull() << 1) | 
        0), callback);
        writeTLMessagesFilter(stream, obj["filter"], callback);
        writeInt32(stream, obj["count"], callback);
    break;
    }
}

void readTLUrlAuthResult(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1831650802:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["request_write_access"] = true;
        readTLUser(stream, obj["bot"], callback);
        readString(stream, obj["domain"], callback);
    break;
    case -1886646706:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
    break;
    case -1445536993:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLUrlAuthResult(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1831650802:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["request_write_access"].isNull()) | 
        0), callback);
        writeTLUser(stream, obj["bot"], callback);
        writeString(stream, obj["domain"], callback);
    break;
    case -1886646706:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
    break;
    case -1445536993:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLChannelLocation(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1078612597:
        obj["_"] = conId.toInt();
    break;
    case 547062491:
        obj["_"] = conId.toInt();
        readTLGeoPoint(stream, obj["geo_point"], callback);
        readString(stream, obj["address"], callback);
    break;
    }
    i = obj;
}

void writeTLChannelLocation(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1078612597:
        writeInt32(stream, obj["_"], callback);
    break;
    case 547062491:
        writeInt32(stream, obj["_"], callback);
        writeTLGeoPoint(stream, obj["geo_point"], callback);
        writeString(stream, obj["address"], callback);
    break;
    }
}

void readTLPeerLocated(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -901375139:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["expires"], callback);
        readInt32(stream, obj["distance"], callback);
    break;
    case -118740917:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["expires"], callback);
    break;
    }
    i = obj;
}

void writeTLPeerLocated(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -901375139:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["expires"], callback);
        writeInt32(stream, obj["distance"], callback);
    break;
    case -118740917:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["expires"], callback);
    break;
    }
}

void readTLRestrictionReason(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -797791052:
        obj["_"] = conId.toInt();
        readString(stream, obj["platform"], callback);
        readString(stream, obj["reason"], callback);
        readString(stream, obj["text"], callback);
    break;
    }
    i = obj;
}

void writeTLRestrictionReason(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -797791052:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["platform"], callback);
        writeString(stream, obj["reason"], callback);
        writeString(stream, obj["text"], callback);
    break;
    }
}

void readTLInputTheme(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1012306921:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    case -175567375:
        obj["_"] = conId.toInt();
        readString(stream, obj["slug"], callback);
    break;
    }
    i = obj;
}

void writeTLInputTheme(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1012306921:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    case -175567375:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["slug"], callback);
    break;
    }
}

void readTLTheme(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1609668650:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["creator"] = true;
        if (obj["flags"].toUInt() & 2) obj["default"] = true;
        if (obj["flags"].toUInt() & 32) obj["for_chat"] = true;
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readString(stream, obj["slug"], callback);
        readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) readTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 8) readVector(stream, obj["settings"], (void*) &readTLThemeSettings);
        if (obj["flags"].toUInt() & 64) readString(stream, obj["emoticon"], callback);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["installs_count"], callback);
    break;
    }
    i = obj;
}

void writeTLTheme(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1609668650:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["creator"].isNull()) | 
            (!obj["default"].isNull() << 1) | 
            (!obj["for_chat"].isNull() << 5) | 
            (!obj["document"].isNull() << 2) | 
            (!obj["settings"].isNull() << 3) | 
            (!obj["emoticon"].isNull() << 6) | 
            (!obj["installs_count"].isNull() << 4) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeString(stream, obj["slug"], callback);
        writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) writeTLDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["settings"], (void*) &writeTLThemeSettings);
        if (obj["flags"].toUInt() & 64) writeString(stream, obj["emoticon"], callback);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["installs_count"], callback);
    break;
    }
}

void readTLAccountThemes(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -199313886:
        obj["_"] = conId.toInt();
    break;
    case -1707242387:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["hash"], callback);
        readVector(stream, obj["themes"], (void*) &readTLTheme);
    break;
    }
    i = obj;
}

void writeTLAccountThemes(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -199313886:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1707242387:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
        writeVector(stream, obj["themes"], (void*) &writeTLTheme);
    break;
    }
}

void readTLAuthLoginToken(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1654593920:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["expires"], callback);
        readByteArray(stream, obj["token"], callback);
    break;
    case 110008598:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["dc_id"], callback);
        readByteArray(stream, obj["token"], callback);
    break;
    case 957176926:
        obj["_"] = conId.toInt();
        readTLAuthAuthorization(stream, obj["authorization"], callback);
    break;
    }
    i = obj;
}

void writeTLAuthLoginToken(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1654593920:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["expires"], callback);
        writeByteArray(stream, obj["token"], callback);
    break;
    case 110008598:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["dc_id"], callback);
        writeByteArray(stream, obj["token"], callback);
    break;
    case 957176926:
        writeInt32(stream, obj["_"], callback);
        writeTLAuthAuthorization(stream, obj["authorization"], callback);
    break;
    }
}

void readTLAccountContentSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1474462241:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["sensitive_enabled"] = true;
        if (obj["flags"].toUInt() & 2) obj["sensitive_can_change"] = true;
    break;
    }
    i = obj;
}

void writeTLAccountContentSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1474462241:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["sensitive_enabled"].isNull()) | 
            (!obj["sensitive_can_change"].isNull() << 1) | 
        0), callback);
    break;
    }
}

void readTLMessagesInactiveChats(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1456996667:
        obj["_"] = conId.toInt();
        readVector(stream, obj["dates"], (void*) &readInt32);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesInactiveChats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1456996667:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["dates"], (void*) &writeInt32);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLBaseTheme(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1012849566:
        obj["_"] = conId.toInt();
    break;
    case -69724536:
        obj["_"] = conId.toInt();
    break;
    case -1212997976:
        obj["_"] = conId.toInt();
    break;
    case 1834973166:
        obj["_"] = conId.toInt();
    break;
    case 1527845466:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLBaseTheme(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1012849566:
        writeInt32(stream, obj["_"], callback);
    break;
    case -69724536:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1212997976:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1834973166:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1527845466:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLInputThemeSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1881255857:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 4) obj["message_colors_animated"] = true;
        readTLBaseTheme(stream, obj["base_theme"], callback);
        readInt32(stream, obj["accent_color"], callback);
        if (obj["flags"].toUInt() & 8) readInt32(stream, obj["outbox_accent_color"], callback);
        if (obj["flags"].toUInt() & 1) readVector(stream, obj["message_colors"], (void*) &readInt32);
        if (obj["flags"].toUInt() & 2) readTLInputWallPaper(stream, obj["wallpaper"], callback);
        if (obj["flags"].toUInt() & 2) readTLWallPaperSettings(stream, obj["wallpaper_settings"], callback);
    break;
    }
    i = obj;
}

void writeTLInputThemeSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1881255857:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["message_colors_animated"].isNull() << 2) | 
            (!obj["outbox_accent_color"].isNull() << 3) | 
            (!obj["message_colors"].isNull()) | 
            (!obj["wallpaper"].isNull() << 1) | 
            (!obj["wallpaper_settings"].isNull() << 1) | 
        0), callback);
        writeTLBaseTheme(stream, obj["base_theme"], callback);
        writeInt32(stream, obj["accent_color"], callback);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["outbox_accent_color"], callback);
        if (obj["flags"].toUInt() & 1) writeVector(stream, obj["message_colors"], (void*) &writeInt32);
        if (obj["flags"].toUInt() & 2) writeTLInputWallPaper(stream, obj["wallpaper"], callback);
        if (obj["flags"].toUInt() & 2) writeTLWallPaperSettings(stream, obj["wallpaper_settings"], callback);
    break;
    }
}

void readTLThemeSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -94849324:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 4) obj["message_colors_animated"] = true;
        readTLBaseTheme(stream, obj["base_theme"], callback);
        readInt32(stream, obj["accent_color"], callback);
        if (obj["flags"].toUInt() & 8) readInt32(stream, obj["outbox_accent_color"], callback);
        if (obj["flags"].toUInt() & 1) readVector(stream, obj["message_colors"], (void*) &readInt32);
        if (obj["flags"].toUInt() & 2) readTLWallPaper(stream, obj["wallpaper"], callback);
    break;
    }
    i = obj;
}

void writeTLThemeSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -94849324:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["message_colors_animated"].isNull() << 2) | 
            (!obj["outbox_accent_color"].isNull() << 3) | 
            (!obj["message_colors"].isNull()) | 
            (!obj["wallpaper"].isNull() << 1) | 
        0), callback);
        writeTLBaseTheme(stream, obj["base_theme"], callback);
        writeInt32(stream, obj["accent_color"], callback);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["outbox_accent_color"], callback);
        if (obj["flags"].toUInt() & 1) writeVector(stream, obj["message_colors"], (void*) &writeInt32);
        if (obj["flags"].toUInt() & 2) writeTLWallPaper(stream, obj["wallpaper"], callback);
    break;
    }
}

void readTLWebPageAttribute(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1421174295:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readVector(stream, obj["documents"], (void*) &readTLDocument);
        if (obj["flags"].toUInt() & 2) readTLThemeSettings(stream, obj["settings"], callback);
    break;
    }
    i = obj;
}

void writeTLWebPageAttribute(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1421174295:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["documents"].isNull()) | 
            (!obj["settings"].isNull() << 1) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeVector(stream, obj["documents"], (void*) &writeTLDocument);
        if (obj["flags"].toUInt() & 2) writeTLThemeSettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMessageUserVote(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 886196148:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readByteArray(stream, obj["option"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    case 1017491692:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    case -1973033641:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readVector(stream, obj["options"], (void*) &readByteArray);
        readInt32(stream, obj["date"], callback);
    break;
    }
    i = obj;
}

void writeTLMessageUserVote(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 886196148:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeByteArray(stream, obj["option"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    case 1017491692:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    case -1973033641:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeVector(stream, obj["options"], (void*) &writeByteArray);
        writeInt32(stream, obj["date"], callback);
    break;
    }
}

void readTLMessagesVotesList(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 136574537:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["votes"], (void*) &readTLMessageUserVote);
        readVector(stream, obj["users"], (void*) &readTLUser);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["next_offset"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesVotesList(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 136574537:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["next_offset"].isNull()) | 
        0), callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["votes"], (void*) &writeTLMessageUserVote);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["next_offset"], callback);
    break;
    }
}

void readTLBankCardOpenUrl(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -177732982:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readString(stream, obj["name"], callback);
    break;
    }
    i = obj;
}

void writeTLBankCardOpenUrl(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -177732982:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeString(stream, obj["name"], callback);
    break;
    }
}

void readTLPaymentsBankCardData(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1042605427:
        obj["_"] = conId.toInt();
        readString(stream, obj["title"], callback);
        readVector(stream, obj["open_urls"], (void*) &readTLBankCardOpenUrl);
    break;
    }
    i = obj;
}

void writeTLPaymentsBankCardData(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1042605427:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["title"], callback);
        writeVector(stream, obj["open_urls"], (void*) &writeTLBankCardOpenUrl);
    break;
    }
}

void readTLDialogFilter(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1949890536:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["contacts"] = true;
        if (obj["flags"].toUInt() & 2) obj["non_contacts"] = true;
        if (obj["flags"].toUInt() & 4) obj["groups"] = true;
        if (obj["flags"].toUInt() & 8) obj["broadcasts"] = true;
        if (obj["flags"].toUInt() & 16) obj["bots"] = true;
        if (obj["flags"].toUInt() & 2048) obj["exclude_muted"] = true;
        if (obj["flags"].toUInt() & 4096) obj["exclude_read"] = true;
        if (obj["flags"].toUInt() & 8192) obj["exclude_archived"] = true;
        readInt32(stream, obj["id"], callback);
        readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 33554432) readString(stream, obj["emoticon"], callback);
        readVector(stream, obj["pinned_peers"], (void*) &readTLInputPeer);
        readVector(stream, obj["include_peers"], (void*) &readTLInputPeer);
        readVector(stream, obj["exclude_peers"], (void*) &readTLInputPeer);
    break;
    }
    i = obj;
}

void writeTLDialogFilter(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1949890536:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["contacts"].isNull()) | 
            (!obj["non_contacts"].isNull() << 1) | 
            (!obj["groups"].isNull() << 2) | 
            (!obj["broadcasts"].isNull() << 3) | 
            (!obj["bots"].isNull() << 4) | 
            (!obj["exclude_muted"].isNull() << 11) | 
            (!obj["exclude_read"].isNull() << 12) | 
            (!obj["exclude_archived"].isNull() << 13) | 
            (!obj["emoticon"].isNull() << 25) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 33554432) writeString(stream, obj["emoticon"], callback);
        writeVector(stream, obj["pinned_peers"], (void*) &writeTLInputPeer);
        writeVector(stream, obj["include_peers"], (void*) &writeTLInputPeer);
        writeVector(stream, obj["exclude_peers"], (void*) &writeTLInputPeer);
    break;
    }
}

void readTLDialogFilterSuggested(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2004110666:
        obj["_"] = conId.toInt();
        readTLDialogFilter(stream, obj["filter"], callback);
        readString(stream, obj["description"], callback);
    break;
    }
    i = obj;
}

void writeTLDialogFilterSuggested(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2004110666:
        writeInt32(stream, obj["_"], callback);
        writeTLDialogFilter(stream, obj["filter"], callback);
        writeString(stream, obj["description"], callback);
    break;
    }
}

void readTLStatsDateRangeDays(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1237848657:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["min_date"], callback);
        readInt32(stream, obj["max_date"], callback);
    break;
    }
    i = obj;
}

void writeTLStatsDateRangeDays(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1237848657:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["min_date"], callback);
        writeInt32(stream, obj["max_date"], callback);
    break;
    }
}

void readTLStatsAbsValueAndPrev(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -884757282:
        obj["_"] = conId.toInt();
        readDouble(stream, obj["current"], callback);
        readDouble(stream, obj["previous"], callback);
    break;
    }
    i = obj;
}

void writeTLStatsAbsValueAndPrev(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -884757282:
        writeInt32(stream, obj["_"], callback);
        writeDouble(stream, obj["current"], callback);
        writeDouble(stream, obj["previous"], callback);
    break;
    }
}

void readTLStatsPercentValue(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -875679776:
        obj["_"] = conId.toInt();
        readDouble(stream, obj["part"], callback);
        readDouble(stream, obj["total"], callback);
    break;
    }
    i = obj;
}

void writeTLStatsPercentValue(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -875679776:
        writeInt32(stream, obj["_"], callback);
        writeDouble(stream, obj["part"], callback);
        writeDouble(stream, obj["total"], callback);
    break;
    }
}

void readTLStatsGraph(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1244130093:
        obj["_"] = conId.toInt();
        readString(stream, obj["token"], callback);
    break;
    case -1092839390:
        obj["_"] = conId.toInt();
        readString(stream, obj["error"], callback);
    break;
    case -1901828938:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readTLDataJSON(stream, obj["json"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["zoom_token"], callback);
    break;
    }
    i = obj;
}

void writeTLStatsGraph(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1244130093:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["token"], callback);
    break;
    case -1092839390:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["error"], callback);
    break;
    case -1901828938:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["zoom_token"].isNull()) | 
        0), callback);
        writeTLDataJSON(stream, obj["json"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["zoom_token"], callback);
    break;
    }
}

void readTLMessageInteractionCounters(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1387279939:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["msg_id"], callback);
        readInt32(stream, obj["views"], callback);
        readInt32(stream, obj["forwards"], callback);
    break;
    }
    i = obj;
}

void writeTLMessageInteractionCounters(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1387279939:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeInt32(stream, obj["views"], callback);
        writeInt32(stream, obj["forwards"], callback);
    break;
    }
}

void readTLStatsBroadcastStats(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1107852396:
        obj["_"] = conId.toInt();
        readTLStatsDateRangeDays(stream, obj["period"], callback);
        readTLStatsAbsValueAndPrev(stream, obj["followers"], callback);
        readTLStatsAbsValueAndPrev(stream, obj["views_per_post"], callback);
        readTLStatsAbsValueAndPrev(stream, obj["shares_per_post"], callback);
        readTLStatsPercentValue(stream, obj["enabled_notifications"], callback);
        readTLStatsGraph(stream, obj["growth_graph"], callback);
        readTLStatsGraph(stream, obj["followers_graph"], callback);
        readTLStatsGraph(stream, obj["mute_graph"], callback);
        readTLStatsGraph(stream, obj["top_hours_graph"], callback);
        readTLStatsGraph(stream, obj["interactions_graph"], callback);
        readTLStatsGraph(stream, obj["iv_interactions_graph"], callback);
        readTLStatsGraph(stream, obj["views_by_source_graph"], callback);
        readTLStatsGraph(stream, obj["new_followers_by_source_graph"], callback);
        readTLStatsGraph(stream, obj["languages_graph"], callback);
        readVector(stream, obj["recent_message_interactions"], (void*) &readTLMessageInteractionCounters);
    break;
    }
    i = obj;
}

void writeTLStatsBroadcastStats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1107852396:
        writeInt32(stream, obj["_"], callback);
        writeTLStatsDateRangeDays(stream, obj["period"], callback);
        writeTLStatsAbsValueAndPrev(stream, obj["followers"], callback);
        writeTLStatsAbsValueAndPrev(stream, obj["views_per_post"], callback);
        writeTLStatsAbsValueAndPrev(stream, obj["shares_per_post"], callback);
        writeTLStatsPercentValue(stream, obj["enabled_notifications"], callback);
        writeTLStatsGraph(stream, obj["growth_graph"], callback);
        writeTLStatsGraph(stream, obj["followers_graph"], callback);
        writeTLStatsGraph(stream, obj["mute_graph"], callback);
        writeTLStatsGraph(stream, obj["top_hours_graph"], callback);
        writeTLStatsGraph(stream, obj["interactions_graph"], callback);
        writeTLStatsGraph(stream, obj["iv_interactions_graph"], callback);
        writeTLStatsGraph(stream, obj["views_by_source_graph"], callback);
        writeTLStatsGraph(stream, obj["new_followers_by_source_graph"], callback);
        writeTLStatsGraph(stream, obj["languages_graph"], callback);
        writeVector(stream, obj["recent_message_interactions"], (void*) &writeTLMessageInteractionCounters);
    break;
    }
}

void readTLHelpPromoData(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1728664459:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["expires"], callback);
    break;
    case -1942390465:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["proxy"] = true;
        readInt32(stream, obj["expires"], callback);
        readTLPeer(stream, obj["peer"], callback);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["psa_type"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["psa_message"], callback);
    break;
    }
    i = obj;
}

void writeTLHelpPromoData(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1728664459:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["expires"], callback);
    break;
    case -1942390465:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["proxy"].isNull()) | 
            (!obj["psa_type"].isNull() << 1) | 
            (!obj["psa_message"].isNull() << 2) | 
        0), callback);
        writeInt32(stream, obj["expires"], callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["psa_type"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["psa_message"], callback);
    break;
    }
}

void readTLVideoSize(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -567037804:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["type"], callback);
        readInt32(stream, obj["w"], callback);
        readInt32(stream, obj["h"], callback);
        readInt32(stream, obj["size"], callback);
        if (obj["flags"].toUInt() & 1) readDouble(stream, obj["video_start_ts"], callback);
    break;
    }
    i = obj;
}

void writeTLVideoSize(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -567037804:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["video_start_ts"].isNull()) | 
        0), callback);
        writeString(stream, obj["type"], callback);
        writeInt32(stream, obj["w"], callback);
        writeInt32(stream, obj["h"], callback);
        writeInt32(stream, obj["size"], callback);
        if (obj["flags"].toUInt() & 1) writeDouble(stream, obj["video_start_ts"], callback);
    break;
    }
}

void readTLStatsGroupTopPoster(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1660637285:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt32(stream, obj["messages"], callback);
        readInt32(stream, obj["avg_chars"], callback);
    break;
    }
    i = obj;
}

void writeTLStatsGroupTopPoster(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1660637285:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt32(stream, obj["messages"], callback);
        writeInt32(stream, obj["avg_chars"], callback);
    break;
    }
}

void readTLStatsGroupTopAdmin(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -682079097:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt32(stream, obj["deleted"], callback);
        readInt32(stream, obj["kicked"], callback);
        readInt32(stream, obj["banned"], callback);
    break;
    }
    i = obj;
}

void writeTLStatsGroupTopAdmin(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -682079097:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt32(stream, obj["deleted"], callback);
        writeInt32(stream, obj["kicked"], callback);
        writeInt32(stream, obj["banned"], callback);
    break;
    }
}

void readTLStatsGroupTopInviter(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1398765469:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["user_id"], callback);
        readInt32(stream, obj["invitations"], callback);
    break;
    }
    i = obj;
}

void writeTLStatsGroupTopInviter(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1398765469:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt32(stream, obj["invitations"], callback);
    break;
    }
}

void readTLStatsMegagroupStats(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -276825834:
        obj["_"] = conId.toInt();
        readTLStatsDateRangeDays(stream, obj["period"], callback);
        readTLStatsAbsValueAndPrev(stream, obj["members"], callback);
        readTLStatsAbsValueAndPrev(stream, obj["messages"], callback);
        readTLStatsAbsValueAndPrev(stream, obj["viewers"], callback);
        readTLStatsAbsValueAndPrev(stream, obj["posters"], callback);
        readTLStatsGraph(stream, obj["growth_graph"], callback);
        readTLStatsGraph(stream, obj["members_graph"], callback);
        readTLStatsGraph(stream, obj["new_members_by_source_graph"], callback);
        readTLStatsGraph(stream, obj["languages_graph"], callback);
        readTLStatsGraph(stream, obj["messages_graph"], callback);
        readTLStatsGraph(stream, obj["actions_graph"], callback);
        readTLStatsGraph(stream, obj["top_hours_graph"], callback);
        readTLStatsGraph(stream, obj["weekdays_graph"], callback);
        readVector(stream, obj["top_posters"], (void*) &readTLStatsGroupTopPoster);
        readVector(stream, obj["top_admins"], (void*) &readTLStatsGroupTopAdmin);
        readVector(stream, obj["top_inviters"], (void*) &readTLStatsGroupTopInviter);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLStatsMegagroupStats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -276825834:
        writeInt32(stream, obj["_"], callback);
        writeTLStatsDateRangeDays(stream, obj["period"], callback);
        writeTLStatsAbsValueAndPrev(stream, obj["members"], callback);
        writeTLStatsAbsValueAndPrev(stream, obj["messages"], callback);
        writeTLStatsAbsValueAndPrev(stream, obj["viewers"], callback);
        writeTLStatsAbsValueAndPrev(stream, obj["posters"], callback);
        writeTLStatsGraph(stream, obj["growth_graph"], callback);
        writeTLStatsGraph(stream, obj["members_graph"], callback);
        writeTLStatsGraph(stream, obj["new_members_by_source_graph"], callback);
        writeTLStatsGraph(stream, obj["languages_graph"], callback);
        writeTLStatsGraph(stream, obj["messages_graph"], callback);
        writeTLStatsGraph(stream, obj["actions_graph"], callback);
        writeTLStatsGraph(stream, obj["top_hours_graph"], callback);
        writeTLStatsGraph(stream, obj["weekdays_graph"], callback);
        writeVector(stream, obj["top_posters"], (void*) &writeTLStatsGroupTopPoster);
        writeVector(stream, obj["top_admins"], (void*) &writeTLStatsGroupTopAdmin);
        writeVector(stream, obj["top_inviters"], (void*) &writeTLStatsGroupTopInviter);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLGlobalPrivacySettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1096616924:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readBool(stream, obj["archive_and_mute_new_noncontact_peers"], callback);
    break;
    }
    i = obj;
}

void writeTLGlobalPrivacySettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1096616924:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["archive_and_mute_new_noncontact_peers"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeBool(stream, obj["archive_and_mute_new_noncontact_peers"], callback);
    break;
    }
}

void readTLHelpCountryCode(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1107543535:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readString(stream, obj["country_code"], callback);
        if (obj["flags"].toUInt() & 1) readVector(stream, obj["prefixes"], (void*) &readString);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["patterns"], (void*) &readString);
    break;
    }
    i = obj;
}

void writeTLHelpCountryCode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1107543535:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["prefixes"].isNull()) | 
            (!obj["patterns"].isNull() << 1) | 
        0), callback);
        writeString(stream, obj["country_code"], callback);
        if (obj["flags"].toUInt() & 1) writeVector(stream, obj["prefixes"], (void*) &writeString);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["patterns"], (void*) &writeString);
    break;
    }
}

void readTLHelpCountry(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1014526429:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["hidden"] = true;
        readString(stream, obj["iso2"], callback);
        readString(stream, obj["default_name"], callback);
        if (obj["flags"].toUInt() & 2) readString(stream, obj["name"], callback);
        readVector(stream, obj["country_codes"], (void*) &readTLHelpCountryCode);
    break;
    }
    i = obj;
}

void writeTLHelpCountry(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1014526429:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["hidden"].isNull()) | 
            (!obj["name"].isNull() << 1) | 
        0), callback);
        writeString(stream, obj["iso2"], callback);
        writeString(stream, obj["default_name"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["name"], callback);
        writeVector(stream, obj["country_codes"], (void*) &writeTLHelpCountryCode);
    break;
    }
}

void readTLHelpCountriesList(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1815339214:
        obj["_"] = conId.toInt();
    break;
    case -2016381538:
        obj["_"] = conId.toInt();
        readVector(stream, obj["countries"], (void*) &readTLHelpCountry);
        readInt32(stream, obj["hash"], callback);
    break;
    }
    i = obj;
}

void writeTLHelpCountriesList(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1815339214:
        writeInt32(stream, obj["_"], callback);
    break;
    case -2016381538:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["countries"], (void*) &writeTLHelpCountry);
        writeInt32(stream, obj["hash"], callback);
    break;
    }
}

void readTLMessageViews(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1163625789:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["views"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["forwards"], callback);
        if (obj["flags"].toUInt() & 4) readTLMessageReplies(stream, obj["replies"], callback);
    break;
    }
    i = obj;
}

void writeTLMessageViews(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1163625789:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["views"].isNull()) | 
            (!obj["forwards"].isNull() << 1) | 
            (!obj["replies"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["views"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["forwards"], callback);
        if (obj["flags"].toUInt() & 4) writeTLMessageReplies(stream, obj["replies"], callback);
    break;
    }
}

void readTLMessagesMessageViews(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1228606141:
        obj["_"] = conId.toInt();
        readVector(stream, obj["views"], (void*) &readTLMessageViews);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesMessageViews(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1228606141:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["views"], (void*) &writeTLMessageViews);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLMessagesDiscussionMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1506535550:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readVector(stream, obj["messages"], (void*) &readTLMessage);
        if (obj["flags"].toUInt() & 1) readInt32(stream, obj["max_id"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["read_inbox_max_id"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["read_outbox_max_id"], callback);
        readInt32(stream, obj["unread_count"], callback);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesDiscussionMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1506535550:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["max_id"].isNull()) | 
            (!obj["read_inbox_max_id"].isNull() << 1) | 
            (!obj["read_outbox_max_id"].isNull() << 2) | 
        0), callback);
        writeVector(stream, obj["messages"], (void*) &writeTLMessage);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["max_id"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["read_inbox_max_id"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["read_outbox_max_id"], callback);
        writeInt32(stream, obj["unread_count"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLMessageReplyHeader(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1495959709:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt32(stream, obj["reply_to_msg_id"], callback);
        if (obj["flags"].toUInt() & 1) readTLPeer(stream, obj["reply_to_peer_id"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["reply_to_top_id"], callback);
    break;
    }
    i = obj;
}

void writeTLMessageReplyHeader(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1495959709:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["reply_to_peer_id"].isNull()) | 
            (!obj["reply_to_top_id"].isNull() << 1) | 
        0), callback);
        writeInt32(stream, obj["reply_to_msg_id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLPeer(stream, obj["reply_to_peer_id"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["reply_to_top_id"], callback);
    break;
    }
}

void readTLMessageReplies(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2083123262:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["comments"] = true;
        readInt32(stream, obj["replies"], callback);
        readInt32(stream, obj["replies_pts"], callback);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["recent_repliers"], (void*) &readTLPeer);
        if (obj["flags"].toUInt() & 1) readInt64(stream, obj["channel_id"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["max_id"], callback);
        if (obj["flags"].toUInt() & 8) readInt32(stream, obj["read_max_id"], callback);
    break;
    }
    i = obj;
}

void writeTLMessageReplies(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2083123262:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["comments"].isNull()) | 
            (!obj["recent_repliers"].isNull() << 1) | 
            (!obj["channel_id"].isNull()) | 
            (!obj["max_id"].isNull() << 2) | 
            (!obj["read_max_id"].isNull() << 3) | 
        0), callback);
        writeInt32(stream, obj["replies"], callback);
        writeInt32(stream, obj["replies_pts"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["recent_repliers"], (void*) &writeTLPeer);
        if (obj["flags"].toUInt() & 1) writeInt64(stream, obj["channel_id"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["max_id"], callback);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["read_max_id"], callback);
    break;
    }
}

void readTLPeerBlocked(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -386039788:
        obj["_"] = conId.toInt();
        readTLPeer(stream, obj["peer_id"], callback);
        readInt32(stream, obj["date"], callback);
    break;
    }
    i = obj;
}

void writeTLPeerBlocked(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -386039788:
        writeInt32(stream, obj["_"], callback);
        writeTLPeer(stream, obj["peer_id"], callback);
        writeInt32(stream, obj["date"], callback);
    break;
    }
}

void readTLStatsMessageStats(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1986399595:
        obj["_"] = conId.toInt();
        readTLStatsGraph(stream, obj["views_graph"], callback);
    break;
    }
    i = obj;
}

void writeTLStatsMessageStats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1986399595:
        writeInt32(stream, obj["_"], callback);
        writeTLStatsGraph(stream, obj["views_graph"], callback);
    break;
    }
}

void readTLGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2004925620:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["duration"], callback);
    break;
    case -711498484:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 2) obj["join_muted"] = true;
        if (obj["flags"].toUInt() & 4) obj["can_change_join_muted"] = true;
        if (obj["flags"].toUInt() & 64) obj["join_date_asc"] = true;
        if (obj["flags"].toUInt() & 256) obj["schedule_start_subscribed"] = true;
        if (obj["flags"].toUInt() & 512) obj["can_start_video"] = true;
        if (obj["flags"].toUInt() & 2048) obj["record_video_active"] = true;
        if (obj["flags"].toUInt() & 4096) obj["rtmp_stream"] = true;
        if (obj["flags"].toUInt() & 8192) obj["listeners_hidden"] = true;
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
        readInt32(stream, obj["participants_count"], callback);
        if (obj["flags"].toUInt() & 8) readString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 16) readInt32(stream, obj["stream_dc_id"], callback);
        if (obj["flags"].toUInt() & 32) readInt32(stream, obj["record_start_date"], callback);
        if (obj["flags"].toUInt() & 128) readInt32(stream, obj["schedule_date"], callback);
        if (obj["flags"].toUInt() & 1024) readInt32(stream, obj["unmuted_video_count"], callback);
        readInt32(stream, obj["unmuted_video_limit"], callback);
        readInt32(stream, obj["version"], callback);
    break;
    }
    i = obj;
}

void writeTLGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2004925620:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["duration"], callback);
    break;
    case -711498484:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["join_muted"].isNull() << 1) | 
            (!obj["can_change_join_muted"].isNull() << 2) | 
            (!obj["join_date_asc"].isNull() << 6) | 
            (!obj["schedule_start_subscribed"].isNull() << 8) | 
            (!obj["can_start_video"].isNull() << 9) | 
            (!obj["record_video_active"].isNull() << 11) | 
            (!obj["rtmp_stream"].isNull() << 12) | 
            (!obj["listeners_hidden"].isNull() << 13) | 
            (!obj["title"].isNull() << 3) | 
            (!obj["stream_dc_id"].isNull() << 4) | 
            (!obj["record_start_date"].isNull() << 5) | 
            (!obj["schedule_date"].isNull() << 7) | 
            (!obj["unmuted_video_count"].isNull() << 10) | 
        0), callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
        writeInt32(stream, obj["participants_count"], callback);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 16) writeInt32(stream, obj["stream_dc_id"], callback);
        if (obj["flags"].toUInt() & 32) writeInt32(stream, obj["record_start_date"], callback);
        if (obj["flags"].toUInt() & 128) writeInt32(stream, obj["schedule_date"], callback);
        if (obj["flags"].toUInt() & 1024) writeInt32(stream, obj["unmuted_video_count"], callback);
        writeInt32(stream, obj["unmuted_video_limit"], callback);
        writeInt32(stream, obj["version"], callback);
    break;
    }
}

void readTLInputGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -659913713:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
        readInt64(stream, obj["access_hash"], callback);
    break;
    }
    i = obj;
}

void writeTLInputGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -659913713:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeInt64(stream, obj["access_hash"], callback);
    break;
    }
}

void readTLGroupCallParticipant(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -341428482:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["muted"] = true;
        if (obj["flags"].toUInt() & 2) obj["left"] = true;
        if (obj["flags"].toUInt() & 4) obj["can_self_unmute"] = true;
        if (obj["flags"].toUInt() & 16) obj["just_joined"] = true;
        if (obj["flags"].toUInt() & 32) obj["versioned"] = true;
        if (obj["flags"].toUInt() & 256) obj["min"] = true;
        if (obj["flags"].toUInt() & 512) obj["muted_by_you"] = true;
        if (obj["flags"].toUInt() & 1024) obj["volume_by_admin"] = true;
        if (obj["flags"].toUInt() & 4096) obj["self"] = true;
        if (obj["flags"].toUInt() & 32768) obj["video_joined"] = true;
        readTLPeer(stream, obj["peer"], callback);
        readInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 8) readInt32(stream, obj["active_date"], callback);
        readInt32(stream, obj["source"], callback);
        if (obj["flags"].toUInt() & 128) readInt32(stream, obj["volume"], callback);
        if (obj["flags"].toUInt() & 2048) readString(stream, obj["about"], callback);
        if (obj["flags"].toUInt() & 8192) readInt64(stream, obj["raise_hand_rating"], callback);
        if (obj["flags"].toUInt() & 64) readTLGroupCallParticipantVideo(stream, obj["video"], callback);
        if (obj["flags"].toUInt() & 16384) readTLGroupCallParticipantVideo(stream, obj["presentation"], callback);
    break;
    }
    i = obj;
}

void writeTLGroupCallParticipant(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -341428482:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["muted"].isNull()) | 
            (!obj["left"].isNull() << 1) | 
            (!obj["can_self_unmute"].isNull() << 2) | 
            (!obj["just_joined"].isNull() << 4) | 
            (!obj["versioned"].isNull() << 5) | 
            (!obj["min"].isNull() << 8) | 
            (!obj["muted_by_you"].isNull() << 9) | 
            (!obj["volume_by_admin"].isNull() << 10) | 
            (!obj["self"].isNull() << 12) | 
            (!obj["video_joined"].isNull() << 15) | 
            (!obj["active_date"].isNull() << 3) | 
            (!obj["volume"].isNull() << 7) | 
            (!obj["about"].isNull() << 11) | 
            (!obj["raise_hand_rating"].isNull() << 13) | 
            (!obj["video"].isNull() << 6) | 
            (!obj["presentation"].isNull() << 14) | 
        0), callback);
        writeTLPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["active_date"], callback);
        writeInt32(stream, obj["source"], callback);
        if (obj["flags"].toUInt() & 128) writeInt32(stream, obj["volume"], callback);
        if (obj["flags"].toUInt() & 2048) writeString(stream, obj["about"], callback);
        if (obj["flags"].toUInt() & 8192) writeInt64(stream, obj["raise_hand_rating"], callback);
        if (obj["flags"].toUInt() & 64) writeTLGroupCallParticipantVideo(stream, obj["video"], callback);
        if (obj["flags"].toUInt() & 16384) writeTLGroupCallParticipantVideo(stream, obj["presentation"], callback);
    break;
    }
}

void readTLPhoneGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1636664659:
        obj["_"] = conId.toInt();
        readTLGroupCall(stream, obj["call"], callback);
        readVector(stream, obj["participants"], (void*) &readTLGroupCallParticipant);
        readString(stream, obj["participants_next_offset"], callback);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLPhoneGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1636664659:
        writeInt32(stream, obj["_"], callback);
        writeTLGroupCall(stream, obj["call"], callback);
        writeVector(stream, obj["participants"], (void*) &writeTLGroupCallParticipant);
        writeString(stream, obj["participants_next_offset"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLPhoneGroupParticipants(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -193506890:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["participants"], (void*) &readTLGroupCallParticipant);
        readString(stream, obj["next_offset"], callback);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
        readInt32(stream, obj["version"], callback);
    break;
    }
    i = obj;
}

void writeTLPhoneGroupParticipants(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -193506890:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["participants"], (void*) &writeTLGroupCallParticipant);
        writeString(stream, obj["next_offset"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
        writeInt32(stream, obj["version"], callback);
    break;
    }
}

void readTLInlineQueryPeerType(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 813821341:
        obj["_"] = conId.toInt();
    break;
    case -2093215828:
        obj["_"] = conId.toInt();
    break;
    case -681130742:
        obj["_"] = conId.toInt();
    break;
    case 1589952067:
        obj["_"] = conId.toInt();
    break;
    case 1664413338:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLInlineQueryPeerType(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 813821341:
        writeInt32(stream, obj["_"], callback);
    break;
    case -2093215828:
        writeInt32(stream, obj["_"], callback);
    break;
    case -681130742:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1589952067:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1664413338:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMessagesHistoryImport(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 375566091:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["id"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesHistoryImport(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 375566091:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
    break;
    }
}

void readTLMessagesHistoryImportParsed(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1578088377:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["pm"] = true;
        if (obj["flags"].toUInt() & 2) obj["group"] = true;
        if (obj["flags"].toUInt() & 4) readString(stream, obj["title"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesHistoryImportParsed(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1578088377:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["pm"].isNull()) | 
            (!obj["group"].isNull() << 1) | 
            (!obj["title"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["title"], callback);
    break;
    }
}

void readTLMessagesAffectedFoundMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -275956116:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["pts"], callback);
        readInt32(stream, obj["pts_count"], callback);
        readInt32(stream, obj["offset"], callback);
        readVector(stream, obj["messages"], (void*) &readInt32);
    break;
    }
    i = obj;
}

void writeTLMessagesAffectedFoundMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -275956116:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["pts_count"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeVector(stream, obj["messages"], (void*) &writeInt32);
    break;
    }
}

void readTLChatInviteImporter(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1940201511:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["requested"] = true;
        readInt64(stream, obj["user_id"], callback);
        readInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 4) readString(stream, obj["about"], callback);
        if (obj["flags"].toUInt() & 2) readInt64(stream, obj["approved_by"], callback);
    break;
    }
    i = obj;
}

void writeTLChatInviteImporter(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1940201511:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["requested"].isNull()) | 
            (!obj["about"].isNull() << 2) | 
            (!obj["approved_by"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["user_id"], callback);
        writeInt32(stream, obj["date"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["about"], callback);
        if (obj["flags"].toUInt() & 2) writeInt64(stream, obj["approved_by"], callback);
    break;
    }
}

void readTLMessagesExportedChatInvites(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1111085620:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["invites"], (void*) &readTLExportedChatInvite);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesExportedChatInvites(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1111085620:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["invites"], (void*) &writeTLExportedChatInvite);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLMessagesExportedChatInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 410107472:
        obj["_"] = conId.toInt();
        readTLExportedChatInvite(stream, obj["invite"], callback);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    case 572915951:
        obj["_"] = conId.toInt();
        readTLExportedChatInvite(stream, obj["invite"], callback);
        readTLExportedChatInvite(stream, obj["new_invite"], callback);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesExportedChatInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 410107472:
        writeInt32(stream, obj["_"], callback);
        writeTLExportedChatInvite(stream, obj["invite"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    case 572915951:
        writeInt32(stream, obj["_"], callback);
        writeTLExportedChatInvite(stream, obj["invite"], callback);
        writeTLExportedChatInvite(stream, obj["new_invite"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLMessagesChatInviteImporters(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2118733814:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["importers"], (void*) &readTLChatInviteImporter);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesChatInviteImporters(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2118733814:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["importers"], (void*) &writeTLChatInviteImporter);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLChatAdminWithInvites(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -219353309:
        obj["_"] = conId.toInt();
        readInt64(stream, obj["admin_id"], callback);
        readInt32(stream, obj["invites_count"], callback);
        readInt32(stream, obj["revoked_invites_count"], callback);
    break;
    }
    i = obj;
}

void writeTLChatAdminWithInvites(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -219353309:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["admin_id"], callback);
        writeInt32(stream, obj["invites_count"], callback);
        writeInt32(stream, obj["revoked_invites_count"], callback);
    break;
    }
}

void readTLMessagesChatAdminsWithInvites(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1231326505:
        obj["_"] = conId.toInt();
        readVector(stream, obj["admins"], (void*) &readTLChatAdminWithInvites);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesChatAdminsWithInvites(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1231326505:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["admins"], (void*) &writeTLChatAdminWithInvites);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLMessagesCheckedHistoryImportPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1571952873:
        obj["_"] = conId.toInt();
        readString(stream, obj["confirm_text"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesCheckedHistoryImportPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1571952873:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["confirm_text"], callback);
    break;
    }
}

void readTLPhoneJoinAsPeers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1343921601:
        obj["_"] = conId.toInt();
        readVector(stream, obj["peers"], (void*) &readTLPeer);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLPhoneJoinAsPeers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1343921601:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["peers"], (void*) &writeTLPeer);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLPhoneExportedGroupCallInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 541839704:
        obj["_"] = conId.toInt();
        readString(stream, obj["link"], callback);
    break;
    }
    i = obj;
}

void writeTLPhoneExportedGroupCallInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 541839704:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["link"], callback);
    break;
    }
}

void readTLGroupCallParticipantVideoSourceGroup(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -592373577:
        obj["_"] = conId.toInt();
        readString(stream, obj["semantics"], callback);
        readVector(stream, obj["sources"], (void*) &readInt32);
    break;
    }
    i = obj;
}

void writeTLGroupCallParticipantVideoSourceGroup(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -592373577:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["semantics"], callback);
        writeVector(stream, obj["sources"], (void*) &writeInt32);
    break;
    }
}

void readTLGroupCallParticipantVideo(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1735736008:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["paused"] = true;
        readString(stream, obj["endpoint"], callback);
        readVector(stream, obj["source_groups"], (void*) &readTLGroupCallParticipantVideoSourceGroup);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["audio_source"], callback);
    break;
    }
    i = obj;
}

void writeTLGroupCallParticipantVideo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1735736008:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["paused"].isNull()) | 
            (!obj["audio_source"].isNull() << 1) | 
        0), callback);
        writeString(stream, obj["endpoint"], callback);
        writeVector(stream, obj["source_groups"], (void*) &writeTLGroupCallParticipantVideoSourceGroup);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["audio_source"], callback);
    break;
    }
}

void readTLStickersSuggestedShortName(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2046910401:
        obj["_"] = conId.toInt();
        readString(stream, obj["short_name"], callback);
    break;
    }
    i = obj;
}

void writeTLStickersSuggestedShortName(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2046910401:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["short_name"], callback);
    break;
    }
}

void readTLBotCommandScope(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 795652779:
        obj["_"] = conId.toInt();
    break;
    case 1011811544:
        obj["_"] = conId.toInt();
    break;
    case 1877059713:
        obj["_"] = conId.toInt();
    break;
    case -1180016534:
        obj["_"] = conId.toInt();
    break;
    case -610432643:
        obj["_"] = conId.toInt();
        readTLInputPeer(stream, obj["peer"], callback);
    break;
    case 1071145937:
        obj["_"] = conId.toInt();
        readTLInputPeer(stream, obj["peer"], callback);
    break;
    case 169026035:
        obj["_"] = conId.toInt();
        readTLInputPeer(stream, obj["peer"], callback);
        readTLInputUser(stream, obj["user_id"], callback);
    break;
    }
    i = obj;
}

void writeTLBotCommandScope(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 795652779:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1011811544:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1877059713:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1180016534:
        writeInt32(stream, obj["_"], callback);
    break;
    case -610432643:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    case 1071145937:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    case 169026035:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
    break;
    }
}

void readTLAccountResetPasswordResult(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -478701471:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["retry_date"], callback);
    break;
    case -370148227:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["until_date"], callback);
    break;
    case -383330754:
        obj["_"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeTLAccountResetPasswordResult(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -478701471:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["retry_date"], callback);
    break;
    case -370148227:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["until_date"], callback);
    break;
    case -383330754:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLSponsoredMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 981691896:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readByteArray(stream, obj["random_id"], callback);
        if (obj["flags"].toUInt() & 8) readTLPeer(stream, obj["from_id"], callback);
        if (obj["flags"].toUInt() & 16) readTLChatInvite(stream, obj["chat_invite"], callback);
        if (obj["flags"].toUInt() & 16) readString(stream, obj["chat_invite_hash"], callback);
        if (obj["flags"].toUInt() & 4) readInt32(stream, obj["channel_post"], callback);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["start_param"], callback);
        readString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["entities"], (void*) &readTLMessageEntity);
    break;
    }
    i = obj;
}

void writeTLSponsoredMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 981691896:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["from_id"].isNull() << 3) | 
            (!obj["chat_invite"].isNull() << 4) | 
            (!obj["chat_invite_hash"].isNull() << 4) | 
            (!obj["channel_post"].isNull() << 2) | 
            (!obj["start_param"].isNull()) | 
            (!obj["entities"].isNull() << 1) | 
        0), callback);
        writeByteArray(stream, obj["random_id"], callback);
        if (obj["flags"].toUInt() & 8) writeTLPeer(stream, obj["from_id"], callback);
        if (obj["flags"].toUInt() & 16) writeTLChatInvite(stream, obj["chat_invite"], callback);
        if (obj["flags"].toUInt() & 16) writeString(stream, obj["chat_invite_hash"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["channel_post"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["start_param"], callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
    break;
    }
}

void readTLMessagesSponsoredMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1705297877:
        obj["_"] = conId.toInt();
        readVector(stream, obj["messages"], (void*) &readTLSponsoredMessage);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesSponsoredMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1705297877:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["messages"], (void*) &writeTLSponsoredMessage);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLSearchResultsCalendarPeriod(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -911191137:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["date"], callback);
        readInt32(stream, obj["min_msg_id"], callback);
        readInt32(stream, obj["max_msg_id"], callback);
        readInt32(stream, obj["count"], callback);
    break;
    }
    i = obj;
}

void writeTLSearchResultsCalendarPeriod(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -911191137:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt32(stream, obj["min_msg_id"], callback);
        writeInt32(stream, obj["max_msg_id"], callback);
        writeInt32(stream, obj["count"], callback);
    break;
    }
}

void readTLMessagesSearchResultsCalendar(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 343859772:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["inexact"] = true;
        readInt32(stream, obj["count"], callback);
        readInt32(stream, obj["min_date"], callback);
        readInt32(stream, obj["min_msg_id"], callback);
        if (obj["flags"].toUInt() & 2) readInt32(stream, obj["offset_id_offset"], callback);
        readVector(stream, obj["periods"], (void*) &readTLSearchResultsCalendarPeriod);
        readVector(stream, obj["messages"], (void*) &readTLMessage);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesSearchResultsCalendar(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 343859772:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["inexact"].isNull()) | 
            (!obj["offset_id_offset"].isNull() << 1) | 
        0), callback);
        writeInt32(stream, obj["count"], callback);
        writeInt32(stream, obj["min_date"], callback);
        writeInt32(stream, obj["min_msg_id"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["offset_id_offset"], callback);
        writeVector(stream, obj["periods"], (void*) &writeTLSearchResultsCalendarPeriod);
        writeVector(stream, obj["messages"], (void*) &writeTLMessage);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLSearchResultsPosition(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2137295719:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["msg_id"], callback);
        readInt32(stream, obj["date"], callback);
        readInt32(stream, obj["offset"], callback);
    break;
    }
    i = obj;
}

void writeTLSearchResultsPosition(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2137295719:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt32(stream, obj["offset"], callback);
    break;
    }
}

void readTLMessagesSearchResultsPositions(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1404185519:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["positions"], (void*) &readTLSearchResultsPosition);
    break;
    }
    i = obj;
}

void writeTLMessagesSearchResultsPositions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1404185519:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["positions"], (void*) &writeTLSearchResultsPosition);
    break;
    }
}

void readTLChannelsSendAsPeers(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2091463255:
        obj["_"] = conId.toInt();
        readVector(stream, obj["peers"], (void*) &readTLPeer);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLChannelsSendAsPeers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2091463255:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["peers"], (void*) &writeTLPeer);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLUsersUserFull(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 997004590:
        obj["_"] = conId.toInt();
        readTLUserFull(stream, obj["full_user"], callback);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLUsersUserFull(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 997004590:
        writeInt32(stream, obj["_"], callback);
        writeTLUserFull(stream, obj["full_user"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLMessagesPeerSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1753266509:
        obj["_"] = conId.toInt();
        readTLPeerSettings(stream, obj["settings"], callback);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
    break;
    }
    i = obj;
}

void writeTLMessagesPeerSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1753266509:
        writeInt32(stream, obj["_"], callback);
        writeTLPeerSettings(stream, obj["settings"], callback);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
    break;
    }
}

void readTLAuthLoggedOut(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1012759713:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) readByteArray(stream, obj["future_auth_token"], callback);
    break;
    }
    i = obj;
}

void writeTLAuthLoggedOut(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1012759713:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["future_auth_token"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeByteArray(stream, obj["future_auth_token"], callback);
    break;
    }
}

void readTLReactionCount(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1873957073:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["chosen"] = true;
        readString(stream, obj["reaction"], callback);
        readInt32(stream, obj["count"], callback);
    break;
    }
    i = obj;
}

void writeTLReactionCount(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1873957073:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["chosen"].isNull()) | 
        0), callback);
        writeString(stream, obj["reaction"], callback);
        writeInt32(stream, obj["count"], callback);
    break;
    }
}

void readTLMessageReactions(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1328256121:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["min"] = true;
        if (obj["flags"].toUInt() & 4) obj["can_see_list"] = true;
        readVector(stream, obj["results"], (void*) &readTLReactionCount);
        if (obj["flags"].toUInt() & 2) readVector(stream, obj["recent_reactions"], (void*) &readTLMessagePeerReaction);
    break;
    }
    i = obj;
}

void writeTLMessageReactions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1328256121:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["min"].isNull()) | 
            (!obj["can_see_list"].isNull() << 2) | 
            (!obj["recent_reactions"].isNull() << 1) | 
        0), callback);
        writeVector(stream, obj["results"], (void*) &writeTLReactionCount);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["recent_reactions"], (void*) &writeTLMessagePeerReaction);
    break;
    }
}

void readTLMessagesMessageReactionsList(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 834488621:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        readInt32(stream, obj["count"], callback);
        readVector(stream, obj["reactions"], (void*) &readTLMessagePeerReaction);
        readVector(stream, obj["chats"], (void*) &readTLChat);
        readVector(stream, obj["users"], (void*) &readTLUser);
        if (obj["flags"].toUInt() & 1) readString(stream, obj["next_offset"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesMessageReactionsList(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 834488621:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["next_offset"].isNull()) | 
        0), callback);
        writeInt32(stream, obj["count"], callback);
        writeVector(stream, obj["reactions"], (void*) &writeTLMessagePeerReaction);
        writeVector(stream, obj["chats"], (void*) &writeTLChat);
        writeVector(stream, obj["users"], (void*) &writeTLUser);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["next_offset"], callback);
    break;
    }
}

void readTLAvailableReaction(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1065882623:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["inactive"] = true;
        readString(stream, obj["reaction"], callback);
        readString(stream, obj["title"], callback);
        readTLDocument(stream, obj["static_icon"], callback);
        readTLDocument(stream, obj["appear_animation"], callback);
        readTLDocument(stream, obj["select_animation"], callback);
        readTLDocument(stream, obj["activate_animation"], callback);
        readTLDocument(stream, obj["effect_animation"], callback);
        if (obj["flags"].toUInt() & 2) readTLDocument(stream, obj["around_animation"], callback);
        if (obj["flags"].toUInt() & 2) readTLDocument(stream, obj["center_icon"], callback);
    break;
    }
    i = obj;
}

void writeTLAvailableReaction(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1065882623:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["inactive"].isNull()) | 
            (!obj["around_animation"].isNull() << 1) | 
            (!obj["center_icon"].isNull() << 1) | 
        0), callback);
        writeString(stream, obj["reaction"], callback);
        writeString(stream, obj["title"], callback);
        writeTLDocument(stream, obj["static_icon"], callback);
        writeTLDocument(stream, obj["appear_animation"], callback);
        writeTLDocument(stream, obj["select_animation"], callback);
        writeTLDocument(stream, obj["activate_animation"], callback);
        writeTLDocument(stream, obj["effect_animation"], callback);
        if (obj["flags"].toUInt() & 2) writeTLDocument(stream, obj["around_animation"], callback);
        if (obj["flags"].toUInt() & 2) writeTLDocument(stream, obj["center_icon"], callback);
    break;
    }
}

void readTLMessagesAvailableReactions(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1626924713:
        obj["_"] = conId.toInt();
    break;
    case 1989032621:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["hash"], callback);
        readVector(stream, obj["reactions"], (void*) &readTLAvailableReaction);
    break;
    }
    i = obj;
}

void writeTLMessagesAvailableReactions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1626924713:
        writeInt32(stream, obj["_"], callback);
    break;
    case 1989032621:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["hash"], callback);
        writeVector(stream, obj["reactions"], (void*) &writeTLAvailableReaction);
    break;
    }
}

void readTLMessagesTranslatedText(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1741309751:
        obj["_"] = conId.toInt();
    break;
    case -1575684144:
        obj["_"] = conId.toInt();
        readString(stream, obj["text"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagesTranslatedText(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1741309751:
        writeInt32(stream, obj["_"], callback);
    break;
    case -1575684144:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["text"], callback);
    break;
    }
}

void readTLMessagePeerReaction(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1370914559:
        obj["_"] = conId.toInt();
        readUInt32(stream, obj["flags"], callback);
        if (obj["flags"].toUInt() & 1) obj["big"] = true;
        if (obj["flags"].toUInt() & 2) obj["unread"] = true;
        readTLPeer(stream, obj["peer_id"], callback);
        readString(stream, obj["reaction"], callback);
    break;
    }
    i = obj;
}

void writeTLMessagePeerReaction(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1370914559:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["big"].isNull()) | 
            (!obj["unread"].isNull() << 1) | 
        0), callback);
        writeTLPeer(stream, obj["peer_id"], callback);
        writeString(stream, obj["reaction"], callback);
    break;
    }
}

void readTLGroupCallStreamChannel(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2132064081:
        obj["_"] = conId.toInt();
        readInt32(stream, obj["channel"], callback);
        readInt32(stream, obj["scale"], callback);
        readInt64(stream, obj["last_timestamp_ms"], callback);
    break;
    }
    i = obj;
}

void writeTLGroupCallStreamChannel(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2132064081:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["channel"], callback);
        writeInt32(stream, obj["scale"], callback);
        writeInt64(stream, obj["last_timestamp_ms"], callback);
    break;
    }
}

void readTLPhoneGroupCallStreamChannels(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -790330702:
        obj["_"] = conId.toInt();
        readVector(stream, obj["channels"], (void*) &readTLGroupCallStreamChannel);
    break;
    }
    i = obj;
}

void writeTLPhoneGroupCallStreamChannels(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -790330702:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["channels"], (void*) &writeTLGroupCallStreamChannel);
    break;
    }
}

void readTLPhoneGroupCallStreamRtmpUrl(TelegramStream &stream, QVariant &i, void* callback)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 767505458:
        obj["_"] = conId.toInt();
        readString(stream, obj["url"], callback);
        readString(stream, obj["key"], callback);
    break;
    }
    i = obj;
}

void writeTLPhoneGroupCallStreamRtmpUrl(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 767505458:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeString(stream, obj["key"], callback);
    break;
    }
}

void readTLMethodAuthSendCode(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1502141361:
    readTLAuthSentCode(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthSendCode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1502141361:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeInt32(stream, obj["api_id"], callback);
        writeString(stream, obj["api_hash"], callback);
        writeTLCodeSettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMethodAuthSignUp(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2131827673:
    readTLAuthAuthorization(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthSignUp(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2131827673:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeString(stream, obj["phone_code_hash"], callback);
        writeString(stream, obj["first_name"], callback);
        writeString(stream, obj["last_name"], callback);
    break;
    }
}

void readTLMethodAuthSignIn(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1126886015:
    readTLAuthAuthorization(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthSignIn(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1126886015:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeString(stream, obj["phone_code_hash"], callback);
        writeString(stream, obj["phone_code"], callback);
    break;
    }
}

void readTLMethodAuthLogOut(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1047706137:
    readTLAuthLoggedOut(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthLogOut(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1047706137:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAuthResetAuthorizations(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1616179942:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthResetAuthorizations(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1616179942:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAuthExportAuthorization(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -440401971:
    readTLAuthExportedAuthorization(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthExportAuthorization(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -440401971:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["dc_id"], callback);
    break;
    }
}

void readTLMethodAuthImportAuthorization(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1518699091:
    readTLAuthAuthorization(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthImportAuthorization(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1518699091:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["id"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    }
}

void readTLMethodAuthBindTempAuthKey(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -841733627:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthBindTempAuthKey(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -841733627:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["perm_auth_key_id"], callback);
        writeInt64(stream, obj["nonce"], callback);
        writeInt32(stream, obj["expires_at"], callback);
        writeByteArray(stream, obj["encrypted_message"], callback);
    break;
    }
}

void readTLMethodAccountRegisterDevice(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -326762118:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountRegisterDevice(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -326762118:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["no_muted"].isNull()) | 
        0), callback);
        writeInt32(stream, obj["token_type"], callback);
        writeString(stream, obj["token"], callback);
        writeBool(stream, obj["app_sandbox"], callback);
        writeByteArray(stream, obj["secret"], callback);
        writeVector(stream, obj["other_uids"], (void*) &writeInt64);
    break;
    }
}

void readTLMethodAccountUnregisterDevice(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1779249670:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountUnregisterDevice(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1779249670:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["token_type"], callback);
        writeString(stream, obj["token"], callback);
        writeVector(stream, obj["other_uids"], (void*) &writeInt64);
    break;
    }
}

void readTLMethodAccountUpdateNotifySettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2067899501:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountUpdateNotifySettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2067899501:
        writeInt32(stream, obj["_"], callback);
        writeTLInputNotifyPeer(stream, obj["peer"], callback);
        writeTLInputPeerNotifySettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMethodAccountGetNotifySettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 313765169:
    readTLPeerNotifySettings(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetNotifySettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 313765169:
        writeInt32(stream, obj["_"], callback);
        writeTLInputNotifyPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodAccountResetNotifySettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -612493497:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountResetNotifySettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -612493497:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountUpdateProfile(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2018596725:
    readTLUser(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountUpdateProfile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2018596725:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["first_name"].isNull()) | 
            (!obj["last_name"].isNull() << 1) | 
            (!obj["about"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["first_name"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["last_name"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["about"], callback);
    break;
    }
}

void readTLMethodAccountUpdateStatus(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1713919532:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountUpdateStatus(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1713919532:
        writeInt32(stream, obj["_"], callback);
        writeBool(stream, obj["offline"], callback);
    break;
    }
}

void readTLMethodAccountGetWallPapers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 127302966:
    readTLAccountWallPapers(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetWallPapers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 127302966:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodAccountReportPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -977650298:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountReportPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -977650298:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLReportReason(stream, obj["reason"], callback);
        writeString(stream, obj["message"], callback);
    break;
    }
}

void readTLMethodUsersGetUsers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 227648840:
    readVector(stream, i, (void*) &readTLUser);
    break;
    }
}

void writeTLMethodUsersGetUsers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 227648840:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["id"], (void*) &writeTLInputUser);
    break;
    }
}

void readTLMethodUsersGetFullUser(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1240508136:
    readTLUsersUserFull(stream, i, callback);
    break;
    }
}

void writeTLMethodUsersGetFullUser(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1240508136:
        writeInt32(stream, obj["_"], callback);
        writeTLInputUser(stream, obj["id"], callback);
    break;
    }
}

void readTLMethodContactsGetContactIDs(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2061264541:
    readVector(stream, i, (void*) &readInt32);
    break;
    }
}

void writeTLMethodContactsGetContactIDs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2061264541:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodContactsGetStatuses(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -995929106:
    readVector(stream, i, (void*) &readTLContactStatus);
    break;
    }
}

void writeTLMethodContactsGetStatuses(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -995929106:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodContactsGetContacts(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1574346258:
    readTLContactsContacts(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsGetContacts(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1574346258:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodContactsImportContacts(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 746589157:
    readTLContactsImportedContacts(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsImportContacts(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 746589157:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["contacts"], (void*) &writeTLInputContact);
    break;
    }
}

void readTLMethodContactsDeleteContacts(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 157945344:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsDeleteContacts(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 157945344:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["id"], (void*) &writeTLInputUser);
    break;
    }
}

void readTLMethodContactsDeleteByPhones(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 269745566:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsDeleteByPhones(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 269745566:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["phones"], (void*) &writeString);
    break;
    }
}

void readTLMethodContactsBlock(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1758204945:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsBlock(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1758204945:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["id"], callback);
    break;
    }
}

void readTLMethodContactsUnblock(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1096393392:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsUnblock(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1096393392:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["id"], callback);
    break;
    }
}

void readTLMethodContactsGetBlocked(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -176409329:
    readTLContactsBlocked(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsGetBlocked(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -176409329:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodMessagesGetMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1673946374:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1673946374:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["id"], (void*) &writeTLInputMessage);
    break;
    }
}

void readTLMethodMessagesGetDialogs(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1594569905:
    readTLMessagesDialogs(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetDialogs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1594569905:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["exclude_pinned"].isNull()) | 
            (!obj["folder_id"].isNull() << 1) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["folder_id"], callback);
        writeInt32(stream, obj["offset_date"], callback);
        writeInt32(stream, obj["offset_id"], callback);
        writeTLInputPeer(stream, obj["offset_peer"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesGetHistory(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1143203525:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetHistory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1143203525:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["offset_id"], callback);
        writeInt32(stream, obj["offset_date"], callback);
        writeInt32(stream, obj["add_offset"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeInt32(stream, obj["max_id"], callback);
        writeInt32(stream, obj["min_id"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesSearch(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1593989278:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSearch(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1593989278:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["from_id"].isNull()) | 
            (!obj["top_msg_id"].isNull() << 1) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeString(stream, obj["q"], callback);
        if (obj["flags"].toUInt() & 1) writeTLInputPeer(stream, obj["from_id"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["top_msg_id"], callback);
        writeTLMessagesFilter(stream, obj["filter"], callback);
        writeInt32(stream, obj["min_date"], callback);
        writeInt32(stream, obj["max_date"], callback);
        writeInt32(stream, obj["offset_id"], callback);
        writeInt32(stream, obj["add_offset"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeInt32(stream, obj["max_id"], callback);
        writeInt32(stream, obj["min_id"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesReadHistory(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 238054714:
    readTLMessagesAffectedMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReadHistory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 238054714:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["max_id"], callback);
    break;
    }
}

void readTLMethodMessagesDeleteHistory(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1332768214:
    readTLMessagesAffectedHistory(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesDeleteHistory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1332768214:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["just_clear"].isNull()) | 
            (!obj["revoke"].isNull() << 1) | 
            (!obj["min_date"].isNull() << 2) | 
            (!obj["max_date"].isNull() << 3) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["max_id"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["min_date"], callback);
        if (obj["flags"].toUInt() & 8) writeInt32(stream, obj["max_date"], callback);
    break;
    }
}

void readTLMethodMessagesDeleteMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -443640366:
    readTLMessagesAffectedMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesDeleteMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -443640366:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["revoke"].isNull()) | 
        0), callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodMessagesReceivedMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 94983360:
    readVector(stream, i, (void*) &readTLReceivedNotifyMessage);
    break;
    }
}

void writeTLMethodMessagesReceivedMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 94983360:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["max_id"], callback);
    break;
    }
}

void readTLMethodMessagesSetTyping(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1486110434:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetTyping(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1486110434:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["top_msg_id"].isNull()) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["top_msg_id"], callback);
        writeTLSendMessageAction(stream, obj["action"], callback);
    break;
    }
}

void readTLMethodMessagesSendMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 228423076:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 228423076:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["no_webpage"].isNull() << 1) | 
            (!obj["silent"].isNull() << 5) | 
            (!obj["background"].isNull() << 6) | 
            (!obj["clear_draft"].isNull() << 7) | 
            (!obj["noforwards"].isNull() << 14) | 
            (!obj["reply_to_msg_id"].isNull()) | 
            (!obj["reply_markup"].isNull() << 2) | 
            (!obj["entities"].isNull() << 3) | 
            (!obj["schedule_date"].isNull() << 10) | 
            (!obj["send_as"].isNull() << 13) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["reply_to_msg_id"], callback);
        writeString(stream, obj["message"], callback);
        writeInt64(stream, obj["random_id"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 1024) writeInt32(stream, obj["schedule_date"], callback);
        if (obj["flags"].toUInt() & 8192) writeTLInputPeer(stream, obj["send_as"], callback);
    break;
    }
}

void readTLMethodMessagesSendMedia(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -497026848:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendMedia(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -497026848:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["silent"].isNull() << 5) | 
            (!obj["background"].isNull() << 6) | 
            (!obj["clear_draft"].isNull() << 7) | 
            (!obj["noforwards"].isNull() << 14) | 
            (!obj["reply_to_msg_id"].isNull()) | 
            (!obj["reply_markup"].isNull() << 2) | 
            (!obj["entities"].isNull() << 3) | 
            (!obj["schedule_date"].isNull() << 10) | 
            (!obj["send_as"].isNull() << 13) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["reply_to_msg_id"], callback);
        writeTLInputMedia(stream, obj["media"], callback);
        writeString(stream, obj["message"], callback);
        writeInt64(stream, obj["random_id"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 1024) writeInt32(stream, obj["schedule_date"], callback);
        if (obj["flags"].toUInt() & 8192) writeTLInputPeer(stream, obj["send_as"], callback);
    break;
    }
}

void readTLMethodMessagesForwardMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -869258997:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesForwardMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -869258997:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["silent"].isNull() << 5) | 
            (!obj["background"].isNull() << 6) | 
            (!obj["with_my_score"].isNull() << 8) | 
            (!obj["drop_author"].isNull() << 11) | 
            (!obj["drop_media_captions"].isNull() << 12) | 
            (!obj["noforwards"].isNull() << 14) | 
            (!obj["schedule_date"].isNull() << 10) | 
            (!obj["send_as"].isNull() << 13) | 
        0), callback);
        writeTLInputPeer(stream, obj["from_peer"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
        writeVector(stream, obj["random_id"], (void*) &writeInt64);
        writeTLInputPeer(stream, obj["to_peer"], callback);
        if (obj["flags"].toUInt() & 1024) writeInt32(stream, obj["schedule_date"], callback);
        if (obj["flags"].toUInt() & 8192) writeTLInputPeer(stream, obj["send_as"], callback);
    break;
    }
}

void readTLMethodMessagesReportSpam(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -820669733:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReportSpam(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -820669733:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodMessagesGetPeerSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -270948702:
    readTLMessagesPeerSettings(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetPeerSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -270948702:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodMessagesReport(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1991005362:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReport(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1991005362:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
        writeTLReportReason(stream, obj["reason"], callback);
        writeString(stream, obj["message"], callback);
    break;
    }
}

void readTLMethodMessagesGetChats(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1240027791:
    readTLMessagesChats(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetChats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1240027791:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt64);
    break;
    }
}

void readTLMethodMessagesGetFullChat(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1364194508:
    readTLMessagesChatFull(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetFullChat(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1364194508:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
    break;
    }
}

void readTLMethodMessagesEditChatTitle(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1937260541:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesEditChatTitle(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1937260541:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeString(stream, obj["title"], callback);
    break;
    }
}

void readTLMethodMessagesEditChatPhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 903730804:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesEditChatPhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 903730804:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeTLInputChatPhoto(stream, obj["photo"], callback);
    break;
    }
}

void readTLMethodMessagesAddChatUser(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -230206493:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesAddChatUser(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -230206493:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeInt32(stream, obj["fwd_limit"], callback);
    break;
    }
}

void readTLMethodMessagesDeleteChatUser(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1575461717:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesDeleteChatUser(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1575461717:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["revoke_history"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
    break;
    }
}

void readTLMethodMessagesCreateChat(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 164303470:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesCreateChat(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 164303470:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLInputUser);
        writeString(stream, obj["title"], callback);
    break;
    }
}

void readTLMethodUpdatesGetState(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -304838614:
    readTLUpdatesState(stream, i, callback);
    break;
    }
}

void writeTLMethodUpdatesGetState(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -304838614:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodUpdatesGetDifference(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 630429265:
    readTLUpdatesDifference(stream, i, callback);
    break;
    }
}

void writeTLMethodUpdatesGetDifference(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 630429265:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["pts_total_limit"].isNull()) | 
        0), callback);
        writeInt32(stream, obj["pts"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["pts_total_limit"], callback);
        writeInt32(stream, obj["date"], callback);
        writeInt32(stream, obj["qts"], callback);
    break;
    }
}

void readTLMethodPhotosUpdateProfilePhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1926525996:
    readTLPhotosPhoto(stream, i, callback);
    break;
    }
}

void writeTLMethodPhotosUpdateProfilePhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1926525996:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPhoto(stream, obj["id"], callback);
    break;
    }
}

void readTLMethodPhotosUploadProfilePhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1980559511:
    readTLPhotosPhoto(stream, i, callback);
    break;
    }
}

void writeTLMethodPhotosUploadProfilePhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1980559511:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["file"].isNull()) | 
            (!obj["video"].isNull() << 1) | 
            (!obj["video_start_ts"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeTLInputFile(stream, obj["file"], callback);
        if (obj["flags"].toUInt() & 2) writeTLInputFile(stream, obj["video"], callback);
        if (obj["flags"].toUInt() & 4) writeDouble(stream, obj["video_start_ts"], callback);
    break;
    }
}

void readTLMethodPhotosDeletePhotos(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2016444625:
    readVector(stream, i, (void*) &readInt64);
    break;
    }
}

void writeTLMethodPhotosDeletePhotos(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2016444625:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["id"], (void*) &writeTLInputPhoto);
    break;
    }
}

void readTLMethodUploadSaveFilePart(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1291540959:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodUploadSaveFilePart(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1291540959:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["file_id"], callback);
        writeInt32(stream, obj["file_part"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    }
}

void readTLMethodUploadGetFile(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1319462148:
    readTLUploadFile(stream, i, callback);
    break;
    }
}

void writeTLMethodUploadGetFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1319462148:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["precise"].isNull()) | 
            (!obj["cdn_supported"].isNull() << 1) | 
        0), callback);
        writeTLInputFileLocation(stream, obj["location"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodHelpGetConfig(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -990308245:
    readTLConfig(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetConfig(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -990308245:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodHelpGetNearestDc(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 531836966:
    readTLNearestDc(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetNearestDc(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 531836966:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodHelpGetAppUpdate(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1378703997:
    readTLHelpAppUpdate(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetAppUpdate(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1378703997:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["source"], callback);
    break;
    }
}

void readTLMethodHelpGetInviteText(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1295590211:
    readTLHelpInviteText(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetInviteText(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1295590211:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodPhotosGetUserPhotos(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1848823128:
    readTLPhotosPhotos(stream, i, callback);
    break;
    }
}

void writeTLMethodPhotosGetUserPhotos(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1848823128:
        writeInt32(stream, obj["_"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt64(stream, obj["max_id"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodMessagesGetDhConfig(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 651135312:
    readTLMessagesDhConfig(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetDhConfig(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 651135312:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["version"], callback);
        writeInt32(stream, obj["random_length"], callback);
    break;
    }
}

void readTLMethodMessagesRequestEncryption(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -162681021:
    readTLEncryptedChat(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesRequestEncryption(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -162681021:
        writeInt32(stream, obj["_"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeInt32(stream, obj["random_id"], callback);
        writeByteArray(stream, obj["g_a"], callback);
    break;
    }
}

void readTLMethodMessagesAcceptEncryption(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1035731989:
    readTLEncryptedChat(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesAcceptEncryption(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1035731989:
        writeInt32(stream, obj["_"], callback);
        writeTLInputEncryptedChat(stream, obj["peer"], callback);
        writeByteArray(stream, obj["g_b"], callback);
        writeInt64(stream, obj["key_fingerprint"], callback);
    break;
    }
}

void readTLMethodMessagesDiscardEncryption(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -208425312:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesDiscardEncryption(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -208425312:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["delete_history"].isNull()) | 
        0), callback);
        writeInt32(stream, obj["chat_id"], callback);
    break;
    }
}

void readTLMethodMessagesSetEncryptedTyping(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2031374829:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetEncryptedTyping(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2031374829:
        writeInt32(stream, obj["_"], callback);
        writeTLInputEncryptedChat(stream, obj["peer"], callback);
        writeBool(stream, obj["typing"], callback);
    break;
    }
}

void readTLMethodMessagesReadEncryptedHistory(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2135648522:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReadEncryptedHistory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2135648522:
        writeInt32(stream, obj["_"], callback);
        writeTLInputEncryptedChat(stream, obj["peer"], callback);
        writeInt32(stream, obj["max_date"], callback);
    break;
    }
}

void readTLMethodMessagesSendEncrypted(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1157265941:
    readTLMessagesSentEncryptedMessage(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendEncrypted(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1157265941:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["silent"].isNull()) | 
        0), callback);
        writeTLInputEncryptedChat(stream, obj["peer"], callback);
        writeInt64(stream, obj["random_id"], callback);
        writeByteArray(stream, obj["data"], callback);
    break;
    }
}

void readTLMethodMessagesSendEncryptedFile(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1431914525:
    readTLMessagesSentEncryptedMessage(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendEncryptedFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1431914525:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["silent"].isNull()) | 
        0), callback);
        writeTLInputEncryptedChat(stream, obj["peer"], callback);
        writeInt64(stream, obj["random_id"], callback);
        writeByteArray(stream, obj["data"], callback);
        writeTLInputEncryptedFile(stream, obj["file"], callback);
    break;
    }
}

void readTLMethodMessagesSendEncryptedService(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 852769188:
    readTLMessagesSentEncryptedMessage(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendEncryptedService(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 852769188:
        writeInt32(stream, obj["_"], callback);
        writeTLInputEncryptedChat(stream, obj["peer"], callback);
        writeInt64(stream, obj["random_id"], callback);
        writeByteArray(stream, obj["data"], callback);
    break;
    }
}

void readTLMethodMessagesReceivedQueue(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1436924774:
    readVector(stream, i, (void*) &readInt64);
    break;
    }
}

void writeTLMethodMessagesReceivedQueue(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1436924774:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["max_qts"], callback);
    break;
    }
}

void readTLMethodMessagesReportEncryptedSpam(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1259113487:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReportEncryptedSpam(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1259113487:
        writeInt32(stream, obj["_"], callback);
        writeTLInputEncryptedChat(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodUploadSaveBigFilePart(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -562337987:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodUploadSaveBigFilePart(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -562337987:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["file_id"], callback);
        writeInt32(stream, obj["file_part"], callback);
        writeInt32(stream, obj["file_total_parts"], callback);
        writeByteArray(stream, obj["bytes"], callback);
    break;
    }
}

void readTLMethodHelpGetSupport(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1663104819:
    readTLHelpSupport(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetSupport(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1663104819:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodMessagesReadMessageContents(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 916930423:
    readTLMessagesAffectedMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReadMessageContents(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 916930423:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodAccountCheckUsername(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 655677548:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountCheckUsername(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 655677548:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["username"], callback);
    break;
    }
}

void readTLMethodAccountUpdateUsername(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1040964988:
    readTLUser(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountUpdateUsername(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1040964988:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["username"], callback);
    break;
    }
}

void readTLMethodContactsSearch(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 301470424:
    readTLContactsFound(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsSearch(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 301470424:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["q"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodAccountGetPrivacy(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -623130288:
    readTLAccountPrivacyRules(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetPrivacy(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -623130288:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPrivacyKey(stream, obj["key"], callback);
    break;
    }
}

void readTLMethodAccountSetPrivacy(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -906486552:
    readTLAccountPrivacyRules(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSetPrivacy(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -906486552:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPrivacyKey(stream, obj["key"], callback);
        writeVector(stream, obj["rules"], (void*) &writeTLInputPrivacyRule);
    break;
    }
}

void readTLMethodAccountDeleteAccount(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1099779595:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountDeleteAccount(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1099779595:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["reason"], callback);
    break;
    }
}

void readTLMethodAccountGetAccountTTL(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 150761757:
    readTLAccountDaysTTL(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetAccountTTL(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 150761757:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountSetAccountTTL(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 608323678:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSetAccountTTL(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 608323678:
        writeInt32(stream, obj["_"], callback);
        writeTLAccountDaysTTL(stream, obj["ttl"], callback);
    break;
    }
}

void readTLMethodContactsResolveUsername(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -113456221:
    readTLContactsResolvedPeer(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsResolveUsername(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -113456221:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["username"], callback);
    break;
    }
}

void readTLMethodAccountSendChangePhoneCode(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2108208411:
    readTLAuthSentCode(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSendChangePhoneCode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2108208411:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeTLCodeSettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMethodAccountChangePhone(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1891839707:
    readTLUser(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountChangePhone(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1891839707:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeString(stream, obj["phone_code_hash"], callback);
        writeString(stream, obj["phone_code"], callback);
    break;
    }
}

void readTLMethodMessagesGetStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -710552671:
    readTLMessagesStickers(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -710552671:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["emoticon"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesGetAllStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1197432408:
    readTLMessagesAllStickers(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetAllStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1197432408:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodAccountUpdateDeviceLocked(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 954152242:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountUpdateDeviceLocked(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 954152242:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["period"], callback);
    break;
    }
}

void readTLMethodAuthImportBotAuthorization(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1738800940:
    readTLAuthAuthorization(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthImportBotAuthorization(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1738800940:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["flags"], callback);
        writeInt32(stream, obj["api_id"], callback);
        writeString(stream, obj["api_hash"], callback);
        writeString(stream, obj["bot_auth_token"], callback);
    break;
    }
}

void readTLMethodMessagesGetWebPagePreview(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1956073268:
    readTLMessageMedia(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetWebPagePreview(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1956073268:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["entities"].isNull() << 3) | 
        0), callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
    break;
    }
}

void readTLMethodAccountGetAuthorizations(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -484392616:
    readTLAccountAuthorizations(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetAuthorizations(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -484392616:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountResetAuthorization(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -545786948:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountResetAuthorization(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -545786948:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodAccountGetPassword(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1418342645:
    readTLAccountPassword(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetPassword(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1418342645:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountGetPasswordSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1663767815:
    readTLAccountPasswordSettings(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetPasswordSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1663767815:
        writeInt32(stream, obj["_"], callback);
        writeTLInputCheckPasswordSRP(stream, obj["password"], callback);
    break;
    }
}

void readTLMethodAccountUpdatePasswordSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1516564433:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountUpdatePasswordSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1516564433:
        writeInt32(stream, obj["_"], callback);
        writeTLInputCheckPasswordSRP(stream, obj["password"], callback);
        writeTLAccountPasswordInputSettings(stream, obj["new_settings"], callback);
    break;
    }
}

void readTLMethodAuthCheckPassword(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -779399914:
    readTLAuthAuthorization(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthCheckPassword(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -779399914:
        writeInt32(stream, obj["_"], callback);
        writeTLInputCheckPasswordSRP(stream, obj["password"], callback);
    break;
    }
}

void readTLMethodAuthRequestPasswordRecovery(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -661144474:
    readTLAuthPasswordRecovery(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthRequestPasswordRecovery(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -661144474:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAuthRecoverPassword(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 923364464:
    readTLAuthAuthorization(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthRecoverPassword(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 923364464:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["new_settings"].isNull()) | 
        0), callback);
        writeString(stream, obj["code"], callback);
        if (obj["flags"].toUInt() & 1) writeTLAccountPasswordInputSettings(stream, obj["new_settings"], callback);
    break;
    }
}

void readTLMethodMessagesExportChatInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1607670315:
    readTLExportedChatInvite(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesExportChatInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1607670315:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["legacy_revoke_permanent"].isNull() << 2) | 
            (!obj["request_needed"].isNull() << 3) | 
            (!obj["expire_date"].isNull()) | 
            (!obj["usage_limit"].isNull() << 1) | 
            (!obj["title"].isNull() << 4) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["expire_date"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["usage_limit"], callback);
        if (obj["flags"].toUInt() & 16) writeString(stream, obj["title"], callback);
    break;
    }
}

void readTLMethodMessagesCheckChatInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1051570619:
    readTLChatInvite(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesCheckChatInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1051570619:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesImportChatInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1817183516:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesImportChatInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1817183516:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesGetStickerSet(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -928977804:
    readTLMessagesStickerSet(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetStickerSet(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -928977804:
        writeInt32(stream, obj["_"], callback);
        writeTLInputStickerSet(stream, obj["stickerset"], callback);
        writeInt32(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesInstallStickerSet(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -946871200:
    readTLMessagesStickerSetInstallResult(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesInstallStickerSet(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -946871200:
        writeInt32(stream, obj["_"], callback);
        writeTLInputStickerSet(stream, obj["stickerset"], callback);
        writeBool(stream, obj["archived"], callback);
    break;
    }
}

void readTLMethodMessagesUninstallStickerSet(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -110209570:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesUninstallStickerSet(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -110209570:
        writeInt32(stream, obj["_"], callback);
        writeTLInputStickerSet(stream, obj["stickerset"], callback);
    break;
    }
}

void readTLMethodMessagesStartBot(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -421563528:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesStartBot(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -421563528:
        writeInt32(stream, obj["_"], callback);
        writeTLInputUser(stream, obj["bot"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt64(stream, obj["random_id"], callback);
        writeString(stream, obj["start_param"], callback);
    break;
    }
}

void readTLMethodHelpGetAppChangelog(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1877938321:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetAppChangelog(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1877938321:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["prev_app_version"], callback);
    break;
    }
}

void readTLMethodMessagesGetMessagesViews(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1468322785:
    readTLMessagesMessageViews(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetMessagesViews(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1468322785:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
        writeBool(stream, obj["increment"], callback);
    break;
    }
}

void readTLMethodChannelsReadHistory(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -871347913:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsReadHistory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -871347913:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeInt32(stream, obj["max_id"], callback);
    break;
    }
}

void readTLMethodChannelsDeleteMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2067661490:
    readTLMessagesAffectedMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsDeleteMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2067661490:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodChannelsReportSpam(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -196443371:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsReportSpam(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -196443371:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLInputPeer(stream, obj["participant"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodChannelsGetMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1383294429:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1383294429:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeVector(stream, obj["id"], (void*) &writeTLInputMessage);
    break;
    }
}

void readTLMethodChannelsGetParticipants(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2010044880:
    readTLChannelsChannelParticipants(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetParticipants(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2010044880:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLChannelParticipantsFilter(stream, obj["filter"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodChannelsGetParticipant(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1599378234:
    readTLChannelsChannelParticipant(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetParticipant(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1599378234:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLInputPeer(stream, obj["participant"], callback);
    break;
    }
}

void readTLMethodChannelsGetChannels(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 176122811:
    readTLMessagesChats(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetChannels(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 176122811:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["id"], (void*) &writeTLInputChannel);
    break;
    }
}

void readTLMethodChannelsGetFullChannel(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 141781513:
    readTLMessagesChatFull(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetFullChannel(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 141781513:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
    break;
    }
}

void readTLMethodChannelsCreateChannel(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1029681423:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsCreateChannel(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1029681423:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["broadcast"].isNull()) | 
            (!obj["megagroup"].isNull() << 1) | 
            (!obj["for_import"].isNull() << 3) | 
            (!obj["geo_point"].isNull() << 2) | 
            (!obj["address"].isNull() << 2) | 
        0), callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["about"], callback);
        if (obj["flags"].toUInt() & 4) writeTLInputGeoPoint(stream, obj["geo_point"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["address"], callback);
    break;
    }
}

void readTLMethodChannelsEditAdmin(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -751007486:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsEditAdmin(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -751007486:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeTLChatAdminRights(stream, obj["admin_rights"], callback);
        writeString(stream, obj["rank"], callback);
    break;
    }
}

void readTLMethodChannelsEditTitle(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1450044624:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsEditTitle(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1450044624:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeString(stream, obj["title"], callback);
    break;
    }
}

void readTLMethodChannelsEditPhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -248621111:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsEditPhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -248621111:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLInputChatPhoto(stream, obj["photo"], callback);
    break;
    }
}

void readTLMethodChannelsCheckUsername(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 283557164:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsCheckUsername(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 283557164:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeString(stream, obj["username"], callback);
    break;
    }
}

void readTLMethodChannelsUpdateUsername(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 890549214:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsUpdateUsername(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 890549214:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeString(stream, obj["username"], callback);
    break;
    }
}

void readTLMethodChannelsJoinChannel(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 615851205:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsJoinChannel(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 615851205:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
    break;
    }
}

void readTLMethodChannelsLeaveChannel(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -130635115:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsLeaveChannel(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -130635115:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
    break;
    }
}

void readTLMethodChannelsInviteToChannel(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 429865580:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsInviteToChannel(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 429865580:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLInputUser);
    break;
    }
}

void readTLMethodChannelsDeleteChannel(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1072619549:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsDeleteChannel(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1072619549:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
    break;
    }
}

void readTLMethodUpdatesGetChannelDifference(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 51854712:
    readTLUpdatesChannelDifference(stream, i, callback);
    break;
    }
}

void writeTLMethodUpdatesGetChannelDifference(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 51854712:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["force"].isNull()) | 
        0), callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLChannelMessagesFilter(stream, obj["filter"], callback);
        writeInt32(stream, obj["pts"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodMessagesEditChatAdmin(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1470377534:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesEditChatAdmin(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1470377534:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeBool(stream, obj["is_admin"], callback);
    break;
    }
}

void readTLMethodMessagesMigrateChat(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1568189671:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesMigrateChat(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1568189671:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
    break;
    }
}

void readTLMethodMessagesSearchGlobal(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1271290010:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSearchGlobal(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1271290010:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["folder_id"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["folder_id"], callback);
        writeString(stream, obj["q"], callback);
        writeTLMessagesFilter(stream, obj["filter"], callback);
        writeInt32(stream, obj["min_date"], callback);
        writeInt32(stream, obj["max_date"], callback);
        writeInt32(stream, obj["offset_rate"], callback);
        writeTLInputPeer(stream, obj["offset_peer"], callback);
        writeInt32(stream, obj["offset_id"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodMessagesReorderStickerSets(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2016638777:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReorderStickerSets(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2016638777:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["masks"].isNull()) | 
        0), callback);
        writeVector(stream, obj["order"], (void*) &writeInt64);
    break;
    }
}

void readTLMethodMessagesGetDocumentByHash(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 864953444:
    readTLDocument(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetDocumentByHash(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 864953444:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["sha256"], callback);
        writeInt32(stream, obj["size"], callback);
        writeString(stream, obj["mime_type"], callback);
    break;
    }
}

void readTLMethodMessagesGetSavedGifs(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1559270965:
    readTLMessagesSavedGifs(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetSavedGifs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1559270965:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesSaveGif(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 846868683:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSaveGif(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 846868683:
        writeInt32(stream, obj["_"], callback);
        writeTLInputDocument(stream, obj["id"], callback);
        writeBool(stream, obj["unsave"], callback);
    break;
    }
}

void readTLMethodMessagesGetInlineBotResults(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1364105629:
    readTLMessagesBotResults(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetInlineBotResults(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1364105629:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["geo_point"].isNull()) | 
        0), callback);
        writeTLInputUser(stream, obj["bot"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 1) writeTLInputGeoPoint(stream, obj["geo_point"], callback);
        writeString(stream, obj["query"], callback);
        writeString(stream, obj["offset"], callback);
    break;
    }
}

void readTLMethodMessagesSetInlineBotResults(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -346119674:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetInlineBotResults(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -346119674:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["gallery"].isNull()) | 
            (!obj["private"].isNull() << 1) | 
            (!obj["next_offset"].isNull() << 2) | 
            (!obj["switch_pm"].isNull() << 3) | 
        0), callback);
        writeInt64(stream, obj["query_id"], callback);
        writeVector(stream, obj["results"], (void*) &writeTLInputBotInlineResult);
        writeInt32(stream, obj["cache_time"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["next_offset"], callback);
        if (obj["flags"].toUInt() & 8) writeTLInlineBotSwitchPM(stream, obj["switch_pm"], callback);
    break;
    }
}

void readTLMethodMessagesSendInlineBotResult(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2057376407:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendInlineBotResult(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2057376407:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["silent"].isNull() << 5) | 
            (!obj["background"].isNull() << 6) | 
            (!obj["clear_draft"].isNull() << 7) | 
            (!obj["hide_via"].isNull() << 11) | 
            (!obj["reply_to_msg_id"].isNull()) | 
            (!obj["schedule_date"].isNull() << 10) | 
            (!obj["send_as"].isNull() << 13) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["reply_to_msg_id"], callback);
        writeInt64(stream, obj["random_id"], callback);
        writeInt64(stream, obj["query_id"], callback);
        writeString(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1024) writeInt32(stream, obj["schedule_date"], callback);
        if (obj["flags"].toUInt() & 8192) writeTLInputPeer(stream, obj["send_as"], callback);
    break;
    }
}

void readTLMethodChannelsExportMessageLink(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -432034325:
    readTLExportedMessageLink(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsExportMessageLink(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -432034325:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["grouped"].isNull()) | 
            (!obj["thread"].isNull() << 1) | 
        0), callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeInt32(stream, obj["id"], callback);
    break;
    }
}

void readTLMethodChannelsToggleSignatures(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 527021574:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsToggleSignatures(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 527021574:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeBool(stream, obj["enabled"], callback);
    break;
    }
}

void readTLMethodAuthResendCode(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1056025023:
    readTLAuthSentCode(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthResendCode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1056025023:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeString(stream, obj["phone_code_hash"], callback);
    break;
    }
}

void readTLMethodAuthCancelCode(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 520357240:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthCancelCode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 520357240:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeString(stream, obj["phone_code_hash"], callback);
    break;
    }
}

void readTLMethodMessagesGetMessageEditData(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -39416522:
    readTLMessagesMessageEditData(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetMessageEditData(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -39416522:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["id"], callback);
    break;
    }
}

void readTLMethodMessagesEditMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1224152952:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesEditMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1224152952:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["no_webpage"].isNull() << 1) | 
            (!obj["message"].isNull() << 11) | 
            (!obj["media"].isNull() << 14) | 
            (!obj["reply_markup"].isNull() << 2) | 
            (!obj["entities"].isNull() << 3) | 
            (!obj["schedule_date"].isNull() << 15) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 2048) writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 16384) writeTLInputMedia(stream, obj["media"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
        if (obj["flags"].toUInt() & 32768) writeInt32(stream, obj["schedule_date"], callback);
    break;
    }
}

void readTLMethodMessagesEditInlineBotMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2091549254:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesEditInlineBotMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2091549254:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["no_webpage"].isNull() << 1) | 
            (!obj["message"].isNull() << 11) | 
            (!obj["media"].isNull() << 14) | 
            (!obj["reply_markup"].isNull() << 2) | 
            (!obj["entities"].isNull() << 3) | 
        0), callback);
        writeTLInputBotInlineMessageID(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 2048) writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 16384) writeTLInputMedia(stream, obj["media"], callback);
        if (obj["flags"].toUInt() & 4) writeTLReplyMarkup(stream, obj["reply_markup"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
    break;
    }
}

void readTLMethodMessagesGetBotCallbackAnswer(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1824339449:
    readTLMessagesBotCallbackAnswer(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetBotCallbackAnswer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1824339449:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["game"].isNull() << 1) | 
            (!obj["data"].isNull()) | 
            (!obj["password"].isNull() << 2) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        if (obj["flags"].toUInt() & 1) writeByteArray(stream, obj["data"], callback);
        if (obj["flags"].toUInt() & 4) writeTLInputCheckPasswordSRP(stream, obj["password"], callback);
    break;
    }
}

void readTLMethodMessagesSetBotCallbackAnswer(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -712043766:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetBotCallbackAnswer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -712043766:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["alert"].isNull() << 1) | 
            (!obj["message"].isNull()) | 
            (!obj["url"].isNull() << 2) | 
        0), callback);
        writeInt64(stream, obj["query_id"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["url"], callback);
        writeInt32(stream, obj["cache_time"], callback);
    break;
    }
}

void readTLMethodContactsGetTopPeers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1758168906:
    readTLContactsTopPeers(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsGetTopPeers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1758168906:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["correspondents"].isNull()) | 
            (!obj["bots_pm"].isNull() << 1) | 
            (!obj["bots_inline"].isNull() << 2) | 
            (!obj["phone_calls"].isNull() << 3) | 
            (!obj["forward_users"].isNull() << 4) | 
            (!obj["forward_chats"].isNull() << 5) | 
            (!obj["groups"].isNull() << 10) | 
            (!obj["channels"].isNull() << 15) | 
        0), callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodContactsResetTopPeerRating(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 451113900:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsResetTopPeerRating(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 451113900:
        writeInt32(stream, obj["_"], callback);
        writeTLTopPeerCategory(stream, obj["category"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodMessagesGetPeerDialogs(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -462373635:
    readTLMessagesPeerDialogs(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetPeerDialogs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -462373635:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["peers"], (void*) &writeTLInputDialogPeer);
    break;
    }
}

void readTLMethodMessagesSaveDraft(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1137057461:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSaveDraft(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1137057461:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["no_webpage"].isNull() << 1) | 
            (!obj["reply_to_msg_id"].isNull()) | 
            (!obj["entities"].isNull() << 3) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["reply_to_msg_id"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeString(stream, obj["message"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
    break;
    }
}

void readTLMethodMessagesGetAllDrafts(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1782549861:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetAllDrafts(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1782549861:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodMessagesGetFeaturedStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1685588756:
    readTLMessagesFeaturedStickers(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetFeaturedStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1685588756:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesReadFeaturedStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1527873830:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReadFeaturedStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1527873830:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt64);
    break;
    }
}

void readTLMethodMessagesGetRecentStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1649852357:
    readTLMessagesRecentStickers(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetRecentStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1649852357:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["attached"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesSaveRecentSticker(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 958863608:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSaveRecentSticker(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 958863608:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["attached"].isNull()) | 
        0), callback);
        writeTLInputDocument(stream, obj["id"], callback);
        writeBool(stream, obj["unsave"], callback);
    break;
    }
}

void readTLMethodMessagesClearRecentStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1986437075:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesClearRecentStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1986437075:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["attached"].isNull()) | 
        0), callback);
    break;
    }
}

void readTLMethodMessagesGetArchivedStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1475442322:
    readTLMessagesArchivedStickers(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetArchivedStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1475442322:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["masks"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["offset_id"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodAccountSendConfirmPhoneCode(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 457157256:
    readTLAuthSentCode(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSendConfirmPhoneCode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 457157256:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["hash"], callback);
        writeTLCodeSettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMethodAccountConfirmPhone(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1596029123:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountConfirmPhone(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1596029123:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_code_hash"], callback);
        writeString(stream, obj["phone_code"], callback);
    break;
    }
}

void readTLMethodChannelsGetAdminedPublicChannels(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -122669393:
    readTLMessagesChats(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetAdminedPublicChannels(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -122669393:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["by_location"].isNull()) | 
            (!obj["check_limit"].isNull() << 1) | 
        0), callback);
    break;
    }
}

void readTLMethodMessagesGetMaskStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1678738104:
    readTLMessagesAllStickers(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetMaskStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1678738104:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesGetAttachedStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -866424884:
    readVector(stream, i, (void*) &readTLStickerSetCovered);
    break;
    }
}

void writeTLMethodMessagesGetAttachedStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -866424884:
        writeInt32(stream, obj["_"], callback);
        writeTLInputStickeredMedia(stream, obj["media"], callback);
    break;
    }
}

void readTLMethodAuthDropTempAuthKeys(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1907842680:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthDropTempAuthKeys(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1907842680:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["except_auth_keys"], (void*) &writeInt64);
    break;
    }
}

void readTLMethodMessagesSetGameScore(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1896289088:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetGameScore(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1896289088:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["edit_message"].isNull()) | 
            (!obj["force"].isNull() << 1) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["id"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeInt32(stream, obj["score"], callback);
    break;
    }
}

void readTLMethodMessagesSetInlineGameScore(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 363700068:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetInlineGameScore(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 363700068:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["edit_message"].isNull()) | 
            (!obj["force"].isNull() << 1) | 
        0), callback);
        writeTLInputBotInlineMessageID(stream, obj["id"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeInt32(stream, obj["score"], callback);
    break;
    }
}

void readTLMethodMessagesGetGameHighScores(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -400399203:
    readTLMessagesHighScores(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetGameHighScores(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -400399203:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["id"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
    break;
    }
}

void readTLMethodMessagesGetInlineGameHighScores(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 258170395:
    readTLMessagesHighScores(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetInlineGameHighScores(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 258170395:
        writeInt32(stream, obj["_"], callback);
        writeTLInputBotInlineMessageID(stream, obj["id"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
    break;
    }
}

void readTLMethodMessagesGetCommonChats(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -468934396:
    readTLMessagesChats(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetCommonChats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -468934396:
        writeInt32(stream, obj["_"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeInt64(stream, obj["max_id"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodMessagesGetAllChats(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2023787330:
    readTLMessagesChats(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetAllChats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2023787330:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["except_ids"], (void*) &writeInt64);
    break;
    }
}

void readTLMethodHelpSetBotUpdatesStatus(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -333262899:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpSetBotUpdatesStatus(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -333262899:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["pending_updates_count"], callback);
        writeString(stream, obj["message"], callback);
    break;
    }
}

void readTLMethodMessagesGetWebPage(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 852135825:
    readTLWebPage(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetWebPage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 852135825:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["url"], callback);
        writeInt32(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesToggleDialogPin(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1489903017:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesToggleDialogPin(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1489903017:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["pinned"].isNull()) | 
        0), callback);
        writeTLInputDialogPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodMessagesReorderPinnedDialogs(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 991616823:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReorderPinnedDialogs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 991616823:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["force"].isNull()) | 
        0), callback);
        writeInt32(stream, obj["folder_id"], callback);
        writeVector(stream, obj["order"], (void*) &writeTLInputDialogPeer);
    break;
    }
}

void readTLMethodMessagesGetPinnedDialogs(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -692498958:
    readTLMessagesPeerDialogs(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetPinnedDialogs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -692498958:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["folder_id"], callback);
    break;
    }
}

void readTLMethodBotsSendCustomRequest(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1440257555:
    readTLDataJSON(stream, i, callback);
    break;
    }
}

void writeTLMethodBotsSendCustomRequest(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1440257555:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["custom_method"], callback);
        writeTLDataJSON(stream, obj["params"], callback);
    break;
    }
}

void readTLMethodBotsAnswerWebhookJSONQuery(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -434028723:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodBotsAnswerWebhookJSONQuery(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -434028723:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["query_id"], callback);
        writeTLDataJSON(stream, obj["data"], callback);
    break;
    }
}

void readTLMethodUploadGetWebFile(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 619086221:
    readTLUploadWebFile(stream, i, callback);
    break;
    }
}

void writeTLMethodUploadGetWebFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 619086221:
        writeInt32(stream, obj["_"], callback);
        writeTLInputWebFileLocation(stream, obj["location"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodPaymentsGetPaymentForm(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1976353651:
    readTLPaymentsPaymentForm(stream, i, callback);
    break;
    }
}

void writeTLMethodPaymentsGetPaymentForm(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1976353651:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["theme_params"].isNull()) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLDataJSON(stream, obj["theme_params"], callback);
    break;
    }
}

void readTLMethodPaymentsGetPaymentReceipt(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 611897804:
    readTLPaymentsPaymentReceipt(stream, i, callback);
    break;
    }
}

void writeTLMethodPaymentsGetPaymentReceipt(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 611897804:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
    break;
    }
}

void readTLMethodPaymentsValidateRequestedInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -619695760:
    readTLPaymentsValidatedRequestedInfo(stream, i, callback);
    break;
    }
}

void writeTLMethodPaymentsValidateRequestedInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -619695760:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["save"].isNull()) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeTLPaymentRequestedInfo(stream, obj["info"], callback);
    break;
    }
}

void readTLMethodPaymentsSendPaymentForm(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 818134173:
    readTLPaymentsPaymentResult(stream, i, callback);
    break;
    }
}

void writeTLMethodPaymentsSendPaymentForm(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 818134173:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["requested_info_id"].isNull()) | 
            (!obj["shipping_option_id"].isNull() << 1) | 
            (!obj["tip_amount"].isNull() << 2) | 
        0), callback);
        writeInt64(stream, obj["form_id"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["requested_info_id"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["shipping_option_id"], callback);
        writeTLInputPaymentCredentials(stream, obj["credentials"], callback);
        if (obj["flags"].toUInt() & 4) writeInt64(stream, obj["tip_amount"], callback);
    break;
    }
}

void readTLMethodAccountGetTmpPassword(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1151208273:
    readTLAccountTmpPassword(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetTmpPassword(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1151208273:
        writeInt32(stream, obj["_"], callback);
        writeTLInputCheckPasswordSRP(stream, obj["password"], callback);
        writeInt32(stream, obj["period"], callback);
    break;
    }
}

void readTLMethodPaymentsGetSavedInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 578650699:
    readTLPaymentsSavedInfo(stream, i, callback);
    break;
    }
}

void writeTLMethodPaymentsGetSavedInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 578650699:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodPaymentsClearSavedInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -667062079:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodPaymentsClearSavedInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -667062079:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["credentials"].isNull()) | 
            (!obj["info"].isNull() << 1) | 
        0), callback);
    break;
    }
}

void readTLMethodMessagesSetBotShippingResults(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -436833542:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetBotShippingResults(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -436833542:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["error"].isNull()) | 
            (!obj["shipping_options"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["query_id"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["error"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["shipping_options"], (void*) &writeTLShippingOption);
    break;
    }
}

void readTLMethodMessagesSetBotPrecheckoutResults(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 163765653:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetBotPrecheckoutResults(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 163765653:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["success"].isNull() << 1) | 
            (!obj["error"].isNull()) | 
        0), callback);
        writeInt64(stream, obj["query_id"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["error"], callback);
    break;
    }
}

void readTLMethodStickersCreateStickerSet(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1876841625:
    readTLMessagesStickerSet(stream, i, callback);
    break;
    }
}

void writeTLMethodStickersCreateStickerSet(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1876841625:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["masks"].isNull()) | 
            (!obj["animated"].isNull() << 1) | 
            (!obj["videos"].isNull() << 4) | 
            (!obj["thumb"].isNull() << 2) | 
            (!obj["software"].isNull() << 3) | 
        0), callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeString(stream, obj["title"], callback);
        writeString(stream, obj["short_name"], callback);
        if (obj["flags"].toUInt() & 4) writeTLInputDocument(stream, obj["thumb"], callback);
        writeVector(stream, obj["stickers"], (void*) &writeTLInputStickerSetItem);
        if (obj["flags"].toUInt() & 8) writeString(stream, obj["software"], callback);
    break;
    }
}

void readTLMethodStickersRemoveStickerFromSet(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -143257775:
    readTLMessagesStickerSet(stream, i, callback);
    break;
    }
}

void writeTLMethodStickersRemoveStickerFromSet(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -143257775:
        writeInt32(stream, obj["_"], callback);
        writeTLInputDocument(stream, obj["sticker"], callback);
    break;
    }
}

void readTLMethodStickersChangeStickerPosition(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -4795190:
    readTLMessagesStickerSet(stream, i, callback);
    break;
    }
}

void writeTLMethodStickersChangeStickerPosition(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -4795190:
        writeInt32(stream, obj["_"], callback);
        writeTLInputDocument(stream, obj["sticker"], callback);
        writeInt32(stream, obj["position"], callback);
    break;
    }
}

void readTLMethodStickersAddStickerToSet(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2041315650:
    readTLMessagesStickerSet(stream, i, callback);
    break;
    }
}

void writeTLMethodStickersAddStickerToSet(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2041315650:
        writeInt32(stream, obj["_"], callback);
        writeTLInputStickerSet(stream, obj["stickerset"], callback);
        writeTLInputStickerSetItem(stream, obj["sticker"], callback);
    break;
    }
}

void readTLMethodMessagesUploadMedia(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1369162417:
    readTLMessageMedia(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesUploadMedia(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1369162417:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLInputMedia(stream, obj["media"], callback);
    break;
    }
}

void readTLMethodPhoneGetCallConfig(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1430593449:
    readTLDataJSON(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneGetCallConfig(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1430593449:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodPhoneRequestCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1124046573:
    readTLPhonePhoneCall(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneRequestCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1124046573:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["video"].isNull()) | 
        0), callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeInt32(stream, obj["random_id"], callback);
        writeByteArray(stream, obj["g_a_hash"], callback);
        writeTLPhoneCallProtocol(stream, obj["protocol"], callback);
    break;
    }
}

void readTLMethodPhoneAcceptCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1003664544:
    readTLPhonePhoneCall(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneAcceptCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1003664544:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPhoneCall(stream, obj["peer"], callback);
        writeByteArray(stream, obj["g_b"], callback);
        writeTLPhoneCallProtocol(stream, obj["protocol"], callback);
    break;
    }
}

void readTLMethodPhoneConfirmCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 788404002:
    readTLPhonePhoneCall(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneConfirmCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 788404002:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPhoneCall(stream, obj["peer"], callback);
        writeByteArray(stream, obj["g_a"], callback);
        writeInt64(stream, obj["key_fingerprint"], callback);
        writeTLPhoneCallProtocol(stream, obj["protocol"], callback);
    break;
    }
}

void readTLMethodPhoneReceivedCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 399855457:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneReceivedCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 399855457:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPhoneCall(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodPhoneDiscardCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1295269440:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneDiscardCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1295269440:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["video"].isNull()) | 
        0), callback);
        writeTLInputPhoneCall(stream, obj["peer"], callback);
        writeInt32(stream, obj["duration"], callback);
        writeTLPhoneCallDiscardReason(stream, obj["reason"], callback);
        writeInt64(stream, obj["connection_id"], callback);
    break;
    }
}

void readTLMethodPhoneSetCallRating(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1508562471:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneSetCallRating(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1508562471:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["user_initiative"].isNull()) | 
        0), callback);
        writeTLInputPhoneCall(stream, obj["peer"], callback);
        writeInt32(stream, obj["rating"], callback);
        writeString(stream, obj["comment"], callback);
    break;
    }
}

void readTLMethodPhoneSaveCallDebug(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 662363518:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneSaveCallDebug(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 662363518:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPhoneCall(stream, obj["peer"], callback);
        writeTLDataJSON(stream, obj["debug"], callback);
    break;
    }
}

void readTLMethodUploadGetCdnFile(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 536919235:
    readTLUploadCdnFile(stream, i, callback);
    break;
    }
}

void writeTLMethodUploadGetCdnFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 536919235:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["file_token"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodUploadReuploadCdnFile(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1691921240:
    readVector(stream, i, (void*) &readTLFileHash);
    break;
    }
}

void writeTLMethodUploadReuploadCdnFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1691921240:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["file_token"], callback);
        writeByteArray(stream, obj["request_token"], callback);
    break;
    }
}

void readTLMethodHelpGetCdnConfig(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1375900482:
    readTLCdnConfig(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetCdnConfig(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1375900482:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodLangpackGetLangPack(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -219008246:
    readTLLangPackDifference(stream, i, callback);
    break;
    }
}

void writeTLMethodLangpackGetLangPack(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -219008246:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_pack"], callback);
        writeString(stream, obj["lang_code"], callback);
    break;
    }
}

void readTLMethodLangpackGetStrings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -269862909:
    readVector(stream, i, (void*) &readTLLangPackString);
    break;
    }
}

void writeTLMethodLangpackGetStrings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -269862909:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_pack"], callback);
        writeString(stream, obj["lang_code"], callback);
        writeVector(stream, obj["keys"], (void*) &writeString);
    break;
    }
}

void readTLMethodLangpackGetDifference(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -845657435:
    readTLLangPackDifference(stream, i, callback);
    break;
    }
}

void writeTLMethodLangpackGetDifference(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -845657435:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_pack"], callback);
        writeString(stream, obj["lang_code"], callback);
        writeInt32(stream, obj["from_version"], callback);
    break;
    }
}

void readTLMethodLangpackGetLanguages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1120311183:
    readVector(stream, i, (void*) &readTLLangPackLanguage);
    break;
    }
}

void writeTLMethodLangpackGetLanguages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1120311183:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_pack"], callback);
    break;
    }
}

void readTLMethodChannelsEditBanned(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1763259007:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsEditBanned(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1763259007:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLInputPeer(stream, obj["participant"], callback);
        writeTLChatBannedRights(stream, obj["banned_rights"], callback);
    break;
    }
}

void readTLMethodChannelsGetAdminLog(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 870184064:
    readTLChannelsAdminLogResults(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetAdminLog(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 870184064:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["events_filter"].isNull()) | 
            (!obj["admins"].isNull() << 1) | 
        0), callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeString(stream, obj["q"], callback);
        if (obj["flags"].toUInt() & 1) writeTLChannelAdminLogEventsFilter(stream, obj["events_filter"], callback);
        if (obj["flags"].toUInt() & 2) writeVector(stream, obj["admins"], (void*) &writeTLInputUser);
        writeInt64(stream, obj["max_id"], callback);
        writeInt64(stream, obj["min_id"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodUploadGetCdnFileHashes(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1302676017:
    readVector(stream, i, (void*) &readTLFileHash);
    break;
    }
}

void writeTLMethodUploadGetCdnFileHashes(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1302676017:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["file_token"], callback);
        writeInt32(stream, obj["offset"], callback);
    break;
    }
}

void readTLMethodMessagesSendScreenshotNotification(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -914493408:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendScreenshotNotification(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -914493408:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["reply_to_msg_id"], callback);
        writeInt64(stream, obj["random_id"], callback);
    break;
    }
}

void readTLMethodChannelsSetStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -359881479:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsSetStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -359881479:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLInputStickerSet(stream, obj["stickerset"], callback);
    break;
    }
}

void readTLMethodMessagesGetFavedStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 82946729:
    readTLMessagesFavedStickers(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetFavedStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 82946729:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesFaveSticker(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1174420133:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesFaveSticker(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1174420133:
        writeInt32(stream, obj["_"], callback);
        writeTLInputDocument(stream, obj["id"], callback);
        writeBool(stream, obj["unfave"], callback);
    break;
    }
}

void readTLMethodChannelsReadMessageContents(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -357180360:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsReadMessageContents(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -357180360:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodContactsResetSaved(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2020263951:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsResetSaved(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2020263951:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodMessagesGetUnreadMentions(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1180140658:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetUnreadMentions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1180140658:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["offset_id"], callback);
        writeInt32(stream, obj["add_offset"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeInt32(stream, obj["max_id"], callback);
        writeInt32(stream, obj["min_id"], callback);
    break;
    }
}

void readTLMethodChannelsDeleteHistory(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1355375294:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsDeleteHistory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1355375294:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeInt32(stream, obj["max_id"], callback);
    break;
    }
}

void readTLMethodHelpGetRecentMeUrls(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1036054804:
    readTLHelpRecentMeUrls(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetRecentMeUrls(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1036054804:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["referer"], callback);
    break;
    }
}

void readTLMethodChannelsTogglePreHistoryHidden(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -356796084:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsTogglePreHistoryHidden(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -356796084:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeBool(stream, obj["enabled"], callback);
    break;
    }
}

void readTLMethodMessagesReadMentions(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 251759059:
    readTLMessagesAffectedHistory(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReadMentions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 251759059:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodMessagesGetRecentLocations(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1881817312:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetRecentLocations(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1881817312:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesSendMultiMedia(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -134016113:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendMultiMedia(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -134016113:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["silent"].isNull() << 5) | 
            (!obj["background"].isNull() << 6) | 
            (!obj["clear_draft"].isNull() << 7) | 
            (!obj["noforwards"].isNull() << 14) | 
            (!obj["reply_to_msg_id"].isNull()) | 
            (!obj["schedule_date"].isNull() << 10) | 
            (!obj["send_as"].isNull() << 13) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["reply_to_msg_id"], callback);
        writeVector(stream, obj["multi_media"], (void*) &writeTLInputSingleMedia);
        if (obj["flags"].toUInt() & 1024) writeInt32(stream, obj["schedule_date"], callback);
        if (obj["flags"].toUInt() & 8192) writeTLInputPeer(stream, obj["send_as"], callback);
    break;
    }
}

void readTLMethodMessagesUploadEncryptedFile(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1347929239:
    readTLEncryptedFile(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesUploadEncryptedFile(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1347929239:
        writeInt32(stream, obj["_"], callback);
        writeTLInputEncryptedChat(stream, obj["peer"], callback);
        writeTLInputEncryptedFile(stream, obj["file"], callback);
    break;
    }
}

void readTLMethodAccountGetWebAuthorizations(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 405695855:
    readTLAccountWebAuthorizations(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetWebAuthorizations(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 405695855:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountResetWebAuthorization(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 755087855:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountResetWebAuthorization(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 755087855:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodAccountResetWebAuthorizations(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1747789204:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountResetWebAuthorizations(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1747789204:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodMessagesSearchStickerSets(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 896555914:
    readTLMessagesFoundStickerSets(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSearchStickerSets(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 896555914:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["exclude_featured"].isNull()) | 
        0), callback);
        writeString(stream, obj["q"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodUploadGetFileHashes(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -956147407:
    readVector(stream, i, (void*) &readTLFileHash);
    break;
    }
}

void writeTLMethodUploadGetFileHashes(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -956147407:
        writeInt32(stream, obj["_"], callback);
        writeTLInputFileLocation(stream, obj["location"], callback);
        writeInt32(stream, obj["offset"], callback);
    break;
    }
}

void readTLMethodHelpGetTermsOfServiceUpdate(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 749019089:
    readTLHelpTermsOfServiceUpdate(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetTermsOfServiceUpdate(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 749019089:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodHelpAcceptTermsOfService(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -294455398:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpAcceptTermsOfService(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -294455398:
        writeInt32(stream, obj["_"], callback);
        writeTLDataJSON(stream, obj["id"], callback);
    break;
    }
}

void readTLMethodAccountGetAllSecureValues(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1299661699:
    readVector(stream, i, (void*) &readTLSecureValue);
    break;
    }
}

void writeTLMethodAccountGetAllSecureValues(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1299661699:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountGetSecureValue(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1936088002:
    readVector(stream, i, (void*) &readTLSecureValue);
    break;
    }
}

void writeTLMethodAccountGetSecureValue(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1936088002:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["types"], (void*) &writeTLSecureValueType);
    break;
    }
}

void readTLMethodAccountSaveSecureValue(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1986010339:
    readTLSecureValue(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSaveSecureValue(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1986010339:
        writeInt32(stream, obj["_"], callback);
        writeTLInputSecureValue(stream, obj["value"], callback);
        writeInt64(stream, obj["secure_secret_id"], callback);
    break;
    }
}

void readTLMethodAccountDeleteSecureValue(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1199522741:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountDeleteSecureValue(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1199522741:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["types"], (void*) &writeTLSecureValueType);
    break;
    }
}

void readTLMethodUsersSetSecureValueErrors(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1865902923:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodUsersSetSecureValueErrors(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1865902923:
        writeInt32(stream, obj["_"], callback);
        writeTLInputUser(stream, obj["id"], callback);
        writeVector(stream, obj["errors"], (void*) &writeTLSecureValueError);
    break;
    }
}

void readTLMethodAccountGetAuthorizationForm(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1456907910:
    readTLAccountAuthorizationForm(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetAuthorizationForm(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1456907910:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["bot_id"], callback);
        writeString(stream, obj["scope"], callback);
        writeString(stream, obj["public_key"], callback);
    break;
    }
}

void readTLMethodAccountAcceptAuthorization(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -202552205:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountAcceptAuthorization(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -202552205:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["bot_id"], callback);
        writeString(stream, obj["scope"], callback);
        writeString(stream, obj["public_key"], callback);
        writeVector(stream, obj["value_hashes"], (void*) &writeTLSecureValueHash);
        writeTLSecureCredentialsEncrypted(stream, obj["credentials"], callback);
    break;
    }
}

void readTLMethodAccountSendVerifyPhoneCode(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1516022023:
    readTLAuthSentCode(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSendVerifyPhoneCode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1516022023:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeTLCodeSettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMethodAccountVerifyPhone(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1305716726:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountVerifyPhone(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1305716726:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone_number"], callback);
        writeString(stream, obj["phone_code_hash"], callback);
        writeString(stream, obj["phone_code"], callback);
    break;
    }
}

void readTLMethodAccountSendVerifyEmailCode(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1880182943:
    readTLAccountSentEmailCode(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSendVerifyEmailCode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1880182943:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["email"], callback);
    break;
    }
}

void readTLMethodAccountVerifyEmail(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -323339813:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountVerifyEmail(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -323339813:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["email"], callback);
        writeString(stream, obj["code"], callback);
    break;
    }
}

void readTLMethodHelpGetDeepLinkInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1072547679:
    readTLHelpDeepLinkInfo(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetDeepLinkInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1072547679:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["path"], callback);
    break;
    }
}

void readTLMethodContactsGetSaved(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2098076769:
    readVector(stream, i, (void*) &readTLSavedContact);
    break;
    }
}

void writeTLMethodContactsGetSaved(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2098076769:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodChannelsGetLeftChannels(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2092831552:
    readTLMessagesChats(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetLeftChannels(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2092831552:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
    break;
    }
}

void readTLMethodAccountInitTakeoutSession(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -262453244:
    readTLAccountTakeout(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountInitTakeoutSession(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -262453244:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["contacts"].isNull()) | 
            (!obj["message_users"].isNull() << 1) | 
            (!obj["message_chats"].isNull() << 2) | 
            (!obj["message_megagroups"].isNull() << 3) | 
            (!obj["message_channels"].isNull() << 4) | 
            (!obj["files"].isNull() << 5) | 
            (!obj["file_max_size"].isNull() << 5) | 
        0), callback);
        if (obj["flags"].toUInt() & 32) writeInt32(stream, obj["file_max_size"], callback);
    break;
    }
}

void readTLMethodAccountFinishTakeoutSession(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 489050862:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountFinishTakeoutSession(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 489050862:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["success"].isNull()) | 
        0), callback);
    break;
    }
}

void readTLMethodMessagesGetSplitRanges(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 486505992:
    readVector(stream, i, (void*) &readTLMessageRange);
    break;
    }
}

void writeTLMethodMessagesGetSplitRanges(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 486505992:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodMessagesMarkDialogUnread(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1031349873:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesMarkDialogUnread(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1031349873:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["unread"].isNull()) | 
        0), callback);
        writeTLInputDialogPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodMessagesGetDialogUnreadMarks(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 585256482:
    readVector(stream, i, (void*) &readTLDialogPeer);
    break;
    }
}

void writeTLMethodMessagesGetDialogUnreadMarks(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 585256482:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodContactsToggleTopPeers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2062238246:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsToggleTopPeers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2062238246:
        writeInt32(stream, obj["_"], callback);
        writeBool(stream, obj["enabled"], callback);
    break;
    }
}

void readTLMethodMessagesClearAllDrafts(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2119757468:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesClearAllDrafts(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2119757468:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodHelpGetAppConfig(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1735311088:
    readTLJSONValue(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetAppConfig(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1735311088:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodHelpSaveAppLog(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1862465352:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpSaveAppLog(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1862465352:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["events"], (void*) &writeTLInputAppEvent);
    break;
    }
}

void readTLMethodHelpGetPassportConfig(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -966677240:
    readTLHelpPassportConfig(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetPassportConfig(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -966677240:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodLangpackGetLanguage(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1784243458:
    readTLLangPackLanguage(stream, i, callback);
    break;
    }
}

void writeTLMethodLangpackGetLanguage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1784243458:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_pack"], callback);
        writeString(stream, obj["lang_code"], callback);
    break;
    }
}

void readTLMethodMessagesUpdatePinnedMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -760547348:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesUpdatePinnedMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -760547348:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["silent"].isNull()) | 
            (!obj["unpin"].isNull() << 1) | 
            (!obj["pm_oneside"].isNull() << 2) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["id"], callback);
    break;
    }
}

void readTLMethodAccountConfirmPasswordEmail(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1881204448:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountConfirmPasswordEmail(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1881204448:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["code"], callback);
    break;
    }
}

void readTLMethodAccountResendPasswordEmail(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2055154197:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountResendPasswordEmail(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2055154197:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountCancelPasswordEmail(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1043606090:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountCancelPasswordEmail(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1043606090:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodHelpGetSupportName(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -748624084:
    readTLHelpSupportName(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetSupportName(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -748624084:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodHelpGetUserInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 59377875:
    readTLHelpUserInfo(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetUserInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 59377875:
        writeInt32(stream, obj["_"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
    break;
    }
}

void readTLMethodHelpEditUserInfo(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1723407216:
    readTLHelpUserInfo(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpEditUserInfo(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1723407216:
        writeInt32(stream, obj["_"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeString(stream, obj["message"], callback);
        writeVector(stream, obj["entities"], (void*) &writeTLMessageEntity);
    break;
    }
}

void readTLMethodAccountGetContactSignUpNotification(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1626880216:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetContactSignUpNotification(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1626880216:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountSetContactSignUpNotification(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -806076575:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSetContactSignUpNotification(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -806076575:
        writeInt32(stream, obj["_"], callback);
        writeBool(stream, obj["silent"], callback);
    break;
    }
}

void readTLMethodAccountGetNotifyExceptions(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1398240377:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetNotifyExceptions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1398240377:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["compare_sound"].isNull() << 1) | 
            (!obj["peer"].isNull()) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeTLInputNotifyPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodMessagesSendVote(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 283795844:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendVote(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 283795844:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeVector(stream, obj["options"], (void*) &writeByteArray);
    break;
    }
}

void readTLMethodMessagesGetPollResults(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1941660731:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetPollResults(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1941660731:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
    break;
    }
}

void readTLMethodMessagesGetOnlines(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1848369232:
    readTLChatOnlines(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetOnlines(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1848369232:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodMessagesEditChatAbout(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -554301545:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesEditChatAbout(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -554301545:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeString(stream, obj["about"], callback);
    break;
    }
}

void readTLMethodMessagesEditChatDefaultBannedRights(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1517917375:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesEditChatDefaultBannedRights(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1517917375:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLChatBannedRights(stream, obj["banned_rights"], callback);
    break;
    }
}

void readTLMethodAccountGetWallPaper(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -57811990:
    readTLWallPaper(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetWallPaper(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -57811990:
        writeInt32(stream, obj["_"], callback);
        writeTLInputWallPaper(stream, obj["wallpaper"], callback);
    break;
    }
}

void readTLMethodAccountUploadWallPaper(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -578472351:
    readTLWallPaper(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountUploadWallPaper(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -578472351:
        writeInt32(stream, obj["_"], callback);
        writeTLInputFile(stream, obj["file"], callback);
        writeString(stream, obj["mime_type"], callback);
        writeTLWallPaperSettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMethodAccountSaveWallPaper(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1817860919:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSaveWallPaper(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1817860919:
        writeInt32(stream, obj["_"], callback);
        writeTLInputWallPaper(stream, obj["wallpaper"], callback);
        writeBool(stream, obj["unsave"], callback);
        writeTLWallPaperSettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMethodAccountInstallWallPaper(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -18000023:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountInstallWallPaper(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -18000023:
        writeInt32(stream, obj["_"], callback);
        writeTLInputWallPaper(stream, obj["wallpaper"], callback);
        writeTLWallPaperSettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMethodAccountResetWallPapers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1153722364:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountResetWallPapers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1153722364:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountGetAutoDownloadSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1457130303:
    readTLAccountAutoDownloadSettings(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetAutoDownloadSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1457130303:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountSaveAutoDownloadSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1995661875:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSaveAutoDownloadSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1995661875:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["low"].isNull()) | 
            (!obj["high"].isNull() << 1) | 
        0), callback);
        writeTLAutoDownloadSettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMethodMessagesGetEmojiKeywords(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 899735650:
    readTLEmojiKeywordsDifference(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetEmojiKeywords(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 899735650:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_code"], callback);
    break;
    }
}

void readTLMethodMessagesGetEmojiKeywordsDifference(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 352892591:
    readTLEmojiKeywordsDifference(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetEmojiKeywordsDifference(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 352892591:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_code"], callback);
        writeInt32(stream, obj["from_version"], callback);
    break;
    }
}

void readTLMethodMessagesGetEmojiKeywordsLanguages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1318675378:
    readVector(stream, i, (void*) &readTLEmojiLanguage);
    break;
    }
}

void writeTLMethodMessagesGetEmojiKeywordsLanguages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1318675378:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["lang_codes"], (void*) &writeString);
    break;
    }
}

void readTLMethodMessagesGetEmojiURL(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -709817306:
    readTLEmojiURL(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetEmojiURL(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -709817306:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_code"], callback);
    break;
    }
}

void readTLMethodFoldersEditPeerFolders(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1749536939:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodFoldersEditPeerFolders(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1749536939:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["folder_peers"], (void*) &writeTLInputFolderPeer);
    break;
    }
}

void readTLMethodFoldersDeleteFolder(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 472471681:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodFoldersDeleteFolder(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 472471681:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["folder_id"], callback);
    break;
    }
}

void readTLMethodMessagesGetSearchCounters(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1932455680:
    readVector(stream, i, (void*) &readTLMessagesSearchCounter);
    break;
    }
}

void writeTLMethodMessagesGetSearchCounters(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1932455680:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["filters"], (void*) &writeTLMessagesFilter);
    break;
    }
}

void readTLMethodChannelsGetGroupsForDiscussion(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -170208392:
    readTLMessagesChats(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetGroupsForDiscussion(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -170208392:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodChannelsSetDiscussionGroup(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1079520178:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsSetDiscussionGroup(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1079520178:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["broadcast"], callback);
        writeTLInputChannel(stream, obj["group"], callback);
    break;
    }
}

void readTLMethodMessagesRequestUrlAuth(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 428848198:
    readTLUrlAuthResult(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesRequestUrlAuth(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 428848198:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["peer"].isNull() << 1) | 
            (!obj["msg_id"].isNull() << 1) | 
            (!obj["button_id"].isNull() << 1) | 
            (!obj["url"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["msg_id"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["button_id"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["url"], callback);
    break;
    }
}

void readTLMethodMessagesAcceptUrlAuth(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1322487515:
    readTLUrlAuthResult(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesAcceptUrlAuth(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1322487515:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["write_allowed"].isNull()) | 
            (!obj["peer"].isNull() << 1) | 
            (!obj["msg_id"].isNull() << 1) | 
            (!obj["button_id"].isNull() << 1) | 
            (!obj["url"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["msg_id"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["button_id"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["url"], callback);
    break;
    }
}

void readTLMethodMessagesHidePeerSettingsBar(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1336717624:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesHidePeerSettingsBar(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1336717624:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodContactsAddContact(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -386636848:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsAddContact(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -386636848:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["add_phone_privacy_exception"].isNull()) | 
        0), callback);
        writeTLInputUser(stream, obj["id"], callback);
        writeString(stream, obj["first_name"], callback);
        writeString(stream, obj["last_name"], callback);
        writeString(stream, obj["phone"], callback);
    break;
    }
}

void readTLMethodContactsAcceptContact(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -130964977:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsAcceptContact(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -130964977:
        writeInt32(stream, obj["_"], callback);
        writeTLInputUser(stream, obj["id"], callback);
    break;
    }
}

void readTLMethodChannelsEditCreator(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1892102881:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsEditCreator(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1892102881:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
        writeTLInputCheckPasswordSRP(stream, obj["password"], callback);
    break;
    }
}

void readTLMethodContactsGetLocated(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -750207932:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsGetLocated(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -750207932:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["background"].isNull() << 1) | 
            (!obj["self_expires"].isNull()) | 
        0), callback);
        writeTLInputGeoPoint(stream, obj["geo_point"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["self_expires"], callback);
    break;
    }
}

void readTLMethodChannelsEditLocation(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1491484525:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsEditLocation(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1491484525:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLInputGeoPoint(stream, obj["geo_point"], callback);
        writeString(stream, obj["address"], callback);
    break;
    }
}

void readTLMethodChannelsToggleSlowMode(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -304832784:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsToggleSlowMode(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -304832784:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeInt32(stream, obj["seconds"], callback);
    break;
    }
}

void readTLMethodMessagesGetScheduledHistory(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -183077365:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetScheduledHistory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -183077365:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesGetScheduledMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1111817116:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetScheduledMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1111817116:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodMessagesSendScheduledMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1120369398:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendScheduledMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1120369398:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodMessagesDeleteScheduledMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1504586518:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesDeleteScheduledMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1504586518:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodAccountUploadTheme(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 473805619:
    readTLDocument(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountUploadTheme(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 473805619:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["thumb"].isNull()) | 
        0), callback);
        writeTLInputFile(stream, obj["file"], callback);
        if (obj["flags"].toUInt() & 1) writeTLInputFile(stream, obj["thumb"], callback);
        writeString(stream, obj["file_name"], callback);
        writeString(stream, obj["mime_type"], callback);
    break;
    }
}

void readTLMethodAccountCreateTheme(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1697530880:
    readTLTheme(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountCreateTheme(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1697530880:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["document"].isNull() << 2) | 
            (!obj["settings"].isNull() << 3) | 
        0), callback);
        writeString(stream, obj["slug"], callback);
        writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) writeTLInputDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["settings"], (void*) &writeTLInputThemeSettings);
    break;
    }
}

void readTLMethodAccountUpdateTheme(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 737414348:
    readTLTheme(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountUpdateTheme(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 737414348:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["slug"].isNull()) | 
            (!obj["title"].isNull() << 1) | 
            (!obj["document"].isNull() << 2) | 
            (!obj["settings"].isNull() << 3) | 
        0), callback);
        writeString(stream, obj["format"], callback);
        writeTLInputTheme(stream, obj["theme"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["slug"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) writeTLInputDocument(stream, obj["document"], callback);
        if (obj["flags"].toUInt() & 8) writeVector(stream, obj["settings"], (void*) &writeTLInputThemeSettings);
    break;
    }
}

void readTLMethodAccountSaveTheme(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -229175188:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSaveTheme(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -229175188:
        writeInt32(stream, obj["_"], callback);
        writeTLInputTheme(stream, obj["theme"], callback);
        writeBool(stream, obj["unsave"], callback);
    break;
    }
}

void readTLMethodAccountInstallTheme(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -953697477:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountInstallTheme(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -953697477:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["dark"].isNull()) | 
            (!obj["theme"].isNull() << 1) | 
            (!obj["format"].isNull() << 2) | 
            (!obj["base_theme"].isNull() << 3) | 
        0), callback);
        if (obj["flags"].toUInt() & 2) writeTLInputTheme(stream, obj["theme"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["format"], callback);
        if (obj["flags"].toUInt() & 8) writeTLBaseTheme(stream, obj["base_theme"], callback);
    break;
    }
}

void readTLMethodAccountGetTheme(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1919060949:
    readTLTheme(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetTheme(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1919060949:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["format"], callback);
        writeTLInputTheme(stream, obj["theme"], callback);
        writeInt64(stream, obj["document_id"], callback);
    break;
    }
}

void readTLMethodAccountGetThemes(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1913054296:
    readTLAccountThemes(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetThemes(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1913054296:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["format"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodAuthExportLoginToken(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1210022402:
    readTLAuthLoginToken(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthExportLoginToken(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1210022402:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["api_id"], callback);
        writeString(stream, obj["api_hash"], callback);
        writeVector(stream, obj["except_ids"], (void*) &writeInt64);
    break;
    }
}

void readTLMethodAuthImportLoginToken(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1783866140:
    readTLAuthLoginToken(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthImportLoginToken(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1783866140:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["token"], callback);
    break;
    }
}

void readTLMethodAuthAcceptLoginToken(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -392909491:
    readTLAuthorization(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthAcceptLoginToken(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -392909491:
        writeInt32(stream, obj["_"], callback);
        writeByteArray(stream, obj["token"], callback);
    break;
    }
}

void readTLMethodAccountSetContentSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1250643605:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSetContentSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1250643605:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["sensitive_enabled"].isNull()) | 
        0), callback);
    break;
    }
}

void readTLMethodAccountGetContentSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1952756306:
    readTLAccountContentSettings(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetContentSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1952756306:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodChannelsGetInactiveChannels(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 300429806:
    readTLMessagesInactiveChats(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetInactiveChannels(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 300429806:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountGetMultiWallPapers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1705865692:
    readVector(stream, i, (void*) &readTLWallPaper);
    break;
    }
}

void writeTLMethodAccountGetMultiWallPapers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1705865692:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["wallpapers"], (void*) &writeTLInputWallPaper);
    break;
    }
}

void readTLMethodMessagesGetPollVotes(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1200736242:
    readTLMessagesVotesList(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetPollVotes(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1200736242:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["option"].isNull()) | 
            (!obj["offset"].isNull() << 1) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) writeByteArray(stream, obj["option"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodMessagesToggleStickerSets(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1257951254:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesToggleStickerSets(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1257951254:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["uninstall"].isNull()) | 
            (!obj["archive"].isNull() << 1) | 
            (!obj["unarchive"].isNull() << 2) | 
        0), callback);
        writeVector(stream, obj["stickersets"], (void*) &writeTLInputStickerSet);
    break;
    }
}

void readTLMethodPaymentsGetBankCardData(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 779736953:
    readTLPaymentsBankCardData(stream, i, callback);
    break;
    }
}

void writeTLMethodPaymentsGetBankCardData(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 779736953:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["number"], callback);
    break;
    }
}

void readTLMethodMessagesGetDialogFilters(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -241247891:
    readVector(stream, i, (void*) &readTLDialogFilter);
    break;
    }
}

void writeTLMethodMessagesGetDialogFilters(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -241247891:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodMessagesGetSuggestedDialogFilters(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1566780372:
    readVector(stream, i, (void*) &readTLDialogFilterSuggested);
    break;
    }
}

void writeTLMethodMessagesGetSuggestedDialogFilters(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1566780372:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodMessagesUpdateDialogFilter(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 450142282:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesUpdateDialogFilter(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 450142282:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["filter"].isNull()) | 
        0), callback);
        writeInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) writeTLDialogFilter(stream, obj["filter"], callback);
    break;
    }
}

void readTLMethodMessagesUpdateDialogFiltersOrder(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -983318044:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesUpdateDialogFiltersOrder(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -983318044:
        writeInt32(stream, obj["_"], callback);
        writeVector(stream, obj["order"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodStatsGetBroadcastStats(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1421720550:
    readTLStatsBroadcastStats(stream, i, callback);
    break;
    }
}

void writeTLMethodStatsGetBroadcastStats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1421720550:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["dark"].isNull()) | 
        0), callback);
        writeTLInputChannel(stream, obj["channel"], callback);
    break;
    }
}

void readTLMethodStatsLoadAsyncGraph(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1646092192:
    readTLStatsGraph(stream, i, callback);
    break;
    }
}

void writeTLMethodStatsLoadAsyncGraph(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1646092192:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["x"].isNull()) | 
        0), callback);
        writeString(stream, obj["token"], callback);
        if (obj["flags"].toUInt() & 1) writeInt64(stream, obj["x"], callback);
    break;
    }
}

void readTLMethodStickersSetStickerSetThumb(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1707717072:
    readTLMessagesStickerSet(stream, i, callback);
    break;
    }
}

void writeTLMethodStickersSetStickerSetThumb(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1707717072:
        writeInt32(stream, obj["_"], callback);
        writeTLInputStickerSet(stream, obj["stickerset"], callback);
        writeTLInputDocument(stream, obj["thumb"], callback);
    break;
    }
}

void readTLMethodBotsSetBotCommands(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 85399130:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodBotsSetBotCommands(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 85399130:
        writeInt32(stream, obj["_"], callback);
        writeTLBotCommandScope(stream, obj["scope"], callback);
        writeString(stream, obj["lang_code"], callback);
        writeVector(stream, obj["commands"], (void*) &writeTLBotCommand);
    break;
    }
}

void readTLMethodMessagesGetOldFeaturedStickers(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2127598753:
    readTLMessagesFeaturedStickers(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetOldFeaturedStickers(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2127598753:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodHelpGetPromoData(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1063816159:
    readTLHelpPromoData(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetPromoData(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1063816159:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodHelpHidePromoData(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 505748629:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpHidePromoData(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 505748629:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodPhoneSendSignalingData(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -8744061:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneSendSignalingData(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -8744061:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPhoneCall(stream, obj["peer"], callback);
        writeByteArray(stream, obj["data"], callback);
    break;
    }
}

void readTLMethodStatsGetMegagroupStats(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -589330937:
    readTLStatsMegagroupStats(stream, i, callback);
    break;
    }
}

void writeTLMethodStatsGetMegagroupStats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -589330937:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["dark"].isNull()) | 
        0), callback);
        writeTLInputChannel(stream, obj["channel"], callback);
    break;
    }
}

void readTLMethodAccountGetGlobalPrivacySettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -349483786:
    readTLGlobalPrivacySettings(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetGlobalPrivacySettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -349483786:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountSetGlobalPrivacySettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 517647042:
    readTLGlobalPrivacySettings(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSetGlobalPrivacySettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 517647042:
        writeInt32(stream, obj["_"], callback);
        writeTLGlobalPrivacySettings(stream, obj["settings"], callback);
    break;
    }
}

void readTLMethodHelpDismissSuggestion(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -183649631:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpDismissSuggestion(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -183649631:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeString(stream, obj["suggestion"], callback);
    break;
    }
}

void readTLMethodHelpGetCountriesList(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1935116200:
    readTLHelpCountriesList(stream, i, callback);
    break;
    }
}

void writeTLMethodHelpGetCountriesList(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1935116200:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["lang_code"], callback);
        writeInt32(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesGetReplies(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 584962828:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetReplies(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 584962828:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeInt32(stream, obj["offset_id"], callback);
        writeInt32(stream, obj["offset_date"], callback);
        writeInt32(stream, obj["add_offset"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeInt32(stream, obj["max_id"], callback);
        writeInt32(stream, obj["min_id"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesGetDiscussionMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1147761405:
    readTLMessagesDiscussionMessage(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetDiscussionMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1147761405:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
    break;
    }
}

void readTLMethodMessagesReadDiscussion(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -147740172:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReadDiscussion(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -147740172:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeInt32(stream, obj["read_max_id"], callback);
    break;
    }
}

void readTLMethodContactsBlockFromReplies(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 698914348:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsBlockFromReplies(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 698914348:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["delete_message"].isNull()) | 
            (!obj["delete_history"].isNull() << 1) | 
            (!obj["report_spam"].isNull() << 2) | 
        0), callback);
        writeInt32(stream, obj["msg_id"], callback);
    break;
    }
}

void readTLMethodStatsGetMessagePublicForwards(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1445996571:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodStatsGetMessagePublicForwards(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1445996571:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        writeInt32(stream, obj["offset_rate"], callback);
        writeTLInputPeer(stream, obj["offset_peer"], callback);
        writeInt32(stream, obj["offset_id"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodStatsGetMessageStats(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1226791947:
    readTLStatsMessageStats(stream, i, callback);
    break;
    }
}

void writeTLMethodStatsGetMessageStats(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1226791947:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["dark"].isNull()) | 
        0), callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeInt32(stream, obj["msg_id"], callback);
    break;
    }
}

void readTLMethodMessagesUnpinAllMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -265962357:
    readTLMessagesAffectedHistory(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesUnpinAllMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -265962357:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodPhoneCreateGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1221445336:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneCreateGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1221445336:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["rtmp_stream"].isNull() << 2) | 
            (!obj["title"].isNull()) | 
            (!obj["schedule_date"].isNull() << 1) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["random_id"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["schedule_date"], callback);
    break;
    }
}

void readTLMethodPhoneJoinGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1322057861:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneJoinGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1322057861:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["muted"].isNull()) | 
            (!obj["video_stopped"].isNull() << 2) | 
            (!obj["invite_hash"].isNull() << 1) | 
        0), callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeTLInputPeer(stream, obj["join_as"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["invite_hash"], callback);
        writeTLDataJSON(stream, obj["params"], callback);
    break;
    }
}

void readTLMethodPhoneLeaveGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1342404601:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneLeaveGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1342404601:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeInt32(stream, obj["source"], callback);
    break;
    }
}

void readTLMethodPhoneInviteToGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2067345760:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneInviteToGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2067345760:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeVector(stream, obj["users"], (void*) &writeTLInputUser);
    break;
    }
}

void readTLMethodPhoneDiscardGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2054648117:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneDiscardGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2054648117:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
    break;
    }
}

void readTLMethodPhoneToggleGroupCallSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1958458429:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneToggleGroupCallSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1958458429:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["reset_invite_hash"].isNull() << 1) | 
            (!obj["join_muted"].isNull()) | 
        0), callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        if (obj["flags"].toUInt() & 1) writeBool(stream, obj["join_muted"], callback);
    break;
    }
}

void readTLMethodPhoneGetGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 68699611:
    readTLPhoneGroupCall(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneGetGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 68699611:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodPhoneGetGroupParticipants(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -984033109:
    readTLPhoneGroupParticipants(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneGetGroupParticipants(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -984033109:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeVector(stream, obj["ids"], (void*) &writeTLInputPeer);
        writeVector(stream, obj["sources"], (void*) &writeInt32);
        writeString(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodPhoneCheckGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1248003721:
    readVector(stream, i, (void*) &readInt32);
    break;
    }
}

void writeTLMethodPhoneCheckGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1248003721:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeVector(stream, obj["sources"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodMessagesDeleteChat(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1540419152:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesDeleteChat(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1540419152:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["chat_id"], callback);
    break;
    }
}

void readTLMethodMessagesDeletePhoneCallHistory(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -104078327:
    readTLMessagesAffectedFoundMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesDeletePhoneCallHistory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -104078327:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["revoke"].isNull()) | 
        0), callback);
    break;
    }
}

void readTLMethodMessagesCheckHistoryImport(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1140726259:
    readTLMessagesHistoryImportParsed(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesCheckHistoryImport(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1140726259:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["import_head"], callback);
    break;
    }
}

void readTLMethodMessagesInitHistoryImport(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 873008187:
    readTLMessagesHistoryImport(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesInitHistoryImport(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 873008187:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLInputFile(stream, obj["file"], callback);
        writeInt32(stream, obj["media_count"], callback);
    break;
    }
}

void readTLMethodMessagesUploadImportedMedia(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 713433234:
    readTLMessageMedia(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesUploadImportedMedia(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 713433234:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt64(stream, obj["import_id"], callback);
        writeString(stream, obj["file_name"], callback);
        writeTLInputMedia(stream, obj["media"], callback);
    break;
    }
}

void readTLMethodMessagesStartHistoryImport(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1271008444:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesStartHistoryImport(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1271008444:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt64(stream, obj["import_id"], callback);
    break;
    }
}

void readTLMethodMessagesGetExportedChatInvites(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1565154314:
    readTLMessagesExportedChatInvites(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetExportedChatInvites(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1565154314:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["revoked"].isNull() << 3) | 
            (!obj["offset_date"].isNull() << 2) | 
            (!obj["offset_link"].isNull() << 2) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLInputUser(stream, obj["admin_id"], callback);
        if (obj["flags"].toUInt() & 4) writeInt32(stream, obj["offset_date"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["offset_link"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodMessagesGetExportedChatInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1937010524:
    readTLMessagesExportedChatInvite(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetExportedChatInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1937010524:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeString(stream, obj["link"], callback);
    break;
    }
}

void readTLMethodMessagesEditExportedChatInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1110823051:
    readTLMessagesExportedChatInvite(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesEditExportedChatInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1110823051:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["revoked"].isNull() << 2) | 
            (!obj["expire_date"].isNull()) | 
            (!obj["usage_limit"].isNull() << 1) | 
            (!obj["request_needed"].isNull() << 3) | 
            (!obj["title"].isNull() << 4) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeString(stream, obj["link"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["expire_date"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["usage_limit"], callback);
        if (obj["flags"].toUInt() & 8) writeBool(stream, obj["request_needed"], callback);
        if (obj["flags"].toUInt() & 16) writeString(stream, obj["title"], callback);
    break;
    }
}

void readTLMethodMessagesDeleteRevokedExportedChatInvites(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1452833749:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesDeleteRevokedExportedChatInvites(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1452833749:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLInputUser(stream, obj["admin_id"], callback);
    break;
    }
}

void readTLMethodMessagesDeleteExportedChatInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -731601877:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesDeleteExportedChatInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -731601877:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeString(stream, obj["link"], callback);
    break;
    }
}

void readTLMethodMessagesGetAdminsWithInvites(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 958457583:
    readTLMessagesChatAdminsWithInvites(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetAdminsWithInvites(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 958457583:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodMessagesGetChatInviteImporters(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -553329330:
    readTLMessagesChatInviteImporters(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetChatInviteImporters(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -553329330:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["requested"].isNull()) | 
            (!obj["link"].isNull() << 1) | 
            (!obj["q"].isNull() << 2) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["link"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["q"], callback);
        writeInt32(stream, obj["offset_date"], callback);
        writeTLInputUser(stream, obj["offset_user"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodMessagesSetHistoryTTL(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1207017500:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetHistoryTTL(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1207017500:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["period"], callback);
    break;
    }
}

void readTLMethodAccountReportProfilePhoto(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -91437323:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountReportProfilePhoto(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -91437323:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLInputPhoto(stream, obj["photo_id"], callback);
        writeTLReportReason(stream, obj["reason"], callback);
        writeString(stream, obj["message"], callback);
    break;
    }
}

void readTLMethodChannelsConvertToGigagroup(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 187239529:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsConvertToGigagroup(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 187239529:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
    break;
    }
}

void readTLMethodMessagesCheckHistoryImportPeer(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1573261059:
    readTLMessagesCheckedHistoryImportPeer(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesCheckHistoryImportPeer(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1573261059:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodPhoneToggleGroupCallRecord(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -248985848:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneToggleGroupCallRecord(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -248985848:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["start"].isNull()) | 
            (!obj["video"].isNull() << 2) | 
            (!obj["title"].isNull() << 1) | 
            (!obj["video_portrait"].isNull() << 2) | 
        0), callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["title"], callback);
        if (obj["flags"].toUInt() & 4) writeBool(stream, obj["video_portrait"], callback);
    break;
    }
}

void readTLMethodPhoneEditGroupCallParticipant(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1524155713:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneEditGroupCallParticipant(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1524155713:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["muted"].isNull()) | 
            (!obj["volume"].isNull() << 1) | 
            (!obj["raise_hand"].isNull() << 2) | 
            (!obj["video_stopped"].isNull() << 3) | 
            (!obj["video_paused"].isNull() << 4) | 
            (!obj["presentation_paused"].isNull() << 5) | 
        0), callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeTLInputPeer(stream, obj["participant"], callback);
        if (obj["flags"].toUInt() & 1) writeBool(stream, obj["muted"], callback);
        if (obj["flags"].toUInt() & 2) writeInt32(stream, obj["volume"], callback);
        if (obj["flags"].toUInt() & 4) writeBool(stream, obj["raise_hand"], callback);
        if (obj["flags"].toUInt() & 8) writeBool(stream, obj["video_stopped"], callback);
        if (obj["flags"].toUInt() & 16) writeBool(stream, obj["video_paused"], callback);
        if (obj["flags"].toUInt() & 32) writeBool(stream, obj["presentation_paused"], callback);
    break;
    }
}

void readTLMethodPhoneEditGroupCallTitle(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 480685066:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneEditGroupCallTitle(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 480685066:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeString(stream, obj["title"], callback);
    break;
    }
}

void readTLMethodPhoneGetGroupCallJoinAs(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -277077702:
    readTLPhoneJoinAsPeers(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneGetGroupCallJoinAs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -277077702:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodPhoneExportGroupCallInvite(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -425040769:
    readTLPhoneExportedGroupCallInvite(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneExportGroupCallInvite(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -425040769:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["can_self_unmute"].isNull()) | 
        0), callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
    break;
    }
}

void readTLMethodPhoneToggleGroupCallStartSubscription(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 563885286:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneToggleGroupCallStartSubscription(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 563885286:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeBool(stream, obj["subscribed"], callback);
    break;
    }
}

void readTLMethodPhoneStartScheduledGroupCall(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1451287362:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneStartScheduledGroupCall(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1451287362:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
    break;
    }
}

void readTLMethodPhoneSaveDefaultGroupCallJoinAs(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1465786252:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneSaveDefaultGroupCallJoinAs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1465786252:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLInputPeer(stream, obj["join_as"], callback);
    break;
    }
}

void readTLMethodPhoneJoinGroupCallPresentation(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -873829436:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneJoinGroupCallPresentation(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -873829436:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
        writeTLDataJSON(stream, obj["params"], callback);
    break;
    }
}

void readTLMethodPhoneLeaveGroupCallPresentation(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 475058500:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneLeaveGroupCallPresentation(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 475058500:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
    break;
    }
}

void readTLMethodStickersCheckShortName(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 676017721:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodStickersCheckShortName(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 676017721:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["short_name"], callback);
    break;
    }
}

void readTLMethodStickersSuggestShortName(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1303364867:
    readTLStickersSuggestedShortName(stream, i, callback);
    break;
    }
}

void writeTLMethodStickersSuggestShortName(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1303364867:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["title"], callback);
    break;
    }
}

void readTLMethodBotsResetBotCommands(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1032708345:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodBotsResetBotCommands(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1032708345:
        writeInt32(stream, obj["_"], callback);
        writeTLBotCommandScope(stream, obj["scope"], callback);
        writeString(stream, obj["lang_code"], callback);
    break;
    }
}

void readTLMethodBotsGetBotCommands(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -481554986:
    readVector(stream, i, (void*) &readTLBotCommand);
    break;
    }
}

void writeTLMethodBotsGetBotCommands(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -481554986:
        writeInt32(stream, obj["_"], callback);
        writeTLBotCommandScope(stream, obj["scope"], callback);
        writeString(stream, obj["lang_code"], callback);
    break;
    }
}

void readTLMethodAccountResetPassword(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1828139493:
    readTLAccountResetPasswordResult(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountResetPassword(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1828139493:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAccountDeclinePasswordReset(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1284770294:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountDeclinePasswordReset(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1284770294:
        writeInt32(stream, obj["_"], callback);
    break;
    }
}

void readTLMethodAuthCheckRecoveryPassword(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 221691769:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAuthCheckRecoveryPassword(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 221691769:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["code"], callback);
    break;
    }
}

void readTLMethodAccountGetChatThemes(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -700916087:
    readTLAccountThemes(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountGetChatThemes(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -700916087:
        writeInt32(stream, obj["_"], callback);
        writeInt64(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesSetChatTheme(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -432283329:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetChatTheme(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -432283329:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeString(stream, obj["emoticon"], callback);
    break;
    }
}

void readTLMethodChannelsViewSponsoredMessage(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1095836780:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsViewSponsoredMessage(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1095836780:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeByteArray(stream, obj["random_id"], callback);
    break;
    }
}

void readTLMethodChannelsGetSponsoredMessages(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -333377601:
    readTLMessagesSponsoredMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetSponsoredMessages(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -333377601:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
    break;
    }
}

void readTLMethodMessagesGetMessageReadParticipants(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 745510839:
    readVector(stream, i, (void*) &readInt64);
    break;
    }
}

void writeTLMethodMessagesGetMessageReadParticipants(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 745510839:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
    break;
    }
}

void readTLMethodMessagesGetSearchResultsCalendar(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1240514025:
    readTLMessagesSearchResultsCalendar(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetSearchResultsCalendar(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1240514025:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLMessagesFilter(stream, obj["filter"], callback);
        writeInt32(stream, obj["offset_id"], callback);
        writeInt32(stream, obj["offset_date"], callback);
    break;
    }
}

void readTLMethodMessagesGetSearchResultsPositions(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1855292323:
    readTLMessagesSearchResultsPositions(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetSearchResultsPositions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1855292323:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLMessagesFilter(stream, obj["filter"], callback);
        writeInt32(stream, obj["offset_id"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodMessagesHideChatJoinRequest(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 2145904661:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesHideChatJoinRequest(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 2145904661:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["approved"].isNull()) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLInputUser(stream, obj["user_id"], callback);
    break;
    }
}

void readTLMethodMessagesHideAllChatJoinRequests(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -528091926:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesHideAllChatJoinRequests(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -528091926:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["approved"].isNull()) | 
            (!obj["link"].isNull() << 1) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["link"], callback);
    break;
    }
}

void readTLMethodMessagesToggleNoForwards(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1323389022:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesToggleNoForwards(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1323389022:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeBool(stream, obj["enabled"], callback);
    break;
    }
}

void readTLMethodMessagesSaveDefaultSendAs(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -855777386:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSaveDefaultSendAs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -855777386:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeTLInputPeer(stream, obj["send_as"], callback);
    break;
    }
}

void readTLMethodChannelsGetSendAs(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 231174382:
    readTLChannelsSendAsPeers(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsGetSendAs(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 231174382:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodAccountSetAuthorizationTTL(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1081501024:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountSetAuthorizationTTL(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1081501024:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["authorization_ttl_days"], callback);
    break;
    }
}

void readTLMethodAccountChangeAuthorizationSettings(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 1089766498:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodAccountChangeAuthorizationSettings(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 1089766498:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["encrypted_requests_disabled"].isNull()) | 
            (!obj["call_requests_disabled"].isNull() << 1) | 
        0), callback);
        writeInt64(stream, obj["hash"], callback);
        if (obj["flags"].toUInt() & 1) writeBool(stream, obj["encrypted_requests_disabled"], callback);
        if (obj["flags"].toUInt() & 2) writeBool(stream, obj["call_requests_disabled"], callback);
    break;
    }
}

void readTLMethodChannelsDeleteParticipantHistory(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 913655003:
    readTLMessagesAffectedHistory(stream, i, callback);
    break;
    }
}

void writeTLMethodChannelsDeleteParticipantHistory(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 913655003:
        writeInt32(stream, obj["_"], callback);
        writeTLInputChannel(stream, obj["channel"], callback);
        writeTLInputPeer(stream, obj["participant"], callback);
    break;
    }
}

void readTLMethodMessagesSendReaction(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 627641572:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSendReaction(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 627641572:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["big"].isNull() << 1) | 
            (!obj["reaction"].isNull()) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["msg_id"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["reaction"], callback);
    break;
    }
}

void readTLMethodMessagesGetMessagesReactions(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1950707482:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetMessagesReactions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1950707482:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["id"], (void*) &writeInt32);
    break;
    }
}

void readTLMethodMessagesGetMessageReactionsList(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -521245833:
    readTLMessagesMessageReactionsList(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetMessageReactionsList(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -521245833:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["reaction"].isNull()) | 
            (!obj["offset"].isNull() << 1) | 
        0), callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["id"], callback);
        if (obj["flags"].toUInt() & 1) writeString(stream, obj["reaction"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["offset"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

void readTLMethodMessagesSetChatAvailableReactions(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 335875750:
    readTLUpdates(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetChatAvailableReactions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 335875750:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeVector(stream, obj["available_reactions"], (void*) &writeString);
    break;
    }
}

void readTLMethodMessagesGetAvailableReactions(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 417243308:
    readTLMessagesAvailableReactions(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetAvailableReactions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 417243308:
        writeInt32(stream, obj["_"], callback);
        writeInt32(stream, obj["hash"], callback);
    break;
    }
}

void readTLMethodMessagesSetDefaultReaction(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -647969580:
    readBool(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSetDefaultReaction(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -647969580:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["reaction"], callback);
    break;
    }
}

void readTLMethodMessagesTranslateText(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 617508334:
    readTLMessagesTranslatedText(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesTranslateText(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 617508334:
        writeInt32(stream, obj["_"], callback);
        writeUInt32(stream, obj["flags"] = (
            (!obj["peer"].isNull()) | 
            (!obj["msg_id"].isNull()) | 
            (!obj["text"].isNull() << 1) | 
            (!obj["from_lang"].isNull() << 2) | 
        0), callback);
        if (obj["flags"].toUInt() & 1) writeTLInputPeer(stream, obj["peer"], callback);
        if (obj["flags"].toUInt() & 1) writeInt32(stream, obj["msg_id"], callback);
        if (obj["flags"].toUInt() & 2) writeString(stream, obj["text"], callback);
        if (obj["flags"].toUInt() & 4) writeString(stream, obj["from_lang"], callback);
        writeString(stream, obj["to_lang"], callback);
    break;
    }
}

void readTLMethodMessagesGetUnreadReactions(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -396644838:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesGetUnreadReactions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -396644838:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeInt32(stream, obj["offset_id"], callback);
        writeInt32(stream, obj["add_offset"], callback);
        writeInt32(stream, obj["limit"], callback);
        writeInt32(stream, obj["max_id"], callback);
        writeInt32(stream, obj["min_id"], callback);
    break;
    }
}

void readTLMethodMessagesReadReactions(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -2099097129:
    readTLMessagesAffectedHistory(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesReadReactions(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -2099097129:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
    break;
    }
}

void readTLMethodContactsResolvePhone(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -1963375804:
    readTLContactsResolvedPeer(stream, i, callback);
    break;
    }
}

void writeTLMethodContactsResolvePhone(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -1963375804:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["phone"], callback);
    break;
    }
}

void readTLMethodPhoneGetGroupCallStreamChannels(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 447879488:
    readTLPhoneGroupCallStreamChannels(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneGetGroupCallStreamChannels(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 447879488:
        writeInt32(stream, obj["_"], callback);
        writeTLInputGroupCall(stream, obj["call"], callback);
    break;
    }
}

void readTLMethodPhoneGetGroupCallStreamRtmpUrl(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case -558650433:
    readTLPhoneGroupCallStreamRtmpUrl(stream, i, callback);
    break;
    }
}

void writeTLMethodPhoneGetGroupCallStreamRtmpUrl(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case -558650433:
        writeInt32(stream, obj["_"], callback);
        writeTLInputPeer(stream, obj["peer"], callback);
        writeBool(stream, obj["revoke"], callback);
    break;
    }
}

void readTLMethodMessagesSearchSentMedia(TelegramStream &stream, QVariant &i, void* callback)
{
    QVariant conId;
    readInt32(stream, conId, callback);
    switch (conId.toInt()) {
    case 276705696:
    readTLMessagesMessages(stream, i, callback);
    break;
    }
}

void writeTLMethodMessagesSearchSentMedia(TelegramStream &stream, QVariant i, void* callback)
{
    TelegramObject obj = i.toMap();
    switch (obj["_"].toInt()) {
    case 276705696:
        writeInt32(stream, obj["_"], callback);
        writeString(stream, obj["q"], callback);
        writeTLMessagesFilter(stream, obj["filter"], callback);
        writeInt32(stream, obj["limit"], callback);
    break;
    }
}

