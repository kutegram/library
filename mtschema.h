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

void readMTVector(TelegramStream &stream, QVariant &i);
void writeMTVector(TelegramStream &stream, QVariant i);
void readMTResPQ(TelegramStream &stream, QVariant &i);
void writeMTResPQ(TelegramStream &stream, QVariant i);
void readMTPQInnerData(TelegramStream &stream, QVariant &i);
void writeMTPQInnerData(TelegramStream &stream, QVariant i);
void readMTServerDHParams(TelegramStream &stream, QVariant &i);
void writeMTServerDHParams(TelegramStream &stream, QVariant i);
void readMTServerDHInnerData(TelegramStream &stream, QVariant &i);
void writeMTServerDHInnerData(TelegramStream &stream, QVariant i);
void readMTClientDHInnerData(TelegramStream &stream, QVariant &i);
void writeMTClientDHInnerData(TelegramStream &stream, QVariant i);
void readMTSetClientDHParamsAnswer(TelegramStream &stream, QVariant &i);
void writeMTSetClientDHParamsAnswer(TelegramStream &stream, QVariant i);
void readMTBindAuthKeyInner(TelegramStream &stream, QVariant &i);
void writeMTBindAuthKeyInner(TelegramStream &stream, QVariant i);
void readMTRpcResult(TelegramStream &stream, QVariant &i);
void writeMTRpcResult(TelegramStream &stream, QVariant i);
void readMTRpcError(TelegramStream &stream, QVariant &i);
void writeMTRpcError(TelegramStream &stream, QVariant i);
void readMTRpcDropAnswer(TelegramStream &stream, QVariant &i);
void writeMTRpcDropAnswer(TelegramStream &stream, QVariant i);
void readMTFutureSalt(TelegramStream &stream, QVariant &i);
void writeMTFutureSalt(TelegramStream &stream, QVariant i);
void readMTFutureSalts(TelegramStream &stream, QVariant &i);
void writeMTFutureSalts(TelegramStream &stream, QVariant i);
void readMTPong(TelegramStream &stream, QVariant &i);
void writeMTPong(TelegramStream &stream, QVariant i);
void readMTDestroySessionRes(TelegramStream &stream, QVariant &i);
void writeMTDestroySessionRes(TelegramStream &stream, QVariant i);
void readMTNewSession(TelegramStream &stream, QVariant &i);
void writeMTNewSession(TelegramStream &stream, QVariant i);
void readMTMessageContainer(TelegramStream &stream, QVariant &i);
void writeMTMessageContainer(TelegramStream &stream, QVariant i);
void readMTMessage(TelegramStream &stream, QVariant &i);
void writeMTMessage(TelegramStream &stream, QVariant i);
void readMTMessageCopy(TelegramStream &stream, QVariant &i);
void writeMTMessageCopy(TelegramStream &stream, QVariant i);
void readMTObject(TelegramStream &stream, QVariant &i);
void writeMTObject(TelegramStream &stream, QVariant i);
void readMTMsgsAck(TelegramStream &stream, QVariant &i);
void writeMTMsgsAck(TelegramStream &stream, QVariant i);
void readMTBadMsgNotification(TelegramStream &stream, QVariant &i);
void writeMTBadMsgNotification(TelegramStream &stream, QVariant i);
void readMTMsgResendReq(TelegramStream &stream, QVariant &i);
void writeMTMsgResendReq(TelegramStream &stream, QVariant i);
void readMTMsgsStateReq(TelegramStream &stream, QVariant &i);
void writeMTMsgsStateReq(TelegramStream &stream, QVariant i);
void readMTMsgsStateInfo(TelegramStream &stream, QVariant &i);
void writeMTMsgsStateInfo(TelegramStream &stream, QVariant i);
void readMTMsgsAllInfo(TelegramStream &stream, QVariant &i);
void writeMTMsgsAllInfo(TelegramStream &stream, QVariant i);
void readMTMsgDetailedInfo(TelegramStream &stream, QVariant &i);
void writeMTMsgDetailedInfo(TelegramStream &stream, QVariant i);
void readMTDestroyAuthKeyRes(TelegramStream &stream, QVariant &i);
void writeMTDestroyAuthKeyRes(TelegramStream &stream, QVariant i);

void readMTMethodReqPqMulti(TelegramStream &stream, QVariant &i);
void writeMTMethodReqPqMulti(TelegramStream &stream, QVariant i);
void readMTMethodReqDHParams(TelegramStream &stream, QVariant &i);
void writeMTMethodReqDHParams(TelegramStream &stream, QVariant i);
void readMTMethodSetClientDHParams(TelegramStream &stream, QVariant &i);
void writeMTMethodSetClientDHParams(TelegramStream &stream, QVariant i);
void readMTMethodRpcDropAnswer(TelegramStream &stream, QVariant &i);
void writeMTMethodRpcDropAnswer(TelegramStream &stream, QVariant i);
void readMTMethodGetFutureSalts(TelegramStream &stream, QVariant &i);
void writeMTMethodGetFutureSalts(TelegramStream &stream, QVariant i);
void readMTMethodPing(TelegramStream &stream, QVariant &i);
void writeMTMethodPing(TelegramStream &stream, QVariant i);
void readMTMethodPingDelayDisconnect(TelegramStream &stream, QVariant &i);
void writeMTMethodPingDelayDisconnect(TelegramStream &stream, QVariant i);
void readMTMethodDestroySession(TelegramStream &stream, QVariant &i);
void writeMTMethodDestroySession(TelegramStream &stream, QVariant i);
void readMTMethodHttpWait(TelegramStream &stream, QVariant &i);
void writeMTMethodHttpWait(TelegramStream &stream, QVariant i);
void readMTMethodDestroyAuthKey(TelegramStream &stream, QVariant &i);
void writeMTMethodDestroyAuthKey(TelegramStream &stream, QVariant i);

#endif //MTSCHEMA_H

