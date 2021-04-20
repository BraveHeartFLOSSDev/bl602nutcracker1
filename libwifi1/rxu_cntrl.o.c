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
typedef unsigned long long    undefined6;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct ipc_a2e_msg ipc_a2e_msg, *Pipc_a2e_msg;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

struct ipc_a2e_msg {
    uint32_t dummy_word;
    uint32_t msg[127];
};

typedef struct ipc_shared_env_tag ipc_shared_env_tag, *Pipc_shared_env_tag;

typedef struct txdesc_host txdesc_host, *Ptxdesc_host;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

struct mac_addr {
    uint16_t array[3];
};

struct hostdesc {
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

struct txdesc_host {
    uint32_t ready;
    struct hostdesc host;
    uint32_t pad_txdesc[55];
    uint32_t pad_buf[128];
};

struct ipc_shared_env_tag {
    struct ipc_a2e_msg msg_a2e_buf;
    uint32_t pattern_addr;
    struct txdesc_host txdesc0[4];
};

typedef struct txdesc txdesc, *Ptxdesc;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef struct umacdesc umacdesc, *Pumacdesc;

typedef struct lmacdesc lmacdesc, *Plmacdesc;

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct tx_agg_desc tx_agg_desc, *Ptx_agg_desc;

typedef struct txl_buffer_tag txl_buffer_tag, *Ptxl_buffer_tag;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef char __int8_t;

typedef __int8_t int8_t;

typedef union anon_union.conflict33a2_for_field_0 anon_union.conflict33a2_for_field_0, *Panon_union.conflict33a2_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict18bc_for_field_3 anon_union.conflict18bc_for_field_3, *Panon_union.conflict18bc_for_field_3;

typedef union anon_union.conflict18e1_for_field_4 anon_union.conflict18e1_for_field_4, *Panon_union.conflict18e1_for_field_4;

typedef union anon_union.conflict1906_for_field_5 anon_union.conflict1906_for_field_5, *Panon_union.conflict1906_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr {
    struct co_list_hdr * next;
};

struct tx_cfm_tag {
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

union anon_union.conflict18bc_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_compressed_policy_tbl {
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct tx_policy_tbl {
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict33a2_for_field_0 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

union anon_union.conflict1906_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct lmacdesc {
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct umacdesc {
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

union anon_union.conflict18e1_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict18bc_for_field_3 field_3;
    union anon_union.conflict18e1_for_field_4 field_4;
    union anon_union.conflict1906_for_field_5 field_5;
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

struct txdesc {
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct txl_buffer_control {
    union anon_union.conflict33a2_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct dma_desc {
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd {
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_tag {
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

struct tx_agg_desc {
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

struct Cipher_t {
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
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

struct mm_timer_tag {
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct KeyData_t {
    UINT8 Key[16];
    UINT8 RxMICKey[8];
    UINT8 TxMICKey[8];
    UINT32 TxIV32;
    UINT16 TxIV16;
    UINT16 KeyIndex;
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

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

struct ps_env_tag {
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

typedef union anon_union.conflict505a_for_keyEncypt anon_union.conflict505a_for_keyEncypt, *Panon_union.conflict505a_for_keyEncypt;

typedef struct key_Type_TKIP_t key_Type_TKIP_t, *Pkey_Type_TKIP_t;

typedef struct key_Type_AES_t key_Type_AES_t, *Pkey_Type_AES_t;

typedef struct key_Type_WEP_t key_Type_WEP_t, *Pkey_Type_WEP_t;

typedef struct key_Type_WAPI_t key_Type_WAPI_t, *Pkey_Type_WAPI_t;

typedef struct key_Type_AES_CMAC_t key_Type_AES_CMAC_t, *Pkey_Type_AES_CMAC_t;

struct key_Type_AES_t {
    UINT8 key[16];
};

struct key_Type_TKIP_t {
    UINT8 key[16];
    UINT8 txMicKey[8];
    UINT8 rxMicKey[8];
};

struct key_Type_WAPI_t {
    UINT8 keyIndex;
    UINT8 isDefKey;
    UINT8 key[16];
    UINT8 mickey[16];
    UINT8 rxPN[16];
};

struct key_Type_AES_CMAC_t {
    UINT8 ipn[6];
    UINT8 reserved[2];
    UINT8 key[16];
};

struct key_Type_WEP_t {
    UINT8 keyIndex;
    UINT8 isDefaultTx;
    UINT8 key[13];
};

union anon_union.conflict505a_for_keyEncypt {
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
    union anon_union.conflict505a_for_keyEncypt keyEncypt;
};

typedef union anon_union.conflict505a anon_union.conflict505a, *Panon_union.conflict505a;

union anon_union.conflict505a {
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

typedef struct anon_struct.conflict4397 anon_struct.conflict4397, *Panon_struct.conflict4397;

struct anon_struct.conflict4397 {
    uint8_t mac[6];
    uint8_t used;
};

typedef struct apm apm, *Papm;

typedef struct apm_start_req apm_start_req, *Papm_start_req;

typedef struct co_list co_list, *Pco_list;

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct apm_start_req {
};

struct apm {
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
    struct anon_struct.conflict4397 aid_list[10];
    undefined field_0x5e;
    undefined field_0x5f;
};

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list {
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag {
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct mic_calc mic_calc, *Pmic_calc;

struct mic_calc {
    uint32_t mic_key_least;
    uint32_t mic_key_most;
    uint32_t last_m_i;
    uint8_t last_m_i_len;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag {
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag {
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag {
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct supplicantData supplicantData, *PsupplicantData;

typedef struct IEEEtypes_SsIdElement_t IEEEtypes_SsIdElement_t, *PIEEEtypes_SsIdElement_t;

typedef struct customMIB_RSNStats_t customMIB_RSNStats_t, *PcustomMIB_RSNStats_t;

typedef struct RSNConfig_t RSNConfig_t, *PRSNConfig_t;

typedef struct keyMgmtInfoSta_t keyMgmtInfoSta_t, *PkeyMgmtInfoSta_t;

typedef struct SecurityParams_t SecurityParams_t, *PSecurityParams_t;

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

typedef struct cipher_key_t cipher_key_t, *Pcipher_key_t;

typedef struct MIC_Error_t MIC_Error_t, *PMIC_Error_t;

typedef struct cm_ConnectionInfo cm_ConnectionInfo, *Pcm_ConnectionInfo;

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

typedef union ckd ckd, *Pckd;

typedef enum MIC_Fail_State_e {
    FIRST_MIC_FAIL_IN_60_SEC=1,
    SECOND_MIC_FAIL_IN_60_SEC=2,
    NO_MIC_FAILURE=0
} MIC_Fail_State_e;

typedef union anon_union.conflict5ef7_for_specDat anon_union.conflict5ef7_for_specDat, *Panon_union.conflict5ef7_for_specDat;

typedef struct cipher_key_buf cipher_key_buf, *Pcipher_key_buf;

typedef struct cipher_key_buf cipher_key_buf_t;

typedef struct eapolHskData_t eapolHskData_t, *PeapolHskData_t;

typedef struct apSpecificData_t apSpecificData_t, *PapSpecificData_t;

typedef struct BufferDesc BufferDesc, *PBufferDesc;

typedef struct BufferDesc BufferDesc_t;

typedef struct ChanBandInfo_t ChanBandInfo_t, *PChanBandInfo_t;

typedef union anon_union.conflict446a_for_intf anon_union.conflict446a_for_intf, *Panon_union.conflict446a_for_intf;

typedef ushort uint16;

typedef struct BandConfig_t BandConfig_t, *PBandConfig_t;

typedef ulong uint32;

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

union anon_union.conflict5ef7_for_specDat {
    struct apSpecificData_t apData;
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

union anon_union.conflict446a_for_intf {
    uint32 Interface;
};

struct customMIB_RSNStats_t {
    UINT8 TKIPICVErrors;
    UINT8 TKIPLocalMICFailures;
    UINT8 TKIPCounterMeasuresInvoked;
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
    union anon_union.conflict5ef7_for_specDat specDat;
    cipher_key_buf_t TxRxCipherKeyBuf;
};

struct BufferDesc {
    union anon_union.conflict446a_for_intf intf;
    uint16 DataLen;
    undefined field_0x6;
    undefined field_0x7;
    void * Buffer;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw {
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

struct bam_env_tag {
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

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

struct chan_tbtt_tag {
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct mm_chan_ctxt_add_req {
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag {
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

typedef struct chan_env_tag chan_env_tag, *Pchan_env_tag;

struct chan_env_tag {
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

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free {
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req {
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef struct cm_ConnectionInfo cm_ConnectionInfo_t;

typedef union anon_union.conflict5ef7 anon_union.conflict5ef7, *Panon_union.conflict5ef7;

union anon_union.conflict5ef7 {
    struct apSpecificData_t apData;
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

struct scan_chan_tag {
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct me_chan_config_req {
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability {
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

struct me_env_tag {
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

struct mobility_domain {
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
};

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct mac_edca_param_set mac_edca_param_set, *Pmac_edca_param_set;

struct mac_edca_param_set {
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset {
    uint8_t length;
    uint8_t array[12];
};

struct mac_ssid {
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct mac_bss_info {
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

struct ke_msg_handler {
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler {
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictbd6_for_u anon_union.conflictbd6_for_u, *Panon_union.conflictbd6_for_u;

typedef struct anon_struct.conflictb76 anon_struct.conflictb76, *Panon_struct.conflictb76;

typedef struct anon_struct.conflictbad anon_struct.conflictbad, *Panon_struct.conflictbad;

struct anon_struct.conflictbad {
    uint32_t key[4];
};

struct anon_struct.conflictb76 {
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

union anon_union.conflictbd6_for_u {
    struct anon_struct.conflictb76 mic;
    struct anon_struct.conflictbad mfp;
};

struct key_info_tag {
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictbd6_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef union anon_union.conflictbd6 anon_union.conflictbd6, *Panon_union.conflictbd6;

union anon_union.conflictbd6 {
    struct anon_struct.conflictb76 mic;
    struct anon_struct.conflictbad mfp;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability {
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef enum anon_enum_8.conflicta31 {
    HAL_MM_TIMER=7,
    KE_EVT_RXUREADY=12,
    VIF_UNKNOWN=4,
    TASK_APM=7,
    KE_EVT_RXREADY=13,
    KE_EVT_KE_TIMER=5,
    TASK_API=13,
    IPC_DMA_CHANNEL_MAX=4,
    TASK_LAST_EMB=12,
    DMA_MAX=2,
    PHY_BAND_MAX=2,
    TASK_NONE=-1,
    MOD_CLASS_ERP_OFDM=6,
    VIF_IBSS=1,
    PS_MODE_OFF=0,
    VIF_AP=2,
    PS_MODE_ON=1,
    KE_EVT_SECONDARY_TBTT=10,
    DMA_DL=0,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    TID_MGT=8,
    HAL_TIMER_MAX=9,
    MOD_CLASS_FHSS=2,
    BROADCAST_STA_IDX_MIN=10,
    VIF_MESH_POINT=3,
    HAL_AC1_TIMER=1,
    KE_EVT_KE_MESSAGE=7,
    AC_BE=1,
    MOD_CLASS_INFRA=1,
    MOD_CLASS_OFDM=7,
    AC_BK=0,
    PHY_BAND_5G=1,
    KE_EVT_IPC_EMB_TXDESC_BCN=20,
    STA_MAX=12,
    DMA_UL=1,
    KE_EVT_MM_TIMER=4,
    KE_EVT_HW_IDLE=8,
    AC_VI=2,
    STA_HT_CAPA=2,
    KE_EVT_TXCFM_AC1=18,
    VIF_STA=0,
    AC_VO=3,
    KE_EVT_TXCFM_AC0=19,
    KE_EVT_TXCFM_AC3=16,
    KE_EVT_RXUPLOADED=11,
    KE_EVT_TXCFM_AC2=17,
    SCANU_IDLE=0,
    TASK_RXU=11,
    HAL_KE_TIMER=8,
    TASK_SCAN=2,
    KE_EVT_DUMP_STATISTIC=26,
    BROADCAST_STA_IDX_MAX=11,
    HAL_AC0_TIMER=0,
    KE_EVT_RESET=0,
    AC_MAX=4,
    KE_EVT_GP_DMA_DL=25,
    MOD_CLASS_ERP_PBCC=4,
    KE_EVT_TXCFM_BCN=15,
    HAL_IDLE_TIMER=5,
    HAL_RX_TIMER=6,
    PS_MODE_ON_DYN=2,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    WMM_AC_BK=1,
    TID_MAX=9,
    TASK_BAM=8,
    WMM_AC_BE=0,
    HAL_BCN_TIMER=4,
    KE_EVT_GP_DMA_UL=3,
    IPC_DMA_CHANNEL_DATA_TX=3,
    TASK_SM=6,
    KE_EVT_IPC_EMB_MSG=6,
    TASK_SCANU=4,
    TASK_DBG=1,
    MOD_CLASS_VHT=9,
    STA_OPMOD_NOTIF=16,
    HAL_AC2_TIMER=2,
    PHY_PRIM=0,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    MOD_CLASS_HR_DSSS=3,
    TID_2=2,
    TID_5=5,
    TID_4=4,
    TID_7=7,
    TID_6=6,
    STA_MFP_CAPA=8,
    STA_VHT_CAPA=4,
    PHY_SEC=1,
    TASK_MM=0,
    TASK_ME=5,
    IPC_DMA_CHANNEL_DATA_RX=1,
    KE_EVT_MAX=27,
    AC_MAX_TYPES=4,
    MOD_CLASS_HT=8,
    KE_EVT_PRIMARY_TBTT=9,
    TASK_MESH=9,
    KE_EVT_IPC_EMB_TXDESC_AC3=21,
    TASK_CFG=12,
    TASK_MAX=14,
    HAL_AC3_TIMER=3,
    STA_QOS_CAPA=1,
    MOD_CLASS_DSSS_OFDM=5,
    TASK_TDLS=3,
    KE_EVT_IPC_EMB_TXDESC_AC2=22,
    KE_EVT_IPC_EMB_TXDESC_AC1=23,
    KE_EVT_IPC_EMB_TXDESC_AC0=24,
    PHY_BAND_2G4=0,
    KE_EVT_TXFRAME_CFM=14,
    KE_EVT_IRQ_USR=2,
    WMM_AC_VO=3,
    WMM_AC_VI=2,
    INVALID_STA_IDX=-1,
    SCANU_STATE_MAX=2,
    KE_EVT_IRQ_UP_BH=1,
    SCANU_SCANNING=1,
    TASK_HOSTAPD_U=10
} anon_enum_8.conflicta31;

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info {
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

typedef struct phyif_utils_recvtable_t phyif_utils_recvtable_t, *Pphyif_utils_recvtable_t;

struct phyif_utils_recvtable_t {
    uint32_t recvtable1;
    uint32_t recvtable2;
    uint32_t recvtable3;
    uint32_t recvtable4;
    uint32_t recvtable5;
    uint32_t recvtable6;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag {
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

typedef struct ipc_emb_env_tag ipc_emb_env_tag, *Pipc_emb_env_tag;

struct ipc_emb_env_tag {
    struct co_list rx_queue;
    struct co_list cfm_queue;
    uint8_t ipc_rxdesc_idx;
    uint8_t ipc_rxbuf_idx;
    uint8_t ipc_radar_buf_idx;
    uint8_t ipc_msge2a_buf_idx;
    uint8_t ipc_dbg_buf_idx;
    uint8_t ipc_msgacke2a_cnt;
    undefined field_0x16;
    undefined field_0x17;
    uint32_t txdesc_idx;
    struct txdesc_host * txdesc;
};

typedef struct me_tkip_mic_failure_ind me_tkip_mic_failure_ind, *Pme_tkip_mic_failure_ind;

struct me_tkip_mic_failure_ind {
    struct mac_addr addr;
    undefined field_0x6;
    undefined field_0x7;
    uint64_t tsc;
    _Bool ga;
    uint8_t keyid;
    uint8_t vif_idx;
    undefined field_0x13;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
};

typedef enum anon_enum_16.conflict2e4e {
    ME_SET_ACTIVE_REQ=5137,
    ME_CONFIG_CFM=5121,
    ME_TX_CREDITS_UPDATE_IND=5131,
    ME_RC_STATS_CFM=5135,
    ME_STA_DEL_REQ=5129,
    ME_TRAFFIC_IND_CFM=5133,
    ME_STA_ADD_CFM=5128,
    ME_SET_CONTROL_PORT_REQ=5124,
    ME_CHAN_CONFIG_REQ=5122,
    ME_SET_PS_DISABLE_REQ=5139,
    ME_STA_ADD_REQ=5127,
    ME_STA_DEL_CFM=5130,
    ME_RC_STATS_REQ=5134,
    ME_SET_CONTROL_PORT_CFM=5125,
    ME_CHAN_CONFIG_CFM=5123,
    ME_SET_PS_DISABLE_CFM=5140,
    ME_RC_SET_RATE_REQ=5136,
    ME_SET_ACTIVE_CFM=5138,
    ME_CONFIG_REQ=5120,
    ME_TKIP_MIC_FAILURE_IND=5126,
    ME_TRAFFIC_IND_REQ=5132
} anon_enum_16.conflict2e4e;

typedef enum rxu_msg_tag {
    RXU_MGT_IND=11264,
    RXU_NULL_DATA=11265
} rxu_msg_tag;

typedef struct rxu_mgt_ind rxu_mgt_ind, *Prxu_mgt_ind;

struct rxu_mgt_ind {
    uint16_t length;
    uint16_t framectrl;
    uint16_t center_freq;
    uint8_t band;
    uint8_t sta_idx;
    uint8_t inst_nbr;
    uint8_t sa[6];
    undefined field_0xf;
    uint32_t tsflo;
    uint32_t tsfhi;
    int8_t rssi;
    int8_t ppm_abs;
    int8_t ppm_rel;
    uint8_t data_rate;
    uint32_t[0] payload;
};

typedef uint wint_t;

typedef long __int32_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct wifi_pkt wifi_pkt, *Pwifi_pkt;

struct wifi_pkt {
    uint32_t pkt[4];
    void * pbuf[4];
    uint16_t len[4];
};

typedef struct llc_snap llc_snap, *Pllc_snap;

struct llc_snap {
    uint16_t dsap_ssap;
    uint16_t control_oui0;
    uint16_t oui1_2;
    uint16_t proto_id;
};

typedef struct llc_snap_short llc_snap_short, *Pllc_snap_short;

struct llc_snap_short {
    uint16_t dsap_ssap;
    uint16_t control_oui0;
    uint16_t oui1_2;
};

typedef struct rxu_mic_calc rxu_mic_calc, *Prxu_mic_calc;

struct rxu_mic_calc {
    struct mic_calc mic_calc;
    uint32_t last_bytes[2];
};

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon {
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

struct rx_cntrl_rx_status {
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

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

struct rx_cntrl_dupli {
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc {
    uint32_t host_id;
};

struct rxu_cntrl_env_tag {
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

typedef enum rxu_cntrl_frame_info_pos {
    RXU_CNTRL_MIC_CHECK_NEEDED=1,
    RXU_CNTRL_PN_CHECK_NEEDED=2,
    RXU_CNTRL_NEW_MESH_PEER=4
} rxu_cntrl_frame_info_pos;

typedef enum rx_status_bits {
    RX_STAT_LEN_UPDATE=8,
    RX_STAT_DELETE=4,
    RX_STAT_FORWARD=1,
    RX_STAT_ALLOC=2,
    RX_STAT_COPY=32,
    RX_STAT_ETH_LEN_UPDATE=16
} rx_status_bits;

typedef struct mac_hdr_long_qos mac_hdr_long_qos, *Pmac_hdr_long_qos;

struct mac_hdr_long_qos {
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
    struct mac_addr addr4;
    uint16_t qos;
};

typedef struct mac_hdr mac_hdr, *Pmac_hdr;

struct mac_hdr {
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
};

typedef struct mac_hdr_long mac_hdr_long, *Pmac_hdr_long;

struct mac_hdr_long {
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
    struct mac_addr addr4;
};

typedef struct mac_hdr_qos mac_hdr_qos, *Pmac_hdr_qos;

struct mac_hdr_qos {
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
    uint16_t qos;
};

typedef struct eth_hdr eth_hdr, *Peth_hdr;

struct eth_hdr {
    struct mac_addr da;
    struct mac_addr sa;
    uint16_t len;
};

typedef union anon_union.conflict57fa anon_union.conflict57fa, *Panon_union.conflict57fa;

union anon_union.conflict57fa {
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

typedef struct pmkElement_t pmkElement_t, *PpmkElement_t;

typedef union anon_union.conflict57fa_for_key anon_union.conflict57fa_for_key, *Panon_union.conflict57fa_for_key;

typedef char SINT8;

union anon_union.conflict57fa_for_key {
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

struct pmkElement_t {
    union anon_union.conflict57fa_for_key key;
    UINT8 PMK[32];
    UINT8 length;
    UINT8 psk_length;
    SINT8 replacementRank;
};

typedef union anon_union.conflicte9 anon_union.conflicte9, *Panon_union.conflicte9;

union anon_union.conflicte9 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte9_for___value anon_union.conflicte9_for___value, *Panon_union.conflicte9_for___value;

union anon_union.conflicte9_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflicte9_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format {
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag {
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag {
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc {
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

struct phy_channel_info {
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd {
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

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

struct rx_payloaddesc {
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc {
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct rxl_hwdesc_env_tag rxl_hwdesc_env_tag, *Prxl_hwdesc_env_tag;

struct rxl_hwdesc_env_tag {
    struct rx_pbd * last;
    struct rx_pbd * free;
};

typedef long SINT32;

typedef enum mm_state_tag {
    MM_IDLE=0,
    MM_STATE_MAX=4,
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3
} mm_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct rxl_cntrl_env_tag rxl_cntrl_env_tag, *Prxl_cntrl_env_tag;

struct rxl_cntrl_env_tag {
    struct co_list ready;
    struct rx_dmadesc * first;
    struct rx_dmadesc * last;
    struct rx_dmadesc * free;
    uint32_t packet_stack_cnt;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag {
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
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

typedef union anon_union.conflict446a anon_union.conflict446a, *Panon_union.conflict446a;

union anon_union.conflict446a {
    uint32 Interface;
    struct cm_ConnectionInfo * connPtr;
};

typedef uint16_t ke_state_t;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict3e21_for_u anon_union.conflict3e21_for_u, *Panon_union.conflict3e21_for_u;

typedef struct anon_struct.conflict3c59 anon_struct.conflict3c59, *Panon_struct.conflict3c59;

typedef struct anon_struct.conflict3d26 anon_struct.conflict3d26, *Panon_struct.conflict3d26;

struct anon_struct.conflict3c59 {
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

struct anon_struct.conflict3d26 {
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

union anon_union.conflict3e21_for_u {
    struct anon_struct.conflict3c59 sta;
    struct anon_struct.conflict3d26 ap;
};

struct vif_info_tag {
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
    union anon_union.conflict3e21_for_u u;
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

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag {
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef union anon_union.conflict3e21 anon_union.conflict3e21, *Panon_union.conflict3e21;

union anon_union.conflict3e21 {
    struct anon_struct.conflict3c59 sta;
    struct anon_struct.conflict3d26 ap;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag {
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag {
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info {
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
    UAPSD_TRAFFIC_HOST=4,
    UAPSD_TRAFFIC_INT=8,
    PS_TRAFFIC_HOST=1,
    PS_TRAFFIC_INT=2,
    UAPSD_TRAFFIC=12
} sta_ps_traffic;

typedef int sta_ps_sp_t;

typedef struct sta_mgmt_sec_info sta_mgmt_sec_info, *Psta_mgmt_sec_info;

typedef struct sta_pol_tbl_cntl sta_pol_tbl_cntl, *Psta_pol_tbl_cntl;

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef struct rc_rate_stats rc_rate_stats, *Prc_rate_stats;

typedef struct step step, *Pstep;

typedef union anon_union.conflict2e09_for_rate_map anon_union.conflict2e09_for_rate_map, *Panon_union.conflict2e09_for_rate_map;

struct rc_rate_stats {
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step {
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

union anon_union.conflict2e09_for_rate_map {
    uint8_t ht[4];
};

struct rc_sta_stats {
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
    union anon_union.conflict2e09_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl {
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info {
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag {
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

struct sta_info_env_tag {
    struct co_list free_sta_list;
};

typedef union anon_union.conflict2e09 anon_union.conflict2e09, *Panon_union.conflict2e09;

union anon_union.conflict2e09 {
    uint8_t ht[4];
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag {
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag {
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag {
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef union anon_union.conflict33a2 anon_union.conflict33a2, *Panon_union.conflict33a2;

union anon_union.conflict33a2 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag {
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag {
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

struct txl_buffer_env_tag {
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict1906 anon_union.conflict1906, *Panon_union.conflict1906;

union anon_union.conflict1906 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict18bc anon_union.conflict18bc, *Panon_union.conflict18bc;

union anon_union.conflict18bc {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict18e1 anon_union.conflict18e1, *Panon_union.conflict18e1;

union anon_union.conflict18e1 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8c3_for__new anon_union.conflict8c3_for__new, *Panon_union.conflict8c3_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict737 anon_struct.conflict737, *Panon_struct.conflict737;

typedef struct anon_struct.conflict87c anon_struct.conflict87c, *Panon_struct.conflict87c;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

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

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict737 {
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

struct anon_struct.conflict87c {
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

union anon_union.conflict8c3_for__new {
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
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
    union anon_union.conflict8c3_for__new _new;
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

typedef union anon_union.conflict8c3 anon_union.conflict8c3, *Panon_union.conflict8c3;

union anon_union.conflict8c3 {
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
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




uint8_t rxu_cntrl_machdr_len_get(uint16_t frame_cntl)

{
  uint8_t uVar1;
  
  uVar1 = '\x18';
  if ((frame_cntl & 0x300) == 0x300) {
    uVar1 = '\x1e';
  }
  if ((frame_cntl & 0xfc) == 0x88) {
    uVar1 = uVar1 + '\x02';
  }
  if ((short)frame_cntl < 0) {
    uVar1 = uVar1 + '\x04';
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool rxu_cntrl_protected_handle(uint8_t *frame,uint32_t statinfo)

{
  ushort *puVar1;
  uint uVar2;
  
  uVar2 = statinfo & 0x1c;
  puVar1 = (ushort *)(frame + DAT_00000008);
  if (uVar2 == 0x18) {
    DAT_00000008 = DAT_00000008 + 8;
    _DAT_00000014 = (uint)puVar1[3];
    _DAT_00000010 = (uint)puVar1[2] << 0x10 | (uint)*(byte *)(puVar1 + 1) | (*puVar1 & 0xff) << 8;
    DAT_00000030 = DAT_00000030 | 3;
    if ((statinfo & 0x400) == 0) {
      _DAT_00000020 = (uint)DAT_00000009 * 0x1b0 + 0x40;
    }
    else {
      _DAT_00000020 = (uint)(puVar1[1] >> 0xe) * 0x68 + (uint)DAT_0000000a * 0x5d8 + 0x420;
    }
  }
  else {
    if (uVar2 == 0x1c) {
      if ((statinfo & 0x400) == 0) {
        _DAT_00000020 = (uint)DAT_00000009 * 0x1b0 + 0x40;
      }
      else {
        _DAT_00000020 = (uint)(puVar1[1] >> 0xe) * 0x68 + (uint)DAT_0000000a * 0x5d8 + 0x420;
      }
      DAT_00000008 = DAT_00000008 + 8;
      _DAT_00000014 = (uint)puVar1[3];
      _DAT_00000010 = CONCAT22(puVar1[2],*puVar1);
      DAT_00000030 = DAT_00000030 | 2;
    }
    else {
      if (uVar2 != 0x14) {
        return false;
      }
      DAT_00000008 = DAT_00000008 + 4;
    }
  }
  return true;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rxu_mpdu_upload_and_indicate(rx_swdesc *p_rx_swdesc)

{
  byte bVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint32_t uVar7;
  
  DAT_00000032 = 0;
  p_rx_swdesc->dma_hdrdesc->flags =
       (uint)DAT_00000009 << 0x10 | (uint)DAT_0000000a << 8 | p_rx_swdesc->dma_hdrdesc->flags | 2;
  uVar7 = (p_rx_swdesc->dma_hdrdesc->hd).first_pbd_ptr;
  uVar2 = FUN_000101b0(**(undefined2 **)(uVar7 + 0x18));
  bVar1 = DAT_00000008;
  uVar6 = DAT_00000008 - uVar2 & 0xff;
  if (uVar6 != 0) {
    if ((DAT_00000008 - uVar2 & 1) != 0) {
      FUN_000101e4(0,0,0x167);
    }
    puVar3 = *(undefined2 **)(uVar7 + 0x18);
    puVar4 = puVar3 + (DAT_00000008 >> 1) + 0x7fffffff;
    puVar5 = puVar3 + (uVar2 >> 1 & 0xff) + 0x7fffffff;
    while (puVar3 <= puVar5) {
      *puVar4 = *puVar5;
      puVar4 = puVar4 + -1;
      puVar5 = puVar5 + -1;
    }
    (p_rx_swdesc->dma_hdrdesc->hd).frmlen = (p_rx_swdesc->dma_hdrdesc->hd).frmlen - (short)uVar6;
    DAT_00000032 = (undefined)uVar6;
    DAT_00000008 = (char)uVar2 + (DAT_00000008 - bVar1);
  }
  uRam00000000 = 0;
  _L0(p_rx_swdesc);
  uVar7 = _DAT_00000048;
  p_rx_swdesc->status = '\x03';
  p_rx_swdesc->host_id = uVar7;
  p_rx_swdesc->frame_len = (uint)(p_rx_swdesc->dma_hdrdesc->hd).frmlen;
  FUN_0001026c(0x40,p_rx_swdesc);
  return;
}



void FUN_000101b0(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int unaff_s2;
  uint uVar7;
  uint uVar8;
  int unaff_s5;
  
  uVar2 = FUN_000101b0();
  bVar1 = *(byte *)(unaff_s2 + 8);
  uVar7 = bVar1 - uVar2;
  uVar8 = uVar7 & 0xff;
  if (uVar8 != 0) {
    if ((uVar7 & 1) != 0) {
      FUN_000101e4(0,0,0x167);
    }
    puVar3 = *(undefined2 **)(unaff_s5 + 0x18);
    puVar4 = puVar3 + (*(byte *)(unaff_s1 + 8) >> 1) + 0x7fffffff;
    puVar6 = puVar3 + (uVar2 >> 1 & 0xff) + 0x7fffffff;
    while (puVar3 <= puVar6) {
      *puVar4 = *puVar6;
      puVar4 = puVar4 + -1;
      puVar6 = puVar6 + -1;
    }
    *(short *)(*(int *)(unaff_s0 + 4) + 0x1c) =
         *(short *)(*(int *)(unaff_s0 + 4) + 0x1c) - (short)uVar8;
    *(char *)(unaff_s1 + 0x32) = (char)uVar8;
    *(byte *)(unaff_s1 + 8) = (char)uVar2 + (*(char *)(unaff_s1 + 8) - bVar1);
  }
  uRam00000000 = 0;
  _L0();
  uVar5 = *(undefined4 *)(unaff_s1 + 0x48);
  *(undefined *)(unaff_s0 + 0x1c) = 3;
  *(undefined4 *)(unaff_s0 + 0x14) = uVar5;
  *(uint *)(unaff_s0 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s0 + 4) + 0x1c);
  FUN_0001026c(0x40);
  return;
}



void FUN_000101e4(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  short unaff_s2;
  uint unaff_s3;
  char unaff_s4;
  int unaff_s5;
  
  FUN_000101e4();
  puVar1 = *(undefined2 **)(unaff_s5 + 0x18);
  puVar2 = puVar1 + (*(byte *)(unaff_s1 + 8) >> 1) + 0x7fffffff;
  puVar4 = puVar1 + (unaff_s3 >> 1 & 0xff) + 0x7fffffff;
  while (puVar1 <= puVar4) {
    *puVar2 = *puVar4;
    puVar2 = puVar2 + -1;
    puVar4 = puVar4 + -1;
  }
  *(short *)(*(int *)(unaff_s0 + 4) + 0x1c) = *(short *)(*(int *)(unaff_s0 + 4) + 0x1c) - unaff_s2;
  *(char *)(unaff_s1 + 0x32) = (char)unaff_s2;
  *(char *)(unaff_s1 + 8) = (char)unaff_s3 + (*(char *)(unaff_s1 + 8) - unaff_s4);
  uRam00000000 = 0;
  _L0();
  uVar3 = *(undefined4 *)(unaff_s1 + 0x48);
  *(undefined *)(unaff_s0 + 0x1c) = 3;
  *(undefined4 *)(unaff_s0 + 0x14) = uVar3;
  *(uint *)(unaff_s0 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s0 + 4) + 0x1c);
  FUN_0001026c(0x40);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  
  _L0();
  uVar1 = *(undefined4 *)(unaff_s1 + 0x48);
  *(undefined *)(unaff_s0 + 0x1c) = 3;
  *(undefined4 *)(unaff_s0 + 0x14) = uVar1;
  *(uint *)(unaff_s0 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s0 + 4) + 0x1c);
  FUN_0001026c(0x40);
  return;
}



void FUN_0001026c(void)

{
  FUN_0001026c();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool rxu_mgt_frame_check(rx_swdesc *swdesc,uint8_t sta_idx)

{
  bool bVar1;
  ushort uVar2;
  undefined uVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  undefined2 *puVar7;
  byte bVar8;
  undefined3 in_register_0000202d;
  undefined4 uVar9;
  uint **ppuVar10;
  char *pcVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  rx_dmadesc *prVar18;
  uint uVar19;
  undefined uStack73;
  int8_t ppm;
  undefined4 uStack72;
  phy_channel_info info;
  
  uVar13 = CONCAT31(in_register_0000202d,sta_idx);
  prVar18 = swdesc->dma_hdrdesc;
  uStack73 = 0;
  puVar4 = *(ushort **)((prVar18->hd).first_pbd_ptr + 0x18);
  uVar2 = *puVar4;
  if ((uVar2 & 0x400) != 0) {
    return true;
  }
  if ((*(byte *)(puVar4 + 0xb) & 0xf) != 0) {
    return true;
  }
  if (uVar13 == 0xff) {
    uVar14 = 0xff;
    if (((prVar18->hd).statinfo & 0x600) == 0) {
      ppuVar10 = _DAT_00000008;
      if (((((uVar2 == 0xb0) || (bVar1 = true, uVar2 == 0)) &&
           (bVar1 = true, *(char *)(puVar4 + 2) == *(char *)(puVar4 + 8))) &&
          ((*(char *)((int)puVar4 + 5) == *(char *)((int)puVar4 + 0x11) &&
           (*(char *)(puVar4 + 3) == *(char *)(puVar4 + 9))))) &&
         ((*(char *)((int)puVar4 + 7) == *(char *)((int)puVar4 + 0x13) &&
          (*(char *)(puVar4 + 4) == *(char *)(puVar4 + 10))))) {
        bVar1 = *(char *)((int)puVar4 + 9) != *(char *)((int)puVar4 + 0x15);
      }
      while (uVar14 = uVar13, ppuVar10 != (uint **)0x0) {
        if (((*(char *)(ppuVar10 + 0x14) == *(char *)(puVar4 + 2)) &&
            (*(char *)((int)ppuVar10 + 0x51) == *(char *)((int)puVar4 + 5))) &&
           ((*(char *)((int)ppuVar10 + 0x52) == *(char *)(puVar4 + 3) &&
            (((*(char *)((int)ppuVar10 + 0x53) == *(char *)((int)puVar4 + 7) &&
              (*(char *)(ppuVar10 + 0x15) == *(char *)(puVar4 + 4))) &&
             (*(char *)((int)ppuVar10 + 0x55) == *(char *)((int)puVar4 + 9))))))) {
          if (*(char *)((int)ppuVar10 + 0x56) == '\0') {
            if (bVar1) {
_L0:
              uVar14 = (uint)*(byte *)((int)ppuVar10 + 0x57);
              break;
            }
          }
          else {
            if ((*(char *)((int)ppuVar10 + 0x56) == '\x02') && (!bVar1)) goto _L0;
          }
        }
        ppuVar10 = (uint **)*ppuVar10;
      }
    }
    _DAT_00000008 = CONCAT12((char)uVar14,_DAT_00000008);
    _DAT_00000008 = (uint **)((uint)_DAT_00000008 & 0xff000000 | (uint)_DAT_00000008);
  }
  _LVL66(&(prVar18->hd).recvec1a,&uStack73);
  uVar3 = uStack73;
  ppuVar10 = _DAT_00000008;
  uVar2 = *puVar4;
  uVar19 = (uint)_DAT_00000008 & 0xff;
  uVar14 = (uint)_DAT_00000008 >> 0x10 & 0xff;
  uVar16 = (uint)(prVar18->hd).frmlen;
  if (uVar14 == 0xff) {
    if (uVar13 != 0xff) {
      bVar8 = *(byte *)(uVar13 * 0x1b0 + 0x1a);
      uVar14 = (uint)bVar8;
      _DAT_00000008 = CONCAT12(bVar8,_DAT_00000008);
      _DAT_00000008 = (uint **)((uint)_DAT_00000008 & 0xff000000 | (uint)_DAT_00000008);
      goto _L0;
    }
    cVar12 = '\x04';
    iVar15 = 0;
  }
  else {
_L0:
    iVar15 = uVar14 * 0x5d8;
    cVar12 = *(char *)(iVar15 + 0x56);
  }
  uVar5 = uVar2 & 0xfc;
  if (uVar5 == 0x50) {
    if (iVar15 == 0) goto _L0;
    bVar1 = true;
    iVar17 = 4;
    goto _L0;
  }
  if (uVar5 < 0x51) {
    if (uVar5 == 0x20) {
_L0:
      iVar15 = FUN_0001048e(iVar15);
      if (iVar15 == 0) {
_L0:
        FUN_0001043c(swdesc);
        return true;
      }
_L0:
      bVar1 = true;
      iVar17 = 7;
      goto _L0;
    }
    if (uVar5 < 0x21) {
      if ((uVar2 & 0xfc) == 0) goto _L0;
      if (uVar5 != 0x10) goto _L0;
    }
    else {
      if (uVar5 != 0x30) {
        if (uVar5 != 0x40) goto _L0;
        goto _L0;
      }
    }
    if (cVar12 != '\0') goto _L0;
  }
  else {
    if (uVar5 != 0xb0) {
      if (0xb0 < uVar5) {
        if (uVar5 != 0xc0) {
          if ((uVar5 != 0xd0) || (pcVar11 = (char *)((int)puVar4 + uVar19), uVar13 == 0xff))
          goto _L0;
          cVar12 = *pcVar11;
          if (cVar12 == '\a') {
            if (pcVar11[1] == '\0') {
              if ((*(uint *)(uVar13 * 0x1b0 + 0xec) & 2) == 0) {
                return false;
              }
              bVar8 = pcVar11[2];
              uVar9 = 0xff;
              if (1 < bVar8) {
                return false;
              }
            }
            else {
              if (pcVar11[1] != '\x01') goto _L0;
              if ((*(uint *)(uVar13 * 0x1b0 + 0xec) & 2) == 0) {
                return false;
              }
              uVar9 = 0xff;
              if ((pcVar11[2] & 1U) != 0) {
                uVar9 = 0;
              }
              bVar8 = 0xff;
            }
            FUN_000105d0(uVar13,bVar8,uVar9);
            return false;
          }
          if (cVar12 == '\b') {
            if ((int)(uVar16 - uVar19) < 4) {
              return false;
            }
            uVar13 = (uint)_DAT_00000008 >> 0x10 & 0xff;
            if ((uVar13 == 0xff) || ((byte)(*(byte *)(uVar13 * 0x5d8 + 0x56) | pcVar11[1]) != 0))
            goto _L0;
            iVar17 = 6;
          }
          else {
            if (cVar12 != '\x03') goto _L0;
            iVar17 = 8;
          }
          bVar1 = false;
          goto _L0;
        }
_L0:
        if (uVar13 == 0xff) {
          return false;
        }
        goto _L0;
      }
      if (uVar5 != 0x80) {
        if (uVar5 != 0xa0) goto _L0;
        goto _L0;
      }
      iVar6 = FUN_00010510(4);
      if (iVar6 != 1) {
        iVar17 = 0xff;
      }
      else {
        iVar17 = 4;
      }
      bVar1 = iVar6 == 1;
      if (uVar13 != 0xff) {
        if (*(char *)(iVar15 + 0x58) != '\0') {
          FUN_00010538((uint)_DAT_00000008 >> 0x10 & 0xff,uVar16,puVar4);
        }
_L0:
        if (iVar17 != 0xff) goto _L0;
        goto _L0;
      }
      iVar6 = FUN_00010554(4);
      if ((iVar6 == 1) || (iVar15 = FUN_00010564(iVar15), iVar15 == 0)) goto _L0;
      goto _L0;
    }
_L0:
    if (cVar12 != '\0') goto _L0;
  }
  bVar1 = false;
  iVar17 = 6;
_L0:
  puVar7 = (undefined2 *)FUN_00010584(0x2c00,iVar17,0xb,uVar16 + 0x1c & 0xffff);
  if (puVar7 != (undefined2 *)0x0) {
    _LVL114(&stack0xffffffb8,0);
    if (!bVar1) {
      if (((uint)ppuVar10 & 1) != 0) {
        FUN_0001068a(0,0,0x64d);
      }
      uVar16 = uVar16 - uVar19 & 0xffff;
      puVar4 = (ushort *)((int)puVar4 + uVar19);
    }
    *puVar7 = (short)uVar16;
    uVar13 = 0;
    while ((uVar16 + 3 & 0xfffffffc) != uVar13) {
      *(undefined4 *)((int)puVar7 + uVar13 + 0x1c) = *(undefined4 *)((int)puVar4 + uVar13);
      uVar13 = uVar13 + 4;
    }
    puVar7[1] = uVar2;
    *(uint8_t *)((int)puVar7 + 7) = sta_idx;
    *(undefined *)(puVar7 + 4) = DAT_0000000a;
    *(undefined *)(puVar7 + 0xd) = uVar3;
    *(undefined *)((int)puVar7 + 0x19) = uVar3;
    puVar7[2] = (short)((uint)uStack72 >> 0x10);
    *(char *)(puVar7 + 3) = (char)uStack72;
    *(undefined *)(puVar7 + 0xc) = *(undefined *)((int)&(prVar18->hd).recvec1c + 3);
    if ((iVar17 == 7) && ((uVar2 & 0xfc) == 0)) {
      *(uint32_t *)(puVar7 + 8) = (prVar18->hd).tsflo;
      *(uint32_t *)(puVar7 + 10) = (prVar18->hd).tsfhi;
      *(byte *)((int)puVar7 + 0x1b) = (byte)((prVar18->hd).recvec1a >> 0xc) & 0xf;
    }
    FUN_00010702(puVar7);
  }
  return false;
}



undefined4 _LVL66(void)

{
  ushort uVar1;
  bool bVar2;
  ushort *unaff_s0;
  ushort uVar3;
  int iVar4;
  undefined2 *puVar5;
  byte bVar6;
  char *pcVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int unaff_s2;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int unaff_s5;
  uint uVar14;
  undefined4 in_stack_0000000c;
  undefined in_stack_00000017;
  undefined4 in_stack_00000018;
  
  _LVL66();
  bVar6 = DAT_00000008;
  uVar1 = *unaff_s0;
  uVar14 = (uint)DAT_00000008;
  uVar9 = (uint)DAT_0000000a;
  uVar11 = (uint)*(ushort *)(unaff_s5 + 0x1c);
  if (uVar9 == 0xff) {
    if (unaff_s2 != 0xff) {
      DAT_0000000a = *(byte *)(unaff_s2 * 0x1b0 + 0x1a);
      uVar9 = (uint)DAT_0000000a;
      goto _L0;
    }
    cVar8 = '\x04';
    iVar10 = 0;
  }
  else {
_L0:
    iVar10 = uVar9 * 0x5d8;
    cVar8 = *(char *)(iVar10 + 0x56);
  }
  uVar3 = uVar1 & 0xfc;
  if (uVar3 == 0x50) {
    if (iVar10 == 0) goto _L0;
    bVar2 = true;
    iVar13 = 4;
_L0:
    puVar5 = (undefined2 *)FUN_00010584(0x2c00,iVar13,0xb,uVar11 + 0x1c & 0xffff);
    if (puVar5 != (undefined2 *)0x0) {
      _LVL114(&stack0x00000018,0);
      if (!bVar2) {
        if ((bVar6 & 1) != 0) {
          FUN_0001068a(0,0,0x64d);
        }
        uVar11 = uVar11 - uVar14 & 0xffff;
        unaff_s0 = (ushort *)((int)unaff_s0 + uVar14);
      }
      *puVar5 = (short)uVar11;
      uVar9 = 0;
      while (bVar6 = DAT_0000000a, (uVar11 + 3 & 0xfffffffc) != uVar9) {
        *(undefined4 *)((int)puVar5 + uVar9 + 0x1c) = *(undefined4 *)((int)unaff_s0 + uVar9);
        uVar9 = uVar9 + 4;
      }
      puVar5[1] = uVar1;
      *(char *)((int)puVar5 + 7) = (char)unaff_s2;
      *(byte *)(puVar5 + 4) = bVar6;
      *(undefined *)(puVar5 + 0xd) = in_stack_00000017;
      *(undefined *)((int)puVar5 + 0x19) = in_stack_00000017;
      puVar5[2] = (short)((uint)in_stack_00000018 >> 0x10);
      *(char *)(puVar5 + 3) = (char)in_stack_00000018;
      *(undefined *)(puVar5 + 0xc) = *(undefined *)(unaff_s5 + 0x33);
      if ((iVar13 == 7) && ((uVar1 & 0xfc) == 0)) {
        *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(unaff_s5 + 0x20);
        *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(unaff_s5 + 0x24);
        *(byte *)((int)puVar5 + 0x1b) = (byte)(*(uint *)(unaff_s5 + 0x28) >> 0xc) & 0xf;
      }
      FUN_00010702(puVar5);
    }
    uVar12 = 0;
  }
  else {
    if (uVar3 < 0x51) {
      if (uVar3 == 0x20) {
_L0:
        iVar10 = FUN_0001048e(iVar10);
        if (iVar10 != 0) {
_L0:
          bVar2 = true;
          iVar13 = 7;
          goto _L0;
        }
      }
      else {
        if (uVar3 < 0x21) {
          if ((uVar1 & 0xfc) == 0) goto _L0;
          if (uVar3 != 0x10) goto _L0;
        }
        else {
          if (uVar3 != 0x30) {
            if (uVar3 != 0x40) goto _L0;
            goto _L0;
          }
        }
        if (cVar8 == '\0') goto _L0;
      }
    }
    else {
      if (uVar3 == 0xb0) {
_L0:
        if (cVar8 != '\0') goto _L0;
_L0:
        bVar2 = false;
        iVar13 = 6;
        goto _L0;
      }
      if (uVar3 < 0xb1) {
        if (uVar3 != 0x80) {
          if (uVar3 != 0xa0) goto _L0;
_L0:
          if (unaff_s2 == 0xff) {
            return 0;
          }
          goto _L0;
        }
        iVar4 = FUN_00010510(4);
        if (iVar4 != 1) {
          iVar13 = 0xff;
        }
        else {
          iVar13 = 4;
        }
        bVar2 = iVar4 == 1;
        if (unaff_s2 == 0xff) {
          iVar4 = FUN_00010554(4);
          if ((iVar4 != 1) && (iVar10 = FUN_00010564(iVar10), iVar10 != 0)) goto _L0;
        }
        else {
          if (*(char *)(iVar10 + 0x58) != '\0') {
            FUN_00010538(DAT_0000000a,uVar11);
          }
        }
        if (iVar13 != 0xff) goto _L0;
      }
      else {
        if (uVar3 == 0xc0) goto _L0;
        if ((uVar3 == 0xd0) && (pcVar7 = (char *)((int)unaff_s0 + uVar14), unaff_s2 != 0xff)) {
          cVar8 = *pcVar7;
          if (cVar8 == '\a') {
            if (pcVar7[1] == '\0') {
              if ((*(uint *)(unaff_s2 * 0x1b0 + 0xec) & 2) == 0) {
                return 0;
              }
              bVar6 = pcVar7[2];
              uVar12 = 0xff;
              if (1 < bVar6) {
                return 0;
              }
_L111:
              FUN_000105d0(bVar6,uVar12);
              return 0;
            }
            if (pcVar7[1] == '\x01') {
              if ((*(uint *)(unaff_s2 * 0x1b0 + 0xec) & 2) == 0) {
                return 0;
              }
              uVar12 = 0xff;
              if ((pcVar7[2] & 1U) != 0) {
                uVar12 = 0;
              }
              bVar6 = 0xff;
              goto _L111;
            }
          }
          else {
            if (cVar8 == '\b') {
              if ((int)(uVar11 - uVar14) < 4) {
                return 0;
              }
              if ((DAT_0000000a != 0xff) &&
                 ((byte)(*(byte *)((uint)DAT_0000000a * 0x5d8 + 0x56) | pcVar7[1]) == 0)) {
                iVar13 = 6;
                goto _L0;
              }
            }
            else {
              if (cVar8 == '\x03') {
                iVar13 = 8;
_L0:
                bVar2 = false;
                goto _L0;
              }
            }
          }
        }
      }
    }
_L0:
    FUN_0001043c(in_stack_0000000c);
    uVar12 = 1;
  }
  return uVar12;
}



undefined4 FUN_0001043c(void)

{
  FUN_0001043c();
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00010670)
// WARNING: Removing unreachable block (ram,0x00010676)
// WARNING: Removing unreachable block (ram,0x00010692)

undefined4 FUN_0001048e(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined unaff_s2;
  int unaff_s3;
  undefined4 uVar5;
  int unaff_s5;
  int unaff_s7;
  undefined2 unaff_s8;
  undefined unaff_s11;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000018;
  
  iVar2 = FUN_0001048e();
  if (iVar2 == 0) {
    FUN_0001043c(in_stack_0000000c);
    uVar5 = 1;
  }
  else {
    puVar3 = (undefined2 *)FUN_00010584(0x2c00,7,0xb,unaff_s3 + 0x1cU & 0xffff);
    if (puVar3 != (undefined2 *)0x0) {
      _LVL114(&stack0x00000018,0);
      *puVar3 = (short)unaff_s3;
      uVar4 = 0;
      while ((unaff_s3 + 3U & 0xfffffffc) != uVar4) {
        *(undefined4 *)((int)puVar3 + uVar4 + 0x1c) = *(undefined4 *)(unaff_s0 + uVar4);
        uVar4 = uVar4 + 4;
      }
      uVar1 = *(undefined *)(unaff_s7 + 10);
      puVar3[1] = unaff_s8;
      *(undefined *)((int)puVar3 + 7) = unaff_s2;
      *(undefined *)(puVar3 + 4) = uVar1;
      *(undefined *)(puVar3 + 0xd) = unaff_s11;
      *(undefined *)((int)puVar3 + 0x19) = unaff_s11;
      puVar3[2] = (short)((uint)in_stack_00000018 >> 0x10);
      *(char *)(puVar3 + 3) = (char)in_stack_00000018;
      *(undefined *)(puVar3 + 0xc) = *(undefined *)(unaff_s5 + 0x33);
      if (unaff_s1 == 0) {
        *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(unaff_s5 + 0x20);
        *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(unaff_s5 + 0x24);
        *(byte *)((int)puVar3 + 0x1b) = (byte)(*(uint *)(unaff_s5 + 0x28) >> 0xc) & 0xf;
      }
      FUN_00010702(puVar3);
    }
    uVar5 = 0;
  }
  return uVar5;
}



undefined4 FUN_00010510(void)

{
  undefined uVar1;
  bool bVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  int unaff_s2;
  uint unaff_s3;
  int iVar6;
  int unaff_s5;
  int unaff_s7;
  undefined2 unaff_s8;
  uint unaff_s9;
  int unaff_s10;
  undefined unaff_s11;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000018;
  
  iVar3 = FUN_00010510();
  if (iVar3 != 1) {
    iVar6 = 0xff;
  }
  else {
    iVar6 = 4;
  }
  bVar2 = iVar3 == 1;
  if (unaff_s2 == 0xff) {
    iVar3 = FUN_00010554(4);
    if ((iVar3 != 1) && (iVar3 = FUN_00010564(), iVar3 != 0)) {
      bVar2 = true;
      iVar6 = 7;
      goto _L0;
    }
  }
  else {
    if (*(char *)(unaff_s10 + 0x58) != '\0') {
      FUN_00010538(*(undefined *)(unaff_s7 + 10));
    }
  }
  if (iVar6 == 0xff) {
    FUN_0001043c(in_stack_0000000c);
    return 1;
  }
_L0:
  puVar4 = (undefined2 *)FUN_00010584(0x2c00,iVar6,0xb,unaff_s3 + 0x1c & 0xffff);
  if (puVar4 != (undefined2 *)0x0) {
    _LVL114(&stack0x00000018,0);
    if (!bVar2) {
      if ((unaff_s9 & 1) != 0) {
        FUN_0001068a(0,0,0x64d);
      }
      unaff_s3 = unaff_s3 - unaff_s9 & 0xffff;
      unaff_s0 = unaff_s0 + unaff_s9;
    }
    *puVar4 = (short)unaff_s3;
    uVar5 = 0;
    while ((unaff_s3 + 3 & 0xfffffffc) != uVar5) {
      *(undefined4 *)((int)puVar4 + uVar5 + 0x1c) = *(undefined4 *)(unaff_s0 + uVar5);
      uVar5 = uVar5 + 4;
    }
    uVar1 = *(undefined *)(unaff_s7 + 10);
    puVar4[1] = unaff_s8;
    *(char *)((int)puVar4 + 7) = (char)unaff_s2;
    *(undefined *)(puVar4 + 4) = uVar1;
    *(undefined *)(puVar4 + 0xd) = unaff_s11;
    *(undefined *)((int)puVar4 + 0x19) = unaff_s11;
    puVar4[2] = (short)((uint)in_stack_00000018 >> 0x10);
    *(char *)(puVar4 + 3) = (char)in_stack_00000018;
    *(undefined *)(puVar4 + 0xc) = *(undefined *)(unaff_s5 + 0x33);
    if ((iVar6 == 7) && (unaff_s1 == 0)) {
      *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(unaff_s5 + 0x20);
      *(undefined4 *)(puVar4 + 10) = *(undefined4 *)(unaff_s5 + 0x24);
      *(byte *)((int)puVar4 + 0x1b) = (byte)(*(uint *)(unaff_s5 + 0x28) >> 0xc) & 0xf;
    }
    FUN_00010702(puVar4);
  }
  return 0;
}



undefined4 FUN_00010538(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 *puVar2;
  uint uVar3;
  undefined unaff_s2;
  uint unaff_s3;
  undefined4 uVar4;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined2 unaff_s8;
  uint unaff_s9;
  undefined unaff_s11;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000018;
  
  FUN_00010538();
  if (unaff_s4 == 0xff) {
    FUN_0001043c(in_stack_0000000c);
    uVar4 = 1;
  }
  else {
    puVar2 = (undefined2 *)FUN_00010584(0x2c00,0xb,unaff_s3 + 0x1c & 0xffff);
    if (puVar2 != (undefined2 *)0x0) {
      _LVL114(&stack0x00000018,0);
      if (unaff_s6 == 0) {
        if ((unaff_s9 & 1) != 0) {
          FUN_0001068a(0,0,0x64d);
        }
        unaff_s3 = unaff_s3 - unaff_s9 & 0xffff;
        unaff_s0 = unaff_s0 + unaff_s9;
      }
      *puVar2 = (short)unaff_s3;
      uVar3 = 0;
      while ((unaff_s3 + 3 & 0xfffffffc) != uVar3) {
        *(undefined4 *)((int)puVar2 + uVar3 + 0x1c) = *(undefined4 *)(unaff_s0 + uVar3);
        uVar3 = uVar3 + 4;
      }
      uVar1 = *(undefined *)(unaff_s7 + 10);
      puVar2[1] = unaff_s8;
      *(undefined *)((int)puVar2 + 7) = unaff_s2;
      *(undefined *)(puVar2 + 4) = uVar1;
      *(undefined *)(puVar2 + 0xd) = unaff_s11;
      *(undefined *)((int)puVar2 + 0x19) = unaff_s11;
      puVar2[2] = (short)((uint)in_stack_00000018 >> 0x10);
      *(char *)(puVar2 + 3) = (char)in_stack_00000018;
      *(undefined *)(puVar2 + 0xc) = *(undefined *)(unaff_s5 + 0x33);
      if ((unaff_s4 == 7) && (unaff_s1 == 0)) {
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(unaff_s5 + 0x20);
        *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(unaff_s5 + 0x24);
        *(byte *)((int)puVar2 + 0x1b) = (byte)(*(uint *)(unaff_s5 + 0x28) >> 0xc) & 0xf;
      }
      FUN_00010702(puVar2);
    }
    uVar4 = 0;
  }
  return uVar4;
}



undefined4 FUN_00010554(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined2 unaff_s8;
  uint unaff_s9;
  undefined unaff_s11;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000018;
  
  iVar2 = FUN_00010554();
  if ((iVar2 == 1) || (iVar2 = FUN_00010564(), iVar2 == 0)) {
    if (unaff_s4 == 0xff) {
      FUN_0001043c(in_stack_0000000c);
      return 1;
    }
  }
  else {
    unaff_s6 = 1;
    unaff_s4 = 7;
  }
  puVar3 = (undefined2 *)FUN_00010584(0x2c00,unaff_s4,0xb,unaff_s3 + 0x1c & 0xffff);
  if (puVar3 != (undefined2 *)0x0) {
    _LVL114(&stack0x00000018,0);
    if (unaff_s6 == 0) {
      if ((unaff_s9 & 1) != 0) {
        FUN_0001068a(0,0,0x64d);
      }
      unaff_s3 = unaff_s3 - unaff_s9 & 0xffff;
      unaff_s0 = unaff_s0 + unaff_s9;
    }
    *puVar3 = (short)unaff_s3;
    uVar4 = 0;
    while ((unaff_s3 + 3 & 0xfffffffc) != uVar4) {
      *(undefined4 *)((int)puVar3 + uVar4 + 0x1c) = *(undefined4 *)(unaff_s0 + uVar4);
      uVar4 = uVar4 + 4;
    }
    uVar1 = *(undefined *)(unaff_s7 + 10);
    puVar3[1] = unaff_s8;
    *(undefined *)((int)puVar3 + 7) = unaff_s2;
    *(undefined *)(puVar3 + 4) = uVar1;
    *(undefined *)(puVar3 + 0xd) = unaff_s11;
    *(undefined *)((int)puVar3 + 0x19) = unaff_s11;
    puVar3[2] = (short)((uint)in_stack_00000018 >> 0x10);
    *(char *)(puVar3 + 3) = (char)in_stack_00000018;
    *(undefined *)(puVar3 + 0xc) = *(undefined *)(unaff_s5 + 0x33);
    if ((unaff_s4 == 7) && (unaff_s1 == 0)) {
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(unaff_s5 + 0x20);
      *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(unaff_s5 + 0x24);
      *(byte *)((int)puVar3 + 0x1b) = (byte)(*(uint *)(unaff_s5 + 0x28) >> 0xc) & 0xf;
    }
    FUN_00010702(puVar3);
  }
  return 0;
}



undefined4 FUN_00010564(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined2 unaff_s8;
  uint unaff_s9;
  undefined unaff_s11;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000018;
  
  iVar2 = FUN_00010564();
  if (iVar2 == 0) {
    if (unaff_s4 == 0xff) {
      FUN_0001043c(in_stack_0000000c);
      return 1;
    }
  }
  else {
    unaff_s6 = 1;
    unaff_s4 = 7;
  }
  puVar3 = (undefined2 *)FUN_00010584(0x2c00,unaff_s4,0xb,unaff_s3 + 0x1c & 0xffff);
  if (puVar3 != (undefined2 *)0x0) {
    _LVL114(&stack0x00000018,0);
    if (unaff_s6 == 0) {
      if ((unaff_s9 & 1) != 0) {
        FUN_0001068a(0,0,0x64d);
      }
      unaff_s3 = unaff_s3 - unaff_s9 & 0xffff;
      unaff_s0 = unaff_s0 + unaff_s9;
    }
    *puVar3 = (short)unaff_s3;
    uVar4 = 0;
    while ((unaff_s3 + 3 & 0xfffffffc) != uVar4) {
      *(undefined4 *)((int)puVar3 + uVar4 + 0x1c) = *(undefined4 *)(unaff_s0 + uVar4);
      uVar4 = uVar4 + 4;
    }
    uVar1 = *(undefined *)(unaff_s7 + 10);
    puVar3[1] = unaff_s8;
    *(undefined *)((int)puVar3 + 7) = unaff_s2;
    *(undefined *)(puVar3 + 4) = uVar1;
    *(undefined *)(puVar3 + 0xd) = unaff_s11;
    *(undefined *)((int)puVar3 + 0x19) = unaff_s11;
    puVar3[2] = (short)((uint)in_stack_00000018 >> 0x10);
    *(char *)(puVar3 + 3) = (char)in_stack_00000018;
    *(undefined *)(puVar3 + 0xc) = *(undefined *)(unaff_s5 + 0x33);
    if ((unaff_s4 == 7) && (unaff_s1 == 0)) {
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(unaff_s5 + 0x20);
      *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(unaff_s5 + 0x24);
      *(byte *)((int)puVar3 + 0x1b) = (byte)(*(uint *)(unaff_s5 + 0x28) >> 0xc) & 0xf;
    }
    FUN_00010702(puVar3);
  }
  return 0;
}



undefined4 FUN_00010584(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 *puVar2;
  uint uVar3;
  undefined unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined2 unaff_s8;
  uint unaff_s9;
  undefined unaff_s11;
  undefined4 in_stack_00000018;
  
  puVar2 = (undefined2 *)FUN_00010584();
  if (puVar2 != (undefined2 *)0x0) {
    _LVL114(&stack0x00000018,0);
    if (unaff_s6 == 0) {
      if ((unaff_s9 & 1) != 0) {
        FUN_0001068a(0,0,0x64d);
      }
      unaff_s3 = unaff_s3 - unaff_s9 & 0xffff;
      unaff_s0 = unaff_s0 + unaff_s9;
    }
    *puVar2 = (short)unaff_s3;
    uVar3 = 0;
    while ((unaff_s3 + 3 & 0xfffffffc) != uVar3) {
      *(undefined4 *)((int)puVar2 + uVar3 + 0x1c) = *(undefined4 *)(unaff_s0 + uVar3);
      uVar3 = uVar3 + 4;
    }
    uVar1 = *(undefined *)(unaff_s7 + 10);
    puVar2[1] = unaff_s8;
    *(undefined *)((int)puVar2 + 7) = unaff_s2;
    *(undefined *)(puVar2 + 4) = uVar1;
    *(undefined *)(puVar2 + 0xd) = unaff_s11;
    *(undefined *)((int)puVar2 + 0x19) = unaff_s11;
    puVar2[2] = (short)((uint)in_stack_00000018 >> 0x10);
    *(char *)(puVar2 + 3) = (char)in_stack_00000018;
    *(undefined *)(puVar2 + 0xc) = *(undefined *)(unaff_s5 + 0x33);
    if ((unaff_s4 == 7) && (unaff_s1 == 0)) {
      *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(unaff_s5 + 0x20);
      *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(unaff_s5 + 0x24);
      *(byte *)((int)puVar2 + 0x1b) = (byte)(*(uint *)(unaff_s5 + 0x28) >> 0xc) & 0xf;
    }
    FUN_00010702(puVar2);
  }
  return 0;
}



void FUN_000105d0(void)

{
  FUN_000105d0();
  return;
}



undefined4 _LVL114(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  undefined unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined2 unaff_s8;
  uint unaff_s9;
  undefined2 *unaff_s10;
  undefined unaff_s11;
  undefined4 in_stack_00000018;
  
  _LVL114();
  if (unaff_s6 == 0) {
    if ((unaff_s9 & 1) != 0) {
      FUN_0001068a(0,0,0x64d);
    }
    unaff_s3 = unaff_s3 - unaff_s9 & 0xffff;
    unaff_s0 = unaff_s0 + unaff_s9;
  }
  *unaff_s10 = (short)unaff_s3;
  uVar2 = 0;
  while ((unaff_s3 + 3 & 0xfffffffc) != uVar2) {
    *(undefined4 *)((int)unaff_s10 + uVar2 + 0x1c) = *(undefined4 *)(unaff_s0 + uVar2);
    uVar2 = uVar2 + 4;
  }
  uVar1 = *(undefined *)(unaff_s7 + 10);
  unaff_s10[1] = unaff_s8;
  *(undefined *)((int)unaff_s10 + 7) = unaff_s2;
  *(undefined *)(unaff_s10 + 4) = uVar1;
  *(undefined *)(unaff_s10 + 0xd) = unaff_s11;
  *(undefined *)((int)unaff_s10 + 0x19) = unaff_s11;
  unaff_s10[2] = (short)((uint)in_stack_00000018 >> 0x10);
  *(char *)(unaff_s10 + 3) = (char)in_stack_00000018;
  *(undefined *)(unaff_s10 + 0xc) = *(undefined *)(unaff_s5 + 0x33);
  if ((unaff_s4 == 7) && (unaff_s1 == 0)) {
    *(undefined4 *)(unaff_s10 + 8) = *(undefined4 *)(unaff_s5 + 0x20);
    *(undefined4 *)(unaff_s10 + 10) = *(undefined4 *)(unaff_s5 + 0x24);
    *(byte *)((int)unaff_s10 + 0x1b) = (byte)(*(uint *)(unaff_s5 + 0x28) >> 0xc) & 0xf;
  }
  FUN_00010702();
  return 0;
}



undefined4 FUN_0001068a(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  undefined unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  undefined2 unaff_s8;
  int unaff_s9;
  undefined2 *unaff_s10;
  undefined unaff_s11;
  undefined4 in_stack_00000018;
  
  FUN_0001068a();
  *unaff_s10 = (short)((uint)((unaff_s3 - unaff_s9) * 0x10000) >> 0x10);
  uVar2 = 0;
  while (((unaff_s3 - unaff_s9 & 0xffffU) + 3 & 0xfffffffc) != uVar2) {
    *(undefined4 *)((int)unaff_s10 + uVar2 + 0x1c) = *(undefined4 *)(unaff_s0 + unaff_s9 + uVar2);
    uVar2 = uVar2 + 4;
  }
  uVar1 = *(undefined *)(unaff_s7 + 10);
  unaff_s10[1] = unaff_s8;
  *(undefined *)((int)unaff_s10 + 7) = unaff_s2;
  *(undefined *)(unaff_s10 + 4) = uVar1;
  *(undefined *)(unaff_s10 + 0xd) = unaff_s11;
  *(undefined *)((int)unaff_s10 + 0x19) = unaff_s11;
  unaff_s10[2] = (short)((uint)in_stack_00000018 >> 0x10);
  *(char *)(unaff_s10 + 3) = (char)in_stack_00000018;
  *(undefined *)(unaff_s10 + 0xc) = *(undefined *)(unaff_s5 + 0x33);
  if ((unaff_s4 == 7) && (unaff_s1 == 0)) {
    *(undefined4 *)(unaff_s10 + 8) = *(undefined4 *)(unaff_s5 + 0x20);
    *(undefined4 *)(unaff_s10 + 10) = *(undefined4 *)(unaff_s5 + 0x24);
    *(byte *)((int)unaff_s10 + 0x1b) = (byte)(*(uint *)(unaff_s5 + 0x28) >> 0xc) & 0xf;
  }
  FUN_00010702();
  return 0;
}



undefined4 FUN_00010702(void)

{
  FUN_00010702();
  return 0;
}



void rxu_cntrl_init(undefined4 uRam00000060)

{
  _L0(0x40);
  FUN_00010738(0x38);
  FUN_00010748(0x4c);
  FUN_00010758(0x54);
  uRam00000060._2_2_ = 0xffff;
  return;
}



void _L0(undefined4 uRam00000060)

{
  _L0();
  FUN_00010738(0x38);
  FUN_00010748(0x4c);
  FUN_00010758(0x54);
  uRam00000060._2_2_ = 0xffff;
  return;
}



void FUN_00010738(undefined4 uRam00000060)

{
  FUN_00010738();
  FUN_00010748(0x4c);
  FUN_00010758(0x54);
  uRam00000060._2_2_ = 0xffff;
  return;
}



void FUN_00010748(undefined4 uRam00000060)

{
  FUN_00010748();
  FUN_00010758(0x54);
  uRam00000060._2_2_ = 0xffff;
  return;
}



void FUN_00010758(undefined4 uRam00000060)

{
  FUN_00010758();
  uRam00000060._2_2_ = 0xffff;
  return;
}



// WARNING: Variable defined which should be unmapped: mic
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool rxu_cntrl_frame_handle(rx_swdesc *swdesc)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint32_t *puVar8;
  byte bVar9;
  short *psVar10;
  uint *puVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  rx_dmadesc *prVar15;
  byte bVar16;
  uint32_t uVar17;
  uint uVar18;
  int iVar19;
  uint32_t uStack80;
  uint32_t rx_mic [2];
  rxu_mic_calc mic;
  
  prVar15 = swdesc->dma_hdrdesc;
  uVar13 = (prVar15->hd).statinfo;
  if ((int)(uVar13 << 0x12) < 0) {
    puVar2 = *(ushort **)((prVar15->hd).first_pbd_ptr + 8);
    uVar1 = *puVar2;
    uVar18 = (uint)uVar1;
    prVar15->flags = 0;
    _DAT_00000008 = CONCAT11(0xff,DAT_00000008);
    _DAT_00000008 = CONCAT12(0xff,_DAT_00000008);
    _DAT_00000008 = _DAT_00000008 & 0xff000000 | (uint)_DAT_00000008;
    DAT_00000030 = 0;
    uRam00000000 = CONCAT22(puVar2[0xb],*puVar2);
    _DAT_00000004 = puVar2[0xb] >> 4;
    DAT_00000006 = (byte)puVar2[0xb] & 0xf;
    if ((*puVar2 & 0x88) == 0x88) {
      if ((*puVar2 & 0x300) == 0x300) {
        bVar9 = (byte)puVar2[0xf];
      }
      else {
        bVar9 = (byte)puVar2[0xc];
      }
      DAT_00000007 = bVar9 & 7;
    }
    else {
      DAT_00000007 = 0;
    }
    uVar4 = FUN_00010838(*puVar2);
    uVar14 = _DAT_00000008;
    _DAT_00000008 = _DAT_00000008 & 0xffffff00 | uVar4 & 0xff;
    if ((*(byte *)((int)puVar2 + 1) & 1) == 0) {
      _DAT_00000024 = puVar2[2];
      _DAT_00000026 = puVar2[3];
      _DAT_00000028 = puVar2[4];
    }
    else {
      _DAT_00000024 = puVar2[8];
      _DAT_00000026 = puVar2[9];
      _DAT_00000028 = puVar2[10];
    }
    if ((*puVar2 & 0x200) == 0) {
      _DAT_0000002a = puVar2[5];
      _DAT_0000002c = puVar2[6];
      _DAT_0000002e = puVar2[7];
    }
    else {
      if ((*puVar2 & 0x100) == 0) {
        _DAT_0000002a = puVar2[8];
        _DAT_0000002c = puVar2[9];
        _DAT_0000002e = puVar2[10];
      }
      else {
        _DAT_0000002a = puVar2[0xc];
        _DAT_0000002c = puVar2[0xd];
        _DAT_0000002e = puVar2[0xe];
      }
    }
    if ((int)(uVar13 << 6) < 0) {
      uVar4 = (uVar13 >> 0xf) - 8 & 0xff;
      cVar3 = *(char *)(uVar4 * 0x1b0 + 0x1d);
      if (cVar3 != '\0') {
        bVar9 = *(byte *)(uVar4 * 0x1b0 + 0x1a);
        _DAT_00000008 = CONCAT12(bVar9,_DAT_00000008);
        bVar16 = (byte)uVar4;
        _DAT_00000008 = _DAT_00000008 & 0xff | (ushort)bVar16 << 8;
        _DAT_00000008 = uVar14 & 0xff000000 | _DAT_00000008 & 0xffff0000 | (uint)_DAT_00000008;
        _DAT_00000018 = uVar13;
        if ((*(char *)((uint)bVar9 * 0x5d8 + 0x56) == '\x02') && ((_DAT_00000024 & 1) == 0)) {
          iVar5 = FUN_00010b16(0x24);
          _DAT_00000008 = _DAT_00000008 & 0xffffff | iVar5 << 0x18;
        }
        if ((uVar18 & 0x300) == 0x300) {
          prVar15->flags = prVar15->flags | 4;
        }
        if ((-1 < (int)(uRam00000000 << 0x11)) ||
           (iVar5 = FUN_00010b68(puVar2,_DAT_00000018), iVar5 != 0)) {
          uVar13 = uVar18 & 0xc;
          if ((uVar1 & 0xc) == 0) {
            if ((-1 < (int)(uVar18 << 0x14)) ||
               (*(short *)(uVar4 * 0x1b0 + 0x188) != uRam00000000._2_2_)) {
              bVar9 = DAT_00000030 & 2;
              *(short *)(uVar4 * 0x1b0 + 0x188) = uRam00000000._2_2_;
              iVar5 = _DAT_00000020;
              uVar13 = _DAT_00000014;
              if (bVar9 != 0) {
                if ((_DAT_00000014 <= *(uint *)(_DAT_00000020 + 0x44)) &&
                   ((*(uint *)(_DAT_00000020 + 0x44) != _DAT_00000014 ||
                    (_DAT_00000010 <= *(uint *)(_DAT_00000020 + 0x40))))) goto _L0;
                *(uint *)(_DAT_00000020 + 0x40) = _DAT_00000010;
                *(uint *)(iVar5 + 0x44) = uVar13;
              }
              uVar13 = _DAT_00000008 >> 8 & 0xff;
              goto _L0;
            }
          }
          else {
            if (uVar13 == 8) {
              if ((uVar1 & 0x40) == 0) {
                if ((uVar1 & 0x80) == 0) {
                  psVar10 = (short *)(uVar4 * 0x1b0 + 0x188);
                }
                else {
                  psVar10 = (short *)((DAT_00000007 + 0xc5 + uVar4 * 0xd8) * 2);
                }
                if ((-1 < (int)(uVar18 << 0x14)) || (*psVar10 != uRam00000000._2_2_)) {
                  *psVar10 = uRam00000000._2_2_;
                  uVar14 = _DAT_00000014;
                  uVar18 = _DAT_00000008 >> 0x10;
                  if ((DAT_00000030 & 2) != 0) {
                    puVar11 = (uint *)(_DAT_00000020 + (uint)DAT_00000007 * 8);
                    if ((_DAT_00000014 <= puVar11[1]) &&
                       ((puVar11[1] != _DAT_00000014 || (_DAT_00000010 <= *puVar11)))) goto _L0;
                    *puVar11 = _DAT_00000010;
                    puVar11[1] = uVar14;
                  }
                  if ((*(char *)((uVar18 & 0xff) * 0x5d8 + 1000) != '\0') || (uRam00000000 != 0)) {
                    iVar19 = (_DAT_00000008 & 0xff) +
                             *(int *)((swdesc->dma_hdrdesc->hd).first_pbd_ptr + 8);
                    iVar5 = FUN_00010c62(iVar19,0,6);
                    if ((iVar5 == 0) && (*(short *)(iVar19 + 6) == -0x7178)) {
                      bVar9 = *(byte *)(uVar4 * 0x1b0 + 0x1a);
                      if (*(char *)((uint)bVar9 * 0x5d8 + 0x56) == '\0') {
                        if (*(char *)(_DAT_00000008 + 5) == '\0') goto _L0;
                        uRam00000000._0_3_ =
                             CONCAT12(bVar9,CONCAT11(bVar16,(undefined)uRam00000000));
                        uRam00000000 = uRam00000000 & 0xff000000 | (uint)(uint3)uRam00000000;
                        rx_mic[1] = 0;
                      }
                      else {
                        *(byte *)(uRam00000000 + 1) = bVar16;
                        *(undefined *)(uRam00000000 + 2) = *(undefined *)(uVar4 * 0x1b0 + 0x1a);
                        rx_mic[1] = uRam00000000;
                      }
                      FUN_00010cea(rx_mic + 1,0x2a,0x24,_DAT_44b00120);
                      goto _L0;
                    }
                  }
                  if (((5 < 0xd - _DAT_00000014) && ((uRam00000000 & 0x400) == 0)) &&
                     (DAT_00000006 == 0)) {
                    if ((DAT_00000030 & 1) != 0) {
                      _LVL205(rx_mic + 1,_DAT_00000020 + 0x58,0x24,0x2a,DAT_00000007);
                      uVar18 = _DAT_00000008 & 0xff;
                      uVar17 = (swdesc->dma_hdrdesc->hd).first_pbd_ptr;
                      uVar14 = (-8 - uVar18) + (uint)(swdesc->dma_hdrdesc->hd).frmlen & 0xffff;
                      do {
                        uVar4 = uVar14;
                        if (0x350 < uVar14 + uVar18) {
                          uVar4 = 0x350 - uVar18 & 0xffff;
                        }
                        uVar14 = uVar14 - uVar4 & 0xffff;
                        _LVL215(rx_mic + 1,*(int *)(uVar17 + 8) + uVar18,uVar4);
                        if (uVar14 == 0) {
                          uVar18 = uVar18 + uVar4 & 0xffff;
                          puVar8 = &uStack80;
                          goto _L0;
                        }
                        uVar17 = *(uint32_t *)(uVar17 + 4);
                        uVar18 = 0;
                      } while (uVar17 != 0);
                      uVar6 = 0x369;
                      goto _L0;
                    }
_L0:
                    uVar13 = _DAT_00000008;
                    uVar14 = _DAT_00000008 & 0xff;
                    swdesc->dma_hdrdesc->flags =
                         (_DAT_00000008 >> 8 & 0xff) << 0x10 | (_DAT_00000008 >> 0x10 & 0xff) << 8 |
                         _DAT_00000008 & 0xff000000 | swdesc->dma_hdrdesc->flags;
                    prVar15 = swdesc->dma_hdrdesc;
                    puVar2 = *(ushort **)((prVar15->hd).first_pbd_ptr + 8);
                    uVar18 = prVar15->flags & 0xffffff8f;
                    prVar15->flags = uVar18;
                    if ((*puVar2 & 0xfc) == 0x88) {
                      if ((*puVar2 & 0x300) == 0x300) {
                        bVar9 = *(byte *)(puVar2 + 0xf);
                      }
                      else {
                        bVar9 = *(byte *)(puVar2 + 0xc);
                      }
                      uVar18 = (bVar9 & 7) << 4 | uVar18;
                      if ((bVar9 & 0x80) == 0) {
                        prVar15->flags = uVar18;
                        goto _L0;
                      }
                      prVar15->flags = uVar18 | 1;
                    }
                    else {
_L0:
                      iVar5 = (int)puVar2 + (uVar13 & 0xfe);
                      iVar19 = FUN_00010f62(iVar5,0,6);
                      if (((iVar19 == 0) && (*(short *)(iVar5 + 6) != -0x7ec9)) ||
                         (iVar19 = FUN_00011040(iVar5,0,6), iVar19 == 0)) {
                        uVar13 = uVar14 - 6;
                        puVar2 = (ushort *)(iVar5 + -6);
                        DAT_00000031 = 0;
                      }
                      else {
                        uVar13 = uVar14 - 0xe;
                        puVar2 = (ushort *)(iVar5 + -0xe);
                        iVar19 = (swdesc->dma_hdrdesc->hd).frmlen - uVar14;
                        *(char *)(iVar5 + -2) = (char)((uint)(iVar19 * 0x10000) >> 0x10);
                        *(char *)(iVar5 + -1) = (char)((uint)iVar19 >> 8);
                        DAT_00000031 = 1;
                      }
                      uVar14 = uVar13 & 0xff;
                      *puVar2 = _DAT_00000024;
                      puVar2[1] = _DAT_00000026;
                      puVar2[2] = _DAT_00000028;
                      puVar2[3] = _DAT_0000002a;
                      puVar2[4] = _DAT_0000002c;
                      puVar2[5] = _DAT_0000002e;
                    }
                    (swdesc->dma_hdrdesc->hd).frmlen =
                         (swdesc->dma_hdrdesc->hd).frmlen - (short)uVar14;
                    DAT_00000032 = (undefined)uVar14;
                    swdesc->dma_hdrdesc->payl_offset = uVar14;
                    uRam00000000 = uVar14;
                    _L0(swdesc);
                    uVar17 = _DAT_00000048;
                    swdesc->status = '\x03';
                    swdesc->host_id = uVar17;
                    swdesc->frame_len = (uint)(swdesc->dma_hdrdesc->hd).frmlen;
                    FUN_00011022(0x40,swdesc);
                    goto _L0;
                  }
                }
              }
              else {
                _L0();
              }
            }
          }
        }
      }
    }
    else {
      if ((((((DAT_0000006f != '\0') && ((uVar13 & 0x200) == 0)) &&
            (DAT_00000068 == *(char *)(puVar2 + 5))) &&
           ((DAT_00000069 == *(char *)((int)puVar2 + 0xb) && (DAT_0000006a == *(char *)(puVar2 + 6))
            ))) && (DAT_0000006b == *(char *)((int)puVar2 + 0xd))) &&
         ((DAT_0000006c == *(char *)(puVar2 + 7) && (DAT_0000006d == *(char *)((int)puVar2 + 0xf))))
         ) {
        if ((*puVar2 & 0x1400) == 0x1000) {
          DAT_0000006e = 1;
        }
        else {
          DAT_0000006e = 0;
        }
      }
      if ((uVar1 & 0xc) == 0) {
        if ((((*(byte *)((int)puVar2 + 1) >> 3 & 1) == 0) || (_DAT_00000062 != puVar2[0xb])) ||
           (iVar5 = FUN_00010a86(puVar2 + 5,0x5c,6), iVar5 != 0)) {
          _DAT_00000062 = puVar2[0xb];
          _L0(0x5c,puVar2 + 5,6);
          if ((-1 < (int)(uRam00000000 << 0x11)) ||
             (((uVar13 & 0x1c) == 0x14 && (iVar5 = FUN_00010aa2(puVar2,uVar13), iVar5 != 0)))) {
            uVar13 = 0xff;
_L0:
            cVar3 = FUN_00010a5a(swdesc,uVar13);
            goto _L0;
          }
        }
      }
      else {
        if ((((uVar18 & 0xc) != 8) || (iVar5 = _L0(), iVar5 == 0)) ||
           (((*(char *)(puVar2 + 2) != *(char *)(iVar5 + 0x50) ||
             (((*(char *)((int)puVar2 + 5) != *(char *)(iVar5 + 0x51) ||
               (*(char *)(puVar2 + 3) != *(char *)(iVar5 + 0x52))) ||
              (*(char *)((int)puVar2 + 7) != *(char *)(iVar5 + 0x53))))) ||
            ((*(char *)(puVar2 + 4) != *(char *)(iVar5 + 0x54) ||
             (*(char *)((int)puVar2 + 9) != *(char *)(iVar5 + 0x55))))))) {
          FUN_000109e2(swdesc);
          cVar3 = '\x01';
          goto _L0;
        }
        FUN_00010982(0xc0,puVar2 + 5,0,0,1);
      }
    }
  }
  goto _L0;
  while( true ) {
    uVar17 = *(uint32_t *)(uVar17 + 4);
    uVar18 = 0;
    puVar8 = (uint32_t *)puVar7;
    if (uVar17 == 0) break;
_L0:
    iVar5 = *(int *)(uVar17 + 8);
    uVar14 = uVar13;
    if (0x350 < uVar13 + uVar18) {
      uVar14 = 0x350 - uVar18 & 0xffff;
    }
    uVar4 = 0;
    while (puVar7 = (undefined *)((int)puVar8 + uVar4), uVar4 != uVar14) {
      puVar12 = (undefined *)(uVar4 + iVar5 + uVar18);
      uVar4 = uVar4 + 1;
      *puVar7 = *puVar12;
    }
    uVar13 = uVar13 - uVar4 & 0xffff;
    if (uVar13 == 0) {
      _LVL242(rx_mic + 1);
      if ((uStack80 == rx_mic[1]) && (rx_mic[0] == mic.mic_calc.mic_key_least)) goto _L0;
      FUN_00010e84(0x1406,0xd,5,0x18);
      iVar5 = FUN_00010e9e((_DAT_00000008 >> 8 & 0xff) * 0x1b0 + 0x1e,6);
      uVar13 = _DAT_00000014;
      *(uint *)(iVar5 + 8) = _DAT_00000010;
      *(uint *)(iVar5 + 0xc) = uVar13;
      *(byte *)(iVar5 + 0x10) = (byte)(_DAT_00000018 >> 10) & 1;
      *(undefined *)(iVar5 + 0x12) = DAT_0000000a;
      *(undefined *)(iVar5 + 0x11) = *(undefined *)(_DAT_00000020 + 0x61);
      _L0();
      goto _L0;
    }
  }
  uVar6 = 0x392;
_L0:
  FUN_00010df0(0,0,uVar6);
_L0:
  cVar3 = '\0';
_L0:
  if (_DAT_00000040 != 0) {
    FUN_000109f4(0x20000000);
  }
  return (_Bool)cVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00010838(int iRam00000014)

{
  byte bVar1;
  ushort *unaff_s0;
  ushort *unaff_s1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  ushort uVar10;
  ushort *puVar11;
  uint *puVar12;
  undefined *puVar13;
  int unaff_s2;
  uint uVar14;
  uint unaff_s5;
  int unaff_s6;
  uint uVar15;
  uint uVar16;
  uint unaff_s8;
  int iVar17;
  uint uVar18;
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  
  uVar2 = FUN_00010838();
  *(undefined *)(unaff_s0 + 4) = uVar2;
  if ((*(byte *)((int)unaff_s1 + 1) & 1) == 0) {
    unaff_s0[0x12] = unaff_s1[2];
    unaff_s0[0x13] = unaff_s1[3];
    uVar10 = unaff_s1[4];
  }
  else {
    unaff_s0[0x12] = unaff_s1[8];
    unaff_s0[0x13] = unaff_s1[9];
    uVar10 = unaff_s1[10];
  }
  unaff_s0[0x14] = uVar10;
  if ((*unaff_s1 & 0x200) == 0) {
    unaff_s0[0x15] = unaff_s1[5];
    unaff_s0[0x16] = unaff_s1[6];
    uVar10 = unaff_s1[7];
  }
  else {
    if ((*unaff_s1 & 0x100) == 0) {
      unaff_s0[0x15] = unaff_s1[8];
      unaff_s0[0x16] = unaff_s1[9];
      uVar10 = unaff_s1[10];
    }
    else {
      unaff_s0[0x15] = unaff_s1[0xc];
      unaff_s0[0x16] = unaff_s1[0xd];
      uVar10 = unaff_s1[0xe];
    }
  }
  unaff_s0[0x17] = uVar10;
  if ((int)(unaff_s5 << 6) < 0) {
    uVar16 = (unaff_s5 >> 0xf) - 8 & 0xff;
    uVar14 = (uint)*(byte *)(uVar16 * 0x1b0 + 0x1d);
    if (uVar14 != 0) {
      bVar1 = *(byte *)(uVar16 * 0x1b0 + 0x1a);
      *(uint *)(unaff_s0 + 0xc) = unaff_s5;
      *(byte *)(unaff_s0 + 5) = bVar1;
      uVar2 = (undefined)uVar16;
      *(undefined *)((int)unaff_s0 + 9) = uVar2;
      if ((*(char *)((uint)bVar1 * 0x5d8 + 0x56) == '\x02') &&
         ((*(byte *)(unaff_s0 + 0x12) & 1) == 0)) {
        uVar3 = FUN_00010b16(0x24);
        *(undefined *)((int)unaff_s0 + 0xb) = uVar3;
      }
      if ((unaff_s8 & 0x300) == 0x300) {
        *(uint *)(unaff_s6 + 0x4c) = *(uint *)(unaff_s6 + 0x4c) | 4;
      }
      if ((-1 < (int)((uint)*unaff_s0 << 0x11)) ||
         (iVar4 = FUN_00010b68(*(undefined4 *)(unaff_s0 + 0xc)), iVar4 != 0)) {
        uVar15 = unaff_s8 & 0xc;
        if (uVar15 == 0) {
          if ((-1 < (int)(unaff_s8 << 0x14)) || (*(ushort *)(uVar16 * 0x1b0 + 0x188) != unaff_s0[1])
             ) {
            bVar1 = *(byte *)(unaff_s0 + 0x18);
            *(ushort *)(uVar16 * 0x1b0 + 0x188) = unaff_s0[1];
            if ((bVar1 & 2) != 0) {
              iVar4 = *(int *)(unaff_s0 + 0x10);
              uVar14 = *(uint *)(unaff_s0 + 10);
              if ((uVar14 <= *(uint *)(iVar4 + 0x44)) &&
                 ((*(uint *)(iVar4 + 0x44) != uVar14 ||
                  (*(uint *)(unaff_s0 + 8) <= *(uint *)(iVar4 + 0x40))))) goto _L0;
              *(uint *)(iVar4 + 0x40) = *(uint *)(unaff_s0 + 8);
              *(uint *)(iVar4 + 0x44) = uVar14;
            }
            uVar2 = *(undefined *)((int)unaff_s0 + 9);
            goto _L0;
          }
        }
        else {
          if (uVar15 == 8) {
            if ((unaff_s8 & 0x40) == 0) {
              if ((unaff_s8 & 0x80) == 0) {
                puVar11 = (ushort *)(uVar16 * 0x1b0 + 0x188);
              }
              else {
                puVar11 = (ushort *)((*(byte *)((int)unaff_s0 + 7) + 0xc5 + uVar16 * 0xd8) * 2);
              }
              if ((-1 < (int)(unaff_s8 << 0x14)) || (*puVar11 != unaff_s0[1])) {
                *puVar11 = unaff_s0[1];
                bVar1 = *(byte *)(unaff_s0 + 5);
                if ((*(byte *)(unaff_s0 + 0x18) & 2) != 0) {
                  uVar8 = *(uint *)(unaff_s0 + 10);
                  puVar12 = (uint *)(*(int *)(unaff_s0 + 0x10) +
                                    (uint)*(byte *)((int)unaff_s0 + 7) * 8);
                  if ((uVar8 <= puVar12[1]) &&
                     ((puVar12[1] != uVar8 || (*(uint *)(unaff_s0 + 8) <= *puVar12)))) goto _L0;
                  *puVar12 = *(uint *)(unaff_s0 + 8);
                  puVar12[1] = uVar8;
                }
                if ((*(char *)((uint)bVar1 * 0x5d8 + 1000) != '\0') || (uRam00000000 != 0)) {
                  iVar4 = *(int *)(*(int *)(*(int *)(unaff_s2 + 4) + 8) + 8);
                  iVar17 = (uint)*(byte *)(unaff_s0 + 4) + iVar4;
                  iVar5 = FUN_00010c62(iVar17,0,6);
                  if ((iVar5 == 0) && (*(short *)(iVar17 + 6) == -0x7178)) {
                    bVar1 = *(byte *)(uVar16 * 0x1b0 + 0x1a);
                    if (*(char *)((uint)bVar1 * 0x5d8 + 0x56) == '\0') {
                      if (*(char *)(_DAT_00000008 + 5) == '\0') goto _L0;
                      uRam00000000._0_3_ = CONCAT12(bVar1,CONCAT11(uVar2,(undefined)uRam00000000));
                      uRam00000000 = uRam00000000 & 0xff000000 | (uint)(uint3)uRam00000000;
                      in_stack_00000008 = 0;
                    }
                    else {
                      *(undefined *)(uRam00000000 + 1) = uVar2;
                      *(undefined *)(uRam00000000 + 2) = *(undefined *)(uVar16 * 0x1b0 + 0x1a);
                      in_stack_00000008 = uRam00000000;
                    }
                    in_stack_00000010 = iVar4 + *(byte *)(unaff_s0 + 4) + 8;
                    in_stack_0000000c =
                         in_stack_0000000c & 0xffff0000 |
                         (uint)(ushort)((-8 - (ushort)*(byte *)(unaff_s0 + 4)) +
                                       *(short *)(*(int *)(unaff_s2 + 4) + 0x1c));
                    FUN_00010cea(&stack0x00000008,0x2a,0x24,_DAT_44b00120);
                    goto _L0;
                  }
                }
                if (((5 < 0xdU - iRam00000014) && ((*unaff_s0 & 0x400) == 0)) &&
                   (*(char *)(unaff_s0 + 3) == '\0')) {
                  if ((*(byte *)(unaff_s0 + 0x18) & 1) != 0) {
                    _LVL205(&stack0x00000008,*(int *)(unaff_s0 + 0x10) + 0x58,0x24,0x2a,
                            *(undefined *)((int)unaff_s0 + 7));
                    uVar16 = (uint)*(byte *)(unaff_s0 + 4);
                    iVar4 = *(int *)(*(int *)(unaff_s2 + 4) + 8);
                    uVar8 = (-8 - uVar16) + (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) &
                            0xffff;
                    do {
                      uVar18 = uVar8;
                      if (0x350 < uVar8 + uVar16) {
                        uVar18 = 0x350 - uVar16 & 0xffff;
                      }
                      uVar8 = uVar8 - uVar18 & 0xffff;
                      _LVL215(&stack0x00000008,*(int *)(iVar4 + 8) + uVar16,uVar18);
                      if (uVar8 == 0) {
                        uVar16 = uVar16 + uVar18 & 0xffff;
                        puVar9 = (undefined *)register0x00002008;
                        goto _L0;
                      }
                      iVar4 = *(int *)(iVar4 + 4);
                      uVar16 = 0;
                    } while (iVar4 != 0);
                    uVar6 = 0x369;
                    goto _L0;
                  }
_L0:
                  uVar15 = (uint)*(byte *)(unaff_s0 + 4);
                  *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c) =
                       (uint)*(byte *)((int)unaff_s0 + 9) << 0x10 |
                       (uint)*(byte *)(unaff_s0 + 5) << 8 |
                       (uint)*(byte *)((int)unaff_s0 + 0xb) << 0x18 |
                       *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c);
                  iVar4 = *(int *)(unaff_s2 + 4);
                  puVar11 = *(ushort **)(*(int *)(iVar4 + 8) + 8);
                  uVar16 = *(uint *)(iVar4 + 0x4c) & 0xffffff8f;
                  *(uint *)(iVar4 + 0x4c) = uVar16;
                  if ((*puVar11 & 0xfc) == 0x88) {
                    if ((*puVar11 & 0x300) == 0x300) {
                      bVar1 = *(byte *)(puVar11 + 0xf);
                    }
                    else {
                      bVar1 = *(byte *)(puVar11 + 0xc);
                    }
                    uVar16 = (bVar1 & 7) << 4 | uVar16;
                    if ((bVar1 & 0x80) == 0) {
                      *(uint *)(iVar4 + 0x4c) = uVar16;
                      goto _L0;
                    }
                    *(uint *)(iVar4 + 0x4c) = uVar16 | 1;
                  }
                  else {
_L0:
                    iVar4 = (int)puVar11 + (uVar15 & 0xfe);
                    iVar5 = FUN_00010f62(iVar4,0,6);
                    if (((iVar5 == 0) && (*(short *)(iVar4 + 6) != -0x7ec9)) ||
                       (iVar5 = FUN_00011040(iVar4,0,6), iVar5 == 0)) {
                      uVar16 = uVar15 - 6;
                      puVar11 = (ushort *)(iVar4 + -6);
                      *(undefined *)((int)unaff_s0 + 0x31) = 0;
                    }
                    else {
                      uVar16 = uVar15 - 0xe;
                      puVar11 = (ushort *)(iVar4 + -0xe);
                      iVar5 = *(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) - uVar15;
                      *(char *)(iVar4 + -2) = (char)((uint)(iVar5 * 0x10000) >> 0x10);
                      *(char *)(iVar4 + -1) = (char)((uint)iVar5 >> 8);
                      *(undefined *)((int)unaff_s0 + 0x31) = 1;
                    }
                    uVar15 = uVar16 & 0xff;
                    *puVar11 = unaff_s0[0x12];
                    puVar11[1] = unaff_s0[0x13];
                    puVar11[2] = unaff_s0[0x14];
                    puVar11[3] = unaff_s0[0x15];
                    puVar11[4] = unaff_s0[0x16];
                    puVar11[5] = unaff_s0[0x17];
                  }
                  *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) =
                       *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) - (short)uVar15;
                  iVar4 = *(int *)(unaff_s2 + 4);
                  *(char *)(unaff_s0 + 0x19) = (char)uVar15;
                  *(uint *)(iVar4 + 0x54) = uVar15;
                  uRam00000000 = uVar15;
                  _L0();
                  uVar6 = *(undefined4 *)(unaff_s0 + 0x24);
                  *(undefined *)(unaff_s2 + 0x1c) = 3;
                  *(undefined4 *)(unaff_s2 + 0x14) = uVar6;
                  *(uint *)(unaff_s2 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c);
                  FUN_00011022(0x40);
                  goto _L0;
                }
              }
            }
            else {
              _L0();
            }
          }
        }
      }
    }
  }
  else {
    if ((((((*(char *)((int)unaff_s0 + 0x6f) != '\0') && ((unaff_s5 & 0x200) == 0)) &&
          (*(char *)(unaff_s0 + 0x34) == *(char *)(unaff_s1 + 5))) &&
         ((*(char *)((int)unaff_s0 + 0x69) == *(char *)((int)unaff_s1 + 0xb) &&
          (*(char *)(unaff_s0 + 0x35) == *(char *)(unaff_s1 + 6))))) &&
        (*(char *)((int)unaff_s0 + 0x6b) == *(char *)((int)unaff_s1 + 0xd))) &&
       ((*(char *)(unaff_s0 + 0x36) == *(char *)(unaff_s1 + 7) &&
        (*(char *)((int)unaff_s0 + 0x6d) == *(char *)((int)unaff_s1 + 0xf))))) {
      if ((*unaff_s1 & 0x1400) == 0x1000) {
        *(undefined *)(unaff_s0 + 0x37) = 1;
      }
      else {
        *(undefined *)(unaff_s0 + 0x37) = 0;
      }
    }
    if ((unaff_s8 & 0xc) == 0) {
      if ((((*(byte *)((int)unaff_s1 + 1) >> 3 & 1) == 0) || (unaff_s0[0x31] != unaff_s1[0xb])) ||
         (iVar4 = FUN_00010a86(unaff_s1 + 5,0x5c,6), iVar4 != 0)) {
        unaff_s0[0x31] = unaff_s1[0xb];
        _L0(unaff_s0 + 0x2e,unaff_s1 + 5,6);
        if ((-1 < (int)((uint)*unaff_s0 << 0x11)) ||
           (((unaff_s5 & 0x1c) == 0x14 && (iVar4 = FUN_00010aa2(), iVar4 != 0)))) {
          uVar2 = 0xff;
_L0:
          uVar14 = FUN_00010a5a(uVar2);
          goto _L0;
        }
      }
    }
    else {
      if ((((unaff_s8 & 0xc) != 8) || (iVar4 = _L0(), iVar4 == 0)) ||
         (((*(char *)(unaff_s1 + 2) != *(char *)(iVar4 + 0x50) ||
           (((*(char *)((int)unaff_s1 + 5) != *(char *)(iVar4 + 0x51) ||
             (*(char *)(unaff_s1 + 3) != *(char *)(iVar4 + 0x52))) ||
            (*(char *)((int)unaff_s1 + 7) != *(char *)(iVar4 + 0x53))))) ||
          ((*(char *)(unaff_s1 + 4) != *(char *)(iVar4 + 0x54) ||
           (*(char *)((int)unaff_s1 + 9) != *(char *)(iVar4 + 0x55))))))) {
        FUN_000109e2();
        uVar14 = 1;
        goto _L0;
      }
      FUN_00010982(0xc0,unaff_s1 + 5,0,0,1);
    }
  }
  goto _L0;
  while( true ) {
    iVar4 = *(int *)(iVar4 + 4);
    uVar16 = 0;
    puVar9 = puVar7;
    if (iVar4 == 0) break;
_L0:
    iVar5 = *(int *)(iVar4 + 8);
    uVar8 = uVar15;
    if (0x350 < uVar15 + uVar16) {
      uVar8 = 0x350 - uVar16 & 0xffff;
    }
    uVar18 = 0;
    while (puVar7 = puVar9 + uVar18, uVar18 != uVar8) {
      puVar13 = (undefined *)(uVar18 + iVar5 + uVar16);
      uVar18 = uVar18 + 1;
      *puVar7 = *puVar13;
    }
    uVar15 = uVar15 - uVar18 & 0xffff;
    if (uVar15 == 0) {
      _LVL242(&stack0x00000008);
      if ((in_stack_00000000 == in_stack_00000008) && (in_stack_00000004 == in_stack_0000000c))
      goto _L0;
      FUN_00010e84(0x1406,0xd,5,0x18);
      iVar4 = FUN_00010e9e((uint)*(byte *)((int)unaff_s0 + 9) * 0x1b0 + 0x1e,6);
      uVar6 = *(undefined4 *)(unaff_s0 + 10);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(unaff_s0 + 8);
      *(undefined4 *)(iVar4 + 0xc) = uVar6;
      *(byte *)(iVar4 + 0x10) = (byte)(*(uint *)(unaff_s0 + 0xc) >> 10) & 1;
      *(undefined *)(iVar4 + 0x12) = *(undefined *)(unaff_s0 + 5);
      *(undefined *)(iVar4 + 0x11) = *(undefined *)(*(int *)(unaff_s0 + 0x10) + 0x61);
      _L0();
      goto _L0;
    }
  }
  uVar6 = 0x392;
_L0:
  FUN_00010df0(0,0,uVar6);
_L0:
  uVar14 = 0;
_L0:
  if (*(int *)(unaff_s0 + 0x20) != 0) {
    FUN_000109f4(0x20000000);
  }
  return uVar14;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _L0();
  if ((((iVar1 == 0) || (*(char *)(unaff_s1 + 4) != *(char *)(iVar1 + 0x50))) ||
      (*(char *)(unaff_s1 + 5) != *(char *)(iVar1 + 0x51))) ||
     (((*(char *)(unaff_s1 + 6) != *(char *)(iVar1 + 0x52) ||
       (*(char *)(unaff_s1 + 7) != *(char *)(iVar1 + 0x53))) ||
      ((*(char *)(unaff_s1 + 8) != *(char *)(iVar1 + 0x54) ||
       (*(char *)(unaff_s1 + 9) != *(char *)(iVar1 + 0x55))))))) {
    FUN_000109e2();
    uVar2 = 1;
  }
  else {
    FUN_00010982(0xc0,unaff_s1 + 10,0,0,1);
    uVar2 = 0;
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return uVar2;
}



undefined4 FUN_00010982(void)

{
  int unaff_s0;
  
  FUN_00010982();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return 0;
}



undefined4 FUN_000109e2(void)

{
  int unaff_s0;
  
  FUN_000109e2();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return 1;
}



void FUN_000109f4(void)

{
  FUN_000109f4();
  return;
}



undefined4 _L0(void)

{
  ushort *unaff_s0;
  undefined4 uVar1;
  int iVar2;
  uint unaff_s5;
  
  _L0();
  if (((int)((uint)*unaff_s0 << 0x11) < 0) &&
     (((unaff_s5 & 0x1c) != 0x14 || (iVar2 = FUN_00010aa2(), iVar2 == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00010a5a(0xff);
  }
  if (*(int *)(unaff_s0 + 0x20) != 0) {
    FUN_000109f4(0x20000000);
  }
  return uVar1;
}



undefined4 FUN_00010a5a(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_00010a5a();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return uVar1;
}



undefined4 FUN_00010a86(void)

{
  ushort *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  uint unaff_s5;
  
  iVar2 = FUN_00010a86();
  if (iVar2 != 0) {
    unaff_s0[0x31] = *(ushort *)(unaff_s1 + 0x16);
    _L0(unaff_s0 + 0x2e,6);
    if ((-1 < (int)((uint)*unaff_s0 << 0x11)) ||
       (((unaff_s5 & 0x1c) == 0x14 && (iVar2 = FUN_00010aa2(), iVar2 != 0)))) {
      uVar1 = FUN_00010a5a(0xff);
      goto _L0;
    }
  }
  uVar1 = 0;
_L0:
  if (*(int *)(unaff_s0 + 0x20) != 0) {
    FUN_000109f4(0x20000000);
  }
  return uVar1;
}



undefined4 FUN_00010aa2(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010aa2();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00010a5a(0xff);
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010b16(int iRam00000014)

{
  byte bVar1;
  ushort *unaff_s0;
  ushort *puVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  uint *puVar10;
  undefined *puVar11;
  int unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint uVar12;
  int unaff_s6;
  uint uVar13;
  int unaff_s7;
  uint unaff_s8;
  int iVar14;
  uint uVar15;
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  
  uVar3 = FUN_00010b16();
  *(undefined *)((int)unaff_s0 + 0xb) = uVar3;
  if ((unaff_s8 & 0x300) == 0x300) {
    *(uint *)(unaff_s6 + 0x4c) = *(uint *)(unaff_s6 + 0x4c) | 4;
  }
  if ((-1 < (int)((uint)*unaff_s0 << 0x11)) ||
     (iVar9 = FUN_00010b68(*(undefined4 *)(unaff_s0 + 0xc)), iVar9 != 0)) {
    uVar13 = unaff_s8 & 0xc;
    if (uVar13 == 0) {
      if ((-1 < (int)(unaff_s8 << 0x14)) ||
         (*(ushort *)(unaff_s7 * 0x1b0 + unaff_s4 + 0x188) != unaff_s0[1])) {
        bVar1 = *(byte *)(unaff_s0 + 0x18);
        *(ushort *)(unaff_s4 + unaff_s7 * 0x1b0 + 0x188) = unaff_s0[1];
        if ((bVar1 & 2) != 0) {
          iVar9 = *(int *)(unaff_s0 + 0x10);
          uVar13 = *(uint *)(unaff_s0 + 10);
          if ((uVar13 <= *(uint *)(iVar9 + 0x44)) &&
             ((*(uint *)(iVar9 + 0x44) != uVar13 ||
              (*(uint *)(unaff_s0 + 8) <= *(uint *)(iVar9 + 0x40))))) goto _L0;
          *(uint *)(iVar9 + 0x40) = *(uint *)(unaff_s0 + 8);
          *(uint *)(iVar9 + 0x44) = uVar13;
        }
        unaff_s3 = FUN_00010a5a(*(undefined *)((int)unaff_s0 + 9));
        goto _L0;
      }
    }
    else {
      if (uVar13 == 8) {
        if ((unaff_s8 & 0x40) == 0) {
          if ((unaff_s8 & 0x80) == 0) {
            iVar9 = unaff_s7 * 0x1b0 + 0x188;
          }
          else {
            iVar9 = (*(byte *)((int)unaff_s0 + 7) + 0xc5 + unaff_s7 * 0xd8) * 2;
          }
          if ((-1 < (int)(unaff_s8 << 0x14)) || (*(ushort *)(iVar9 + unaff_s4) != unaff_s0[1])) {
            *(ushort *)(iVar9 + unaff_s4) = unaff_s0[1];
            bVar1 = *(byte *)(unaff_s0 + 5);
            if ((*(byte *)(unaff_s0 + 0x18) & 2) != 0) {
              uVar7 = *(uint *)(unaff_s0 + 10);
              puVar10 = (uint *)(*(int *)(unaff_s0 + 0x10) + (uint)*(byte *)((int)unaff_s0 + 7) * 8)
              ;
              if ((uVar7 <= puVar10[1]) &&
                 ((puVar10[1] != uVar7 || (*(uint *)(unaff_s0 + 8) <= *puVar10)))) goto _L0;
              *puVar10 = *(uint *)(unaff_s0 + 8);
              puVar10[1] = uVar7;
            }
            if ((*(char *)((uint)bVar1 * 0x5d8 + unaff_s5 + 1000) != '\0') || (uRam00000000 != 0)) {
              iVar9 = *(int *)(*(int *)(*(int *)(unaff_s2 + 4) + 8) + 8);
              iVar14 = (uint)*(byte *)(unaff_s0 + 4) + iVar9;
              iVar4 = FUN_00010c62(iVar14,0,6);
              if ((iVar4 == 0) && (*(short *)(iVar14 + 6) == -0x7178)) {
                iVar4 = unaff_s4 + unaff_s7 * 0x1b0;
                bVar1 = *(byte *)(iVar4 + 0x1a);
                if (*(char *)(unaff_s5 + (uint)bVar1 * 0x5d8 + 0x56) == '\0') {
                  if (*(char *)(_DAT_00000008 + 5) == '\0') goto _L0;
                  uRam00000000._0_3_ =
                       CONCAT12(bVar1,CONCAT11((char)unaff_s7,(undefined)uRam00000000));
                  uRam00000000 = uRam00000000 & 0xff000000 | (uint)(uint3)uRam00000000;
                  in_stack_00000008 = 0;
                }
                else {
                  *(char *)(uRam00000000 + 1) = (char)unaff_s7;
                  *(undefined *)(uRam00000000 + 2) = *(undefined *)(iVar4 + 0x1a);
                  in_stack_00000008 = uRam00000000;
                }
                in_stack_00000010 = iVar9 + *(byte *)(unaff_s0 + 4) + 8;
                in_stack_0000000c =
                     in_stack_0000000c & 0xffff0000 |
                     (uint)(ushort)((-8 - (ushort)*(byte *)(unaff_s0 + 4)) +
                                   *(short *)(*(int *)(unaff_s2 + 4) + 0x1c));
                FUN_00010cea(&stack0x00000008,0x2a,0x24,_DAT_44b00120);
                goto _L0;
              }
            }
            if (((5 < 0xdU - iRam00000014) && ((*unaff_s0 & 0x400) == 0)) &&
               (*(char *)(unaff_s0 + 3) == '\0')) {
              if ((*(byte *)(unaff_s0 + 0x18) & 1) != 0) {
                _LVL205(&stack0x00000008,*(int *)(unaff_s0 + 0x10) + 0x58,0x24,0x2a,
                        *(undefined *)((int)unaff_s0 + 7));
                uVar7 = (uint)*(byte *)(unaff_s0 + 4);
                iVar9 = *(int *)(*(int *)(unaff_s2 + 4) + 8);
                uVar12 = (-8 - uVar7) + (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) & 0xffff;
                do {
                  uVar15 = uVar12;
                  if (0x350 < uVar12 + uVar7) {
                    uVar15 = 0x350 - uVar7 & 0xffff;
                  }
                  uVar12 = uVar12 - uVar15 & 0xffff;
                  _LVL215(&stack0x00000008,*(int *)(iVar9 + 8) + uVar7,uVar15);
                  if (uVar12 == 0) {
                    uVar7 = uVar7 + uVar15 & 0xffff;
                    puVar8 = (undefined *)register0x00002008;
                    goto _L0;
                  }
                  iVar9 = *(int *)(iVar9 + 4);
                  uVar7 = 0;
                } while (iVar9 != 0);
                uVar5 = 0x369;
                goto _L0;
              }
_L0:
              uVar7 = (uint)*(byte *)(unaff_s0 + 4);
              *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c) =
                   (uint)*(byte *)((int)unaff_s0 + 9) << 0x10 | (uint)*(byte *)(unaff_s0 + 5) << 8 |
                   (uint)*(byte *)((int)unaff_s0 + 0xb) << 0x18 |
                   *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c);
              iVar9 = *(int *)(unaff_s2 + 4);
              puVar2 = *(ushort **)(*(int *)(iVar9 + 8) + 8);
              uVar13 = *(uint *)(iVar9 + 0x4c) & 0xffffff8f;
              *(uint *)(iVar9 + 0x4c) = uVar13;
              if ((*puVar2 & 0xfc) == 0x88) {
                if ((*puVar2 & 0x300) == 0x300) {
                  bVar1 = *(byte *)(puVar2 + 0xf);
                }
                else {
                  bVar1 = *(byte *)(puVar2 + 0xc);
                }
                uVar13 = (bVar1 & 7) << 4 | uVar13;
                if ((bVar1 & 0x80) == 0) {
                  *(uint *)(iVar9 + 0x4c) = uVar13;
                  goto _L0;
                }
                *(uint *)(iVar9 + 0x4c) = uVar13 | 1;
              }
              else {
_L0:
                iVar9 = (int)puVar2 + (uVar7 & 0xfe);
                iVar4 = FUN_00010f62(iVar9,0,6);
                if (((iVar4 == 0) && (*(short *)(iVar9 + 6) != -0x7ec9)) ||
                   (iVar4 = FUN_00011040(iVar9,0,6), iVar4 == 0)) {
                  uVar13 = uVar7 - 6;
                  puVar2 = (ushort *)(iVar9 + -6);
                  *(undefined *)((int)unaff_s0 + 0x31) = 0;
                }
                else {
                  uVar13 = uVar7 - 0xe;
                  puVar2 = (ushort *)(iVar9 + -0xe);
                  iVar4 = *(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) - uVar7;
                  *(char *)(iVar9 + -2) = (char)((uint)(iVar4 * 0x10000) >> 0x10);
                  *(char *)(iVar9 + -1) = (char)((uint)iVar4 >> 8);
                  *(undefined *)((int)unaff_s0 + 0x31) = 1;
                }
                uVar7 = uVar13 & 0xff;
                *puVar2 = unaff_s0[0x12];
                puVar2[1] = unaff_s0[0x13];
                puVar2[2] = unaff_s0[0x14];
                puVar2[3] = unaff_s0[0x15];
                puVar2[4] = unaff_s0[0x16];
                puVar2[5] = unaff_s0[0x17];
              }
              *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) =
                   *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) - (short)uVar7;
              iVar9 = *(int *)(unaff_s2 + 4);
              *(char *)(unaff_s0 + 0x19) = (char)uVar7;
              *(uint *)(iVar9 + 0x54) = uVar7;
              uRam00000000 = uVar7;
              _L0();
              uVar5 = *(undefined4 *)(unaff_s0 + 0x24);
              *(undefined *)(unaff_s2 + 0x1c) = 3;
              *(undefined4 *)(unaff_s2 + 0x14) = uVar5;
              *(uint *)(unaff_s2 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c);
              FUN_00011022(0x40);
              goto _L0;
            }
          }
        }
        else {
          _L0();
        }
      }
    }
  }
  goto _L0;
  while( true ) {
    iVar9 = *(int *)(iVar9 + 4);
    uVar7 = 0;
    puVar8 = puVar6;
    if (iVar9 == 0) break;
_L0:
    iVar4 = *(int *)(iVar9 + 8);
    uVar12 = uVar13;
    if (0x350 < uVar13 + uVar7) {
      uVar12 = 0x350 - uVar7 & 0xffff;
    }
    uVar15 = 0;
    while (puVar6 = puVar8 + uVar15, uVar15 != uVar12) {
      puVar11 = (undefined *)(uVar15 + iVar4 + uVar7);
      uVar15 = uVar15 + 1;
      *puVar6 = *puVar11;
    }
    uVar13 = uVar13 - uVar15 & 0xffff;
    if (uVar13 == 0) {
      _LVL242(&stack0x00000008);
      if ((in_stack_00000000 == in_stack_00000008) && (in_stack_00000004 == in_stack_0000000c))
      goto _L0;
      FUN_00010e84(0x1406,0xd,5,0x18);
      iVar9 = FUN_00010e9e((uint)*(byte *)((int)unaff_s0 + 9) * 0x1b0 + unaff_s4 + 0x1e,6);
      uVar5 = *(undefined4 *)(unaff_s0 + 10);
      *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(unaff_s0 + 8);
      *(undefined4 *)(iVar9 + 0xc) = uVar5;
      *(byte *)(iVar9 + 0x10) = (byte)(*(uint *)(unaff_s0 + 0xc) >> 10) & 1;
      *(undefined *)(iVar9 + 0x12) = *(undefined *)(unaff_s0 + 5);
      *(undefined *)(iVar9 + 0x11) = *(undefined *)(*(int *)(unaff_s0 + 0x10) + 0x61);
      _L0();
      goto _L0;
    }
  }
  uVar5 = 0x392;
_L0:
  FUN_00010df0(0,0,uVar5);
_L0:
  unaff_s3 = 0;
_L0:
  if (*(int *)(unaff_s0 + 0x20) != 0) {
    FUN_000109f4(0x20000000);
  }
  return unaff_s3;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010b68(int iRam00000014)

{
  byte bVar1;
  ushort *unaff_s0;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined *puVar10;
  int unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint uVar11;
  uint uVar12;
  int unaff_s7;
  uint unaff_s8;
  int iVar13;
  uint uVar14;
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  
  iVar3 = FUN_00010b68();
  if (iVar3 != 0) {
    uVar12 = unaff_s8 & 0xc;
    if (uVar12 == 0) {
      if ((-1 < (int)(unaff_s8 << 0x14)) ||
         (*(ushort *)(unaff_s7 * 0x1b0 + unaff_s4 + 0x188) != unaff_s0[1])) {
        bVar1 = *(byte *)(unaff_s0 + 0x18);
        *(ushort *)(unaff_s4 + unaff_s7 * 0x1b0 + 0x188) = unaff_s0[1];
        if ((bVar1 & 2) != 0) {
          iVar3 = *(int *)(unaff_s0 + 0x10);
          uVar12 = *(uint *)(unaff_s0 + 10);
          if ((uVar12 <= *(uint *)(iVar3 + 0x44)) &&
             ((*(uint *)(iVar3 + 0x44) != uVar12 ||
              (*(uint *)(unaff_s0 + 8) <= *(uint *)(iVar3 + 0x40))))) goto _L0;
          *(uint *)(iVar3 + 0x40) = *(uint *)(unaff_s0 + 8);
          *(uint *)(iVar3 + 0x44) = uVar12;
        }
        unaff_s3 = FUN_00010a5a(*(undefined *)((int)unaff_s0 + 9));
        goto _L0;
      }
    }
    else {
      if (uVar12 == 8) {
        if ((unaff_s8 & 0x40) == 0) {
          if ((unaff_s8 & 0x80) == 0) {
            iVar3 = unaff_s7 * 0x1b0 + 0x188;
          }
          else {
            iVar3 = (*(byte *)((int)unaff_s0 + 7) + 0xc5 + unaff_s7 * 0xd8) * 2;
          }
          if ((-1 < (int)(unaff_s8 << 0x14)) || (*(ushort *)(iVar3 + unaff_s4) != unaff_s0[1])) {
            *(ushort *)(iVar3 + unaff_s4) = unaff_s0[1];
            bVar1 = *(byte *)(unaff_s0 + 5);
            if ((*(byte *)(unaff_s0 + 0x18) & 2) != 0) {
              uVar7 = *(uint *)(unaff_s0 + 10);
              puVar9 = (uint *)(*(int *)(unaff_s0 + 0x10) + (uint)*(byte *)((int)unaff_s0 + 7) * 8);
              if ((uVar7 <= puVar9[1]) &&
                 ((puVar9[1] != uVar7 || (*(uint *)(unaff_s0 + 8) <= *puVar9)))) goto _L0;
              *puVar9 = *(uint *)(unaff_s0 + 8);
              puVar9[1] = uVar7;
            }
            if ((*(char *)((uint)bVar1 * 0x5d8 + unaff_s5 + 1000) != '\0') || (uRam00000000 != 0)) {
              iVar3 = *(int *)(*(int *)(*(int *)(unaff_s2 + 4) + 8) + 8);
              iVar13 = (uint)*(byte *)(unaff_s0 + 4) + iVar3;
              iVar4 = FUN_00010c62(iVar13,0,6);
              if ((iVar4 == 0) && (*(short *)(iVar13 + 6) == -0x7178)) {
                iVar4 = unaff_s4 + unaff_s7 * 0x1b0;
                bVar1 = *(byte *)(iVar4 + 0x1a);
                if (*(char *)(unaff_s5 + (uint)bVar1 * 0x5d8 + 0x56) == '\0') {
                  if (*(char *)(_DAT_00000008 + 5) == '\0') goto _L0;
                  uRam00000000._0_3_ =
                       CONCAT12(bVar1,CONCAT11((char)unaff_s7,(undefined)uRam00000000));
                  uRam00000000 = uRam00000000 & 0xff000000 | (uint)(uint3)uRam00000000;
                  in_stack_00000008 = 0;
                }
                else {
                  *(char *)(uRam00000000 + 1) = (char)unaff_s7;
                  *(undefined *)(uRam00000000 + 2) = *(undefined *)(iVar4 + 0x1a);
                  in_stack_00000008 = uRam00000000;
                }
                in_stack_00000010 = iVar3 + *(byte *)(unaff_s0 + 4) + 8;
                in_stack_0000000c =
                     in_stack_0000000c & 0xffff0000 |
                     (uint)(ushort)((-8 - (ushort)*(byte *)(unaff_s0 + 4)) +
                                   *(short *)(*(int *)(unaff_s2 + 4) + 0x1c));
                FUN_00010cea(&stack0x00000008,0x2a,0x24,_DAT_44b00120);
                goto _L0;
              }
            }
            if (((5 < 0xdU - iRam00000014) && ((*unaff_s0 & 0x400) == 0)) &&
               (*(char *)(unaff_s0 + 3) == '\0')) {
              if ((*(byte *)(unaff_s0 + 0x18) & 1) != 0) {
                _LVL205(&stack0x00000008,*(int *)(unaff_s0 + 0x10) + 0x58,0x24,0x2a,
                        *(undefined *)((int)unaff_s0 + 7));
                uVar7 = (uint)*(byte *)(unaff_s0 + 4);
                iVar3 = *(int *)(*(int *)(unaff_s2 + 4) + 8);
                uVar11 = (-8 - uVar7) + (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) & 0xffff;
                do {
                  uVar14 = uVar11;
                  if (0x350 < uVar11 + uVar7) {
                    uVar14 = 0x350 - uVar7 & 0xffff;
                  }
                  uVar11 = uVar11 - uVar14 & 0xffff;
                  _LVL215(&stack0x00000008,*(int *)(iVar3 + 8) + uVar7,uVar14);
                  if (uVar11 == 0) {
                    uVar7 = uVar7 + uVar14 & 0xffff;
                    puVar8 = (undefined *)register0x00002008;
                    goto _L0;
                  }
                  iVar3 = *(int *)(iVar3 + 4);
                  uVar7 = 0;
                } while (iVar3 != 0);
                uVar5 = 0x369;
                goto _L0;
              }
_L0:
              uVar7 = (uint)*(byte *)(unaff_s0 + 4);
              *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c) =
                   (uint)*(byte *)((int)unaff_s0 + 9) << 0x10 | (uint)*(byte *)(unaff_s0 + 5) << 8 |
                   (uint)*(byte *)((int)unaff_s0 + 0xb) << 0x18 |
                   *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c);
              iVar3 = *(int *)(unaff_s2 + 4);
              puVar2 = *(ushort **)(*(int *)(iVar3 + 8) + 8);
              uVar12 = *(uint *)(iVar3 + 0x4c) & 0xffffff8f;
              *(uint *)(iVar3 + 0x4c) = uVar12;
              if ((*puVar2 & 0xfc) == 0x88) {
                if ((*puVar2 & 0x300) == 0x300) {
                  bVar1 = *(byte *)(puVar2 + 0xf);
                }
                else {
                  bVar1 = *(byte *)(puVar2 + 0xc);
                }
                uVar12 = (bVar1 & 7) << 4 | uVar12;
                if ((bVar1 & 0x80) == 0) {
                  *(uint *)(iVar3 + 0x4c) = uVar12;
                  goto _L0;
                }
                *(uint *)(iVar3 + 0x4c) = uVar12 | 1;
              }
              else {
_L0:
                iVar3 = (int)puVar2 + (uVar7 & 0xfe);
                iVar4 = FUN_00010f62(iVar3,0,6);
                if (((iVar4 == 0) && (*(short *)(iVar3 + 6) != -0x7ec9)) ||
                   (iVar4 = FUN_00011040(iVar3,0,6), iVar4 == 0)) {
                  uVar12 = uVar7 - 6;
                  puVar2 = (ushort *)(iVar3 + -6);
                  *(undefined *)((int)unaff_s0 + 0x31) = 0;
                }
                else {
                  uVar12 = uVar7 - 0xe;
                  puVar2 = (ushort *)(iVar3 + -0xe);
                  iVar4 = *(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) - uVar7;
                  *(char *)(iVar3 + -2) = (char)((uint)(iVar4 * 0x10000) >> 0x10);
                  *(char *)(iVar3 + -1) = (char)((uint)iVar4 >> 8);
                  *(undefined *)((int)unaff_s0 + 0x31) = 1;
                }
                uVar7 = uVar12 & 0xff;
                *puVar2 = unaff_s0[0x12];
                puVar2[1] = unaff_s0[0x13];
                puVar2[2] = unaff_s0[0x14];
                puVar2[3] = unaff_s0[0x15];
                puVar2[4] = unaff_s0[0x16];
                puVar2[5] = unaff_s0[0x17];
              }
              *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) =
                   *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) - (short)uVar7;
              iVar3 = *(int *)(unaff_s2 + 4);
              *(char *)(unaff_s0 + 0x19) = (char)uVar7;
              *(uint *)(iVar3 + 0x54) = uVar7;
              uRam00000000 = uVar7;
              _L0();
              uVar5 = *(undefined4 *)(unaff_s0 + 0x24);
              *(undefined *)(unaff_s2 + 0x1c) = 3;
              *(undefined4 *)(unaff_s2 + 0x14) = uVar5;
              *(uint *)(unaff_s2 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c);
              FUN_00011022(0x40);
              goto _L0;
            }
          }
        }
        else {
          _L0();
        }
      }
    }
  }
  goto _L0;
  while( true ) {
    iVar3 = *(int *)(iVar3 + 4);
    uVar7 = 0;
    puVar8 = puVar6;
    if (iVar3 == 0) break;
_L0:
    iVar4 = *(int *)(iVar3 + 8);
    uVar11 = uVar12;
    if (0x350 < uVar12 + uVar7) {
      uVar11 = 0x350 - uVar7 & 0xffff;
    }
    uVar14 = 0;
    while (puVar6 = puVar8 + uVar14, uVar14 != uVar11) {
      puVar10 = (undefined *)(uVar14 + iVar4 + uVar7);
      uVar14 = uVar14 + 1;
      *puVar6 = *puVar10;
    }
    uVar12 = uVar12 - uVar14 & 0xffff;
    if (uVar12 == 0) {
      _LVL242(&stack0x00000008);
      if ((in_stack_00000000 == in_stack_00000008) && (in_stack_00000004 == in_stack_0000000c))
      goto _L0;
      FUN_00010e84(0x1406,0xd,5,0x18);
      iVar3 = FUN_00010e9e((uint)*(byte *)((int)unaff_s0 + 9) * 0x1b0 + unaff_s4 + 0x1e,6);
      uVar5 = *(undefined4 *)(unaff_s0 + 10);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(unaff_s0 + 8);
      *(undefined4 *)(iVar3 + 0xc) = uVar5;
      *(byte *)(iVar3 + 0x10) = (byte)(*(uint *)(unaff_s0 + 0xc) >> 10) & 1;
      *(undefined *)(iVar3 + 0x12) = *(undefined *)(unaff_s0 + 5);
      *(undefined *)(iVar3 + 0x11) = *(undefined *)(*(int *)(unaff_s0 + 0x10) + 0x61);
      _L0();
      goto _L0;
    }
  }
  uVar5 = 0x392;
_L0:
  FUN_00010df0(0,0,uVar5);
_L0:
  unaff_s3 = 0;
_L0:
  if (*(int *)(unaff_s0 + 0x20) != 0) {
    FUN_000109f4(0x20000000);
  }
  return unaff_s3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010c62(int iRam00000014)

{
  byte bVar1;
  ushort *unaff_s0;
  int unaff_s1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puVar9;
  int unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint uVar10;
  uint unaff_s6;
  int unaff_s7;
  int unaff_s8;
  uint uVar11;
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  
  iVar4 = FUN_00010c62();
  if ((iVar4 == 0) && (*(short *)(unaff_s8 + 6) == -0x7178)) {
    iVar4 = unaff_s4 + unaff_s7 * 0x1b0;
    bVar1 = *(byte *)(iVar4 + 0x1a);
    if (*(char *)(unaff_s5 + (uint)bVar1 * 0x5d8 + 0x56) == '\0') {
      if (*(char *)(_DAT_00000008 + 5) == '\0') goto _L0;
      uRam00000000._0_3_ = CONCAT12(bVar1,CONCAT11((char)unaff_s7,(undefined)uRam00000000));
      uRam00000000 = uRam00000000 & 0xff000000 | (uint)(uint3)uRam00000000;
      in_stack_00000008 = 0;
    }
    else {
      *(char *)(uRam00000000 + 1) = (char)unaff_s7;
      *(undefined *)(uRam00000000 + 2) = *(undefined *)(iVar4 + 0x1a);
      in_stack_00000008 = uRam00000000;
    }
    in_stack_00000010 = unaff_s1 + *(byte *)(unaff_s0 + 4) + 8;
    in_stack_0000000c =
         in_stack_0000000c & 0xffff0000 |
         (uint)(ushort)((-8 - (ushort)*(byte *)(unaff_s0 + 4)) +
                       *(short *)(*(int *)(unaff_s2 + 4) + 0x1c));
    FUN_00010cea(&stack0x00000008,0x2a,0x24,_DAT_44b00120);
  }
  else {
    if ((5 < 0xdU - iRam00000014) &&
       (((*unaff_s0 & 0x400) == 0 && (*(char *)(unaff_s0 + 3) == '\0')))) {
      if ((*(byte *)(unaff_s0 + 0x18) & 1) != 0) {
        _LVL205(&stack0x00000008,*(int *)(unaff_s0 + 0x10) + 0x58,0x24,0x2a,
                *(undefined *)((int)unaff_s0 + 7));
        uVar2 = (uint)*(byte *)(unaff_s0 + 4);
        iVar4 = *(int *)(*(int *)(unaff_s2 + 4) + 8);
        uVar10 = (-8 - uVar2) + (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) & 0xffff;
        do {
          uVar11 = uVar10;
          if (0x350 < uVar10 + uVar2) {
            uVar11 = 0x350 - uVar2 & 0xffff;
          }
          uVar10 = uVar10 - uVar11 & 0xffff;
          _LVL215(&stack0x00000008,*(int *)(iVar4 + 8) + uVar2,uVar11);
          if (uVar10 == 0) {
            uVar2 = uVar2 + uVar11 & 0xffff;
            puVar7 = (undefined *)register0x00002008;
            goto _L0;
          }
          iVar4 = *(int *)(iVar4 + 4);
          uVar2 = 0;
        } while (iVar4 != 0);
        uVar5 = 0x369;
        goto _L0;
      }
_L0:
      uVar10 = (uint)*(byte *)(unaff_s0 + 4);
      *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c) =
           (uint)*(byte *)((int)unaff_s0 + 9) << 0x10 | (uint)*(byte *)(unaff_s0 + 5) << 8 |
           (uint)*(byte *)((int)unaff_s0 + 0xb) << 0x18 | *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c);
      iVar4 = *(int *)(unaff_s2 + 4);
      puVar3 = *(ushort **)(*(int *)(iVar4 + 8) + 8);
      uVar2 = *(uint *)(iVar4 + 0x4c) & 0xffffff8f;
      *(uint *)(iVar4 + 0x4c) = uVar2;
      if ((*puVar3 & 0xfc) == 0x88) {
        if ((*puVar3 & 0x300) == 0x300) {
          bVar1 = *(byte *)(puVar3 + 0xf);
        }
        else {
          bVar1 = *(byte *)(puVar3 + 0xc);
        }
        uVar2 = (bVar1 & 7) << 4 | uVar2;
        if ((bVar1 & 0x80) == 0) {
          *(uint *)(iVar4 + 0x4c) = uVar2;
          goto _L0;
        }
        *(uint *)(iVar4 + 0x4c) = uVar2 | 1;
      }
      else {
_L0:
        iVar4 = (int)puVar3 + (uVar10 & 0xfe);
        iVar8 = FUN_00010f62(iVar4,0,6);
        if (((iVar8 == 0) && (*(short *)(iVar4 + 6) != -0x7ec9)) ||
           (iVar8 = FUN_00011040(iVar4,0,6), iVar8 == 0)) {
          uVar2 = uVar10 - 6;
          puVar3 = (ushort *)(iVar4 + -6);
          *(undefined *)((int)unaff_s0 + 0x31) = 0;
        }
        else {
          uVar2 = uVar10 - 0xe;
          puVar3 = (ushort *)(iVar4 + -0xe);
          iVar8 = *(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) - uVar10;
          *(char *)(iVar4 + -2) = (char)((uint)(iVar8 * 0x10000) >> 0x10);
          *(char *)(iVar4 + -1) = (char)((uint)iVar8 >> 8);
          *(undefined *)((int)unaff_s0 + 0x31) = 1;
        }
        uVar10 = uVar2 & 0xff;
        *puVar3 = unaff_s0[0x12];
        puVar3[1] = unaff_s0[0x13];
        puVar3[2] = unaff_s0[0x14];
        puVar3[3] = unaff_s0[0x15];
        puVar3[4] = unaff_s0[0x16];
        puVar3[5] = unaff_s0[0x17];
      }
      *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) =
           *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) - (short)uVar10;
      iVar4 = *(int *)(unaff_s2 + 4);
      *(char *)(unaff_s0 + 0x19) = (char)uVar10;
      *(uint *)(iVar4 + 0x54) = uVar10;
      uRam00000000 = uVar10;
      _L0();
      uVar5 = *(undefined4 *)(unaff_s0 + 0x24);
      *(undefined *)(unaff_s2 + 0x1c) = 3;
      *(undefined4 *)(unaff_s2 + 0x14) = uVar5;
      *(uint *)(unaff_s2 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c);
      FUN_00011022(0x40);
      goto _L0;
    }
  }
  goto _L0;
  while( true ) {
    iVar4 = *(int *)(iVar4 + 4);
    uVar2 = 0;
    puVar7 = puVar6;
    if (iVar4 == 0) break;
_L0:
    iVar8 = *(int *)(iVar4 + 8);
    uVar10 = unaff_s6;
    if (0x350 < (int)(unaff_s6 + uVar2)) {
      uVar10 = 0x350 - uVar2 & 0xffff;
    }
    uVar11 = 0;
    while (puVar6 = puVar7 + uVar11, uVar11 != uVar10) {
      puVar9 = (undefined *)(uVar11 + iVar8 + uVar2);
      uVar11 = uVar11 + 1;
      *puVar6 = *puVar9;
    }
    unaff_s6 = unaff_s6 - uVar11 & 0xffff;
    if (unaff_s6 == 0) {
      _LVL242(&stack0x00000008);
      if ((in_stack_00000000 == in_stack_00000008) && (in_stack_00000004 == in_stack_0000000c))
      goto _L0;
      FUN_00010e84(0x1406,0xd,5,0x18);
      iVar4 = FUN_00010e9e((uint)*(byte *)((int)unaff_s0 + 9) * 0x1b0 + unaff_s4 + 0x1e,6);
      uVar5 = *(undefined4 *)(unaff_s0 + 10);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(unaff_s0 + 8);
      *(undefined4 *)(iVar4 + 0xc) = uVar5;
      *(byte *)(iVar4 + 0x10) = (byte)(*(uint *)(unaff_s0 + 0xc) >> 10) & 1;
      *(undefined *)(iVar4 + 0x12) = *(undefined *)(unaff_s0 + 5);
      *(undefined *)(iVar4 + 0x11) = *(undefined *)(*(int *)(unaff_s0 + 0x10) + 0x61);
      _L0();
      goto _L0;
    }
  }
  uVar5 = 0x392;
_L0:
  FUN_00010df0(0,0,uVar5);
_L0:
  unaff_s3 = 0;
_L0:
  if (*(int *)(unaff_s0 + 0x20) != 0) {
    FUN_000109f4(0x20000000);
  }
  return unaff_s3;
}



undefined4 FUN_00010cea(void)

{
  int unaff_s0;
  
  FUN_00010cea();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return 0;
}



undefined4 _LVL205(void)

{
  byte bVar1;
  int unaff_s0;
  uint uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined *puVar9;
  int unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  uint uVar10;
  uint unaff_s6;
  int iVar11;
  uint uVar12;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  _LVL205();
  uVar2 = (uint)*(byte *)(unaff_s0 + 8);
  iVar11 = *(int *)(*(int *)(unaff_s2 + 4) + 8);
  uVar10 = (-8 - uVar2) + (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) & 0xffff;
  do {
    uVar12 = uVar10;
    if (0x350 < uVar10 + uVar2) {
      uVar12 = 0x350 - uVar2 & 0xffff;
    }
    uVar10 = uVar10 - uVar12 & 0xffff;
    _LVL215(&stack0x00000008,*(int *)(iVar11 + 8) + uVar2,uVar12);
    if (uVar10 == 0) {
      uVar2 = uVar2 + uVar12 & 0xffff;
      puVar6 = (undefined *)register0x00002008;
      goto _L0;
    }
    iVar11 = *(int *)(iVar11 + 4);
    uVar2 = 0;
  } while (iVar11 != 0);
  uVar4 = 0x369;
  goto _L0;
  while( true ) {
    iVar11 = *(int *)(iVar11 + 4);
    uVar2 = 0;
    puVar6 = puVar5;
    if (iVar11 == 0) break;
_L0:
    iVar7 = *(int *)(iVar11 + 8);
    uVar10 = unaff_s6;
    if (0x350 < (int)(unaff_s6 + uVar2)) {
      uVar10 = 0x350 - uVar2 & 0xffff;
    }
    uVar12 = 0;
    while (puVar5 = puVar6 + uVar12, uVar12 != uVar10) {
      puVar9 = (undefined *)(uVar12 + iVar7 + uVar2);
      uVar12 = uVar12 + 1;
      *puVar5 = *puVar9;
    }
    unaff_s6 = unaff_s6 - uVar12 & 0xffff;
    if (unaff_s6 == 0) {
      _LVL242(&stack0x00000008);
      if ((in_stack_00000000 != in_stack_00000008) || (in_stack_00000004 != in_stack_0000000c)) {
        FUN_00010e84(0x1406,0xd,5,0x18);
        iVar11 = FUN_00010e9e((uint)*(byte *)(unaff_s0 + 9) * 0x1b0 + unaff_s4 + 0x1e,6);
        uVar4 = *(undefined4 *)(unaff_s0 + 0x14);
        *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(unaff_s0 + 0x10);
        *(undefined4 *)(iVar11 + 0xc) = uVar4;
        *(byte *)(iVar11 + 0x10) = (byte)(*(uint *)(unaff_s0 + 0x18) >> 10) & 1;
        *(undefined *)(iVar11 + 0x12) = *(undefined *)(unaff_s0 + 10);
        *(undefined *)(iVar11 + 0x11) = *(undefined *)(*(int *)(unaff_s0 + 0x20) + 0x61);
        _L0();
        goto _L0;
      }
      uVar10 = (uint)*(byte *)(unaff_s0 + 8);
      *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c) =
           (uint)*(byte *)(unaff_s0 + 9) << 0x10 | (uint)*(byte *)(unaff_s0 + 10) << 8 |
           (uint)*(byte *)(unaff_s0 + 0xb) << 0x18 | *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c);
      iVar11 = *(int *)(unaff_s2 + 4);
      puVar3 = *(ushort **)(*(int *)(iVar11 + 8) + 8);
      uVar2 = *(uint *)(iVar11 + 0x4c) & 0xffffff8f;
      *(uint *)(iVar11 + 0x4c) = uVar2;
      if ((*puVar3 & 0xfc) == 0x88) {
        if ((*puVar3 & 0x300) == 0x300) {
          bVar1 = *(byte *)(puVar3 + 0xf);
        }
        else {
          bVar1 = *(byte *)(puVar3 + 0xc);
        }
        uVar2 = (bVar1 & 7) << 4 | uVar2;
        if ((bVar1 & 0x80) == 0) {
          *(uint *)(iVar11 + 0x4c) = uVar2;
          goto _L0;
        }
        *(uint *)(iVar11 + 0x4c) = uVar2 | 1;
      }
      else {
_L0:
        iVar11 = (int)puVar3 + (uVar10 & 0xfe);
        iVar7 = FUN_00010f62(iVar11,0,6);
        if (((iVar7 == 0) && (*(short *)(iVar11 + 6) != -0x7ec9)) ||
           (iVar7 = FUN_00011040(iVar11,0,6), iVar7 == 0)) {
          uVar2 = uVar10 - 6;
          puVar8 = (undefined2 *)(iVar11 + -6);
          *(undefined *)(unaff_s0 + 0x31) = 0;
        }
        else {
          uVar2 = uVar10 - 0xe;
          puVar8 = (undefined2 *)(iVar11 + -0xe);
          iVar7 = *(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) - uVar10;
          *(char *)(iVar11 + -2) = (char)((uint)(iVar7 * 0x10000) >> 0x10);
          *(char *)(iVar11 + -1) = (char)((uint)iVar7 >> 8);
          *(undefined *)(unaff_s0 + 0x31) = 1;
        }
        uVar10 = uVar2 & 0xff;
        *puVar8 = *(undefined2 *)(unaff_s0 + 0x24);
        puVar8[1] = *(undefined2 *)(unaff_s0 + 0x26);
        puVar8[2] = *(undefined2 *)(unaff_s0 + 0x28);
        puVar8[3] = *(undefined2 *)(unaff_s0 + 0x2a);
        puVar8[4] = *(undefined2 *)(unaff_s0 + 0x2c);
        puVar8[5] = *(undefined2 *)(unaff_s0 + 0x2e);
      }
      *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) =
           *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) - (short)uVar10;
      iVar11 = *(int *)(unaff_s2 + 4);
      *(char *)(unaff_s0 + 0x32) = (char)uVar10;
      *(uint *)(iVar11 + 0x54) = uVar10;
      uRam00000000 = uVar10;
      _L0();
      uVar4 = *(undefined4 *)(unaff_s0 + 0x48);
      *(undefined *)(unaff_s2 + 0x1c) = 3;
      *(undefined4 *)(unaff_s2 + 0x14) = uVar4;
      *(uint *)(unaff_s2 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c);
      FUN_00011022(0x40);
      goto _L0;
    }
  }
  uVar4 = 0x392;
_L0:
  FUN_00010df0(0,0,uVar4);
_L0:
  unaff_s3 = 0;
_L0:
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return unaff_s3;
}



undefined4 _LVL215(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined *puVar12;
  int unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  uint unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  while (_LVL215(param_1,param_2,param_3), unaff_s5 != 0) {
    unaff_s7 = *(int *)(unaff_s7 + 4);
    unaff_s1 = 0;
    if (unaff_s7 == 0) {
      uVar6 = 0x369;
      goto _L0;
    }
    param_2 = *(undefined4 *)(unaff_s7 + 8);
    param_3 = unaff_s5;
    if (unaff_s9 < (int)unaff_s5) {
      param_3 = unaff_s10 & 0xffff;
    }
    unaff_s5 = unaff_s5 - param_3 & 0xffff;
    param_1 = (undefined4 *)&stack0x00000008;
    unaff_s8 = param_3;
  }
  uVar2 = unaff_s1 + unaff_s8 & 0xffff;
  puVar8 = (undefined *)register0x00002008;
  while( true ) {
    iVar9 = *(int *)(unaff_s7 + 8);
    uVar5 = unaff_s6;
    if (0x350 < (int)(unaff_s6 + uVar2)) {
      uVar5 = 0x350 - uVar2 & 0xffff;
    }
    uVar11 = 0;
    while (puVar7 = puVar8 + uVar11, uVar11 != uVar5) {
      puVar12 = (undefined *)(uVar11 + iVar9 + uVar2);
      uVar11 = uVar11 + 1;
      *puVar7 = *puVar12;
    }
    unaff_s6 = unaff_s6 - uVar11 & 0xffff;
    if (unaff_s6 == 0) break;
    unaff_s7 = *(int *)(unaff_s7 + 4);
    uVar2 = 0;
    puVar8 = puVar7;
    if (unaff_s7 == 0) {
      uVar6 = 0x392;
_L0:
      FUN_00010df0(0,0,uVar6);
_L0:
      unaff_s3 = 0;
_L0:
      if (*(int *)(unaff_s0 + 0x40) != 0) {
        FUN_000109f4(0x20000000);
      }
      return unaff_s3;
    }
  }
  _LVL242(&stack0x00000008);
  if ((in_stack_00000000 != in_stack_00000008) || (in_stack_00000004 != in_stack_0000000c)) {
    FUN_00010e84(0x1406,0xd,5,0x18);
    iVar9 = FUN_00010e9e((uint)*(byte *)(unaff_s0 + 9) * 0x1b0 + unaff_s4 + 0x1e,6);
    uVar6 = *(undefined4 *)(unaff_s0 + 0x14);
    *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(unaff_s0 + 0x10);
    *(undefined4 *)(iVar9 + 0xc) = uVar6;
    *(byte *)(iVar9 + 0x10) = (byte)(*(uint *)(unaff_s0 + 0x18) >> 10) & 1;
    *(undefined *)(iVar9 + 0x12) = *(undefined *)(unaff_s0 + 10);
    *(undefined *)(iVar9 + 0x11) = *(undefined *)(*(int *)(unaff_s0 + 0x20) + 0x61);
    _L0();
    goto _L0;
  }
  uVar5 = (uint)*(byte *)(unaff_s0 + 8);
  *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c) =
       (uint)*(byte *)(unaff_s0 + 9) << 0x10 | (uint)*(byte *)(unaff_s0 + 10) << 8 |
       (uint)*(byte *)(unaff_s0 + 0xb) << 0x18 | *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c);
  iVar9 = *(int *)(unaff_s2 + 4);
  puVar3 = *(ushort **)(*(int *)(iVar9 + 8) + 8);
  uVar2 = *(uint *)(iVar9 + 0x4c) & 0xffffff8f;
  *(uint *)(iVar9 + 0x4c) = uVar2;
  if ((*puVar3 & 0xfc) == 0x88) {
    if ((*puVar3 & 0x300) == 0x300) {
      bVar1 = *(byte *)(puVar3 + 0xf);
    }
    else {
      bVar1 = *(byte *)(puVar3 + 0xc);
    }
    uVar2 = (bVar1 & 7) << 4 | uVar2;
    if ((bVar1 & 0x80) == 0) {
      *(uint *)(iVar9 + 0x4c) = uVar2;
      goto _L0;
    }
    *(uint *)(iVar9 + 0x4c) = uVar2 | 1;
  }
  else {
_L0:
    iVar9 = (int)puVar3 + (uVar5 & 0xfe);
    iVar4 = FUN_00010f62(iVar9,0,6);
    if (((iVar4 == 0) && (*(short *)(iVar9 + 6) != -0x7ec9)) ||
       (iVar4 = FUN_00011040(iVar9,0,6), iVar4 == 0)) {
      uVar2 = uVar5 - 6;
      puVar10 = (undefined2 *)(iVar9 + -6);
      *(undefined *)(unaff_s0 + 0x31) = 0;
    }
    else {
      uVar2 = uVar5 - 0xe;
      puVar10 = (undefined2 *)(iVar9 + -0xe);
      iVar4 = *(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) - uVar5;
      *(char *)(iVar9 + -2) = (char)((uint)(iVar4 * 0x10000) >> 0x10);
      *(char *)(iVar9 + -1) = (char)((uint)iVar4 >> 8);
      *(undefined *)(unaff_s0 + 0x31) = 1;
    }
    uVar5 = uVar2 & 0xff;
    *puVar10 = *(undefined2 *)(unaff_s0 + 0x24);
    puVar10[1] = *(undefined2 *)(unaff_s0 + 0x26);
    puVar10[2] = *(undefined2 *)(unaff_s0 + 0x28);
    puVar10[3] = *(undefined2 *)(unaff_s0 + 0x2a);
    puVar10[4] = *(undefined2 *)(unaff_s0 + 0x2c);
    puVar10[5] = *(undefined2 *)(unaff_s0 + 0x2e);
  }
  *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) =
       *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) - (short)uVar5;
  iVar9 = *(int *)(unaff_s2 + 4);
  *(char *)(unaff_s0 + 0x32) = (char)uVar5;
  *(uint *)(iVar9 + 0x54) = uVar5;
  uRam00000000 = uVar5;
  _L0();
  uVar6 = *(undefined4 *)(unaff_s0 + 0x48);
  *(undefined *)(unaff_s2 + 0x1c) = 3;
  *(undefined4 *)(unaff_s2 + 0x14) = uVar6;
  *(uint *)(unaff_s2 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c);
  FUN_00011022(0x40);
  goto _L0;
}



undefined4 FUN_00010df0(void)

{
  int unaff_s0;
  
  FUN_00010df0();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return 0;
}



undefined4 _LVL242(void)

{
  byte bVar1;
  int unaff_s0;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  uint uVar8;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  _LVL242();
  if ((in_stack_00000000 != in_stack_00000008) || (in_stack_00000004 != in_stack_0000000c)) {
    FUN_00010e84(0x1406,0xd,5,0x18);
    iVar3 = FUN_00010e9e((uint)*(byte *)(unaff_s0 + 9) * 0x1b0 + unaff_s4 + 0x1e,6);
    uVar6 = *(undefined4 *)(unaff_s0 + 0x14);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(unaff_s0 + 0x10);
    *(undefined4 *)(iVar3 + 0xc) = uVar6;
    *(byte *)(iVar3 + 0x10) = (byte)(*(uint *)(unaff_s0 + 0x18) >> 10) & 1;
    *(undefined *)(iVar3 + 0x12) = *(undefined *)(unaff_s0 + 10);
    *(undefined *)(iVar3 + 0x11) = *(undefined *)(*(int *)(unaff_s0 + 0x20) + 0x61);
    _L0();
    unaff_s3 = 0;
    goto _L0;
  }
  uVar8 = (uint)*(byte *)(unaff_s0 + 8);
  *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c) =
       (uint)*(byte *)(unaff_s0 + 9) << 0x10 | (uint)*(byte *)(unaff_s0 + 10) << 8 |
       (uint)*(byte *)(unaff_s0 + 0xb) << 0x18 | *(uint *)(*(int *)(unaff_s2 + 4) + 0x4c);
  iVar3 = *(int *)(unaff_s2 + 4);
  puVar2 = *(ushort **)(*(int *)(iVar3 + 8) + 8);
  uVar5 = *(uint *)(iVar3 + 0x4c) & 0xffffff8f;
  *(uint *)(iVar3 + 0x4c) = uVar5;
  if ((*puVar2 & 0xfc) == 0x88) {
    if ((*puVar2 & 0x300) == 0x300) {
      bVar1 = *(byte *)(puVar2 + 0xf);
    }
    else {
      bVar1 = *(byte *)(puVar2 + 0xc);
    }
    uVar5 = (bVar1 & 7) << 4 | uVar5;
    if ((bVar1 & 0x80) == 0) {
      *(uint *)(iVar3 + 0x4c) = uVar5;
      goto _L0;
    }
    *(uint *)(iVar3 + 0x4c) = uVar5 | 1;
  }
  else {
_L0:
    iVar3 = (int)puVar2 + (uVar8 & 0xfe);
    iVar4 = FUN_00010f62(iVar3,0,6);
    if (((iVar4 == 0) && (*(short *)(iVar3 + 6) != -0x7ec9)) ||
       (iVar4 = FUN_00011040(iVar3,0,6), iVar4 == 0)) {
      uVar5 = uVar8 - 6;
      puVar7 = (undefined2 *)(iVar3 + -6);
      *(undefined *)(unaff_s0 + 0x31) = 0;
    }
    else {
      uVar5 = uVar8 - 0xe;
      puVar7 = (undefined2 *)(iVar3 + -0xe);
      iVar4 = *(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) - uVar8;
      *(char *)(iVar3 + -2) = (char)((uint)(iVar4 * 0x10000) >> 0x10);
      *(char *)(iVar3 + -1) = (char)((uint)iVar4 >> 8);
      *(undefined *)(unaff_s0 + 0x31) = 1;
    }
    uVar8 = uVar5 & 0xff;
    *puVar7 = *(undefined2 *)(unaff_s0 + 0x24);
    puVar7[1] = *(undefined2 *)(unaff_s0 + 0x26);
    puVar7[2] = *(undefined2 *)(unaff_s0 + 0x28);
    puVar7[3] = *(undefined2 *)(unaff_s0 + 0x2a);
    puVar7[4] = *(undefined2 *)(unaff_s0 + 0x2c);
    puVar7[5] = *(undefined2 *)(unaff_s0 + 0x2e);
  }
  *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) =
       *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) - (short)uVar8;
  iVar3 = *(int *)(unaff_s2 + 4);
  *(char *)(unaff_s0 + 0x32) = (char)uVar8;
  *(uint *)(iVar3 + 0x54) = uVar8;
  uRam00000000 = uVar8;
  _L0();
  uVar6 = *(undefined4 *)(unaff_s0 + 0x48);
  *(undefined *)(unaff_s2 + 0x1c) = 3;
  *(undefined4 *)(unaff_s2 + 0x14) = uVar6;
  *(uint *)(unaff_s2 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c);
  FUN_00011022(0x40);
_L0:
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return unaff_s3;
}



undefined4 FUN_00010e84(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  int unaff_s4;
  
  FUN_00010e84();
  iVar1 = FUN_00010e9e((uint)*(byte *)(unaff_s0 + 9) * 0x1b0 + unaff_s4 + 0x1e,6);
  uVar2 = *(undefined4 *)(unaff_s0 + 0x14);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(unaff_s0 + 0x10);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  *(byte *)(iVar1 + 0x10) = (byte)(*(uint *)(unaff_s0 + 0x18) >> 10) & 1;
  *(undefined *)(iVar1 + 0x12) = *(undefined *)(unaff_s0 + 10);
  *(undefined *)(iVar1 + 0x11) = *(undefined *)(*(int *)(unaff_s0 + 0x20) + 0x61);
  _L0();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return 0;
}



undefined4 FUN_00010e9e(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010e9e();
  uVar2 = *(undefined4 *)(unaff_s0 + 0x14);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(unaff_s0 + 0x10);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  *(byte *)(iVar1 + 0x10) = (byte)(*(uint *)(unaff_s0 + 0x18) >> 10) & 1;
  *(undefined *)(iVar1 + 0x12) = *(undefined *)(unaff_s0 + 10);
  *(undefined *)(iVar1 + 0x11) = *(undefined *)(*(int *)(unaff_s0 + 0x20) + 0x61);
  _L0();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return 0;
}



void FUN_00010f62(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  
  iVar1 = FUN_00010f62();
  if (((iVar1 == 0) && (*(short *)(unaff_s1 + 6) != -0x7ec9)) ||
     (iVar1 = FUN_00011040(0,6), iVar1 == 0)) {
    uRam00000000 = unaff_s4 - 6;
    puVar2 = (undefined2 *)(unaff_s1 + -6);
    *(undefined *)(unaff_s0 + 0x31) = 0;
  }
  else {
    uRam00000000 = unaff_s4 - 0xe;
    puVar2 = (undefined2 *)(unaff_s1 + -0xe);
    iVar1 = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) - unaff_s5;
    *(char *)(unaff_s1 + -2) = (char)((uint)(iVar1 * 0x10000) >> 0x10);
    *(char *)(unaff_s1 + -1) = (char)((uint)iVar1 >> 8);
    *(undefined *)(unaff_s0 + 0x31) = 1;
  }
  uRam00000000 = uRam00000000 & 0xff;
  *puVar2 = *(undefined2 *)(unaff_s0 + 0x24);
  puVar2[1] = *(undefined2 *)(unaff_s0 + 0x26);
  puVar2[2] = *(undefined2 *)(unaff_s0 + 0x28);
  puVar2[3] = *(undefined2 *)(unaff_s0 + 0x2a);
  puVar2[4] = *(undefined2 *)(unaff_s0 + 0x2c);
  puVar2[5] = *(undefined2 *)(unaff_s0 + 0x2e);
  *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) =
       *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) - (short)uRam00000000;
  iVar1 = *(int *)(unaff_s2 + 4);
  *(char *)(unaff_s0 + 0x32) = (char)uRam00000000;
  *(uint *)(iVar1 + 0x54) = uRam00000000;
  _L0();
  uVar3 = *(undefined4 *)(unaff_s0 + 0x48);
  *(undefined *)(unaff_s2 + 0x1c) = 3;
  *(undefined4 *)(unaff_s2 + 0x14) = uVar3;
  *(uint *)(unaff_s2 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c);
  FUN_00011022(0x40);
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int unaff_s2;
  
  _L0();
  uVar1 = *(undefined4 *)(unaff_s0 + 0x48);
  *(undefined *)(unaff_s2 + 0x1c) = 3;
  *(undefined4 *)(unaff_s2 + 0x14) = uVar1;
  *(uint *)(unaff_s2 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c);
  FUN_00011022(0x40);
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return;
}



void FUN_00011022(void)

{
  int unaff_s0;
  
  FUN_00011022();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return;
}



void FUN_00011040(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  
  iVar1 = FUN_00011040();
  if (iVar1 == 0) {
    uRam00000000 = unaff_s4 - 6;
    puVar3 = (undefined2 *)(unaff_s1 + -6);
    *(undefined *)(unaff_s0 + 0x31) = 0;
  }
  else {
    uRam00000000 = unaff_s4 - 0xe;
    puVar3 = (undefined2 *)(unaff_s1 + -0xe);
    iVar1 = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c) - unaff_s5;
    *(char *)(unaff_s1 + -2) = (char)((uint)(iVar1 * 0x10000) >> 0x10);
    *(char *)(unaff_s1 + -1) = (char)((uint)iVar1 >> 8);
    *(undefined *)(unaff_s0 + 0x31) = 1;
  }
  uRam00000000 = uRam00000000 & 0xff;
  *puVar3 = *(undefined2 *)(unaff_s0 + 0x24);
  puVar3[1] = *(undefined2 *)(unaff_s0 + 0x26);
  puVar3[2] = *(undefined2 *)(unaff_s0 + 0x28);
  puVar3[3] = *(undefined2 *)(unaff_s0 + 0x2a);
  puVar3[4] = *(undefined2 *)(unaff_s0 + 0x2c);
  puVar3[5] = *(undefined2 *)(unaff_s0 + 0x2e);
  *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) =
       *(short *)(*(int *)(unaff_s2 + 4) + 0x1c) - (short)uRam00000000;
  iVar1 = *(int *)(unaff_s2 + 4);
  *(char *)(unaff_s0 + 0x32) = (char)uRam00000000;
  *(uint *)(iVar1 + 0x54) = uRam00000000;
  _L0();
  uVar2 = *(undefined4 *)(unaff_s0 + 0x48);
  *(undefined *)(unaff_s2 + 0x1c) = 3;
  *(undefined4 *)(unaff_s2 + 0x14) = uVar2;
  *(uint *)(unaff_s2 + 0x18) = (uint)*(ushort *)(*(int *)(unaff_s2 + 4) + 0x1c);
  FUN_00011022(0x40);
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000109f4(0x20000000);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rxu_cntrl_monitor_pm(mac_addr *addr)

{
  if (DAT_0000006f == '\0') {
    _DAT_00000068 = addr->array[0];
    _DAT_0000006a = addr->array[1];
    _DAT_0000006c = addr->array[2];
    _DAT_0000006e = 0x100;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint8_t rxu_cntrl_get_pm(void)

{
  _DAT_0000006e = 0;
  return DAT_0000006e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rxu_cntrl_evt(int dummy)

{
  _L0(0x80000);
  if (_DAT_00000040 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(int iRam00000040)

{
  _L0();
  if (iRam00000040 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Variable defined which should be unmapped: pkt
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rxu_swdesc_upload_evt(int arg)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  uint32_t *puVar5;
  int iVar6;
  uint32_t uStack72;
  wifi_pkt pkt;
  
  _L0(0x20000000);
  iVar2 = FUN_0001110e(0x40);
  while (iVar2 != 0) {
    uVar1 = (uint)*(ushort *)(*(int *)(iVar2 + 4) + 0x1c);
    _L0(&uStack72,0,0x28);
    puVar4 = &uStack72;
    iVar6 = *(int *)(*(int *)(iVar2 + 4) + 8);
    puVar5 = puVar4;
    while ((uVar1 != 0 && (puVar5 != pkt.pkt + 3))) {
      *(char *)(iVar2 + 0x1d) = *(char *)(iVar2 + 0x1d) + '\x01';
      uVar3 = *(uint32_t *)(iVar6 + 8);
      *puVar5 = uVar3;
      *(short *)(puVar4 + 8) = ((short)*(undefined4 *)(iVar6 + 0xc) + 1) - (short)uVar3;
      puVar5[4] = iVar6 + 0x1c;
      *(undefined4 *)(iVar6 + 0x14) = 1;
      if (uVar1 < 0x350) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 - 0x350;
      }
      iVar6 = *(int *)(iVar6 + 4);
      puVar5 = puVar5 + 1;
      puVar4 = (uint32_t *)((int)puVar4 + 2);
    }
    *(undefined *)(iVar2 + 0x1e) = 1;
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x60) = 1;
    iVar6 = FUN_00011178(iVar2,*(undefined *)(iVar2 + 0x1c),*(int *)(iVar2 + 4) + 0x1c,
                         *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54),&uStack72);
    if (iVar6 == 0) {
      _L0();
      _DAT_00000014 = _DAT_00000014 + (uint)*(byte *)(iVar2 + 0x1d);
      _L0();
    }
    else {
      FUN_00011184(iVar2);
    }
    iVar2 = FUN_00011190(0x40);
  }
  return;
}



void _L0(int iRam00000014)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_s2;
  
  _L0();
  iVar2 = FUN_0001110e(unaff_s2 + 0x40);
  while (iVar2 != 0) {
    uVar1 = (uint)*(ushort *)(*(int *)(iVar2 + 4) + 0x1c);
    _L0(&stack0x00000008,0,0x28);
    puVar4 = (undefined4 *)&stack0x00000008;
    iVar6 = *(int *)(*(int *)(iVar2 + 4) + 8);
    puVar5 = puVar4;
    while ((uVar1 != 0 && (puVar5 != (undefined4 *)&stack0x00000018))) {
      *(char *)(iVar2 + 0x1d) = *(char *)(iVar2 + 0x1d) + '\x01';
      uVar3 = *(undefined4 *)(iVar6 + 8);
      *puVar5 = uVar3;
      *(short *)(puVar4 + 8) = ((short)*(undefined4 *)(iVar6 + 0xc) + 1) - (short)uVar3;
      puVar5[4] = iVar6 + 0x1c;
      *(undefined4 *)(iVar6 + 0x14) = 1;
      if (uVar1 < 0x350) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 - 0x350;
      }
      iVar6 = *(int *)(iVar6 + 4);
      puVar5 = puVar5 + 1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    }
    *(undefined *)(iVar2 + 0x1e) = 1;
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x60) = 1;
    iVar6 = FUN_00011178(iVar2,*(undefined *)(iVar2 + 0x1c),*(int *)(iVar2 + 4) + 0x1c,
                         *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54),&stack0x00000008);
    if (iVar6 == 0) {
      _L0();
      iRam00000014 = iRam00000014 + (uint)*(byte *)(iVar2 + 0x1d);
      _L0();
    }
    else {
      FUN_00011184(iVar2);
    }
    iVar2 = FUN_00011190(unaff_s2 + 0x40);
  }
  return;
}



void FUN_0001110e(int iRam00000014)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_s2;
  
  iVar2 = FUN_0001110e();
  while (iVar2 != 0) {
    uVar1 = (uint)*(ushort *)(*(int *)(iVar2 + 4) + 0x1c);
    _L0(&stack0x00000008,0,0x28);
    puVar4 = (undefined4 *)&stack0x00000008;
    iVar6 = *(int *)(*(int *)(iVar2 + 4) + 8);
    puVar5 = puVar4;
    while ((uVar1 != 0 && (puVar5 != (undefined4 *)&stack0x00000018))) {
      *(char *)(iVar2 + 0x1d) = *(char *)(iVar2 + 0x1d) + '\x01';
      uVar3 = *(undefined4 *)(iVar6 + 8);
      *puVar5 = uVar3;
      *(short *)(puVar4 + 8) = ((short)*(undefined4 *)(iVar6 + 0xc) + 1) - (short)uVar3;
      puVar5[4] = iVar6 + 0x1c;
      *(undefined4 *)(iVar6 + 0x14) = 1;
      if (uVar1 < 0x350) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 - 0x350;
      }
      iVar6 = *(int *)(iVar6 + 4);
      puVar5 = puVar5 + 1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    }
    *(undefined *)(iVar2 + 0x1e) = 1;
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x60) = 1;
    iVar6 = FUN_00011178(iVar2,*(undefined *)(iVar2 + 0x1c),*(int *)(iVar2 + 4) + 0x1c,
                         *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54),&stack0x00000008);
    if (iVar6 == 0) {
      _L0();
      iRam00000014 = iRam00000014 + (uint)*(byte *)(iVar2 + 0x1d);
      _L0();
    }
    else {
      FUN_00011184(iVar2);
    }
    iVar2 = FUN_00011190(unaff_s2 + 0x40);
  }
  return;
}



void _L0(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_s0;
  uint unaff_s1;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  undefined4 *unaff_s5;
  uint unaff_s6;
  
  while( true ) {
    _L0(param_1,param_2,param_3);
    puVar2 = (undefined4 *)&stack0x00000008;
    iVar4 = *(int *)(*(int *)(unaff_s0 + 4) + 8);
    puVar3 = puVar2;
    while ((unaff_s1 != 0 && (puVar3 != unaff_s5))) {
      *(char *)(unaff_s0 + 0x1d) = *(char *)(unaff_s0 + 0x1d) + '\x01';
      uVar1 = *(undefined4 *)(iVar4 + 8);
      *puVar3 = uVar1;
      *(short *)(puVar2 + 8) = ((short)*(undefined4 *)(iVar4 + 0xc) + 1) - (short)uVar1;
      puVar3[4] = iVar4 + 0x1c;
      *(undefined4 *)(iVar4 + 0x14) = unaff_s4;
      if (unaff_s6 < unaff_s1) {
        unaff_s1 = unaff_s1 - 0x350;
      }
      else {
        unaff_s1 = 0;
      }
      iVar4 = *(int *)(iVar4 + 4);
      puVar3 = puVar3 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 2);
    }
    *(char *)(unaff_s0 + 0x1e) = (char)unaff_s4;
    *(undefined4 *)(*(int *)(unaff_s0 + 4) + 0x60) = unaff_s4;
    iVar4 = FUN_00011178(unaff_s0,*(undefined *)(unaff_s0 + 0x1c),*(int *)(unaff_s0 + 4) + 0x1c,
                         *(undefined4 *)(*(int *)(unaff_s0 + 4) + 0x54),&stack0x00000008);
    if (iVar4 == 0) {
      _L0();
      *(uint *)(unaff_s3 + 0x14) = *(int *)(unaff_s3 + 0x14) + (uint)*(byte *)(unaff_s0 + 0x1d);
      _L0();
    }
    else {
      FUN_00011184(unaff_s0);
    }
    unaff_s0 = FUN_00011190(unaff_s2 + 0x40);
    if (unaff_s0 == 0) break;
    param_3 = 0x28;
    param_2 = 0;
    param_1 = &stack0x00000008;
    unaff_s1 = (uint)*(ushort *)(*(int *)(unaff_s0 + 4) + 0x1c);
  }
  return;
}



void FUN_00011178(int param_1,uint param_2,int param_3,undefined4 param_4,undefined *param_5)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  undefined4 *unaff_s5;
  uint unaff_s6;
  
  while( true ) {
    iVar2 = FUN_00011178(param_1,param_2,param_3,param_4,param_5);
    if (iVar2 == 0) {
      _L0();
      *(uint *)(unaff_s3 + 0x14) = *(int *)(unaff_s3 + 0x14) + (uint)*(byte *)(unaff_s0 + 0x1d);
      _L0();
    }
    else {
      FUN_00011184(unaff_s0);
    }
    unaff_s0 = FUN_00011190(unaff_s2 + 0x40);
    if (unaff_s0 == 0) break;
    uVar1 = (uint)*(ushort *)(*(int *)(unaff_s0 + 4) + 0x1c);
    _L0(&stack0x00000008,0,0x28);
    puVar4 = (undefined4 *)&stack0x00000008;
    iVar2 = *(int *)(*(int *)(unaff_s0 + 4) + 8);
    puVar5 = puVar4;
    while ((uVar1 != 0 && (puVar5 != unaff_s5))) {
      *(char *)(unaff_s0 + 0x1d) = *(char *)(unaff_s0 + 0x1d) + '\x01';
      uVar3 = *(undefined4 *)(iVar2 + 8);
      *puVar5 = uVar3;
      *(short *)(puVar4 + 8) = ((short)*(undefined4 *)(iVar2 + 0xc) + 1) - (short)uVar3;
      puVar5[4] = iVar2 + 0x1c;
      *(undefined4 *)(iVar2 + 0x14) = unaff_s4;
      if (unaff_s6 < uVar1) {
        uVar1 = uVar1 - 0x350;
      }
      else {
        uVar1 = 0;
      }
      iVar2 = *(int *)(iVar2 + 4);
      puVar5 = puVar5 + 1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    }
    *(char *)(unaff_s0 + 0x1e) = (char)unaff_s4;
    param_5 = &stack0x00000008;
    *(undefined4 *)(*(int *)(unaff_s0 + 4) + 0x60) = unaff_s4;
    param_2 = (uint)*(byte *)(unaff_s0 + 0x1c);
    param_4 = *(undefined4 *)(*(int *)(unaff_s0 + 4) + 0x54);
    param_3 = *(int *)(unaff_s0 + 4) + 0x1c;
    param_1 = unaff_s0;
  }
  return;
}



void FUN_00011184(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  undefined4 *unaff_s5;
  uint unaff_s6;
  
  do {
    FUN_00011184(param_1);
    while( true ) {
      param_1 = FUN_00011190(unaff_s2 + 0x40);
      if (param_1 == 0) {
        return;
      }
      uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 4) + 0x1c);
      _L0(&stack0x00000008,0,0x28);
      puVar3 = (undefined4 *)&stack0x00000008;
      iVar5 = *(int *)(*(int *)(param_1 + 4) + 8);
      puVar4 = puVar3;
      while ((uVar1 != 0 && (puVar4 != unaff_s5))) {
        *(char *)(param_1 + 0x1d) = *(char *)(param_1 + 0x1d) + '\x01';
        uVar2 = *(undefined4 *)(iVar5 + 8);
        *puVar4 = uVar2;
        *(short *)(puVar3 + 8) = ((short)*(undefined4 *)(iVar5 + 0xc) + 1) - (short)uVar2;
        puVar4[4] = iVar5 + 0x1c;
        *(undefined4 *)(iVar5 + 0x14) = unaff_s4;
        if (unaff_s6 < uVar1) {
          uVar1 = uVar1 - 0x350;
        }
        else {
          uVar1 = 0;
        }
        iVar5 = *(int *)(iVar5 + 4);
        puVar4 = puVar4 + 1;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      }
      *(char *)(param_1 + 0x1e) = (char)unaff_s4;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = unaff_s4;
      iVar5 = FUN_00011178(param_1,*(undefined *)(param_1 + 0x1c),*(int *)(param_1 + 4) + 0x1c,
                           *(undefined4 *)(*(int *)(param_1 + 4) + 0x54),&stack0x00000008);
      if (iVar5 != 0) break;
      _L0();
      *(uint *)(unaff_s3 + 0x14) = *(int *)(unaff_s3 + 0x14) + (uint)*(byte *)(param_1 + 0x1d);
      _L0();
    }
  } while( true );
}



void FUN_00011190(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  undefined4 *unaff_s5;
  uint unaff_s6;
  
  while (iVar2 = FUN_00011190(param_1), iVar2 != 0) {
    uVar1 = (uint)*(ushort *)(*(int *)(iVar2 + 4) + 0x1c);
    _L0(&stack0x00000008,0,0x28);
    puVar4 = (undefined4 *)&stack0x00000008;
    iVar6 = *(int *)(*(int *)(iVar2 + 4) + 8);
    puVar5 = puVar4;
    while ((uVar1 != 0 && (puVar5 != unaff_s5))) {
      *(char *)(iVar2 + 0x1d) = *(char *)(iVar2 + 0x1d) + '\x01';
      uVar3 = *(undefined4 *)(iVar6 + 8);
      *puVar5 = uVar3;
      *(short *)(puVar4 + 8) = ((short)*(undefined4 *)(iVar6 + 0xc) + 1) - (short)uVar3;
      puVar5[4] = iVar6 + 0x1c;
      *(undefined4 *)(iVar6 + 0x14) = unaff_s4;
      if (unaff_s6 < uVar1) {
        uVar1 = uVar1 - 0x350;
      }
      else {
        uVar1 = 0;
      }
      iVar6 = *(int *)(iVar6 + 4);
      puVar5 = puVar5 + 1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    }
    *(char *)(iVar2 + 0x1e) = (char)unaff_s4;
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x60) = unaff_s4;
    iVar6 = FUN_00011178(iVar2,*(undefined *)(iVar2 + 0x1c),*(int *)(iVar2 + 4) + 0x1c,
                         *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54),&stack0x00000008);
    if (iVar6 == 0) {
      _L0();
      *(uint *)(unaff_s3 + 0x14) = *(int *)(unaff_s3 + 0x14) + (uint)*(byte *)(iVar2 + 0x1d);
      _L0();
    }
    else {
      FUN_00011184(iVar2);
    }
    param_1 = unaff_s2 + 0x40;
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  undefined4 *unaff_s5;
  uint unaff_s6;
  
  do {
    _L0();
    *(uint *)(unaff_s3 + 0x14) = *(int *)(unaff_s3 + 0x14) + (uint)*(byte *)(unaff_s0 + 0x1d);
    _L0();
    while( true ) {
      unaff_s0 = FUN_00011190(unaff_s2 + 0x40);
      if (unaff_s0 == 0) {
        return;
      }
      uVar1 = (uint)*(ushort *)(*(int *)(unaff_s0 + 4) + 0x1c);
      _L0(&stack0x00000008,0,0x28);
      puVar3 = (undefined4 *)&stack0x00000008;
      iVar5 = *(int *)(*(int *)(unaff_s0 + 4) + 8);
      puVar4 = puVar3;
      while ((uVar1 != 0 && (puVar4 != unaff_s5))) {
        *(char *)(unaff_s0 + 0x1d) = *(char *)(unaff_s0 + 0x1d) + '\x01';
        uVar2 = *(undefined4 *)(iVar5 + 8);
        *puVar4 = uVar2;
        *(short *)(puVar3 + 8) = ((short)*(undefined4 *)(iVar5 + 0xc) + 1) - (short)uVar2;
        puVar4[4] = iVar5 + 0x1c;
        *(undefined4 *)(iVar5 + 0x14) = unaff_s4;
        if (unaff_s6 < uVar1) {
          uVar1 = uVar1 - 0x350;
        }
        else {
          uVar1 = 0;
        }
        iVar5 = *(int *)(iVar5 + 4);
        puVar4 = puVar4 + 1;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      }
      *(char *)(unaff_s0 + 0x1e) = (char)unaff_s4;
      *(undefined4 *)(*(int *)(unaff_s0 + 4) + 0x60) = unaff_s4;
      iVar5 = FUN_00011178(unaff_s0,*(undefined *)(unaff_s0 + 0x1c),*(int *)(unaff_s0 + 4) + 0x1c,
                           *(undefined4 *)(*(int *)(unaff_s0 + 4) + 0x54),&stack0x00000008);
      if (iVar5 == 0) break;
      FUN_00011184(unaff_s0);
    }
  } while( true );
}



void _L0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  undefined4 *unaff_s5;
  uint unaff_s6;
  
  do {
    _L0();
    while( true ) {
      iVar2 = FUN_00011190(unaff_s2 + 0x40);
      if (iVar2 == 0) {
        return;
      }
      uVar1 = (uint)*(ushort *)(*(int *)(iVar2 + 4) + 0x1c);
      _L0(&stack0x00000008,0,0x28);
      puVar4 = (undefined4 *)&stack0x00000008;
      iVar6 = *(int *)(*(int *)(iVar2 + 4) + 8);
      puVar5 = puVar4;
      while ((uVar1 != 0 && (puVar5 != unaff_s5))) {
        *(char *)(iVar2 + 0x1d) = *(char *)(iVar2 + 0x1d) + '\x01';
        uVar3 = *(undefined4 *)(iVar6 + 8);
        *puVar5 = uVar3;
        *(short *)(puVar4 + 8) = ((short)*(undefined4 *)(iVar6 + 0xc) + 1) - (short)uVar3;
        puVar5[4] = iVar6 + 0x1c;
        *(undefined4 *)(iVar6 + 0x14) = unaff_s4;
        if (unaff_s6 < uVar1) {
          uVar1 = uVar1 - 0x350;
        }
        else {
          uVar1 = 0;
        }
        iVar6 = *(int *)(iVar6 + 4);
        puVar5 = puVar5 + 1;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
      *(char *)(iVar2 + 0x1e) = (char)unaff_s4;
      *(undefined4 *)(*(int *)(iVar2 + 4) + 0x60) = unaff_s4;
      iVar6 = FUN_00011178(iVar2,*(undefined *)(iVar2 + 0x1c),*(int *)(iVar2 + 4) + 0x1c,
                           *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54),&stack0x00000008);
      if (iVar6 == 0) break;
      FUN_00011184(iVar2);
    }
    _L0();
    *(uint *)(unaff_s3 + 0x14) = *(int *)(unaff_s3 + 0x14) + (uint)*(byte *)(iVar2 + 0x1d);
  } while( true );
}


