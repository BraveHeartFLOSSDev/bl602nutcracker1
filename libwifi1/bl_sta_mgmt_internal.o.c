typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct pmkElement_t pmkElement_t, *PpmkElement_t;

typedef union anon_union.conflict2970_for_key anon_union.conflict2970_for_key, *Panon_union.conflict2970_for_key;

typedef uchar UINT8;

typedef char SINT8;

typedef UINT8 IEEEtypes_Addr_t;

typedef IEEEtypes_Addr_t IEEEtypes_MacAddr_t[6];

union anon_union.conflict2970_for_key {
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

struct pmkElement_t {
    union anon_union.conflict2970_for_key key;
    UINT8 PMK[32];
    UINT8 length;
    UINT8 psk_length;
    SINT8 replacementRank;
};

typedef union anon_union.conflict2970 anon_union.conflict2970, *Panon_union.conflict2970;

union anon_union.conflict2970 {
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

typedef int _ssize_t;

typedef union anon_union.conflictd8 anon_union.conflictd8, *Panon_union.conflictd8;

typedef uint wint_t;

union anon_union.conflictd8 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictd8_for___value anon_union.conflictd8_for___value, *Panon_union.conflictd8_for___value;

union anon_union.conflictd8_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictd8_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

struct la_mem_format {
    uint32_t word[4];
};

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

struct dma_desc {
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag {
    struct dma_desc * last_dma[4];
};

typedef struct QueueDefinition QueueDefinition, *PQueueDefinition;

typedef struct QueueDefinition * QueueHandle_t;

struct QueueDefinition {
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

typedef ulong uint32;

typedef ushort uint16;

typedef long SINT32;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef union anon_union.conflict1e76 anon_union.conflict1e76, *Panon_union.conflict1e76;

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

union anon_union.conflict1e76 {
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

typedef struct key_MgtMaterial_t key_MgtMaterial_t, *Pkey_MgtMaterial_t;

typedef union anon_union.conflict1e76_for_keyEncypt anon_union.conflict1e76_for_keyEncypt, *Panon_union.conflict1e76_for_keyEncypt;

union anon_union.conflict1e76_for_keyEncypt {
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
    union anon_union.conflict1e76_for_keyEncypt keyEncypt;
};

typedef struct BufferDesc BufferDesc, *PBufferDesc;

typedef union anon_union.conflict1f43_for_intf anon_union.conflict1f43_for_intf, *Panon_union.conflict1f43_for_intf;

union anon_union.conflict1f43_for_intf {
    uint32 Interface;
};

struct BufferDesc {
    union anon_union.conflict1f43_for_intf intf;
    uint16 DataLen;
    undefined field_0x6;
    undefined field_0x7;
    void * Buffer;
};

typedef struct BufferDesc BufferDesc_t;

typedef union anon_union.conflict1f43 anon_union.conflict1f43, *Panon_union.conflict1f43;

typedef struct cm_ConnectionInfo cm_ConnectionInfo, *Pcm_ConnectionInfo;

typedef struct supplicantData supplicantData, *PsupplicantData;

typedef union anon_union.conflict330a_for_specDat anon_union.conflict330a_for_specDat, *Panon_union.conflict330a_for_specDat;

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

struct IEEEtypes_SsIdElement_t {
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    IEEEtypes_SsId_t SsId;
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

union anon_union.conflict1f43 {
    uint32 Interface;
    struct cm_ConnectionInfo * connPtr;
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

union anon_union.conflict330a_for_specDat {
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
    union anon_union.conflict330a_for_specDat specDat;
    cipher_key_buf_t TxRxCipherKeyBuf;
};

typedef struct KDE_t KDE_t, *PKDE_t;

struct KDE_t {
    UINT8 type;
    UINT8 length;
    UINT8 OUI[3];
    UINT8 dataType;
    UINT8 data[1];
};

typedef struct GTK_KDE_t GTK_KDE_t, *PGTK_KDE_t;

struct GTK_KDE_t {
    UINT8 KeyID:2;
    UINT8 Tx:1;
    UINT8 rsvd:5;
    UINT8 rsvd1;
    UINT8 GTK[1];
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

typedef struct BL_ENDECRYPT_t BL_ENDECRYPT_t, *PBL_ENDECRYPT_t;

struct BL_ENDECRYPT_t {
    UINT8 enDeAction;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    UINT8 * pData;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

struct rx_swdesc {
};

typedef long __int32_t;

typedef uchar __uint8_t;

typedef char __int8_t;

typedef struct cm_ConnectionInfo cm_ConnectionInfo_t;

typedef union anon_union.conflict330a anon_union.conflict330a, *Panon_union.conflict330a;

union anon_union.conflict330a {
    struct apSpecificData_t apData;
};

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct phy_channel_info {
    uint32_t info1;
    uint32_t info2;
};

typedef QueueHandle_t SemaphoreHandle_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

struct mac_addr {
    uint16_t array[3];
};

typedef enum anon_enum_8.conflict9a4 {
    HAL_MM_TIMER=7,
    AC_VI=2,
    AC_MAX_TYPES=4,
    AC_VO=3,
    MOD_CLASS_HT=8,
    HAL_AC3_TIMER=3,
    MOD_CLASS_VHT=9,
    IPC_DMA_CHANNEL_MAX=4,
    MOD_CLASS_DSSS_OFDM=5,
    MOD_CLASS_ERP_OFDM=6,
    HAL_KE_TIMER=8,
    HAL_AC2_TIMER=2,
    HAL_AC0_TIMER=0,
    AC_MAX=4,
    TID_1=1,
    TID_0=0,
    MOD_CLASS_ERP_PBCC=4,
    TID_3=3,
    MOD_CLASS_HR_DSSS=3,
    WMM_AC_VO=3,
    TID_2=2,
    HAL_IDLE_TIMER=5,
    TID_5=5,
    WMM_AC_VI=2,
    TID_4=4,
    HAL_RX_TIMER=6,
    TID_7=7,
    TID_6=6,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    TID_MGT=8,
    HAL_TIMER_MAX=9,
    MOD_CLASS_FHSS=2,
    HAL_AC1_TIMER=1,
    WMM_AC_BK=1,
    AC_BE=1,
    TID_MAX=9,
    MOD_CLASS_INFRA=1,
    MOD_CLASS_OFDM=7,
    WMM_AC_BE=0,
    AC_BK=0,
    HAL_BCN_TIMER=4,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_DATA_RX=1
} anon_enum_8.conflict9a4;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef __int8_t int8_t;

typedef __uint8_t uint8_t;

struct tx_cfm_tag {
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

typedef struct rx_pbd rx_pbd, *Prx_pbd;

struct rx_pbd {
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

typedef union anon_union.conflictcd5 anon_union.conflictcd5, *Panon_union.conflictcd5;

union anon_union.conflictcd5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct rx_hd rx_hd, *Prx_hd;

struct rx_hd {
    uint32_t upatternrx;
    uint32_t next;
    uint32_t first_pbd_ptr;
    struct rx_swdesc * swdesc;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t headerctrlinfo;
    uint16_t frmlen;
    uint16_t ampdu_stat_info;
    uint32_t tsflo;
    uint32_t tsfhi;
    uint32_t recvec1a;
    uint32_t recvec1b;
    uint32_t recvec1c;
    uint32_t recvec1d;
    uint32_t recvec2a;
    uint32_t recvec2b;
    uint32_t statinfo;
};

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef union anon_union.conflictc8b_for_field_3 anon_union.conflictc8b_for_field_3, *Panon_union.conflictc8b_for_field_3;

typedef union anon_union.conflictcb0_for_field_4 anon_union.conflictcb0_for_field_4, *Panon_union.conflictcb0_for_field_4;

typedef union anon_union.conflictcd5_for_field_5 anon_union.conflictcd5_for_field_5, *Panon_union.conflictcd5_for_field_5;

union anon_union.conflictcb0_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflictcd5_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflictc8b_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictc8b_for_field_3 field_3;
    union anon_union.conflictcb0_for_field_4 field_4;
    union anon_union.conflictcd5_for_field_5 field_5;
    uint32_t frmlen;
    uint32_t frmlifetime;
    uint32_t phyctrlinfo;
    uint32_t policyentryaddr;
    uint32_t optlen[3];
    uint32_t macctrlinfo1;
    uint32_t macctrlinfo2;
    uint32_t statinfo;
    uint32_t mediumtimeused;
};

struct tx_hw_desc {
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

typedef union anon_union.conflictc8b anon_union.conflictc8b, *Panon_union.conflictc8b;

union anon_union.conflictc8b {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflictcb0 anon_union.conflictcb0, *Panon_union.conflictcb0;

union anon_union.conflictcb0 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

struct rx_payloaddesc {
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

struct rx_dmadesc {
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8b2_for__new anon_union.conflict8b2_for__new, *Panon_union.conflict8b2_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict726 anon_struct.conflict726, *Panon_struct.conflict726;

typedef struct anon_struct.conflict86b anon_struct.conflict86b, *Panon_struct.conflict86b;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
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

struct anon_struct.conflict726 {
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

struct anon_struct.conflict86b {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _Bigint {
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue {
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
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

union anon_union.conflict8b2_for__new {
    struct anon_struct.conflict726 _reent;
    struct anon_struct.conflict86b _unused;
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
    union anon_union.conflict8b2_for__new _new;
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

typedef union anon_union.conflict8b2 anon_union.conflict8b2, *Panon_union.conflict8b2;

union anon_union.conflict8b2 {
    struct anon_struct.conflict726 _reent;
    struct anon_struct.conflict86b _unused;
};

typedef struct IEEEtypes_InfoElementHdr_t IEEEtypes_InfoElementHdr_t, *PIEEEtypes_InfoElementHdr_t;

struct IEEEtypes_InfoElementHdr_t {
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
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

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct TkipPtk_t TkipPtk_t, *PTkipPtk_t;

struct TkipPtk_t {
    UINT8 kck[16];
    UINT8 kek[16];
    UINT8 tk[16];
    UINT8 rxMicKey[8];
    UINT8 txMicKey[8];
};

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void keyMgmtStaRsnSecuredTimeoutHandler(void *env)

{
  FUN_0001002a(0,_DAT_44b00120 / 1000,0);
  if ((env != (void *)0x0) && (*(int *)((int)env + 0x78) == 0)) {
    FUN_00010042(*(undefined *)(*(int *)((int)env + 0x118) + 1),0xf);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001002a(void)

{
  int unaff_s1;
  
  FUN_0001002a();
  if ((unaff_s1 != 0) && (*(int *)(unaff_s1 + 0x78) == 0)) {
    FUN_00010042(*(undefined *)(*(int *)(unaff_s1 + 0x118) + 1),0xf);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010042(void)

{
  FUN_00010042();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void supplicantGenerateRand(UINT8 *dataOut,UINT32 length)

{
  FUN_000100a8(0,_DAT_44b00120 / 1000,0);
  FUN_000100b4(dataOut,length);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100a8(void)

{
  FUN_000100a8();
  FUN_000100b4();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100b4(void)

{
  FUN_000100b4();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void ComputeEAPOL_MIC(EAPOL_KeyMsg_t *pKeyMsg,UINT16 data_length,UINT8 *MIC_Key,UINT8 MIC_Key_length
                     ,UINT8 micKeyDescVersion)

{
  undefined2 in_register_0000202e;
  undefined3 in_register_00002035;
  undefined3 in_register_00002039;
  uint uVar1;
  undefined4 uStack24;
  int len;
  UINT8 *pMicData;
  
  uVar1 = CONCAT31(in_register_00002039,micKeyDescVersion);
  uStack24 = CONCAT22(in_register_0000202e,data_length);
  if (uVar1 == 0) {
    uVar1 = *(byte *)&(pKeyMsg->key_info).field_0x1 & 7;
  }
  len = (int)pKeyMsg;
  if (uVar1 == 1) {
    FUN_0001011e(MIC_Key,CONCAT31(in_register_00002035,MIC_Key_length),pKeyMsg->key_MIC);
  }
  else {
    if (uVar1 == 2) {
      _LVL29(&len,&uStack24,1,MIC_Key,CONCAT31(in_register_00002035,MIC_Key_length),0x10);
    }
    else {
      _LVL20(MIC_Key,pKeyMsg,uStack24,pKeyMsg->key_MIC);
    }
  }
  return;
}



void _LVL20(void)

{
  _LVL20();
  return;
}



void FUN_0001011e(void)

{
  FUN_0001011e();
  return;
}



void _LVL29(void)

{
  _LVL29();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

UINT16 keyMgmtGetKeySize_internal(RSNConfig_t *pRsnConfig,UINT8 isPairwise)

{
  Cipher_t CVar1;
  UINT16 UVar2;
  undefined3 in_register_0000202d;
  
  FUN_00010170(0,_DAT_44b00120 / 1000,0);
  if (CONCAT31(in_register_0000202d,isPairwise) == 0) {
    CVar1 = pRsnConfig->mcstCipher;
    UVar2 = 0x10;
    if (((((byte)CVar1 & 8) == 0) && (UVar2 = 0xd, ((byte)CVar1 & 2) == 0)) &&
       (UVar2 = 0x20, ((byte)CVar1 & 1) != 0)) {
      UVar2 = 5;
    }
  }
  else {
    UVar2 = 0x20;
    if (((byte)pRsnConfig->ucstCipher & 8) != 0) {
      UVar2 = 0x10;
    }
  }
  FUN_000101a8(0,_DAT_44b00120 / 1000,0);
  return UVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010170(void)

{
  byte bVar1;
  undefined4 uVar2;
  int unaff_s1;
  int unaff_s2;
  
  FUN_00010170();
  if (unaff_s2 == 0) {
    bVar1 = *(byte *)(unaff_s1 + 3);
    uVar2 = 0x10;
    if ((((bVar1 & 8) == 0) && (uVar2 = 0xd, (bVar1 & 2) == 0)) && (uVar2 = 0x20, (bVar1 & 1) != 0))
    {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 0x20;
    if ((*(byte *)(unaff_s1 + 4) & 8) != 0) {
      uVar2 = 0x10;
    }
  }
  FUN_000101a8(0,_DAT_44b00120 / 1000);
  return uVar2;
}



void FUN_000101a8(void)

{
  FUN_000101a8();
  return;
}



// WARNING: Variable defined which should be unmapped: tmpLo
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int isApReplayCounterFresh(keyMgmtInfoSta_t *pKeyMgmtInfoSta,UINT8 *pRxReplayCount)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uStack24;
  UINT32 tmpHi;
  UINT32 tmpLo;
  
  FUN_0001020c(0,_DAT_44b00120 / 1000,0);
  FUN_0001021a(&uStack24,pRxReplayCount,4);
  FUN_0001022a(&tmpHi,pRxReplayCount + 4,4);
  uVar3 = uStack24 * 0x1000000 + (uStack24 >> 0x18) + (uStack24 & 0xff00) * 0x100 +
          (uStack24 >> 8 & 0xff00);
  uVar2 = pKeyMgmtInfoSta->apCounterHi;
  uVar1 = 1;
  if ((uVar3 <= uVar2) && (uVar1 = 0, uVar2 == uVar3)) {
    uVar1 = 1;
    uVar4 = tmpHi * 0x1000000 + (tmpHi >> 0x18) + (tmpHi & 0xff00) * 0x100 + (tmpHi >> 8 & 0xff00);
    uVar3 = pKeyMgmtInfoSta->apCounterLo;
    if ((uVar4 <= uVar3) && ((uVar1 = 0, uVar3 == uVar4 && ((uVar2 | uVar3) == 0)))) {
      uVar1 = (uint)(pKeyMgmtInfoSta->apCounterZeroDone == 0);
    }
  }
  FUN_000102ba(0,_DAT_44b00120 / 1000,0);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_0001020c(void)

{
  bool bVar1;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_s2;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  FUN_0001020c();
  FUN_0001021a(&stack0x00000008,4);
  FUN_0001022a(&stack0x0000000c,unaff_s2 + 4,4);
  uVar3 = in_stack_00000008 * 0x1000000 + (in_stack_00000008 >> 0x18) +
          (in_stack_00000008 & 0xff00) * 0x100 + (in_stack_00000008 >> 8 & 0xff00);
  uVar2 = *(uint *)(unaff_s1 + 100);
  bVar1 = true;
  if ((uVar3 <= uVar2) && (bVar1 = false, uVar2 == uVar3)) {
    bVar1 = true;
    uVar4 = in_stack_0000000c * 0x1000000 + (in_stack_0000000c >> 0x18) +
            (in_stack_0000000c & 0xff00) * 0x100 + (in_stack_0000000c >> 8 & 0xff00);
    uVar3 = *(uint *)(unaff_s1 + 0x60);
    if ((uVar4 <= uVar3) && ((bVar1 = false, uVar3 == uVar4 && ((uVar2 | uVar3) == 0)))) {
      bVar1 = *(int *)(unaff_s1 + 0x68) == 0;
    }
  }
  FUN_000102ba(0,_DAT_44b00120 / 1000);
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_0001021a(void)

{
  bool bVar1;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_s2;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  FUN_0001021a();
  FUN_0001022a(&stack0x0000000c,unaff_s2 + 4,4);
  uVar3 = in_stack_00000008 * 0x1000000 + (in_stack_00000008 >> 0x18) +
          (in_stack_00000008 & 0xff00) * 0x100 + (in_stack_00000008 >> 8 & 0xff00);
  uVar2 = *(uint *)(unaff_s1 + 100);
  bVar1 = true;
  if ((uVar3 <= uVar2) && (bVar1 = false, uVar2 == uVar3)) {
    bVar1 = true;
    uVar4 = in_stack_0000000c * 0x1000000 + (in_stack_0000000c >> 0x18) +
            (in_stack_0000000c & 0xff00) * 0x100 + (in_stack_0000000c >> 8 & 0xff00);
    uVar3 = *(uint *)(unaff_s1 + 0x60);
    if ((uVar4 <= uVar3) && ((bVar1 = false, uVar3 == uVar4 && ((uVar2 | uVar3) == 0)))) {
      bVar1 = *(int *)(unaff_s1 + 0x68) == 0;
    }
  }
  FUN_000102ba(0,_DAT_44b00120 / 1000);
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_0001022a(void)

{
  bool bVar1;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  FUN_0001022a();
  uVar3 = in_stack_00000008 * 0x1000000 + (in_stack_00000008 >> 0x18) +
          (in_stack_00000008 & 0xff00) * 0x100 + (in_stack_00000008 >> 8 & 0xff00);
  uVar2 = *(uint *)(unaff_s1 + 100);
  bVar1 = true;
  if ((uVar3 <= uVar2) && (bVar1 = false, uVar2 == uVar3)) {
    bVar1 = true;
    uVar4 = in_stack_0000000c * 0x1000000 + (in_stack_0000000c >> 0x18) +
            (in_stack_0000000c & 0xff00) * 0x100 + (in_stack_0000000c >> 8 & 0xff00);
    uVar3 = *(uint *)(unaff_s1 + 0x60);
    if ((uVar4 <= uVar3) && ((bVar1 = false, uVar3 == uVar4 && ((uVar2 | uVar3) == 0)))) {
      bVar1 = *(int *)(unaff_s1 + 0x68) == 0;
    }
  }
  FUN_000102ba(0,_DAT_44b00120 / 1000);
  return bVar1;
}



void FUN_000102ba(void)

{
  FUN_000102ba();
  return;
}



// WARNING: Variable defined which should be unmapped: tmpLo
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void updateApReplayCounter(keyMgmtInfoSta_t *pKeyMgmtStaInfo,UINT8 *pRxReplayCount)

{
  uint uVar1;
  uint uVar2;
  uint uStack24;
  UINT32 tmpHi;
  UINT32 tmpLo;
  
  FUN_000102fe(0,_DAT_44b00120 / 1000,0);
  FUN_0001030c(&uStack24,pRxReplayCount,4);
  FUN_0001031c(&tmpHi,pRxReplayCount + 4,4);
  uVar2 = uStack24 * 0x1000000 + (uStack24 >> 0x18) + (uStack24 & 0xff00) * 0x100 +
          (uStack24 >> 8 & 0xff00);
  uVar1 = tmpHi * 0x1000000 + (tmpHi >> 0x18) + (tmpHi & 0xff00) * 0x100 + (tmpHi >> 8 & 0xff00);
  pKeyMgmtStaInfo->apCounterHi = uVar2;
  pKeyMgmtStaInfo->apCounterLo = uVar1;
  if ((uVar2 | uVar1) == 0) {
    pKeyMgmtStaInfo->apCounterZeroDone = 1;
  }
  FUN_0001038c(0,_DAT_44b00120 / 1000,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000102fe(void)

{
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  int unaff_s2;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  FUN_000102fe();
  FUN_0001030c(&stack0x00000008,4);
  FUN_0001031c(&stack0x0000000c,unaff_s2 + 4,4);
  uVar2 = in_stack_00000008 * 0x1000000 + (in_stack_00000008 >> 0x18) +
          (in_stack_00000008 & 0xff00) * 0x100 + (in_stack_00000008 >> 8 & 0xff00);
  uVar1 = in_stack_0000000c * 0x1000000 + (in_stack_0000000c >> 0x18) +
          (in_stack_0000000c & 0xff00) * 0x100 + (in_stack_0000000c >> 8 & 0xff00);
  *(uint *)(unaff_s1 + 100) = uVar2;
  *(uint *)(unaff_s1 + 0x60) = uVar1;
  if ((uVar2 | uVar1) == 0) {
    *(undefined4 *)(unaff_s1 + 0x68) = 1;
  }
  FUN_0001038c(0,_DAT_44b00120 / 1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001030c(void)

{
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  int unaff_s2;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  FUN_0001030c();
  FUN_0001031c(&stack0x0000000c,unaff_s2 + 4,4);
  uVar2 = in_stack_00000008 * 0x1000000 + (in_stack_00000008 >> 0x18) +
          (in_stack_00000008 & 0xff00) * 0x100 + (in_stack_00000008 >> 8 & 0xff00);
  uVar1 = in_stack_0000000c * 0x1000000 + (in_stack_0000000c >> 0x18) +
          (in_stack_0000000c & 0xff00) * 0x100 + (in_stack_0000000c >> 8 & 0xff00);
  *(uint *)(unaff_s1 + 100) = uVar2;
  *(uint *)(unaff_s1 + 0x60) = uVar1;
  if ((uVar2 | uVar1) == 0) {
    *(undefined4 *)(unaff_s1 + 0x68) = 1;
  }
  FUN_0001038c(0,_DAT_44b00120 / 1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001031c(void)

{
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  FUN_0001031c();
  uVar2 = in_stack_00000008 * 0x1000000 + (in_stack_00000008 >> 0x18) +
          (in_stack_00000008 & 0xff00) * 0x100 + (in_stack_00000008 >> 8 & 0xff00);
  uVar1 = in_stack_0000000c * 0x1000000 + (in_stack_0000000c >> 0x18) +
          (in_stack_0000000c & 0xff00) * 0x100 + (in_stack_0000000c >> 8 & 0xff00);
  *(uint *)(unaff_s1 + 100) = uVar2;
  *(uint *)(unaff_s1 + 0x60) = uVar1;
  if ((uVar2 | uVar1) == 0) {
    *(undefined4 *)(unaff_s1 + 0x68) = 1;
  }
  FUN_0001038c(0,_DAT_44b00120 / 1000);
  return;
}



void FUN_0001038c(void)

{
  FUN_0001038c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void formEAPOLEthHdr(EAPOL_KeyMsg_Tx_t *pTxEapol,IEEEtypes_MacAddr_t *da,IEEEtypes_MacAddr_t *sa)

{
  _LVL70(0,_DAT_44b00120 / 1000,0);
  FUN_000103e4(pTxEapol,da,6);
  FUN_000103f4((pTxEapol->ethHdr).sa,sa,6);
  *(undefined *)&(pTxEapol->ethHdr).type = 0x88;
  *(undefined *)((int)&(pTxEapol->ethHdr).type + 1) = 0x8e;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL70(void)

{
  int unaff_s0;
  
  _LVL70();
  FUN_000103e4(6);
  FUN_000103f4(unaff_s0 + 6,6);
  *(undefined *)(unaff_s0 + 0xc) = 0x88;
  *(undefined *)(unaff_s0 + 0xd) = 0x8e;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000103e4(void)

{
  int unaff_s0;
  
  FUN_000103e4();
  FUN_000103f4(unaff_s0 + 6,6);
  *(undefined *)(unaff_s0 + 0xc) = 0x88;
  *(undefined *)(unaff_s0 + 0xd) = 0x8e;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000103f4(void)

{
  int unaff_s0;
  
  FUN_000103f4();
  *(undefined *)(unaff_s0 + 0xc) = 0x88;
  *(undefined *)(unaff_s0 + 0xd) = 0x8e;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOLEAN IsEAPOL_MICValid(EAPOL_KeyMsg_t *pKeyMsg,UINT8 *pMICKey)

{
  UINT8 *pUVar1;
  int iVar2;
  undefined auStack48 [4];
  UINT8 msgMIC [16];
  
  pUVar1 = pKeyMsg->key_MIC;
  _L0(0,_DAT_44b00120 / 1000,0);
  FUN_0001047e(auStack48,pUVar1,0x10);
  FUN_0001048c(pUVar1,0,0x10);
  FUN_000104b8(pKeyMsg,CONCAT21((pKeyMsg->hdr_8021x).pckt_body_len,
                                *(undefined *)((int)&(pKeyMsg->hdr_8021x).pckt_body_len + 1)) + 4U &
                       0xffff,pMICKey,0x10,0);
  iVar2 = FUN_000104c6(pUVar1,auStack48,0x10);
  if (iVar2 == 0) {
    FUN_000104e4(0,_DAT_44b00120 / 1000,0);
  }
  return (uint)(iVar2 == 0);
}



bool _L0(void)

{
  int unaff_s0;
  int iVar1;
  uint unaff_s2;
  int unaff_s4;
  
  _L0();
  FUN_0001047e(0x10);
  FUN_0001048c(0,0x10);
  FUN_000104b8(((uint)(*(ushort *)(unaff_s0 + 2) >> 8) | (uint)*(ushort *)(unaff_s0 + 2) << 8) + 4 &
               0xffff,0x10,0);
  iVar1 = FUN_000104c6(0x10);
  if (iVar1 == 0) {
    FUN_000104e4(0,*(uint *)(unaff_s4 + 0x120) / unaff_s2);
  }
  return iVar1 == 0;
}



bool FUN_0001047e(void)

{
  int unaff_s0;
  int iVar1;
  uint unaff_s2;
  int unaff_s4;
  
  FUN_0001047e();
  FUN_0001048c(0,0x10);
  FUN_000104b8(((uint)(*(ushort *)(unaff_s0 + 2) >> 8) | (uint)*(ushort *)(unaff_s0 + 2) << 8) + 4 &
               0xffff,0x10,0);
  iVar1 = FUN_000104c6(0x10);
  if (iVar1 == 0) {
    FUN_000104e4(0,*(uint *)(unaff_s4 + 0x120) / unaff_s2);
  }
  return iVar1 == 0;
}



bool FUN_0001048c(void)

{
  int unaff_s0;
  int iVar1;
  uint unaff_s2;
  int unaff_s4;
  
  FUN_0001048c();
  FUN_000104b8(((uint)(*(ushort *)(unaff_s0 + 2) >> 8) | (uint)*(ushort *)(unaff_s0 + 2) << 8) + 4 &
               0xffff,0x10,0);
  iVar1 = FUN_000104c6(0x10);
  if (iVar1 == 0) {
    FUN_000104e4(0,*(uint *)(unaff_s4 + 0x120) / unaff_s2);
  }
  return iVar1 == 0;
}



bool FUN_000104b8(void)

{
  int iVar1;
  uint unaff_s2;
  int unaff_s4;
  
  FUN_000104b8();
  iVar1 = FUN_000104c6(0x10);
  if (iVar1 == 0) {
    FUN_000104e4(0,*(uint *)(unaff_s4 + 0x120) / unaff_s2);
  }
  return iVar1 == 0;
}



bool FUN_000104c6(void)

{
  int iVar1;
  uint unaff_s2;
  int unaff_s4;
  
  iVar1 = FUN_000104c6();
  if (iVar1 == 0) {
    FUN_000104e4(0,*(uint *)(unaff_s4 + 0x120) / unaff_s2);
  }
  return iVar1 == 0;
}



undefined4 FUN_000104e4(void)

{
  FUN_000104e4();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

UINT16 KeyMgmtSta_PopulateEAPOLLengthMic
                 (EAPOL_KeyMsg_Tx_t *pTxEapol,UINT8 *pEAPOLMICKey,UINT8 eapolProtocolVersion,
                 UINT8 forceKeyDescVersion)

{
  undefined uVar1;
  ushort uVar2;
  undefined3 in_register_00002035;
  UINT16 UVar3;
  uint uVar4;
  
  UVar3 = 0;
  _L0(0,_DAT_44b00120 / 1000,0);
  if (pTxEapol != (EAPOL_KeyMsg_Tx_t *)0x0) {
    uVar1 = *(undefined *)((int)&(pTxEapol->keyMsg).key_material_len + 1);
    uVar2 = (pTxEapol->keyMsg).key_material_len;
    uVar4 = uVar2 + 0x5f & 0xffff;
    UVar3 = (UINT16)uVar4;
    (pTxEapol->keyMsg).hdr_8021x.pckt_type = IEEE_8021X_PACKET_TYPE_EAPOL_KEY;
    *(char *)&(pTxEapol->keyMsg).hdr_8021x.pckt_body_len = (char)(uVar4 >> 8);
    *(char *)((int)&(pTxEapol->keyMsg).hdr_8021x.pckt_body_len + 1) = (char)uVar4;
    *(undefined *)&(pTxEapol->keyMsg).key_material_len = uVar1;
    (pTxEapol->keyMsg).hdr_8021x.protocol_ver = eapolProtocolVersion;
    *(char *)((int)&(pTxEapol->keyMsg).key_material_len + 1) = (char)uVar2;
    FUN_000105ac(&pTxEapol->keyMsg,uVar2 + 99 & 0xffff,pEAPOLMICKey,0x10,
                 CONCAT31(in_register_00002035,forceKeyDescVersion));
    FUN_000105c8(0,_DAT_44b00120 / 1000,0);
  }
  return UVar3;
}



uint _L0(void)

{
  short sVar1;
  int unaff_s0;
  uint unaff_s1;
  int unaff_s3;
  uint unaff_s4;
  undefined unaff_s6;
  undefined4 in_stack_0000000c;
  
  _L0();
  if (unaff_s0 != 0) {
    sVar1 = *(short *)(unaff_s0 + 0x6f);
    unaff_s4 = (uint)(ushort)(sVar1 + 0x5fU);
    *(undefined *)(unaff_s0 + 0xf) = 3;
    *(char *)(unaff_s0 + 0x10) = (char)(unaff_s4 >> 8);
    *(char *)(unaff_s0 + 0x11) = (char)(sVar1 + 0x5fU);
    *(char *)(unaff_s0 + 0x6f) = (char)((ushort)sVar1 >> 8);
    *(undefined *)(unaff_s0 + 0xe) = unaff_s6;
    *(char *)(unaff_s0 + 0x70) = (char)sVar1;
    FUN_000105ac(unaff_s0 + 0xe,sVar1 + 99,0x10,in_stack_0000000c);
    FUN_000105c8(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  }
  return unaff_s4;
}



void FUN_000105ac(void)

{
  uint unaff_s1;
  int unaff_s3;
  
  FUN_000105ac();
  FUN_000105c8(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  return;
}



void FUN_000105c8(void)

{
  FUN_000105c8();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

KDE_t * parseKeyKDE(IEEEtypes_InfoElementHdr_t *pIe)

{
  int iVar1;
  
  FUN_00010610(0,_DAT_44b00120 / 1000,0);
  if (((pIe->ElementId != ELEM_ID_VENDOR_SPECIFIC) || (pIe->Len < 8)) ||
     (iVar1 = FUN_0001066e(pIe + 1,0,3), iVar1 != 0)) {
    pIe = (IEEEtypes_InfoElementHdr_t *)0x0;
    _L0(0,_DAT_44b00120 / 1000,0);
  }
  return (KDE_t *)pIe;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * FUN_00010610(void)

{
  char *unaff_s0;
  int iVar1;
  
  FUN_00010610();
  if (((*unaff_s0 != -0x23) || ((byte)unaff_s0[1] < 8)) ||
     (iVar1 = FUN_0001066e(unaff_s0 + 2,0,3), iVar1 != 0)) {
    unaff_s0 = (char *)0x0;
    _L0(0,_DAT_44b00120 / 1000);
  }
  return unaff_s0;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001066e(void)

{
  undefined4 unaff_s0;
  int iVar1;
  
  iVar1 = FUN_0001066e();
  if (iVar1 != 0) {
    unaff_s0 = 0;
    _L0(0,_DAT_44b00120 / 1000);
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

KDE_t * parseKeyKDE_DataType(UINT8 *pData,SINT32 dataLen,IEEEtypes_KDEDataType_e KDEDataType)

{
  KDE_t *pKVar1;
  undefined3 in_register_00002031;
  
  _LVL114(0,_DAT_44b00120 / 1000,0);
  if (pData != (UINT8 *)0x0) {
    while (2 < dataLen) {
      if (*pData == -0x23) {
        pKVar1 = (KDE_t *)FUN_00010714(pData);
        if ((pKVar1 != (KDE_t *)0x0) &&
           ((uint)pKVar1->dataType == CONCAT31(in_register_00002031,KDEDataType))) {
          return pKVar1;
        }
        if (pData[1] == '\0') {
          dataLen = 2;
        }
      }
      dataLen = dataLen + (-2 - (uint)pData[1]);
      pData = pData + pData[1] + 2;
    }
    pData = (UINT8 *)0x0;
    _L0(0,_DAT_44b00120 / 1000,0);
  }
  return (KDE_t *)pData;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * _LVL114(void)

{
  char *unaff_s0;
  char *pcVar1;
  int unaff_s3;
  uint unaff_s5;
  
  _LVL114();
  if (unaff_s0 != (char *)0x0) {
    while (2 < unaff_s3) {
      if (*unaff_s0 == -0x23) {
        pcVar1 = (char *)FUN_00010714(unaff_s0);
        if ((pcVar1 != (char *)0x0) && ((byte)pcVar1[5] == unaff_s5)) {
          return pcVar1;
        }
        if (unaff_s0[1] == '\0') {
          unaff_s3 = 2;
        }
      }
      unaff_s3 = unaff_s3 + (-2 - (uint)(byte)unaff_s0[1]);
      unaff_s0 = unaff_s0 + (byte)unaff_s0[1] + 2;
    }
    unaff_s0 = (char *)0x0;
    _L0(0,_DAT_44b00120 / 1000);
  }
  return unaff_s0;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00010714(byte *param_1)

{
  byte *unaff_s1;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  
  while ((iVar1 = FUN_00010714(param_1), iVar1 == 0 || (*(byte *)(iVar1 + 5) != unaff_s5))) {
    if (unaff_s1[1] == 0) {
      unaff_s3 = 2;
    }
    do {
      unaff_s3 = unaff_s3 + (unaff_s7 - (uint)unaff_s1[1]);
      unaff_s1 = unaff_s1 + unaff_s1[1] + 2;
      if (unaff_s3 <= unaff_s4) {
        _L0(0,_DAT_44b00120 / 1000);
        return 0;
      }
      param_1 = unaff_s1;
    } while (*unaff_s1 != unaff_s6);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

KDE_t * parseKeyDataGTK(UINT8 *pKey,UINT16 len,KeyData_t *pGRKey)

{
  KDE_t *pKVar1;
  undefined2 in_register_0000202e;
  undefined auStack40 [4];
  UINT8 buf [8];
  
  _LVL127(0,_DAT_44b00120 / 1000,0);
  pKVar1 = (KDE_t *)FUN_00010780(pKey,CONCAT22(in_register_0000202e,len),1);
  if (pKVar1 != (KDE_t *)0x0) {
    FUN_00010798(pGRKey,&pKVar1[1].length,pKVar1->length - 6);
    pGRKey->KeyIndex = pKVar1->data[0] & 3;
    FUN_000107b4(auStack40,pGRKey->TxMICKey,8);
    FUN_000107c4(pGRKey->TxMICKey,pGRKey->RxMICKey,8);
    FUN_000107d2(pGRKey->RxMICKey,auStack40,8);
  }
  FUN_000107f6(0,_DAT_44b00120 / 1000,0);
  return pKVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _LVL127(void)

{
  int unaff_s0;
  int iVar1;
  
  _LVL127();
  iVar1 = FUN_00010780(1);
  if (iVar1 != 0) {
    FUN_00010798(iVar1 + 8,*(byte *)(iVar1 + 1) - 6);
    *(ushort *)(unaff_s0 + 0x26) = *(byte *)(iVar1 + 6) & 3;
    FUN_000107b4(&stack0x00000008,unaff_s0 + 0x18,8);
    FUN_000107c4(unaff_s0 + 0x18,unaff_s0 + 0x10,8);
    FUN_000107d2(unaff_s0 + 0x10,&stack0x00000008,8);
  }
  FUN_000107f6(0,_DAT_44b00120 / 1000);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00010780(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = FUN_00010780();
  if (iVar1 != 0) {
    FUN_00010798(iVar1 + 8,*(byte *)(iVar1 + 1) - 6);
    *(ushort *)(unaff_s0 + 0x26) = *(byte *)(iVar1 + 6) & 3;
    FUN_000107b4(&stack0x00000008,unaff_s0 + 0x18,8);
    FUN_000107c4(unaff_s0 + 0x18,unaff_s0 + 0x10,8);
    FUN_000107d2(unaff_s0 + 0x10,&stack0x00000008,8);
  }
  FUN_000107f6(0,_DAT_44b00120 / 1000);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010798(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00010798();
  *(ushort *)(unaff_s0 + 0x26) = *(byte *)(unaff_s1 + 6) & 3;
  FUN_000107b4(&stack0x00000008,unaff_s0 + 0x18,8);
  FUN_000107c4(unaff_s0 + 0x18,unaff_s0 + 0x10,8);
  FUN_000107d2(unaff_s0 + 0x10,&stack0x00000008,8);
  FUN_000107f6(0,_DAT_44b00120 / 1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000107b4(void)

{
  int unaff_s0;
  
  FUN_000107b4();
  FUN_000107c4(unaff_s0 + 0x10,8);
  FUN_000107d2(unaff_s0 + 0x10,&stack0x00000008,8);
  FUN_000107f6(0,_DAT_44b00120 / 1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000107c4(void)

{
  FUN_000107c4();
  FUN_000107d2(&stack0x00000008,8);
  FUN_000107f6(0,_DAT_44b00120 / 1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000107d2(void)

{
  FUN_000107d2();
  FUN_000107f6(0,_DAT_44b00120 / 1000);
  return;
}



void FUN_000107f6(void)

{
  FUN_000107f6();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void KeyMgmtSta_ApplyKEK(EAPOL_KeyMsg_t *pKeyMsg,KeyData_t *pGRKey,UINT8 *EAPOL_Encr_Key)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  
  _LVL142(0,_DAT_44b00120 / 1000,0);
  bVar1 = pKeyMsg->key_RSC[1];
  pGRKey->TxIV16 = (ushort)bVar1 << 8;
  pGRKey->TxIV16 = CONCAT11(bVar1,pKeyMsg->key_RSC[0]);
  pGRKey->TxIV32 = 0xffffffff;
  uVar2 = *(undefined *)((int)&pKeyMsg->key_material_len + 1);
  uVar3 = CONCAT21(pKeyMsg->key_material_len,uVar2) & 0xffff;
  *(char *)((int)&pKeyMsg->key_material_len + 1) = (char)(uVar3 >> 8);
  bVar1 = *(byte *)&(pKeyMsg->key_info).field_0x1;
  *(undefined *)&pKeyMsg->key_material_len = uVar2;
  if ((bVar1 & 7) == 1) {
    FUN_000108a2(EAPOL_Encr_Key,pKeyMsg->EAPOL_key_IV,0x10,0x100);
  }
  else {
    FUN_000108e8(EAPOL_Encr_Key,2,(uVar3 >> 3) - 1,pKeyMsg->key_data,0,pKeyMsg->key_data);
    iVar4 = pKeyMsg->key_material_len - 8;
    *(char *)&pKeyMsg->key_material_len = (char)((uint)(iVar4 * 0x10000) >> 0x10);
    *(char *)((int)&pKeyMsg->key_material_len + 1) = (char)((uint)iVar4 >> 8);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL142(void)

{
  byte bVar1;
  ushort uVar2;
  int unaff_s0;
  int iVar3;
  int unaff_s2;
  
  _LVL142();
  bVar1 = *(byte *)(unaff_s0 + 0x42);
  *(ushort *)(unaff_s2 + 0x24) = (ushort)bVar1 << 8;
  *(ushort *)(unaff_s2 + 0x24) = CONCAT11(bVar1,*(undefined *)(unaff_s0 + 0x41));
  *(undefined4 *)(unaff_s2 + 0x20) = 0xffffffff;
  uVar2 = *(ushort *)(unaff_s0 + 0x61);
  *(char *)(unaff_s0 + 0x62) = (char)(uVar2 & 0xff);
  *(char *)(unaff_s0 + 0x61) = (char)(uVar2 >> 8);
  if ((*(byte *)(unaff_s0 + 6) & 7) == 1) {
    FUN_000108a2(unaff_s0 + 0x31,0x10,0x100);
  }
  else {
    FUN_000108e8(2,(((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) >> 3) - 1,unaff_s0 + 99,0,
                 unaff_s0 + 99);
    iVar3 = *(ushort *)(unaff_s0 + 0x61) - 8;
    *(char *)(unaff_s0 + 0x61) = (char)((uint)(iVar3 * 0x10000) >> 0x10);
    *(char *)(unaff_s0 + 0x62) = (char)((uint)iVar3 >> 8);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000108a2(void)

{
  FUN_000108a2();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000108e8(void)

{
  int unaff_s0;
  int iVar1;
  
  FUN_000108e8();
  iVar1 = *(ushort *)(unaff_s0 + 0x61) - 8;
  *(char *)(unaff_s0 + 0x61) = (char)((uint)(iVar1 * 0x10000) >> 0x10);
  *(char *)(unaff_s0 + 0x62) = (char)((uint)iVar1 >> 8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOLEAN KeyMgmtSta_IsRxEAPOLValid(keyMgmtInfoSta_t *pKeyMgmtInfoSta,EAPOL_KeyMsg_t *pKeyMsg)

{
  BOOLEAN BVar1;
  int iVar2;
  
  FUN_0001093c(0,_DAT_44b00120 / 1000,0);
  if ((((pKeyMgmtInfoSta == (keyMgmtInfoSta_t *)0x0) || (pKeyMsg == (EAPOL_KeyMsg_t *)0x0)) ||
      (iVar2 = FUN_0001095c(pKeyMgmtInfoSta,pKeyMsg->replay_cnt), iVar2 == 0)) ||
     (((*(byte *)&pKeyMsg->key_info & 1) != 0 &&
      ((((*(byte *)&(pKeyMsg->key_info).field_0x1 & 8) != 0 &&
        (iVar2 = FUN_000109ba(pKeyMsg->key_nonce,pKeyMgmtInfoSta,0x20), iVar2 != 0)) ||
       (iVar2 = FUN_000109a4(pKeyMsg,pKeyMgmtInfoSta->EAPOL_MIC_Key), iVar2 == 0)))))) {
    BVar1 = 0;
  }
  else {
    FUN_0001098a(0,_DAT_44b00120 / 1000,0);
    BVar1 = 1;
  }
  return BVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001093c(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  
  FUN_0001093c();
  if ((((unaff_s1 == 0) || (unaff_s0 == 0)) || (iVar2 = FUN_0001095c(unaff_s0 + 9), iVar2 == 0)) ||
     (((*(byte *)(unaff_s0 + 5) & 1) != 0 &&
      ((((*(byte *)(unaff_s0 + 6) & 8) != 0 &&
        (iVar2 = FUN_000109ba(unaff_s0 + 0x11,0x20), iVar2 != 0)) ||
       (iVar2 = FUN_000109a4(unaff_s1 + 0x40), iVar2 == 0)))))) {
    uVar1 = 0;
  }
  else {
    FUN_0001098a(0,_DAT_44b00120 / 1000);
    uVar1 = 1;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001095c(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0001095c();
  if ((iVar2 == 0) ||
     (((*(byte *)(unaff_s0 + 5) & 1) != 0 &&
      ((((*(byte *)(unaff_s0 + 6) & 8) != 0 &&
        (iVar2 = FUN_000109ba(unaff_s0 + 0x11,0x20), iVar2 != 0)) ||
       (iVar2 = FUN_000109a4(unaff_s1 + 0x40), iVar2 == 0)))))) {
    uVar1 = 0;
  }
  else {
    FUN_0001098a(0,_DAT_44b00120 / 1000);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 FUN_0001098a(void)

{
  FUN_0001098a();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_000109a4(void)

{
  int iVar1;
  
  iVar1 = FUN_000109a4();
  if (iVar1 != 0) {
    FUN_0001098a(0,_DAT_44b00120 / 1000);
  }
  return iVar1 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000109ba(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_000109ba();
  if ((iVar2 == 0) && (iVar2 = FUN_000109a4(unaff_s1 + 0x40), iVar2 != 0)) {
    FUN_0001098a(0,_DAT_44b00120 / 1000);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void KeyMgmtSta_PrepareEAPOLFrame
               (EAPOL_KeyMsg_Tx_t *pTxEapol,EAPOL_KeyMsg_t *pRxEapol,IEEEtypes_MacAddr_t *da,
               IEEEtypes_MacAddr_t *sa,UINT8 *pSNonce)

{
  byte bVar1;
  byte bVar2;
  UINT32 UVar3;
  byte bVar4;
  
  _L0(0,_DAT_44b00120 / 1000,0);
  if ((pTxEapol != (EAPOL_KeyMsg_Tx_t *)0x0) && (pRxEapol != (EAPOL_KeyMsg_t *)0x0)) {
    FUN_00010a18(pTxEapol,0,0x72);
    FUN_00010a26(pTxEapol,da,sa);
    (pTxEapol->keyMsg).desc_type = pRxEapol->desc_type;
    bVar4 = *(byte *)&(pRxEapol->key_info).field_0x1 & 8;
    bVar1 = *(byte *)&(pTxEapol->keyMsg).key_info.field_0x1;
    bVar2 = *(byte *)&(pTxEapol->keyMsg).key_info;
    *(byte *)&(pTxEapol->keyMsg).key_info.field_0x1 = bVar1 & 0xf7 | bVar4;
    *(byte *)&(pTxEapol->keyMsg).key_info = bVar2 | 1;
    *(byte *)&(pTxEapol->keyMsg).key_info = bVar2 & 0xfd | 1 | *(byte *)&pRxEapol->key_info & 2;
    UVar3 = pRxEapol->replay_cnt[0];
    *(char *)(pTxEapol->keyMsg).replay_cnt = (char)*(undefined3 *)pRxEapol->replay_cnt;
    *(char *)((int)(pTxEapol->keyMsg).replay_cnt + 1) = (char)(UVar3 >> 8);
    *(char *)((int)(pTxEapol->keyMsg).replay_cnt + 2) = (char)(UVar3 >> 0x10);
    *(char *)((int)(pTxEapol->keyMsg).replay_cnt + 3) = (char)(UVar3 >> 0x18);
    UVar3 = pRxEapol->replay_cnt[1];
    *(char *)((pTxEapol->keyMsg).replay_cnt + 1) = (char)*(undefined3 *)(pRxEapol->replay_cnt + 1);
    *(char *)((int)(pTxEapol->keyMsg).replay_cnt + 5) = (char)(UVar3 >> 8);
    *(char *)((int)(pTxEapol->keyMsg).replay_cnt + 6) = (char)(UVar3 >> 0x10);
    *(char *)((int)(pTxEapol->keyMsg).replay_cnt + 7) = (char)(UVar3 >> 0x18);
    *(byte *)&(pTxEapol->keyMsg).key_info.field_0x1 =
         bVar1 & 0xf0 | bVar4 | *(byte *)&(pRxEapol->key_info).field_0x1 & 7;
    if (pSNonce != (UINT8 *)0x0) {
      FUN_00010aec((pTxEapol->keyMsg).key_nonce,pSNonce,0x20);
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int unaff_s0;
  int unaff_s1;
  byte bVar4;
  int unaff_s3;
  
  _L0();
  if ((unaff_s0 != 0) && (unaff_s1 != 0)) {
    FUN_00010a18(0,0x72);
    FUN_00010a26();
    *(undefined *)(unaff_s0 + 0x12) = *(undefined *)(unaff_s1 + 4);
    bVar4 = *(byte *)(unaff_s1 + 6) & 8;
    bVar1 = *(byte *)(unaff_s0 + 0x14);
    bVar2 = *(byte *)(unaff_s0 + 0x13);
    *(byte *)(unaff_s0 + 0x14) = bVar1 & 0xf7 | bVar4;
    *(byte *)(unaff_s0 + 0x13) = bVar2 | 1;
    *(byte *)(unaff_s0 + 0x13) = bVar2 & 0xfd | 1 | *(byte *)(unaff_s1 + 5) & 2;
    uVar3 = *(undefined4 *)(unaff_s1 + 9);
    *(char *)(unaff_s0 + 0x17) = (char)uVar3;
    *(char *)(unaff_s0 + 0x18) = (char)((uint)uVar3 >> 8);
    *(char *)(unaff_s0 + 0x19) = (char)((uint)uVar3 >> 0x10);
    *(char *)(unaff_s0 + 0x1a) = (char)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)(unaff_s1 + 0xd);
    *(char *)(unaff_s0 + 0x1b) = (char)uVar3;
    *(char *)(unaff_s0 + 0x1c) = (char)((uint)uVar3 >> 8);
    *(char *)(unaff_s0 + 0x1d) = (char)((uint)uVar3 >> 0x10);
    *(char *)(unaff_s0 + 0x1e) = (char)((uint)uVar3 >> 0x18);
    *(byte *)(unaff_s0 + 0x14) = bVar1 & 0xf0 | bVar4 | *(byte *)(unaff_s1 + 6) & 7;
    if (unaff_s3 != 0) {
      FUN_00010aec(unaff_s0 + 0x1f,0x20);
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a18(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int unaff_s0;
  int unaff_s1;
  byte bVar4;
  int unaff_s3;
  
  FUN_00010a18();
  FUN_00010a26();
  *(undefined *)(unaff_s0 + 0x12) = *(undefined *)(unaff_s1 + 4);
  bVar4 = *(byte *)(unaff_s1 + 6) & 8;
  bVar1 = *(byte *)(unaff_s0 + 0x14);
  bVar2 = *(byte *)(unaff_s0 + 0x13);
  *(byte *)(unaff_s0 + 0x14) = bVar1 & 0xf7 | bVar4;
  *(byte *)(unaff_s0 + 0x13) = bVar2 | 1;
  *(byte *)(unaff_s0 + 0x13) = bVar2 & 0xfd | 1 | *(byte *)(unaff_s1 + 5) & 2;
  uVar3 = *(undefined4 *)(unaff_s1 + 9);
  *(char *)(unaff_s0 + 0x17) = (char)uVar3;
  *(char *)(unaff_s0 + 0x18) = (char)((uint)uVar3 >> 8);
  *(char *)(unaff_s0 + 0x19) = (char)((uint)uVar3 >> 0x10);
  *(char *)(unaff_s0 + 0x1a) = (char)((uint)uVar3 >> 0x18);
  uVar3 = *(undefined4 *)(unaff_s1 + 0xd);
  *(char *)(unaff_s0 + 0x1b) = (char)uVar3;
  *(char *)(unaff_s0 + 0x1c) = (char)((uint)uVar3 >> 8);
  *(char *)(unaff_s0 + 0x1d) = (char)((uint)uVar3 >> 0x10);
  *(char *)(unaff_s0 + 0x1e) = (char)((uint)uVar3 >> 0x18);
  *(byte *)(unaff_s0 + 0x14) = bVar1 & 0xf0 | bVar4 | *(byte *)(unaff_s1 + 6) & 7;
  if (unaff_s3 != 0) {
    FUN_00010aec(unaff_s0 + 0x1f,0x20);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a26(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int unaff_s0;
  int unaff_s1;
  byte bVar4;
  int unaff_s3;
  
  FUN_00010a26();
  *(undefined *)(unaff_s0 + 0x12) = *(undefined *)(unaff_s1 + 4);
  bVar4 = *(byte *)(unaff_s1 + 6) & 8;
  bVar1 = *(byte *)(unaff_s0 + 0x14);
  bVar2 = *(byte *)(unaff_s0 + 0x13);
  *(byte *)(unaff_s0 + 0x14) = bVar1 & 0xf7 | bVar4;
  *(byte *)(unaff_s0 + 0x13) = bVar2 | 1;
  *(byte *)(unaff_s0 + 0x13) = bVar2 & 0xfd | 1 | *(byte *)(unaff_s1 + 5) & 2;
  uVar3 = *(undefined4 *)(unaff_s1 + 9);
  *(char *)(unaff_s0 + 0x17) = (char)uVar3;
  *(char *)(unaff_s0 + 0x18) = (char)((uint)uVar3 >> 8);
  *(char *)(unaff_s0 + 0x19) = (char)((uint)uVar3 >> 0x10);
  *(char *)(unaff_s0 + 0x1a) = (char)((uint)uVar3 >> 0x18);
  uVar3 = *(undefined4 *)(unaff_s1 + 0xd);
  *(char *)(unaff_s0 + 0x1b) = (char)uVar3;
  *(char *)(unaff_s0 + 0x1c) = (char)((uint)uVar3 >> 8);
  *(char *)(unaff_s0 + 0x1d) = (char)((uint)uVar3 >> 0x10);
  *(char *)(unaff_s0 + 0x1e) = (char)((uint)uVar3 >> 0x18);
  *(byte *)(unaff_s0 + 0x14) = bVar1 & 0xf0 | bVar4 | *(byte *)(unaff_s1 + 6) & 7;
  if (unaff_s3 != 0) {
    FUN_00010aec(unaff_s0 + 0x1f,0x20);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010aec(void)

{
  FUN_00010aec();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOLEAN supplicantAkmIsWpaWpa2(AkmSuite_t *pAkm)

{
  int iVar1;
  BOOLEAN BVar2;
  
  FUN_00010b68(0,_DAT_44b00120 / 1000,0);
  iVar1 = FUN_00010b7c(pAkm,0,3);
  if ((iVar1 == 0) || (iVar1 = FUN_00010ba2(pAkm,0,3), iVar1 == 0)) {
    BVar2 = 1;
  }
  else {
    FUN_00010bc0(0,_DAT_44b00120 / 1000,0);
    BVar2 = 0;
  }
  return BVar2;
}



undefined4 FUN_00010b68(void)

{
  uint unaff_s0;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  
  FUN_00010b68();
  iVar1 = FUN_00010b7c(0,3);
  if ((iVar1 == 0) || (iVar1 = FUN_00010ba2(0,3), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    FUN_00010bc0(0,*(uint *)(unaff_s2 + 0x120) / unaff_s0);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_00010b7c(void)

{
  uint unaff_s0;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  
  iVar1 = FUN_00010b7c();
  if ((iVar1 == 0) || (iVar1 = FUN_00010ba2(0,3), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    FUN_00010bc0(0,*(uint *)(unaff_s2 + 0x120) / unaff_s0);
    uVar2 = 0;
  }
  return uVar2;
}



bool FUN_00010ba2(void)

{
  uint unaff_s0;
  int iVar1;
  int unaff_s2;
  
  iVar1 = FUN_00010ba2();
  if (iVar1 != 0) {
    FUN_00010bc0(0,*(uint *)(unaff_s2 + 0x120) / unaff_s0);
  }
  return iVar1 == 0;
}



undefined4 FUN_00010bc0(void)

{
  FUN_00010bc0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOLEAN supplicantAkmIsWpa2(AkmSuite_t *pAkm)

{
  int iVar1;
  
  FUN_00010bfa(0,_DAT_44b00120 / 1000,0);
  iVar1 = FUN_00010c0e(pAkm,0,3);
  if (iVar1 != 0) {
    FUN_00010c2c(0,_DAT_44b00120 / 1000,0);
  }
  return (uint)(iVar1 == 0);
}



bool FUN_00010bfa(void)

{
  uint unaff_s0;
  int iVar1;
  int unaff_s2;
  
  FUN_00010bfa();
  iVar1 = FUN_00010c0e(0,3);
  if (iVar1 != 0) {
    FUN_00010c2c(0,*(uint *)(unaff_s2 + 0x120) / unaff_s0);
  }
  return iVar1 == 0;
}



bool FUN_00010c0e(void)

{
  uint unaff_s0;
  int iVar1;
  int unaff_s2;
  
  iVar1 = FUN_00010c0e();
  if (iVar1 != 0) {
    FUN_00010c2c(0,*(uint *)(unaff_s2 + 0x120) / unaff_s0);
  }
  return iVar1 == 0;
}



undefined4 FUN_00010c2c(void)

{
  FUN_00010c2c();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOLEAN supplicantAkmIsWpaWpa2Psk(AkmSuite_t *pAkm)

{
  uint uVar1;
  
  FUN_00010c78(0,_DAT_44b00120 / 1000,0);
  uVar1 = FUN_00010c82(pAkm);
  if (uVar1 == 0) {
    FUN_00010ccc(0,_DAT_44b00120 / 1000,0);
  }
  else {
    uVar1 = 1;
    if ((pAkm->akmType & 0xfb) != 2) {
      uVar1 = (uint)(pAkm->akmType == AKM_FT_PSK);
    }
  }
  return uVar1;
}



uint FUN_00010c78(void)

{
  uint unaff_s1;
  uint uVar1;
  int unaff_s3;
  int unaff_s4;
  
  FUN_00010c78();
  uVar1 = FUN_00010c82();
  if (uVar1 == 0) {
    FUN_00010ccc(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  }
  else {
    uVar1 = 1;
    if ((*(byte *)(unaff_s4 + 3) & 0xfb) != 2) {
      uVar1 = (uint)(*(byte *)(unaff_s4 + 3) == 4);
    }
  }
  return uVar1;
}



uint FUN_00010c82(void)

{
  uint unaff_s1;
  uint uVar1;
  int unaff_s3;
  int unaff_s4;
  
  uVar1 = FUN_00010c82();
  if (uVar1 == 0) {
    FUN_00010ccc(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  }
  else {
    uVar1 = 1;
    if ((*(byte *)(unaff_s4 + 3) & 0xfb) != 2) {
      uVar1 = (uint)(*(byte *)(unaff_s4 + 3) == 4);
    }
  }
  return uVar1;
}



void FUN_00010ccc(void)

{
  FUN_00010ccc();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOLEAN supplicantAkmUsesKdf(AkmSuite_t *pAkm)

{
  int iVar1;
  BOOLEAN BVar2;
  
  FUN_00010d00(0,_DAT_44b00120 / 1000,0);
  iVar1 = FUN_00010d0a(pAkm);
  if ((iVar1 == 0) || (BVar2 = 1, 3 < (byte)(pAkm->akmType + ~AKM_PSK))) {
    FUN_00010d42(0,_DAT_44b00120 / 1000,0);
    BVar2 = 0;
  }
  return BVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010d00(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  FUN_00010d00();
  iVar1 = FUN_00010d0a();
  if ((iVar1 == 0) || (uVar2 = 1, 3 < (byte)(*(char *)(unaff_s1 + 3) - 3U))) {
    FUN_00010d42(0,_DAT_44b00120 / 1000);
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010d0a(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010d0a();
  if ((iVar1 == 0) || (uVar2 = 1, 3 < (byte)(*(char *)(unaff_s1 + 3) - 3U))) {
    FUN_00010d42(0,_DAT_44b00120 / 1000);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_00010d42(void)

{
  FUN_00010d42();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void supplicantConstructContext
               (IEEEtypes_MacAddr_t *pAddr1,IEEEtypes_MacAddr_t *pAddr2,UINT8 *pNonce1,
               UINT8 *pNonce2,UINT8 *pContext)

{
  int iVar1;
  
  _L0(0,_DAT_44b00120 / 1000,0);
  iVar1 = FUN_00010da4(pAddr1,pAddr2,6);
  if (iVar1 < 0) {
    FUN_00010db6(pContext,pAddr1);
  }
  else {
    FUN_00010e42(pContext,pAddr2,6);
    pAddr2 = pAddr1;
  }
  FUN_00010dc4(pContext + 6,pAddr2,6);
  iVar1 = FUN_00010dd4(pNonce1,pNonce2,0x20);
  if (iVar1 < 0) {
    FUN_00010df0(pContext + 0xc,pNonce1);
  }
  else {
    FUN_00010e54(pContext + 0xc,pNonce2,0x20);
    pNonce2 = pNonce1;
  }
  FUN_00010e00(pContext + 0x2c,pNonce2,0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  
  _L0();
  iVar1 = FUN_00010da4(6);
  if (iVar1 < 0) {
    FUN_00010db6();
  }
  else {
    FUN_00010e42(6);
  }
  FUN_00010dc4(6);
  iVar1 = FUN_00010dd4(0x20);
  if (iVar1 < 0) {
    FUN_00010df0(unaff_s0 + 0xc);
  }
  else {
    FUN_00010e54(unaff_s0 + 0xc,0x20);
  }
  FUN_00010e00(unaff_s0 + 0x2c,0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010da4(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = FUN_00010da4();
  if (iVar1 < 0) {
    FUN_00010db6();
  }
  else {
    FUN_00010e42(6);
  }
  FUN_00010dc4(6);
  iVar1 = FUN_00010dd4(0x20);
  if (iVar1 < 0) {
    FUN_00010df0(unaff_s0 + 0xc);
  }
  else {
    FUN_00010e54(unaff_s0 + 0xc,0x20);
  }
  FUN_00010e00(unaff_s0 + 0x2c,0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010db6(void)

{
  int unaff_s0;
  int iVar1;
  
  FUN_00010db6();
  FUN_00010dc4(6);
  iVar1 = FUN_00010dd4(0x20);
  if (iVar1 < 0) {
    FUN_00010df0(unaff_s0 + 0xc);
  }
  else {
    FUN_00010e54(unaff_s0 + 0xc,0x20);
  }
  FUN_00010e00(unaff_s0 + 0x2c,0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010dc4(void)

{
  int unaff_s0;
  int iVar1;
  
  FUN_00010dc4();
  iVar1 = FUN_00010dd4(0x20);
  if (iVar1 < 0) {
    FUN_00010df0(unaff_s0 + 0xc);
  }
  else {
    FUN_00010e54(unaff_s0 + 0xc,0x20);
  }
  FUN_00010e00(unaff_s0 + 0x2c,0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010dd4(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = FUN_00010dd4();
  if (iVar1 < 0) {
    FUN_00010df0(unaff_s0 + 0xc);
  }
  else {
    FUN_00010e54(unaff_s0 + 0xc,0x20);
  }
  FUN_00010e00(unaff_s0 + 0x2c,0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010df0(void)

{
  FUN_00010df0();
  FUN_00010e00(0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010e00(void)

{
  FUN_00010e00();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010e42(void)

{
  int unaff_s0;
  int iVar1;
  
  FUN_00010e42();
  FUN_00010dc4(6);
  iVar1 = FUN_00010dd4(0x20);
  if (iVar1 < 0) {
    FUN_00010df0(unaff_s0 + 0xc);
  }
  else {
    FUN_00010e54(unaff_s0 + 0xc,0x20);
  }
  FUN_00010e00(unaff_s0 + 0x2c,0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010e54(void)

{
  FUN_00010e54();
  FUN_00010e00(0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void KeyMgmt_DerivePTK(IEEEtypes_MacAddr_t *pAddr1,IEEEtypes_MacAddr_t *pAddr2,UINT8 *pNonce1,
                      UINT8 *pNonce2,UINT8 *pPTK,UINT8 *pPMK,BOOLEAN use_kdf)

{
  UINT8 *pUVar1;
  
  pUVar1 = pPTK + 200;
  _L0(0,_DAT_44b00120 / 1000,0);
  FUN_00010eba(pAddr1,pAddr2,pNonce1,pNonce2,pUVar1);
  if (use_kdf == 0) {
    FUN_00010f3a(pPMK,0x20,0,0x16,pUVar1,0x4c,pPTK,0x40);
  }
  else {
    FUN_00010ee4(pPMK,0x20,0,0x16,pUVar1,0x4c,pPTK,0x180);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_00010eba(in_stack_0000000c);
  if (in_stack_00000008 == 0) {
    FUN_00010f3a(0x20,0,0x16,0x4c,0x40);
  }
  else {
    FUN_00010ee4(0x20,0,0x16,0x4c,0x180);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010eba(void)

{
  int in_stack_00000008;
  
  FUN_00010eba();
  if (in_stack_00000008 == 0) {
    FUN_00010f3a(0x20,0,0x16,0x4c,0x40);
  }
  else {
    FUN_00010ee4(0x20,0,0x16,0x4c,0x180);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010ee4(void)

{
  FUN_00010ee4();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010f3a(void)

{
  FUN_00010f3a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void KeyMgmtSta_DeriveKeys
               (UINT8 *pPMK,IEEEtypes_MacAddr_t *da,IEEEtypes_MacAddr_t *sa,UINT8 *ANonce,
               UINT8 *SNonce,UINT8 *EAPOL_MIC_Key,UINT8 *EAPOL_Encr_Key,KeyData_t *newPWKey,
               BOOLEAN use_kdf)

{
  undefined4 in_stack_00000000;
  undefined auStack548 [4];
  UINT8 pBuf [500];
  
  _L0(0,_DAT_44b00120 / 1000,0);
  if (((pPMK != (UINT8 *)0x0) && (EAPOL_MIC_Key != (UINT8 *)0x0)) && (newPWKey != (KeyData_t *)0x0))
  {
    FUN_00010fc6(sa,da,ANonce,SNonce,auStack548,pPMK,in_stack_00000000);
    FUN_00010fd4(EAPOL_MIC_Key,auStack548,0x10);
    FUN_00010fe2(EAPOL_Encr_Key,pBuf + 0xc,0x10);
    FUN_00010ff0(newPWKey,pBuf + 0x1c,0x10);
    FUN_00011000(newPWKey->RxMICKey,pBuf + 0x2c,8);
    FUN_00011010(newPWKey->TxMICKey,pBuf + 0x34,8);
    FUN_0001102c(0,_DAT_44b00120 / 1000,0);
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000240;
  
  _L0();
  if (((unaff_s5 != 0) && (unaff_s4 != 0)) && (unaff_s0 != 0)) {
    FUN_00010fc6(in_stack_0000000c,&stack0x0000001c,in_stack_00000240);
    FUN_00010fd4(&stack0x0000001c,0x10);
    FUN_00010fe2(&stack0x0000002c,0x10);
    FUN_00010ff0(&stack0x0000003c,0x10);
    FUN_00011000(unaff_s0 + 0x10,&stack0x0000004c,8);
    FUN_00011010(unaff_s0 + 0x18,&stack0x00000054,8);
    FUN_0001102c(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  }
  return;
}



void FUN_00010fc6(void)

{
  int unaff_s0;
  uint unaff_s1;
  int unaff_s3;
  
  FUN_00010fc6();
  FUN_00010fd4(&stack0x0000001c,0x10);
  FUN_00010fe2(&stack0x0000002c,0x10);
  FUN_00010ff0(&stack0x0000003c,0x10);
  FUN_00011000(unaff_s0 + 0x10,&stack0x0000004c,8);
  FUN_00011010(unaff_s0 + 0x18,&stack0x00000054,8);
  FUN_0001102c(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  return;
}



void FUN_00010fd4(void)

{
  int unaff_s0;
  uint unaff_s1;
  int unaff_s3;
  
  FUN_00010fd4();
  FUN_00010fe2(&stack0x0000002c,0x10);
  FUN_00010ff0(&stack0x0000003c,0x10);
  FUN_00011000(unaff_s0 + 0x10,&stack0x0000004c,8);
  FUN_00011010(unaff_s0 + 0x18,&stack0x00000054,8);
  FUN_0001102c(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  return;
}



void FUN_00010fe2(void)

{
  int unaff_s0;
  uint unaff_s1;
  int unaff_s3;
  
  FUN_00010fe2();
  FUN_00010ff0(&stack0x0000003c,0x10);
  FUN_00011000(unaff_s0 + 0x10,&stack0x0000004c,8);
  FUN_00011010(unaff_s0 + 0x18,&stack0x00000054,8);
  FUN_0001102c(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  return;
}



void FUN_00010ff0(void)

{
  int unaff_s0;
  uint unaff_s1;
  int unaff_s3;
  
  FUN_00010ff0();
  FUN_00011000(unaff_s0 + 0x10,&stack0x0000004c,8);
  FUN_00011010(unaff_s0 + 0x18,&stack0x00000054,8);
  FUN_0001102c(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  return;
}



void FUN_00011000(void)

{
  int unaff_s0;
  uint unaff_s1;
  int unaff_s3;
  
  FUN_00011000();
  FUN_00011010(unaff_s0 + 0x18,&stack0x00000054,8);
  FUN_0001102c(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  return;
}



void FUN_00011010(void)

{
  uint unaff_s1;
  int unaff_s3;
  
  FUN_00011010();
  FUN_0001102c(0,*(uint *)(unaff_s3 + 0x120) / unaff_s1);
  return;
}



void FUN_0001102c(void)

{
  FUN_0001102c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetEAPOLKeyDescTypeVersion
               (EAPOL_KeyMsg_Tx_t *pTxEapol,BOOLEAN isWPA2,BOOLEAN isKDF,BOOLEAN nonTKIP)

{
  byte bVar1;
  
  _LVL276(0,_DAT_44b00120 / 1000,0);
  bVar1 = *(byte *)&(pTxEapol->keyMsg).key_info.field_0x1;
  (pTxEapol->keyMsg).desc_type = '\x02';
  *(byte *)&(pTxEapol->keyMsg).key_info.field_0x1 = bVar1 & 0xf8 | (isKDF != 0) + 2U;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL276(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _LVL276();
  *(undefined *)(unaff_s1 + 0x12) = 2;
  *(byte *)(unaff_s1 + 0x14) = *(byte *)(unaff_s1 + 0x14) & 0xf8 | (unaff_s0 != 0) + 2U;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

EAPOL_KeyMsg_t *
GetKeyMsgNonceFromEAPOL(BufferDesc_t *pEAPoLBufDesc,keyMgmtInfoSta_t *pKeyMgmtInfoSta)

{
  EAPOL_KeyMsg_t *pEVar1;
  int iVar2;
  
  FUN_00011110(0,_DAT_44b00120 / 1000,0);
  pEVar1 = (EAPOL_KeyMsg_t *)pEAPoLBufDesc->Buffer;
  iVar2 = FUN_0001111e(pKeyMgmtInfoSta,pEVar1);
  if (iVar2 == 0) {
    pEVar1 = (EAPOL_KeyMsg_t *)0x0;
  }
  else {
    if ((*(byte *)&pEVar1->key_info & 1) == 0) {
      FUN_0001113a(pKeyMgmtInfoSta,pEVar1->key_nonce,0x20);
      FUN_0001114a(pKeyMgmtInfoSta->SNonce,0x20);
    }
    FUN_0001116e(0,_DAT_44b00120 / 1000,0);
  }
  return pEVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00011110(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  
  FUN_00011110();
  iVar1 = *(int *)(unaff_s0 + 8);
  iVar2 = FUN_0001111e(iVar1);
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    if ((*(byte *)(iVar1 + 5) & 1) == 0) {
      FUN_0001113a(iVar1 + 0x11,0x20);
      FUN_0001114a(unaff_s2 + 0x20,0x20);
    }
    FUN_0001116e(0,_DAT_44b00120 / 1000);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0001111e(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  
  iVar1 = FUN_0001111e();
  if (iVar1 == 0) {
    unaff_s0 = 0;
  }
  else {
    if ((*(byte *)(unaff_s0 + 5) & 1) == 0) {
      FUN_0001113a(unaff_s0 + 0x11,0x20);
      FUN_0001114a(unaff_s2 + 0x20,0x20);
    }
    FUN_0001116e(0,_DAT_44b00120 / 1000);
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001113a(void)

{
  int unaff_s2;
  
  FUN_0001113a();
  FUN_0001114a(unaff_s2 + 0x20,0x20);
  FUN_0001116e(0,_DAT_44b00120 / 1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001114a(void)

{
  FUN_0001114a();
  FUN_0001116e(0,_DAT_44b00120 / 1000);
  return;
}



void FUN_0001116e(void)

{
  FUN_0001116e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

EAPOL_KeyMsg_t *
ProcessRxEAPOL_PwkMsg3(BufferDesc_t *pEAPoLBufDesc,keyMgmtInfoSta_t *pKeyMgmtInfoSta)

{
  EAPOL_KeyMsg_t *pEVar1;
  int iVar2;
  
  FUN_000111b8(0,_DAT_44b00120 / 1000,0);
  pEVar1 = (EAPOL_KeyMsg_t *)FUN_000111c4(pEAPoLBufDesc,pKeyMgmtInfoSta);
  if (pEVar1 == (EAPOL_KeyMsg_t *)0x0) {
_L0:
    pEVar1 = (EAPOL_KeyMsg_t *)0x0;
  }
  else {
    (pKeyMgmtInfoSta->newPWKey).TxIV16 = 1;
    (pKeyMgmtInfoSta->newPWKey).TxIV32 = 0;
    if ((*(byte *)&pEVar1->key_info & 0x10) != 0) {
      FUN_000111f8(&pKeyMgmtInfoSta->rsnTimer);
      FUN_0001120c(pEVar1,&pKeyMgmtInfoSta->GRKey,pKeyMgmtInfoSta->EAPOL_Encr_Key);
      iVar2 = FUN_00011218(pKeyMgmtInfoSta,pEVar1);
      if (iVar2 == 0) goto _L0;
      FUN_00011234(pEVar1->key_data,pEVar1->key_material_len,&pKeyMgmtInfoSta->GRKey);
    }
    FUN_00011258(0,_DAT_44b00120 / 1000,0);
  }
  return pEVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_000111b8(void)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  
  FUN_000111b8();
  iVar1 = FUN_000111c4();
  if (iVar1 == 0) {
_L0:
    iVar1 = 0;
  }
  else {
    *(undefined2 *)(unaff_s1 + 0xf8) = 1;
    *(undefined4 *)(unaff_s1 + 0xf4) = 0;
    if ((*(byte *)(iVar1 + 5) & 0x10) != 0) {
      FUN_000111f8(unaff_s1 + 0x108);
      FUN_0001120c(iVar1,unaff_s1 + 0xac,unaff_s1 + 0x50);
      iVar2 = FUN_00011218(iVar1);
      if (iVar2 == 0) goto _L0;
      FUN_00011234(iVar1 + 99,*(undefined2 *)(iVar1 + 0x61),unaff_s1 + 0xac);
    }
    FUN_00011258(0,_DAT_44b00120 / 1000);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_000111c4(void)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000111c4();
  if (iVar1 == 0) {
_L0:
    iVar1 = 0;
  }
  else {
    *(undefined2 *)(unaff_s1 + 0xf8) = 1;
    *(undefined4 *)(unaff_s1 + 0xf4) = 0;
    if ((*(byte *)(iVar1 + 5) & 0x10) != 0) {
      FUN_000111f8(unaff_s1 + 0x108);
      FUN_0001120c(iVar1,unaff_s1 + 0xac,unaff_s1 + 0x50);
      iVar2 = FUN_00011218(iVar1);
      if (iVar2 == 0) goto _L0;
      FUN_00011234(iVar1 + 99,*(undefined2 *)(iVar1 + 0x61),unaff_s1 + 0xac);
    }
    FUN_00011258(0,_DAT_44b00120 / 1000);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_000111f8(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  FUN_000111f8();
  FUN_0001120c(unaff_s1 + 0xac,unaff_s1 + 0x50);
  iVar1 = FUN_00011218();
  if (iVar1 == 0) {
    unaff_s0 = 0;
  }
  else {
    FUN_00011234(unaff_s0 + 99,*(undefined2 *)(unaff_s0 + 0x61),unaff_s1 + 0xac);
    FUN_00011258(0,_DAT_44b00120 / 1000);
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0001120c(void)

{
  int unaff_s0;
  int iVar1;
  
  FUN_0001120c();
  iVar1 = FUN_00011218();
  if (iVar1 == 0) {
    unaff_s0 = 0;
  }
  else {
    FUN_00011234(unaff_s0 + 99,*(undefined2 *)(unaff_s0 + 0x61));
    FUN_00011258(0,_DAT_44b00120 / 1000);
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00011218(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = FUN_00011218();
  if (iVar1 == 0) {
    unaff_s0 = 0;
  }
  else {
    FUN_00011234(unaff_s0 + 99,*(undefined2 *)(unaff_s0 + 0x61));
    FUN_00011258(0,_DAT_44b00120 / 1000);
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011234(void)

{
  FUN_00011234();
  FUN_00011258(0,_DAT_44b00120 / 1000);
  return;
}



void FUN_00011258(void)

{
  FUN_00011258();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

EAPOL_KeyMsg_t *
ProcessRxEAPOL_GrpMsg1(BufferDesc_t *pEAPoLBufDesc,keyMgmtInfoSta_t *pKeyMgmtInfoSta)

{
  EAPOL_KeyMsg_t *pEVar1;
  int iVar2;
  KeyData_t *pKVar3;
  UINT8 *pUVar4;
  UINT8 *pUVar5;
  undefined auStack40 [4];
  UINT8 buf [8];
  
  pEVar1 = (EAPOL_KeyMsg_t *)_L0();
  FUN_0001129c(0,_DAT_44b00120 / 1000,0);
  if (pEVar1 == (EAPOL_KeyMsg_t *)0x0) {
_L0:
    pEVar1 = (EAPOL_KeyMsg_t *)0x0;
  }
  else {
    pKVar3 = &pKeyMgmtInfoSta->GRKey;
    FUN_000112c6(pEVar1,pKVar3,pKeyMgmtInfoSta->EAPOL_Encr_Key);
    pKeyMgmtInfoSta->RSNDataTrafficEnabled = 1;
    FUN_000112d6(&pKeyMgmtInfoSta->rsnTimer);
    if (pEVar1->desc_type == '\x02') {
      FUN_000112fc(pEVar1->key_material_len,pKVar3);
      iVar2 = FUN_00011308(pKeyMgmtInfoSta,pEVar1);
      if (iVar2 == 0) goto _L0;
    }
    else {
      FUN_00011340(pKVar3,pEVar1->key_data,pEVar1->key_material_len);
      pUVar5 = (pKeyMgmtInfoSta->GRKey).TxMICKey;
      FUN_00011352(auStack40,pUVar5,8);
      pUVar4 = (pKeyMgmtInfoSta->GRKey).RxMICKey;
      FUN_00011364(pUVar5,pUVar4,8);
      FUN_00011372(pUVar4,auStack40,8);
      (pKeyMgmtInfoSta->GRKey).KeyIndex = *(byte *)&(pEVar1->key_info).field_0x1 >> 4 & 3;
    }
    FUN_0001132e(0,_DAT_44b00120 / 1000,0);
  }
  return pEVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(void)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  
  iVar1 = _L0();
  FUN_0001129c(0,_DAT_44b00120 / 1000,0);
  if (iVar1 == 0) {
_L0:
    iVar1 = 0;
  }
  else {
    iVar2 = unaff_s1 + 0xac;
    FUN_000112c6(iVar1,iVar2,unaff_s1 + 0x50);
    *(undefined4 *)(unaff_s1 + 0x74) = 1;
    FUN_000112d6(unaff_s1 + 0x108);
    if (*(char *)(iVar1 + 4) == '\x02') {
      FUN_000112fc(*(undefined2 *)(iVar1 + 0x61),iVar2);
      iVar2 = FUN_00011308(iVar1);
      if (iVar2 == 0) goto _L0;
    }
    else {
      FUN_00011340(iVar2,iVar1 + 99,*(undefined2 *)(iVar1 + 0x61));
      FUN_00011352(&stack0x00000008,unaff_s1 + 0xc4,8);
      FUN_00011364(unaff_s1 + 0xc4,unaff_s1 + 0xbc,8);
      FUN_00011372(unaff_s1 + 0xbc,&stack0x00000008,8);
      *(ushort *)(unaff_s1 + 0xd2) = *(byte *)(iVar1 + 6) >> 4 & 3;
    }
    FUN_0001132e(0,_DAT_44b00120 / 1000,0);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0001129c(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  FUN_0001129c();
  if (unaff_s0 == 0) {
_L0:
    unaff_s0 = 0;
  }
  else {
    iVar1 = unaff_s1 + 0xac;
    FUN_000112c6(iVar1,unaff_s1 + 0x50);
    *(undefined4 *)(unaff_s1 + 0x74) = 1;
    FUN_000112d6(unaff_s1 + 0x108);
    if (*(char *)(unaff_s0 + 4) == '\x02') {
      FUN_000112fc(*(undefined2 *)(unaff_s0 + 0x61),iVar1);
      iVar1 = FUN_00011308();
      if (iVar1 == 0) goto _L0;
    }
    else {
      FUN_00011340(iVar1,unaff_s0 + 99,*(undefined2 *)(unaff_s0 + 0x61));
      FUN_00011352(&stack0x00000008,unaff_s1 + 0xc4,8);
      FUN_00011364(unaff_s1 + 0xc4,unaff_s1 + 0xbc,8);
      FUN_00011372(unaff_s1 + 0xbc,&stack0x00000008,8);
      *(ushort *)(unaff_s1 + 0xd2) = *(byte *)(unaff_s0 + 6) >> 4 & 3;
    }
    FUN_0001132e(0,_DAT_44b00120 / 1000);
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_000112c6(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  FUN_000112c6();
  *(undefined4 *)(unaff_s1 + 0x74) = 1;
  FUN_000112d6(unaff_s1 + 0x108);
  if (*(char *)(unaff_s0 + 4) == '\x02') {
    FUN_000112fc(*(undefined2 *)(unaff_s0 + 0x61));
    iVar1 = FUN_00011308();
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    FUN_00011340(unaff_s0 + 99,*(undefined2 *)(unaff_s0 + 0x61));
    FUN_00011352(&stack0x00000008,unaff_s1 + 0xc4,8);
    FUN_00011364(unaff_s1 + 0xc4,unaff_s1 + 0xbc,8);
    FUN_00011372(unaff_s1 + 0xbc,&stack0x00000008,8);
    *(ushort *)(unaff_s1 + 0xd2) = *(byte *)(unaff_s0 + 6) >> 4 & 3;
  }
  FUN_0001132e(0,_DAT_44b00120 / 1000);
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_000112d6(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  FUN_000112d6();
  if (*(char *)(unaff_s0 + 4) == '\x02') {
    FUN_000112fc(*(undefined2 *)(unaff_s0 + 0x61));
    iVar1 = FUN_00011308();
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    FUN_00011340(unaff_s0 + 99,*(undefined2 *)(unaff_s0 + 0x61));
    FUN_00011352(&stack0x00000008,unaff_s1 + 0xc4,8);
    FUN_00011364(unaff_s1 + 0xc4,unaff_s1 + 0xbc,8);
    FUN_00011372(unaff_s1 + 0xbc,&stack0x00000008,8);
    *(ushort *)(unaff_s1 + 0xd2) = *(byte *)(unaff_s0 + 6) >> 4 & 3;
  }
  FUN_0001132e(0,_DAT_44b00120 / 1000);
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000112fc(void)

{
  undefined4 unaff_s0;
  int iVar1;
  
  FUN_000112fc();
  iVar1 = FUN_00011308();
  if (iVar1 == 0) {
    unaff_s0 = 0;
  }
  else {
    FUN_0001132e(0,_DAT_44b00120 / 1000);
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011308(void)

{
  undefined4 unaff_s0;
  int iVar1;
  
  iVar1 = FUN_00011308();
  if (iVar1 == 0) {
    unaff_s0 = 0;
  }
  else {
    FUN_0001132e(0,_DAT_44b00120 / 1000);
  }
  return unaff_s0;
}



void FUN_0001132e(void)

{
  FUN_0001132e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011340(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00011340();
  FUN_00011352(&stack0x00000008,unaff_s1 + 0xc4,8);
  FUN_00011364(unaff_s1 + 0xc4,unaff_s1 + 0xbc,8);
  FUN_00011372(unaff_s1 + 0xbc,&stack0x00000008,8);
  *(ushort *)(unaff_s1 + 0xd2) = *(byte *)(unaff_s0 + 6) >> 4 & 3;
  FUN_0001132e(0,_DAT_44b00120 / 1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011352(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00011352();
  FUN_00011364(unaff_s1 + 0xbc,8);
  FUN_00011372(unaff_s1 + 0xbc,&stack0x00000008,8);
  *(ushort *)(unaff_s1 + 0xd2) = *(byte *)(unaff_s0 + 6) >> 4 & 3;
  FUN_0001132e(0,_DAT_44b00120 / 1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011364(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00011364();
  FUN_00011372(&stack0x00000008,8);
  *(ushort *)(unaff_s1 + 0xd2) = *(byte *)(unaff_s0 + 6) >> 4 & 3;
  FUN_0001132e(0,_DAT_44b00120 / 1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011372(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00011372();
  *(ushort *)(unaff_s1 + 0xd2) = *(byte *)(unaff_s0 + 6) >> 4 & 3;
  FUN_0001132e(0,_DAT_44b00120 / 1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void KeyMgmtResetCounter(keyMgmtInfoSta_t *pKeyMgmtInfo)

{
  FUN_000113b2(0,_DAT_44b00120 / 1000,0);
  if (pKeyMgmtInfo != (keyMgmtInfoSta_t *)0x0) {
    pKeyMgmtInfo->staCounterHi = 0;
    pKeyMgmtInfo->staCounterLo = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000113b2(void)

{
  int unaff_s1;
  
  FUN_000113b2();
  if (unaff_s1 != 0) {
    *(undefined4 *)(unaff_s1 + 0x70) = 0;
    *(undefined4 *)(unaff_s1 + 0x6c) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void keyMgmtSta_StartSession_internal(keyMgmtInfoSta_t *pKeyMgmtInfoSta,UINT32 expiry)

{
  FUN_00011420(0,_DAT_44b00120 / 1000,0);
  if ((pKeyMgmtInfoSta->sta_MIC_Error).disableStaAsso == 0) {
    FUN_00011438(&pKeyMgmtInfoSta->rsnTimer,_DAT_44b00120 + expiry);
  }
  pKeyMgmtInfoSta->apCounterLo = 0;
  pKeyMgmtInfoSta->apCounterHi = 0;
  pKeyMgmtInfoSta->apCounterZeroDone = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011420(void)

{
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  
  FUN_00011420();
  if (*(int *)(unaff_s0 + 0x104) == 0) {
    FUN_00011438(unaff_s0 + 0x108,*(int *)(unaff_s2 + 0x120) + unaff_s3);
  }
  *(undefined4 *)(unaff_s0 + 0x60) = 0;
  *(undefined4 *)(unaff_s0 + 100) = 0;
  *(undefined4 *)(unaff_s0 + 0x68) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011438(void)

{
  int unaff_s0;
  
  FUN_00011438();
  *(undefined4 *)(unaff_s0 + 0x60) = 0;
  *(undefined4 *)(unaff_s0 + 100) = 0;
  *(undefined4 *)(unaff_s0 + 0x68) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void KeyMgmtSta_InitSession(keyMgmtInfoSta_t *pKeyMgmtInfoSta)

{
  FUN_000114aa(0,_DAT_44b00120 / 1000,0);
  pKeyMgmtInfoSta->RSNDataTrafficEnabled = 0;
  pKeyMgmtInfoSta->RSNSecured = 0;
  pKeyMgmtInfoSta->pRxDecryptKey = (cipher_key_t *)0x0;
  pKeyMgmtInfoSta->pwkHandshakeComplete = 0;
  (pKeyMgmtInfoSta->rsnTimer).cb = (cb_timer_func_ptr *)0x0;
  (pKeyMgmtInfoSta->rsnTimer).env = pKeyMgmtInfoSta;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000114aa(void)

{
  int unaff_s0;
  
  FUN_000114aa();
  *(undefined4 *)(unaff_s0 + 0x74) = 0;
  *(undefined4 *)(unaff_s0 + 0x78) = 0;
  *(undefined4 *)(unaff_s0 + 0x80) = 0;
  *(undefined4 *)(unaff_s0 + 0x7c) = 0;
  *(undefined4 *)(unaff_s0 + 0x10c) = 0;
  *(int *)(unaff_s0 + 0x110) = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


