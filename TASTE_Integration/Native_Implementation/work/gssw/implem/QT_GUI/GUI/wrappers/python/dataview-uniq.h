#ifndef GENERATED_ASN1SCC_dataview_uniq_H
#define GENERATED_ASN1SCC_dataview_uniq_H
/*
Code automatically generated by asn1scc tool
*/
#include "asn1crt.h"
#include "asn1crt_encoding.h"


#ifdef  __cplusplus
extern "C" {
#endif


typedef asn1SccUint T_UInt16;


flag T_UInt16_Equal(const T_UInt16* pVal1, const T_UInt16* pVal2);

void T_UInt16_Initialize(T_UInt16* pVal);

#define ERR_T_UINT16		1  /**/
flag T_UInt16_IsConstraintValid(const T_UInt16* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_UINT16		2  /**/
#define T_UInt16_REQUIRED_BYTES_FOR_ENCODING       2 
#define T_UInt16_REQUIRED_BITS_FOR_ENCODING        16

flag T_UInt16_Encode(const T_UInt16* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_UINT16		3  /**/
flag T_UInt16_Decode(T_UInt16* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_UINT16		4  /**/
#define T_UInt16_REQUIRED_BYTES_FOR_ACN_ENCODING       2 
#define T_UInt16_REQUIRED_BITS_FOR_ACN_ENCODING        16

flag T_UInt16_ACN_Encode(const T_UInt16* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_UINT16		5  /**/
flag T_UInt16_ACN_Decode(T_UInt16* pVal, BitStream* pBitStrm, int* pErrCode);
typedef T_UInt16 Analog_Data;


flag Analog_Data_Equal(const Analog_Data* pVal1, const Analog_Data* pVal2);

void Analog_Data_Initialize(Analog_Data* pVal);

#define ERR_ANALOG_DATA_2		91  /**/
flag Analog_Data_IsConstraintValid(const Analog_Data* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_ANALOG_DATA_2		92  /**/
#define Analog_Data_REQUIRED_BYTES_FOR_ENCODING       2 
#define Analog_Data_REQUIRED_BITS_FOR_ENCODING        16

flag Analog_Data_Encode(const Analog_Data* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_ANALOG_DATA_2		93  /**/
flag Analog_Data_Decode(Analog_Data* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_ANALOG_DATA_2		94  /**/
#define Analog_Data_REQUIRED_BYTES_FOR_ACN_ENCODING       2 
#define Analog_Data_REQUIRED_BITS_FOR_ACN_ENCODING        16

flag Analog_Data_ACN_Encode(const Analog_Data* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_ANALOG_DATA_2		95  /**/
flag Analog_Data_ACN_Decode(Analog_Data* pVal, BitStream* pBitStrm, int* pErrCode);
/*-- Analog_Data_Table --------------------------------------------*/
typedef struct {
    T_UInt16 obc_t;
    T_UInt16 obc_v;

} Analog_Data_Table;

flag Analog_Data_Table_Equal(const Analog_Data_Table* pVal1, const Analog_Data_Table* pVal2);

void Analog_Data_Table_Initialize(Analog_Data_Table* pVal);

#define ERR_ANALOG_DATA_TABLE		126  /**/
#define ERR_ANALOG_DATA_TABLE_OBC_T_2_2		106  /**/
#define ERR_ANALOG_DATA_TABLE_OBC_V_2_2		121  /**/
flag Analog_Data_Table_IsConstraintValid(const Analog_Data_Table* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_ANALOG_DATA_TABLE		127  /**/
#define ERR_UPER_ENCODE_ANALOG_DATA_TABLE_OBC_T_2_2		107  /**/
#define ERR_UPER_ENCODE_ANALOG_DATA_TABLE_OBC_V_2_2		122  /**/
#define Analog_Data_Table_REQUIRED_BYTES_FOR_ENCODING       4 
#define Analog_Data_Table_REQUIRED_BITS_FOR_ENCODING        32

flag Analog_Data_Table_Encode(const Analog_Data_Table* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_ANALOG_DATA_TABLE		128  /**/
#define ERR_UPER_DECODE_ANALOG_DATA_TABLE_OBC_T_2_2		108  /**/
#define ERR_UPER_DECODE_ANALOG_DATA_TABLE_OBC_V_2_2		123  /**/
flag Analog_Data_Table_Decode(Analog_Data_Table* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_ANALOG_DATA_TABLE		129  /**/
#define ERR_ACN_ENCODE_ANALOG_DATA_TABLE_OBC_T_2_2		109  /**/
#define ERR_ACN_ENCODE_ANALOG_DATA_TABLE_OBC_V_2_2		124  /**/
#define Analog_Data_Table_REQUIRED_BYTES_FOR_ACN_ENCODING       4 
#define Analog_Data_Table_REQUIRED_BITS_FOR_ACN_ENCODING        32

flag Analog_Data_Table_ACN_Encode(const Analog_Data_Table* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_ANALOG_DATA_TABLE		130  /**/
#define ERR_ACN_DECODE_ANALOG_DATA_TABLE_OBC_T_2_2		110  /**/
#define ERR_ACN_DECODE_ANALOG_DATA_TABLE_OBC_V_2_2		125  /**/
flag Analog_Data_Table_ACN_Decode(Analog_Data_Table* pVal, BitStream* pBitStrm, int* pErrCode);
typedef asn1SccUint T_UInt64;


flag T_UInt64_Equal(const T_UInt64* pVal1, const T_UInt64* pVal2);

void T_UInt64_Initialize(T_UInt64* pVal);

#define ERR_T_UINT64		6  /**/
flag T_UInt64_IsConstraintValid(const T_UInt64* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_UINT64		7  /**/
#define T_UInt64_REQUIRED_BYTES_FOR_ENCODING       4 
#define T_UInt64_REQUIRED_BITS_FOR_ENCODING        32

flag T_UInt64_Encode(const T_UInt64* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_UINT64		8  /**/
flag T_UInt64_Decode(T_UInt64* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_UINT64		9  /**/
#define T_UInt64_REQUIRED_BYTES_FOR_ACN_ENCODING       4 
#define T_UInt64_REQUIRED_BITS_FOR_ACN_ENCODING        32

flag T_UInt64_ACN_Encode(const T_UInt64* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_UINT64		10  /**/
flag T_UInt64_ACN_Decode(T_UInt64* pVal, BitStream* pBitStrm, int* pErrCode);
typedef T_UInt64 Mission_Time;


flag Mission_Time_Equal(const Mission_Time* pVal1, const Mission_Time* pVal2);

void Mission_Time_Initialize(Mission_Time* pVal);

#define ERR_MISSION_TIME_2		21  /**/
flag Mission_Time_IsConstraintValid(const Mission_Time* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_MISSION_TIME_2		22  /**/
#define Mission_Time_REQUIRED_BYTES_FOR_ENCODING       4 
#define Mission_Time_REQUIRED_BITS_FOR_ENCODING        32

flag Mission_Time_Encode(const Mission_Time* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_MISSION_TIME_2		23  /**/
flag Mission_Time_Decode(Mission_Time* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_MISSION_TIME_2		24  /**/
#define Mission_Time_REQUIRED_BYTES_FOR_ACN_ENCODING       4 
#define Mission_Time_REQUIRED_BITS_FOR_ACN_ENCODING        32

flag Mission_Time_ACN_Encode(const Mission_Time* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_MISSION_TIME_2		25  /**/
flag Mission_Time_ACN_Decode(Mission_Time* pVal, BitStream* pBitStrm, int* pErrCode);
/*-- Satellite_State --------------------------------------------*/
typedef struct {
    T_UInt64 timestamp;
    Analog_Data_Table data;

} Satellite_State;

flag Satellite_State_Equal(const Satellite_State* pVal1, const Satellite_State* pVal2);

void Satellite_State_Initialize(Satellite_State* pVal);

#define ERR_SATELLITE_STATE		186  /**/
#define ERR_SATELLITE_STATE_TIMESTAMP_2_2		141  /**/
#define ERR_SATELLITE_STATE_DATA_2		181  /**/
flag Satellite_State_IsConstraintValid(const Satellite_State* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_SATELLITE_STATE		187  /**/
#define ERR_UPER_ENCODE_SATELLITE_STATE_TIMESTAMP_2_2		142  /**/
#define ERR_UPER_ENCODE_SATELLITE_STATE_DATA_2		182  /**/
#define Satellite_State_REQUIRED_BYTES_FOR_ENCODING       8 
#define Satellite_State_REQUIRED_BITS_FOR_ENCODING        64

flag Satellite_State_Encode(const Satellite_State* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_SATELLITE_STATE		188  /**/
#define ERR_UPER_DECODE_SATELLITE_STATE_TIMESTAMP_2_2		143  /**/
#define ERR_UPER_DECODE_SATELLITE_STATE_DATA_2		183  /**/
flag Satellite_State_Decode(Satellite_State* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_SATELLITE_STATE		189  /**/
#define ERR_ACN_ENCODE_SATELLITE_STATE_TIMESTAMP_2_2		144  /**/
#define ERR_ACN_ENCODE_SATELLITE_STATE_DATA_2		184  /**/
#define Satellite_State_REQUIRED_BYTES_FOR_ACN_ENCODING       8 
#define Satellite_State_REQUIRED_BITS_FOR_ACN_ENCODING        64

flag Satellite_State_ACN_Encode(const Satellite_State* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_SATELLITE_STATE		190  /**/
#define ERR_ACN_DECODE_SATELLITE_STATE_TIMESTAMP_2_2		145  /**/
#define ERR_ACN_DECODE_SATELLITE_STATE_DATA_2		185  /**/
flag Satellite_State_ACN_Decode(Satellite_State* pVal, BitStream* pBitStrm, int* pErrCode);
/*-- TM_Hello --------------------------------------------*/
typedef struct {
    T_UInt64 tm_timestamp;
    Satellite_State tm_payload;

} TM_Hello;

flag TM_Hello_Equal(const TM_Hello* pVal1, const TM_Hello* pVal2);

void TM_Hello_Initialize(TM_Hello* pVal);

#define ERR_TM_HELLO		281  /**/
#define ERR_TM_HELLO_TM_TIMESTAMP_2_2		211  /**/
#define ERR_TM_HELLO_TM_PAYLOAD_2		276  /**/
flag TM_Hello_IsConstraintValid(const TM_Hello* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_TM_HELLO		282  /**/
#define ERR_UPER_ENCODE_TM_HELLO_TM_TIMESTAMP_2_2		212  /**/
#define ERR_UPER_ENCODE_TM_HELLO_TM_PAYLOAD_2		277  /**/
#define TM_Hello_REQUIRED_BYTES_FOR_ENCODING       12 
#define TM_Hello_REQUIRED_BITS_FOR_ENCODING        96

flag TM_Hello_Encode(const TM_Hello* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_TM_HELLO		283  /**/
#define ERR_UPER_DECODE_TM_HELLO_TM_TIMESTAMP_2_2		213  /**/
#define ERR_UPER_DECODE_TM_HELLO_TM_PAYLOAD_2		278  /**/
flag TM_Hello_Decode(TM_Hello* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_TM_HELLO		284  /**/
#define ERR_ACN_ENCODE_TM_HELLO_TM_TIMESTAMP_2_2		214  /**/
#define ERR_ACN_ENCODE_TM_HELLO_TM_PAYLOAD_2		279  /**/
#define TM_Hello_REQUIRED_BYTES_FOR_ACN_ENCODING       12 
#define TM_Hello_REQUIRED_BITS_FOR_ACN_ENCODING        96

flag TM_Hello_ACN_Encode(const TM_Hello* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_TM_HELLO		285  /**/
#define ERR_ACN_DECODE_TM_HELLO_TM_TIMESTAMP_2_2		215  /**/
#define ERR_ACN_DECODE_TM_HELLO_TM_PAYLOAD_2		280  /**/
flag TM_Hello_ACN_Decode(TM_Hello* pVal, BitStream* pBitStrm, int* pErrCode);


typedef struct {
    
    Satellite_State arr[4];
} TM_Housekeeping_Contents;

flag TM_Housekeeping_Contents_Equal(const TM_Housekeeping_Contents* pVal1, const TM_Housekeeping_Contents* pVal2);

void TM_Housekeeping_Contents_Initialize(TM_Housekeeping_Contents* pVal);

#define ERR_TM_HOUSEKEEPING_CONTENTS		351  /**/
#define ERR_TM_HOUSEKEEPING_CONTENTS_ELM_2		346  /**/
flag TM_Housekeeping_Contents_IsConstraintValid(const TM_Housekeeping_Contents* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_TM_HOUSEKEEPING_CONTENTS		352  /**/
#define ERR_UPER_ENCODE_TM_HOUSEKEEPING_CONTENTS_ELM_2		347  /**/
#define TM_Housekeeping_Contents_REQUIRED_BYTES_FOR_ENCODING       32 
#define TM_Housekeeping_Contents_REQUIRED_BITS_FOR_ENCODING        256

flag TM_Housekeeping_Contents_Encode(const TM_Housekeeping_Contents* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_TM_HOUSEKEEPING_CONTENTS		353  /**/
#define ERR_UPER_DECODE_TM_HOUSEKEEPING_CONTENTS_ELM_2		348  /**/
flag TM_Housekeeping_Contents_Decode(TM_Housekeeping_Contents* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_TM_HOUSEKEEPING_CONTENTS		354  /**/
#define ERR_ACN_ENCODE_TM_HOUSEKEEPING_CONTENTS_ELM_2		349  /**/
#define TM_Housekeeping_Contents_REQUIRED_BYTES_FOR_ACN_ENCODING       32 
#define TM_Housekeeping_Contents_REQUIRED_BITS_FOR_ACN_ENCODING        256

flag TM_Housekeeping_Contents_ACN_Encode(const TM_Housekeeping_Contents* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_TM_HOUSEKEEPING_CONTENTS		355  /**/
#define ERR_ACN_DECODE_TM_HOUSEKEEPING_CONTENTS_ELM_2		350  /**/
flag TM_Housekeeping_Contents_ACN_Decode(TM_Housekeeping_Contents* pVal, BitStream* pBitStrm, int* pErrCode);
/*-- TM_Housekeeping --------------------------------------------*/
typedef struct {
    T_UInt64 tm_timestamp;
    TM_Housekeeping_Contents tm_payload;

} TM_Housekeeping;

flag TM_Housekeeping_Equal(const TM_Housekeeping* pVal1, const TM_Housekeeping* pVal2);

void TM_Housekeeping_Initialize(TM_Housekeeping* pVal);

#define ERR_TM_HOUSEKEEPING		446  /**/
#define ERR_TM_HOUSEKEEPING_TM_TIMESTAMP_2_2		366  /**/
#define ERR_TM_HOUSEKEEPING_TM_PAYLOAD_2		441  /**/
flag TM_Housekeeping_IsConstraintValid(const TM_Housekeeping* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_TM_HOUSEKEEPING		447  /**/
#define ERR_UPER_ENCODE_TM_HOUSEKEEPING_TM_TIMESTAMP_2_2		367  /**/
#define ERR_UPER_ENCODE_TM_HOUSEKEEPING_TM_PAYLOAD_2		442  /**/
#define TM_Housekeeping_REQUIRED_BYTES_FOR_ENCODING       36 
#define TM_Housekeeping_REQUIRED_BITS_FOR_ENCODING        288

flag TM_Housekeeping_Encode(const TM_Housekeeping* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_TM_HOUSEKEEPING		448  /**/
#define ERR_UPER_DECODE_TM_HOUSEKEEPING_TM_TIMESTAMP_2_2		368  /**/
#define ERR_UPER_DECODE_TM_HOUSEKEEPING_TM_PAYLOAD_2		443  /**/
flag TM_Housekeeping_Decode(TM_Housekeeping* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_TM_HOUSEKEEPING		449  /**/
#define ERR_ACN_ENCODE_TM_HOUSEKEEPING_TM_TIMESTAMP_2_2		369  /**/
#define ERR_ACN_ENCODE_TM_HOUSEKEEPING_TM_PAYLOAD_2		444  /**/
#define TM_Housekeeping_REQUIRED_BYTES_FOR_ACN_ENCODING       36 
#define TM_Housekeeping_REQUIRED_BITS_FOR_ACN_ENCODING        288

flag TM_Housekeeping_ACN_Encode(const TM_Housekeeping* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_TM_HOUSEKEEPING		450  /**/
#define ERR_ACN_DECODE_TM_HOUSEKEEPING_TM_TIMESTAMP_2_2		370  /**/
#define ERR_ACN_DECODE_TM_HOUSEKEEPING_TM_PAYLOAD_2		445  /**/
flag TM_Housekeeping_ACN_Decode(TM_Housekeeping* pVal, BitStream* pBitStrm, int* pErrCode);
typedef asn1Real T_Float;


flag T_Float_Equal(const T_Float* pVal1, const T_Float* pVal2);

void T_Float_Initialize(T_Float* pVal);

#define ERR_T_FLOAT		11  /**/
flag T_Float_IsConstraintValid(const T_Float* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_FLOAT		12  /**/
#define T_Float_REQUIRED_BYTES_FOR_ENCODING       13 
#define T_Float_REQUIRED_BITS_FOR_ENCODING        104

flag T_Float_Encode(const T_Float* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_FLOAT		13  /**/
flag T_Float_Decode(T_Float* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_FLOAT		14  /**/
#define T_Float_REQUIRED_BYTES_FOR_ACN_ENCODING       13 
#define T_Float_REQUIRED_BITS_FOR_ACN_ENCODING        104

flag T_Float_ACN_Encode(const T_Float* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_FLOAT		15  /**/
flag T_Float_ACN_Decode(T_Float* pVal, BitStream* pBitStrm, int* pErrCode);


typedef struct {
    
    T_Float arr[15];
} T_B_b_T;

flag T_B_b_T_Equal(const T_B_b_T* pVal1, const T_B_b_T* pVal2);

void T_B_b_T_Initialize(T_B_b_T* pVal);

#define ERR_T_B_B_T		36  /**/
#define ERR_T_B_B_T_ELM_2		31  /**/
flag T_B_b_T_IsConstraintValid(const T_B_b_T* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_B_B_T		37  /**/
#define ERR_UPER_ENCODE_T_B_B_T_ELM_2		32  /**/
#define T_B_b_T_REQUIRED_BYTES_FOR_ENCODING       195 
#define T_B_b_T_REQUIRED_BITS_FOR_ENCODING        1560

flag T_B_b_T_Encode(const T_B_b_T* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_B_B_T		38  /**/
#define ERR_UPER_DECODE_T_B_B_T_ELM_2		33  /**/
flag T_B_b_T_Decode(T_B_b_T* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_B_B_T		39  /**/
#define ERR_ACN_ENCODE_T_B_B_T_ELM_2		34  /**/
#define T_B_b_T_REQUIRED_BYTES_FOR_ACN_ENCODING       195 
#define T_B_b_T_REQUIRED_BITS_FOR_ACN_ENCODING        1560

flag T_B_b_T_ACN_Encode(const T_B_b_T* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_B_B_T		40  /**/
#define ERR_ACN_DECODE_T_B_B_T_ELM_2		35  /**/
flag T_B_b_T_ACN_Decode(T_B_b_T* pVal, BitStream* pBitStrm, int* pErrCode);


typedef struct {
    
    T_Float arr[3];
} T_Omega;

flag T_Omega_Equal(const T_Omega* pVal1, const T_Omega* pVal2);

void T_Omega_Initialize(T_Omega* pVal);

#define ERR_T_OMEGA		51  /**/
#define ERR_T_OMEGA_ELM_2		46  /**/
flag T_Omega_IsConstraintValid(const T_Omega* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_OMEGA		52  /**/
#define ERR_UPER_ENCODE_T_OMEGA_ELM_2		47  /**/
#define T_Omega_REQUIRED_BYTES_FOR_ENCODING       39 
#define T_Omega_REQUIRED_BITS_FOR_ENCODING        312

flag T_Omega_Encode(const T_Omega* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_OMEGA		53  /**/
#define ERR_UPER_DECODE_T_OMEGA_ELM_2		48  /**/
flag T_Omega_Decode(T_Omega* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_OMEGA		54  /**/
#define ERR_ACN_ENCODE_T_OMEGA_ELM_2		49  /**/
#define T_Omega_REQUIRED_BYTES_FOR_ACN_ENCODING       39 
#define T_Omega_REQUIRED_BITS_FOR_ACN_ENCODING        312

flag T_Omega_ACN_Encode(const T_Omega* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_OMEGA		55  /**/
#define ERR_ACN_DECODE_T_OMEGA_ELM_2		50  /**/
flag T_Omega_ACN_Decode(T_Omega* pVal, BitStream* pBitStrm, int* pErrCode);


typedef struct {
    
    T_Float arr[3];
} T_MT_Working;

flag T_MT_Working_Equal(const T_MT_Working* pVal1, const T_MT_Working* pVal2);

void T_MT_Working_Initialize(T_MT_Working* pVal);

#define ERR_T_MT_WORKING		66  /**/
#define ERR_T_MT_WORKING_ELM_2		61  /**/
flag T_MT_Working_IsConstraintValid(const T_MT_Working* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_MT_WORKING		67  /**/
#define ERR_UPER_ENCODE_T_MT_WORKING_ELM_2		62  /**/
#define T_MT_Working_REQUIRED_BYTES_FOR_ENCODING       39 
#define T_MT_Working_REQUIRED_BITS_FOR_ENCODING        312

flag T_MT_Working_Encode(const T_MT_Working* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_MT_WORKING		68  /**/
#define ERR_UPER_DECODE_T_MT_WORKING_ELM_2		63  /**/
flag T_MT_Working_Decode(T_MT_Working* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_MT_WORKING		69  /**/
#define ERR_ACN_ENCODE_T_MT_WORKING_ELM_2		64  /**/
#define T_MT_Working_REQUIRED_BYTES_FOR_ACN_ENCODING       39 
#define T_MT_Working_REQUIRED_BITS_FOR_ACN_ENCODING        312

flag T_MT_Working_ACN_Encode(const T_MT_Working* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_MT_WORKING		70  /**/
#define ERR_ACN_DECODE_T_MT_WORKING_ELM_2		65  /**/
flag T_MT_Working_ACN_Decode(T_MT_Working* pVal, BitStream* pBitStrm, int* pErrCode);


typedef struct {
    
    T_Float arr[3];
} T_Control;

flag T_Control_Equal(const T_Control* pVal1, const T_Control* pVal2);

void T_Control_Initialize(T_Control* pVal);

#define ERR_T_CONTROL		81  /**/
#define ERR_T_CONTROL_ELM_2		76  /**/
flag T_Control_IsConstraintValid(const T_Control* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_CONTROL		82  /**/
#define ERR_UPER_ENCODE_T_CONTROL_ELM_2		77  /**/
#define T_Control_REQUIRED_BYTES_FOR_ENCODING       39 
#define T_Control_REQUIRED_BITS_FOR_ENCODING        312

flag T_Control_Encode(const T_Control* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_CONTROL		83  /**/
#define ERR_UPER_DECODE_T_CONTROL_ELM_2		78  /**/
flag T_Control_Decode(T_Control* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_CONTROL		84  /**/
#define ERR_ACN_ENCODE_T_CONTROL_ELM_2		79  /**/
#define T_Control_REQUIRED_BYTES_FOR_ACN_ENCODING       39 
#define T_Control_REQUIRED_BITS_FOR_ACN_ENCODING        312

flag T_Control_ACN_Encode(const T_Control* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_CONTROL		85  /**/
#define ERR_ACN_DECODE_T_CONTROL_ELM_2		80  /**/
flag T_Control_ACN_Decode(T_Control* pVal, BitStream* pBitStrm, int* pErrCode);
typedef enum {
    idle = 0,
    coverage = 1
} Operating_Mode;

// please use the following macros to avoid breaking code.
#define Operating_Mode_idle idle
#define Operating_Mode_coverage coverage

flag Operating_Mode_Equal(const Operating_Mode* pVal1, const Operating_Mode* pVal2);

void Operating_Mode_Initialize(Operating_Mode* pVal);

#define ERR_OPERATING_MODE		191  /**/
flag Operating_Mode_IsConstraintValid(const Operating_Mode* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_OPERATING_MODE		192  /**/
#define Operating_Mode_REQUIRED_BYTES_FOR_ENCODING       1 
#define Operating_Mode_REQUIRED_BITS_FOR_ENCODING        1

flag Operating_Mode_Encode(const Operating_Mode* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_OPERATING_MODE		193  /**/
flag Operating_Mode_Decode(Operating_Mode* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_OPERATING_MODE		194  /**/
#define Operating_Mode_REQUIRED_BYTES_FOR_ACN_ENCODING       1 
#define Operating_Mode_REQUIRED_BITS_FOR_ACN_ENCODING        1

flag Operating_Mode_ACN_Encode(const Operating_Mode* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_OPERATING_MODE		195  /**/
flag Operating_Mode_ACN_Decode(Operating_Mode* pVal, BitStream* pBitStrm, int* pErrCode);
/*-- TM_Mode --------------------------------------------*/
typedef struct {
    T_UInt64 tm_timestamp;
    Operating_Mode tm_payload;

} TM_Mode;

flag TM_Mode_Equal(const TM_Mode* pVal1, const TM_Mode* pVal2);

void TM_Mode_Initialize(TM_Mode* pVal);

#define ERR_TM_MODE		476  /**/
#define ERR_TM_MODE_TM_TIMESTAMP_2_2		461  /**/
#define ERR_TM_MODE_TM_PAYLOAD_2		471  /**/
flag TM_Mode_IsConstraintValid(const TM_Mode* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_TM_MODE		477  /**/
#define ERR_UPER_ENCODE_TM_MODE_TM_TIMESTAMP_2_2		462  /**/
#define ERR_UPER_ENCODE_TM_MODE_TM_PAYLOAD_2		472  /**/
#define TM_Mode_REQUIRED_BYTES_FOR_ENCODING       5 
#define TM_Mode_REQUIRED_BITS_FOR_ENCODING        33

flag TM_Mode_Encode(const TM_Mode* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_TM_MODE		478  /**/
#define ERR_UPER_DECODE_TM_MODE_TM_TIMESTAMP_2_2		463  /**/
#define ERR_UPER_DECODE_TM_MODE_TM_PAYLOAD_2		473  /**/
flag TM_Mode_Decode(TM_Mode* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_TM_MODE		479  /**/
#define ERR_ACN_ENCODE_TM_MODE_TM_TIMESTAMP_2_2		464  /**/
#define ERR_ACN_ENCODE_TM_MODE_TM_PAYLOAD_2		474  /**/
#define TM_Mode_REQUIRED_BYTES_FOR_ACN_ENCODING       5 
#define TM_Mode_REQUIRED_BITS_FOR_ACN_ENCODING        33

flag TM_Mode_ACN_Encode(const TM_Mode* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_TM_MODE		480  /**/
#define ERR_ACN_DECODE_TM_MODE_TM_TIMESTAMP_2_2		465  /**/
#define ERR_ACN_DECODE_TM_MODE_TM_PAYLOAD_2		475  /**/
flag TM_Mode_ACN_Decode(TM_Mode* pVal, BitStream* pBitStrm, int* pErrCode);
typedef enum {
    open_link = 0,
    close_link = 1,
    request_hk = 2
} TC_Type;

// please use the following macros to avoid breaking code.
#define TC_Type_open_link open_link
#define TC_Type_close_link close_link
#define TC_Type_request_hk request_hk

flag TC_Type_Equal(const TC_Type* pVal1, const TC_Type* pVal2);

void TC_Type_Initialize(TC_Type* pVal);

#define ERR_TC_TYPE		196  /**/
flag TC_Type_IsConstraintValid(const TC_Type* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_TC_TYPE		197  /**/
#define TC_Type_REQUIRED_BYTES_FOR_ENCODING       1 
#define TC_Type_REQUIRED_BITS_FOR_ENCODING        2

flag TC_Type_Encode(const TC_Type* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_TC_TYPE		198  /**/
flag TC_Type_Decode(TC_Type* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_TC_TYPE		199  /**/
#define TC_Type_REQUIRED_BYTES_FOR_ACN_ENCODING       1 
#define TC_Type_REQUIRED_BITS_FOR_ACN_ENCODING        2

flag TC_Type_ACN_Encode(const TC_Type* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_TC_TYPE		200  /**/
flag TC_Type_ACN_Decode(TC_Type* pVal, BitStream* pBitStrm, int* pErrCode);
typedef struct {
    int nCount; 
    
    byte arr[80];
} TM_Error_Contents;


flag TM_Error_Contents_Equal(const TM_Error_Contents* pVal1, const TM_Error_Contents* pVal2);

void TM_Error_Contents_Initialize(TM_Error_Contents* pVal);

#define ERR_TM_ERROR_CONTENTS		481  /**/
flag TM_Error_Contents_IsConstraintValid(const TM_Error_Contents* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_TM_ERROR_CONTENTS		482  /**/
#define TM_Error_Contents_REQUIRED_BYTES_FOR_ENCODING       81 
#define TM_Error_Contents_REQUIRED_BITS_FOR_ENCODING        647

flag TM_Error_Contents_Encode(const TM_Error_Contents* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_TM_ERROR_CONTENTS		483  /**/
flag TM_Error_Contents_Decode(TM_Error_Contents* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_TM_ERROR_CONTENTS		484  /**/
#define TM_Error_Contents_REQUIRED_BYTES_FOR_ACN_ENCODING       81 
#define TM_Error_Contents_REQUIRED_BITS_FOR_ACN_ENCODING        647

flag TM_Error_Contents_ACN_Encode(const TM_Error_Contents* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_TM_ERROR_CONTENTS		485  /**/
flag TM_Error_Contents_ACN_Decode(TM_Error_Contents* pVal, BitStream* pBitStrm, int* pErrCode);
/*-- TM_Error --------------------------------------------*/
typedef struct {
    T_UInt64 tm_timestamp;
    TM_Error_Contents tm_payload;

} TM_Error;

flag TM_Error_Equal(const TM_Error* pVal1, const TM_Error* pVal2);

void TM_Error_Initialize(TM_Error* pVal);

#define ERR_TM_ERROR		511  /**/
#define ERR_TM_ERROR_TM_TIMESTAMP_2_2		496  /**/
#define ERR_TM_ERROR_TM_PAYLOAD_2		506  /**/
flag TM_Error_IsConstraintValid(const TM_Error* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_TM_ERROR		512  /**/
#define ERR_UPER_ENCODE_TM_ERROR_TM_TIMESTAMP_2_2		497  /**/
#define ERR_UPER_ENCODE_TM_ERROR_TM_PAYLOAD_2		507  /**/
#define TM_Error_REQUIRED_BYTES_FOR_ENCODING       85 
#define TM_Error_REQUIRED_BITS_FOR_ENCODING        679

flag TM_Error_Encode(const TM_Error* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_TM_ERROR		513  /**/
#define ERR_UPER_DECODE_TM_ERROR_TM_TIMESTAMP_2_2		498  /**/
#define ERR_UPER_DECODE_TM_ERROR_TM_PAYLOAD_2		508  /**/
flag TM_Error_Decode(TM_Error* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_TM_ERROR		514  /**/
#define ERR_ACN_ENCODE_TM_ERROR_TM_TIMESTAMP_2_2		499  /**/
#define ERR_ACN_ENCODE_TM_ERROR_TM_PAYLOAD_2		509  /**/
#define TM_Error_REQUIRED_BYTES_FOR_ACN_ENCODING       85 
#define TM_Error_REQUIRED_BITS_FOR_ACN_ENCODING        679

flag TM_Error_ACN_Encode(const TM_Error* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_TM_ERROR		515  /**/
#define ERR_ACN_DECODE_TM_ERROR_TM_TIMESTAMP_2_2		500  /**/
#define ERR_ACN_DECODE_TM_ERROR_TM_PAYLOAD_2		510  /**/
flag TM_Error_ACN_Decode(TM_Error* pVal, BitStream* pBitStrm, int* pErrCode);
/*-- TM_Type --------------------------------------------*/

typedef enum {
    TM_Type_NONE,
    hello_PRESENT,
    hk_PRESENT,
    mode_PRESENT,
    err_PRESENT 
} TM_Type_selection;


typedef struct {
    TM_Type_selection kind;
    
    union {
        TM_Hello hello;
        TM_Housekeeping hk;
        TM_Mode mode;
        TM_Error err;
    } u; 
} TM_Type;

flag TM_Type_Equal(const TM_Type* pVal1, const TM_Type* pVal2);

void TM_Type_Initialize(TM_Type* pVal);

#define ERR_TM_TYPE		776  /**/
#define ERR_TM_TYPE_HELLO_2		601  /**/
#define ERR_TM_TYPE_HK_2		701  /**/
#define ERR_TM_TYPE_MODE_2		736  /**/
#define ERR_TM_TYPE_ERR_2		771  /**/
flag TM_Type_IsConstraintValid(const TM_Type* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_TM_TYPE		777  /**/
#define ERR_UPER_ENCODE_TM_TYPE_HELLO_2		602  /**/
#define ERR_UPER_ENCODE_TM_TYPE_HK_2		702  /**/
#define ERR_UPER_ENCODE_TM_TYPE_MODE_2		737  /**/
#define ERR_UPER_ENCODE_TM_TYPE_ERR_2		772  /**/
#define TM_Type_REQUIRED_BYTES_FOR_ENCODING       86 
#define TM_Type_REQUIRED_BITS_FOR_ENCODING        681

flag TM_Type_Encode(const TM_Type* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_TM_TYPE		778  /**/
#define ERR_UPER_DECODE_TM_TYPE_HELLO_2		603  /**/
#define ERR_UPER_DECODE_TM_TYPE_HK_2		703  /**/
#define ERR_UPER_DECODE_TM_TYPE_MODE_2		738  /**/
#define ERR_UPER_DECODE_TM_TYPE_ERR_2		773  /**/
flag TM_Type_Decode(TM_Type* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_TM_TYPE		779  /**/
#define ERR_ACN_ENCODE_TM_TYPE_HELLO_2		604  /**/
#define ERR_ACN_ENCODE_TM_TYPE_HK_2		704  /**/
#define ERR_ACN_ENCODE_TM_TYPE_MODE_2		739  /**/
#define ERR_ACN_ENCODE_TM_TYPE_ERR_2		774  /**/
#define TM_Type_REQUIRED_BYTES_FOR_ACN_ENCODING       86 
#define TM_Type_REQUIRED_BITS_FOR_ACN_ENCODING        681

flag TM_Type_ACN_Encode(const TM_Type* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_TM_TYPE		780  /**/
#define ERR_ACN_DECODE_TM_TYPE_HELLO_2		605  /**/
#define ERR_ACN_DECODE_TM_TYPE_HK_2		705  /**/
#define ERR_ACN_DECODE_TM_TYPE_MODE_2		740  /**/
#define ERR_ACN_DECODE_TM_TYPE_ERR_2		775  /**/
flag TM_Type_ACN_Decode(TM_Type* pVal, BitStream* pBitStrm, int* pErrCode);
typedef asn1SccSint T_Int32;


flag T_Int32_Equal(const T_Int32* pVal1, const T_Int32* pVal2);

void T_Int32_Initialize(T_Int32* pVal);

#define ERR_T_INT32		781  /**/
flag T_Int32_IsConstraintValid(const T_Int32* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_INT32		782  /**/
#define T_Int32_REQUIRED_BYTES_FOR_ENCODING       4 
#define T_Int32_REQUIRED_BITS_FOR_ENCODING        32

flag T_Int32_Encode(const T_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_INT32		783  /**/
flag T_Int32_Decode(T_Int32* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_INT32		784  /**/
#define T_Int32_REQUIRED_BYTES_FOR_ACN_ENCODING       4 
#define T_Int32_REQUIRED_BITS_FOR_ACN_ENCODING        32

flag T_Int32_ACN_Encode(const T_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_INT32		785  /**/
flag T_Int32_ACN_Decode(T_Int32* pVal, BitStream* pBitStrm, int* pErrCode);
typedef asn1SccUint T_UInt32;


flag T_UInt32_Equal(const T_UInt32* pVal1, const T_UInt32* pVal2);

void T_UInt32_Initialize(T_UInt32* pVal);

#define ERR_T_UINT32		786  /**/
flag T_UInt32_IsConstraintValid(const T_UInt32* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_UINT32		787  /**/
#define T_UInt32_REQUIRED_BYTES_FOR_ENCODING       4 
#define T_UInt32_REQUIRED_BITS_FOR_ENCODING        32

flag T_UInt32_Encode(const T_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_UINT32		788  /**/
flag T_UInt32_Decode(T_UInt32* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_UINT32		789  /**/
#define T_UInt32_REQUIRED_BYTES_FOR_ACN_ENCODING       4 
#define T_UInt32_REQUIRED_BITS_FOR_ACN_ENCODING        32

flag T_UInt32_ACN_Encode(const T_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_UINT32		790  /**/
flag T_UInt32_ACN_Decode(T_UInt32* pVal, BitStream* pBitStrm, int* pErrCode);
typedef asn1SccSint T_Int8;


flag T_Int8_Equal(const T_Int8* pVal1, const T_Int8* pVal2);

void T_Int8_Initialize(T_Int8* pVal);

#define ERR_T_INT8		791  /**/
flag T_Int8_IsConstraintValid(const T_Int8* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_INT8		792  /**/
#define T_Int8_REQUIRED_BYTES_FOR_ENCODING       1 
#define T_Int8_REQUIRED_BITS_FOR_ENCODING        8

flag T_Int8_Encode(const T_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_INT8		793  /**/
flag T_Int8_Decode(T_Int8* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_INT8		794  /**/
#define T_Int8_REQUIRED_BYTES_FOR_ACN_ENCODING       1 
#define T_Int8_REQUIRED_BITS_FOR_ACN_ENCODING        8

flag T_Int8_ACN_Encode(const T_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_INT8		795  /**/
flag T_Int8_ACN_Decode(T_Int8* pVal, BitStream* pBitStrm, int* pErrCode);
typedef asn1SccUint T_UInt8;


flag T_UInt8_Equal(const T_UInt8* pVal1, const T_UInt8* pVal2);

void T_UInt8_Initialize(T_UInt8* pVal);

#define ERR_T_UINT8		796  /**/
flag T_UInt8_IsConstraintValid(const T_UInt8* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_UINT8		797  /**/
#define T_UInt8_REQUIRED_BYTES_FOR_ENCODING       1 
#define T_UInt8_REQUIRED_BITS_FOR_ENCODING        8

flag T_UInt8_Encode(const T_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_UINT8		798  /**/
flag T_UInt8_Decode(T_UInt8* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_UINT8		799  /**/
#define T_UInt8_REQUIRED_BYTES_FOR_ACN_ENCODING       1 
#define T_UInt8_REQUIRED_BITS_FOR_ACN_ENCODING        8

flag T_UInt8_ACN_Encode(const T_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_UINT8		800  /**/
flag T_UInt8_ACN_Decode(T_UInt8* pVal, BitStream* pBitStrm, int* pErrCode);
typedef flag T_Boolean;


flag T_Boolean_Equal(const T_Boolean* pVal1, const T_Boolean* pVal2);

void T_Boolean_Initialize(T_Boolean* pVal);

#define ERR_T_BOOLEAN		801  /**/
flag T_Boolean_IsConstraintValid(const T_Boolean* pVal, int* pErrCode);

#define ERR_UPER_ENCODE_T_BOOLEAN		802  /**/
#define T_Boolean_REQUIRED_BYTES_FOR_ENCODING       1 
#define T_Boolean_REQUIRED_BITS_FOR_ENCODING        1

flag T_Boolean_Encode(const T_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_UPER_DECODE_T_BOOLEAN		803  /**/
flag T_Boolean_Decode(T_Boolean* pVal, BitStream* pBitStrm, int* pErrCode);

#define ERR_ACN_ENCODE_T_BOOLEAN		804  /**/
#define T_Boolean_REQUIRED_BYTES_FOR_ACN_ENCODING       1 
#define T_Boolean_REQUIRED_BITS_FOR_ACN_ENCODING        1

flag T_Boolean_ACN_Encode(const T_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

#define ERR_ACN_DECODE_T_BOOLEAN		805  /**/
flag T_Boolean_ACN_Decode(T_Boolean* pVal, BitStream* pBitStrm, int* pErrCode);
/*-- T_Null_Record --------------------------------------------*/
typedef struct {

} T_Null_Record;

flag T_Null_Record_Equal(const T_Null_Record* pVal1, const T_Null_Record* pVal2);

void T_Null_Record_Initialize(T_Null_Record* pVal);

#define ERR_T_NULL_RECORD		806  /**/
flag T_Null_Record_IsConstraintValid(const T_Null_Record* pVal, int* pErrCode);

#define T_Null_Record_REQUIRED_BYTES_FOR_ENCODING       0 
#define T_Null_Record_REQUIRED_BITS_FOR_ENCODING        0

flag T_Null_Record_Encode(const T_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

flag T_Null_Record_Decode(T_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode);

#define T_Null_Record_REQUIRED_BYTES_FOR_ACN_ENCODING       0 
#define T_Null_Record_REQUIRED_BITS_FOR_ACN_ENCODING        0

flag T_Null_Record_ACN_Encode(const T_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);

flag T_Null_Record_ACN_Decode(T_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode);

extern const asn1SccSint hk_size;
extern const asn1SccSint msg_size; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif
