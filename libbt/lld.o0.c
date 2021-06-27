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

struct co_list_hdr { // DWARF DIE: 775
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 437
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: 143a
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 13de
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 796
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 147c
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

struct llc_ch_asses_tag { // DWARF DIE: 280a
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictab2_for___value anon_union.conflictab2_for___value, *Panon_union.conflictab2_for___value;

typedef uint wint_t;

union anon_union.conflictab2_for___value { // DWARF DIE: ab2
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: ae4
    int __count;
    union anon_union.conflictab2_for___value __value;
};

typedef long _off_t;

typedef union anon_union.conflictab2 anon_union.conflictab2, *Panon_union.conflictab2;

union anon_union.conflictab2 { // DWARF DIE: ab2
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 1d38
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct llm_pdu_con_req_tx llm_pdu_con_req_tx, *Pllm_pdu_con_req_tx;

typedef struct access_addr access_addr, *Paccess_addr;

typedef struct crc_init crc_init, *Pcrc_init;

typedef struct le_chnl_map le_chnl_map, *Ple_chnl_map;

struct crc_init { // DWARF DIE: 2b9
    uint8_t crc[3];
};

struct access_addr { // DWARF DIE: 1a5
    uint8_t addr[4];
};

struct le_chnl_map { // DWARF DIE: 1d2
    uint8_t map[5];
};

struct llm_pdu_con_req_tx { // DWARF DIE: 1cac
    struct access_addr aa;
    struct crc_init crcinit;
    uint8_t winsize;
    uint16_t winoffset;
    uint16_t interval;
    uint16_t latency;
    uint16_t timeout;
    struct le_chnl_map chm;
    uint8_t hop_sca;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 1d63
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

struct bd_addr { // DWARF DIE: 173
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 1a8c
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

struct ke_msg { // DWARF DIE: 16ed
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct llm_pdu_con_req_rx llm_pdu_con_req_rx, *Pllm_pdu_con_req_rx;

struct llm_pdu_con_req_rx { // DWARF DIE: 1c06
    struct bd_addr inita;
    struct bd_addr adva;
    struct access_addr aa;
    struct crc_init crcinit;
    uint8_t winsize;
    uint16_t winoffset;
    uint16_t interval;
    uint16_t latency;
    uint16_t timeout;
    struct le_chnl_map chm;
    uint8_t hop_sca;
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 1dfe
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 1b63
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

struct ea_elt_tag { // DWARF DIE: 858
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

struct channel_map_assess { // DWARF DIE: 1e32
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 146
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 1bd1
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 1ea3
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

typedef enum KE_EVENT_TYPE {
    KE_EVENT_BLE_CRYPT=1,
    KE_EVENT_BLE_EVT_DEFER=8,
    KE_EVENT_BLE_EVT_DELETE=9,
    KE_EVENT_BT_PSCAN_PROC=7,
    KE_EVENT_ECC_MULTIPLICATION=0,
    KE_EVENT_H4TL_CMD_HDR_RX=5,
    KE_EVENT_H4TL_CMD_PLD_RX=6,
    KE_EVENT_H4TL_TX=4,
    KE_EVENT_KE_MESSAGE=2,
    KE_EVENT_KE_TIMER=3,
    KE_EVENT_MAX=10
} KE_EVENT_TYPE;

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

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

typedef struct llc_create_con_req_ind llc_create_con_req_ind, *Pllc_create_con_req_ind;

struct llc_create_con_req_ind { // DWARF DIE: 21bd
    uint16_t con_int;
    uint16_t con_lat;
    uint16_t sup_to;
    uint16_t ral_ptr;
    struct bd_addr peer_addr;
    uint8_t peer_addr_type;
    uint8_t hop_inc;
    uint8_t sleep_clk_acc;
    uint8_t filter_policy;
};

typedef enum llc_proc_field {
    LLC_DISC=3,
    LLC_LOC_PROC=0,
    LLC_REM_PROC=1,
    LLC_TRAFFIC_PAUSED=2
} llc_proc_field;

typedef struct llc_con_upd_req_ind llc_con_upd_req_ind, *Pllc_con_upd_req_ind;

struct llc_con_upd_req_ind { // DWARF DIE: 224f
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

typedef enum llc_op_type {
    LLC_OP_DLE_UPD=3,
    LLC_OP_ENCRYPT=2,
    LLC_OP_LOC_PARAM_UPD=0,
    LLC_OP_MAX=4,
    LLC_OP_REM_PARAM_UPD=1
} llc_op_type;

typedef long int32_t;

typedef enum lld_util_instant_action {
    LLD_UTIL_CHMAP_UPDATE=2,
    LLD_UTIL_NO_ACTION=0,
    LLD_UTIL_PARAM_UPDATE=1
} lld_util_instant_action;

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

typedef struct hci_le_create_con_cmd hci_le_create_con_cmd, *Phci_le_create_con_cmd;

struct hci_le_create_con_cmd { // DWARF DIE: 482
    uint16_t scan_intv;
    uint16_t scan_window;
    uint8_t init_filt_policy;
    uint8_t peer_addr_type;
    struct bd_addr peer_addr;
    uint8_t own_addr_type;
    undefined field_0xd;
    uint16_t con_intv_min;
    uint16_t con_intv_max;
    uint16_t con_latency;
    uint16_t superv_to;
    uint16_t ce_len_min;
    uint16_t ce_len_max;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 12ac
};

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

struct rwip_rf_api { // DWARF DIE: 188d
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

struct rwip_prio { // DWARF DIE: 1a11
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 1778
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

struct ke_state_handler { // DWARF DIE: 17a4
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct ke_task_desc ke_task_desc, *Pke_task_desc;

struct ke_task_desc { // DWARF DIE: 17d7
    struct ke_state_handler * state_handler;
    struct ke_state_handler * default_handler;
    ke_state_t * state;
    uint16_t state_max;
    uint16_t idx_max;
};

typedef enum anon_enum_8.conflictb6 {
    ADDR_END=4,
    ADDR_MASK=1,
    ADDR_PUBLIC=0,
    ADDR_RAND=1,
    ADDR_RPA_MASK=2,
    ADDR_RPA_OR_PUBLIC=2,
    ADDR_RPA_OR_RAND=3,
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0,
    LLM_LE_ADV_DUMMY_IDX=1,
    LLM_LE_ADV_IDX=5,
    LLM_LE_COEXT_SCAN_IDX=3,
    LLM_LE_SCAN_CON_REQ_ADV_DIR_IDX=2,
    LLM_LE_SCAN_RSP_IDX=4,
    LL_ADV_CONN_DIR=1,
    LL_ADV_CONN_UNDIR=0,
    LL_ADV_DISC_UNDIR=6,
    LL_ADV_END=8,
    LL_ADV_NONCONN_UNDIR=2,
    LL_CONNECT_REQ=5,
    LL_EXT_ADV=7,
    LL_SCAN_REQ=3,
    LL_SCAN_RSP=4
} anon_enum_8.conflictb6;

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 1ff
    uint8_t ltk[16];
};

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 22c
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 297
    uint8_t supp_states[8];
};

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: 2d6
    uint8_t skd[16];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 24e
    uint8_t cmds[64];
};

typedef struct lld_evt_tag lld_evt_tag, *Plld_evt_tag;

typedef struct lld_evt_anchor lld_evt_anchor, *Plld_evt_anchor;

typedef struct ea_interval_tag ea_interval_tag, *Pea_interval_tag;

typedef union lld_evt_info lld_evt_info, *Plld_evt_info;

typedef struct lld_non_conn lld_non_conn, *Plld_non_conn;

typedef struct lld_conn lld_conn, *Plld_conn;

struct lld_non_conn { // DWARF DIE: 2486
    uint32_t window;
    uint32_t anchor;
    uint32_t end_ts;
    _Bool initiate;
    _Bool connect_req_sent;
    undefined field_0xe;
    undefined field_0xf;
};

struct lld_conn { // DWARF DIE: 24d6
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

union lld_evt_info { // DWARF DIE: 25c5
    struct lld_non_conn non_conn;
    struct lld_conn conn;
};

struct lld_evt_anchor { // DWARF DIE: 2451
    uint32_t basetime_cnt;
    uint16_t finetime_cnt;
    uint16_t evt_cnt;
};

struct lld_evt_tag { // DWARF DIE: 25ee
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

struct ea_interval_tag { // DWARF DIE: 940
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

struct lld_evt_env_tag { // DWARF DIE: 2722
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

typedef enum lld_evt_cs_format {
    LLD_ACTIVE_SCANNING=9,
    LLD_HD_ADVERTISER=5,
    LLD_INITIATING=15,
    LLD_LD_ADVERTISER=4,
    LLD_MASTER_CONNECTED=2,
    LLD_PASSIVE_SCANNING=8,
    LLD_RXTEST_MODE=29,
    LLD_SLAVE_CONNECTED=3,
    LLD_TXRXTEST_MODE=30,
    LLD_TXTEST_MODE=28
} lld_evt_cs_format;

typedef enum lld_evt_flag {
    LLD_EVT_FLAG_APFM=64,
    LLD_EVT_FLAG_LATENCY_ACTIVE=-128,
    LLD_EVT_FLAG_NO_RESTART=32,
    LLD_EVT_FLAG_WAITING_ACK=1,
    LLD_EVT_FLAG_WAITING_EOEVT_TO_DELETE=16,
    LLD_EVT_FLAG_WAITING_INSTANT=8,
    LLD_EVT_FLAG_WAITING_SYNC=2,
    LLD_EVT_FLAG_WAITING_TXPROG=4
} lld_evt_flag;

typedef struct lld_evt_update_tag lld_evt_update_tag, *Plld_evt_update_tag;

struct lld_evt_update_tag { // DWARF DIE: 26e3
    uint16_t win_offset;
    uint16_t instant;
    uint8_t win_size;
    undefined field_0x5;
};

typedef struct llcp_con_upd_ind llcp_con_upd_ind, *Pllcp_con_upd_ind;

struct llcp_con_upd_ind { // DWARF DIE: 20f3
    uint8_t opcode;
    uint8_t win_size;
    uint16_t win_off;
    uint16_t interv;
    uint16_t latency;
    uint16_t timeout;
    uint16_t instant;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict1277_for__new anon_union.conflict1277_for__new, *Panon_union.conflict1277_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict10eb anon_struct.conflict10eb, *Panon_struct.conflict10eb;

typedef struct anon_struct.conflict1230 anon_struct.conflict1230, *Panon_struct.conflict1230;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: ba8
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

struct anon_struct.conflict1230 { // DWARF DIE: 1230
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _rand48 { // DWARF DIE: 10a2
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict10eb { // DWARF DIE: 10eb
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

union anon_union.conflict1277_for__new { // DWARF DIE: 1277
    struct anon_struct.conflict10eb _reent;
    struct anon_struct.conflict1230 _unused;
};

struct _on_exit_args { // DWARF DIE: c2b
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: c80
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: b38
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct __sbuf { // DWARF DIE: cd9
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: d07
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

struct _glue { // DWARF DIE: 105d
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _reent { // DWARF DIE: e73
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
    union anon_union.conflict1277_for__new _new;
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

typedef union anon_union.conflict1277 anon_union.conflict1277, *Panon_union.conflict1277;

union anon_union.conflict1277 { // DWARF DIE: 1277
    struct anon_struct.conflict10eb _reent;
    struct anon_struct.conflict1230 _unused;
};

typedef int32_t BaseType_t;

typedef enum ea_elt_asap_type {
    EA_FLAG_ASAP_LIMIT=2,
    EA_FLAG_ASAP_NO_LIMIT=1,
    EA_FLAG_MAX=3,
    EA_FLAG_NO_ASAP=0
} ea_elt_asap_type;

typedef struct ea_param_output ea_param_output, *Pea_param_output;

struct ea_param_output { // DWARF DIE: a48
    uint16_t interval;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t duration;
    uint16_t offset;
    undefined field_0xa;
    undefined field_0xb;
};

typedef struct ea_param_input ea_param_input, *Pea_param_input;

struct ea_param_input { // DWARF DIE: 9a9
    uint16_t interval_min;
    uint16_t interval_max;
    uint32_t duration_min;
    uint16_t duration_max;
    uint8_t pref_period;
    undefined field_0xb;
    uint16_t offset;
    uint8_t action;
    undefined field_0xf;
    uint16_t conhdl;
    uint16_t role;
    _Bool odd_offset;
    undefined field_0x15;
    uint16_t linkid;
};

typedef enum ea_param_req_action {
    EA_PARAM_REQ_CHECK=1,
    EA_PARAM_REQ_GET=0
} ea_param_req_action;

typedef enum ea_error {
    EA_ERROR_BW_FULL=3,
    EA_ERROR_NOT_FOUND=2,
    EA_ERROR_OK=0,
    EA_ERROR_REJECTED=1
} ea_error;

typedef enum ea_elt_asap_parity {
    EA_EVEN_SLOT=0,
    EA_NO_PARITY=2,
    EA_ODD_SLOT=1
} ea_elt_asap_parity;

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct encrypt { // DWARF DIE: 2891
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct rem_version { // DWARF DIE: 285c
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct data_len_ext_tag { // DWARF DIE: 28c6
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

struct llc_env_tag { // DWARF DIE: 2956
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




// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5f93

void lld_init(_Bool reset)

{
  undefined3 in_register_00002029;
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 uStack24;
  bd_addr bd_addr;
  
  if (CONCAT31(in_register_00002029,reset) == 0) {
    _LVL1(DAT_0000002c);
  }
  iVar1 = 0;
  _DAT_280000f0 = _DAT_280000f0 & 0xfc00fe00 | 0x1b800d2;
  _DAT_2800000c = 0x1033a;
  _DAT_28000000 = _DAT_28000000 & 0xffcfff0f | 0xe0;
  _L0(DAT_0000002c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 7;
  }
  (*pcRam00000000)(&uStack24,uVar2,6,pcRam00000000);
  FUN_000100ac(DAT_0000002c);
  _DAT_28000024 = uStack24;
  _DAT_28000028 = (uint)bd_addr.addr._0_2_;
  _DAT_28000000 |= 0x200;
  _DAT_28000090 = 7;
  _DAT_280000b0 = 0x1fe;
  _DAT_280000b4 = 0x216;
  _DAT_280000b8 = 0x404;
  _DAT_28000120 = 0x22e;
  _DAT_28000124 = 3;
  puVar3 = (undefined2 *)&DAT_28008000;
  _DAT_2800814c = 0xbed6;
  _DAT_2800814e = 0x8e89;
  _DAT_28008150 = 0x5555;
  _DAT_28008152 = 0x55;
  _DAT_28008162 = 0;
  _DAT_28008164 = 0;
  _DAT_28008166 = 0;
  _DAT_280081a8 = 0xbed6;
  _DAT_280081aa = 0x8e89;
  _DAT_280081ac = 0x5555;
  _DAT_280081ae = 0x55;
  _DAT_280081be = 0;
  _DAT_280081c0 = 0;
  _DAT_280081c2 = 0;
  _DAT_28008168 = 0;
  _DAT_2800816a = 0;
  _DAT_280081c4 = 0;
  _DAT_280081c6 = 0;
  _DAT_2800002c = 0x3ce;
  _DAT_28008158 = (ushort)DAT_0000002c;
  _DAT_2800814a = _DAT_2800814a & 0xfff | 0x2000;
  _DAT_2800819e &= 0xff7f;
  _DAT_28008154 = 0;
  _DAT_280081b4 = (ushort)DAT_0000002c;
  _DAT_280081a6 = _DAT_280081a6 & 0xfff | 0x2000;
  _DAT_280081fa &= 0xff7f;
  _DAT_280081b0 = 0;
  _DAT_28008194 = 0;
  _DAT_28008196 = 0;
  _DAT_28008198 = 0;
  _DAT_2800819a = 0;
  _DAT_2800819c = 0;
  _DAT_280081f0 = 0;
  _DAT_280081f2 = 0;
  _DAT_280081f4 = 0;
  _DAT_280081f6 = 0;
  _DAT_280081f8 = 0;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  } while (puVar3 != (undefined2 *)0x28008040);
  FUN_00010226();
  _L0();
  _DAT_28008146 &= 0xf8ff;
  _DAT_280081a2 &= 0xf8ff;
  _L0();
  _DAT_28000000 = _DAT_28000000 | 0x100;
  _DAT_280000e0 = _DAT_280000e0 & 0xffffefff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL1(byte param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 in_stack_00000008;
  ushort in_stack_0000000c;
  
  _LVL1(param_1);
  iVar1 = 0;
  _DAT_280000f0 = _DAT_280000f0 & 0xfc00fe00 | 0x1b800d2;
  _DAT_2800000c = 0x1033a;
  _DAT_28000000 = _DAT_28000000 & 0xffcfff0f | 0xe0;
  _L0(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 7;
  }
  (*pcRam00000000)(&stack0x00000008,uVar2,6,pcRam00000000);
  FUN_000100ac(param_1);
  _DAT_28000024 = in_stack_00000008;
  _DAT_28000028 = (uint)in_stack_0000000c;
  _DAT_28000000 |= 0x200;
  _DAT_28000090 = 7;
  _DAT_280000b0 = 0x1fe;
  _DAT_280000b4 = 0x216;
  _DAT_280000b8 = 0x404;
  _DAT_28000120 = 0x22e;
  _DAT_28000124 = 3;
  puVar3 = (undefined2 *)&DAT_28008000;
  _DAT_2800814c = 0xbed6;
  _DAT_2800814e = 0x8e89;
  _DAT_28008150 = 0x5555;
  _DAT_28008152 = 0x55;
  _DAT_28008162 = 0;
  _DAT_28008164 = 0;
  _DAT_28008166 = 0;
  _DAT_280081a8 = 0xbed6;
  _DAT_280081aa = 0x8e89;
  _DAT_280081ac = 0x5555;
  _DAT_280081ae = 0x55;
  _DAT_280081be = 0;
  _DAT_280081c0 = 0;
  _DAT_280081c2 = 0;
  _DAT_28008168 = 0;
  _DAT_2800816a = 0;
  _DAT_280081c4 = 0;
  _DAT_280081c6 = 0;
  _DAT_2800002c = 0x3ce;
  _DAT_28008158 = (ushort)param_1;
  _DAT_2800814a = _DAT_2800814a & 0xfff | 0x2000;
  _DAT_2800819e &= 0xff7f;
  _DAT_28008154 = 0;
  _DAT_280081b4 = (ushort)param_1;
  _DAT_280081a6 = _DAT_280081a6 & 0xfff | 0x2000;
  _DAT_280081fa &= 0xff7f;
  _DAT_280081b0 = 0;
  _DAT_28008194 = 0;
  _DAT_28008196 = 0;
  _DAT_28008198 = 0;
  _DAT_2800819a = 0;
  _DAT_2800819c = 0;
  _DAT_280081f0 = 0;
  _DAT_280081f2 = 0;
  _DAT_280081f4 = 0;
  _DAT_280081f6 = 0;
  _DAT_280081f8 = 0;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  } while (puVar3 != (undefined2 *)0x28008040);
  FUN_00010226();
  _L0();
  _DAT_28008146 &= 0xf8ff;
  _DAT_280081a2 &= 0xf8ff;
  _L0();
  _DAT_28000000 = _DAT_28000000 | 0x100;
  _DAT_280000e0 = _DAT_280000e0 & 0xffffefff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(byte param_1)

{
  undefined2 *puVar1;
  undefined4 in_stack_00000008;
  ushort in_stack_0000000c;
  
  _L0(param_1);
  (*pcRam00000000)(&stack0x00000008,6,pcRam00000000);
  FUN_000100ac(param_1);
  _DAT_28000024 = in_stack_00000008;
  _DAT_28000028 = (uint)in_stack_0000000c;
  _DAT_28000000 |= 0x200;
  _DAT_28000090 = 7;
  _DAT_280000b0 = 0x1fe;
  _DAT_280000b4 = 0x216;
  _DAT_280000b8 = 0x404;
  _DAT_28000120 = 0x22e;
  _DAT_28000124 = 3;
  puVar1 = (undefined2 *)&DAT_28008000;
  _DAT_2800814c = 0xbed6;
  _DAT_2800814e = 0x8e89;
  _DAT_28008150 = 0x5555;
  _DAT_28008152 = 0x55;
  _DAT_28008162 = 0;
  _DAT_28008164 = 0;
  _DAT_28008166 = 0;
  _DAT_280081a8 = 0xbed6;
  _DAT_280081aa = 0x8e89;
  _DAT_280081ac = 0x5555;
  _DAT_280081ae = 0x55;
  _DAT_280081be = 0;
  _DAT_280081c0 = 0;
  _DAT_280081c2 = 0;
  _DAT_28008168 = 0;
  _DAT_2800816a = 0;
  _DAT_280081c4 = 0;
  _DAT_280081c6 = 0;
  _DAT_2800002c = 0x3ce;
  _DAT_28008158 = (ushort)param_1;
  _DAT_2800814a = _DAT_2800814a & 0xfff | 0x2000;
  _DAT_2800819e &= 0xff7f;
  _DAT_28008154 = 0;
  _DAT_280081b4 = (ushort)param_1;
  _DAT_280081a6 = _DAT_280081a6 & 0xfff | 0x2000;
  _DAT_280081fa &= 0xff7f;
  _DAT_280081b0 = 0;
  _DAT_28008194 = 0;
  _DAT_28008196 = 0;
  _DAT_28008198 = 0;
  _DAT_2800819a = 0;
  _DAT_2800819c = 0;
  _DAT_280081f0 = 0;
  _DAT_280081f2 = 0;
  _DAT_280081f4 = 0;
  _DAT_280081f6 = 0;
  _DAT_280081f8 = 0;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined2 *)0x28008040);
  FUN_00010226();
  _L0();
  _DAT_28008146 &= 0xf8ff;
  _DAT_280081a2 &= 0xf8ff;
  _L0();
  _DAT_28000000 = _DAT_28000000 | 0x100;
  _DAT_280000e0 = _DAT_280000e0 & 0xffffefff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100ac(byte param_1)

{
  undefined2 *puVar1;
  undefined4 in_stack_00000008;
  ushort in_stack_0000000c;
  
  FUN_000100ac(param_1);
  _DAT_28000024 = in_stack_00000008;
  _DAT_28000028 = (uint)in_stack_0000000c;
  _DAT_28000000 |= 0x200;
  _DAT_28000090 = 7;
  _DAT_280000b0 = 0x1fe;
  _DAT_280000b4 = 0x216;
  _DAT_280000b8 = 0x404;
  _DAT_28000120 = 0x22e;
  _DAT_28000124 = 3;
  puVar1 = (undefined2 *)&DAT_28008000;
  _DAT_2800814c = 0xbed6;
  _DAT_2800814e = 0x8e89;
  _DAT_28008150 = 0x5555;
  _DAT_28008152 = 0x55;
  _DAT_28008162 = 0;
  _DAT_28008164 = 0;
  _DAT_28008166 = 0;
  _DAT_280081a8 = 0xbed6;
  _DAT_280081aa = 0x8e89;
  _DAT_280081ac = 0x5555;
  _DAT_280081ae = 0x55;
  _DAT_280081be = 0;
  _DAT_280081c0 = 0;
  _DAT_280081c2 = 0;
  _DAT_28008168 = 0;
  _DAT_2800816a = 0;
  _DAT_280081c4 = 0;
  _DAT_280081c6 = 0;
  _DAT_2800002c = 0x3ce;
  _DAT_28008158 = (ushort)param_1;
  _DAT_2800814a = _DAT_2800814a & 0xfff | 0x2000;
  _DAT_2800819e &= 0xff7f;
  _DAT_28008154 = 0;
  _DAT_280081b4 = (ushort)param_1;
  _DAT_280081a6 = _DAT_280081a6 & 0xfff | 0x2000;
  _DAT_280081fa &= 0xff7f;
  _DAT_280081b0 = 0;
  _DAT_28008194 = 0;
  _DAT_28008196 = 0;
  _DAT_28008198 = 0;
  _DAT_2800819a = 0;
  _DAT_2800819c = 0;
  _DAT_280081f0 = 0;
  _DAT_280081f2 = 0;
  _DAT_280081f4 = 0;
  _DAT_280081f6 = 0;
  _DAT_280081f8 = 0;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined2 *)0x28008040);
  FUN_00010226();
  _L0();
  _DAT_28008146 &= 0xf8ff;
  _DAT_280081a2 &= 0xf8ff;
  _L0();
  _DAT_28000000 = _DAT_28000000 | 0x100;
  _DAT_280000e0 = _DAT_280000e0 & 0xffffefff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010226(void)

{
  int unaff_s0;
  
  FUN_00010226();
  _L0();
  *(ushort *)(unaff_s0 + 0x146) = *(ushort *)(unaff_s0 + 0x146) & 0xfeff;
  *(ushort *)(unaff_s0 + 0x146) = *(ushort *)(unaff_s0 + 0x146) & 0xfbff;
  *(ushort *)(unaff_s0 + 0x146) = *(ushort *)(unaff_s0 + 0x146) & 0xfdff;
  *(ushort *)(unaff_s0 + 0x1a2) = *(ushort *)(unaff_s0 + 0x1a2) & 0xfeff;
  *(ushort *)(unaff_s0 + 0x1a2) = *(ushort *)(unaff_s0 + 0x1a2) & 0xfbff;
  *(ushort *)(unaff_s0 + 0x1a2) = *(ushort *)(unaff_s0 + 0x1a2) & 0xfdff;
  _L0();
  _DAT_28000000 = _DAT_28000000 | 0x100;
  _DAT_280000e0 = _DAT_280000e0 & 0xffffefff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(ushort *)(unaff_s0 + 0x146) = *(ushort *)(unaff_s0 + 0x146) & 0xfeff;
  *(ushort *)(unaff_s0 + 0x146) = *(ushort *)(unaff_s0 + 0x146) & 0xfbff;
  *(ushort *)(unaff_s0 + 0x146) = *(ushort *)(unaff_s0 + 0x146) & 0xfdff;
  *(ushort *)(unaff_s0 + 0x1a2) = *(ushort *)(unaff_s0 + 0x1a2) & 0xfeff;
  *(ushort *)(unaff_s0 + 0x1a2) = *(ushort *)(unaff_s0 + 0x1a2) & 0xfbff;
  *(ushort *)(unaff_s0 + 0x1a2) = *(ushort *)(unaff_s0 + 0x1a2) & 0xfdff;
  _L0();
  _DAT_28000000 = _DAT_28000000 | 0x100;
  _DAT_280000e0 = _DAT_280000e0 & 0xffffefff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  _DAT_28000000 = _DAT_28000000 | 0x100;
  _DAT_280000e0 = _DAT_280000e0 & 0xffffefff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5d52

void lld_core_reset(void)

{
  undefined2 *puVar1;
  
  do {
  } while ((int)(_DAT_28000000 & 0xfffffeff | 0x80000000) < 0);
  _DAT_28000000 = _DAT_28000000 & 0xbffffeff | 0xc0000000;
  do {
  } while ((int)(_DAT_28000000 << 1) < 0);
  puVar1 = (undefined2 *)&DAT_28008000;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined2 *)0x28008040);
  _DAT_28008146 &= 0xf8ff;
  _DAT_280081a2 &= 0xf8ff;
  _L0();
  _DAT_2800000c = 0;
  _DAT_28000018 = 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  _DAT_2800000c = 0;
  _DAT_28000018 = 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 57ff

ea_elt_tag *
lld_adv_start(advertising_pdu_params *adv_par,em_desc_node *adv_pdu,em_desc_node *scan_rsp_pdu,
             uint8_t adv_pwr)

{
  ea_elt_tag *peVar1;
  ushort uVar2;
  undefined3 in_register_00002035;
  co_list_hdr *pcVar3;
  undefined4 uVar4;
  
  if (adv_par->type == '\x01') {
    uVar4 = 0x5dc;
    if (adv_par->adv_ldc_flag == false) {
      adv_par->intervalmax = 0x800;
      uVar4 = 0x4e2;
    }
  }
  else {
    uVar4 = 0x5dc;
  }
  peVar1 = (ea_elt_tag *)_LVL100();
  if (peVar1 != (ea_elt_tag *)0x0) {
    _DAT_2800814a = _DAT_2800814a & 0xffe0 | 2;
    uVar2 = 4;
    if (adv_par->type == '\x01') {
      uVar2 = (adv_par->adv_ldc_flag == false) + 4;
    }
    _DAT_28008146 =
         (ushort)((uRam00000000._2_1_ & 1) << 10) | uVar2 |
         (ushort)((uRam00000000._2_1_ >> 1 & 1) << 9) | (ushort)((uRam00000000._2_1_ >> 2 & 1) << 8)
         | 0xf000;
    _DAT_28008154 = (ushort)adv_par->filterpolicy << 8;
    _DAT_2800819e &= 0xff7f;
    _DAT_28008194 = 0;
    _DAT_28008196 = 0;
    _DAT_28008198 = 0;
    _DAT_2800819a = 0;
    _DAT_2800819c = 0;
    (*_uRam00000000)(0x2800816c,&adv_par->peer_addr,6,_uRam00000000);
    _DAT_28008172 = (ushort)adv_par->peer_addr_type;
    _DAT_28008156 = 0xc027;
    _DAT_28008152 = 0x55;
    _DAT_2800815a = 0;
    _DAT_28008158 = (undefined2)CONCAT31(in_register_00002035,adv_pwr);
    _DAT_2800814a = (ushort)(((uint)_DAT_2800814a << 0x14) >> 0x14) | 0x2000;
    _DAT_28008148 = 0;
    _DAT_28008168 = 0;
    _DAT_2800816a = 0;
    _DAT_28008160 = 8;
    _DAT_28000090 = (uint)adv_par->channelmap;
    _DAT_280000a0 = uVar4;
    *(uint8_t *)&peVar1[2].ea_cb_cancel = adv_pwr;
    _L0();
    if (scan_rsp_pdu != (em_desc_node *)0x0) {
      FUN_0001054c();
    }
    FUN_00010556();
    FUN_0001056a();
    pcVar3 = (co_list_hdr *)peVar1->timestamp;
    peVar1[2].hdr.next = pcVar3;
    peVar1[2].linked_element = (ea_elt_tag *)((uint)(pcVar3 + 0x200) & 0x7ffffff);
    *(undefined2 *)&peVar1[2].timestamp = 0;
  }
  return peVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _LVL100(void)

{
  int iVar1;
  ushort uVar2;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  undefined4 unaff_s7;
  
  iVar1 = _LVL100();
  if (iVar1 != 0) {
    _DAT_2800814a = _DAT_2800814a & 0xffe0 | 2;
    uVar2 = 4;
    if (*(char *)(unaff_s2 + 0x1c) == '\x01') {
      uVar2 = (*(char *)(unaff_s2 + 0x21) == '\0') + 4;
    }
    _DAT_28008146 =
         (ushort)((uRam00000000._2_1_ & 1) << 10) | uVar2 |
         (ushort)((uRam00000000._2_1_ >> 1 & 1) << 9) | (ushort)((uRam00000000._2_1_ >> 2 & 1) << 8)
         | 0xf000;
    _DAT_28008154 = (ushort)*(byte *)(unaff_s2 + 0x1b) << 8;
    _DAT_2800819e &= 0xff7f;
    _DAT_28008194 = 0;
    _DAT_28008196 = 0;
    _DAT_28008198 = 0;
    _DAT_2800819a = 0;
    _DAT_2800819c = 0;
    (*_uRam00000000)(0x2800816c,unaff_s2 + 0x10,6,_uRam00000000);
    _DAT_28008172 = (ushort)*(byte *)(unaff_s2 + 0x20);
    _DAT_28008156 = 0xc027;
    _DAT_28008152 = 0x55;
    _DAT_2800815a = 0;
    _DAT_2800814a = (ushort)(((uint)_DAT_2800814a << 0x14) >> 0x14) | 0x2000;
    _DAT_28008148 = 0;
    _DAT_28008168 = 0;
    _DAT_2800816a = 0;
    _DAT_28008160 = 8;
    _DAT_28000090 = (uint)*(byte *)(unaff_s2 + 0x1a);
    _DAT_280000a0 = unaff_s7;
    _DAT_28008158 = unaff_s4;
    *(char *)(iVar1 + 0x7c) = (char)unaff_s4;
    _L0();
    if (unaff_s3 != 0) {
      FUN_0001054c();
    }
    FUN_00010556();
    FUN_0001056a();
    *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 8);
    *(uint *)(iVar1 + 0x5c) = *(int *)(iVar1 + 8) + 0x800U & 0x7ffffff;
    *(undefined2 *)(iVar1 + 0x60) = 0;
  }
  return iVar1;
}



void _L0(void)

{
  int unaff_s1;
  int unaff_s3;
  
  _L0();
  if (unaff_s3 != 0) {
    FUN_0001054c();
  }
  FUN_00010556();
  FUN_0001056a();
  *(int *)(unaff_s1 + 0x58) = *(int *)(unaff_s1 + 8);
  *(uint *)(unaff_s1 + 0x5c) = *(int *)(unaff_s1 + 8) + 0x800U & 0x7ffffff;
  *(undefined2 *)(unaff_s1 + 0x60) = 0;
  return;
}



void FUN_0001054c(void)

{
  int unaff_s1;
  
  FUN_0001054c();
  FUN_00010556();
  FUN_0001056a();
  *(int *)(unaff_s1 + 0x58) = *(int *)(unaff_s1 + 8);
  *(uint *)(unaff_s1 + 0x5c) = *(int *)(unaff_s1 + 8) + 0x800U & 0x7ffffff;
  *(undefined2 *)(unaff_s1 + 0x60) = 0;
  return;
}



void FUN_00010556(void)

{
  int unaff_s1;
  
  FUN_00010556();
  FUN_0001056a();
  *(int *)(unaff_s1 + 0x58) = *(int *)(unaff_s1 + 8);
  *(uint *)(unaff_s1 + 0x5c) = *(int *)(unaff_s1 + 8) + 0x800U & 0x7ffffff;
  *(undefined2 *)(unaff_s1 + 0x60) = 0;
  return;
}



void FUN_0001056a(void)

{
  int unaff_s1;
  
  FUN_0001056a();
  *(int *)(unaff_s1 + 0x58) = *(int *)(unaff_s1 + 8);
  *(uint *)(unaff_s1 + 0x5c) = *(int *)(unaff_s1 + 8) + 0x800U & 0x7ffffff;
  *(undefined2 *)(unaff_s1 + 0x60) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5771

void lld_adv_stop(ea_elt_tag *elt)

{
  int extraout_a0;
  
  _L0();
  if (extraout_a0 == 0) {
    *(byte *)((int)&elt[2].ea_cb_cancel + 2) = *(byte *)((int)&elt[2].ea_cb_cancel + 2) | 0x10;
    _DAT_28000000 |= 0x2000000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  
  _L0();
  if (extraout_a0 == 0) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 0x10;
    _DAT_28000000 |= 0x2000000;
  }
  return;
}



// WARNING: Variable defined which should be unmapped: input_param
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5395

ea_elt_tag * lld_scan_start(scanning_pdu_params *scan_par,em_desc_node *scan_req_pdu)

{
  uint16_t uVar1;
  ushort uVar2;
  ea_elt_tag *peVar3;
  int iVar4;
  uint uVar5;
  co_list_hdr *pcVar6;
  void *pvVar7;
  ea_param_output set_param;
  ea_param_input input_param;
  
  peVar3 = (ea_elt_tag *)_L0();
  if (peVar3 != (ea_elt_tag *)0x0) {
    uVar1 = scan_par->interval;
    uVar2 = scan_par->window;
    _L0();
    iVar4 = _L0();
    if (iVar4 == 0) {
      *(uint16_t *)&peVar3[2].ea_cb_stop = uVar1;
      _L0();
      _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
      uVar5 = (uint)bRam00000003;
      _DAT_280081a2 =
           (ushort)((uVar5 & 1) << 10) | (scan_req_pdu != (em_desc_node *)0x0) + 8 |
           (ushort)((uVar5 & 2) << 8) | (ushort)((uVar5 & 4) << 6) | 0xf000;
      _DAT_280081b2 = 0xc027;
      _DAT_280081ae = 0x55;
      peVar3[1].env = (void *)(uint)uVar2;
      _DAT_280081c4 = 0;
      _DAT_280081c6 = 0;
      _DAT_280081a4 = 0;
      _DAT_280081fa &= 0xff7f;
      _DAT_280081f0 = 0;
      _DAT_280081f2 = 0;
      _DAT_280081f4 = 0;
      _DAT_280081f6 = 0;
      _DAT_280081f8 = 0;
      if (scan_req_pdu != (em_desc_node *)0x0) {
        FUN_00010716();
        _LVL183();
      }
      FUN_00010736();
      pvVar7 = peVar3[1].env;
      pcVar6 = (co_list_hdr *)peVar3->timestamp;
      *(undefined2 *)&peVar3[2].timestamp = 0;
      peVar3[2].hdr.next = pcVar6;
      peVar3[2].linked_element =
           (ea_elt_tag *)((int)&pcVar6->next + (uint)pvVar7 / 0x271 & 0x7ffffff);
    }
    else {
      FUN_00010770();
      peVar3 = (ea_elt_tag *)0x0;
    }
  }
  return peVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(void)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_s2;
  undefined2 uStack0000000c;
  uint uStack00000010;
  undefined2 uStack00000018;
  undefined2 uStack0000001a;
  uint uStack0000001c;
  ushort uStack00000020;
  undefined uStack00000022;
  undefined2 uStack00000024;
  undefined uStack00000026;
  undefined4 uStack00000028;
  undefined uStack0000002c;
  undefined2 uStack0000002e;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    uStack00000018 = *(undefined2 *)(unaff_s2 + 4);
    uStack00000020 = *(ushort *)(unaff_s2 + 6);
    uStack0000001c = (uint)uStack00000020;
    uStack00000026 = 0;
    uStack00000022 = 0;
    uStack0000002e = 0x1a2;
    uStack00000028 = 0xff0003;
    uStack0000001a = uStack00000018;
    _L0();
    uStack00000024 = 0;
    uStack0000002c = 0;
    iVar2 = _L0();
    if (iVar2 == 0) {
      *(undefined2 *)(iVar1 + 0x78) = uStack0000001a;
      uStack0000000c = uStack0000001a;
      uStack00000010 = uStack0000001c;
      _L0();
      _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
      uVar3 = (uint)bRam00000003;
      _DAT_280081a2 =
           (ushort)((uVar3 & 1) << 10) | (unaff_s1 != 0) + 8 | (ushort)((uVar3 & 2) << 8) |
           (ushort)((uVar3 & 4) << 6) | 0xf000;
      _DAT_280081b2 = 0xc027;
      _DAT_280081ae = 0x55;
      *(uint *)(iVar1 + 0x54) = uStack00000010;
      _DAT_280081c4 = 0;
      _DAT_280081c6 = 0;
      _DAT_280081a4 = 0;
      _DAT_280081fa &= 0xff7f;
      _DAT_280081f0 = 0;
      _DAT_280081f2 = 0;
      _DAT_280081f4 = 0;
      _DAT_280081f6 = 0;
      _DAT_280081f8 = 0;
      if (unaff_s1 != 0) {
        FUN_00010716();
        _LVL183();
      }
      FUN_00010736();
      *(undefined2 *)(iVar1 + 0x60) = 0;
      *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 8);
      *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar1 + 0x54) / 0x271 + *(int *)(iVar1 + 8) & 0x7ffffff;
    }
    else {
      FUN_00010770();
      iVar1 = 0;
    }
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  undefined4 uStack00000010;
  undefined2 in_stack_0000001a;
  undefined4 in_stack_0000001c;
  undefined2 uStack00000024;
  undefined uStack0000002c;
  
  _L0();
  uStack00000024 = 0;
  uStack0000002c = 0;
  iVar1 = _L0();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_s0 + 0x78) = in_stack_0000001a;
    uStack00000010 = in_stack_0000001c;
    _L0();
    _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
    uVar2 = (uint)bRam00000003;
    _DAT_280081a2 =
         (ushort)((uVar2 & 1) << 10) | (unaff_s1 != 0) + 8 | (ushort)((uVar2 & 2) << 8) |
         (ushort)((uVar2 & 4) << 6) | 0xf000;
    _DAT_280081b2 = 0xc027;
    _DAT_280081ae = 0x55;
    *(undefined4 *)(unaff_s0 + 0x54) = uStack00000010;
    _DAT_280081c4 = 0;
    _DAT_280081c6 = 0;
    _DAT_280081a4 = 0;
    _DAT_280081fa &= 0xff7f;
    _DAT_280081f0 = 0;
    _DAT_280081f2 = 0;
    _DAT_280081f4 = 0;
    _DAT_280081f6 = 0;
    _DAT_280081f8 = 0;
    if (unaff_s1 != 0) {
      FUN_00010716();
      _LVL183();
    }
    FUN_00010736();
    *(undefined2 *)(unaff_s0 + 0x60) = 0;
    *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
    *(uint *)(unaff_s0 + 0x5c) =
         *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  }
  else {
    FUN_00010770();
    unaff_s0 = 0;
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  undefined4 uStack00000010;
  undefined2 in_stack_0000001a;
  undefined4 in_stack_0000001c;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_s0 + 0x78) = in_stack_0000001a;
    uStack00000010 = in_stack_0000001c;
    _L0();
    _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
    uVar2 = (uint)bRam00000003;
    _DAT_280081a2 =
         (ushort)((uVar2 & 1) << 10) | (unaff_s1 != 0) + 8 | (ushort)((uVar2 & 2) << 8) |
         (ushort)((uVar2 & 4) << 6) | 0xf000;
    _DAT_280081b2 = 0xc027;
    _DAT_280081ae = 0x55;
    *(undefined4 *)(unaff_s0 + 0x54) = uStack00000010;
    _DAT_280081c4 = 0;
    _DAT_280081c6 = 0;
    _DAT_280081a4 = 0;
    _DAT_280081fa &= 0xff7f;
    _DAT_280081f0 = 0;
    _DAT_280081f2 = 0;
    _DAT_280081f4 = 0;
    _DAT_280081f6 = 0;
    _DAT_280081f8 = 0;
    if (unaff_s1 != 0) {
      FUN_00010716();
      _LVL183();
    }
    FUN_00010736();
    *(undefined2 *)(unaff_s0 + 0x60) = 0;
    *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
    *(uint *)(unaff_s0 + 0x5c) =
         *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  }
  else {
    FUN_00010770();
    unaff_s0 = 0;
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  undefined4 in_stack_00000010;
  
  _L0();
  _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
  uVar1 = (uint)bRam00000003;
  _DAT_280081a2 =
       (ushort)((uVar1 & 1) << 10) | (unaff_s1 != 0) + 8 | (ushort)((uVar1 & 2) << 8) |
       (ushort)((uVar1 & 4) << 6) | 0xf000;
  _DAT_280081b2 = 0xc027;
  _DAT_280081ae = 0x55;
  *(undefined4 *)(unaff_s0 + 0x54) = in_stack_00000010;
  _DAT_280081c4 = 0;
  _DAT_280081c6 = 0;
  _DAT_280081a4 = 0;
  _DAT_280081fa &= 0xff7f;
  _DAT_280081f0 = 0;
  _DAT_280081f2 = 0;
  _DAT_280081f4 = 0;
  _DAT_280081f6 = 0;
  _DAT_280081f8 = 0;
  if (unaff_s1 != 0) {
    FUN_00010716();
    _LVL183();
  }
  FUN_00010736();
  *(undefined2 *)(unaff_s0 + 0x60) = 0;
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  return;
}



void FUN_00010716(void)

{
  int unaff_s0;
  
  FUN_00010716();
  _LVL183();
  FUN_00010736();
  *(undefined2 *)(unaff_s0 + 0x60) = 0;
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  return;
}



void _LVL183(void)

{
  int unaff_s0;
  
  _LVL183();
  FUN_00010736();
  *(undefined2 *)(unaff_s0 + 0x60) = 0;
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  return;
}



void FUN_00010736(void)

{
  int unaff_s0;
  
  FUN_00010736();
  *(undefined2 *)(unaff_s0 + 0x60) = 0;
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  return;
}



undefined4 FUN_00010770(void)

{
  FUN_00010770();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5307

void lld_scan_stop(ea_elt_tag *elt)

{
  int extraout_a0;
  
  _L0();
  if (extraout_a0 == 0) {
    *(byte *)((int)&elt[2].ea_cb_cancel + 2) = *(byte *)((int)&elt[2].ea_cb_cancel + 2) | 0x10;
    _DAT_28000000 |= 0x1000000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  
  _L0();
  if (extraout_a0 == 0) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 0x10;
    _DAT_28000000 |= 0x1000000;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 47fa

ea_elt_tag * lld_con_start(hci_le_create_con_cmd *con_par,em_desc_node *con_req_pdu,uint16_t conhdl)

{
  uint8_t uVar1;
  byte bVar2;
  ea_elt_tag *peVar3;
  ea_elt_tag *peVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int extraout_a0;
  undefined2 in_register_00002032;
  co_list_hdr *pcVar8;
  ushort *puVar9;
  void *pvVar10;
  uint16_t uVar11;
  undefined uStack125;
  uint8_t length;
  ea_param_output set_param;
  llm_pdu_con_req_tx data;
  short sStack86;
  ea_param_input input_param;
  
  peVar3 = (ea_elt_tag *)_L0(DAT_00000028,DAT_0000002c,_DAT_00000040);
  peVar4 = (ea_elt_tag *)FUN_000107e8(DAT_00000028,DAT_0000002c,_DAT_00000040);
  set_param._0_4_ = 0;
  set_param.duration._0_2_ = 0;
  if (peVar3 == (ea_elt_tag *)0x0) {
    _L0();
  }
  else {
    if (peVar4 == (ea_elt_tag *)0x0) {
      peVar3 = (ea_elt_tag *)_L0();
      return peVar3;
    }
    *(undefined2 *)&peVar3->stop_latency2 = 0x200;
    peVar3->stop_latency1 = '\0';
    peVar3->duration_min = 0x9c4;
    *(undefined2 *)&peVar4->stop_latency2 = 0x200;
    peVar4->stop_latency1 = '\0';
    peVar3[1].env = (void *)((uint)con_par->scan_window * 0x271);
    _L0(DAT_00000028,DAT_0000002c,_DAT_00000040);
    *(undefined2 *)&peVar3[2].ea_cb_start = 3;
    *(undefined *)((int)&peVar3[2].ea_cb_stop + 3) = 1;
    *(uint16_t *)&peVar3[2].ea_cb_stop = con_par->scan_intv;
    *(undefined2 *)((int)&peVar3[2].ea_cb_start + 2) = 0x1a2;
    _L0(DAT_00000028,DAT_0000002c,_DAT_00000040);
    peVar3->ea_cb_start = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_start *)0x0;
    peVar3->ea_cb_cancel = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *)0x0;
    peVar3->ea_cb_stop = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_stop *)0x0;
    peVar3->asap_settings = 0x6000;
    iVar5 = _L0(DAT_00000028,DAT_0000002c,_DAT_00000040);
    peVar3->timestamp = iVar5 + peVar3->start_latency + 3 & 0x7fffffe;
    data._20_2_ = con_par->con_intv_min << 1;
    sStack86 = con_par->con_intv_max << 1;
    input_param._0_4_ = (uint)con_par->ce_len_min;
    input_param.duration_min._2_1_ = 0;
    input_param.pref_period = '\0';
    input_param.duration_min._0_2_ = con_par->ce_len_max;
    input_param._14_2_ = 0;
    uVar11 = (uint16_t)
             ((uint)((CONCAT22(in_register_00002032,conhdl) * 0x5c + 0x8e) * 0x10000) >> 0x10);
    input_param.offset = conhdl;
    input_param.role = uVar11;
    _L0(DAT_00000028,DAT_0000002c,_DAT_00000040);
    input_param.duration_max = 0;
    input_param.conhdl._0_1_ = 0;
    uVar6 = _L0(DAT_00000028,DAT_0000002c,_DAT_00000040);
    if (uVar6 == 1) {
      FUN_00010dfe();
      _L0();
      peVar3 = (ea_elt_tag *)0x0;
    }
    else {
      _L0(DAT_00000028,DAT_0000002c,_DAT_00000040);
      data.aa.addr[2] = (uint8_t)(uVar6 >> 0x10);
      *(ushort *)((uint)con_req_pdu->idx * 10 + 0x280082cc) =
           (ushort)((con_par->peer_addr_type & 1) << 7) | 0x2225;
      uVar7 = uVar6;
      _L0(DAT_00000028,DAT_0000002c,_DAT_00000040);
      data.aa.addr._0_2_ = (undefined2)uVar6;
      bVar2 = (byte)(((uint)*(byte *)(uint)DAT_00000042 << 0x1c) >> 0x18);
      set_param.offset = CONCAT11(DAT_00000040 >> 4 | bVar2,DAT_00000040 & 0xf | bVar2);
      set_param._10_2_ =
           CONCAT11((byte)((uVar7 & 0xff) >> 4) | *(char *)(uint)DAT_00000041 << 4,
                    bVar2 | (byte)uVar7 & 0xf);
      _DAT_00000040 = CONCAT11((char)((uint)((char *)(uint)DAT_00000041 + 1) % 3),DAT_00000040 + 1);
      data.winoffset = con_par->con_latency;
      data.interval = con_par->superv_to;
      _L0(DAT_00000028,DAT_0000002c);
      bVar2 = (byte)(uVar6 & 0xf);
      if ((uVar6 & 0xf) < 5) {
        bVar2 += 5;
      }
      data.chm.map[1] = bVar2 | DAT_00000028 << 5;
      data._6_2_ = 0;
      data.aa.addr[3] = '\x02';
      _L0(DAT_0000002c);
      (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&set_param.offset,uStack125,pcRam00000000);
      FUN_00010a4e(DAT_0000002c);
      peVar3->linked_element = peVar4;
      _L0(DAT_0000002c);
      FUN_00010a6a(DAT_0000002c);
      _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
      uVar6 = (uint)DAT_00000004;
      _DAT_280081a2 =
           (ushort)((uVar6 & 2) << 8) | (ushort)((uVar6 & 4) << 6) | (ushort)((uVar6 & 1) << 10) |
           0xf00f;
      _DAT_280081b0 = (con_par->own_addr_type & 2) << 1 | (ushort)con_par->init_filt_policy << 8;
      _DAT_280081b2 = 0xc027;
      _DAT_280081fa &= 0xff7f;
      _DAT_280081f0 = 0;
      _DAT_280081f2 = 0;
      _DAT_280081f4 = 0;
      _DAT_280081f6 = 0;
      _DAT_280081f8 = 0;
      _DAT_280081a4 = 0;
      _DAT_280081c8 = *(undefined2 *)(con_par->peer_addr).addr;
      _DAT_280081ca = *(undefined2 *)((con_par->peer_addr).addr + 2);
      _DAT_280081cc = *(undefined2 *)((con_par->peer_addr).addr + 4);
      _DAT_280081ce = con_par->peer_addr_type & 1;
      _DAT_280081ae = 0x55;
      if ((ushort)set_param.duration < 6) {
        (ushort)set_param.duration += data._6_2_ * 2;
      }
      iVar5 = CONCAT22(in_register_00002032,conhdl) * 0x5c;
      *(ushort *)(iVar5 + 0x280080a6) = ((ushort)set_param.duration >> 1) - 1;
      _DAT_280081be = 0;
      _L0(DAT_0000002c);
      *(uint16_t *)&peVar4[2].ea_cb_start = conhdl;
      *(uint16_t *)((int)&peVar4[2].linked_element + 2) = data.winoffset + 1;
      *(undefined *)((int)&peVar4[2].ea_cb_stop + 3) = 3;
      uVar6 = ((uint)data._6_2_ << 0x11) >> 0x10;
      *(short *)&peVar4[2].ea_cb_stop = (short)(((uint)data._6_2_ << 0x11) >> 0x10);
      *(uint16_t *)((int)&peVar4[2].ea_cb_start + 2) = uVar11;
      peVar4->timestamp =
           peVar3->timestamp - (uVar6 - (uint)(ushort)set_param.duration % uVar6) & 0x7ffffff;
      uVar1 = DAT_00000006;
      uVar11 = 0x4e2;
      if (con_par->ce_len_min != 0) {
        uVar11 = con_par->ce_len_min * 0x271;
      }
      peVar4->duration_min = uVar11;
      peVar4->current_prio = uVar1;
      peVar4->ea_cb_start = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_start *)0x0;
      peVar4->ea_cb_cancel = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *)0x0;
      peVar4->ea_cb_stop = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_stop *)0x0;
      *(undefined2 *)(iVar5 + 0x2800808e) = 2;
      *(undefined2 *)(iVar5 + 0x28008090) = 0;
      puVar9 = (ushort *)(iVar5 + 0x28008092);
      *puVar9 = *puVar9 & 0xfeff;
      *puVar9 = *puVar9 & 0xfdff;
      *puVar9 = (ushort)(((uint)*puVar9 << 0x14) >> 0x14) | 0x2000;
      *(uint16_t *)(iVar5 + 0x28008094) = set_param.offset;
      *(undefined2 *)(iVar5 + 0x28008096) = set_param._10_2_;
      *(undefined2 *)(iVar5 + 0x28008098) = data.aa.addr._0_2_;
      *(ushort *)(iVar5 + 0x2800809a) = (ushort)data.aa.addr[2];
      *(ushort *)(iVar5 + 0x2800809e) = (data.chm.map[1] & 0x1f) << 8 | 0xc000;
      *(ushort *)(iVar5 + 0x280080a0) = (ushort)DAT_0000002c;
      *(ushort *)(iVar5 + 0x280080a8) =
           *(short *)&peVar4[2].ea_cb_stop - (ushort)peVar4->start_latency;
      *puVar9 = *puVar9 & 0xffe0 | conhdl & 0x1f;
      *(undefined2 *)(iVar5 + 0x280080b0) = 0;
      *(undefined2 *)(iVar5 + 0x280080b2) = 0;
      *(ushort *)(iVar5 + 0x280080e6) = *(ushort *)(iVar5 + 0x280080e6) & 0xff7f;
      *(undefined2 *)(iVar5 + 0x280080dc) = 0;
      *(undefined2 *)(iVar5 + 0x280080de) = 0;
      *(undefined2 *)(iVar5 + 0x280080e0) = 0;
      *(undefined2 *)(iVar5 + 0x280080e2) = 0;
      *(undefined2 *)(iVar5 + 0x280080e4) = 0;
      *(uint16_t *)(iVar5 + 0x280080aa) = data.latency;
      *(uint16_t *)(iVar5 + 0x280080ac) = data.timeout;
      _L0();
      *(ushort *)(iVar5 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)data.chm.map[0];
      FUN_00010dac();
      pvVar10 = peVar3[1].env;
      pcVar8 = (co_list_hdr *)peVar3->timestamp;
      peVar3[2].hdr.next = pcVar8;
      peVar3[2].linked_element =
           (ea_elt_tag *)((int)&pcVar8->next + (uint)pvVar10 / 0x271 & 0x7ffffff);
      *(undefined2 *)&peVar3[2].timestamp = 1;
      peVar3->duration_min = 0x4e2;
    }
  }
  return peVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(char param_1,byte param_2,undefined2 uRam00000040)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int extraout_a0;
  short sVar8;
  ushort *puVar9;
  undefined2 *unaff_s2;
  undefined2 uVar10;
  ushort uVar11;
  int unaff_s5;
  int unaff_s9;
  undefined in_stack_00000003;
  ushort uStack00000004;
  undefined4 uStack00000008;
  ushort uStack0000000c;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  byte bStack00000016;
  undefined uStack00000017;
  ushort uStack0000001a;
  short sStack0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte bStack00000025;
  short sStack00000028;
  short sStack0000002a;
  uint uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  ushort uStack00000038;
  undefined2 uStack0000003a;
  undefined uStack0000003c;
  undefined2 uStack0000003e;
  
  iVar3 = _L0(param_1,param_2,uRam00000040);
  iVar4 = FUN_000107e8(param_1,param_2,uRam00000040);
  uStack00000004 = 0;
  uStack00000008 = 0;
  uStack0000000c = 0;
  if (iVar3 == 0) {
    _L0();
  }
  else {
    if (iVar4 == 0) {
      iVar3 = _L0();
      return iVar3;
    }
    *(undefined2 *)(iVar3 + 0x18) = 0x200;
    *(undefined *)(iVar3 + 0x17) = 0;
    *(undefined2 *)(iVar3 + 0x12) = 0x9c4;
    *(undefined2 *)(iVar4 + 0x18) = 0x200;
    *(undefined *)(iVar4 + 0x17) = 0;
    *(uint *)(iVar3 + 0x54) = (uint)(ushort)unaff_s2[1] * 0x271;
    _L0(param_1,param_2,uRam00000040);
    *(undefined2 *)(iVar3 + 0x74) = 3;
    *(undefined *)(iVar3 + 0x7b) = 1;
    *(undefined2 *)(iVar3 + 0x78) = *unaff_s2;
    *(undefined2 *)(iVar3 + 0x76) = 0x1a2;
    _L0(param_1,param_2,uRam00000040);
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined2 *)(iVar3 + 0x10) = 0x6000;
    iVar5 = _L0(param_1,param_2,uRam00000040);
    *(uint *)(iVar3 + 8) = iVar5 + *(byte *)(iVar3 + 0x19) + 3 & 0x7fffffe;
    sStack00000028 = unaff_s2[7] << 1;
    sStack0000002a = unaff_s2[8] << 1;
    uStack0000002c = (uint)(ushort)unaff_s2[0xb];
    uStack00000032 = 0;
    uStack00000036 = 0;
    uStack00000030 = unaff_s2[0xc];
    uVar11 = (ushort)unaff_s5;
    uStack0000003a = 0;
    uVar10 = (undefined2)((uint)((unaff_s5 * 0x5c + 0x8e) * 0x10000) >> 0x10);
    uStack00000038 = uVar11;
    uStack0000003e = uVar10;
    _L0(param_1,param_2,uRam00000040);
    uStack00000034 = 0;
    uStack0000003c = 0;
    uVar6 = _L0(param_1,param_2,uRam00000040);
    if (uVar6 == 1) {
      FUN_00010dfe();
      _L0();
      iVar3 = 0;
    }
    else {
      _L0(param_1,param_2,uRam00000040);
      bStack00000016 = (byte)(uVar6 >> 0x10);
      *(ushort *)((uint)*(ushort *)(unaff_s9 + 4) * 10 + 0x280082cc) =
           (ushort)((*(byte *)((int)unaff_s2 + 5) & 1) << 7) | 0x2225;
      uVar7 = uVar6;
      _L0(param_1,param_2,uRam00000040);
      uStack00000014 = (undefined2)uVar6;
      bVar1 = (byte)(((uint)*(byte *)(uint)DAT_00000042 << 0x1c) >> 0x18);
      uStack00000010 = CONCAT11((byte)uRam00000040 >> 4 | bVar1,(byte)uRam00000040 & 0xf | bVar1);
      uStack00000012 =
           CONCAT11((byte)((uVar7 & 0xff) >> 4) | *(char *)(uint)uRam00000040._1_1_ << 4,
                    bVar1 | (byte)uVar7 & 0xf);
      uRam00000040 = CONCAT11((char)((uint)((char *)(uint)uRam00000040._1_1_ + 1) % 3),
                              (byte)uRam00000040 + 1);
      sStack0000001c = unaff_s2[9];
      uStack0000001e = unaff_s2[10];
      _L0(param_1,param_2);
      bStack00000025 = (byte)(uVar6 & 0xf);
      if ((uVar6 & 0xf) < 5) {
        bStack00000025 += 5;
      }
      bStack00000025 |= param_1 << 5;
      uStack0000001a = uStack00000004 >> 1;
      uStack00000017 = 2;
      _L0(param_2);
      (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&stack0x00000010,in_stack_00000003,
                       pcRam00000000);
      FUN_00010a4e(param_2);
      *(int *)(iVar3 + 4) = iVar4;
      _L0(param_2);
      FUN_00010a6a(param_2);
      _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
      uVar6 = (uint)DAT_00000004;
      _DAT_280081a2 =
           (ushort)((uVar6 & 2) << 8) | (ushort)((uVar6 & 4) << 6) | (ushort)((uVar6 & 1) << 10) |
           0xf00f;
      _DAT_280081b0 = (*(byte *)(unaff_s2 + 6) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 2) << 8;
      _DAT_280081b2 = 0xc027;
      _DAT_280081fa &= 0xff7f;
      _DAT_280081f0 = 0;
      _DAT_280081f2 = 0;
      _DAT_280081f4 = 0;
      _DAT_280081f6 = 0;
      _DAT_280081f8 = 0;
      _DAT_280081a4 = 0;
      _DAT_280081c8 = unaff_s2[3];
      _DAT_280081ca = unaff_s2[4];
      _DAT_280081cc = unaff_s2[5];
      _DAT_280081ce = *(byte *)((int)unaff_s2 + 5) & 1;
      _DAT_280081ae = 0x55;
      if (uStack0000000c < 6) {
        uStack0000000c += uStack0000001a * 2;
      }
      iVar5 = unaff_s5 * 0x5c;
      *(ushort *)(iVar5 + 0x280080a6) = (uStack0000000c >> 1) - 1;
      _DAT_280081be = uStack00000004 >> 1;
      _L0(param_2);
      *(ushort *)(iVar4 + 0x74) = uVar11;
      *(short *)(iVar4 + 0x5e) = sStack0000001c + 1;
      *(undefined *)(iVar4 + 0x7b) = 3;
      uVar6 = ((uint)uStack0000001a << 0x11) >> 0x10;
      *(short *)(iVar4 + 0x78) = (short)(((uint)uStack0000001a << 0x11) >> 0x10);
      *(undefined2 *)(iVar4 + 0x76) = uVar10;
      *(uint *)(iVar4 + 8) =
           *(int *)(iVar3 + 8) - (uVar6 - (uint)uStack0000000c % uVar6) & 0x7ffffff;
      uVar2 = DAT_00000006;
      sVar8 = 0x4e2;
      if (unaff_s2[0xb] != 0) {
        sVar8 = unaff_s2[0xb] * 0x271;
      }
      *(short *)(iVar4 + 0x12) = sVar8;
      *(undefined *)(iVar4 + 0x16) = uVar2;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined2 *)(iVar5 + 0x2800808e) = 2;
      *(undefined2 *)(iVar5 + 0x28008090) = 0;
      puVar9 = (ushort *)(iVar5 + 0x28008092);
      *puVar9 = *puVar9 & 0xfeff;
      *puVar9 = *puVar9 & 0xfdff;
      *puVar9 = (ushort)(((uint)*puVar9 << 0x14) >> 0x14) | 0x2000;
      *(undefined2 *)(iVar5 + 0x28008094) = uStack00000010;
      *(undefined2 *)(iVar5 + 0x28008096) = uStack00000012;
      *(undefined2 *)(iVar5 + 0x28008098) = uStack00000014;
      *(ushort *)(iVar5 + 0x2800809a) = (ushort)bStack00000016;
      *(ushort *)(iVar5 + 0x2800809e) = (bStack00000025 & 0x1f) << 8 | 0xc000;
      *(ushort *)(iVar5 + 0x280080a0) = (ushort)param_2;
      *(ushort *)(iVar5 + 0x280080a8) = *(short *)(iVar4 + 0x78) - (ushort)*(byte *)(iVar4 + 0x19);
      *puVar9 = *puVar9 & 0xffe0 | uVar11 & 0x1f;
      *(undefined2 *)(iVar5 + 0x280080b0) = 0;
      *(undefined2 *)(iVar5 + 0x280080b2) = 0;
      *(ushort *)(iVar5 + 0x280080e6) = *(ushort *)(iVar5 + 0x280080e6) & 0xff7f;
      *(undefined2 *)(iVar5 + 0x280080dc) = 0;
      *(undefined2 *)(iVar5 + 0x280080de) = 0;
      *(undefined2 *)(iVar5 + 0x280080e0) = 0;
      *(undefined2 *)(iVar5 + 0x280080e2) = 0;
      *(undefined2 *)(iVar5 + 0x280080e4) = 0;
      *(undefined2 *)(iVar5 + 0x280080aa) = in_stack_00000020;
      *(undefined2 *)(iVar5 + 0x280080ac) = in_stack_00000022;
      _L0();
      *(ushort *)(iVar5 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
      FUN_00010dac();
      *(int *)(iVar3 + 0x58) = *(int *)(iVar3 + 8);
      *(uint *)(iVar3 + 0x5c) = *(uint *)(iVar3 + 0x54) / 0x271 + *(int *)(iVar3 + 8) & 0x7ffffff;
      *(undefined2 *)(iVar3 + 0x60) = 1;
      *(undefined2 *)(iVar3 + 0x12) = 0x4e2;
    }
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_000107e8(char param_1,byte param_2,undefined2 uRam00000040)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int extraout_a0;
  short sVar7;
  ushort *puVar8;
  undefined2 *unaff_s2;
  undefined2 uVar9;
  ushort uVar10;
  int unaff_s5;
  int unaff_s9;
  undefined in_stack_00000003;
  ushort uStack00000004;
  undefined4 uStack00000008;
  ushort uStack0000000c;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  byte bStack00000016;
  undefined uStack00000017;
  ushort uStack0000001a;
  short sStack0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte bStack00000025;
  short sStack00000028;
  short sStack0000002a;
  uint uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  ushort uStack00000038;
  undefined2 uStack0000003a;
  undefined uStack0000003c;
  undefined2 uStack0000003e;
  
  iVar3 = FUN_000107e8(param_1,param_2,uRam00000040);
  uStack00000004 = 0;
  uStack00000008 = 0;
  uStack0000000c = 0;
  if (unaff_s0 == 0) {
    _L0();
  }
  else {
    if (iVar3 == 0) {
      iVar3 = _L0();
      return iVar3;
    }
    *(undefined2 *)(unaff_s0 + 0x18) = 0x200;
    *(undefined *)(unaff_s0 + 0x17) = 0;
    *(undefined2 *)(unaff_s0 + 0x12) = 0x9c4;
    *(undefined2 *)(iVar3 + 0x18) = 0x200;
    *(undefined *)(iVar3 + 0x17) = 0;
    *(uint *)(unaff_s0 + 0x54) = (uint)(ushort)unaff_s2[1] * 0x271;
    _L0(param_1,param_2,uRam00000040);
    *(undefined2 *)(unaff_s0 + 0x74) = 3;
    *(undefined *)(unaff_s0 + 0x7b) = 1;
    *(undefined2 *)(unaff_s0 + 0x78) = *unaff_s2;
    *(undefined2 *)(unaff_s0 + 0x76) = 0x1a2;
    _L0(param_1,param_2,uRam00000040);
    *(undefined4 *)(unaff_s0 + 0x1c) = 0;
    *(undefined4 *)(unaff_s0 + 0x24) = 0;
    *(undefined4 *)(unaff_s0 + 0x20) = 0;
    *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
    iVar4 = _L0(param_1,param_2,uRam00000040);
    *(uint *)(unaff_s0 + 8) = iVar4 + *(byte *)(unaff_s0 + 0x19) + 3 & 0x7fffffe;
    sStack00000028 = unaff_s2[7] << 1;
    sStack0000002a = unaff_s2[8] << 1;
    uStack0000002c = (uint)(ushort)unaff_s2[0xb];
    uStack00000032 = 0;
    uStack00000036 = 0;
    uStack00000030 = unaff_s2[0xc];
    uVar10 = (ushort)unaff_s5;
    uStack0000003a = 0;
    uVar9 = (undefined2)((uint)((unaff_s5 * 0x5c + 0x8e) * 0x10000) >> 0x10);
    uStack00000038 = uVar10;
    uStack0000003e = uVar9;
    _L0(param_1,param_2,uRam00000040);
    uStack00000034 = 0;
    uStack0000003c = 0;
    uVar5 = _L0(param_1,param_2,uRam00000040);
    if (uVar5 == 1) {
      FUN_00010dfe();
      _L0();
      unaff_s0 = 0;
    }
    else {
      _L0(param_1,param_2,uRam00000040);
      bStack00000016 = (byte)(uVar5 >> 0x10);
      *(ushort *)((uint)*(ushort *)(unaff_s9 + 4) * 10 + 0x280082cc) =
           (ushort)((*(byte *)((int)unaff_s2 + 5) & 1) << 7) | 0x2225;
      uVar6 = uVar5;
      _L0(param_1,param_2,uRam00000040);
      uStack00000014 = (undefined2)uVar5;
      bVar1 = (byte)(((uint)*(byte *)(uint)DAT_00000042 << 0x1c) >> 0x18);
      uStack00000010 = CONCAT11((byte)uRam00000040 >> 4 | bVar1,(byte)uRam00000040 & 0xf | bVar1);
      uStack00000012 =
           CONCAT11((byte)((uVar6 & 0xff) >> 4) | *(char *)(uint)uRam00000040._1_1_ << 4,
                    bVar1 | (byte)uVar6 & 0xf);
      uRam00000040 = CONCAT11((char)((uint)((char *)(uint)uRam00000040._1_1_ + 1) % 3),
                              (byte)uRam00000040 + 1);
      sStack0000001c = unaff_s2[9];
      uStack0000001e = unaff_s2[10];
      _L0(param_1,param_2);
      bStack00000025 = (byte)(uVar5 & 0xf);
      if ((uVar5 & 0xf) < 5) {
        bStack00000025 += 5;
      }
      bStack00000025 |= param_1 << 5;
      uStack0000001a = uStack00000004 >> 1;
      uStack00000017 = 2;
      _L0(param_2);
      (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&stack0x00000010,in_stack_00000003,
                       pcRam00000000);
      FUN_00010a4e(param_2);
      *(int *)(unaff_s0 + 4) = iVar3;
      _L0(param_2);
      FUN_00010a6a(param_2);
      _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
      uVar5 = (uint)DAT_00000004;
      _DAT_280081a2 =
           (ushort)((uVar5 & 2) << 8) | (ushort)((uVar5 & 4) << 6) | (ushort)((uVar5 & 1) << 10) |
           0xf00f;
      _DAT_280081b0 = (*(byte *)(unaff_s2 + 6) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 2) << 8;
      _DAT_280081b2 = 0xc027;
      _DAT_280081fa &= 0xff7f;
      _DAT_280081f0 = 0;
      _DAT_280081f2 = 0;
      _DAT_280081f4 = 0;
      _DAT_280081f6 = 0;
      _DAT_280081f8 = 0;
      _DAT_280081a4 = 0;
      _DAT_280081c8 = unaff_s2[3];
      _DAT_280081ca = unaff_s2[4];
      _DAT_280081cc = unaff_s2[5];
      _DAT_280081ce = *(byte *)((int)unaff_s2 + 5) & 1;
      _DAT_280081ae = 0x55;
      if (uStack0000000c < 6) {
        uStack0000000c += uStack0000001a * 2;
      }
      iVar4 = unaff_s5 * 0x5c;
      *(ushort *)(iVar4 + 0x280080a6) = (uStack0000000c >> 1) - 1;
      _DAT_280081be = uStack00000004 >> 1;
      _L0(param_2);
      *(ushort *)(iVar3 + 0x74) = uVar10;
      *(short *)(iVar3 + 0x5e) = sStack0000001c + 1;
      *(undefined *)(iVar3 + 0x7b) = 3;
      uVar5 = ((uint)uStack0000001a << 0x11) >> 0x10;
      *(short *)(iVar3 + 0x78) = (short)(((uint)uStack0000001a << 0x11) >> 0x10);
      *(undefined2 *)(iVar3 + 0x76) = uVar9;
      *(uint *)(iVar3 + 8) =
           *(int *)(unaff_s0 + 8) - (uVar5 - (uint)uStack0000000c % uVar5) & 0x7ffffff;
      uVar2 = DAT_00000006;
      sVar7 = 0x4e2;
      if (unaff_s2[0xb] != 0) {
        sVar7 = unaff_s2[0xb] * 0x271;
      }
      *(short *)(iVar3 + 0x12) = sVar7;
      *(undefined *)(iVar3 + 0x16) = uVar2;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined2 *)(iVar4 + 0x2800808e) = 2;
      *(undefined2 *)(iVar4 + 0x28008090) = 0;
      puVar8 = (ushort *)(iVar4 + 0x28008092);
      *puVar8 = *puVar8 & 0xfeff;
      *puVar8 = *puVar8 & 0xfdff;
      *puVar8 = (ushort)(((uint)*puVar8 << 0x14) >> 0x14) | 0x2000;
      *(undefined2 *)(iVar4 + 0x28008094) = uStack00000010;
      *(undefined2 *)(iVar4 + 0x28008096) = uStack00000012;
      *(undefined2 *)(iVar4 + 0x28008098) = uStack00000014;
      *(ushort *)(iVar4 + 0x2800809a) = (ushort)bStack00000016;
      *(ushort *)(iVar4 + 0x2800809e) = (bStack00000025 & 0x1f) << 8 | 0xc000;
      *(ushort *)(iVar4 + 0x280080a0) = (ushort)param_2;
      *(ushort *)(iVar4 + 0x280080a8) = *(short *)(iVar3 + 0x78) - (ushort)*(byte *)(iVar3 + 0x19);
      *puVar8 = *puVar8 & 0xffe0 | uVar10 & 0x1f;
      *(undefined2 *)(iVar4 + 0x280080b0) = 0;
      *(undefined2 *)(iVar4 + 0x280080b2) = 0;
      *(ushort *)(iVar4 + 0x280080e6) = *(ushort *)(iVar4 + 0x280080e6) & 0xff7f;
      *(undefined2 *)(iVar4 + 0x280080dc) = 0;
      *(undefined2 *)(iVar4 + 0x280080de) = 0;
      *(undefined2 *)(iVar4 + 0x280080e0) = 0;
      *(undefined2 *)(iVar4 + 0x280080e2) = 0;
      *(undefined2 *)(iVar4 + 0x280080e4) = 0;
      *(undefined2 *)(iVar4 + 0x280080aa) = in_stack_00000020;
      *(undefined2 *)(iVar4 + 0x280080ac) = in_stack_00000022;
      _L0();
      *(ushort *)(iVar4 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
      FUN_00010dac();
      *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
      *(uint *)(unaff_s0 + 0x5c) =
           *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
      *(undefined2 *)(unaff_s0 + 0x60) = 1;
      *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
    }
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(char param_1,byte param_2,undefined2 uRam00000040)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_a0;
  short sVar6;
  ushort *puVar7;
  undefined2 *unaff_s2;
  int unaff_s3;
  undefined2 uVar8;
  int unaff_s4;
  ushort uVar9;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  undefined in_stack_00000003;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  byte bStack00000016;
  undefined uStack00000017;
  ushort uStack0000001a;
  short sStack0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte bStack00000025;
  short sStack00000028;
  short sStack0000002a;
  uint uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  ushort uStack00000038;
  undefined2 uStack0000003a;
  undefined uStack0000003c;
  undefined2 uStack0000003e;
  
  _L0(param_1,param_2,uRam00000040);
  *(short *)(unaff_s0 + 0x74) = (short)unaff_s1;
  *(char *)(unaff_s0 + 0x7b) = (char)unaff_s10;
  *(undefined2 *)(unaff_s0 + 0x78) = *unaff_s2;
  *(undefined2 *)(unaff_s0 + 0x76) = 0x1a2;
  _L0(param_1,param_2,uRam00000040);
  *(undefined4 *)(unaff_s0 + 0x1c) = unaff_s8;
  *(undefined4 *)(unaff_s0 + 0x24) = unaff_s7;
  *(undefined4 *)(unaff_s0 + 0x20) = unaff_s6;
  *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
  iVar3 = _L0(param_1,param_2,uRam00000040);
  *(uint *)(unaff_s0 + 8) = iVar3 + *(byte *)(unaff_s0 + 0x19) + 3 & 0x7fffffe;
  sStack00000028 = unaff_s2[7] << 1;
  sStack0000002a = unaff_s2[8] << 1;
  uStack0000002c = (uint)(ushort)unaff_s2[0xb];
  uStack00000032 = 0;
  uStack00000036 = 0;
  uStack00000030 = unaff_s2[0xc];
  uVar9 = (ushort)unaff_s5;
  uStack0000003a = 0;
  uVar8 = (undefined2)((uint)((unaff_s5 * unaff_s4 + 0x8e) * 0x10000) >> 0x10);
  uStack00000038 = uVar9;
  uStack0000003e = uVar8;
  _L0(param_1,param_2,uRam00000040);
  uStack00000034 = 0;
  uStack0000003c = 0;
  uVar4 = _L0(param_1,param_2,uRam00000040);
  if (uVar4 == unaff_s10) {
    FUN_00010dfe();
    _L0();
    unaff_s0 = 0;
  }
  else {
    _L0(param_1,param_2,uRam00000040);
    bStack00000016 = (byte)(uVar4 >> 0x10);
    *(ushort *)((uint)*(ushort *)(unaff_s9 + 4) * 10 + 0x280082cc) =
         (ushort)((*(byte *)((int)unaff_s2 + 5) & 1) << 7) | 0x2225;
    uVar5 = uVar4;
    _L0(param_1,param_2,uRam00000040);
    uStack00000014 = (undefined2)uVar4;
    bVar1 = (byte)(((uint)*(byte *)(uint)DAT_00000042 << 0x1c) >> 0x18);
    uStack00000010 = CONCAT11((byte)uRam00000040 >> 4 | bVar1,(byte)uRam00000040 & 0xf | bVar1);
    uStack00000012 =
         CONCAT11((byte)((uVar5 & 0xff) >> 4) | *(char *)(uint)uRam00000040._1_1_ << 4,
                  bVar1 | (byte)uVar5 & 0xf);
    uRam00000040 = CONCAT11((char)((int)((char *)(uint)uRam00000040._1_1_ + 1) % unaff_s1),
                            (byte)uRam00000040 + 1);
    sStack0000001c = unaff_s2[9];
    uStack0000001e = unaff_s2[10];
    _L0(param_1,param_2);
    bStack00000025 = (byte)(uVar4 & 0xf);
    if ((uVar4 & 0xf) < 5) {
      bStack00000025 += 5;
    }
    bStack00000025 |= param_1 << 5;
    uStack0000001a = in_stack_00000004 >> 1;
    uStack00000017 = 2;
    _L0(param_2);
    (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&stack0x00000010,in_stack_00000003,pcRam00000000)
    ;
    FUN_00010a4e(param_2);
    *(int *)(unaff_s0 + 4) = unaff_s3;
    _L0(param_2);
    FUN_00010a6a(param_2);
    _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
    uVar4 = (uint)DAT_00000004;
    _DAT_280081a2 =
         (ushort)((uVar4 & 2) << 8) | (ushort)((uVar4 & 4) << 6) | (ushort)((uVar4 & 1) << 10) |
         0xf00f;
    _DAT_280081b0 = (*(byte *)(unaff_s2 + 6) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 2) << 8;
    _DAT_280081b2 = 0xc027;
    _DAT_280081fa &= 0xff7f;
    _DAT_280081f0 = 0;
    _DAT_280081f2 = 0;
    _DAT_280081f4 = 0;
    _DAT_280081f6 = 0;
    _DAT_280081f8 = 0;
    _DAT_280081a4 = 0;
    _DAT_280081c8 = unaff_s2[3];
    _DAT_280081ca = unaff_s2[4];
    _DAT_280081cc = unaff_s2[5];
    _DAT_280081ce = *(byte *)((int)unaff_s2 + 5) & 1;
    _DAT_280081ae = 0x55;
    if (in_stack_0000000c < 6) {
      in_stack_0000000c += uStack0000001a * 2;
    }
    iVar3 = unaff_s5 * 0x5c;
    *(ushort *)(iVar3 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
    _DAT_280081be = in_stack_00000004 >> 1;
    _L0(param_2);
    *(ushort *)(unaff_s3 + 0x74) = uVar9;
    *(short *)(unaff_s3 + 0x5e) = sStack0000001c + 1;
    *(undefined *)(unaff_s3 + 0x7b) = 3;
    uVar4 = ((uint)uStack0000001a << 0x11) >> 0x10;
    *(short *)(unaff_s3 + 0x78) = (short)(((uint)uStack0000001a << 0x11) >> 0x10);
    *(undefined2 *)(unaff_s3 + 0x76) = uVar8;
    *(uint *)(unaff_s3 + 8) =
         *(int *)(unaff_s0 + 8) - (uVar4 - (uint)in_stack_0000000c % uVar4) & 0x7ffffff;
    uVar2 = DAT_00000006;
    sVar6 = 0x4e2;
    if (unaff_s2[0xb] != 0) {
      sVar6 = unaff_s2[0xb] * 0x271;
    }
    *(short *)(unaff_s3 + 0x12) = sVar6;
    *(undefined *)(unaff_s3 + 0x16) = uVar2;
    *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
    *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
    *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
    *(undefined2 *)(iVar3 + 0x2800808e) = 2;
    *(undefined2 *)(iVar3 + 0x28008090) = 0;
    puVar7 = (ushort *)(iVar3 + 0x28008092);
    *puVar7 = *puVar7 & 0xfeff;
    *puVar7 = *puVar7 & 0xfdff;
    *puVar7 = (ushort)(((uint)*puVar7 << 0x14) >> 0x14) | 0x2000;
    *(undefined2 *)(iVar3 + 0x28008094) = uStack00000010;
    *(undefined2 *)(iVar3 + 0x28008096) = uStack00000012;
    *(undefined2 *)(iVar3 + 0x28008098) = uStack00000014;
    *(ushort *)(iVar3 + 0x2800809a) = (ushort)bStack00000016;
    *(ushort *)(iVar3 + 0x2800809e) = (bStack00000025 & 0x1f) << 8 | 0xc000;
    *(ushort *)(iVar3 + 0x280080a0) = (ushort)param_2;
    *(ushort *)(iVar3 + 0x280080a8) =
         *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19);
    *puVar7 = *puVar7 & 0xffe0 | uVar9 & 0x1f;
    *(undefined2 *)(iVar3 + 0x280080b0) = 0;
    *(undefined2 *)(iVar3 + 0x280080b2) = 0;
    *(ushort *)(iVar3 + 0x280080e6) = *(ushort *)(iVar3 + 0x280080e6) & 0xff7f;
    *(undefined2 *)(iVar3 + 0x280080dc) = 0;
    *(undefined2 *)(iVar3 + 0x280080de) = 0;
    *(undefined2 *)(iVar3 + 0x280080e0) = 0;
    *(undefined2 *)(iVar3 + 0x280080e2) = 0;
    *(undefined2 *)(iVar3 + 0x280080e4) = 0;
    *(undefined2 *)(iVar3 + 0x280080aa) = in_stack_00000020;
    *(undefined2 *)(iVar3 + 0x280080ac) = in_stack_00000022;
    _L0();
    *(ushort *)(iVar3 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
    FUN_00010dac();
    *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
    *(uint *)(unaff_s0 + 0x5c) =
         *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
    *(undefined2 *)(unaff_s0 + 0x60) = 1;
    *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(char param_1,byte param_2,undefined2 uRam00000040)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_a0;
  short sVar6;
  ushort *puVar7;
  int unaff_s2;
  int unaff_s3;
  undefined2 uVar8;
  int unaff_s4;
  ushort uVar9;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  undefined in_stack_00000003;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  byte bStack00000016;
  undefined uStack00000017;
  ushort uStack0000001a;
  short sStack0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte bStack00000025;
  short sStack00000028;
  short sStack0000002a;
  uint uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  ushort uStack00000038;
  undefined2 uStack0000003a;
  undefined uStack0000003c;
  undefined2 uStack0000003e;
  
  _L0(param_1,param_2,uRam00000040);
  *(undefined4 *)(unaff_s0 + 0x1c) = unaff_s8;
  *(undefined4 *)(unaff_s0 + 0x24) = unaff_s7;
  *(undefined4 *)(unaff_s0 + 0x20) = unaff_s6;
  *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
  iVar3 = _L0(param_1,param_2,uRam00000040);
  *(uint *)(unaff_s0 + 8) = iVar3 + *(byte *)(unaff_s0 + 0x19) + 3 & 0x7fffffe;
  sStack00000028 = *(short *)(unaff_s2 + 0xe) << 1;
  sStack0000002a = *(short *)(unaff_s2 + 0x10) << 1;
  uStack0000002c = (uint)*(ushort *)(unaff_s2 + 0x16);
  uStack00000032 = 0;
  uStack00000036 = 0;
  uStack00000030 = *(undefined2 *)(unaff_s2 + 0x18);
  uVar9 = (ushort)unaff_s5;
  uStack0000003a = 0;
  uVar8 = (undefined2)((uint)((unaff_s5 * unaff_s4 + 0x8e) * 0x10000) >> 0x10);
  uStack00000038 = uVar9;
  uStack0000003e = uVar8;
  _L0(param_1,param_2,uRam00000040);
  uStack00000034 = 0;
  uStack0000003c = 0;
  uVar4 = _L0(param_1,param_2,uRam00000040);
  if (uVar4 == unaff_s10) {
    FUN_00010dfe();
    _L0();
    unaff_s0 = 0;
  }
  else {
    _L0(param_1,param_2,uRam00000040);
    bStack00000016 = (byte)(uVar4 >> 0x10);
    *(ushort *)((uint)*(ushort *)(unaff_s9 + 4) * 10 + 0x280082cc) =
         (ushort)((*(byte *)(unaff_s2 + 5) & 1) << 7) | 0x2225;
    uVar5 = uVar4;
    _L0(param_1,param_2,uRam00000040);
    uStack00000014 = (undefined2)uVar4;
    bVar1 = (byte)(((uint)*(byte *)(uint)DAT_00000042 << 0x1c) >> 0x18);
    uStack00000010 = CONCAT11((byte)uRam00000040 >> 4 | bVar1,(byte)uRam00000040 & 0xf | bVar1);
    uStack00000012 =
         CONCAT11((byte)((uVar5 & 0xff) >> 4) | *(char *)(uint)uRam00000040._1_1_ << 4,
                  bVar1 | (byte)uVar5 & 0xf);
    uRam00000040 = CONCAT11((char)((int)((char *)(uint)uRam00000040._1_1_ + 1) % unaff_s1),
                            (byte)uRam00000040 + 1);
    sStack0000001c = *(short *)(unaff_s2 + 0x12);
    uStack0000001e = *(undefined2 *)(unaff_s2 + 0x14);
    _L0(param_1,param_2);
    bStack00000025 = (byte)(uVar4 & 0xf);
    if ((uVar4 & 0xf) < 5) {
      bStack00000025 += 5;
    }
    bStack00000025 |= param_1 << 5;
    uStack0000001a = in_stack_00000004 >> 1;
    uStack00000017 = 2;
    _L0(param_2);
    (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&stack0x00000010,in_stack_00000003,pcRam00000000)
    ;
    FUN_00010a4e(param_2);
    *(int *)(unaff_s0 + 4) = unaff_s3;
    _L0(param_2);
    FUN_00010a6a(param_2);
    _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
    uVar4 = (uint)DAT_00000004;
    _DAT_280081a2 =
         (ushort)((uVar4 & 2) << 8) | (ushort)((uVar4 & 4) << 6) | (ushort)((uVar4 & 1) << 10) |
         0xf00f;
    _DAT_280081b0 = (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
    _DAT_280081b2 = 0xc027;
    _DAT_280081fa &= 0xff7f;
    _DAT_280081f0 = 0;
    _DAT_280081f2 = 0;
    _DAT_280081f4 = 0;
    _DAT_280081f6 = 0;
    _DAT_280081f8 = 0;
    _DAT_280081a4 = 0;
    _DAT_280081c8 = *(undefined2 *)(unaff_s2 + 6);
    _DAT_280081ca = *(undefined2 *)(unaff_s2 + 8);
    _DAT_280081cc = *(undefined2 *)(unaff_s2 + 10);
    _DAT_280081ce = *(byte *)(unaff_s2 + 5) & 1;
    _DAT_280081ae = 0x55;
    if (in_stack_0000000c < 6) {
      in_stack_0000000c += uStack0000001a * 2;
    }
    iVar3 = unaff_s5 * 0x5c;
    *(ushort *)(iVar3 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
    _DAT_280081be = in_stack_00000004 >> 1;
    _L0(param_2);
    *(ushort *)(unaff_s3 + 0x74) = uVar9;
    *(short *)(unaff_s3 + 0x5e) = sStack0000001c + 1;
    *(undefined *)(unaff_s3 + 0x7b) = 3;
    uVar4 = ((uint)uStack0000001a << 0x11) >> 0x10;
    *(short *)(unaff_s3 + 0x78) = (short)(((uint)uStack0000001a << 0x11) >> 0x10);
    *(undefined2 *)(unaff_s3 + 0x76) = uVar8;
    *(uint *)(unaff_s3 + 8) =
         *(int *)(unaff_s0 + 8) - (uVar4 - (uint)in_stack_0000000c % uVar4) & 0x7ffffff;
    uVar2 = DAT_00000006;
    sVar6 = 0x4e2;
    if (*(short *)(unaff_s2 + 0x16) != 0) {
      sVar6 = *(short *)(unaff_s2 + 0x16) * 0x271;
    }
    *(short *)(unaff_s3 + 0x12) = sVar6;
    *(undefined *)(unaff_s3 + 0x16) = uVar2;
    *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
    *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
    *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
    *(undefined2 *)(iVar3 + 0x2800808e) = 2;
    *(undefined2 *)(iVar3 + 0x28008090) = 0;
    puVar7 = (ushort *)(iVar3 + 0x28008092);
    *puVar7 = *puVar7 & 0xfeff;
    *puVar7 = *puVar7 & 0xfdff;
    *puVar7 = (ushort)(((uint)*puVar7 << 0x14) >> 0x14) | 0x2000;
    *(undefined2 *)(iVar3 + 0x28008094) = uStack00000010;
    *(undefined2 *)(iVar3 + 0x28008096) = uStack00000012;
    *(undefined2 *)(iVar3 + 0x28008098) = uStack00000014;
    *(ushort *)(iVar3 + 0x2800809a) = (ushort)bStack00000016;
    *(ushort *)(iVar3 + 0x2800809e) = (bStack00000025 & 0x1f) << 8 | 0xc000;
    *(ushort *)(iVar3 + 0x280080a0) = (ushort)param_2;
    *(ushort *)(iVar3 + 0x280080a8) =
         *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19);
    *puVar7 = *puVar7 & 0xffe0 | uVar9 & 0x1f;
    *(undefined2 *)(iVar3 + 0x280080b0) = 0;
    *(undefined2 *)(iVar3 + 0x280080b2) = 0;
    *(ushort *)(iVar3 + 0x280080e6) = *(ushort *)(iVar3 + 0x280080e6) & 0xff7f;
    *(undefined2 *)(iVar3 + 0x280080dc) = 0;
    *(undefined2 *)(iVar3 + 0x280080de) = 0;
    *(undefined2 *)(iVar3 + 0x280080e0) = 0;
    *(undefined2 *)(iVar3 + 0x280080e2) = 0;
    *(undefined2 *)(iVar3 + 0x280080e4) = 0;
    *(undefined2 *)(iVar3 + 0x280080aa) = in_stack_00000020;
    *(undefined2 *)(iVar3 + 0x280080ac) = in_stack_00000022;
    _L0();
    *(ushort *)(iVar3 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
    FUN_00010dac();
    *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
    *(uint *)(unaff_s0 + 0x5c) =
         *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
    *(undefined2 *)(unaff_s0 + 0x60) = 1;
    *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(char param_1,byte param_2,undefined2 uRam00000040)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_a0;
  short sVar6;
  ushort *puVar7;
  int unaff_s2;
  int unaff_s3;
  undefined2 uVar8;
  int unaff_s4;
  ushort uVar9;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  undefined in_stack_00000003;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  byte bStack00000016;
  undefined uStack00000017;
  ushort uStack0000001a;
  short sStack0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte bStack00000025;
  short sStack00000028;
  short sStack0000002a;
  uint uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  ushort uStack00000038;
  undefined2 uStack0000003a;
  undefined uStack0000003c;
  undefined2 uStack0000003e;
  
  iVar3 = _L0(param_1,param_2,uRam00000040);
  *(uint *)(unaff_s0 + 8) = iVar3 + *(byte *)(unaff_s0 + 0x19) + 3 & 0x7fffffe;
  sStack00000028 = *(short *)(unaff_s2 + 0xe) << 1;
  sStack0000002a = *(short *)(unaff_s2 + 0x10) << 1;
  uStack0000002c = (uint)*(ushort *)(unaff_s2 + 0x16);
  uStack00000032 = 0;
  uStack00000036 = 0;
  uStack00000030 = *(undefined2 *)(unaff_s2 + 0x18);
  uVar9 = (ushort)unaff_s5;
  uStack0000003a = 0;
  uVar8 = (undefined2)((uint)((unaff_s5 * unaff_s4 + 0x8e) * 0x10000) >> 0x10);
  uStack00000038 = uVar9;
  uStack0000003e = uVar8;
  _L0(param_1,param_2,uRam00000040);
  uStack00000034 = 0;
  uStack0000003c = 0;
  uVar4 = _L0(param_1,param_2,uRam00000040);
  if (uVar4 == unaff_s10) {
    FUN_00010dfe();
    _L0();
    unaff_s0 = 0;
  }
  else {
    _L0(param_1,param_2,uRam00000040);
    bStack00000016 = (byte)(uVar4 >> 0x10);
    *(ushort *)((uint)*(ushort *)(unaff_s9 + 4) * 10 + 0x280082cc) =
         (ushort)((*(byte *)(unaff_s2 + 5) & 1) << 7) | 0x2225;
    uVar5 = uVar4;
    _L0(param_1,param_2,uRam00000040);
    uStack00000014 = (undefined2)uVar4;
    bVar1 = (byte)(((uint)*(byte *)(uint)DAT_00000042 << 0x1c) >> 0x18);
    uStack00000010 = CONCAT11((byte)uRam00000040 >> 4 | bVar1,(byte)uRam00000040 & 0xf | bVar1);
    uStack00000012 =
         CONCAT11((byte)((uVar5 & 0xff) >> 4) | *(char *)(uint)uRam00000040._1_1_ << 4,
                  bVar1 | (byte)uVar5 & 0xf);
    uRam00000040 = CONCAT11((char)((int)((char *)(uint)uRam00000040._1_1_ + 1) % unaff_s1),
                            (byte)uRam00000040 + 1);
    sStack0000001c = *(short *)(unaff_s2 + 0x12);
    uStack0000001e = *(undefined2 *)(unaff_s2 + 0x14);
    _L0(param_1,param_2);
    bStack00000025 = (byte)(uVar4 & 0xf);
    if ((uVar4 & 0xf) < 5) {
      bStack00000025 += 5;
    }
    bStack00000025 |= param_1 << 5;
    uStack0000001a = in_stack_00000004 >> 1;
    uStack00000017 = 2;
    _L0(param_2);
    (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&stack0x00000010,in_stack_00000003,pcRam00000000)
    ;
    FUN_00010a4e(param_2);
    *(int *)(unaff_s0 + 4) = unaff_s3;
    _L0(param_2);
    FUN_00010a6a(param_2);
    _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
    uVar4 = (uint)DAT_00000004;
    _DAT_280081a2 =
         (ushort)((uVar4 & 2) << 8) | (ushort)((uVar4 & 4) << 6) | (ushort)((uVar4 & 1) << 10) |
         0xf00f;
    _DAT_280081b0 = (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
    _DAT_280081b2 = 0xc027;
    _DAT_280081fa &= 0xff7f;
    _DAT_280081f0 = 0;
    _DAT_280081f2 = 0;
    _DAT_280081f4 = 0;
    _DAT_280081f6 = 0;
    _DAT_280081f8 = 0;
    _DAT_280081a4 = 0;
    _DAT_280081c8 = *(undefined2 *)(unaff_s2 + 6);
    _DAT_280081ca = *(undefined2 *)(unaff_s2 + 8);
    _DAT_280081cc = *(undefined2 *)(unaff_s2 + 10);
    _DAT_280081ce = *(byte *)(unaff_s2 + 5) & 1;
    _DAT_280081ae = 0x55;
    if (in_stack_0000000c < 6) {
      in_stack_0000000c += uStack0000001a * 2;
    }
    iVar3 = unaff_s5 * 0x5c;
    *(ushort *)(iVar3 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
    _DAT_280081be = in_stack_00000004 >> 1;
    _L0(param_2);
    *(ushort *)(unaff_s3 + 0x74) = uVar9;
    *(short *)(unaff_s3 + 0x5e) = sStack0000001c + 1;
    *(undefined *)(unaff_s3 + 0x7b) = 3;
    uVar4 = ((uint)uStack0000001a << 0x11) >> 0x10;
    *(short *)(unaff_s3 + 0x78) = (short)(((uint)uStack0000001a << 0x11) >> 0x10);
    *(undefined2 *)(unaff_s3 + 0x76) = uVar8;
    *(uint *)(unaff_s3 + 8) =
         *(int *)(unaff_s0 + 8) - (uVar4 - (uint)in_stack_0000000c % uVar4) & 0x7ffffff;
    uVar2 = DAT_00000006;
    sVar6 = 0x4e2;
    if (*(short *)(unaff_s2 + 0x16) != 0) {
      sVar6 = *(short *)(unaff_s2 + 0x16) * 0x271;
    }
    *(short *)(unaff_s3 + 0x12) = sVar6;
    *(undefined *)(unaff_s3 + 0x16) = uVar2;
    *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
    *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
    *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
    *(undefined2 *)(iVar3 + 0x2800808e) = 2;
    *(undefined2 *)(iVar3 + 0x28008090) = 0;
    puVar7 = (ushort *)(iVar3 + 0x28008092);
    *puVar7 = *puVar7 & 0xfeff;
    *puVar7 = *puVar7 & 0xfdff;
    *puVar7 = (ushort)(((uint)*puVar7 << 0x14) >> 0x14) | 0x2000;
    *(undefined2 *)(iVar3 + 0x28008094) = uStack00000010;
    *(undefined2 *)(iVar3 + 0x28008096) = uStack00000012;
    *(undefined2 *)(iVar3 + 0x28008098) = uStack00000014;
    *(ushort *)(iVar3 + 0x2800809a) = (ushort)bStack00000016;
    *(ushort *)(iVar3 + 0x2800809e) = (bStack00000025 & 0x1f) << 8 | 0xc000;
    *(ushort *)(iVar3 + 0x280080a0) = (ushort)param_2;
    *(ushort *)(iVar3 + 0x280080a8) =
         *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19);
    *puVar7 = *puVar7 & 0xffe0 | uVar9 & 0x1f;
    *(undefined2 *)(iVar3 + 0x280080b0) = 0;
    *(undefined2 *)(iVar3 + 0x280080b2) = 0;
    *(ushort *)(iVar3 + 0x280080e6) = *(ushort *)(iVar3 + 0x280080e6) & 0xff7f;
    *(undefined2 *)(iVar3 + 0x280080dc) = 0;
    *(undefined2 *)(iVar3 + 0x280080de) = 0;
    *(undefined2 *)(iVar3 + 0x280080e0) = 0;
    *(undefined2 *)(iVar3 + 0x280080e2) = 0;
    *(undefined2 *)(iVar3 + 0x280080e4) = 0;
    *(undefined2 *)(iVar3 + 0x280080aa) = in_stack_00000020;
    *(undefined2 *)(iVar3 + 0x280080ac) = in_stack_00000022;
    _L0();
    *(ushort *)(iVar3 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
    FUN_00010dac();
    *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
    *(uint *)(unaff_s0 + 0x5c) =
         *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
    *(undefined2 *)(unaff_s0 + 0x60) = 1;
    *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(char param_1,byte param_2,undefined2 uRam00000040)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_a0;
  short sVar6;
  ushort *puVar7;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  undefined in_stack_00000003;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  byte bStack00000016;
  undefined uStack00000017;
  ushort uStack0000001a;
  short sStack0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte bStack00000025;
  undefined2 uStack00000034;
  undefined uStack0000003c;
  
  _L0(param_1,param_2,uRam00000040);
  uStack00000034 = 0;
  uStack0000003c = 0;
  uVar4 = _L0(param_1,param_2,uRam00000040);
  if (uVar4 == unaff_s10) {
    FUN_00010dfe();
    _L0();
    unaff_s0 = 0;
  }
  else {
    _L0(param_1,param_2,uRam00000040);
    bStack00000016 = (byte)(uVar4 >> 0x10);
    *(ushort *)((uint)*(ushort *)(unaff_s9 + 4) * 10 + 0x280082cc) =
         (ushort)((*(byte *)(unaff_s2 + 5) & 1) << 7) | 0x2225;
    uVar5 = uVar4;
    _L0(param_1,param_2,uRam00000040);
    uStack00000014 = (undefined2)uVar4;
    bVar1 = (byte)(((uint)*(byte *)(uint)DAT_00000042 << 0x1c) >> 0x18);
    uStack00000010 = CONCAT11((byte)uRam00000040 >> 4 | bVar1,(byte)uRam00000040 & 0xf | bVar1);
    uStack00000012 =
         CONCAT11((byte)((uVar5 & 0xff) >> 4) | *(char *)(uint)uRam00000040._1_1_ << 4,
                  bVar1 | (byte)uVar5 & 0xf);
    uRam00000040 = CONCAT11((char)((int)((char *)(uint)uRam00000040._1_1_ + 1) % unaff_s1),
                            (byte)uRam00000040 + 1);
    sStack0000001c = *(short *)(unaff_s2 + 0x12);
    uStack0000001e = *(undefined2 *)(unaff_s2 + 0x14);
    _L0(param_1,param_2);
    bStack00000025 = (byte)(uVar4 & 0xf);
    if ((uVar4 & 0xf) < 5) {
      bStack00000025 += 5;
    }
    bStack00000025 |= param_1 << 5;
    uStack0000001a = in_stack_00000004 >> 1;
    uStack00000017 = 2;
    _L0(param_2);
    (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&stack0x00000010,in_stack_00000003,pcRam00000000)
    ;
    FUN_00010a4e(param_2);
    *(int *)(unaff_s0 + 4) = unaff_s3;
    _L0(param_2);
    FUN_00010a6a(param_2);
    _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
    uVar4 = (uint)DAT_00000004;
    _DAT_280081a2 =
         (ushort)((uVar4 & 2) << 8) | (ushort)((uVar4 & 4) << 6) | (ushort)((uVar4 & 1) << 10) |
         0xf00f;
    _DAT_280081b0 = (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
    _DAT_280081b2 = 0xc027;
    _DAT_280081fa &= 0xff7f;
    _DAT_280081f0 = 0;
    _DAT_280081f2 = 0;
    _DAT_280081f4 = 0;
    _DAT_280081f6 = 0;
    _DAT_280081f8 = 0;
    _DAT_280081a4 = 0;
    _DAT_280081c8 = *(undefined2 *)(unaff_s2 + 6);
    _DAT_280081ca = *(undefined2 *)(unaff_s2 + 8);
    _DAT_280081cc = *(undefined2 *)(unaff_s2 + 10);
    _DAT_280081ce = *(byte *)(unaff_s2 + 5) & 1;
    _DAT_280081ae = 0x55;
    if (in_stack_0000000c < 6) {
      in_stack_0000000c += uStack0000001a * 2;
    }
    iVar3 = unaff_s5 * 0x5c;
    *(ushort *)(iVar3 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
    _DAT_280081be = in_stack_00000004 >> 1;
    _L0(param_2);
    *(ushort *)(unaff_s3 + 0x74) = (ushort)unaff_s5;
    *(short *)(unaff_s3 + 0x5e) = sStack0000001c + 1;
    *(undefined *)(unaff_s3 + 0x7b) = 3;
    uVar4 = ((uint)uStack0000001a << 0x11) >> 0x10;
    *(short *)(unaff_s3 + 0x78) = (short)(((uint)uStack0000001a << 0x11) >> 0x10);
    *(undefined2 *)(unaff_s3 + 0x76) = unaff_s4;
    *(uint *)(unaff_s3 + 8) =
         *(int *)(unaff_s0 + 8) - (uVar4 - (uint)in_stack_0000000c % uVar4) & 0x7ffffff;
    uVar2 = DAT_00000006;
    sVar6 = 0x4e2;
    if (*(short *)(unaff_s2 + 0x16) != 0) {
      sVar6 = *(short *)(unaff_s2 + 0x16) * 0x271;
    }
    *(short *)(unaff_s3 + 0x12) = sVar6;
    *(undefined *)(unaff_s3 + 0x16) = uVar2;
    *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
    *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
    *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
    *(undefined2 *)(iVar3 + 0x2800808e) = 2;
    *(undefined2 *)(iVar3 + 0x28008090) = 0;
    puVar7 = (ushort *)(iVar3 + 0x28008092);
    *puVar7 = *puVar7 & 0xfeff;
    *puVar7 = *puVar7 & 0xfdff;
    *puVar7 = (ushort)(((uint)*puVar7 << 0x14) >> 0x14) | 0x2000;
    *(undefined2 *)(iVar3 + 0x28008094) = uStack00000010;
    *(undefined2 *)(iVar3 + 0x28008096) = uStack00000012;
    *(undefined2 *)(iVar3 + 0x28008098) = uStack00000014;
    *(ushort *)(iVar3 + 0x2800809a) = (ushort)bStack00000016;
    *(ushort *)(iVar3 + 0x2800809e) = (bStack00000025 & 0x1f) << 8 | 0xc000;
    *(ushort *)(iVar3 + 0x280080a0) = (ushort)param_2;
    *(ushort *)(iVar3 + 0x280080a8) =
         *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19);
    *puVar7 = *puVar7 & 0xffe0 | (ushort)unaff_s5 & 0x1f;
    *(undefined2 *)(iVar3 + 0x280080b0) = 0;
    *(undefined2 *)(iVar3 + 0x280080b2) = 0;
    *(ushort *)(iVar3 + 0x280080e6) = *(ushort *)(iVar3 + 0x280080e6) & 0xff7f;
    *(undefined2 *)(iVar3 + 0x280080dc) = 0;
    *(undefined2 *)(iVar3 + 0x280080de) = 0;
    *(undefined2 *)(iVar3 + 0x280080e0) = 0;
    *(undefined2 *)(iVar3 + 0x280080e2) = 0;
    *(undefined2 *)(iVar3 + 0x280080e4) = 0;
    *(undefined2 *)(iVar3 + 0x280080aa) = in_stack_00000020;
    *(undefined2 *)(iVar3 + 0x280080ac) = in_stack_00000022;
    _L0();
    *(ushort *)(iVar3 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
    FUN_00010dac();
    *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
    *(uint *)(unaff_s0 + 0x5c) =
         *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
    *(undefined2 *)(unaff_s0 + 0x60) = 1;
    *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(char param_1,byte param_2,undefined2 param_3)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_a0;
  short sVar6;
  ushort *puVar7;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  undefined in_stack_00000003;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  byte bStack00000016;
  undefined uStack00000017;
  ushort uStack0000001a;
  short sStack0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte bStack00000025;
  
  uVar4 = _L0(param_1,param_2,param_3);
  if (uVar4 == unaff_s10) {
    FUN_00010dfe();
    _L0();
    unaff_s0 = 0;
  }
  else {
    _L0(param_1,param_2,param_3);
    bStack00000016 = (byte)(uVar4 >> 0x10);
    *(ushort *)((uint)*(ushort *)(unaff_s9 + 4) * 10 + 0x280082cc) =
         (ushort)((*(byte *)(unaff_s2 + 5) & 1) << 7) | 0x2225;
    uVar5 = uVar4;
    _L0(param_1,param_2,param_3);
    uStack00000014 = (undefined2)uVar4;
    bVar1 = (byte)(((uint)*(byte *)(uint)DAT_00000042 << 0x1c) >> 0x18);
    uStack00000010 = CONCAT11((byte)param_3 >> 4 | bVar1,(byte)param_3 & 0xf | bVar1);
    uStack00000012 =
         CONCAT11((byte)((uVar5 & 0xff) >> 4) | *(char *)(uint)param_3._1_1_ << 4,
                  bVar1 | (byte)uVar5 & 0xf);
    param_3 = CONCAT11((char)((int)((char *)(uint)param_3._1_1_ + 1) % unaff_s1),(byte)param_3 + 1);
    sStack0000001c = *(short *)(unaff_s2 + 0x12);
    uStack0000001e = *(undefined2 *)(unaff_s2 + 0x14);
    _L0(param_1,param_2);
    bStack00000025 = (byte)(uVar4 & 0xf);
    if ((uVar4 & 0xf) < 5) {
      bStack00000025 += 5;
    }
    bStack00000025 |= param_1 << 5;
    uStack0000001a = in_stack_00000004 >> 1;
    uStack00000017 = 2;
    _L0(param_2);
    (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&stack0x00000010,in_stack_00000003,pcRam00000000)
    ;
    FUN_00010a4e(param_2);
    *(int *)(unaff_s0 + 4) = unaff_s3;
    _L0(param_2);
    FUN_00010a6a(param_2);
    _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
    uVar4 = (uint)DAT_00000004;
    _DAT_280081a2 =
         (ushort)((uVar4 & 2) << 8) | (ushort)((uVar4 & 4) << 6) | (ushort)((uVar4 & 1) << 10) |
         0xf00f;
    _DAT_280081b0 = (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
    _DAT_280081b2 = 0xc027;
    _DAT_280081fa &= 0xff7f;
    _DAT_280081f0 = 0;
    _DAT_280081f2 = 0;
    _DAT_280081f4 = 0;
    _DAT_280081f6 = 0;
    _DAT_280081f8 = 0;
    _DAT_280081a4 = 0;
    _DAT_280081c8 = *(undefined2 *)(unaff_s2 + 6);
    _DAT_280081ca = *(undefined2 *)(unaff_s2 + 8);
    _DAT_280081cc = *(undefined2 *)(unaff_s2 + 10);
    _DAT_280081ce = *(byte *)(unaff_s2 + 5) & 1;
    _DAT_280081ae = 0x55;
    if (in_stack_0000000c < 6) {
      in_stack_0000000c += uStack0000001a * 2;
    }
    iVar3 = unaff_s5 * 0x5c;
    *(ushort *)(iVar3 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
    _DAT_280081be = in_stack_00000004 >> 1;
    _L0(param_2);
    *(ushort *)(unaff_s3 + 0x74) = (ushort)unaff_s5;
    *(short *)(unaff_s3 + 0x5e) = sStack0000001c + 1;
    *(undefined *)(unaff_s3 + 0x7b) = 3;
    uVar4 = ((uint)uStack0000001a << 0x11) >> 0x10;
    *(short *)(unaff_s3 + 0x78) = (short)(((uint)uStack0000001a << 0x11) >> 0x10);
    *(undefined2 *)(unaff_s3 + 0x76) = unaff_s4;
    *(uint *)(unaff_s3 + 8) =
         *(int *)(unaff_s0 + 8) - (uVar4 - (uint)in_stack_0000000c % uVar4) & 0x7ffffff;
    uVar2 = DAT_00000006;
    sVar6 = 0x4e2;
    if (*(short *)(unaff_s2 + 0x16) != 0) {
      sVar6 = *(short *)(unaff_s2 + 0x16) * 0x271;
    }
    *(short *)(unaff_s3 + 0x12) = sVar6;
    *(undefined *)(unaff_s3 + 0x16) = uVar2;
    *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
    *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
    *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
    *(undefined2 *)(iVar3 + 0x2800808e) = 2;
    *(undefined2 *)(iVar3 + 0x28008090) = 0;
    puVar7 = (ushort *)(iVar3 + 0x28008092);
    *puVar7 = *puVar7 & 0xfeff;
    *puVar7 = *puVar7 & 0xfdff;
    *puVar7 = (ushort)(((uint)*puVar7 << 0x14) >> 0x14) | 0x2000;
    *(undefined2 *)(iVar3 + 0x28008094) = uStack00000010;
    *(undefined2 *)(iVar3 + 0x28008096) = uStack00000012;
    *(undefined2 *)(iVar3 + 0x28008098) = uStack00000014;
    *(ushort *)(iVar3 + 0x2800809a) = (ushort)bStack00000016;
    *(ushort *)(iVar3 + 0x2800809e) = (bStack00000025 & 0x1f) << 8 | 0xc000;
    *(ushort *)(iVar3 + 0x280080a0) = (ushort)param_2;
    *(ushort *)(iVar3 + 0x280080a8) =
         *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19);
    *puVar7 = *puVar7 & 0xffe0 | (ushort)unaff_s5 & 0x1f;
    *(undefined2 *)(iVar3 + 0x280080b0) = 0;
    *(undefined2 *)(iVar3 + 0x280080b2) = 0;
    *(ushort *)(iVar3 + 0x280080e6) = *(ushort *)(iVar3 + 0x280080e6) & 0xff7f;
    *(undefined2 *)(iVar3 + 0x280080dc) = 0;
    *(undefined2 *)(iVar3 + 0x280080de) = 0;
    *(undefined2 *)(iVar3 + 0x280080e0) = 0;
    *(undefined2 *)(iVar3 + 0x280080e2) = 0;
    *(undefined2 *)(iVar3 + 0x280080e4) = 0;
    *(undefined2 *)(iVar3 + 0x280080aa) = in_stack_00000020;
    *(undefined2 *)(iVar3 + 0x280080ac) = in_stack_00000022;
    _L0();
    *(ushort *)(iVar3 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
    FUN_00010dac();
    *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
    *(uint *)(unaff_s0 + 0x5c) =
         *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
    *(undefined2 *)(unaff_s0 + 0x60) = 1;
    *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(char param_1,byte param_2,undefined2 param_3)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint in_a0;
  int extraout_a0;
  short sVar4;
  uint uVar5;
  ushort *puVar6;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  int unaff_s9;
  undefined in_stack_00000003;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  byte bStack00000016;
  undefined uStack00000017;
  ushort uStack0000001a;
  short sStack0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte bStack00000025;
  
  _L0(param_1,param_2,param_3);
  bStack00000016 = (byte)(in_a0 >> 0x10);
  *(ushort *)((uint)*(ushort *)(unaff_s9 + 4) * 10 + 0x280082cc) =
       (ushort)((*(byte *)(unaff_s2 + 5) & 1) << 7) | 0x2225;
  uVar5 = in_a0;
  _L0(param_1,param_2,param_3);
  uStack00000014 = (undefined2)in_a0;
  bVar1 = (byte)(((uint)*(byte *)(uint)DAT_00000042 << 0x1c) >> 0x18);
  uStack00000010 = CONCAT11((byte)param_3 >> 4 | bVar1,(byte)param_3 & 0xf | bVar1);
  uStack00000012 =
       CONCAT11((byte)((uVar5 & 0xff) >> 4) | *(char *)(uint)param_3._1_1_ << 4,
                bVar1 | (byte)uVar5 & 0xf);
  param_3 = CONCAT11((char)((int)((char *)(uint)param_3._1_1_ + 1) % unaff_s1),(byte)param_3 + 1);
  sStack0000001c = *(short *)(unaff_s2 + 0x12);
  uStack0000001e = *(undefined2 *)(unaff_s2 + 0x14);
  _L0(param_1,param_2);
  bStack00000025 = (byte)(in_a0 & 0xf);
  if ((in_a0 & 0xf) < 5) {
    bStack00000025 += 5;
  }
  bStack00000025 |= param_1 << 5;
  uStack0000001a = in_stack_00000004 >> 1;
  uStack00000017 = 2;
  _L0(param_2);
  (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&stack0x00000010,in_stack_00000003,pcRam00000000);
  FUN_00010a4e(param_2);
  *(int *)(unaff_s0 + 4) = unaff_s3;
  _L0(param_2);
  FUN_00010a6a(param_2);
  _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
  uVar5 = (uint)DAT_00000004;
  _DAT_280081a2 =
       (ushort)((uVar5 & 2) << 8) | (ushort)((uVar5 & 4) << 6) | (ushort)((uVar5 & 1) << 10) |
       0xf00f;
  _DAT_280081b0 = (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
  _DAT_280081b2 = 0xc027;
  _DAT_280081fa &= 0xff7f;
  _DAT_280081f0 = 0;
  _DAT_280081f2 = 0;
  _DAT_280081f4 = 0;
  _DAT_280081f6 = 0;
  _DAT_280081f8 = 0;
  _DAT_280081a4 = 0;
  _DAT_280081c8 = *(undefined2 *)(unaff_s2 + 6);
  _DAT_280081ca = *(undefined2 *)(unaff_s2 + 8);
  _DAT_280081cc = *(undefined2 *)(unaff_s2 + 10);
  _DAT_280081ce = *(byte *)(unaff_s2 + 5) & 1;
  _DAT_280081ae = 0x55;
  if (in_stack_0000000c < 6) {
    in_stack_0000000c += uStack0000001a * 2;
  }
  iVar3 = unaff_s5 * 0x5c;
  *(ushort *)(iVar3 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
  _DAT_280081be = in_stack_00000004 >> 1;
  _L0(param_2);
  *(ushort *)(unaff_s3 + 0x74) = (ushort)unaff_s5;
  *(short *)(unaff_s3 + 0x5e) = sStack0000001c + 1;
  *(undefined *)(unaff_s3 + 0x7b) = 3;
  uVar5 = ((uint)uStack0000001a << 0x11) >> 0x10;
  *(short *)(unaff_s3 + 0x78) = (short)(((uint)uStack0000001a << 0x11) >> 0x10);
  *(undefined2 *)(unaff_s3 + 0x76) = unaff_s4;
  *(uint *)(unaff_s3 + 8) =
       *(int *)(unaff_s0 + 8) - (uVar5 - (uint)in_stack_0000000c % uVar5) & 0x7ffffff;
  uVar2 = DAT_00000006;
  sVar4 = 0x4e2;
  if (*(short *)(unaff_s2 + 0x16) != 0) {
    sVar4 = *(short *)(unaff_s2 + 0x16) * 0x271;
  }
  *(short *)(unaff_s3 + 0x12) = sVar4;
  *(undefined *)(unaff_s3 + 0x16) = uVar2;
  *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
  *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
  *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
  *(undefined2 *)(iVar3 + 0x2800808e) = 2;
  *(undefined2 *)(iVar3 + 0x28008090) = 0;
  puVar6 = (ushort *)(iVar3 + 0x28008092);
  *puVar6 = *puVar6 & 0xfeff;
  *puVar6 = *puVar6 & 0xfdff;
  *puVar6 = (ushort)(((uint)*puVar6 << 0x14) >> 0x14) | 0x2000;
  *(undefined2 *)(iVar3 + 0x28008094) = uStack00000010;
  *(undefined2 *)(iVar3 + 0x28008096) = uStack00000012;
  *(undefined2 *)(iVar3 + 0x28008098) = uStack00000014;
  *(ushort *)(iVar3 + 0x2800809a) = (ushort)bStack00000016;
  *(ushort *)(iVar3 + 0x2800809e) = (bStack00000025 & 0x1f) << 8 | 0xc000;
  *(ushort *)(iVar3 + 0x280080a0) = (ushort)param_2;
  *(ushort *)(iVar3 + 0x280080a8) = *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19)
  ;
  *puVar6 = *puVar6 & 0xffe0 | (ushort)unaff_s5 & 0x1f;
  *(undefined2 *)(iVar3 + 0x280080b0) = 0;
  *(undefined2 *)(iVar3 + 0x280080b2) = 0;
  *(ushort *)(iVar3 + 0x280080e6) = *(ushort *)(iVar3 + 0x280080e6) & 0xff7f;
  *(undefined2 *)(iVar3 + 0x280080dc) = 0;
  *(undefined2 *)(iVar3 + 0x280080de) = 0;
  *(undefined2 *)(iVar3 + 0x280080e0) = 0;
  *(undefined2 *)(iVar3 + 0x280080e2) = 0;
  *(undefined2 *)(iVar3 + 0x280080e4) = 0;
  *(undefined2 *)(iVar3 + 0x280080aa) = in_stack_00000020;
  *(undefined2 *)(iVar3 + 0x280080ac) = in_stack_00000022;
  _L0();
  *(ushort *)(iVar3 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
  FUN_00010dac();
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(char param_1,byte param_2,undefined2 param_3)

{
  byte bVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint in_a0;
  int extraout_a0;
  short sVar4;
  uint uVar5;
  ushort *puVar6;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  byte unaff_s10;
  undefined4 unaff_s11;
  undefined in_stack_00000003;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  byte bStack00000016;
  undefined uStack00000017;
  ushort uStack0000001a;
  short sStack0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte bStack00000025;
  
  _L0(param_1,param_2,param_3);
  uStack00000014 = (undefined2)unaff_s11;
  bVar1 = (byte)(((uint)*(byte *)(uint)DAT_00000042 << 0x1c) >> 0x18);
  uStack00000010 = CONCAT11((byte)param_3 >> 4 | bVar1,(byte)param_3 & 0xf | bVar1);
  uStack00000012 =
       CONCAT11((byte)((in_a0 & 0xff) >> 4) | *(char *)(uint)param_3._1_1_ << 4,
                bVar1 | (byte)in_a0 & 0xf);
  bStack00000016 = (byte)((uint)unaff_s11 >> 0x10);
  param_3 = CONCAT11((char)((int)((char *)(uint)param_3._1_1_ + 1) % unaff_s1),(byte)param_3 + 1);
  sStack0000001c = *(short *)(unaff_s2 + 0x12);
  uStack0000001e = *(undefined2 *)(unaff_s2 + 0x14);
  _L0(param_1,param_2);
  bStack00000025 = unaff_s10 & 0xf;
  if (bStack00000025 < 5) {
    bStack00000025 += 5;
  }
  bStack00000025 |= param_1 << 5;
  uStack0000001a = in_stack_00000004 >> 1;
  uStack00000017 = 2;
  _L0(param_2);
  (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&stack0x00000010,in_stack_00000003,pcRam00000000);
  FUN_00010a4e(param_2);
  *(int *)(unaff_s0 + 4) = unaff_s3;
  _L0(param_2);
  FUN_00010a6a(param_2);
  _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
  uVar5 = (uint)DAT_00000004;
  _DAT_280081a2 =
       (ushort)((uVar5 & 2) << 8) | (ushort)((uVar5 & 4) << 6) | (ushort)((uVar5 & 1) << 10) |
       0xf00f;
  _DAT_280081b0 = (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
  _DAT_280081b2 = 0xc027;
  _DAT_280081fa &= 0xff7f;
  _DAT_280081f0 = 0;
  _DAT_280081f2 = 0;
  _DAT_280081f4 = 0;
  _DAT_280081f6 = 0;
  _DAT_280081f8 = 0;
  _DAT_280081a4 = 0;
  _DAT_280081c8 = *(undefined2 *)(unaff_s2 + 6);
  _DAT_280081ca = *(undefined2 *)(unaff_s2 + 8);
  _DAT_280081cc = *(undefined2 *)(unaff_s2 + 10);
  _DAT_280081ce = *(byte *)(unaff_s2 + 5) & 1;
  _DAT_280081ae = 0x55;
  if (in_stack_0000000c < 6) {
    in_stack_0000000c += uStack0000001a * 2;
  }
  iVar3 = unaff_s5 * 0x5c;
  *(ushort *)(iVar3 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
  _DAT_280081be = in_stack_00000004 >> 1;
  _L0(param_2);
  *(ushort *)(unaff_s3 + 0x74) = (ushort)unaff_s5;
  *(short *)(unaff_s3 + 0x5e) = sStack0000001c + 1;
  *(undefined *)(unaff_s3 + 0x7b) = 3;
  uVar5 = ((uint)uStack0000001a << 0x11) >> 0x10;
  *(short *)(unaff_s3 + 0x78) = (short)(((uint)uStack0000001a << 0x11) >> 0x10);
  *(undefined2 *)(unaff_s3 + 0x76) = unaff_s4;
  *(uint *)(unaff_s3 + 8) =
       *(int *)(unaff_s0 + 8) - (uVar5 - (uint)in_stack_0000000c % uVar5) & 0x7ffffff;
  uVar2 = DAT_00000006;
  sVar4 = 0x4e2;
  if (*(short *)(unaff_s2 + 0x16) != 0) {
    sVar4 = *(short *)(unaff_s2 + 0x16) * 0x271;
  }
  *(short *)(unaff_s3 + 0x12) = sVar4;
  *(undefined *)(unaff_s3 + 0x16) = uVar2;
  *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
  *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
  *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
  *(undefined2 *)(iVar3 + 0x2800808e) = 2;
  *(undefined2 *)(iVar3 + 0x28008090) = 0;
  puVar6 = (ushort *)(iVar3 + 0x28008092);
  *puVar6 = *puVar6 & 0xfeff;
  *puVar6 = *puVar6 & 0xfdff;
  *puVar6 = (ushort)(((uint)*puVar6 << 0x14) >> 0x14) | 0x2000;
  *(undefined2 *)(iVar3 + 0x28008094) = uStack00000010;
  *(undefined2 *)(iVar3 + 0x28008096) = uStack00000012;
  *(undefined2 *)(iVar3 + 0x28008098) = uStack00000014;
  *(ushort *)(iVar3 + 0x2800809a) = (ushort)bStack00000016;
  *(ushort *)(iVar3 + 0x2800809e) = (bStack00000025 & 0x1f) << 8 | 0xc000;
  *(ushort *)(iVar3 + 0x280080a0) = (ushort)param_2;
  *(ushort *)(iVar3 + 0x280080a8) = *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19)
  ;
  *puVar6 = *puVar6 & 0xffe0 | (ushort)unaff_s5 & 0x1f;
  *(undefined2 *)(iVar3 + 0x280080b0) = 0;
  *(undefined2 *)(iVar3 + 0x280080b2) = 0;
  *(ushort *)(iVar3 + 0x280080e6) = *(ushort *)(iVar3 + 0x280080e6) & 0xff7f;
  *(undefined2 *)(iVar3 + 0x280080dc) = 0;
  *(undefined2 *)(iVar3 + 0x280080de) = 0;
  *(undefined2 *)(iVar3 + 0x280080e0) = 0;
  *(undefined2 *)(iVar3 + 0x280080e2) = 0;
  *(undefined2 *)(iVar3 + 0x280080e4) = 0;
  *(undefined2 *)(iVar3 + 0x280080aa) = in_stack_00000020;
  *(undefined2 *)(iVar3 + 0x280080ac) = in_stack_00000022;
  _L0();
  *(ushort *)(iVar3 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
  FUN_00010dac();
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(char param_1,byte param_2)

{
  undefined uVar1;
  int unaff_s0;
  int iVar2;
  int extraout_a0;
  short sVar3;
  uint uVar4;
  ushort *puVar5;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  byte unaff_s10;
  undefined in_stack_00000003;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  byte in_stack_00000016;
  undefined uStack00000017;
  ushort uStack0000001a;
  short in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte bStack00000025;
  
  _L0(param_1,param_2);
  bStack00000025 = unaff_s10 & 0xf;
  if (bStack00000025 < 5) {
    bStack00000025 += 5;
  }
  bStack00000025 |= param_1 << 5;
  uStack0000001a = in_stack_00000004 >> 1;
  uStack00000017 = 2;
  _L0(param_2);
  (*pcRam00000000)(&DAT_28008000 + _DAT_280082ec,&stack0x00000010,in_stack_00000003,pcRam00000000);
  FUN_00010a4e(param_2);
  *(int *)(unaff_s0 + 4) = unaff_s3;
  _L0(param_2);
  FUN_00010a6a(param_2);
  _DAT_280081a6 = _DAT_280081a6 & 0xffe0 | 3;
  uVar4 = (uint)DAT_00000004;
  _DAT_280081a2 =
       (ushort)((uVar4 & 2) << 8) | (ushort)((uVar4 & 4) << 6) | (ushort)((uVar4 & 1) << 10) |
       0xf00f;
  _DAT_280081b0 = (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
  _DAT_280081b2 = 0xc027;
  _DAT_280081fa &= 0xff7f;
  _DAT_280081f0 = 0;
  _DAT_280081f2 = 0;
  _DAT_280081f4 = 0;
  _DAT_280081f6 = 0;
  _DAT_280081f8 = 0;
  _DAT_280081a4 = 0;
  _DAT_280081c8 = *(undefined2 *)(unaff_s2 + 6);
  _DAT_280081ca = *(undefined2 *)(unaff_s2 + 8);
  _DAT_280081cc = *(undefined2 *)(unaff_s2 + 10);
  _DAT_280081ce = *(byte *)(unaff_s2 + 5) & 1;
  _DAT_280081ae = 0x55;
  if (in_stack_0000000c < 6) {
    in_stack_0000000c += uStack0000001a * 2;
  }
  iVar2 = unaff_s5 * 0x5c;
  *(ushort *)(iVar2 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
  _DAT_280081be = in_stack_00000004 >> 1;
  _L0(param_2);
  *(ushort *)(unaff_s3 + 0x74) = (ushort)unaff_s5;
  *(short *)(unaff_s3 + 0x5e) = in_stack_0000001c + 1;
  *(undefined *)(unaff_s3 + 0x7b) = 3;
  uVar4 = ((uint)uStack0000001a << 0x11) >> 0x10;
  *(short *)(unaff_s3 + 0x78) = (short)(((uint)uStack0000001a << 0x11) >> 0x10);
  *(undefined2 *)(unaff_s3 + 0x76) = unaff_s4;
  *(uint *)(unaff_s3 + 8) =
       *(int *)(unaff_s0 + 8) - (uVar4 - (uint)in_stack_0000000c % uVar4) & 0x7ffffff;
  uVar1 = DAT_00000006;
  sVar3 = 0x4e2;
  if (*(short *)(unaff_s2 + 0x16) != 0) {
    sVar3 = *(short *)(unaff_s2 + 0x16) * 0x271;
  }
  *(short *)(unaff_s3 + 0x12) = sVar3;
  *(undefined *)(unaff_s3 + 0x16) = uVar1;
  *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
  *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
  *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
  *(undefined2 *)(iVar2 + 0x2800808e) = 2;
  *(undefined2 *)(iVar2 + 0x28008090) = 0;
  puVar5 = (ushort *)(iVar2 + 0x28008092);
  *puVar5 = *puVar5 & 0xfeff;
  *puVar5 = *puVar5 & 0xfdff;
  *puVar5 = (ushort)(((uint)*puVar5 << 0x14) >> 0x14) | 0x2000;
  *(undefined2 *)(iVar2 + 0x28008094) = in_stack_00000010;
  *(undefined2 *)(iVar2 + 0x28008096) = in_stack_00000012;
  *(undefined2 *)(iVar2 + 0x28008098) = in_stack_00000014;
  *(ushort *)(iVar2 + 0x2800809a) = (ushort)in_stack_00000016;
  *(ushort *)(iVar2 + 0x2800809e) = (bStack00000025 & 0x1f) << 8 | 0xc000;
  *(ushort *)(iVar2 + 0x280080a0) = (ushort)param_2;
  *(ushort *)(iVar2 + 0x280080a8) = *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19)
  ;
  *puVar5 = *puVar5 & 0xffe0 | (ushort)unaff_s5 & 0x1f;
  *(undefined2 *)(iVar2 + 0x280080b0) = 0;
  *(undefined2 *)(iVar2 + 0x280080b2) = 0;
  *(ushort *)(iVar2 + 0x280080e6) = *(ushort *)(iVar2 + 0x280080e6) & 0xff7f;
  *(undefined2 *)(iVar2 + 0x280080dc) = 0;
  *(undefined2 *)(iVar2 + 0x280080de) = 0;
  *(undefined2 *)(iVar2 + 0x280080e0) = 0;
  *(undefined2 *)(iVar2 + 0x280080e2) = 0;
  *(undefined2 *)(iVar2 + 0x280080e4) = 0;
  *(undefined2 *)(iVar2 + 0x280080aa) = in_stack_00000020;
  *(undefined2 *)(iVar2 + 0x280080ac) = in_stack_00000022;
  _L0();
  *(ushort *)(iVar2 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
  FUN_00010dac();
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(byte param_1)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int extraout_a0;
  short sVar3;
  uint uVar4;
  ushort *puVar5;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined in_stack_00000003;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  byte in_stack_00000016;
  ushort in_stack_0000001a;
  short in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte in_stack_00000025;
  
  _L0(param_1);
  (*pcRam00000000)((uint)*(ushort *)(unaff_s1 + 0x2ec) + unaff_s1,&stack0x00000010,in_stack_00000003
                   ,pcRam00000000);
  FUN_00010a4e(param_1);
  *(int *)(unaff_s0 + 4) = unaff_s3;
  _L0(param_1);
  FUN_00010a6a(param_1);
  *(ushort *)(unaff_s1 + 0x1a6) = *(ushort *)(unaff_s1 + 0x1a6) & 0xffe0 | 3;
  uVar4 = (uint)DAT_00000004;
  *(ushort *)(unaff_s1 + 0x1a2) =
       (ushort)((uVar4 & 2) << 8) | (ushort)((uVar4 & 4) << 6) | (ushort)((uVar4 & 1) << 10) |
       0xf00f;
  *(ushort *)(unaff_s1 + 0x1b0) =
       (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
  *(undefined2 *)(unaff_s1 + 0x1b2) = 0xc027;
  *(ushort *)(unaff_s1 + 0x1fa) = *(ushort *)(unaff_s1 + 0x1fa) & 0xff7f;
  *(undefined2 *)(unaff_s1 + 0x1f0) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f2) = 0;
  *(undefined2 *)(unaff_s1 + 500) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f6) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f8) = 0;
  *(undefined2 *)(unaff_s1 + 0x1a4) = 0;
  *(undefined2 *)(unaff_s1 + 0x1c8) = *(undefined2 *)(unaff_s2 + 6);
  *(undefined2 *)(unaff_s1 + 0x1ca) = *(undefined2 *)(unaff_s2 + 8);
  *(undefined2 *)(unaff_s1 + 0x1cc) = *(undefined2 *)(unaff_s2 + 10);
  *(ushort *)(unaff_s1 + 0x1ce) = *(byte *)(unaff_s2 + 5) & 1;
  *(undefined2 *)(unaff_s1 + 0x1ae) = 0x55;
  if (in_stack_0000000c < 6) {
    in_stack_0000000c += in_stack_0000001a * 2;
  }
  iVar2 = unaff_s5 * 0x5c;
  *(ushort *)(iVar2 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
  _DAT_280081be = in_stack_00000004 >> 1;
  _L0(param_1);
  *(ushort *)(unaff_s3 + 0x74) = (ushort)unaff_s5;
  *(short *)(unaff_s3 + 0x5e) = in_stack_0000001c + 1;
  *(undefined *)(unaff_s3 + 0x7b) = 3;
  uVar4 = ((uint)in_stack_0000001a << 0x11) >> 0x10;
  *(short *)(unaff_s3 + 0x78) = (short)(((uint)in_stack_0000001a << 0x11) >> 0x10);
  *(undefined2 *)(unaff_s3 + 0x76) = unaff_s4;
  *(uint *)(unaff_s3 + 8) =
       *(int *)(unaff_s0 + 8) - (uVar4 - (uint)in_stack_0000000c % uVar4) & 0x7ffffff;
  uVar1 = DAT_00000006;
  sVar3 = 0x4e2;
  if (*(short *)(unaff_s2 + 0x16) != 0) {
    sVar3 = *(short *)(unaff_s2 + 0x16) * 0x271;
  }
  *(short *)(unaff_s3 + 0x12) = sVar3;
  *(undefined *)(unaff_s3 + 0x16) = uVar1;
  *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
  *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
  *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
  *(undefined2 *)(iVar2 + 0x2800808e) = 2;
  *(undefined2 *)(iVar2 + 0x28008090) = 0;
  puVar5 = (ushort *)(iVar2 + 0x28008092);
  *puVar5 = *puVar5 & 0xfeff;
  *puVar5 = *puVar5 & 0xfdff;
  *puVar5 = (ushort)(((uint)*puVar5 << 0x14) >> 0x14) | 0x2000;
  *(undefined2 *)(iVar2 + 0x28008094) = in_stack_00000010;
  *(undefined2 *)(iVar2 + 0x28008096) = in_stack_00000012;
  *(undefined2 *)(iVar2 + 0x28008098) = in_stack_00000014;
  *(ushort *)(iVar2 + 0x2800809a) = (ushort)in_stack_00000016;
  *(ushort *)(iVar2 + 0x2800809e) = (in_stack_00000025 & 0x1f) << 8 | 0xc000;
  *(ushort *)(iVar2 + 0x280080a0) = (ushort)param_1;
  *(ushort *)(iVar2 + 0x280080a8) = *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19)
  ;
  *puVar5 = *puVar5 & 0xffe0 | (ushort)unaff_s5 & 0x1f;
  *(undefined2 *)(iVar2 + 0x280080b0) = 0;
  *(undefined2 *)(iVar2 + 0x280080b2) = 0;
  *(ushort *)(iVar2 + 0x280080e6) = *(ushort *)(iVar2 + 0x280080e6) & 0xff7f;
  *(undefined2 *)(iVar2 + 0x280080dc) = 0;
  *(undefined2 *)(iVar2 + 0x280080de) = 0;
  *(undefined2 *)(iVar2 + 0x280080e0) = 0;
  *(undefined2 *)(iVar2 + 0x280080e2) = 0;
  *(undefined2 *)(iVar2 + 0x280080e4) = 0;
  *(undefined2 *)(iVar2 + 0x280080aa) = in_stack_00000020;
  *(undefined2 *)(iVar2 + 0x280080ac) = in_stack_00000022;
  _L0();
  *(ushort *)(iVar2 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
  FUN_00010dac();
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a4e(byte param_1)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int extraout_a0;
  short sVar3;
  uint uVar4;
  ushort *puVar5;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  byte in_stack_00000016;
  ushort in_stack_0000001a;
  short in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte in_stack_00000025;
  
  FUN_00010a4e(param_1);
  *(int *)(unaff_s0 + 4) = unaff_s3;
  _L0(param_1);
  FUN_00010a6a(param_1);
  *(ushort *)(unaff_s1 + 0x1a6) = *(ushort *)(unaff_s1 + 0x1a6) & 0xffe0 | 3;
  uVar4 = (uint)DAT_00000004;
  *(ushort *)(unaff_s1 + 0x1a2) =
       (ushort)((uVar4 & 2) << 8) | (ushort)((uVar4 & 4) << 6) | (ushort)((uVar4 & 1) << 10) |
       0xf00f;
  *(ushort *)(unaff_s1 + 0x1b0) =
       (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
  *(undefined2 *)(unaff_s1 + 0x1b2) = 0xc027;
  *(ushort *)(unaff_s1 + 0x1fa) = *(ushort *)(unaff_s1 + 0x1fa) & 0xff7f;
  *(undefined2 *)(unaff_s1 + 0x1f0) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f2) = 0;
  *(undefined2 *)(unaff_s1 + 500) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f6) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f8) = 0;
  *(undefined2 *)(unaff_s1 + 0x1a4) = 0;
  *(undefined2 *)(unaff_s1 + 0x1c8) = *(undefined2 *)(unaff_s2 + 6);
  *(undefined2 *)(unaff_s1 + 0x1ca) = *(undefined2 *)(unaff_s2 + 8);
  *(undefined2 *)(unaff_s1 + 0x1cc) = *(undefined2 *)(unaff_s2 + 10);
  *(ushort *)(unaff_s1 + 0x1ce) = *(byte *)(unaff_s2 + 5) & 1;
  *(undefined2 *)(unaff_s1 + 0x1ae) = 0x55;
  if (in_stack_0000000c < 6) {
    in_stack_0000000c += in_stack_0000001a * 2;
  }
  iVar2 = unaff_s5 * 0x5c;
  *(ushort *)(iVar2 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
  _DAT_280081be = in_stack_00000004 >> 1;
  _L0(param_1);
  *(ushort *)(unaff_s3 + 0x74) = (ushort)unaff_s5;
  *(short *)(unaff_s3 + 0x5e) = in_stack_0000001c + 1;
  *(undefined *)(unaff_s3 + 0x7b) = 3;
  uVar4 = ((uint)in_stack_0000001a << 0x11) >> 0x10;
  *(short *)(unaff_s3 + 0x78) = (short)(((uint)in_stack_0000001a << 0x11) >> 0x10);
  *(undefined2 *)(unaff_s3 + 0x76) = unaff_s4;
  *(uint *)(unaff_s3 + 8) =
       *(int *)(unaff_s0 + 8) - (uVar4 - (uint)in_stack_0000000c % uVar4) & 0x7ffffff;
  uVar1 = DAT_00000006;
  sVar3 = 0x4e2;
  if (*(short *)(unaff_s2 + 0x16) != 0) {
    sVar3 = *(short *)(unaff_s2 + 0x16) * 0x271;
  }
  *(short *)(unaff_s3 + 0x12) = sVar3;
  *(undefined *)(unaff_s3 + 0x16) = uVar1;
  *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
  *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
  *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
  *(undefined2 *)(iVar2 + 0x2800808e) = 2;
  *(undefined2 *)(iVar2 + 0x28008090) = 0;
  puVar5 = (ushort *)(iVar2 + 0x28008092);
  *puVar5 = *puVar5 & 0xfeff;
  *puVar5 = *puVar5 & 0xfdff;
  *puVar5 = (ushort)(((uint)*puVar5 << 0x14) >> 0x14) | 0x2000;
  *(undefined2 *)(iVar2 + 0x28008094) = in_stack_00000010;
  *(undefined2 *)(iVar2 + 0x28008096) = in_stack_00000012;
  *(undefined2 *)(iVar2 + 0x28008098) = in_stack_00000014;
  *(ushort *)(iVar2 + 0x2800809a) = (ushort)in_stack_00000016;
  *(ushort *)(iVar2 + 0x2800809e) = (in_stack_00000025 & 0x1f) << 8 | 0xc000;
  *(ushort *)(iVar2 + 0x280080a0) = (ushort)param_1;
  *(ushort *)(iVar2 + 0x280080a8) = *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19)
  ;
  *puVar5 = *puVar5 & 0xffe0 | (ushort)unaff_s5 & 0x1f;
  *(undefined2 *)(iVar2 + 0x280080b0) = 0;
  *(undefined2 *)(iVar2 + 0x280080b2) = 0;
  *(ushort *)(iVar2 + 0x280080e6) = *(ushort *)(iVar2 + 0x280080e6) & 0xff7f;
  *(undefined2 *)(iVar2 + 0x280080dc) = 0;
  *(undefined2 *)(iVar2 + 0x280080de) = 0;
  *(undefined2 *)(iVar2 + 0x280080e0) = 0;
  *(undefined2 *)(iVar2 + 0x280080e2) = 0;
  *(undefined2 *)(iVar2 + 0x280080e4) = 0;
  *(undefined2 *)(iVar2 + 0x280080aa) = in_stack_00000020;
  *(undefined2 *)(iVar2 + 0x280080ac) = in_stack_00000022;
  _L0();
  *(ushort *)(iVar2 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
  FUN_00010dac();
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(byte param_1)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int extraout_a0;
  short sVar3;
  uint uVar4;
  ushort *puVar5;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  byte in_stack_00000016;
  ushort in_stack_0000001a;
  short in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte in_stack_00000025;
  
  _L0(param_1);
  FUN_00010a6a(param_1);
  *(ushort *)(unaff_s1 + 0x1a6) = *(ushort *)(unaff_s1 + 0x1a6) & 0xffe0 | 3;
  uVar4 = (uint)DAT_00000004;
  *(ushort *)(unaff_s1 + 0x1a2) =
       (ushort)((uVar4 & 2) << 8) | (ushort)((uVar4 & 4) << 6) | (ushort)((uVar4 & 1) << 10) |
       0xf00f;
  *(ushort *)(unaff_s1 + 0x1b0) =
       (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
  *(undefined2 *)(unaff_s1 + 0x1b2) = 0xc027;
  *(ushort *)(unaff_s1 + 0x1fa) = *(ushort *)(unaff_s1 + 0x1fa) & 0xff7f;
  *(undefined2 *)(unaff_s1 + 0x1f0) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f2) = 0;
  *(undefined2 *)(unaff_s1 + 500) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f6) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f8) = 0;
  *(undefined2 *)(unaff_s1 + 0x1a4) = 0;
  *(undefined2 *)(unaff_s1 + 0x1c8) = *(undefined2 *)(unaff_s2 + 6);
  *(undefined2 *)(unaff_s1 + 0x1ca) = *(undefined2 *)(unaff_s2 + 8);
  *(undefined2 *)(unaff_s1 + 0x1cc) = *(undefined2 *)(unaff_s2 + 10);
  *(ushort *)(unaff_s1 + 0x1ce) = *(byte *)(unaff_s2 + 5) & 1;
  *(undefined2 *)(unaff_s1 + 0x1ae) = 0x55;
  if (in_stack_0000000c < 6) {
    in_stack_0000000c += in_stack_0000001a * 2;
  }
  iVar2 = unaff_s5 * 0x5c;
  *(ushort *)(iVar2 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
  _DAT_280081be = in_stack_00000004 >> 1;
  _L0(param_1);
  *(ushort *)(unaff_s3 + 0x74) = (ushort)unaff_s5;
  *(short *)(unaff_s3 + 0x5e) = in_stack_0000001c + 1;
  *(undefined *)(unaff_s3 + 0x7b) = 3;
  uVar4 = ((uint)in_stack_0000001a << 0x11) >> 0x10;
  *(short *)(unaff_s3 + 0x78) = (short)(((uint)in_stack_0000001a << 0x11) >> 0x10);
  *(undefined2 *)(unaff_s3 + 0x76) = unaff_s4;
  *(uint *)(unaff_s3 + 8) =
       *(int *)(unaff_s0 + 8) - (uVar4 - (uint)in_stack_0000000c % uVar4) & 0x7ffffff;
  uVar1 = DAT_00000006;
  sVar3 = 0x4e2;
  if (*(short *)(unaff_s2 + 0x16) != 0) {
    sVar3 = *(short *)(unaff_s2 + 0x16) * 0x271;
  }
  *(short *)(unaff_s3 + 0x12) = sVar3;
  *(undefined *)(unaff_s3 + 0x16) = uVar1;
  *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
  *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
  *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
  *(undefined2 *)(iVar2 + 0x2800808e) = 2;
  *(undefined2 *)(iVar2 + 0x28008090) = 0;
  puVar5 = (ushort *)(iVar2 + 0x28008092);
  *puVar5 = *puVar5 & 0xfeff;
  *puVar5 = *puVar5 & 0xfdff;
  *puVar5 = (ushort)(((uint)*puVar5 << 0x14) >> 0x14) | 0x2000;
  *(undefined2 *)(iVar2 + 0x28008094) = in_stack_00000010;
  *(undefined2 *)(iVar2 + 0x28008096) = in_stack_00000012;
  *(undefined2 *)(iVar2 + 0x28008098) = in_stack_00000014;
  *(ushort *)(iVar2 + 0x2800809a) = (ushort)in_stack_00000016;
  *(ushort *)(iVar2 + 0x2800809e) = (in_stack_00000025 & 0x1f) << 8 | 0xc000;
  *(ushort *)(iVar2 + 0x280080a0) = (ushort)param_1;
  *(ushort *)(iVar2 + 0x280080a8) = *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19)
  ;
  *puVar5 = *puVar5 & 0xffe0 | (ushort)unaff_s5 & 0x1f;
  *(undefined2 *)(iVar2 + 0x280080b0) = 0;
  *(undefined2 *)(iVar2 + 0x280080b2) = 0;
  *(ushort *)(iVar2 + 0x280080e6) = *(ushort *)(iVar2 + 0x280080e6) & 0xff7f;
  *(undefined2 *)(iVar2 + 0x280080dc) = 0;
  *(undefined2 *)(iVar2 + 0x280080de) = 0;
  *(undefined2 *)(iVar2 + 0x280080e0) = 0;
  *(undefined2 *)(iVar2 + 0x280080e2) = 0;
  *(undefined2 *)(iVar2 + 0x280080e4) = 0;
  *(undefined2 *)(iVar2 + 0x280080aa) = in_stack_00000020;
  *(undefined2 *)(iVar2 + 0x280080ac) = in_stack_00000022;
  _L0();
  *(ushort *)(iVar2 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
  FUN_00010dac();
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a6a(byte param_1)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int extraout_a0;
  short sVar3;
  uint uVar4;
  ushort *puVar5;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  ushort in_stack_00000004;
  ushort in_stack_0000000c;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  byte in_stack_00000016;
  ushort in_stack_0000001a;
  short in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte in_stack_00000025;
  
  FUN_00010a6a(param_1);
  *(ushort *)(unaff_s1 + 0x1a6) = *(ushort *)(unaff_s1 + 0x1a6) & 0xffe0 | 3;
  uVar4 = (uint)DAT_00000004;
  *(ushort *)(unaff_s1 + 0x1a2) =
       (ushort)((uVar4 & 2) << 8) | (ushort)((uVar4 & 4) << 6) | (ushort)((uVar4 & 1) << 10) |
       0xf00f;
  *(ushort *)(unaff_s1 + 0x1b0) =
       (*(byte *)(unaff_s2 + 0xc) & 2) << 1 | (ushort)*(byte *)(unaff_s2 + 4) << 8;
  *(undefined2 *)(unaff_s1 + 0x1b2) = 0xc027;
  *(ushort *)(unaff_s1 + 0x1fa) = *(ushort *)(unaff_s1 + 0x1fa) & 0xff7f;
  *(undefined2 *)(unaff_s1 + 0x1f0) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f2) = 0;
  *(undefined2 *)(unaff_s1 + 500) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f6) = 0;
  *(undefined2 *)(unaff_s1 + 0x1f8) = 0;
  *(undefined2 *)(unaff_s1 + 0x1a4) = 0;
  *(undefined2 *)(unaff_s1 + 0x1c8) = *(undefined2 *)(unaff_s2 + 6);
  *(undefined2 *)(unaff_s1 + 0x1ca) = *(undefined2 *)(unaff_s2 + 8);
  *(undefined2 *)(unaff_s1 + 0x1cc) = *(undefined2 *)(unaff_s2 + 10);
  *(ushort *)(unaff_s1 + 0x1ce) = *(byte *)(unaff_s2 + 5) & 1;
  *(undefined2 *)(unaff_s1 + 0x1ae) = 0x55;
  if (in_stack_0000000c < 6) {
    in_stack_0000000c += in_stack_0000001a * 2;
  }
  iVar2 = unaff_s5 * 0x5c;
  *(ushort *)(iVar2 + 0x280080a6) = (in_stack_0000000c >> 1) - 1;
  _DAT_280081be = in_stack_00000004 >> 1;
  _L0(param_1);
  *(ushort *)(unaff_s3 + 0x74) = (ushort)unaff_s5;
  *(short *)(unaff_s3 + 0x5e) = in_stack_0000001c + 1;
  *(undefined *)(unaff_s3 + 0x7b) = 3;
  uVar4 = ((uint)in_stack_0000001a << 0x11) >> 0x10;
  *(short *)(unaff_s3 + 0x78) = (short)(((uint)in_stack_0000001a << 0x11) >> 0x10);
  *(undefined2 *)(unaff_s3 + 0x76) = unaff_s4;
  *(uint *)(unaff_s3 + 8) =
       *(int *)(unaff_s0 + 8) - (uVar4 - (uint)in_stack_0000000c % uVar4) & 0x7ffffff;
  uVar1 = DAT_00000006;
  sVar3 = 0x4e2;
  if (*(short *)(unaff_s2 + 0x16) != 0) {
    sVar3 = *(short *)(unaff_s2 + 0x16) * 0x271;
  }
  *(short *)(unaff_s3 + 0x12) = sVar3;
  *(undefined *)(unaff_s3 + 0x16) = uVar1;
  *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
  *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
  *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
  *(undefined2 *)(iVar2 + 0x2800808e) = 2;
  *(undefined2 *)(iVar2 + 0x28008090) = 0;
  puVar5 = (ushort *)(iVar2 + 0x28008092);
  *puVar5 = *puVar5 & 0xfeff;
  *puVar5 = *puVar5 & 0xfdff;
  *puVar5 = (ushort)(((uint)*puVar5 << 0x14) >> 0x14) | 0x2000;
  *(undefined2 *)(iVar2 + 0x28008094) = in_stack_00000010;
  *(undefined2 *)(iVar2 + 0x28008096) = in_stack_00000012;
  *(undefined2 *)(iVar2 + 0x28008098) = in_stack_00000014;
  *(ushort *)(iVar2 + 0x2800809a) = (ushort)in_stack_00000016;
  *(ushort *)(iVar2 + 0x2800809e) = (in_stack_00000025 & 0x1f) << 8 | 0xc000;
  *(ushort *)(iVar2 + 0x280080a0) = (ushort)param_1;
  *(ushort *)(iVar2 + 0x280080a8) = *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19)
  ;
  *puVar5 = *puVar5 & 0xffe0 | (ushort)unaff_s5 & 0x1f;
  *(undefined2 *)(iVar2 + 0x280080b0) = 0;
  *(undefined2 *)(iVar2 + 0x280080b2) = 0;
  *(ushort *)(iVar2 + 0x280080e6) = *(ushort *)(iVar2 + 0x280080e6) & 0xff7f;
  *(undefined2 *)(iVar2 + 0x280080dc) = 0;
  *(undefined2 *)(iVar2 + 0x280080de) = 0;
  *(undefined2 *)(iVar2 + 0x280080e0) = 0;
  *(undefined2 *)(iVar2 + 0x280080e2) = 0;
  *(undefined2 *)(iVar2 + 0x280080e4) = 0;
  *(undefined2 *)(iVar2 + 0x280080aa) = in_stack_00000020;
  *(undefined2 *)(iVar2 + 0x280080ac) = in_stack_00000022;
  _L0();
  *(ushort *)(iVar2 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
  FUN_00010dac();
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  return;
}



void _L0(byte param_1)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  short sVar2;
  uint uVar3;
  ushort *puVar4;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  ushort unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  ushort in_stack_0000000c;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  byte in_stack_00000016;
  ushort in_stack_0000001a;
  short in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  byte in_stack_00000024;
  byte in_stack_00000025;
  
  _L0(param_1);
  *(ushort *)(unaff_s3 + 0x74) = unaff_s5;
  *(short *)(unaff_s3 + 0x5e) = in_stack_0000001c + 1;
  *(undefined *)(unaff_s3 + 0x7b) = 3;
  uVar3 = ((uint)in_stack_0000001a << 0x11) >> 0x10;
  *(short *)(unaff_s3 + 0x78) = (short)(((uint)in_stack_0000001a << 0x11) >> 0x10);
  *(undefined2 *)(unaff_s3 + 0x76) = unaff_s4;
  *(uint *)(unaff_s3 + 8) =
       *(int *)(unaff_s0 + 8) - (uVar3 - (uint)in_stack_0000000c % uVar3) & 0x7ffffff;
  uVar1 = DAT_00000006;
  sVar2 = 0x4e2;
  if (*(short *)(unaff_s2 + 0x16) != 0) {
    sVar2 = *(short *)(unaff_s2 + 0x16) * 0x271;
  }
  *(short *)(unaff_s3 + 0x12) = sVar2;
  *(undefined *)(unaff_s3 + 0x16) = uVar1;
  *(undefined4 *)(unaff_s3 + 0x1c) = unaff_s8;
  *(undefined4 *)(unaff_s3 + 0x24) = unaff_s7;
  *(undefined4 *)(unaff_s3 + 0x20) = unaff_s6;
  *(undefined2 *)(unaff_s1 + 0x2800808e) = 2;
  *(undefined2 *)(unaff_s1 + 0x28008090) = 0;
  puVar4 = (ushort *)(unaff_s1 + 0x28008092);
  *puVar4 = *puVar4 & 0xfeff;
  *puVar4 = *puVar4 & 0xfdff;
  *puVar4 = (ushort)(((uint)*puVar4 << 0x14) >> 0x14) | 0x2000;
  *(undefined2 *)(unaff_s1 + 0x28008094) = in_stack_00000010;
  *(undefined2 *)(unaff_s1 + 0x28008096) = in_stack_00000012;
  *(undefined2 *)(unaff_s1 + 0x28008098) = in_stack_00000014;
  *(ushort *)(unaff_s1 + 0x2800809a) = (ushort)in_stack_00000016;
  *(ushort *)(unaff_s1 + 0x2800809e) = (in_stack_00000025 & 0x1f) << 8 | 0xc000;
  *(ushort *)(unaff_s1 + 0x280080a0) = (ushort)param_1;
  *(ushort *)(unaff_s1 + 0x280080a8) =
       *(short *)(unaff_s3 + 0x78) - (ushort)*(byte *)(unaff_s3 + 0x19);
  *puVar4 = *puVar4 & 0xffe0 | unaff_s5 & 0x1f;
  *(undefined2 *)(unaff_s1 + 0x280080b0) = 0;
  *(undefined2 *)(unaff_s1 + 0x280080b2) = 0;
  *(ushort *)(unaff_s1 + 0x280080e6) = *(ushort *)(unaff_s1 + 0x280080e6) & 0xff7f;
  *(undefined2 *)(unaff_s1 + 0x280080dc) = 0;
  *(undefined2 *)(unaff_s1 + 0x280080de) = 0;
  *(undefined2 *)(unaff_s1 + 0x280080e0) = 0;
  *(undefined2 *)(unaff_s1 + 0x280080e2) = 0;
  *(undefined2 *)(unaff_s1 + 0x280080e4) = 0;
  *(undefined2 *)(unaff_s1 + 0x280080aa) = in_stack_00000020;
  *(undefined2 *)(unaff_s1 + 0x280080ac) = in_stack_00000022;
  _L0();
  *(ushort *)(unaff_s1 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
  FUN_00010dac();
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  byte in_stack_00000024;
  
  _L0();
  *(ushort *)(unaff_s1 + unaff_s2 + 0xae) = (ushort)(extraout_a0 << 8) | (ushort)in_stack_00000024;
  FUN_00010dac();
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  return;
}



void FUN_00010dac(void)

{
  int unaff_s0;
  
  FUN_00010dac();
  *(int *)(unaff_s0 + 0x58) = *(int *)(unaff_s0 + 8);
  *(uint *)(unaff_s0 + 0x5c) =
       *(uint *)(unaff_s0 + 0x54) / 0x271 + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  return;
}



undefined4 FUN_00010dfe(void)

{
  FUN_00010dfe();
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 4462

ea_elt_tag *
lld_move_to_master(ea_elt_tag *elt,uint16_t conhdl,llc_create_con_req_ind *param,uint8_t rx_hdl)

{
  int iVar1;
  ea_elt_tag *peVar2;
  undefined2 in_register_0000202e;
  undefined3 in_register_00002035;
  ushort *puVar3;
  
  peVar2 = (ea_elt_tag *)_L0();
  iVar1 = CONCAT22(in_register_0000202e,conhdl) * 0x5c;
  *(ushort *)(iVar1 + 0x2800809e) =
       (ushort)((*(ushort *)(CONCAT31(in_register_00002035,rx_hdl) * 0xe + 0x280083d2) >> 5 & 1) <<
               0xe) | *(ushort *)(iVar1 + 0x2800809e) & 0xbfff;
  FUN_00010e7a();
  FUN_00010e8c();
  *(undefined2 *)(iVar1 + 0x280080a6) = *(undefined2 *)(iVar1 + 0x280080a8);
  puVar3 = (ushort *)(CONCAT22(in_register_0000202e,conhdl) * 10 + 0x280082ca);
  *puVar3 = (ushort)(((uint)*puVar3 << 0x11) >> 0x11) | 0x8000;
  puVar3 = (ushort *)(iVar1 + 0x28008092);
  *puVar3 = *puVar3 & 0xfeff;
  *puVar3 = *puVar3 & 0xfdff;
  *puVar3 = *puVar3 & 0xfbff;
  *(undefined2 *)(iVar1 + 0x2800809c) = 0;
  *(undefined2 *)(iVar1 + 0x280080cc) = 0;
  *(undefined2 *)(iVar1 + 0x280080ce) = 0;
  *(undefined2 *)(iVar1 + 0x280080d0) = 0;
  *(undefined2 *)(iVar1 + 0x280080d2) = 0;
  *(undefined2 *)(iVar1 + 0x280080d4) = 0;
  *(undefined2 *)(iVar1 + 0x280080d6) = 0;
  *(undefined2 *)(iVar1 + 0x280080d8) = 0;
  *(undefined2 *)(iVar1 + 0x280080a4) = 0;
  *puVar3 = *puVar3 & 0xf7ff;
  _L0();
  return peVar2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  int unaff_s3;
  ushort *puVar3;
  
  uVar2 = _L0();
  iVar1 = unaff_s3 * 0x5c;
  *(ushort *)(iVar1 + 0x2800809e) =
       (ushort)((*(ushort *)(unaff_s0 * 0xe + 0x280083d2) >> 5 & 1) << 0xe) |
       *(ushort *)(iVar1 + 0x2800809e) & 0xbfff;
  FUN_00010e7a();
  FUN_00010e8c();
  *(undefined2 *)(iVar1 + 0x280080a6) = *(undefined2 *)(iVar1 + 0x280080a8);
  puVar3 = (ushort *)(unaff_s3 * 10 + 0x280082ca);
  *puVar3 = (ushort)(((uint)*puVar3 << 0x11) >> 0x11) | 0x8000;
  puVar3 = (ushort *)(iVar1 + 0x28008092);
  *puVar3 = *puVar3 & 0xfeff;
  *puVar3 = *puVar3 & 0xfdff;
  *puVar3 = *puVar3 & 0xfbff;
  *(undefined2 *)(iVar1 + 0x2800809c) = 0;
  *(undefined2 *)(iVar1 + 0x280080cc) = 0;
  *(undefined2 *)(iVar1 + 0x280080ce) = 0;
  *(undefined2 *)(iVar1 + 0x280080d0) = 0;
  *(undefined2 *)(iVar1 + 0x280080d2) = 0;
  *(undefined2 *)(iVar1 + 0x280080d4) = 0;
  *(undefined2 *)(iVar1 + 0x280080d6) = 0;
  *(undefined2 *)(iVar1 + 0x280080d8) = 0;
  *(undefined2 *)(iVar1 + 0x280080a4) = 0;
  *puVar3 = *puVar3 & 0xf7ff;
  _L0();
  return uVar2;
}



void FUN_00010e7a(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  ushort *puVar1;
  
  FUN_00010e7a();
  FUN_00010e8c();
  *(undefined2 *)(unaff_s1 + 0xa6 + unaff_s0) = *(undefined2 *)(unaff_s1 + 0xa8 + unaff_s0);
  puVar1 = (ushort *)(unaff_s3 * 10 + unaff_s1 + 0x2ca);
  *puVar1 = (ushort)(((uint)*puVar1 << 0x11) >> 0x11) | 0x8000;
  puVar1 = (ushort *)(unaff_s1 + 0x92 + unaff_s0);
  *puVar1 = *puVar1 & 0xfeff;
  *puVar1 = *puVar1 & 0xfdff;
  *puVar1 = *puVar1 & 0xfbff;
  *(undefined2 *)(unaff_s1 + 0x9c + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xcc + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xce + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd4 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd6 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd8 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xa4 + unaff_s0) = 0;
  *puVar1 = *puVar1 & 0xf7ff;
  _L0();
  return;
}



void FUN_00010e8c(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  ushort *puVar1;
  
  FUN_00010e8c();
  *(undefined2 *)(unaff_s1 + 0xa6 + unaff_s0) = *(undefined2 *)(unaff_s1 + 0xa8 + unaff_s0);
  puVar1 = (ushort *)(unaff_s3 * 10 + unaff_s1 + 0x2ca);
  *puVar1 = (ushort)(((uint)*puVar1 << 0x11) >> 0x11) | 0x8000;
  puVar1 = (ushort *)(unaff_s1 + 0x92 + unaff_s0);
  *puVar1 = *puVar1 & 0xfeff;
  *puVar1 = *puVar1 & 0xfdff;
  *puVar1 = *puVar1 & 0xfbff;
  *(undefined2 *)(unaff_s1 + 0x9c + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xcc + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xce + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd4 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd6 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd8 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xa4 + unaff_s0) = 0;
  *puVar1 = *puVar1 & 0xf7ff;
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 43c8

void lld_con_update_req(ea_elt_tag *elt_old,llc_con_upd_req_ind *param,llcp_con_upd_ind *param_pdu)

{
  int extraout_a0;
  uint16_t uStack24;
  uint16_t uStack22;
  lld_evt_update_tag upd_par;
  
  FUN_00010fd0();
  param_pdu->timeout = param->superv_to;
  param_pdu->interv = *(ushort *)(extraout_a0 + 0x78) >> 1;
  param_pdu->latency = param->con_latency;
  param_pdu->win_size = (uint8_t)upd_par.win_offset;
  param_pdu->win_off = uStack24;
  param_pdu->instant = uStack22;
  return;
}



void FUN_00010fd0(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000a;
  undefined in_stack_0000000c;
  
  FUN_00010fd0();
  *(undefined2 *)(unaff_s1 + 8) = *(undefined2 *)(unaff_s0 + 8);
  *(ushort *)(unaff_s1 + 4) = *(ushort *)(extraout_a0 + 0x78) >> 1;
  *(undefined2 *)(unaff_s1 + 6) = *(undefined2 *)(unaff_s0 + 6);
  *(undefined *)(unaff_s1 + 1) = in_stack_0000000c;
  *(undefined2 *)(unaff_s1 + 2) = in_stack_00000008;
  *(undefined2 *)(unaff_s1 + 10) = in_stack_0000000a;
  return;
}



// DWARF DIE: 4161

uint8_t lld_con_update_after_param_req
                  (uint16_t conhdl,ea_elt_tag *elt_old,llc_con_upd_req_ind *param,
                  llcp_con_upd_ind *param_pdu,_Bool bypass_offchk)

{
  uint16_t uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ea_elt_tag *extraout_a0;
  uint uVar5;
  uint extraout_a0_00;
  uint uVar6;
  undefined3 in_register_00002039;
  uint uVar7;
  uint uVar8;
  uint8_t uVar9;
  uint16_t uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 uStack84;
  ea_param_output set_param;
  ea_param_input input_param;
  
  uVar1 = param->offset0;
  _L0();
  if (param->offset0 != 0xffff) {
    FUN_000110ca();
  }
  if (((uVar1 == 0xffff) || (iVar4 = FUN_0001124c(), iVar4 == 0)) || (iVar4 = _L0(), iVar4 == 0)) {
    uVar9 = '\0';
  }
  else {
    uVar9 = '\x1f';
    if (CONCAT31(in_register_00002039,bypass_offchk) == 0) {
      return '\x1f';
    }
  }
  FUN_000110f0();
  if (extraout_a0 != (ea_elt_tag *)0x0) {
    (*pcRam00000000)(elt_old,0x2c,pcRam00000000);
    _LVL352();
    *(uint16_t *)((int)&extraout_a0[2].linked_element + 2) = param->con_latency + 1;
    *(undefined *)((int)&extraout_a0[2].ea_cb_stop + 3) = 3;
    *(undefined2 *)&extraout_a0[2].ea_cb_stop = uStack84;
    uVar5 = (uint)param->offset0;
    if (uVar5 == 0xffff) {
      FUN_00011146();
      uVar2 = *(ushort *)&elt_old[2].timestamp;
      uVar5 = extraout_a0_00 >> 1 & 0xffff;
    }
    else {
      uVar2 = param->ref_con_event_count;
    }
    uVar8 = (uint)uVar2;
    uVar3 = (uint)*(ushort *)&elt_old[2].ea_cb_stop;
    uVar7 = (uint)*(ushort *)((int)&elt_old[2].linked_element + 2) * 0x70000 >> 0x10;
    uVar11 = (*(ushort *)&elt_old[2].timestamp - 1) + uVar7;
    uVar12 = uVar11 & 0xffff;
    uVar6 = (uint)*(ushort *)&extraout_a0[2].ea_cb_stop;
    if (uVar12 < uVar8) {
      iVar4 = (uVar8 - uVar12) * uVar3 + uVar5 * 2;
    }
    else {
      iVar4 = uVar6 - (int)((uVar12 - uVar8) * uVar3 + uVar5 * -2) % (int)uVar6;
    }
    uVar5 = iVar4 % (int)uVar6 & 0xffff;
    extraout_a0->timestamp =
         uVar5 + ((uVar7 - 1) * uVar3 + elt_old->timestamp & 0x7ffffff) & 0x7ffffff;
    elt_old->linked_element = extraout_a0;
    uVar10 = (uint16_t)(uVar11 * 0x10000 >> 0x10);
    *(uint16_t *)&elt_old[2].linked_element = uVar10;
    *(undefined *)((int)&elt_old[2].delay + 1) = 1;
    _L0();
    iVar4 = (uint)*(ushort *)&elt_old[2].ea_cb_start * 0x5c;
    *(undefined2 *)(iVar4 + 0x280080a6) = *(undefined2 *)(iVar4 + 0x280080a8);
    param_pdu->timeout = param->superv_to;
    param_pdu->interv = *(ushort *)&extraout_a0[2].ea_cb_stop >> 1;
    uVar1 = param->con_latency;
    param_pdu->win_size = '\x01';
    param_pdu->win_off = (uint16_t)(uVar5 >> 1);
    param_pdu->latency = uVar1;
    param_pdu->instant = uVar10;
  }
  return uVar9;
}



undefined4 _L0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint uVar3;
  int iVar4;
  int unaff_s1;
  undefined4 uVar5;
  int extraout_a0;
  uint uVar6;
  uint extraout_a0_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s5;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  ushort in_stack_0000000c;
  byte bStack00000024;
  undefined2 uStack00000024;
  char in_stack_00000026;
  byte bStack0000002c;
  
  _L0();
  if (*(short *)(unaff_s1 + 0x16) == -1) {
    uStack00000024 = (undefined2)(*(uint *)(unaff_s5 + 8) % (uint)in_stack_0000000c);
  }
  else {
    uVar5 = FUN_000110ca();
    uStack00000024 = (short)uVar5;
  }
  bStack0000002c = bStack00000024 & 1;
  if (((in_stack_00000026 == '\x01') && (iVar4 = FUN_0001124c(), iVar4 != 0)) &&
     (iVar4 = _L0(), iVar4 != 0)) {
    uVar5 = 0x1f;
    if (unaff_s0 == 0) {
      return 0x1f;
    }
  }
  else {
    uVar5 = 0;
  }
  FUN_000110f0();
  if (extraout_a0 != 0) {
    (*pcRam00000000)(0x2c,pcRam00000000);
    _LVL352();
    *(short *)(extraout_a0 + 0x5e) = *(short *)(unaff_s1 + 6) + 1;
    *(undefined *)(extraout_a0 + 0x7b) = 3;
    *(ushort *)(extraout_a0 + 0x78) = in_stack_0000000c;
    uVar6 = (uint)*(ushort *)(unaff_s1 + 0x16);
    if (uVar6 == 0xffff) {
      FUN_00011146();
      uVar1 = *(ushort *)(unaff_s5 + 0x60);
      uVar6 = extraout_a0_00 >> 1 & 0xffff;
    }
    else {
      uVar1 = *(ushort *)(unaff_s1 + 0x14);
    }
    uVar9 = (uint)uVar1;
    uVar3 = (uint)*(ushort *)(unaff_s5 + 0x78);
    uVar8 = (uint)*(ushort *)(unaff_s5 + 0x5e) * 0x70000 >> 0x10;
    uVar11 = (*(ushort *)(unaff_s5 + 0x60) - 1) + uVar8;
    uVar12 = uVar11 & 0xffff;
    uVar7 = (uint)*(ushort *)(extraout_a0 + 0x78);
    if (uVar12 < uVar9) {
      iVar4 = (uVar9 - uVar12) * uVar3 + uVar6 * 2;
    }
    else {
      iVar4 = uVar7 - (int)((uVar12 - uVar9) * uVar3 + uVar6 * -2) % (int)uVar7;
    }
    uVar6 = iVar4 % (int)uVar7 & 0xffff;
    *(uint *)(extraout_a0 + 8) =
         uVar6 + ((uVar8 - 1) * uVar3 + *(int *)(unaff_s5 + 8) & 0x7ffffff) & 0x7ffffff;
    *(int *)(unaff_s5 + 4) = extraout_a0;
    uVar10 = (undefined2)(uVar11 * 0x10000 >> 0x10);
    *(undefined2 *)(unaff_s5 + 0x5c) = uVar10;
    *(undefined *)(unaff_s5 + 0x6d) = 1;
    _L0();
    iVar4 = (uint)*(ushort *)(unaff_s5 + 0x74) * 0x5c;
    *(undefined2 *)(iVar4 + 0x280080a6) = *(undefined2 *)(iVar4 + 0x280080a8);
    *(undefined2 *)(unaff_s2 + 8) = *(undefined2 *)(unaff_s1 + 8);
    *(ushort *)(unaff_s2 + 4) = *(ushort *)(extraout_a0 + 0x78) >> 1;
    uVar2 = *(undefined2 *)(unaff_s1 + 6);
    *(undefined *)(unaff_s2 + 1) = 1;
    *(short *)(unaff_s2 + 2) = (short)(uVar6 >> 1);
    *(undefined2 *)(unaff_s2 + 6) = uVar2;
    *(undefined2 *)(unaff_s2 + 10) = uVar10;
  }
  return uVar5;
}



undefined4 FUN_000110ca(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint uVar3;
  int iVar4;
  int unaff_s1;
  undefined4 uVar5;
  int extraout_a0;
  uint uVar6;
  uint extraout_a0_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s5;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 in_stack_0000000c;
  byte bStack00000024;
  undefined2 uStack00000024;
  char in_stack_00000026;
  byte bStack0000002c;
  
  uVar5 = FUN_000110ca();
  bStack00000024 = (byte)uVar5;
  bStack0000002c = bStack00000024 & 1;
  uStack00000024 = (short)uVar5;
  if (((in_stack_00000026 == '\x01') && (iVar4 = FUN_0001124c(), iVar4 != 0)) &&
     (iVar4 = _L0(), iVar4 != 0)) {
    uVar5 = 0x1f;
    if (unaff_s0 == 0) {
      return 0x1f;
    }
  }
  else {
    uVar5 = 0;
  }
  FUN_000110f0();
  if (extraout_a0 != 0) {
    (*pcRam00000000)(0x2c,pcRam00000000);
    _LVL352();
    *(short *)(extraout_a0 + 0x5e) = *(short *)(unaff_s1 + 6) + 1;
    *(undefined *)(extraout_a0 + 0x7b) = 3;
    *(undefined2 *)(extraout_a0 + 0x78) = in_stack_0000000c;
    uVar6 = (uint)*(ushort *)(unaff_s1 + 0x16);
    if (uVar6 == 0xffff) {
      FUN_00011146();
      uVar1 = *(ushort *)(unaff_s5 + 0x60);
      uVar6 = extraout_a0_00 >> 1 & 0xffff;
    }
    else {
      uVar1 = *(ushort *)(unaff_s1 + 0x14);
    }
    uVar9 = (uint)uVar1;
    uVar3 = (uint)*(ushort *)(unaff_s5 + 0x78);
    uVar8 = (uint)*(ushort *)(unaff_s5 + 0x5e) * 0x70000 >> 0x10;
    uVar11 = (*(ushort *)(unaff_s5 + 0x60) - 1) + uVar8;
    uVar12 = uVar11 & 0xffff;
    uVar7 = (uint)*(ushort *)(extraout_a0 + 0x78);
    if (uVar12 < uVar9) {
      iVar4 = (uVar9 - uVar12) * uVar3 + uVar6 * 2;
    }
    else {
      iVar4 = uVar7 - (int)((uVar12 - uVar9) * uVar3 + uVar6 * -2) % (int)uVar7;
    }
    uVar6 = iVar4 % (int)uVar7 & 0xffff;
    *(uint *)(extraout_a0 + 8) =
         uVar6 + ((uVar8 - 1) * uVar3 + *(int *)(unaff_s5 + 8) & 0x7ffffff) & 0x7ffffff;
    *(int *)(unaff_s5 + 4) = extraout_a0;
    uVar10 = (undefined2)(uVar11 * 0x10000 >> 0x10);
    *(undefined2 *)(unaff_s5 + 0x5c) = uVar10;
    *(undefined *)(unaff_s5 + 0x6d) = 1;
    _L0();
    iVar4 = (uint)*(ushort *)(unaff_s5 + 0x74) * 0x5c;
    *(undefined2 *)(iVar4 + 0x280080a6) = *(undefined2 *)(iVar4 + 0x280080a8);
    *(undefined2 *)(unaff_s2 + 8) = *(undefined2 *)(unaff_s1 + 8);
    *(ushort *)(unaff_s2 + 4) = *(ushort *)(extraout_a0 + 0x78) >> 1;
    uVar2 = *(undefined2 *)(unaff_s1 + 6);
    *(undefined *)(unaff_s2 + 1) = 1;
    *(short *)(unaff_s2 + 2) = (short)(uVar6 >> 1);
    *(undefined2 *)(unaff_s2 + 6) = uVar2;
    *(undefined2 *)(unaff_s2 + 10) = uVar10;
  }
  return uVar5;
}



void FUN_000110f0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_s1;
  int extraout_a0;
  uint uVar5;
  uint extraout_a0_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_s2;
  int unaff_s5;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  undefined2 in_stack_0000000c;
  
  FUN_000110f0();
  if (extraout_a0 != 0) {
    (*pcRam00000000)(0x2c,pcRam00000000);
    _LVL352();
    *(short *)(extraout_a0 + 0x5e) = *(short *)(unaff_s1 + 6) + 1;
    *(undefined *)(extraout_a0 + 0x7b) = 3;
    *(undefined2 *)(extraout_a0 + 0x78) = in_stack_0000000c;
    uVar5 = (uint)*(ushort *)(unaff_s1 + 0x16);
    if (uVar5 == 0xffff) {
      FUN_00011146();
      uVar1 = *(ushort *)(unaff_s5 + 0x60);
      uVar5 = extraout_a0_00 >> 1 & 0xffff;
    }
    else {
      uVar1 = *(ushort *)(unaff_s1 + 0x14);
    }
    uVar8 = (uint)uVar1;
    uVar3 = (uint)*(ushort *)(unaff_s5 + 0x78);
    uVar7 = (uint)*(ushort *)(unaff_s5 + 0x5e) * 0x70000 >> 0x10;
    uVar10 = (*(ushort *)(unaff_s5 + 0x60) - 1) + uVar7;
    uVar11 = uVar10 & 0xffff;
    uVar6 = (uint)*(ushort *)(extraout_a0 + 0x78);
    if (uVar11 < uVar8) {
      iVar4 = (uVar8 - uVar11) * uVar3 + uVar5 * 2;
    }
    else {
      iVar4 = uVar6 - (int)((uVar11 - uVar8) * uVar3 + uVar5 * -2) % (int)uVar6;
    }
    uVar5 = iVar4 % (int)uVar6 & 0xffff;
    *(uint *)(extraout_a0 + 8) =
         uVar5 + ((uVar7 - 1) * uVar3 + *(int *)(unaff_s5 + 8) & 0x7ffffff) & 0x7ffffff;
    *(int *)(unaff_s5 + 4) = extraout_a0;
    uVar9 = (undefined2)(uVar10 * 0x10000 >> 0x10);
    *(undefined2 *)(unaff_s5 + 0x5c) = uVar9;
    *(undefined *)(unaff_s5 + 0x6d) = 1;
    _L0();
    iVar4 = (uint)*(ushort *)(unaff_s5 + 0x74) * 0x5c;
    *(undefined2 *)(iVar4 + 0x280080a6) = *(undefined2 *)(iVar4 + 0x280080a8);
    *(undefined2 *)(unaff_s2 + 8) = *(undefined2 *)(unaff_s1 + 8);
    *(ushort *)(unaff_s2 + 4) = *(ushort *)(extraout_a0 + 0x78) >> 1;
    uVar2 = *(undefined2 *)(unaff_s1 + 6);
    *(undefined *)(unaff_s2 + 1) = 1;
    *(short *)(unaff_s2 + 2) = (short)(uVar5 >> 1);
    *(undefined2 *)(unaff_s2 + 6) = uVar2;
    *(undefined2 *)(unaff_s2 + 10) = uVar9;
  }
  return;
}



void _LVL352(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_s1;
  uint uVar5;
  uint extraout_a0;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_s2;
  int unaff_s5;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  int unaff_s7;
  undefined2 in_stack_0000000c;
  
  _LVL352();
  *(short *)(unaff_s7 + 0x5e) = *(short *)(unaff_s1 + 6) + 1;
  *(undefined *)(unaff_s7 + 0x7b) = 3;
  *(undefined2 *)(unaff_s7 + 0x78) = in_stack_0000000c;
  uVar5 = (uint)*(ushort *)(unaff_s1 + 0x16);
  if (uVar5 == 0xffff) {
    FUN_00011146();
    uVar1 = *(ushort *)(unaff_s5 + 0x60);
    uVar5 = extraout_a0 >> 1 & 0xffff;
  }
  else {
    uVar1 = *(ushort *)(unaff_s1 + 0x14);
  }
  uVar8 = (uint)uVar1;
  uVar3 = (uint)*(ushort *)(unaff_s5 + 0x78);
  uVar7 = (uint)*(ushort *)(unaff_s5 + 0x5e) * 0x70000 >> 0x10;
  uVar10 = (*(ushort *)(unaff_s5 + 0x60) - 1) + uVar7;
  uVar11 = uVar10 & 0xffff;
  uVar6 = (uint)*(ushort *)(unaff_s7 + 0x78);
  if (uVar11 < uVar8) {
    iVar4 = (uVar8 - uVar11) * uVar3 + uVar5 * 2;
  }
  else {
    iVar4 = uVar6 - (int)((uVar11 - uVar8) * uVar3 + uVar5 * -2) % (int)uVar6;
  }
  uVar5 = iVar4 % (int)uVar6 & 0xffff;
  *(uint *)(unaff_s7 + 8) =
       uVar5 + ((uVar7 - 1) * uVar3 + *(int *)(unaff_s5 + 8) & 0x7ffffff) & 0x7ffffff;
  *(int *)(unaff_s5 + 4) = unaff_s7;
  uVar9 = (undefined2)(uVar10 * 0x10000 >> 0x10);
  *(undefined2 *)(unaff_s5 + 0x5c) = uVar9;
  *(undefined *)(unaff_s5 + 0x6d) = 1;
  _L0();
  iVar4 = (uint)*(ushort *)(unaff_s5 + 0x74) * 0x5c;
  *(undefined2 *)(iVar4 + 0x280080a6) = *(undefined2 *)(iVar4 + 0x280080a8);
  *(undefined2 *)(unaff_s2 + 8) = *(undefined2 *)(unaff_s1 + 8);
  *(ushort *)(unaff_s2 + 4) = *(ushort *)(unaff_s7 + 0x78) >> 1;
  uVar2 = *(undefined2 *)(unaff_s1 + 6);
  *(undefined *)(unaff_s2 + 1) = 1;
  *(short *)(unaff_s2 + 2) = (short)(uVar5 >> 1);
  *(undefined2 *)(unaff_s2 + 6) = uVar2;
  *(undefined2 *)(unaff_s2 + 10) = uVar9;
  return;
}



void FUN_00011146(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int unaff_s1;
  uint extraout_a0;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_s2;
  int unaff_s5;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_s7;
  
  FUN_00011146();
  uVar7 = (uint)*(ushort *)(unaff_s5 + 0x60);
  uVar4 = extraout_a0 >> 1 & 0xffff;
  uVar2 = (uint)*(ushort *)(unaff_s5 + 0x78);
  uVar6 = (uint)*(ushort *)(unaff_s5 + 0x5e) * 0x70000 >> 0x10;
  uVar9 = (*(ushort *)(unaff_s5 + 0x60) - 1) + uVar6;
  uVar10 = uVar9 & 0xffff;
  uVar5 = (uint)*(ushort *)(unaff_s7 + 0x78);
  if (uVar10 < uVar7) {
    iVar3 = (uVar7 - uVar10) * uVar2 + uVar4 * 2;
  }
  else {
    iVar3 = uVar5 - (int)((uVar10 - uVar7) * uVar2 + uVar4 * -2) % (int)uVar5;
  }
  uVar4 = iVar3 % (int)uVar5 & 0xffff;
  *(uint *)(unaff_s7 + 8) =
       uVar4 + ((uVar6 - 1) * uVar2 + *(int *)(unaff_s5 + 8) & 0x7ffffff) & 0x7ffffff;
  *(int *)(unaff_s5 + 4) = unaff_s7;
  uVar8 = (undefined2)(uVar9 * 0x10000 >> 0x10);
  *(undefined2 *)(unaff_s5 + 0x5c) = uVar8;
  *(undefined *)(unaff_s5 + 0x6d) = 1;
  _L0();
  iVar3 = (uint)*(ushort *)(unaff_s5 + 0x74) * 0x5c;
  *(undefined2 *)(iVar3 + 0x280080a6) = *(undefined2 *)(iVar3 + 0x280080a8);
  *(undefined2 *)(unaff_s2 + 8) = *(undefined2 *)(unaff_s1 + 8);
  *(ushort *)(unaff_s2 + 4) = *(ushort *)(unaff_s7 + 0x78) >> 1;
  uVar1 = *(undefined2 *)(unaff_s1 + 6);
  *(undefined *)(unaff_s2 + 1) = 1;
  *(short *)(unaff_s2 + 2) = (short)(uVar4 >> 1);
  *(undefined2 *)(unaff_s2 + 6) = uVar1;
  *(undefined2 *)(unaff_s2 + 10) = uVar8;
  return;
}



void _L0(void)

{
  undefined2 uVar1;
  undefined2 unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  int unaff_s5;
  undefined2 unaff_s6;
  int unaff_s7;
  undefined unaff_s8;
  
  _L0();
  iVar2 = (uint)*(ushort *)(unaff_s5 + 0x74) * 0x5c;
  *(undefined2 *)(iVar2 + 0x280080a6) = *(undefined2 *)(iVar2 + 0x280080a8);
  *(undefined2 *)(unaff_s2 + 8) = *(undefined2 *)(unaff_s1 + 8);
  *(ushort *)(unaff_s2 + 4) = *(ushort *)(unaff_s7 + 0x78) >> 1;
  uVar1 = *(undefined2 *)(unaff_s1 + 6);
  *(undefined *)(unaff_s2 + 1) = unaff_s8;
  *(undefined2 *)(unaff_s2 + 2) = unaff_s0;
  *(undefined2 *)(unaff_s2 + 6) = uVar1;
  *(undefined2 *)(unaff_s2 + 10) = unaff_s6;
  return;
}



undefined4 FUN_0001124c(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  uint uVar4;
  uint extraout_a0_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_s2;
  undefined4 uVar9;
  int unaff_s5;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 in_stack_0000000c;
  
  iVar5 = FUN_0001124c();
  if ((iVar5 == 0) || (iVar5 = _L0(), iVar5 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x1f;
    if (unaff_s0 == 0) {
      return 0x1f;
    }
  }
  FUN_000110f0();
  if (extraout_a0 != 0) {
    (*pcRam00000000)(0x2c,pcRam00000000);
    _LVL352();
    *(short *)(extraout_a0 + 0x5e) = *(short *)(unaff_s1 + 6) + 1;
    *(undefined *)(extraout_a0 + 0x7b) = 3;
    *(undefined2 *)(extraout_a0 + 0x78) = in_stack_0000000c;
    uVar4 = (uint)*(ushort *)(unaff_s1 + 0x16);
    if (uVar4 == 0xffff) {
      FUN_00011146();
      uVar1 = *(ushort *)(unaff_s5 + 0x60);
      uVar4 = extraout_a0_00 >> 1 & 0xffff;
    }
    else {
      uVar1 = *(ushort *)(unaff_s1 + 0x14);
    }
    uVar8 = (uint)uVar1;
    uVar3 = (uint)*(ushort *)(unaff_s5 + 0x78);
    uVar7 = (uint)*(ushort *)(unaff_s5 + 0x5e) * 0x70000 >> 0x10;
    uVar11 = (*(ushort *)(unaff_s5 + 0x60) - 1) + uVar7;
    uVar12 = uVar11 & 0xffff;
    uVar6 = (uint)*(ushort *)(extraout_a0 + 0x78);
    if (uVar12 < uVar8) {
      iVar5 = (uVar8 - uVar12) * uVar3 + uVar4 * 2;
    }
    else {
      iVar5 = uVar6 - (int)((uVar12 - uVar8) * uVar3 + uVar4 * -2) % (int)uVar6;
    }
    uVar4 = iVar5 % (int)uVar6 & 0xffff;
    *(uint *)(extraout_a0 + 8) =
         uVar4 + ((uVar7 - 1) * uVar3 + *(int *)(unaff_s5 + 8) & 0x7ffffff) & 0x7ffffff;
    *(int *)(unaff_s5 + 4) = extraout_a0;
    uVar10 = (undefined2)(uVar11 * 0x10000 >> 0x10);
    *(undefined2 *)(unaff_s5 + 0x5c) = uVar10;
    *(undefined *)(unaff_s5 + 0x6d) = 1;
    _L0();
    iVar5 = (uint)*(ushort *)(unaff_s5 + 0x74) * 0x5c;
    *(undefined2 *)(iVar5 + 0x280080a6) = *(undefined2 *)(iVar5 + 0x280080a8);
    *(undefined2 *)(unaff_s2 + 8) = *(undefined2 *)(unaff_s1 + 8);
    *(ushort *)(unaff_s2 + 4) = *(ushort *)(extraout_a0 + 0x78) >> 1;
    uVar2 = *(undefined2 *)(unaff_s1 + 6);
    *(undefined *)(unaff_s2 + 1) = 1;
    *(short *)(unaff_s2 + 2) = (short)(uVar4 >> 1);
    *(undefined2 *)(unaff_s2 + 6) = uVar2;
    *(undefined2 *)(unaff_s2 + 10) = uVar10;
  }
  return uVar9;
}



undefined4 _L0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  uint uVar4;
  uint extraout_a0_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_s2;
  undefined4 uVar9;
  int unaff_s5;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 in_stack_0000000c;
  
  iVar5 = _L0();
  if (iVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x1f;
    if (unaff_s0 == 0) {
      return 0x1f;
    }
  }
  FUN_000110f0();
  if (extraout_a0 != 0) {
    (*pcRam00000000)(0x2c,pcRam00000000);
    _LVL352();
    *(short *)(extraout_a0 + 0x5e) = *(short *)(unaff_s1 + 6) + 1;
    *(undefined *)(extraout_a0 + 0x7b) = 3;
    *(undefined2 *)(extraout_a0 + 0x78) = in_stack_0000000c;
    uVar4 = (uint)*(ushort *)(unaff_s1 + 0x16);
    if (uVar4 == 0xffff) {
      FUN_00011146();
      uVar1 = *(ushort *)(unaff_s5 + 0x60);
      uVar4 = extraout_a0_00 >> 1 & 0xffff;
    }
    else {
      uVar1 = *(ushort *)(unaff_s1 + 0x14);
    }
    uVar8 = (uint)uVar1;
    uVar3 = (uint)*(ushort *)(unaff_s5 + 0x78);
    uVar7 = (uint)*(ushort *)(unaff_s5 + 0x5e) * 0x70000 >> 0x10;
    uVar11 = (*(ushort *)(unaff_s5 + 0x60) - 1) + uVar7;
    uVar12 = uVar11 & 0xffff;
    uVar6 = (uint)*(ushort *)(extraout_a0 + 0x78);
    if (uVar12 < uVar8) {
      iVar5 = (uVar8 - uVar12) * uVar3 + uVar4 * 2;
    }
    else {
      iVar5 = uVar6 - (int)((uVar12 - uVar8) * uVar3 + uVar4 * -2) % (int)uVar6;
    }
    uVar4 = iVar5 % (int)uVar6 & 0xffff;
    *(uint *)(extraout_a0 + 8) =
         uVar4 + ((uVar7 - 1) * uVar3 + *(int *)(unaff_s5 + 8) & 0x7ffffff) & 0x7ffffff;
    *(int *)(unaff_s5 + 4) = extraout_a0;
    uVar10 = (undefined2)(uVar11 * 0x10000 >> 0x10);
    *(undefined2 *)(unaff_s5 + 0x5c) = uVar10;
    *(undefined *)(unaff_s5 + 0x6d) = 1;
    _L0();
    iVar5 = (uint)*(ushort *)(unaff_s5 + 0x74) * 0x5c;
    *(undefined2 *)(iVar5 + 0x280080a6) = *(undefined2 *)(iVar5 + 0x280080a8);
    *(undefined2 *)(unaff_s2 + 8) = *(undefined2 *)(unaff_s1 + 8);
    *(ushort *)(unaff_s2 + 4) = *(ushort *)(extraout_a0 + 0x78) >> 1;
    uVar2 = *(undefined2 *)(unaff_s1 + 6);
    *(undefined *)(unaff_s2 + 1) = 1;
    *(short *)(unaff_s2 + 2) = (short)(uVar4 >> 1);
    *(undefined2 *)(unaff_s2 + 6) = uVar2;
    *(undefined2 *)(unaff_s2 + 10) = uVar10;
  }
  return uVar9;
}



// WARNING: Variable defined which should be unmapped: input_param
// DWARF DIE: 406f

uint8_t lld_con_param_rsp(uint16_t conhdl,ea_elt_tag *elt,llc_con_upd_req_ind *param)

{
  int iVar1;
  uint extraout_a0;
  ushort uStack52;
  ea_param_output set_param;
  ea_param_input input_param;
  
  FUN_0001130c();
  if (param->offset0 != 0xffff) {
    FUN_00011346();
  }
  iVar1 = _L0();
  if (iVar1 == 0) {
    param->pref_period = '\0';
    param->interval_min = uStack52 >> 1;
    param->interval_max = uStack52 >> 1;
    if (param->offset0 == 0xffff) {
      FUN_00011392();
      param->offset0 = (uint16_t)(extraout_a0 >> 1);
      param->ref_con_event_count = *(uint16_t *)&elt[2].timestamp;
    }
    param->offset1 = 0xffff;
    param->offset2 = 0xffff;
    param->offset3 = 0xffff;
    param->offset4 = 0xffff;
    param->offset5 = 0xffff;
  }
  else {
    iVar1 = 0x1f;
  }
  return (uint8_t)iVar1;
}



int FUN_0001130c(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint extraout_a0;
  ushort in_stack_0000000c;
  byte bStack00000024;
  undefined2 uStack00000024;
  byte bStack0000002c;
  
  FUN_0001130c();
  if (*(short *)(unaff_s0 + 0x16) == -1) {
    uStack00000024 = (undefined2)(*(uint *)(unaff_s1 + 8) % (uint)in_stack_0000000c);
  }
  else {
    iVar1 = FUN_00011346();
    uStack00000024 = (short)iVar1;
  }
  bStack0000002c = bStack00000024 & 1;
  iVar1 = _L0();
  if (iVar1 == 0) {
    *(undefined *)(unaff_s0 + 0x12) = 0;
    *(ushort *)(unaff_s0 + 0xe) = in_stack_0000000c >> 1;
    *(ushort *)(unaff_s0 + 0x10) = in_stack_0000000c >> 1;
    if (*(short *)(unaff_s0 + 0x16) == -1) {
      FUN_00011392();
      *(short *)(unaff_s0 + 0x16) = (short)(extraout_a0 >> 1);
      *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(unaff_s1 + 0x60);
    }
    *(undefined2 *)(unaff_s0 + 0x18) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x1a) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x1c) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x1e) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x20) = 0xffff;
  }
  else {
    iVar1 = 0x1f;
  }
  return iVar1;
}



int FUN_00011346(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint extraout_a0;
  ushort in_stack_0000000c;
  byte bStack00000024;
  undefined2 uStack00000024;
  byte bStack0000002c;
  
  iVar1 = FUN_00011346();
  bStack00000024 = (byte)iVar1;
  bStack0000002c = bStack00000024 & 1;
  uStack00000024 = (short)iVar1;
  iVar1 = _L0();
  if (iVar1 == 0) {
    *(undefined *)(unaff_s0 + 0x12) = 0;
    *(ushort *)(unaff_s0 + 0xe) = in_stack_0000000c >> 1;
    *(ushort *)(unaff_s0 + 0x10) = in_stack_0000000c >> 1;
    if (*(short *)(unaff_s0 + 0x16) == -1) {
      FUN_00011392();
      *(short *)(unaff_s0 + 0x16) = (short)(extraout_a0 >> 1);
      *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(unaff_s1 + 0x60);
    }
    *(undefined2 *)(unaff_s0 + 0x18) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x1a) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x1c) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x1e) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x20) = 0xffff;
  }
  else {
    iVar1 = 0x1f;
  }
  return iVar1;
}



int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint extraout_a0;
  ushort in_stack_0000000c;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    *(undefined *)(unaff_s0 + 0x12) = 0;
    *(ushort *)(unaff_s0 + 0xe) = in_stack_0000000c >> 1;
    *(ushort *)(unaff_s0 + 0x10) = in_stack_0000000c >> 1;
    if (*(short *)(unaff_s0 + 0x16) == -1) {
      FUN_00011392();
      *(short *)(unaff_s0 + 0x16) = (short)(extraout_a0 >> 1);
      *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(unaff_s1 + 0x60);
    }
    *(undefined2 *)(unaff_s0 + 0x18) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x1a) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x1c) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x1e) = 0xffff;
    *(undefined2 *)(unaff_s0 + 0x20) = 0xffff;
  }
  else {
    iVar1 = 0x1f;
  }
  return iVar1;
}



void FUN_00011392(void)

{
  int unaff_s0;
  int unaff_s1;
  uint extraout_a0;
  
  FUN_00011392();
  *(short *)(unaff_s0 + 0x16) = (short)(extraout_a0 >> 1);
  *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(unaff_s1 + 0x60);
  *(undefined2 *)(unaff_s0 + 0x18) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1a) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1c) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1e) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x20) = 0xffff;
  return;
}



// DWARF DIE: 3faa

void lld_con_param_req(uint16_t conhdl,ea_elt_tag *elt,llc_con_upd_req_ind *param)

{
  int extraout_a0;
  uint extraout_a0_00;
  ushort uVar1;
  ushort uStack52;
  ea_param_output set_param;
  ea_param_input input_param;
  
  uVar1 = param->con_intv_max << 1;
  FUN_00011446();
  _L0();
  if (extraout_a0 == 0) {
    uVar1 = uStack52;
  }
  param->interval_min = uVar1 >> 1;
  param->interval_max = uVar1 >> 1;
  FUN_00011488();
  param->offset0 = (uint16_t)(extraout_a0_00 >> 1);
  param->pref_period = '\0';
  param->ref_con_event_count = *(short *)&elt[2].timestamp + 2;
  param->offset1 = 0xffff;
  param->offset2 = 0xffff;
  param->offset3 = 0xffff;
  param->offset4 = 0xffff;
  param->offset5 = 0xffff;
  return;
}



void FUN_00011446(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  uint extraout_a0_00;
  uint uVar1;
  ushort in_stack_0000000c;
  ushort in_stack_0000001a;
  undefined2 uStack00000024;
  byte bStack0000002c;
  
  FUN_00011446();
  uVar1 = *(uint *)(unaff_s1 + 8) % (uint)in_stack_0000000c;
  uStack00000024 = (undefined2)uVar1;
  bStack0000002c = (byte)uVar1 & 1;
  _L0();
  if (extraout_a0 == 0) {
    in_stack_0000001a = in_stack_0000000c;
  }
  *(ushort *)(unaff_s0 + 0xe) = in_stack_0000001a >> 1;
  *(ushort *)(unaff_s0 + 0x10) = in_stack_0000001a >> 1;
  FUN_00011488();
  *(short *)(unaff_s0 + 0x16) = (short)(extraout_a0_00 >> 1);
  *(undefined *)(unaff_s0 + 0x12) = 0;
  *(short *)(unaff_s0 + 0x14) = *(short *)(unaff_s1 + 0x60) + 2;
  *(undefined2 *)(unaff_s0 + 0x18) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1a) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1c) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1e) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x20) = 0xffff;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  uint extraout_a0_00;
  ushort in_stack_0000000c;
  ushort in_stack_0000001a;
  
  _L0();
  if (extraout_a0 == 0) {
    in_stack_0000001a = in_stack_0000000c;
  }
  *(ushort *)(unaff_s0 + 0xe) = in_stack_0000001a >> 1;
  *(ushort *)(unaff_s0 + 0x10) = in_stack_0000001a >> 1;
  FUN_00011488();
  *(short *)(unaff_s0 + 0x16) = (short)(extraout_a0_00 >> 1);
  *(undefined *)(unaff_s0 + 0x12) = 0;
  *(short *)(unaff_s0 + 0x14) = *(short *)(unaff_s1 + 0x60) + 2;
  *(undefined2 *)(unaff_s0 + 0x18) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1a) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1c) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1e) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x20) = 0xffff;
  return;
}



void FUN_00011488(void)

{
  int unaff_s0;
  int unaff_s1;
  uint extraout_a0;
  
  FUN_00011488();
  *(short *)(unaff_s0 + 0x16) = (short)(extraout_a0 >> 1);
  *(undefined *)(unaff_s0 + 0x12) = 0;
  *(short *)(unaff_s0 + 0x14) = *(short *)(unaff_s1 + 0x60) + 2;
  *(undefined2 *)(unaff_s0 + 0x18) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1a) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1c) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x1e) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x20) = 0xffff;
  return;
}



// DWARF DIE: 3f66

void lld_con_stop(ea_elt_tag *elt)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3f17

uint8_t lld_get_mode(uint16_t conhdl)

{
  uint8_t uVar1;
  undefined2 in_register_0000202a;
  int iVar2;
  int iVar3;
  
  iVar2 = CONCAT22(in_register_0000202a,conhdl);
  iVar3 = _DAT_00000048;
  if ((iVar2 != 2) && (iVar3 = _DAT_00000054, iVar2 != 3)) {
    if (*(int *)(iVar2 * 4) == 0) {
      return '\b';
    }
    iVar3 = *(int *)(*(int *)(iVar2 * 4) + 0x10);
  }
  uVar1 = '\b';
  if (iVar3 != 0) {
    uVar1 = *(uint8_t *)(iVar3 + 0x7b);
  }
  return uVar1;
}



// DWARF DIE: 37e0

ea_elt_tag *
lld_move_to_slave(llc_create_con_req_ind *con_par,llm_pdu_con_req_rx *con_req_pdu,
                 ea_elt_tag *elt_adv,uint16_t conhdl,uint8_t rx_hdl)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ea_elt_tag *peVar4;
  undefined2 in_register_00002036;
  undefined3 in_register_00002039;
  ushort *puVar5;
  
  iVar1 = CONCAT22(in_register_00002036,conhdl) * 0x5c;
  *(undefined2 *)(iVar1 + 0x2800808e) = 3;
  puVar5 = (ushort *)(iVar1 + 0x28008092);
  puVar2 = (ushort *)(CONCAT22(in_register_00002036,conhdl) * 10 + 0x280082ca);
  *puVar2 = *puVar2 & 0x7fff | 0x8000;
  *(ushort *)(iVar1 + 0x2800809e) =
       (ushort)((*(ushort *)(CONCAT31(in_register_00002039,rx_hdl) * 0xe + 0x280083d2) >> 5 & 1) <<
               0xe) | (con_req_pdu->hop_sca & 0x1f) << 8 | 0x8000;
  *(undefined2 *)(iVar1 + 0x28008094) = *(undefined2 *)(con_req_pdu->aa).addr;
  *(undefined2 *)(iVar1 + 0x28008096) = *(undefined2 *)((con_req_pdu->aa).addr + 2);
  *(undefined2 *)(iVar1 + 0x28008098) = *(undefined2 *)(con_req_pdu->crcinit).crc;
  *(ushort *)(iVar1 + 0x2800809a) = (ushort)(con_req_pdu->crcinit).crc[2];
  *(ushort *)(iVar1 + 0x280080a0) = (ushort)DAT_0000002c;
  *puVar5 = (ushort)(((uint)*puVar5 << 0x14) >> 0x14) | 0x2000;
  *puVar5 = *puVar5 & 0xffe0 | conhdl & 0x1f;
  *(undefined2 *)(iVar1 + 0x280080aa) = *(undefined2 *)(con_req_pdu->chm).map;
  *(undefined2 *)(iVar1 + 0x280080ac) = *(undefined2 *)((con_req_pdu->chm).map + 2);
  iVar3 = _L0();
  *(ushort *)(iVar1 + 0x280080ae) = (ushort)(iVar3 << 8) | (ushort)(con_req_pdu->chm).map[4];
  *puVar5 = *puVar5 & 0xfeff;
  *puVar5 = *puVar5 & 0xfdff;
  *puVar5 = *puVar5 & 0xfbff;
  *(undefined2 *)(iVar1 + 0x2800809c) = 0;
  *(ushort *)(iVar1 + 0x280080e6) = *(ushort *)(iVar1 + 0x280080e6) & 0xff7f;
  *(undefined2 *)(iVar1 + 0x280080dc) = 0;
  *(undefined2 *)(iVar1 + 0x280080de) = 0;
  *(undefined2 *)(iVar1 + 0x280080e0) = 0;
  *(undefined2 *)(iVar1 + 0x280080e2) = 0;
  *(undefined2 *)(iVar1 + 0x280080e4) = 0;
  peVar4 = (ea_elt_tag *)_L0();
  _L0();
  FUN_00011724();
  *(undefined2 *)(iVar1 + 0x280080a6) = *(undefined2 *)(iVar1 + 0x280080a8);
  *(undefined2 *)(iVar1 + 0x280080b0) = 0;
  *(undefined2 *)(iVar1 + 0x280080b2) = 0;
  *(undefined2 *)(iVar1 + 0x280080cc) = 0;
  *(undefined2 *)(iVar1 + 0x280080ce) = 0;
  *(undefined2 *)(iVar1 + 0x280080d0) = 0;
  *(undefined2 *)(iVar1 + 0x280080d2) = 0;
  *(undefined2 *)(iVar1 + 0x280080d4) = 0;
  *(undefined2 *)(iVar1 + 0x280080d6) = 0;
  *(undefined2 *)(iVar1 + 0x280080d8) = 0;
  *(undefined2 *)(iVar1 + 0x280080a4) = 0;
  *puVar5 = *puVar5 & 0xf7ff;
  FUN_000117bc();
  return peVar4;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *unaff_s2;
  int unaff_s3;
  
  iVar1 = _L0();
  *(ushort *)(unaff_s1 + 0xae + unaff_s0) =
       (ushort)(iVar1 << 8) | (ushort)*(byte *)(unaff_s3 + 0x20);
  puVar3 = (ushort *)(unaff_s1 + 0xe6 + unaff_s0);
  *unaff_s2 = *unaff_s2 & 0xfeff;
  *unaff_s2 = *unaff_s2 & 0xfdff;
  *unaff_s2 = *unaff_s2 & 0xfbff;
  *(undefined2 *)(unaff_s1 + 0x9c + unaff_s0) = 0;
  *puVar3 = *puVar3 & 0xff7f;
  *(undefined2 *)(unaff_s1 + 0xdc + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xde + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xe0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xe2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xe4 + unaff_s0) = 0;
  uVar2 = _L0();
  _L0();
  FUN_00011724();
  *(undefined2 *)(unaff_s1 + 0xa6 + unaff_s0) = *(undefined2 *)(unaff_s1 + 0xa8 + unaff_s0);
  *(undefined2 *)(unaff_s1 + 0xb0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xb2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xcc + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xce + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd4 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd6 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd8 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xa4 + unaff_s0) = 0;
  *unaff_s2 = *unaff_s2 & 0xf7ff;
  FUN_000117bc();
  return uVar2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  ushort *unaff_s2;
  
  uVar1 = _L0();
  _L0();
  FUN_00011724();
  *(undefined2 *)(unaff_s1 + 0xa6 + unaff_s0) = *(undefined2 *)(unaff_s1 + 0xa8 + unaff_s0);
  *(undefined2 *)(unaff_s1 + 0xb0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xb2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xcc + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xce + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd4 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd6 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd8 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xa4 + unaff_s0) = 0;
  *unaff_s2 = *unaff_s2 & 0xf7ff;
  FUN_000117bc();
  return uVar1;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  ushort *unaff_s2;
  
  _L0();
  FUN_00011724();
  *(undefined2 *)(unaff_s1 + 0xa6 + unaff_s0) = *(undefined2 *)(unaff_s1 + 0xa8 + unaff_s0);
  *(undefined2 *)(unaff_s1 + 0xb0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xb2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xcc + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xce + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd4 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd6 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd8 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xa4 + unaff_s0) = 0;
  *unaff_s2 = *unaff_s2 & 0xf7ff;
  FUN_000117bc();
  return;
}



void FUN_00011724(void)

{
  int unaff_s0;
  int unaff_s1;
  ushort *unaff_s2;
  
  FUN_00011724();
  *(undefined2 *)(unaff_s1 + 0xa6 + unaff_s0) = *(undefined2 *)(unaff_s1 + 0xa8 + unaff_s0);
  *(undefined2 *)(unaff_s1 + 0xb0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xb2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xcc + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xce + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd0 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd2 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd4 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd6 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xd8 + unaff_s0) = 0;
  *(undefined2 *)(unaff_s1 + 0xa4 + unaff_s0) = 0;
  *unaff_s2 = *unaff_s2 & 0xf7ff;
  FUN_000117bc();
  return;
}



void FUN_000117bc(void)

{
  FUN_000117bc();
  return;
}



// DWARF DIE: 378c

void lld_ch_map_ind(ea_elt_tag *elt,uint16_t instant)

{
  byte bVar1;
  ushort uVar2;
  undefined2 in_register_0000202e;
  
  *(undefined *)((int)&elt[2].delay + 1) = 2;
  bVar1 = *(byte *)((int)&elt[2].ea_cb_cancel + 2);
  uVar2 = *(ushort *)&elt[2].timestamp;
  *(uint16_t *)&elt[2].linked_element = instant;
  *(byte *)((int)&elt[2].ea_cb_cancel + 2) = bVar1 | 1;
  if ((uint)uVar2 == (CONCAT22(in_register_0000202e,instant) - 1 & 0xffff)) {
    *(byte *)((int)&elt[2].ea_cb_cancel + 2) = bVar1 | 9;
    return;
  }
  if ((uint)uVar2 == CONCAT22(in_register_0000202e,instant)) {
    _LVL478();
    *(byte *)((int)&elt[2].ea_cb_cancel + 2) = *(byte *)((int)&elt[2].ea_cb_cancel + 2) | 8;
    return;
  }
  return;
}



void _LVL478(void)

{
  int unaff_s0;
  
  _LVL478();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 8;
  return;
}



// DWARF DIE: 3734

void lld_con_update_ind(ea_elt_tag *elt_old,llcp_con_upd_ind *param_pdu)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 370d

void lld_crypt_isr(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3351

ea_elt_tag * lld_test_mode_tx(em_desc_node *txdesc,uint8_t tx_freq,uint8_t tx_phy)

{
  int iVar1;
  ushort extraout_a0;
  ea_elt_tag *peVar2;
  undefined3 in_register_00002031;
  
  iVar1 = CONCAT31(in_register_00002031,tx_phy);
  peVar2 = (ea_elt_tag *)_L0();
  *(undefined *)((int)&peVar2[2].ea_cb_stop + 3) = 2;
  _DAT_280000e0 = _DAT_280000e0 & 0xfffff7ff | 0x800;
  _DAT_28008184 = 0;
  _DAT_28008186 = 0;
  _DAT_28008188 = 0;
  _DAT_28008146 = 0x1c;
  _DAT_2800814c = 0x4129;
  _DAT_2800814e = 0x7176;
  _DAT_28008158 = _DAT_28008158 & 0xff00 | 0xf;
  _DAT_28008148 = 0;
  _DAT_2800819e &= 0xff7f;
  _DAT_2800814a = _DAT_2800814a & 0xffe0 | 2;
  _DAT_28008194 = 0;
  _DAT_28008196 = 0;
  _DAT_28008198 = 0;
  _DAT_2800819a = 0;
  _DAT_2800819c = 0;
  _L0();
  _DAT_28008156 = extraout_a0 | _DAT_28008156 & 0xffc0;
  if (iVar1 != 0) {
    if (iVar1 == 4) {
      iVar1 = 3;
      _DAT_280081a0 = _DAT_280081a0 & 0xffcf | 0x10;
    }
    else {
      if (iVar1 == 3) {
        _DAT_280081a0 &= 0xffcf;
      }
    }
    _DAT_280081a0 = (short)iVar1 - 1U & 0xff | _DAT_280081a0 & 0xfffc;
  }
  FUN_0001196c();
  FUN_00011978();
  FUN_00011984();
  return peVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(void)

{
  int unaff_s1;
  ushort extraout_a0;
  int iVar1;
  
  iVar1 = _L0();
  *(undefined *)(iVar1 + 0x7b) = 2;
  _DAT_280000e0 = _DAT_280000e0 & 0xfffff7ff | 0x800;
  _DAT_28008184 = 0;
  _DAT_28008186 = 0;
  _DAT_28008188 = 0;
  _DAT_28008146 = 0x1c;
  _DAT_2800814c = 0x4129;
  _DAT_2800814e = 0x7176;
  _DAT_28008158 = _DAT_28008158 & 0xff00 | 0xf;
  _DAT_28008148 = 0;
  _DAT_2800819e &= 0xff7f;
  _DAT_2800814a = _DAT_2800814a & 0xffe0 | 2;
  _DAT_28008194 = 0;
  _DAT_28008196 = 0;
  _DAT_28008198 = 0;
  _DAT_2800819a = 0;
  _DAT_2800819c = 0;
  _L0();
  _DAT_28008156 = extraout_a0 | _DAT_28008156 & 0xffc0;
  if (unaff_s1 != 0) {
    if (unaff_s1 == 4) {
      unaff_s1 = 3;
      _DAT_280081a0 = _DAT_280081a0 & 0xffcf | 0x10;
    }
    else {
      if (unaff_s1 == 3) {
        _DAT_280081a0 &= 0xffcf;
      }
    }
    _DAT_280081a0 = (short)unaff_s1 - 1U & 0xff | _DAT_280081a0 & 0xfffc;
  }
  FUN_0001196c();
  FUN_00011978();
  FUN_00011984();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  ushort extraout_a0;
  
  _L0();
  *(ushort *)(unaff_s0 + 0x156) = extraout_a0 | *(ushort *)(unaff_s0 + 0x156) & 0xffc0;
  if (unaff_s1 != 0) {
    if (unaff_s1 == 4) {
      unaff_s1 = 3;
      *(ushort *)(unaff_s0 + 0x1a0) = *(ushort *)(unaff_s0 + 0x1a0) & 0xffcf | 0x10;
    }
    else {
      if (unaff_s1 == 3) {
        *(ushort *)(unaff_s0 + 0x1a0) = *(ushort *)(unaff_s0 + 0x1a0) & 0xffcf;
      }
    }
    _DAT_280081a0 = (short)unaff_s1 - 1U & 0xff | _DAT_280081a0 & 0xfffc;
  }
  FUN_0001196c();
  FUN_00011978();
  FUN_00011984();
  return;
}



void FUN_0001196c(void)

{
  FUN_0001196c();
  FUN_00011978();
  FUN_00011984();
  return;
}



void FUN_00011978(void)

{
  FUN_00011978();
  FUN_00011984();
  return;
}



void FUN_00011984(void)

{
  FUN_00011984();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2f46

ea_elt_tag * lld_test_mode_rx(uint8_t rx_freq)

{
  ushort extraout_a0;
  ea_elt_tag *peVar1;
  
  peVar1 = (ea_elt_tag *)_L0();
  *(undefined *)((int)&peVar1[2].ea_cb_stop + 3) = 2;
  _DAT_280000e0 = _DAT_280000e0 & 0xf7ffffff | 0x8000000;
  _DAT_2800818a = 0;
  _DAT_2800818c = 0;
  _DAT_2800818e = 0;
  _DAT_28008146 = 0x1d;
  _DAT_2800815a = 0x804b;
  _DAT_280001ac = _DAT_280001ac & 0xffffffc0 | 0xf;
  bRam00000000 = (byte)(_DAT_28000078 >> 0x1c);
  _DAT_28000078 = _DAT_28000078 & 0xfffffff | 0xf0000000;
  _DAT_40002850 = _DAT_40002850 & 0xcfffffff | 0x10000000;
  _DAT_28000000 &= 0xffff7fff;
  _DAT_2800814c = 0x4129;
  _DAT_2800814e = 0x7176;
  _DAT_28008148 = 0;
  _DAT_28008168 = 0xff;
  _DAT_2800816a = 0;
  _DAT_2800819e &= 0xff7f;
  _DAT_2800814a = _DAT_2800814a & 0xffe0 | 2;
  _DAT_28008194 = 0;
  _DAT_28008196 = 0;
  _DAT_28008198 = 0;
  _DAT_2800819a = 0;
  _DAT_2800819c = 0;
  _L0();
  _DAT_28008156 = extraout_a0 | _DAT_28008156 & 0xffc0;
  (*_DAT_00000004)(0,_DAT_00000004);
  FUN_00011b04();
  return peVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(void)

{
  ushort extraout_a0;
  int iVar1;
  
  iVar1 = _L0();
  *(undefined *)(iVar1 + 0x7b) = 2;
  _DAT_280000e0 = _DAT_280000e0 & 0xf7ffffff | 0x8000000;
  _DAT_2800818a = 0;
  _DAT_2800818c = 0;
  _DAT_2800818e = 0;
  _DAT_28008146 = 0x1d;
  _DAT_2800815a = 0x804b;
  _DAT_280001ac = _DAT_280001ac & 0xffffffc0 | 0xf;
  bRam00000000 = (byte)(_DAT_28000078 >> 0x1c);
  _DAT_28000078 = _DAT_28000078 & 0xfffffff | 0xf0000000;
  _DAT_40002850 = _DAT_40002850 & 0xcfffffff | 0x10000000;
  _DAT_28000000 &= 0xffff7fff;
  _DAT_2800814c = 0x4129;
  _DAT_2800814e = 0x7176;
  _DAT_28008148 = 0;
  _DAT_28008168 = 0xff;
  _DAT_2800816a = 0;
  _DAT_2800819e &= 0xff7f;
  _DAT_2800814a = _DAT_2800814a & 0xffe0 | 2;
  _DAT_28008194 = 0;
  _DAT_28008196 = 0;
  _DAT_28008198 = 0;
  _DAT_2800819a = 0;
  _DAT_2800819c = 0;
  _L0();
  _DAT_28008156 = extraout_a0 | _DAT_28008156 & 0xffc0;
  (*_DAT_00000004)(0,_DAT_00000004);
  FUN_00011b04();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  ushort extraout_a0;
  
  _L0();
  *(ushort *)(unaff_s0 + 0x156) = extraout_a0 | *(ushort *)(unaff_s0 + 0x156) & 0xffc0;
  (*_DAT_00000004)(0,_DAT_00000004);
  FUN_00011b04();
  return;
}



void FUN_00011b04(void)

{
  FUN_00011b04();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2b86

ea_elt_tag * lld_enh_test_mode_rx(uint8_t rx_freq,uint8_t rx_phy,uint8_t modul_index)

{
  ushort extraout_a0;
  ea_elt_tag *peVar1;
  
  peVar1 = (ea_elt_tag *)_L0();
  *(undefined *)((int)&peVar1[2].ea_cb_stop + 3) = 2;
  _DAT_280000e0 = _DAT_280000e0 & 0xf7ffffff | 0x8000000;
  _DAT_2800818a = 0;
  _DAT_2800818c = 0;
  _DAT_2800818e = 0;
  _DAT_28008146 = 0x1d;
  _DAT_2800815a = 0x804b;
  _DAT_28000000 &= 0xffff7fff;
  _DAT_2800814c = 0x4129;
  _DAT_2800814e = 0x7176;
  _DAT_28008148 = 0;
  _DAT_28008168 = 0xff;
  _DAT_2800816a = 0;
  _DAT_2800819e &= 0xff7f;
  _DAT_2800814a = _DAT_2800814a & 0xffe0 | 2;
  _DAT_28008194 = 0;
  _DAT_28008196 = 0;
  _DAT_28008198 = 0;
  _DAT_2800819a = 0;
  _DAT_2800819c = 0;
  _L0();
  _DAT_28008156 = extraout_a0 | _DAT_28008156 & 0xffc0;
  _DAT_40001890 = _DAT_40001890 & 0xffffff00 | 0x84;
  _DAT_280081a0 = (ushort)((rx_phy - 1 & 0xff) << 8) | _DAT_280081a0 & 0xfcff;
  (*_DAT_00000004)(0,_DAT_00000004);
  FUN_00011c48();
  return peVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(void)

{
  int unaff_s1;
  ushort extraout_a0;
  int iVar1;
  
  iVar1 = _L0();
  *(undefined *)(iVar1 + 0x7b) = 2;
  _DAT_280000e0 = _DAT_280000e0 & 0xf7ffffff | 0x8000000;
  _DAT_2800818a = 0;
  _DAT_2800818c = 0;
  _DAT_2800818e = 0;
  _DAT_28008146 = 0x1d;
  _DAT_2800815a = 0x804b;
  _DAT_28000000 &= 0xffff7fff;
  _DAT_2800814c = 0x4129;
  _DAT_2800814e = 0x7176;
  _DAT_28008148 = 0;
  _DAT_28008168 = 0xff;
  _DAT_2800816a = 0;
  _DAT_2800819e &= 0xff7f;
  _DAT_2800814a = _DAT_2800814a & 0xffe0 | 2;
  _DAT_28008194 = 0;
  _DAT_28008196 = 0;
  _DAT_28008198 = 0;
  _DAT_2800819a = 0;
  _DAT_2800819c = 0;
  _L0();
  _DAT_28008156 = extraout_a0 | _DAT_28008156 & 0xffc0;
  _DAT_40001890 = _DAT_40001890 & 0xffffff00 | 0x84;
  _DAT_280081a0 = (ushort)((unaff_s1 - 1U & 0xff) << 8) | _DAT_280081a0 & 0xfcff;
  (*_DAT_00000004)(0,_DAT_00000004);
  FUN_00011c48();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  ushort unaff_s1;
  ushort extraout_a0;
  
  _L0();
  *(ushort *)(unaff_s0 + 0x156) = extraout_a0 | *(ushort *)(unaff_s0 + 0x156) & 0xffc0;
  _DAT_40001890 = _DAT_40001890 & 0xffffff00 | 0x84;
  *(ushort *)(unaff_s0 + 0x1a0) = unaff_s1 | *(ushort *)(unaff_s0 + 0x1a0) & 0xfcff;
  (*_DAT_00000004)(0,_DAT_00000004);
  FUN_00011c48();
  return;
}



void FUN_00011c48(void)

{
  FUN_00011c48();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2b03

void lld_test_stop(ea_elt_tag *elt)

{
  _DAT_28000000 |= 0x4000000;
  (*_DAT_00000004)(1,_DAT_00000004);
  _DAT_280000e0 = 0;
  return;
}


