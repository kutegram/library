//Generated code.

#include "mtschema.h"

void readMTVector(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 481674261:
        obj["id"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeMTVector(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 481674261:
        writeInt32(stream, obj["id"]);
    break;
    }
}

void readMTResPQ(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 85337187:
        obj["id"] = conId.toInt();
        readInt128(stream, obj["nonce"]);
        readInt128(stream, obj["server_nonce"]);
        readByteArray(stream, obj["pq"]);
        readVector(stream, obj["server_public_key_fingerprints"], (void*) &readInt64);
    break;
    }
    i = obj;
}

void writeMTResPQ(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 85337187:
        writeInt32(stream, obj["id"]);
        writeInt128(stream, obj["nonce"]);
        writeInt128(stream, obj["server_nonce"]);
        writeByteArray(stream, obj["pq"]);
        writeVector(stream, obj["server_public_key_fingerprints"], (void*) &writeInt64);
    break;
    }
}

void readMTPQInnerData(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -1443537003:
        obj["id"] = conId.toInt();
        readByteArray(stream, obj["pq"]);
        readByteArray(stream, obj["p"]);
        readByteArray(stream, obj["q"]);
        readInt128(stream, obj["nonce"]);
        readInt128(stream, obj["server_nonce"]);
        readInt256(stream, obj["new_nonce"]);
        readInt32(stream, obj["dc"]);
    break;
    case 1459478408:
        obj["id"] = conId.toInt();
        readByteArray(stream, obj["pq"]);
        readByteArray(stream, obj["p"]);
        readByteArray(stream, obj["q"]);
        readInt128(stream, obj["nonce"]);
        readInt128(stream, obj["server_nonce"]);
        readInt256(stream, obj["new_nonce"]);
        readInt32(stream, obj["dc"]);
        readInt32(stream, obj["expires_in"]);
    break;
    }
    i = obj;
}

void writeMTPQInnerData(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -1443537003:
        writeInt32(stream, obj["id"]);
        writeByteArray(stream, obj["pq"]);
        writeByteArray(stream, obj["p"]);
        writeByteArray(stream, obj["q"]);
        writeInt128(stream, obj["nonce"]);
        writeInt128(stream, obj["server_nonce"]);
        writeInt256(stream, obj["new_nonce"]);
        writeInt32(stream, obj["dc"]);
    break;
    case 1459478408:
        writeInt32(stream, obj["id"]);
        writeByteArray(stream, obj["pq"]);
        writeByteArray(stream, obj["p"]);
        writeByteArray(stream, obj["q"]);
        writeInt128(stream, obj["nonce"]);
        writeInt128(stream, obj["server_nonce"]);
        writeInt256(stream, obj["new_nonce"]);
        writeInt32(stream, obj["dc"]);
        writeInt32(stream, obj["expires_in"]);
    break;
    }
}

void readMTServerDHParams(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -790100132:
        obj["id"] = conId.toInt();
        readInt128(stream, obj["nonce"]);
        readInt128(stream, obj["server_nonce"]);
        readByteArray(stream, obj["encrypted_answer"]);
    break;
    }
    i = obj;
}

void writeMTServerDHParams(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -790100132:
        writeInt32(stream, obj["id"]);
        writeInt128(stream, obj["nonce"]);
        writeInt128(stream, obj["server_nonce"]);
        writeByteArray(stream, obj["encrypted_answer"]);
    break;
    }
}

void readMTServerDHInnerData(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -1249309254:
        obj["id"] = conId.toInt();
        readInt128(stream, obj["nonce"]);
        readInt128(stream, obj["server_nonce"]);
        readInt32(stream, obj["g"]);
        readByteArray(stream, obj["dh_prime"]);
        readByteArray(stream, obj["g_a"]);
        readInt32(stream, obj["server_time"]);
    break;
    }
    i = obj;
}

void writeMTServerDHInnerData(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -1249309254:
        writeInt32(stream, obj["id"]);
        writeInt128(stream, obj["nonce"]);
        writeInt128(stream, obj["server_nonce"]);
        writeInt32(stream, obj["g"]);
        writeByteArray(stream, obj["dh_prime"]);
        writeByteArray(stream, obj["g_a"]);
        writeInt32(stream, obj["server_time"]);
    break;
    }
}

void readMTClientDHInnerData(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 1715713620:
        obj["id"] = conId.toInt();
        readInt128(stream, obj["nonce"]);
        readInt128(stream, obj["server_nonce"]);
        readInt64(stream, obj["retry_id"]);
        readByteArray(stream, obj["g_b"]);
    break;
    }
    i = obj;
}

void writeMTClientDHInnerData(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 1715713620:
        writeInt32(stream, obj["id"]);
        writeInt128(stream, obj["nonce"]);
        writeInt128(stream, obj["server_nonce"]);
        writeInt64(stream, obj["retry_id"]);
        writeByteArray(stream, obj["g_b"]);
    break;
    }
}

void readMTSetClientDHParamsAnswer(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 1003222836:
        obj["id"] = conId.toInt();
        readInt128(stream, obj["nonce"]);
        readInt128(stream, obj["server_nonce"]);
        readInt128(stream, obj["new_nonce_hash1"]);
    break;
    case 1188831161:
        obj["id"] = conId.toInt();
        readInt128(stream, obj["nonce"]);
        readInt128(stream, obj["server_nonce"]);
        readInt128(stream, obj["new_nonce_hash2"]);
    break;
    case -1499615742:
        obj["id"] = conId.toInt();
        readInt128(stream, obj["nonce"]);
        readInt128(stream, obj["server_nonce"]);
        readInt128(stream, obj["new_nonce_hash3"]);
    break;
    }
    i = obj;
}

void writeMTSetClientDHParamsAnswer(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 1003222836:
        writeInt32(stream, obj["id"]);
        writeInt128(stream, obj["nonce"]);
        writeInt128(stream, obj["server_nonce"]);
        writeInt128(stream, obj["new_nonce_hash1"]);
    break;
    case 1188831161:
        writeInt32(stream, obj["id"]);
        writeInt128(stream, obj["nonce"]);
        writeInt128(stream, obj["server_nonce"]);
        writeInt128(stream, obj["new_nonce_hash2"]);
    break;
    case -1499615742:
        writeInt32(stream, obj["id"]);
        writeInt128(stream, obj["nonce"]);
        writeInt128(stream, obj["server_nonce"]);
        writeInt128(stream, obj["new_nonce_hash3"]);
    break;
    }
}

void readMTBindAuthKeyInner(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 1973679973:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["nonce"]);
        readInt64(stream, obj["temp_auth_key_id"]);
        readInt64(stream, obj["perm_auth_key_id"]);
        readInt64(stream, obj["temp_session_id"]);
        readInt32(stream, obj["expires_at"]);
    break;
    }
    i = obj;
}

void writeMTBindAuthKeyInner(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 1973679973:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["nonce"]);
        writeInt64(stream, obj["temp_auth_key_id"]);
        writeInt64(stream, obj["perm_auth_key_id"]);
        writeInt64(stream, obj["temp_session_id"]);
        writeInt32(stream, obj["expires_at"]);
    break;
    }
}

void readMTRpcResult(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -212046591:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["req_msg_id"]);
        //Unsupported. (x, !x, object)
    break;
    }
    i = obj;
}

void writeMTRpcResult(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -212046591:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["req_msg_id"]);
        //Unsupported. (x, !x, object)
    break;
    }
}

void readMTRpcError(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 558156313:
        obj["id"] = conId.toInt();
        readInt32(stream, obj["error_code"]);
        readString(stream, obj["error_message"]);
    break;
    }
    i = obj;
}

void writeMTRpcError(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 558156313:
        writeInt32(stream, obj["id"]);
        writeInt32(stream, obj["error_code"]);
        writeString(stream, obj["error_message"]);
    break;
    }
}

void readMTRpcDropAnswer(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 1579864942:
        obj["id"] = conId.toInt();
    break;
    case -847714938:
        obj["id"] = conId.toInt();
    break;
    case -1539647305:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["msg_id"]);
        readInt32(stream, obj["seq_no"]);
        readInt32(stream, obj["bytes"]);
    break;
    }
    i = obj;
}

void writeMTRpcDropAnswer(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 1579864942:
        writeInt32(stream, obj["id"]);
    break;
    case -847714938:
        writeInt32(stream, obj["id"]);
    break;
    case -1539647305:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["msg_id"]);
        writeInt32(stream, obj["seq_no"]);
        writeInt32(stream, obj["bytes"]);
    break;
    }
}

void readMTFutureSalt(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 155834844:
        obj["id"] = conId.toInt();
        readInt32(stream, obj["valid_since"]);
        readInt32(stream, obj["valid_until"]);
        readInt64(stream, obj["salt"]);
    break;
    }
    i = obj;
}

void writeMTFutureSalt(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 155834844:
        writeInt32(stream, obj["id"]);
        writeInt32(stream, obj["valid_since"]);
        writeInt32(stream, obj["valid_until"]);
        writeInt64(stream, obj["salt"]);
    break;
    }
}

void readMTFutureSalts(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -1370486635:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["req_msg_id"]);
        readInt32(stream, obj["now"]);
        readVector(stream, obj["salts"], (void*) &readMTFutureSalt);
    break;
    }
    i = obj;
}

void writeMTFutureSalts(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -1370486635:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["req_msg_id"]);
        writeInt32(stream, obj["now"]);
        writeVector(stream, obj["salts"], (void*) &writeMTFutureSalt);
    break;
    }
}

void readMTPong(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 880243653:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["msg_id"]);
        readInt64(stream, obj["ping_id"]);
    break;
    }
    i = obj;
}

void writeMTPong(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 880243653:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["msg_id"]);
        writeInt64(stream, obj["ping_id"]);
    break;
    }
}

void readMTDestroySessionRes(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -501201412:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["session_id"]);
    break;
    case 1658015945:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["session_id"]);
    break;
    }
    i = obj;
}

void writeMTDestroySessionRes(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -501201412:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["session_id"]);
    break;
    case 1658015945:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["session_id"]);
    break;
    }
}

void readMTNewSession(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -1631450872:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["first_msg_id"]);
        readInt64(stream, obj["unique_id"]);
        readInt64(stream, obj["server_salt"]);
    break;
    }
    i = obj;
}

void writeMTNewSession(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -1631450872:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["first_msg_id"]);
        writeInt64(stream, obj["unique_id"]);
        writeInt64(stream, obj["server_salt"]);
    break;
    }
}

void readMTMessageContainer(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 1945237724:
        obj["id"] = conId.toInt();
        readVector(stream, obj["messages"], (void*) &readMTMessage);
    break;
    }
    i = obj;
}

void writeMTMessageContainer(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 1945237724:
        writeInt32(stream, obj["id"]);
        writeVector(stream, obj["messages"], (void*) &writeMTMessage);
    break;
    }
}

void readMTMessage(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 1538843921:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["msg_id"]);
        readInt32(stream, obj["seqno"]);
        readInt32(stream, obj["bytes"]);
        //Unsupported. (x, !x, object)
    break;
    }
    i = obj;
}

void writeMTMessage(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 1538843921:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["msg_id"]);
        writeInt32(stream, obj["seqno"]);
        writeInt32(stream, obj["bytes"]);
        //Unsupported. (x, !x, object)
    break;
    }
}

void readMTMessageCopy(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -530561358:
        obj["id"] = conId.toInt();
        readMTMessage(stream, obj["orig_message"]);
    break;
    }
    i = obj;
}

void writeMTMessageCopy(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -530561358:
        writeInt32(stream, obj["id"]);
        writeMTMessage(stream, obj["orig_message"]);
    break;
    }
}

void readMTObject(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 812830625:
        obj["id"] = conId.toInt();
        readByteArray(stream, obj["packed_data"]);
    break;
    }
    i = obj;
}

void writeMTObject(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 812830625:
        writeInt32(stream, obj["id"]);
        writeByteArray(stream, obj["packed_data"]);
    break;
    }
}

void readMTMsgsAck(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 1658238041:
        obj["id"] = conId.toInt();
        readVector(stream, obj["msg_ids"], (void*) &readInt64);
    break;
    }
    i = obj;
}

void writeMTMsgsAck(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 1658238041:
        writeInt32(stream, obj["id"]);
        writeVector(stream, obj["msg_ids"], (void*) &writeInt64);
    break;
    }
}

void readMTBadMsgNotification(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -1477445615:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["bad_msg_id"]);
        readInt32(stream, obj["bad_msg_seqno"]);
        readInt32(stream, obj["error_code"]);
    break;
    case -307542917:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["bad_msg_id"]);
        readInt32(stream, obj["bad_msg_seqno"]);
        readInt32(stream, obj["error_code"]);
        readInt64(stream, obj["new_server_salt"]);
    break;
    }
    i = obj;
}

void writeMTBadMsgNotification(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -1477445615:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["bad_msg_id"]);
        writeInt32(stream, obj["bad_msg_seqno"]);
        writeInt32(stream, obj["error_code"]);
    break;
    case -307542917:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["bad_msg_id"]);
        writeInt32(stream, obj["bad_msg_seqno"]);
        writeInt32(stream, obj["error_code"]);
        writeInt64(stream, obj["new_server_salt"]);
    break;
    }
}

void readMTMsgResendReq(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 2105940488:
        obj["id"] = conId.toInt();
        readVector(stream, obj["msg_ids"], (void*) &readInt64);
    break;
    }
    i = obj;
}

void writeMTMsgResendReq(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 2105940488:
        writeInt32(stream, obj["id"]);
        writeVector(stream, obj["msg_ids"], (void*) &writeInt64);
    break;
    }
}

void readMTMsgsStateReq(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -630588590:
        obj["id"] = conId.toInt();
        readVector(stream, obj["msg_ids"], (void*) &readInt64);
    break;
    }
    i = obj;
}

void writeMTMsgsStateReq(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -630588590:
        writeInt32(stream, obj["id"]);
        writeVector(stream, obj["msg_ids"], (void*) &writeInt64);
    break;
    }
}

void readMTMsgsStateInfo(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 81704317:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["req_msg_id"]);
        readByteArray(stream, obj["info"]);
    break;
    }
    i = obj;
}

void writeMTMsgsStateInfo(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 81704317:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["req_msg_id"]);
        writeByteArray(stream, obj["info"]);
    break;
    }
}

void readMTMsgsAllInfo(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -1933520591:
        obj["id"] = conId.toInt();
        readVector(stream, obj["msg_ids"], (void*) &readInt64);
        readByteArray(stream, obj["info"]);
    break;
    }
    i = obj;
}

void writeMTMsgsAllInfo(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -1933520591:
        writeInt32(stream, obj["id"]);
        writeVector(stream, obj["msg_ids"], (void*) &writeInt64);
        writeByteArray(stream, obj["info"]);
    break;
    }
}

void readMTMsgDetailedInfo(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case 661470918:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["msg_id"]);
        readInt64(stream, obj["answer_msg_id"]);
        readInt32(stream, obj["bytes"]);
        readInt32(stream, obj["status"]);
    break;
    case -2137147681:
        obj["id"] = conId.toInt();
        readInt64(stream, obj["answer_msg_id"]);
        readInt32(stream, obj["bytes"]);
        readInt32(stream, obj["status"]);
    break;
    }
    i = obj;
}

void writeMTMsgDetailedInfo(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case 661470918:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["msg_id"]);
        writeInt64(stream, obj["answer_msg_id"]);
        writeInt32(stream, obj["bytes"]);
        writeInt32(stream, obj["status"]);
    break;
    case -2137147681:
        writeInt32(stream, obj["id"]);
        writeInt64(stream, obj["answer_msg_id"]);
        writeInt32(stream, obj["bytes"]);
        writeInt32(stream, obj["status"]);
    break;
    }
}

void readMTDestroyAuthKeyRes(TelegramStream &stream, QVariant &i)
{
    TelegramObject obj;
    QVariant conId;
    readInt32(stream, conId);
    switch (conId.toInt()) {
    case -161422892:
        obj["id"] = conId.toInt();
    break;
    case 178201177:
        obj["id"] = conId.toInt();
    break;
    case -368010477:
        obj["id"] = conId.toInt();
    break;
    }
    i = obj;
}

void writeMTDestroyAuthKeyRes(TelegramStream &stream, QVariant i)
{
    TelegramObject obj = i.toMap();
    switch (obj["id"].toInt()) {
    case -161422892:
        writeInt32(stream, obj["id"]);
    break;
    case 178201177:
        writeInt32(stream, obj["id"]);
    break;
    case -368010477:
        writeInt32(stream, obj["id"]);
    break;
    }
}

