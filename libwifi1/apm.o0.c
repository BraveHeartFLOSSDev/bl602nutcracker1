typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned int    uint3;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
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

typedef ulong uint32_t;

typedef ushort uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar uint8_t;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct tx_agg_desc tx_agg_desc, *Ptx_agg_desc;

typedef struct txl_buffer_tag txl_buffer_tag, *Ptxl_buffer_tag;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef char int8_t;

typedef union anon_union.conflict2e43_for_field_0 anon_union.conflict2e43_for_field_0, *Panon_union.conflict2e43_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1185_for_field_3 anon_union.conflict1185_for_field_3, *Panon_union.conflict1185_for_field_3;

typedef union anon_union.conflict11aa_for_field_4 anon_union.conflict11aa_for_field_4, *Panon_union.conflict11aa_for_field_4;

typedef union anon_union.conflict11cf_for_field_5 anon_union.conflict11cf_for_field_5, *Panon_union.conflict11cf_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: e71
    struct co_list_hdr * next;
};

union anon_union.conflict11aa_for_field_4 { // DWARF DIE: 11aa
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct mac_addr { // DWARF DIE: a4c
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 176d
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

struct tx_cfm_tag { // DWARF DIE: 15e2
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

union anon_union.conflict11cf_for_field_5 { // DWARF DIE: 11cf
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct lmacdesc { // DWARF DIE: 18d9
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

union anon_union.conflict1185_for_field_3 { // DWARF DIE: 1185
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd { // DWARF DIE: 11f4
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1185_for_field_3 field_3;
    union anon_union.conflict11aa_for_field_4 field_4;
    union anon_union.conflict11cf_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1651
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct umacdesc { // DWARF DIE: 1849
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

struct txdesc { // DWARF DIE: 19f5
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 115a
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct dma_desc { // DWARF DIE: f9f
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_policy_tbl { // DWARF DIE: 10e9
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict2e43_for_field_0 { // DWARF DIE: 2e43
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 18a5
    union anon_union.conflict2e43_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct tx_pbd { // DWARF DIE: 12bd
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_tag { // DWARF DIE: 1914
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

struct tx_agg_desc { // DWARF DIE: 1682
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

struct Cipher_t { // DWARF DIE: 392e
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct CommonMlmeData_t { // DWARF DIE: 5eee
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

struct Operation_t { // DWARF DIE: 5fd8
    UINT16 keyExchange:1;
    UINT16 authenticate:1;
    UINT16 reserved:14;
};

struct apRsnConfig_t { // DWARF DIE: 6023
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

struct BssConfig_t { // DWARF DIE: 6129
    UINT32 StaAgeOutTime;
    UINT32 PsStaAgeOutTime;
    struct apRsnConfig_t RsnConfig;
    struct CommonMlmeData_t comData;
};

struct mm_timer_tag { // DWARF DIE: 2157
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct KeyData_t { // DWARF DIE: 5277
    UINT8 Key[16];
    UINT8 RxMICKey[8];
    UINT8 TxMICKey[8];
    UINT32 TxIV32;
    UINT16 TxIV16;
    UINT16 KeyIndex;
};

struct BssData_t { // DWARF DIE: 6179
    BOOLEAN updatePassPhrase;
    struct mm_timer_tag apMicTimer;
    struct KeyData_t grpKeyData;
    UINT8 GNonce[32];
    UINT32 grpRekeyBcnCntConfigured;
    UINT32 grpRekeyBcnCntRemaining;
};

struct apInfo_t { // DWARF DIE: 6219
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

struct _txQingInfo_t { // DWARF DIE: 5fae
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

struct SecurityMode_t { // DWARF DIE: 3994
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

struct apKeyMgmtInfoStaRom_t { // DWARF DIE: 5e00
    UINT16 staRsnCap;
    struct SecurityMode_t staSecType;
    struct Cipher_t staUcstCipher;
    UINT8 staAkmType;
    enum keyMgmtState_e keyMgmtState;
    undefined field_0x7;
};

struct apKeyMgmtInfoSta_t { // DWARF DIE: 5e57
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

struct staData_t { // DWARF DIE: 61e5
    txQingInfo_t pwrSaveInfo;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    struct apKeyMgmtInfoSta_t keyMgmtInfo;
};

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

struct ps_env_tag { // DWARF DIE: 4556
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

typedef union anon_union.conflict541c_for_keyEncypt anon_union.conflict541c_for_keyEncypt, *Panon_union.conflict541c_for_keyEncypt;

typedef struct key_Type_TKIP_t key_Type_TKIP_t, *Pkey_Type_TKIP_t;

typedef struct key_Type_AES_t key_Type_AES_t, *Pkey_Type_AES_t;

typedef struct key_Type_WEP_t key_Type_WEP_t, *Pkey_Type_WEP_t;

typedef struct key_Type_WAPI_t key_Type_WAPI_t, *Pkey_Type_WAPI_t;

typedef struct key_Type_AES_CMAC_t key_Type_AES_CMAC_t, *Pkey_Type_AES_CMAC_t;

struct key_Type_AES_CMAC_t { // DWARF DIE: 53df
    UINT8 ipn[6];
    UINT8 reserved[2];
    UINT8 key[16];
};

struct key_Type_AES_t { // DWARF DIE: 5365
    UINT8 key[16];
};

struct key_Type_WEP_t { // DWARF DIE: 5318
    UINT8 keyIndex;
    UINT8 isDefaultTx;
    UINT8 key[13];
};

struct key_Type_WAPI_t { // DWARF DIE: 5388
    UINT8 keyIndex;
    UINT8 isDefKey;
    UINT8 key[16];
    UINT8 mickey[16];
    UINT8 rxPN[16];
};

struct key_Type_TKIP_t { // DWARF DIE: 52db
    UINT8 key[16];
    UINT8 txMicKey[8];
    UINT8 rxMicKey[8];
};

union anon_union.conflict541c_for_keyEncypt { // DWARF DIE: 541c
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

struct key_MgtMaterial_t { // DWARF DIE: 5462
    UINT16 keyType;
    UINT16 keyInfo;
    UINT16 keyLen;
    union anon_union.conflict541c_for_keyEncypt keyEncypt;
};

typedef union anon_union.conflict541c anon_union.conflict541c, *Panon_union.conflict541c;

union anon_union.conflict541c { // DWARF DIE: 541c
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

typedef struct apm_sta_add_ind apm_sta_add_ind, *Papm_sta_add_ind;

struct apm_sta_add_ind { // DWARF DIE: 3eeb
    uint32_t flags;
    struct mac_addr sta_addr;
    uint8_t vif_idx;
    uint8_t sta_idx;
    int8_t rssi;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    uint32_t tsflo;
    uint32_t tsfhi;
    uint8_t data_rate;
    undefined field_0x19;
    undefined field_0x1a;
    undefined field_0x1b;
};

typedef struct apm_sta_del_ind apm_sta_del_ind, *Papm_sta_del_ind;

struct apm_sta_del_ind { // DWARF DIE: 3f61
    uint8_t sta_idx;
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

typedef struct apm_start_req apm_start_req, *Papm_start_req;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

struct scan_chan_tag { // DWARF DIE: d15
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct mac_rateset { // DWARF DIE: ad1
    uint8_t length;
    uint8_t array[12];
};

struct mac_ssid { // DWARF DIE: a7c
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct apm_start_req { // DWARF DIE: 3213
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

typedef enum apm_state_tag {
    APM_BCN_SETTING=2,
    APM_BSS_PARAM_SETTING=1,
    APM_IDLE=0,
    APM_STATE_MAX=3
} apm_state_tag;

typedef struct apm_start_cfm apm_start_cfm, *Papm_start_cfm;

struct apm_start_cfm { // DWARF DIE: 3ea9
    uint8_t status;
    uint8_t vif_idx;
    uint8_t ch_idx;
    uint8_t bcmc_idx;
};

typedef struct anon_struct.conflict316c anon_struct.conflict316c, *Panon_struct.conflict316c;

struct anon_struct.conflict316c { // DWARF DIE: 316c
    uint8_t mac[6];
    uint8_t used;
};

typedef struct apm apm, *Papm;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: e97
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct apm { // DWARF DIE: 3190
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
    struct anon_struct.conflict316c aid_list[10];
    undefined field_0x5e;
    undefined field_0x5f;
};

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list { // DWARF DIE: 2ca1
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 2ce9
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 2f66
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 2f8e
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 2fe2
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

typedef union anon_union.conflict62b9_for_specDat anon_union.conflict62b9_for_specDat, *Panon_union.conflict62b9_for_specDat;

typedef struct cipher_key_buf cipher_key_buf, *Pcipher_key_buf;

typedef struct cipher_key_buf cipher_key_buf_t;

typedef struct eapolHskData_t eapolHskData_t, *PeapolHskData_t;

typedef struct apSpecificData_t apSpecificData_t, *PapSpecificData_t;

typedef struct BufferDesc BufferDesc, *PBufferDesc;

typedef struct BufferDesc BufferDesc_t;

typedef struct ChanBandInfo_t ChanBandInfo_t, *PChanBandInfo_t;

typedef union anon_union.conflict46c6_for_intf anon_union.conflict46c6_for_intf, *Panon_union.conflict46c6_for_intf;

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

struct AkmSuite_t { // DWARF DIE: 3ab9
    UINT8 akmOui[3];
    AkmTypePacked_e akmType;
};

struct MIC_Error_t { // DWARF DIE: 566f
    enum MIC_Fail_State_e status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    BOOLEAN MICCounterMeasureEnabled;
    UINT32 disableStaAsso;
};

struct SecurityParams_t { // DWARF DIE: 3af9
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
};

struct customMIB_RSNStats_t { // DWARF DIE: 56ac
    UINT8 TKIPICVErrors;
    UINT8 TKIPLocalMICFailures;
    UINT8 TKIPCounterMeasuresInvoked;
};

struct BandConfig_t { // DWARF DIE: 4f66
    enum ChanBand_e chanBand:2;
    enum ChanWidth_e chanWidth:2;
    enum Chan2Offset_e chan2Offset:2;
    enum ScanMode_e scanMode:2;
};

struct ChanBandInfo_t { // DWARF DIE: 4fc2
    struct BandConfig_t bandConfig;
    UINT8 chanNum;
};

struct apSpecificData_t { // DWARF DIE: 625d
    struct apInfo_t * apInfo;
    BufferDesc_t * apInfoBuffDesc;
    struct ChanBandInfo_t chanBandInfo;
    undefined field_0xa;
    undefined field_0xb;
    struct staData_t staData;
};

union anon_union.conflict62b9_for_specDat { // DWARF DIE: 62b9
    struct apSpecificData_t apData;
};

union anon_union.conflict46c6_for_intf { // DWARF DIE: 46c6
    uint32 Interface;
};

struct keyMgmtInfoSta_t { // DWARF DIE: 56e9
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

struct IEEEtypes_RSNCapability_t { // DWARF DIE: 4d06
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

struct RSNConfig_t { // DWARF DIE: 5581
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

struct IEEEtypes_SsIdElement_t { // DWARF DIE: 4c1e
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    IEEEtypes_SsId_t SsId;
};

struct supplicantData { // DWARF DIE: 5b44
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

struct eapolHskData_t { // DWARF DIE: 54ac
    UINT8 ANonce[32];
    struct KeyData_t pwsKeyData;
};

union ckd { // DWARF DIE: 54dc
    struct eapolHskData_t hskData;
};

struct cipher_key_t { // DWARF DIE: 54f6
    union ckd ckd;
};

struct cipher_key_buf { // DWARF DIE: 551d
    struct cipher_key_t cipher_key;
};

struct cm_ConnectionInfo { // DWARF DIE: 46e8
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
    union anon_union.conflict62b9_for_specDat specDat;
    cipher_key_buf_t TxRxCipherKeyBuf;
};

struct BufferDesc { // DWARF DIE: 47a5
    union anon_union.conflict46c6_for_intf intf;
    uint16 DataLen;
    undefined field_0x6;
    undefined field_0x7;
    void * Buffer;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 2443
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

struct bam_env_tag { // DWARF DIE: 24b6
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

struct chan_tbtt_tag { // DWARF DIE: 3f94
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct mm_chan_ctxt_add_req { // DWARF DIE: 1fa7
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 3fe3
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

struct chan_env_tag { // DWARF DIE: 4073
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

struct mblock_free { // DWARF DIE: 2c33
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 34f2
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 951
};

typedef struct cm_ConnectionInfo cm_ConnectionInfo_t;

typedef union anon_union.conflict62b9 anon_union.conflict62b9, *Panon_union.conflict62b9;

union anon_union.conflict62b9 { // DWARF DIE: 62b9
    struct apSpecificData_t apData;
};

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

struct mobility_domain { // DWARF DIE: 3bfa
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

struct me_chan_config_req { // DWARF DIE: 36f8
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: c24
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

struct me_env_tag { // DWARF DIE: 3b66
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

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct mac_edca_param_set mac_edca_param_set, *Pmac_edca_param_set;

struct mac_edca_param_set { // DWARF DIE: cdc
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_bss_info { // DWARF DIE: 3c22
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

typedef struct anon_struct.conflictb50 anon_struct.conflictb50, *Panon_struct.conflictb50;

struct anon_struct.conflictb50 { // DWARF DIE: b50
    uint32_t key[4];
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong uint64_t;

typedef union anon_union.conflictb79_for_u anon_union.conflictb79_for_u, *Panon_union.conflictb79_for_u;

typedef struct anon_struct.conflictb19 anon_struct.conflictb19, *Panon_struct.conflictb19;

struct anon_struct.conflictb19 { // DWARF DIE: b19
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

union anon_union.conflictb79_for_u { // DWARF DIE: b79
    struct anon_struct.conflictb19 mic;
    struct anon_struct.conflictb50 mfp;
};

struct key_info_tag { // DWARF DIE: b9e
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb79_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef enum anon_enum_8.conflict9d4 {
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
    PORT_CLOSED=0,
    PORT_CONTROLED=1,
    PORT_OPEN=2,
    PS_MODE_OFF=0,
    PS_MODE_ON=1,
    PS_MODE_ON_DYN=2,
    SCANU_IDLE=0,
    SCANU_SCANNING=1,
    SCANU_STATE_MAX=2,
    STA_HT_CAPA=2,
    STA_MAX=12,
    STA_MFP_CAPA=8,
    STA_OPMOD_NOTIF=16,
    STA_QOS_CAPA=1,
    STA_VHT_CAPA=4,
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
    TX_CUSTOM=4,
    TX_DEFAULT_24G=0,
    TX_DEFAULT_5G=1,
    TX_DEFAULT_NDP=3,
    TX_DEFAULT_NDPA_BRP=2,
    VIF_AP=2,
    VIF_IBSS=1,
    VIF_MESH_POINT=3,
    VIF_STA=0,
    VIF_UNKNOWN=4,
    WMM_AC_BE=0,
    WMM_AC_BK=1,
    WMM_AC_VI=2,
    WMM_AC_VO=3
} anon_enum_8.conflict9d4;

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: c87
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef union anon_union.conflictb79 anon_union.conflictb79, *Panon_union.conflictb79;

union anon_union.conflictb79 { // DWARF DIE: b79
    struct anon_struct.conflictb19 mic;
    struct anon_struct.conflictb50 mfp;
};

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: d8b
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

struct ke_msg_handler { // DWARF DIE: 1be4
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1c10
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 45f2
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

typedef struct me_set_ps_disable_req me_set_ps_disable_req, *Pme_set_ps_disable_req;

struct me_set_ps_disable_req { // DWARF DIE: 387b
    _Bool ps_disable;
    uint8_t vif_idx;
};

typedef struct me_sta_del_req me_sta_del_req, *Pme_sta_del_req;

struct me_sta_del_req { // DWARF DIE: 382b
    uint8_t sta_idx;
    _Bool tdls_sta;
};

typedef struct me_sta_add_req me_sta_add_req, *Pme_sta_add_req;

struct me_sta_add_req { // DWARF DIE: 375a
    struct mac_addr mac_addr;
    struct mac_rateset rate_set;
    undefined field_0x13;
    struct mac_htcapability ht_cap;
    struct mac_vhtcapability vht_cap;
    uint32_t flags;
    uint16_t aid;
    uint8_t uapsd_queues;
    uint8_t max_sp_len;
    uint8_t opmode;
    uint8_t vif_idx;
    _Bool tdls_sta;
    undefined field_0x4b;
    uint32_t tsflo;
    uint32_t tsfhi;
    int8_t rssi;
    uint8_t data_rate;
    undefined field_0x56;
    undefined field_0x57;
};

typedef struct me_set_active_req me_set_active_req, *Pme_set_active_req;

struct me_set_active_req { // DWARF DIE: 3853
    _Bool active;
    uint8_t vif_idx;
};

typedef enum anon_enum_16.conflict3656 {
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
} anon_enum_16.conflict3656;

typedef struct rxu_mgt_ind rxu_mgt_ind, *Prxu_mgt_ind;

struct rxu_mgt_ind { // DWARF DIE: 2adf
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

typedef long int32_t;

typedef int32_t BaseType_t;

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 2330
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 2305
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 22e8
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 21ed
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

struct rxu_cntrl_env_tag { // DWARF DIE: 2369
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

typedef struct mac_hdr mac_hdr, *Pmac_hdr;

struct mac_hdr { // DWARF DIE: eeb
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
};

typedef struct pmkElement_t pmkElement_t, *PpmkElement_t;

typedef union anon_union.conflict5bbc_for_key anon_union.conflict5bbc_for_key, *Panon_union.conflict5bbc_for_key;

typedef char SINT8;

union anon_union.conflict5bbc_for_key { // DWARF DIE: 5bbc
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

struct pmkElement_t { // DWARF DIE: 5bee
    union anon_union.conflict5bbc_for_key key;
    UINT8 PMK[32];
    UINT8 length;
    UINT8 psk_length;
    SINT8 replacementRank;
};

typedef union anon_union.conflict5bbc anon_union.conflict5bbc, *Panon_union.conflict5bbc;

union anon_union.conflict5bbc { // DWARF DIE: 5bbc
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict156_for___value anon_union.conflict156_for___value, *Panon_union.conflict156_for___value;

union anon_union.conflict156_for___value { // DWARF DIE: 156
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 188
    int __count;
    union anon_union.conflict156_for___value __value;
};

typedef union anon_union.conflict156 anon_union.conflict156, *Panon_union.conflict156;

union anon_union.conflict156 { // DWARF DIE: 156
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 1079
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: ff3
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 2198
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 141d
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

struct phy_channel_info { // DWARF DIE: 1051
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 14b2
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 1312
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

struct rx_payloaddesc { // DWARF DIE: 1585
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 1515
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef uchar uint8;

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

typedef struct mm_set_bssid_req mm_set_bssid_req, *Pmm_set_bssid_req;

struct mm_set_bssid_req { // DWARF DIE: 1f43
    struct mac_addr bssid;
    uint8_t inst_nbr;
};

typedef struct mm_bcn_change_req mm_bcn_change_req, *Pmm_bcn_change_req;

struct mm_bcn_change_req { // DWARF DIE: 200a
    uint32_t bcn_ptr;
    uint16_t bcn_len;
    uint16_t tim_oft;
    uint8_t tim_len;
    uint8_t inst_nbr;
    uint8_t csa_oft[2];
    uint8_t[0] bcn_buf;
};

typedef struct mm_set_basic_rates_req mm_set_basic_rates_req, *Pmm_set_basic_rates_req;

struct mm_set_basic_rates_req { // DWARF DIE: 1f0a
    uint32_t rates;
    uint8_t inst_nbr;
    uint8_t band;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_tim_update_req mm_tim_update_req, *Pmm_tim_update_req;

struct mm_tim_update_req { // DWARF DIE: 207b
    uint16_t aid;
    uint8_t tx_avail;
    uint8_t inst_nbr;
};

typedef struct mm_set_vif_state_req mm_set_vif_state_req, *Pmm_set_vif_state_req;

struct mm_set_vif_state_req { // DWARF DIE: 1f6e
    uint16_t aid;
    _Bool active;
    uint8_t inst_nbr;
};

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct mm_set_beacon_int_req mm_set_beacon_int_req, *Pmm_set_beacon_int_req;

struct mm_set_beacon_int_req { // DWARF DIE: 1edf
    uint16_t beacon_int;
    uint8_t inst_nbr;
    undefined field_0x3;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 10b1
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 2be4
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef struct co_read16_struct co_read16_struct, *Pco_read16_struct;

struct co_read16_struct { // DWARF DIE: 814c
    uint16_t val;
};

typedef union anon_union.conflict46c6 anon_union.conflict46c6, *Panon_union.conflict46c6;

union anon_union.conflict46c6 { // DWARF DIE: 46c6
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

struct Hdr_8021x_t { // DWARF DIE: 5082
    UINT8 protocol_ver;
    enum IEEEtypes_8021x_PacketType_e pckt_type;
    UINT16 pckt_body_len;
};

typedef struct EAPOL_KeyMsg_t EAPOL_KeyMsg_t, *PEAPOL_KeyMsg_t;

typedef struct key_info_t key_info_t, *Pkey_info_t;

struct key_info_t { // DWARF DIE: 50bf
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

struct EAPOL_KeyMsg_t { // DWARF DIE: 5185
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

struct ether_hdr_t { // DWARF DIE: 4ffc
    IEEEtypes_MacAddr_t da;
    IEEEtypes_MacAddr_t sa;
    UINT16 type;
};

struct EAPOL_KeyMsg_Tx_t { // DWARF DIE: 5247
    struct ether_hdr_t ethHdr;
    struct EAPOL_KeyMsg_t keyMsg;
};

typedef uint16_t ke_state_t;

typedef struct ke_msg ke_msg, *Pke_msg;

struct ke_msg { // DWARF DIE: 1ad0
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t[0] param;
};

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict4358_for_u anon_union.conflict4358_for_u, *Panon_union.conflict4358_for_u;

typedef struct anon_struct.conflict4190 anon_struct.conflict4190, *Panon_struct.conflict4190;

typedef struct anon_struct.conflict425d anon_struct.conflict425d, *Panon_struct.conflict425d;

struct anon_struct.conflict4190 { // DWARF DIE: 4190
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

struct anon_struct.conflict425d { // DWARF DIE: 425d
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

union anon_union.conflict4358_for_u { // DWARF DIE: 4358
    struct anon_struct.conflict4190 sta;
    struct anon_struct.conflict425d ap;
};

struct vif_info_tag { // DWARF DIE: 437b
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
    union anon_union.conflict4358_for_u u;
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

struct vif_mgmt_env_tag { // DWARF DIE: 44b6
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef union anon_union.conflict4358 anon_union.conflict4358, *Panon_union.conflict4358;

union anon_union.conflict4358 { // DWARF DIE: 4358
    struct anon_struct.conflict4190 sta;
    struct anon_struct.conflict425d ap;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 33f0
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 33a9
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 2860
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

typedef union anon_union.conflict3611_for_rate_map anon_union.conflict3611_for_rate_map, *Panon_union.conflict3611_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 3574
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step { // DWARF DIE: 35ea
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

union anon_union.conflict3611_for_rate_map { // DWARF DIE: 3611
    uint8_t ht[4];
};

struct rc_sta_stats { // DWARF DIE: 26fa
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
    union anon_union.conflict3611_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 26ab
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2670
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 28af
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

struct sta_info_env_tag { // DWARF DIE: 2a98
    struct co_list free_sta_list;
};

typedef enum sta_mgmt_pol_upd {
    STA_MGMT_POL_UPD_BW=3,
    STA_MGMT_POL_UPD_MAX=5,
    STA_MGMT_POL_UPD_PPDU_TX=2,
    STA_MGMT_POL_UPD_PROT=1,
    STA_MGMT_POL_UPD_RATE=0,
    STA_MGMT_POL_UPD_TX_POWER=4
} sta_mgmt_pol_upd;

typedef enum sta_ps_sp {
    ANY_SERVICE_PERIOD_INT=3,
    BCN_SERVICE_PERIOD=8,
    NO_SERVICE_PERIOD=0,
    PS_SERVICE_PERIOD=1,
    UAPSD_SERVICE_PERIOD=6,
    UAPSD_SERVICE_PERIOD_HOST=4,
    UAPSD_SERVICE_PERIOD_INT=2
} sta_ps_sp;

typedef union anon_union.conflict3611 anon_union.conflict3611, *Panon_union.conflict3611;

union anon_union.conflict3611 { // DWARF DIE: 3611
    uint8_t ht[4];
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 3496
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 3451
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 2d92
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef union anon_union.conflict2e43 anon_union.conflict2e43, *Panon_union.conflict2e43;

union anon_union.conflict2e43 { // DWARF DIE: 2e43
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 2d6a
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 2dba
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

struct txl_buffer_env_tag { // DWARF DIE: 2e65
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict1185 anon_union.conflict1185, *Panon_union.conflict1185;

union anon_union.conflict1185 { // DWARF DIE: 1185
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict11cf anon_union.conflict11cf, *Panon_union.conflict11cf;

union anon_union.conflict11cf { // DWARF DIE: 11cf
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict11aa anon_union.conflict11aa, *Panon_union.conflict11aa;

union anon_union.conflict11aa { // DWARF DIE: 11aa
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict91c_for__new anon_union.conflict91c_for__new, *Panon_union.conflict91c_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict790 anon_struct.conflict790, *Panon_struct.conflict790;

typedef struct anon_struct.conflict8d5 anon_struct.conflict8d5, *Panon_struct.conflict8d5;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 1dc
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 747
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 702
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 2cf
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 324
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 384
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 3b2
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

struct __tm { // DWARF DIE: 24c
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

struct anon_struct.conflict790 { // DWARF DIE: 790
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

struct anon_struct.conflict8d5 { // DWARF DIE: 8d5
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict91c_for__new { // DWARF DIE: 91c
    struct anon_struct.conflict790 _reent;
    struct anon_struct.conflict8d5 _unused;
};

struct _reent { // DWARF DIE: 51e
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
    union anon_union.conflict91c_for__new _new;
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

typedef union anon_union.conflict91c anon_union.conflict91c, *Panon_union.conflict91c;

union anon_union.conflict91c { // DWARF DIE: 91c
    struct anon_struct.conflict790 _reent;
    struct anon_struct.conflict8d5 _unused;
};

typedef struct IEEEtypes_WPAElement_t IEEEtypes_WPAElement_t, *PIEEEtypes_WPAElement_t;

struct IEEEtypes_WPAElement_t { // DWARF DIE: 4c70
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

struct IEEEtypes_RSNElement_t { // DWARF DIE: 4dea
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




// DWARF DIE: 7551

int _aid_list_delete(uint8_t *mac)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  while ((*(char *)(iVar3 + 0x1e) == '\0' || (iVar2 = FUN_00010034(iVar3 + 0x18,6), iVar2 != 0))) {
    iVar1 += 1;
    iVar3 += 7;
    if (iVar1 == 10) {
      return -1;
    }
  }
  FUN_00010046();
  *(undefined *)(iVar1 * 7 + 0x1e) = 0;
  return 0;
}



undefined4 FUN_00010034(int param_1,undefined4 param_2)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s5;
  
  do {
    iVar1 = FUN_00010034(param_1,param_2);
    if (iVar1 == 0) {
      FUN_00010046();
      *(undefined *)(unaff_s0 * 7 + unaff_s1 + 0x1e) = 0;
      return 0;
    }
    do {
      iVar1 = unaff_s2;
      unaff_s0 += 1;
      unaff_s2 = iVar1 + 7;
      if (unaff_s0 == unaff_s5) {
        return 0xffffffff;
      }
    } while (*(char *)(iVar1 + 0x25) == '\0');
    param_1 = iVar1 + 0x1f;
    param_2 = 6;
  } while( true );
}



void FUN_00010046(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00010046();
  *(undefined *)(unaff_s0 * 7 + unaff_s1 + 0x1e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 740c

void apm_sta_delete(uint8_t sta_idx,uint8_t *mac)

{
  uint8_t *puVar1;
  uint8_t *puVar2;
  
  puVar1 = (uint8_t *)0x1409;
  _L0(_DAT_00000014);
  puVar2 = (uint8_t *)0x1c09;
  FUN_000100ae(_DAT_00000014);
  _LVL15(_DAT_00000014);
  FUN_000100ca(_DAT_00000014);
  _DAT_00000014 = _DAT_00000014 & 0xffff | (uint3)(byte)(DAT_00000016 - 1) << 0x10;
  *puVar2 = sta_idx;
  _L0();
  *puVar1 = sta_idx;
  puVar1[1] = '\0';
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(uint3 param_1)

{
  undefined unaff_s1;
  undefined *in_a0;
  undefined *puVar1;
  
  _L0(param_1);
  puVar1 = (undefined *)0x1c09;
  FUN_000100ae(param_1);
  _LVL15(param_1);
  FUN_000100ca(param_1);
  param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ - 1) << 0x10;
  *puVar1 = unaff_s1;
  _L0();
  *in_a0 = unaff_s1;
  in_a0[1] = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100ae(uint3 uRam00000014)

{
  undefined *unaff_s0;
  undefined unaff_s1;
  undefined *in_a0;
  
  FUN_000100ae(uRam00000014);
  _LVL15(uRam00000014);
  FUN_000100ca(uRam00000014);
  uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ - 1) << 0x10;
  *in_a0 = unaff_s1;
  _L0();
  *unaff_s0 = unaff_s1;
  unaff_s0[1] = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL15(uint3 param_1)

{
  undefined *unaff_s0;
  undefined unaff_s1;
  undefined *unaff_s2;
  
  _LVL15(param_1);
  FUN_000100ca(param_1);
  param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ - 1) << 0x10;
  *unaff_s2 = unaff_s1;
  _L0();
  *unaff_s0 = unaff_s1;
  unaff_s0[1] = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100ca(uint3 param_1)

{
  undefined *unaff_s0;
  undefined unaff_s1;
  undefined *unaff_s2;
  
  FUN_000100ca(param_1);
  param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ - 1) << 0x10;
  *unaff_s2 = unaff_s1;
  _L0();
  *unaff_s0 = unaff_s1;
  unaff_s0[1] = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined *unaff_s0;
  undefined unaff_s1;
  
  _L0();
  *unaff_s0 = unaff_s1;
  unaff_s0[1] = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 822a

void apm_tx_cfm_handler(void *env,uint32_t status)

{
  if (-1 < (int)(status << 8)) {
    _L0(_DAT_00000014);
    FUN_00010152(_DAT_00000014);
    FUN_00010168(_DAT_00000014);
    _DAT_00000014 = _DAT_00000014 & 0xffff | (uint3)(byte)(DAT_00000016 - 1) << 0x10;
    return;
  }
  if (*(short *)((int)env + 0x44) == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(uint3 uRam00000014)

{
  _L0(uRam00000014);
  FUN_00010152(uRam00000014);
  FUN_00010168(uRam00000014);
  uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ - 1) << 0x10;
  return;
}



void FUN_00010152(uint3 param_1)

{
  FUN_00010152(param_1);
  FUN_00010168(param_1);
  param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ - 1) << 0x10;
  return;
}



void FUN_00010168(uint3 param_1)

{
  FUN_00010168(param_1);
  param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ - 1) << 0x10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 7fa6

void apm_init(void)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(undefined *)(unaff_s0 + 0xc) = 0;
  *(undefined2 *)(unaff_s0 + 0x16) = 0xc00;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 7e2b

void apm_start_cfm(uint8_t status)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined3 in_register_00002029;
  uint8_t *extraout_a0;
  int extraout_a0_00;
  int iVar4;
  
  iVar3 = iRam00000000;
  _L0();
  if (CONCAT31(in_register_00002029,status) == 0) {
    bVar1 = *(byte *)(iVar3 + 0x33);
    _LVL42();
    iVar4 = (uint)bVar1 * 0x5d8;
    *(undefined *)(extraout_a0_00 + 2) = 1;
    *(undefined *)(extraout_a0_00 + 3) = *(undefined *)(iVar4 + 0x57);
    _L0();
    *(undefined4 *)(iVar4 + 0x5c4) = *(undefined4 *)(iVar3 + 0x2c);
    uVar2 = *(undefined2 *)(iVar3 + 0x30);
    *(undefined *)(iVar4 + 0x34a) = 0;
    *(undefined2 *)(iVar4 + 0x34c) = uVar2;
    extraout_a0[2] = *(uint8_t *)(*(int *)(iVar4 + 0x40) + 0x17);
    extraout_a0[3] = *(char *)(iVar3 + 0x33) + '\n';
    iVar4 = (bVar1 + 10) * 0x1b0;
    FUN_0001028a();
    *(undefined *)(iVar4 + 0x31) = 2;
    FUN_0001029a();
    *(undefined2 *)(iVar4 + 0x1e) = 1;
    *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 0x10;
    *(char *)(iVar4 + 0x1b) = *(char *)(iVar3 + 0x33) + '\n';
  }
  *extraout_a0 = status;
  extraout_a0[1] = *(uint8_t *)(iVar3 + 0x33);
  FUN_000102d8();
  FUN_000102e2();
  FUN_000102ee();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  byte bVar1;
  undefined2 uVar2;
  undefined *extraout_a0;
  int extraout_a0_00;
  int unaff_s2;
  undefined4 *unaff_s4;
  int iVar3;
  int unaff_s6;
  
  _L0();
  if (unaff_s6 == 0) {
    bVar1 = *(byte *)(unaff_s2 + 0x33);
    _LVL42();
    iVar3 = (uint)bVar1 * 0x5d8;
    *(undefined *)(extraout_a0_00 + 2) = 1;
    *(undefined *)(extraout_a0_00 + 3) = *(undefined *)(iVar3 + 0x57);
    _L0();
    *(undefined4 *)(iVar3 + 0x5c4) = *(undefined4 *)(unaff_s2 + 0x2c);
    uVar2 = *(undefined2 *)(unaff_s2 + 0x30);
    *(undefined *)(iVar3 + 0x34a) = 0;
    *(undefined2 *)(iVar3 + 0x34c) = uVar2;
    extraout_a0[2] = *(undefined *)(*(int *)(iVar3 + 0x40) + 0x17);
    extraout_a0[3] = *(char *)(unaff_s2 + 0x33) + '\n';
    iVar3 = (bVar1 + 10) * 0x1b0;
    FUN_0001028a();
    *(undefined *)(iVar3 + 0x31) = 2;
    FUN_0001029a();
    *(undefined2 *)(iVar3 + 0x1e) = 1;
    *(byte *)(iVar3 + 0x11a) = *(byte *)(iVar3 + 0x11a) | 0x10;
    *(char *)(iVar3 + 0x1b) = *(char *)(unaff_s2 + 0x33) + '\n';
  }
  *extraout_a0 = (char)unaff_s6;
  extraout_a0[1] = *(undefined *)(unaff_s2 + 0x33);
  FUN_000102d8();
  FUN_000102e2();
  FUN_000102ee();
  *unaff_s4 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL42(void)

{
  undefined2 uVar1;
  int extraout_a0;
  int unaff_s2;
  undefined *unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  int iVar2;
  undefined unaff_s6;
  
  _LVL42();
  iVar2 = unaff_s5 * 0x5d8;
  *(undefined *)(extraout_a0 + 2) = 1;
  *(undefined *)(extraout_a0 + 3) = *(undefined *)(iVar2 + 0x57);
  _L0();
  *(undefined4 *)(iVar2 + 0x5c4) = *(undefined4 *)(unaff_s2 + 0x2c);
  uVar1 = *(undefined2 *)(unaff_s2 + 0x30);
  *(undefined *)(iVar2 + 0x34a) = 0;
  *(undefined2 *)(iVar2 + 0x34c) = uVar1;
  unaff_s3[2] = *(undefined *)(*(int *)(iVar2 + 0x40) + 0x17);
  unaff_s3[3] = *(char *)(unaff_s2 + 0x33) + '\n';
  iVar2 = (unaff_s5 + 10) * 0x1b0;
  FUN_0001028a();
  *(undefined *)(iVar2 + 0x31) = 2;
  FUN_0001029a();
  *(undefined2 *)(iVar2 + 0x1e) = 1;
  *(byte *)(iVar2 + 0x11a) = *(byte *)(iVar2 + 0x11a) | 0x10;
  *(char *)(iVar2 + 0x1b) = *(char *)(unaff_s2 + 0x33) + '\n';
  *unaff_s3 = unaff_s6;
  unaff_s3[1] = *(undefined *)(unaff_s2 + 0x33);
  FUN_000102d8();
  FUN_000102e2();
  FUN_000102ee();
  *unaff_s4 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 uVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s1;
  int unaff_s2;
  undefined *unaff_s3;
  undefined4 *unaff_s4;
  undefined unaff_s6;
  int unaff_s7;
  undefined2 unaff_s8;
  
  _L0();
  *(undefined4 *)(unaff_s1 + 0x5c4) = *(undefined4 *)(unaff_s2 + 0x2c);
  uVar1 = *(undefined2 *)(unaff_s2 + 0x30);
  *(undefined *)(unaff_s1 + 0x34a) = 0;
  *(undefined2 *)(unaff_s1 + 0x34c) = uVar1;
  unaff_s3[2] = *(undefined *)(*(int *)(unaff_s1 + 0x40) + 0x17);
  unaff_s3[3] = *(char *)(unaff_s2 + 0x33) + '\n';
  iVar2 = unaff_s0 + unaff_s7 * 0x1b0;
  FUN_0001028a();
  *(undefined *)(iVar2 + 0x31) = 2;
  FUN_0001029a();
  *(undefined2 *)(iVar2 + 0x1e) = unaff_s8;
  *(byte *)(iVar2 + 0x11a) = *(byte *)(iVar2 + 0x11a) | 0x10;
  *(char *)(iVar2 + 0x1b) = *(char *)(unaff_s2 + 0x33) + '\n';
  *unaff_s3 = unaff_s6;
  unaff_s3[1] = *(undefined *)(unaff_s2 + 0x33);
  FUN_000102d8();
  FUN_000102e2();
  FUN_000102ee();
  *unaff_s4 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001028a(void)

{
  int unaff_s0;
  int unaff_s2;
  undefined *unaff_s3;
  undefined4 *unaff_s4;
  undefined unaff_s6;
  undefined2 unaff_s8;
  
  FUN_0001028a();
  *(undefined *)(unaff_s0 + 0x31) = 2;
  FUN_0001029a();
  *(undefined2 *)(unaff_s0 + 0x1e) = unaff_s8;
  *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x10;
  *(char *)(unaff_s0 + 0x1b) = *(char *)(unaff_s2 + 0x33) + '\n';
  *unaff_s3 = unaff_s6;
  unaff_s3[1] = *(undefined *)(unaff_s2 + 0x33);
  FUN_000102d8();
  FUN_000102e2();
  FUN_000102ee();
  *unaff_s4 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001029a(void)

{
  int unaff_s0;
  int unaff_s2;
  undefined *unaff_s3;
  undefined4 *unaff_s4;
  undefined unaff_s6;
  undefined2 unaff_s8;
  
  FUN_0001029a();
  *(undefined2 *)(unaff_s0 + 0x1e) = unaff_s8;
  *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x10;
  *(char *)(unaff_s0 + 0x1b) = *(char *)(unaff_s2 + 0x33) + '\n';
  *unaff_s3 = unaff_s6;
  unaff_s3[1] = *(undefined *)(unaff_s2 + 0x33);
  FUN_000102d8();
  FUN_000102e2();
  FUN_000102ee();
  *unaff_s4 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102d8(void)

{
  undefined4 *unaff_s4;
  
  FUN_000102d8();
  FUN_000102e2();
  FUN_000102ee();
  *unaff_s4 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102e2(void)

{
  undefined4 *unaff_s4;
  
  FUN_000102e2();
  FUN_000102ee();
  *unaff_s4 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102ee(void)

{
  undefined4 *unaff_s4;
  
  FUN_000102ee();
  *unaff_s4 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 7aad

void apm_send_next_bss_param(void)

{
  int extraout_a0;
  
  _L0();
  if (extraout_a0 == 0) {
    FUN_0001034a();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int extraout_a0;
  
  _L0();
  if (extraout_a0 == 0) {
    FUN_0001034a();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001034a(void)

{
  FUN_0001034a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 7b3a

void apm_set_bss_param(void)

{
  byte bVar1;
  int iVar2;
  undefined *extraout_a0;
  int extraout_a0_00;
  undefined4 *extraout_a0_01;
  undefined2 *extraout_a0_02;
  undefined *extraout_a0_03;
  undefined4 extraout_a0_04;
  
  iVar2 = iRam00000000;
  bVar1 = *(byte *)(iRam00000000 + 0x33);
  _L0();
  _LVL65();
  _LVL68();
  _LVL71();
  _LVL74();
  *extraout_a0 = 1;
  extraout_a0[1] = *(undefined *)((uint)bVar1 * 0x5d8 + 0x57);
  _LVL80();
  FUN_00010422();
  *(undefined *)(extraout_a0_00 + 6) = *(undefined *)(iVar2 + 0x33);
  _L0();
  *(undefined *)((int)extraout_a0_01 + 5) = *(undefined *)(iVar2 + 0x10);
  _L0();
  *extraout_a0_01 = extraout_a0_04;
  *(undefined *)(extraout_a0_01 + 1) = *(undefined *)(iVar2 + 0x33);
  _L0();
  *extraout_a0_02 = *(undefined2 *)(iVar2 + 0x28);
  *(undefined *)(extraout_a0_02 + 1) = *(undefined *)(iVar2 + 0x33);
  _L0();
  *extraout_a0_03 = 1;
  extraout_a0_03[1] = *(undefined *)(iVar2 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined *extraout_a0;
  int extraout_a0_00;
  undefined4 *extraout_a0_01;
  undefined2 *extraout_a0_02;
  undefined *extraout_a0_03;
  undefined4 extraout_a0_04;
  int unaff_s7;
  
  _L0();
  _LVL65();
  _LVL68();
  _LVL71();
  _LVL74();
  *extraout_a0 = 1;
  extraout_a0[1] = *(undefined *)(unaff_s7 * 0x5d8 + 0x57);
  _LVL80();
  FUN_00010422();
  *(undefined *)(extraout_a0_00 + 6) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *(undefined *)((int)extraout_a0_01 + 5) = *(undefined *)(unaff_s0 + 0x10);
  _L0();
  *extraout_a0_01 = extraout_a0_04;
  *(undefined *)(extraout_a0_01 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *extraout_a0_02 = *(undefined2 *)(unaff_s0 + 0x28);
  *(undefined *)(extraout_a0_02 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *extraout_a0_03 = 1;
  extraout_a0_03[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL65(void)

{
  int unaff_s0;
  int extraout_a0;
  undefined4 *extraout_a0_00;
  undefined2 *extraout_a0_01;
  undefined *extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined *unaff_s2;
  int unaff_s7;
  
  _LVL65();
  _LVL68();
  _LVL71();
  _LVL74();
  *unaff_s2 = 1;
  unaff_s2[1] = *(undefined *)(unaff_s7 * 0x5d8 + 0x57);
  _LVL80();
  FUN_00010422();
  *(undefined *)(extraout_a0 + 6) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *(undefined *)((int)extraout_a0_00 + 5) = *(undefined *)(unaff_s0 + 0x10);
  _L0();
  *extraout_a0_00 = extraout_a0_03;
  *(undefined *)(extraout_a0_00 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *extraout_a0_01 = *(undefined2 *)(unaff_s0 + 0x28);
  *(undefined *)(extraout_a0_01 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *extraout_a0_02 = 1;
  extraout_a0_02[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL68(void)

{
  int unaff_s0;
  undefined4 *extraout_a0;
  undefined2 *extraout_a0_00;
  undefined *extraout_a0_01;
  undefined4 extraout_a0_02;
  undefined *unaff_s2;
  int unaff_s6;
  int unaff_s7;
  
  _LVL68();
  _LVL71();
  _LVL74();
  *unaff_s2 = 1;
  unaff_s2[1] = *(undefined *)(unaff_s7 * 0x5d8 + 0x57);
  _LVL80();
  FUN_00010422();
  *(undefined *)(unaff_s6 + 6) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *(undefined *)((int)extraout_a0 + 5) = *(undefined *)(unaff_s0 + 0x10);
  _L0();
  *extraout_a0 = extraout_a0_02;
  *(undefined *)(extraout_a0 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *extraout_a0_00 = *(undefined2 *)(unaff_s0 + 0x28);
  *(undefined *)(extraout_a0_00 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *extraout_a0_01 = 1;
  extraout_a0_01[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL71(void)

{
  int unaff_s0;
  undefined2 *extraout_a0;
  undefined *extraout_a0_00;
  undefined4 extraout_a0_01;
  undefined *unaff_s2;
  undefined4 *unaff_s3;
  int unaff_s6;
  int unaff_s7;
  
  _LVL71();
  _LVL74();
  *unaff_s2 = 1;
  unaff_s2[1] = *(undefined *)(unaff_s7 * 0x5d8 + 0x57);
  _LVL80();
  FUN_00010422();
  *(undefined *)(unaff_s6 + 6) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *(undefined *)((int)unaff_s3 + 5) = *(undefined *)(unaff_s0 + 0x10);
  _L0();
  *unaff_s3 = extraout_a0_01;
  *(undefined *)(unaff_s3 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *extraout_a0 = *(undefined2 *)(unaff_s0 + 0x28);
  *(undefined *)(extraout_a0 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *extraout_a0_00 = 1;
  extraout_a0_00[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL74(void)

{
  int unaff_s0;
  undefined *extraout_a0;
  undefined4 extraout_a0_00;
  undefined *unaff_s2;
  undefined4 *unaff_s3;
  undefined2 *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  
  _LVL74();
  *unaff_s2 = 1;
  unaff_s2[1] = *(undefined *)(unaff_s7 * 0x5d8 + 0x57);
  _LVL80();
  FUN_00010422();
  *(undefined *)(unaff_s6 + 6) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *(undefined *)((int)unaff_s3 + 5) = *(undefined *)(unaff_s0 + 0x10);
  _L0();
  *unaff_s3 = extraout_a0_00;
  *(undefined *)(unaff_s3 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *unaff_s5 = *(undefined2 *)(unaff_s0 + 0x28);
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *extraout_a0 = 1;
  extraout_a0[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL80(void)

{
  int unaff_s0;
  undefined4 extraout_a0;
  undefined4 *unaff_s3;
  undefined *unaff_s4;
  undefined2 *unaff_s5;
  int unaff_s6;
  undefined unaff_s8;
  
  _LVL80();
  FUN_00010422();
  *(undefined *)(unaff_s6 + 6) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *(undefined *)((int)unaff_s3 + 5) = *(undefined *)(unaff_s0 + 0x10);
  _L0();
  *unaff_s3 = extraout_a0;
  *(undefined *)(unaff_s3 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *unaff_s5 = *(undefined2 *)(unaff_s0 + 0x28);
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *unaff_s4 = unaff_s8;
  unaff_s4[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010422(void)

{
  int unaff_s0;
  undefined4 extraout_a0;
  undefined4 *unaff_s3;
  undefined *unaff_s4;
  undefined2 *unaff_s5;
  int unaff_s6;
  undefined unaff_s8;
  
  FUN_00010422();
  *(undefined *)(unaff_s6 + 6) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *(undefined *)((int)unaff_s3 + 5) = *(undefined *)(unaff_s0 + 0x10);
  _L0();
  *unaff_s3 = extraout_a0;
  *(undefined *)(unaff_s3 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *unaff_s5 = *(undefined2 *)(unaff_s0 + 0x28);
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *unaff_s4 = unaff_s8;
  unaff_s4[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined4 extraout_a0;
  undefined4 *unaff_s3;
  undefined *unaff_s4;
  undefined2 *unaff_s5;
  undefined unaff_s8;
  
  _L0();
  *(undefined *)((int)unaff_s3 + 5) = *(undefined *)(unaff_s0 + 0x10);
  _L0();
  *unaff_s3 = extraout_a0;
  *(undefined *)(unaff_s3 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *unaff_s5 = *(undefined2 *)(unaff_s0 + 0x28);
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *unaff_s4 = unaff_s8;
  unaff_s4[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined4 extraout_a0;
  undefined4 *unaff_s3;
  undefined *unaff_s4;
  undefined2 *unaff_s5;
  undefined unaff_s8;
  
  _L0();
  *unaff_s3 = extraout_a0;
  *(undefined *)(unaff_s3 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *unaff_s5 = *(undefined2 *)(unaff_s0 + 0x28);
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *unaff_s4 = unaff_s8;
  unaff_s4[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined *unaff_s4;
  undefined2 *unaff_s5;
  undefined unaff_s8;
  
  _L0();
  *unaff_s5 = *(undefined2 *)(unaff_s0 + 0x28);
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  *unaff_s4 = unaff_s8;
  unaff_s4[1] = *(undefined *)(unaff_s0 + 0x33);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined *unaff_s4;
  undefined unaff_s8;
  
  _L0();
  *unaff_s4 = unaff_s8;
  unaff_s4[1] = *(undefined *)(unaff_s0 + 0x33);
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



// DWARF DIE: 78c0

void apm_stop(vif_info_tag *vif)

{
  undefined *extraout_a0;
  undefined *extraout_a0_00;
  int extraout_a0_01;
  
  _L0();
  _LVL103();
  FUN_00010516();
  *extraout_a0 = 0;
  extraout_a0[1] = vif->index;
  _L0();
  if (vif->active != false) {
    FUN_00010542();
    *(undefined *)(extraout_a0_01 + 2) = 0;
    *(uint8_t *)(extraout_a0_01 + 3) = vif->index;
    _L0();
  }
  if (vif->chan_ctxt != (chan_ctxt_tag *)0x0) {
    FUN_00010566();
  }
  *extraout_a0_00 = 0;
  extraout_a0_00[1] = vif->index;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined *extraout_a0;
  undefined *extraout_a0_00;
  int extraout_a0_01;
  
  _L0();
  _LVL103();
  FUN_00010516();
  *extraout_a0 = 0;
  extraout_a0[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  if (*(char *)(unaff_s0 + 0x58) != '\0') {
    FUN_00010542();
    *(undefined *)(extraout_a0_01 + 2) = 0;
    *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(unaff_s0 + 0x57);
    _L0();
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_00010566();
  }
  *extraout_a0_00 = 0;
  extraout_a0_00[1] = *(undefined *)(unaff_s0 + 0x57);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL103(void)

{
  int unaff_s0;
  undefined *extraout_a0;
  int extraout_a0_00;
  undefined *unaff_s2;
  
  _LVL103();
  FUN_00010516();
  *unaff_s2 = 0;
  unaff_s2[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  if (*(char *)(unaff_s0 + 0x58) != '\0') {
    FUN_00010542();
    *(undefined *)(extraout_a0_00 + 2) = 0;
    *(undefined *)(extraout_a0_00 + 3) = *(undefined *)(unaff_s0 + 0x57);
    _L0();
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_00010566();
  }
  *extraout_a0 = 0;
  extraout_a0[1] = *(undefined *)(unaff_s0 + 0x57);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010516(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  int extraout_a0;
  undefined *unaff_s2;
  
  FUN_00010516();
  *unaff_s2 = 0;
  unaff_s2[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  if (*(char *)(unaff_s0 + 0x58) != '\0') {
    FUN_00010542();
    *(undefined *)(extraout_a0 + 2) = 0;
    *(undefined *)(extraout_a0 + 3) = *(undefined *)(unaff_s0 + 0x57);
    _L0();
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_00010566();
  }
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  int extraout_a0;
  
  _L0();
  if (*(char *)(unaff_s0 + 0x58) != '\0') {
    FUN_00010542();
    *(undefined *)(extraout_a0 + 2) = 0;
    *(undefined *)(extraout_a0 + 3) = *(undefined *)(unaff_s0 + 0x57);
    _L0();
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_00010566();
  }
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010542(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  int extraout_a0;
  
  FUN_00010542();
  *(undefined *)(extraout_a0 + 2) = 0;
  *(undefined *)(extraout_a0 + 3) = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_00010566();
  }
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  
  _L0();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_00010566();
  }
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010566(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  
  FUN_00010566();
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 7886

_Bool apm_tx_int_ps_check(txdesc *txdesc)

{
  uint uVar1;
  int iVar2;
  _Bool _Var3;
  
  if (*(char *)((uint)(txdesc->host).vif_idx * 0x5d8 + 0x56) == '\x02') {
    uVar1 = (uint)(txdesc->host).staid;
    _Var3 = true;
    if (((uVar1 < 0xc) && (iVar2 = uVar1 * 0x1b0, *(char *)(iVar2 + 0x1c) == '\x01')) &&
       ((*(uint *)(iVar2 + 0x34) & 3) == 0)) {
      (txdesc->host).flags = (txdesc->host).flags | 0x1000;
      _Var3 = false;
    }
  }
  else {
    _Var3 = true;
  }
  return _Var3;
}



// DWARF DIE: 77f2

void apm_tx_int_ps_postpone(txdesc *txdesc,sta_info_tag *sta)

{
  byte bVar1;
  sta_ps_traffic sVar2;
  sta_ps_traffic sVar3;
  uint16_t *extraout_a0;
  
  if ((int)((uint)(txdesc->host).flags << 0x13) < 0) {
    bVar1 = (sta->info).uapsd_queues;
    sVar2 = sta->traffic_avail;
    if ((*(byte *)(uint)(txdesc->host).tid & bVar1) == 0) {
      if ((sVar2 & PS_TRAFFIC_INT) != 0) {
        return;
      }
      sVar3 = PS_TRAFFIC_INT;
    }
    else {
      sVar3 = UAPSD_TRAFFIC_INT;
      if ((sVar2 & UAPSD_TRAFFIC_INT) != 0) {
        return;
      }
    }
    sta->traffic_avail = sVar2 | sVar3;
    if (((*(byte *)(uint)(txdesc->host).tid & bVar1) == 0) || (bVar1 == 0xf)) {
      _L0();
      *extraout_a0 = sta->aid;
      *(uint8_t *)((int)extraout_a0 + 3) = sta->inst_nbr;
      *(undefined *)(extraout_a0 + 1) = 1;
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined2 *extraout_a0;
  
  _L0();
  *extraout_a0 = *(undefined2 *)(unaff_s0 + 0x18);
  *(undefined *)((int)extraout_a0 + 3) = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)(extraout_a0 + 1) = 1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 7676

txdesc * apm_tx_int_ps_get_postpone(vif_info_tag *vif,sta_info_tag *sta,int *stop)

{
  uint8_t uVar1;
  ushort uVar2;
  txdesc *ptVar3;
  txdesc *ptVar4;
  uint16_t *extraout_a0;
  txl_buffer_tag *ptVar5;
  uint uVar6;
  co_list_hdr cVar7;
  sta_ps_traffic sVar8;
  sta_ps_traffic sVar9;
  txdesc *ptVar10;
  
  sVar8 = vif->type;
  if ((sVar8 == PS_TRAFFIC_INT) && (uVar6 = sta->ps_service_period, uVar6 != 0)) {
    sVar9 = PS_TRAFFIC_HOST;
    if ((uVar6 & 1) == 0) {
      sVar9 = UAPSD_TRAFFIC_HOST;
      sVar8 = UAPSD_TRAFFIC_INT;
    }
    if ((sVar8 & sta->traffic_avail) != 0) {
      ptVar3 = (txdesc *)(sta->tx_desc_post).first;
      ptVar10 = (txdesc *)0x0;
      while( true ) {
        ptVar4 = ptVar3;
        if (ptVar4 == (txdesc *)0x0) {
          FUN_00010710();
          *stop = 1;
          return (txdesc *)0x0;
        }
        if (((*(byte *)(uint)*(byte *)((int)&ptVar4->host + 0x2a) & (sta->info).uapsd_queues) == 0)
            != (uVar6 == 2)) break;
        ptVar3 = *(txdesc **)&ptVar4->list_hdr;
        ptVar10 = ptVar4;
      }
      _LVL155();
      *(uint8_t *)((int)&ptVar4->host + 0x2a) = ((sta->ps_service_period & 8U) != 0) + '\x03';
      if (ptVar10 == (txdesc *)0x0) {
        cVar7 = (co_list_hdr)(sta->tx_desc_post).first;
      }
      else {
        cVar7 = (co_list_hdr)((co_list_hdr *)&(ptVar10->list_hdr).next)->next;
      }
      for (; cVar7 != (co_list_hdr)0x0; cVar7 = *(co_list_hdr *)cVar7) {
        if (((*(byte *)(uint)*(byte *)((int)cVar7 + 0x2e) & (sta->info).uapsd_queues) == 0) !=
            (sta->ps_service_period == 2)) goto _L0;
      }
      sVar8 = ~sVar8 & sta->traffic_avail;
      sta->traffic_avail = sVar8;
      if ((sVar8 & sVar9) == 0) {
        FUN_000107a8();
        *extraout_a0 = sta->aid;
        uVar1 = sta->inst_nbr;
        *(undefined *)(extraout_a0 + 1) = 0;
        *(uint8_t *)((int)extraout_a0 + 3) = uVar1;
        _L0();
      }
      else {
_L0:
        ptVar5 = *(txl_buffer_tag **)((int)&ptVar4->lmac + 4);
        uVar2 = *(ushort *)&ptVar5[1].length;
        *(char *)&ptVar5[1].length = (char)uVar2;
        *(byte *)((int)(ptVar5 + 1) + 1) = (byte)((uint)uVar2 >> 8) | 0x20;
      }
      return ptVar4;
    }
    *stop = 1;
  }
  else {
    *stop = 0;
  }
  return (txdesc *)0x0;
}



void FUN_00010710(void)

{
  undefined4 *unaff_s3;
  
  FUN_00010710();
  *unaff_s3 = 1;
  return;
}



void FUN_000107a8(void)

{
  undefined uVar1;
  int unaff_s0;
  undefined2 *extraout_a0;
  
  FUN_000107a8();
  *extraout_a0 = *(undefined2 *)(unaff_s0 + 0x18);
  uVar1 = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)(extraout_a0 + 1) = 0;
  *(undefined *)((int)extraout_a0 + 3) = uVar1;
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



void _LVL155(void)

{
  undefined uVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  undefined2 *extraout_a0;
  int iVar3;
  int *piVar4;
  byte bVar5;
  byte unaff_s2;
  byte unaff_s4;
  int unaff_s5;
  int **unaff_s6;
  
  _LVL155();
  *(char *)(unaff_s1 + 0x2e) = ((*(uint *)(unaff_s0 + 0x34) & 8) != 0) + '\x03';
  if (unaff_s6 == (int **)0x0) {
    piVar4 = *(int **)(unaff_s0 + 0x19c);
  }
  else {
    piVar4 = *unaff_s6;
  }
  for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    if (((*(byte *)((uint)*(byte *)((int)piVar4 + 0x2e) + unaff_s5) & *(byte *)(unaff_s0 + 0xf2)) ==
        0) != (*(int *)(unaff_s0 + 0x34) == 2)) goto _L0;
  }
  bVar5 = ~unaff_s2 & *(byte *)(unaff_s0 + 0x32);
  *(byte *)(unaff_s0 + 0x32) = bVar5;
  if ((bVar5 & unaff_s4) == 0) {
    FUN_000107a8();
    *extraout_a0 = *(undefined2 *)(unaff_s0 + 0x18);
    uVar1 = *(undefined *)(unaff_s0 + 0x1a);
    *(undefined *)(extraout_a0 + 1) = 0;
    *(undefined *)((int)extraout_a0 + 3) = uVar1;
    _L0();
  }
  else {
_L0:
    iVar3 = *(int *)(unaff_s1 + 0x68);
    uVar2 = *(ushort *)(iVar3 + 0x14c);
    *(char *)(iVar3 + 0x14c) = (char)uVar2;
    *(byte *)(iVar3 + 0x14d) = (byte)((uint)uVar2 >> 8) | 0x20;
  }
  return;
}



// DWARF DIE: 75c6

void apm_tx_int_ps_clear(vif_info_tag *vif,uint8_t sta_idx)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined2 *extraout_a0;
  undefined3 in_register_0000202d;
  
  if (vif->type != '\x02') {
    return;
  }
  iVar3 = CONCAT31(in_register_0000202d,sta_idx) * 0x1b0;
  FUN_0001081c();
  bVar1 = *(byte *)(iVar3 + 0x32);
  if (((bVar1 & 10) != 0) && (*(byte *)(iVar3 + 0x32) = bVar1 & 0xf5, (bVar1 & 0xf5) == 0)) {
    FUN_00010842();
    *extraout_a0 = *(undefined2 *)(iVar3 + 0x18);
    uVar2 = *(undefined *)(iVar3 + 0x1a);
    *(undefined *)(extraout_a0 + 1) = 0;
    *(undefined *)((int)extraout_a0 + 3) = uVar2;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_0001081c(void)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  undefined2 *extraout_a0;
  
  FUN_0001081c();
  bVar1 = *(byte *)(unaff_s0 + 0x32);
  if (((bVar1 & 10) != 0) && (*(byte *)(unaff_s0 + 0x32) = bVar1 & 0xf5, (bVar1 & 0xf5) == 0)) {
    FUN_00010842();
    *extraout_a0 = *(undefined2 *)(unaff_s0 + 0x18);
    uVar2 = *(undefined *)(unaff_s0 + 0x1a);
    *(undefined *)(extraout_a0 + 1) = 0;
    *(undefined *)((int)extraout_a0 + 3) = uVar2;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_00010842(void)

{
  undefined uVar1;
  int unaff_s0;
  undefined2 *extraout_a0;
  
  FUN_00010842();
  *extraout_a0 = *(undefined2 *)(unaff_s0 + 0x18);
  uVar1 = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)(extraout_a0 + 1) = 0;
  *(undefined *)((int)extraout_a0 + 3) = uVar1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 73cd

void apm_sta_fw_delete(uint8_t sta_idx)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 7334

void apm_sta_add(uint8_t sta_idx)

{
  undefined3 in_register_00002029;
  undefined4 *extraout_a0;
  int iVar1;
  
  _L0();
  iVar1 = CONCAT31(in_register_00002029,sta_idx) * 0x1b0;
  *(undefined *)(iVar1 + 0x31) = 2;
  *extraout_a0 = *(undefined4 *)(iVar1 + 0xec);
  _L0();
  *(undefined *)((int)extraout_a0 + 0xb) = *(undefined *)(iVar1 + 0x1b);
  *(undefined *)((int)extraout_a0 + 10) = *(undefined *)(iVar1 + 0x1a);
  *(undefined *)(extraout_a0 + 3) = *(undefined *)(iVar1 + 0x24);
  extraout_a0[4] = *(undefined4 *)(iVar1 + 0x28);
  extraout_a0[5] = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined *)(extraout_a0 + 6) = *(undefined *)(iVar1 + 0x30);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined4 *extraout_a0;
  int unaff_s2;
  int iVar1;
  
  _L0();
  iVar1 = unaff_s2 * 0x1b0;
  *(undefined *)(iVar1 + 0x31) = 2;
  *extraout_a0 = *(undefined4 *)(iVar1 + 0xec);
  _L0();
  *(undefined *)((int)extraout_a0 + 0xb) = *(undefined *)(iVar1 + 0x1b);
  *(undefined *)((int)extraout_a0 + 10) = *(undefined *)(iVar1 + 0x1a);
  *(undefined *)(extraout_a0 + 3) = *(undefined *)(iVar1 + 0x24);
  extraout_a0[4] = *(undefined4 *)(iVar1 + 0x28);
  extraout_a0[5] = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined *)(extraout_a0 + 6) = *(undefined *)(iVar1 + 0x30);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _L0();
  *(undefined *)(unaff_s1 + 0xb) = *(undefined *)(unaff_s0 + 0x1b);
  *(undefined *)(unaff_s1 + 10) = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)(unaff_s1 + 0xc) = *(undefined *)(unaff_s0 + 0x24);
  *(undefined4 *)(unaff_s1 + 0x10) = *(undefined4 *)(unaff_s0 + 0x28);
  *(undefined4 *)(unaff_s1 + 0x14) = *(undefined4 *)(unaff_s0 + 0x2c);
  *(undefined *)(unaff_s1 + 0x18) = *(undefined *)(unaff_s0 + 0x30);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 70ca

void apm_send_mlme(vif_info_tag *vif,uint16_t fctl,mac_addr *ra,cfm_func_ptr *cfm_func,void *env,
                  uint16_t status_code)

{
  uint8_t uVar1;
  int iVar2;
  uint uVar3;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined2 in_register_0000202e;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = CONCAT22(in_register_0000202e,fctl);
  uVar3 = (uint)(((vif->bss_info).chan)->band != '\0');
  _L0(_DAT_00000054);
  if (uVar3 == 0) {
    return;
  }
  iVar2 = *(int *)(uVar3 + 0x68);
  *(char *)(iVar2 + 0x14d) = (char)(fctl >> 8);
  *(char *)(iVar2 + 0x14c) = (char)fctl;
  *(undefined *)(iVar2 + 0x14e) = 0;
  *(undefined *)(iVar2 + 0x14f) = 0;
  _LVL180(_DAT_00000054);
  FUN_00010990(_DAT_00000054);
  FUN_000109a0(_DAT_00000054);
  uVar5 = (uint)_DAT_00000054;
  _DAT_00000054 = (ushort)((uVar5 + 1) * 0x10000 >> 0x10);
  iVar6 = (uVar5 + 1) * 0x100000;
  *(char *)(iVar2 + 0x162) = (char)((uint)iVar6 >> 0x10);
  *(char *)(iVar2 + 0x163) = (char)((uint)iVar6 >> 0x18);
  if (uVar4 == 0xb0) {
    FUN_000109e2();
    iVar2 = extraout_a0;
  }
  else {
    if (uVar4 == 0xc0) {
      FUN_00010a4c();
      iVar2 = extraout_a0_00;
    }
    else {
      if (uVar4 == 0x50) {
        FUN_00010a66();
        iVar2 = extraout_a0_01;
      }
      else {
        uVar5 = 0x18;
        if ((uVar4 & 0xffffffdf) != 0x10) goto _L0;
        FUN_00010a88();
        iVar2 = extraout_a0_02;
      }
    }
  }
  uVar5 = iVar2 + 0x18U & 0xffff;
_L0:
  iVar2 = *(int *)(uVar3 + 0x6c);
  *(uint *)(iVar2 + 0x1c) = uVar5 + 4;
  *(uint *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + -1 + uVar5;
  uVar1 = vif->index;
  *(undefined *)(uVar3 + 0x5e) = 0;
  *(undefined *)(uVar3 + 0x60) = 0;
  *(uint8_t *)(uVar3 + 0x2f) = uVar1;
  *(undefined *)(uVar3 + 0x30) = 0xff;
  *(cfm_func_ptr **)(uVar3 + 0x2cc) = cfm_func;
  *(void **)(uVar3 + 0x2d0) = env;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(ushort uRam00000054)

{
  undefined uVar1;
  int iVar2;
  int unaff_s1;
  int in_a0;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  uint uVar3;
  int iVar4;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  uint unaff_s6;
  
  _L0(uRam00000054);
  if (in_a0 == 0) {
    return;
  }
  iVar2 = *(int *)(in_a0 + 0x68);
  *(char *)(iVar2 + 0x14d) = (char)(unaff_s6 >> 8);
  *(char *)(iVar2 + 0x14c) = (char)unaff_s6;
  *(undefined *)(iVar2 + 0x14e) = 0;
  *(undefined *)(iVar2 + 0x14f) = 0;
  _LVL180(uRam00000054);
  FUN_00010990(uRam00000054);
  FUN_000109a0(uRam00000054);
  uVar3 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar3 + 1) * 0x10000 >> 0x10);
  iVar4 = (uVar3 + 1) * 0x100000;
  *(char *)(iVar2 + 0x162) = (char)((uint)iVar4 >> 0x10);
  *(char *)(iVar2 + 0x163) = (char)((uint)iVar4 >> 0x18);
  if (unaff_s6 == 0xb0) {
    FUN_000109e2();
    iVar2 = extraout_a0;
  }
  else {
    if (unaff_s6 == 0xc0) {
      FUN_00010a4c();
      iVar2 = extraout_a0_00;
    }
    else {
      if (unaff_s6 == 0x50) {
        FUN_00010a66();
        iVar2 = extraout_a0_01;
      }
      else {
        uVar3 = 0x18;
        if ((unaff_s6 & 0xffffffdf) != 0x10) goto _L0;
        FUN_00010a88();
        iVar2 = extraout_a0_02;
      }
    }
  }
  uVar3 = iVar2 + 0x18U & 0xffff;
_L0:
  iVar2 = *(int *)(in_a0 + 0x6c);
  *(uint *)(iVar2 + 0x1c) = uVar3 + 4;
  *(uint *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + -1 + uVar3;
  uVar1 = *(undefined *)(unaff_s1 + 0x57);
  *(undefined *)(in_a0 + 0x5e) = 0;
  *(undefined *)(in_a0 + 0x60) = 0;
  *(undefined *)(in_a0 + 0x2f) = uVar1;
  *(undefined *)(in_a0 + 0x30) = 0xff;
  *(undefined4 *)(in_a0 + 0x2cc) = unaff_s3;
  *(undefined4 *)(in_a0 + 0x2d0) = unaff_s2;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL180(ushort uRam00000054)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  uint uVar2;
  int iVar3;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  uint unaff_s6;
  
  _LVL180(uRam00000054);
  FUN_00010990(uRam00000054);
  FUN_000109a0(uRam00000054);
  uVar2 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar2 + 1) * 0x10000 >> 0x10);
  iVar3 = (uVar2 + 1) * 0x100000;
  *(char *)(unaff_s0 + 0x162) = (char)((uint)iVar3 >> 0x10);
  *(char *)(unaff_s0 + 0x163) = (char)((uint)iVar3 >> 0x18);
  if (unaff_s6 == 0xb0) {
    FUN_000109e2();
    iVar3 = extraout_a0;
  }
  else {
    if (unaff_s6 == 0xc0) {
      FUN_00010a4c();
      iVar3 = extraout_a0_00;
    }
    else {
      if (unaff_s6 == 0x50) {
        FUN_00010a66();
        iVar3 = extraout_a0_01;
      }
      else {
        uVar2 = 0x18;
        if ((unaff_s6 & 0xffffffdf) != 0x10) goto _L0;
        FUN_00010a88();
        iVar3 = extraout_a0_02;
      }
    }
  }
  uVar2 = iVar3 + 0x18U & 0xffff;
_L0:
  iVar3 = *(int *)(unaff_s4 + 0x6c);
  *(uint *)(iVar3 + 0x1c) = uVar2 + 4;
  *(uint *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + uVar2;
  uVar1 = *(undefined *)(unaff_s1 + 0x57);
  *(undefined *)(unaff_s4 + 0x5e) = 0;
  *(undefined *)(unaff_s4 + 0x60) = 0;
  *(undefined *)(unaff_s4 + 0x2f) = uVar1;
  *(undefined *)(unaff_s4 + 0x30) = 0xff;
  *(undefined4 *)(unaff_s4 + 0x2cc) = unaff_s3;
  *(undefined4 *)(unaff_s4 + 0x2d0) = unaff_s2;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010990(ushort uRam00000054)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  uint uVar2;
  int iVar3;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  uint unaff_s6;
  
  FUN_00010990(uRam00000054);
  FUN_000109a0(uRam00000054);
  uVar2 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar2 + 1) * 0x10000 >> 0x10);
  iVar3 = (uVar2 + 1) * 0x100000;
  *(char *)(unaff_s0 + 0x162) = (char)((uint)iVar3 >> 0x10);
  *(char *)(unaff_s0 + 0x163) = (char)((uint)iVar3 >> 0x18);
  if (unaff_s6 == 0xb0) {
    FUN_000109e2();
    iVar3 = extraout_a0;
  }
  else {
    if (unaff_s6 == 0xc0) {
      FUN_00010a4c();
      iVar3 = extraout_a0_00;
    }
    else {
      if (unaff_s6 == 0x50) {
        FUN_00010a66();
        iVar3 = extraout_a0_01;
      }
      else {
        uVar2 = 0x18;
        if ((unaff_s6 & 0xffffffdf) != 0x10) goto _L0;
        FUN_00010a88();
        iVar3 = extraout_a0_02;
      }
    }
  }
  uVar2 = iVar3 + 0x18U & 0xffff;
_L0:
  iVar3 = *(int *)(unaff_s4 + 0x6c);
  *(uint *)(iVar3 + 0x1c) = uVar2 + 4;
  *(uint *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + uVar2;
  uVar1 = *(undefined *)(unaff_s1 + 0x57);
  *(undefined *)(unaff_s4 + 0x5e) = 0;
  *(undefined *)(unaff_s4 + 0x60) = 0;
  *(undefined *)(unaff_s4 + 0x2f) = uVar1;
  *(undefined *)(unaff_s4 + 0x30) = 0xff;
  *(undefined4 *)(unaff_s4 + 0x2cc) = unaff_s3;
  *(undefined4 *)(unaff_s4 + 0x2d0) = unaff_s2;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000109a0(ushort uRam00000054)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  uint uVar2;
  int iVar3;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  uint unaff_s6;
  
  FUN_000109a0(uRam00000054);
  uVar2 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar2 + 1) * 0x10000 >> 0x10);
  iVar3 = (uVar2 + 1) * 0x100000;
  *(char *)(unaff_s0 + 0x162) = (char)((uint)iVar3 >> 0x10);
  *(char *)(unaff_s0 + 0x163) = (char)((uint)iVar3 >> 0x18);
  if (unaff_s6 == 0xb0) {
    FUN_000109e2();
    iVar3 = extraout_a0;
  }
  else {
    if (unaff_s6 == 0xc0) {
      FUN_00010a4c();
      iVar3 = extraout_a0_00;
    }
    else {
      if (unaff_s6 == 0x50) {
        FUN_00010a66();
        iVar3 = extraout_a0_01;
      }
      else {
        uVar2 = 0x18;
        if ((unaff_s6 & 0xffffffdf) != 0x10) goto _L0;
        FUN_00010a88();
        iVar3 = extraout_a0_02;
      }
    }
  }
  uVar2 = iVar3 + 0x18U & 0xffff;
_L0:
  iVar3 = *(int *)(unaff_s4 + 0x6c);
  *(uint *)(iVar3 + 0x1c) = uVar2 + 4;
  *(uint *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + uVar2;
  uVar1 = *(undefined *)(unaff_s1 + 0x57);
  *(undefined *)(unaff_s4 + 0x5e) = 0;
  *(undefined *)(unaff_s4 + 0x60) = 0;
  *(undefined *)(unaff_s4 + 0x2f) = uVar1;
  *(undefined *)(unaff_s4 + 0x30) = 0xff;
  *(undefined4 *)(unaff_s4 + 0x2cc) = unaff_s3;
  *(undefined4 *)(unaff_s4 + 0x2d0) = unaff_s2;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000109e2(void)

{
  undefined uVar1;
  int unaff_s1;
  int extraout_a0;
  uint uVar2;
  int iVar3;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  
  FUN_000109e2();
  uVar2 = extraout_a0 + 0x18U & 0xffff;
  iVar3 = *(int *)(unaff_s4 + 0x6c);
  *(uint *)(iVar3 + 0x1c) = uVar2 + 4;
  *(uint *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + uVar2;
  uVar1 = *(undefined *)(unaff_s1 + 0x57);
  *(undefined *)(unaff_s4 + 0x5e) = 0;
  *(undefined *)(unaff_s4 + 0x60) = 0;
  *(undefined *)(unaff_s4 + 0x2f) = uVar1;
  *(undefined *)(unaff_s4 + 0x30) = 0xff;
  *(undefined4 *)(unaff_s4 + 0x2cc) = unaff_s3;
  *(undefined4 *)(unaff_s4 + 0x2d0) = unaff_s2;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a4c(void)

{
  undefined uVar1;
  int unaff_s1;
  uint uVar2;
  int extraout_a0;
  int iVar3;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  
  FUN_00010a4c();
  uVar2 = extraout_a0 + 0x18U & 0xffff;
  iVar3 = *(int *)(unaff_s4 + 0x6c);
  *(uint *)(iVar3 + 0x1c) = uVar2 + 4;
  *(uint *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + uVar2;
  uVar1 = *(undefined *)(unaff_s1 + 0x57);
  *(undefined *)(unaff_s4 + 0x5e) = 0;
  *(undefined *)(unaff_s4 + 0x60) = 0;
  *(undefined *)(unaff_s4 + 0x2f) = uVar1;
  *(undefined *)(unaff_s4 + 0x30) = 0xff;
  *(undefined4 *)(unaff_s4 + 0x2cc) = unaff_s3;
  *(undefined4 *)(unaff_s4 + 0x2d0) = unaff_s2;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a66(void)

{
  undefined uVar1;
  int unaff_s1;
  uint uVar2;
  int extraout_a0;
  int iVar3;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  
  FUN_00010a66();
  uVar2 = extraout_a0 + 0x18U & 0xffff;
  iVar3 = *(int *)(unaff_s4 + 0x6c);
  *(uint *)(iVar3 + 0x1c) = uVar2 + 4;
  *(uint *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + uVar2;
  uVar1 = *(undefined *)(unaff_s1 + 0x57);
  *(undefined *)(unaff_s4 + 0x5e) = 0;
  *(undefined *)(unaff_s4 + 0x60) = 0;
  *(undefined *)(unaff_s4 + 0x2f) = uVar1;
  *(undefined *)(unaff_s4 + 0x30) = 0xff;
  *(undefined4 *)(unaff_s4 + 0x2cc) = unaff_s3;
  *(undefined4 *)(unaff_s4 + 0x2d0) = unaff_s2;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a88(void)

{
  undefined uVar1;
  int unaff_s1;
  uint uVar2;
  int extraout_a0;
  int iVar3;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  
  FUN_00010a88();
  uVar2 = extraout_a0 + 0x18U & 0xffff;
  iVar3 = *(int *)(unaff_s4 + 0x6c);
  *(uint *)(iVar3 + 0x1c) = uVar2 + 4;
  *(uint *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + uVar2;
  uVar1 = *(undefined *)(unaff_s1 + 0x57);
  *(undefined *)(unaff_s4 + 0x5e) = 0;
  *(undefined *)(unaff_s4 + 0x60) = 0;
  *(undefined *)(unaff_s4 + 0x2f) = uVar1;
  *(undefined *)(unaff_s4 + 0x30) = 0xff;
  *(undefined4 *)(unaff_s4 + 0x2cc) = unaff_s3;
  *(undefined4 *)(unaff_s4 + 0x2d0) = unaff_s2;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 709d

_Bool apm_embedded_enabled(vif_info_tag *vif)

{
  byte bVar1;
  
  if (vif != (vif_info_tag *)0x0) {
    bVar1 = 0;
    if (vif->type == '\x02') {
      bVar1 = DAT_00000014;
    }
    return (_Bool)(bVar1 & 1);
  }
  return (_Bool)DAT_00000014;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 79e9

void apm_bcn_set(void)

{
  int iVar1;
  undefined4 *extraout_a0;
  int extraout_a0_00;
  
  iVar1 = iRam00000000;
  FUN_00010af4();
  *extraout_a0 = *(undefined4 *)(iVar1 + 0x20);
  *(undefined2 *)(extraout_a0 + 1) = *(undefined2 *)(iVar1 + 0x24);
  *(undefined2 *)((int)extraout_a0 + 6) = *(undefined2 *)(iVar1 + 0x26);
  *(undefined *)(extraout_a0 + 2) = *(undefined *)(iVar1 + 0x32);
  *(undefined *)((int)extraout_a0 + 9) = *(undefined *)(iVar1 + 0x33);
  FUN_00010b34();
  if (extraout_a0_00 == 0) {
    FUN_00010b8a();
  }
  else {
    FUN_00010b4c();
    FUN_00010b58();
    _DAT_00000010 = 0;
  }
  FUN_00010b66();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010af4(void)

{
  int unaff_s0;
  undefined4 *extraout_a0;
  int extraout_a0_00;
  int unaff_s2;
  
  FUN_00010af4();
  *extraout_a0 = *(undefined4 *)(unaff_s0 + 0x20);
  *(undefined2 *)(extraout_a0 + 1) = *(undefined2 *)(unaff_s0 + 0x24);
  *(undefined2 *)((int)extraout_a0 + 6) = *(undefined2 *)(unaff_s0 + 0x26);
  *(undefined *)(extraout_a0 + 2) = *(undefined *)(unaff_s0 + 0x32);
  *(undefined *)((int)extraout_a0 + 9) = *(undefined *)(unaff_s0 + 0x33);
  FUN_00010b34();
  if (extraout_a0_00 == 0) {
    FUN_00010b8a();
  }
  else {
    FUN_00010b4c();
    FUN_00010b58();
    *(undefined4 *)(unaff_s2 + 0x10) = 0;
  }
  FUN_00010b66();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b34(void)

{
  int extraout_a0;
  int unaff_s2;
  
  FUN_00010b34();
  if (extraout_a0 == 0) {
    FUN_00010b8a();
  }
  else {
    FUN_00010b4c();
    FUN_00010b58();
    *(undefined4 *)(unaff_s2 + 0x10) = 0;
  }
  FUN_00010b66();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b4c(void)

{
  int unaff_s2;
  
  FUN_00010b4c();
  FUN_00010b58();
  *(undefined4 *)(unaff_s2 + 0x10) = 0;
  FUN_00010b66();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b58(void)

{
  int unaff_s2;
  
  FUN_00010b58();
  *(undefined4 *)(unaff_s2 + 0x10) = 0;
  FUN_00010b66();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b66(void)

{
  FUN_00010b66();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b8a(void)

{
  FUN_00010b8a();
  FUN_00010b66();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6f11

void apm_probe_req_handler(rxu_mgt_ind *param)

{
  char cVar1;
  rxu_mgt_ind *prVar2;
  int8_t *piVar3;
  int extraout_a0;
  int extraout_a0_00;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param->inst_nbr == 0xff) {
    prVar2 = param;
    _L0(_DAT_00000014);
    if (prVar2 == (rxu_mgt_ind *)0x0) {
      return;
    }
  }
  else {
    prVar2 = (rxu_mgt_ind *)((uint)param->inst_nbr * 0x5d8);
  }
  piVar3 = &param[1].rssi;
  FUN_00010bd0(_DAT_00000014);
  if ((piVar3 == (int8_t *)0x0) || (piVar3[1] == '\0')) {
    if (DAT_00000015 != '\0') {
      return;
    }
  }
  else {
    if (prVar2[0x1f].ppm_rel != piVar3[1]) {
      return;
    }
    _LVL225();
    if (extraout_a0 != 0) {
      return;
    }
  }
  FUN_00010c06();
  if (extraout_a0_00 == 0) goto _L0;
  cVar1 = *(char *)(*(ushort **)&prVar2[0x21].inst_nbr + 1);
  uVar4 = (uint)**(ushort **)&prVar2[0x21].inst_nbr;
  if (cVar1 == '\0') {
    uVar6 = 0;
    if (((uVar4 - 0x96c & 0xffff) < 0x49) && (uVar6 = 0xe, uVar4 != 0x9b4)) {
      iVar5 = -0x967;
_L0:
      uVar6 = (int)(uVar4 + iVar5) / 5;
    }
  }
  else {
    uVar6 = 0;
    if ((cVar1 == '\x01') && (uVar6 = 0, (uVar4 - 0x138d & 0xffff) < 0x335)) {
      iVar5 = -5000;
      goto _L0;
    }
  }
  if (*(byte *)(extraout_a0_00 + 2) != uVar6) {
    return;
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010bd0(undefined2 param_1)

{
  char cVar1;
  int unaff_s0;
  int in_a0;
  int extraout_a0;
  int extraout_a0_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00010bd0(param_1);
  if ((in_a0 == 0) || (*(char *)(in_a0 + 1) == '\0')) {
    if (param_1._1_1_ != '\0') {
      return;
    }
  }
  else {
    if (*(char *)(unaff_s0 + 0x37e) != *(char *)(in_a0 + 1)) {
      return;
    }
    _LVL225();
    if (extraout_a0 != 0) {
      return;
    }
  }
  FUN_00010c06();
  if (extraout_a0_00 == 0) goto _L0;
  cVar1 = *(char *)(*(ushort **)(unaff_s0 + 0x3a4) + 1);
  uVar2 = (uint)**(ushort **)(unaff_s0 + 0x3a4);
  if (cVar1 == '\0') {
    uVar4 = 0;
    if (((uVar2 - 0x96c & 0xffff) < 0x49) && (uVar4 = 0xe, uVar2 != 0x9b4)) {
      iVar3 = -0x967;
_L0:
      uVar4 = (int)(uVar2 + iVar3) / 5;
    }
  }
  else {
    uVar4 = 0;
    if ((cVar1 == '\x01') && (uVar4 = 0, (uVar2 - 0x138d & 0xffff) < 0x335)) {
      iVar3 = -5000;
      goto _L0;
    }
  }
  if (*(byte *)(extraout_a0_00 + 2) != uVar4) {
    return;
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL225(void)

{
  char cVar1;
  int unaff_s0;
  int extraout_a0;
  int extraout_a0_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  _LVL225();
  if (extraout_a0 != 0) {
    return;
  }
  FUN_00010c06();
  if (extraout_a0_00 == 0) goto _L0;
  cVar1 = *(char *)(*(ushort **)(unaff_s0 + 0x3a4) + 1);
  uVar2 = (uint)**(ushort **)(unaff_s0 + 0x3a4);
  if (cVar1 == '\0') {
    uVar4 = 0;
    if (((uVar2 - 0x96c & 0xffff) < 0x49) && (uVar4 = 0xe, uVar2 != 0x9b4)) {
      iVar3 = -0x967;
_L0:
      uVar4 = (int)(uVar2 + iVar3) / 5;
    }
  }
  else {
    uVar4 = 0;
    if ((cVar1 == '\x01') && (uVar4 = 0, (uVar2 - 0x138d & 0xffff) < 0x335)) {
      iVar3 = -5000;
      goto _L0;
    }
  }
  if (*(byte *)(extraout_a0_00 + 2) != uVar4) {
    return;
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010c06(void)

{
  char cVar1;
  int unaff_s0;
  int extraout_a0;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00010c06();
  if (extraout_a0 == 0) goto _L0;
  cVar1 = *(char *)(*(ushort **)(unaff_s0 + 0x3a4) + 1);
  uVar2 = (uint)**(ushort **)(unaff_s0 + 0x3a4);
  if (cVar1 == '\0') {
    uVar4 = 0;
    if (((uVar2 - 0x96c & 0xffff) < 0x49) && (uVar4 = 0xe, uVar2 != 0x9b4)) {
      iVar3 = -0x967;
_L0:
      uVar4 = (int)(uVar2 + iVar3) / 5;
    }
  }
  else {
    uVar4 = 0;
    if ((cVar1 == '\x01') && (uVar4 = 0, (uVar2 - 0x138d & 0xffff) < 0x335)) {
      iVar3 = -5000;
      goto _L0;
    }
  }
  if (*(byte *)(extraout_a0 + 2) != uVar4) {
    return;
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(undefined2 param_1)

{
  char cVar1;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int in_a0;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  _L0(param_1);
  if (in_a0 == 0) {
    return;
  }
  iVar4 = unaff_s1 + 0x34;
  FUN_00010bd0(param_1);
  if ((iVar4 == 0) || (*(char *)(iVar4 + 1) == '\0')) {
    if (param_1._1_1_ != '\0') {
      return;
    }
  }
  else {
    if (*(char *)(in_a0 + 0x37e) != *(char *)(iVar4 + 1)) {
      return;
    }
    _LVL225();
    if (extraout_a0 != 0) {
      return;
    }
  }
  FUN_00010c06();
  if (extraout_a0_00 == 0) goto _L0;
  cVar1 = *(char *)(*(ushort **)(in_a0 + 0x3a4) + 1);
  uVar2 = (uint)**(ushort **)(in_a0 + 0x3a4);
  if (cVar1 == '\0') {
    uVar3 = 0;
    if (((uVar2 - 0x96c & 0xffff) < 0x49) && (uVar3 = 0xe, uVar2 != 0x9b4)) {
      iVar4 = -0x967;
_L0:
      uVar3 = (int)(uVar2 + iVar4) / 5;
    }
  }
  else {
    uVar3 = 0;
    if ((cVar1 == '\x01') && (uVar3 = 0, (uVar2 - 0x138d & 0xffff) < 0x335)) {
      iVar4 = -5000;
      goto _L0;
    }
  }
  if (*(byte *)(extraout_a0_00 + 2) != uVar3) {
    return;
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 6e65

void apm_auth_handler(rxu_mgt_ind *param)

{
  int extraout_a0;
  
  if (param->inst_nbr == -1) {
    return;
  }
  _L0();
  if (extraout_a0 != 0xff) {
    FUN_00010cfa();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int extraout_a0;
  int unaff_s2;
  
  _L0();
  if (extraout_a0 != unaff_s2) {
    FUN_00010cfa();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010cfa(void)

{
  FUN_00010cfa();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6743

void apm_assoc_req_handler(rxu_mgt_ind *param,_Bool is_reassoc)

{
  byte bVar1;
  Cipher_t CVar2;
  undefined uVar3;
  rxu_mgt_ind *prVar4;
  uint16_t *puVar5;
  int iVar6;
  rxu_mgt_ind *prVar7;
  Cipher_t *pCVar8;
  uint uVar9;
  int extraout_a0;
  undefined3 in_register_0000202d;
  Cipher_t *pCVar10;
  undefined *puVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  uint16_t *puVar15;
  uint uVar16;
  Cipher_t sta_cipher;
  Cipher_t aCStack79 [3];
  SecurityMode_t sta_sec;
  
  uVar16 = (uint)param->inst_nbr;
  if (uVar16 == 0xff) {
    return;
  }
  iVar6 = 0x1407;
  _LVL257(_DAT_00000014);
  _L0(_DAT_00000014);
  FUN_00010d8a(_DAT_00000014);
  *(uint8_t *)(iVar6 + 0x49) = param->inst_nbr;
  *(uint32_t *)(iVar6 + 0x4c) = param->tsflo;
  *(uint32_t *)(iVar6 + 0x50) = param->tsfhi;
  *(int8_t *)(iVar6 + 0x54) = param->rssi;
  *(uint8_t *)(iVar6 + 0x55) = param->data_rate;
  if (CONCAT31(in_register_0000202d,is_reassoc) == 0) {
    prVar4 = param + 2;
  }
  else {
    prVar4 = (rxu_mgt_ind *)&param[2].band;
  }
  if (((*(ushort *)&param[1].ppm_rel <= *(ushort *)(uVar16 * 0x5d8 + 0x416)) &&
      (prVar7 = prVar4, FUN_00010e06(_DAT_00000014), prVar7 != (rxu_mgt_ind *)0x0)) &&
     (*(char *)(uVar16 * 0x5d8 + 0x37e) == *(char *)((int)&prVar7->length + 1))) {
    puVar15 = &prVar7->framectrl;
    _LVL276(_DAT_00000014);
    if ((puVar15 == (uint16_t *)0x0) &&
       (prVar7 = prVar4, FUN_00010e7e(_DAT_00000014), prVar7 != (rxu_mgt_ind *)0x0)) {
      bVar1 = *(byte *)((int)&prVar7->length + 1);
      uVar12 = (uint)bVar1;
      pCVar8 = &sta_cipher;
      puVar5 = &prVar7->framectrl;
      _sta_cipher = _sta_cipher & 0xff00 | (ushort)bVar1;
      pCVar10 = pCVar8;
      while( true ) {
        uVar12 -= 1;
        pCVar10 = pCVar10 + 1;
        if (uVar12 == 0xffffffff) break;
        CVar2 = *(Cipher_t *)puVar5;
        puVar5 = (uint16_t *)((int)puVar5 + 1);
        *pCVar10 = CVar2;
      }
      prVar7 = prVar4;
      FUN_00010eaa(_DAT_00000014);
      if (prVar7 != (rxu_mgt_ind *)0x0) {
        bVar1 = *(byte *)((int)&prVar7->length + 1);
        for (uVar12 = 0; bVar1 != uVar12; uVar12 += 1) {
          aCStack79[(byte)sta_cipher + uVar12] = *(Cipher_t *)(prVar7->sa + (uVar12 - 7));
        }
        _sta_cipher = _sta_cipher & 0xff00 | (ushort)(byte)(bVar1 + (char)sta_cipher);
      }
      FUN_00010ed2(_DAT_00000014);
      *(undefined *)(iVar6 + 6) = 0;
      for (uVar12 = 0; uVar12 < *(byte *)(uVar16 * 0x5d8 + 0x3b0); uVar12 = uVar12 + 1 & 0xff) {
        iVar14 = uVar16 * 0x5d8 + uVar12;
        uVar9 = (uint)*(byte *)(iVar14 + 0x3b1);
        FUN_0001105e(uVar9,_DAT_00000014);
        if (((int)pCVar8 >> (uVar9 & 0x1f) & 1U) == 0) {
          if (*(char *)(iVar14 + 0x3b1) < '\0') goto _L0;
        }
        else {
          bVar1 = *(byte *)(iVar6 + 6);
          *(undefined *)(iVar6 + (uint)bVar1 + 7) = *(undefined *)(iVar14 + 0x3b1);
          *(byte *)(iVar6 + 6) = bVar1 + 1;
        }
      }
      prVar7 = prVar4;
      FUN_00010efc(_DAT_00000014);
      if (prVar7 != (rxu_mgt_ind *)0x0) {
        *(uint16_t *)(iVar6 + 0x14) = prVar7->framectrl;
        puVar11 = (undefined *)((int)&prVar7->center_freq + 1);
        *(undefined *)(iVar6 + 0x16) = *(undefined *)&prVar7->center_freq;
        for (puVar13 = (undefined *)(iVar6 + 0x17); puVar13 != (undefined *)(iVar6 + 0x27);
            puVar13 = puVar13 + 1) {
          uVar3 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar13 = uVar3;
        }
        *(undefined2 *)(iVar6 + 0x28) = *(undefined2 *)((int)&prVar7->tsfhi + 1);
        *(uint *)(iVar6 + 0x2c) = (uint)*(ushort *)((int)&prVar7->tsfhi + 3);
        *(uint8_t *)(iVar6 + 0x30) = prVar7->data_rate;
        *(uint *)(iVar6 + 0x40) = *(uint *)(iVar6 + 0x40) | 2;
      }
      prVar7 = prVar4;
      _LVL309(_DAT_00000014);
      if (prVar7 != (rxu_mgt_ind *)0x0) {
        bVar1 = prVar7->inst_nbr;
        *(uint *)(iVar6 + 0x40) = *(uint *)(iVar6 + 0x40) | 1;
        *(byte *)(iVar6 + 0x46) = bVar1 & 0xf;
        *(byte *)(iVar6 + 0x47) = bVar1 >> 4 & 6;
      }
      _LVL314(_DAT_00000014);
      FUN_00010fa4(_DAT_00000014);
      prVar7 = prVar4;
      FUN_00010fb4(_DAT_00000014);
      if (prVar7 == (rxu_mgt_ind *)0x0) {
        _LVL336(_DAT_00000014);
        if (prVar4 != (rxu_mgt_ind *)0x0) {
          _sta_cipher |= 8;
        }
      }
      else {
        _sta_cipher |= 0x20;
      }
      if (iRam00000000 != 0) {
        if ((_sta_cipher & 0x28) == 0) goto _L0;
        FUN_00010ff8(_DAT_00000014);
        FUN_00011008(_DAT_00000014);
      }
      bVar1 = DAT_00000017;
      *(undefined2 *)(iVar6 + 0x44) = 0;
      if (DAT_00000016 < bVar1) {
        iVar14 = 0;
        puVar5 = (uint16_t *)0xffffffff;
        do {
          if (*(char *)(iVar14 + 0x1e) == '\0') {
            if (puVar5 == (uint16_t *)0xffffffff) {
              puVar5 = puVar15;
            }
          }
          else {
            FUN_000110ec(iVar14 + 0x18,6);
            if (extraout_a0 == 0) {
              *(undefined *)((int)puVar15 * 7 + 0x1e) = 1;
              puVar5 = puVar15;
              goto _L0;
            }
          }
          puVar15 = (uint16_t *)((int)puVar15 + 1);
          iVar14 += 7;
        } while (puVar15 != (uint16_t *)0xa);
        if (puVar5 != (uint16_t *)0xffffffff) {
          FUN_0001113e();
          *(undefined *)((int)puVar5 * 7 + 0x1e) = 1;
_L0:
          *(short *)(iVar6 + 0x44) = (short)puVar5 + 1;
          _DAT_00000014 = _DAT_00000014 & 0xffff | (uint3)(byte)(DAT_00000016 + 1) << 0x10;
        }
      }
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void _LVL257(uint3 uRam00000014)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s1;
  int iVar3;
  int in_a0;
  int iVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  int extraout_a0;
  undefined2 *puVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  int unaff_s5;
  int unaff_s8;
  byte bStack00000010;
  ushort in_stack_00000010;
  
  _LVL257(uRam00000014);
  _L0(uRam00000014);
  FUN_00010d8a(uRam00000014);
  *(undefined *)(in_a0 + 0x49) = *(undefined *)(unaff_s1 + 8);
  *(undefined4 *)(in_a0 + 0x4c) = *(undefined4 *)(unaff_s1 + 0x10);
  *(undefined4 *)(in_a0 + 0x50) = *(undefined4 *)(unaff_s1 + 0x14);
  *(undefined *)(in_a0 + 0x54) = *(undefined *)(unaff_s1 + 0x18);
  *(undefined *)(in_a0 + 0x55) = *(undefined *)(unaff_s1 + 0x1b);
  if (unaff_s5 == 0) {
    iVar3 = unaff_s1 + 0x38;
  }
  else {
    iVar3 = unaff_s1 + 0x3e;
  }
  if (((*(ushort *)(unaff_s1 + 0x36) <= *(ushort *)(unaff_s8 * 0x5d8 + 0x416)) &&
      (iVar4 = iVar3, FUN_00010e06(uRam00000014), iVar4 != 0)) &&
     (*(char *)(unaff_s8 * 0x5d8 + 0x37e) == *(char *)(iVar4 + 1))) {
    iVar4 += 2;
    _LVL276(uRam00000014);
    if ((iVar4 == 0) && (iVar11 = iVar3, FUN_00010e7e(uRam00000014), iVar11 != 0)) {
      uVar9 = (uint)*(byte *)(iVar11 + 1);
      puVar6 = (undefined2 *)&stack0x00000010;
      puVar5 = (undefined *)(iVar11 + 2);
      in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)*(byte *)(iVar11 + 1);
      puVar8 = puVar6;
      while( true ) {
        uVar9 -= 1;
        puVar8 = (undefined2 *)((int)puVar8 + 1);
        if (uVar9 == 0xffffffff) break;
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *(undefined *)puVar8 = uVar2;
      }
      iVar11 = iVar3;
      FUN_00010eaa(uRam00000014);
      if (iVar11 != 0) {
        bVar1 = *(byte *)(iVar11 + 1);
        for (uVar9 = 0; bVar1 != uVar9; uVar9 += 1) {
          *(undefined *)((int)&stack0x00000010 + bStack00000010 + uVar9 + 1) =
               *(undefined *)(iVar11 + 2 + uVar9);
        }
        in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)(byte)(bVar1 + bStack00000010);
      }
      FUN_00010ed2(uRam00000014);
      *(undefined *)(in_a0 + 6) = 0;
      for (uVar9 = 0; uVar9 < *(byte *)(unaff_s8 * 0x5d8 + 0x3b0); uVar9 = uVar9 + 1 & 0xff) {
        iVar11 = unaff_s8 * 0x5d8 + uVar9;
        uVar7 = (uint)*(byte *)(iVar11 + 0x3b1);
        FUN_0001105e(uVar7,uRam00000014);
        if (((int)puVar6 >> (uVar7 & 0x1f) & 1U) == 0) {
          if (*(char *)(iVar11 + 0x3b1) < '\0') goto _L0;
        }
        else {
          bVar1 = *(byte *)(in_a0 + 6);
          *(undefined *)(in_a0 + (uint)bVar1 + 7) = *(undefined *)(iVar11 + 0x3b1);
          *(byte *)(in_a0 + 6) = bVar1 + 1;
        }
      }
      iVar11 = iVar3;
      FUN_00010efc(uRam00000014);
      if (iVar11 != 0) {
        *(undefined2 *)(in_a0 + 0x14) = *(undefined2 *)(iVar11 + 2);
        puVar5 = (undefined *)(iVar11 + 5);
        *(undefined *)(in_a0 + 0x16) = *(undefined *)(iVar11 + 4);
        for (puVar10 = (undefined *)(in_a0 + 0x17); puVar10 != (undefined *)(in_a0 + 0x27);
            puVar10 = puVar10 + 1) {
          uVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar10 = uVar2;
        }
        *(undefined2 *)(in_a0 + 0x28) = *(undefined2 *)(iVar11 + 0x15);
        *(uint *)(in_a0 + 0x2c) = (uint)*(ushort *)(iVar11 + 0x17);
        *(undefined *)(in_a0 + 0x30) = *(undefined *)(iVar11 + 0x1b);
        *(uint *)(in_a0 + 0x40) = *(uint *)(in_a0 + 0x40) | 2;
      }
      iVar11 = iVar3;
      _LVL309(uRam00000014);
      if (iVar11 != 0) {
        bVar1 = *(byte *)(iVar11 + 8);
        *(uint *)(in_a0 + 0x40) = *(uint *)(in_a0 + 0x40) | 1;
        *(byte *)(in_a0 + 0x46) = bVar1 & 0xf;
        *(byte *)(in_a0 + 0x47) = bVar1 >> 4 & 6;
      }
      _LVL314(uRam00000014);
      FUN_00010fa4(uRam00000014);
      iVar11 = iVar3;
      FUN_00010fb4(uRam00000014);
      if (iVar11 == 0) {
        _LVL336(uRam00000014);
        if (iVar3 != 0) {
          in_stack_00000010 |= 8;
        }
      }
      else {
        in_stack_00000010 |= 0x20;
      }
      if (iRam00000000 != 0) {
        if ((in_stack_00000010 & 0x28) == 0) goto _L0;
        FUN_00010ff8(uRam00000014);
        FUN_00011008(uRam00000014);
      }
      bVar1 = DAT_00000017;
      *(undefined2 *)(in_a0 + 0x44) = 0;
      if (uRam00000014._2_1_ < bVar1) {
        iVar11 = 0;
        iVar3 = -1;
        do {
          if (*(char *)(iVar11 + 0x1e) == '\0') {
            if (iVar3 == -1) {
              iVar3 = iVar4;
            }
          }
          else {
            FUN_000110ec(iVar11 + 0x18,6);
            if (extraout_a0 == 0) {
              *(undefined *)(iVar4 * 7 + 0x1e) = 1;
              iVar3 = iVar4;
              goto _L0;
            }
          }
          iVar4 += 1;
          iVar11 += 7;
        } while (iVar4 != 10);
        if (iVar3 != -1) {
          FUN_0001113e();
          *(undefined *)(iVar3 * 7 + 0x1e) = 1;
_L0:
          *(short *)(in_a0 + 0x44) = (short)iVar3 + 1;
          uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
        }
      }
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void _L0(uint3 uRam00000014)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  int extraout_a0;
  undefined2 *puVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  int unaff_s5;
  int unaff_s8;
  byte bStack00000010;
  ushort in_stack_00000010;
  
  _L0(uRam00000014);
  FUN_00010d8a(uRam00000014);
  *(undefined *)(unaff_s0 + 0x49) = *(undefined *)(unaff_s1 + 8);
  *(undefined4 *)(unaff_s0 + 0x4c) = *(undefined4 *)(unaff_s1 + 0x10);
  *(undefined4 *)(unaff_s0 + 0x50) = *(undefined4 *)(unaff_s1 + 0x14);
  *(undefined *)(unaff_s0 + 0x54) = *(undefined *)(unaff_s1 + 0x18);
  *(undefined *)(unaff_s0 + 0x55) = *(undefined *)(unaff_s1 + 0x1b);
  if (unaff_s5 == 0) {
    iVar3 = unaff_s1 + 0x38;
  }
  else {
    iVar3 = unaff_s1 + 0x3e;
  }
  if (((*(ushort *)(unaff_s1 + 0x36) <= *(ushort *)(unaff_s8 * 0x5d8 + 0x416)) &&
      (iVar4 = iVar3, FUN_00010e06(uRam00000014), iVar4 != 0)) &&
     (*(char *)(unaff_s8 * 0x5d8 + 0x37e) == *(char *)(iVar4 + 1))) {
    iVar4 += 2;
    _LVL276(uRam00000014);
    if ((iVar4 == 0) && (iVar11 = iVar3, FUN_00010e7e(uRam00000014), iVar11 != 0)) {
      uVar9 = (uint)*(byte *)(iVar11 + 1);
      puVar6 = (undefined2 *)&stack0x00000010;
      puVar5 = (undefined *)(iVar11 + 2);
      in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)*(byte *)(iVar11 + 1);
      puVar8 = puVar6;
      while( true ) {
        uVar9 -= 1;
        puVar8 = (undefined2 *)((int)puVar8 + 1);
        if (uVar9 == 0xffffffff) break;
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *(undefined *)puVar8 = uVar2;
      }
      iVar11 = iVar3;
      FUN_00010eaa(uRam00000014);
      if (iVar11 != 0) {
        bVar1 = *(byte *)(iVar11 + 1);
        for (uVar9 = 0; bVar1 != uVar9; uVar9 += 1) {
          *(undefined *)((int)&stack0x00000010 + bStack00000010 + uVar9 + 1) =
               *(undefined *)(iVar11 + 2 + uVar9);
        }
        in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)(byte)(bVar1 + bStack00000010);
      }
      FUN_00010ed2(uRam00000014);
      *(undefined *)(unaff_s0 + 6) = 0;
      for (uVar9 = 0; uVar9 < *(byte *)(unaff_s8 * 0x5d8 + 0x3b0); uVar9 = uVar9 + 1 & 0xff) {
        iVar11 = unaff_s8 * 0x5d8 + uVar9;
        uVar7 = (uint)*(byte *)(iVar11 + 0x3b1);
        FUN_0001105e(uVar7,uRam00000014);
        if (((int)puVar6 >> (uVar7 & 0x1f) & 1U) == 0) {
          if (*(char *)(iVar11 + 0x3b1) < '\0') goto _L0;
        }
        else {
          bVar1 = *(byte *)(unaff_s0 + 6);
          *(undefined *)(unaff_s0 + (uint)bVar1 + 7) = *(undefined *)(iVar11 + 0x3b1);
          *(byte *)(unaff_s0 + 6) = bVar1 + 1;
        }
      }
      iVar11 = iVar3;
      FUN_00010efc(uRam00000014);
      if (iVar11 != 0) {
        *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(iVar11 + 2);
        puVar5 = (undefined *)(iVar11 + 5);
        *(undefined *)(unaff_s0 + 0x16) = *(undefined *)(iVar11 + 4);
        for (puVar10 = (undefined *)(unaff_s0 + 0x17); puVar10 != (undefined *)(unaff_s0 + 0x27);
            puVar10 = puVar10 + 1) {
          uVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar10 = uVar2;
        }
        *(undefined2 *)(unaff_s0 + 0x28) = *(undefined2 *)(iVar11 + 0x15);
        *(uint *)(unaff_s0 + 0x2c) = (uint)*(ushort *)(iVar11 + 0x17);
        *(undefined *)(unaff_s0 + 0x30) = *(undefined *)(iVar11 + 0x1b);
        *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 2;
      }
      iVar11 = iVar3;
      _LVL309(uRam00000014);
      if (iVar11 != 0) {
        bVar1 = *(byte *)(iVar11 + 8);
        *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 1;
        *(byte *)(unaff_s0 + 0x46) = bVar1 & 0xf;
        *(byte *)(unaff_s0 + 0x47) = bVar1 >> 4 & 6;
      }
      _LVL314(uRam00000014);
      FUN_00010fa4(uRam00000014);
      iVar11 = iVar3;
      FUN_00010fb4(uRam00000014);
      if (iVar11 == 0) {
        _LVL336(uRam00000014);
        if (iVar3 != 0) {
          in_stack_00000010 |= 8;
        }
      }
      else {
        in_stack_00000010 |= 0x20;
      }
      if (iRam00000000 != 0) {
        if ((in_stack_00000010 & 0x28) == 0) goto _L0;
        FUN_00010ff8(uRam00000014);
        FUN_00011008(uRam00000014);
      }
      bVar1 = DAT_00000017;
      *(undefined2 *)(unaff_s0 + 0x44) = 0;
      if (uRam00000014._2_1_ < bVar1) {
        iVar11 = 0;
        iVar3 = -1;
        do {
          if (*(char *)(iVar11 + 0x1e) == '\0') {
            if (iVar3 == -1) {
              iVar3 = iVar4;
            }
          }
          else {
            FUN_000110ec(iVar11 + 0x18,6);
            if (extraout_a0 == 0) {
              *(undefined *)(iVar4 * 7 + 0x1e) = 1;
              iVar3 = iVar4;
              goto _L0;
            }
          }
          iVar4 += 1;
          iVar11 += 7;
        } while (iVar4 != 10);
        if (iVar3 != -1) {
          FUN_0001113e();
          *(undefined *)(iVar3 * 7 + 0x1e) = 1;
_L0:
          *(short *)(unaff_s0 + 0x44) = (short)iVar3 + 1;
          uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
        }
      }
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_00010d8a(uint3 uRam00000014)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  int extraout_a0;
  undefined2 *puVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  int unaff_s5;
  int unaff_s8;
  byte bStack00000010;
  ushort in_stack_00000010;
  
  FUN_00010d8a(uRam00000014);
  *(undefined *)(unaff_s0 + 0x49) = *(undefined *)(unaff_s1 + 8);
  *(undefined4 *)(unaff_s0 + 0x4c) = *(undefined4 *)(unaff_s1 + 0x10);
  *(undefined4 *)(unaff_s0 + 0x50) = *(undefined4 *)(unaff_s1 + 0x14);
  *(undefined *)(unaff_s0 + 0x54) = *(undefined *)(unaff_s1 + 0x18);
  *(undefined *)(unaff_s0 + 0x55) = *(undefined *)(unaff_s1 + 0x1b);
  if (unaff_s5 == 0) {
    iVar3 = unaff_s1 + 0x38;
  }
  else {
    iVar3 = unaff_s1 + 0x3e;
  }
  if (((*(ushort *)(unaff_s1 + 0x36) <= *(ushort *)(unaff_s8 * 0x5d8 + 0x416)) &&
      (iVar4 = iVar3, FUN_00010e06(uRam00000014), iVar4 != 0)) &&
     (*(char *)(unaff_s8 * 0x5d8 + 0x37e) == *(char *)(iVar4 + 1))) {
    iVar4 += 2;
    _LVL276(uRam00000014);
    if ((iVar4 == 0) && (iVar11 = iVar3, FUN_00010e7e(uRam00000014), iVar11 != 0)) {
      uVar9 = (uint)*(byte *)(iVar11 + 1);
      puVar6 = (undefined2 *)&stack0x00000010;
      puVar5 = (undefined *)(iVar11 + 2);
      in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)*(byte *)(iVar11 + 1);
      puVar8 = puVar6;
      while( true ) {
        uVar9 -= 1;
        puVar8 = (undefined2 *)((int)puVar8 + 1);
        if (uVar9 == 0xffffffff) break;
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *(undefined *)puVar8 = uVar2;
      }
      iVar11 = iVar3;
      FUN_00010eaa(uRam00000014);
      if (iVar11 != 0) {
        bVar1 = *(byte *)(iVar11 + 1);
        for (uVar9 = 0; bVar1 != uVar9; uVar9 += 1) {
          *(undefined *)((int)&stack0x00000010 + bStack00000010 + uVar9 + 1) =
               *(undefined *)(iVar11 + 2 + uVar9);
        }
        in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)(byte)(bVar1 + bStack00000010);
      }
      FUN_00010ed2(uRam00000014);
      *(undefined *)(unaff_s0 + 6) = 0;
      for (uVar9 = 0; uVar9 < *(byte *)(unaff_s8 * 0x5d8 + 0x3b0); uVar9 = uVar9 + 1 & 0xff) {
        iVar11 = unaff_s8 * 0x5d8 + uVar9;
        uVar7 = (uint)*(byte *)(iVar11 + 0x3b1);
        FUN_0001105e(uVar7,uRam00000014);
        if (((int)puVar6 >> (uVar7 & 0x1f) & 1U) == 0) {
          if (*(char *)(iVar11 + 0x3b1) < '\0') goto _L0;
        }
        else {
          bVar1 = *(byte *)(unaff_s0 + 6);
          *(undefined *)(unaff_s0 + (uint)bVar1 + 7) = *(undefined *)(iVar11 + 0x3b1);
          *(byte *)(unaff_s0 + 6) = bVar1 + 1;
        }
      }
      iVar11 = iVar3;
      FUN_00010efc(uRam00000014);
      if (iVar11 != 0) {
        *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(iVar11 + 2);
        puVar5 = (undefined *)(iVar11 + 5);
        *(undefined *)(unaff_s0 + 0x16) = *(undefined *)(iVar11 + 4);
        for (puVar10 = (undefined *)(unaff_s0 + 0x17); puVar10 != (undefined *)(unaff_s0 + 0x27);
            puVar10 = puVar10 + 1) {
          uVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar10 = uVar2;
        }
        *(undefined2 *)(unaff_s0 + 0x28) = *(undefined2 *)(iVar11 + 0x15);
        *(uint *)(unaff_s0 + 0x2c) = (uint)*(ushort *)(iVar11 + 0x17);
        *(undefined *)(unaff_s0 + 0x30) = *(undefined *)(iVar11 + 0x1b);
        *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 2;
      }
      iVar11 = iVar3;
      _LVL309(uRam00000014);
      if (iVar11 != 0) {
        bVar1 = *(byte *)(iVar11 + 8);
        *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 1;
        *(byte *)(unaff_s0 + 0x46) = bVar1 & 0xf;
        *(byte *)(unaff_s0 + 0x47) = bVar1 >> 4 & 6;
      }
      _LVL314(uRam00000014);
      FUN_00010fa4(uRam00000014);
      iVar11 = iVar3;
      FUN_00010fb4(uRam00000014);
      if (iVar11 == 0) {
        _LVL336(uRam00000014);
        if (iVar3 != 0) {
          in_stack_00000010 |= 8;
        }
      }
      else {
        in_stack_00000010 |= 0x20;
      }
      if (iRam00000000 != 0) {
        if ((in_stack_00000010 & 0x28) == 0) goto _L0;
        FUN_00010ff8(uRam00000014);
        FUN_00011008(uRam00000014);
      }
      bVar1 = DAT_00000017;
      *(undefined2 *)(unaff_s0 + 0x44) = 0;
      if (uRam00000014._2_1_ < bVar1) {
        iVar11 = 0;
        iVar3 = -1;
        do {
          if (*(char *)(iVar11 + 0x1e) == '\0') {
            if (iVar3 == -1) {
              iVar3 = iVar4;
            }
          }
          else {
            FUN_000110ec(iVar11 + 0x18,6);
            if (extraout_a0 == 0) {
              *(undefined *)(iVar4 * 7 + 0x1e) = 1;
              iVar3 = iVar4;
              goto _L0;
            }
          }
          iVar4 += 1;
          iVar11 += 7;
        } while (iVar4 != 10);
        if (iVar3 != -1) {
          FUN_0001113e();
          *(undefined *)(iVar3 * 7 + 0x1e) = 1;
_L0:
          *(short *)(unaff_s0 + 0x44) = (short)iVar3 + 1;
          uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
        }
      }
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_00010e06(uint3 uRam00000014)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int in_a0;
  undefined *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int extraout_a0;
  undefined2 *puVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int unaff_s3;
  int iVar10;
  int unaff_s8;
  int unaff_s9;
  byte bStack00000010;
  ushort in_stack_00000010;
  
  FUN_00010e06(uRam00000014);
  if ((in_a0 != 0) && (*(char *)(unaff_s9 + 0x37e) == *(char *)(in_a0 + 1))) {
    in_a0 += 2;
    _LVL276(uRam00000014);
    if ((in_a0 == 0) && (iVar10 = unaff_s1, FUN_00010e7e(uRam00000014), iVar10 != 0)) {
      uVar7 = (uint)*(byte *)(iVar10 + 1);
      puVar4 = (undefined2 *)&stack0x00000010;
      puVar3 = (undefined *)(iVar10 + 2);
      in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)*(byte *)(iVar10 + 1);
      puVar6 = puVar4;
      while( true ) {
        uVar7 -= 1;
        puVar6 = (undefined2 *)((int)puVar6 + 1);
        if (uVar7 == 0xffffffff) break;
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        *(undefined *)puVar6 = uVar2;
      }
      iVar10 = unaff_s1;
      FUN_00010eaa(uRam00000014);
      if (iVar10 != 0) {
        bVar1 = *(byte *)(iVar10 + 1);
        for (uVar7 = 0; bVar1 != uVar7; uVar7 += 1) {
          *(undefined *)((int)&stack0x00000010 + bStack00000010 + uVar7 + 1) =
               *(undefined *)(iVar10 + 2 + uVar7);
        }
        in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)(byte)(bVar1 + bStack00000010);
      }
      FUN_00010ed2(uRam00000014);
      *(undefined *)(unaff_s0 + 6) = 0;
      iVar10 = unaff_s3 + unaff_s8 * 0x5d8;
      for (uVar7 = 0; uVar7 < *(byte *)(iVar10 + 0x3b0); uVar7 = uVar7 + 1 & 0xff) {
        iVar9 = iVar10 + uVar7;
        uVar5 = (uint)*(byte *)(iVar9 + 0x3b1);
        FUN_0001105e(uVar5,uRam00000014);
        if (((int)puVar4 >> (uVar5 & 0x1f) & 1U) == 0) {
          if (*(char *)(iVar9 + 0x3b1) < '\0') goto _L0;
        }
        else {
          bVar1 = *(byte *)(unaff_s0 + 6);
          *(undefined *)(unaff_s0 + (uint)bVar1 + 7) = *(undefined *)(iVar9 + 0x3b1);
          *(byte *)(unaff_s0 + 6) = bVar1 + 1;
        }
      }
      iVar10 = unaff_s1;
      FUN_00010efc(uRam00000014);
      if (iVar10 != 0) {
        *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(iVar10 + 2);
        puVar3 = (undefined *)(iVar10 + 5);
        *(undefined *)(unaff_s0 + 0x16) = *(undefined *)(iVar10 + 4);
        for (puVar8 = (undefined *)(unaff_s0 + 0x17); puVar8 != (undefined *)(unaff_s0 + 0x27);
            puVar8 = puVar8 + 1) {
          uVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar8 = uVar2;
        }
        *(undefined2 *)(unaff_s0 + 0x28) = *(undefined2 *)(iVar10 + 0x15);
        *(uint *)(unaff_s0 + 0x2c) = (uint)*(ushort *)(iVar10 + 0x17);
        *(undefined *)(unaff_s0 + 0x30) = *(undefined *)(iVar10 + 0x1b);
        *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 2;
      }
      iVar10 = unaff_s1;
      _LVL309(uRam00000014);
      if (iVar10 != 0) {
        bVar1 = *(byte *)(iVar10 + 8);
        *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 1;
        *(byte *)(unaff_s0 + 0x46) = bVar1 & 0xf;
        *(byte *)(unaff_s0 + 0x47) = bVar1 >> 4 & 6;
      }
      _LVL314(uRam00000014);
      FUN_00010fa4(uRam00000014);
      iVar10 = unaff_s1;
      FUN_00010fb4(uRam00000014);
      if (iVar10 == 0) {
        _LVL336(uRam00000014);
        if (unaff_s1 != 0) {
          in_stack_00000010 |= 8;
        }
      }
      else {
        in_stack_00000010 |= 0x20;
      }
      if (iRam00000000 != 0) {
        if ((in_stack_00000010 & 0x28) == 0) goto _L0;
        FUN_00010ff8(uRam00000014);
        FUN_00011008(uRam00000014);
      }
      bVar1 = DAT_00000017;
      *(undefined2 *)(unaff_s0 + 0x44) = 0;
      if (uRam00000014._2_1_ < bVar1) {
        iVar9 = 0;
        iVar10 = -1;
        do {
          if (*(char *)(iVar9 + 0x1e) == '\0') {
            if (iVar10 == -1) {
              iVar10 = in_a0;
            }
          }
          else {
            FUN_000110ec(iVar9 + 0x18,6);
            if (extraout_a0 == 0) {
              *(undefined *)(in_a0 * 7 + 0x1e) = 1;
              iVar10 = in_a0;
              goto _L0;
            }
          }
          in_a0 += 1;
          iVar9 += 7;
        } while (in_a0 != 10);
        if (iVar10 != -1) {
          FUN_0001113e();
          *(undefined *)(iVar10 * 7 + 0x1e) = 1;
_L0:
          *(short *)(unaff_s0 + 0x44) = (short)iVar10 + 1;
          uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
        }
      }
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_00010e2a(void)

{
  FUN_00010e2a();
  return;
}



void _LVL276(uint3 uRam00000014)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int in_a0;
  undefined *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int extraout_a0;
  undefined2 *puVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int unaff_s3;
  int iVar10;
  int unaff_s8;
  byte bStack00000010;
  ushort in_stack_00000010;
  
  _LVL276(uRam00000014);
  if ((in_a0 == 0) && (iVar10 = unaff_s1, FUN_00010e7e(uRam00000014), iVar10 != 0)) {
    uVar7 = (uint)*(byte *)(iVar10 + 1);
    puVar4 = (undefined2 *)&stack0x00000010;
    puVar3 = (undefined *)(iVar10 + 2);
    in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)*(byte *)(iVar10 + 1);
    puVar6 = puVar4;
    while( true ) {
      uVar7 -= 1;
      puVar6 = (undefined2 *)((int)puVar6 + 1);
      if (uVar7 == 0xffffffff) break;
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      *(undefined *)puVar6 = uVar2;
    }
    iVar10 = unaff_s1;
    FUN_00010eaa(uRam00000014);
    if (iVar10 != 0) {
      bVar1 = *(byte *)(iVar10 + 1);
      for (uVar7 = 0; bVar1 != uVar7; uVar7 += 1) {
        *(undefined *)((int)&stack0x00000010 + bStack00000010 + uVar7 + 1) =
             *(undefined *)(iVar10 + 2 + uVar7);
      }
      in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)(byte)(bVar1 + bStack00000010);
    }
    FUN_00010ed2(uRam00000014);
    *(undefined *)(unaff_s0 + 6) = 0;
    iVar10 = unaff_s3 + unaff_s8 * 0x5d8;
    for (uVar7 = 0; uVar7 < *(byte *)(iVar10 + 0x3b0); uVar7 = uVar7 + 1 & 0xff) {
      iVar9 = iVar10 + uVar7;
      uVar5 = (uint)*(byte *)(iVar9 + 0x3b1);
      FUN_0001105e(uVar5,uRam00000014);
      if (((int)puVar4 >> (uVar5 & 0x1f) & 1U) == 0) {
        if (*(char *)(iVar9 + 0x3b1) < '\0') goto _L0;
      }
      else {
        bVar1 = *(byte *)(unaff_s0 + 6);
        *(undefined *)(unaff_s0 + (uint)bVar1 + 7) = *(undefined *)(iVar9 + 0x3b1);
        *(byte *)(unaff_s0 + 6) = bVar1 + 1;
      }
    }
    iVar10 = unaff_s1;
    FUN_00010efc(uRam00000014);
    if (iVar10 != 0) {
      *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(iVar10 + 2);
      puVar3 = (undefined *)(iVar10 + 5);
      *(undefined *)(unaff_s0 + 0x16) = *(undefined *)(iVar10 + 4);
      for (puVar8 = (undefined *)(unaff_s0 + 0x17); puVar8 != (undefined *)(unaff_s0 + 0x27);
          puVar8 = puVar8 + 1) {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar8 = uVar2;
      }
      *(undefined2 *)(unaff_s0 + 0x28) = *(undefined2 *)(iVar10 + 0x15);
      *(uint *)(unaff_s0 + 0x2c) = (uint)*(ushort *)(iVar10 + 0x17);
      *(undefined *)(unaff_s0 + 0x30) = *(undefined *)(iVar10 + 0x1b);
      *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 2;
    }
    iVar10 = unaff_s1;
    _LVL309(uRam00000014);
    if (iVar10 != 0) {
      bVar1 = *(byte *)(iVar10 + 8);
      *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 1;
      *(byte *)(unaff_s0 + 0x46) = bVar1 & 0xf;
      *(byte *)(unaff_s0 + 0x47) = bVar1 >> 4 & 6;
    }
    _LVL314(uRam00000014);
    FUN_00010fa4(uRam00000014);
    iVar10 = unaff_s1;
    FUN_00010fb4(uRam00000014);
    if (iVar10 == 0) {
      _LVL336(uRam00000014);
      if (unaff_s1 != 0) {
        in_stack_00000010 |= 8;
      }
    }
    else {
      in_stack_00000010 |= 0x20;
    }
    if (iRam00000000 != 0) {
      if ((in_stack_00000010 & 0x28) == 0) goto _L0;
      FUN_00010ff8(uRam00000014);
      FUN_00011008(uRam00000014);
    }
    bVar1 = DAT_00000017;
    *(undefined2 *)(unaff_s0 + 0x44) = 0;
    if (uRam00000014._2_1_ < bVar1) {
      iVar9 = 0;
      iVar10 = -1;
      do {
        if (*(char *)(iVar9 + 0x1e) == '\0') {
          if (iVar10 == -1) {
            iVar10 = in_a0;
          }
        }
        else {
          FUN_000110ec(iVar9 + 0x18,6);
          if (extraout_a0 == 0) {
            *(undefined *)(in_a0 * 7 + 0x1e) = 1;
            iVar10 = in_a0;
            goto _L0;
          }
        }
        in_a0 += 1;
        iVar9 += 7;
      } while (in_a0 != 10);
      if (iVar10 != -1) {
        FUN_0001113e();
        *(undefined *)(iVar10 * 7 + 0x1e) = 1;
_L0:
        *(short *)(unaff_s0 + 0x44) = (short)iVar10 + 1;
        uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
      }
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_00010e7e(uint3 uRam00000014)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int in_a0;
  undefined *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int extraout_a0;
  undefined2 *puVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int unaff_s3;
  int iVar10;
  int unaff_s7;
  int unaff_s8;
  byte bStack00000010;
  ushort in_stack_00000010;
  
  FUN_00010e7e(uRam00000014);
  if (in_a0 != 0) {
    uVar7 = (uint)*(byte *)(in_a0 + 1);
    puVar4 = (undefined2 *)&stack0x00000010;
    puVar3 = (undefined *)(in_a0 + 2);
    in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)*(byte *)(in_a0 + 1);
    puVar6 = puVar4;
    while( true ) {
      uVar7 -= 1;
      puVar6 = (undefined2 *)((int)puVar6 + 1);
      if (uVar7 == 0xffffffff) break;
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      *(undefined *)puVar6 = uVar2;
    }
    iVar10 = unaff_s1;
    FUN_00010eaa(uRam00000014);
    if (iVar10 != 0) {
      bVar1 = *(byte *)(iVar10 + 1);
      for (uVar7 = 0; bVar1 != uVar7; uVar7 += 1) {
        *(undefined *)((int)&stack0x00000010 + bStack00000010 + uVar7 + 1) =
             *(undefined *)(iVar10 + 2 + uVar7);
      }
      in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)(byte)(bVar1 + bStack00000010);
    }
    FUN_00010ed2(uRam00000014);
    *(undefined *)(unaff_s0 + 6) = 0;
    iVar10 = unaff_s3 + unaff_s8 * 0x5d8;
    for (uVar7 = 0; uVar7 < *(byte *)(iVar10 + 0x3b0); uVar7 = uVar7 + 1 & 0xff) {
      iVar9 = iVar10 + uVar7;
      uVar5 = (uint)*(byte *)(iVar9 + 0x3b1);
      FUN_0001105e(uVar5,uRam00000014);
      if (((int)puVar4 >> (uVar5 & 0x1f) & 1U) == 0) {
        if (*(char *)(iVar9 + 0x3b1) < '\0') goto _L0;
      }
      else {
        bVar1 = *(byte *)(unaff_s0 + 6);
        *(undefined *)(unaff_s0 + (uint)bVar1 + 7) = *(undefined *)(iVar9 + 0x3b1);
        *(byte *)(unaff_s0 + 6) = bVar1 + 1;
      }
    }
    iVar10 = unaff_s1;
    FUN_00010efc(uRam00000014);
    if (iVar10 != 0) {
      *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(iVar10 + 2);
      puVar3 = (undefined *)(iVar10 + 5);
      *(undefined *)(unaff_s0 + 0x16) = *(undefined *)(iVar10 + 4);
      for (puVar8 = (undefined *)(unaff_s0 + 0x17); puVar8 != (undefined *)(unaff_s0 + 0x27);
          puVar8 = puVar8 + 1) {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar8 = uVar2;
      }
      *(undefined2 *)(unaff_s0 + 0x28) = *(undefined2 *)(iVar10 + 0x15);
      *(uint *)(unaff_s0 + 0x2c) = (uint)*(ushort *)(iVar10 + 0x17);
      *(undefined *)(unaff_s0 + 0x30) = *(undefined *)(iVar10 + 0x1b);
      *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 2;
    }
    iVar10 = unaff_s1;
    _LVL309(uRam00000014);
    if (iVar10 != 0) {
      bVar1 = *(byte *)(iVar10 + 8);
      *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 1;
      *(byte *)(unaff_s0 + 0x46) = bVar1 & 0xf;
      *(byte *)(unaff_s0 + 0x47) = bVar1 >> 4 & 6;
    }
    _LVL314(uRam00000014);
    FUN_00010fa4(uRam00000014);
    iVar10 = unaff_s1;
    FUN_00010fb4(uRam00000014);
    if (iVar10 == 0) {
      _LVL336(uRam00000014);
      if (unaff_s1 != 0) {
        in_stack_00000010 |= 8;
      }
    }
    else {
      in_stack_00000010 |= 0x20;
    }
    if (iRam00000000 != 0) {
      if ((in_stack_00000010 & 0x28) == 0) goto _L0;
      FUN_00010ff8(uRam00000014);
      FUN_00011008(uRam00000014);
    }
    bVar1 = DAT_00000017;
    *(undefined2 *)(unaff_s0 + 0x44) = 0;
    if (uRam00000014._2_1_ < bVar1) {
      iVar9 = 0;
      iVar10 = -1;
      do {
        if (*(char *)(iVar9 + 0x1e) == '\0') {
          if (iVar10 == -1) {
            iVar10 = unaff_s7;
          }
        }
        else {
          FUN_000110ec(iVar9 + 0x18,6);
          if (extraout_a0 == 0) {
            *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
            iVar10 = unaff_s7;
            goto _L0;
          }
        }
        unaff_s7 += 1;
        iVar9 += 7;
      } while (unaff_s7 != 10);
      if (iVar10 != -1) {
        FUN_0001113e();
        *(undefined *)(iVar10 * 7 + 0x1e) = 1;
_L0:
        *(short *)(unaff_s0 + 0x44) = (short)iVar10 + 1;
        uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
      }
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_00010eaa(uint3 uRam00000014)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int in_a0;
  uint uVar3;
  int extraout_a0;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int unaff_s3;
  int iVar8;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  byte bStack00000010;
  ushort in_stack_00000010;
  
  FUN_00010eaa(uRam00000014);
  if (in_a0 != 0) {
    bVar1 = *(byte *)(in_a0 + 1);
    for (uVar5 = 0; bVar1 != uVar5; uVar5 += 1) {
      *(undefined *)((int)&stack0x00000010 + bStack00000010 + uVar5 + 1) =
           *(undefined *)(in_a0 + 2 + uVar5);
    }
    in_stack_00000010 = in_stack_00000010 & 0xff00 | (ushort)(byte)(bVar1 + bStack00000010);
  }
  FUN_00010ed2(uRam00000014);
  *(undefined *)(unaff_s0 + 6) = 0;
  iVar8 = unaff_s3 + unaff_s8 * 0x5d8;
  for (uVar5 = 0; uVar5 < *(byte *)(iVar8 + 0x3b0); uVar5 = uVar5 + 1 & 0xff) {
    iVar7 = iVar8 + uVar5;
    uVar3 = (uint)*(byte *)(iVar7 + 0x3b1);
    FUN_0001105e(uVar3,uRam00000014);
    if ((unaff_s9 >> (uVar3 & 0x1f) & 1U) == 0) {
      if (*(char *)(iVar7 + 0x3b1) < '\0') goto _L0;
    }
    else {
      bVar1 = *(byte *)(unaff_s0 + 6);
      *(undefined *)(unaff_s0 + (uint)bVar1 + 7) = *(undefined *)(iVar7 + 0x3b1);
      *(byte *)(unaff_s0 + 6) = bVar1 + 1;
    }
  }
  iVar8 = unaff_s1;
  FUN_00010efc(uRam00000014);
  if (iVar8 != 0) {
    *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(iVar8 + 2);
    puVar4 = (undefined *)(iVar8 + 5);
    *(undefined *)(unaff_s0 + 0x16) = *(undefined *)(iVar8 + 4);
    for (puVar6 = (undefined *)(unaff_s0 + 0x17); puVar6 != (undefined *)(unaff_s0 + 0x27);
        puVar6 = puVar6 + 1) {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar6 = uVar2;
    }
    *(undefined2 *)(unaff_s0 + 0x28) = *(undefined2 *)(iVar8 + 0x15);
    *(uint *)(unaff_s0 + 0x2c) = (uint)*(ushort *)(iVar8 + 0x17);
    *(undefined *)(unaff_s0 + 0x30) = *(undefined *)(iVar8 + 0x1b);
    *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 2;
  }
  iVar8 = unaff_s1;
  _LVL309(uRam00000014);
  if (iVar8 != 0) {
    bVar1 = *(byte *)(iVar8 + 8);
    *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 1;
    *(byte *)(unaff_s0 + 0x46) = bVar1 & 0xf;
    *(byte *)(unaff_s0 + 0x47) = bVar1 >> 4 & 6;
  }
  _LVL314(uRam00000014);
  FUN_00010fa4(uRam00000014);
  iVar8 = unaff_s1;
  FUN_00010fb4(uRam00000014);
  if (iVar8 == 0) {
    _LVL336(uRam00000014);
    if (unaff_s1 != 0) {
      in_stack_00000010 |= 8;
    }
  }
  else {
    in_stack_00000010 |= 0x20;
  }
  if (iRam00000000 != 0) {
    if ((in_stack_00000010 & 0x28) == 0) goto _L0;
    FUN_00010ff8(uRam00000014);
    FUN_00011008(uRam00000014);
  }
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (uRam00000014._2_1_ < bVar1) {
    iVar7 = 0;
    iVar8 = -1;
    do {
      if (*(char *)(iVar7 + 0x1e) == '\0') {
        if (iVar8 == -1) {
          iVar8 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar7 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar8 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar7 += 7;
    } while (unaff_s7 != 10);
    if (iVar8 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar8 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar8 + 1;
      uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_00010ed2(uint3 uRam00000014)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int in_a0;
  uint uVar3;
  int extraout_a0;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int unaff_s3;
  int iVar7;
  int unaff_s7;
  int unaff_s8;
  uint uVar8;
  ushort in_stack_00000010;
  
  FUN_00010ed2(uRam00000014);
  *(undefined *)(unaff_s0 + 6) = 0;
  iVar7 = unaff_s3 + unaff_s8 * 0x5d8;
  for (uVar8 = 0; uVar8 < *(byte *)(iVar7 + 0x3b0); uVar8 = uVar8 + 1 & 0xff) {
    iVar6 = iVar7 + uVar8;
    uVar3 = (uint)*(byte *)(iVar6 + 0x3b1);
    FUN_0001105e(uVar3,uRam00000014);
    if ((in_a0 >> (uVar3 & 0x1f) & 1U) == 0) {
      if (*(char *)(iVar6 + 0x3b1) < '\0') goto _L0;
    }
    else {
      bVar1 = *(byte *)(unaff_s0 + 6);
      *(undefined *)(unaff_s0 + (uint)bVar1 + 7) = *(undefined *)(iVar6 + 0x3b1);
      *(byte *)(unaff_s0 + 6) = bVar1 + 1;
    }
  }
  iVar7 = unaff_s1;
  FUN_00010efc(uRam00000014);
  if (iVar7 != 0) {
    *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(iVar7 + 2);
    puVar4 = (undefined *)(iVar7 + 5);
    *(undefined *)(unaff_s0 + 0x16) = *(undefined *)(iVar7 + 4);
    for (puVar5 = (undefined *)(unaff_s0 + 0x17); puVar5 != (undefined *)(unaff_s0 + 0x27);
        puVar5 = puVar5 + 1) {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar5 = uVar2;
    }
    *(undefined2 *)(unaff_s0 + 0x28) = *(undefined2 *)(iVar7 + 0x15);
    *(uint *)(unaff_s0 + 0x2c) = (uint)*(ushort *)(iVar7 + 0x17);
    *(undefined *)(unaff_s0 + 0x30) = *(undefined *)(iVar7 + 0x1b);
    *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 2;
  }
  iVar7 = unaff_s1;
  _LVL309(uRam00000014);
  if (iVar7 != 0) {
    bVar1 = *(byte *)(iVar7 + 8);
    *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 1;
    *(byte *)(unaff_s0 + 0x46) = bVar1 & 0xf;
    *(byte *)(unaff_s0 + 0x47) = bVar1 >> 4 & 6;
  }
  _LVL314(uRam00000014);
  FUN_00010fa4(uRam00000014);
  iVar7 = unaff_s1;
  FUN_00010fb4(uRam00000014);
  if (iVar7 == 0) {
    _LVL336(uRam00000014);
    if (unaff_s1 != 0) {
      in_stack_00000010 |= 8;
    }
  }
  else {
    in_stack_00000010 |= 0x20;
  }
  if (iRam00000000 != 0) {
    if ((in_stack_00000010 & 0x28) == 0) goto _L0;
    FUN_00010ff8(uRam00000014);
    FUN_00011008(uRam00000014);
  }
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (uRam00000014._2_1_ < bVar1) {
    iVar6 = 0;
    iVar7 = -1;
    do {
      if (*(char *)(iVar6 + 0x1e) == '\0') {
        if (iVar7 == -1) {
          iVar7 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar6 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar7 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar6 += 7;
    } while (unaff_s7 != 10);
    if (iVar7 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar7 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar7 + 1;
      uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_00010efc(uint3 uRam00000014)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  int in_a0;
  int extraout_a0;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int unaff_s7;
  ushort in_stack_00000010;
  
  FUN_00010efc(uRam00000014);
  if (in_a0 != 0) {
    *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(in_a0 + 2);
    puVar4 = (undefined *)(in_a0 + 5);
    *(undefined *)(unaff_s0 + 0x16) = *(undefined *)(in_a0 + 4);
    for (puVar5 = (undefined *)(unaff_s0 + 0x17); puVar5 != (undefined *)(unaff_s0 + 0x27);
        puVar5 = puVar5 + 1) {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar5 = uVar2;
    }
    *(undefined2 *)(unaff_s0 + 0x28) = *(undefined2 *)(in_a0 + 0x15);
    *(uint *)(unaff_s0 + 0x2c) = (uint)*(ushort *)(in_a0 + 0x17);
    *(undefined *)(unaff_s0 + 0x30) = *(undefined *)(in_a0 + 0x1b);
    *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 2;
  }
  iVar3 = unaff_s1;
  _LVL309(uRam00000014);
  if (iVar3 != 0) {
    bVar1 = *(byte *)(iVar3 + 8);
    *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 1;
    *(byte *)(unaff_s0 + 0x46) = bVar1 & 0xf;
    *(byte *)(unaff_s0 + 0x47) = bVar1 >> 4 & 6;
  }
  _LVL314(uRam00000014);
  FUN_00010fa4(uRam00000014);
  iVar3 = unaff_s1;
  FUN_00010fb4(uRam00000014);
  if (iVar3 == 0) {
    _LVL336(uRam00000014);
    if (unaff_s1 != 0) {
      in_stack_00000010 |= 8;
    }
  }
  else {
    in_stack_00000010 |= 0x20;
  }
  if (iRam00000000 != 0) {
    if ((in_stack_00000010 & 0x28) == 0) goto _L0;
    FUN_00010ff8(uRam00000014);
    FUN_00011008(uRam00000014);
  }
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (uRam00000014._2_1_ < bVar1) {
    iVar6 = 0;
    iVar3 = -1;
    do {
      if (*(char *)(iVar6 + 0x1e) == '\0') {
        if (iVar3 == -1) {
          iVar3 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar6 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar3 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar6 += 7;
    } while (unaff_s7 != 10);
    if (iVar3 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar3 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar3 + 1;
      uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void _LVL309(uint3 uRam00000014)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int in_a0;
  int extraout_a0;
  int iVar3;
  int unaff_s7;
  ushort in_stack_00000010;
  
  _LVL309(uRam00000014);
  if (in_a0 != 0) {
    bVar1 = *(byte *)(in_a0 + 8);
    *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 1;
    *(byte *)(unaff_s0 + 0x46) = bVar1 & 0xf;
    *(byte *)(unaff_s0 + 0x47) = bVar1 >> 4 & 6;
  }
  _LVL314(uRam00000014);
  FUN_00010fa4(uRam00000014);
  iVar2 = unaff_s1;
  FUN_00010fb4(uRam00000014);
  if (iVar2 == 0) {
    _LVL336(uRam00000014);
    if (unaff_s1 != 0) {
      in_stack_00000010 |= 8;
    }
  }
  else {
    in_stack_00000010 |= 0x20;
  }
  if (iRam00000000 != 0) {
    if ((in_stack_00000010 & 0x28) == 0) goto _L0;
    FUN_00010ff8(uRam00000014);
    FUN_00011008(uRam00000014);
  }
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (uRam00000014._2_1_ < bVar1) {
    iVar3 = 0;
    iVar2 = -1;
    do {
      if (*(char *)(iVar3 + 0x1e) == '\0') {
        if (iVar2 == -1) {
          iVar2 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar3 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar2 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar3 += 7;
    } while (unaff_s7 != 10);
    if (iVar2 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar2 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar2 + 1;
      uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void _LVL314(uint3 uRam00000014)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int extraout_a0;
  int iVar3;
  int unaff_s7;
  ushort in_stack_00000010;
  
  _LVL314(uRam00000014);
  FUN_00010fa4(uRam00000014);
  iVar2 = unaff_s1;
  FUN_00010fb4(uRam00000014);
  if (iVar2 == 0) {
    _LVL336(uRam00000014);
    if (unaff_s1 != 0) {
      in_stack_00000010 |= 8;
    }
  }
  else {
    in_stack_00000010 |= 0x20;
  }
  if (iRam00000000 != 0) {
    if ((in_stack_00000010 & 0x28) == 0) goto _L0;
    FUN_00010ff8(uRam00000014);
    FUN_00011008(uRam00000014);
  }
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (uRam00000014._2_1_ < bVar1) {
    iVar3 = 0;
    iVar2 = -1;
    do {
      if (*(char *)(iVar3 + 0x1e) == '\0') {
        if (iVar2 == -1) {
          iVar2 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar3 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar2 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar3 += 7;
    } while (unaff_s7 != 10);
    if (iVar2 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar2 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar2 + 1;
      uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_00010fa4(uint3 uRam00000014)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int extraout_a0;
  int iVar3;
  int unaff_s7;
  ushort in_stack_00000010;
  
  FUN_00010fa4(uRam00000014);
  iVar2 = unaff_s1;
  FUN_00010fb4(uRam00000014);
  if (iVar2 == 0) {
    _LVL336(uRam00000014);
    if (unaff_s1 != 0) {
      in_stack_00000010 |= 8;
    }
  }
  else {
    in_stack_00000010 |= 0x20;
  }
  if (iRam00000000 != 0) {
    if ((in_stack_00000010 & 0x28) == 0) goto _L0;
    FUN_00010ff8(uRam00000014);
    FUN_00011008(uRam00000014);
  }
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (uRam00000014._2_1_ < bVar1) {
    iVar3 = 0;
    iVar2 = -1;
    do {
      if (*(char *)(iVar3 + 0x1e) == '\0') {
        if (iVar2 == -1) {
          iVar2 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar3 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar2 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar3 += 7;
    } while (unaff_s7 != 10);
    if (iVar2 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar2 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar2 + 1;
      uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_00010fb4(uint3 uRam00000014)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int in_a0;
  int extraout_a0;
  int iVar3;
  int unaff_s7;
  ushort in_stack_00000010;
  
  FUN_00010fb4(uRam00000014);
  if (in_a0 == 0) {
    _LVL336(uRam00000014);
    if (unaff_s1 != 0) {
      in_stack_00000010 |= 8;
    }
  }
  else {
    in_stack_00000010 |= 0x20;
  }
  if (iRam00000000 != 0) {
    if ((in_stack_00000010 & 0x28) == 0) goto _L0;
    FUN_00010ff8(uRam00000014);
    FUN_00011008(uRam00000014);
  }
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (uRam00000014._2_1_ < bVar1) {
    iVar3 = 0;
    iVar2 = -1;
    do {
      if (*(char *)(iVar3 + 0x1e) == '\0') {
        if (iVar2 == -1) {
          iVar2 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar3 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar2 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar3 += 7;
    } while (unaff_s7 != 10);
    if (iVar2 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar2 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar2 + 1;
      uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_00010ff8(uint3 uRam00000014)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int extraout_a0;
  int iVar3;
  int unaff_s7;
  
  FUN_00010ff8(uRam00000014);
  FUN_00011008(uRam00000014);
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (uRam00000014._2_1_ < bVar1) {
    iVar3 = 0;
    iVar2 = -1;
    do {
      if (*(char *)(iVar3 + 0x1e) == '\0') {
        if (iVar2 == -1) {
          iVar2 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar3 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar2 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar3 += 7;
    } while (unaff_s7 != 10);
    if (iVar2 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar2 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar2 + 1;
      uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
    }
  }
  FUN_00010e2a();
  return;
}



void FUN_00011008(uint3 param_1)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int extraout_a0;
  int iVar3;
  int unaff_s7;
  
  FUN_00011008(param_1);
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (param_1._2_1_ < bVar1) {
    iVar3 = 0;
    iVar2 = -1;
    do {
      if (*(char *)(iVar3 + 0x1e) == '\0') {
        if (iVar2 == -1) {
          iVar2 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar3 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar2 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar3 += 7;
    } while (unaff_s7 != 10);
    if (iVar2 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar2 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar2 + 1;
      param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ + 1) << 0x10;
    }
  }
  FUN_00010e2a();
  return;
}



void FUN_0001105e(uint param_1,uint3 uRam00000014)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  int extraout_a0;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int unaff_s3;
  int unaff_s7;
  int unaff_s8;
  uint unaff_s10;
  int unaff_s11;
  ushort in_stack_00000010;
  
  while( true ) {
    FUN_0001105e(param_1,uRam00000014);
    if ((unaff_s11 >> (param_1 & 0x1f) & 1U) == 0) {
      if (*(char *)(unaff_s8 + 0x3b1) < '\0') goto _L0;
    }
    else {
      bVar1 = *(byte *)(unaff_s0 + 6);
      *(undefined *)(unaff_s0 + (uint)bVar1 + 7) = *(undefined *)(unaff_s8 + 0x3b1);
      *(byte *)(unaff_s0 + 6) = bVar1 + 1;
    }
    unaff_s10 = unaff_s10 + 1 & 0xff;
    if (*(byte *)(unaff_s3 + 0x3b0) <= unaff_s10) break;
    unaff_s8 = unaff_s3 + unaff_s10;
    param_1 = (uint)*(byte *)(unaff_s8 + 0x3b1);
  }
  iVar3 = unaff_s1;
  FUN_00010efc(uRam00000014);
  if (iVar3 != 0) {
    *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(iVar3 + 2);
    puVar4 = (undefined *)(iVar3 + 5);
    *(undefined *)(unaff_s0 + 0x16) = *(undefined *)(iVar3 + 4);
    for (puVar5 = (undefined *)(unaff_s0 + 0x17); puVar5 != (undefined *)(unaff_s0 + 0x27);
        puVar5 = puVar5 + 1) {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar5 = uVar2;
    }
    *(undefined2 *)(unaff_s0 + 0x28) = *(undefined2 *)(iVar3 + 0x15);
    *(uint *)(unaff_s0 + 0x2c) = (uint)*(ushort *)(iVar3 + 0x17);
    *(undefined *)(unaff_s0 + 0x30) = *(undefined *)(iVar3 + 0x1b);
    *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 2;
  }
  iVar3 = unaff_s1;
  _LVL309(uRam00000014);
  if (iVar3 != 0) {
    bVar1 = *(byte *)(iVar3 + 8);
    *(uint *)(unaff_s0 + 0x40) = *(uint *)(unaff_s0 + 0x40) | 1;
    *(byte *)(unaff_s0 + 0x46) = bVar1 & 0xf;
    *(byte *)(unaff_s0 + 0x47) = bVar1 >> 4 & 6;
  }
  _LVL314(uRam00000014);
  FUN_00010fa4(uRam00000014);
  iVar3 = unaff_s1;
  FUN_00010fb4(uRam00000014);
  if (iVar3 == 0) {
    _LVL336(uRam00000014);
    if (unaff_s1 != 0) {
      in_stack_00000010 |= 8;
    }
  }
  else {
    in_stack_00000010 |= 0x20;
  }
  if (iRam00000000 != 0) {
    if ((in_stack_00000010 & 0x28) == 0) goto _L0;
    FUN_00010ff8(uRam00000014);
    FUN_00011008(uRam00000014);
  }
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (uRam00000014._2_1_ < bVar1) {
    iVar6 = 0;
    iVar3 = -1;
    do {
      if (*(char *)(iVar6 + 0x1e) == '\0') {
        if (iVar3 == -1) {
          iVar3 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar6 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar3 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar6 += 7;
    } while (unaff_s7 != 10);
    if (iVar3 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar3 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar3 + 1;
      uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void _LVL336(uint3 uRam00000014)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int in_a0;
  int extraout_a0;
  int iVar3;
  int unaff_s7;
  ushort in_stack_00000010;
  
  _LVL336(uRam00000014);
  if (in_a0 != 0) {
    in_stack_00000010 |= 8;
  }
  if (iRam00000000 != 0) {
    if ((in_stack_00000010 & 0x28) == 0) goto _L0;
    FUN_00010ff8(uRam00000014);
    FUN_00011008(uRam00000014);
  }
  bVar1 = DAT_00000017;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  if (uRam00000014._2_1_ < bVar1) {
    iVar3 = 0;
    iVar2 = -1;
    do {
      if (*(char *)(iVar3 + 0x1e) == '\0') {
        if (iVar2 == -1) {
          iVar2 = unaff_s7;
        }
      }
      else {
        FUN_000110ec(iVar3 + 0x18,6);
        if (extraout_a0 == 0) {
          *(undefined *)(unaff_s7 * 7 + 0x1e) = 1;
          iVar2 = unaff_s7;
          goto _L0;
        }
      }
      unaff_s7 += 1;
      iVar3 += 7;
    } while (unaff_s7 != 10);
    if (iVar2 != -1) {
      FUN_0001113e();
      *(undefined *)(iVar2 * 7 + 0x1e) = 1;
_L0:
      *(short *)(unaff_s0 + 0x44) = (short)iVar2 + 1;
      uRam00000014 = uRam00000014 & 0xffff | (uint3)(byte)(uRam00000014._2_1_ + 1) << 0x10;
    }
  }
_L0:
  FUN_00010e2a();
  return;
}



void FUN_000110ec(int param_1,undefined4 param_2)

{
  char cVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  int iVar2;
  int unaff_s3;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  do {
    FUN_000110ec(param_1,param_2);
    iVar2 = unaff_s2;
    if (extraout_a0 == 0) {
      *(undefined *)(unaff_s7 * 7 + unaff_s3 + 0x1e) = 1;
      unaff_s1 = unaff_s7;
_L0:
      cVar1 = *(char *)(unaff_s3 + 0x16);
      *(short *)(unaff_s0 + 0x44) = (short)unaff_s1 + 1;
      *(char *)(unaff_s3 + 0x16) = cVar1 + '\x01';
_L195:
      FUN_00010e2a();
      return;
    }
    while( true ) {
      unaff_s7 += 1;
      unaff_s2 = iVar2 + 7;
      if (unaff_s7 == unaff_s8) {
        if (unaff_s1 == -1) goto _L195;
        FUN_0001113e();
        *(undefined *)(unaff_s1 * 7 + unaff_s3 + 0x1e) = 1;
        goto _L0;
      }
      if (*(char *)(iVar2 + 0x25) != '\0') break;
      iVar2 = unaff_s2;
      if (unaff_s1 == unaff_s9) {
        unaff_s1 = unaff_s7;
      }
    }
    param_2 = 6;
    param_1 = iVar2 + 0x1f;
  } while( true );
}



void FUN_0001113e(void)

{
  char cVar1;
  int unaff_s0;
  short unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_0001113e();
  *(undefined *)(unaff_s2 + unaff_s3 + 0x1e) = 1;
  cVar1 = *(char *)(unaff_s3 + 0x16);
  *(short *)(unaff_s0 + 0x44) = unaff_s1 + 1;
  *(char *)(unaff_s3 + 0x16) = cVar1 + '\x01';
  FUN_00010e2a();
  return;
}



// DWARF DIE: 66f6

void apm_deauth_handler(rxu_mgt_ind *param)

{
  if ((param->inst_nbr != -1) && (param->sta_idx != -1)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// DWARF DIE: 666e

void apm_disassoc_handler(rxu_mgt_ind *param)

{
  if ((param->inst_nbr != -1) && (param->sta_idx != -1)) {
    FUN_00011198();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_00011198(void)

{
  FUN_00011198();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 6641

void apm_beacon_handler(rxu_mgt_ind *param)

{
  return;
}



// DWARF DIE: 65af

void apm_sta_remove(uint8_t vif_idx,uint8_t sta_idx)

{
  FUN_00011212();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011212(void)

{
  FUN_00011212();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


