#ifndef MTSCHEMA_H
#define MTSCHEMA_H

//Generated code.

#include "telegramstream.h"

enum MTType
{
    MTVector = 481674261,
    MTResPQ = 85337187,
    MTPQInnerDataDc = -1443537003,
    MTPQInnerDataTempDc = 1459478408,
    MTServerDHParamsOk = -790100132,
    MTServerDHInnerData = -1249309254,
    MTClientDHInnerData = 1715713620,
    MTDhGenOk = 1003222836,
    MTDhGenRetry = 1188831161,
    MTDhGenFail = -1499615742,
    MTBindAuthKeyInner = 1973679973,
    MTRpcResult = -212046591,
    MTRpcError = 558156313,
    MTRpcAnswerUnknown = 1579864942,
    MTRpcAnswerDroppedRunning = -847714938,
    MTRpcAnswerDropped = -1539647305,
    MTFutureSalt = 155834844,
    MTFutureSalts = -1370486635,
    MTPong = 880243653,
    MTDestroySessionOk = -501201412,
    MTDestroySessionNone = 1658015945,
    MTNewSessionCreated = -1631450872,
    MTMsgContainer = 1945237724,
    MTMessage = 1538843921,
    MTMsgCopy = -530561358,
    MTGzipPacked = 812830625,
    MTMsgsAck = 1658238041,
    MTBadMsgNotification = -1477445615,
    MTBadServerSalt = -307542917,
    MTMsgResendReq = 2105940488,
    MTMsgsStateReq = -630588590,
    MTMsgsStateInfo = 81704317,
    MTMsgsAllInfo = -1933520591,
    MTMsgDetailedInfo = 661470918,
    MTMsgNewDetailedInfo = -2137147681,
    MTDestroyAuthKeyOk = -161422892,
    MTDestroyAuthKeyNone = 178201177,
    MTDestroyAuthKeyFail = -368010477,
    MTReqPqMulti = -1099002127,
    MTReqDHParams = -686627650,
    MTSetClientDHParams = -184262881,
    MTRpcDropAnswer = 1491380032,
    MTGetFutureSalts = -1188971260,
    MTPing = 2059302892,
    MTPingDelayDisconnect = -213746804,
    MTDestroySession = -414113498,
    MTHttpWait = -1835453025,
    MTDestroyAuthKey = -784117408,
};

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

#endif //MTSCHEMA_H

