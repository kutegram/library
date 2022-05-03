#include "telegramclient.h"

#include "tlschema.h"
#include <QSqlQuery>
#include <QDir>
#include <QDesktopServices>
#include <QSqlError>

using namespace TLType;

bool TelegramClient::dbInit()
{
    QDir dir(QDesktopServices::storageLocation(QDesktopServices::DataLocation));
    QDir().mkpath(QDesktopServices::storageLocation(QDesktopServices::DataLocation));
    sessionDb.setDatabaseName(QDir::toNativeSeparators(dir.absoluteFilePath(sessionId + ".db")));
    sessionDb.open();

    if (sessionDb.lastError().isValid()) {
        qDebug() << "[SQL]" << sessionDb.lastError();
        //TODO: delete and reopen
        return false;
    }

    QSqlQuery uq("CREATE TABLE IF NOT EXISTS Users (Id INTEGER NOT NULL PRIMARY KEY, Serialized BLOB)", sessionDb);
    QSqlQuery cq("CREATE TABLE IF NOT EXISTS Chats (Id INTEGER NOT NULL PRIMARY KEY, Serialized BLOB)", sessionDb);

    return true;
}

bool TelegramClient::dbInsert(TObject obj)
{
    QSqlQuery query(sessionDb);

    switch (commonPeerType(obj)) {
    case TLType::User:
        query.prepare("REPLACE INTO Users (Id, Serialized) VALUES (:Id, :Serialized)");
        query.bindValue(":Id", obj["id"].toLongLong());
        query.bindValue(":Serialized", tlSerialize<&writeTLUser>(obj));
        query.exec();
        break;
    case Chat:
        query.prepare("REPLACE INTO Chats (Id, Serialized) VALUES (:Id, :Serialized)");
        query.bindValue(":Id", obj["id"].toLongLong());
        query.bindValue(":Serialized", tlSerialize<&writeTLChat>(obj));
        query.exec();
        break;
    default:
        qDebug() << "[SQL]" << "Unknown object to insert. " << ID(obj);
        return false;
    }

    if (query.lastError().isValid()) {
        qDebug() << "[SQL]" << query.lastError();
        return false;
    }

    return true;
}

bool TelegramClient::dbInsert(TVector vec)
{
    bool result = true;

    for (qint32 i = 0; i < vec.size(); ++i)
        result &= dbInsert(vec[i].toMap());

    return result;
}

TObject TelegramClient::getChat(qint64 id)
{
    QSqlQuery query(sessionDb);
    query.prepare("SELECT DISTINCT Id, Serialized FROM Chats WHERE Id = " + QString::number(id) + ';');
    query.exec();

    if (!query.first() || query.lastError().isValid()) {
        if (query.lastError().isValid())
            qDebug() << "[SQL]" << query.lastError();

        TOBJECT(obj, TLType::ChatEmpty);
        obj["id"] = id;
        return obj;
    }

    return tlDeserialize<&readTLChat>(query.value(1).toByteArray()).toMap();
}

TObject TelegramClient::getUser(qint64 id)
{
    QSqlQuery query(sessionDb);
    query.prepare("SELECT DISTINCT Id, Serialized FROM Users WHERE Id = " + QString::number(id) + ';');
    query.exec();

    if (!query.first() || query.lastError().isValid()) {
        if (query.lastError().isValid())
            qDebug() << "[SQL]" << query.lastError();

        //TODO: if (query.size() <= 0) users.getUsers

        TOBJECT(obj, TLType::UserEmpty);
        obj["id"] = id;
        return obj;
    }

    return tlDeserialize<&readTLUser>(query.value(1).toByteArray()).toMap();
}
