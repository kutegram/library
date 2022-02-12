#ifndef TL_H
#define TL_H

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

#define TGOBJECT(name, id)  \
    TelegramObject name;    \
    name["_"] = id;

#define TOBJECT(name, id)  \
    TelegramObject name;    \
    name["_"] = id;

#define GETID(name)         \
    name["_"].toInt()

#define ID(name)         \
    name["_"].toInt()

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

#endif // TL_H
