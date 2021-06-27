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

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef ushort uint16_t;

struct co_list_hdr { // DWARF DIE: 1365
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: c76
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: 17f2
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 1796
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 1386
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 1834
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

typedef enum llc_util_enc_state {
    LLC_ENC_DISABLED=0,
    LLC_ENC_ENABLE=3,
    LLC_ENC_FLOW_OFF=12,
    LLC_ENC_PAUSE_PENDING=32,
    LLC_ENC_REFRESH_PENDING=16,
    LLC_ENC_RX=2,
    LLC_ENC_RX_FLOW_OFF=8,
    LLC_ENC_TX=1,
    LLC_ENC_TX_FLOW_OFF=4
} llc_util_enc_state;

typedef struct llc_ch_asses_tag llc_ch_asses_tag, *Pllc_ch_asses_tag;

typedef char int8_t;

struct llc_ch_asses_tag { // DWARF DIE: 31aa
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict18f7_for___value anon_union.conflict18f7_for___value, *Panon_union.conflict18f7_for___value;

typedef uint wint_t;

union anon_union.conflict18f7_for___value { // DWARF DIE: 18f7
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 1929
    int __count;
    union anon_union.conflict18f7_for___value __value;
};

typedef union anon_union.conflict18f7 anon_union.conflict18f7, *Panon_union.conflict18f7;

union anon_union.conflict18f7 { // DWARF DIE: 18f7
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 2688
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 26b3
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

struct advertising_pdu_params { // DWARF DIE: 2513
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

struct ke_msg { // DWARF DIE: 13dc
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 274e
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 25ea
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

struct ea_elt_tag { // DWARF DIE: 23c2
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

struct channel_map_assess { // DWARF DIE: 2782
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

struct access_addr_gen { // DWARF DIE: 2653
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 27f3
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
    KE_MEM_NON_RETENTION=0,
    TX_LVL_CURRENT=0,
    TX_LVL_LEN=2,
    TX_LVL_MAX=1
} anon_enum_8.conflict6f;

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

typedef enum LLC_MSG {
    LLC_AUTH_PAYL_NEARLY_TO=259,
    LLC_AUTH_PAYL_REAL_TO=260,
    LLC_CHMAP_UPDATE_REQ_IND=264,
    LLC_CHNL_ASSESS_TO=261,
    LLC_CON_UPD_REQ_IND=265,
    LLC_DATA_IND=256,
    LLC_ENC_MGT_IND=262,
    LLC_LENGTH_REQ_IND=263,
    LLC_LE_LINK_SUP_TO=257,
    LLC_LLCP_RECV_IND=266,
    LLC_LLCP_RSP_TO=258
} LLC_MSG;

typedef enum llc_proc_field {
    LLC_DISC=3,
    LLC_LOC_PROC=0,
    LLC_REM_PROC=1,
    LLC_TRAFFIC_PAUSED=2
} llc_proc_field;

typedef enum llc_rem_proc_state {
    LLC_REM_IDLE=0,
    LLC_REM_WAIT_CON_PARAM_HOST_RSP=2,
    LLC_REM_WAIT_CON_UPD_INSTANT=4,
    LLC_REM_WAIT_CON_UPD_REQ=3,
    LLC_REM_WAIT_ENC_REJECT_ACK=13,
    LLC_REM_WAIT_ENC_REQ=7,
    LLC_REM_WAIT_LTK=9,
    LLC_REM_WAIT_MAP_UPD_INSTANT=1,
    LLC_REM_WAIT_PAUSE_ENC_RSP=6,
    LLC_REM_WAIT_RANDN_GEN_IND=14,
    LLC_REM_WAIT_SK=10,
    LLC_REM_WAIT_START_ENC_RSP=11,
    LLC_REM_WAIT_START_ENC_RSP_ACK=12,
    LLC_REM_WAIT_TP_FOR_ENC_REQ=8,
    LLC_REM_WAIT_TP_FOR_PAUSE_ENC_REQ=5
} llc_rem_proc_state;

typedef struct llc_con_upd_req_ind llc_con_upd_req_ind, *Pllc_con_upd_req_ind;

struct llc_con_upd_req_ind { // DWARF DIE: 2c5a
    uint8_t operation;
    undefined field_0x1;
    uint16_t con_intv_min;
    uint16_t con_intv_max;
    uint16_t con_latency;
    uint16_t superv_to;
    uint16_t ce_len_min;
    uint16_t ce_len_max;
    uint16_t interval_min;
    uint16_t interval_max;
    uint8_t pref_period;
    undefined field_0x13;
    uint16_t ref_con_event_count;
    uint16_t offset0;
    uint16_t offset1;
    uint16_t offset2;
    uint16_t offset3;
    uint16_t offset4;
    uint16_t offset5;
};

typedef enum llc_loc_proc_state {
    LLC_LOC_IDLE=0,
    LLC_LOC_SEND_START_ENC_RSP=17,
    LLC_LOC_WAIT_CON_PARAM_RSP=7,
    LLC_LOC_WAIT_CON_UPD_INSTANT=9,
    LLC_LOC_WAIT_CON_UPD_REQ=8,
    LLC_LOC_WAIT_ENC_RSP=13,
    LLC_LOC_WAIT_FEAT_RSP=1,
    LLC_LOC_WAIT_LENGTH_RSP=4,
    LLC_LOC_WAIT_MAP_UPD_INSTANT=6,
    LLC_LOC_WAIT_PAUSE_ENC_RSP=11,
    LLC_LOC_WAIT_PAUSE_ENC_RSP_SENT=12,
    LLC_LOC_WAIT_PING_RSP=5,
    LLC_LOC_WAIT_RANDN_GEN_IND=19,
    LLC_LOC_WAIT_SK=15,
    LLC_LOC_WAIT_SK_AND_START_ENC_REQ=14,
    LLC_LOC_WAIT_START_ENC_REQ=16,
    LLC_LOC_WAIT_START_ENC_RSP=18,
    LLC_LOC_WAIT_TERM_ACK=3,
    LLC_LOC_WAIT_TRAFFIC_PAUSED=10,
    LLC_LOC_WAIT_VERS_IND=2
} llc_loc_proc_state;

typedef enum llc_op_type {
    LLC_OP_DLE_UPD=3,
    LLC_OP_ENCRYPT=2,
    LLC_OP_LOC_PARAM_UPD=0,
    LLC_OP_MAX=4,
    LLC_OP_REM_PARAM_UPD=1
} llc_op_type;

typedef enum llc_con_up_op {
    LLC_CON_UP_FORCE=2,
    LLC_CON_UP_HCI_REQ=0,
    LLC_CON_UP_LOC_REQ=4,
    LLC_CON_UP_MOVE_ANCHOR=1,
    LLC_CON_UP_PEER_REQ=3
} llc_con_up_op;

typedef enum llc_state_id {
    LLC_CONNECTED=0,
    LLC_DISC_BUSY=15,
    LLC_FREE=127,
    LLC_LOC_PROC_BUSY=1,
    LLC_REM_PROC_BUSY=2,
    LLC_STATE_MAX=-128,
    LLC_TRAFFIC_PAUSED_BUSY=4
} llc_state_id;

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

typedef struct hci_disconnect_cmd hci_disconnect_cmd, *Phci_disconnect_cmd;

struct hci_disconnect_cmd { // DWARF DIE: cd3
    uint16_t conhdl;
    uint8_t reason;
    undefined field_0x3;
};

typedef struct hci_le_ltk_req_reply_cmd hci_le_ltk_req_reply_cmd, *Phci_le_ltk_req_reply_cmd;

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 3d8
    uint8_t ltk[16];
};

struct hci_le_ltk_req_reply_cmd { // DWARF DIE: e93
    uint16_t conhdl;
    struct ltk ltk;
};

typedef struct hci_rd_tx_pwr_lvl_cmd_cmp_evt hci_rd_tx_pwr_lvl_cmd_cmp_evt, *Phci_rd_tx_pwr_lvl_cmd_cmp_evt;

struct hci_rd_tx_pwr_lvl_cmd_cmp_evt { // DWARF DIE: 1099
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
    uint8_t tx_pow_lvl;
    undefined field_0x5;
};

typedef enum hci_opcode {
    HCI_ACCEPT_CON_REQ_CMD_OPCODE=1033,
    HCI_ACCEPT_SYNC_CON_REQ_CMD_OPCODE=1065,
    HCI_AUTH_REQ_CMD_OPCODE=1041,
    HCI_CHG_CON_LK_CMD_OPCODE=1045,
    HCI_CHG_CON_PKT_TYPE_CMD_OPCODE=1039,
    HCI_CREATE_CON_CANCEL_CMD_OPCODE=1032,
    HCI_CREATE_CON_CMD_OPCODE=1029,
    HCI_CREATE_NEW_UNIT_KEY_CMD_OPCODE=3083,
    HCI_DBG_BLE_TST_LLCP_PT_EN_CMD_OPCODE=-958,
    HCI_DBG_BLE_TST_SEND_LLCP_CMD_OPCODE=-957,
    HCI_DBG_BT_SEND_LMP_CMD_OPCODE=-1010,
    HCI_DBG_DEL_PAR_CMD_OPCODE=-1021,
    HCI_DBG_ER_FLASH_CMD_OPCODE=-1018,
    HCI_DBG_HW_REG_RD_CMD_OPCODE=-976,
    HCI_DBG_HW_REG_WR_CMD_OPCODE=-975,
    HCI_DBG_ID_FLASH_CMD_OPCODE=-1019,
    HCI_DBG_LLCP_DISCARD_CMD_OPCODE=-970,
    HCI_DBG_MWS_COEXTST_SCEN_CMD_OPCODE=-954,
    HCI_DBG_MWS_COEX_CMD_OPCODE=-955,
    HCI_DBG_PLF_RESET_CMD_OPCODE=-1007,
    HCI_DBG_RD_FLASH_CMD_OPCODE=-1016,
    HCI_DBG_RD_KE_STATS_CMD_OPCODE=-1008,
    HCI_DBG_RD_MEM_CMD_OPCODE=-1023,
    HCI_DBG_RD_MEM_INFO_CMD_OPCODE=-1006,
    HCI_DBG_RD_PAR_CMD_OPCODE=-1015,
    HCI_DBG_RESET_RX_CNT_CMD_OPCODE=-969,
    HCI_DBG_RESET_TX_CNT_CMD_OPCODE=-968,
    HCI_DBG_RF_CNTL_TX_CMD_OPCODE=-961,
    HCI_DBG_RF_RD_DATA_RX_CMD_OPCODE=-962,
    HCI_DBG_RF_REG_RD_CMD_OPCODE=-967,
    HCI_DBG_RF_REG_WR_CMD_OPCODE=-966,
    HCI_DBG_RF_SWITCH_CLK_CMD_OPCODE=-964,
    HCI_DBG_RF_SYNC_P_CNTL_CMD_OPCODE=-960,
    HCI_DBG_RF_WR_DATA_TX_CMD_OPCODE=-963,
    HCI_DBG_SET_BD_ADDR_CMD_OPCODE=-974,
    HCI_DBG_SET_CRC_CMD_OPCODE=-971,
    HCI_DBG_SET_LOCAL_CLOCK_CMD_OPCODE=-1009,
    HCI_DBG_SET_TX_PW_CMD_OPCODE=-965,
    HCI_DBG_SET_TYPE_PUB_CMD_OPCODE=-973,
    HCI_DBG_SET_TYPE_RAND_CMD_OPCODE=-972,
    HCI_DBG_WLAN_COEXTST_SCEN_CMD_OPCODE=-1011,
    HCI_DBG_WLAN_COEX_CMD_OPCODE=-1013,
    HCI_DBG_WR_DLE_DFT_VALUE_CMD_OPCODE=-959,
    HCI_DBG_WR_FLASH_CMD_OPCODE=-1017,
    HCI_DBG_WR_MEM_CMD_OPCODE=-1022,
    HCI_DBG_WR_PAR_CMD_OPCODE=-1014,
    HCI_DEL_RES_LT_ADDR_CMD_OPCODE=3189,
    HCI_DEL_STORED_LK_CMD_OPCODE=3090,
    HCI_DISCONNECT_CMD_OPCODE=1030,
    HCI_ENH_ACCEPT_SYNC_CON_CMD_OPCODE=1086,
    HCI_ENH_FLUSH_CMD_OPCODE=3167,
    HCI_ENH_SETUP_SYNC_CON_CMD_OPCODE=1085,
    HCI_EN_DUT_MODE_CMD_OPCODE=6147,
    HCI_EXIT_PARK_STATE_CMD_OPCODE=2054,
    HCI_EXIT_PER_INQ_MODE_CMD_OPCODE=1028,
    HCI_EXIT_SNIFF_MODE_CMD_OPCODE=2052,
    HCI_FLOW_SPEC_CMD_OPCODE=2064,
    HCI_FLUSH_CMD_OPCODE=3080,
    HCI_GET_MWS_TRANSPORT_LAYER_CONFIG_CMD_OPCODE=5132,
    HCI_HOLD_MODE_CMD_OPCODE=2049,
    HCI_HOST_BUF_SIZE_CMD_OPCODE=3123,
    HCI_HOST_NB_CMP_PKTS_CMD_OPCODE=3125,
    HCI_INQ_CANCEL_CMD_OPCODE=1026,
    HCI_INQ_CMD_OPCODE=1025,
    HCI_IO_CAP_REQ_NEG_REPLY_CMD_OPCODE=1076,
    HCI_IO_CAP_REQ_REPLY_CMD_OPCODE=1067,
    HCI_LE_ADD_DEV_TO_RSLV_LIST_CMD_OPCODE=8231,
    HCI_LE_ADD_DEV_TO_WLST_CMD_OPCODE=8209,
    HCI_LE_CLEAR_RSLV_LIST_CMD_OPCODE=8233,
    HCI_LE_CLEAR_WLST_CMD_OPCODE=8208,
    HCI_LE_CON_UPDATE_CMD_OPCODE=8211,
    HCI_LE_CREATE_CON_CANCEL_CMD_OPCODE=8206,
    HCI_LE_CREATE_CON_CMD_OPCODE=8205,
    HCI_LE_ENC_CMD_OPCODE=8215,
    HCI_LE_GEN_DHKEY_CMD_OPCODE=8230,
    HCI_LE_LTK_REQ_NEG_REPLY_CMD_OPCODE=8219,
    HCI_LE_LTK_REQ_REPLY_CMD_OPCODE=8218,
    HCI_LE_RAND_CMD_OPCODE=8216,
    HCI_LE_RD_ADV_CHNL_TX_PW_CMD_OPCODE=8199,
    HCI_LE_RD_BUFF_SIZE_CMD_OPCODE=8194,
    HCI_LE_RD_CHNL_MAP_CMD_OPCODE=8213,
    HCI_LE_RD_LOCAL_SUPP_FEATS_CMD_OPCODE=8195,
    HCI_LE_RD_LOC_P256_PUB_KEY_CMD_OPCODE=8229,
    HCI_LE_RD_LOC_RSLV_ADDR_CMD_OPCODE=8236,
    HCI_LE_RD_MAX_DATA_LEN_CMD_OPCODE=8239,
    HCI_LE_RD_PEER_RSLV_ADDR_CMD_OPCODE=8235,
    HCI_LE_RD_REM_USED_FEATS_CMD_OPCODE=8214,
    HCI_LE_RD_RFPATH_CPS_CMD_OPCODE=8268,
    HCI_LE_RD_RSLV_LIST_SIZE_CMD_OPCODE=8234,
    HCI_LE_RD_SUGGTED_DFT_DATA_LEN_CMD_OPCODE=8227,
    HCI_LE_RD_SUPP_STATES_CMD_OPCODE=8220,
    HCI_LE_RD_TRANS_PWR_CMD_OPCODE=8267,
    HCI_LE_RD_WLST_SIZE_CMD_OPCODE=8207,
    HCI_LE_REM_CON_PARAM_REQ_NEG_REPLY_CMD_OPCODE=8225,
    HCI_LE_REM_CON_PARAM_REQ_REPLY_CMD_OPCODE=8224,
    HCI_LE_RMV_DEV_FROM_RSLV_LIST_CMD_OPCODE=8232,
    HCI_LE_RMV_DEV_FROM_WLST_CMD_OPCODE=8210,
    HCI_LE_RX_TEST_CMD_OPCODE=8221,
    HCI_LE_SET_ADDR_RESOL_EN_CMD_OPCODE=8237,
    HCI_LE_SET_ADV_DATA_CMD_OPCODE=8200,
    HCI_LE_SET_ADV_EN_CMD_OPCODE=8202,
    HCI_LE_SET_ADV_PARAM_CMD_OPCODE=8198,
    HCI_LE_SET_DATA_LEN_CMD_OPCODE=8226,
    HCI_LE_SET_EVT_MASK_CMD_OPCODE=8193,
    HCI_LE_SET_HOST_CH_CLASS_CMD_OPCODE=8212,
    HCI_LE_SET_RAND_ADDR_CMD_OPCODE=8197,
    HCI_LE_SET_RSLV_PRIV_ADDR_TO_CMD_OPCODE=8238,
    HCI_LE_SET_SCAN_EN_CMD_OPCODE=8204,
    HCI_LE_SET_SCAN_PARAM_CMD_OPCODE=8203,
    HCI_LE_SET_SCAN_RSP_DATA_CMD_OPCODE=8201,
    HCI_LE_START_ENC_CMD_OPCODE=8217,
    HCI_LE_TEST_END_CMD_OPCODE=8223,
    HCI_LE_TX_TEST_CMD_OPCODE=8222,
    HCI_LE_WR_RFPATH_CPS_CMD_OPCODE=8269,
    HCI_LE_WR_SUGGTED_DFT_DATA_LEN_CMD_OPCODE=8228,
    HCI_LK_REQ_NEG_REPLY_CMD_OPCODE=1036,
    HCI_LK_REQ_REPLY_CMD_OPCODE=1035,
    HCI_MASTER_LK_CMD_OPCODE=1047,
    HCI_NO_OPERATION_CMD_OPCODE=0,
    HCI_PARK_STATE_CMD_OPCODE=2053,
    HCI_PER_INQ_MODE_CMD_OPCODE=1027,
    HCI_PIN_CODE_REQ_NEG_REPLY_CMD_OPCODE=1038,
    HCI_PIN_CODE_REQ_REPLY_CMD_OPCODE=1037,
    HCI_QOS_SETUP_CMD_OPCODE=2055,
    HCI_RD_AFH_CH_ASSESS_MODE_CMD_OPCODE=3144,
    HCI_RD_AFH_CH_MAP_CMD_OPCODE=5126,
    HCI_RD_AUTH_EN_CMD_OPCODE=3103,
    HCI_RD_AUTH_PAYL_TO_CMD_OPCODE=3195,
    HCI_RD_AUTO_FLUSH_TO_CMD_OPCODE=3111,
    HCI_RD_BD_ADDR_CMD_OPCODE=4105,
    HCI_RD_BUFF_SIZE_CMD_OPCODE=4101,
    HCI_RD_CLASS_OF_DEV_CMD_OPCODE=3107,
    HCI_RD_CLK_CMD_OPCODE=5127,
    HCI_RD_CLK_OFF_CMD_OPCODE=1055,
    HCI_RD_CON_ACCEPT_TO_CMD_OPCODE=3093,
    HCI_RD_CURR_IAC_LAP_CMD_OPCODE=3129,
    HCI_RD_DFT_ERR_DATA_REP_CMD_OPCODE=3162,
    HCI_RD_DFT_LINK_POL_STG_CMD_OPCODE=2062,
    HCI_RD_ENC_KEY_SIZE_CMD_OPCODE=5128,
    HCI_RD_ENH_TX_PWR_LVL_CMD_OPCODE=3176,
    HCI_RD_EXT_INQ_LEN_CMD_OPCODE=3200,
    HCI_RD_EXT_INQ_RSP_CMD_OPCODE=3153,
    HCI_RD_EXT_PAGE_TO_CMD_OPCODE=3198,
    HCI_RD_FAIL_CONTACT_CNT_CMD_OPCODE=5121,
    HCI_RD_FLOW_CNTL_MODE_CMD_OPCODE=3174,
    HCI_RD_HOLD_MODE_ACTIVITY_CMD_OPCODE=3115,
    HCI_RD_INQ_MODE_CMD_OPCODE=3140,
    HCI_RD_INQ_RSP_TX_PWR_LVL_CMD_OPCODE=3160,
    HCI_RD_INQ_SCAN_ACT_CMD_OPCODE=3101,
    HCI_RD_INQ_SCAN_TYPE_CMD_OPCODE=3138,
    HCI_RD_LE_HOST_SUPP_CMD_OPCODE=3180,
    HCI_RD_LINK_POL_STG_CMD_OPCODE=2060,
    HCI_RD_LINK_QUAL_CMD_OPCODE=5123,
    HCI_RD_LINK_SUPV_TO_CMD_OPCODE=3126,
    HCI_RD_LMP_HDL_CMD_OPCODE=1056,
    HCI_RD_LOCAL_EXT_FEATS_CMD_OPCODE=4100,
    HCI_RD_LOCAL_NAME_CMD_OPCODE=3092,
    HCI_RD_LOCAL_SUPP_CMDS_CMD_OPCODE=4098,
    HCI_RD_LOCAL_SUPP_CODECS_CMD_OPCODE=4107,
    HCI_RD_LOCAL_SUPP_FEATS_CMD_OPCODE=4099,
    HCI_RD_LOCAL_VER_INFO_CMD_OPCODE=4097,
    HCI_RD_LOC_OOB_DATA_CMD_OPCODE=3159,
    HCI_RD_LOC_OOB_EXT_DATA_CMD_OPCODE=3197,
    HCI_RD_LOOPBACK_MODE_CMD_OPCODE=6145,
    HCI_RD_NB_BDCST_RETX_CMD_OPCODE=3113,
    HCI_RD_NB_SUPP_IAC_CMD_OPCODE=3128,
    HCI_RD_PAGE_SCAN_ACT_CMD_OPCODE=3099,
    HCI_RD_PAGE_SCAN_TYPE_CMD_OPCODE=3142,
    HCI_RD_PAGE_TO_CMD_OPCODE=3095,
    HCI_RD_PIN_TYPE_CMD_OPCODE=3081,
    HCI_RD_REM_EXT_FEATS_CMD_OPCODE=1052,
    HCI_RD_REM_SUPP_FEATS_CMD_OPCODE=1051,
    HCI_RD_REM_VER_INFO_CMD_OPCODE=1053,
    HCI_RD_RSSI_CMD_OPCODE=5125,
    HCI_RD_SCAN_EN_CMD_OPCODE=3097,
    HCI_RD_SEC_CON_HOST_SUPP_CMD_OPCODE=3193,
    HCI_RD_SP_MODE_CMD_OPCODE=3157,
    HCI_RD_STORED_LK_CMD_OPCODE=3085,
    HCI_RD_SYNC_FLOW_CTRL_EN_CMD_OPCODE=3118,
    HCI_RD_SYNC_TRAIN_PARAM_CMD_OPCODE=3191,
    HCI_RD_TX_PWR_LVL_CMD_OPCODE=3117,
    HCI_RD_VOICE_STG_CMD_OPCODE=3109,
    HCI_REC_SYNC_TRAIN_CMD_OPCODE=1092,
    HCI_REFRESH_ENC_KEY_CMD_OPCODE=3155,
    HCI_REJECT_CON_REQ_CMD_OPCODE=1034,
    HCI_REJECT_SYNC_CON_REQ_CMD_OPCODE=1066,
    HCI_REM_NAME_REQ_CANCEL_CMD_OPCODE=1050,
    HCI_REM_NAME_REQ_CMD_OPCODE=1049,
    HCI_REM_OOB_DATA_REQ_NEG_REPLY_CMD_OPCODE=1075,
    HCI_REM_OOB_DATA_REQ_REPLY_CMD_OPCODE=1072,
    HCI_REM_OOB_EXT_DATA_REQ_REPLY_CMD_OPCODE=1093,
    HCI_RESET_CMD_OPCODE=3075,
    HCI_ROLE_DISCOVERY_CMD_OPCODE=2057,
    HCI_RST_FAIL_CONTACT_CNT_CMD_OPCODE=5122,
    HCI_SEND_KEYPRESS_NOTIF_CMD_OPCODE=3168,
    HCI_SETUP_SYNC_CON_CMD_OPCODE=1064,
    HCI_SET_AFH_HOST_CH_CLASS_CMD_OPCODE=3135,
    HCI_SET_CON_ENC_CMD_OPCODE=1043,
    HCI_SET_CON_SLV_BCST_CMD_OPCODE=1089,
    HCI_SET_CON_SLV_BCST_DATA_CMD_OPCODE=3190,
    HCI_SET_CON_SLV_BCST_REC_CMD_OPCODE=1090,
    HCI_SET_CTRL_TO_HOST_FLOW_CTRL_CMD_OPCODE=3121,
    HCI_SET_EVT_FILTER_CMD_OPCODE=3077,
    HCI_SET_EVT_MASK_CMD_OPCODE=3073,
    HCI_SET_EVT_MASK_PAGE_2_CMD_OPCODE=3171,
    HCI_SET_EXTERNAL_FRAME_CONFIG_CMD_OPCODE=3183,
    HCI_SET_MWS_CHANNEL_PARAMS_CMD_OPCODE=3182,
    HCI_SET_MWS_PATTERN_CONFIG_CMD_OPCODE=3187,
    HCI_SET_MWS_SCAN_FREQ_TABLE_CMD_OPCODE=3186,
    HCI_SET_MWS_SIGNALING_CMD_OPCODE=3184,
    HCI_SET_MWS_TRANSPORT_LAYER_CMD_OPCODE=3185,
    HCI_SET_RES_LT_ADDR_CMD_OPCODE=3188,
    HCI_SET_TX_PWR_CMD_OPCODE=-927,
    HCI_SNIFF_MODE_CMD_OPCODE=2051,
    HCI_SNIFF_SUB_CMD_OPCODE=2065,
    HCI_START_SYNC_TRAIN_CMD_OPCODE=1091,
    HCI_SWITCH_ROLE_CMD_OPCODE=2059,
    HCI_TESTER_SET_LE_PARAMS_CMD_OPCODE=-960,
    HCI_TRUNC_PAGE_CAN_CMD_OPCODE=1088,
    HCI_TRUNC_PAGE_CMD_OPCODE=1087,
    HCI_USER_CFM_REQ_NEG_REPLY_CMD_OPCODE=1069,
    HCI_USER_CFM_REQ_REPLY_CMD_OPCODE=1068,
    HCI_USER_PASSKEY_REQ_NEG_REPLY_CMD_OPCODE=1071,
    HCI_USER_PASSKEY_REQ_REPLY_CMD_OPCODE=1070,
    HCI_VS_AUDIO_ALLOCATE_CMD_OPCODE=-944,
    HCI_VS_AUDIO_CONFIGURE_CMD_OPCODE=-943,
    HCI_VS_AUDIO_GET_BUFFER_RANGE_CMD_OPCODE=-939,
    HCI_VS_AUDIO_RESET_CMD_OPCODE=-941,
    HCI_VS_AUDIO_SET_MODE_CMD_OPCODE=-942,
    HCI_VS_AUDIO_SET_POINTER_CMD_OPCODE=-940,
    HCI_WR_AFH_CH_ASSESS_MODE_CMD_OPCODE=3145,
    HCI_WR_AUTH_EN_CMD_OPCODE=3104,
    HCI_WR_AUTH_PAYL_TO_CMD_OPCODE=3196,
    HCI_WR_AUTO_FLUSH_TO_CMD_OPCODE=3112,
    HCI_WR_CLASS_OF_DEV_CMD_OPCODE=3108,
    HCI_WR_CON_ACCEPT_TO_CMD_OPCODE=3094,
    HCI_WR_CURR_IAC_LAP_CMD_OPCODE=3130,
    HCI_WR_DFT_ERR_DATA_REP_CMD_OPCODE=3163,
    HCI_WR_DFT_LINK_POL_STG_CMD_OPCODE=2063,
    HCI_WR_EXT_INQ_LEN_CMD_OPCODE=3201,
    HCI_WR_EXT_INQ_RSP_CMD_OPCODE=3154,
    HCI_WR_EXT_PAGE_TO_CMD_OPCODE=3199,
    HCI_WR_FLOW_CNTL_MODE_CMD_OPCODE=3175,
    HCI_WR_HOLD_MODE_ACTIVITY_CMD_OPCODE=3116,
    HCI_WR_INQ_MODE_CMD_OPCODE=3141,
    HCI_WR_INQ_SCAN_ACT_CMD_OPCODE=3102,
    HCI_WR_INQ_SCAN_TYPE_CMD_OPCODE=3139,
    HCI_WR_INQ_TX_PWR_LVL_CMD_OPCODE=3161,
    HCI_WR_LE_HOST_SUPP_CMD_OPCODE=3181,
    HCI_WR_LINK_POL_STG_CMD_OPCODE=2061,
    HCI_WR_LINK_SUPV_TO_CMD_OPCODE=3127,
    HCI_WR_LOCAL_NAME_CMD_OPCODE=3091,
    HCI_WR_LOOPBACK_MODE_CMD_OPCODE=6146,
    HCI_WR_NB_BDCST_RETX_CMD_OPCODE=3114,
    HCI_WR_PAGE_SCAN_ACT_CMD_OPCODE=3100,
    HCI_WR_PAGE_SCAN_TYPE_CMD_OPCODE=3143,
    HCI_WR_PAGE_TO_CMD_OPCODE=3096,
    HCI_WR_PIN_TYPE_CMD_OPCODE=3082,
    HCI_WR_SCAN_EN_CMD_OPCODE=3098,
    HCI_WR_SEC_CON_HOST_SUPP_CMD_OPCODE=3194,
    HCI_WR_SEC_CON_TEST_MODE_CMD_OPCODE=6154,
    HCI_WR_SP_DBG_MODE_CMD_OPCODE=6148,
    HCI_WR_SP_MODE_CMD_OPCODE=3158,
    HCI_WR_STORED_LK_CMD_OPCODE=3089,
    HCI_WR_SYNC_FLOW_CTRL_EN_CMD_OPCODE=3119,
    HCI_WR_SYNC_TRAIN_PARAM_CMD_OPCODE=3192,
    HCI_WR_VOICE_STG_CMD_OPCODE=3110
} hci_opcode;

typedef struct hci_le_rem_con_param_req_reply_cmd hci_le_rem_con_param_req_reply_cmd, *Phci_le_rem_con_param_req_reply_cmd;

struct hci_le_rem_con_param_req_reply_cmd { // DWARF DIE: ec3
    uint16_t conhdl;
    uint16_t interval_min;
    uint16_t interval_max;
    uint16_t latency;
    uint16_t timeout;
    uint16_t min_ce_len;
    uint16_t max_ce_len;
};

typedef struct hci_le_rd_rem_used_feats_cmd hci_le_rd_rem_used_feats_cmd, *Phci_le_rd_rem_used_feats_cmd;

struct hci_le_rd_rem_used_feats_cmd { // DWARF DIE: 1047
    uint16_t conhdl;
};

typedef struct hci_acl_data_tx hci_acl_data_tx, *Phci_acl_data_tx;

struct hci_acl_data_tx { // DWARF DIE: c2a
    uint16_t conhdl;
    uint8_t pb_bc_flag;
    undefined field_0x3;
    uint16_t length;
    undefined field_0x6;
    undefined field_0x7;
    struct em_buf_node * buf;
};

typedef struct hci_flush_cmd_cmp_evt hci_flush_cmd_cmp_evt, *Phci_flush_cmd_cmp_evt;

struct hci_flush_cmd_cmp_evt { // DWARF DIE: d03
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
};

typedef struct hci_le_start_enc_cmd hci_le_start_enc_cmd, *Phci_le_start_enc_cmd;

typedef struct rand_nb rand_nb, *Prand_nb;

struct rand_nb { // DWARF DIE: 405
    uint8_t nb[8];
};

struct hci_le_start_enc_cmd { // DWARF DIE: e48
    uint16_t conhdl;
    struct rand_nb nb;
    uint16_t enc_div;
    struct ltk ltk;
};

typedef struct hci_le_set_data_len_cmd hci_le_set_data_len_cmd, *Phci_le_set_data_len_cmd;

struct hci_le_set_data_len_cmd { // DWARF DIE: f69
    uint16_t conhdl;
    uint16_t tx_octets;
    uint16_t tx_time;
};

typedef struct hci_rd_auth_payl_to_cmd hci_rd_auth_payl_to_cmd, *Phci_rd_auth_payl_to_cmd;

struct hci_rd_auth_payl_to_cmd { // DWARF DIE: d3e
    uint16_t conhdl;
};

typedef struct hci_wr_auth_payl_to_cmd_cmp_evt hci_wr_auth_payl_to_cmd_cmp_evt, *Phci_wr_auth_payl_to_cmd_cmp_evt;

struct hci_wr_auth_payl_to_cmd_cmp_evt { // DWARF DIE: 101c
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
};

typedef struct hci_le_con_update_cmd hci_le_con_update_cmd, *Phci_le_con_update_cmd;

struct hci_le_con_update_cmd { // DWARF DIE: dd2
    uint16_t conhdl;
    uint16_t con_intv_min;
    uint16_t con_intv_max;
    uint16_t con_latency;
    uint16_t superv_to;
    uint16_t ce_len_min;
    uint16_t ce_len_max;
};

typedef struct hci_rd_tx_pwr_lvl_cmd hci_rd_tx_pwr_lvl_cmd, *Phci_rd_tx_pwr_lvl_cmd;

struct hci_rd_tx_pwr_lvl_cmd { // DWARF DIE: 1069
    uint16_t conhdl;
    uint8_t type;
    undefined field_0x3;
};

typedef struct hci_wr_auth_payl_to_cmd hci_wr_auth_payl_to_cmd, *Phci_wr_auth_payl_to_cmd;

struct hci_wr_auth_payl_to_cmd { // DWARF DIE: fec
    uint16_t conhdl;
    uint16_t auth_payl_to;
};

typedef struct hci_rd_auth_payl_to_cmd_cmp_evt hci_rd_auth_payl_to_cmd_cmp_evt, *Phci_rd_auth_payl_to_cmd_cmp_evt;

struct hci_rd_auth_payl_to_cmd_cmp_evt { // DWARF DIE: d60
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
    uint16_t auth_payl_to;
};

typedef struct hci_le_rem_con_param_req_neg_reply_cmd hci_le_rem_con_param_req_neg_reply_cmd, *Phci_le_rem_con_param_req_neg_reply_cmd;

struct hci_le_rem_con_param_req_neg_reply_cmd { // DWARF DIE: f39
    uint16_t conhdl;
    uint8_t reason;
    undefined field_0x3;
};

typedef struct hci_basic_conhdl_cmd hci_basic_conhdl_cmd, *Phci_basic_conhdl_cmd;

struct hci_basic_conhdl_cmd { // DWARF DIE: cb1
    uint16_t conhdl;
};

typedef struct hci_rd_rem_ver_info_cmd hci_rd_rem_ver_info_cmd, *Phci_rd_rem_ver_info_cmd;

struct hci_rd_rem_ver_info_cmd { // DWARF DIE: 10d2
    uint16_t conhdl;
};

typedef struct hci_rd_rssi_cmd_cmp_evt hci_rd_rssi_cmd_cmp_evt, *Phci_rd_rssi_cmd_cmp_evt;

struct hci_rd_rssi_cmd_cmp_evt { // DWARF DIE: d99
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
    int8_t rssi;
    undefined field_0x5;
};

typedef struct hci_le_rd_chnl_map_cmd_cmp_evt hci_le_rd_chnl_map_cmd_cmp_evt, *Phci_le_rd_chnl_map_cmd_cmp_evt;

struct hci_le_rd_chnl_map_cmd_cmp_evt { // DWARF DIE: fb3
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
    struct le_chnl_map ch_map;
    undefined field_0x9;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 20f1
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

struct rwip_rf_api { // DWARF DIE: 21c3
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

struct rwip_prio { // DWARF DIE: 2347
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 163d
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1669
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 421
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 48c
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

struct sess_k_div { // DWARF DIE: 4ae
    uint8_t skd[16];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 443
    uint8_t cmds[64];
};

typedef struct lld_evt_tag lld_evt_tag, *Plld_evt_tag;

typedef struct lld_evt_anchor lld_evt_anchor, *Plld_evt_anchor;

typedef struct ea_interval_tag ea_interval_tag, *Pea_interval_tag;

typedef union lld_evt_info lld_evt_info, *Plld_evt_info;

typedef struct lld_non_conn lld_non_conn, *Plld_non_conn;

typedef struct lld_conn lld_conn, *Plld_conn;

struct lld_non_conn { // DWARF DIE: 2dff
    uint32_t window;
    uint32_t anchor;
    uint32_t end_ts;
    _Bool initiate;
    _Bool connect_req_sent;
    undefined field_0xe;
    undefined field_0xf;
};

struct lld_conn { // DWARF DIE: 2e4f
    uint32_t sync_win_size;
    uint32_t sca_drift;
    uint16_t instant;
    uint16_t latency;
    uint16_t counter;
    uint16_t missed_cnt;
    uint16_t duration_dft;
    uint16_t update_offset;
    uint16_t eff_max_tx_time;
    uint16_t eff_max_tx_size;
    uint8_t update_size;
    uint8_t instant_action;
    uint8_t mst_sca;
    uint8_t last_md_rx;
    uint8_t tx_prog_pkt_cnt;
    _Bool wait_con_up_sync;
    undefined field_0x1e;
    undefined field_0x1f;
};

union lld_evt_info { // DWARF DIE: 2f3e
    struct lld_non_conn non_conn;
    struct lld_conn conn;
};

struct lld_evt_anchor { // DWARF DIE: 2dca
    uint32_t basetime_cnt;
    uint16_t finetime_cnt;
    uint16_t evt_cnt;
};

struct lld_evt_tag { // DWARF DIE: 2f67
    struct lld_evt_anchor anchor_point;
    struct co_list tx_acl_rdy;
    struct co_list tx_acl_tofree;
    struct co_list tx_llcp_pdu_rdy;
    struct co_list tx_prog;
    struct ea_interval_tag * interval_elt;
    union lld_evt_info evt;
    uint16_t conhdl;
    uint16_t cs_ptr;
    uint16_t interval;
    uint8_t rx_cnt;
    uint8_t mode;
    uint8_t tx_pwr;
    uint8_t default_prio;
    uint8_t evt_flag;
    _Bool delete_ongoing;
};

struct ea_interval_tag { // DWARF DIE: 24aa
    struct co_list_hdr hdr;
    uint16_t interval_used;
    uint16_t offset_used;
    uint16_t bandwidth_used;
    uint16_t conhdl_used;
    uint16_t role_used;
    uint16_t linkid;
};

typedef enum lld_evt_mode {
    LLD_EVT_ADV_MODE=0,
    LLD_EVT_EXT_ADV_MODE=5,
    LLD_EVT_EXT_SCAN_MODE=7,
    LLD_EVT_MODE_MAX=8,
    LLD_EVT_MST_MODE=3,
    LLD_EVT_PER_ADV_MODE=6,
    LLD_EVT_SCAN_MODE=1,
    LLD_EVT_SLV_MODE=4,
    LLD_EVT_TEST_MODE=2
} lld_evt_mode;

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 3062
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

typedef enum co_llcp_opcode {
    LLCP_CHANNEL_MAP_IND_OPCODE=1,
    LLCP_CONNECTION_PARAM_REQ_OPCODE=15,
    LLCP_CONNECTION_PARAM_RSP_OPCODE=16,
    LLCP_CONNECTION_UPDATE_IND_OPCODE=0,
    LLCP_ENC_REQ_OPCODE=3,
    LLCP_ENC_RSP_OPCODE=4,
    LLCP_FEATURE_REQ_OPCODE=8,
    LLCP_FEATURE_RSP_OPCODE=9,
    LLCP_LENGTH_REQ_OPCODE=20,
    LLCP_LENGTH_RSP_OPCODE=21,
    LLCP_OPCODE_MAX_OPCODE=22,
    LLCP_PAUSE_ENC_REQ_OPCODE=10,
    LLCP_PAUSE_ENC_RSP_OPCODE=11,
    LLCP_PING_REQ_OPCODE=18,
    LLCP_PING_RSP_OPCODE=19,
    LLCP_REJECT_IND_EXT_OPCODE=17,
    LLCP_REJECT_IND_OPCODE=13,
    LLCP_SLAVE_FEATURE_REQ_OPCODE=14,
    LLCP_START_ENC_REQ_OPCODE=5,
    LLCP_START_ENC_RSP_OPCODE=6,
    LLCP_TERMINATE_IND_OPCODE=2,
    LLCP_UNKNOWN_RSP_OPCODE=7,
    LLCP_VERSION_IND_OPCODE=12
} co_llcp_opcode;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict20bc_for__new anon_union.conflict20bc_for__new, *Panon_union.conflict20bc_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict1f30 anon_struct.conflict1f30, *Panon_struct.conflict1f30;

typedef struct anon_struct.conflict2075 anon_struct.conflict2075, *Panon_struct.conflict2075;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 1ee7
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 19ed
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

struct anon_struct.conflict1f30 { // DWARF DIE: 1f30
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

struct _on_exit_args { // DWARF DIE: 1a70
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 1ac5
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 197d
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 1ea2
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct anon_struct.conflict2075 { // DWARF DIE: 2075
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict20bc_for__new { // DWARF DIE: 20bc
    struct anon_struct.conflict1f30 _reent;
    struct anon_struct.conflict2075 _unused;
};

struct __sbuf { // DWARF DIE: 1b1e
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 1b4c
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

struct _reent { // DWARF DIE: 1cb8
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
    union anon_union.conflict20bc_for__new _new;
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

typedef union anon_union.conflict20bc anon_union.conflict20bc, *Panon_union.conflict20bc;

union anon_union.conflict20bc { // DWARF DIE: 20bc
    struct anon_struct.conflict1f30 _reent;
    struct anon_struct.conflict2075 _unused;
};

typedef struct llm_enc_req llm_enc_req, *Pllm_enc_req;

struct llm_enc_req { // DWARF DIE: 16f1
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

struct encrypt { // DWARF DIE: 32d8
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct rem_version { // DWARF DIE: 32a3
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct data_len_ext_tag { // DWARF DIE: 330d
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

struct llc_env_tag { // DWARF DIE: 339d
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

typedef enum llc_status_flag {
    LLC_STAT_DISC_REM_REQ_LSB=9,
    LLC_STAT_DISC_REM_REQ_MASK=512,
    LLC_STAT_FEAT_EXCH_LSB=0,
    LLC_STAT_FEAT_EXCH_MASK=1,
    LLC_STAT_INSTANT_PROCEED_LSB=11,
    LLC_STAT_INSTANT_PROCEED_MASK=2048,
    LLC_STAT_LLCP_DISCARD_LSB=3,
    LLC_STAT_LLCP_DISCARD_MASK=8,
    LLC_STAT_LLCP_INSTANT_EXTRACTED_LSB=10,
    LLC_STAT_LLCP_INSTANT_EXTRACTED_MASK=1024,
    LLC_STAT_PEER_VERS_KNOWN_LSB=1,
    LLC_STAT_PEER_VERS_KNOWN_MASK=2,
    LLC_STAT_SYNC_FOUND_LSB=8,
    LLC_STAT_SYNC_FOUND_MASK=256,
    LLC_STAT_TO_PENDING_LSB=4,
    LLC_STAT_TO_PENDING_MASK=16,
    LLC_STAT_UPDATE_EVT_SENT_LSB=7,
    LLC_STAT_UPDATE_EVT_SENT_MASK=-128,
    LLC_STAT_UPDATE_HOST_REQ_LSB=6,
    LLC_STAT_UPDATE_HOST_REQ_MASK=64,
    LLC_STAT_UPDATE_PENDING_LSB=5,
    LLC_STAT_UPDATE_PENDING_MASK=32,
    LLC_STAT_WAIT_TRAFFIC_PAUSED_LSB=2,
    LLC_STAT_WAIT_TRAFFIC_PAUSED_MASK=4
} llc_status_flag;

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




// DWARF DIE: 3773

int hci_le_set_data_len_cmd_handler
              (ke_msg_id_t msgid,hci_le_set_data_len_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00010012();
  if ((uVar1 & 0xf) != 0xf) {
    iVar2 = *(int *)((uint)param->conhdl * 4);
    if ((((*(char *)(iVar2 + 0x52) == '\0') && ((ushort)(param->tx_octets - 0x1b) < 0xe1)) &&
        ((ushort)(param->tx_time - 0x148) < 0x701)) &&
       ((param->conhdl < 3 &&
        ((*(uint16_t *)(iVar2 + 0x46) != param->tx_octets ||
         (*(uint16_t *)(iVar2 + 0x4e) != param->tx_time)))))) {
      *(hci_le_set_data_len_cmd **)(iVar2 + 0xc) = param;
      FUN_00010084();
      iVar2 = 1;
      goto _L0;
    }
  }
  iVar2 = 0;
_L0:
  FUN_00010096();
  return iVar2;
}



undefined4 FUN_00010012(void)

{
  undefined4 uVar1;
  ushort *unaff_s1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_00010012();
  if ((uVar2 & 0xf) != 0xf) {
    iVar3 = *(int *)((uint)*unaff_s1 * 4);
    if ((((*(char *)(iVar3 + 0x52) == '\0') && ((ushort)(unaff_s1[1] - 0x1b) < 0xe1)) &&
        ((ushort)(unaff_s1[2] - 0x148) < 0x701)) &&
       ((*unaff_s1 < 3 &&
        ((*(ushort *)(iVar3 + 0x46) != unaff_s1[1] || (*(ushort *)(iVar3 + 0x4e) != unaff_s1[2])))))
       ) {
      *(ushort **)(iVar3 + 0xc) = unaff_s1;
      FUN_00010084();
      uVar1 = 1;
      goto _L0;
    }
  }
  uVar1 = 0;
_L0:
  FUN_00010096();
  return uVar1;
}



undefined4 FUN_00010084(void)

{
  FUN_00010084();
  FUN_00010096();
  return 1;
}



void FUN_00010096(void)

{
  FUN_00010096();
  return;
}



// DWARF DIE: 40c8

int hci_le_rem_con_param_req_neg_reply_cmd_handler
              (ke_msg_id_t msgid,hci_le_rem_con_param_req_neg_reply_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  
  uVar1 = _L0();
  if (((((uVar1 & 0xf) != 0xf) && ((uVar1 & 2) != 0)) &&
      (*(char *)(*(int *)((uint)param->conhdl * 4) + 0xa4) == '\x02')) && (param->reason == ';')) {
    FUN_0001011e();
    FUN_0001012c();
    *(undefined *)(*(int *)((uint)param->conhdl * 4) + 0xa4) = 0;
    FUN_0001014c();
  }
  FUN_0001015c();
  return 0;
}



undefined4 _L0(void)

{
  ushort *unaff_s0;
  uint uVar1;
  
  uVar1 = _L0();
  if (((((uVar1 & 0xf) != 0xf) && ((uVar1 & 2) != 0)) &&
      (*(char *)(*(int *)((uint)*unaff_s0 * 4) + 0xa4) == '\x02')) &&
     (*(char *)(unaff_s0 + 1) == ';')) {
    FUN_0001011e();
    FUN_0001012c();
    *(undefined *)(*(int *)((uint)*unaff_s0 * 4) + 0xa4) = 0;
    FUN_0001014c();
  }
  FUN_0001015c();
  return 0;
}



undefined4 FUN_0001011e(void)

{
  ushort *unaff_s0;
  int unaff_s1;
  
  FUN_0001011e();
  FUN_0001012c();
  *(undefined *)(*(int *)(unaff_s1 + (uint)*unaff_s0 * 4) + 0xa4) = 0;
  FUN_0001014c();
  FUN_0001015c();
  return 0;
}



undefined4 FUN_0001012c(void)

{
  ushort *unaff_s0;
  int unaff_s1;
  
  FUN_0001012c();
  *(undefined *)(*(int *)(unaff_s1 + (uint)*unaff_s0 * 4) + 0xa4) = 0;
  FUN_0001014c();
  FUN_0001015c();
  return 0;
}



undefined4 FUN_0001014c(void)

{
  FUN_0001014c();
  FUN_0001015c();
  return 0;
}



undefined4 FUN_0001015c(void)

{
  FUN_0001015c();
  return 0;
}



// DWARF DIE: 423b

int hci_le_rem_con_param_req_reply_cmd_handler
              (ke_msg_id_t msgid,hci_le_rem_con_param_req_reply_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  
  uVar2 = _L0();
  if (((uVar2 & 0xf) != 0xf) && ((uVar2 & 2) != 0)) {
    iVar5 = *(int *)((uint)param->conhdl * 4);
    if (*(char *)(iVar5 + 0xa4) == '\x02') {
      puVar1 = *(undefined **)(iVar5 + 4);
      iVar3 = _L0();
      if (iVar3 == 3) {
        *puVar1 = 2;
        uVar4 = *(ushort *)(puVar1 + 0xe);
        if (param->interval_min < *(ushort *)(puVar1 + 0xe)) {
          uVar4 = param->interval_min;
        }
        *(ushort *)(puVar1 + 0xe) = uVar4;
        uVar4 = *(ushort *)(puVar1 + 0x10);
        if (*(ushort *)(puVar1 + 0x10) < param->interval_max) {
          uVar4 = param->interval_max;
        }
        *(ushort *)(puVar1 + 0x10) = uVar4;
        *(uint16_t *)(puVar1 + 6) = param->latency;
        uVar4 = *(ushort *)(puVar1 + 8);
        if (*(ushort *)(puVar1 + 8) < param->timeout) {
          uVar4 = param->timeout;
        }
        *(ushort *)(puVar1 + 8) = uVar4;
        FUN_0001022c();
        FUN_0001023a();
        *(undefined *)(iVar5 + 0xa4) = 0;
        *(undefined4 *)(*(int *)((uint)param->conhdl * 4) + 4) = 0;
      }
      else {
        iVar3 = _L0();
        if (iVar3 == 4) {
          *(uint16_t *)(puVar1 + 0xe) = param->interval_min;
          *(uint16_t *)(puVar1 + 0x10) = param->interval_max;
          *(uint16_t *)(puVar1 + 6) = param->latency;
          *(uint16_t *)(puVar1 + 8) = param->timeout;
          FUN_000102c2();
          *(undefined *)(iVar5 + 0xa4) = 3;
          FUN_000102d4();
          FUN_000102e8();
          FUN_000102f6();
        }
      }
    }
  }
  FUN_00010260();
  return 0;
}



undefined4 _L0(void)

{
  ushort *unaff_s0;
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  
  uVar2 = _L0();
  if (((uVar2 & 0xf) != 0xf) && ((uVar2 & 2) != 0)) {
    iVar5 = *(int *)((uint)*unaff_s0 * 4);
    if (*(char *)(iVar5 + 0xa4) == '\x02') {
      puVar1 = *(undefined **)(iVar5 + 4);
      iVar3 = _L0();
      if (iVar3 == 3) {
        *puVar1 = 2;
        uVar4 = *(ushort *)(puVar1 + 0xe);
        if (unaff_s0[1] < *(ushort *)(puVar1 + 0xe)) {
          uVar4 = unaff_s0[1];
        }
        *(ushort *)(puVar1 + 0xe) = uVar4;
        uVar4 = *(ushort *)(puVar1 + 0x10);
        if (*(ushort *)(puVar1 + 0x10) < unaff_s0[2]) {
          uVar4 = unaff_s0[2];
        }
        *(ushort *)(puVar1 + 0x10) = uVar4;
        *(ushort *)(puVar1 + 6) = unaff_s0[3];
        uVar4 = *(ushort *)(puVar1 + 8);
        if (*(ushort *)(puVar1 + 8) < unaff_s0[4]) {
          uVar4 = unaff_s0[4];
        }
        *(ushort *)(puVar1 + 8) = uVar4;
        FUN_0001022c();
        FUN_0001023a();
        *(undefined *)(iVar5 + 0xa4) = 0;
        *(undefined4 *)(*(int *)((uint)*unaff_s0 * 4) + 4) = 0;
      }
      else {
        iVar3 = _L0();
        if (iVar3 == 4) {
          *(ushort *)(puVar1 + 0xe) = unaff_s0[1];
          *(ushort *)(puVar1 + 0x10) = unaff_s0[2];
          *(ushort *)(puVar1 + 6) = unaff_s0[3];
          *(ushort *)(puVar1 + 8) = unaff_s0[4];
          FUN_000102c2();
          *(undefined *)(iVar5 + 0xa4) = 3;
          FUN_000102d4();
          FUN_000102e8();
          FUN_000102f6();
        }
      }
    }
  }
  FUN_00010260();
  return 0;
}



undefined4 _L0(void)

{
  ushort *unaff_s0;
  undefined *unaff_s1;
  int iVar1;
  ushort uVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s8;
  undefined unaff_s9;
  
  iVar1 = _L0();
  if (iVar1 == unaff_s8) {
    *unaff_s1 = unaff_s9;
    uVar2 = *(ushort *)(unaff_s1 + 0xe);
    if (unaff_s0[1] < *(ushort *)(unaff_s1 + 0xe)) {
      uVar2 = unaff_s0[1];
    }
    *(ushort *)(unaff_s1 + 0xe) = uVar2;
    uVar2 = *(ushort *)(unaff_s1 + 0x10);
    if (*(ushort *)(unaff_s1 + 0x10) < unaff_s0[2]) {
      uVar2 = unaff_s0[2];
    }
    *(ushort *)(unaff_s1 + 0x10) = uVar2;
    *(ushort *)(unaff_s1 + 6) = unaff_s0[3];
    uVar2 = *(ushort *)(unaff_s1 + 8);
    if (*(ushort *)(unaff_s1 + 8) < unaff_s0[4]) {
      uVar2 = unaff_s0[4];
    }
    *(ushort *)(unaff_s1 + 8) = uVar2;
    FUN_0001022c();
    FUN_0001023a();
    *(undefined *)(unaff_s3 + 0xa4) = 0;
    *(undefined4 *)(*(int *)(unaff_s2 + (uint)*unaff_s0 * 4) + 4) = 0;
  }
  else {
    iVar1 = _L0();
    if (iVar1 == 4) {
      *(ushort *)(unaff_s1 + 0xe) = unaff_s0[1];
      *(ushort *)(unaff_s1 + 0x10) = unaff_s0[2];
      *(ushort *)(unaff_s1 + 6) = unaff_s0[3];
      *(ushort *)(unaff_s1 + 8) = unaff_s0[4];
      FUN_000102c2();
      *(char *)(unaff_s3 + 0xa4) = (char)unaff_s8;
      FUN_000102d4();
      FUN_000102e8();
      FUN_000102f6();
    }
  }
  FUN_00010260();
  return 0;
}



undefined4 FUN_0001022c(void)

{
  ushort *unaff_s0;
  int unaff_s2;
  int unaff_s3;
  
  FUN_0001022c();
  FUN_0001023a();
  *(undefined *)(unaff_s3 + 0xa4) = 0;
  *(undefined4 *)(*(int *)(unaff_s2 + (uint)*unaff_s0 * 4) + 4) = 0;
  FUN_00010260();
  return 0;
}



undefined4 FUN_0001023a(void)

{
  ushort *unaff_s0;
  int unaff_s2;
  int unaff_s3;
  
  FUN_0001023a();
  *(undefined *)(unaff_s3 + 0xa4) = 0;
  *(undefined4 *)(*(int *)(unaff_s2 + (uint)*unaff_s0 * 4) + 4) = 0;
  FUN_00010260();
  return 0;
}



undefined4 FUN_00010260(void)

{
  FUN_00010260();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s3;
  undefined unaff_s8;
  
  iVar1 = _L0();
  if (iVar1 == 4) {
    *(undefined2 *)(unaff_s1 + 0xe) = *(undefined2 *)(unaff_s0 + 2);
    *(undefined2 *)(unaff_s1 + 0x10) = *(undefined2 *)(unaff_s0 + 4);
    *(undefined2 *)(unaff_s1 + 6) = *(undefined2 *)(unaff_s0 + 6);
    *(undefined2 *)(unaff_s1 + 8) = *(undefined2 *)(unaff_s0 + 8);
    FUN_000102c2();
    *(undefined *)(unaff_s3 + 0xa4) = unaff_s8;
    FUN_000102d4();
    FUN_000102e8();
    FUN_000102f6();
  }
  FUN_00010260();
  return 0;
}



undefined4 FUN_000102c2(void)

{
  int unaff_s3;
  undefined unaff_s8;
  
  FUN_000102c2();
  *(undefined *)(unaff_s3 + 0xa4) = unaff_s8;
  FUN_000102d4();
  FUN_000102e8();
  FUN_000102f6();
  FUN_00010260();
  return 0;
}



undefined4 FUN_000102d4(void)

{
  FUN_000102d4();
  FUN_000102e8();
  FUN_000102f6();
  FUN_00010260();
  return 0;
}



undefined4 FUN_000102e8(void)

{
  FUN_000102e8();
  FUN_000102f6();
  FUN_00010260();
  return 0;
}



undefined4 FUN_000102f6(void)

{
  FUN_000102f6();
  FUN_00010260();
  return 0;
}



// DWARF DIE: 4520

int hci_le_ltk_req_neg_reply_cmd_handler
              (ke_msg_id_t msgid,hci_basic_conhdl_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00010314();
  if ((((uVar1 & 0xf) != 0xf) && ((uVar1 & 2) != 0)) &&
     (iVar2 = *(int *)((uint)param->conhdl * 4), *(char *)(iVar2 + 0xa4) == '\t')) {
    if ((*(byte *)(iVar2 + 0xa5) & 0x10) == 0) {
      if ((uVar1 & 1) != 0) {
        FUN_00010396();
      }
      *(undefined *)(*(int *)((uint)param->conhdl * 4) + 0xa4) = 0xd;
      iVar2 = *(int *)((uint)param->conhdl * 4);
      *(byte *)(iVar2 + 0xa5) = *(byte *)(iVar2 + 0xa5) & 0xf7;
      FUN_000103d6();
    }
    else {
      FUN_0001035e();
    }
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010314(void)

{
  uint uVar1;
  ushort *unaff_s2;
  
  uVar1 = FUN_00010314();
  if ((((uVar1 & 0xf) != 0xf) && ((uVar1 & 2) != 0)) &&
     (*(char *)(*(int *)((uint)*unaff_s2 * 4) + 0xa4) == '\t')) {
    if ((*(byte *)(*(int *)((uint)*unaff_s2 * 4) + 0xa5) & 0x10) == 0) {
      if ((uVar1 & 1) != 0) {
        FUN_00010396();
      }
      *(undefined *)(*(int *)((uint)*unaff_s2 * 4) + 0xa4) = 0xd;
      *(byte *)(*(int *)((uint)*unaff_s2 * 4) + 0xa5) =
           *(byte *)(*(int *)((uint)*unaff_s2 * 4) + 0xa5) & 0xf7;
      FUN_000103d6();
    }
    else {
      FUN_0001035e();
    }
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_0001035e(void)

{
  FUN_0001035e();
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010370(void)

{
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010396(void)

{
  int unaff_s1;
  int iVar1;
  ushort *unaff_s2;
  
  FUN_00010396();
  *(undefined *)(*(int *)((uint)*unaff_s2 * 4 + unaff_s1) + 0xa4) = 0xd;
  iVar1 = *(int *)(unaff_s1 + (uint)*unaff_s2 * 4);
  *(byte *)(iVar1 + 0xa5) = *(byte *)(iVar1 + 0xa5) & 0xf7;
  FUN_000103d6();
  FUN_00010370();
  return 0;
}



undefined4 FUN_000103d6(void)

{
  FUN_000103d6();
  FUN_00010370();
  return 0;
}



// DWARF DIE: 46d8

int hci_le_ltk_req_reply_cmd_handler
              (ke_msg_id_t msgid,hci_le_ltk_req_reply_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_000103f6();
  if ((((uVar1 & 0xf) != 0xf) && ((uVar1 & 2) != 0)) &&
     (*(char *)(*(int *)((uint)param->conhdl * 4) + 0xa4) == '\t')) {
    iVar2 = FUN_00010434();
    (*pcRam00000000)(&param->ltk,0x10,pcRam00000000);
    (*pcRam00000000)(iVar2 + 0x10,*(int *)((uint)param->conhdl * 4) + 0x71,0x10,pcRam00000000);
    FUN_0001046a();
    *(undefined *)(*(int *)((uint)param->conhdl * 4) + 0xa4) = 10;
  }
  FUN_0001048a();
  return 0;
}



undefined4 FUN_000103f6(void)

{
  ushort *unaff_s1;
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_000103f6();
  if ((((uVar1 & 0xf) != 0xf) && ((uVar1 & 2) != 0)) &&
     (*(char *)(*(int *)((uint)*unaff_s1 * 4) + 0xa4) == '\t')) {
    iVar2 = FUN_00010434();
    (*pcRam00000000)(unaff_s1 + 1,0x10,pcRam00000000);
    (*pcRam00000000)(iVar2 + 0x10,*(int *)((uint)*unaff_s1 * 4) + 0x71,0x10,pcRam00000000);
    FUN_0001046a();
    *(undefined *)(*(int *)((uint)*unaff_s1 * 4) + 0xa4) = 10;
  }
  FUN_0001048a();
  return 0;
}



undefined4 FUN_00010434(void)

{
  int unaff_s0;
  ushort *unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00010434();
  (*pcRam00000000)(unaff_s1 + 1,0x10,pcRam00000000);
  (*pcRam00000000)(iVar1 + 0x10,*(int *)((uint)*unaff_s1 * 4 + unaff_s0) + 0x71,0x10,pcRam00000000);
  FUN_0001046a();
  *(undefined *)(*(int *)(unaff_s0 + (uint)*unaff_s1 * 4) + 0xa4) = 10;
  FUN_0001048a();
  return 0;
}



undefined4 FUN_0001046a(void)

{
  int unaff_s0;
  ushort *unaff_s1;
  
  FUN_0001046a();
  *(undefined *)(*(int *)(unaff_s0 + (uint)*unaff_s1 * 4) + 0xa4) = 10;
  FUN_0001048a();
  return 0;
}



undefined4 FUN_0001048a(void)

{
  FUN_0001048a();
  return 0;
}



// WARNING: Variable defined which should be unmapped: valid_r
// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 3ed4

int hci_disconnect_cmd_handler
              (ke_msg_id_t msgid,hci_disconnect_cmd *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack24;
  uint8_t valid_r [7];
  
  uVar1 = _L0();
  if ((uVar1 & 0xf) != 0xf) {
    uStack24 = 0x15141305;
    valid_r._0_2_ = 0x291a;
    valid_r[2] = ';';
    iVar2 = 0;
    do {
      if (valid_r[iVar2 + -4] == param->reason) {
        FUN_00010504();
        break;
      }
      iVar2 += 1;
    } while (iVar2 != 7);
  }
  if (*(char *)(*(int *)((uint)param->conhdl * 4) + 0xa2) == '\0') {
    FUN_0001052e();
    *(undefined *)(*(int *)((uint)param->conhdl * 4) + 0xa2) = 1;
  }
  *(undefined *)(*(int *)((uint)param->conhdl * 4) + 0xa2) = 0;
  return 0;
}



undefined4 _L0(void)

{
  ushort *unaff_s1;
  uint uVar1;
  int iVar2;
  undefined4 in_stack_00000008;
  undefined2 in_stack_0000000c;
  undefined in_stack_0000000e;
  
  uVar1 = _L0();
  if ((uVar1 & 0xf) != 0xf) {
    in_stack_00000008 = 0x15141305;
    in_stack_0000000c = 0x291a;
    in_stack_0000000e = 0x3b;
    iVar2 = 0;
    do {
      if (*(char *)((int)&stack0x00000008 + iVar2) == *(char *)(unaff_s1 + 1)) {
        FUN_00010504();
        break;
      }
      iVar2 += 1;
    } while (iVar2 != 7);
  }
  if (*(char *)(*(int *)((uint)*unaff_s1 * 4) + 0xa2) == '\0') {
    FUN_0001052e();
    *(undefined *)(*(int *)((uint)*unaff_s1 * 4) + 0xa2) = 1;
  }
  *(undefined *)(*(int *)((uint)*unaff_s1 * 4) + 0xa2) = 0;
  return 0;
}



undefined4 FUN_00010504(void)

{
  ushort *unaff_s1;
  
  FUN_00010504();
  if (*(char *)(*(int *)((uint)*unaff_s1 * 4) + 0xa2) == '\0') {
    FUN_0001052e();
    *(undefined *)(*(int *)((uint)*unaff_s1 * 4) + 0xa2) = 1;
  }
  *(undefined *)(*(int *)((uint)*unaff_s1 * 4) + 0xa2) = 0;
  return 0;
}



undefined4 FUN_0001052e(void)

{
  int unaff_s0;
  ushort *unaff_s1;
  
  FUN_0001052e();
  *(undefined *)(*(int *)((uint)*unaff_s1 * 4 + unaff_s0) + 0xa2) = 1;
  *(undefined *)(*(int *)(unaff_s0 + (uint)*unaff_s1 * 4) + 0xa2) = 0;
  return 0;
}



// DWARF DIE: 485f

int hci_le_start_enc_cmd_handler
              (ke_msg_id_t msgid,hci_le_start_enc_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined2 in_register_00002032;
  
  uVar2 = _L0();
  if (((uVar2 & 0xf) != 0xf) && ((uVar2 & 4) == 0)) {
    if ((uVar2 & 1) != 0) {
      return 2;
    }
    iVar3 = FUN_000105d0();
    if ((iVar3 == 3) && ((*(byte *)(*(int *)((uint)param->conhdl * 4) + 0x69) & 1) != 0)) {
      FUN_00010602();
      FUN_00010614();
      piVar1 = (int *)((CONCAT22(in_register_00002032,dest_id) >> 8) * 4);
      _L0();
      iVar3 = *piVar1;
      *(undefined *)(iVar3 + 0xa3) = 10;
      *(byte *)(iVar3 + 0xa5) = *(byte *)(iVar3 + 0xa5) | 4;
      iVar3 = _L0();
      if (iVar3 == 0) {
        _LVL118();
      }
      else {
        iVar3 = *piVar1;
        *(ushort *)(iVar3 + 0x5c) = *(ushort *)(iVar3 + 0x5c) | 4;
      }
      *(hci_le_start_enc_cmd **)(*(int *)((uint)param->conhdl * 4) + 8) = param;
      return 1;
    }
  }
  FUN_000105a6();
  return 0;
}



undefined4 _L0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint unaff_s3;
  ushort *unaff_s4;
  
  uVar2 = _L0();
  if (((uVar2 & 0xf) != 0xf) && ((uVar2 & 4) == 0)) {
    if ((uVar2 & 1) != 0) {
      return 2;
    }
    iVar3 = FUN_000105d0();
    if ((iVar3 == 3) && ((*(byte *)(*(int *)((uint)*unaff_s4 * 4) + 0x69) & 1) != 0)) {
      FUN_00010602();
      FUN_00010614();
      piVar1 = (int *)((unaff_s3 >> 8) * 4);
      _L0();
      iVar3 = *piVar1;
      *(undefined *)(iVar3 + 0xa3) = 10;
      *(byte *)(iVar3 + 0xa5) = *(byte *)(iVar3 + 0xa5) | 4;
      iVar3 = _L0();
      if (iVar3 == 0) {
        _LVL118();
      }
      else {
        iVar3 = *piVar1;
        *(ushort *)(iVar3 + 0x5c) = *(ushort *)(iVar3 + 0x5c) | 4;
      }
      *(ushort **)(*(int *)((uint)*unaff_s4 * 4) + 8) = unaff_s4;
      return 1;
    }
  }
  FUN_000105a6();
  return 0;
}



undefined4 FUN_000105a6(void)

{
  FUN_000105a6();
  return 0;
}



undefined4 FUN_000105d0(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  ushort *unaff_s4;
  
  iVar2 = FUN_000105d0();
  if ((iVar2 == 3) && ((*(byte *)(*(int *)((uint)*unaff_s4 * 4) + 0x69) & 1) != 0)) {
    FUN_00010602();
    FUN_00010614();
    _L0();
    iVar2 = *(int *)(unaff_s1 * 4);
    *(undefined *)(iVar2 + 0xa3) = 10;
    *(byte *)(iVar2 + 0xa5) = *(byte *)(iVar2 + 0xa5) | 4;
    iVar2 = _L0();
    if (iVar2 == 0) {
      _LVL118();
    }
    else {
      iVar2 = *(int *)(unaff_s1 * 4);
      *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) | 4;
    }
    uVar1 = 1;
    *(ushort **)(*(int *)((uint)*unaff_s4 * 4) + 8) = unaff_s4;
  }
  else {
    FUN_000105a6();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00010602(void)

{
  int unaff_s0;
  int unaff_s1;
  int *piVar1;
  int iVar2;
  ushort *unaff_s4;
  
  FUN_00010602();
  FUN_00010614();
  _L0();
  piVar1 = (int *)(unaff_s1 * 4 + unaff_s0);
  iVar2 = *piVar1;
  *(undefined *)(iVar2 + 0xa3) = 10;
  *(byte *)(iVar2 + 0xa5) = *(byte *)(iVar2 + 0xa5) | 4;
  iVar2 = _L0();
  if (iVar2 == 0) {
    _LVL118();
  }
  else {
    iVar2 = *piVar1;
    *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) | 4;
  }
  *(ushort **)(*(int *)(unaff_s0 + (uint)*unaff_s4 * 4) + 8) = unaff_s4;
  return 1;
}



undefined4 FUN_00010614(void)

{
  int unaff_s0;
  int unaff_s1;
  int *piVar1;
  int iVar2;
  ushort *unaff_s4;
  
  FUN_00010614();
  _L0();
  piVar1 = (int *)(unaff_s1 * 4 + unaff_s0);
  iVar2 = *piVar1;
  *(undefined *)(iVar2 + 0xa3) = 10;
  *(byte *)(iVar2 + 0xa5) = *(byte *)(iVar2 + 0xa5) | 4;
  iVar2 = _L0();
  if (iVar2 == 0) {
    _LVL118();
  }
  else {
    iVar2 = *piVar1;
    *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) | 4;
  }
  *(ushort **)(*(int *)(unaff_s0 + (uint)*unaff_s4 * 4) + 8) = unaff_s4;
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  ushort *unaff_s4;
  
  _L0();
  iVar1 = *(int *)(unaff_s1 + unaff_s0);
  *(undefined *)(iVar1 + 0xa3) = 10;
  *(byte *)(iVar1 + 0xa5) = *(byte *)(iVar1 + 0xa5) | 4;
  iVar1 = _L0();
  if (iVar1 == 0) {
    _LVL118();
  }
  else {
    iVar1 = *(int *)(unaff_s1 + unaff_s0);
    *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) | 4;
  }
  *(ushort **)(*(int *)(unaff_s0 + (uint)*unaff_s4 * 4) + 8) = unaff_s4;
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  ushort *unaff_s4;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    _LVL118();
  }
  else {
    *(ushort *)(*unaff_s1 + 0x5c) = *(ushort *)(*unaff_s1 + 0x5c) | 4;
  }
  *(ushort **)(*(int *)(unaff_s0 + (uint)*unaff_s4 * 4) + 8) = unaff_s4;
  return 1;
}



undefined4 _LVL118(void)

{
  int unaff_s0;
  ushort *unaff_s4;
  
  _LVL118();
  *(ushort **)(*(int *)(unaff_s0 + (uint)*unaff_s4 * 4) + 8) = unaff_s4;
  return 1;
}



// DWARF DIE: 4b27

int hci_le_rd_rem_used_feats_cmd_handler
              (ke_msg_id_t msgid,hci_le_rd_rem_used_feats_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  
  uVar1 = _L0();
  if (((uVar1 & 0xf) != 0xf) && ((*(ushort *)(*(int *)((uint)param->conhdl * 4) + 0x5c) & 1) == 0))
  {
    if ((uVar1 & 5) != 0) {
      return 2;
    }
    _LVL125();
    *(undefined *)(*(int *)((uint)param->conhdl * 4) + 0xa3) = 1;
    FUN_00010704();
    FUN_00010718();
  }
  FUN_00010728();
  if ((*(ushort *)(*(int *)((uint)param->conhdl * 4) + 0x5c) & 1) != 0) {
    FUN_0001074c();
  }
  return 0;
}



undefined4 _L0(void)

{
  ushort *unaff_s1;
  uint uVar1;
  
  uVar1 = _L0();
  if (((uVar1 & 0xf) != 0xf) && ((*(ushort *)(*(int *)((uint)*unaff_s1 * 4) + 0x5c) & 1) == 0)) {
    if ((uVar1 & 5) != 0) {
      return 2;
    }
    _LVL125();
    *(undefined *)(*(int *)((uint)*unaff_s1 * 4) + 0xa3) = 1;
    FUN_00010704();
    FUN_00010718();
  }
  FUN_00010728();
  if ((*(ushort *)(*(int *)((uint)*unaff_s1 * 4) + 0x5c) & 1) != 0) {
    FUN_0001074c();
  }
  return 0;
}



undefined4 _LVL125(void)

{
  int unaff_s0;
  ushort *unaff_s1;
  
  _LVL125();
  *(undefined *)(*(int *)((uint)*unaff_s1 * 4 + unaff_s0) + 0xa3) = 1;
  FUN_00010704();
  FUN_00010718();
  FUN_00010728();
  if ((*(ushort *)(*(int *)(unaff_s0 + (uint)*unaff_s1 * 4) + 0x5c) & 1) != 0) {
    FUN_0001074c();
  }
  return 0;
}



undefined4 FUN_00010704(void)

{
  int unaff_s0;
  ushort *unaff_s1;
  
  FUN_00010704();
  FUN_00010718();
  FUN_00010728();
  if ((*(ushort *)(*(int *)(unaff_s0 + (uint)*unaff_s1 * 4) + 0x5c) & 1) != 0) {
    FUN_0001074c();
  }
  return 0;
}



undefined4 FUN_00010718(void)

{
  int unaff_s0;
  ushort *unaff_s1;
  
  FUN_00010718();
  FUN_00010728();
  if ((*(ushort *)(*(int *)(unaff_s0 + (uint)*unaff_s1 * 4) + 0x5c) & 1) != 0) {
    FUN_0001074c();
  }
  return 0;
}



undefined4 FUN_00010728(void)

{
  int unaff_s0;
  ushort *unaff_s1;
  
  FUN_00010728();
  if ((*(ushort *)(*(int *)(unaff_s0 + (uint)*unaff_s1 * 4) + 0x5c) & 1) != 0) {
    FUN_0001074c();
  }
  return 0;
}



void FUN_0001074c(void)

{
  FUN_0001074c();
  return;
}



// DWARF DIE: 4c90

int hci_le_rd_chnl_map_cmd_handler
              (ke_msg_id_t msgid,hci_basic_conhdl_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  undefined *puVar1;
  uint uVar2;
  undefined uVar3;
  
  puVar1 = (undefined *)FUN_0001078e();
  uVar2 = FUN_0001079a();
  uVar3 = 0xc;
  if ((uVar2 & 0xf) != 0xf) {
    (*pcRam00000000)(puVar1 + 4,*(int *)((uint)param->conhdl * 4) + 0x5e,5,pcRam00000000);
    uVar3 = 0;
  }
  *puVar1 = uVar3;
  *(uint16_t *)(puVar1 + 2) = param->conhdl;
  _L0();
  return 0;
}



undefined4 FUN_0001078e(void)

{
  ushort *unaff_s1;
  undefined *puVar1;
  uint uVar2;
  undefined uVar3;
  
  puVar1 = (undefined *)FUN_0001078e();
  uVar2 = FUN_0001079a();
  uVar3 = 0xc;
  if ((uVar2 & 0xf) != 0xf) {
    (*pcRam00000000)(puVar1 + 4,*(int *)((uint)*unaff_s1 * 4) + 0x5e,5,pcRam00000000);
    uVar3 = 0;
  }
  *puVar1 = uVar3;
  *(ushort *)(puVar1 + 2) = *unaff_s1;
  _L0();
  return 0;
}



undefined4 FUN_0001079a(void)

{
  undefined *unaff_s0;
  ushort *unaff_s1;
  uint uVar1;
  undefined uVar2;
  
  uVar1 = FUN_0001079a();
  uVar2 = 0xc;
  if ((uVar1 & 0xf) != 0xf) {
    (*pcRam00000000)(unaff_s0 + 4,*(int *)((uint)*unaff_s1 * 4) + 0x5e,5,pcRam00000000);
    uVar2 = 0;
  }
  *unaff_s0 = uVar2;
  *(ushort *)(unaff_s0 + 2) = *unaff_s1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3a28

int hci_rd_auth_payl_to_cmd_handler
              (ke_msg_id_t msgid,hci_rd_auth_payl_to_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 in_register_00002032;
  
  uVar1 = _L0();
  puVar2 = (undefined *)FUN_00010822();
  if ((uVar1 & 0xf) == 0xf) {
    *puVar2 = 0xc;
  }
  else {
    *puVar2 = 0;
    *(undefined2 *)(puVar2 + 4) =
         *(undefined2 *)(*(int *)((CONCAT22(in_register_00002032,dest_id) >> 8) * 4) + 0x58);
  }
  *(uint16_t *)(puVar2 + 2) = param->conhdl;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  uint unaff_s0;
  uint uVar1;
  undefined *puVar2;
  undefined2 *unaff_s2;
  
  uVar1 = _L0();
  puVar2 = (undefined *)FUN_00010822();
  if ((uVar1 & 0xf) == 0xf) {
    *puVar2 = 0xc;
  }
  else {
    *puVar2 = 0;
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(*(int *)((unaff_s0 >> 8) * 4) + 0x58);
  }
  *(undefined2 *)(puVar2 + 2) = *unaff_s2;
  _L0();
  return 0;
}



undefined4 FUN_00010822(void)

{
  uint unaff_s0;
  uint unaff_s1;
  undefined *puVar1;
  undefined2 *unaff_s2;
  
  puVar1 = (undefined *)FUN_00010822();
  if ((unaff_s1 & 0xf) == 0xf) {
    *puVar1 = 0xc;
  }
  else {
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(*(int *)((unaff_s0 >> 8) * 4) + 0x58);
  }
  *(undefined2 *)(puVar1 + 2) = *unaff_s2;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3de1

int hci_rd_rssi_cmd_handler
              (ke_msg_id_t msgid,hci_basic_conhdl_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = (undefined *)FUN_00010892();
  uVar2 = FUN_0001089e();
  if ((uVar2 & 0xf) == 0xf) {
    *puVar1 = 0xc;
    puVar1[4] = 0;
  }
  else {
    *puVar1 = 0;
    puVar1[4] = *(undefined *)(*(int *)((uint)param->conhdl * 4) + 0x68);
  }
  *(uint16_t *)(puVar1 + 2) = param->conhdl;
  _L0();
  return 0;
}



undefined4 FUN_00010892(void)

{
  ushort *unaff_s1;
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = (undefined *)FUN_00010892();
  uVar2 = FUN_0001089e();
  if ((uVar2 & 0xf) == 0xf) {
    *puVar1 = 0xc;
    puVar1[4] = 0;
  }
  else {
    *puVar1 = 0;
    puVar1[4] = *(undefined *)(*(int *)((uint)*unaff_s1 * 4) + 0x68);
  }
  *(ushort *)(puVar1 + 2) = *unaff_s1;
  _L0();
  return 0;
}



undefined4 FUN_0001089e(void)

{
  undefined *unaff_s0;
  ushort *unaff_s1;
  uint uVar1;
  
  uVar1 = FUN_0001089e();
  if ((uVar1 & 0xf) == 0xf) {
    *unaff_s0 = 0xc;
    unaff_s0[4] = 0;
  }
  else {
    *unaff_s0 = 0;
    unaff_s0[4] = *(undefined *)(*(int *)((uint)*unaff_s1 * 4) + 0x68);
  }
  *(ushort *)(unaff_s0 + 2) = *unaff_s1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3ca6

int hci_rd_tx_pwr_lvl_cmd_handler
              (ke_msg_id_t msgid,hci_rd_tx_pwr_lvl_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  undefined uVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar2 = (undefined *)FUN_00010916(_DAT_00000014,DAT_0000002c);
  uVar3 = FUN_00010922(_DAT_00000014,DAT_0000002c);
  if ((uVar3 & 0xf) == 0xf) {
    uVar1 = 0xc;
_L0:
    *puVar2 = uVar1;
    puVar2[4] = 0;
  }
  else {
    *puVar2 = 0;
    if (param->type == '\0') {
      uVar1 = (*_DAT_00000014)(*(ushort *)((uint)param->conhdl * 0x5c + 0x280080a0) & 0xff,1,
                               _DAT_00000014);
    }
    else {
      if (param->type != '\x01') {
        uVar1 = 0x12;
        goto _L0;
      }
      uVar1 = (*_DAT_00000014)(DAT_0000002c,1,_DAT_00000014);
    }
    puVar2[4] = uVar1;
  }
  *(uint16_t *)(puVar2 + 2) = param->conhdl;
  _L0();
  return 0;
}



undefined4 FUN_00010916(undefined *pcRam00000014,undefined param_2)

{
  ushort *unaff_s1;
  undefined uVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar2 = (undefined *)FUN_00010916(pcRam00000014,param_2);
  uVar3 = FUN_00010922(pcRam00000014,param_2);
  if ((uVar3 & 0xf) == 0xf) {
    uVar1 = 0xc;
_L0:
    *puVar2 = uVar1;
    puVar2[4] = 0;
  }
  else {
    *puVar2 = 0;
    if (*(char *)(unaff_s1 + 1) == '\0') {
      uVar1 = (*(code *)pcRam00000014)
                        (*(ushort *)((uint)*unaff_s1 * 0x5c + 0x280080a0) & 0xff,1,pcRam00000014);
    }
    else {
      if (*(char *)(unaff_s1 + 1) != '\x01') {
        uVar1 = 0x12;
        goto _L0;
      }
      uVar1 = (*(code *)pcRam00000014)(param_2,1,pcRam00000014);
    }
    puVar2[4] = uVar1;
  }
  *(ushort *)(puVar2 + 2) = *unaff_s1;
  _L0();
  return 0;
}



undefined4 FUN_00010922(undefined *pcRam00000014,undefined param_2)

{
  undefined *unaff_s0;
  ushort *unaff_s1;
  undefined uVar1;
  uint uVar2;
  
  uVar2 = FUN_00010922(pcRam00000014,param_2);
  if ((uVar2 & 0xf) == 0xf) {
    uVar1 = 0xc;
_L0:
    *unaff_s0 = uVar1;
    unaff_s0[4] = 0;
  }
  else {
    *unaff_s0 = 0;
    if (*(char *)(unaff_s1 + 1) == '\0') {
      uVar1 = (*(code *)pcRam00000014)
                        (*(ushort *)((uint)*unaff_s1 * 0x5c + 0x280080a0) & 0xff,1,pcRam00000014);
    }
    else {
      if (*(char *)(unaff_s1 + 1) != '\x01') {
        uVar1 = 0x12;
        goto _L0;
      }
      uVar1 = (*(code *)pcRam00000014)(param_2,1,pcRam00000014);
    }
    unaff_s0[4] = uVar1;
  }
  *(ushort *)(unaff_s0 + 2) = *unaff_s1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 4d9a

int hci_le_con_update_cmd_handler
              (ke_msg_id_t msgid,hci_le_con_update_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = FUN_000109cc();
  if ((uVar1 & 0xf) == 0xf) {
    iVar2 = 0xff;
    goto _L0;
  }
  iVar8 = *(int *)((uint)param->conhdl * 4);
  iVar9 = *(int *)(iVar8 + 0x10);
  iVar2 = _L0();
  if (iVar2 == 4) {
    if (((*(ushort *)(iVar8 + 0x5c) & 1) != 0) && (iVar2 = 0x1a, (*(byte *)(iVar8 + 0x69) & 2) == 0)
       ) goto _L0;
    if (*(char *)(iVar8 + 0xa6) == '\0') {
      iVar2 = 0x1a;
      goto _L0;
    }
  }
  uVar1 = (uint)param->con_intv_min;
  uVar6 = (uint)param->con_intv_max;
  if (uVar1 <= uVar6) {
    if (((((uint)param->ce_len_min <= (uint)param->ce_len_max) && (uVar6 < 0xc81)) && (5 < uVar1))
       && (((uVar5 = (uint)param->con_latency, uVar5 < 500 &&
            (uVar4 = (uint)param->superv_to, (uVar4 - 10 & 0xffff) < 0xc77)) &&
           ((uVar5 + 1) * uVar6 < uVar4 << 2)))) {
      uVar7 = (uint)(*(ushort *)(iVar9 + 0x78) >> 1);
      if (((uVar7 < uVar1) || (uVar6 < uVar7)) ||
         ((uVar1 = *(ushort *)(*(int *)(iVar8 + 0x10) + 0x12) / 0x4e2, uVar1 < param->ce_len_min ||
          (((param->ce_len_max < uVar1 || (*(ushort *)(iVar8 + 0x54) != uVar4)) ||
           (iVar2 = 0, *(ushort *)(iVar9 + 0x5e) - 1 != uVar5)))))) {
        puVar3 = (undefined *)FUN_00010ac2();
        *puVar3 = 0;
        iVar2 = 0xff;
        *(uint16_t *)(puVar3 + 2) = param->con_intv_min;
        *(uint16_t *)(puVar3 + 4) = param->con_intv_max;
        *(uint16_t *)(puVar3 + 6) = param->con_latency;
        *(uint16_t *)(puVar3 + 8) = param->superv_to;
        *(uint16_t *)(puVar3 + 10) = param->ce_len_min;
        *(uint16_t *)(puVar3 + 0xc) = param->ce_len_max;
        _L0();
      }
      goto _L0;
    }
  }
  iVar2 = 0xff;
_L0:
  FUN_00010b1c();
  iVar8 = FUN_00010b26();
  if ((iVar8 != 0) && (iVar2 != 0xff)) {
    FUN_00010b40();
  }
  return 0;
}



undefined4 FUN_000109cc(void)

{
  ushort *unaff_s0;
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = FUN_000109cc();
  if ((uVar1 & 0xf) == 0xf) {
    iVar2 = 0xff;
    goto _L0;
  }
  iVar8 = *(int *)((uint)*unaff_s0 * 4);
  iVar9 = *(int *)(iVar8 + 0x10);
  iVar2 = _L0();
  if (iVar2 == 4) {
    if (((*(ushort *)(iVar8 + 0x5c) & 1) != 0) && (iVar2 = 0x1a, (*(byte *)(iVar8 + 0x69) & 2) == 0)
       ) goto _L0;
    if (*(char *)(iVar8 + 0xa6) == '\0') {
      iVar2 = 0x1a;
      goto _L0;
    }
  }
  uVar1 = (uint)unaff_s0[1];
  uVar6 = (uint)unaff_s0[2];
  if (uVar1 <= uVar6) {
    if (((((uint)unaff_s0[5] <= (uint)unaff_s0[6]) && (uVar6 < 0xc81)) && (5 < uVar1)) &&
       (((uVar5 = (uint)unaff_s0[3], uVar5 < 500 &&
         (uVar4 = (uint)unaff_s0[4], (uVar4 - 10 & 0xffff) < 0xc77)) &&
        ((uVar5 + 1) * uVar6 < uVar4 << 2)))) {
      uVar7 = (uint)(*(ushort *)(iVar9 + 0x78) >> 1);
      if (((uVar7 < uVar1) || (uVar6 < uVar7)) ||
         ((uVar1 = *(ushort *)(*(int *)(iVar8 + 0x10) + 0x12) / 0x4e2, uVar1 < unaff_s0[5] ||
          (((unaff_s0[6] < uVar1 || (*(ushort *)(iVar8 + 0x54) != uVar4)) ||
           (iVar2 = 0, *(ushort *)(iVar9 + 0x5e) - 1 != uVar5)))))) {
        puVar3 = (undefined *)FUN_00010ac2();
        *puVar3 = 0;
        iVar2 = 0xff;
        *(ushort *)(puVar3 + 2) = unaff_s0[1];
        *(ushort *)(puVar3 + 4) = unaff_s0[2];
        *(ushort *)(puVar3 + 6) = unaff_s0[3];
        *(ushort *)(puVar3 + 8) = unaff_s0[4];
        *(ushort *)(puVar3 + 10) = unaff_s0[5];
        *(ushort *)(puVar3 + 0xc) = unaff_s0[6];
        _L0();
      }
      goto _L0;
    }
  }
  iVar2 = 0xff;
_L0:
  FUN_00010b1c();
  iVar8 = FUN_00010b26();
  if ((iVar8 != 0) && (iVar2 != 0xff)) {
    FUN_00010b40();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_s2;
  int unaff_s5;
  
  iVar1 = _L0();
  if (iVar1 == 4) {
    if (((*(ushort *)(unaff_s2 + 0x5c) & 1) != 0) &&
       (iVar1 = 0x1a, (*(byte *)(unaff_s2 + 0x69) & 2) == 0)) goto _L0;
    if (*(char *)(unaff_s2 + 0xa6) == '\0') {
      iVar1 = 0x1a;
      goto _L0;
    }
  }
  uVar2 = (uint)*(ushort *)(unaff_s0 + 2);
  uVar7 = (uint)*(ushort *)(unaff_s0 + 4);
  if (uVar2 <= uVar7) {
    if (((((uint)*(ushort *)(unaff_s0 + 10) <= (uint)*(ushort *)(unaff_s0 + 0xc)) && (uVar7 < 0xc81)
         ) && (5 < uVar2)) &&
       (((uVar6 = (uint)*(ushort *)(unaff_s0 + 6), uVar6 < 500 &&
         (uVar5 = (uint)*(ushort *)(unaff_s0 + 8), (uVar5 - 10 & 0xffff) < 0xc77)) &&
        ((uVar6 + 1) * uVar7 < uVar5 << 2)))) {
      uVar8 = (uint)(*(ushort *)(unaff_s5 + 0x78) >> 1);
      if (((uVar8 < uVar2) || (uVar7 < uVar8)) ||
         ((uVar2 = *(ushort *)(*(int *)(unaff_s2 + 0x10) + 0x12) / 0x4e2,
          uVar2 < *(ushort *)(unaff_s0 + 10) ||
          (((*(ushort *)(unaff_s0 + 0xc) < uVar2 || (*(ushort *)(unaff_s2 + 0x54) != uVar5)) ||
           (iVar1 = 0, *(ushort *)(unaff_s5 + 0x5e) - 1 != uVar6)))))) {
        puVar3 = (undefined *)FUN_00010ac2();
        *puVar3 = 0;
        iVar1 = 0xff;
        *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(unaff_s0 + 2);
        *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(unaff_s0 + 4);
        *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(unaff_s0 + 6);
        *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(unaff_s0 + 8);
        *(undefined2 *)(puVar3 + 10) = *(undefined2 *)(unaff_s0 + 10);
        *(undefined2 *)(puVar3 + 0xc) = *(undefined2 *)(unaff_s0 + 0xc);
        _L0();
      }
      goto _L0;
    }
  }
  iVar1 = 0xff;
_L0:
  FUN_00010b1c();
  iVar4 = FUN_00010b26();
  if ((iVar4 != 0) && (iVar1 != 0xff)) {
    FUN_00010b40();
  }
  return 0;
}



undefined4 FUN_00010ac2(void)

{
  int unaff_s0;
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (undefined *)FUN_00010ac2();
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(unaff_s0 + 2);
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(unaff_s0 + 4);
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(unaff_s0 + 6);
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(unaff_s0 + 8);
  *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(unaff_s0 + 10);
  *(undefined2 *)(puVar1 + 0xc) = *(undefined2 *)(unaff_s0 + 0xc);
  _L0();
  FUN_00010b1c();
  iVar2 = FUN_00010b26();
  if ((iVar2 != 0) && (false)) {
    FUN_00010b40();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s1;
  int iVar1;
  
  _L0();
  FUN_00010b1c();
  iVar1 = FUN_00010b26();
  if ((iVar1 != 0) && (unaff_s1 != 0xff)) {
    FUN_00010b40();
  }
  return 0;
}



undefined4 FUN_00010b1c(void)

{
  int unaff_s1;
  int iVar1;
  
  FUN_00010b1c();
  iVar1 = FUN_00010b26();
  if ((iVar1 != 0) && (unaff_s1 != 0xff)) {
    FUN_00010b40();
  }
  return 0;
}



undefined4 FUN_00010b26(void)

{
  int unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00010b26();
  if ((iVar1 != 0) && (unaff_s1 != 0xff)) {
    FUN_00010b40();
  }
  return 0;
}



undefined4 FUN_00010b40(void)

{
  FUN_00010b40();
  return 0;
}



// DWARF DIE: 38ce

int hci_wr_auth_payl_to_cmd_handler
              (ke_msg_id_t msgid,hci_wr_auth_payl_to_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 in_register_00002032;
  undefined uVar3;
  int *piVar4;
  
  uVar1 = _L0();
  puVar2 = (undefined *)FUN_00010b94();
  if ((uVar1 & 0xf) == 0xf) {
    uVar3 = 0xc;
  }
  else {
    piVar4 = (int *)((CONCAT22(in_register_00002032,dest_id) >> 8) * 4);
    if ((uint)*(ushort *)(*(int *)(*piVar4 + 0x10) + 0x78) *
        (uint)*(ushort *)(*(int *)(*piVar4 + 0x10) + 0x5e) <= (uint)param->auth_payl_to << 4) {
      *puVar2 = 0;
      *(uint16_t *)(*piVar4 + 0x58) = param->auth_payl_to;
      FUN_00010bec();
      if ((*(byte *)(*piVar4 + 0xa5) & 3) == 3) {
        FUN_00010c12();
        FUN_00010c26();
      }
      goto _L0;
    }
    uVar3 = 0x12;
  }
  *puVar2 = uVar3;
_L0:
  *(uint16_t *)(puVar2 + 2) = param->conhdl;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined uVar3;
  int *piVar4;
  undefined2 *unaff_s2;
  uint unaff_s3;
  
  uVar1 = _L0();
  puVar2 = (undefined *)FUN_00010b94();
  if ((uVar1 & 0xf) == 0xf) {
    uVar3 = 0xc;
  }
  else {
    piVar4 = (int *)((unaff_s3 >> 8) * 4);
    if ((uint)*(ushort *)(*(int *)(*piVar4 + 0x10) + 0x78) *
        (uint)*(ushort *)(*(int *)(*piVar4 + 0x10) + 0x5e) <= (uint)(ushort)unaff_s2[1] << 4) {
      *puVar2 = 0;
      *(undefined2 *)(*piVar4 + 0x58) = unaff_s2[1];
      FUN_00010bec();
      if ((*(byte *)(*piVar4 + 0xa5) & 3) == 3) {
        FUN_00010c12();
        FUN_00010c26();
      }
      goto _L0;
    }
    uVar3 = 0x12;
  }
  *puVar2 = uVar3;
_L0:
  *(undefined2 *)(puVar2 + 2) = *unaff_s2;
  _L0();
  return 0;
}



undefined4 FUN_00010b94(void)

{
  uint unaff_s0;
  undefined *puVar1;
  undefined uVar2;
  int *piVar3;
  undefined2 *unaff_s2;
  uint unaff_s3;
  
  puVar1 = (undefined *)FUN_00010b94();
  if ((unaff_s0 & 0xf) == 0xf) {
    uVar2 = 0xc;
  }
  else {
    piVar3 = (int *)((unaff_s3 >> 8) * 4);
    if ((uint)*(ushort *)(*(int *)(*piVar3 + 0x10) + 0x78) *
        (uint)*(ushort *)(*(int *)(*piVar3 + 0x10) + 0x5e) <= (uint)(ushort)unaff_s2[1] << 4) {
      *puVar1 = 0;
      *(undefined2 *)(*piVar3 + 0x58) = unaff_s2[1];
      FUN_00010bec();
      if ((*(byte *)(*piVar3 + 0xa5) & 3) == 3) {
        FUN_00010c12();
        FUN_00010c26();
      }
      goto _L0;
    }
    uVar2 = 0x12;
  }
  *puVar1 = uVar2;
_L0:
  *(undefined2 *)(puVar1 + 2) = *unaff_s2;
  _L0();
  return 0;
}



undefined4 FUN_00010bec(void)

{
  int *unaff_s0;
  int unaff_s1;
  undefined2 *unaff_s2;
  
  FUN_00010bec();
  if ((*(byte *)(*unaff_s0 + 0xa5) & 3) == 3) {
    FUN_00010c12();
    FUN_00010c26();
  }
  *(undefined2 *)(unaff_s1 + 2) = *unaff_s2;
  _L0();
  return 0;
}



undefined4 FUN_00010c12(void)

{
  int unaff_s1;
  undefined2 *unaff_s2;
  
  FUN_00010c12();
  FUN_00010c26();
  *(undefined2 *)(unaff_s1 + 2) = *unaff_s2;
  _L0();
  return 0;
}



undefined4 FUN_00010c26(void)

{
  int unaff_s1;
  undefined2 *unaff_s2;
  
  FUN_00010c26();
  *(undefined2 *)(unaff_s1 + 2) = *unaff_s2;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3fec

int hci_flush_cmd_handler
              (ke_msg_id_t msgid,hci_basic_conhdl_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint16_t uVar1;
  undefined *puVar2;
  
  uVar1 = param->conhdl;
  puVar2 = (undefined *)FUN_00010c6e();
  FUN_00010c7a();
  FUN_00010c98();
  *(uint16_t *)(puVar2 + 2) = uVar1;
  *puVar2 = 0;
  _L0();
  return 0;
}



undefined4 FUN_00010c6e(void)

{
  undefined2 unaff_s0;
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_00010c6e();
  FUN_00010c7a();
  FUN_00010c98();
  *(undefined2 *)(puVar1 + 2) = unaff_s0;
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 FUN_00010c7a(void)

{
  undefined2 unaff_s0;
  undefined *unaff_s1;
  
  FUN_00010c7a();
  FUN_00010c98();
  *(undefined2 *)(unaff_s1 + 2) = unaff_s0;
  *unaff_s1 = 0;
  _L0();
  return 0;
}



undefined4 FUN_00010c98(void)

{
  undefined2 unaff_s0;
  undefined *unaff_s1;
  
  FUN_00010c98();
  *(undefined2 *)(unaff_s1 + 2) = unaff_s0;
  *unaff_s1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3b25

int hci_rd_rem_ver_info_cmd_handler
              (ke_msg_id_t msgid,hci_rd_rem_ver_info_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int *piVar1;
  uint uVar2;
  undefined2 in_register_00002032;
  
  uVar2 = _L0();
  if ((uVar2 & 0xf) != 0xf) {
    piVar1 = (int *)((CONCAT22(in_register_00002032,dest_id) >> 8) * 4);
    if ((*(ushort *)(*piVar1 + 0x5c) & 2) != 0) {
      _LVL245();
      FUN_00010d28();
      return 0;
    }
    if ((uVar2 & 5) != 0) {
      return 2;
    }
    _LVL252();
    *(undefined *)(*piVar1 + 0xa3) = 2;
    FUN_00010d68();
    FUN_00010d7c();
  }
  FUN_00010cee();
  return 0;
}



undefined4 _L0(void)

{
  int *piVar1;
  uint uVar2;
  uint unaff_s3;
  
  uVar2 = _L0();
  if ((uVar2 & 0xf) != 0xf) {
    piVar1 = (int *)((unaff_s3 >> 8) * 4);
    if ((*(ushort *)(*piVar1 + 0x5c) & 2) != 0) {
      _LVL245();
      FUN_00010d28();
      return 0;
    }
    if ((uVar2 & 5) != 0) {
      return 2;
    }
    _LVL252();
    *(undefined *)(*piVar1 + 0xa3) = 2;
    FUN_00010d68();
    FUN_00010d7c();
  }
  FUN_00010cee();
  return 0;
}



undefined4 FUN_00010cee(void)

{
  FUN_00010cee();
  return 0;
}



undefined4 _LVL245(void)

{
  _LVL245();
  FUN_00010d28();
  return 0;
}



undefined4 FUN_00010d28(void)

{
  FUN_00010d28();
  return 0;
}



undefined4 _LVL252(void)

{
  int *unaff_s0;
  undefined unaff_s1;
  
  _LVL252();
  *(undefined *)(*unaff_s0 + 0xa3) = unaff_s1;
  FUN_00010d68();
  FUN_00010d7c();
  FUN_00010cee();
  return 0;
}



undefined4 FUN_00010d68(void)

{
  FUN_00010d68();
  FUN_00010d7c();
  FUN_00010cee();
  return 0;
}



undefined4 FUN_00010d7c(void)

{
  FUN_00010d7c();
  FUN_00010cee();
  return 0;
}



// DWARF DIE: 36ec

int llc_hci_command_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort *puVar1;
  undefined2 in_register_00002036;
  int iVar2;
  
  puVar1 = (ushort *)0x0;
  iVar2 = 0;
  do {
    if ((uint)*puVar1 == CONCAT22(in_register_00002036,src_id)) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar2 * 8 + 4);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
                    // WARNING: Could not recover jumptable at 0x00010db2. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*UNRECOVERED_JUMPTABLE)(CONCAT22(in_register_00002036,src_id));
      return iVar2;
    }
    iVar2 += 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0x10);
  return 0;
}



// DWARF DIE: 3566

int llc_hci_acl_data_tx_handler
              (ke_msg_id_t msgid,hci_acl_data_tx *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = _L0();
  if (((uVar1 & 0xf) == 0xf) || (param->length == 0)) {
    FUN_00010e08();
    FUN_00010e1a();
  }
  else {
    iVar2 = FUN_00010e30();
    if (iVar2 == 0) {
      FUN_00010e40();
    }
    FUN_00010e5c();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  
  uVar1 = _L0();
  if (((uVar1 & 0xf) == 0xf) || (*(short *)(unaff_s0 + 4) == 0)) {
    FUN_00010e08();
    FUN_00010e1a();
  }
  else {
    iVar2 = FUN_00010e30();
    if (iVar2 == 0) {
      FUN_00010e40();
    }
    FUN_00010e5c();
  }
  return 0;
}



undefined4 FUN_00010e08(void)

{
  FUN_00010e08();
  FUN_00010e1a();
  return 0;
}



undefined4 FUN_00010e1a(void)

{
  FUN_00010e1a();
  return 0;
}



undefined4 FUN_00010e30(void)

{
  int iVar1;
  
  iVar1 = FUN_00010e30();
  if (iVar1 == 0) {
    FUN_00010e40();
  }
  FUN_00010e5c();
  return 0;
}



undefined4 FUN_00010e40(void)

{
  FUN_00010e40();
  FUN_00010e5c();
  return 0;
}



undefined4 FUN_00010e5c(void)

{
  FUN_00010e5c();
  return 0;
}


