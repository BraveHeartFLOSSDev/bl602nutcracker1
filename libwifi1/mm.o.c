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
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct cfg_element_entry cfg_element_entry, *Pcfg_element_entry;

typedef enum CFG_ELEMENT_TYPE_OPS {
    CFG_ELEMENT_TYPE_OPS_DUMP_DEBUG=3,
    CFG_ELEMENT_TYPE_OPS_GET=1,
    CFG_ELEMENT_TYPE_OPS_RESET=2,
    CFG_ELEMENT_TYPE_OPS_SET=0,
    CFG_ELEMENT_TYPE_OPS_UNKNOWN=4
} CFG_ELEMENT_TYPE_OPS;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

struct cfg_element_entry { // DWARF DIE: ab3
    uint32_t task;
    uint16_t element;
    uint16_t type;
    char * name;
    void * val;
    int (* set)(struct cfg_element_entry *, void *, void *);
    int (* get)(struct cfg_element_entry *, void *, void *);
    int (* notify)(struct cfg_element_entry *, void *, void *, enum CFG_ELEMENT_TYPE_OPS);
};

typedef struct txdesc txdesc, *Ptxdesc;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef struct umacdesc umacdesc, *Pumacdesc;

typedef struct lmacdesc lmacdesc, *Plmacdesc;

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct tx_agg_desc tx_agg_desc, *Ptx_agg_desc;

typedef struct txl_buffer_tag txl_buffer_tag, *Ptxl_buffer_tag;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef char __int8_t;

typedef __int8_t int8_t;

typedef union anon_union.conflict347c_for_field_0 anon_union.conflict347c_for_field_0, *Panon_union.conflict347c_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1458_for_field_3 anon_union.conflict1458_for_field_3, *Panon_union.conflict1458_for_field_3;

typedef union anon_union.conflict147d_for_field_4 anon_union.conflict147d_for_field_4, *Panon_union.conflict147d_for_field_4;

typedef union anon_union.conflict14a2_for_field_5 anon_union.conflict14a2_for_field_5, *Panon_union.conflict14a2_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: 115a
    struct co_list_hdr * next;
};

struct mac_addr { // DWARF DIE: c27
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 2e8f
    uint32_t pbuf_addr;
    uint32_t packet_addr;
    uint16_t packet_len;
    undefined field_0xa;
    undefined field_0xb;
    uint32_t status_addr;
    struct mac_addr eth_dest_addr;
    struct mac_addr eth_src_addr;
    uint16_t ethertype;
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    uint8_t tid;
    uint8_t vif_idx;
    uint8_t staid;
    undefined field_0x2d;
    uint16_t flags;
    uint32_t pbuf_chained_ptr[4];
    uint32_t pbuf_chained_len[4];
};

struct tx_cfm_tag { // DWARF DIE: 18b5
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

union anon_union.conflict14a2_for_field_5 { // DWARF DIE: 14a2
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict1458_for_field_3 { // DWARF DIE: 1458
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflict147d_for_field_4 { // DWARF DIE: 147d
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_hd { // DWARF DIE: 14c7
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1458_for_field_3 field_3;
    union anon_union.conflict147d_for_field_4 field_4;
    union anon_union.conflict14a2_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1924
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct lmacdesc { // DWARF DIE: 2fc7
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct umacdesc { // DWARF DIE: 2f6b
    struct txl_buffer_control * buf_control;
    uint32_t buff_offset;
    uint16_t payl_len;
    uint8_t head_len;
    uint8_t hdr_len_802_2;
    uint8_t tail_len;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

struct txdesc { // DWARF DIE: 30e3
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 142d
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct dma_desc { // DWARF DIE: 1262
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_policy_tbl { // DWARF DIE: 13bc
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict347c_for_field_0 { // DWARF DIE: 347c
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 2758
    union anon_union.conflict347c_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct tx_pbd { // DWARF DIE: 1590
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_tag { // DWARF DIE: 3002
    uint32_t length;
    uint32_t lenheader;
    uint32_t lenpad;
    uint32_t flags;
    struct txl_buffer_tag * next;
    struct txdesc * txdesc;
    struct dma_desc dma_desc[1];
    struct dma_desc dma_desc_pat;
    struct tx_pbd tbd;
    struct tx_pbd tbd_body[8];
    uint8_t user_idx;
    undefined field_0xed;
    undefined field_0xee;
    undefined field_0xef;
    struct txl_buffer_control buffer_control;
    struct tx_pbd tkip_mic_icv_pbd;
    uint8_t tkip_mic_icv[12];
    uint32_t[0] payload;
};

struct tx_agg_desc { // DWARF DIE: 1955
    uint8_t reserved;
};

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

struct Cipher_t { // DWARF DIE: 3a9d
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct CommonMlmeData_t { // DWARF DIE: 5f44
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

struct Operation_t { // DWARF DIE: 602e
    UINT16 keyExchange:1;
    UINT16 authenticate:1;
    UINT16 reserved:14;
};

struct apRsnConfig_t { // DWARF DIE: 6079
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

struct BssConfig_t { // DWARF DIE: 617f
    UINT32 StaAgeOutTime;
    UINT32 PsStaAgeOutTime;
    struct apRsnConfig_t RsnConfig;
    struct CommonMlmeData_t comData;
};

struct mm_timer_tag { // DWARF DIE: 224a
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct KeyData_t { // DWARF DIE: 52cd
    UINT8 Key[16];
    UINT8 RxMICKey[8];
    UINT8 TxMICKey[8];
    UINT32 TxIV32;
    UINT16 TxIV16;
    UINT16 KeyIndex;
};

struct BssData_t { // DWARF DIE: 61cf
    BOOLEAN updatePassPhrase;
    struct mm_timer_tag apMicTimer;
    struct KeyData_t grpKeyData;
    UINT8 GNonce[32];
    UINT32 grpRekeyBcnCntConfigured;
    UINT32 grpRekeyBcnCntRemaining;
};

struct apInfo_t { // DWARF DIE: 626f
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

struct _txQingInfo_t { // DWARF DIE: 6004
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

struct SecurityMode_t { // DWARF DIE: 3b03
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

struct apKeyMgmtInfoStaRom_t { // DWARF DIE: 5e56
    UINT16 staRsnCap;
    struct SecurityMode_t staSecType;
    struct Cipher_t staUcstCipher;
    UINT8 staAkmType;
    enum keyMgmtState_e keyMgmtState;
    undefined field_0x7;
};

struct apKeyMgmtInfoSta_t { // DWARF DIE: 5ead
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

struct staData_t { // DWARF DIE: 623b
    txQingInfo_t pwrSaveInfo;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    struct apKeyMgmtInfoSta_t keyMgmtInfo;
};

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

struct ps_env_tag { // DWARF DIE: 438b
    _Bool ps_on;
    undefined field_0x1;
    ke_task_id_t taskid;
    uint32_t prevent_sleep;
    uint8_t cfm_cnt;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    struct mm_timer_tag uapsd_timer;
    _Bool uapsd_tmr_on;
    _Bool uapsd_on;
    undefined field_0x1e;
    undefined field_0x1f;
    uint32_t uapsd_timeout;
    uint8_t dpsm_state;
    uint8_t next_mode;
    undefined field_0x26;
    undefined field_0x27;
};

typedef struct key_MgtMaterial_t key_MgtMaterial_t, *Pkey_MgtMaterial_t;

typedef union anon_union.conflict5472_for_keyEncypt anon_union.conflict5472_for_keyEncypt, *Panon_union.conflict5472_for_keyEncypt;

typedef struct key_Type_TKIP_t key_Type_TKIP_t, *Pkey_Type_TKIP_t;

typedef struct key_Type_AES_t key_Type_AES_t, *Pkey_Type_AES_t;

typedef struct key_Type_WEP_t key_Type_WEP_t, *Pkey_Type_WEP_t;

typedef struct key_Type_WAPI_t key_Type_WAPI_t, *Pkey_Type_WAPI_t;

typedef struct key_Type_AES_CMAC_t key_Type_AES_CMAC_t, *Pkey_Type_AES_CMAC_t;

struct key_Type_AES_CMAC_t { // DWARF DIE: 5435
    UINT8 ipn[6];
    UINT8 reserved[2];
    UINT8 key[16];
};

struct key_Type_WAPI_t { // DWARF DIE: 53de
    UINT8 keyIndex;
    UINT8 isDefKey;
    UINT8 key[16];
    UINT8 mickey[16];
    UINT8 rxPN[16];
};

struct key_Type_WEP_t { // DWARF DIE: 536e
    UINT8 keyIndex;
    UINT8 isDefaultTx;
    UINT8 key[13];
};

struct key_Type_AES_t { // DWARF DIE: 53bb
    UINT8 key[16];
};

struct key_Type_TKIP_t { // DWARF DIE: 5331
    UINT8 key[16];
    UINT8 txMicKey[8];
    UINT8 rxMicKey[8];
};

union anon_union.conflict5472_for_keyEncypt { // DWARF DIE: 5472
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

struct key_MgtMaterial_t { // DWARF DIE: 54b8
    UINT16 keyType;
    UINT16 keyInfo;
    UINT16 keyLen;
    union anon_union.conflict5472_for_keyEncypt keyEncypt;
};

typedef union anon_union.conflict5472 anon_union.conflict5472, *Panon_union.conflict5472;

union anon_union.conflict5472 { // DWARF DIE: 5472
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

typedef struct anon_struct.conflict4531 anon_struct.conflict4531, *Panon_struct.conflict4531;

struct anon_struct.conflict4531 { // DWARF DIE: 4531
    uint8_t mac[6];
    uint8_t used;
};

typedef struct apm apm, *Papm;

typedef struct apm_start_req apm_start_req, *Papm_start_req;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 1180
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct apm_start_req { // DWARF DIE: 45d8
};

struct apm { // DWARF DIE: 4555
    struct apm_start_req * param;
    struct co_list bss_config;
    uint8_t aging_sta_idx;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    uint8_t * bcn_buf;
    _Bool apm_emb_enabled;
    uint8_t hidden_ssid;
    uint8_t assoc_sta_count;
    uint8_t max_sta_supported;
    struct anon_struct.conflict4531 aid_list[10];
    undefined field_0x5e;
    undefined field_0x5f;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list { // DWARF DIE: 32da
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

struct txl_cntrl_env_tag { // DWARF DIE: 3322
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct rd_env_tag rd_env_tag, *Prd_env_tag;

struct rd_env_tag { // DWARF DIE: 4343
    struct co_list event_free_list;
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

typedef union anon_union.conflict630f_for_specDat anon_union.conflict630f_for_specDat, *Panon_union.conflict630f_for_specDat;

typedef struct cipher_key_buf cipher_key_buf, *Pcipher_key_buf;

typedef struct cipher_key_buf cipher_key_buf_t;

typedef struct eapolHskData_t eapolHskData_t, *PeapolHskData_t;

typedef struct apSpecificData_t apSpecificData_t, *PapSpecificData_t;

typedef struct BufferDesc BufferDesc, *PBufferDesc;

typedef struct BufferDesc BufferDesc_t;

typedef struct ChanBandInfo_t ChanBandInfo_t, *PChanBandInfo_t;

typedef union anon_union.conflict4882_for_intf anon_union.conflict4882_for_intf, *Panon_union.conflict4882_for_intf;

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

struct AkmSuite_t { // DWARF DIE: 3c28
    UINT8 akmOui[3];
    AkmTypePacked_e akmType;
};

struct MIC_Error_t { // DWARF DIE: 56c5
    enum MIC_Fail_State_e status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    BOOLEAN MICCounterMeasureEnabled;
    UINT32 disableStaAsso;
};

struct SecurityParams_t { // DWARF DIE: 3c68
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
};

struct customMIB_RSNStats_t { // DWARF DIE: 5702
    UINT8 TKIPICVErrors;
    UINT8 TKIPLocalMICFailures;
    UINT8 TKIPCounterMeasuresInvoked;
};

struct BandConfig_t { // DWARF DIE: 4fbc
    enum ChanBand_e chanBand:2;
    enum ChanWidth_e chanWidth:2;
    enum Chan2Offset_e chan2Offset:2;
    enum ScanMode_e scanMode:2;
};

struct ChanBandInfo_t { // DWARF DIE: 5018
    struct BandConfig_t bandConfig;
    UINT8 chanNum;
};

struct apSpecificData_t { // DWARF DIE: 62b3
    struct apInfo_t * apInfo;
    BufferDesc_t * apInfoBuffDesc;
    struct ChanBandInfo_t chanBandInfo;
    undefined field_0xa;
    undefined field_0xb;
    struct staData_t staData;
};

struct keyMgmtInfoSta_t { // DWARF DIE: 573f
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

struct IEEEtypes_RSNCapability_t { // DWARF DIE: 4e1c
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

struct RSNConfig_t { // DWARF DIE: 55d7
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

struct IEEEtypes_SsIdElement_t { // DWARF DIE: 4dca
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    IEEEtypes_SsId_t SsId;
};

struct supplicantData { // DWARF DIE: 5b9a
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

struct eapolHskData_t { // DWARF DIE: 5502
    UINT8 ANonce[32];
    struct KeyData_t pwsKeyData;
};

union ckd { // DWARF DIE: 5532
    struct eapolHskData_t hskData;
};

struct cipher_key_t { // DWARF DIE: 554c
    union ckd ckd;
};

struct cipher_key_buf { // DWARF DIE: 5573
    struct cipher_key_t cipher_key;
};

union anon_union.conflict630f_for_specDat { // DWARF DIE: 630f
    struct apSpecificData_t apData;
};

struct cm_ConnectionInfo { // DWARF DIE: 48a4
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
    union anon_union.conflict630f_for_specDat specDat;
    cipher_key_buf_t TxRxCipherKeyBuf;
};

union anon_union.conflict4882_for_intf { // DWARF DIE: 4882
    uint32 Interface;
};

struct BufferDesc { // DWARF DIE: 4961
    union anon_union.conflict4882_for_intf intf;
    uint16 DataLen;
    undefined field_0x6;
    undefined field_0x7;
    void * Buffer;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 2536
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

struct bam_env_tag { // DWARF DIE: 25a9
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

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 35ee
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 3572
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

struct txl_frame_desc_tag { // DWARF DIE: 359a
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct chan_env_tag chan_env_tag, *Pchan_env_tag;

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct chan_env_tag { // DWARF DIE: 2d9f
    struct co_list list_free_ctxt;
    struct co_list list_sched_ctxt;
    struct co_list list_tbtt;
    struct co_list list_tbtt_delay;
    struct chan_ctxt_tag * current_channel;
    struct chan_ctxt_tag * chan_switch;
    struct mm_timer_tag tmr_tbtt_switch;
    struct mm_timer_tag tmr_cde;
    struct mm_timer_tag tmr_ctxt_op;
    struct mm_timer_tag tmr_conn_less;
    uint32_t cde_dur_us;
    uint32_t cde_time;
    uint8_t status;
    uint8_t cfm_cnt;
    uint8_t nb_sched_ctxt;
    uint8_t pm;
};

struct mm_chan_ctxt_add_req { // DWARF DIE: 1f9f
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 2d0f
    struct co_list_hdr list_hdr;
    struct mm_chan_ctxt_add_req channel;
    ke_task_id_t taskid;
    uint16_t nb_slots;
    uint16_t nb_rem_slots;
    uint16_t nb_res_slots;
    uint8_t status;
    uint8_t idx;
    uint8_t nb_linked_vif;
    uint8_t vif_index;
    undefined field_0x1a;
    undefined field_0x1b;
};

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

struct chan_tbtt_tag { // DWARF DIE: 2cc0
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 320c
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 3819
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 904
};

typedef struct cm_ConnectionInfo cm_ConnectionInfo_t;

typedef union anon_union.conflict630f anon_union.conflict630f, *Panon_union.conflict630f;

union anon_union.conflict630f { // DWARF DIE: 630f
    struct apSpecificData_t apData;
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

struct scan_chan_tag { // DWARF DIE: f30
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct me_chan_config_req { // DWARF DIE: 397d
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: e3f
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

struct me_env_tag { // DWARF DIE: 3cd5
    uint32_t active_vifs;
    uint32_t ps_disable_vifs;
    ke_task_id_t requester_id;
    undefined field_0xa;
    undefined field_0xb;
    struct mac_htcapability ht_cap;
    uint16_t tx_lft;
    _Bool ht_supported;
    undefined field_0x2f;
    struct me_chan_config_req chan;
    uint8_t stbc_nss;
    uint8_t phy_bw_max;
    _Bool ps_on;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
};

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

struct mobility_domain { // DWARF DIE: 3d69
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
};

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct mac_edca_param_set mac_edca_param_set, *Pmac_edca_param_set;

struct mac_edca_param_set { // DWARF DIE: ef7
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset { // DWARF DIE: cac
    uint8_t length;
    uint8_t array[12];
};

struct mac_ssid { // DWARF DIE: c57
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct mac_bss_info { // DWARF DIE: 3d91
    struct mac_htcapability ht_cap;
    struct mac_addr bssid;
    struct mac_ssid ssid;
    uint16_t bsstype;
    undefined field_0x4a;
    undefined field_0x4b;
    struct scan_chan_tag * chan;
    uint16_t center_freq1;
    uint16_t center_freq2;
    uint16_t beacon_period;
    uint16_t cap_info;
    struct mac_rateset rate_set;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
    struct mac_edca_param_set edca_param;
    int8_t rssi;
    int8_t ppm_rel;
    int8_t ppm_abs;
    uint8_t high_11b_rate;
    uint16_t prot_status;
    uint8_t bw;
    uint8_t phy_bw;
    uint8_t power_constraint;
    undefined field_0x85;
    undefined field_0x86;
    undefined field_0x87;
    uint32_t valid_flags;
    struct mobility_domain mde;
    _Bool is_supplicant_enabled;
    struct SecurityMode_t wpa_wpa2_wep;
    struct Cipher_t wpa_mcstCipher;
    struct Cipher_t wpa_ucstCipher;
    struct Cipher_t rsn_mcstCipher;
    struct Cipher_t rsn_ucstCipher;
    _Bool is_pmf_required;
    _Bool is_wpa2_prefered;
    uint8_t rsn_wpa_ie[32];
    uint8_t rsn_wpa_ie_len;
    uint16_t beacon_interval;
    uint16_t aid_bitmap;
    uint16_t max_listen_interval;
    uint8_t sec_type;
    undefined field_0xc1;
    undefined field_0xc2;
    undefined field_0xc3;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

typedef uint16_t ke_msg_id_t;

struct ke_msg_handler { // DWARF DIE: 1b63
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1b8f
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mac_sec_key mac_sec_key, *Pmac_sec_key;

struct mac_sec_key { // DWARF DIE: dff
    uint8_t length;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t array[8];
};

typedef union anon_union.conflictd54 anon_union.conflictd54, *Panon_union.conflictd54;

typedef struct anon_struct.conflictcf4 anon_struct.conflictcf4, *Panon_struct.conflictcf4;

typedef struct anon_struct.conflictd2b anon_struct.conflictd2b, *Panon_struct.conflictd2b;

struct anon_struct.conflictcf4 { // DWARF DIE: cf4
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictd2b { // DWARF DIE: d2b
    uint32_t key[4];
};

union anon_union.conflictd54 { // DWARF DIE: d54
    struct anon_struct.conflictcf4 mic;
    struct anon_struct.conflictd2b mfp;
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictd54_for_u anon_union.conflictd54_for_u, *Panon_union.conflictd54_for_u;

union anon_union.conflictd54_for_u { // DWARF DIE: d54
    struct anon_struct.conflictcf4 mic;
    struct anon_struct.conflictd2b mfp;
};

struct key_info_tag { // DWARF DIE: d79
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictd54_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef enum anon_enum_8.conflictbaf {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_MAX_TYPES=4,
    AC_VI=2,
    AC_VO=3,
    BROADCAST_STA_IDX_MAX=11,
    BROADCAST_STA_IDX_MIN=10,
    CO_BAD_PARAM=4,
    CO_BUSY=8,
    CO_EMPTY=2,
    CO_FAIL=1,
    CO_FULL=3,
    CO_NOT_FOUND=5,
    CO_NO_ELT_IN_USE=7,
    CO_NO_MORE_ELT_AVAILABLE=6,
    CO_OK=0,
    CO_OP_IN_PROGRESS=9,
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
    HW_ACTIVE=3,
    HW_DOZE=2,
    HW_IDLE=0,
    HW_RESERVED=1,
    INVALID_STA_IDX=-1,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_DATA_RX=1,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_MAX=4,
    KE_EVT_DUMP_STATISTIC=26,
    KE_EVT_GP_DMA_DL=25,
    KE_EVT_GP_DMA_UL=3,
    KE_EVT_HW_IDLE=8,
    KE_EVT_IPC_EMB_MSG=6,
    KE_EVT_IPC_EMB_TXDESC_AC0=24,
    KE_EVT_IPC_EMB_TXDESC_AC1=23,
    KE_EVT_IPC_EMB_TXDESC_AC2=22,
    KE_EVT_IPC_EMB_TXDESC_AC3=21,
    KE_EVT_IPC_EMB_TXDESC_BCN=20,
    KE_EVT_IRQ_UP_BH=1,
    KE_EVT_IRQ_USR=2,
    KE_EVT_KE_MESSAGE=7,
    KE_EVT_KE_TIMER=5,
    KE_EVT_MAX=27,
    KE_EVT_MM_TIMER=4,
    KE_EVT_PRIMARY_TBTT=9,
    KE_EVT_RESET=0,
    KE_EVT_RXREADY=13,
    KE_EVT_RXUPLOADED=11,
    KE_EVT_RXUREADY=12,
    KE_EVT_SECONDARY_TBTT=10,
    KE_EVT_TXCFM_AC0=19,
    KE_EVT_TXCFM_AC1=18,
    KE_EVT_TXCFM_AC2=17,
    KE_EVT_TXCFM_AC3=16,
    KE_EVT_TXCFM_BCN=15,
    KE_EVT_TXFRAME_CFM=14,
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
    PS_MODE_OFF=0,
    PS_MODE_ON=1,
    PS_MODE_ON_DYN=2,
    SCANU_IDLE=0,
    SCANU_SCANNING=1,
    SCANU_STATE_MAX=2,
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
    VIF_AP=2,
    VIF_IBSS=1,
    VIF_MESH_POINT=3,
    VIF_STA=0,
    VIF_UNKNOWN=4,
    WMM_AC_BE=0,
    WMM_AC_BK=1,
    WMM_AC_VI=2,
    WMM_AC_VO=3
} anon_enum_8.conflictbaf;

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: ea2
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: f78
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

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 2b71
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

typedef enum task_mm_cfg {
    TASK_MM_CFG_KEEP_ALIVE_PACKET_COUNTER=2,
    TASK_MM_CFG_KEEP_ALIVE_STATUS_ENABLED=0,
    TASK_MM_CFG_KEEP_ALIVE_TIME_LAST_RECEIVED=1
} task_mm_cfg;

typedef uint wint_t;

typedef long __int32_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef longlong __int64_t;

typedef __int64_t int64_t;

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 2423
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 23f8
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 23db
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 22e0
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

struct rxu_cntrl_env_tag { // DWARF DIE: 245c
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

typedef struct bcn_frame bcn_frame, *Pbcn_frame;

typedef struct mac_hdr mac_hdr, *Pmac_hdr;

struct mac_hdr { // DWARF DIE: 105e
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
};

struct bcn_frame { // DWARF DIE: 10c1
    struct mac_hdr h;
    uint64_t tsf;
    uint16_t bcnint;
    uint16_t capa;
    uint8_t[0] variable;
};

typedef struct mm_bcn_env_tag mm_bcn_env_tag, *Pmm_bcn_env_tag;

typedef struct mm_bcn_change_req mm_bcn_change_req, *Pmm_bcn_change_req;

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 2196
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

struct mm_bcn_env_tag { // DWARF DIE: 2c45
    struct mm_bcn_change_req * param;
    int tx_cfm;
    _Bool tx_pending;
    _Bool update_ongoing;
    _Bool update_pending;
    undefined field_0xb;
    struct hal_dma_desc_tag dma;
    struct co_list tim_list;
};

struct mm_bcn_change_req { // DWARF DIE: 2002
    uint32_t bcn_ptr;
    uint16_t bcn_len;
    uint16_t tim_oft;
    uint8_t tim_len;
    uint8_t inst_nbr;
    uint8_t csa_oft[2];
    uint8_t[0] bcn_buf;
};

typedef union anon_union.conflict5c12 anon_union.conflict5c12, *Panon_union.conflict5c12;

union anon_union.conflict5c12 { // DWARF DIE: 5c12
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

typedef struct pmkElement_t pmkElement_t, *PpmkElement_t;

typedef union anon_union.conflict5c12_for_key anon_union.conflict5c12_for_key, *Panon_union.conflict5c12_for_key;

typedef char SINT8;

union anon_union.conflict5c12_for_key { // DWARF DIE: 5c12
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

struct pmkElement_t { // DWARF DIE: 5c44
    union anon_union.conflict5c12_for_key key;
    UINT8 PMK[32];
    UINT8 length;
    UINT8 psk_length;
    SINT8 replacementRank;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictf5_for___value anon_union.conflictf5_for___value, *Panon_union.conflictf5_for___value;

union anon_union.conflictf5_for___value { // DWARF DIE: f5
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 127
    int __count;
    union anon_union.conflictf5_for___value __value;
};

typedef union anon_union.conflictf5 anon_union.conflictf5, *Panon_union.conflictf5;

union anon_union.conflictf5 { // DWARF DIE: f5
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 133c
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 12b6
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 228b
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 16f0
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

struct phy_channel_info { // DWARF DIE: 1314
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 1785
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 15e5
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

struct rx_payloaddesc { // DWARF DIE: 1858
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 17e8
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct sm_connect_req sm_connect_req, *Psm_connect_req;

struct sm_connect_req { // DWARF DIE: 466d
    struct mac_ssid ssid;
    struct mac_addr bssid;
    struct scan_chan_tag chan;
    undefined field_0x2e;
    undefined field_0x2f;
    uint32_t flags;
    uint16_t ctrl_port_ethertype;
    uint16_t ie_len;
    uint16_t listen_interval;
    _Bool dont_wait_bcmc;
    uint8_t auth_type;
    uint8_t uapsd_queues;
    uint8_t vif_idx;
    undefined field_0x3e;
    undefined field_0x3f;
    uint32_t ie_buf[64];
    _Bool is_supplicant_enabled;
    uint8_t phrase[64];
    uint8_t phrase_pmk[64];
    undefined field_0x1c1;
    undefined field_0x1c2;
    undefined field_0x1c3;
};

typedef struct sm_connect_ind sm_connect_ind, *Psm_connect_ind;

struct sm_connect_ind { // DWARF DIE: 4748
    uint16_t status_code;
    struct mac_addr bssid;
    _Bool roamed;
    uint8_t vif_idx;
    uint8_t ap_idx;
    uint8_t ch_idx;
    _Bool qos;
    uint8_t acm;
    uint16_t assoc_req_ie_len;
    uint16_t assoc_rsp_ie_len;
    undefined field_0x12;
    undefined field_0x13;
    uint32_t assoc_ie_buf[200];
    uint16_t aid;
    uint8_t band;
    undefined field_0x337;
    uint16_t center_freq;
    uint8_t width;
    undefined field_0x33b;
    uint32_t center_freq1;
    uint32_t center_freq2;
    uint32_t ac_param[4];
};

typedef enum wlan_security_type {
    WLAN_SECURITY_EAP_TLS=6,
    WLAN_SECURITY_NONE=0,
    WLAN_SECURITY_WEP_OPEN=1,
    WLAN_SECURITY_WEP_SHARED=2,
    WLAN_SECURITY_WILDCARD=7,
    WLAN_SECURITY_WPA=3,
    WLAN_SECURITY_WPA2=4,
    WLAN_SECURITY_WPA_WPA2_MIXED=5
} wlan_security_type;

typedef long SINT32;

typedef struct mm_key_add_req mm_key_add_req, *Pmm_key_add_req;

struct mm_key_add_req { // DWARF DIE: 1f0c
    uint8_t key_idx;
    uint8_t sta_idx;
    undefined field_0x2;
    undefined field_0x3;
    struct mac_sec_key key;
    uint8_t cipher_suite;
    uint8_t inst_nbr;
    uint8_t spp;
    _Bool pairwise;
};

typedef enum mm_msg_tag {
    MM_ADD_IF_CFM=7,
    MM_ADD_IF_REQ=6,
    MM_BA_ADD_CFM=41,
    MM_BA_ADD_REQ=40,
    MM_BA_DEL_CFM=43,
    MM_BA_DEL_REQ=42,
    MM_BCN_CHANGE_CFM=64,
    MM_BCN_CHANGE_REQ=63,
    MM_BFMER_ENABLE_REQ=80,
    MM_CFG_RSSI_REQ=86,
    MM_CHANNEL_PRE_SWITCH_IND=69,
    MM_CHANNEL_SURVEY_IND=79,
    MM_CHANNEL_SWITCH_IND=68,
    MM_CHAN_CTXT_ADD_CFM=52,
    MM_CHAN_CTXT_ADD_REQ=51,
    MM_CHAN_CTXT_DEL_CFM=54,
    MM_CHAN_CTXT_DEL_REQ=53,
    MM_CHAN_CTXT_LINK_CFM=56,
    MM_CHAN_CTXT_LINK_REQ=55,
    MM_CHAN_CTXT_SCHED_CFM=62,
    MM_CHAN_CTXT_SCHED_REQ=61,
    MM_CHAN_CTXT_UNLINK_CFM=58,
    MM_CHAN_CTXT_UNLINK_REQ=57,
    MM_CHAN_CTXT_UPDATE_CFM=60,
    MM_CHAN_CTXT_UPDATE_REQ=59,
    MM_CONNECTION_LOSS_IND=67,
    MM_CSA_COUNTER_IND=78,
    MM_CSA_FINISH_IND=88,
    MM_CSA_TRAFFIC_IND=89,
    MM_DENOISE_REQ=48,
    MM_FORCE_IDLE_REQ=96,
    MM_KEY_ADD_CFM=37,
    MM_KEY_ADD_REQ=36,
    MM_KEY_DEL_CFM=39,
    MM_KEY_DEL_REQ=38,
    MM_MAX=99,
    MM_MONITOR_CFM=93,
    MM_MONITOR_CHANNEL_CFM=95,
    MM_MONITOR_CHANNEL_REQ=94,
    MM_MONITOR_REQ=92,
    MM_MU_GROUP_UPDATE_CFM=91,
    MM_MU_GROUP_UPDATE_REQ=90,
    MM_P2P_NOA_UPD_IND=85,
    MM_P2P_VIF_PS_CHANGE_IND=77,
    MM_PRIMARY_TBTT_IND=44,
    MM_PS_CHANGE_IND=73,
    MM_REMAIN_ON_CHANNEL_CFM=71,
    MM_REMAIN_ON_CHANNEL_EXP_IND=72,
    MM_REMAIN_ON_CHANNEL_REQ=70,
    MM_REMOVE_IF_CFM=9,
    MM_REMOVE_IF_REQ=8,
    MM_RESET_CFM=1,
    MM_RESET_REQ=0,
    MM_RSSI_STATUS_IND=87,
    MM_SCAN_CHANNEL_END_IND=98,
    MM_SCAN_CHANNEL_START_IND=97,
    MM_SECONDARY_TBTT_IND=45,
    MM_SET_BASIC_RATES_CFM=23,
    MM_SET_BASIC_RATES_REQ=22,
    MM_SET_BEACON_INT_CFM=21,
    MM_SET_BEACON_INT_REQ=20,
    MM_SET_BSSID_CFM=25,
    MM_SET_BSSID_REQ=24,
    MM_SET_CHANNEL_CFM=17,
    MM_SET_CHANNEL_REQ=16,
    MM_SET_DTIM_CFM=19,
    MM_SET_DTIM_REQ=18,
    MM_SET_EDCA_CFM=27,
    MM_SET_EDCA_REQ=26,
    MM_SET_FILTER_CFM=15,
    MM_SET_FILTER_REQ=14,
    MM_SET_IDLE_CFM=35,
    MM_SET_IDLE_REQ=34,
    MM_SET_MODE_CFM=29,
    MM_SET_MODE_REQ=28,
    MM_SET_P2P_NOA_CFM=83,
    MM_SET_P2P_NOA_REQ=81,
    MM_SET_P2P_OPPPS_CFM=84,
    MM_SET_P2P_OPPPS_REQ=82,
    MM_SET_POWER_CFM=47,
    MM_SET_POWER_REQ=46,
    MM_SET_PS_MODE_CFM=50,
    MM_SET_PS_MODE_REQ=49,
    MM_SET_PS_OPTIONS_CFM=76,
    MM_SET_PS_OPTIONS_REQ=75,
    MM_SET_SLOTTIME_CFM=33,
    MM_SET_SLOTTIME_REQ=32,
    MM_SET_VIF_STATE_CFM=31,
    MM_SET_VIF_STATE_REQ=30,
    MM_START_CFM=3,
    MM_START_REQ=2,
    MM_STA_ADD_CFM=11,
    MM_STA_ADD_REQ=10,
    MM_STA_DEL_CFM=13,
    MM_STA_DEL_REQ=12,
    MM_TIM_UPDATE_CFM=66,
    MM_TIM_UPDATE_REQ=65,
    MM_TRAFFIC_REQ_IND=74,
    MM_VERSION_CFM=5,
    MM_VERSION_REQ=4
} mm_msg_tag;

typedef struct mm_connection_loss_ind mm_connection_loss_ind, *Pmm_connection_loss_ind;

struct mm_connection_loss_ind { // DWARF DIE: 1f82
    uint8_t inst_nbr;
};

typedef struct mm_ps_change_ind mm_ps_change_ind, *Pmm_ps_change_ind;

struct mm_ps_change_ind { // DWARF DIE: 2078
    uint8_t sta_idx;
    uint8_t ps_state;
};

typedef struct mm_sta_add_req mm_sta_add_req, *Pmm_sta_add_req;

struct mm_sta_add_req { // DWARF DIE: 1e5e
    uint32_t ampdu_size_max_vht;
    uint32_t paid_gid;
    uint16_t ampdu_size_max_ht;
    struct mac_addr mac_addr;
    uint8_t ampdu_spacing_min;
    uint8_t inst_nbr;
    _Bool tdls_sta;
    int8_t rssi;
    uint32_t tsflo;
    uint32_t tsfhi;
    uint8_t data_rate;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
};

typedef struct mm_csa_traffic_ind mm_csa_traffic_ind, *Pmm_csa_traffic_ind;

struct mm_csa_traffic_ind { // DWARF DIE: 20dc
    uint8_t vif_index;
    _Bool enable;
};

typedef struct mm_rssi_status_ind mm_rssi_status_ind, *Pmm_rssi_status_ind;

struct mm_rssi_status_ind { // DWARF DIE: 20a3
    uint8_t vif_index;
    _Bool rssi_status;
    int8_t rssi;
};

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 1384
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct rxl_cntrl_env_tag rxl_cntrl_env_tag, *Prxl_cntrl_env_tag;

struct rxl_cntrl_env_tag { // DWARF DIE: 4427
    struct co_list ready;
    struct rx_dmadesc * first;
    struct rx_dmadesc * last;
    struct rx_dmadesc * free;
    uint32_t packet_stack_cnt;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 31bd
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef union anon_union.conflict4882 anon_union.conflict4882, *Panon_union.conflict4882;

union anon_union.conflict4882 { // DWARF DIE: 4882
    uint32 Interface;
    struct cm_ConnectionInfo * connPtr;
};

typedef struct Hdr_8021x_t Hdr_8021x_t, *PHdr_8021x_t;

typedef enum IEEEtypes_8021x_PacketType_e {
    IEEE_8021X_PACKET_TYPE_ASF_ALERT=4,
    IEEE_8021X_PACKET_TYPE_EAPOL_KEY=3,
    IEEE_8021X_PACKET_TYPE_EAPOL_LOGOFF=2,
    IEEE_8021X_PACKET_TYPE_EAPOL_START=1,
    IEEE_8021X_PACKET_TYPE_EAP_PACKET=0
} IEEEtypes_8021x_PacketType_e;

struct Hdr_8021x_t { // DWARF DIE: 50d8
    UINT8 protocol_ver;
    enum IEEEtypes_8021x_PacketType_e pckt_type;
    UINT16 pckt_body_len;
};

typedef struct EAPOL_KeyMsg_t EAPOL_KeyMsg_t, *PEAPOL_KeyMsg_t;

typedef struct key_info_t key_info_t, *Pkey_info_t;

struct key_info_t { // DWARF DIE: 5115
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

struct EAPOL_KeyMsg_t { // DWARF DIE: 51db
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

struct ether_hdr_t { // DWARF DIE: 5052
    IEEEtypes_MacAddr_t da;
    IEEEtypes_MacAddr_t sa;
    UINT16 type;
};

struct EAPOL_KeyMsg_Tx_t { // DWARF DIE: 529d
    struct ether_hdr_t ethHdr;
    struct EAPOL_KeyMsg_t keyMsg;
};

typedef uint16_t ke_state_t;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict4166_for_u anon_union.conflict4166_for_u, *Panon_union.conflict4166_for_u;

typedef struct anon_struct.conflict3f9e anon_struct.conflict3f9e, *Panon_struct.conflict3f9e;

typedef struct anon_struct.conflict406b anon_struct.conflict406b, *Panon_struct.conflict406b;

struct anon_struct.conflict406b { // DWARF DIE: 406b
    uint32_t dummy;
    struct txl_frame_desc_tag bcn_desc;
    uint16_t bcn_len;
    uint16_t tim_len;
    uint16_t tim_bitmap_set;
    uint16_t bcn_int;
    uint8_t bcn_tbtt_ratio;
    uint8_t bcn_tbtt_cnt;
    _Bool bcn_configured;
    uint8_t dtim_count;
    uint8_t tim_n1;
    uint8_t tim_n2;
    uint8_t bc_mc_status;
    uint8_t csa_count;
    uint8_t csa_oft[2];
    uint8_t ps_sta_cnt;
    undefined field_0x2ef;
    uint16_t ctrl_port_ethertype;
    undefined field_0x2f2;
    undefined field_0x2f3;
};

struct anon_struct.conflict3f9e { // DWARF DIE: 3f9e
    uint16_t listen_interval;
    _Bool dont_wait_bcmc;
    uint8_t ps_retry;
    uint8_t ap_id;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    uint32_t uapsd_last_rxtx;
    uint8_t uapsd_queues;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    uint32_t mon_last_tx;
    uint32_t mon_last_crc;
    uint8_t beacon_loss_cnt;
    int8_t rssi;
    int8_t rssi_thold;
    uint8_t rssi_hyst;
    _Bool rssi_status;
    uint8_t csa_count;
    _Bool csa_occured;
    undefined field_0x1f;
};

union anon_union.conflict4166_for_u { // DWARF DIE: 4166
    struct anon_struct.conflict3f9e sta;
    struct anon_struct.conflict406b ap;
};

struct vif_info_tag { // DWARF DIE: 4189
    struct co_list_hdr list_hdr;
    uint32_t prevent_sleep;
    uint32_t txq_params[4];
    struct mm_timer_tag tbtt_timer;
    struct mm_timer_tag tmr_bcn_to;
    struct mac_addr bssid;
    undefined field_0x3e;
    undefined field_0x3f;
    struct chan_ctxt_tag * chan_ctxt;
    struct chan_tbtt_tag tbtt_switch;
    struct mac_addr mac_addr;
    uint8_t type;
    uint8_t index;
    _Bool active;
    int8_t tx_power;
    int8_t user_tx_power;
    undefined field_0x5b;
    union anon_union.conflict4166_for_u u;
    struct co_list sta_list;
    struct mac_bss_info bss_info;
    undefined field_0x41c;
    undefined field_0x41d;
    undefined field_0x41e;
    undefined field_0x41f;
    struct key_info_tag key_info[4];
    struct key_info_tag * default_key;
    uint32_t flags;
    struct mm_chan_ctxt_add_req csa_channel;
    undefined field_0x5d2;
    undefined field_0x5d3;
    undefined field_0x5d4;
    undefined field_0x5d5;
    undefined field_0x5d6;
    undefined field_0x5d7;
};

typedef union anon_union.conflict4166 anon_union.conflict4166, *Panon_union.conflict4166;

union anon_union.conflict4166 { // DWARF DIE: 4166
    struct anon_struct.conflict3f9e sta;
    struct anon_struct.conflict406b ap;
};

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag { // DWARF DIE: 42c4
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 21dd
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef enum CFG_ELEMENT_TYPE {
    CFG_ELEMENT_TYPE_BOOLEAN=1,
    CFG_ELEMENT_TYPE_SINT16=4,
    CFG_ELEMENT_TYPE_SINT32=6,
    CFG_ELEMENT_TYPE_SINT8=2,
    CFG_ELEMENT_TYPE_STRING=8,
    CFG_ELEMENT_TYPE_UINT16=5,
    CFG_ELEMENT_TYPE_UINT32=7,
    CFG_ELEMENT_TYPE_UINT8=3,
    CFG_ELEMENT_TYPE_UNKNOWN=0
} CFG_ELEMENT_TYPE;

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 28f2
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

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef struct rc_rate_stats rc_rate_stats, *Prc_rate_stats;

typedef struct step step, *Pstep;

typedef union anon_union.conflict3938_for_rate_map anon_union.conflict3938_for_rate_map, *Panon_union.conflict3938_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 389b
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step { // DWARF DIE: 3911
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

union anon_union.conflict3938_for_rate_map { // DWARF DIE: 3938
    uint8_t ht[4];
};

struct rc_sta_stats { // DWARF DIE: 278c
    uint32_t last_rc_time;
    struct rc_rate_stats rate_stats[10];
    struct step retry[4];
    struct step max_tp_2_trial;
    uint16_t ampdu_len;
    uint16_t ampdu_packets;
    uint32_t avg_ampdu_len;
    uint8_t sample_wait;
    uint8_t sample_slow;
    uint8_t trial_status;
    uint8_t info;
    uint8_t sw_retry_step;
    uint8_t format_mod;
    union anon_union.conflict3938_for_rate_map rate_map;
    uint16_t rate_map_l;
    uint8_t mcs_max;
    uint8_t r_idx_min;
    uint8_t r_idx_max;
    uint8_t bw_max;
    uint8_t no_ss;
    uint8_t short_gi;
    uint8_t p_type;
    undefined field_0xbf;
    uint16_t no_samples;
    uint16_t max_amsdu_len;
    uint16_t curr_amsdu_len;
    uint16_t fixed_rate_cfg;
};

struct sta_pol_tbl_cntl { // DWARF DIE: 2709
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 26ce
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 2941
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

struct sta_info_env_tag { // DWARF DIE: 2b2a
    struct co_list free_sta_list;
};

typedef struct td_env_tag td_env_tag, *Ptd_env_tag;

struct td_env_tag { // DWARF DIE: 4482
    struct mm_timer_tag td_timer;
    uint32_t pck_cnt_tx;
    uint32_t pck_cnt_rx;
    uint32_t pck_cnt_tx_ps;
    uint32_t pck_cnt_rx_ps;
    uint8_t vif_index;
    uint8_t status;
    _Bool is_on;
    _Bool has_active_chan;
};

typedef union anon_union.conflict3938 anon_union.conflict3938, *Panon_union.conflict3938;

union anon_union.conflict3938 { // DWARF DIE: 3938
    uint8_t ht[4];
};

typedef struct sm_env_tag sm_env_tag, *Psm_env_tag;

struct sm_env_tag { // DWARF DIE: 4604
    struct sm_connect_req * connect_param;
    struct sm_connect_ind * connect_ind;
    struct co_list bss_config;
    _Bool join_passive;
    _Bool ft_over_ds;
    undefined field_0x12;
    undefined field_0x13;
    int exist_ssid_idx;
    struct mac_addr ft_old_bssid;
    undefined field_0x1e;
    undefined field_0x1f;
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 37bd
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 3778
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 33cb
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 33a3
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef union anon_union.conflict347c anon_union.conflict347c, *Panon_union.conflict347c;

union anon_union.conflict347c { // DWARF DIE: 347c
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 33f3
    uint32_t used_area;
    uint32_t free;
    uint32_t free_size;
    uint32_t last;
    uint32_t next_needed;
    uint32_t buf_size;
    uint32_t * pool;
    struct txl_buffer_hw_desc_tag * desc;
    uint8_t count;
    undefined field_0x21;
    undefined field_0x22;
    undefined field_0x23;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag { // DWARF DIE: 349e
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict147d anon_union.conflict147d, *Panon_union.conflict147d;

union anon_union.conflict147d { // DWARF DIE: 147d
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict14a2 anon_union.conflict14a2, *Panon_union.conflict14a2;

union anon_union.conflict14a2 { // DWARF DIE: 14a2
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1458 anon_union.conflict1458, *Panon_union.conflict1458;

union anon_union.conflict1458 { // DWARF DIE: 1458
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
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

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8cf_for__new anon_union.conflict8cf_for__new, *Panon_union.conflict8cf_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict743 anon_struct.conflict743, *Panon_struct.conflict743;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 17d
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 6fa
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 6b5
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 325
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 353
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

struct __tm { // DWARF DIE: 1ed
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

struct anon_struct.conflict743 { // DWARF DIE: 743
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

union anon_union.conflict8cf_for__new { // DWARF DIE: 8cf
    struct anon_struct.conflict743 _reent;
    struct anon_struct.conflict743 _unused;
};

struct _on_exit_args { // DWARF DIE: 270
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2c5
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4bf
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
    union anon_union.conflict8cf_for__new _new;
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

typedef union anon_union.conflict8cf anon_union.conflict8cf, *Panon_union.conflict8cf;

union anon_union.conflict8cf { // DWARF DIE: 8cf
    struct anon_struct.conflict743 _reent;
    struct anon_struct.conflict743 _unused;
    undefined1 field2[240]; // Automatically generated padding to match DWARF declared size
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 873f

void mm_rx_filter_set(void)

{
  _DAT_44b00060 = _DAT_00000004 | uRam00000000;
  return;
}



// DWARF DIE: 8ea9

int element_notify_status_enabled
              (cfg_element_entry *entry,void *arg1,void *arg2,CFG_ELEMENT_TYPE_OPS ops)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 8b83

void blmac_ap_setf(uint8_t ap)

{
  undefined3 in_register_00002029;
  
  _DAT_44b0004c = CONCAT31(in_register_00002029,ap) << 1 | _DAT_44b0004c & 0xfffffffd;
  return;
}



// DWARF DIE: 8edb

uchar ascii_to_hex(char asccode)

{
  byte bVar1;
  
  bVar1 = asccode - 0x30;
  if (9 < bVar1) {
    if ((byte)(asccode + 0x9fU) < 6) {
      bVar1 = asccode + 0xa9;
    }
    else {
      bVar1 = 0;
      if ((byte)(asccode + 0xbfU) < 6) {
        bVar1 = asccode - 0x37;
      }
    }
  }
  return (uchar)bVar1;
}



undefined4 element_notify_time_last_received_set(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 8f27

void blmac_encr_cntrl_pack
               (uint8_t newread,uint8_t newwrite,uint16_t keyindexram,uint8_t ctyperam,
               uint8_t vlanidram,uint8_t sppram,uint8_t usedefkeyram,uint8_t clenram,
               uint8_t searcherror,uint8_t newsearch)

{
  uint uVar1;
  undefined3 in_register_00002035;
  undefined3 in_register_00002039;
  undefined3 in_register_0000203d;
  undefined3 in_register_00002041;
  undefined3 in_register_00002045;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00002039,vlanidram) << 4;
  if ((uVar2 & 0xffffff0f) != 0) {
    FUN_000100b2();
  }
  uVar1 = CONCAT31(in_register_0000203d,sppram) << 2;
  if ((uVar1 & 0xfffffff3) != 0) {
    FUN_000100d8();
  }
  _DAT_44b000c4 =
       (uint)newread << 0x1f | CONCAT31(in_register_00002045,clenram) |
       CONCAT31(in_register_00002041,usedefkeyram) << 1 | uVar1 | uVar2 |
       CONCAT31(in_register_00002035,ctyperam) << 8 | (uint)keyindexram << 0x10 |
       (uint)newwrite << 0x1e;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100b2(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  
  FUN_000100b2();
  if ((unaff_s1 << 2 & 0xfffffff3U) != 0) {
    FUN_000100d8();
  }
  _DAT_44b000c4 =
       unaff_s0 << 0x1f | unaff_s7 | unaff_s2 << 1 | unaff_s1 << 2 | unaff_s6 | unaff_s5 | unaff_s4
       | unaff_s3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100d8(void)

{
  int unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  
  FUN_000100d8();
  _DAT_44b000c4 =
       unaff_s0 << 0x1f | unaff_s7 | unaff_s2 << 1 | unaff_s1 | unaff_s6 | unaff_s5 | unaff_s4 |
       unaff_s3;
  return;
}



undefined4 element_notify_keepalive_received(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 8fd9

uint32_t hal_machw_rx_duration(rx_hd *rhd,uint16_t len)

{
  byte bVar1;
  uint32_t uVar2;
  undefined2 in_register_0000202e;
  
  bVar1 = *(byte *)(rhd->recvec1a >> 0xc & 0xf);
  if ((bVar1 & 0x80) != 0) {
    FUN_00010160();
  }
  _DAT_44b08160 = (rhd->recvec1b >> 0xf & 1) << 0x18 | CONCAT22(in_register_0000202e,len);
  _DAT_44b08168 = 0x80000000;
  do {
  } while (true);
  _DAT_44b08164 = (uint)bVar1;
  if (false) {
    uVar2 = 0;
  }
  else {
    FUN_000101ba();
    uVar2 = 500;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010160(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar1;
  uint unaff_s2;
  
  FUN_00010160();
  _DAT_44b08160 = (*(uint *)(unaff_s0 + 0x2c) >> 0xf & 1) << 0x18 | unaff_s2;
  _DAT_44b08168 = 0x80000000;
  do {
  } while (true);
  _DAT_44b08164 = unaff_s1;
  if (false) {
    uVar1 = 0;
  }
  else {
    FUN_000101ba();
    uVar1 = 500;
  }
  return uVar1;
}



undefined4 FUN_000101ba(void)

{
  FUN_000101ba();
  return 500;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 84e8

void mm_env_max_ampdu_duration_set(void)

{
  _DAT_00000008 = 0x96;
  if (((_DAT_44b00200 >> 0xc & 0xffff) != 0) && ((_DAT_44b00200 >> 0xc & 0xffff) < 0x97)) {
    _DAT_00000008 = (undefined2)(_DAT_44b00200 >> 0xc);
  }
  _DAT_0000000a = 0x96;
  if (((_DAT_44b00204 >> 0xc & 0xffff) != 0) && ((_DAT_44b00204 >> 0xc & 0xffff) < 0x97)) {
    _DAT_0000000a = (undefined2)(_DAT_44b00204 >> 0xc);
  }
  _DAT_0000000c = 0x96;
  if (((_DAT_44b00208 >> 0xc & 0xffff) != 0) && ((_DAT_44b00208 >> 0xc & 0xffff) < 0x97)) {
    _DAT_0000000c = (undefined2)(_DAT_44b00208 >> 0xc);
  }
  _DAT_0000000e = 0x96;
  if (((_DAT_44b0020c >> 0xc & 0xffff) != 0) && ((_DAT_44b0020c >> 0xc & 0xffff) < 0x97)) {
    _DAT_0000000e = (undefined2)(_DAT_44b0020c >> 0xc);
  }
  _DAT_00000010 = _DAT_0000000e;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 847f

void mm_env_init(void)

{
  _L0();
  _DAT_00000022 = 0x101;
  _DAT_00000012 = 0;
  _DAT_00000004 = 0;
  uRam00000000 = 0x7fffffde;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined4 *unaff_s0;
  
  _L0();
  *(undefined2 *)((int)unaff_s0 + 0x22) = 0x101;
  *(undefined2 *)((int)unaff_s0 + 0x12) = 0;
  unaff_s0[1] = 0;
  *unaff_s0 = 0x7fffffde;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 83f3

void mm_init(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 7d53

void mm_active(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 7d9e

void mm_reset(void)

{
  int extraout_a0;
  
  _L0();
  if (extraout_a0 != 1) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int extraout_a0;
  
  _L0();
  if (extraout_a0 != 1) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 7a5d

void mm_tbtt_evt(int dummy)

{
  int **ppiVar1;
  char cVar2;
  
  if ((uRam00000000 & 0x600000) == 0x600000) {
    FUN_000103e4();
  }
  FUN_000103ee();
  ppiVar1 = _DAT_00000008;
  FUN_00010404();
  FUN_00010412();
  for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
    if ((*(char *)((int)ppiVar1 + 0x56) == '\x02') &&
       (cVar2 = *(char *)((int)ppiVar1 + 0x341) + -1, *(char *)((int)ppiVar1 + 0x341) = cVar2,
       cVar2 == '\0')) {
      *(undefined *)((int)ppiVar1 + 0x341) = *(undefined *)(ppiVar1 + 0xd0);
      _L0((int *)ppiVar1);
      if (ppiVar1[0x10] != (int *)0x0) {
        FUN_00010482(ppiVar1,(uint)*(ushort *)((int)ppiVar1 + 0x33e) * 0x400 +
                             _DAT_44b08040 * 0x20 + _DAT_44b00120);
      }
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000103e4(void)

{
  int **ppiVar1;
  char cVar2;
  
  FUN_000103e4();
  FUN_000103ee();
  ppiVar1 = _DAT_00000008;
  FUN_00010404();
  FUN_00010412();
  for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
    if ((*(char *)((int)ppiVar1 + 0x56) == '\x02') &&
       (cVar2 = *(char *)((int)ppiVar1 + 0x341) + -1, *(char *)((int)ppiVar1 + 0x341) = cVar2,
       cVar2 == '\0')) {
      *(undefined *)((int)ppiVar1 + 0x341) = *(undefined *)(ppiVar1 + 0xd0);
      _L0((int *)ppiVar1);
      if (ppiVar1[0x10] != (int *)0x0) {
        FUN_00010482(ppiVar1,(uint)*(ushort *)((int)ppiVar1 + 0x33e) * 0x400 +
                             _DAT_44b08040 * 0x20 + _DAT_44b00120);
      }
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000103ee(void)

{
  int **ppiVar1;
  char cVar2;
  
  FUN_000103ee();
  ppiVar1 = _DAT_00000008;
  FUN_00010404();
  FUN_00010412();
  for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
    if ((*(char *)((int)ppiVar1 + 0x56) == '\x02') &&
       (cVar2 = *(char *)((int)ppiVar1 + 0x341) + -1, *(char *)((int)ppiVar1 + 0x341) = cVar2,
       cVar2 == '\0')) {
      *(undefined *)((int)ppiVar1 + 0x341) = *(undefined *)(ppiVar1 + 0xd0);
      _L0((int *)ppiVar1);
      if (ppiVar1[0x10] != (int *)0x0) {
        FUN_00010482(ppiVar1,(uint)*(ushort *)((int)ppiVar1 + 0x33e) * 0x400 +
                             _DAT_44b08040 * 0x20 + _DAT_44b00120);
      }
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010404(void)

{
  int **unaff_s0;
  char cVar1;
  
  FUN_00010404();
  FUN_00010412();
  for (; unaff_s0 != (int **)0x0; unaff_s0 = (int **)*unaff_s0) {
    if ((*(char *)((int)unaff_s0 + 0x56) == '\x02') &&
       (cVar1 = *(char *)((int)unaff_s0 + 0x341) + -1, *(char *)((int)unaff_s0 + 0x341) = cVar1,
       cVar1 == '\0')) {
      *(undefined *)((int)unaff_s0 + 0x341) = *(undefined *)(unaff_s0 + 0xd0);
      _L0((int *)unaff_s0);
      if (unaff_s0[0x10] != (int *)0x0) {
        FUN_00010482(unaff_s0,(uint)*(ushort *)((int)unaff_s0 + 0x33e) * 0x400 +
                              _DAT_44b08040 * 0x20 + _DAT_44b00120);
      }
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010412(void)

{
  int **unaff_s0;
  char cVar1;
  
  FUN_00010412();
  for (; unaff_s0 != (int **)0x0; unaff_s0 = (int **)*unaff_s0) {
    if ((*(char *)((int)unaff_s0 + 0x56) == '\x02') &&
       (cVar1 = *(char *)((int)unaff_s0 + 0x341) + -1, *(char *)((int)unaff_s0 + 0x341) = cVar1,
       cVar1 == '\0')) {
      *(undefined *)((int)unaff_s0 + 0x341) = *(undefined *)(unaff_s0 + 0xd0);
      _L0((int *)unaff_s0);
      if (unaff_s0[0x10] != (int *)0x0) {
        FUN_00010482(unaff_s0,(uint)*(ushort *)((int)unaff_s0 + 0x33e) * 0x400 +
                              _DAT_44b08040 * 0x20 + _DAT_44b00120);
      }
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(int *param_1)

{
  int **unaff_s0;
  uint unaff_s1;
  char cVar1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    _L0(param_1);
    if (unaff_s0[0x10] != (int *)0x0) {
      FUN_00010482(unaff_s0,(uint)*(ushort *)((int)unaff_s0 + 0x33e) * 0x400 +
                            *(int *)(unaff_s3 + 0x40) * 0x20 + *(int *)(unaff_s2 + 0x120));
    }
    do {
      unaff_s0 = (int **)*unaff_s0;
      if (unaff_s0 == (int **)0x0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    } while ((*(byte *)((int)unaff_s0 + 0x56) != unaff_s1) ||
            (cVar1 = *(char *)((int)unaff_s0 + 0x341) + -1, *(char *)((int)unaff_s0 + 0x341) = cVar1
            , cVar1 != '\0'));
    *(undefined *)((int)unaff_s0 + 0x341) = *(undefined *)(unaff_s0 + 0xd0);
    param_1 = (int *)unaff_s0;
  } while( true );
}



void FUN_00010482(int **param_1,int param_2)

{
  int **unaff_s0;
  uint unaff_s1;
  char cVar1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    FUN_00010482(param_1,param_2);
    do {
      do {
        unaff_s0 = (int **)*unaff_s0;
        if (unaff_s0 == (int **)0x0) {
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
      } while ((*(byte *)((int)unaff_s0 + 0x56) != unaff_s1) ||
              (cVar1 = *(char *)((int)unaff_s0 + 0x341) + -1,
              *(char *)((int)unaff_s0 + 0x341) = cVar1, cVar1 != '\0'));
      *(undefined *)((int)unaff_s0 + 0x341) = *(undefined *)(unaff_s0 + 0xd0);
      _L0((int *)unaff_s0);
    } while (unaff_s0[0x10] == (int *)0x0);
    param_2 = (uint)*(ushort *)((int)unaff_s0 + 0x33e) * 0x400 +
              *(int *)(unaff_s3 + 0x40) * 0x20 + *(int *)(unaff_s2 + 0x120);
    param_1 = unaff_s0;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 78f8

uint8_t mm_sec_machwaddr_wr(uint8_t sta_idx,uint8_t inst_nbr)

{
  undefined3 in_register_00002029;
  int iVar1;
  
  iVar1 = CONCAT31(in_register_00002029,sta_idx) * 0x1b0;
  _DAT_44b000bc = *(undefined4 *)(iVar1 + 0x1e);
  _DAT_44b000c0 = (uint)*(ushort *)(iVar1 + 0x22);
  _DAT_44b000ac = 0;
  _DAT_44b000b0 = 0;
  _DAT_44b000b4 = 0;
  _DAT_44b000b8 = 0;
  FUN_000104ea();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return sta_idx + '\b';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000104ea(void)

{
  FUN_000104ea();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 7488

void mm_sec_keydump(void)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00010532();
  FUN_0001055a();
  FUN_0001056a();
  uVar1 = _DAT_44b000d8 >> 8;
  _L0();
  for (uVar2 = 0; (int)uVar2 < (int)(uVar1 & 0xff); uVar2 += 1) {
    FUN_000106e8(1,0,uVar2 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(uVar2,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,_DAT_44b000bc >> 0x10 & 0xff,
                 _DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,_DAT_44b000c0 >> 8 & 0xff);
    FUN_00010748();
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    FUN_00010776(_DAT_44b000c4 >> 1 & 1);
    FUN_00010808(0,_DAT_44b000ac & 0xff,_DAT_44b000ac >> 8 & 0xff,_DAT_44b000ac >> 0x10 & 0xff,
                 _DAT_44b000ac >> 0x18,_DAT_44b000b0 & 0xff,_DAT_44b000b0 >> 8 & 0xff,
                 _DAT_44b000b0 >> 0x10 & 0xff);
    FUN_00010818(0);
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010532(void)

{
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  
  FUN_00010532();
  FUN_0001055a();
  FUN_0001056a();
  uVar1 = *(uint *)(unaff_s1 + 0xd8);
  _L0();
  for (uVar2 = 0; (int)uVar2 < (int)(uVar1 >> 8 & 0xff); uVar2 += 1) {
    FUN_000106e8(1,0,uVar2 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(uVar2,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,_DAT_44b000bc >> 0x10 & 0xff,
                 _DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,_DAT_44b000c0 >> 8 & 0xff);
    FUN_00010748();
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    FUN_00010776(_DAT_44b000c4 >> 1 & 1);
    FUN_00010808(0,_DAT_44b000ac & 0xff,_DAT_44b000ac >> 8 & 0xff,_DAT_44b000ac >> 0x10 & 0xff,
                 _DAT_44b000ac >> 0x18,_DAT_44b000b0 & 0xff,_DAT_44b000b0 >> 8 & 0xff,
                 _DAT_44b000b0 >> 0x10 & 0xff);
    FUN_00010818(0);
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001055a(void)

{
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  
  FUN_0001055a();
  FUN_0001056a();
  uVar1 = *(uint *)(unaff_s1 + 0xd8);
  _L0();
  for (uVar2 = 0; (int)uVar2 < (int)(uVar1 >> 8 & 0xff); uVar2 += 1) {
    FUN_000106e8(1,0,uVar2 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(uVar2,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,_DAT_44b000bc >> 0x10 & 0xff,
                 _DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,_DAT_44b000c0 >> 8 & 0xff);
    FUN_00010748();
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    FUN_00010776(_DAT_44b000c4 >> 1 & 1);
    FUN_00010808(0,_DAT_44b000ac & 0xff,_DAT_44b000ac >> 8 & 0xff,_DAT_44b000ac >> 0x10 & 0xff,
                 _DAT_44b000ac >> 0x18,_DAT_44b000b0 & 0xff,_DAT_44b000b0 >> 8 & 0xff,
                 _DAT_44b000b0 >> 0x10 & 0xff);
    FUN_00010818(0);
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001056a(void)

{
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  
  FUN_0001056a();
  uVar1 = *(uint *)(unaff_s1 + 0xd8);
  _L0();
  for (uVar2 = 0; (int)uVar2 < (int)(uVar1 >> 8 & 0xff); uVar2 += 1) {
    FUN_000106e8(1,0,uVar2 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(uVar2,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,_DAT_44b000bc >> 0x10 & 0xff,
                 _DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,_DAT_44b000c0 >> 8 & 0xff);
    FUN_00010748();
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    FUN_00010776(_DAT_44b000c4 >> 1 & 1);
    FUN_00010808(0,_DAT_44b000ac & 0xff,_DAT_44b000ac >> 8 & 0xff,_DAT_44b000ac >> 0x10 & 0xff,
                 _DAT_44b000ac >> 0x18,_DAT_44b000b0 & 0xff,_DAT_44b000b0 >> 8 & 0xff,
                 _DAT_44b000b0 >> 0x10 & 0xff);
    FUN_00010818(0);
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s1;
  uint uVar1;
  
  _L0();
  for (uVar1 = 0; (int)uVar1 < unaff_s1; uVar1 += 1) {
    FUN_000106e8(1,0,uVar1 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(uVar1,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,_DAT_44b000bc >> 0x10 & 0xff,
                 _DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,_DAT_44b000c0 >> 8 & 0xff);
    FUN_00010748();
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    FUN_00010776(_DAT_44b000c4 >> 1 & 1);
    FUN_00010808(0,_DAT_44b000ac & 0xff,_DAT_44b000ac >> 8 & 0xff,_DAT_44b000ac >> 0x10 & 0xff,
                 _DAT_44b000ac >> 0x18,_DAT_44b000b0 & 0xff,_DAT_44b000b0 >> 8 & 0xff,
                 _DAT_44b000b0 >> 0x10 & 0xff);
    FUN_00010818(0);
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000105ba(void)

{
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000105f6(void)

{
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001062e(void)

{
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001063e(void)

{
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010676(void)

{
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL132(void)

{
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000106e8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int unaff_s1;
  uint unaff_s8;
  
  while( true ) {
    FUN_000106e8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(unaff_s8,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,
                 _DAT_44b000bc >> 0x10 & 0xff,_DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,
                 _DAT_44b000c0 >> 8 & 0xff);
    FUN_00010748();
    unaff_s8 += 1;
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    FUN_00010776(_DAT_44b000c4 >> 1 & 1);
    FUN_00010808(0,_DAT_44b000ac & 0xff,_DAT_44b000ac >> 8 & 0xff,_DAT_44b000ac >> 0x10 & 0xff,
                 _DAT_44b000ac >> 0x18,_DAT_44b000b0 & 0xff,_DAT_44b000b0 >> 8 & 0xff,
                 _DAT_44b000b0 >> 0x10 & 0xff);
    FUN_00010818(0);
    if (unaff_s1 <= (int)unaff_s8) break;
    param_6 = 0;
    param_8 = 0;
    param_7 = 0;
    param_5 = 0;
    param_4 = 0;
    param_3 = unaff_s8 & 0xffff;
    param_2 = 0;
    param_1 = 1;
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010732(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7)

{
  int unaff_s1;
  uint unaff_s8;
  
  while( true ) {
    FUN_00010732(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    FUN_00010748();
    param_1 = unaff_s8 + 1;
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    FUN_00010776(_DAT_44b000c4 >> 1 & 1);
    FUN_00010808(0,_DAT_44b000ac & 0xff,_DAT_44b000ac >> 8 & 0xff,_DAT_44b000ac >> 0x10 & 0xff,
                 _DAT_44b000ac >> 0x18,_DAT_44b000b0 & 0xff,_DAT_44b000b0 >> 8 & 0xff,
                 _DAT_44b000b0 >> 0x10 & 0xff);
    FUN_00010818(0);
    if (unaff_s1 <= (int)param_1) break;
    FUN_000106e8(1,0,param_1 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    param_5 = _DAT_44b000bc >> 0x18;
    param_7 = _DAT_44b000c0 >> 8 & 0xff;
    param_6 = _DAT_44b000c0 & 0xff;
    param_4 = _DAT_44b000bc >> 0x10 & 0xff;
    param_3 = _DAT_44b000bc >> 8 & 0xff;
    param_2 = _DAT_44b000bc & 0xff;
    unaff_s8 = param_1;
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010748(void)

{
  int unaff_s1;
  uint unaff_s8;
  
  while( true ) {
    FUN_00010748();
    unaff_s8 += 1;
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    FUN_00010776(_DAT_44b000c4 >> 1 & 1);
    FUN_00010808(0,_DAT_44b000ac & 0xff,_DAT_44b000ac >> 8 & 0xff,_DAT_44b000ac >> 0x10 & 0xff,
                 _DAT_44b000ac >> 0x18,_DAT_44b000b0 & 0xff,_DAT_44b000b0 >> 8 & 0xff,
                 _DAT_44b000b0 >> 0x10 & 0xff);
    FUN_00010818(0);
    if (unaff_s1 <= (int)unaff_s8) break;
    FUN_000106e8(1,0,unaff_s8 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(unaff_s8,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,
                 _DAT_44b000bc >> 0x10 & 0xff,_DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,
                 _DAT_44b000c0 >> 8 & 0xff);
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010762(uint param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  uint unaff_s8;
  
  while( true ) {
    FUN_00010762(param_1);
    FUN_00010776(*(uint *)(unaff_s0 + 0xc4) >> 1 & 1);
    uVar1 = *(uint *)(unaff_s0 + 0xac);
    uVar2 = *(uint *)(unaff_s0 + 0xb0);
    FUN_00010808(0,uVar1 & 0xff,uVar1 >> 8 & 0xff,uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,uVar2 & 0xff,
                 uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff);
    FUN_00010818(0);
    if (unaff_s1 <= (int)unaff_s8) break;
    FUN_000106e8(1,0,unaff_s8 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(unaff_s8,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,
                 _DAT_44b000bc >> 0x10 & 0xff,_DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,
                 _DAT_44b000c0 >> 8 & 0xff);
    FUN_00010748();
    unaff_s0 = 0x44b00000;
    unaff_s8 += 1;
    param_1 = _DAT_44b000c4 >> 4 & 0xf;
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010776(uint param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  uint unaff_s8;
  
  while( true ) {
    FUN_00010776(param_1);
    uVar1 = *(uint *)(unaff_s0 + 0xac);
    uVar2 = *(uint *)(unaff_s0 + 0xb0);
    FUN_00010808(0,uVar1 & 0xff,uVar1 >> 8 & 0xff,uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,uVar2 & 0xff,
                 uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff);
    FUN_00010818(0);
    if (unaff_s1 <= (int)unaff_s8) break;
    FUN_000106e8(1,0,unaff_s8 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(unaff_s8,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,
                 _DAT_44b000bc >> 0x10 & 0xff,_DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,
                 _DAT_44b000c0 >> 8 & 0xff);
    FUN_00010748();
    unaff_s0 = 0x44b00000;
    unaff_s8 += 1;
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    param_1 = _DAT_44b000c4 >> 1 & 1;
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010808(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8)

{
  int unaff_s1;
  uint unaff_s8;
  
  while( true ) {
    FUN_00010808(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_00010818(0);
    if (unaff_s1 <= (int)unaff_s8) break;
    FUN_000106e8(1,0,unaff_s8 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(unaff_s8,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,
                 _DAT_44b000bc >> 0x10 & 0xff,_DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,
                 _DAT_44b000c0 >> 8 & 0xff);
    FUN_00010748();
    unaff_s8 += 1;
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    FUN_00010776(_DAT_44b000c4 >> 1 & 1);
    param_8 = _DAT_44b000b0 >> 0x10 & 0xff;
    param_5 = _DAT_44b000ac >> 0x18;
    param_7 = _DAT_44b000b0 >> 8 & 0xff;
    param_6 = _DAT_44b000b0 & 0xff;
    param_4 = _DAT_44b000ac >> 0x10 & 0xff;
    param_3 = _DAT_44b000ac >> 8 & 0xff;
    param_2 = _DAT_44b000ac & 0xff;
    param_1 = 0;
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010818(undefined4 param_1)

{
  int unaff_s1;
  uint unaff_s8;
  
  for (; FUN_00010818(param_1), (int)unaff_s8 < unaff_s1; unaff_s8 += 1) {
    FUN_000106e8(1,0,unaff_s8 & 0xffff,0,0,0,0,0);
    do {
    } while ((int)_DAT_44b000c4 < 0);
    FUN_00010732(unaff_s8,_DAT_44b000bc & 0xff,_DAT_44b000bc >> 8 & 0xff,
                 _DAT_44b000bc >> 0x10 & 0xff,_DAT_44b000bc >> 0x18,_DAT_44b000c0 & 0xff,
                 _DAT_44b000c0 >> 8 & 0xff);
    FUN_00010748();
    FUN_00010762(_DAT_44b000c4 >> 4 & 0xf);
    FUN_00010776(_DAT_44b000c4 >> 1 & 1);
    FUN_00010808(0,_DAT_44b000ac & 0xff,_DAT_44b000ac >> 8 & 0xff,_DAT_44b000ac >> 0x10 & 0xff,
                 _DAT_44b000ac >> 0x18,_DAT_44b000b0 & 0xff,_DAT_44b000b0 >> 8 & 0xff,
                 _DAT_44b000b0 >> 0x10 & 0xff);
    param_1 = 0;
  }
  FUN_000105ba();
  FUN_000105f6();
  FUN_0001062e();
  FUN_0001063e();
  FUN_00010676();
  _LVL132();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 7212

uint8_t mm_sec_machwkey_wr(mm_key_add_req *param)

{
  byte bVar1;
  uint8_t uVar2;
  uint uVar3;
  
  bVar1 = param->sta_idx;
  uVar3 = (uint)bVar1;
  if (uVar3 == 0xff) {
    uVar2 = param->inst_nbr * '\x04' + param->key_idx;
    _DAT_44b000bc = 0xffffffff;
    _DAT_44b000c0 = 0xffffffff;
    FUN_0001085e();
  }
  else {
    if (0xb < uVar3) {
      FUN_000108f8();
    }
    uVar2 = bVar1 + 8;
    FUN_0001090c();
    _DAT_44b000bc = *(undefined4 *)(uVar3 * 0x1b0 + 0x1e);
    _DAT_44b000c0 = (uint)*(ushort *)(uVar3 * 0x1b0 + 0x22);
  }
  if (3 < param->cipher_suite) {
    FUN_00010958();
  }
  _DAT_44b000ac = (param->key).array[0];
  _DAT_44b000b0 = (param->key).array[1];
  _DAT_44b000b4 = (param->key).array[2];
  _DAT_44b000b8 = (param->key).array[3];
  FUN_000108b6();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001085e(void)

{
  int unaff_s1;
  
  FUN_0001085e();
  if (3 < *(byte *)(unaff_s1 + 0x28)) {
    FUN_00010958();
  }
  _DAT_44b000ac = *(undefined4 *)(unaff_s1 + 8);
  _DAT_44b000b0 = *(undefined4 *)(unaff_s1 + 0xc);
  _DAT_44b000b4 = *(undefined4 *)(unaff_s1 + 0x10);
  _DAT_44b000b8 = *(undefined4 *)(unaff_s1 + 0x14);
  FUN_000108b6();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000108b6(void)

{
  FUN_000108b6();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_000108f8(void)

{
  int unaff_s1;
  int unaff_s2;
  
  FUN_000108f8();
  FUN_0001090c();
  _DAT_44b000bc = *(undefined4 *)(unaff_s2 * 0x1b0 + 0x1e);
  _DAT_44b000c0 = (uint)*(ushort *)(unaff_s2 * 0x1b0 + 0x22);
  if (3 < *(byte *)(unaff_s1 + 0x28)) {
    FUN_00010958();
  }
  _DAT_44b000ac = *(undefined4 *)(unaff_s1 + 8);
  _DAT_44b000b0 = *(undefined4 *)(unaff_s1 + 0xc);
  _DAT_44b000b4 = *(undefined4 *)(unaff_s1 + 0x10);
  _DAT_44b000b8 = *(undefined4 *)(unaff_s1 + 0x14);
  FUN_000108b6();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return unaff_s2 + 8U & 0xff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001090c(void)

{
  int unaff_s1;
  int unaff_s2;
  
  FUN_0001090c();
  _DAT_44b000bc = *(undefined4 *)(unaff_s2 * 0x1b0 + 0x1e);
  _DAT_44b000c0 = (uint)*(ushort *)(unaff_s2 * 0x1b0 + 0x22);
  if (3 < *(byte *)(unaff_s1 + 0x28)) {
    FUN_00010958();
  }
  _DAT_44b000ac = *(undefined4 *)(unaff_s1 + 8);
  _DAT_44b000b0 = *(undefined4 *)(unaff_s1 + 0xc);
  _DAT_44b000b4 = *(undefined4 *)(unaff_s1 + 0x10);
  _DAT_44b000b8 = *(undefined4 *)(unaff_s1 + 0x14);
  FUN_000108b6();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010958(void)

{
  int unaff_s1;
  
  FUN_00010958();
  _DAT_44b000ac = *(undefined4 *)(unaff_s1 + 8);
  _DAT_44b000b0 = *(undefined4 *)(unaff_s1 + 0xc);
  _DAT_44b000b4 = *(undefined4 *)(unaff_s1 + 0x10);
  _DAT_44b000b8 = *(undefined4 *)(unaff_s1 + 0x14);
  FUN_000108b6();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 7052

void mm_sec_machwkey_del(uint8_t hw_key_idx)

{
  undefined3 in_register_00002029;
  int iVar1;
  
  if (CONCAT31(in_register_00002029,hw_key_idx) < 8) {
    _DAT_44b000bc = 0xffffffff;
    _DAT_44b000c0 = 0xffffffff;
    FUN_00010a1e();
  }
  else {
    iVar1 = (CONCAT31(in_register_00002029,hw_key_idx) - 8 & 0xff) * 0x1b0;
    _DAT_44b000bc = *(undefined4 *)(iVar1 + 0x1e);
    _DAT_44b000c0 = (uint)*(ushort *)(iVar1 + 0x22);
    _L0();
  }
  _DAT_44b000ac = 0;
  _DAT_44b000b0 = 0;
  _DAT_44b000b4 = 0;
  _DAT_44b000b8 = 0;
  FUN_000109d6();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  _DAT_44b000ac = 0;
  _DAT_44b000b0 = 0;
  _DAT_44b000b4 = 0;
  _DAT_44b000b8 = 0;
  FUN_000109d6();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000109d6(void)

{
  FUN_000109d6();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a1e(void)

{
  FUN_00010a1e();
  _DAT_44b000ac = 0;
  _DAT_44b000b0 = 0;
  _DAT_44b000b4 = 0;
  _DAT_44b000b8 = 0;
  FUN_000109d6();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6f10

void mm_sec_machwaddr_del(uint8_t sta_idx)

{
  _DAT_44b000bc = 0xffffffff;
  _DAT_44b000c0 = 0xffffffff;
  _DAT_44b000ac = 0;
  _DAT_44b000b0 = 0;
  _DAT_44b000b4 = 0;
  _DAT_44b000b8 = 0;
  _LVL211();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL211(void)

{
  _LVL211();
  do {
  } while (_DAT_44b000c4 << 1 < 0);
  return;
}



// DWARF DIE: 6ebe

void mm_hw_idle_evt(int dummy)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6d6e

void mm_hw_info_set(mac_addr *mac_addr)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6cd0

void mm_hw_ap_info_set(void)

{
  _L0();
  uRam00000000 = 0x3507a58c;
  _L0();
  _DAT_44b08070 = 0x40001;
  _DAT_44b08074 = _DAT_44b08074 | 0x40001;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  uRam00000000 = 0x3507a58c;
  _L0();
  _DAT_44b08070 = 0x40001;
  _DAT_44b08074 = _DAT_44b08074 | 0x40001;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  _DAT_44b08070 = 0x40001;
  _DAT_44b08074 = _DAT_44b08074 | 0x40001;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6c32

void mm_hw_ap_info_reset(void)

{
  _L0();
  uRam00000000 = 0x3503858c;
  _L0();
  _DAT_44b08070 = 0x40001;
  _DAT_44b08074 = _DAT_44b08074 & 0xfffbfffe;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  uRam00000000 = 0x3503858c;
  _L0();
  _DAT_44b08070 = 0x40001;
  _DAT_44b08074 = _DAT_44b08074 & 0xfffbfffe;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  _DAT_44b08070 = 0x40001;
  _DAT_44b08074 = _DAT_44b08074 & 0xfffbfffe;
  return;
}



// DWARF DIE: 6bc3

void mm_back_to_host_idle(void)

{
  int iVar1;
  
  iVar1 = 0;
  _L0(uRam00000020);
  if (iVar1 != 3) {
    FUN_00010bca(uRam00000020);
  }
  if (DAT_00000022 != '\0') {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(undefined3 param_1)

{
  int in_a0;
  
  _L0(param_1);
  if (in_a0 != 3) {
    FUN_00010bca(param_1);
  }
  if (param_1._2_1_ != '\0') {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010bca(undefined3 param_1)

{
  FUN_00010bca(param_1);
  if (param_1._2_1_ != '\0') {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6b5a

void mm_force_idle_req(void)

{
  _L0(_DAT_00000010);
  _L0(_DAT_00000010);
  _L0(_DAT_00000010);
  FUN_00010c1c(_DAT_00000010);
  _DAT_00000010 &= 0xffff;
  return;
}



void _L0(uint uRam00000010)

{
  _L0(uRam00000010);
  _L0(uRam00000010);
  _L0(uRam00000010);
  FUN_00010c1c(uRam00000010);
  uRam00000010 &= 0xffff;
  return;
}



void _L0(uint uRam00000010)

{
  _L0(uRam00000010);
  _L0(uRam00000010);
  FUN_00010c1c(uRam00000010);
  uRam00000010 &= 0xffff;
  return;
}



void _L0(uint uRam00000010)

{
  _L0(uRam00000010);
  FUN_00010c1c(uRam00000010);
  uRam00000010 &= 0xffff;
  return;
}



void FUN_00010c1c(uint uRam00000010)

{
  FUN_00010c1c(uRam00000010);
  uRam00000010 &= 0xffff;
  return;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 68f3

uint8_t mm_sta_add(mm_sta_add_req *param,uint8_t *sta_idx,uint8_t *hw_sta_idx)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  mm_key_add_req key_add_req;
  
  iVar2 = _L0();
  if (iVar2 != 0) goto _L0;
  uVar1 = (uint)param->inst_nbr;
  uVar3 = FUN_00010c68();
  *hw_sta_idx = (uint8_t)uVar3;
  iVar4 = uVar1 * 0x5d8;
  if (*(char *)(iVar4 + 0x56) != '\0') goto _L0;
  if (*(char *)(iVar4 + 1000) != '\0') {
    uRam00000000._0_2_ = CONCAT11(*sta_idx,(undefined)uRam00000000);
    uRam00000000 = uRam00000000 & 0xffff0000 | (uint)(ushort)uRam00000000;
    if ((*(uint *)(iVar4 + 1000) & 0x12800) == 0) {
      if ((*(byte *)(iVar4 + 0x3e9) & 2) != 0) {
        FUN_00010d70();
        FUN_00010d8a();
        FUN_00010d9a();
        key_add_req.key.array[7]._1_1_ = param->inst_nbr;
        uVar5 = _L0();
        uVar7 = uVar5 & 0xff;
        key_add_req.key_idx = (uint8_t)uVar7;
        if (uVar7 == 5) {
          key_add_req.key.array[7]._0_1_ = 0;
_L0:
          FUN_00010df0();
        }
        else {
          if (uVar7 == 0xd) {
            key_add_req.key.array[7]._0_1_ = 3;
            goto _L0;
          }
          if (uVar7 == 10) {
            key_add_req.key.array[7]._0_1_ = 0;
          }
          else {
            if (uVar7 != 0x1a) {
              FUN_00010e86();
              iVar2 = 1;
              _L0();
              goto _L0;
            }
            key_add_req.key.array[7]._0_1_ = 3;
          }
          uVar7 = uVar5 & 0xff;
          if ((uVar5 & 1) != 0) {
            uVar7 = uVar5 & 0xfe;
          }
          if (uVar7 != 0) {
            iVar4 = 0;
            pbVar8 = (byte *)(uRam00000000 + 0x141);
            do {
              iVar6 = FUN_00010e50((uint)*pbVar8);
              uVar3 = _L0((uint)pbVar8[1]);
              *(char *)((int)key_add_req.key.array + (iVar4 >> 1) + -4) =
                   (char)(iVar6 << 4) + (char)uVar3;
              iVar4 += 2;
              pbVar8 = pbVar8 + 2;
            } while (iVar4 < (int)uVar7);
          }
          key_add_req.key_idx >>= 1;
        }
        uVar5 = FUN_00010dfa();
        uRam00000000 = uRam00000000 & 0xffffff00 | uVar5 & 0xff;
      }
    }
    else {
      if (*(char *)(uRam00000000 + 0x181) == '\0') {
        uVar3 = _L0();
        return (uint8_t)uVar3;
      }
      _L0();
    }
    if (((*(uint *)(uVar1 * 0x5d8 + 1000) & 0x12000) != 0) ||
       ((*(byte *)(uVar1 * 0x5d8 + 0x3e9) & 8) != 0)) {
      FUN_00010d34();
    }
    if (*(char *)(uVar1 * 0x5d8 + 0x56) != '\0') goto _L0;
  }
  iVar2 = 0;
  *(uint8_t *)(uVar1 * 0x5d8 + 0x60) = *sta_idx;
_L0:
  return (uint8_t)iVar2;
}



int _L0(void)

{
  undefined *unaff_s0;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *unaff_s3;
  byte *pbVar7;
  int unaff_s7;
  undefined in_stack_0000002c;
  undefined in_stack_0000002d;
  
  iVar2 = _L0();
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar1 = (uint)*(byte *)(unaff_s7 + 0x11);
  uVar3 = FUN_00010c68();
  *unaff_s0 = (char)uVar3;
  iVar2 = uVar1 * 0x5d8;
  if (*(char *)(iVar2 + 0x56) != '\0') {
    return 0;
  }
  if (*(char *)(iVar2 + 1000) == '\0') goto _L0;
  uRam00000000._0_2_ = CONCAT11(*unaff_s3,(undefined)uRam00000000);
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)(ushort)uRam00000000;
  if ((*(uint *)(iVar2 + 1000) & 0x12800) == 0) {
    if ((*(byte *)(iVar2 + 0x3e9) & 2) != 0) {
      FUN_00010d70();
      FUN_00010d8a();
      FUN_00010d9a();
      in_stack_0000002d = *(undefined *)(unaff_s7 + 0x11);
      uVar4 = _L0();
      uVar6 = uVar4 & 0xff;
      if (uVar6 == 5) {
        in_stack_0000002c = 0;
_L0:
        FUN_00010df0();
      }
      else {
        if (uVar6 == 0xd) {
          in_stack_0000002c = 3;
          goto _L0;
        }
        if (uVar6 == 10) {
          in_stack_0000002c = 0;
        }
        else {
          if (uVar6 != 0x1a) {
            FUN_00010e86();
            _L0();
            return 1;
          }
          in_stack_0000002c = 3;
        }
        uVar6 = uVar4 & 0xff;
        if ((uVar4 & 1) != 0) {
          uVar6 = uVar4 & 0xfe;
        }
        if (uVar6 != 0) {
          iVar2 = 0;
          pbVar7 = (byte *)(uRam00000000 + 0x141);
          do {
            iVar5 = FUN_00010e50((uint)*pbVar7);
            uVar3 = _L0((uint)pbVar7[1]);
            (&stack0x0000000c)[iVar2 >> 1] = (char)(iVar5 << 4) + (char)uVar3;
            iVar2 += 2;
            pbVar7 = pbVar7 + 2;
          } while (iVar2 < (int)uVar6);
        }
      }
      uVar4 = FUN_00010dfa();
      uRam00000000 = uRam00000000 & 0xffffff00 | uVar4 & 0xff;
    }
  }
  else {
    if (*(char *)(uRam00000000 + 0x181) == '\0') {
      iVar2 = _L0();
      return iVar2;
    }
    _L0();
  }
  if (((*(uint *)(uVar1 * 0x5d8 + 1000) & 0x12000) != 0) ||
     ((*(byte *)(uVar1 * 0x5d8 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(uVar1 * 0x5d8 + 0x56) != '\0') {
    return 0;
  }
_L0:
  *(undefined *)(uVar1 * 0x5d8 + 0x60) = *unaff_s3;
  return 0;
}



undefined4 FUN_00010c68(void)

{
  undefined *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  byte *pbVar6;
  int unaff_s7;
  undefined in_stack_0000002c;
  undefined in_stack_0000002d;
  
  uVar1 = FUN_00010c68();
  *unaff_s0 = (char)uVar1;
  iVar2 = unaff_s1 * 0x5d8;
  if (*(char *)(iVar2 + 0x56) != '\0') {
    return unaff_s2;
  }
  if (*(char *)(iVar2 + 1000) == '\0') goto _L0;
  uRam00000000._0_2_ = CONCAT11(*unaff_s3,(undefined)uRam00000000);
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)(ushort)uRam00000000;
  if ((*(uint *)(iVar2 + 1000) & 0x12800) == 0) {
    if ((*(byte *)(iVar2 + 0x3e9) & 2) != 0) {
      FUN_00010d70();
      FUN_00010d8a();
      FUN_00010d9a();
      in_stack_0000002d = *(undefined *)(unaff_s7 + 0x11);
      uVar3 = _L0();
      uVar5 = uVar3 & 0xff;
      if (uVar5 == 5) {
        in_stack_0000002c = 0;
_L0:
        FUN_00010df0();
      }
      else {
        if (uVar5 == 0xd) {
          in_stack_0000002c = 3;
          goto _L0;
        }
        if (uVar5 == 10) {
          in_stack_0000002c = 0;
        }
        else {
          if (uVar5 != 0x1a) {
            FUN_00010e86();
            _L0();
            return 1;
          }
          in_stack_0000002c = 3;
        }
        uVar5 = uVar3 & 0xff;
        if ((uVar3 & 1) != 0) {
          uVar5 = uVar3 & 0xfe;
        }
        if (uVar5 != 0) {
          iVar2 = 0;
          pbVar6 = (byte *)(uRam00000000 + 0x141);
          do {
            iVar4 = FUN_00010e50((uint)*pbVar6);
            uVar1 = _L0((uint)pbVar6[1]);
            (&stack0x0000000c)[iVar2 >> 1] = (char)(iVar4 << 4) + (char)uVar1;
            iVar2 += 2;
            pbVar6 = pbVar6 + 2;
          } while (iVar2 < (int)uVar5);
        }
      }
      uVar3 = FUN_00010dfa();
      uRam00000000 = uRam00000000 & 0xffffff00 | uVar3 & 0xff;
    }
  }
  else {
    if (*(char *)(uRam00000000 + 0x181) == '\0') {
      uVar1 = _L0();
      return uVar1;
    }
    _L0();
  }
  if (((*(uint *)(unaff_s1 * 0x5d8 + 1000) & 0x12000) != 0) ||
     ((*(byte *)(unaff_s1 * 0x5d8 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(unaff_s1 * 0x5d8 + 0x56) != '\0') {
    return unaff_s2;
  }
_L0:
  *(undefined *)(unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  
  _L0();
  iVar1 = unaff_s0 + unaff_s1 * 0x5d8;
  if (((*(uint *)(iVar1 + 1000) & 0x12000) != 0) || ((*(byte *)(iVar1 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(unaff_s1 * 0x5d8 + unaff_s0 + 0x56) == '\0') {
    unaff_s2 = 0;
    *(undefined *)(unaff_s0 + unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  }
  return unaff_s2;
}



undefined4 FUN_00010d34(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  
  FUN_00010d34();
  if (*(char *)(unaff_s1 * 0x5d8 + unaff_s0 + 0x56) == '\0') {
    unaff_s2 = 0;
    *(undefined *)(unaff_s0 + unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  }
  return unaff_s2;
}



undefined4 FUN_00010d70(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  int *unaff_s5;
  byte *pbVar6;
  int unaff_s7;
  undefined2 uStack00000004;
  byte bStack00000008;
  undefined uStack0000002c;
  undefined uStack0000002d;
  
  FUN_00010d70();
  FUN_00010d8a();
  FUN_00010d9a();
  uStack0000002d = *(undefined *)(unaff_s7 + 0x11);
  uStack00000004 = 0xff00;
  uVar1 = _L0();
  uVar5 = uVar1 & 0xff;
  bStack00000008 = (byte)uVar5;
  if (uVar5 == 5) {
    uStack0000002c = 0;
  }
  else {
    if (uVar5 != 0xd) {
      if (uVar5 == 10) {
        uStack0000002c = 0;
      }
      else {
        if (uVar5 != 0x1a) {
          FUN_00010e86();
          _L0();
          return 1;
        }
        uStack0000002c = 3;
      }
      uVar5 = uVar1 & 0xff;
      if ((uVar1 & 1) != 0) {
        uVar5 = uVar1 & 0xfe;
      }
      if (uVar5 != 0) {
        iVar4 = 0;
        pbVar6 = (byte *)(*unaff_s5 + 0x141);
        do {
          iVar3 = FUN_00010e50((uint)*pbVar6);
          uVar2 = _L0((uint)pbVar6[1]);
          (&stack0x0000000c)[iVar4 >> 1] = (char)(iVar3 << 4) + (char)uVar2;
          iVar4 += 2;
          pbVar6 = pbVar6 + 2;
        } while (iVar4 < (int)uVar5);
      }
      bStack00000008 >>= 1;
      goto _L0;
    }
    uStack0000002c = 3;
  }
  FUN_00010df0();
_L0:
  uVar2 = FUN_00010dfa();
  iVar4 = unaff_s0 + unaff_s1 * 0x5d8;
  uRam00000000 = (char)uVar2;
  if (((*(uint *)(iVar4 + 1000) & 0x12000) != 0) || ((*(byte *)(iVar4 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(unaff_s1 * 0x5d8 + unaff_s0 + 0x56) == '\0') {
    unaff_s2 = 0;
    *(undefined *)(unaff_s0 + unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  }
  return unaff_s2;
}



undefined4 FUN_00010d8a(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  int *unaff_s5;
  byte *pbVar6;
  int unaff_s7;
  undefined2 uStack00000004;
  byte bStack00000008;
  undefined uStack0000002c;
  undefined uStack0000002d;
  
  FUN_00010d8a();
  FUN_00010d9a();
  uStack0000002d = *(undefined *)(unaff_s7 + 0x11);
  uStack00000004 = 0xff00;
  uVar1 = _L0();
  uVar5 = uVar1 & 0xff;
  bStack00000008 = (byte)uVar5;
  if (uVar5 == 5) {
    uStack0000002c = 0;
  }
  else {
    if (uVar5 != 0xd) {
      if (uVar5 == 10) {
        uStack0000002c = 0;
      }
      else {
        if (uVar5 != 0x1a) {
          FUN_00010e86();
          _L0();
          return 1;
        }
        uStack0000002c = 3;
      }
      uVar5 = uVar1 & 0xff;
      if ((uVar1 & 1) != 0) {
        uVar5 = uVar1 & 0xfe;
      }
      if (uVar5 != 0) {
        iVar4 = 0;
        pbVar6 = (byte *)(*unaff_s5 + 0x141);
        do {
          iVar3 = FUN_00010e50((uint)*pbVar6);
          uVar2 = _L0((uint)pbVar6[1]);
          (&stack0x0000000c)[iVar4 >> 1] = (char)(iVar3 << 4) + (char)uVar2;
          iVar4 += 2;
          pbVar6 = pbVar6 + 2;
        } while (iVar4 < (int)uVar5);
      }
      bStack00000008 >>= 1;
      goto _L0;
    }
    uStack0000002c = 3;
  }
  FUN_00010df0();
_L0:
  uVar2 = FUN_00010dfa();
  iVar4 = unaff_s0 + unaff_s1 * 0x5d8;
  uRam00000000 = (char)uVar2;
  if (((*(uint *)(iVar4 + 1000) & 0x12000) != 0) || ((*(byte *)(iVar4 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(unaff_s1 * 0x5d8 + unaff_s0 + 0x56) == '\0') {
    unaff_s2 = 0;
    *(undefined *)(unaff_s0 + unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  }
  return unaff_s2;
}



undefined4 FUN_00010d9a(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  int *unaff_s5;
  byte *pbVar6;
  int unaff_s7;
  undefined2 uStack00000004;
  byte bStack00000008;
  undefined uStack0000002c;
  undefined uStack0000002d;
  
  FUN_00010d9a();
  uStack0000002d = *(undefined *)(unaff_s7 + 0x11);
  uStack00000004 = 0xff00;
  uVar1 = _L0();
  uVar5 = uVar1 & 0xff;
  bStack00000008 = (byte)uVar5;
  if (uVar5 == 5) {
    uStack0000002c = 0;
  }
  else {
    if (uVar5 != 0xd) {
      if (uVar5 == 10) {
        uStack0000002c = 0;
      }
      else {
        if (uVar5 != 0x1a) {
          FUN_00010e86();
          _L0();
          return 1;
        }
        uStack0000002c = 3;
      }
      uVar5 = uVar1 & 0xff;
      if ((uVar1 & 1) != 0) {
        uVar5 = uVar1 & 0xfe;
      }
      if (uVar5 != 0) {
        iVar4 = 0;
        pbVar6 = (byte *)(*unaff_s5 + 0x141);
        do {
          iVar3 = FUN_00010e50((uint)*pbVar6);
          uVar2 = _L0((uint)pbVar6[1]);
          (&stack0x0000000c)[iVar4 >> 1] = (char)(iVar3 << 4) + (char)uVar2;
          iVar4 += 2;
          pbVar6 = pbVar6 + 2;
        } while (iVar4 < (int)uVar5);
      }
      bStack00000008 >>= 1;
      goto _L0;
    }
    uStack0000002c = 3;
  }
  FUN_00010df0();
_L0:
  uVar2 = FUN_00010dfa();
  iVar4 = unaff_s0 + unaff_s1 * 0x5d8;
  uRam00000000 = (char)uVar2;
  if (((*(uint *)(iVar4 + 1000) & 0x12000) != 0) || ((*(byte *)(iVar4 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(unaff_s1 * 0x5d8 + unaff_s0 + 0x56) == '\0') {
    unaff_s2 = 0;
    *(undefined *)(unaff_s0 + unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  }
  return unaff_s2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  int *unaff_s5;
  byte *pbVar6;
  byte bStack00000008;
  undefined uStack0000002c;
  
  uVar1 = _L0();
  uVar5 = uVar1 & 0xff;
  bStack00000008 = (byte)uVar5;
  if (uVar5 == 5) {
    uStack0000002c = 0;
  }
  else {
    if (uVar5 != 0xd) {
      if (uVar5 == 10) {
        uStack0000002c = 0;
      }
      else {
        if (uVar5 != 0x1a) {
          FUN_00010e86();
          _L0();
          return 1;
        }
        uStack0000002c = 3;
      }
      uVar5 = uVar1 & 0xff;
      if ((uVar1 & 1) != 0) {
        uVar5 = uVar1 & 0xfe;
      }
      if (uVar5 != 0) {
        iVar4 = 0;
        pbVar6 = (byte *)(*unaff_s5 + 0x141);
        do {
          iVar3 = FUN_00010e50((uint)*pbVar6);
          uVar2 = _L0((uint)pbVar6[1]);
          (&stack0x0000000c)[iVar4 >> 1] = (char)(iVar3 << 4) + (char)uVar2;
          iVar4 += 2;
          pbVar6 = pbVar6 + 2;
        } while (iVar4 < (int)uVar5);
      }
      bStack00000008 >>= 1;
      goto _L0;
    }
    uStack0000002c = 3;
  }
  FUN_00010df0();
_L0:
  uVar2 = FUN_00010dfa();
  iVar4 = unaff_s0 + unaff_s1 * 0x5d8;
  uRam00000000 = (char)uVar2;
  if (((*(uint *)(iVar4 + 1000) & 0x12000) != 0) || ((*(byte *)(iVar4 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(unaff_s1 * 0x5d8 + unaff_s0 + 0x56) == '\0') {
    unaff_s2 = 0;
    *(undefined *)(unaff_s0 + unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  }
  return unaff_s2;
}



undefined4 FUN_00010df0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  
  FUN_00010df0();
  uVar1 = FUN_00010dfa();
  iVar2 = unaff_s0 + unaff_s1 * 0x5d8;
  uRam00000000 = (char)uVar1;
  if (((*(uint *)(iVar2 + 1000) & 0x12000) != 0) || ((*(byte *)(iVar2 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(unaff_s1 * 0x5d8 + unaff_s0 + 0x56) == '\0') {
    unaff_s2 = 0;
    *(undefined *)(unaff_s0 + unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  }
  return unaff_s2;
}



undefined4 FUN_00010dfa(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  
  uVar1 = FUN_00010dfa();
  iVar2 = unaff_s0 + unaff_s1 * 0x5d8;
  uRam00000000 = (char)uVar1;
  if (((*(uint *)(iVar2 + 1000) & 0x12000) != 0) || ((*(byte *)(iVar2 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(unaff_s1 * 0x5d8 + unaff_s0 + 0x56) == '\0') {
    unaff_s2 = 0;
    *(undefined *)(unaff_s0 + unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  }
  return unaff_s2;
}



undefined4 FUN_00010e50(uint param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  byte *unaff_s5;
  int unaff_s7;
  int unaff_s8;
  
  while( true ) {
    iVar1 = FUN_00010e50(param_1);
    uVar2 = _L0((uint)unaff_s5[-1]);
    (&stack0x0000000c)[unaff_s7 >> 1] = (char)(iVar1 << 4) + (char)uVar2;
    unaff_s7 += 2;
    if (unaff_s8 <= unaff_s7) break;
    param_1 = (uint)*unaff_s5;
    unaff_s5 = unaff_s5 + 2;
  }
  uVar2 = FUN_00010dfa();
  iVar1 = unaff_s0 + unaff_s1 * 0x5d8;
  uRam00000000 = (char)uVar2;
  if (((*(uint *)(iVar1 + 1000) & 0x12000) != 0) || ((*(byte *)(iVar1 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(unaff_s1 * 0x5d8 + unaff_s0 + 0x56) == '\0') {
    unaff_s2 = 0;
    *(undefined *)(unaff_s0 + unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  }
  return unaff_s2;
}



undefined4 _L0(uint param_1)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_s2;
  undefined *unaff_s3;
  byte *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  while( true ) {
    uVar1 = _L0(param_1);
    (&stack0x0000000c)[unaff_s7 >> 1] = (char)unaff_s6 + (char)uVar1;
    unaff_s7 += 2;
    if (unaff_s8 <= unaff_s7) break;
    iVar2 = FUN_00010e50((uint)*unaff_s5);
    param_1 = (uint)unaff_s5[1];
    unaff_s6 = iVar2 << 4;
    unaff_s5 = unaff_s5 + 2;
  }
  uVar1 = FUN_00010dfa();
  iVar2 = unaff_s0 + unaff_s1 * 0x5d8;
  uRam00000000 = (char)uVar1;
  if (((*(uint *)(iVar2 + 1000) & 0x12000) != 0) || ((*(byte *)(iVar2 + 0x3e9) & 8) != 0)) {
    FUN_00010d34();
  }
  if (*(char *)(unaff_s1 * 0x5d8 + unaff_s0 + 0x56) == '\0') {
    unaff_s2 = 0;
    *(undefined *)(unaff_s0 + unaff_s1 * 0x5d8 + 0x60) = *unaff_s3;
  }
  return unaff_s2;
}



undefined4 FUN_00010e86(void)

{
  FUN_00010e86();
  _L0();
  return 1;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 6783

void mm_sta_del(uint8_t sta_idx)

{
  undefined3 in_register_00002029;
  undefined *extraout_a0;
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = CONCAT31(in_register_00002029,sta_idx) * 0x1b0;
  uVar4 = (uint)*(byte *)(iVar2 + 0x1a);
  iVar3 = uVar4 * 0x5d8;
  if (*(char *)(iVar3 + 0x56) == '\0') {
    *(undefined *)(iVar3 + 0x60) = 0xff;
    if (*(char *)(iVar3 + 1000) != '\0') {
      if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
        if (((*(byte *)(iVar3 + 0x3e9) & 2) != 0) && (cRam00000000 != -1)) {
          _L0();
        }
      }
      else {
        _LVL290();
        FUN_00010f34();
        FUN_00010f40();
        FUN_00010f4c();
        FUN_00010f60();
        FUN_00010f72();
      }
      *(undefined *)(uVar4 * 0x5d8 + 1000) = 0;
    }
  }
  else {
    if ((*(char *)(iVar2 + 0x1c) == '\x01') &&
       (cVar1 = *(char *)(iVar3 + 0x34a) + -1, *(char *)(iVar3 + 0x34a) = cVar1, cVar1 == '\0')) {
      uVar4 = *(byte *)(iVar3 + 0x57) + 10 & 0xff;
      _LVL305();
      *(undefined *)(uVar4 * 0x1b0 + 0x1c) = 0;
      *extraout_a0 = (char)uVar4;
      extraout_a0[1] = 0;
      _L0();
      FUN_0001102c();
    }
  }
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL290(void)

{
  int unaff_s1;
  int unaff_s6;
  
  _LVL290();
  FUN_00010f34();
  FUN_00010f40();
  FUN_00010f4c();
  FUN_00010f60();
  FUN_00010f72();
  *(undefined *)(unaff_s1 + unaff_s6 * 0x5d8 + 1000) = 0;
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010f34(void)

{
  int unaff_s1;
  int unaff_s6;
  
  FUN_00010f34();
  FUN_00010f40();
  FUN_00010f4c();
  FUN_00010f60();
  FUN_00010f72();
  *(undefined *)(unaff_s1 + unaff_s6 * 0x5d8 + 1000) = 0;
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010f40(void)

{
  int unaff_s1;
  int unaff_s6;
  
  FUN_00010f40();
  FUN_00010f4c();
  FUN_00010f60();
  FUN_00010f72();
  *(undefined *)(unaff_s1 + unaff_s6 * 0x5d8 + 1000) = 0;
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010f4c(void)

{
  int unaff_s1;
  int unaff_s6;
  
  FUN_00010f4c();
  FUN_00010f60();
  FUN_00010f72();
  *(undefined *)(unaff_s1 + unaff_s6 * 0x5d8 + 1000) = 0;
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010f60(void)

{
  int unaff_s1;
  int unaff_s6;
  
  FUN_00010f60();
  FUN_00010f72();
  *(undefined *)(unaff_s1 + unaff_s6 * 0x5d8 + 1000) = 0;
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010f72(void)

{
  int unaff_s1;
  int unaff_s6;
  
  FUN_00010f72();
  *(undefined *)(unaff_s1 + unaff_s6 * 0x5d8 + 1000) = 0;
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010f8a(void)

{
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s1;
  int unaff_s6;
  
  _L0();
  *(undefined *)(unaff_s1 + unaff_s6 * 0x5d8 + 1000) = 0;
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL305(void)

{
  undefined unaff_s1;
  undefined *extraout_a0;
  int unaff_s2;
  int unaff_s5;
  
  _LVL305();
  *(undefined *)(unaff_s2 + unaff_s5 + 0x1c) = 0;
  *extraout_a0 = unaff_s1;
  extraout_a0[1] = 0;
  _L0();
  FUN_0001102c();
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_0001102c();
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001102c(void)

{
  FUN_0001102c();
  FUN_00010f8a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6762

void mm_cfg_element_keepalive_timestamp_update(void)

{
  undefined4 in_a0;
  
  _L0(_DAT_00000024,_DAT_00000028);
  _DAT_00000024 = _DAT_00000024 + 1;
  _DAT_00000028 = in_a0;
  return;
}



void _L0(int iRam00000024,undefined4 uRam00000028)

{
  undefined4 in_a0;
  
  _L0(iRam00000024,uRam00000028);
  iRam00000024 = iRam00000024 + 1;
  uRam00000028 = in_a0;
  return;
}



// DWARF DIE: 66f6

void mm_send_connection_loss_ind(vif_info_tag *p_vif_entry)

{
  uint8_t *extraout_a0;
  
  _L0();
  *extraout_a0 = p_vif_entry->index;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined *extraout_a0;
  
  _L0();
  *extraout_a0 = *(undefined *)(unaff_s0 + 0x57);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 82bb

void mm_ap_probe_cfm(void *env,uint32_t status)

{
  if (-1 < (int)(status << 8)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  *(undefined *)((int)env + 0x74) = 0;
  return;
}



// WARNING: Variable defined which should be unmapped: cur_us
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 65ab

void mm_check_rssi(vif_info_tag *vif_entry,int8_t rssi)

{
  char cVar1;
  uint8_t uVar2;
  int iVar3;
  uint8_t *extraout_a0;
  uint8_t *extraout_a0_00;
  undefined3 in_register_0000202d;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint8_t uVar7;
  int iVar8;
  longlong cur_us;
  
  iVar4 = CONCAT31(in_register_0000202d,rssi);
  iVar8 = (int)*(char *)&(vif_entry->u).field_0x19;
  iVar3 = (int)*(char *)&(vif_entry->u).field_0x1a;
  cVar1 = *(char *)&(vif_entry->u).field_0x1b;
  uVar7 = *(uint8_t *)&(vif_entry->u).field_0x1c;
  *(int8_t *)&(vif_entry->u).field_0x19 = rssi;
  FUN_000110da();
  if (iVar8 != 0) {
    uVar5 = (uint)(-iRam00000000 != 0);
    if (((int)(-_DAT_00000004 - uVar5) < 1) &&
       ((-_DAT_00000004 != uVar5 || ((uint)-iRam00000000 < 0x1e8481)))) goto _L0;
  }
  FUN_0001111a();
  uVar2 = vif_entry->index;
  extraout_a0[1] = uVar7;
  extraout_a0[2] = rssi;
  *extraout_a0 = uVar2;
  iRam00000000 = 0;
  _DAT_00000004 = 0;
  _L0();
_L0:
  if (iVar3 != 0) {
    iVar6 = (int)cVar1;
    if (uVar7 == '\0') {
      if (iVar4 < iVar8) {
        uVar7 = iVar4 < iVar3 - iVar6;
      }
    }
    else {
      if (iVar8 < iVar4) {
        uVar7 = iVar4 <= iVar3 + iVar6;
      }
    }
    if (*(uint8_t *)&(vif_entry->u).field_0x1c != uVar7) {
      FUN_0001116e();
      uVar2 = vif_entry->index;
      extraout_a0_00[1] = uVar7;
      extraout_a0_00[2] = rssi;
      *extraout_a0_00 = uVar2;
      _L0();
    }
    *(uint8_t *)&(vif_entry->u).field_0x1c = uVar7;
  }
  return;
}



void FUN_000110da(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined *extraout_a0;
  undefined *extraout_a0_00;
  uint uVar2;
  uint unaff_s2;
  int unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  int unaff_s6;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  FUN_000110da();
  if (unaff_s6 != 0) {
    uVar2 = (uint)(in_stack_00000008 < in_stack_00000008 - *unaff_s4);
    if (((int)((in_stack_0000000c - unaff_s4[1]) - uVar2) < 1) &&
       ((in_stack_0000000c - unaff_s4[1] != uVar2 || (in_stack_00000008 - *unaff_s4 < 0x1e8481))))
    goto _L0;
  }
  FUN_0001111a();
  uVar1 = *(undefined *)(unaff_s0 + 0x57);
  extraout_a0[1] = (char)unaff_s2;
  extraout_a0[2] = (char)unaff_s3;
  *extraout_a0 = uVar1;
  *unaff_s4 = in_stack_00000008;
  unaff_s4[1] = in_stack_0000000c;
  _L0();
_L0:
  if (unaff_s1 != 0) {
    if (unaff_s2 == 0) {
      if (unaff_s3 < unaff_s6) {
        unaff_s2 = (uint)(unaff_s3 < unaff_s1 - unaff_s5);
      }
    }
    else {
      if (unaff_s6 < unaff_s3) {
        unaff_s2 = unaff_s1 + unaff_s5 < unaff_s3 ^ 1;
      }
    }
    if (*(byte *)(unaff_s0 + 0x78) != unaff_s2) {
      FUN_0001116e();
      uVar1 = *(undefined *)(unaff_s0 + 0x57);
      extraout_a0_00[1] = (char)unaff_s2;
      extraout_a0_00[2] = (char)unaff_s3;
      *extraout_a0_00 = uVar1;
      _L0();
    }
    *(char *)(unaff_s0 + 0x78) = (char)unaff_s2;
  }
  return;
}



void FUN_0001111a(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined *extraout_a0;
  undefined *extraout_a0_00;
  uint unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  char unaff_s5;
  int unaff_s6;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001111a();
  uVar1 = *(undefined *)(unaff_s0 + 0x57);
  extraout_a0[1] = (char)unaff_s2;
  extraout_a0[2] = (char)unaff_s3;
  *extraout_a0 = uVar1;
  *unaff_s4 = in_stack_00000008;
  unaff_s4[1] = in_stack_0000000c;
  _L0();
  if (unaff_s1 != 0) {
    if (unaff_s2 == 0) {
      if (unaff_s3 < unaff_s6) {
        unaff_s2 = (uint)(unaff_s3 < unaff_s1 - unaff_s5);
      }
    }
    else {
      if (unaff_s6 < unaff_s3) {
        unaff_s2 = unaff_s1 + unaff_s5 < unaff_s3 ^ 1;
      }
    }
    if (*(byte *)(unaff_s0 + 0x78) != unaff_s2) {
      FUN_0001116e();
      uVar1 = *(undefined *)(unaff_s0 + 0x57);
      extraout_a0_00[1] = (char)unaff_s2;
      extraout_a0_00[2] = (char)unaff_s3;
      *extraout_a0_00 = uVar1;
      _L0();
    }
    *(char *)(unaff_s0 + 0x78) = (char)unaff_s2;
  }
  return;
}



void _L0(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined *extraout_a0;
  uint unaff_s2;
  int unaff_s3;
  char unaff_s5;
  int unaff_s6;
  
  _L0();
  if (unaff_s1 != 0) {
    if (unaff_s2 == 0) {
      if (unaff_s3 < unaff_s6) {
        unaff_s2 = (uint)(unaff_s3 < unaff_s1 - unaff_s5);
      }
    }
    else {
      if (unaff_s6 < unaff_s3) {
        unaff_s2 = unaff_s1 + unaff_s5 < unaff_s3 ^ 1;
      }
    }
    if (*(byte *)(unaff_s0 + 0x78) != unaff_s2) {
      FUN_0001116e();
      uVar1 = *(undefined *)(unaff_s0 + 0x57);
      extraout_a0[1] = (char)unaff_s2;
      extraout_a0[2] = (char)unaff_s3;
      *extraout_a0 = uVar1;
      _L0();
    }
    *(char *)(unaff_s0 + 0x78) = (char)unaff_s2;
  }
  return;
}



void FUN_0001116e(void)

{
  undefined uVar1;
  int unaff_s0;
  undefined *extraout_a0;
  undefined unaff_s2;
  undefined unaff_s3;
  
  FUN_0001116e();
  uVar1 = *(undefined *)(unaff_s0 + 0x57);
  extraout_a0[1] = unaff_s2;
  extraout_a0[2] = unaff_s3;
  *extraout_a0 = uVar1;
  _L0();
  *(undefined *)(unaff_s0 + 0x78) = unaff_s2;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined unaff_s2;
  
  _L0();
  *(undefined *)(unaff_s0 + 0x78) = unaff_s2;
  return;
}



// DWARF DIE: 652e

void mm_send_csa_traffic_ind(uint8_t vif_index,_Bool enable)

{
  uint8_t *extraout_a0;
  
  _L0();
  *extraout_a0 = vif_index;
  extraout_a0[1] = enable;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined unaff_s0;
  undefined unaff_s1;
  undefined *extraout_a0;
  
  _L0();
  *extraout_a0 = unaff_s1;
  extraout_a0[1] = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 7de6

_Bool mm_check_beacon(rx_hd *rhd,vif_info_tag *vif_entry,sta_info_tag *p_sta_entry,uint32_t *tim)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined4 uVar8;
  undefined3 extraout_var_04;
  int extraout_a1;
  uint uVar9;
  uint uVar10;
  uint32_t uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  uint uVar18;
  uint32_t uVar19;
  
  uVar1 = rhd->frmlen;
  iVar14 = *(int *)(rhd->first_pbd_ptr + 8);
  *(undefined *)&(vif_entry->u).field_0x18 = 0;
  iRam00000000 += 1;
  iVar16 = *(int *)&(vif_entry->u).field_0x14;
  if (*(char *)&(vif_entry->u).field_0x1e != '\0') {
    _LVL346(uRam00000020);
    *(undefined *)&(vif_entry->u).field_0x1e = 0;
  }
  if ((((30000000 - _DAT_44b00120) + *(int *)&(vif_entry->u).field_0x10 < 0) &&
      (DAT_00000023 != '\0')) && (bVar5 = FUN_00011274(), CONCAT31(extraout_var,bVar5) == 0)) {
    *(int *)&(vif_entry->u).field_0x10 = _DAT_44b00120;
  }
  _L0();
  bVar5 = FUN_0001129e();
  pcVar17 = (char *)(iVar14 + 0x24);
  *tim = 0;
  uVar8 = CONCAT31(extraout_var_00,bVar5);
  for (uVar3 = uVar1 - 0x24; uVar3 &= 0xffff, 1 < uVar3; uVar3 += -2 - uVar15) {
    uVar15 = (uint)(byte)pcVar17[1];
    if (uVar3 <= uVar15 + 1) break;
    if (*pcVar17 == '\x05') {
      *tim = (uint32_t)pcVar17;
    }
    else {
      bVar5 = FUN_00011444(pcVar17 + 2,uVar15,uVar8);
      uVar8 = CONCAT31(extraout_var_04,bVar5);
    }
    pcVar17 = pcVar17 + 2 + uVar15;
  }
  *(undefined4 *)&(vif_entry->u).field_0x14 = uVar8;
  uVar1 = p_sta_entry->drift;
  uVar2 = *(ushort *)(iVar14 + 0x20);
  uVar3 = *(uint *)(iVar14 + 0x18);
  uVar19 = rhd->tsflo;
  iVar4 = (uint)uVar2 * 0x400;
  iVar14 = *(int *)(iVar14 + 0x1c);
  uVar15 = (uint)*(ushort *)&vif_entry->u;
  if (uVar15 == 0) {
    uVar11 = *tim;
    uVar15 = 1;
    if ((uVar11 != 0) && (uVar15 = (uint)*(byte *)(uVar11 + 2), uVar15 == 0)) {
      uVar15 = (uint)*(byte *)(uVar11 + 3);
    }
  }
  bVar5 = FUN_00011338();
  bVar6 = _LVL368();
  bVar7 = _LVL371();
  uVar12 = uVar3 - CONCAT31(extraout_var_02,bVar6);
  uVar18 = iVar14 - (uint)(uVar3 < uVar12);
  uVar10 = CONCAT31(extraout_var_03,bVar7) * iVar4;
  uVar9 = extraout_a1 * iVar4 +
          (int)((ulonglong)CONCAT31(extraout_var_03,bVar7) * (ulonglong)uVar2 * 0x400 >> 0x20);
  if ((uVar9 < uVar18) || ((uVar18 == uVar9 && (uVar10 < uVar12)))) {
    uVar12 = uVar10;
  }
  iVar13 = ((uVar12 + uVar15 * iVar4) -
           ((uVar3 - uVar19) + (CONCAT31(extraout_var_01,bVar5) - CONCAT31(extraout_var_02,bVar6))))
           - uVar1 * uVar15;
  iVar14 = iVar13 + -400;
  if (iVar13 + (-0xc80 - _DAT_44b00120) < 0) {
    iVar14 += iVar4;
  }
  if ((_DAT_44b00120 - _DAT_44b080a4) + iVar14 != (vif_entry->tbtt_timer).time) {
    FUN_000113e0();
  }
  return (_Bool)(*(int *)&(vif_entry->u).field_0x14 != iVar16);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _LVL346(undefined4 uRam00000020)

{
  ushort uVar1;
  ushort uVar2;
  int unaff_s0;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined4 uVar8;
  undefined3 extraout_var_04;
  int extraout_a1;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int unaff_s2;
  uint uVar13;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  char **unaff_s6;
  int unaff_s7;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  
  _LVL346(uRam00000020);
  *(undefined *)(unaff_s0 + 0x7a) = 0;
  if ((((30000000 - _DAT_44b00120) + *(int *)(unaff_s0 + 0x6c) < 0) && (uRam00000020._3_1_ != '\0'))
     && (bVar5 = FUN_00011274(), CONCAT31(extraout_var,bVar5) == 0)) {
    *(int *)(unaff_s0 + 0x6c) = _DAT_44b00120;
  }
  _L0();
  bVar5 = FUN_0001129e();
  pcVar14 = (char *)(unaff_s2 + 0x24);
  *unaff_s6 = (char *)0x0;
  uVar8 = CONCAT31(extraout_var_00,bVar5);
  for (uVar3 = unaff_s7 - 0x24; uVar3 &= 0xffff, 1 < uVar3; uVar3 += -2 - uVar13) {
    uVar13 = (uint)(byte)pcVar14[1];
    if (uVar3 <= uVar13 + 1) break;
    if (*pcVar14 == '\x05') {
      *unaff_s6 = pcVar14;
    }
    else {
      bVar5 = FUN_00011444(pcVar14 + 2,uVar13,uVar8);
      uVar8 = CONCAT31(extraout_var_04,bVar5);
    }
    pcVar14 = pcVar14 + 2 + uVar13;
  }
  *(undefined4 *)(unaff_s0 + 0x70) = uVar8;
  uVar1 = *(ushort *)(unaff_s3 + 0x16);
  uVar2 = *(ushort *)(unaff_s2 + 0x20);
  uVar3 = *(uint *)(unaff_s2 + 0x18);
  iVar16 = *(int *)(unaff_s5 + 0x20);
  iVar4 = (uint)uVar2 * 0x400;
  iVar10 = *(int *)(unaff_s2 + 0x1c);
  uVar13 = (uint)*(ushort *)(unaff_s0 + 0x5c);
  if (uVar13 == 0) {
    pcVar14 = *unaff_s6;
    uVar13 = 1;
    if ((pcVar14 != (char *)0x0) && (uVar13 = (uint)(byte)pcVar14[2], uVar13 == 0)) {
      uVar13 = (uint)(byte)pcVar14[3];
    }
  }
  bVar5 = FUN_00011338();
  bVar6 = _LVL368();
  bVar7 = _LVL371();
  uVar12 = uVar3 - CONCAT31(extraout_var_02,bVar6);
  uVar15 = iVar10 - (uint)(uVar3 < uVar12);
  uVar11 = CONCAT31(extraout_var_03,bVar7) * iVar4;
  uVar9 = extraout_a1 * iVar4 +
          (int)((ulonglong)CONCAT31(extraout_var_03,bVar7) * (ulonglong)uVar2 * 0x400 >> 0x20);
  if ((uVar9 < uVar15) || ((uVar15 == uVar9 && (uVar11 < uVar12)))) {
    uVar12 = uVar11;
  }
  iVar16 = ((uVar12 + uVar13 * iVar4) -
           ((uVar3 - iVar16) + (CONCAT31(extraout_var_01,bVar5) - CONCAT31(extraout_var_02,bVar6))))
           - uVar1 * uVar13;
  iVar10 = iVar16 + -400;
  if (iVar16 + (-0xc80 - _DAT_44b00120) < 0) {
    iVar10 += iVar4;
  }
  if ((_DAT_44b00120 - _DAT_44b080a4) + iVar10 != *(int *)(unaff_s0 + 0x24)) {
    FUN_000113e0();
  }
  return *(int *)(unaff_s0 + 0x70) != unaff_s4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_00011274(void)

{
  ushort uVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined4 uVar8;
  undefined3 extraout_var_04;
  int extraout_a1;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int unaff_s2;
  uint uVar13;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  char **unaff_s6;
  int unaff_s7;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  
  bVar5 = FUN_00011274();
  if (CONCAT31(extraout_var,bVar5) == 0) {
    *(undefined4 *)(unaff_s0 + 0x6c) = *(undefined4 *)(unaff_s1 + 0x120);
  }
  _L0();
  bVar5 = FUN_0001129e();
  pcVar14 = (char *)(unaff_s2 + 0x24);
  *unaff_s6 = (char *)0x0;
  uVar8 = CONCAT31(extraout_var_00,bVar5);
  for (uVar3 = unaff_s7 - 0x24; uVar3 &= 0xffff, 1 < uVar3; uVar3 += -2 - uVar13) {
    uVar13 = (uint)(byte)pcVar14[1];
    if (uVar3 <= uVar13 + 1) break;
    if (*pcVar14 == '\x05') {
      *unaff_s6 = pcVar14;
    }
    else {
      bVar5 = FUN_00011444(pcVar14 + 2,uVar13,uVar8);
      uVar8 = CONCAT31(extraout_var_04,bVar5);
    }
    pcVar14 = pcVar14 + 2 + uVar13;
  }
  *(undefined4 *)(unaff_s0 + 0x70) = uVar8;
  uVar1 = *(ushort *)(unaff_s3 + 0x16);
  uVar2 = *(ushort *)(unaff_s2 + 0x20);
  uVar3 = *(uint *)(unaff_s2 + 0x18);
  iVar16 = *(int *)(unaff_s5 + 0x20);
  iVar4 = (uint)uVar2 * 0x400;
  iVar10 = *(int *)(unaff_s2 + 0x1c);
  uVar13 = (uint)*(ushort *)(unaff_s0 + 0x5c);
  if (uVar13 == 0) {
    pcVar14 = *unaff_s6;
    uVar13 = 1;
    if ((pcVar14 != (char *)0x0) && (uVar13 = (uint)(byte)pcVar14[2], uVar13 == 0)) {
      uVar13 = (uint)(byte)pcVar14[3];
    }
  }
  bVar5 = FUN_00011338();
  bVar6 = _LVL368();
  bVar7 = _LVL371();
  uVar12 = uVar3 - CONCAT31(extraout_var_02,bVar6);
  uVar15 = iVar10 - (uint)(uVar3 < uVar12);
  uVar11 = CONCAT31(extraout_var_03,bVar7) * iVar4;
  uVar9 = extraout_a1 * iVar4 +
          (int)((ulonglong)CONCAT31(extraout_var_03,bVar7) * (ulonglong)uVar2 * 0x400 >> 0x20);
  if ((uVar9 < uVar15) || ((uVar15 == uVar9 && (uVar11 < uVar12)))) {
    uVar12 = uVar11;
  }
  iVar16 = ((uVar12 + uVar13 * iVar4) -
           ((uVar3 - iVar16) + (CONCAT31(extraout_var_01,bVar5) - CONCAT31(extraout_var_02,bVar6))))
           - uVar1 * uVar13;
  iVar10 = iVar16 + -400;
  if (iVar16 + (-0xc80 - _DAT_44b00120) < 0) {
    iVar10 += iVar4;
  }
  if ((_DAT_44b00120 - _DAT_44b080a4) + iVar10 != *(int *)(unaff_s0 + 0x24)) {
    FUN_000113e0();
  }
  return *(int *)(unaff_s0 + 0x70) != unaff_s4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _L0(void)

{
  ushort uVar1;
  ushort uVar2;
  int unaff_s0;
  uint unaff_s1;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 uVar8;
  undefined3 extraout_var_03;
  int extraout_a1;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int unaff_s2;
  uint uVar13;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  char **unaff_s6;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  
  _L0();
  bVar5 = FUN_0001129e();
  pcVar14 = (char *)(unaff_s2 + 0x24);
  *unaff_s6 = (char *)0x0;
  uVar8 = CONCAT31(extraout_var,bVar5);
  for (uVar3 = unaff_s1 & 0xffff; 1 < uVar3; uVar3 = uVar3 + (-2 - uVar13) & 0xffff) {
    uVar13 = (uint)(byte)pcVar14[1];
    if (uVar3 <= uVar13 + 1) break;
    if (*pcVar14 == '\x05') {
      *unaff_s6 = pcVar14;
    }
    else {
      bVar5 = FUN_00011444(pcVar14 + 2,uVar13,uVar8);
      uVar8 = CONCAT31(extraout_var_03,bVar5);
    }
    pcVar14 = pcVar14 + 2 + uVar13;
  }
  *(undefined4 *)(unaff_s0 + 0x70) = uVar8;
  uVar1 = *(ushort *)(unaff_s3 + 0x16);
  uVar2 = *(ushort *)(unaff_s2 + 0x20);
  uVar3 = *(uint *)(unaff_s2 + 0x18);
  iVar16 = *(int *)(unaff_s5 + 0x20);
  iVar4 = (uint)uVar2 * 0x400;
  iVar10 = *(int *)(unaff_s2 + 0x1c);
  uVar13 = (uint)*(ushort *)(unaff_s0 + 0x5c);
  if (uVar13 == 0) {
    pcVar14 = *unaff_s6;
    uVar13 = 1;
    if ((pcVar14 != (char *)0x0) && (uVar13 = (uint)(byte)pcVar14[2], uVar13 == 0)) {
      uVar13 = (uint)(byte)pcVar14[3];
    }
  }
  bVar5 = FUN_00011338();
  bVar6 = _LVL368();
  bVar7 = _LVL371();
  uVar12 = uVar3 - CONCAT31(extraout_var_01,bVar6);
  uVar15 = iVar10 - (uint)(uVar3 < uVar12);
  uVar11 = CONCAT31(extraout_var_02,bVar7) * iVar4;
  uVar9 = extraout_a1 * iVar4 +
          (int)((ulonglong)CONCAT31(extraout_var_02,bVar7) * (ulonglong)uVar2 * 0x400 >> 0x20);
  if ((uVar9 < uVar15) || ((uVar15 == uVar9 && (uVar11 < uVar12)))) {
    uVar12 = uVar11;
  }
  iVar16 = ((uVar12 + uVar13 * iVar4) -
           ((uVar3 - iVar16) + (CONCAT31(extraout_var_00,bVar5) - CONCAT31(extraout_var_01,bVar6))))
           - uVar1 * uVar13;
  iVar10 = iVar16 + -400;
  if (iVar16 + (-0xc80 - _DAT_44b00120) < 0) {
    iVar10 += iVar4;
  }
  if ((_DAT_44b00120 - _DAT_44b080a4) + iVar10 != *(int *)(unaff_s0 + 0x24)) {
    FUN_000113e0();
  }
  return *(int *)(unaff_s0 + 0x70) != unaff_s4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_0001129e(void)

{
  ushort uVar1;
  ushort uVar2;
  int unaff_s0;
  uint unaff_s1;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 uVar8;
  undefined3 extraout_var_03;
  int extraout_a1;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int unaff_s2;
  uint uVar13;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  char **unaff_s6;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  
  bVar5 = FUN_0001129e();
  pcVar14 = (char *)(unaff_s2 + 0x24);
  *unaff_s6 = (char *)0x0;
  uVar8 = CONCAT31(extraout_var,bVar5);
  for (uVar3 = unaff_s1 & 0xffff; 1 < uVar3; uVar3 = uVar3 + (-2 - uVar13) & 0xffff) {
    uVar13 = (uint)(byte)pcVar14[1];
    if (uVar3 <= uVar13 + 1) break;
    if (*pcVar14 == '\x05') {
      *unaff_s6 = pcVar14;
    }
    else {
      bVar5 = FUN_00011444(pcVar14 + 2,uVar13,uVar8);
      uVar8 = CONCAT31(extraout_var_03,bVar5);
    }
    pcVar14 = pcVar14 + 2 + uVar13;
  }
  *(undefined4 *)(unaff_s0 + 0x70) = uVar8;
  uVar1 = *(ushort *)(unaff_s3 + 0x16);
  uVar2 = *(ushort *)(unaff_s2 + 0x20);
  uVar3 = *(uint *)(unaff_s2 + 0x18);
  iVar16 = *(int *)(unaff_s5 + 0x20);
  iVar4 = (uint)uVar2 * 0x400;
  iVar10 = *(int *)(unaff_s2 + 0x1c);
  uVar13 = (uint)*(ushort *)(unaff_s0 + 0x5c);
  if (uVar13 == 0) {
    pcVar14 = *unaff_s6;
    uVar13 = 1;
    if ((pcVar14 != (char *)0x0) && (uVar13 = (uint)(byte)pcVar14[2], uVar13 == 0)) {
      uVar13 = (uint)(byte)pcVar14[3];
    }
  }
  bVar5 = FUN_00011338();
  bVar6 = _LVL368();
  bVar7 = _LVL371();
  uVar12 = uVar3 - CONCAT31(extraout_var_01,bVar6);
  uVar15 = iVar10 - (uint)(uVar3 < uVar12);
  uVar11 = CONCAT31(extraout_var_02,bVar7) * iVar4;
  uVar9 = extraout_a1 * iVar4 +
          (int)((ulonglong)CONCAT31(extraout_var_02,bVar7) * (ulonglong)uVar2 * 0x400 >> 0x20);
  if ((uVar9 < uVar15) || ((uVar15 == uVar9 && (uVar11 < uVar12)))) {
    uVar12 = uVar11;
  }
  iVar16 = ((uVar12 + uVar13 * iVar4) -
           ((uVar3 - iVar16) + (CONCAT31(extraout_var_00,bVar5) - CONCAT31(extraout_var_01,bVar6))))
           - uVar1 * uVar13;
  iVar10 = iVar16 + -400;
  if (iVar16 + (-0xc80 - _DAT_44b00120) < 0) {
    iVar10 += iVar4;
  }
  if ((_DAT_44b00120 - _DAT_44b080a4) + iVar10 != *(int *)(unaff_s0 + 0x24)) {
    FUN_000113e0();
  }
  return *(int *)(unaff_s0 + 0x70) != unaff_s4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_00011338(void)

{
  int unaff_s0;
  uint unaff_s1;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int extraout_a1;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s8;
  uint uVar9;
  int unaff_s9;
  int unaff_s10;
  
  bVar1 = FUN_00011338();
  bVar2 = _LVL368();
  bVar3 = _LVL371();
  uVar7 = unaff_s3 - CONCAT31(extraout_var_00,bVar2);
  uVar9 = unaff_s8 - (uint)(unaff_s3 < uVar7);
  uVar6 = CONCAT31(extraout_var_01,bVar3) * unaff_s1;
  uVar4 = extraout_a1 * unaff_s1 +
          (int)((ulonglong)CONCAT31(extraout_var_01,bVar3) * (ulonglong)unaff_s1 >> 0x20);
  if ((uVar4 < uVar9) || ((uVar9 == uVar4 && (uVar6 < uVar7)))) {
    uVar7 = uVar6;
  }
  iVar8 = ((uVar7 + unaff_s2 * unaff_s1) -
          ((unaff_s3 - unaff_s10) + (CONCAT31(extraout_var,bVar1) - CONCAT31(extraout_var_00,bVar2))
          )) - unaff_s9 * unaff_s2;
  iVar5 = iVar8 + -400;
  if (iVar8 + (-0xc80 - _DAT_44b00120) < 0) {
    iVar5 += unaff_s1;
  }
  if ((_DAT_44b00120 - _DAT_44b080a4) + iVar5 != *(int *)(unaff_s0 + 0x24)) {
    FUN_000113e0();
  }
  return *(int *)(unaff_s0 + 0x70) != unaff_s4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _LVL368(void)

{
  int unaff_s0;
  uint unaff_s1;
  bool bVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int extraout_a1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s8;
  uint uVar8;
  int unaff_s9;
  int unaff_s10;
  
  bVar1 = _LVL368();
  bVar2 = _LVL371();
  uVar6 = unaff_s3 - CONCAT31(extraout_var,bVar1);
  uVar8 = unaff_s8 - (uint)(unaff_s3 < uVar6);
  uVar5 = CONCAT31(extraout_var_00,bVar2) * unaff_s1;
  uVar3 = extraout_a1 * unaff_s1 +
          (int)((ulonglong)CONCAT31(extraout_var_00,bVar2) * (ulonglong)unaff_s1 >> 0x20);
  if ((uVar3 < uVar8) || ((uVar8 == uVar3 && (uVar5 < uVar6)))) {
    uVar6 = uVar5;
  }
  iVar7 = ((uVar6 + unaff_s2 * unaff_s1) -
          ((unaff_s3 - unaff_s10) + (unaff_s6 - CONCAT31(extraout_var,bVar1)))) -
          unaff_s9 * unaff_s2;
  iVar4 = iVar7 + -400;
  if (iVar7 + (-0xc80 - _DAT_44b00120) < 0) {
    iVar4 += unaff_s1;
  }
  if ((_DAT_44b00120 - _DAT_44b080a4) + iVar4 != *(int *)(unaff_s0 + 0x24)) {
    FUN_000113e0();
  }
  return *(int *)(unaff_s0 + 0x70) != unaff_s4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _LVL371(void)

{
  int unaff_s0;
  uint unaff_s1;
  bool bVar1;
  undefined3 extraout_var;
  int extraout_a1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s8;
  uint uVar7;
  int unaff_s9;
  int unaff_s10;
  
  bVar1 = _LVL371();
  uVar5 = unaff_s3 - unaff_s5;
  uVar7 = unaff_s8 - (uint)(unaff_s3 < uVar5);
  uVar4 = CONCAT31(extraout_var,bVar1) * unaff_s1;
  uVar2 = extraout_a1 * unaff_s1 +
          (int)((ulonglong)CONCAT31(extraout_var,bVar1) * (ulonglong)unaff_s1 >> 0x20);
  if ((uVar2 < uVar7) || ((uVar7 == uVar2 && (uVar4 < uVar5)))) {
    uVar5 = uVar4;
  }
  iVar6 = ((uVar5 + unaff_s2 * unaff_s1) - ((unaff_s3 - unaff_s10) + (unaff_s6 - unaff_s5))) -
          unaff_s9 * unaff_s2;
  iVar3 = iVar6 + -400;
  if (iVar6 + (-0xc80 - _DAT_44b00120) < 0) {
    iVar3 += unaff_s1;
  }
  if ((_DAT_44b00120 - _DAT_44b080a4) + iVar3 != *(int *)(unaff_s0 + 0x24)) {
    FUN_000113e0();
  }
  return *(int *)(unaff_s0 + 0x70) != unaff_s4;
}



bool FUN_000113e0(void)

{
  int unaff_s0;
  int unaff_s4;
  
  FUN_000113e0();
  return *(int *)(unaff_s0 + 0x70) != unaff_s4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_00011444(char *param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_s0;
  int iVar4;
  uint unaff_s1;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int extraout_a1;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  char **unaff_s6;
  uint uVar13;
  char *pcVar14;
  uint unaff_s9;
  int iVar15;
  char *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  
code_r0x00011444:
  bVar7 = FUN_00011444(param_1,param_2,param_3);
  param_2 = unaff_s9;
  param_1 = unaff_s10;
  do {
    unaff_s1 = unaff_s1 + (in_stack_0000000c - param_2) & 0xffff;
    pcVar14 = param_1 + param_2;
    if (unaff_s1 <= unaff_s11) {
_L0:
      *(uint *)(unaff_s0 + 0x70) = CONCAT31(extraout_var_02,bVar7);
      uVar1 = *(ushort *)(unaff_s3 + 0x16);
      uVar2 = *(ushort *)(unaff_s2 + 0x20);
      uVar3 = *(uint *)(unaff_s2 + 0x18);
      iVar15 = *(int *)(unaff_s5 + 0x20);
      iVar4 = (uint)uVar2 * 0x400;
      iVar9 = *(int *)(unaff_s2 + 0x1c);
      uVar12 = (uint)*(ushort *)(unaff_s0 + 0x5c);
      if (uVar12 == 0) {
        pcVar14 = *unaff_s6;
        uVar12 = 1;
        if ((pcVar14 != (char *)0x0) && (uVar12 = (uint)(byte)pcVar14[2], uVar12 == 0)) {
          uVar12 = (uint)(byte)pcVar14[3];
        }
      }
      bVar7 = FUN_00011338();
      bVar5 = _LVL368();
      bVar6 = _LVL371();
      uVar11 = uVar3 - CONCAT31(extraout_var_00,bVar5);
      uVar13 = iVar9 - (uint)(uVar3 < uVar11);
      uVar10 = CONCAT31(extraout_var_01,bVar6) * iVar4;
      uVar8 = extraout_a1 * iVar4 +
              (int)((ulonglong)CONCAT31(extraout_var_01,bVar6) * (ulonglong)uVar2 * 0x400 >> 0x20);
      if ((uVar8 < uVar13) || ((uVar13 == uVar8 && (uVar10 < uVar11)))) {
        uVar11 = uVar10;
      }
      iVar15 = ((uVar11 + uVar12 * iVar4) -
               ((uVar3 - iVar15) + (CONCAT31(extraout_var,bVar7) - CONCAT31(extraout_var_00,bVar5)))
               ) - uVar1 * uVar12;
      iVar9 = iVar15 + -400;
      if (iVar15 + (-0xc80 - _DAT_44b00120) < 0) {
        iVar9 += iVar4;
      }
      if ((_DAT_44b00120 - _DAT_44b080a4) + iVar9 != *(int *)(unaff_s0 + 0x24)) {
        FUN_000113e0();
      }
      return *(int *)(unaff_s0 + 0x70) != unaff_s4;
    }
    param_2 = (uint)(byte)pcVar14[1];
    param_1 = pcVar14 + 2;
    if (unaff_s1 <= param_2 + 1) goto _L0;
    param_3 = CONCAT31(extraout_var_02,bVar7);
    unaff_s9 = param_2;
    unaff_s10 = param_1;
    if (*pcVar14 != '\x05') goto code_r0x00011444;
    *unaff_s6 = pcVar14;
  } while( true );
}



// DWARF DIE: 7c55

void mm_sta_tbtt(void *env)

{
  int extraout_a0;
  byte bVar1;
  
  if (*(char *)((int)env + 0x58) == '\0') {
    return;
  }
  if (*(char *)((int)env + 0x79) != '\0') {
    bVar1 = *(char *)((int)env + 0x79) - 1;
    *(byte *)((int)env + 0x79) = bVar1;
    if (bVar1 < 2) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (bVar1 == 2) {
      FUN_00011494();
    }
  }
  FUN_000114be();
  FUN_000114c8();
  FUN_000114d4();
  FUN_000114de();
  if (extraout_a0 != 0) {
    *(uint *)((int)env + 4) = *(uint *)((int)env + 4) | 1;
    bVar1 = *(char *)((int)env + 0x74) + 1;
    *(byte *)((int)env + 0x74) = bVar1;
    if (100 < bVar1) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (bVar1 == 100) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_00011494(void)

{
  int unaff_s0;
  int extraout_a0;
  byte bVar1;
  
  FUN_00011494();
  FUN_000114be();
  FUN_000114c8();
  FUN_000114d4();
  FUN_000114de();
  if (extraout_a0 != 0) {
    *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) | 1;
    bVar1 = *(char *)(unaff_s0 + 0x74) + 1;
    *(byte *)(unaff_s0 + 0x74) = bVar1;
    if (100 < bVar1) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (bVar1 == 100) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_000114be(void)

{
  int unaff_s0;
  int extraout_a0;
  byte bVar1;
  
  FUN_000114be();
  FUN_000114c8();
  FUN_000114d4();
  FUN_000114de();
  if (extraout_a0 != 0) {
    *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) | 1;
    bVar1 = *(char *)(unaff_s0 + 0x74) + 1;
    *(byte *)(unaff_s0 + 0x74) = bVar1;
    if (100 < bVar1) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (bVar1 == 100) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_000114c8(void)

{
  int unaff_s0;
  int extraout_a0;
  byte bVar1;
  
  FUN_000114c8();
  FUN_000114d4();
  FUN_000114de();
  if (extraout_a0 != 0) {
    *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) | 1;
    bVar1 = *(char *)(unaff_s0 + 0x74) + 1;
    *(byte *)(unaff_s0 + 0x74) = bVar1;
    if (100 < bVar1) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (bVar1 == 100) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_000114d4(void)

{
  int unaff_s0;
  int extraout_a0;
  byte bVar1;
  
  FUN_000114d4();
  FUN_000114de();
  if (extraout_a0 != 0) {
    *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) | 1;
    bVar1 = *(char *)(unaff_s0 + 0x74) + 1;
    *(byte *)(unaff_s0 + 0x74) = bVar1;
    if (100 < bVar1) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (bVar1 == 100) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_000114de(void)

{
  int unaff_s0;
  int extraout_a0;
  byte bVar1;
  
  FUN_000114de();
  if (extraout_a0 != 0) {
    *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) | 1;
    bVar1 = *(char *)(unaff_s0 + 0x74) + 1;
    *(byte *)(unaff_s0 + 0x74) = bVar1;
    if (100 < bVar1) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (bVar1 == 100) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



// DWARF DIE: 649c

uint16_t mm_get_rsn_wpa_ie(uint8_t sta_id,uint8_t *wpa_ie)

{
  byte bVar1;
  undefined3 in_register_00002029;
  
  bVar1 = *(byte *)(CONCAT31(in_register_00002029,sta_id) * 0x1b0 + 0x1a);
  FUN_00011584();
  return (uint16_t)(ushort)*(byte *)((uint)bVar1 * 0x5d8 + 0x411);
}



undefined FUN_00011584(void)

{
  int unaff_s0;
  
  FUN_00011584();
  return *(undefined *)(unaff_s0 + 0x411);
}


