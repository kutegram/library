#ifndef MTSCHEMA_H
#define MTSCHEMA_H

//Generated code.

#include "telegramstream.h"

namespace MTType {
enum Types
{
    Vector = 481674261,
    ResPQ = 85337187,
    PQInnerDataDc = -1443537003,
    PQInnerDataTempDc = 1459478408,
    ServerDHParamsOk = -790100132,
    ServerDHInnerData = -1249309254,
    ClientDHInnerData = 1715713620,
    DhGenOk = 1003222836,
    DhGenRetry = 1188831161,
    DhGenFail = -1499615742,
    BindAuthKeyInner = 1973679973,
    RpcResult = -212046591,
    RpcError = 558156313,
    RpcAnswerUnknown = 1579864942,
    RpcAnswerDroppedRunning = -847714938,
    RpcAnswerDropped = -1539647305,
    FutureSalt = 155834844,
    FutureSalts = -1370486635,
    Pong = 880243653,
    DestroySessionOk = -501201412,
    DestroySessionNone = 1658015945,
    NewSessionCreated = -1631450872,
    MsgContainer = 1945237724,
    Message = 1538843921,
    MsgCopy = -530561358,
    GzipPacked = 812830625,
    MsgsAck = 1658238041,
    BadMsgNotification = -1477445615,
    BadServerSalt = -307542917,
    MsgResendReq = 2105940488,
    MsgsStateReq = -630588590,
    MsgsStateInfo = 81704317,
    MsgsAllInfo = -1933520591,
    MsgDetailedInfo = 661470918,
    MsgNewDetailedInfo = -2137147681,
    DestroyAuthKeyOk = -161422892,
    DestroyAuthKeyNone = 178201177,
    DestroyAuthKeyFail = -368010477,
    ReqPqMultiMethod = -1099002127,
    ReqDHParamsMethod = -686627650,
    SetClientDHParamsMethod = -184262881,
    RpcDropAnswerMethod = 1491380032,
    GetFutureSaltsMethod = -1188971260,
    PingMethod = 2059302892,
    PingDelayDisconnectMethod = -213746804,
    DestroySessionMethod = -414113498,
    HttpWaitMethod = -1835453025,
    DestroyAuthKeyMethod = -784117408,
};
}

void readMTVector(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTVector(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTResPQ(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTResPQ(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTPQInnerData(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTPQInnerData(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTServerDHParams(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTServerDHParams(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTServerDHInnerData(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTServerDHInnerData(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTClientDHInnerData(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTClientDHInnerData(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTSetClientDHParamsAnswer(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTSetClientDHParamsAnswer(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTBindAuthKeyInner(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTBindAuthKeyInner(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTRpcResult(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTRpcResult(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTRpcError(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTRpcError(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTRpcDropAnswer(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTRpcDropAnswer(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTFutureSalt(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTFutureSalt(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTFutureSalts(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTFutureSalts(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTPong(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTPong(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTDestroySessionRes(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTDestroySessionRes(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTNewSession(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTNewSession(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMessageContainer(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMessageContainer(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMessage(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMessage(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMessageCopy(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMessageCopy(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTObject(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTObject(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMsgsAck(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMsgsAck(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTBadMsgNotification(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTBadMsgNotification(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMsgResendReq(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMsgResendReq(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMsgsStateReq(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMsgsStateReq(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMsgsStateInfo(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMsgsStateInfo(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMsgsAllInfo(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMsgsAllInfo(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMsgDetailedInfo(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMsgDetailedInfo(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTDestroyAuthKeyRes(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTDestroyAuthKeyRes(TelegramStream &stream, QVariant i, void* callback = 0);

void readMTMethodReqPqMulti(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMethodReqPqMulti(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMethodReqDHParams(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMethodReqDHParams(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMethodSetClientDHParams(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMethodSetClientDHParams(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMethodRpcDropAnswer(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMethodRpcDropAnswer(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMethodGetFutureSalts(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMethodGetFutureSalts(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMethodPing(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMethodPing(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMethodPingDelayDisconnect(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMethodPingDelayDisconnect(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMethodDestroySession(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMethodDestroySession(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMethodHttpWait(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMethodHttpWait(TelegramStream &stream, QVariant i, void* callback = 0);
void readMTMethodDestroyAuthKey(TelegramStream &stream, QVariant &i, void* callback = 0);
void writeMTMethodDestroyAuthKey(TelegramStream &stream, QVariant i, void* callback = 0);

#endif //MTSCHEMA_H

