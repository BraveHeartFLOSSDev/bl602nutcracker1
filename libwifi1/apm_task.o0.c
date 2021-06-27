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
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct txdesc txdesc, *Ptxdesc;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef struct umacdesc umacdesc, *Pumacdesc;

typedef struct lmacdesc lmacdesc, *Plmacdesc;

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct tx_agg_desc tx_agg_desc, *Ptx_agg_desc;

typedef struct txl_buffer_tag txl_buffer_tag, *Ptxl_buffer_tag;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef char __int8_t;

typedef __int8_t int8_t;

typedef union anon_union.conflict2c5a_for_field_0 anon_union.conflict2c5a_for_field_0, *Panon_union.conflict2c5a_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict11bd_for_field_3 anon_union.conflict11bd_for_field_3, *Panon_union.conflict11bd_for_field_3;

typedef union anon_union.conflict11e2_for_field_4 anon_union.conflict11e2_for_field_4, *Panon_union.conflict11e2_for_field_4;

typedef union anon_union.conflict1207_for_field_5 anon_union.conflict1207_for_field_5, *Panon_union.conflict1207_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: e8b
    struct co_list_hdr * next;
};

union anon_union.conflict11e2_for_field_4 { // DWARF DIE: 11e2
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct mac_addr { // DWARF DIE: a94
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 17a5
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

struct tx_cfm_tag { // DWARF DIE: 161a
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct umacdesc { // DWARF DIE: 1881
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

union anon_union.conflict11bd_for_field_3 { // DWARF DIE: 11bd
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflict1207_for_field_5 { // DWARF DIE: 1207
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: 122c
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict11bd_for_field_3 field_3;
    union anon_union.conflict11e2_for_field_4 field_4;
    union anon_union.conflict1207_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1689
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct lmacdesc { // DWARF DIE: 1911
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct txdesc { // DWARF DIE: 1a2d
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 1192
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct tx_pbd { // DWARF DIE: 12f5
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct dma_desc { // DWARF DIE: f4c
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_policy_tbl { // DWARF DIE: 1121
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict2c5a_for_field_0 { // DWARF DIE: 2c5a
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 18dd
    union anon_union.conflict2c5a_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct txl_buffer_tag { // DWARF DIE: 194c
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

struct tx_agg_desc { // DWARF DIE: 16ba
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

struct Cipher_t { // DWARF DIE: 3615
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct CommonMlmeData_t { // DWARF DIE: 5bae
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

struct Operation_t { // DWARF DIE: 5c98
    UINT16 keyExchange:1;
    UINT16 authenticate:1;
    UINT16 reserved:14;
};

struct apRsnConfig_t { // DWARF DIE: 5ce3
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

struct BssConfig_t { // DWARF DIE: 5de9
    UINT32 StaAgeOutTime;
    UINT32 PsStaAgeOutTime;
    struct apRsnConfig_t RsnConfig;
    struct CommonMlmeData_t comData;
};

struct mm_timer_tag { // DWARF DIE: 1fe2
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct KeyData_t { // DWARF DIE: 4f37
    UINT8 Key[16];
    UINT8 RxMICKey[8];
    UINT8 TxMICKey[8];
    UINT32 TxIV32;
    UINT16 TxIV16;
    UINT16 KeyIndex;
};

struct BssData_t { // DWARF DIE: 5e39
    BOOLEAN updatePassPhrase;
    struct mm_timer_tag apMicTimer;
    struct KeyData_t grpKeyData;
    UINT8 GNonce[32];
    UINT32 grpRekeyBcnCntConfigured;
    UINT32 grpRekeyBcnCntRemaining;
};

struct apInfo_t { // DWARF DIE: 5ed9
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

struct _txQingInfo_t { // DWARF DIE: 5c6e
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

struct SecurityMode_t { // DWARF DIE: 367b
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

struct apKeyMgmtInfoStaRom_t { // DWARF DIE: 5ac0
    UINT16 staRsnCap;
    struct SecurityMode_t staSecType;
    struct Cipher_t staUcstCipher;
    UINT8 staAkmType;
    enum keyMgmtState_e keyMgmtState;
    undefined field_0x7;
};

struct apKeyMgmtInfoSta_t { // DWARF DIE: 5b17
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

struct staData_t { // DWARF DIE: 5ea5
    txQingInfo_t pwrSaveInfo;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    struct apKeyMgmtInfoSta_t keyMgmtInfo;
};

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

struct ps_env_tag { // DWARF DIE: 42c9
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

typedef union anon_union.conflict50dc_for_keyEncypt anon_union.conflict50dc_for_keyEncypt, *Panon_union.conflict50dc_for_keyEncypt;

typedef struct key_Type_TKIP_t key_Type_TKIP_t, *Pkey_Type_TKIP_t;

typedef struct key_Type_AES_t key_Type_AES_t, *Pkey_Type_AES_t;

typedef struct key_Type_WEP_t key_Type_WEP_t, *Pkey_Type_WEP_t;

typedef struct key_Type_WAPI_t key_Type_WAPI_t, *Pkey_Type_WAPI_t;

typedef struct key_Type_AES_CMAC_t key_Type_AES_CMAC_t, *Pkey_Type_AES_CMAC_t;

struct key_Type_AES_CMAC_t { // DWARF DIE: 509f
    UINT8 ipn[6];
    UINT8 reserved[2];
    UINT8 key[16];
};

struct key_Type_AES_t { // DWARF DIE: 5025
    UINT8 key[16];
};

struct key_Type_WEP_t { // DWARF DIE: 4fd8
    UINT8 keyIndex;
    UINT8 isDefaultTx;
    UINT8 key[13];
};

struct key_Type_WAPI_t { // DWARF DIE: 5048
    UINT8 keyIndex;
    UINT8 isDefKey;
    UINT8 key[16];
    UINT8 mickey[16];
    UINT8 rxPN[16];
};

struct key_Type_TKIP_t { // DWARF DIE: 4f9b
    UINT8 key[16];
    UINT8 txMicKey[8];
    UINT8 rxMicKey[8];
};

union anon_union.conflict50dc_for_keyEncypt { // DWARF DIE: 50dc
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

struct key_MgtMaterial_t { // DWARF DIE: 5122
    UINT16 keyType;
    UINT16 keyInfo;
    UINT16 keyLen;
    union anon_union.conflict50dc_for_keyEncypt keyEncypt;
};

typedef union anon_union.conflict50dc anon_union.conflict50dc, *Panon_union.conflict50dc;

union anon_union.conflict50dc { // DWARF DIE: 50dc
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

typedef struct anon_struct.conflict2f56 anon_struct.conflict2f56, *Panon_struct.conflict2f56;

struct anon_struct.conflict2f56 { // DWARF DIE: 2f56
    uint8_t mac[6];
    uint8_t used;
};

typedef struct apm apm, *Papm;

typedef struct apm_start_req apm_start_req, *Papm_start_req;

typedef struct co_list co_list, *Pco_list;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

struct scan_chan_tag { // DWARF DIE: d5d
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct mac_rateset { // DWARF DIE: b19
    uint8_t length;
    uint8_t array[12];
};

struct co_list { // DWARF DIE: eac
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mac_ssid { // DWARF DIE: ac4
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct apm_start_req { // DWARF DIE: 2ffd
Missing member bcn_buf : uint8_t[1] at offset 0xa7 [Unsupported interior flex array: uint8_t[1]]
    struct mac_rateset basic_rates;
    undefined field_0xd;
    struct scan_chan_tag chan;
    uint32_t center_freq1;
    uint32_t center_freq2;
    uint8_t ch_width;
    uint8_t hidden_ssid;
    undefined field_0x1e;
    undefined field_0x1f;
    uint32_t bcn_addr;
    uint16_t bcn_len;
    uint16_t tim_oft;
    uint16_t bcn_int;
    undefined field_0x2a;
    undefined field_0x2b;
    uint32_t flags;
    uint16_t ctrl_port_ethertype;
    uint8_t tim_len;
    uint8_t vif_idx;
    _Bool apm_emb_enabled;
    struct mac_rateset rate_set;
    uint8_t beacon_period;
    uint8_t qos_supported;
    struct mac_ssid ssid;
    uint8_t ap_sec_type;
    uint8_t phrase[64];
    undefined field_0xa7;
};

struct apm { // DWARF DIE: 2f7a
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
    struct anon_struct.conflict2f56 aid_list[10];
    undefined field_0x5e;
    undefined field_0x5f;
};

typedef struct apm_sta_del_req apm_sta_del_req, *Papm_sta_del_req;

struct apm_sta_del_req { // DWARF DIE: 3cae
    uint8_t vif_idx;
    uint8_t sta_idx;
};

typedef struct apm_stop_req apm_stop_req, *Papm_stop_req;

struct apm_stop_req { // DWARF DIE: 3bd2
    uint8_t vif_idx;
};

typedef enum apm_msg_tag {
    APM_CONF_MAX_STA_CFM=7182,
    APM_CONF_MAX_STA_REQ=7181,
    APM_START_CAC_CFM=7173,
    APM_START_CAC_REQ=7172,
    APM_START_CFM=7169,
    APM_START_REQ=7168,
    APM_STA_ADD_IND=7176,
    APM_STA_CONNECT_TIMEOUT_IND=7178,
    APM_STA_DEL_CFM=7180,
    APM_STA_DEL_IND=7177,
    APM_STA_DEL_REQ=7179,
    APM_STOP_CAC_CFM=7175,
    APM_STOP_CAC_REQ=7174,
    APM_STOP_CFM=7171,
    APM_STOP_REQ=7170
} apm_msg_tag;

typedef struct apm_conf_max_sta_req apm_conf_max_sta_req, *Papm_conf_max_sta_req;

struct apm_conf_max_sta_req { // DWARF DIE: 3bf2
    uint8_t max_sta_supported;
};

typedef enum apm_state_tag {
    APM_BCN_SETTING=2,
    APM_BSS_PARAM_SETTING=1,
    APM_IDLE=0,
    APM_STATE_MAX=3
} apm_state_tag;

typedef struct apm_start_cac_req apm_start_cac_req, *Papm_start_cac_req;

struct apm_start_cac_req { // DWARF DIE: 3c12
    struct scan_chan_tag chan;
    undefined field_0x6;
    undefined field_0x7;
    uint32_t center_freq1;
    uint32_t center_freq2;
    uint8_t ch_width;
    uint8_t vif_idx;
    undefined field_0x12;
    undefined field_0x13;
};

typedef struct apm_start_cac_cfm apm_start_cac_cfm, *Papm_start_cac_cfm;

struct apm_start_cac_cfm { // DWARF DIE: 3c66
    uint8_t status;
    uint8_t ch_idx;
};

typedef struct apm_stop_cac_req apm_stop_cac_req, *Papm_stop_cac_req;

struct apm_stop_cac_req { // DWARF DIE: 3c8e
    uint8_t vif_idx;
};

typedef struct apm_start_cfm apm_start_cfm, *Papm_start_cfm;

struct apm_start_cfm { // DWARF DIE: 3b90
    uint8_t status;
    uint8_t vif_idx;
    uint8_t ch_idx;
    uint8_t bcmc_idx;
};

typedef struct apm_sta_del_cfm apm_sta_del_cfm, *Papm_sta_del_cfm;

struct apm_sta_del_cfm { // DWARF DIE: 3cdb
    uint8_t status;
    uint8_t vif_idx;
    uint8_t sta_idx;
};

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list { // DWARF DIE: 2ab8
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 2b00
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 2d50
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 2d78
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 2dcc
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

typedef union anon_union.conflict5f79_for_specDat anon_union.conflict5f79_for_specDat, *Panon_union.conflict5f79_for_specDat;

typedef struct cipher_key_buf cipher_key_buf, *Pcipher_key_buf;

typedef struct cipher_key_buf cipher_key_buf_t;

typedef struct eapolHskData_t eapolHskData_t, *PeapolHskData_t;

typedef struct apSpecificData_t apSpecificData_t, *PapSpecificData_t;

typedef struct BufferDesc BufferDesc, *PBufferDesc;

typedef struct BufferDesc BufferDesc_t;

typedef struct ChanBandInfo_t ChanBandInfo_t, *PChanBandInfo_t;

typedef union anon_union.conflict4386_for_intf anon_union.conflict4386_for_intf, *Panon_union.conflict4386_for_intf;

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

struct AkmSuite_t { // DWARF DIE: 37a0
    UINT8 akmOui[3];
    AkmTypePacked_e akmType;
};

struct MIC_Error_t { // DWARF DIE: 532f
    enum MIC_Fail_State_e status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    BOOLEAN MICCounterMeasureEnabled;
    UINT32 disableStaAsso;
};

struct SecurityParams_t { // DWARF DIE: 37e0
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
};

struct customMIB_RSNStats_t { // DWARF DIE: 536c
    UINT8 TKIPICVErrors;
    UINT8 TKIPLocalMICFailures;
    UINT8 TKIPCounterMeasuresInvoked;
};

struct BandConfig_t { // DWARF DIE: 4c26
    enum ChanBand_e chanBand:2;
    enum ChanWidth_e chanWidth:2;
    enum Chan2Offset_e chan2Offset:2;
    enum ScanMode_e scanMode:2;
};

struct ChanBandInfo_t { // DWARF DIE: 4c82
    struct BandConfig_t bandConfig;
    UINT8 chanNum;
};

struct apSpecificData_t { // DWARF DIE: 5f1d
    struct apInfo_t * apInfo;
    BufferDesc_t * apInfoBuffDesc;
    struct ChanBandInfo_t chanBandInfo;
    undefined field_0xa;
    undefined field_0xb;
    struct staData_t staData;
};

union anon_union.conflict5f79_for_specDat { // DWARF DIE: 5f79
    struct apSpecificData_t apData;
};

union anon_union.conflict4386_for_intf { // DWARF DIE: 4386
    uint32 Interface;
};

struct keyMgmtInfoSta_t { // DWARF DIE: 53a9
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

struct IEEEtypes_RSNCapability_t { // DWARF DIE: 49c6
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

struct RSNConfig_t { // DWARF DIE: 5241
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

struct IEEEtypes_SsIdElement_t { // DWARF DIE: 48de
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    IEEEtypes_SsId_t SsId;
};

struct supplicantData { // DWARF DIE: 5804
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

struct eapolHskData_t { // DWARF DIE: 516c
    UINT8 ANonce[32];
    struct KeyData_t pwsKeyData;
};

union ckd { // DWARF DIE: 519c
    struct eapolHskData_t hskData;
};

struct cipher_key_t { // DWARF DIE: 51b6
    union ckd ckd;
};

struct cipher_key_buf { // DWARF DIE: 51dd
    struct cipher_key_t cipher_key;
};

struct cm_ConnectionInfo { // DWARF DIE: 43a8
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
    union anon_union.conflict5f79_for_specDat specDat;
    cipher_key_buf_t TxRxCipherKeyBuf;
};

struct BufferDesc { // DWARF DIE: 4465
    union anon_union.conflict4386_for_intf intf;
    uint16 DataLen;
    undefined field_0x6;
    undefined field_0x7;
    void * Buffer;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 22ce
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

struct bam_env_tag { // DWARF DIE: 2341
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

typedef struct chan_env_tag chan_env_tag, *Pchan_env_tag;

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct chan_env_tag { // DWARF DIE: 3e07
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

struct mm_chan_ctxt_add_req { // DWARF DIE: 1edc
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 3d77
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

struct chan_tbtt_tag { // DWARF DIE: 3d28
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 2a4a
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 32dc
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 8f8
};

typedef struct cm_ConnectionInfo cm_ConnectionInfo_t;

typedef union anon_union.conflict5f79 anon_union.conflict5f79, *Panon_union.conflict5f79;

union anon_union.conflict5f79 { // DWARF DIE: 5f79
    struct apSpecificData_t apData;
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

struct me_chan_config_req { // DWARF DIE: 34e2
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: c6c
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

struct me_env_tag { // DWARF DIE: 384d
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

struct mobility_domain { // DWARF DIE: 38e1
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
};

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct mac_edca_param_set mac_edca_param_set, *Pmac_edca_param_set;

struct mac_edca_param_set { // DWARF DIE: d24
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_bss_info { // DWARF DIE: 3909
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

struct ke_msg_handler { // DWARF DIE: 1be1
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1c0d
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct anon_struct.conflictb61 anon_struct.conflictb61, *Panon_struct.conflictb61;

struct anon_struct.conflictb61 { // DWARF DIE: b61
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictbc1_for_u anon_union.conflictbc1_for_u, *Panon_union.conflictbc1_for_u;

typedef struct anon_struct.conflictb98 anon_struct.conflictb98, *Panon_struct.conflictb98;

struct anon_struct.conflictb98 { // DWARF DIE: b98
    uint32_t key[4];
};

union anon_union.conflictbc1_for_u { // DWARF DIE: bc1
    struct anon_struct.conflictb61 mic;
    struct anon_struct.conflictb98 mfp;
};

struct key_info_tag { // DWARF DIE: be6
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictbc1_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: ccf
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef union anon_union.conflictbc1 anon_union.conflictbc1, *Panon_union.conflictbc1;

union anon_union.conflictbc1 { // DWARF DIE: bc1
    struct anon_struct.conflictb61 mic;
    struct anon_struct.conflictb98 mfp;
};

typedef enum anon_enum_8.conflicta1c {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_MAX_TYPES=4,
    AC_VI=2,
    AC_VO=3,
    AP_ENC_OPEN=0,
    AP_ENC_WPA2=1,
    AP_ENC_WPA2_WPA=2,
    BROADCAST_STA_IDX_MAX=11,
    BROADCAST_STA_IDX_MIN=10,
    CONNECTION_TYPE_ADHOC=1,
    CONNECTION_TYPE_AP=2,
    CONNECTION_TYPE_BTAMP=4,
    CONNECTION_TYPE_INFRA=0,
    CONNECTION_TYPE_MAX=7,
    CONNECTION_TYPE_PSEUDO=5,
    CONNECTION_TYPE_TDLS=6,
    CONNECTION_TYPE_WFD=3,
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
    HW_RATE_11MBPS=3,
    HW_RATE_12MBPS=6,
    HW_RATE_18MBPS=7,
    HW_RATE_1MBPS=0,
    HW_RATE_24MBPS=8,
    HW_RATE_2MBPS=1,
    HW_RATE_36MBPS=9,
    HW_RATE_48MBPS=10,
    HW_RATE_54MBPS=11,
    HW_RATE_5_5MBPS=2,
    HW_RATE_6MBPS=4,
    HW_RATE_9MBPS=5,
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
    PHY_CHNL_BW_160=3,
    PHY_CHNL_BW_20=0,
    PHY_CHNL_BW_40=1,
    PHY_CHNL_BW_80=2,
    PHY_CHNL_BW_80P80=4,
    PHY_CHNL_BW_OTHER=5,
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
} anon_enum_8.conflicta1c;

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: da5
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

typedef struct me_sta_add_cfm me_sta_add_cfm, *Pme_sta_add_cfm;

struct me_sta_add_cfm { // DWARF DIE: 3544
    uint8_t sta_idx;
    uint8_t status;
    uint8_t pm_state;
};

typedef enum anon_enum_16.conflict3440 {
    ME_CHAN_CONFIG_CFM=5123,
    ME_CHAN_CONFIG_REQ=5122,
    ME_CONFIG_CFM=5121,
    ME_CONFIG_REQ=5120,
    ME_RC_SET_RATE_REQ=5136,
    ME_RC_STATS_CFM=5135,
    ME_RC_STATS_REQ=5134,
    ME_SET_ACTIVE_CFM=5138,
    ME_SET_ACTIVE_REQ=5137,
    ME_SET_CONTROL_PORT_CFM=5125,
    ME_SET_CONTROL_PORT_REQ=5124,
    ME_SET_PS_DISABLE_CFM=5140,
    ME_SET_PS_DISABLE_REQ=5139,
    ME_STA_ADD_CFM=5128,
    ME_STA_ADD_REQ=5127,
    ME_STA_DEL_CFM=5130,
    ME_STA_DEL_REQ=5129,
    ME_TKIP_MIC_FAILURE_IND=5126,
    ME_TRAFFIC_IND_CFM=5133,
    ME_TRAFFIC_IND_REQ=5132,
    ME_TX_CREDITS_UPDATE_IND=5131
} anon_enum_16.conflict3440;

typedef enum rxu_msg_tag {
    RXU_MGT_IND=11264,
    RXU_NULL_DATA=11265
} rxu_msg_tag;

typedef struct rxu_mgt_ind rxu_mgt_ind, *Prxu_mgt_ind;

struct rxu_mgt_ind { // DWARF DIE: 28f6
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

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 21bb
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 2190
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 2173
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 2078
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

struct rxu_cntrl_env_tag { // DWARF DIE: 21f4
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

typedef union anon_union.conflict587c_for_key anon_union.conflict587c_for_key, *Panon_union.conflict587c_for_key;

typedef char SINT8;

union anon_union.conflict587c_for_key { // DWARF DIE: 587c
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

struct pmkElement_t { // DWARF DIE: 58ae
    union anon_union.conflict587c_for_key key;
    UINT8 PMK[32];
    UINT8 length;
    UINT8 psk_length;
    SINT8 replacementRank;
};

typedef union anon_union.conflict587c anon_union.conflict587c, *Panon_union.conflict587c;

union anon_union.conflict587c { // DWARF DIE: 587c
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

typedef union anon_union.conflicte9 anon_union.conflicte9, *Panon_union.conflicte9;

union anon_union.conflicte9 { // DWARF DIE: e9
    wint_t __wch;
    uchar __wchb[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte9_for___value anon_union.conflicte9_for___value, *Panon_union.conflicte9_for___value;

union anon_union.conflicte9_for___value { // DWARF DIE: e9
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 11b
    int __count;
    union anon_union.conflicte9_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 1059
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: fa0
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 2023
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 1455
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

struct phy_channel_info { // DWARF DIE: 1031
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 14ea
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 134a
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

struct rx_payloaddesc { // DWARF DIE: 15bd
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 154d
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef uchar uint8;

typedef char CHAR;

typedef long SINT32;

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

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 1091
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 29fb
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef struct Hdr_8021x_t Hdr_8021x_t, *PHdr_8021x_t;

typedef enum IEEEtypes_8021x_PacketType_e {
    IEEE_8021X_PACKET_TYPE_ASF_ALERT=4,
    IEEE_8021X_PACKET_TYPE_EAPOL_KEY=3,
    IEEE_8021X_PACKET_TYPE_EAPOL_LOGOFF=2,
    IEEE_8021X_PACKET_TYPE_EAPOL_START=1,
    IEEE_8021X_PACKET_TYPE_EAP_PACKET=0
} IEEEtypes_8021x_PacketType_e;

struct Hdr_8021x_t { // DWARF DIE: 4d42
    UINT8 protocol_ver;
    enum IEEEtypes_8021x_PacketType_e pckt_type;
    UINT16 pckt_body_len;
};

typedef struct EAPOL_KeyMsg_t EAPOL_KeyMsg_t, *PEAPOL_KeyMsg_t;

typedef struct key_info_t key_info_t, *Pkey_info_t;

struct key_info_t { // DWARF DIE: 4d7f
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

struct EAPOL_KeyMsg_t { // DWARF DIE: 4e45
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

struct ether_hdr_t { // DWARF DIE: 4cbc
    IEEEtypes_MacAddr_t da;
    IEEEtypes_MacAddr_t sa;
    UINT16 type;
};

struct EAPOL_KeyMsg_Tx_t { // DWARF DIE: 4f07
    struct ether_hdr_t ethHdr;
    struct EAPOL_KeyMsg_t keyMsg;
};

typedef union anon_union.conflict4386 anon_union.conflict4386, *Panon_union.conflict4386;

union anon_union.conflict4386 { // DWARF DIE: 4386
    uint32 Interface;
    struct cm_ConnectionInfo * connPtr;
};

typedef uint16_t ke_state_t;

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict40ec_for_u anon_union.conflict40ec_for_u, *Panon_union.conflict40ec_for_u;

typedef struct anon_struct.conflict3f24 anon_struct.conflict3f24, *Panon_struct.conflict3f24;

typedef struct anon_struct.conflict3ff1 anon_struct.conflict3ff1, *Panon_struct.conflict3ff1;

struct anon_struct.conflict3f24 { // DWARF DIE: 3f24
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

struct anon_struct.conflict3ff1 { // DWARF DIE: 3ff1
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

union anon_union.conflict40ec_for_u { // DWARF DIE: 40ec
    struct anon_struct.conflict3f24 sta;
    struct anon_struct.conflict3ff1 ap;
};

struct vif_info_tag { // DWARF DIE: 410f
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
    union anon_union.conflict40ec_for_u u;
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

typedef union anon_union.conflict40ec anon_union.conflict40ec, *Panon_union.conflict40ec;

union anon_union.conflict40ec { // DWARF DIE: 40ec
    struct anon_struct.conflict3f24 sta;
    struct anon_struct.conflict3ff1 ap;
};

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag { // DWARF DIE: 424a
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 31da
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 3193
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 2656
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

typedef union anon_union.conflict33fb_for_rate_map anon_union.conflict33fb_for_rate_map, *Panon_union.conflict33fb_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 335e
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step { // DWARF DIE: 33d4
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

union anon_union.conflict33fb_for_rate_map { // DWARF DIE: 33fb
    uint8_t ht[4];
};

struct rc_sta_stats { // DWARF DIE: 24f0
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
    union anon_union.conflict33fb_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 24a1
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2466
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 26a5
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

struct sta_info_env_tag { // DWARF DIE: 288e
    struct co_list free_sta_list;
};

typedef union anon_union.conflict33fb anon_union.conflict33fb, *Panon_union.conflict33fb;

union anon_union.conflict33fb { // DWARF DIE: 33fb
    uint8_t ht[4];
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 3280
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 323b
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 2ba9
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 2b81
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 2bd1
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

typedef union anon_union.conflict2c5a anon_union.conflict2c5a, *Panon_union.conflict2c5a;

union anon_union.conflict2c5a { // DWARF DIE: 2c5a
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag { // DWARF DIE: 2c7c
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict11bd anon_union.conflict11bd, *Panon_union.conflict11bd;

union anon_union.conflict11bd { // DWARF DIE: 11bd
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict1207 anon_union.conflict1207, *Panon_union.conflict1207;

union anon_union.conflict1207 { // DWARF DIE: 1207
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict11e2 anon_union.conflict11e2, *Panon_union.conflict11e2;

union anon_union.conflict11e2 { // DWARF DIE: 11e2
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

struct __tm { // DWARF DIE: 1e1
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

struct _rand48 { // DWARF DIE: 6ee
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict737 { // DWARF DIE: 737
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

struct anon_struct.conflict87c { // DWARF DIE: 87c
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _Bigint { // DWARF DIE: 171
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 6a9
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

union anon_union.conflict8c3_for__new { // DWARF DIE: 8c3
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
};

struct __sbuf { // DWARF DIE: 319
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 347
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

struct _on_exit_args { // DWARF DIE: 264
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2b9
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4b3
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

union anon_union.conflict8c3 { // DWARF DIE: 8c3
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
};

typedef struct IEEEtypes_WPAElement_t IEEEtypes_WPAElement_t, *PIEEEtypes_WPAElement_t;

struct IEEEtypes_WPAElement_t { // DWARF DIE: 4930
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

struct IEEEtypes_RSNElement_t { // DWARF DIE: 4aaa
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

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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




// DWARF DIE: 62e7

int apm_sta_connect_timeout_ind_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _L0();
  iVar2 = 0;
  uVar1 = 0;
  do {
    if ((*(int *)(iVar2 + 0x1a8) != 0) && (30000 < iVar3 - *(int *)(iVar2 + 0x1a8))) {
      FUN_0001003a(uVar1);
    }
    uVar1 = uVar1 + 1 & 0xff;
    iVar2 += 0x1b0;
  } while (uVar1 != 0xc);
  FUN_00010060();
  return 0;
}



undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s1;
  int iVar2;
  
  iVar2 = _L0();
  uVar1 = 0;
  do {
    if ((*(int *)(unaff_s1 + 0x1a8) != 0) && (30000 < iVar2 - *(int *)(unaff_s1 + 0x1a8))) {
      FUN_0001003a(uVar1);
    }
    uVar1 = uVar1 + 1 & 0xff;
    unaff_s1 += 0x1b0;
  } while (uVar1 != 0xc);
  FUN_00010060();
  return 0;
}



undefined4 FUN_0001003a(uint param_1)

{
  int *piVar1;
  uint unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  
  do {
    FUN_0001003a(param_1);
    iVar2 = unaff_s1;
    do {
      unaff_s0 = unaff_s0 + 1 & 0xff;
      unaff_s1 = iVar2 + 0x1b0;
      if (unaff_s0 == unaff_s3) {
        FUN_00010060();
        return 0;
      }
      piVar1 = (int *)(iVar2 + 0x358);
      iVar2 = unaff_s1;
    } while ((*piVar1 == 0) || (param_1 = unaff_s0, unaff_s4 - *piVar1 <= unaff_s2));
  } while( true );
}



undefined4 FUN_00010060(void)

{
  FUN_00010060();
  return 0;
}



// DWARF DIE: 63c4

int rxu_mgt_ind_handler(ke_msg_id_t msgid,rxu_mgt_ind *param,ke_task_id_t dest_id,
                       ke_task_id_t src_id)

{
  ushort uVar1;
  
  uVar1 = param->framectrl & 0xfc;
  if (uVar1 == 0x40) {
    _L0();
  }
  else {
    if (uVar1 == 0xb0) {
      _L0();
    }
    else {
      if (((param->framectrl & 0xfc) == 0) || (uVar1 == 0x20)) {
        _L18();
      }
      else {
        if (uVar1 == 0xc0) {
          _L0();
        }
        else {
          if (uVar1 == 0xa0) {
            _L0();
          }
          else {
            if (uVar1 == 0x80) {
              _L0();
            }
          }
        }
      }
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 _L18(void)

{
  _L18();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 648b

int apm_sta_add_cfm_handler
              (ke_msg_id_t msgid,me_sta_add_cfm *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  if (iRam00000000 == 0) {
    _L0();
  }
  else {
    *(uint8_t *)(iRam00000000 + 1) = param->sta_idx;
    _LVL26();
  }
  return 0;
}



undefined4 _LVL26(void)

{
  _LVL26();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 651b

int apm_sta_del_req_handler
              (ke_msg_id_t msgid,apm_sta_del_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  if ((*(char *)((uint)param->vif_idx * 0x5d8 + 0x56) == '\x02') && (param->sta_idx < 0xd)) {
    _L0();
    *puVar1 = 0;
  }
  else {
    *puVar1 = 0xff;
  }
  FUN_0001018c();
  return 0;
}



undefined4 _L0(void)

{
  byte *unaff_s1;
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  if ((*(char *)((uint)*unaff_s1 * 0x5d8 + 0x56) == '\x02') && (unaff_s1[1] < 0xd)) {
    _L0();
    *puVar1 = 0;
  }
  else {
    *puVar1 = 0xff;
  }
  FUN_0001018c();
  return 0;
}



undefined4 _L0(void)

{
  undefined *unaff_s0;
  
  _L0();
  *unaff_s0 = 0;
  FUN_0001018c();
  return 0;
}



undefined4 FUN_0001018c(void)

{
  FUN_0001018c();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 65f9

int apm_stop_cac_req_handler
              (ke_msg_id_t msgid,apm_stop_cac_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = (uint)param->vif_idx * 0x5d8;
  if (((*(char *)(iVar1 + 0x56) == '\x02') && (*(char *)(iVar1 + 0x58) == '\0')) &&
     (iVar1 = _L0(), iVar1 == 0)) {
    FUN_000101ee();
    _DAT_00000004 &= 0xffffffef;
  }
  FUN_00010216();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    FUN_000101ee();
    _DAT_00000004 &= 0xffffffef;
  }
  FUN_00010216();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000101ee(void)

{
  FUN_000101ee();
  _DAT_00000004 &= 0xffffffef;
  FUN_00010216();
  return 0;
}



undefined4 FUN_00010216(void)

{
  FUN_00010216();
  return 0;
}



// DWARF DIE: 6817

int apm_conf_max_sta_req_handler
              (ke_msg_id_t msgid,apm_conf_max_sta_req *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  DAT_00000017 = param->max_sta_supported;
  if (0xc < DAT_00000017) {
    DAT_00000017 = 0xc;
  }
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 66cb

int apm_start_cac_req_handler
              (ke_msg_id_t msgid,apm_start_cac_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint8_t chan_idx;
  mm_chan_ctxt_add_req req;
  
  iVar3 = (uint)param->vif_idx * 0x5d8;
  iVar1 = 4;
  if (*(char *)(iVar3 + 0x56) == '\x02') {
    if ((*(char *)(iVar3 + 0x58) == '\0') && (iVar1 = _L0(), iVar1 == 0)) {
      iVar1 = _L0();
      if (iVar1 == 0) {
        FUN_00010320();
        _DAT_00000004 |= 0x10;
      }
      else {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 8;
    }
  }
  puVar2 = (undefined *)FUN_000102a8();
  *puVar2 = (char)iVar1;
  puVar2[1] = 0;
  _L0();
  return 0;
}



undefined4 FUN_000102a8(void)

{
  undefined unaff_s1;
  undefined *puVar1;
  undefined in_stack_00000003;
  
  puVar1 = (undefined *)FUN_000102a8();
  *puVar1 = unaff_s1;
  puVar1[1] = in_stack_00000003;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined in_stack_00000003;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    iVar2 = _L0();
    if (iVar2 == 0) {
      FUN_00010320();
      _DAT_00000004 |= 0x10;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 8;
  }
  puVar1 = (undefined *)FUN_000102a8();
  *puVar1 = (char)iVar2;
  puVar1[1] = in_stack_00000003;
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined in_stack_00000003;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    FUN_00010320();
    _DAT_00000004 |= 0x10;
  }
  else {
    iVar2 = 1;
  }
  puVar1 = (undefined *)FUN_000102a8();
  *puVar1 = (char)iVar2;
  puVar1[1] = in_stack_00000003;
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010320(void)

{
  undefined unaff_s1;
  undefined *puVar1;
  undefined in_stack_00000003;
  
  FUN_00010320();
  _DAT_00000004 |= 0x10;
  puVar1 = (undefined *)FUN_000102a8();
  *puVar1 = unaff_s1;
  puVar1[1] = in_stack_00000003;
  _L0();
  return 0;
}



// DWARF DIE: 6ae5

int me_set_ps_disable_cfm_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if ((iVar1 != 1) && (iVar1 = FUN_0001035c(), iVar1 != 0)) {
    FUN_0001037a();
  }
  iVar1 = FUN_00010384();
  if (iVar1 == 1) {
    _L0();
  }
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if ((iVar1 != 1) && (iVar1 = FUN_0001035c(), iVar1 != 0)) {
    FUN_0001037a();
  }
  iVar1 = FUN_00010384();
  if (iVar1 == 1) {
    _L0();
  }
  return 0;
}



undefined4 FUN_0001035c(void)

{
  int iVar1;
  
  iVar1 = FUN_0001035c();
  if (iVar1 != 0) {
    FUN_0001037a();
  }
  iVar1 = FUN_00010384();
  if (iVar1 == 1) {
    _L0();
  }
  return 0;
}



undefined4 FUN_0001037a(void)

{
  int iVar1;
  
  FUN_0001037a();
  iVar1 = FUN_00010384();
  if (iVar1 == 1) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010384(void)

{
  int iVar1;
  
  iVar1 = FUN_00010384();
  if (iVar1 == 1) {
    _L0();
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 6a42

int mm_bss_param_setting_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 1) {
    FUN_000103ca();
  }
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 1) {
    FUN_000103ca();
  }
  _L0();
  return 0;
}



undefined4 FUN_000103ca(void)

{
  FUN_000103ca();
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 6952

int mm_bcn_change_cfm_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 2) {
    FUN_0001040a();
  }
  FUN_00010414();
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 2) {
    FUN_0001040a();
  }
  FUN_00010414();
  return 0;
}



undefined4 FUN_0001040a(void)

{
  FUN_0001040a();
  FUN_00010414();
  return 0;
}



undefined4 FUN_00010414(void)

{
  FUN_00010414();
  return 0;
}



// DWARF DIE: 688e

int apm_stop_req_handler
              (ke_msg_id_t msgid,apm_stop_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = (uint)param->vif_idx * 0x5d8;
  if ((*(char *)(iVar1 + 0x56) == '\x02') && (*(char *)(iVar1 + 0x58) != '\0')) {
    iVar1 = FUN_00010460(DAT_00000014);
    if (iVar1 != 0) {
      return 2;
    }
    if (DAT_00000014 != '\0') {
      DAT_00000014 = '\0';
    }
    FUN_0001048c();
    if (iRam00000000 != 0) {
      _L0();
      FUN_000104a6();
      iRam00000000 = 0;
    }
  }
  FUN_000104bc();
  return 0;
}



undefined4 FUN_00010460(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010460(param_1);
  uVar2 = 2;
  if (iVar1 == 0) {
    if (param_1 != '\0') {
      param_1 = '\0';
    }
    FUN_0001048c();
    if (iRam00000000 != 0) {
      _L0();
      FUN_000104a6();
      iRam00000000 = 0;
    }
    FUN_000104bc();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0001048c(void)

{
  int *unaff_s0;
  
  FUN_0001048c();
  if (*unaff_s0 != 0) {
    _L0();
    FUN_000104a6();
    *unaff_s0 = 0;
  }
  FUN_000104bc();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s0;
  
  _L0();
  FUN_000104a6();
  *unaff_s0 = 0;
  FUN_000104bc();
  return 0;
}



undefined4 FUN_000104a6(void)

{
  undefined4 *unaff_s0;
  
  FUN_000104a6();
  *unaff_s0 = 0;
  FUN_000104bc();
  return 0;
}



undefined4 FUN_000104bc(void)

{
  FUN_000104bc();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6ba8

int apm_start_req_handler
              (ke_msg_id_t msgid,apm_start_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint8_t uVar5;
  int iVar6;
  uint uVar7;
  undefined uVar8;
  uint8_t chan_idx;
  int8_t pwr;
  uint8_t idx;
  
  _L0(_DAT_00000010,_DAT_00000014,uRam0000002c);
  uVar7 = (uint)param->vif_idx;
  iVar6 = uVar7 * 0x5d8;
  uVar8 = 4;
  if (*(char *)(iVar6 + 0x56) == '\x02') {
    iVar1 = FUN_00010534(_DAT_00000010,_DAT_00000014,uRam0000002c);
    if (iVar1 == 0) {
      if (*(char *)(iVar6 + 0x58) == '\0') {
        if (*(int *)(iVar6 + 0x40) != 0) {
          FUN_00010564(_DAT_00000010,_DAT_00000014,uRam0000002c);
        }
        paRam00000000 = param;
        iVar6 = _L0(uRam0000002c);
        uVar8 = 1;
        if (iVar6 == 0) {
          iVar6 = FUN_0001059e(uRam0000002c);
          iVar1 = uVar7 * 0x5d8;
          *(int *)(iVar1 + 0x3a4) = iVar6;
          *(int8_t *)(iVar6 + 4) = (param->chan).tx_power;
          *(short *)(iVar1 + 0x3a8) = (short)param->center_freq1;
          *(short *)(iVar1 + 0x3aa) = (short)param->center_freq2;
          uVar5 = param->ch_width;
          if (uVar5 == '\x04') {
            uVar5 = '\x03';
          }
          iVar1 = uVar7 * 0x5d8;
          *(uint8_t *)(iVar1 + 0x3da) = uVar5;
          uVar5 = param->ch_width;
          *(undefined *)(iVar1 + 0x3dc) = 0;
          *(uint8_t *)(iVar1 + 0x3db) = uVar5;
          FUN_000105f8(uRam0000002c);
          _DAT_00000014 = CONCAT11(param->hidden_ssid,param->apm_emb_enabled);
          iVar6 = _L0(uRam0000002c);
          if (iVar6 != 0) {
            FUN_00010626(uRam0000002c);
            if (param->qos_supported != '\0') {
              *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 1;
            }
            if (DAT_0000002e != '\0') {
              *(uint *)(uVar7 * 0x5d8 + 0x3e0) = *(uint *)(uVar7 * 0x5d8 + 0x3e0) | 2;
            }
            iVar6 = uVar7 * 0x5d8;
            *(uint16_t *)(iVar6 + 0x412) = param->bcn_int;
            *(ushort *)(iVar6 + 0x3ac) = (ushort)param->beacon_period;
            *(uint8_t *)(iVar6 + 0x418) = param->ap_sec_type;
            _L0();
            *(undefined *)((uint)*(byte *)(iVar6 + 0x37e) + iVar6 + 0x37f) = 0;
            *(undefined4 *)(iVar6 + 0x378) = *(undefined4 *)(iVar6 + 0x50);
            *(undefined2 *)(iVar6 + 0x37c) = *(undefined2 *)(iVar6 + 0x54);
            _L0();
            *(undefined4 *)(iVar6 + 8) = _DAT_44b00200;
            *(undefined4 *)(iVar6 + 0xc) = _DAT_44b00204;
            *(undefined4 *)(iVar6 + 0x10) = _DAT_44b00208;
            uVar2 = _DAT_44b0020c;
            *(undefined *)(iVar6 + 0x3c0) = 0;
            *(undefined4 *)(iVar6 + 0x14) = uVar2;
            *(undefined4 *)(iVar6 + 0x414) = 0xffff0000;
            _DAT_00000010 = _L0();
            uVar2 = _L0();
            param->bcn_len = (uint16_t)uVar2;
            if (param->ap_sec_type == '\0') {
              paRam00000000 = (apm_start_req *)0x0;
            }
            else {
              paRam00000000 = (apm_start_req *)_L0();
              _L0();
              FUN_00010760();
              (paRam00000000->basic_rates).array[1] = param->vif_idx;
              FUN_00010788();
              FUN_00010794();
            }
          }
          if ((param->chan).band == '\0') {
            uVar3 = FUN_000107aa();
            if ((uVar3 & 0xf) == 0) {
              *(undefined *)(uVar7 * 0x5d8 + 0x3d7) = 1;
              iVar6 = _L0();
              return iVar6;
            }
            uVar2 = _L0();
            *(char *)(uVar7 * 0x5d8 + 0x3d7) = '\x1f' - (char)uVar2;
          }
          _L0();
          _L0();
          FUN_0001080a();
          return 1;
        }
      }
      else {
        uVar8 = 9;
      }
    }
    else {
      uVar8 = 8;
    }
  }
  FUN_00010858();
  puVar4 = (undefined *)FUN_0001086c();
  *puVar4 = uVar8;
  puVar4[1] = param->vif_idx;
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(undefined4 uRam00000010,undefined2 param_2,undefined3 uRam0000002c)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined uVar8;
  undefined uStack0000000e;
  
  _L0(uRam00000010,param_2,uRam0000002c);
  uVar7 = (uint)*(byte *)(unaff_s0 + 0x33);
  iVar6 = uVar7 * 0x5d8;
  uVar8 = 4;
  if (*(char *)(iVar6 + 0x56) == '\x02') {
    iVar1 = FUN_00010534(uRam00000010,param_2,uRam0000002c);
    if (iVar1 == 0) {
      if (*(char *)(iVar6 + 0x58) == '\0') {
        if (*(int *)(iVar6 + 0x40) != 0) {
          FUN_00010564(uRam00000010,param_2,uRam0000002c);
        }
        iRam00000000 = unaff_s0;
        iVar6 = _L0(uRam0000002c);
        uVar8 = 1;
        if (iVar6 == 0) {
          iVar6 = FUN_0001059e(uRam0000002c);
          iVar1 = uVar7 * 0x5d8;
          *(int *)(iVar1 + 0x3a4) = iVar6;
          *(undefined *)(iVar6 + 4) = *(undefined *)(unaff_s0 + 0x12);
          *(short *)(iVar1 + 0x3a8) = (short)*(undefined4 *)(unaff_s0 + 0x14);
          *(short *)(iVar1 + 0x3aa) = (short)*(undefined4 *)(unaff_s0 + 0x18);
          cVar5 = *(char *)(unaff_s0 + 0x1c);
          if (cVar5 == '\x04') {
            cVar5 = '\x03';
          }
          iVar1 = uVar7 * 0x5d8;
          *(char *)(iVar1 + 0x3da) = cVar5;
          uVar8 = *(undefined *)(unaff_s0 + 0x1c);
          *(undefined *)(iVar1 + 0x3dc) = 0;
          *(undefined *)(iVar1 + 0x3db) = uVar8;
          FUN_000105f8(uRam0000002c);
          param_2 = CONCAT11(*(undefined *)(unaff_s0 + 0x1d),*(undefined *)(unaff_s0 + 0x34));
          iVar6 = _L0(uRam0000002c);
          if (iVar6 != 0) {
            FUN_00010626(uRam0000002c);
            if (*(char *)(unaff_s0 + 0x43) != '\0') {
              *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 1;
            }
            if (uRam0000002c._2_1_ != '\0') {
              *(uint *)(uVar7 * 0x5d8 + 0x3e0) = *(uint *)(uVar7 * 0x5d8 + 0x3e0) | 2;
            }
            iVar6 = uVar7 * 0x5d8;
            *(undefined2 *)(iVar6 + 0x412) = *(undefined2 *)(unaff_s0 + 0x28);
            *(ushort *)(iVar6 + 0x3ac) = (ushort)*(byte *)(unaff_s0 + 0x42);
            *(undefined *)(iVar6 + 0x418) = *(undefined *)(unaff_s0 + 0x66);
            _L0();
            *(undefined *)((uint)*(byte *)(iVar6 + 0x37e) + iVar6 + 0x37f) = 0;
            *(undefined4 *)(iVar6 + 0x378) = *(undefined4 *)(iVar6 + 0x50);
            *(undefined2 *)(iVar6 + 0x37c) = *(undefined2 *)(iVar6 + 0x54);
            _L0();
            *(undefined4 *)(iVar6 + 8) = _DAT_44b00200;
            *(undefined4 *)(iVar6 + 0xc) = _DAT_44b00204;
            *(undefined4 *)(iVar6 + 0x10) = _DAT_44b00208;
            uVar2 = _DAT_44b0020c;
            *(undefined *)(iVar6 + 0x3c0) = 0;
            *(undefined4 *)(iVar6 + 0x14) = uVar2;
            *(undefined4 *)(iVar6 + 0x414) = 0xffff0000;
            uRam00000010 = _L0();
            uVar2 = _L0();
            *(short *)(unaff_s0 + 0x24) = (short)uVar2;
            if (*(char *)(unaff_s0 + 0x66) == '\0') {
              iRam00000000 = 0;
            }
            else {
              iRam00000000 = _L0();
              _L0();
              FUN_00010760();
              *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
              FUN_00010788();
              FUN_00010794();
            }
          }
          if (*(char *)(unaff_s0 + 0x10) == '\0') {
            uVar3 = FUN_000107aa();
            if ((uVar3 & 0xf) == 0) {
              *(undefined *)(uVar7 * 0x5d8 + 0x3d7) = 1;
              uVar2 = _L0();
              return uVar2;
            }
            uVar2 = _L0();
            *(char *)(uVar7 * 0x5d8 + 0x3d7) = '\x1f' - (char)uVar2;
          }
          _L0();
          uStack0000000e = *(undefined *)(*(int *)(uVar7 * 0x5d8 + 0x3a4) + 4);
          _L0();
          FUN_0001080a();
          return 1;
        }
      }
      else {
        uVar8 = 9;
      }
    }
    else {
      uVar8 = 8;
    }
  }
  FUN_00010858();
  puVar4 = (undefined *)FUN_0001086c();
  *puVar4 = uVar8;
  puVar4[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010534(undefined4 uRam00000010,undefined2 param_2,undefined3 uRam0000002c)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  int unaff_s2;
  int unaff_s3;
  undefined uVar7;
  undefined uStack0000000e;
  
  iVar1 = FUN_00010534(uRam00000010,param_2,uRam0000002c);
  if (iVar1 == 0) {
    if (*(char *)(unaff_s1 + 0x58) == '\0') {
      if (*(int *)(unaff_s1 + 0x40) != 0) {
        FUN_00010564(uRam00000010,param_2,uRam0000002c);
      }
      iRam00000000 = unaff_s0;
      iVar1 = _L0(uRam0000002c);
      uVar7 = 1;
      if (iVar1 == 0) {
        iVar1 = FUN_0001059e(uRam0000002c);
        iVar6 = unaff_s3 * 0x5d8 + unaff_s2;
        *(int *)(iVar6 + 0x3a4) = iVar1;
        *(undefined *)(iVar1 + 4) = *(undefined *)(unaff_s0 + 0x12);
        *(short *)(iVar6 + 0x3a8) = (short)*(undefined4 *)(unaff_s0 + 0x14);
        *(short *)(iVar6 + 0x3aa) = (short)*(undefined4 *)(unaff_s0 + 0x18);
        cVar5 = *(char *)(unaff_s0 + 0x1c);
        if (cVar5 == '\x04') {
          cVar5 = '\x03';
        }
        iVar6 = unaff_s2 + unaff_s3 * 0x5d8;
        *(char *)(iVar6 + 0x3da) = cVar5;
        uVar7 = *(undefined *)(unaff_s0 + 0x1c);
        *(undefined *)(iVar6 + 0x3dc) = 0;
        *(undefined *)(iVar6 + 0x3db) = uVar7;
        FUN_000105f8(uRam0000002c);
        param_2 = CONCAT11(*(undefined *)(unaff_s0 + 0x1d),*(undefined *)(unaff_s0 + 0x34));
        iVar1 = _L0(uRam0000002c);
        if (iVar1 != 0) {
          FUN_00010626(uRam0000002c);
          if (*(char *)(unaff_s0 + 0x43) != '\0') {
            *(uint *)(iVar6 + 0x3e0) = *(uint *)(iVar6 + 0x3e0) | 1;
          }
          if (uRam0000002c._2_1_ != '\0') {
            iVar1 = unaff_s3 * 0x5d8 + unaff_s2;
            *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 2;
          }
          iVar1 = unaff_s2 + unaff_s3 * 0x5d8;
          *(undefined2 *)(iVar1 + 0x412) = *(undefined2 *)(unaff_s0 + 0x28);
          *(ushort *)(iVar1 + 0x3ac) = (ushort)*(byte *)(unaff_s0 + 0x42);
          *(undefined *)(iVar1 + 0x418) = *(undefined *)(unaff_s0 + 0x66);
          _L0();
          *(undefined *)((uint)*(byte *)(iVar1 + 0x37e) + iVar1 + 0x37f) = 0;
          *(undefined4 *)(iVar1 + 0x378) = *(undefined4 *)(iVar1 + 0x50);
          *(undefined2 *)(iVar1 + 0x37c) = *(undefined2 *)(iVar1 + 0x54);
          _L0();
          *(undefined4 *)(iVar1 + 8) = _DAT_44b00200;
          *(undefined4 *)(iVar1 + 0xc) = _DAT_44b00204;
          *(undefined4 *)(iVar1 + 0x10) = _DAT_44b00208;
          uVar2 = _DAT_44b0020c;
          *(undefined *)(iVar1 + 0x3c0) = 0;
          *(undefined4 *)(iVar1 + 0x14) = uVar2;
          *(undefined4 *)(unaff_s3 * 0x5d8 + 0x414) = 0xffff0000;
          uRam00000010 = _L0();
          uVar2 = _L0();
          *(short *)(unaff_s0 + 0x24) = (short)uVar2;
          if (*(char *)(unaff_s0 + 0x66) == '\0') {
            iRam00000000 = 0;
          }
          else {
            iRam00000000 = _L0();
            _L0();
            FUN_00010760();
            *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
            FUN_00010788();
            FUN_00010794();
          }
        }
        if (*(char *)(unaff_s0 + 0x10) == '\0') {
          uVar3 = FUN_000107aa();
          if ((uVar3 & 0xf) == 0) {
            *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
            uVar2 = _L0();
            return uVar2;
          }
          uVar2 = _L0();
          *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar2;
        }
        _L0();
        uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
        _L0();
        FUN_0001080a();
        return 1;
      }
    }
    else {
      uVar7 = 9;
    }
  }
  else {
    uVar7 = 8;
  }
  FUN_00010858();
  puVar4 = (undefined *)FUN_0001086c();
  *puVar4 = uVar7;
  puVar4[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010564(undefined4 uRam00000010,undefined2 param_2,undefined3 uRam0000002c)

{
  undefined uVar1;
  int unaff_s0;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  int unaff_s2;
  int unaff_s3;
  undefined uStack0000000e;
  
  FUN_00010564(uRam00000010,param_2,uRam0000002c);
  iRam00000000 = unaff_s0;
  iVar2 = _L0(uRam0000002c);
  if (iVar2 == 0) {
    iVar2 = FUN_0001059e(uRam0000002c);
    iVar7 = unaff_s3 * 0x5d8 + unaff_s2;
    *(int *)(iVar7 + 0x3a4) = iVar2;
    *(undefined *)(iVar2 + 4) = *(undefined *)(unaff_s0 + 0x12);
    *(short *)(iVar7 + 0x3a8) = (short)*(undefined4 *)(unaff_s0 + 0x14);
    *(short *)(iVar7 + 0x3aa) = (short)*(undefined4 *)(unaff_s0 + 0x18);
    cVar6 = *(char *)(unaff_s0 + 0x1c);
    if (cVar6 == '\x04') {
      cVar6 = '\x03';
    }
    iVar7 = unaff_s2 + unaff_s3 * 0x5d8;
    *(char *)(iVar7 + 0x3da) = cVar6;
    uVar1 = *(undefined *)(unaff_s0 + 0x1c);
    *(undefined *)(iVar7 + 0x3dc) = 0;
    *(undefined *)(iVar7 + 0x3db) = uVar1;
    FUN_000105f8(uRam0000002c);
    param_2 = CONCAT11(*(undefined *)(unaff_s0 + 0x1d),*(undefined *)(unaff_s0 + 0x34));
    iVar2 = _L0(uRam0000002c);
    if (iVar2 != 0) {
      FUN_00010626(uRam0000002c);
      if (*(char *)(unaff_s0 + 0x43) != '\0') {
        *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 1;
      }
      if (uRam0000002c._2_1_ != '\0') {
        iVar2 = unaff_s3 * 0x5d8 + unaff_s2;
        *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 2;
      }
      iVar2 = unaff_s2 + unaff_s3 * 0x5d8;
      *(undefined2 *)(iVar2 + 0x412) = *(undefined2 *)(unaff_s0 + 0x28);
      *(ushort *)(iVar2 + 0x3ac) = (ushort)*(byte *)(unaff_s0 + 0x42);
      *(undefined *)(iVar2 + 0x418) = *(undefined *)(unaff_s0 + 0x66);
      _L0();
      *(undefined *)((uint)*(byte *)(iVar2 + 0x37e) + iVar2 + 0x37f) = 0;
      *(undefined4 *)(iVar2 + 0x378) = *(undefined4 *)(iVar2 + 0x50);
      *(undefined2 *)(iVar2 + 0x37c) = *(undefined2 *)(iVar2 + 0x54);
      _L0();
      *(undefined4 *)(iVar2 + 8) = _DAT_44b00200;
      *(undefined4 *)(iVar2 + 0xc) = _DAT_44b00204;
      *(undefined4 *)(iVar2 + 0x10) = _DAT_44b00208;
      uVar3 = _DAT_44b0020c;
      *(undefined *)(iVar2 + 0x3c0) = 0;
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
      *(undefined4 *)(unaff_s3 * 0x5d8 + 0x414) = 0xffff0000;
      uRam00000010 = _L0();
      uVar3 = _L0();
      *(short *)(unaff_s0 + 0x24) = (short)uVar3;
      if (*(char *)(unaff_s0 + 0x66) == '\0') {
        iRam00000000 = 0;
      }
      else {
        iRam00000000 = _L0();
        _L0();
        FUN_00010760();
        *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
        FUN_00010788();
        FUN_00010794();
      }
    }
    if (*(char *)(unaff_s0 + 0x10) == '\0') {
      uVar4 = FUN_000107aa();
      if ((uVar4 & 0xf) == 0) {
        *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
        uVar3 = _L0();
        return uVar3;
      }
      uVar3 = _L0();
      *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar3;
    }
    _L0();
    uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
    _L0();
    FUN_0001080a();
    uVar3 = 1;
  }
  else {
    FUN_00010858();
    puVar5 = (undefined *)FUN_0001086c();
    *puVar5 = 1;
    puVar5[1] = *(undefined *)(unaff_s0 + 0x33);
    _L0();
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(undefined3 uRam0000002c)

{
  undefined uVar1;
  int unaff_s0;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  int unaff_s2;
  int unaff_s3;
  int unaff_s6;
  undefined uStack0000000e;
  
  iVar2 = _L0(uRam0000002c);
  if (iVar2 == 0) {
    iVar2 = FUN_0001059e(uRam0000002c);
    iVar7 = unaff_s3 * 0x5d8 + unaff_s2;
    *(int *)(iVar7 + 0x3a4) = iVar2;
    *(undefined *)(iVar2 + 4) = *(undefined *)(unaff_s0 + 0x12);
    *(short *)(iVar7 + 0x3a8) = (short)*(undefined4 *)(unaff_s0 + 0x14);
    *(short *)(iVar7 + 0x3aa) = (short)*(undefined4 *)(unaff_s0 + 0x18);
    cVar6 = *(char *)(unaff_s0 + 0x1c);
    if (cVar6 == '\x04') {
      cVar6 = '\x03';
    }
    iVar7 = unaff_s2 + unaff_s3 * 0x5d8;
    *(char *)(iVar7 + 0x3da) = cVar6;
    uVar1 = *(undefined *)(unaff_s0 + 0x1c);
    *(undefined *)(iVar7 + 0x3dc) = 0;
    *(undefined *)(iVar7 + 0x3db) = uVar1;
    FUN_000105f8(uRam0000002c);
    *(undefined *)(unaff_s6 + 0x14) = *(undefined *)(unaff_s0 + 0x34);
    *(undefined *)(unaff_s6 + 0x15) = *(undefined *)(unaff_s0 + 0x1d);
    iVar2 = _L0(uRam0000002c);
    if (iVar2 != 0) {
      FUN_00010626(uRam0000002c);
      if (*(char *)(unaff_s0 + 0x43) != '\0') {
        *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 1;
      }
      if (uRam0000002c._2_1_ != '\0') {
        iVar2 = unaff_s3 * 0x5d8 + unaff_s2;
        *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 2;
      }
      iVar2 = unaff_s2 + unaff_s3 * 0x5d8;
      *(undefined2 *)(iVar2 + 0x412) = *(undefined2 *)(unaff_s0 + 0x28);
      *(ushort *)(iVar2 + 0x3ac) = (ushort)*(byte *)(unaff_s0 + 0x42);
      *(undefined *)(iVar2 + 0x418) = *(undefined *)(unaff_s0 + 0x66);
      _L0();
      *(undefined *)((uint)*(byte *)(iVar2 + 0x37e) + iVar2 + 0x37f) = 0;
      *(undefined4 *)(iVar2 + 0x378) = *(undefined4 *)(iVar2 + 0x50);
      *(undefined2 *)(iVar2 + 0x37c) = *(undefined2 *)(iVar2 + 0x54);
      _L0();
      *(undefined4 *)(iVar2 + 8) = _DAT_44b00200;
      *(undefined4 *)(iVar2 + 0xc) = _DAT_44b00204;
      *(undefined4 *)(iVar2 + 0x10) = _DAT_44b00208;
      uVar3 = _DAT_44b0020c;
      *(undefined *)(iVar2 + 0x3c0) = 0;
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
      *(undefined4 *)(unaff_s3 * 0x5d8 + 0x414) = 0xffff0000;
      uVar3 = _L0();
      *(undefined4 *)(unaff_s6 + 0x10) = uVar3;
      uVar3 = _L0();
      *(short *)(unaff_s0 + 0x24) = (short)uVar3;
      if (*(char *)(unaff_s0 + 0x66) == '\0') {
        iRam00000000 = 0;
      }
      else {
        iRam00000000 = _L0();
        _L0();
        FUN_00010760();
        *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
        FUN_00010788();
        FUN_00010794();
      }
    }
    if (*(char *)(unaff_s0 + 0x10) == '\0') {
      uVar4 = FUN_000107aa();
      if ((uVar4 & 0xf) == 0) {
        *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
        uVar3 = _L0();
        return uVar3;
      }
      uVar3 = _L0();
      *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar3;
    }
    _L0();
    uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
    _L0();
    FUN_0001080a();
    uVar3 = 1;
  }
  else {
    FUN_00010858();
    puVar5 = (undefined *)FUN_0001086c();
    *puVar5 = 1;
    puVar5[1] = *(undefined *)(unaff_s0 + 0x33);
    _L0();
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001059e(undefined3 param_1)

{
  undefined uVar1;
  int unaff_s0;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s6;
  undefined uStack0000000e;
  
  iVar2 = FUN_0001059e(param_1);
  iVar6 = unaff_s3 * 0x5d8 + unaff_s2;
  *(int *)(iVar6 + 0x3a4) = iVar2;
  *(undefined *)(iVar2 + 4) = *(undefined *)(unaff_s0 + 0x12);
  *(short *)(iVar6 + 0x3a8) = (short)*(undefined4 *)(unaff_s0 + 0x14);
  *(short *)(iVar6 + 0x3aa) = (short)*(undefined4 *)(unaff_s0 + 0x18);
  cVar5 = *(char *)(unaff_s0 + 0x1c);
  if (cVar5 == '\x04') {
    cVar5 = '\x03';
  }
  iVar6 = unaff_s2 + unaff_s3 * 0x5d8;
  *(char *)(iVar6 + 0x3da) = cVar5;
  uVar1 = *(undefined *)(unaff_s0 + 0x1c);
  *(undefined *)(iVar6 + 0x3dc) = 0;
  *(undefined *)(iVar6 + 0x3db) = uVar1;
  FUN_000105f8(param_1);
  *(undefined *)(unaff_s6 + 0x14) = *(undefined *)(unaff_s0 + 0x34);
  *(undefined *)(unaff_s6 + 0x15) = *(undefined *)(unaff_s0 + 0x1d);
  iVar2 = _L0(param_1);
  if (iVar2 != 0) {
    FUN_00010626(param_1);
    if (*(char *)(unaff_s0 + 0x43) != '\0') {
      *(uint *)(iVar6 + 0x3e0) = *(uint *)(iVar6 + 0x3e0) | 1;
    }
    if (param_1._2_1_ != '\0') {
      iVar2 = unaff_s3 * 0x5d8 + unaff_s2;
      *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 2;
    }
    iVar2 = unaff_s2 + unaff_s3 * 0x5d8;
    *(undefined2 *)(iVar2 + 0x412) = *(undefined2 *)(unaff_s0 + 0x28);
    *(ushort *)(iVar2 + 0x3ac) = (ushort)*(byte *)(unaff_s0 + 0x42);
    *(undefined *)(iVar2 + 0x418) = *(undefined *)(unaff_s0 + 0x66);
    _L0();
    *(undefined *)((uint)*(byte *)(iVar2 + 0x37e) + iVar2 + 0x37f) = 0;
    *(undefined4 *)(iVar2 + 0x378) = *(undefined4 *)(iVar2 + 0x50);
    *(undefined2 *)(iVar2 + 0x37c) = *(undefined2 *)(iVar2 + 0x54);
    _L0();
    *(undefined4 *)(iVar2 + 8) = _DAT_44b00200;
    *(undefined4 *)(iVar2 + 0xc) = _DAT_44b00204;
    *(undefined4 *)(iVar2 + 0x10) = _DAT_44b00208;
    uVar3 = _DAT_44b0020c;
    *(undefined *)(iVar2 + 0x3c0) = 0;
    *(undefined4 *)(iVar2 + 0x14) = uVar3;
    *(undefined4 *)(unaff_s3 * 0x5d8 + 0x414) = 0xffff0000;
    uVar3 = _L0();
    *(undefined4 *)(unaff_s6 + 0x10) = uVar3;
    uVar3 = _L0();
    *(short *)(unaff_s0 + 0x24) = (short)uVar3;
    if (*(char *)(unaff_s0 + 0x66) == '\0') {
      iRam00000000 = 0;
    }
    else {
      iRam00000000 = _L0();
      _L0();
      FUN_00010760();
      *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
      FUN_00010788();
      FUN_00010794();
    }
  }
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar4 = FUN_000107aa();
    if ((uVar4 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar3 = _L0();
      return uVar3;
    }
    uVar3 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar3;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000105f8(undefined3 uRam0000002c)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  undefined uStack0000000e;
  
  FUN_000105f8(uRam0000002c);
  *(undefined *)(unaff_s6 + 0x14) = *(undefined *)(unaff_s0 + 0x34);
  *(undefined *)(unaff_s6 + 0x15) = *(undefined *)(unaff_s0 + 0x1d);
  iVar1 = _L0(uRam0000002c);
  if (iVar1 != 0) {
    FUN_00010626(uRam0000002c);
    if (*(char *)(unaff_s0 + 0x43) != '\0') {
      *(uint *)(unaff_s5 + 0x3e0) = *(uint *)(unaff_s5 + 0x3e0) | 1;
    }
    if (uRam0000002c._2_1_ != '\0') {
      iVar1 = unaff_s3 * 0x5d8 + unaff_s2;
      *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 2;
    }
    iVar1 = unaff_s2 + unaff_s3 * 0x5d8;
    *(undefined2 *)(iVar1 + 0x412) = *(undefined2 *)(unaff_s0 + 0x28);
    *(ushort *)(iVar1 + 0x3ac) = (ushort)*(byte *)(unaff_s0 + 0x42);
    *(undefined *)(iVar1 + 0x418) = *(undefined *)(unaff_s0 + 0x66);
    _L0();
    *(undefined *)((uint)*(byte *)(iVar1 + 0x37e) + iVar1 + 0x37f) = 0;
    *(undefined4 *)(iVar1 + 0x378) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined2 *)(iVar1 + 0x37c) = *(undefined2 *)(iVar1 + 0x54);
    _L0();
    *(undefined4 *)(iVar1 + 8) = _DAT_44b00200;
    *(undefined4 *)(iVar1 + 0xc) = _DAT_44b00204;
    *(undefined4 *)(iVar1 + 0x10) = _DAT_44b00208;
    uVar2 = _DAT_44b0020c;
    *(undefined *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(unaff_s3 * 0x5d8 + 0x414) = 0xffff0000;
    uVar2 = _L0();
    *(undefined4 *)(unaff_s6 + 0x10) = uVar2;
    uVar2 = _L0();
    *(short *)(unaff_s0 + 0x24) = (short)uVar2;
    if (*(char *)(unaff_s0 + 0x66) == '\0') {
      iRam00000000 = 0;
    }
    else {
      iRam00000000 = _L0();
      _L0();
      FUN_00010760();
      *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
      FUN_00010788();
      FUN_00010794();
    }
  }
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar3 = FUN_000107aa();
    if ((uVar3 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar2 = _L0();
      return uVar2;
    }
    uVar2 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar2;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(undefined3 param_1)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  undefined uStack0000000e;
  
  iVar1 = _L0(param_1);
  if (iVar1 != 0) {
    FUN_00010626(param_1);
    if (*(char *)(unaff_s0 + 0x43) != '\0') {
      *(uint *)(unaff_s5 + 0x3e0) = *(uint *)(unaff_s5 + 0x3e0) | 1;
    }
    if (param_1._2_1_ != '\0') {
      iVar1 = unaff_s3 * 0x5d8 + unaff_s2;
      *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 2;
    }
    iVar1 = unaff_s2 + unaff_s3 * 0x5d8;
    *(undefined2 *)(iVar1 + 0x412) = *(undefined2 *)(unaff_s0 + 0x28);
    *(ushort *)(iVar1 + 0x3ac) = (ushort)*(byte *)(unaff_s0 + 0x42);
    *(undefined *)(iVar1 + 0x418) = *(undefined *)(unaff_s0 + 0x66);
    _L0();
    *(undefined *)((uint)*(byte *)(iVar1 + 0x37e) + iVar1 + 0x37f) = 0;
    *(undefined4 *)(iVar1 + 0x378) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined2 *)(iVar1 + 0x37c) = *(undefined2 *)(iVar1 + 0x54);
    _L0();
    *(undefined4 *)(iVar1 + 8) = _DAT_44b00200;
    *(undefined4 *)(iVar1 + 0xc) = _DAT_44b00204;
    *(undefined4 *)(iVar1 + 0x10) = _DAT_44b00208;
    uVar2 = _DAT_44b0020c;
    *(undefined *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(unaff_s3 * 0x5d8 + 0x414) = 0xffff0000;
    uVar2 = _L0();
    *(undefined4 *)(unaff_s6 + 0x10) = uVar2;
    uVar2 = _L0();
    *(short *)(unaff_s0 + 0x24) = (short)uVar2;
    if (*(char *)(unaff_s0 + 0x66) == '\0') {
      iRam00000000 = 0;
    }
    else {
      iRam00000000 = _L0();
      _L0();
      FUN_00010760();
      *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
      FUN_00010788();
      FUN_00010794();
    }
  }
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar3 = FUN_000107aa();
    if ((uVar3 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar2 = _L0();
      return uVar2;
    }
    uVar2 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar2;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010626(undefined3 param_1)

{
  int unaff_s0;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  undefined uStack0000000e;
  
  FUN_00010626(param_1);
  if (*(char *)(unaff_s0 + 0x43) != '\0') {
    *(uint *)(unaff_s5 + 0x3e0) = *(uint *)(unaff_s5 + 0x3e0) | 1;
  }
  if (param_1._2_1_ != '\0') {
    iVar3 = unaff_s3 * 0x5d8 + unaff_s2;
    *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 2;
  }
  iVar3 = unaff_s2 + unaff_s3 * 0x5d8;
  *(undefined2 *)(iVar3 + 0x412) = *(undefined2 *)(unaff_s0 + 0x28);
  *(ushort *)(iVar3 + 0x3ac) = (ushort)*(byte *)(unaff_s0 + 0x42);
  *(undefined *)(iVar3 + 0x418) = *(undefined *)(unaff_s0 + 0x66);
  _L0();
  *(undefined *)((uint)*(byte *)(iVar3 + 0x37e) + iVar3 + 0x37f) = 0;
  *(undefined4 *)(iVar3 + 0x378) = *(undefined4 *)(iVar3 + 0x50);
  *(undefined2 *)(iVar3 + 0x37c) = *(undefined2 *)(iVar3 + 0x54);
  _L0();
  *(undefined4 *)(iVar3 + 8) = _DAT_44b00200;
  *(undefined4 *)(iVar3 + 0xc) = _DAT_44b00204;
  *(undefined4 *)(iVar3 + 0x10) = _DAT_44b00208;
  uVar1 = _DAT_44b0020c;
  *(undefined *)(iVar3 + 0x3c0) = 0;
  *(undefined4 *)(iVar3 + 0x14) = uVar1;
  *(undefined4 *)(unaff_s3 * 0x5d8 + 0x414) = 0xffff0000;
  uVar1 = _L0();
  *(undefined4 *)(unaff_s6 + 0x10) = uVar1;
  uVar1 = _L0();
  *(short *)(unaff_s0 + 0x24) = (short)uVar1;
  if (*(char *)(unaff_s0 + 0x66) == '\0') {
    iRam00000000 = 0;
  }
  else {
    iRam00000000 = _L0();
    _L0();
    FUN_00010760();
    *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
    FUN_00010788();
    FUN_00010794();
  }
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar2 = FUN_000107aa();
    if ((uVar2 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar1 = _L0();
      return uVar1;
    }
    uVar1 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar1;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  uint uVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s6;
  int unaff_s8;
  undefined uStack0000000e;
  
  _L0();
  *(undefined *)((uint)*(byte *)(unaff_s1 + 0x37e) + unaff_s1 + 0x37f) = 0;
  *(undefined4 *)(unaff_s1 + 0x378) = *(undefined4 *)(unaff_s1 + 0x50);
  *(undefined2 *)(unaff_s1 + 0x37c) = *(undefined2 *)(unaff_s1 + 0x54);
  _L0();
  *(undefined4 *)(unaff_s1 + 8) = _DAT_44b00200;
  *(undefined4 *)(unaff_s1 + 0xc) = _DAT_44b00204;
  *(undefined4 *)(unaff_s1 + 0x10) = _DAT_44b00208;
  uVar1 = _DAT_44b0020c;
  *(undefined *)(unaff_s1 + 0x3c0) = 0;
  *(undefined4 *)(unaff_s1 + 0x14) = uVar1;
  *(undefined4 *)(unaff_s8 + 0x414) = 0xffff0000;
  uVar1 = _L0();
  *(undefined4 *)(unaff_s6 + 0x10) = uVar1;
  uVar1 = _L0();
  *(short *)(unaff_s0 + 0x24) = (short)uVar1;
  if (*(char *)(unaff_s0 + 0x66) == '\0') {
    iRam00000000 = 0;
  }
  else {
    iRam00000000 = _L0();
    _L0();
    FUN_00010760();
    *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
    FUN_00010788();
    FUN_00010794();
  }
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar2 = FUN_000107aa();
    if ((uVar2 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar1 = _L0();
      return uVar1;
    }
    uVar1 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar1;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  uint uVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s6;
  int unaff_s8;
  undefined uStack0000000e;
  
  _L0();
  *(undefined4 *)(unaff_s1 + 8) = _DAT_44b00200;
  *(undefined4 *)(unaff_s1 + 0xc) = _DAT_44b00204;
  *(undefined4 *)(unaff_s1 + 0x10) = _DAT_44b00208;
  uVar1 = _DAT_44b0020c;
  *(undefined *)(unaff_s1 + 0x3c0) = 0;
  *(undefined4 *)(unaff_s1 + 0x14) = uVar1;
  *(undefined4 *)(unaff_s8 + 0x414) = 0xffff0000;
  uVar1 = _L0();
  *(undefined4 *)(unaff_s6 + 0x10) = uVar1;
  uVar1 = _L0();
  *(short *)(unaff_s0 + 0x24) = (short)uVar1;
  if (*(char *)(unaff_s0 + 0x66) == '\0') {
    iRam00000000 = 0;
  }
  else {
    iRam00000000 = _L0();
    _L0();
    FUN_00010760();
    *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
    FUN_00010788();
    FUN_00010794();
  }
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar2 = FUN_000107aa();
    if ((uVar2 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar1 = _L0();
      return uVar1;
    }
    uVar1 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar1;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  uint uVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s6;
  undefined uStack0000000e;
  
  uVar1 = _L0();
  *(undefined4 *)(unaff_s6 + 0x10) = uVar1;
  uVar1 = _L0();
  *(short *)(unaff_s0 + 0x24) = (short)uVar1;
  if (*(char *)(unaff_s0 + 0x66) == '\0') {
    iRam00000000 = 0;
  }
  else {
    iRam00000000 = _L0();
    _L0();
    FUN_00010760();
    *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
    FUN_00010788();
    FUN_00010794();
  }
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar2 = FUN_000107aa();
    if ((uVar2 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar1 = _L0();
      return uVar1;
    }
    uVar1 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar1;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  uint uVar2;
  int unaff_s2;
  int unaff_s3;
  undefined uStack0000000e;
  
  uVar1 = _L0();
  *(short *)(unaff_s0 + 0x24) = (short)uVar1;
  if (*(char *)(unaff_s0 + 0x66) == '\0') {
    iRam00000000 = 0;
  }
  else {
    iRam00000000 = _L0();
    _L0();
    FUN_00010760();
    *(undefined *)(iRam00000000 + 2) = *(undefined *)(unaff_s0 + 0x33);
    FUN_00010788();
    FUN_00010794();
  }
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar2 = FUN_000107aa();
    if ((uVar2 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar1 = _L0();
      return uVar1;
    }
    uVar1 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar1;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_s2;
  int unaff_s3;
  undefined uStack0000000e;
  
  iVar1 = _L0();
  *unaff_s1 = iVar1;
  _L0();
  FUN_00010760();
  *(undefined *)(*unaff_s1 + 2) = *(undefined *)(unaff_s0 + 0x33);
  FUN_00010788();
  FUN_00010794();
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar2 = FUN_000107aa();
    if ((uVar2 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar3 = _L0();
      return uVar3;
    }
    uVar3 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar3;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint uVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s3;
  undefined uStack0000000e;
  
  _L0();
  FUN_00010760();
  *(undefined *)(*unaff_s1 + 2) = *(undefined *)(unaff_s0 + 0x33);
  FUN_00010788();
  FUN_00010794();
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar1 = FUN_000107aa();
    if ((uVar1 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar2 = _L0();
      return uVar2;
    }
    uVar2 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar2;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 FUN_00010760(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint uVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s3;
  undefined uStack0000000e;
  
  FUN_00010760();
  *(undefined *)(*unaff_s1 + 2) = *(undefined *)(unaff_s0 + 0x33);
  FUN_00010788();
  FUN_00010794();
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar1 = FUN_000107aa();
    if ((uVar1 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar2 = _L0();
      return uVar2;
    }
    uVar2 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar2;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 FUN_00010788(void)

{
  int unaff_s0;
  uint uVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s3;
  undefined uStack0000000e;
  
  FUN_00010788();
  FUN_00010794();
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar1 = FUN_000107aa();
    if ((uVar1 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar2 = _L0();
      return uVar2;
    }
    uVar2 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar2;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 FUN_00010794(void)

{
  int unaff_s0;
  uint uVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s3;
  undefined uStack0000000e;
  
  FUN_00010794();
  if (*(char *)(unaff_s0 + 0x10) == '\0') {
    uVar1 = FUN_000107aa();
    if ((uVar1 & 0xf) == 0) {
      *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
      uVar2 = _L0();
      return uVar2;
    }
    uVar2 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar2;
  }
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 FUN_000107aa(void)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s3;
  undefined uStack0000000e;
  
  uVar1 = FUN_000107aa();
  if ((uVar1 & 0xf) != 0) {
    uVar2 = _L0();
    *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar2;
    _L0();
    uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
    _L0();
    FUN_0001080a();
    return 1;
  }
  *(undefined *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = 1;
  uVar2 = _L0();
  return uVar2;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  int unaff_s2;
  int unaff_s3;
  undefined uStack0000000e;
  
  uVar1 = _L0();
  *(char *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x3d7) = '\x1f' - (char)uVar1;
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s2;
  int unaff_s3;
  undefined uStack0000000e;
  
  _L0();
  uStack0000000e = *(undefined *)(*(int *)(unaff_s2 + unaff_s3 * 0x5d8 + 0x3a4) + 4);
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  FUN_0001080a();
  return 1;
}



undefined4 FUN_0001080a(void)

{
  FUN_0001080a();
  return 1;
}



undefined4 FUN_00010858(void)

{
  int unaff_s0;
  undefined *puVar1;
  undefined unaff_s4;
  
  FUN_00010858();
  puVar1 = (undefined *)FUN_0001086c();
  *puVar1 = unaff_s4;
  puVar1[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  return 0;
}



undefined4 FUN_0001086c(void)

{
  int unaff_s0;
  undefined *puVar1;
  undefined unaff_s4;
  
  puVar1 = (undefined *)FUN_0001086c();
  *puVar1 = unaff_s4;
  puVar1[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 7065

int me_set_active_cfm_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if ((iVar1 != 1) && (iVar1 = FUN_000108a6(), iVar1 != 0)) {
    FUN_000108c4();
  }
  iVar1 = FUN_000108ce();
  if (iVar1 == 1) {
    if (_DAT_00000004 != 0) {
      FUN_000108fa();
    }
    _L0();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if ((iVar1 != 1) && (iVar1 = FUN_000108a6(), iVar1 != 0)) {
    FUN_000108c4();
  }
  iVar1 = FUN_000108ce();
  if (iVar1 == 1) {
    if (_DAT_00000004 != 0) {
      FUN_000108fa();
    }
    _L0();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000108a6(void)

{
  int iVar1;
  
  iVar1 = FUN_000108a6();
  if (iVar1 != 0) {
    FUN_000108c4();
  }
  iVar1 = FUN_000108ce();
  if (iVar1 == 1) {
    if (_DAT_00000004 != 0) {
      FUN_000108fa();
    }
    _L0();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000108c4(void)

{
  int iVar1;
  
  FUN_000108c4();
  iVar1 = FUN_000108ce();
  if (iVar1 == 1) {
    if (_DAT_00000004 != 0) {
      FUN_000108fa();
    }
    _L0();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000108ce(void)

{
  int iVar1;
  
  iVar1 = FUN_000108ce();
  if (iVar1 == 1) {
    if (_DAT_00000004 != 0) {
      FUN_000108fa();
    }
    _L0();
  }
  return 0;
}



undefined4 FUN_000108fa(void)

{
  FUN_000108fa();
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}


