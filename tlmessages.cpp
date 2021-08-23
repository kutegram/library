#include "tlmessages.h"

#include "telegramclient.h"
#include "tlschema.h"

#ifndef QT_NO_DEBUG_OUTPUT
#include <QtDebug>
#endif

void TelegramClient::getDialogs()
{
    TGOBJECT(getDialogs, TLType::MessagesGetDialogsMethod);

    //getDialogs["exclude_pinned"] = true;
    getDialogs["folder_id"] = 0; //0 for main list, 1 for archived chats

    TGOBJECT(offsetPeer, TLType::InputPeerEmpty);

    getDialogs["offset_peer"] = offsetPeer;
    getDialogs["limit"] = 40;

    sendMTObject< &writeTLMethodMessagesGetDialogs >(getDialogs);
}

void TelegramClient::handleDialogs(QByteArray data)
{
    TelegramPacket packet(data);
    QVariant var;

    readTLMessagesDialogs(packet, var);
    TelegramObject dialogsObject = var.toMap();

    TelegramVector dialogs = dialogsObject["dialogs"].toList();
    //TODO
#ifndef QT_NO_DEBUG_OUTPUT
    for (qint32 i = 0; i < dialogs.size(); ++i)  qDebug() << dialogs[i].toMap()["folder_id"].toInt();
#endif

    emit gotDialogs();
}

void TelegramClient::handleDialogsSlice(QByteArray data)
{
    handleDialogs(data);
}
