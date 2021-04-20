typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef union anon_union.conflict2113 anon_union.conflict2113, *Panon_union.conflict2113;

typedef uchar UINT8;

typedef UINT8 IEEEtypes_Addr_t;

typedef IEEEtypes_Addr_t IEEEtypes_MacAddr_t[6];

union anon_union.conflict2113 {
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

typedef struct pmkElement_t pmkElement_t, *PpmkElement_t;

typedef union anon_union.conflict2113_for_key anon_union.conflict2113_for_key, *Panon_union.conflict2113_for_key;

typedef char SINT8;

union anon_union.conflict2113_for_key {
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

struct pmkElement_t {
    union anon_union.conflict2113_for_key key;
    UINT8 PMK[32];
    UINT8 length;
    UINT8 psk_length;
    SINT8 replacementRank;
};

typedef int _ssize_t;

typedef union anon_union.conflictd1 anon_union.conflictd1, *Panon_union.conflictd1;

typedef uint wint_t;

union anon_union.conflictd1 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictd1_for___value anon_union.conflictd1_for___value, *Panon_union.conflictd1_for___value;

union anon_union.conflictd1_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictd1_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong uint32_t;

struct la_mem_format {
    uint32_t word[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr {
    struct co_list_hdr * next;
};

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag {
    struct co_list prog;
};

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag {
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

typedef uchar uint8_t;

typedef ushort uint16_t;

typedef long int32_t;

typedef struct apInfo_t apInfo_t, *PapInfo_t;

typedef struct BssConfig_t BssConfig_t, *PBssConfig_t;

typedef struct BssData_t BssData_t, *PBssData_t;

typedef ulong UINT32;

typedef struct apRsnConfig_t apRsnConfig_t, *PapRsnConfig_t;

typedef struct CommonMlmeData_t CommonMlmeData_t, *PCommonMlmeData_t;

typedef int BOOLEAN;

typedef struct KeyData_t KeyData_t, *PKeyData_t;

typedef struct Cipher_t Cipher_t, *PCipher_t;

typedef ushort UINT16;

typedef struct Operation_t Operation_t, *POperation_t;

typedef UINT8 IEEEtypes_SsId_t[32];

typedef UINT8 IEEEtypes_Len_t;

typedef UINT8 IEEEtypes_DtimPeriod_t;

typedef UINT16 IEEEtypes_BcnInterval_t;

struct Cipher_t {
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct KeyData_t {
    UINT8 Key[16];
    UINT8 RxMICKey[8];
    UINT8 TxMICKey[8];
    UINT32 TxIV32;
    UINT16 TxIV16;
    UINT16 KeyIndex;
};

struct CommonMlmeData_t {
    IEEEtypes_SsId_t SsId;
    IEEEtypes_Len_t SsIdLen;
    IEEEtypes_DtimPeriod_t DtimPeriod;
    IEEEtypes_BcnInterval_t BcnPeriod;
    IEEEtypes_MacAddr_t BssId;
    UINT16 RtsThresh;
    UINT16 FragThresh;
    UINT8 ShortRetryLim;
    UINT8 LongRetryLim;
    UINT8 MbssBcnIntFac;
    UINT8 MbssCurBcnIntCnt;
    UINT16 Reserved;
};

struct Operation_t {
    UINT16 keyExchange:1;
    UINT16 authenticate:1;
    UINT16 reserved:14;
};

struct apRsnConfig_t {
    struct Cipher_t mcstCipher;
    UINT8 mcstCipherCount;
    struct Cipher_t wpaUcstCipher;
    UINT8 wpaUcstCipherCount;
    struct Cipher_t wpa2UcstCipher;
    UINT8 wpa2UcstCipherCount;
    UINT16 AuthKey;
    UINT16 AuthKeyCount;
    struct Operation_t Akmp;
    UINT32 GrpReKeyTime;
    UINT8 PSKPassPhrase[64];
    UINT8 PSKPassPhraseLen;
    UINT8 PSKValue[32];
    UINT8 MaxPwsHskRetries;
    UINT8 MaxGrpHskRetries;
    undefined field_0x73;
    UINT32 PwsHskTimeOut;
    UINT32 GrpHskTimeOut;
};

struct BssConfig_t {
    UINT32 StaAgeOutTime;
    UINT32 PsStaAgeOutTime;
    struct apRsnConfig_t RsnConfig;
    struct CommonMlmeData_t comData;
};

struct BssData_t {
    BOOLEAN updatePassPhrase;
    struct mm_timer_tag apMicTimer;
    struct KeyData_t grpKeyData;
    UINT8 GNonce[32];
    UINT32 grpRekeyBcnCntConfigured;
    UINT32 grpRekeyBcnCntRemaining;
};

struct apInfo_t {
    struct BssConfig_t bssConfig;
    struct BssData_t bssData;
    UINT8 ApStop_Req_Pending;
    undefined field_0x11d;
    undefined field_0x11e;
    undefined field_0x11f;
};

typedef struct _txQingInfo_t _txQingInfo_t, *P_txQingInfo_t;

typedef enum IEEEtypes_PwrMgmtMode_e {
    PWR_MODE_ACTIVE=0,
    PWR_MODE_PWR_SAVE=1
} IEEEtypes_PwrMgmtMode_e;

struct _txQingInfo_t {
    enum IEEEtypes_PwrMgmtMode_e mode;
};

typedef struct staData_t staData_t, *PstaData_t;

typedef struct _txQingInfo_t txQingInfo_t;

typedef struct apKeyMgmtInfoSta_t apKeyMgmtInfoSta_t, *PapKeyMgmtInfoSta_t;

typedef struct apKeyMgmtInfoStaRom_t apKeyMgmtInfoStaRom_t, *PapKeyMgmtInfoStaRom_t;

typedef struct SecurityMode_t SecurityMode_t, *PSecurityMode_t;

typedef enum keyMgmtState_e {
    MSG1_PENDING=1,
    WAITING_4_MSG4=4,
    GRPMSG1_PENDING=5,
    WAITING_4_GRP_REKEY_MSG2=8,
    HSK_DUMMY_STATE=9,
    HSK_NOT_STARTED=0,
    WAITING_4_GRPMSG2=6,
    MSG3_PENDING=3,
    HSK_END=10,
    GRP_REKEY_MSG1_PENDING=7,
    WAITING_4_MSG2=2
} keyMgmtState_e;

struct SecurityMode_t {
    UINT16 noRsn:1;
    UINT16 wepStatic:1;
    UINT16 wepDynamic:1;
    UINT16 wpa:1;
    UINT16 wpaNone:1;
    UINT16 wpa2:1;
    UINT16 cckm:1;
    UINT16 wapi:1;
    UINT16 wpa3:1;
    UINT16 rsvd:7;
};

struct apKeyMgmtInfoStaRom_t {
    UINT16 staRsnCap;
    struct SecurityMode_t staSecType;
    struct Cipher_t staUcstCipher;
    UINT8 staAkmType;
    enum keyMgmtState_e keyMgmtState;
    undefined field_0x7;
};

struct apKeyMgmtInfoSta_t {
    struct apKeyMgmtInfoStaRom_t rom;
    UINT8 numHskTries;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    UINT32 counterLo;
    UINT32 counterHi;
    struct mm_timer_tag HskTimer;
    UINT8 EAPOL_MIC_Key[16];
    UINT8 EAPOL_Encr_Key[16];
    UINT8 EAPOLProtoVersion;
    UINT8 rsvd[3];
};

struct staData_t {
    txQingInfo_t pwrSaveInfo;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    struct apKeyMgmtInfoSta_t keyMgmtInfo;
};

typedef char CHAR;

typedef ulong uint32;

typedef ushort uint16;

typedef long SINT32;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef union anon_union.conflict16eb anon_union.conflict16eb, *Panon_union.conflict16eb;

typedef struct key_Type_TKIP_t key_Type_TKIP_t, *Pkey_Type_TKIP_t;

typedef struct key_Type_AES_t key_Type_AES_t, *Pkey_Type_AES_t;

typedef struct key_Type_WEP_t key_Type_WEP_t, *Pkey_Type_WEP_t;

typedef struct key_Type_WAPI_t key_Type_WAPI_t, *Pkey_Type_WAPI_t;

typedef struct key_Type_AES_CMAC_t key_Type_AES_CMAC_t, *Pkey_Type_AES_CMAC_t;

struct key_Type_TKIP_t {
    UINT8 key[16];
    UINT8 txMicKey[8];
    UINT8 rxMicKey[8];
};

struct key_Type_AES_t {
    UINT8 key[16];
};

struct key_Type_AES_CMAC_t {
    UINT8 ipn[6];
    UINT8 reserved[2];
    UINT8 key[16];
};

struct key_Type_WAPI_t {
    UINT8 keyIndex;
    UINT8 isDefKey;
    UINT8 key[16];
    UINT8 mickey[16];
    UINT8 rxPN[16];
};

struct key_Type_WEP_t {
    UINT8 keyIndex;
    UINT8 isDefaultTx;
    UINT8 key[13];
};

union anon_union.conflict16eb {
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

typedef struct key_MgtMaterial_t key_MgtMaterial_t, *Pkey_MgtMaterial_t;

typedef union anon_union.conflict16eb_for_keyEncypt anon_union.conflict16eb_for_keyEncypt, *Panon_union.conflict16eb_for_keyEncypt;

union anon_union.conflict16eb_for_keyEncypt {
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

struct key_MgtMaterial_t {
    UINT16 keyType;
    UINT16 keyInfo;
    UINT16 keyLen;
    union anon_union.conflict16eb_for_keyEncypt keyEncypt;
};

typedef struct BufferDesc BufferDesc, *PBufferDesc;

typedef union anon_union.conflictb01_for_intf anon_union.conflictb01_for_intf, *Panon_union.conflictb01_for_intf;

union anon_union.conflictb01_for_intf {
    uint32 Interface;
};

struct BufferDesc {
    union anon_union.conflictb01_for_intf intf;
    uint16 DataLen;
    undefined field_0x6;
    undefined field_0x7;
    void * Buffer;
};

typedef struct BufferDesc BufferDesc_t;

typedef union anon_union.conflictb01 anon_union.conflictb01, *Panon_union.conflictb01;

typedef struct cm_ConnectionInfo cm_ConnectionInfo, *Pcm_ConnectionInfo;

typedef struct supplicantData supplicantData, *PsupplicantData;

typedef union anon_union.conflict2810_for_specDat anon_union.conflict2810_for_specDat, *Panon_union.conflict2810_for_specDat;

typedef struct cipher_key_buf cipher_key_buf, *Pcipher_key_buf;

typedef struct cipher_key_buf cipher_key_buf_t;

typedef struct IEEEtypes_SsIdElement_t IEEEtypes_SsIdElement_t, *PIEEEtypes_SsIdElement_t;

typedef struct customMIB_RSNStats_t customMIB_RSNStats_t, *PcustomMIB_RSNStats_t;

typedef struct RSNConfig_t RSNConfig_t, *PRSNConfig_t;

typedef struct keyMgmtInfoSta_t keyMgmtInfoSta_t, *PkeyMgmtInfoSta_t;

typedef struct SecurityParams_t SecurityParams_t, *PSecurityParams_t;

typedef struct apSpecificData_t apSpecificData_t, *PapSpecificData_t;

typedef struct cipher_key_t cipher_key_t, *Pcipher_key_t;

typedef enum IEEEtypes_ElementId_e {
    ELEM_ID_DIAG_REQUEST=80,
    ELEM_ID_EXT_FILS_SESSION=4,
    ELEM_ID_TDLS_CS_TIMING=104,
    ELEM_ID_DIAG_REPORT=81,
    SUBELEM_ID_REPORTING_DETAIL=2,
    ELEM_ID_TIMEOUT_INTERVAL=56,
    ELEM_ID_EXT_FILS_REQ_PARAMS=2,
    ELEM_ID_SUPPORTED_REGCLASS=59,
    SUBELEM_ID_PMK_R1_KEY_HOLDER_ID=1,
    ELEM_ID_BSS_AC_ACCESS_DELAY=68,
    ELEM_ID_MOBILITY_DOMAIN=54,
    ELEM_ID_RCPI=53,
    ELEM_ID_SSID_LIST=84,
    ELEM_ID_ERP_INFO=42,
    ELEM_ID_EXT_CAPABILITIES=127,
    ELEM_ID_TCLAS_PROCESS=44,
    ELEM_ID_AID=-59,
    ELEM_ID_EXT_HE_OPERATION=36,
    ELEM_ID_COUNTRY=7,
    ELEM_ID_EXT_EXTENDED_REQUEST=10,
    ELEM_ID_PU_BUFFER_STATUS=106,
    ELEM_ID_EXT_FILS_KEY_CONFIRM=3,
    ELEM_ID_TIME_ZONE=98,
    ELEM_ID_SCHEDULE=15,
    ELEM_ID_POWER_CAPABILITY=33,
    ELEM_ID_RSN=48,
    ELEM_ID_RIC_DATA=57,
    ELEM_ID_HT_CAPABILITY=45,
    ELEM_ID_MEAS_PILOT_TX_INFO=66,
    ELEM_ID_TIM_BCAST_RESPONSE=95,
    ELEM_ID_PTI_CONTROL=105,
    ELEM_ID_NONTRANS_BSSID_CAP=83,
    ELEM_ID_COLLOC_INTF_REPORT=96,
    ELEM_ID_CF_PARAM_SET=4,
    ELEM_ID_HT_INFORMATION=61,
    ELEM_ID_CHALLENGE_TEXT=16,
    ELEM_ID_EXT_FILS_IP_ADDR_ASSIGN=6,
    ELEM_ID_EVENT_REQUEST=78,
    ELEM_ID_EXT_FUTURE_CHANNEL_GUIDANCE=14,
    ELEM_ID_TCLAS=14,
    ELEM_ID_CHANNEL_SWITCH_ANN=37,
    ELEM_ID_IBSS_DFS=41,
    ELEM_ID_DMS_REQUEST=99,
    ELEM_ID_SUPPORTED_RATES=1,
    ELEM_ID_CHANNEL_USAGE=97,
    ELEM_ID_EXT_FILS_NONCE=13,
    ELEM_ID_HOP_TABLE=9,
    ELEM_ID_EXTENSION=-1,
    ELEM_ID_IBSS_PARAM_SET=6,
    ELEM_ID_EXT_ESTIMATED_SERVICE_PARAMS=11,
    ELEM_ID_FMS_RESPONSE=88,
    ELEM_ID_VHT_OPERATION=-64,
    ELEM_ID_MEASUREMENT_RPT=39,
    ELEM_ID_RSNI=65,
    SUBELEM_ID_IGTK=4,
    ELEM_ID_VENDOR_SPECIFIC=-35,
    ELEM_ID_EXT_KEY_DELIVERY=7,
    ELEM_ID_SECONDARY_CHAN_OFFSET=62,
    ELEM_ID_2040_BSS_COEXISTENCE=72,
    ELEM_ID_AP_CHANNEL_REPORT=51,
    ELEM_ID_VHT_OP_MODE_NOTIFICATION=-57,
    ELEM_ID_EXT_FILS_HLP_CONTAINER=5,
    ELEM_ID_FH_PARAM_SET=2,
    ELEM_ID_SUPPORTED_CHANNELS=36,
    ELEM_ID_NEIGHBOR_REPORT=52,
    ELEM_ID_EXT_PASSWORD_IDENTIFIER=33,
    ELEM_ID_TIM=5,
    ELEM_ID_DMS_RESPONSE=100,
    ELEM_ID_BSS_ACCESS_DELAY=63,
    ELEM_ID_OBSS_SCAN_PARAM=74,
    ELEM_ID_EXT_HE_CAPABILITIES=35,
    ELEM_ID_MULTI_BSSID=71,
    ELEM_ID_REQUEST=10,
    ELEM_ID_BSS_AVAIL_ADM_CAP=67,
    ELEM_ID_POWER_CONSTRAINT=32,
    ELEM_ID_LOCATION_PARAM=82,
    ELEM_ID_TFS_REQUEST=91,
    ELEM_ID_MEASUREMENT_REQ=38,
    ELEM_ID_TPC_REPORT=35,
    ELEM_ID_MANAGEMENT_MIC=76,
    ELEM_ID_WAKEUP_SCHEDULE=102,
    ELEM_ID_TS_DELAY=43,
    ELEM_ID_SSID=0,
    ELEM_ID_DS_PARAM_SET=3,
    ELEM_ID_EXT_FILS_WRAPPED_DATA=8,
    ELEM_ID_QOS_TRAFFIC_CAP=89,
    SUBELEM_ID_GTK=2,
    ELEM_ID_TFS_RESPONSE=92,
    ELEM_ID_LINK_ID=101,
    ELEM_ID_EXT_FILS_PUBLIC_KEY=12,
    ELEM_ID_EXT_FTM_SYNC_INFO=9,
    ELEM_ID_BSS_LOAD=11,
    ELEM_ID_RIC_DESCRIPTOR=75,
    ELEM_ID_EXT_SUPPORTED_RATES=50,
    ELEM_ID_EXT_OWE_DH_PARAM=32,
    SUBELEM_ID_PMK_R0_KEY_HOLDER_ID=3,
    ELEM_ID_QOS_CAPABILITY=46,
    ELEM_ID_WNM_SLEEP_MODE=93,
    ELEM_ID_RRM_ENABLED_CAP=70,
    SUBELEM_ID_REPORTED_FRAME_BODY=1,
    ELEM_ID_VHT_CAPABILITIES=-65,
    ELEM_ID_ANTENNA_INFO=64,
    ELEM_ID_MBSSID_INDEX=85,
    ELEM_ID_TPC_REQUEST=34,
    ELEM_ID_DSE_REGISTERED_LOC=58,
    ELEM_ID_QUIET=40,
    ELEM_ID_BSS_MAX_IDLE_PERIOD=90,
    ELEM_ID_HOP_PARAM=8,
    ELEM_ID_WIDE_BAND_CHAN_SW=-63,
    ELEM_ID_EVENT_REPORT=79,
    ELEM_ID_FMS_REQUEST=87,
    ELEM_ID_FAST_BSS_TRANS=55,
    ELEM_ID_EXT_CHAN_SWITCH_ANN=60,
    ELEM_ID_2040_BSS_INTOL_CHRPT=73,
    ELEM_ID_FMS_DESCRIPTOR=86,
    ELEM_ID_TSPEC=13,
    ELEM_ID_EDCA_PARAM_SET=12,
    ELEM_ID_EXT_ASSOC_DELAY_INFO=1,
    ELEM_ID_WAPI=68,
    ELEM_ID_TIM_BCAST_REQUEST=94
} IEEEtypes_ElementId_e;

typedef struct AkmSuite_t AkmSuite_t, *PAkmSuite_t;

typedef struct IEEEtypes_RSNCapability_t IEEEtypes_RSNCapability_t, *PIEEEtypes_RSNCapability_t;

typedef struct MIC_Error_t MIC_Error_t, *PMIC_Error_t;

typedef struct ChanBandInfo_t ChanBandInfo_t, *PChanBandInfo_t;

typedef union ckd ckd, *Pckd;

typedef enum AkmType_e {
    AKM_NONE=0,
    AKM_CCKM=99,
    AKM_1X=1,
    AKM_SUITE_MAX=5,
    AKM_PSK=2,
    AKM_SHA256_PSK=6,
    AKM_TDLS=7,
    AKM_RSN_MAX=6,
    AKM_SHA256_1X=5,
    AKM_FT_1X=3,
    AKM_WPA_MAX=2,
    AKM_FT_PSK=4
} AkmType_e;

typedef enum AkmType_e AkmTypePacked_e;

typedef enum MIC_Fail_State_e {
    FIRST_MIC_FAIL_IN_60_SEC=1,
    SECOND_MIC_FAIL_IN_60_SEC=2,
    NO_MIC_FAILURE=0
} MIC_Fail_State_e;

typedef struct BandConfig_t BandConfig_t, *PBandConfig_t;

typedef struct eapolHskData_t eapolHskData_t, *PeapolHskData_t;

typedef enum ChanBand_e {
    Band_5_GHz=1,
    Band_4_GHz=2,
    Band_2_4_GHz=0
} ChanBand_e;

typedef enum ChanWidth_e {
    ChanWidth_10_MHz=1,
    ChanWidth_20_MHz=0,
    ChanWidth_40_MHz=2,
    ChanWidth_80_MHz=3
} ChanWidth_e;

typedef enum Chan2Offset_e {
    SECONDARY_CHAN_ABOVE=1,
    SECONDARY_CHAN_BELOW=3,
    SECONDARY_CHAN_NONE=0
} Chan2Offset_e;

typedef enum ScanMode_e {
    MANUAL_MODE=0,
    ACS_MODE=1
} ScanMode_e;

struct AkmSuite_t {
    UINT8 akmOui[3];
    AkmTypePacked_e akmType;
};

struct MIC_Error_t {
    enum MIC_Fail_State_e status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    BOOLEAN MICCounterMeasureEnabled;
    UINT32 disableStaAsso;
};

struct SecurityParams_t {
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
};

union anon_union.conflictb01 {
    uint32 Interface;
    struct cm_ConnectionInfo * connPtr;
};

struct customMIB_RSNStats_t {
    UINT8 TKIPICVErrors;
    UINT8 TKIPLocalMICFailures;
    UINT8 TKIPCounterMeasuresInvoked;
};

struct BandConfig_t {
    enum ChanBand_e chanBand:2;
    enum ChanWidth_e chanWidth:2;
    enum Chan2Offset_e chan2Offset:2;
    enum ScanMode_e scanMode:2;
};

struct ChanBandInfo_t {
    struct BandConfig_t bandConfig;
    UINT8 chanNum;
};

struct apSpecificData_t {
    struct apInfo_t * apInfo;
    BufferDesc_t * apInfoBuffDesc;
    struct ChanBandInfo_t chanBandInfo;
    undefined field_0xa;
    undefined field_0xb;
    struct staData_t staData;
};

struct keyMgmtInfoSta_t {
    UINT8 ANonce[32];
    UINT8 SNonce[32];
    UINT8 EAPOL_MIC_Key[16];
    UINT8 EAPOL_Encr_Key[16];
    UINT32 apCounterLo;
    UINT32 apCounterHi;
    UINT32 apCounterZeroDone;
    UINT32 staCounterLo;
    UINT32 staCounterHi;
    BOOLEAN RSNDataTrafficEnabled;
    BOOLEAN RSNSecured;
    BOOLEAN pwkHandshakeComplete;
    struct cipher_key_t * pRxDecryptKey;
    struct KeyData_t PWKey;
    struct KeyData_t GRKey;
    struct KeyData_t newPWKey;
    struct MIC_Error_t sta_MIC_Error;
    struct mm_timer_tag rsnTimer;
    struct cm_ConnectionInfo * connPtr;
    struct KeyData_t IGtk;
};

struct IEEEtypes_SsIdElement_t {
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    IEEEtypes_SsId_t SsId;
};

struct IEEEtypes_RSNCapability_t {
    UINT8 PreAuth:1;
    UINT8 NoPairwise:1;
    UINT8 PtksaReplayCtr:2;
    UINT8 GtksaReplayCtr:2;
    UINT8 MFPR:1;
    UINT8 MFPC:1;
    UINT8 Reserved_8:1;
    UINT8 PeerkeyEnabled:1;
    UINT8 SppAmsduCap:1;
    UINT8 SppAmsduReq:1;
    UINT8 PBAC:1;
    UINT8 Reserved_13_15:3;
};

struct RSNConfig_t {
    UINT8 RSNEnabled:1;
    UINT8 pmkidValid:1;
    UINT8 rsnCapValid:1;
    UINT8 grpMgmtCipherValid:1;
    UINT8 rsvd:4;
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
    struct AkmSuite_t AKM;
    UINT8 PMKID[16];
    struct IEEEtypes_RSNCapability_t rsnCap;
    struct Cipher_t grpMgmtCipher;
};

struct supplicantData {
    BOOLEAN inUse;
    struct IEEEtypes_SsIdElement_t hashSsId;
    IEEEtypes_MacAddr_t localBssid;
    IEEEtypes_MacAddr_t localStaAddr;
    struct customMIB_RSNStats_t customMIB_RSNStats;
    struct RSNConfig_t customMIB_RSNConfig;
    undefined field_0x51;
    undefined field_0x52;
    undefined field_0x53;
    struct keyMgmtInfoSta_t keyMgmtInfoSta;
    struct SecurityParams_t currParams;
};

struct eapolHskData_t {
    UINT8 ANonce[32];
    struct KeyData_t pwsKeyData;
};

union ckd {
    struct eapolHskData_t hskData;
};

struct cipher_key_t {
    union ckd ckd;
};

struct cipher_key_buf {
    struct cipher_key_t cipher_key;
};

union anon_union.conflict2810_for_specDat {
    struct apSpecificData_t apData;
};

struct cm_ConnectionInfo {
    UINT8 conType;
    UINT8 staId;
    UINT8 instNbr;
    UINT8 gtkHwKeyId;
    UINT8 ptkHwKeyId;
    UINT8 mfpHwKeyId;
    undefined field_0x6;
    undefined field_0x7;
    struct supplicantData * suppData;
    struct CommonMlmeData_t comData;
    IEEEtypes_MacAddr_t peerMacAddr;
    IEEEtypes_MacAddr_t localMacAddr;
    union anon_union.conflict2810_for_specDat specDat;
    cipher_key_buf_t TxRxCipherKeyBuf;
};

typedef struct Hdr_8021x_t Hdr_8021x_t, *PHdr_8021x_t;

typedef enum IEEEtypes_8021x_PacketType_e {
    IEEE_8021X_PACKET_TYPE_EAP_PACKET=0,
    IEEE_8021X_PACKET_TYPE_EAPOL_START=1,
    IEEE_8021X_PACKET_TYPE_EAPOL_KEY=3,
    IEEE_8021X_PACKET_TYPE_EAPOL_LOGOFF=2,
    IEEE_8021X_PACKET_TYPE_ASF_ALERT=4
} IEEEtypes_8021x_PacketType_e;

struct Hdr_8021x_t {
    UINT8 protocol_ver;
    enum IEEEtypes_8021x_PacketType_e pckt_type;
    UINT16 pckt_body_len;
};

typedef struct EAPOL_KeyMsg_t EAPOL_KeyMsg_t, *PEAPOL_KeyMsg_t;

typedef struct key_info_t key_info_t, *Pkey_info_t;

struct key_info_t {
    UINT16 KeyMIC:1;
    UINT16 Secure:1;
    UINT16 Error:1;
    UINT16 Request:1;
    UINT16 EncryptedKeyData:1;
    UINT16 Reserved:3;
    UINT16 KeyDescriptorVersion:3;
    UINT16 KeyType:1;
    UINT16 KeyIndex:2;
    UINT16 Install:1;
    UINT16 KeyAck:1;
};

struct EAPOL_KeyMsg_t {
    struct Hdr_8021x_t hdr_8021x;
    UINT8 desc_type;
    struct key_info_t key_info;
    UINT16 key_length;
    UINT32 replay_cnt[2];
    UINT8 key_nonce[32];
    UINT8 EAPOL_key_IV[16];
    UINT8 key_RSC[8];
    UINT8 key_ID[8];
    UINT8 key_MIC[16];
    UINT16 key_material_len;
    UINT8 key_data[1];
};

typedef struct EAPOL_KeyMsg_Tx_t EAPOL_KeyMsg_Tx_t, *PEAPOL_KeyMsg_Tx_t;

typedef struct ether_hdr_t ether_hdr_t, *Pether_hdr_t;

struct ether_hdr_t {
    IEEEtypes_MacAddr_t da;
    IEEEtypes_MacAddr_t sa;
    UINT16 type;
};

struct EAPOL_KeyMsg_Tx_t {
    struct ether_hdr_t ethHdr;
    struct EAPOL_KeyMsg_t keyMsg;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef struct cm_ConnectionInfo cm_ConnectionInfo_t;

typedef union anon_union.conflict2810 anon_union.conflict2810, *Panon_union.conflict2810;

union anon_union.conflict2810 {
    struct apSpecificData_t apData;
};

typedef struct mac_addr mac_addr, *Pmac_addr;

struct mac_addr {
    uint16_t array[3];
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8ab_for__new anon_union.conflict8ab_for__new, *Panon_union.conflict8ab_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict71f anon_struct.conflict71f, *Panon_struct.conflict71f;

typedef struct anon_struct.conflict864 anon_struct.conflict864, *Panon_struct.conflict864;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint {
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue {
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __tm {
    int __tm_sec;
    int __tm_min;
    int __tm_hour;
    int __tm_mday;
    int __tm_mon;
    int __tm_year;
    int __tm_wday;
    int __tm_yday;
    int __tm_isdst;
};

struct anon_struct.conflict71f {
    uint _unused_rand;
    char * _strtok_last;
    char _asctime_buf[26];
    undefined field_0x22;
    undefined field_0x23;
    struct __tm _localtime_buf;
    int _gamma_signgam;
    undefined field_0x4c;
    undefined field_0x4d;
    undefined field_0x4e;
    undefined field_0x4f;
    ulonglong _rand_next;
    struct _rand48 _r48;
    undefined field_0x66;
    undefined field_0x67;
    struct _mbstate_t _mblen_state;
    struct _mbstate_t _mbtowc_state;
    struct _mbstate_t _wctomb_state;
    char _l64a_buf[8];
    char _signal_buf[24];
    int _getdate_err;
    struct _mbstate_t _mbrlen_state;
    struct _mbstate_t _mbrtowc_state;
    struct _mbstate_t _mbsrtowcs_state;
    struct _mbstate_t _wcrtomb_state;
    struct _mbstate_t _wcsrtombs_state;
    int _h_errno;
};

struct anon_struct.conflict864 {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8ab_for__new {
    struct anon_struct.conflict71f _reent;
    struct anon_struct.conflict864 _unused;
};

struct _on_exit_args {
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit {
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf {
    uchar * _base;
    int _size;
};

struct __sFILE {
    uchar * _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void * _cookie;
    _ssize_t (* _read)(struct _reent *, void *, char *, int);
    _ssize_t (* _write)(struct _reent *, void *, char *, int);
    _fpos_t (* _seek)(struct _reent *, void *, _fpos_t, int);
    int (* _close)(struct _reent *, void *);
    struct __sbuf _ub;
    uchar * _up;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    _off_t _offset;
    struct _reent * _data;
    _flock_t _lock;
    struct _mbstate_t _mbstate;
    int _flags2;
};

struct _reent {
    int _errno;
    __FILE * _stdin;
    __FILE * _stdout;
    __FILE * _stderr;
    int _inc;
    char _emergency[25];
    undefined field_0x2d;
    undefined field_0x2e;
    undefined field_0x2f;
    int _unspecified_locale_info;
    struct __locale_t * _locale;
    int __sdidinit;
    void (* __cleanup)(struct _reent *);
    struct _Bigint * _result;
    int _result_k;
    struct _Bigint * _p5s;
    struct _Bigint * * _freelist;
    int _cvtlen;
    char * _cvtbuf;
    union anon_union.conflict8ab_for__new _new;
    struct _atexit * _atexit;
    struct _atexit _atexit0;
    void (** _sig_func)(int);
    struct _glue __sglue;
    __FILE __sf[3];
    undefined field_0x424;
    undefined field_0x425;
    undefined field_0x426;
    undefined field_0x427;
};

typedef union anon_union.conflict8ab anon_union.conflict8ab, *Panon_union.conflict8ab;

union anon_union.conflict8ab {
    struct anon_struct.conflict71f _reent;
    struct anon_struct.conflict864 _unused;
};

typedef enum IEEEtypes_KDEDataType_e {
    KDE_DATA_TYPE_MACADDR=3,
    KDE_DATA_TYPE_SMK=5,
    KDE_DATA_TYPE_LIFETIME=7,
    KDE_DATA_TYPE_ERROR=8,
    KDE_DATA_TYPE_GTK=1,
    KDE_DATA_TYPE_IGTK=9,
    KDE_DATA_TYPE_RESERVED2=2,
    KDE_DATA_TYPE_PMKID=4,
    KDE_DATA_TYPE_RESERVED=0,
    KDE_DATA_TYPE_NONCE=6
} IEEEtypes_KDEDataType_e;

typedef int32_t BaseType_t;

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef enum Elf_SectionHeaderType_RISCV {
    SHT_SYMTAB=2,
    SHT_GNU_versym=1879048191,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_LIBLIST=1879048183,
    SHT_FINI_ARRAY=15,
    SHT_GROUP=17,
    SHT_CHECKSUM=1879048184,
    SHT_SHLIB=10,
    SHT_ANDROID_RELA=1610612738,
    SHT_NOBITS=8,
    SHT_GNU_HASH=1879048182,
    SHT_REL=9,
    SHT_SYMTAB_SHNDX=18,
    SHT_HASH=5,
    SHT_PROGBITS=1,
    SHT_ANDROID_REL=1610612737,
    SHT_NULL=0,
    SHT_GNU_verneed=1879048190,
    SHT_INIT_ARRAY=14,
    SHT_NOTE=7,
    SHT_PREINIT_ARRAY=16,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_SUNW_COMDAT=1879048187,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
} Elf_SectionHeaderType_RISCV;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_RISCV sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




void ap_setpsk(cm_ConnectionInfo_t *connPtr,CHAR *ssid,CHAR *passphrase)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    return;
  }
  uVar1 = _LVL2(ssid);
  *(undefined *)(iVar2 + 0xa4) = uVar1;
  FUN_00010032(iVar2 + 0x84,ssid,0x20);
  uVar1 = FUN_0001003c(passphrase);
  *(undefined *)(iVar2 + 0x58) = uVar1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_stack_0000000c;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    return;
  }
  uVar1 = _LVL2(in_stack_0000000c);
  *(undefined *)(iVar2 + 0xa4) = uVar1;
  FUN_00010032(iVar2 + 0x84,in_stack_0000000c,0x20);
  uVar1 = FUN_0001003c();
  *(undefined *)(iVar2 + 0x58) = uVar1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL2(void)

{
  int unaff_s0;
  undefined uVar1;
  undefined4 in_stack_0000000c;
  
  uVar1 = _LVL2();
  *(undefined *)(unaff_s0 + 0xa4) = uVar1;
  FUN_00010032(unaff_s0 + 0x84,in_stack_0000000c,0x20);
  uVar1 = FUN_0001003c();
  *(undefined *)(unaff_s0 + 0x58) = uVar1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010032(void)

{
  int unaff_s0;
  undefined uVar1;
  
  FUN_00010032();
  uVar1 = FUN_0001003c();
  *(undefined *)(unaff_s0 + 0x58) = uVar1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001003c(void)

{
  int unaff_s0;
  undefined uVar1;
  
  uVar1 = FUN_0001003c();
  *(undefined *)(unaff_s0 + 0x58) = uVar1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void ap_resetConfiguration(cm_ConnectionInfo_t *connPtr)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _L0();
  iVar3 = FUN_00010082(connPtr);
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar1 = _LVL17(0);
    *(undefined *)(iVar2 + 0xa4) = uVar1;
    FUN_000100ae(iVar2 + 0x84,0,0x20);
    *(undefined4 *)(iVar2 + 0xb8) = 1;
    FUN_000100c6(iVar2 + 8,0,0x7c);
    *(undefined2 *)(iVar2 + 0x10) = 1;
    *(ushort *)(iVar2 + 8) = *(ushort *)(iVar2 + 8) & 0xf7 | 0x108;
    *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) & 0xf7 | 0x108;
    *(undefined *)(iVar2 + 0x79) = 3;
    *(undefined *)(iVar2 + 0x7a) = 3;
    *(undefined4 *)(iVar2 + 0x7c) = 100;
    *(undefined4 *)(iVar2 + 0x80) = 100;
    *(undefined4 *)(iVar2 + 0x14) = 0x15180;
  }
  return;
}



void _L0(void)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _L0();
  iVar3 = FUN_00010082();
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar1 = _LVL17(0);
    *(undefined *)(iVar2 + 0xa4) = uVar1;
    FUN_000100ae(iVar2 + 0x84,0,0x20);
    *(undefined4 *)(iVar2 + 0xb8) = 1;
    FUN_000100c6(iVar2 + 8,0,0x7c);
    *(undefined2 *)(iVar2 + 0x10) = 1;
    *(ushort *)(iVar2 + 8) = *(ushort *)(iVar2 + 8) & 0xf7 | 0x108;
    *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) & 0xf7 | 0x108;
    *(undefined *)(iVar2 + 0x79) = 3;
    *(undefined *)(iVar2 + 0x7a) = 3;
    *(undefined4 *)(iVar2 + 0x7c) = 100;
    *(undefined4 *)(iVar2 + 0x80) = 100;
    *(undefined4 *)(iVar2 + 0x14) = 0x15180;
  }
  return;
}



void FUN_00010082(void)

{
  int unaff_s0;
  undefined uVar1;
  int iVar2;
  
  iVar2 = FUN_00010082();
  if ((unaff_s0 != 0) && (iVar2 != 0)) {
    uVar1 = _LVL17(0);
    *(undefined *)(unaff_s0 + 0xa4) = uVar1;
    FUN_000100ae(unaff_s0 + 0x84,0,0x20);
    *(undefined4 *)(unaff_s0 + 0xb8) = 1;
    FUN_000100c6(unaff_s0 + 8,0,0x7c);
    *(undefined2 *)(unaff_s0 + 0x10) = 1;
    *(ushort *)(unaff_s0 + 8) = *(ushort *)(unaff_s0 + 8) & 0xf7 | 0x108;
    *(ushort *)(unaff_s0 + 0xc) = *(ushort *)(unaff_s0 + 0xc) & 0xf7 | 0x108;
    *(undefined *)(unaff_s0 + 0x79) = 3;
    *(undefined *)(unaff_s0 + 0x7a) = 3;
    *(undefined4 *)(unaff_s0 + 0x7c) = 100;
    *(undefined4 *)(unaff_s0 + 0x80) = 100;
    *(undefined4 *)(unaff_s0 + 0x14) = 0x15180;
  }
  return;
}



void _LVL17(void)

{
  int unaff_s0;
  undefined uVar1;
  
  uVar1 = _LVL17();
  *(undefined *)(unaff_s0 + 0xa4) = uVar1;
  FUN_000100ae(unaff_s0 + 0x84,0x20);
  *(undefined4 *)(unaff_s0 + 0xb8) = 1;
  FUN_000100c6(unaff_s0 + 8,0,0x7c);
  *(undefined2 *)(unaff_s0 + 0x10) = 1;
  *(ushort *)(unaff_s0 + 8) = *(ushort *)(unaff_s0 + 8) & 0xf7 | 0x108;
  *(ushort *)(unaff_s0 + 0xc) = *(ushort *)(unaff_s0 + 0xc) & 0xf7 | 0x108;
  *(undefined *)(unaff_s0 + 0x79) = 3;
  *(undefined *)(unaff_s0 + 0x7a) = 3;
  *(undefined4 *)(unaff_s0 + 0x7c) = 100;
  *(undefined4 *)(unaff_s0 + 0x80) = 100;
  *(undefined4 *)(unaff_s0 + 0x14) = 0x15180;
  return;
}



void FUN_000100ae(void)

{
  int unaff_s0;
  
  FUN_000100ae();
  *(undefined4 *)(unaff_s0 + 0xb8) = 1;
  FUN_000100c6(unaff_s0 + 8,0,0x7c);
  *(undefined2 *)(unaff_s0 + 0x10) = 1;
  *(ushort *)(unaff_s0 + 8) = *(ushort *)(unaff_s0 + 8) & 0xf7 | 0x108;
  *(ushort *)(unaff_s0 + 0xc) = *(ushort *)(unaff_s0 + 0xc) & 0xf7 | 0x108;
  *(undefined *)(unaff_s0 + 0x79) = 3;
  *(undefined *)(unaff_s0 + 0x7a) = 3;
  *(undefined4 *)(unaff_s0 + 0x7c) = 100;
  *(undefined4 *)(unaff_s0 + 0x80) = 100;
  *(undefined4 *)(unaff_s0 + 0x14) = 0x15180;
  return;
}



void FUN_000100c6(void)

{
  int unaff_s0;
  undefined2 unaff_s1;
  
  FUN_000100c6();
  *(undefined2 *)(unaff_s0 + 0x10) = unaff_s1;
  *(ushort *)(unaff_s0 + 8) = *(ushort *)(unaff_s0 + 8) & 0xf7 | 0x108;
  *(ushort *)(unaff_s0 + 0xc) = *(ushort *)(unaff_s0 + 0xc) & 0xf7 | 0x108;
  *(undefined *)(unaff_s0 + 0x79) = 3;
  *(undefined *)(unaff_s0 + 0x7a) = 3;
  *(undefined4 *)(unaff_s0 + 0x7c) = 100;
  *(undefined4 *)(unaff_s0 + 0x80) = 100;
  *(undefined4 *)(unaff_s0 + 0x14) = 0x15180;
  return;
}



void InitializeAp(cm_ConnectionInfo_t *connPtr)

{
  InitializeAp(connPtr);
  return;
}


