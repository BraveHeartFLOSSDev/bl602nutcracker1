typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef ushort uint16_t;

struct co_list_hdr { // DWARF DIE: 1b3
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 3f8
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: 11ed
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 1191
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 1d4
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 122f
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

struct llc_ch_asses_tag { // DWARF DIE: 1f38
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
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

typedef int _ssize_t;

typedef union anon_union.conflict8ed anon_union.conflict8ed, *Panon_union.conflict8ed;

typedef uint wint_t;

union anon_union.conflict8ed { // DWARF DIE: 8ed
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict8ed_for___value anon_union.conflict8ed_for___value, *Panon_union.conflict8ed_for___value;

union anon_union.conflict8ed_for___value { // DWARF DIE: 8ed
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 91f
    int __count;
    union anon_union.conflict8ed_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 183e
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 1869
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

struct bd_addr { // DWARF DIE: 2c2
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 16c9
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

struct ke_msg { // DWARF DIE: 22a
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 1904
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 17a0
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

struct ea_elt_tag { // DWARF DIE: 1578
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

struct le_chnl_map { // DWARF DIE: 2f4
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 1938
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 295
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 1809
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 19a9
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

typedef enum KE_TASK_TYPE {
    TASK_DBG=3,
    TASK_HCI_ONCHIP=4,
    TASK_LLC=1,
    TASK_LLD=2,
    TASK_LLM=0,
    TASK_MAX=5,
    TASK_NONE=-1
} KE_TASK_TYPE;

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

typedef enum llc_state_id {
    LLC_CONNECTED=0,
    LLC_DISC_BUSY=15,
    LLC_FREE=127,
    LLC_LOC_PROC_BUSY=1,
    LLC_REM_PROC_BUSY=2,
    LLC_STATE_MAX=-128,
    LLC_TRAFFIC_PAUSED_BUSY=4
} llc_state_id;

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

typedef long int32_t;

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

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 10e7
};

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

struct rwip_rf_api { // DWARF DIE: 1379
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

struct rwip_prio { // DWARF DIE: 14fd
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 12f1
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 865
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 321
    uint8_t ltk[16];
};

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 34e
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 3b9
    uint8_t supp_states[8];
};

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: 3db
    uint8_t skd[16];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 370
    uint8_t cmds[64];
};

typedef struct lld_evt_tag lld_evt_tag, *Plld_evt_tag;

typedef struct lld_evt_anchor lld_evt_anchor, *Plld_evt_anchor;

typedef struct ea_interval_tag ea_interval_tag, *Pea_interval_tag;

typedef union lld_evt_info lld_evt_info, *Plld_evt_info;

typedef struct lld_non_conn lld_non_conn, *Plld_non_conn;

typedef struct lld_conn lld_conn, *Plld_conn;

struct lld_non_conn { // DWARF DIE: 1c49
    uint32_t window;
    uint32_t anchor;
    uint32_t end_ts;
    _Bool initiate;
    _Bool connect_req_sent;
    undefined field_0xe;
    undefined field_0xf;
};

struct lld_conn { // DWARF DIE: 1c99
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

union lld_evt_info { // DWARF DIE: 1d88
    struct lld_non_conn non_conn;
    struct lld_conn conn;
};

struct lld_evt_anchor { // DWARF DIE: 1c14
    uint32_t basetime_cnt;
    uint16_t finetime_cnt;
    uint16_t evt_cnt;
};

struct lld_evt_tag { // DWARF DIE: 1db1
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

struct ea_interval_tag { // DWARF DIE: 1660
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

struct lld_evt_env_tag { // DWARF DIE: 1eac
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

typedef union anon_union.conflict10b2_for__new anon_union.conflict10b2_for__new, *Panon_union.conflict10b2_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflictf26 anon_struct.conflictf26, *Panon_struct.conflictf26;

typedef struct anon_struct.conflict106b anon_struct.conflict106b, *Panon_struct.conflict106b;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: 9e3
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

struct _rand48 { // DWARF DIE: edd
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflictf26 { // DWARF DIE: f26
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

struct _on_exit_args { // DWARF DIE: a66
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: abb
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 973
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct anon_struct.conflict106b { // DWARF DIE: 106b
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _glue { // DWARF DIE: e98
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: b14
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: b42
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

union anon_union.conflict10b2_for__new { // DWARF DIE: 10b2
    struct anon_struct.conflictf26 _reent;
    struct anon_struct.conflict106b _unused;
};

struct _reent { // DWARF DIE: cae
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
    union anon_union.conflict10b2_for__new _new;
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

typedef union anon_union.conflict10b2 anon_union.conflict10b2, *Panon_union.conflict10b2;

union anon_union.conflict10b2 { // DWARF DIE: 10b2
    struct anon_struct.conflictf26 _reent;
    struct anon_struct.conflict106b _unused;
};

typedef int32_t BaseType_t;

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct encrypt { // DWARF DIE: 2066
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct rem_version { // DWARF DIE: 2031
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct data_len_ext_tag { // DWARF DIE: 209b
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

struct llc_env_tag { // DWARF DIE: 212b
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




// DWARF DIE: 2ae5

void llc_check_trafic_paused(uint8_t conhdl)

{
  undefined3 in_register_00002029;
  int extraout_a0;
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(CONCAT31(in_register_00002029,conhdl) * 4);
  if (((*(ushort *)(*piVar2 + 0x5c) & 4) != 0) && (_LVL3(), extraout_a0 == 0)) {
    iVar1 = *piVar2;
    *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) & 0xfffb;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _LVL3(void)

{
  int *unaff_s1;
  int extraout_a0;
  
  _LVL3();
  if (extraout_a0 == 0) {
    *(ushort *)(*unaff_s1 + 0x5c) = *(ushort *)(*unaff_s1 + 0x5c) & 0xfffb;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// DWARF DIE: 2a64

uint8_t llc_util_get_free_conhdl(uint16_t *conhdl)

{
  int iVar1;
  uint16_t uVar2;
  
  iVar1 = _L0();
  if (iVar1 == 0x7f) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00010094();
    if (iVar1 != 0x7f) {
      return '\t';
    }
    uVar2 = 1;
  }
  *conhdl = uVar2;
  return '\0';
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined2 *unaff_s1;
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = _L0();
  if (iVar1 == unaff_s0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00010094();
    if (iVar1 != unaff_s0) {
      return 9;
    }
    uVar2 = 1;
  }
  *unaff_s1 = uVar2;
  return 0;
}



undefined4 FUN_00010094(void)

{
  int unaff_s0;
  undefined2 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010094();
  uVar2 = 9;
  if (iVar1 == unaff_s0) {
    *unaff_s1 = 1;
    uVar2 = 0;
  }
  return uVar2;
}



// DWARF DIE: 29e9

uint8_t llc_util_get_nb_active_link(void)

{
  uint8_t uVar1;
  char cVar2;
  undefined3 extraout_var;
  int iVar3;
  
  cVar2 = _L0();
  uVar1 = CONCAT31(extraout_var,cVar2) != 0x7f;
  iVar3 = FUN_000100d6();
  if (iVar3 != 0x7f) {
    uVar1 += '\x01';
  }
  return uVar1;
}



char _L0(void)

{
  char cVar1;
  undefined3 extraout_var;
  int iVar2;
  
  cVar1 = _L0();
  cVar1 = CONCAT31(extraout_var,cVar1) != 0x7f;
  iVar2 = FUN_000100d6();
  if (iVar2 != 0x7f) {
    cVar1 += '\x01';
  }
  return cVar1;
}



int FUN_000100d6(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = FUN_000100d6();
  if (iVar1 != 0x7f) {
    unaff_s0 += 1;
  }
  return unaff_s0;
}



// DWARF DIE: 2923

void llc_util_dicon_procedure(uint16_t conhdl,uint8_t reason)

{
  undefined2 in_register_0000202a;
  
  *(uint8_t *)(*(int *)(CONCAT22(in_register_0000202a,conhdl) * 4) + 0xa1) = reason;
  _LVL25();
  FUN_0001012c();
  FUN_00010140();
  return;
}



void _LVL25(void)

{
  _LVL25();
  FUN_0001012c();
  FUN_00010140();
  return;
}



void FUN_0001012c(void)

{
  FUN_0001012c();
  FUN_00010140();
  return;
}



void FUN_00010140(void)

{
  FUN_00010140();
  return;
}



// DWARF DIE: 28d4

void llc_util_update_channel_map(uint16_t conhdl,le_chnl_map *map)

{
  undefined2 in_register_0000202a;
  
                    // WARNING: Could not recover jumptable at 0x00010172. Too many branches
                    // WARNING: Treating indirect jump as call
  (*pcRam00000000)(*(int *)(CONCAT22(in_register_0000202a,conhdl) * 4) + 0x5e,5);
  return;
}



// DWARF DIE: 289f

void llc_util_set_llcp_discard_enable(uint16_t conhdl,_Bool enable)

{
  undefined2 in_register_0000202a;
  undefined3 in_register_0000202d;
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  uVar2 = *(ushort *)(iVar1 + 0x5c);
  if (CONCAT31(in_register_0000202d,enable) == 0) {
    uVar2 &= 0xfff7;
  }
  else {
    uVar2 |= 8;
  }
  *(ushort *)(iVar1 + 0x5c) = uVar2;
  return;
}



// DWARF DIE: 285e

void llc_util_set_auth_payl_to_margin(lld_evt_tag *evt)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (uint)evt->interval * (uint)*(ushort *)&(evt->evt).field_0xa;
  iVar1 = *(int *)((uint)evt->conhdl * 4);
  for (uVar3 = iVar2 * 8; (uint)*(ushort *)(iVar1 + 0x58) << 4 < uVar3; uVar3 -= iVar2) {
  }
  uVar3 >>= 4;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  *(short *)(iVar1 + 0x5a) = (short)uVar3;
  return;
}



// DWARF DIE: 2787

void llc_util_clear_operation_ptr(uint16_t conhdl,uint8_t op_type)

{
  undefined2 in_register_0000202a;
  undefined3 in_register_0000202d;
  int *piVar1;
  
  piVar1 = (int *)(CONCAT31(in_register_0000202d,op_type) * 4 +
                  *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4));
  if (*piVar1 == 0) {
    return;
  }
  *piVar1 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 270f

void llc_util_bw_mgt(uint16_t conhdl)

{
  ushort uVar1;
  int iVar2;
  undefined2 in_register_0000202a;
  int extraout_a0;
  int extraout_a0_00;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  if (iVar4 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar4 + 0x10);
  iVar3 = *(int *)(iVar2 + 0x50);
  uVar1 = *(short *)(iVar4 + 0x50) + *(short *)(iVar4 + 0x4e) + 0x96;
  if ((uint)*(ushort *)(iVar3 + 8) * 0x2710000 >> 0x10 < (uint)uVar1) {
    *(short *)(iVar3 + 8) = (short)((uVar1 + 0x270) / 0x271);
    _L0();
    if (extraout_a0 == 3) {
      *(ushort *)(iVar2 + 0x12) = uVar1;
    }
    _L0();
    if (extraout_a0_00 != 1) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void _L0(void)

{
  undefined2 unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  
  _L0();
  if (extraout_a0 == 3) {
    *(undefined2 *)(unaff_s1 + 0x12) = unaff_s0;
  }
  _L0();
  if (extraout_a0_00 == 1) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int extraout_a0;
  
  _L0();
  if (extraout_a0 == 1) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 2676

void llc_end_evt_defer(uint16_t conhdl)

{
  ushort uVar1;
  undefined2 in_register_0000202a;
  uint extraout_a0;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  if (*piVar3 == 0) {
    return;
  }
  FUN_000102b0();
  if ((extraout_a0 & 0xf) == 0xf) {
    iVar2 = *piVar3;
    uVar1 = *(ushort *)(iVar2 + 0x5c);
    if ((uVar1 & 0x200) != 0) {
      *(ushort *)(iVar2 + 0x5c) = uVar1 & 0xfdff;
      FUN_000102da();
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102b0(void)

{
  ushort uVar1;
  int *unaff_s1;
  uint extraout_a0;
  
  FUN_000102b0();
  if ((extraout_a0 & 0xf) == 0xf) {
    uVar1 = *(ushort *)(*unaff_s1 + 0x5c);
    if ((uVar1 & 0x200) != 0) {
      *(ushort *)(*unaff_s1 + 0x5c) = uVar1 & 0xfdff;
      FUN_000102da();
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102da(void)

{
  FUN_000102da();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 2430

void llc_pdu_llcp_tx_ack_defer(uint16_t conhdl,uint8_t opcode)

{
  undefined2 in_register_0000202a;
  uint extraout_a0;
  uint extraout_a0_00;
  undefined3 in_register_0000202d;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = CONCAT31(in_register_0000202d,opcode);
  _L0();
  if ((extraout_a0 & 0x7f) == 0x7f) {
    return;
  }
  piVar4 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  iVar3 = *piVar4;
  _L0();
  if ((extraout_a0_00 & 0xf) == 0xf) {
    if (((*(ushort *)(*piVar4 + 0x5c) & 0x200) == 0) && (uVar1 == 2)) {
      FUN_0001037c();
    }
    goto _L0;
  }
  if ((extraout_a0 & 2) != 0) {
    uVar2 = (uint)*(byte *)(iVar3 + 0xa4);
    if (uVar2 == 0xc) {
      uVar2 = 6;
    }
    else {
      if (uVar2 != 0xd) goto _L0;
    }
    if (uVar1 == uVar2) {
      FUN_000103c4();
      FUN_000103d2();
      *(undefined *)(iVar3 + 0xa4) = 0;
      *(byte *)(*piVar4 + 0xa5) = *(byte *)(*piVar4 + 0xa5) & 0xdb;
      goto _L0;
    }
  }
_L0:
  if ((((extraout_a0 & 1) != 0) && (*(char *)(iVar3 + 0xa3) == '\f')) && (uVar1 == 0xb)) {
    FUN_00010420();
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  uint extraout_a0;
  uint extraout_a0_00;
  uint uVar1;
  int unaff_s3;
  uint unaff_s4;
  int iVar2;
  int *piVar3;
  
  _L0();
  if ((extraout_a0 & 0x7f) == 0x7f) {
    return;
  }
  piVar3 = (int *)(unaff_s3 * 4);
  iVar2 = *piVar3;
  _L0();
  if ((extraout_a0_00 & 0xf) == 0xf) {
    if (((*(ushort *)(*piVar3 + 0x5c) & 0x200) == 0) && (unaff_s4 == 2)) {
      FUN_0001037c();
    }
    goto _L0;
  }
  if ((extraout_a0 & 2) != 0) {
    uVar1 = (uint)*(byte *)(iVar2 + 0xa4);
    if (uVar1 == 0xc) {
      uVar1 = 6;
    }
    else {
      if (uVar1 != 0xd) goto _L0;
    }
    if (unaff_s4 == uVar1) {
      FUN_000103c4();
      FUN_000103d2();
      *(undefined *)(iVar2 + 0xa4) = 0;
      *(byte *)(*piVar3 + 0xa5) = *(byte *)(*piVar3 + 0xa5) & 0xdb;
      goto _L0;
    }
  }
_L0:
  if ((((extraout_a0 & 1) != 0) && (*(char *)(iVar2 + 0xa3) == '\f')) && (unaff_s4 == 0xb)) {
    FUN_00010420();
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  uint unaff_s1;
  uint extraout_a0;
  uint uVar1;
  int unaff_s2;
  uint unaff_s4;
  int *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  
  _L0();
  if ((extraout_a0 & 0xf) == 0xf) {
    if (((*(ushort *)(*unaff_s5 + 0x5c) & 0x200) == 0) && (unaff_s4 == 2)) {
      FUN_0001037c();
    }
    goto _L0;
  }
  if ((unaff_s1 & 2) != 0) {
    uVar1 = (uint)*(byte *)(unaff_s6 + 0xa4);
    if (uVar1 == 0xc) {
      uVar1 = 6;
    }
    else {
      if (uVar1 != 0xd) goto _L0;
    }
    if (unaff_s4 == uVar1) {
      FUN_000103c4();
      FUN_000103d2();
      *(undefined *)(unaff_s6 + 0xa4) = 0;
      *(byte *)(*(int *)(unaff_s2 + unaff_s7) + 0xa5) =
           *(byte *)(*(int *)(unaff_s2 + unaff_s7) + 0xa5) & 0xdb;
      goto _L0;
    }
  }
_L0:
  if ((((unaff_s1 & 1) != 0) && (*(char *)(unaff_s6 + 0xa3) == '\f')) && (unaff_s4 == 0xb)) {
    FUN_00010420();
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001037c(void)

{
  FUN_0001037c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000103c4(void)

{
  int unaff_s2;
  int unaff_s6;
  int unaff_s7;
  
  FUN_000103c4();
  FUN_000103d2();
  *(undefined *)(unaff_s6 + 0xa4) = 0;
  *(byte *)(*(int *)(unaff_s2 + unaff_s7) + 0xa5) =
       *(byte *)(*(int *)(unaff_s2 + unaff_s7) + 0xa5) & 0xdb;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000103d2(void)

{
  int unaff_s2;
  int unaff_s6;
  int unaff_s7;
  
  FUN_000103d2();
  *(undefined *)(unaff_s6 + 0xa4) = 0;
  *(byte *)(*(int *)(unaff_s2 + unaff_s7) + 0xa5) =
       *(byte *)(*(int *)(unaff_s2 + unaff_s7) + 0xa5) & 0xdb;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010420(void)

{
  FUN_00010420();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 23d9

void llc_pdu_acl_tx_ack_defer(uint16_t conhdl,uint8_t tx_cnt)

{
  undefined2 in_register_0000202a;
  undefined3 in_register_0000202d;
  
  if (*(int *)(CONCAT22(in_register_0000202a,conhdl) * 4) == 0) {
    return;
  }
  if (CONCAT31(in_register_0000202d,tx_cnt) != 0) {
    _L0();
  }
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
// DWARF DIE: 22cc

void llc_pdu_defer(uint16_t conhdl,uint16_t status,uint8_t rssi,uint8_t channel,uint8_t length)

{
  undefined uVar1;
  undefined2 in_register_0000202a;
  undefined3 in_register_00002031;
  undefined3 in_register_00002039;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  iVar3 = *piVar2;
  if (iVar3 != 0) {
    uVar1 = (*_DAT_0000001c)(CONCAT31(in_register_00002031,rssi),_DAT_0000001c);
    *(undefined *)(iVar3 + 0x68) = uVar1;
    FUN_000104c6();
    if ((status & 0x1d) == 0) {
      _L0();
      if (((((status & 0x120) == 0) && (CONCAT31(in_register_00002039,length) != 0)) &&
          ((*(byte *)(*piVar2 + 0xa5) & 3) == 3)) && ((*(ushort *)(*piVar2 + 0x5c) & 8) == 0)) {
        FUN_00010570();
        FUN_00010586();
      }
    }
    else {
      if ((status & 0x10) != 0) {
        FUN_000104e2();
      }
    }
    iVar3 = *piVar2;
    if ((*(ushort *)(iVar3 + 0x5c) & 0x20) != 0) {
      *(ushort *)(iVar3 + 0x5c) = *(ushort *)(iVar3 + 0x5c) & 0xffdf;
      *(undefined2 *)(iVar3 + 0x54) = *(undefined2 *)(iVar3 + 0x56);
    }
  }
  return;
}



void FUN_000104c6(void)

{
  uint unaff_s1;
  int iVar1;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  FUN_000104c6();
  if ((unaff_s1 & 0x1d) == 0) {
    _L0();
    if (((((unaff_s1 & 0x120) == 0) && (unaff_s5 != 0)) && ((*(byte *)(*unaff_s2 + 0xa5) & 3) == 3))
       && ((*(ushort *)(*unaff_s2 + 0x5c) & 8) == 0)) {
      FUN_00010570();
      FUN_00010586();
    }
  }
  else {
    if ((unaff_s1 & 0x10) != 0) {
      FUN_000104e2();
    }
  }
  iVar1 = *(int *)(unaff_s3 + unaff_s4);
  if ((*(ushort *)(iVar1 + 0x5c) & 0x20) != 0) {
    *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) & 0xffdf;
    *(undefined2 *)(iVar1 + 0x54) = *(undefined2 *)(iVar1 + 0x56);
  }
  return;
}



void FUN_000104e2(void)

{
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  
  FUN_000104e2();
  iVar1 = *(int *)(unaff_s3 + unaff_s4);
  if ((*(ushort *)(iVar1 + 0x5c) & 0x20) != 0) {
    *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) & 0xffdf;
    *(undefined2 *)(iVar1 + 0x54) = *(undefined2 *)(iVar1 + 0x56);
  }
  return;
}



void _L0(void)

{
  int unaff_s1;
  int iVar1;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  _L0();
  if ((((unaff_s1 == 0) && (unaff_s5 != 0)) && ((*(byte *)(*unaff_s2 + 0xa5) & 3) == 3)) &&
     ((*(ushort *)(*unaff_s2 + 0x5c) & 8) == 0)) {
    FUN_00010570();
    FUN_00010586();
  }
  iVar1 = *(int *)(unaff_s3 + unaff_s4);
  if ((*(ushort *)(iVar1 + 0x5c) & 0x20) != 0) {
    *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) & 0xffdf;
    *(undefined2 *)(iVar1 + 0x54) = *(undefined2 *)(iVar1 + 0x56);
  }
  return;
}



void FUN_00010570(void)

{
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  
  FUN_00010570();
  FUN_00010586();
  iVar1 = *(int *)(unaff_s3 + unaff_s4);
  if ((*(ushort *)(iVar1 + 0x5c) & 0x20) != 0) {
    *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) & 0xffdf;
    *(undefined2 *)(iVar1 + 0x54) = *(undefined2 *)(iVar1 + 0x56);
  }
  return;
}



void FUN_00010586(void)

{
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  
  FUN_00010586();
  iVar1 = *(int *)(unaff_s3 + unaff_s4);
  if ((*(ushort *)(iVar1 + 0x5c) & 0x20) != 0) {
    *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) & 0xffdf;
    *(undefined2 *)(iVar1 + 0x54) = *(undefined2 *)(iVar1 + 0x56);
  }
  return;
}


