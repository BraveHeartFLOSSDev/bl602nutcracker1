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
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef ushort uint16_t;

struct co_list_hdr { // DWARF DIE: 915
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 6ad
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: a44
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 9e8
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 936
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: a86
    struct co_list tx_desc_free;
    struct co_list tx_buff_free;
    struct em_desc_node tx_desc_node[26];
    struct em_buf_node tx_buff_node[2];
    struct em_buf_tx_desc * tx_desc;
    uint8_t rx_current;
    undefined field_0x15d;
    undefined field_0x15e;
    undefined field_0x15f;
};

typedef struct llc_ch_asses_tag llc_ch_asses_tag, *Pllc_ch_asses_tag;

typedef char int8_t;

struct llc_ch_asses_tag { // DWARF DIE: 21ee
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef int _ssize_t;

typedef union anon_union.conflictb49 anon_union.conflictb49, *Panon_union.conflictb49;

typedef uint wint_t;

union anon_union.conflictb49 { // DWARF DIE: b49
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictb49_for___value anon_union.conflictb49_for___value, *Panon_union.conflictb49_for___value;

union anon_union.conflictb49_for___value { // DWARF DIE: b49
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: b7b
    int __count;
    union anon_union.conflictb49_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef enum rwip_prio_idx {
    RWIP_PRIO_ADV_HDC_IDX=6,
    RWIP_PRIO_ADV_IDX=5,
    RWIP_PRIO_IDX_MAX=7,
    RWIP_PRIO_INIT_IDX=1,
    RWIP_PRIO_LE_CON_ACT_IDX=4,
    RWIP_PRIO_LE_CON_IDLE_IDX=3,
    RWIP_PRIO_LE_ESTAB_IDX=2,
    RWIP_PRIO_SCAN_IDX=0
} rwip_prio_idx;

typedef enum KE_TASK_TYPE {
    TASK_DBG=3,
    TASK_HCI_ONCHIP=4,
    TASK_LLC=1,
    TASK_LLD=2,
    TASK_LLM=0,
    TASK_MAX=5,
    TASK_NONE=-1
} KE_TASK_TYPE;

typedef enum anon_enum_8.conflictf4 {
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflictf4;

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 1c76
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 1ca1
    uint16_t conn_initial_max_tx_octets;
    uint16_t conn_initial_max_tx_time;
    uint16_t suppted_max_tx_octets;
    uint16_t suppted_max_tx_time;
    uint16_t suppted_max_rx_octets;
    uint16_t suppted_max_rx_time;
};

typedef struct advertising_pdu_params advertising_pdu_params, *Padvertising_pdu_params;

typedef struct ke_msg ke_msg, *Pke_msg;

typedef struct bd_addr bd_addr, *Pbd_addr;

typedef uint16_t ke_msg_id_t;

typedef uint16_t ke_task_id_t;

typedef ulong uint32_t;

struct bd_addr { // DWARF DIE: 379
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 1b01
    struct ke_msg * adv_data_req;
    struct ke_msg * scan_rsp_req;
    struct em_buf_node * adv_desc_node;
    struct em_buf_node * scan_rsp_desc_node;
    struct bd_addr peer_addr;
    uint16_t intervalmin;
    uint16_t intervalmax;
    uint8_t channelmap;
    uint8_t filterpolicy;
    uint8_t type;
    uint8_t datalen;
    uint8_t scanrsplen;
    uint8_t own_addr_type;
    uint8_t peer_addr_type;
    _Bool adv_ldc_flag;
    undefined field_0x22;
    undefined field_0x23;
};

struct ke_msg { // DWARF DIE: 141b
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 1d3c
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 1bd8
    struct em_buf_node * conn_req_desc_node;
    uint16_t interval;
    uint16_t window;
    uint8_t filterpolicy;
    uint8_t type;
    uint8_t filter_duplicate;
    uint8_t own_addr_type;
};

typedef struct llm_le_env_tag llm_le_env_tag, *Pllm_le_env_tag;

typedef struct channel_map_assess channel_map_assess, *Pchannel_map_assess;

typedef struct evt_mask evt_mask, *Pevt_mask;

typedef struct access_addr_gen access_addr_gen, *Paccess_addr_gen;

typedef struct ea_elt_tag ea_elt_tag, *Pea_elt_tag;

typedef enum t_key_multiplication_type {
    LLM_DHKEY_GENERATION=2,
    LLM_ECC_IDLE=0,
    LLM_PUBLIC_KEY_GENERATION=1
} t_key_multiplication_type;

typedef enum t_key_multiplication_type t_key_multi_type;

typedef struct le_chnl_map le_chnl_map, *Ple_chnl_map;

struct ea_elt_tag { // DWARF DIE: 1a19
    struct co_list_hdr hdr;
    struct ea_elt_tag * linked_element;
    uint32_t timestamp;
    uint32_t asap_limit;
    uint16_t asap_settings;
    uint16_t duration_min;
    uint16_t delay;
    uint8_t current_prio;
    uint8_t stop_latency1;
    uint8_t stop_latency2;
    uint8_t start_latency;
    undefined field_0x1a;
    undefined field_0x1b;
    void (* ea_cb_start)(struct ea_elt_tag *);
    void (* ea_cb_stop)(struct ea_elt_tag *);
    void (* ea_cb_cancel)(struct ea_elt_tag *);
    void * env;
};

struct le_chnl_map { // DWARF DIE: 3ab
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 1d70
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 34c
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 1c41
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 1de1
    struct co_list enc_req;
    struct co_list adv_list;
    struct scanning_pdu_params * scanning_params;
    struct advertising_pdu_params * advertising_params;
    struct co_list cnx_list;
    struct data_len_ext data_len_val;
    struct channel_map_assess ch_map_assess;
    struct evt_mask eventmask;
    struct access_addr_gen aa;
    undefined field_0x43;
    uint16_t conhdl_alloc;
    undefined field_0x46;
    undefined field_0x47;
    struct ea_elt_tag * elt;
    _Bool last_opcode;
    undefined field_0x4d;
    uint16_t opcode2;
    uint8_t state2;
    undefined field_0x51;
    undefined field_0x52;
    undefined field_0x53;
    struct ea_elt_tag * elt_coext_scan;
    _Bool enc_pend;
    struct llm_test_mode test_mode;
    struct bd_addr rand_add;
    struct bd_addr public_add;
    undefined field_0x67;
    uint16_t enh_priv_rpa_timeout;
    uint16_t p256_byte_process_timeout;
    uint16_t opcode;
    uint8_t state;
    uint8_t enh_priv_info;
    uint8_t curr_addr_type;
    uint8_t nb_dev_in_wl;
    uint8_t nb_dev_in_hw_wl;
    struct t_public_key256 public_key256;
    uint8_t secret_key256[32];
    t_key_multi_type cur_ecc_multiplication;
};

typedef enum llc_op_type {
    LLC_OP_DLE_UPD=3,
    LLC_OP_ENCRYPT=2,
    LLC_OP_LOC_PARAM_UPD=0,
    LLC_OP_MAX=4,
    LLC_OP_REM_PARAM_UPD=1
} llc_op_type;

typedef enum llc_proc_field {
    LLC_DISC=3,
    LLC_LOC_PROC=0,
    LLC_REM_PROC=1,
    LLC_TRAFFIC_PAUSED=2
} llc_proc_field;

typedef long int32_t;

typedef enum TASK_API_ID {
    TASK_ID_AHI=16,
    TASK_ID_AM0=-16,
    TASK_ID_AM0_HAS=-15,
    TASK_ID_ANPC=48,
    TASK_ID_ANPS=47,
    TASK_ID_APP=15,
    TASK_ID_BASC=37,
    TASK_ID_BASS=36,
    TASK_ID_BCSC=64,
    TASK_ID_BCSS=63,
    TASK_ID_BLPC=29,
    TASK_ID_BLPS=28,
    TASK_ID_CPPC=52,
    TASK_ID_CPPS=51,
    TASK_ID_CSCPC=46,
    TASK_ID_CSCPS=45,
    TASK_ID_DBG=3,
    TASK_ID_DISC=21,
    TASK_ID_DISPLAY=9,
    TASK_ID_DISS=20,
    TASK_ID_ENVC=58,
    TASK_ID_ENVS=57,
    TASK_ID_FINDL=24,
    TASK_ID_FINDT=25,
    TASK_ID_GAPC=14,
    TASK_ID_GAPM=13,
    TASK_ID_GATTC=12,
    TASK_ID_GATTM=11,
    TASK_ID_GLPC=42,
    TASK_ID_GLPS=41,
    TASK_ID_HCI=8,
    TASK_ID_HOGPBH=39,
    TASK_ID_HOGPD=38,
    TASK_ID_HOGPRH=40,
    TASK_ID_HRPC=31,
    TASK_ID_HRPS=30,
    TASK_ID_HTPC=26,
    TASK_ID_HTPT=27,
    TASK_ID_INVALID=-1,
    TASK_ID_IPSC=56,
    TASK_ID_IPSS=55,
    TASK_ID_L2CC=10,
    TASK_ID_LANC=54,
    TASK_ID_LANS=53,
    TASK_ID_LB=6,
    TASK_ID_LC=5,
    TASK_ID_LD=7,
    TASK_ID_LLC=1,
    TASK_ID_LLD=2,
    TASK_ID_LLM=0,
    TASK_ID_LM=4,
    TASK_ID_PASPC=50,
    TASK_ID_PASPS=49,
    TASK_ID_PLXC=68,
    TASK_ID_PLXS=67,
    TASK_ID_PROXM=22,
    TASK_ID_PROXR=23,
    TASK_ID_RSCPC=44,
    TASK_ID_RSCPS=43,
    TASK_ID_SCPPC=35,
    TASK_ID_SCPPS=34,
    TASK_ID_TIPC=33,
    TASK_ID_TIPS=32,
    TASK_ID_UDSC=62,
    TASK_ID_UDSS=61,
    TASK_ID_WPTC=66,
    TASK_ID_WPTS=65,
    TASK_ID_WSCC=60,
    TASK_ID_WSCS=59
} TASK_API_ID;

typedef uint8_t ke_state_t;

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

typedef enum co_error {
    CO_ERROR_ACL_CON_EXISTS=11,
    CO_ERROR_AUTH_FAILURE=5,
    CO_ERROR_CCA_REJ_USE_CLOCK_DRAG=64,
    CO_ERROR_CHANNEL_CLASS_NOT_SUP=46,
    CO_ERROR_COMMAND_DISALLOWED=12,
    CO_ERROR_CONN_ACCEPT_TIMEOUT_EXCEED=16,
    CO_ERROR_CONN_FAILED_TO_BE_EST=62,
    CO_ERROR_CONN_REJ_LIMITED_RESOURCES=13,
    CO_ERROR_CONN_REJ_SECURITY_REASONS=14,
    CO_ERROR_CONN_REJ_UNACCEPTABLE_BDADDR=15,
    CO_ERROR_CONTROLLER_BUSY=58,
    CO_ERROR_CON_LIMIT_EXCEED=9,
    CO_ERROR_CON_TERM_BY_LOCAL_HOST=22,
    CO_ERROR_CON_TIMEOUT=8,
    CO_ERROR_DIFF_TRANSACTION_COLLISION=42,
    CO_ERROR_DIRECT_ADV_TO=60,
    CO_ERROR_EIR_TOO_LARGE=54,
    CO_ERROR_ENC_MODE_NOT_ACCEPT=37,
    CO_ERROR_HARDWARE_FAILURE=3,
    CO_ERROR_HOST_BUSY_PAIRING=56,
    CO_ERROR_HW_MEM_ALLOC_FAIL=1,
    CO_ERROR_HW_UART_OUT_OF_SYNC=0,
    CO_ERROR_INSTANT_PASSED=40,
    CO_ERROR_INSUFFICIENT_SECURITY=47,
    CO_ERROR_INVALID_HCI_PARAM=18,
    CO_ERROR_INVALID_LMP_PARAM=30,
    CO_ERROR_LIMIT_REACHED=67,
    CO_ERROR_LINK_KEY_CANT_CHANGE=38,
    CO_ERROR_LMP_COLLISION=35,
    CO_ERROR_LMP_PDU_NOT_ALLOWED=36,
    CO_ERROR_LMP_RSP_TIMEOUT=34,
    CO_ERROR_MEMORY_CAPA_EXCEED=7,
    CO_ERROR_NO_ERROR=0,
    CO_ERROR_OP_CANCELL_BY_HOST=68,
    CO_ERROR_PAGE_TIMEOUT=4,
    CO_ERROR_PAIRING_NOT_ALLOWED=24,
    CO_ERROR_PAIRING_WITH_UNIT_KEY_NOT_SUP=41,
    CO_ERROR_PARAM_OUT_OF_MAND_RANGE=48,
    CO_ERROR_PIN_MISSING=6,
    CO_ERROR_QOS_NOT_SUPPORTED=39,
    CO_ERROR_QOS_REJECTED=45,
    CO_ERROR_QOS_UNACCEPTABLE_PARAM=44,
    CO_ERROR_REMOTE_DEV_POWER_OFF=21,
    CO_ERROR_REMOTE_DEV_TERM_LOW_RESOURCES=20,
    CO_ERROR_REMOTE_USER_TERM_CON=19,
    CO_ERROR_REPEATED_ATTEMPTS=23,
    CO_ERROR_RESERVED_SLOT_VIOLATION=52,
    CO_ERROR_ROLE_CHANGE_NOT_ALLOWED=33,
    CO_ERROR_ROLE_SWITCH_FAIL=53,
    CO_ERROR_ROLE_SWITCH_PEND=50,
    CO_ERROR_SCO_AIR_MODE_REJECTED=29,
    CO_ERROR_SCO_INTERVAL_REJECTED=28,
    CO_ERROR_SCO_OFFSET_REJECTED=27,
    CO_ERROR_SP_NOT_SUPPORTED_HOST=55,
    CO_ERROR_SYNC_CON_LIMIT_DEV_EXCEED=10,
    CO_ERROR_TERMINATED_MIC_FAILURE=61,
    CO_ERROR_UNACCEPTABLE_CONN_INT=59,
    CO_ERROR_UNDEFINED=-1,
    CO_ERROR_UNKNOWN_CONNECTION_ID=2,
    CO_ERROR_UNKNOWN_HCI_COMMAND=1,
    CO_ERROR_UNKNOWN_LMP_PDU=25,
    CO_ERROR_UNKNOW_ADV_ID=66,
    CO_ERROR_UNSPECIFIED_ERROR=31,
    CO_ERROR_UNSUPPORTED=17,
    CO_ERROR_UNSUPPORTED_LMP_PARAM_VALUE=32,
    CO_ERROR_UNSUPPORTED_REMOTE_FEATURE=26
} co_error;

typedef enum hci_evt_code {
    HCI_AUTH_CMP_EVT_CODE=6,
    HCI_AUTH_PAYL_TO_EXP_EVT_CODE=87,
    HCI_CHG_CON_LK_CMP_EVT_CODE=9,
    HCI_CMD_CMP_EVT_CODE=14,
    HCI_CMD_STATUS_EVT_CODE=15,
    HCI_CON_CMP_EVT_CODE=3,
    HCI_CON_PKT_TYPE_CHG_EVT_CODE=29,
    HCI_CON_REQ_EVT_CODE=4,
    HCI_CON_SLV_BCST_CH_MAP_CHG_EVT_CODE=85,
    HCI_CON_SLV_BCST_REC_EVT_CODE=81,
    HCI_CON_SLV_BCST_TO_EVT_CODE=82,
    HCI_DATA_BUF_OVFLW_EVT_CODE=26,
    HCI_DBG_META_EVT_CODE=-1,
    HCI_DISC_CMP_EVT_CODE=5,
    HCI_ENC_CHG_EVT_CODE=8,
    HCI_ENC_KEY_REFRESH_CMP_EVT_CODE=48,
    HCI_ENH_FLUSH_CMP_EVT_CODE=57,
    HCI_EXT_INQ_RES_EVT_CODE=47,
    HCI_FLOW_SPEC_CMP_EVT_CODE=33,
    HCI_FLUSH_OCCURRED_EVT_CODE=17,
    HCI_HW_ERR_EVT_CODE=16,
    HCI_INQ_CMP_EVT_CODE=1,
    HCI_INQ_RES_EVT_CODE=2,
    HCI_INQ_RES_WITH_RSSI_EVT_CODE=34,
    HCI_IO_CAP_REQ_EVT_CODE=49,
    HCI_IO_CAP_RSP_EVT_CODE=50,
    HCI_KEYPRESS_NOTIF_EVT_CODE=60,
    HCI_LE_ADV_REPORT_EVT_SUBCODE=2,
    HCI_LE_CH_SEL_ALGO_EVT_SUBCODE=20,
    HCI_LE_CON_CMP_EVT_SUBCODE=1,
    HCI_LE_CON_UPDATE_CMP_EVT_SUBCODE=3,
    HCI_LE_DATA_LEN_CHG_EVT_SUBCODE=7,
    HCI_LE_DIR_ADV_REP_EVT_SUBCODE=11,
    HCI_LE_ENH_CON_CMP_EVT_SUBCODE=10,
    HCI_LE_GEN_DHKEY_CMP_EVT_SUBCODE=9,
    HCI_LE_LTK_REQUEST_EVT_SUBCODE=5,
    HCI_LE_META_EVT_CODE=62,
    HCI_LE_RD_LOC_P256_PUB_KEY_CMP_EVT_SUBCODE=8,
    HCI_LE_RD_REM_USED_FEATS_CMP_EVT_SUBCODE=4,
    HCI_LE_REM_CON_PARAM_REQ_EVT_SUBCODE=6,
    HCI_LINK_SUPV_TO_CHG_EVT_CODE=56,
    HCI_LK_NOTIF_EVT_CODE=24,
    HCI_LK_REQ_EVT_CODE=23,
    HCI_MASTER_LK_CMP_EVT_CODE=10,
    HCI_MAX_EVT_MSK_PAGE_1_CODE=64,
    HCI_MAX_EVT_MSK_PAGE_2_CODE=88,
    HCI_MAX_SLOT_CHG_EVT_CODE=27,
    HCI_MODE_CHG_EVT_CODE=20,
    HCI_NB_CMP_PKTS_EVT_CODE=19,
    HCI_PAGE_SCAN_REPET_MODE_CHG_EVT_CODE=32,
    HCI_PIN_CODE_REQ_EVT_CODE=22,
    HCI_QOS_SETUP_CMP_EVT_CODE=13,
    HCI_QOS_VIOL_EVT_CODE=30,
    HCI_RD_CLK_OFF_CMP_EVT_CODE=28,
    HCI_RD_REM_EXT_FEATS_CMP_EVT_CODE=35,
    HCI_RD_REM_SUPP_FEATS_CMP_EVT_CODE=11,
    HCI_RD_REM_VER_INFO_CMP_EVT_CODE=12,
    HCI_REM_HOST_SUPP_FEATS_NOTIF_EVT_CODE=61,
    HCI_REM_NAME_REQ_CMP_EVT_CODE=7,
    HCI_REM_OOB_DATA_REQ_EVT_CODE=53,
    HCI_RETURN_LINK_KEYS_EVT_CODE=21,
    HCI_ROLE_CHG_EVT_CODE=18,
    HCI_SLV_PAGE_RSP_TO_EVT_CODE=84,
    HCI_SNIFF_SUB_EVT_CODE=46,
    HCI_SP_CMP_EVT_CODE=54,
    HCI_SYNC_CON_CHG_EVT_CODE=45,
    HCI_SYNC_CON_CMP_EVT_CODE=44,
    HCI_SYNC_TRAIN_CMP_EVT_CODE=79,
    HCI_SYNC_TRAIN_REC_EVT_CODE=80,
    HCI_TRUNC_PAGE_CMP_EVT_CODE=83,
    HCI_USER_CFM_REQ_EVT_CODE=51,
    HCI_USER_PASSKEY_NOTIF_EVT_CODE=59,
    HCI_USER_PASSKEY_REQ_EVT_CODE=52
} hci_evt_code;

typedef struct hci_le_generate_p256_public_key_cmp_evt hci_le_generate_p256_public_key_cmp_evt, *Phci_le_generate_p256_public_key_cmp_evt;

typedef struct t_public_key t_public_key, *Pt_public_key;

struct t_public_key { // DWARF DIE: 4af
    uint8_t x[32];
    uint8_t y[32];
};

struct hci_le_generate_p256_public_key_cmp_evt { // DWARF DIE: 73d
    uint8_t subcode;
    uint8_t status;
    struct t_public_key public_key;
};

typedef struct hci_le_generate_dhkey_cmp_evt hci_le_generate_dhkey_cmp_evt, *Phci_le_generate_dhkey_cmp_evt;

struct hci_le_generate_dhkey_cmp_evt { // DWARF DIE: 704
    uint8_t subcode;
    uint8_t status;
    uint8_t dh_key[32];
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 1343
};

typedef enum HCI_MSG {
    HCI_ACL_DATA_RX=2054,
    HCI_ACL_DATA_TX=2055,
    HCI_CMD_CMP_EVENT=2049,
    HCI_CMD_STAT_EVENT=2050,
    HCI_COMMAND=2053,
    HCI_DBG_EVT=2057,
    HCI_EVENT=2051,
    HCI_LE_EVENT=2052,
    HCI_MSG_ID_FIRST=2048,
    HCI_MSG_ID_LAST=2058,
    HCI_TCI_LMP=2056
} HCI_MSG;

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

struct rwip_rf_api { // DWARF DIE: 181a
    void (* reset)(void);
    void (* force_agc_enable)(_Bool);
    _Bool (* txpwr_dec)(uint8_t);
    _Bool (* txpwr_inc)(uint8_t);
    void (* txpwr_max_set)(int8_t);
    uint8_t (* txpwr_dbm_get)(uint8_t, uint8_t);
    uint8_t (* txpwr_cs_get)(int8_t);
    int8_t (* rssi_convert)(uint8_t);
    uint32_t (* reg_rd)(uint16_t);
    void (* reg_wr)(uint16_t, uint32_t);
    void (* sleep)(void);
    uint8_t txpwr_max;
    int8_t rssi_high_thr;
    int8_t rssi_low_thr;
    int8_t rssi_interf_thr;
    uint8_t wakeup_delay;
    undefined field_0x31;
    undefined field_0x32;
    undefined field_0x33;
};

typedef struct rwip_prio rwip_prio, *Prwip_prio;

struct rwip_prio { // DWARF DIE: 199e
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 167c
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 16a8
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 3d8
    uint8_t ltk[16];
};

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 405
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 470
    uint8_t supp_states[8];
};

typedef enum le_evt_mask {
    LE_ADV_REP_EVT_BIT=1,
    LE_ADV_REP_EVT_MSK=2,
    LE_CH_SEL_ALGO_EVT_BIT=19,
    LE_CH_SEL_ALGO_EVT_MSK=524288,
    LE_CON_CMP_EVT_BIT=0,
    LE_CON_CMP_EVT_MSK=1,
    LE_CON_RD_REM_FEAT_EVT_BIT=3,
    LE_CON_RD_REM_FEAT_EVT_MSK=8,
    LE_CON_UPD_EVT_BIT=2,
    LE_CON_UPD_EVT_MSK=4,
    LE_DATA_LEN_CHG_EVT_BIT=6,
    LE_DATA_LEN_CHG_EVT_MSK=64,
    LE_DFT_EVT_MSK=31,
    LE_DIR_ADV_REP_EVT_BIT=10,
    LE_DIR_ADV_REP_EVT_MSK=1024,
    LE_ENH_CON_CMP_EVT_BIT=9,
    LE_ENH_CON_CMP_EVT_MSK=512,
    LE_EXT_ADV_REP_EVT_BIT=12,
    LE_EXT_ADV_REP_EVT_MSK=4096,
    LE_EXT_ADV_SET_TER_EVT_BIT=17,
    LE_EXT_ADV_SET_TER_EVT_MSK=131072,
    LE_EXT_SCAN_TO_EVT_BIT=16,
    LE_EXT_SCAN_TO_EVT_MSK=65536,
    LE_GEN_DHKEY_CMP_EVT_BIT=8,
    LE_GEN_DHKEY_CMP_EVT_MSK=256,
    LE_LG_TR_KEY_REQ_EVT_BIT=4,
    LE_LG_TR_KEY_REQ_EVT_MSK=16,
    LE_PER_ADV_REP_EVT_BIT=14,
    LE_PER_ADV_REP_EVT_MSK=16384,
    LE_PER_ADV_SYNC_EST_EVT_BIT=13,
    LE_PER_ADV_SYNC_EST_EVT_MSK=8192,
    LE_PER_ADV_SYNC_LOST_EVT_BIT=15,
    LE_PER_ADV_SYNC_LOST_EVT_MSK=-32768,
    LE_PHY_UPD_CMP_EVT_BIT=11,
    LE_PHY_UPD_CMP_EVT_MSK=2048,
    LE_RD_LOC_P256_PUB_KEY_CMP_EVT_BIT=7,
    LE_RD_LOC_P256_PUB_KEY_CMP_EVT_MSK=-128,
    LE_REM_CON_PARA_REQ_EVT_BIT=5,
    LE_REM_CON_PARA_REQ_EVT_MSK=32,
    LE_SCAN_REQ_REC_EVT_BIT=18,
    LE_SCAN_REQ_REC_EVT_MSK=262144
} le_evt_mask;

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: 492
    uint8_t skd[16];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 427
    uint8_t cmds[64];
};

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 2089
    struct co_list elt_prog;
    struct co_list elt_wait;
    struct co_list elt_deferred;
    struct co_list rx_pkt_deferred;
    struct co_list elt_to_be_deleted;
    uint8_t sca;
    _Bool renew;
    uint8_t hw_wa_sleep_compensation;
    undefined field_0x2b;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict130e_for__new anon_union.conflict130e_for__new, *Panon_union.conflict130e_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict1182 anon_struct.conflict1182, *Panon_struct.conflict1182;

typedef struct anon_struct.conflict12c7 anon_struct.conflict12c7, *Panon_struct.conflict12c7;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 1139
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: c3f
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

struct anon_struct.conflict1182 { // DWARF DIE: 1182
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

struct anon_struct.conflict12c7 { // DWARF DIE: 12c7
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict130e_for__new { // DWARF DIE: 130e
    struct anon_struct.conflict1182 _reent;
    struct anon_struct.conflict12c7 _unused;
};

struct _on_exit_args { // DWARF DIE: cc2
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: d17
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: bcf
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 10f4
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: d70
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: d9e
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

struct _reent { // DWARF DIE: f0a
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
    union anon_union.conflict130e_for__new _new;
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

typedef union anon_union.conflict130e anon_union.conflict130e, *Panon_union.conflict130e;

union anon_union.conflict130e { // DWARF DIE: 130e
    struct anon_struct.conflict1182 _reent;
    struct anon_struct.conflict12c7 _unused;
};

typedef enum llm_state_id {
    LLM_ADV_STATE_MASK=-16,
    LLM_COEXT_ADVERTISING_IDLE=16,
    LLM_COEXT_ADVERTISING_INITIATING=18,
    LLM_COEXT_ADVERTISING_SCANNING=17,
    LLM_COEXT_ADVERTISING_STOPPING=19,
    LLM_COEXT_IDLE_IDLE=0,
    LLM_COEXT_IDLE_INITIATING=2,
    LLM_COEXT_IDLE_SCANNING=1,
    LLM_COEXT_IDLE_STOPPING=3,
    LLM_COEXT_STOPPING_IDLE=32,
    LLM_COEXT_STOPPING_INITIATING=34,
    LLM_COEXT_STOPPING_SCANNING=33,
    LLM_COEXT_STOPPING_STOPPING=35,
    LLM_SCAN_INIT_STATE_MASK=15,
    LLM_STATE_MAX=37,
    LLM_TEST=36
} llm_state_id;

typedef struct llm_enc_req llm_enc_req, *Pllm_enc_req;

struct llm_enc_req { // DWARF DIE: 179d
    struct ltk key;
    uint8_t plain_data[16];
};

typedef enum llm_msg_id {
    LLM_ECC_RESULT_IND=6,
    LLM_ENC_IND=5,
    LLM_ENC_REQ=4,
    LLM_GEN_CHNL_CLS_CMD=8,
    LLM_LE_CHNL_ASSESS_TIMER=7,
    LLM_LE_ENH_PRIV_ADDR_RENEW_TIMER=9,
    LLM_LE_SET_HOST_CH_CLASS_CMD_STO=0,
    LLM_LE_SET_HOST_CH_CLASS_REQ=2,
    LLM_LE_SET_HOST_CH_CLASS_REQ_IND=3,
    LLM_STOP_IND=1
} llm_msg_id;

typedef int32_t BaseType_t;

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct encrypt { // DWARF DIE: 2275
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct rem_version { // DWARF DIE: 2240
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct data_len_ext_tag { // DWARF DIE: 22aa
    uint16_t conn_max_tx_octets;
    uint16_t conn_max_rx_octets;
    uint16_t conn_eff_max_tx_octets;
    uint16_t conn_eff_max_rx_octets;
    uint16_t conn_max_tx_time;
    uint16_t conn_max_rx_time;
    uint16_t conn_eff_max_tx_time;
    uint16_t conn_eff_max_rx_time;
    _Bool send_req_not_allowed;
    uint8_t data_len_ext_flag;
};

struct llc_env_tag { // DWARF DIE: 233a
    void * operation[4];
    struct ea_elt_tag * elt;
    struct llc_ch_asses_tag chnl_assess;
    struct rem_version peer_version;
    struct data_len_ext_tag data_len_ext_info;
    uint16_t sup_to;
    uint16_t n_sup_to;
    uint16_t auth_payl_to;
    uint16_t auth_payl_to_margin;
    uint16_t llc_status;
    struct le_chnl_map ch_map;
    struct le_chnl_map n_ch_map;
    int8_t rssi;
    struct le_features feats_used;
    struct encrypt encrypt;
    uint8_t disc_reason;
    _Bool disc_event_sent;
    uint8_t loc_proc_state;
    uint8_t rem_proc_state;
    uint8_t encryption_state;
    _Bool peer_sup_conn_param_req;
    undefined field_0xa7;
};

typedef enum anon_enum_16.conflict2115 {
    LLD_EXT_ADV_STOP_IND=513,
    LLD_STOP_IND=512
} anon_enum_16.conflict2115;

typedef struct ecc_result_ind ecc_result_ind, *Pecc_result_ind;

struct ecc_result_ind { // DWARF DIE: 2492
    uint8_t key_res_x[32];
    uint8_t key_res_y[32];
};

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
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




// DWARF DIE: 255f

int llm_dft_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  return 0;
}



// DWARF DIE: 2505

int llm_le_set_host_ch_class_cmd_sto_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  DAT_00000037 = 1;
  return 0;
}



// DWARF DIE: 260a

int llm_ecc_result_ind_handler
              (ke_msg_id_t msgid,ecc_result_ind *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  undefined *puVar2;
  
  if (DAT_000000d3 == '\x02') {
    iVar1 = _LVL6();
    if (iVar1 == 0) {
      DAT_000000d3 = 0;
      return 0;
    }
    puVar2 = (undefined *)FUN_00010052();
    *puVar2 = 9;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  }
  else {
    if (DAT_000000d3 != '\x01') {
      DAT_000000d3 = 0;
      return 0;
    }
    iVar1 = _LVL15();
    if (iVar1 == 0) {
      DAT_000000d3 = 0;
      return 0;
    }
    puVar2 = (undefined *)FUN_000100b8();
    *puVar2 = 8;
    puVar2[1] = 0;
    (*pcRam00000000)(puVar2 + 2,param,0x20,pcRam00000000);
    param = (ecc_result_ind *)param->key_res_y;
    puVar2 = puVar2 + 0x22;
  }
  (*pcRam00000000)(puVar2,param,0x20,pcRam00000000);
  FUN_0001007a();
  DAT_000000d3 = 0;
  return 0;
}



undefined4 _LVL6(void)

{
  int iVar1;
  undefined *puVar2;
  int unaff_s2;
  
  iVar1 = _LVL6();
  if (iVar1 != 0) {
    puVar2 = (undefined *)FUN_00010052();
    *puVar2 = 9;
    puVar2[1] = 0;
    (*pcRam00000000)(puVar2 + 2,0x20,pcRam00000000);
    FUN_0001007a();
  }
  *(undefined *)(unaff_s2 + 0xd3) = 0;
  return 0;
}



undefined4 FUN_00010052(void)

{
  undefined *puVar1;
  int unaff_s2;
  
  puVar1 = (undefined *)FUN_00010052();
  *puVar1 = 9;
  puVar1[1] = 0;
  (*pcRam00000000)(puVar1 + 2,0x20,pcRam00000000);
  FUN_0001007a();
  *(undefined *)(unaff_s2 + 0xd3) = 0;
  return 0;
}



undefined4 FUN_0001007a(void)

{
  int unaff_s2;
  
  FUN_0001007a();
  *(undefined *)(unaff_s2 + 0xd3) = 0;
  return 0;
}



undefined4 _LVL15(void)

{
  int iVar1;
  undefined *puVar2;
  int unaff_s2;
  int unaff_s3;
  
  iVar1 = _LVL15();
  if (iVar1 != 0) {
    puVar2 = (undefined *)FUN_000100b8();
    *puVar2 = 8;
    puVar2[1] = 0;
    (*pcRam00000000)(puVar2 + 2,0x20,pcRam00000000);
    (*pcRam00000000)(puVar2 + 0x22,unaff_s3 + 0x20,0x20,pcRam00000000);
    FUN_0001007a();
  }
  *(undefined *)(unaff_s2 + 0xd3) = 0;
  return 0;
}



undefined4 FUN_000100b8(void)

{
  undefined *puVar1;
  int unaff_s2;
  int unaff_s3;
  
  puVar1 = (undefined *)FUN_000100b8();
  *puVar1 = 8;
  puVar1[1] = 0;
  (*pcRam00000000)(puVar1 + 2,0x20,pcRam00000000);
  (*pcRam00000000)(puVar1 + 0x22,unaff_s3 + 0x20,0x20,pcRam00000000);
  FUN_0001007a();
  *(undefined *)(unaff_s2 + 0xd3) = 0;
  return 0;
}



// DWARF DIE: 2743

int llm_enc_req_handler(ke_msg_id_t msgid,llm_enc_req *param,ke_task_id_t dest_id,
                       ke_task_id_t src_id)

{
  _L0();
  if (DAT_00000058 == '\0') {
    FUN_00010118();
  }
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  if (*(char *)(unaff_s0 + 0x58) == '\0') {
    FUN_00010118();
  }
  return 1;
}



undefined4 FUN_00010118(void)

{
  FUN_00010118();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 27fc

int lld_stop_ind_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = _L0(_DAT_00000044,_DAT_00000048,DAT_0000004c,DAT_00000050,_DAT_00000054,_DAT_0000006c);
  if ((uVar1 & 0xf0) != 0x20) {
    uVar1 = FUN_000101b2(_DAT_00000044,_DAT_00000048,DAT_0000004c,DAT_00000050,_DAT_00000054,
                         _DAT_0000006c);
    if ((uVar1 & 0xf) != 3) {
      return 0;
    }
  }
  iVar2 = FUN_0001014a(_DAT_00000044,_DAT_00000048,_DAT_0000004c,DAT_00000050,_DAT_00000054,
                       _DAT_0000006c);
  if (iVar2 == 0x23) {
    if ((DAT_0000006e & 0xf0) == 0x10) {
      FUN_000101ec(_DAT_00000044,_DAT_00000048,_DAT_00000054);
      _DAT_0000006c &= 0xfffff;
    }
    _DAT_00000048 = 0;
    if ((byte)(DAT_00000050 - 1) < 2) {
_L0:
      FUN_00010218(_DAT_00000044,_DAT_00000048,_DAT_00000054);
      if (DAT_00000050 == 2) {
        FUN_00010232(_DAT_00000044,_DAT_00000048,_DAT_00000054);
      }
      DAT_00000050 &= 0xf0;
    }
  }
  else {
    uVar1 = FUN_0001015c(_DAT_00000044,_DAT_00000048,_DAT_0000004c,DAT_00000050,_DAT_00000054,
                         _DAT_0000006c);
    if (((uVar1 & 0xf0) == 0x20) && (DAT_0000004c == '\0')) {
      if ((DAT_0000006e & 0xf0) == 0x10) {
        FUN_00010198(_DAT_00000044,_DAT_00000048,_DAT_00000054);
        _DAT_0000006c &= 0xfffff;
      }
      _DAT_00000048 = 0;
      goto _L0;
    }
    uVar1 = FUN_00010284(_DAT_00000044,_DAT_00000048,_DAT_0000004c,DAT_00000050,_DAT_00000054);
    if (((uVar1 & 0xf) != 3) || (DAT_0000004c == '\0')) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (((byte)(DAT_00000050 - 1) < 2) || (DAT_00000050 == 0x11)) goto _L0;
  }
  _DAT_00000054 = 0;
_L0:
  FUN_0001024e(_DAT_00000044,_DAT_00000048,_DAT_00000054);
  if ((_DAT_00000048 != 0) && (_DAT_00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  _DAT_00000044 = 0xffff;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
_L0(undefined2 uRam00000044,int iRam00000048,char param_3,byte param_4,int iRam00000054,
   uint3 param_6)

{
  undefined3 param_3_1;
  uint uVar1;
  int iVar2;
  
  uVar1 = _L0(uRam00000044,iRam00000048,param_3,param_4,iRam00000054,param_6);
  if ((uVar1 & 0xf0) != 0x20) {
    uVar1 = FUN_000101b2(uRam00000044,iRam00000048,param_3,param_4,iRam00000054,param_6);
    if ((uVar1 & 0xf) != 3) {
      return 0;
    }
  }
  iVar2 = FUN_0001014a(uRam00000044,iRam00000048,_param_3,param_4,iRam00000054,param_6);
  if (iVar2 == 0x23) {
    if ((param_6._2_1_ & 0xf0) == 0x10) {
      FUN_000101ec(uRam00000044,iRam00000048,iRam00000054);
      param_6 &= 0xfffff;
    }
    iRam00000048 = 0;
    if ((byte)(param_4 - 1) < 2) {
_L0:
      FUN_00010218(uRam00000044,iRam00000048,iRam00000054);
      if (param_4 == 2) {
        FUN_00010232(uRam00000044,iRam00000048,iRam00000054);
      }
      param_4 &= 0xf0;
    }
  }
  else {
    uVar1 = FUN_0001015c(uRam00000044,iRam00000048,_param_3,param_4,iRam00000054,param_6);
    if (((uVar1 & 0xf0) == 0x20) && (param_3 == '\0')) {
      if ((param_6._2_1_ & 0xf0) == 0x10) {
        FUN_00010198(uRam00000044,iRam00000048,iRam00000054);
        param_6 &= 0xfffff;
      }
      iRam00000048 = 0;
      goto _L0;
    }
    uVar1 = FUN_00010284(uRam00000044,iRam00000048,_param_3,param_4,iRam00000054);
    if (((uVar1 & 0xf) != 3) || (param_3 == '\0')) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (((byte)(param_4 - 1) < 2) || (param_4 == 0x11)) goto _L0;
  }
  iRam00000054 = 0;
_L0:
  FUN_0001024e(uRam00000044,iRam00000048,iRam00000054);
  if ((iRam00000048 != 0) && (iRam00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  uRam00000044 = 0xffff;
  return 0;
}



undefined4
FUN_0001014a(undefined2 uRam00000044,int iRam00000048,uint uRam0000004c,byte param_4,
            int iRam00000054,uint3 uRam0000006c)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0001014a(uRam00000044,iRam00000048,uRam0000004c,param_4,iRam00000054,uRam0000006c);
  if (iVar1 == 0x23) {
    if ((uRam0000006c._2_1_ & 0xf0) == 0x10) {
      FUN_000101ec(uRam00000044,iRam00000048,iRam00000054);
      uRam0000006c &= 0xfffff;
    }
    iRam00000048 = 0;
    if ((byte)(param_4 - 1) < 2) {
_L0:
      FUN_00010218(uRam00000044,iRam00000048,iRam00000054);
      if (param_4 == 2) {
        FUN_00010232(uRam00000044,iRam00000048,iRam00000054);
      }
      param_4 &= 0xf0;
    }
  }
  else {
    uVar2 = FUN_0001015c(uRam00000044,iRam00000048,uRam0000004c,param_4,iRam00000054,uRam0000006c);
    if (((uVar2 & 0xf0) == 0x20) && ((char)uRam0000004c == '\0')) {
      if ((uRam0000006c._2_1_ & 0xf0) == 0x10) {
        FUN_00010198(uRam00000044,iRam00000048,iRam00000054);
        uRam0000006c &= 0xfffff;
      }
      iRam00000048 = 0;
      goto _L0;
    }
    uVar2 = FUN_00010284(uRam00000044,iRam00000048,uRam0000004c,param_4,iRam00000054);
    if (((uVar2 & 0xf) != 3) || ((char)uRam0000004c == '\0')) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (((byte)(param_4 - 1) < 2) || (param_4 == 0x11)) goto _L0;
  }
  iRam00000054 = 0;
_L0:
  FUN_0001024e(uRam00000044,iRam00000048,iRam00000054);
  if ((iRam00000048 != 0) && (iRam00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  uRam00000044 = 0xffff;
  return 0;
}



undefined4
FUN_0001015c(undefined2 uRam00000044,int iRam00000048,undefined4 uRam0000004c,byte param_4,
            int iRam00000054,uint3 param_6)

{
  uint uVar1;
  
  uVar1 = FUN_0001015c(uRam00000044,iRam00000048,uRam0000004c,param_4,iRam00000054,param_6);
  if (((uVar1 & 0xf0) == 0x20) && ((char)uRam0000004c == '\0')) {
    if ((param_6._2_1_ & 0xf0) == 0x10) {
      FUN_00010198(uRam00000044,iRam00000048,iRam00000054);
      param_6 &= 0xfffff;
    }
    iRam00000048 = 0;
  }
  else {
    uVar1 = FUN_00010284(uRam00000044,iRam00000048,uRam0000004c,param_4,iRam00000054);
    if (((uVar1 & 0xf) != 3) || ((char)uRam0000004c == '\0')) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (((byte)(param_4 - 1) < 2) || (param_4 == 0x11)) {
      FUN_00010218(uRam00000044,iRam00000048,iRam00000054);
      if (param_4 == 2) {
        FUN_00010232(uRam00000044,iRam00000048,iRam00000054);
      }
      param_4 &= 0xf0;
    }
    iRam00000054 = 0;
  }
  FUN_0001024e(uRam00000044,iRam00000048,iRam00000054);
  if ((iRam00000048 != 0) && (iRam00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  uRam00000044 = 0xffff;
  return 0;
}



undefined4 FUN_00010198(undefined2 uRam00000044,int iRam00000048,int iRam00000054)

{
  int unaff_s0;
  
  FUN_00010198(uRam00000044,iRam00000048,iRam00000054);
  *(byte *)(unaff_s0 + 0x6e) = *(byte *)(unaff_s0 + 0x6e) & 0xf;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  FUN_0001024e(uRam00000044,iRam00000048,iRam00000054);
  if ((iRam00000048 != 0) && (iRam00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  uRam00000044 = 0xffff;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
FUN_000101b2(undefined2 uRam00000044,int iRam00000048,char param_3,byte param_4,int iRam00000054,
            uint3 param_6)

{
  undefined3 param_3_1;
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_000101b2(uRam00000044,iRam00000048,param_3,param_4,iRam00000054,param_6);
  if ((uVar2 & 0xf) != 3) {
    return 0;
  }
  iVar1 = FUN_0001014a(uRam00000044,iRam00000048,_param_3,param_4,iRam00000054,param_6);
  if (iVar1 == 0x23) {
    if ((param_6._2_1_ & 0xf0) == 0x10) {
      FUN_000101ec(uRam00000044,iRam00000048,iRam00000054);
      param_6 &= 0xfffff;
    }
    iRam00000048 = 0;
    if ((byte)(param_4 - 1) < 2) {
_L0:
      FUN_00010218(uRam00000044,iRam00000048,iRam00000054);
      if (param_4 == 2) {
        FUN_00010232(uRam00000044,iRam00000048,iRam00000054);
      }
      param_4 &= 0xf0;
    }
  }
  else {
    uVar2 = FUN_0001015c(uRam00000044,iRam00000048,_param_3,param_4,iRam00000054,param_6);
    if (((uVar2 & 0xf0) == 0x20) && (param_3 == '\0')) {
      if ((param_6._2_1_ & 0xf0) == 0x10) {
        FUN_00010198(uRam00000044,iRam00000048,iRam00000054);
        param_6 &= 0xfffff;
      }
      iRam00000048 = 0;
      goto _L0;
    }
    uVar2 = FUN_00010284(uRam00000044,iRam00000048,_param_3,param_4,iRam00000054);
    if (((uVar2 & 0xf) != 3) || (param_3 == '\0')) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (((byte)(param_4 - 1) < 2) || (param_4 == 0x11)) goto _L0;
  }
  iRam00000054 = 0;
_L0:
  FUN_0001024e(uRam00000044,iRam00000048,iRam00000054);
  if ((iRam00000048 != 0) && (iRam00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  uRam00000044 = 0xffff;
  return 0;
}



undefined4 FUN_000101ec(undefined2 uRam00000044,int iRam00000048,int iRam00000054)

{
  int unaff_s0;
  
  FUN_000101ec(uRam00000044,iRam00000048,iRam00000054);
  *(byte *)(unaff_s0 + 0x6e) = *(byte *)(unaff_s0 + 0x6e) & 0xf;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  if ((byte)(*(char *)(unaff_s0 + 0x50) - 1U) < 2) {
    FUN_00010218(uRam00000044,iRam00000048,iRam00000054);
    if (*(char *)(unaff_s0 + 0x50) == '\x02') {
      FUN_00010232(uRam00000044,iRam00000048,iRam00000054);
    }
    *(byte *)(unaff_s0 + 0x50) = *(byte *)(unaff_s0 + 0x50) & 0xf0;
  }
  iRam00000054 = 0;
  FUN_0001024e(uRam00000044,iRam00000048,0);
  if ((iRam00000048 != 0) && (iRam00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  uRam00000044 = 0xffff;
  return 0;
}



undefined4 FUN_00010218(undefined2 uRam00000044,int iRam00000048,int iRam00000054)

{
  int unaff_s0;
  
  FUN_00010218(uRam00000044,iRam00000048,iRam00000054);
  if (*(char *)(unaff_s0 + 0x50) == '\x02') {
    FUN_00010232(uRam00000044,iRam00000048,iRam00000054);
  }
  *(byte *)(unaff_s0 + 0x50) = *(byte *)(unaff_s0 + 0x50) & 0xf0;
  iRam00000054 = 0;
  FUN_0001024e(uRam00000044,iRam00000048,0);
  if ((iRam00000048 != 0) && (iRam00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  uRam00000044 = 0xffff;
  return 0;
}



undefined4 FUN_00010232(undefined2 uRam00000044,int iRam00000048,int iRam00000054)

{
  int unaff_s0;
  
  FUN_00010232(uRam00000044,iRam00000048,iRam00000054);
  *(byte *)(unaff_s0 + 0x50) = *(byte *)(unaff_s0 + 0x50) & 0xf0;
  iRam00000054 = 0;
  FUN_0001024e(uRam00000044,iRam00000048,0);
  if ((iRam00000048 != 0) && (iRam00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  uRam00000044 = 0xffff;
  return 0;
}



undefined4 FUN_0001024e(undefined2 uRam00000044,int iRam00000048,int iRam00000054)

{
  FUN_0001024e(uRam00000044,iRam00000048,iRam00000054);
  if ((iRam00000048 != 0) && (iRam00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  uRam00000044 = 0xffff;
  return 0;
}



undefined4 _LVL40(void)

{
  int unaff_s0;
  
  _LVL40();
  *(undefined2 *)(unaff_s0 + 0x44) = 0xffff;
  return 0;
}



undefined4
FUN_00010284(undefined2 uRam00000044,int iRam00000048,undefined4 uRam0000004c,byte param_4,
            int iRam00000054)

{
  uint uVar1;
  
  uVar1 = FUN_00010284(uRam00000044,iRam00000048,uRam0000004c,param_4,iRam00000054);
  if (((uVar1 & 0xf) != 3) || ((char)uRam0000004c == '\0')) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (((byte)(param_4 - 1) < 2) || (param_4 == 0x11)) {
    FUN_00010218(uRam00000044,iRam00000048,iRam00000054);
    if (param_4 == 2) {
      FUN_00010232(uRam00000044,iRam00000048,iRam00000054);
    }
    param_4 &= 0xf0;
  }
  iRam00000054 = 0;
  FUN_0001024e(uRam00000044,iRam00000048,0);
  if ((iRam00000048 != 0) && (iRam00000054 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL40();
  uRam00000044 = 0xffff;
  return 0;
}


