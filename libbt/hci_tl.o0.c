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
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef ushort uint16_t;

struct co_list_hdr { // DWARF DIE: 82f
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 6f7
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: f89
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: f2d
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 850
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: fcb
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

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict1120_for___value anon_union.conflict1120_for___value, *Panon_union.conflict1120_for___value;

typedef uint wint_t;

union anon_union.conflict1120_for___value { // DWARF DIE: 1120
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 1152
    int __count;
    union anon_union.conflict1120_for___value __value;
};

typedef union anon_union.conflict1120 anon_union.conflict1120, *Panon_union.conflict1120;

union anon_union.conflict1120 { // DWARF DIE: 1120
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 1c49
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 1c74
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

struct bd_addr { // DWARF DIE: 3fa
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 1ad4
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

struct ke_msg { // DWARF DIE: 8ab
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 1d0f
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 1bab
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

typedef char int8_t;

typedef struct le_chnl_map le_chnl_map, *Ple_chnl_map;

struct ea_elt_tag { // DWARF DIE: 19ec
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

struct le_chnl_map { // DWARF DIE: 42c
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 1d43
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 3cd
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 1c14
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 1db4
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

typedef enum anon_enum_8.conflict6f {
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflict6f;

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

typedef enum llc_state_id {
    LLC_CONNECTED=0,
    LLC_DISC_BUSY=15,
    LLC_FREE=127,
    LLC_LOC_PROC_BUSY=1,
    LLC_REM_PROC_BUSY=2,
    LLC_STATE_MAX=-128,
    LLC_TRAFFIC_PAUSED_BUSY=4
} llc_state_id;

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

typedef struct hci_data_buf_ovflw_evt hci_data_buf_ovflw_evt, *Phci_data_buf_ovflw_evt;

struct hci_data_buf_ovflw_evt { // DWARF DIE: 77c
    uint8_t link_type;
};

typedef struct hci_basic_cmd_cmp_evt hci_basic_cmd_cmp_evt, *Phci_basic_cmd_cmp_evt;

struct hci_basic_cmd_cmp_evt { // DWARF DIE: 742
    uint8_t status;
};

typedef struct hci_acl_data_tx hci_acl_data_tx, *Phci_acl_data_tx;

struct hci_acl_data_tx { // DWARF DIE: 6b0
    uint16_t conhdl;
    uint8_t pb_bc_flag;
    undefined field_0x3;
    uint16_t length;
    undefined field_0x6;
    undefined field_0x7;
    struct em_buf_node * buf;
};

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

typedef struct hci_cmd_stat_event hci_cmd_stat_event, *Phci_cmd_stat_event;

struct hci_cmd_stat_event { // DWARF DIE: 75f
    uint8_t status;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 191a
};

typedef enum HCI_TX_STATE {
    HCI_STATE_TX_IDLE=1,
    HCI_STATE_TX_ONGOING=0
} HCI_TX_STATE;

typedef struct hci_tl_env_tag hci_tl_env_tag, *Phci_tl_env_tag;

struct hci_tl_env_tag { // DWARF DIE: 20dd
    struct co_list tx_queue;
    struct co_list acl_queue;
    struct ke_msg * curr_tx_msg;
    struct em_buf_node * txtag;
    uint8_t tx_state;
    int8_t nb_h2c_cmd_pkts;
    undefined field_0x1a;
    undefined field_0x1b;
};

typedef enum HCI_MSG_DEST_LL {
    BLE_CTRL=3,
    BLE_MNG=2,
    BT_BCST=7,
    BT_CTRL_BD_ADDR=6,
    BT_CTRL_CONHDL=5,
    BT_MNG=4,
    CTRL=1,
    DBG=8,
    LL_UNDEF=9,
    MNG=0
} HCI_MSG_DEST_LL;

typedef struct hci_env_tag hci_env_tag, *Phci_env_tag;

struct hci_env_tag { // DWARF DIE: cc1
    struct evt_mask evt_msk;
    struct evt_mask evt_msk_page_2;
};

typedef struct hci_cmd_desc_tag hci_cmd_desc_tag, *Phci_cmd_desc_tag;

struct hci_cmd_desc_tag { // DWARF DIE: c2b
    uint16_t opcode;
    uint8_t dest_field;
    uint8_t par_size_max;
    void * par_fmt;
    void * ret_par_fmt;
};

typedef enum HCI_PACK_STATUS {
    HCI_PACK_ERROR=4,
    HCI_PACK_IN_BUF_OVFLW=1,
    HCI_PACK_OK=0,
    HCI_PACK_OUT_BUF_OVFLW=2,
    HCI_PACK_WRONG_FORMAT=3
} HCI_PACK_STATUS;

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

struct rwip_rf_api { // DWARF DIE: d2e
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

struct rwip_prio { // DWARF DIE: eb2
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 93b
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 967
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 459
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 4c4
    uint8_t supp_states[8];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 47b
    uint8_t cmds[64];
};

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 1fd6
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

typedef struct anon_struct.conflict189e anon_struct.conflict189e, *Panon_struct.conflict189e;

struct anon_struct.conflict189e { // DWARF DIE: 189e
    uchar * _nextf[30];
    uint _nmalloc[30];
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict18e5_for__new anon_union.conflict18e5_for__new, *Panon_union.conflict18e5_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict1759 anon_struct.conflict1759, *Panon_struct.conflict1759;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: 1216
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

struct _on_exit_args { // DWARF DIE: 1299
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 12ee
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 11a6
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 1710
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 16cb
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 1347
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 1375
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

struct anon_struct.conflict1759 { // DWARF DIE: 1759
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

union anon_union.conflict18e5_for__new { // DWARF DIE: 18e5
    struct anon_struct.conflict1759 _reent;
    struct anon_struct.conflict189e _unused;
};

struct _reent { // DWARF DIE: 14e1
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
    union anon_union.conflict18e5_for__new _new;
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

typedef union anon_union.conflict18e5 anon_union.conflict18e5, *Panon_union.conflict18e5;

union anon_union.conflict18e5 { // DWARF DIE: 18e5
    struct anon_struct.conflict1759 _reent;
    struct anon_struct.conflict189e _unused;
};

typedef int32_t BaseType_t;

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




// DWARF DIE: 2896

void hci_cmd_reject(hci_cmd_desc_tag *cmd_desc,uint16_t opcode,uint8_t error)

{
  uint extraout_a0;
  uint uVar1;
  uint8_t *extraout_a0_00;
  undefined auStack18 [4];
  uint16_t ret_par_len;
  
  if (cmd_desc != (hci_cmd_desc_tag *)0x0) {
    if ((code *)cmd_desc->ret_par_fmt == (code *)0x0) {
      _L0();
      *extraout_a0_00 = error;
      _L0();
    }
    else {
      if ((char)cmd_desc->dest_field < '\0') {
        uVar1 = (*(code *)cmd_desc->ret_par_fmt)(0,0,auStack18,0);
        uVar1 &= 0xff;
      }
      else {
        _LVL4();
        uVar1 = extraout_a0;
      }
      if (uVar1 == 0) goto _L0;
    }
    return;
  }
_L0:
  _L0();
  return;
}



void _LVL4(void)

{
  int extraout_a0;
  
  _LVL4();
  if (extraout_a0 == 0) {
    _L0();
    return;
  }
  return;
}



void _L0(void)

{
  undefined unaff_s0;
  undefined *extraout_a0;
  
  _L0();
  *extraout_a0 = unaff_s0;
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 261e

void hci_tl_send(ke_msg *msg)

{
  int extraout_a0;
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  _L0();
  if ((DAT_00000018 == '\x01') &&
     ((iVar1 = iRam00000000, iRam00000000 != 0 ||
      ((_L0(), extraout_a0 != 0 && (iVar1 = _DAT_00000008, _DAT_00000008 != 0)))))) {
    uVar2 = *(ushort *)(iVar1 + 4) - 0x801 & 0xffff;
    _DAT_00000010 = iVar1;
    if (uVar2 < 6) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4);
                    // WARNING: Could not emulate address calculation at 0x000100fc
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
    DAT_00000018 = '\0';
  }
  return;
}



void _L0(void)

{
  int *unaff_s0;
  int iVar1;
  int extraout_a0;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  _L0();
  if ((*(char *)(unaff_s0 + 6) == '\x01') &&
     ((iVar1 = *unaff_s0, iVar1 != 0 ||
      ((_L0(), extraout_a0 != 0 && (iVar1 = unaff_s0[2], iVar1 != 0)))))) {
    unaff_s0[4] = iVar1;
    uVar2 = *(ushort *)(iVar1 + 4) - 0x801 & 0xffff;
    if (uVar2 < 6) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4);
                    // WARNING: Could not emulate address calculation at 0x000100fc
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
    *(undefined *)(unaff_s0 + 6) = 0;
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  _L0();
  if ((extraout_a0 != 0) && (iVar1 = *(int *)(unaff_s0 + 8), iVar1 != 0)) {
    *(int *)(unaff_s0 + 0x10) = iVar1;
    uVar2 = *(ushort *)(iVar1 + 4) - 0x801 & 0xffff;
    if (uVar2 < 6) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4);
                    // WARNING: Could not emulate address calculation at 0x000100fc
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
    *(undefined *)(unaff_s0 + 0x18) = 0;
  }
  return;
}



void FUN_00010124(void)

{
  int unaff_s0;
  
  FUN_00010124();
  *(undefined *)(unaff_s0 + 0x18) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(undefined *)(unaff_s0 + 0x18) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(undefined *)(unaff_s0 + 0x18) = 0;
  return;
}



// DWARF DIE: 25b7

void hci_tl_init(_Bool reset)

{
  undefined3 in_register_00002029;
  
  if (CONCAT31(in_register_00002029,reset) == 0) {
    (*pcRam00000000)(0,0,0x1c,pcRam00000000);
    FUN_000101e0();
    FUN_000101ec();
    DAT_00000018 = 1;
  }
  DAT_00000019 = 5;
  return;
}



void FUN_000101e0(void)

{
  int unaff_s0;
  
  FUN_000101e0();
  FUN_000101ec();
  *(undefined *)(unaff_s0 + 0x18) = 1;
  *(undefined *)(unaff_s0 + 0x19) = 5;
  return;
}



void FUN_000101ec(void)

{
  int unaff_s0;
  
  FUN_000101ec();
  *(undefined *)(unaff_s0 + 0x18) = 1;
  *(undefined *)(unaff_s0 + 0x19) = 5;
  return;
}



// DWARF DIE: 255f

uint8_t hci_cmd_get_max_param_size(uint16_t opcode)

{
  uint8_t uVar1;
  int iVar2;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    uVar1 = -1;
  }
  else {
    uVar1 = *(uint8_t *)(iVar2 + 3);
  }
  return uVar1;
}



undefined _L0(void)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = *(undefined *)(iVar2 + 3);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 238d

void hci_cmd_received(uint16_t opcode,uint8_t length,uint8_t *payload)

{
  undefined2 in_register_0000202a;
  int iVar1;
  int iVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint16_t unpk_length;
  
  iVar1 = CONCAT22(in_register_0000202a,opcode);
  _L0(_DAT_00000018);
  if (DAT_00000019 == -0x80) {
    if (iVar1 == 0) goto _L0;
  }
  else {
    iVar2 = (DAT_00000019 + -1) * 0x1000000;
    _DAT_00000018 = _DAT_00000018 & 0xff | (ushort)(byte)((uint)iVar2 >> 0x18) << 8;
    if (iVar1 == 0) {
_L0:
      _L0();
      return;
    }
    if (-1 < iVar2 >> 0x18) {
      uVar3 = *(byte *)(iVar1 + 2) & 0xf;
      if (8 < uVar3) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(uVar3 * 4);
                    // WARNING: Could not emulate address calculation at 0x00010284
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  _L0();
  return;
}



void _L0(ushort param_1)

{
  int in_a0;
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  _L0(param_1);
  if (param_1._1_1_ == -0x80) {
    if (in_a0 == 0) goto _L0;
  }
  else {
    iVar1 = (param_1._1_1_ + -1) * 0x1000000;
    param_1 = param_1 & 0xff | (ushort)(byte)((uint)iVar1 >> 0x18) << 8;
    if (in_a0 == 0) {
_L0:
      _L0();
      return;
    }
    if (-1 < iVar1 >> 0x18) {
      uVar2 = *(byte *)(in_a0 + 2) & 0xf;
      if (8 < uVar2) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4);
                    // WARNING: Could not emulate address calculation at 0x00010284
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  _L0();
  return;
}



void FUN_000102ae(void)

{
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  undefined2 unaff_s2;
  short in_stack_0000000e;
  
  FUN_000102ae();
  if ((extraout_a0 == 1) || (FUN_000102cc(), extraout_a0_00 == 0)) {
    _L0();
  }
  else {
    if ((in_stack_0000000e != 0) && (*(code **)(unaff_s1 + 4) != (code *)0x0)) {
      if ((*(byte *)(unaff_s1 + 2) & 0x40) == 0) {
        _L0();
      }
      else {
        (**(code **)(unaff_s1 + 4))(&stack0x0000000e,unaff_s2);
      }
    }
    FUN_0001035a();
  }
  return;
}



void FUN_000102cc(void)

{
  int unaff_s1;
  int extraout_a0;
  undefined2 unaff_s2;
  short in_stack_0000000e;
  
  FUN_000102cc();
  if (extraout_a0 == 0) {
    _L0();
  }
  else {
    if ((in_stack_0000000e != 0) && (*(code **)(unaff_s1 + 4) != (code *)0x0)) {
      if ((*(byte *)(unaff_s1 + 2) & 0x40) == 0) {
        _L0();
      }
      else {
        (**(code **)(unaff_s1 + 4))(&stack0x0000000e,unaff_s2);
      }
    }
    FUN_0001035a();
  }
  return;
}



void _L0(void)

{
  _L0();
  return;
}



void FUN_0001030e(void)

{
  int unaff_s1;
  uint extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  uint uVar1;
  uint unaff_s2;
  short in_stack_0000000e;
  
  FUN_0001030e();
  if (extraout_a0_01 != 0x7f) {
    in_stack_0000000e = 0;
    if ((unaff_s2 != 0) && (*(code **)(unaff_s1 + 4) != (code *)0x0)) {
      if ((*(byte *)(unaff_s1 + 2) & 0x40) == 0) {
        FUN_000102ae();
        uVar1 = extraout_a0;
      }
      else {
        uVar1 = (**(code **)(unaff_s1 + 4))(0,&stack0x0000000e,unaff_s2 & 0xffff);
        uVar1 &= 0xff;
      }
      if (uVar1 == 1) goto _L0;
    }
    FUN_000102cc();
    if (extraout_a0_00 != 0) {
      if ((in_stack_0000000e != 0) && (*(code **)(unaff_s1 + 4) != (code *)0x0)) {
        if ((*(byte *)(unaff_s1 + 2) & 0x40) == 0) {
          _L0();
        }
        else {
          (**(code **)(unaff_s1 + 4))(&stack0x0000000e,unaff_s2 & 0xffff);
        }
      }
      FUN_0001035a();
      return;
    }
  }
_L0:
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  FUN_0001035a();
  return;
}



void FUN_0001035a(void)

{
  FUN_0001035a();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2226

uint8_t * hci_acl_tx_data_alloc(uint16_t hdl_flags,uint16_t len)

{
  uint8_t *puVar1;
  undefined *extraout_a0;
  undefined2 in_register_0000202e;
  
  if ((((hdl_flags & 0xffe) == 0) && ((hdl_flags & 0xc000) == 0)) &&
     (CONCAT22(in_register_0000202e,len) < 0xfc)) {
    _DAT_00000014 = FUN_000103da(_DAT_00000014);
    if (_DAT_00000014 == 0) {
      FUN_00010410();
      *extraout_a0 = 1;
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    puVar1 = (uint8_t *)(*(ushort *)(_DAT_00000014 + 6) + 0x28008000);
  }
  else {
    puVar1 = (uint8_t *)0x0;
  }
  return puVar1;
}



int FUN_000103da(int iRam00000014)

{
  undefined *extraout_a0;
  
  iRam00000014 = FUN_000103da(iRam00000014);
  if (iRam00000014 != 0) {
    return *(ushort *)(iRam00000014 + 6) + 0x28008000;
  }
  FUN_00010410();
  *extraout_a0 = 1;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010410(void)

{
  undefined *extraout_a0;
  
  FUN_00010410();
  *extraout_a0 = 1;
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
// DWARF DIE: 214b

void hci_acl_tx_data_received(uint16_t hdl_flags,uint16_t datalen,uint8_t *payload)

{
  undefined2 in_register_0000202a;
  ushort *extraout_a0;
  
  if (_DAT_00000014 == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((hdl_flags & 0xffe) == 0) {
    FUN_00010488();
    *extraout_a0 = hdl_flags & 0xfff;
    *(char *)(extraout_a0 + 1) = (char)(CONCAT22(in_register_0000202a,hdl_flags) >> 0xc);
    extraout_a0[2] = datalen;
    *(int *)(extraout_a0 + 4) = _DAT_00000014;
    _L0();
  }
  _DAT_00000014 = 0;
  return;
}



void FUN_00010488(void)

{
  uint unaff_s0;
  int unaff_s1;
  undefined2 *extraout_a0;
  undefined2 unaff_s2;
  undefined2 unaff_s3;
  
  FUN_00010488();
  *extraout_a0 = unaff_s2;
  *(char *)(extraout_a0 + 1) = (char)(unaff_s0 >> 0xc);
  extraout_a0[2] = unaff_s3;
  *(undefined4 *)(extraout_a0 + 4) = *(undefined4 *)(unaff_s1 + 0x14);
  _L0();
  *(undefined4 *)(unaff_s1 + 0x14) = 0;
  return;
}



void _L0(void)

{
  int unaff_s1;
  
  _L0();
  *(undefined4 *)(unaff_s1 + 0x14) = 0;
  return;
}


