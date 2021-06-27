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
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct apInfo_t apInfo_t, *PapInfo_t;

typedef struct BssConfig_t BssConfig_t, *PBssConfig_t;

typedef struct BssData_t BssData_t, *PBssData_t;

typedef uchar UINT8;

typedef ulong UINT32;

typedef struct apRsnConfig_t apRsnConfig_t, *PapRsnConfig_t;

typedef struct CommonMlmeData_t CommonMlmeData_t, *PCommonMlmeData_t;

typedef int BOOLEAN;

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

typedef struct KeyData_t KeyData_t, *PKeyData_t;

typedef struct Cipher_t Cipher_t, *PCipher_t;

typedef ushort UINT16;

typedef struct Operation_t Operation_t, *POperation_t;

typedef UINT8 IEEEtypes_SsId_t[32];

typedef UINT8 IEEEtypes_Len_t;

typedef UINT8 IEEEtypes_DtimPeriod_t;

typedef UINT16 IEEEtypes_BcnInterval_t;

typedef UINT8 IEEEtypes_Addr_t;

typedef IEEEtypes_Addr_t IEEEtypes_MacAddr_t[6];

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

struct co_list_hdr { // DWARF DIE: f45
    struct co_list_hdr * next;
};

struct Cipher_t { // DWARF DIE: 2f9b
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct KeyData_t { // DWARF DIE: 2cce
    UINT8 Key[16];
    UINT8 RxMICKey[8];
    UINT8 TxMICKey[8];
    UINT32 TxIV32;
    UINT16 TxIV16;
    UINT16 KeyIndex;
};

struct CommonMlmeData_t { // DWARF DIE: 3b3d
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

struct mm_timer_tag { // DWARF DIE: 1866
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct Operation_t { // DWARF DIE: 3c27
    UINT16 keyExchange:1;
    UINT16 authenticate:1;
    UINT16 reserved:14;
};

struct apRsnConfig_t { // DWARF DIE: 3c72
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

struct BssConfig_t { // DWARF DIE: 3d78
    UINT32 StaAgeOutTime;
    UINT32 PsStaAgeOutTime;
    struct apRsnConfig_t RsnConfig;
    struct CommonMlmeData_t comData;
};

struct BssData_t { // DWARF DIE: 3dc8
    BOOLEAN updatePassPhrase;
    struct mm_timer_tag apMicTimer;
    struct KeyData_t grpKeyData;
    UINT8 GNonce[32];
    UINT32 grpRekeyBcnCntConfigured;
    UINT32 grpRekeyBcnCntRemaining;
};

struct apInfo_t { // DWARF DIE: 3e68
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

struct _txQingInfo_t { // DWARF DIE: 3bfd
    enum IEEEtypes_PwrMgmtMode_e mode;
};

typedef struct staData_t staData_t, *PstaData_t;

typedef struct _txQingInfo_t txQingInfo_t;

typedef struct apKeyMgmtInfoSta_t apKeyMgmtInfoSta_t, *PapKeyMgmtInfoSta_t;

typedef struct apKeyMgmtInfoStaRom_t apKeyMgmtInfoStaRom_t, *PapKeyMgmtInfoStaRom_t;

typedef struct SecurityMode_t SecurityMode_t, *PSecurityMode_t;

typedef enum keyMgmtState_e {
    GRPMSG1_PENDING=5,
    GRP_REKEY_MSG1_PENDING=7,
    HSK_DUMMY_STATE=9,
    HSK_END=10,
    HSK_NOT_STARTED=0,
    MSG1_PENDING=1,
    MSG3_PENDING=3,
    WAITING_4_GRPMSG2=6,
    WAITING_4_GRP_REKEY_MSG2=8,
    WAITING_4_MSG2=2,
    WAITING_4_MSG4=4
} keyMgmtState_e;

struct SecurityMode_t { // DWARF DIE: 3001
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

struct apKeyMgmtInfoStaRom_t { // DWARF DIE: 3a4f
    UINT16 staRsnCap;
    struct SecurityMode_t staSecType;
    struct Cipher_t staUcstCipher;
    UINT8 staAkmType;
    enum keyMgmtState_e keyMgmtState;
    undefined field_0x7;
};

struct apKeyMgmtInfoSta_t { // DWARF DIE: 3aa6
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

struct staData_t { // DWARF DIE: 3e34
    txQingInfo_t pwrSaveInfo;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    struct apKeyMgmtInfoSta_t keyMgmtInfo;
};

typedef struct key_MgtMaterial_t key_MgtMaterial_t, *Pkey_MgtMaterial_t;

typedef union anon_union.conflict2e73_for_keyEncypt anon_union.conflict2e73_for_keyEncypt, *Panon_union.conflict2e73_for_keyEncypt;

typedef struct key_Type_TKIP_t key_Type_TKIP_t, *Pkey_Type_TKIP_t;

typedef struct key_Type_AES_t key_Type_AES_t, *Pkey_Type_AES_t;

typedef struct key_Type_WEP_t key_Type_WEP_t, *Pkey_Type_WEP_t;

typedef struct key_Type_WAPI_t key_Type_WAPI_t, *Pkey_Type_WAPI_t;

typedef struct key_Type_AES_CMAC_t key_Type_AES_CMAC_t, *Pkey_Type_AES_CMAC_t;

struct key_Type_AES_CMAC_t { // DWARF DIE: 2e36
    UINT8 ipn[6];
    UINT8 reserved[2];
    UINT8 key[16];
};

struct key_Type_TKIP_t { // DWARF DIE: 2d32
    UINT8 key[16];
    UINT8 txMicKey[8];
    UINT8 rxMicKey[8];
};

struct key_Type_WAPI_t { // DWARF DIE: 2ddf
    UINT8 keyIndex;
    UINT8 isDefKey;
    UINT8 key[16];
    UINT8 mickey[16];
    UINT8 rxPN[16];
};

struct key_Type_AES_t { // DWARF DIE: 2dbc
    UINT8 key[16];
};

struct key_Type_WEP_t { // DWARF DIE: 2d6f
    UINT8 keyIndex;
    UINT8 isDefaultTx;
    UINT8 key[13];
};

union anon_union.conflict2e73_for_keyEncypt { // DWARF DIE: 2e73
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

struct key_MgtMaterial_t { // DWARF DIE: 2eb9
    UINT16 keyType;
    UINT16 keyInfo;
    UINT16 keyLen;
    union anon_union.conflict2e73_for_keyEncypt keyEncypt;
};

typedef union anon_union.conflict2e73 anon_union.conflict2e73, *Panon_union.conflict2e73;

union anon_union.conflict2e73 { // DWARF DIE: 2e73
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: f66
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

struct bam_baw { // DWARF DIE: 1b52
    uint (* idx_compute)(struct bam_baw *, uint);
    uint16_t fsn;
    uint8_t states[64];
    uint8_t fsn_idx;
    uint8_t buf_size;
    uint8_t mask;
    undefined field_0x49;
    undefined field_0x4a;
    undefined field_0x4b;
};

typedef struct bam_env_tag bam_env_tag, *Pbam_env_tag;

struct bam_env_tag { // DWARF DIE: 1bc5
    uint32_t pkt_cnt;
    uint32_t last_activity_time;
    uint16_t ssn;
    uint16_t ba_timeout;
    uint8_t sta_idx;
    uint8_t dev_type;
    uint8_t ba_policy;
    uint8_t buffer_size;
    uint8_t tid;
    uint8_t dialog_token;
    uint8_t amsdu;
    uint8_t delba_count;
    struct bam_baw baw;
};

typedef struct supplicantData supplicantData, *PsupplicantData;

typedef struct IEEEtypes_SsIdElement_t IEEEtypes_SsIdElement_t, *PIEEEtypes_SsIdElement_t;

typedef struct customMIB_RSNStats_t customMIB_RSNStats_t, *PcustomMIB_RSNStats_t;

typedef struct RSNConfig_t RSNConfig_t, *PRSNConfig_t;

typedef struct keyMgmtInfoSta_t keyMgmtInfoSta_t, *PkeyMgmtInfoSta_t;

typedef struct SecurityParams_t SecurityParams_t, *PSecurityParams_t;

typedef enum IEEEtypes_ElementId_e {
    ELEM_ID_2040_BSS_COEXISTENCE=72,
    ELEM_ID_2040_BSS_INTOL_CHRPT=73,
    ELEM_ID_AID=-59,
    ELEM_ID_ANTENNA_INFO=64,
    ELEM_ID_AP_CHANNEL_REPORT=51,
    ELEM_ID_BSS_ACCESS_DELAY=63,
    ELEM_ID_BSS_AC_ACCESS_DELAY=68,
    ELEM_ID_BSS_AVAIL_ADM_CAP=67,
    ELEM_ID_BSS_LOAD=11,
    ELEM_ID_BSS_MAX_IDLE_PERIOD=90,
    ELEM_ID_CF_PARAM_SET=4,
    ELEM_ID_CHALLENGE_TEXT=16,
    ELEM_ID_CHANNEL_SWITCH_ANN=37,
    ELEM_ID_CHANNEL_USAGE=97,
    ELEM_ID_COLLOC_INTF_REPORT=96,
    ELEM_ID_COUNTRY=7,
    ELEM_ID_DIAG_REPORT=81,
    ELEM_ID_DIAG_REQUEST=80,
    ELEM_ID_DMS_REQUEST=99,
    ELEM_ID_DMS_RESPONSE=100,
    ELEM_ID_DSE_REGISTERED_LOC=58,
    ELEM_ID_DS_PARAM_SET=3,
    ELEM_ID_EDCA_PARAM_SET=12,
    ELEM_ID_ERP_INFO=42,
    ELEM_ID_EVENT_REPORT=79,
    ELEM_ID_EVENT_REQUEST=78,
    ELEM_ID_EXTENSION=-1,
    ELEM_ID_EXT_ASSOC_DELAY_INFO=1,
    ELEM_ID_EXT_CAPABILITIES=127,
    ELEM_ID_EXT_CHAN_SWITCH_ANN=60,
    ELEM_ID_EXT_ESTIMATED_SERVICE_PARAMS=11,
    ELEM_ID_EXT_EXTENDED_REQUEST=10,
    ELEM_ID_EXT_FILS_HLP_CONTAINER=5,
    ELEM_ID_EXT_FILS_IP_ADDR_ASSIGN=6,
    ELEM_ID_EXT_FILS_KEY_CONFIRM=3,
    ELEM_ID_EXT_FILS_NONCE=13,
    ELEM_ID_EXT_FILS_PUBLIC_KEY=12,
    ELEM_ID_EXT_FILS_REQ_PARAMS=2,
    ELEM_ID_EXT_FILS_SESSION=4,
    ELEM_ID_EXT_FILS_WRAPPED_DATA=8,
    ELEM_ID_EXT_FTM_SYNC_INFO=9,
    ELEM_ID_EXT_FUTURE_CHANNEL_GUIDANCE=14,
    ELEM_ID_EXT_HE_CAPABILITIES=35,
    ELEM_ID_EXT_HE_OPERATION=36,
    ELEM_ID_EXT_KEY_DELIVERY=7,
    ELEM_ID_EXT_OWE_DH_PARAM=32,
    ELEM_ID_EXT_PASSWORD_IDENTIFIER=33,
    ELEM_ID_EXT_SUPPORTED_RATES=50,
    ELEM_ID_FAST_BSS_TRANS=55,
    ELEM_ID_FH_PARAM_SET=2,
    ELEM_ID_FMS_DESCRIPTOR=86,
    ELEM_ID_FMS_REQUEST=87,
    ELEM_ID_FMS_RESPONSE=88,
    ELEM_ID_HOP_PARAM=8,
    ELEM_ID_HOP_TABLE=9,
    ELEM_ID_HT_CAPABILITY=45,
    ELEM_ID_HT_INFORMATION=61,
    ELEM_ID_IBSS_DFS=41,
    ELEM_ID_IBSS_PARAM_SET=6,
    ELEM_ID_LINK_ID=101,
    ELEM_ID_LOCATION_PARAM=82,
    ELEM_ID_MANAGEMENT_MIC=76,
    ELEM_ID_MBSSID_INDEX=85,
    ELEM_ID_MEASUREMENT_REQ=38,
    ELEM_ID_MEASUREMENT_RPT=39,
    ELEM_ID_MEAS_PILOT_TX_INFO=66,
    ELEM_ID_MOBILITY_DOMAIN=54,
    ELEM_ID_MULTI_BSSID=71,
    ELEM_ID_NEIGHBOR_REPORT=52,
    ELEM_ID_NONTRANS_BSSID_CAP=83,
    ELEM_ID_OBSS_SCAN_PARAM=74,
    ELEM_ID_POWER_CAPABILITY=33,
    ELEM_ID_POWER_CONSTRAINT=32,
    ELEM_ID_PTI_CONTROL=105,
    ELEM_ID_PU_BUFFER_STATUS=106,
    ELEM_ID_QOS_CAPABILITY=46,
    ELEM_ID_QOS_TRAFFIC_CAP=89,
    ELEM_ID_QUIET=40,
    ELEM_ID_RCPI=53,
    ELEM_ID_REQUEST=10,
    ELEM_ID_RIC_DATA=57,
    ELEM_ID_RIC_DESCRIPTOR=75,
    ELEM_ID_RRM_ENABLED_CAP=70,
    ELEM_ID_RSN=48,
    ELEM_ID_RSNI=65,
    ELEM_ID_SCHEDULE=15,
    ELEM_ID_SECONDARY_CHAN_OFFSET=62,
    ELEM_ID_SSID=0,
    ELEM_ID_SSID_LIST=84,
    ELEM_ID_SUPPORTED_CHANNELS=36,
    ELEM_ID_SUPPORTED_RATES=1,
    ELEM_ID_SUPPORTED_REGCLASS=59,
    ELEM_ID_TCLAS=14,
    ELEM_ID_TCLAS_PROCESS=44,
    ELEM_ID_TDLS_CS_TIMING=104,
    ELEM_ID_TFS_REQUEST=91,
    ELEM_ID_TFS_RESPONSE=92,
    ELEM_ID_TIM=5,
    ELEM_ID_TIMEOUT_INTERVAL=56,
    ELEM_ID_TIME_ZONE=98,
    ELEM_ID_TIM_BCAST_REQUEST=94,
    ELEM_ID_TIM_BCAST_RESPONSE=95,
    ELEM_ID_TPC_REPORT=35,
    ELEM_ID_TPC_REQUEST=34,
    ELEM_ID_TSPEC=13,
    ELEM_ID_TS_DELAY=43,
    ELEM_ID_VENDOR_SPECIFIC=-35,
    ELEM_ID_VHT_CAPABILITIES=-65,
    ELEM_ID_VHT_OPERATION=-64,
    ELEM_ID_VHT_OP_MODE_NOTIFICATION=-57,
    ELEM_ID_WAKEUP_SCHEDULE=102,
    ELEM_ID_WAPI=68,
    ELEM_ID_WIDE_BAND_CHAN_SW=-63,
    ELEM_ID_WNM_SLEEP_MODE=93,
    SUBELEM_ID_GTK=2,
    SUBELEM_ID_IGTK=4,
    SUBELEM_ID_PMK_R0_KEY_HOLDER_ID=3,
    SUBELEM_ID_PMK_R1_KEY_HOLDER_ID=1,
    SUBELEM_ID_REPORTED_FRAME_BODY=1,
    SUBELEM_ID_REPORTING_DETAIL=2
} IEEEtypes_ElementId_e;

typedef struct AkmSuite_t AkmSuite_t, *PAkmSuite_t;

typedef struct IEEEtypes_RSNCapability_t IEEEtypes_RSNCapability_t, *PIEEEtypes_RSNCapability_t;

typedef struct cipher_key_t cipher_key_t, *Pcipher_key_t;

typedef struct MIC_Error_t MIC_Error_t, *PMIC_Error_t;

typedef struct cm_ConnectionInfo cm_ConnectionInfo, *Pcm_ConnectionInfo;

typedef enum AkmType_e {
    AKM_1X=1,
    AKM_CCKM=99,
    AKM_FT_1X=3,
    AKM_FT_PSK=4,
    AKM_NONE=0,
    AKM_PSK=2,
    AKM_RSN_MAX=6,
    AKM_SHA256_1X=5,
    AKM_SHA256_PSK=6,
    AKM_SUITE_MAX=5,
    AKM_TDLS=7,
    AKM_WPA_MAX=2
} AkmType_e;

typedef enum AkmType_e AkmTypePacked_e;

typedef union ckd ckd, *Pckd;

typedef enum MIC_Fail_State_e {
    FIRST_MIC_FAIL_IN_60_SEC=1,
    NO_MIC_FAILURE=0,
    SECOND_MIC_FAIL_IN_60_SEC=2
} MIC_Fail_State_e;

typedef union anon_union.conflict3f08_for_specDat anon_union.conflict3f08_for_specDat, *Panon_union.conflict3f08_for_specDat;

typedef struct cipher_key_buf cipher_key_buf, *Pcipher_key_buf;

typedef struct cipher_key_buf cipher_key_buf_t;

typedef struct eapolHskData_t eapolHskData_t, *PeapolHskData_t;

typedef struct apSpecificData_t apSpecificData_t, *PapSpecificData_t;

typedef struct BufferDesc BufferDesc, *PBufferDesc;

typedef struct BufferDesc BufferDesc_t;

typedef struct ChanBandInfo_t ChanBandInfo_t, *PChanBandInfo_t;

typedef union anon_union.conflict29b9_for_intf anon_union.conflict29b9_for_intf, *Panon_union.conflict29b9_for_intf;

typedef ushort uint16;

typedef struct BandConfig_t BandConfig_t, *PBandConfig_t;

typedef ulong uint32;

typedef enum ChanBand_e {
    Band_2_4_GHz=0,
    Band_4_GHz=2,
    Band_5_GHz=1
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
    ACS_MODE=1,
    MANUAL_MODE=0
} ScanMode_e;

struct AkmSuite_t { // DWARF DIE: 3126
    UINT8 akmOui[3];
    AkmTypePacked_e akmType;
};

struct MIC_Error_t { // DWARF DIE: 32be
    enum MIC_Fail_State_e status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    BOOLEAN MICCounterMeasureEnabled;
    UINT32 disableStaAsso;
};

struct SecurityParams_t { // DWARF DIE: 3156
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
};

struct customMIB_RSNStats_t { // DWARF DIE: 32fb
    UINT8 TKIPICVErrors;
    UINT8 TKIPLocalMICFailures;
    UINT8 TKIPCounterMeasuresInvoked;
};

struct BandConfig_t { // DWARF DIE: 289d
    enum ChanBand_e chanBand:2;
    enum ChanWidth_e chanWidth:2;
    enum Chan2Offset_e chan2Offset:2;
    enum ScanMode_e scanMode:2;
};

struct ChanBandInfo_t { // DWARF DIE: 28f9
    struct BandConfig_t bandConfig;
    UINT8 chanNum;
};

struct apSpecificData_t { // DWARF DIE: 3eac
    struct apInfo_t * apInfo;
    BufferDesc_t * apInfoBuffDesc;
    struct ChanBandInfo_t chanBandInfo;
    undefined field_0xa;
    undefined field_0xb;
    struct staData_t staData;
};

union anon_union.conflict29b9_for_intf { // DWARF DIE: 29b9
    uint32 Interface;
};

struct keyMgmtInfoSta_t { // DWARF DIE: 3338
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

struct IEEEtypes_RSNCapability_t { // DWARF DIE: 262d
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

struct RSNConfig_t { // DWARF DIE: 31d0
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

struct IEEEtypes_SsIdElement_t { // DWARF DIE: 2545
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    IEEEtypes_SsId_t SsId;
};

struct supplicantData { // DWARF DIE: 3793
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

struct eapolHskData_t { // DWARF DIE: 2f03
    UINT8 ANonce[32];
    struct KeyData_t pwsKeyData;
};

union ckd { // DWARF DIE: 2f33
    struct eapolHskData_t hskData;
};

struct cipher_key_t { // DWARF DIE: 2f4d
    union ckd ckd;
};

struct cipher_key_buf { // DWARF DIE: 2f74
    struct cipher_key_t cipher_key;
};

union anon_union.conflict3f08_for_specDat { // DWARF DIE: 3f08
    struct apSpecificData_t apData;
};

struct cm_ConnectionInfo { // DWARF DIE: 29db
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
    union anon_union.conflict3f08_for_specDat specDat;
    cipher_key_buf_t TxRxCipherKeyBuf;
};

struct BufferDesc { // DWARF DIE: 2a98
    union anon_union.conflict29b9_for_intf intf;
    uint16 DataLen;
    undefined field_0x6;
    undefined field_0x7;
    void * Buffer;
};

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

struct rc_sta_stats { // DWARF DIE: 1d7f
};

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

struct txl_buffer_control { // DWARF DIE: 1d74
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 8f3
};

typedef struct cm_ConnectionInfo cm_ConnectionInfo_t;

typedef union anon_union.conflict3f08 anon_union.conflict3f08, *Panon_union.conflict3f08;

union anon_union.conflict3f08 { // DWARF DIE: 3f08
    struct apSpecificData_t apData;
};

typedef struct mac_addr mac_addr, *Pmac_addr;

struct mac_addr { // DWARF DIE: a57
    uint16_t array[3];
};

typedef union anon_union.conflictb2f anon_union.conflictb2f, *Panon_union.conflictb2f;

typedef struct anon_struct.conflictacf anon_struct.conflictacf, *Panon_struct.conflictacf;

typedef struct anon_struct.conflictb06 anon_struct.conflictb06, *Panon_struct.conflictb06;

struct anon_struct.conflictb06 { // DWARF DIE: b06
    uint32_t key[4];
};

struct anon_struct.conflictacf { // DWARF DIE: acf
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

union anon_union.conflictb2f { // DWARF DIE: b2f
    struct anon_struct.conflictacf mic;
    struct anon_struct.conflictb06 mfp;
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictb2f_for_u anon_union.conflictb2f_for_u, *Panon_union.conflictb2f_for_u;

union anon_union.conflictb2f_for_u { // DWARF DIE: b2f
    struct anon_struct.conflictacf mic;
    struct anon_struct.conflictb06 mfp;
};

struct key_info_tag { // DWARF DIE: b54
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb2f_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

struct mac_rateset { // DWARF DIE: a87
    uint8_t length;
    uint8_t array[12];
};

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

struct mac_htcapability { // DWARF DIE: bda
    uint16_t ht_capa_info;
    uint8_t a_mpdu_param;
    uint8_t mcs_rate[16];
    undefined field_0x13;
    uint16_t ht_extended_capa;
    undefined field_0x16;
    undefined field_0x17;
    uint32_t tx_beamforming_capa;
    uint8_t asel_capa;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: c4d
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef enum anon_enum_8.conflict9df {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_MAX_TYPES=4,
    AC_VI=2,
    AC_VO=3,
    BROADCAST_STA_IDX_MAX=11,
    BROADCAST_STA_IDX_MIN=10,
    DMA_DL=0,
    DMA_MAX=2,
    DMA_UL=1,
    HAL_AC0_TIMER=0,
    HAL_AC1_TIMER=1,
    HAL_AC2_TIMER=2,
    HAL_AC3_TIMER=3,
    HAL_BCN_TIMER=4,
    HAL_IDLE_TIMER=5,
    HAL_KE_TIMER=8,
    HAL_MM_TIMER=7,
    HAL_RX_TIMER=6,
    HAL_TIMER_MAX=9,
    INVALID_STA_IDX=-1,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_DATA_RX=1,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_MAX=4,
    MOD_CLASS_DSSS_OFDM=5,
    MOD_CLASS_ERP_OFDM=6,
    MOD_CLASS_ERP_PBCC=4,
    MOD_CLASS_FHSS=2,
    MOD_CLASS_HR_DSSS=3,
    MOD_CLASS_HT=8,
    MOD_CLASS_INFRA=1,
    MOD_CLASS_OFDM=7,
    MOD_CLASS_VHT=9,
    PHY_BAND_2G4=0,
    PHY_BAND_5G=1,
    PHY_BAND_MAX=2,
    STA_MAX=12,
    TASK_API=13,
    TASK_APM=7,
    TASK_BAM=8,
    TASK_CFG=12,
    TASK_DBG=1,
    TASK_HOSTAPD_U=10,
    TASK_LAST_EMB=12,
    TASK_MAX=14,
    TASK_ME=5,
    TASK_MESH=9,
    TASK_MM=0,
    TASK_NONE=-1,
    TASK_RXU=11,
    TASK_SCAN=2,
    TASK_SCANU=4,
    TASK_SM=6,
    TASK_TDLS=3,
    TID_0=0,
    TID_1=1,
    TID_2=2,
    TID_3=3,
    TID_4=4,
    TID_5=5,
    TID_6=6,
    TID_7=7,
    TID_MAX=9,
    TID_MGT=8,
    WMM_AC_BE=0,
    WMM_AC_BK=1,
    WMM_AC_VI=2,
    WMM_AC_VO=3
} anon_enum_8.conflict9df;

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: ca2
    struct mac_rateset rate_set;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    struct mac_htcapability ht_cap;
    struct mac_vhtcapability vht_cap;
    uint32_t capa_flags;
    uint8_t phy_bw_max;
    uint8_t bw_cur;
    uint8_t uapsd_queues;
    uint8_t max_sp_len;
    uint8_t stbc_nss;
    undefined field_0x45;
    undefined field_0x46;
    undefined field_0x47;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

typedef uint16_t ke_msg_id_t;

typedef uint16_t ke_task_id_t;

struct ke_msg_handler { // DWARF DIE: 16fc
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1728
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 2009
    uint32_t rx_filter_umac;
    uint32_t rx_filter_lmac_enable;
    uint16_t ampdu_max_dur[5];
    uint8_t prev_mm_state;
    uint8_t prev_hw_state;
    uint32_t basic_rates[2];
    uint32_t uapsd_timeout;
    uint16_t lp_clk_accuracy;
    uint8_t host_idle;
    _Bool keep_alive_status_enabled;
    uint32_t keep_alive_packet_counter;
    uint32_t keep_alive_time_last_received;
};

typedef uint wint_t;

typedef long __int32_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef char __int8_t;

typedef __int8_t int8_t;

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 1a3f
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 1a14
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 19f7
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 18fc
    uint16_t frame_cntl;
    uint16_t seq_cntl;
    uint16_t sn;
    uint8_t fn;
    uint8_t tid;
    uint8_t machdr_len;
    uint8_t sta_idx;
    uint8_t vif_idx;
    uint8_t dst_idx;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    uint64_t pn;
    uint32_t statinfo;
    uint32_t host_buf_addr;
    struct key_info_tag * key;
    struct mac_addr da;
    struct mac_addr sa;
    uint8_t frame_info;
    _Bool eth_len_present;
    uint8_t payl_offset;
    undefined field_0x33;
    undefined field_0x34;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
};

struct rxu_cntrl_env_tag { // DWARF DIE: 1a78
    struct rx_cntrl_rx_status rx_status;
    struct co_list rxdesc_pending;
    struct co_list rxdesc_ready;
    struct rx_cntrl_ipcdesc rx_ipcdesc_stat;
    struct co_list rxu_defrag_free;
    struct co_list rxu_defrag_used;
    struct rx_cntrl_dupli rxu_dupli;
    struct mac_addr * mac_addr_ptr;
    struct rx_cntrl_pm_mon pm_mon;
    uint32_t ttr;
    undefined field_0x74;
    undefined field_0x75;
    undefined field_0x76;
    undefined field_0x77;
};

typedef struct pmkElement_t pmkElement_t, *PpmkElement_t;

typedef union anon_union.conflict380b_for_key anon_union.conflict380b_for_key, *Panon_union.conflict380b_for_key;

typedef char SINT8;

union anon_union.conflict380b_for_key { // DWARF DIE: 380b
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

struct pmkElement_t { // DWARF DIE: 383d
    union anon_union.conflict380b_for_key key;
    UINT8 PMK[32];
    UINT8 length;
    UINT8 psk_length;
    SINT8 replacementRank;
};

typedef union anon_union.conflict380b anon_union.conflict380b, *Panon_union.conflict380b;

union anon_union.conflict380b { // DWARF DIE: 380b
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte4_for___value anon_union.conflicte4_for___value, *Panon_union.conflicte4_for___value;

union anon_union.conflicte4_for___value { // DWARF DIE: e4
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 116
    int __count;
    union anon_union.conflicte4_for___value __value;
};

typedef union anon_union.conflicte4 anon_union.conflicte4, *Panon_union.conflicte4;

union anon_union.conflicte4 { // DWARF DIE: e4
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: d88
    uint32_t word[4];
};

typedef struct dma_desc dma_desc, *Pdma_desc;

struct dma_desc { // DWARF DIE: ff9
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 104d
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 18a7
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 12cd
    struct co_list_hdr list_hdr;
    struct rx_dmadesc * dma_hdrdesc;
    struct rx_payloaddesc * pd;
    struct rx_pbd * last_pbd;
    struct rx_pbd * spare_pbd;
    uint32_t host_id;
    uint32_t frame_len;
    uint8_t status;
    uint8_t pbd_count;
    uint8_t use_in_tcpip;
    undefined field_0x1f;
};

struct phy_channel_info { // DWARF DIE: de1
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 1362
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 11c2
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

struct rx_payloaddesc { // DWARF DIE: 1435
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 13c5
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef uchar uint8;

typedef enum Status_e {
    FAIL=1,
    FW_SUCCESS=0
} Status_e;

typedef ulonglong UINT64;

typedef long SINT32;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: e09
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct Hdr_8021x_t Hdr_8021x_t, *PHdr_8021x_t;

typedef enum IEEEtypes_8021x_PacketType_e {
    IEEE_8021X_PACKET_TYPE_ASF_ALERT=4,
    IEEE_8021X_PACKET_TYPE_EAPOL_KEY=3,
    IEEE_8021X_PACKET_TYPE_EAPOL_LOGOFF=2,
    IEEE_8021X_PACKET_TYPE_EAPOL_START=1,
    IEEE_8021X_PACKET_TYPE_EAP_PACKET=0
} IEEEtypes_8021x_PacketType_e;

struct Hdr_8021x_t { // DWARF DIE: 2ad9
    UINT8 protocol_ver;
    enum IEEEtypes_8021x_PacketType_e pckt_type;
    UINT16 pckt_body_len;
};

typedef struct EAPOL_KeyMsg_t EAPOL_KeyMsg_t, *PEAPOL_KeyMsg_t;

typedef struct key_info_t key_info_t, *Pkey_info_t;

struct key_info_t { // DWARF DIE: 2b16
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

struct EAPOL_KeyMsg_t { // DWARF DIE: 2bdc
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

struct ether_hdr_t { // DWARF DIE: 2933
    IEEEtypes_MacAddr_t da;
    IEEEtypes_MacAddr_t sa;
    UINT16 type;
};

struct EAPOL_KeyMsg_Tx_t { // DWARF DIE: 2c9e
    struct ether_hdr_t ethHdr;
    struct EAPOL_KeyMsg_t keyMsg;
};

typedef union anon_union.conflict29b9 anon_union.conflict29b9, *Panon_union.conflict29b9;

union anon_union.conflict29b9 { // DWARF DIE: 29b9
    uint32 Interface;
    struct cm_ConnectionInfo * connPtr;
};

typedef uint16_t ke_state_t;

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 17f9
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 1d8a
    uint32_t last_tx_time;
    uint32_t last_ba_add_time;
    uint8_t bam_idx_rx;
    uint8_t bam_idx_tx;
    int8_t credit_oft;
    undefined field_0xb;
};

typedef struct sta_info_tag sta_info_tag, *Psta_info_tag;

typedef enum sta_ps_traffic {
    PS_TRAFFIC=3,
    PS_TRAFFIC_HOST=1,
    PS_TRAFFIC_INT=2,
    UAPSD_TRAFFIC=12,
    UAPSD_TRAFFIC_HOST=4,
    UAPSD_TRAFFIC_INT=8
} sta_ps_traffic;

typedef int sta_ps_sp_t;

typedef struct sta_mgmt_sec_info sta_mgmt_sec_info, *Psta_mgmt_sec_info;

typedef struct sta_pol_tbl_cntl sta_pol_tbl_cntl, *Psta_pol_tbl_cntl;

struct sta_pol_tbl_cntl { // DWARF DIE: 1d25
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 1cea
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 1dd9
    struct co_list_hdr list_hdr;
    uint32_t bcn_int;
    uint32_t ampdu_size_max_vht;
    uint16_t ampdu_size_max_ht;
    undefined field_0xe;
    undefined field_0xf;
    uint32_t paid_gid;
    uint8_t ampdu_spacing_min;
    undefined field_0x15;
    uint16_t drift;
    uint16_t aid;
    uint8_t inst_nbr;
    uint8_t staid;
    uint8_t ps_state;
    _Bool valid;
    struct mac_addr mac_addr;
    int8_t rssi;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    uint32_t tsflo;
    uint32_t tsfhi;
    uint8_t data_rate;
    uint8_t ctrl_port_state;
    enum sta_ps_traffic traffic_avail;
    undefined field_0x33;
    sta_ps_sp_t ps_service_period;
    uint16_t ctrl_port_ethertype;
    undefined field_0x3a;
    undefined field_0x3b;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    struct sta_mgmt_sec_info sta_sec_info;
    struct mac_sta_info info;
    uint16_t seq_nbr[9];
    undefined field_0x10a;
    undefined field_0x10b;
    struct sta_pol_tbl_cntl pol_tbl;
    struct sta_mgmt_ba_info ba_info[9];
    uint16_t rx_nqos_last_seqcntl;
    uint16_t rx_qos_last_seqcntl[9];
    struct co_list tx_desc_post;
    void * suppData;
    uint32_t time_last_seen;
    undefined field_0x1ac;
    undefined field_0x1ad;
    undefined field_0x1ae;
    undefined field_0x1af;
};

typedef struct sta_info_env_tag sta_info_env_tag, *Psta_info_env_tag;

struct sta_info_env_tag { // DWARF DIE: 1fc2
    struct co_list free_sta_list;
};

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

struct tx_cfm_tag { // DWARF DIE: 1492
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

typedef union anon_union.conflict10d4 anon_union.conflict10d4, *Panon_union.conflict10d4;

union anon_union.conflict10d4 { // DWARF DIE: 10d4
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef union anon_union.conflict108a_for_field_3 anon_union.conflict108a_for_field_3, *Panon_union.conflict108a_for_field_3;

typedef union anon_union.conflict10af_for_field_4 anon_union.conflict10af_for_field_4, *Panon_union.conflict10af_for_field_4;

typedef union anon_union.conflict10d4_for_field_5 anon_union.conflict10d4_for_field_5, *Panon_union.conflict10d4_for_field_5;

union anon_union.conflict10af_for_field_4 { // DWARF DIE: 10af
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict108a_for_field_3 { // DWARF DIE: 108a
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflict10d4_for_field_5 { // DWARF DIE: 10d4
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: 10f9
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict108a_for_field_3 field_3;
    union anon_union.conflict10af_for_field_4 field_4;
    union anon_union.conflict10d4_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1501
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

typedef union anon_union.conflict108a anon_union.conflict108a, *Panon_union.conflict108a;

union anon_union.conflict108a { // DWARF DIE: 108a
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict10af anon_union.conflict10af, *Panon_union.conflict10af;

union anon_union.conflict10af { // DWARF DIE: 10af
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8be_for__new anon_union.conflict8be_for__new, *Panon_union.conflict8be_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict732 anon_struct.conflict732, *Panon_struct.conflict732;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: 1dc
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

struct _rand48 { // DWARF DIE: 6e9
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict732 { // DWARF DIE: 732
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

union anon_union.conflict8be_for__new { // DWARF DIE: 8be
    struct anon_struct.conflict732 _reent;
    struct anon_struct.conflict732 _unused;
};

struct _Bigint { // DWARF DIE: 16c
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 6a4
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 314
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 342
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

struct _on_exit_args { // DWARF DIE: 25f
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2b4
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4ae
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
    union anon_union.conflict8be_for__new _new;
    undefined field_0x128;
    undefined field_0x129;
    undefined field_0x12a;
    undefined field_0x12b;
    undefined field_0x12c;
    undefined field_0x12d;
    undefined field_0x12e;
    undefined field_0x12f;
    undefined field_0x130;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
    undefined field_0x134;
    undefined field_0x135;
    undefined field_0x136;
    undefined field_0x137;
    undefined field_0x138;
    undefined field_0x139;
    undefined field_0x13a;
    undefined field_0x13b;
    undefined field_0x13c;
    undefined field_0x13d;
    undefined field_0x13e;
    undefined field_0x13f;
    undefined field_0x140;
    undefined field_0x141;
    undefined field_0x142;
    undefined field_0x143;
    undefined field_0x144;
    undefined field_0x145;
    undefined field_0x146;
    undefined field_0x147;
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

typedef union anon_union.conflict8be anon_union.conflict8be, *Panon_union.conflict8be;

union anon_union.conflict8be { // DWARF DIE: 8be
    struct anon_struct.conflict732 _reent;
    struct anon_struct.conflict732 _unused;
    undefined1 field2[240]; // Automatically generated padding to match DWARF declared size
};

typedef struct IEEEtypes_WPAElement_t IEEEtypes_WPAElement_t, *PIEEEtypes_WPAElement_t;

struct IEEEtypes_WPAElement_t { // DWARF DIE: 2597
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    UINT8 OuiType[4];
    UINT16 Ver;
    UINT8 GrpKeyCipher[4];
    UINT16 PwsKeyCnt;
    UINT8 PwsKeyCipherList[4];
    UINT16 AuthKeyCnt;
    UINT8 AuthKeyList[4];
};

typedef enum IEEEtypes_KDEDataType_e {
    KDE_DATA_TYPE_ERROR=8,
    KDE_DATA_TYPE_GTK=1,
    KDE_DATA_TYPE_IGTK=9,
    KDE_DATA_TYPE_LIFETIME=7,
    KDE_DATA_TYPE_MACADDR=3,
    KDE_DATA_TYPE_NONCE=6,
    KDE_DATA_TYPE_PMKID=4,
    KDE_DATA_TYPE_RESERVED=0,
    KDE_DATA_TYPE_RESERVED2=2,
    KDE_DATA_TYPE_SMK=5
} IEEEtypes_KDEDataType_e;

typedef struct IEEEtypes_RSNElement_t IEEEtypes_RSNElement_t, *PIEEEtypes_RSNElement_t;

struct IEEEtypes_RSNElement_t { // DWARF DIE: 2711
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    UINT16 Ver;
    UINT8 GrpKeyCipher[4];
    UINT16 PwsKeyCnt;
    UINT8 PwsKeyCipherList[4];
    UINT16 AuthKeyCnt;
    UINT8 AuthKeyList[4];
    struct IEEEtypes_RSNCapability_t RsnCap;
    UINT16 PMKIDCnt;
    UINT8 PMKIDList[16];
    UINT8 GrpMgmtCipher[4];
};

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

typedef enum Elf_SectionHeaderType_RISCV {
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType_RISCV;

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

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




// DWARF DIE: 4d61

void ReInitGTK(cm_ConnectionInfo_t *connPtr)

{
  UINT8 extraout_a0;
  
  _L0();
  if (connPtr->gtkHwKeyId != -1) {
    _L0();
  }
  FUN_00010034();
  FUN_00010040();
  connPtr->gtkHwKeyId = extraout_a0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined extraout_a0;
  
  _L0();
  if (*(char *)(unaff_s0 + 3) != -1) {
    _L0();
  }
  FUN_00010034();
  FUN_00010040();
  *(undefined *)(unaff_s0 + 3) = extraout_a0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined extraout_a0;
  
  _L0();
  FUN_00010034();
  FUN_00010040();
  *(undefined *)(unaff_s0 + 3) = extraout_a0;
  return;
}



void FUN_00010034(void)

{
  int unaff_s0;
  undefined extraout_a0;
  
  FUN_00010034();
  FUN_00010040();
  *(undefined *)(unaff_s0 + 3) = extraout_a0;
  return;
}



void FUN_00010040(void)

{
  int unaff_s0;
  undefined extraout_a0;
  
  FUN_00010040();
  *(undefined *)(unaff_s0 + 3) = extraout_a0;
  return;
}



// DWARF DIE: 4c98

void KeyMgmtInit(cm_ConnectionInfo_t *connPtr)

{
  int extraout_a0;
  
  _L0();
  FUN_00010076();
  if (*(int *)(extraout_a0 + 0xb8) == 1) {
    FUN_00010096();
    FUN_000100ae();
    *(undefined4 *)(extraout_a0 + 0xb8) = 0;
  }
  return;
}



void _L0(void)

{
  int unaff_s1;
  int extraout_a0;
  int iStack00000008;
  uint uStack0000000c;
  
  _L0();
  FUN_00010076();
  if (*(int *)(extraout_a0 + 0xb8) == 1) {
    uStack0000000c = (uint)*(byte *)(unaff_s1 + 0x2c);
    iStack00000008 = extraout_a0 + 0x18;
    FUN_00010096();
    FUN_000100ae();
    *(undefined4 *)(extraout_a0 + 0xb8) = 0;
  }
  return;
}



void FUN_00010076(void)

{
  int unaff_s0;
  int unaff_s1;
  int iStack00000008;
  uint uStack0000000c;
  
  FUN_00010076();
  if (*(int *)(unaff_s0 + 0xb8) == 1) {
    uStack0000000c = (uint)*(byte *)(unaff_s1 + 0x2c);
    iStack00000008 = unaff_s0 + 0x18;
    FUN_00010096();
    FUN_000100ae();
    *(undefined4 *)(unaff_s0 + 0xb8) = 0;
  }
  return;
}



void FUN_00010096(void)

{
  int unaff_s0;
  
  FUN_00010096();
  FUN_000100ae();
  *(undefined4 *)(unaff_s0 + 0xb8) = 0;
  return;
}



void FUN_000100ae(void)

{
  int unaff_s0;
  
  FUN_000100ae();
  *(undefined4 *)(unaff_s0 + 0xb8) = 0;
  return;
}



// DWARF DIE: 4b73

BufferDesc_t *
PrepDefaultEapolMsg(cm_ConnectionInfo_t *connPtr,EAPOL_KeyMsg_Tx_t **pTxEapolPtr,
                   BufferDesc_t *pBufDesc)

{
  BufferDesc_t *pBVar1;
  EAPOL_KeyMsg_Tx_t *pEStack36;
  EAPOL_KeyMsg_Tx_t *tx_eapol_ptr;
  
  _L0();
  _LVL22();
  pBVar1 = (BufferDesc_t *)_LVL25();
  if (pBVar1 != (BufferDesc_t *)0x0) {
    FUN_00010108();
    FUN_0001011a();
    FUN_00010140();
    *pTxEapolPtr = pEStack36;
  }
  return pBVar1;
}



int _L0(void)

{
  int iVar1;
  undefined4 *unaff_s3;
  undefined4 in_stack_0000001c;
  
  _L0();
  _LVL22();
  iVar1 = _LVL25();
  if (iVar1 != 0) {
    FUN_00010108();
    FUN_0001011a();
    FUN_00010140();
    *unaff_s3 = in_stack_0000001c;
  }
  return iVar1;
}



int _LVL22(void)

{
  int iVar1;
  undefined4 *unaff_s3;
  undefined4 in_stack_0000001c;
  
  _LVL22();
  iVar1 = _LVL25();
  if (iVar1 != 0) {
    FUN_00010108();
    FUN_0001011a();
    FUN_00010140();
    *unaff_s3 = in_stack_0000001c;
  }
  return iVar1;
}



int _LVL25(void)

{
  int iVar1;
  undefined4 *unaff_s3;
  undefined4 in_stack_0000001c;
  
  iVar1 = _LVL25();
  if (iVar1 != 0) {
    FUN_00010108();
    FUN_0001011a();
    FUN_00010140();
    *unaff_s3 = in_stack_0000001c;
  }
  return iVar1;
}



void FUN_00010108(void)

{
  undefined4 *unaff_s3;
  undefined4 in_stack_0000001c;
  
  FUN_00010108();
  FUN_0001011a();
  FUN_00010140();
  *unaff_s3 = in_stack_0000001c;
  return;
}



void FUN_0001011a(void)

{
  undefined4 *unaff_s3;
  undefined4 in_stack_0000001c;
  
  FUN_0001011a();
  FUN_00010140();
  *unaff_s3 = in_stack_0000001c;
  return;
}



void FUN_00010140(void)

{
  undefined4 *unaff_s3;
  undefined4 in_stack_0000001c;
  
  FUN_00010140();
  *unaff_s3 = in_stack_0000001c;
  return;
}



// WARNING: Variable defined which should be unmapped: replay_cnt
// DWARF DIE: 4a2c

Status_e GeneratePWKMsg1(cm_ConnectionInfo_t *connPtr,BufferDesc_t *pBufDesc)

{
  Status_e SVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iStack28;
  EAPOL_KeyMsg_Tx_t *tx_eapol_ptr;
  UINT32 replay_cnt [2];
  
  iVar2 = _L0();
  iVar3 = FUN_0001017e();
  if (iVar3 == 0) {
    SVar1 = FAIL;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x1c) + 1;
    *(int *)(iVar2 + 0x1c) = iVar3;
    if (iVar3 == 0) {
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
    }
    _L0();
    FUN_000101c0();
    uVar4 = *(ushort *)(iStack28 + 0x6f) + 0x5f & 0xffff;
    *(undefined *)(iStack28 + 0xe) = *(undefined *)(iVar2 + 0x54);
    *(undefined *)(iStack28 + 0xf) = 3;
    *(char *)(iStack28 + 0x10) = (char)(uVar4 >> 8);
    *(char *)(iStack28 + 0x11) = (char)uVar4;
    _L0();
    SVar1 = FW_SUCCESS;
  }
  return SVar1;
}



undefined4 _L0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_stack_00000014;
  undefined4 uStack00000018;
  int iStack0000001c;
  
  iVar1 = _L0();
  iVar2 = FUN_0001017e();
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    iStack0000001c = *(int *)(iVar1 + 0x1c) + 1;
    *(int *)(iVar1 + 0x1c) = iStack0000001c;
    if (iStack0000001c == 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
    }
    uStack00000018 = *(undefined4 *)(iVar1 + 0x20);
    _L0();
    FUN_000101c0();
    uVar4 = *(ushort *)(in_stack_00000014 + 0x6f) + 0x5f & 0xffff;
    *(undefined *)(in_stack_00000014 + 0xe) = *(undefined *)(iVar1 + 0x54);
    *(undefined *)(in_stack_00000014 + 0xf) = 3;
    *(char *)(in_stack_00000014 + 0x10) = (char)(uVar4 >> 8);
    *(char *)(in_stack_00000014 + 0x11) = (char)uVar4;
    _L0();
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_0001017e(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_stack_00000014;
  undefined4 uStack00000018;
  int iStack0000001c;
  
  iVar1 = FUN_0001017e();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iStack0000001c = *(int *)(unaff_s0 + 0x1c) + 1;
    *(int *)(unaff_s0 + 0x1c) = iStack0000001c;
    if (iStack0000001c == 0) {
      *(int *)(unaff_s0 + 0x20) = *(int *)(unaff_s0 + 0x20) + 1;
    }
    uStack00000018 = *(undefined4 *)(unaff_s0 + 0x20);
    _L0();
    FUN_000101c0();
    uVar3 = *(ushort *)(in_stack_00000014 + 0x6f) + 0x5f & 0xffff;
    *(undefined *)(in_stack_00000014 + 0xe) = *(undefined *)(unaff_s0 + 0x54);
    *(undefined *)(in_stack_00000014 + 0xf) = 3;
    *(char *)(in_stack_00000014 + 0x10) = (char)(uVar3 >> 8);
    *(char *)(in_stack_00000014 + 0x11) = (char)uVar3;
    _L0();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  int in_stack_00000014;
  
  _L0();
  FUN_000101c0();
  uVar1 = *(ushort *)(in_stack_00000014 + 0x6f) + 0x5f & 0xffff;
  *(undefined *)(in_stack_00000014 + 0xe) = *(undefined *)(unaff_s0 + 0x54);
  *(undefined *)(in_stack_00000014 + 0xf) = 3;
  *(char *)(in_stack_00000014 + 0x10) = (char)(uVar1 >> 8);
  *(char *)(in_stack_00000014 + 0x11) = (char)uVar1;
  _L0();
  return 0;
}



undefined4 FUN_000101c0(void)

{
  int unaff_s0;
  uint uVar1;
  int in_stack_00000014;
  
  FUN_000101c0();
  uVar1 = *(ushort *)(in_stack_00000014 + 0x6f) + 0x5f & 0xffff;
  *(undefined *)(in_stack_00000014 + 0xe) = *(undefined *)(unaff_s0 + 0x54);
  *(undefined *)(in_stack_00000014 + 0xf) = 3;
  *(char *)(in_stack_00000014 + 0x10) = (char)(uVar1 >> 8);
  *(char *)(in_stack_00000014 + 0x11) = (char)uVar1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 4705

Status_e GeneratePWKMsg3(cm_ConnectionInfo_t *connPtr,BufferDesc_t *pBufDesc)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  EAPOL_KeyMsg_Tx_t *tx_eapol_ptr;
  UINT32 replay_cnt [2];
  
  iVar2 = _L0();
  if (iVar2 != 0) {
    iVar2 = _LVL56();
    FUN_0001024e();
    iVar3 = *(int *)(iVar2 + 0x1c) + 1;
    *(int *)(iVar2 + 0x1c) = iVar3;
    if (iVar3 == 0) {
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
    }
    FUN_00010290();
    iVar3 = FUN_000102ba();
    if (iVar3 != 0) {
      if ((*(ushort *)(iVar2 + 0x12) & 0x20) == 0) {
_L0:
        FUN_0001031a();
        _LVL72();
        return FW_SUCCESS;
      }
      FUN_000102f0();
      bVar1 = FUN_00010300();
      if (CONCAT31(extraout_var,bVar1) != 0) goto _L0;
    }
    FUN_000102c6();
    FUN_000102d0();
  }
  return FAIL;
}



undefined4 _L0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uStack00000008;
  int iStack0000000c;
  
  iVar2 = _L0();
  if (iVar2 != 0) {
    iVar2 = _LVL56();
    FUN_0001024e();
    iStack0000000c = *(int *)(iVar2 + 0x1c) + 1;
    *(int *)(iVar2 + 0x1c) = iStack0000000c;
    if (iStack0000000c == 0) {
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
    }
    uStack00000008 = *(undefined4 *)(iVar2 + 0x20);
    FUN_00010290();
    iVar3 = FUN_000102ba();
    if (iVar3 != 0) {
      if ((*(ushort *)(iVar2 + 0x12) & 0x20) == 0) {
_L0:
        FUN_0001031a();
        _LVL72();
        return 0;
      }
      FUN_000102f0();
      bVar1 = FUN_00010300();
      if (CONCAT31(extraout_var,bVar1) != 0) goto _L0;
    }
    FUN_000102c6();
    FUN_000102d0();
  }
  return 1;
}



undefined4 _LVL56(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined4 uStack00000008;
  int iStack0000000c;
  
  iVar2 = _LVL56();
  FUN_0001024e();
  iStack0000000c = *(int *)(iVar2 + 0x1c) + 1;
  *(int *)(iVar2 + 0x1c) = iStack0000000c;
  if (iStack0000000c == 0) {
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  }
  uStack00000008 = *(undefined4 *)(iVar2 + 0x20);
  FUN_00010290();
  iVar3 = FUN_000102ba();
  if (iVar3 == 0) {
_L0:
    FUN_000102c6();
    FUN_000102d0();
    uVar4 = 1;
  }
  else {
    if ((*(ushort *)(iVar2 + 0x12) & 0x20) != 0) {
      FUN_000102f0();
      bVar1 = FUN_00010300();
      if (CONCAT31(extraout_var,bVar1) == 0) goto _L0;
    }
    FUN_0001031a();
    _LVL72();
    uVar4 = 0;
  }
  return uVar4;
}



undefined4 FUN_0001024e(void)

{
  int unaff_s0;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined4 uStack00000008;
  int iStack0000000c;
  
  FUN_0001024e();
  iStack0000000c = *(int *)(unaff_s0 + 0x1c) + 1;
  *(int *)(unaff_s0 + 0x1c) = iStack0000000c;
  if (iStack0000000c == 0) {
    *(int *)(unaff_s0 + 0x20) = *(int *)(unaff_s0 + 0x20) + 1;
  }
  uStack00000008 = *(undefined4 *)(unaff_s0 + 0x20);
  FUN_00010290();
  iVar2 = FUN_000102ba();
  if (iVar2 == 0) {
_L0:
    FUN_000102c6();
    FUN_000102d0();
    uVar3 = 1;
  }
  else {
    if ((*(ushort *)(unaff_s0 + 0x12) & 0x20) != 0) {
      FUN_000102f0();
      bVar1 = FUN_00010300();
      if (CONCAT31(extraout_var,bVar1) == 0) goto _L0;
    }
    FUN_0001031a();
    _LVL72();
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_00010290(void)

{
  int unaff_s0;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  
  FUN_00010290();
  iVar2 = FUN_000102ba();
  if (iVar2 == 0) {
_L0:
    FUN_000102c6();
    FUN_000102d0();
    uVar3 = 1;
  }
  else {
    if ((*(ushort *)(unaff_s0 + 0x12) & 0x20) != 0) {
      FUN_000102f0();
      bVar1 = FUN_00010300();
      if (CONCAT31(extraout_var,bVar1) == 0) goto _L0;
    }
    FUN_0001031a();
    _LVL72();
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_000102ba(void)

{
  int unaff_s0;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  
  iVar2 = FUN_000102ba();
  if (iVar2 == 0) {
_L0:
    FUN_000102c6();
    FUN_000102d0();
    uVar3 = 1;
  }
  else {
    if ((*(ushort *)(unaff_s0 + 0x12) & 0x20) != 0) {
      FUN_000102f0();
      bVar1 = FUN_00010300();
      if (CONCAT31(extraout_var,bVar1) == 0) goto _L0;
    }
    FUN_0001031a();
    _LVL72();
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_000102c6(void)

{
  FUN_000102c6();
  FUN_000102d0();
  return 1;
}



undefined4 FUN_000102d0(void)

{
  FUN_000102d0();
  return 1;
}



bool FUN_000102f0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  
  FUN_000102f0();
  bVar1 = FUN_00010300();
  bVar1 = CONCAT31(extraout_var,bVar1) == 0;
  if (bVar1) {
    FUN_000102c6();
    FUN_000102d0();
  }
  else {
    FUN_0001031a();
    _LVL72();
  }
  return bVar1;
}



bool FUN_00010300(void)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00010300();
  bVar1 = CONCAT31(extraout_var,bVar1) == 0;
  if (bVar1) {
    FUN_000102c6();
    FUN_000102d0();
  }
  else {
    FUN_0001031a();
    _LVL72();
  }
  return bVar1;
}



undefined4 FUN_0001031a(void)

{
  FUN_0001031a();
  _LVL72();
  return 0;
}



undefined4 _LVL72(void)

{
  _LVL72();
  return 0;
}



// DWARF DIE: 4633

Status_e ProcessPWKMsg4(BufferDesc_t *pBufDesc)

{
  int iVar1;
  Status_e SVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = pBufDesc->intf;
  iVar3 = _LVL78();
  iVar4 = FUN_00010362();
  if (iVar4 == 0) {
    SVar2 = FAIL;
  }
  else {
    *(undefined *)(iVar1 + 0xe8) = 1;
    *(undefined *)(iVar1 + 0xe9) = 0;
    *(undefined *)(iVar1 + 0xe4) = 0;
    *(undefined *)(iVar1 + 0xe5) = 0;
    *(undefined *)(iVar1 + 0xe6) = 0;
    *(undefined *)(iVar1 + 0xe7) = 0;
    FUN_0001038a();
    FUN_00010396();
    *(undefined *)(iVar3 + 0x18) = 0;
    SVar2 = FW_SUCCESS;
    if ((*(ushort *)(iVar3 + 0x12) & 0x20) != 0) {
      *(undefined *)(iVar3 + 0x16) = 10;
    }
  }
  return SVar2;
}



undefined4 _LVL78(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = _LVL78();
  iVar2 = FUN_00010362();
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    *(undefined *)(unaff_s0 + 0xe8) = 1;
    *(undefined *)(unaff_s0 + 0xe9) = 0;
    *(undefined *)(unaff_s0 + 0xe4) = 0;
    *(undefined *)(unaff_s0 + 0xe5) = 0;
    *(undefined *)(unaff_s0 + 0xe6) = 0;
    *(undefined *)(unaff_s0 + 0xe7) = 0;
    FUN_0001038a();
    FUN_00010396();
    *(undefined *)(iVar1 + 0x18) = 0;
    uVar3 = 0;
    if ((*(ushort *)(iVar1 + 0x12) & 0x20) != 0) {
      *(undefined *)(iVar1 + 0x16) = 10;
    }
  }
  return uVar3;
}



undefined4 FUN_00010362(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010362();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    *(undefined *)(unaff_s0 + 0xe8) = 1;
    *(undefined *)(unaff_s0 + 0xe9) = 0;
    *(undefined *)(unaff_s0 + 0xe4) = 0;
    *(undefined *)(unaff_s0 + 0xe5) = 0;
    *(undefined *)(unaff_s0 + 0xe6) = 0;
    *(undefined *)(unaff_s0 + 0xe7) = 0;
    FUN_0001038a();
    FUN_00010396();
    *(undefined *)(unaff_s1 + 0x18) = 0;
    uVar2 = 0;
    if ((*(ushort *)(unaff_s1 + 0x12) & 0x20) != 0) {
      *(undefined *)(unaff_s1 + 0x16) = 10;
    }
  }
  return uVar2;
}



undefined4 FUN_0001038a(void)

{
  int unaff_s1;
  
  FUN_0001038a();
  FUN_00010396();
  *(undefined *)(unaff_s1 + 0x18) = 0;
  if ((*(ushort *)(unaff_s1 + 0x12) & 0x20) != 0) {
    *(undefined *)(unaff_s1 + 0x16) = 10;
  }
  return 0;
}



undefined4 FUN_00010396(void)

{
  int unaff_s1;
  
  FUN_00010396();
  *(undefined *)(unaff_s1 + 0x18) = 0;
  if ((*(ushort *)(unaff_s1 + 0x12) & 0x20) != 0) {
    *(undefined *)(unaff_s1 + 0x16) = 10;
  }
  return 0;
}



// DWARF DIE: 4e5f

Status_e GenerateApEapolMsg(cm_ConnectionInfo_t *connPtr,keyMgmtState_e msgState,
                           BufferDesc_t *pBufDesc)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined3 in_register_0000202d;
  
  uVar1 = CONCAT31(in_register_0000202d,msgState);
  iVar2 = _L0();
  if ((msgState & 1) == 0) {
    uVar1 = uVar1 - 1 & 0xff;
  }
  *(char *)(iVar2 + 0x16) = (char)uVar1;
  if (*(char *)(iVar2 + 0xc) != '\x01') {
    if (uVar1 == 1) {
      iVar3 = FUN_00010400();
    }
    else {
      if (uVar1 != 3) {
        iVar3 = 1;
        if (pBufDesc != (BufferDesc_t *)0x0) {
          _LVL99();
          FUN_0001044a();
        }
        goto _L0;
      }
      iVar3 = FUN_0001042c();
    }
    if (iVar3 != 0) goto _L0;
    *(char *)(iVar2 + 0x16) = *(char *)(iVar2 + 0x16) + '\x01';
  }
  iVar3 = 0;
  *(char *)(iVar2 + 0x18) = *(char *)(iVar2 + 0x18) + '\x01';
_L0:
  return (Status_e)iVar3;
}



int _L0(void)

{
  uint unaff_s0;
  int iVar1;
  int iVar2;
  int in_stack_0000000c;
  
  iVar1 = _L0();
  if ((unaff_s0 & 1) == 0) {
    unaff_s0 = unaff_s0 - 1 & 0xff;
  }
  *(char *)(iVar1 + 0x16) = (char)unaff_s0;
  if (*(char *)(iVar1 + 0xc) != '\x01') {
    if (unaff_s0 == 1) {
      iVar2 = FUN_00010400();
    }
    else {
      if (unaff_s0 != 3) {
        if (in_stack_0000000c == 0) {
          return 1;
        }
        _LVL99();
        FUN_0001044a();
        return 1;
      }
      iVar2 = FUN_0001042c();
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    *(char *)(iVar1 + 0x16) = *(char *)(iVar1 + 0x16) + '\x01';
  }
  *(char *)(iVar1 + 0x18) = *(char *)(iVar1 + 0x18) + '\x01';
  return 0;
}



int FUN_00010400(void)

{
  int unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00010400();
  if (iVar1 == 0) {
    *(char *)(unaff_s1 + 0x16) = *(char *)(unaff_s1 + 0x16) + '\x01';
    iVar1 = 0;
    *(char *)(unaff_s1 + 0x18) = *(char *)(unaff_s1 + 0x18) + '\x01';
  }
  return iVar1;
}



int FUN_0001042c(void)

{
  int unaff_s1;
  int iVar1;
  
  iVar1 = FUN_0001042c();
  if (iVar1 == 0) {
    *(char *)(unaff_s1 + 0x16) = *(char *)(unaff_s1 + 0x16) + '\x01';
    iVar1 = 0;
    *(char *)(unaff_s1 + 0x18) = *(char *)(unaff_s1 + 0x18) + '\x01';
  }
  return iVar1;
}



void _LVL99(void)

{
  _LVL99();
  FUN_0001044a();
  return;
}



void FUN_0001044a(void)

{
  FUN_0001044a();
  return;
}



// DWARF DIE: 48f0

Status_e ProcessPWKMsg2(BufferDesc_t *pBufDesc)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _LVL106();
  _LVL109();
  FUN_000104ac();
  iVar2 = FUN_000104b8();
  if (iVar2 == 0) {
    return FAIL;
  }
  *(undefined *)(iVar1 + 0x18) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 _LVL106(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack00000000;
  
  iVar1 = _LVL106();
  _LVL109();
  uStack00000000 = 0;
  FUN_000104ac();
  iVar2 = FUN_000104b8();
  if (iVar2 == 0) {
    return 1;
  }
  *(undefined *)(iVar1 + 0x18) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 _LVL109(void)

{
  int iVar1;
  int unaff_s2;
  undefined4 uStack00000000;
  
  _LVL109();
  uStack00000000 = 0;
  FUN_000104ac();
  iVar1 = FUN_000104b8();
  if (iVar1 == 0) {
    return 1;
  }
  *(undefined *)(unaff_s2 + 0x18) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_000104ac(void)

{
  int iVar1;
  int unaff_s2;
  
  FUN_000104ac();
  iVar1 = FUN_000104b8();
  if (iVar1 == 0) {
    return 1;
  }
  *(undefined *)(unaff_s2 + 0x18) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_000104b8(void)

{
  int iVar1;
  int unaff_s2;
  
  iVar1 = FUN_000104b8();
  if (iVar1 == 0) {
    return 1;
  }
  *(undefined *)(unaff_s2 + 0x18) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 45a8

BOOLEAN SendEAPOLMsgUsingBufDesc(cm_ConnectionInfo_t *connPtr,BufferDesc_t *pBufDesc)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = _L0();
  bVar1 = (*(byte *)(CONCAT31(extraout_var,bVar1) + 0x16) & 1) != 0;
  if (bVar1) {
    FUN_00010520();
  }
  return (uint)bVar1;
}



bool _L0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = _L0();
  bVar1 = (*(byte *)(CONCAT31(extraout_var,bVar1) + 0x16) & 1) != 0;
  if (bVar1) {
    FUN_00010520();
  }
  return bVar1;
}



undefined4 FUN_00010520(void)

{
  FUN_00010520();
  return 1;
}



// WARNING: Variable defined which should be unmapped: rxCounterLo
// DWARF DIE: 443a

Status_e ProcessKeyMgmtDataAp(BufferDesc_t *pBufDesc)

{
  Status_e extraout_a0;
  Status_e extraout_a0_00;
  int iVar1;
  uint uStack24;
  UINT32 rxCounterHi;
  UINT32 rxCounterLo;
  
  iVar1 = _LVL134();
  if ((*(byte *)((int)pBufDesc->Buffer + 5) & 4) == 0) {
    _LVL144();
    FUN_0001057c();
    if ((*(int *)(iVar1 + 0x20) ==
         (uStack24 >> 8 & 0xff00) +
         (uStack24 & 0xff00) * 0x100 + uStack24 * 0x1000000 + (uStack24 >> 0x18)) &&
       (*(int *)(iVar1 + 0x1c) ==
        (rxCounterHi >> 8 & 0xff00) +
        rxCounterHi * 0x1000000 + (rxCounterHi >> 0x18) + (rxCounterHi & 0xff00) * 0x100)) {
      if (*(char *)(iVar1 + 0x16) == '\x02') {
        FUN_000105dc();
        return extraout_a0;
      }
      if (*(char *)(iVar1 + 0x16) == '\x04') {
        FUN_000105ee();
        return extraout_a0_00;
      }
    }
  }
  return FAIL;
}



undefined4 _LVL134(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 extraout_a0;
  undefined4 extraout_a0_00;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  iVar1 = _LVL134();
  if ((*(byte *)(*(int *)(unaff_s0 + 8) + 5) & 4) == 0) {
    _LVL144();
    FUN_0001057c();
    if ((*(int *)(iVar1 + 0x20) ==
         (in_stack_00000008 >> 8 & 0xff00) +
         (in_stack_00000008 & 0xff00) * 0x100 +
         in_stack_00000008 * 0x1000000 + (in_stack_00000008 >> 0x18)) &&
       (*(int *)(iVar1 + 0x1c) ==
        (in_stack_0000000c >> 8 & 0xff00) +
        in_stack_0000000c * 0x1000000 + (in_stack_0000000c >> 0x18) +
        (in_stack_0000000c & 0xff00) * 0x100)) {
      if (*(char *)(iVar1 + 0x16) == '\x02') {
        FUN_000105dc();
        return extraout_a0;
      }
      if (*(char *)(iVar1 + 0x16) == '\x04') {
        FUN_000105ee();
        return extraout_a0_00;
      }
    }
  }
  return 1;
}



undefined4 _LVL144(void)

{
  int unaff_s1;
  undefined4 extraout_a0;
  undefined4 extraout_a0_00;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  _LVL144();
  FUN_0001057c();
  if ((*(int *)(unaff_s1 + 0x20) ==
       (in_stack_00000008 >> 8 & 0xff00) +
       (in_stack_00000008 & 0xff00) * 0x100 +
       in_stack_00000008 * 0x1000000 + (in_stack_00000008 >> 0x18)) &&
     (*(int *)(unaff_s1 + 0x1c) ==
      (in_stack_0000000c >> 8 & 0xff00) +
      in_stack_0000000c * 0x1000000 + (in_stack_0000000c >> 0x18) +
      (in_stack_0000000c & 0xff00) * 0x100)) {
    if (*(char *)(unaff_s1 + 0x16) == '\x02') {
      FUN_000105dc();
      return extraout_a0;
    }
    if (*(char *)(unaff_s1 + 0x16) == '\x04') {
      FUN_000105ee();
      return extraout_a0_00;
    }
  }
  return 1;
}



undefined4 FUN_0001057c(void)

{
  int unaff_s1;
  undefined4 extraout_a0;
  undefined4 extraout_a0_00;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  FUN_0001057c();
  if ((*(int *)(unaff_s1 + 0x20) ==
       (in_stack_00000008 >> 8 & 0xff00) +
       (in_stack_00000008 & 0xff00) * 0x100 +
       in_stack_00000008 * 0x1000000 + (in_stack_00000008 >> 0x18)) &&
     (*(int *)(unaff_s1 + 0x1c) ==
      (in_stack_0000000c >> 8 & 0xff00) +
      in_stack_0000000c * 0x1000000 + (in_stack_0000000c >> 0x18) +
      (in_stack_0000000c & 0xff00) * 0x100)) {
    if (*(char *)(unaff_s1 + 0x16) == '\x02') {
      FUN_000105dc();
      return extraout_a0;
    }
    if (*(char *)(unaff_s1 + 0x16) == '\x04') {
      FUN_000105ee();
      return extraout_a0_00;
    }
  }
  return 1;
}



void FUN_000105dc(void)

{
  FUN_000105dc();
  return;
}



void FUN_000105ee(void)

{
  FUN_000105ee();
  return;
}



// DWARF DIE: 4f37

BOOLEAN IsAuthenticatorEnabled(cm_ConnectionInfo_t *connPtr)

{
  return 1;
}



// DWARF DIE: 430e

void InitStaKeyInfo(void *pConn,SecurityMode_t *secType,Cipher_t *pwCipher,UINT16 staRsnCap,
                   UINT8 akmType)

{
  int extraout_a0;
  
  _L0();
  FUN_00010626();
  FUN_00010638();
  *(undefined *)(extraout_a0 + 0x54) = 1;
  return;
}



void _L0(void)

{
  int extraout_a0;
  
  _L0();
  FUN_00010626();
  FUN_00010638();
  *(undefined *)(extraout_a0 + 0x54) = 1;
  return;
}



void FUN_00010626(void)

{
  int unaff_s0;
  
  FUN_00010626();
  FUN_00010638();
  *(undefined *)(unaff_s0 + 0x54) = 1;
  return;
}



void FUN_00010638(void)

{
  int unaff_s0;
  
  FUN_00010638();
  *(undefined *)(unaff_s0 + 0x54) = 1;
  return;
}



// DWARF DIE: 42cb

void RemoveAPKeyInfo(void *pConn)

{
  if (*(char *)((int)pConn + 3) == -1) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4226

void InitGroupKey(cm_ConnectionInfo_t *connPtr)

{
  UINT8 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  
  _L0();
  *(undefined4 *)(extraout_a0_00 + 0x114) = 0;
  *(undefined4 *)(extraout_a0_00 + 0x118) = 0;
  FUN_00010688();
  if (*(int *)(extraout_a0_00 + 0x14) != 0) {
    FUN_000106b6();
    *(int *)(extraout_a0_00 + 0x114) = extraout_a0_01 + 1;
    *(int *)(extraout_a0_00 + 0x118) = extraout_a0_01 + 1;
  }
  FUN_000106cc();
  connPtr->gtkHwKeyId = extraout_a0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s1;
  undefined extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  
  _L0();
  *(undefined4 *)(extraout_a0_00 + 0x114) = 0;
  *(undefined4 *)(extraout_a0_00 + 0x118) = 0;
  FUN_00010688();
  if (*(int *)(extraout_a0_00 + 0x14) != 0) {
    FUN_000106b6();
    *(int *)(extraout_a0_00 + 0x114) = extraout_a0_01 + 1;
    *(int *)(extraout_a0_00 + 0x118) = extraout_a0_01 + 1;
  }
  FUN_000106cc();
  *(undefined *)(unaff_s1 + 3) = extraout_a0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010688(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined extraout_a0;
  int extraout_a0_00;
  
  FUN_00010688();
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000106b6();
    *(int *)(unaff_s0 + 0x114) = extraout_a0_00 + 1;
    *(int *)(unaff_s0 + 0x118) = extraout_a0_00 + 1;
  }
  FUN_000106cc();
  *(undefined *)(unaff_s1 + 3) = extraout_a0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106b6(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined extraout_a0;
  int extraout_a0_00;
  
  FUN_000106b6();
  *(int *)(unaff_s0 + 0x114) = extraout_a0_00 + 1;
  *(int *)(unaff_s0 + 0x118) = extraout_a0_00 + 1;
  FUN_000106cc();
  *(undefined *)(unaff_s1 + 3) = extraout_a0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106cc(void)

{
  int unaff_s1;
  undefined extraout_a0;
  
  FUN_000106cc();
  *(undefined *)(unaff_s1 + 3) = extraout_a0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


