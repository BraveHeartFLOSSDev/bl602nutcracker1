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
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef ushort uint16_t;

struct co_list_hdr { // DWARF DIE: 263
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 7da
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: e9d
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: e41
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 284
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: edf
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

struct llc_ch_asses_tag { // DWARF DIE: 2b87
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict16d4_for___value anon_union.conflict16d4_for___value, *Panon_union.conflict16d4_for___value;

typedef uint wint_t;

union anon_union.conflict16d4_for___value { // DWARF DIE: 16d4
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 1706
    int __count;
    union anon_union.conflict16d4_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflict16d4 anon_union.conflict16d4, *Panon_union.conflict16d4;

union anon_union.conflict16d4 { // DWARF DIE: 16d4
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 248d
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 24b8
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

struct bd_addr { // DWARF DIE: 475
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 2318
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

struct ke_msg { // DWARF DIE: f9f
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 2553
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 23ef
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

struct ea_elt_tag { // DWARF DIE: 21c7
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

struct le_chnl_map { // DWARF DIE: 4b7
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 2587
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 448
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 2458
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 25f8
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

typedef enum anon_enum_8.conflict76 {
    ADDR_END=4,
    ADDR_MASK=1,
    ADDR_PUBLIC=0,
    ADDR_RAND=1,
    ADDR_RPA_MASK=2,
    ADDR_RPA_OR_PUBLIC=2,
    ADDR_RPA_OR_RAND=3,
    INIT_FILT_END=2,
    INIT_FILT_IGNORE_WLST=0,
    INIT_FILT_USE_WLST=1,
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0,
    ROLE_END=2,
    ROLE_MASTER=0,
    ROLE_SLAVE=1
} anon_enum_8.conflict76;

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

typedef struct llc_create_con_req_ind llc_create_con_req_ind, *Pllc_create_con_req_ind;

struct llc_create_con_req_ind { // DWARF DIE: 14ef
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

struct llc_con_upd_req_ind { // DWARF DIE: 157c
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

typedef struct hci_nb_cmp_pkts_evt hci_nb_cmp_pkts_evt, *Phci_nb_cmp_pkts_evt;

struct hci_nb_cmp_pkts_evt { // DWARF DIE: 8b6
    uint8_t nb_of_hdl;
    undefined field_0x1;
    uint16_t conhdl[1];
    uint16_t nb_comp_pkt[1];
};

typedef struct hci_rd_rem_ver_info_cmp_evt hci_rd_rem_ver_info_cmp_evt, *Phci_rd_rem_ver_info_cmp_evt;

struct hci_rd_rem_ver_info_cmp_evt { // DWARF DIE: 970
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
    uint8_t vers;
    undefined field_0x5;
    uint16_t compid;
    uint16_t subvers;
};

typedef struct hci_le_con_update_cmp_evt hci_le_con_update_cmp_evt, *Phci_le_con_update_cmp_evt;

struct hci_le_con_update_cmp_evt { // DWARF DIE: 9d1
    uint8_t subcode;
    uint8_t status;
    uint16_t conhdl;
    uint16_t con_interval;
    uint16_t con_latency;
    uint16_t sup_to;
};

typedef struct hci_cmd_stat_event hci_cmd_stat_event, *Phci_cmd_stat_event;

struct hci_cmd_stat_event { // DWARF DIE: 899
    uint8_t status;
};

typedef struct hci_le_ltk_request_evt hci_le_ltk_request_evt, *Phci_le_ltk_request_evt;

typedef struct rand_nb rand_nb, *Prand_nb;

struct rand_nb { // DWARF DIE: 511
    uint8_t nb[8];
};

struct hci_le_ltk_request_evt { // DWARF DIE: bcd
    uint8_t subcode;
    undefined field_0x1;
    uint16_t conhdl;
    struct rand_nb rand;
    uint16_t ediv;
};

typedef struct hci_disc_cmp_evt hci_disc_cmp_evt, *Phci_disc_cmp_evt;

struct hci_disc_cmp_evt { // DWARF DIE: 835
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
    uint8_t reason;
    undefined field_0x5;
};

typedef struct hci_le_con_cmp_evt hci_le_con_cmp_evt, *Phci_le_con_cmp_evt;

struct hci_le_con_cmp_evt { // DWARF DIE: a34
    uint8_t subcode;
    uint8_t status;
    uint16_t conhdl;
    uint8_t role;
    uint8_t peer_addr_type;
    struct bd_addr peer_addr;
    uint16_t con_interval;
    uint16_t con_latency;
    uint16_t sup_to;
    uint8_t clk_accuracy;
    undefined field_0x13;
};

typedef struct hci_enc_change_evt hci_enc_change_evt, *Phci_enc_change_evt;

struct hci_enc_change_evt { // DWARF DIE: 8ef
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
    uint8_t enc_stat;
    undefined field_0x5;
};

typedef struct hci_le_rd_rem_used_feats_cmd_cmp_evt hci_le_rd_rem_used_feats_cmd_cmp_evt, *Phci_le_rd_rem_used_feats_cmd_cmp_evt;

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 52d
    uint8_t feats[8];
};

struct hci_le_rd_rem_used_feats_cmd_cmp_evt { // DWARF DIE: acf
    uint8_t subcode;
    uint8_t status;
    uint16_t conhdl;
    struct le_features feats_used;
};

typedef struct hci_basic_conhdl_cmd_cmp_evt hci_basic_conhdl_cmd_cmp_evt, *Phci_basic_conhdl_cmd_cmp_evt;

struct hci_basic_conhdl_cmd_cmp_evt { // DWARF DIE: 86e
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
};

typedef struct hci_le_ch_sel_algo_evt hci_le_ch_sel_algo_evt, *Phci_le_ch_sel_algo_evt;

struct hci_le_ch_sel_algo_evt { // DWARF DIE: c14
    uint8_t subcode;
    undefined field_0x1;
    uint16_t conhdl;
    uint8_t chSel;
    undefined field_0x5;
};

typedef struct hci_flush_occurred_evt hci_flush_occurred_evt, *Phci_flush_occurred_evt;

struct hci_flush_occurred_evt { // DWARF DIE: 953
    uint16_t conhdl;
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

typedef struct hci_enc_key_ref_cmp_evt hci_enc_key_ref_cmp_evt, *Phci_enc_key_ref_cmp_evt;

struct hci_enc_key_ref_cmp_evt { // DWARF DIE: 928
    uint8_t status;
    undefined field_0x1;
    uint16_t conhdl;
};

typedef struct hci_le_enh_con_cmp_evt hci_le_enh_con_cmp_evt, *Phci_le_enh_con_cmp_evt;

struct hci_le_enh_con_cmp_evt { // DWARF DIE: b16
    uint8_t subcode;
    uint8_t status;
    uint16_t conhdl;
    uint8_t role;
    uint8_t peer_addr_type;
    struct bd_addr peer_addr;
    struct bd_addr loc_rslv_priv_addr;
    struct bd_addr peer_rslv_priv_addr;
    uint16_t con_interval;
    uint16_t con_latency;
    uint16_t sup_to;
    uint8_t clk_accuracy;
    undefined field_0x1f;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 1ece
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

struct rwip_rf_api { // DWARF DIE: 1fc8
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

struct rwip_prio { // DWARF DIE: 214c
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 102a
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

struct ke_state_handler { // DWARF DIE: 1056
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct ke_task_desc ke_task_desc, *Pke_task_desc;

struct ke_task_desc { // DWARF DIE: 1089
    struct ke_state_handler * state_handler;
    struct ke_state_handler * default_handler;
    ke_state_t * state;
    uint16_t state_max;
    uint16_t idx_max;
};

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 4e4
    uint8_t ltk[16];
};

typedef struct init_vect init_vect, *Pinit_vect;

struct init_vect { // DWARF DIE: 5f4
    uint8_t iv[4];
};

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: 5d7
    uint8_t skd[16];
};

typedef struct sess_k_div_x sess_k_div_x, *Psess_k_div_x;

struct sess_k_div_x { // DWARF DIE: 5ba
    uint8_t skdiv[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 598
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

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 54f
    uint8_t cmds[64];
};

typedef struct lld_evt_tag lld_evt_tag, *Plld_evt_tag;

typedef struct lld_evt_anchor lld_evt_anchor, *Plld_evt_anchor;

typedef struct ea_interval_tag ea_interval_tag, *Pea_interval_tag;

typedef union lld_evt_info lld_evt_info, *Plld_evt_info;

typedef struct lld_non_conn lld_non_conn, *Plld_non_conn;

typedef struct lld_conn lld_conn, *Plld_conn;

struct lld_non_conn { // DWARF DIE: 2898
    uint32_t window;
    uint32_t anchor;
    uint32_t end_ts;
    _Bool initiate;
    _Bool connect_req_sent;
    undefined field_0xe;
    undefined field_0xf;
};

struct lld_conn { // DWARF DIE: 28e8
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

union lld_evt_info { // DWARF DIE: 29d7
    struct lld_non_conn non_conn;
    struct lld_conn conn;
};

struct lld_evt_anchor { // DWARF DIE: 2863
    uint32_t basetime_cnt;
    uint16_t finetime_cnt;
    uint16_t evt_cnt;
};

struct lld_evt_tag { // DWARF DIE: 2a00
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

struct ea_interval_tag { // DWARF DIE: 22af
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

struct lld_evt_env_tag { // DWARF DIE: 2afb
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

typedef struct llcp_enc_req llcp_enc_req, *Pllcp_enc_req;

struct llcp_enc_req { // DWARF DIE: 10e9
    uint8_t opcode;
    struct rand_nb rand;
    uint8_t ediv[2];
    struct sess_k_div_x skdm;
    struct init_vect ivm;
};

typedef struct anon_struct.conflict1e52 anon_struct.conflict1e52, *Panon_struct.conflict1e52;

struct anon_struct.conflict1e52 { // DWARF DIE: 1e52
    uchar * _nextf[30];
    uint _nmalloc[30];
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict1e99_for__new anon_union.conflict1e99_for__new, *Panon_union.conflict1e99_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict1d0d anon_struct.conflict1d0d, *Panon_struct.conflict1d0d;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: 17ca
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

struct _rand48 { // DWARF DIE: 1cc4
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict1d0d { // DWARF DIE: 1d0d
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

union anon_union.conflict1e99_for__new { // DWARF DIE: 1e99
    struct anon_struct.conflict1d0d _reent;
    struct anon_struct.conflict1e52 _unused;
};

struct _on_exit_args { // DWARF DIE: 184d
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 18a2
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 175a
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 1c7f
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 18fb
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 1929
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

struct _reent { // DWARF DIE: 1a95
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
    union anon_union.conflict1e99_for__new _new;
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

typedef union anon_union.conflict1e99 anon_union.conflict1e99, *Panon_union.conflict1e99;

union anon_union.conflict1e99 { // DWARF DIE: 1e99
    struct anon_struct.conflict1d0d _reent;
    struct anon_struct.conflict1e52 _unused;
};

typedef int32_t BaseType_t;

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct encrypt { // DWARF DIE: 2ce0
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct rem_version { // DWARF DIE: 2cab
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct data_len_ext_tag { // DWARF DIE: 2d15
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

struct llc_env_tag { // DWARF DIE: 2da5
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

typedef enum llc_dle_flag {
    LLC_DLE_EVT_SENT_LSB=1,
    LLC_DLE_EVT_SENT_MASK=2,
    LLC_DLE_REQ_RCVD_LSB=0,
    LLC_DLE_REQ_RCVD_MASK=1
} llc_dle_flag;

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




// DWARF DIE: 443c

void llc_init(void)

{
  _L0();
  FUN_0001001c();
  FUN_0001002c();
                    // WARNING: Could not recover jumptable at 0x0001004c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*pcRam00000000)(0,0,8);
  return;
}



void _L0(void)

{
  _L0();
  FUN_0001001c();
  FUN_0001002c();
                    // WARNING: Could not recover jumptable at 0x0001004c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*pcRam00000000)(0,0,8);
  return;
}



void FUN_0001001c(void)

{
  FUN_0001001c();
  FUN_0001002c();
                    // WARNING: Could not recover jumptable at 0x0001004c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*pcRam00000000)(0,0,8);
  return;
}



void FUN_0001002c(void)

{
  FUN_0001002c();
                    // WARNING: Could not recover jumptable at 0x0001004c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*pcRam00000000)(0,0,8);
  return;
}



// DWARF DIE: 4024

void llc_stop(uint16_t conhdl)

{
  undefined2 in_register_0000202a;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  _L0();
  piVar3 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  if (*piVar3 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    iVar1 = *(int *)(*piVar3 + iVar2 * 4);
    if (iVar1 != 0) {
      FUN_000100a0(iVar1 + -0xc);
    }
    iVar2 += 1;
  } while (iVar2 != 4);
  FUN_000100b2();
  *piVar3 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_s3;
  
  _L0();
  piVar2 = (int *)(unaff_s0 + unaff_s3 * 4);
  if (*piVar2 == 0) {
    return;
  }
  iVar3 = 0;
  do {
    iVar1 = *(int *)(*piVar2 + iVar3 * 4);
    if (iVar1 != 0) {
      FUN_000100a0(iVar1 + -0xc);
    }
    iVar3 += 1;
  } while (iVar3 != 4);
  FUN_000100b2();
  *(undefined4 *)(unaff_s0 + unaff_s3 * 4) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100a0(int param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  
  do {
    FUN_000100a0(param_1);
    do {
      unaff_s2 += 1;
      if (unaff_s2 == unaff_s5) {
        FUN_000100b2();
        *(undefined4 *)(unaff_s0 + unaff_s4) = 0;
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar1 = *(int *)(*unaff_s1 + unaff_s2 * 4);
    } while (iVar1 == 0);
    param_1 = iVar1 + -0xc;
  } while( true );
}



void FUN_000100b2(void)

{
  undefined4 *unaff_s0;
  
  FUN_000100b2();
  *unaff_s0 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 43cb

void llc_reset(void)

{
  int extraout_a0;
  int extraout_a0_00;
  
  _L0();
  if (extraout_a0 != 0x7f) {
    FUN_00010102();
  }
  FUN_0001010e();
  if (extraout_a0_00 == 0x7f) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int extraout_a0;
  int extraout_a0_00;
  
  _L0();
  if (extraout_a0 != 0x7f) {
    FUN_00010102();
  }
  FUN_0001010e();
  if (extraout_a0_00 == 0x7f) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010102(void)

{
  int extraout_a0;
  
  FUN_00010102();
  FUN_0001010e();
  if (extraout_a0 == 0x7f) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001010e(void)

{
  int extraout_a0;
  
  FUN_0001010e();
  if (extraout_a0 == 0x7f) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 3f83

void llc_discon_event_complete_send
               (ke_task_id_t src_id,uint8_t status,uint8_t conhdl,uint8_t reason)

{
  uint8_t *extraout_a0;
  undefined3 in_register_00002031;
  
  _L0();
  *extraout_a0 = status;
  extraout_a0[4] = reason;
  *(short *)(extraout_a0 + 2) = (short)CONCAT31(in_register_00002031,conhdl);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 unaff_s0;
  undefined unaff_s1;
  undefined *extraout_a0;
  undefined unaff_s2;
  
  _L0();
  *extraout_a0 = unaff_s2;
  extraout_a0[4] = unaff_s1;
  *(undefined2 *)(extraout_a0 + 2) = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3b9e

void llc_le_con_cmp_evt_send(uint8_t status,uint16_t conhdl,llc_create_con_req_ind *param)

{
  uint8_t uVar1;
  undefined3 in_register_00002029;
  int extraout_a0;
  int extraout_a0_00;
  undefined *extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  undefined *extraout_a0_04;
  int extraout_a0_05;
  bd_addr *pbVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  code *pcVar6;
  undefined *puVar7;
  
  iVar4 = CONCAT31(in_register_00002029,status);
  _L0();
  if ((extraout_a0 == 0) && (FUN_00010284(), extraout_a0_03 == 0)) {
    return;
  }
  FUN_00010198();
  if (extraout_a0_00 != 0) {
    FUN_0001031a();
    *extraout_a0_04 = 10;
    extraout_a0_04[1] = status;
    *(uint16_t *)(extraout_a0_04 + 2) = conhdl;
    if (iVar4 != 0) {
      if (iVar4 != 0x3c) goto _L0;
      extraout_a0_04[4] = 1;
      uVar1 = param->peer_addr_type;
      *(undefined2 *)(extraout_a0_04 + 2) = 0;
      extraout_a0_04[5] = uVar1;
      pcVar6 = pcRam00000000;
      *(undefined2 *)(extraout_a0_04 + 0x18) = 0;
      *(undefined2 *)(extraout_a0_04 + 0x1a) = 0;
      *(undefined2 *)(extraout_a0_04 + 0x1c) = 0;
      (*pcVar6)(extraout_a0_04 + 6,&param->peer_addr,6,pcVar6);
      (*pcRam00000000)(extraout_a0_04 + 0x12,0,6,pcRam00000000);
      pbVar2 = (bd_addr *)0x0;
      puVar7 = extraout_a0_04 + 0xc;
      pcVar6 = pcRam00000000;
      goto _L0;
    }
    FUN_00010338();
    extraout_a0_04[4] = extraout_a0_05 != 3;
    uVar3 = (uint)param->ral_ptr;
    puVar7 = extraout_a0_04 + 0xc;
    if (uVar3 == 0) {
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
      puVar7 = extraout_a0_04 + 0x12;
_L0:
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
    }
    else {
      puVar5 = (ushort *)(((uVar3 - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e);
      if (((*puVar5 >> 1 & 1) == 0) || ((param->filter_policy != '\0' && ((*puVar5 >> 3 & 1) == 0)))
         ) {
        iVar4 = 0;
      }
      else {
        iVar4 = (uVar3 + 0x12 & 0xffff) + 0x28008000;
      }
      (*pcRam00000000)(extraout_a0_04 + 0x12,iVar4,6,pcRam00000000);
      if (((*puVar5 >> 5 & 1) == 0) ||
         ((extraout_a0_04[4] == '\x01' && ((_DAT_28008154 >> 2 & 1) == 0)))) goto _L0;
      (*pcRam00000000)(puVar7,(param->ral_ptr + 0x2e & 0xffff) + 0x28008000,6,pcRam00000000);
    }
    extraout_a0_04[5] = param->peer_addr_type;
    (*pcRam00000000)(extraout_a0_04 + 6,&param->peer_addr,6,pcRam00000000);
    *(uint16_t *)(extraout_a0_04 + 0x18) = param->con_int;
    *(uint16_t *)(extraout_a0_04 + 0x1a) = param->con_lat;
    *(uint16_t *)(extraout_a0_04 + 0x1c) = param->sup_to;
    if (extraout_a0_04[4] == '\0') {
      extraout_a0_04[0x1e] = 0;
    }
    else {
      extraout_a0_04[0x1e] = param->sleep_clk_acc;
    }
    goto _L0;
  }
  FUN_000101b0();
  *extraout_a0_01 = 1;
  extraout_a0_01[1] = status;
  *(uint16_t *)(extraout_a0_01 + 2) = conhdl;
  if (iVar4 != 0) {
    if (iVar4 != 0x3c) goto _L0;
    extraout_a0_01[4] = 1;
    uVar1 = param->peer_addr_type;
    *(undefined2 *)(extraout_a0_01 + 2) = 0;
    *(undefined2 *)(extraout_a0_01 + 0xc) = 0;
    extraout_a0_01[5] = uVar1;
    pcVar6 = pcRam00000000;
    *(undefined2 *)(extraout_a0_01 + 0xe) = 0;
    *(undefined2 *)(extraout_a0_01 + 0x10) = 0;
    pbVar2 = &param->peer_addr;
    puVar7 = extraout_a0_01 + 6;
_L0:
    (*pcVar6)(puVar7,pbVar2,6,pcVar6);
    goto _L0;
  }
  FUN_000101ce();
  extraout_a0_01[4] = extraout_a0_02 != 3;
  puVar7 = extraout_a0_01 + 6;
  if ((param->ral_ptr == 0) ||
     (puVar5 = (ushort *)(((param->ral_ptr - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e),
     (*puVar5 >> 1 & 1) == 0)) {
_L0:
    extraout_a0_01[5] = param->peer_addr_type & 1;
    (*pcRam00000000)(puVar7,&param->peer_addr,6,pcRam00000000);
  }
  else {
    if ((param->filter_policy != '\0') && ((*puVar5 >> 3 & 1) == 0)) {
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
      goto _L0;
    }
    extraout_a0_01[5] = 1;
    (*pcRam00000000)(puVar7,(param->ral_ptr + 0x12 & 0xffff) + 0x28008000,6,pcRam00000000);
  }
  *(uint16_t *)(extraout_a0_01 + 0xc) = param->con_int;
  *(uint16_t *)(extraout_a0_01 + 0xe) = param->con_lat;
  *(uint16_t *)(extraout_a0_01 + 0x10) = param->sup_to;
  if (extraout_a0_01[4] == '\0') {
    extraout_a0_01[0x12] = 0;
  }
  else {
    extraout_a0_01[0x12] = param->sleep_clk_acc;
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  undefined uVar1;
  undefined2 *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  undefined *extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  undefined *extraout_a0_04;
  int extraout_a0_05;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  code *pcVar6;
  int unaff_s2;
  undefined *puVar7;
  undefined2 unaff_s3;
  
  _L0();
  if ((extraout_a0 == 0) && (FUN_00010284(), extraout_a0_03 == 0)) {
    return;
  }
  FUN_00010198();
  if (extraout_a0_00 != 0) {
    FUN_0001031a();
    *extraout_a0_04 = 10;
    extraout_a0_04[1] = (char)unaff_s2;
    *(undefined2 *)(extraout_a0_04 + 2) = unaff_s3;
    if (unaff_s2 != 0) {
      if (unaff_s2 != 0x3c) goto _L0;
      extraout_a0_04[4] = 1;
      uVar1 = *(undefined *)(unaff_s1 + 7);
      *(undefined2 *)(extraout_a0_04 + 2) = 0;
      extraout_a0_04[5] = uVar1;
      pcVar6 = pcRam00000000;
      *(undefined2 *)(extraout_a0_04 + 0x18) = 0;
      *(undefined2 *)(extraout_a0_04 + 0x1a) = 0;
      *(undefined2 *)(extraout_a0_04 + 0x1c) = 0;
      (*pcVar6)(extraout_a0_04 + 6,unaff_s1 + 4,6,pcVar6);
      (*pcRam00000000)(extraout_a0_04 + 0x12,0,6,pcRam00000000);
      puVar2 = (undefined2 *)0x0;
      puVar7 = extraout_a0_04 + 0xc;
      pcVar6 = pcRam00000000;
      goto _L0;
    }
    FUN_00010338();
    extraout_a0_04[4] = extraout_a0_05 != 3;
    uVar3 = (uint)(ushort)unaff_s1[3];
    puVar7 = extraout_a0_04 + 0xc;
    if (uVar3 == 0) {
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
      puVar7 = extraout_a0_04 + 0x12;
_L0:
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
    }
    else {
      puVar5 = (ushort *)(((uVar3 - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e);
      if (((*puVar5 >> 1 & 1) == 0) ||
         ((*(char *)((int)unaff_s1 + 0x11) != '\0' && ((*puVar5 >> 3 & 1) == 0)))) {
        iVar4 = 0;
      }
      else {
        iVar4 = (uVar3 + 0x12 & 0xffff) + 0x28008000;
      }
      (*pcRam00000000)(extraout_a0_04 + 0x12,iVar4,6,pcRam00000000);
      if (((*puVar5 >> 5 & 1) == 0) ||
         ((extraout_a0_04[4] == '\x01' && ((_DAT_28008154 >> 2 & 1) == 0)))) goto _L0;
      (*pcRam00000000)(puVar7,((ushort)unaff_s1[3] + 0x2e & 0xffff) + 0x28008000,6,pcRam00000000);
    }
    extraout_a0_04[5] = *(undefined *)(unaff_s1 + 7);
    (*pcRam00000000)(extraout_a0_04 + 6,unaff_s1 + 4,6,pcRam00000000);
    *(undefined2 *)(extraout_a0_04 + 0x18) = *unaff_s1;
    *(undefined2 *)(extraout_a0_04 + 0x1a) = unaff_s1[1];
    *(undefined2 *)(extraout_a0_04 + 0x1c) = unaff_s1[2];
    if (extraout_a0_04[4] == '\0') {
      extraout_a0_04[0x1e] = 0;
    }
    else {
      extraout_a0_04[0x1e] = *(undefined *)(unaff_s1 + 8);
    }
    goto _L0;
  }
  FUN_000101b0();
  *extraout_a0_01 = 1;
  extraout_a0_01[1] = (char)unaff_s2;
  *(undefined2 *)(extraout_a0_01 + 2) = unaff_s3;
  if (unaff_s2 != 0) {
    if (unaff_s2 != 0x3c) goto _L0;
    extraout_a0_01[4] = 1;
    uVar1 = *(undefined *)(unaff_s1 + 7);
    *(undefined2 *)(extraout_a0_01 + 2) = 0;
    *(undefined2 *)(extraout_a0_01 + 0xc) = 0;
    extraout_a0_01[5] = uVar1;
    pcVar6 = pcRam00000000;
    *(undefined2 *)(extraout_a0_01 + 0xe) = 0;
    *(undefined2 *)(extraout_a0_01 + 0x10) = 0;
    puVar2 = unaff_s1 + 4;
    puVar7 = extraout_a0_01 + 6;
_L0:
    (*pcVar6)(puVar7,puVar2,6,pcVar6);
    goto _L0;
  }
  FUN_000101ce();
  extraout_a0_01[4] = extraout_a0_02 != 3;
  puVar7 = extraout_a0_01 + 6;
  if (((ushort)unaff_s1[3] == 0) ||
     (puVar5 = (ushort *)((((ushort)unaff_s1[3] - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e),
     (*puVar5 >> 1 & 1) == 0)) {
_L0:
    extraout_a0_01[5] = *(byte *)(unaff_s1 + 7) & 1;
    (*pcRam00000000)(puVar7,unaff_s1 + 4,6,pcRam00000000);
  }
  else {
    if ((*(char *)((int)unaff_s1 + 0x11) != '\0') && ((*puVar5 >> 3 & 1) == 0)) {
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
      goto _L0;
    }
    extraout_a0_01[5] = 1;
    (*pcRam00000000)(puVar7,((ushort)unaff_s1[3] + 0x12 & 0xffff) + 0x28008000,6,pcRam00000000);
  }
  *(undefined2 *)(extraout_a0_01 + 0xc) = *unaff_s1;
  *(undefined2 *)(extraout_a0_01 + 0xe) = unaff_s1[1];
  *(undefined2 *)(extraout_a0_01 + 0x10) = unaff_s1[2];
  if (extraout_a0_01[4] == '\0') {
    extraout_a0_01[0x12] = 0;
  }
  else {
    extraout_a0_01[0x12] = *(undefined *)(unaff_s1 + 8);
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010198(void)

{
  undefined uVar1;
  undefined2 *unaff_s1;
  int extraout_a0;
  undefined *extraout_a0_00;
  int extraout_a0_01;
  undefined *extraout_a0_02;
  int extraout_a0_03;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  code *pcVar6;
  int unaff_s2;
  undefined *puVar7;
  undefined2 unaff_s3;
  
  FUN_00010198();
  if (extraout_a0 != 0) {
    FUN_0001031a();
    *extraout_a0_02 = 10;
    extraout_a0_02[1] = (char)unaff_s2;
    *(undefined2 *)(extraout_a0_02 + 2) = unaff_s3;
    if (unaff_s2 != 0) {
      if (unaff_s2 != 0x3c) goto _L0;
      extraout_a0_02[4] = 1;
      uVar1 = *(undefined *)(unaff_s1 + 7);
      *(undefined2 *)(extraout_a0_02 + 2) = 0;
      extraout_a0_02[5] = uVar1;
      pcVar6 = pcRam00000000;
      *(undefined2 *)(extraout_a0_02 + 0x18) = 0;
      *(undefined2 *)(extraout_a0_02 + 0x1a) = 0;
      *(undefined2 *)(extraout_a0_02 + 0x1c) = 0;
      (*pcVar6)(extraout_a0_02 + 6,unaff_s1 + 4,6,pcVar6);
      (*pcRam00000000)(extraout_a0_02 + 0x12,0,6,pcRam00000000);
      puVar2 = (undefined2 *)0x0;
      puVar7 = extraout_a0_02 + 0xc;
      pcVar6 = pcRam00000000;
      goto _L0;
    }
    FUN_00010338();
    extraout_a0_02[4] = extraout_a0_03 != 3;
    uVar3 = (uint)(ushort)unaff_s1[3];
    puVar7 = extraout_a0_02 + 0xc;
    if (uVar3 == 0) {
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
      puVar7 = extraout_a0_02 + 0x12;
_L0:
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
    }
    else {
      puVar5 = (ushort *)(((uVar3 - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e);
      if (((*puVar5 >> 1 & 1) == 0) ||
         ((*(char *)((int)unaff_s1 + 0x11) != '\0' && ((*puVar5 >> 3 & 1) == 0)))) {
        iVar4 = 0;
      }
      else {
        iVar4 = (uVar3 + 0x12 & 0xffff) + 0x28008000;
      }
      (*pcRam00000000)(extraout_a0_02 + 0x12,iVar4,6,pcRam00000000);
      if (((*puVar5 >> 5 & 1) == 0) ||
         ((extraout_a0_02[4] == '\x01' && ((_DAT_28008154 >> 2 & 1) == 0)))) goto _L0;
      (*pcRam00000000)(puVar7,((ushort)unaff_s1[3] + 0x2e & 0xffff) + 0x28008000,6,pcRam00000000);
    }
    extraout_a0_02[5] = *(undefined *)(unaff_s1 + 7);
    (*pcRam00000000)(extraout_a0_02 + 6,unaff_s1 + 4,6,pcRam00000000);
    *(undefined2 *)(extraout_a0_02 + 0x18) = *unaff_s1;
    *(undefined2 *)(extraout_a0_02 + 0x1a) = unaff_s1[1];
    *(undefined2 *)(extraout_a0_02 + 0x1c) = unaff_s1[2];
    if (extraout_a0_02[4] == '\0') {
      extraout_a0_02[0x1e] = 0;
    }
    else {
      extraout_a0_02[0x1e] = *(undefined *)(unaff_s1 + 8);
    }
    goto _L0;
  }
  FUN_000101b0();
  *extraout_a0_00 = 1;
  extraout_a0_00[1] = (char)unaff_s2;
  *(undefined2 *)(extraout_a0_00 + 2) = unaff_s3;
  if (unaff_s2 != 0) {
    if (unaff_s2 != 0x3c) goto _L0;
    extraout_a0_00[4] = 1;
    uVar1 = *(undefined *)(unaff_s1 + 7);
    *(undefined2 *)(extraout_a0_00 + 2) = 0;
    *(undefined2 *)(extraout_a0_00 + 0xc) = 0;
    extraout_a0_00[5] = uVar1;
    pcVar6 = pcRam00000000;
    *(undefined2 *)(extraout_a0_00 + 0xe) = 0;
    *(undefined2 *)(extraout_a0_00 + 0x10) = 0;
    puVar2 = unaff_s1 + 4;
    puVar7 = extraout_a0_00 + 6;
_L0:
    (*pcVar6)(puVar7,puVar2,6,pcVar6);
    goto _L0;
  }
  FUN_000101ce();
  extraout_a0_00[4] = extraout_a0_01 != 3;
  puVar7 = extraout_a0_00 + 6;
  if (((ushort)unaff_s1[3] == 0) ||
     (puVar5 = (ushort *)((((ushort)unaff_s1[3] - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e),
     (*puVar5 >> 1 & 1) == 0)) {
_L0:
    extraout_a0_00[5] = *(byte *)(unaff_s1 + 7) & 1;
    (*pcRam00000000)(puVar7,unaff_s1 + 4,6,pcRam00000000);
  }
  else {
    if ((*(char *)((int)unaff_s1 + 0x11) != '\0') && ((*puVar5 >> 3 & 1) == 0)) {
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
      goto _L0;
    }
    extraout_a0_00[5] = 1;
    (*pcRam00000000)(puVar7,((ushort)unaff_s1[3] + 0x12 & 0xffff) + 0x28008000,6,pcRam00000000);
  }
  *(undefined2 *)(extraout_a0_00 + 0xc) = *unaff_s1;
  *(undefined2 *)(extraout_a0_00 + 0xe) = unaff_s1[1];
  *(undefined2 *)(extraout_a0_00 + 0x10) = unaff_s1[2];
  if (extraout_a0_00[4] == '\0') {
    extraout_a0_00[0x12] = 0;
  }
  else {
    extraout_a0_00[0x12] = *(undefined *)(unaff_s1 + 8);
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000101b0(void)

{
  undefined uVar1;
  code *pcVar2;
  undefined2 *unaff_s1;
  undefined *extraout_a0;
  int extraout_a0_00;
  ushort *puVar3;
  int unaff_s2;
  undefined *puVar4;
  undefined2 unaff_s3;
  
  FUN_000101b0();
  *extraout_a0 = 1;
  extraout_a0[1] = (char)unaff_s2;
  *(undefined2 *)(extraout_a0 + 2) = unaff_s3;
  if (unaff_s2 != 0) {
    if (unaff_s2 == 0x3c) {
      extraout_a0[4] = 1;
      uVar1 = *(undefined *)(unaff_s1 + 7);
      *(undefined2 *)(extraout_a0 + 2) = 0;
      *(undefined2 *)(extraout_a0 + 0xc) = 0;
      extraout_a0[5] = uVar1;
      pcVar2 = pcRam00000000;
      *(undefined2 *)(extraout_a0 + 0xe) = 0;
      *(undefined2 *)(extraout_a0 + 0x10) = 0;
      (*pcVar2)(extraout_a0 + 6,unaff_s1 + 4,6,pcVar2);
    }
    goto _L0;
  }
  FUN_000101ce();
  extraout_a0[4] = extraout_a0_00 != 3;
  puVar4 = extraout_a0 + 6;
  if (((ushort)unaff_s1[3] == 0) ||
     (puVar3 = (ushort *)((((ushort)unaff_s1[3] - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e),
     (*puVar3 >> 1 & 1) == 0)) {
_L0:
    extraout_a0[5] = *(byte *)(unaff_s1 + 7) & 1;
    (*pcRam00000000)(puVar4,unaff_s1 + 4,6,pcRam00000000);
  }
  else {
    if ((*(char *)((int)unaff_s1 + 0x11) != '\0') && ((*puVar3 >> 3 & 1) == 0)) {
      (*pcRam00000000)(puVar4,0,6,pcRam00000000);
      goto _L0;
    }
    extraout_a0[5] = 1;
    (*pcRam00000000)(puVar4,((ushort)unaff_s1[3] + 0x12 & 0xffff) + 0x28008000,6,pcRam00000000);
  }
  *(undefined2 *)(extraout_a0 + 0xc) = *unaff_s1;
  *(undefined2 *)(extraout_a0 + 0xe) = unaff_s1[1];
  *(undefined2 *)(extraout_a0 + 0x10) = unaff_s1[2];
  if (extraout_a0[4] == '\0') {
    extraout_a0[0x12] = 0;
  }
  else {
    extraout_a0[0x12] = *(undefined *)(unaff_s1 + 8);
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000101ce(void)

{
  int unaff_s0;
  undefined2 *unaff_s1;
  int extraout_a0;
  ushort *puVar1;
  int iVar2;
  
  FUN_000101ce();
  *(bool *)(unaff_s0 + 4) = extraout_a0 != 3;
  iVar2 = unaff_s0 + 6;
  if (((ushort)unaff_s1[3] != 0) &&
     (puVar1 = (ushort *)((((ushort)unaff_s1[3] - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e),
     (*puVar1 >> 1 & 1) != 0)) {
    if ((*(char *)((int)unaff_s1 + 0x11) == '\0') || ((*puVar1 >> 3 & 1) != 0)) {
      *(undefined *)(unaff_s0 + 5) = 1;
      (*pcRam00000000)(iVar2,((ushort)unaff_s1[3] + 0x12 & 0xffff) + 0x28008000,6,pcRam00000000);
      goto _L0;
    }
    (*pcRam00000000)(iVar2,0,6,pcRam00000000);
  }
  *(byte *)(unaff_s0 + 5) = *(byte *)(unaff_s1 + 7) & 1;
  (*pcRam00000000)(iVar2,unaff_s1 + 4,6,pcRam00000000);
_L0:
  *(undefined2 *)(unaff_s0 + 0xc) = *unaff_s1;
  *(undefined2 *)(unaff_s0 + 0xe) = unaff_s1[1];
  *(undefined2 *)(unaff_s0 + 0x10) = unaff_s1[2];
  if (*(char *)(unaff_s0 + 4) == '\0') {
    *(undefined *)(unaff_s0 + 0x12) = 0;
  }
  else {
    *(undefined *)(unaff_s0 + 0x12) = *(undefined *)(unaff_s1 + 8);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010284(void)

{
  undefined uVar1;
  undefined2 *unaff_s1;
  int extraout_a0;
  undefined *extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  int extraout_a0_04;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  code *pcVar6;
  undefined *puVar7;
  int unaff_s2;
  undefined2 unaff_s3;
  
  FUN_00010284();
  if (extraout_a0_02 == 0) {
    return;
  }
  FUN_00010198();
  if (extraout_a0 != 0) {
    FUN_0001031a();
    *extraout_a0_03 = 10;
    extraout_a0_03[1] = (char)unaff_s2;
    *(undefined2 *)(extraout_a0_03 + 2) = unaff_s3;
    if (unaff_s2 != 0) {
      if (unaff_s2 != 0x3c) goto _L0;
      extraout_a0_03[4] = 1;
      uVar1 = *(undefined *)(unaff_s1 + 7);
      *(undefined2 *)(extraout_a0_03 + 2) = 0;
      extraout_a0_03[5] = uVar1;
      pcVar6 = pcRam00000000;
      *(undefined2 *)(extraout_a0_03 + 0x18) = 0;
      *(undefined2 *)(extraout_a0_03 + 0x1a) = 0;
      *(undefined2 *)(extraout_a0_03 + 0x1c) = 0;
      (*pcVar6)(extraout_a0_03 + 6,unaff_s1 + 4,6,pcVar6);
      (*pcRam00000000)(extraout_a0_03 + 0x12,0,6,pcRam00000000);
      puVar2 = (undefined2 *)0x0;
      puVar7 = extraout_a0_03 + 0xc;
      pcVar6 = pcRam00000000;
      goto _L0;
    }
    FUN_00010338();
    extraout_a0_03[4] = extraout_a0_04 != 3;
    uVar3 = (uint)(ushort)unaff_s1[3];
    puVar7 = extraout_a0_03 + 0xc;
    if (uVar3 == 0) {
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
      puVar7 = extraout_a0_03 + 0x12;
_L0:
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
    }
    else {
      puVar5 = (ushort *)(((uVar3 - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e);
      if (((*puVar5 >> 1 & 1) == 0) ||
         ((*(char *)((int)unaff_s1 + 0x11) != '\0' && ((*puVar5 >> 3 & 1) == 0)))) {
        iVar4 = 0;
      }
      else {
        iVar4 = (uVar3 + 0x12 & 0xffff) + 0x28008000;
      }
      (*pcRam00000000)(extraout_a0_03 + 0x12,iVar4,6,pcRam00000000);
      if (((*puVar5 >> 5 & 1) == 0) ||
         ((extraout_a0_03[4] == '\x01' && ((_DAT_28008154 >> 2 & 1) == 0)))) goto _L0;
      (*pcRam00000000)(puVar7,((ushort)unaff_s1[3] + 0x2e & 0xffff) + 0x28008000,6,pcRam00000000);
    }
    extraout_a0_03[5] = *(undefined *)(unaff_s1 + 7);
    (*pcRam00000000)(extraout_a0_03 + 6,unaff_s1 + 4,6,pcRam00000000);
    *(undefined2 *)(extraout_a0_03 + 0x18) = *unaff_s1;
    *(undefined2 *)(extraout_a0_03 + 0x1a) = unaff_s1[1];
    *(undefined2 *)(extraout_a0_03 + 0x1c) = unaff_s1[2];
    if (extraout_a0_03[4] == '\0') {
      extraout_a0_03[0x1e] = 0;
    }
    else {
      extraout_a0_03[0x1e] = *(undefined *)(unaff_s1 + 8);
    }
    goto _L0;
  }
  FUN_000101b0();
  *extraout_a0_00 = 1;
  extraout_a0_00[1] = (char)unaff_s2;
  *(undefined2 *)(extraout_a0_00 + 2) = unaff_s3;
  if (unaff_s2 != 0) {
    if (unaff_s2 != 0x3c) goto _L0;
    extraout_a0_00[4] = 1;
    uVar1 = *(undefined *)(unaff_s1 + 7);
    *(undefined2 *)(extraout_a0_00 + 2) = 0;
    *(undefined2 *)(extraout_a0_00 + 0xc) = 0;
    extraout_a0_00[5] = uVar1;
    pcVar6 = pcRam00000000;
    *(undefined2 *)(extraout_a0_00 + 0xe) = 0;
    *(undefined2 *)(extraout_a0_00 + 0x10) = 0;
    puVar2 = unaff_s1 + 4;
    puVar7 = extraout_a0_00 + 6;
_L0:
    (*pcVar6)(puVar7,puVar2,6,pcVar6);
    goto _L0;
  }
  FUN_000101ce();
  extraout_a0_00[4] = extraout_a0_01 != 3;
  puVar7 = extraout_a0_00 + 6;
  if (((ushort)unaff_s1[3] == 0) ||
     (puVar5 = (ushort *)((((ushort)unaff_s1[3] - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e),
     (*puVar5 >> 1 & 1) == 0)) {
_L0:
    extraout_a0_00[5] = *(byte *)(unaff_s1 + 7) & 1;
    (*pcRam00000000)(puVar7,unaff_s1 + 4,6,pcRam00000000);
  }
  else {
    if ((*(char *)((int)unaff_s1 + 0x11) != '\0') && ((*puVar5 >> 3 & 1) == 0)) {
      (*pcRam00000000)(puVar7,0,6,pcRam00000000);
      goto _L0;
    }
    extraout_a0_00[5] = 1;
    (*pcRam00000000)(puVar7,((ushort)unaff_s1[3] + 0x12 & 0xffff) + 0x28008000,6,pcRam00000000);
  }
  *(undefined2 *)(extraout_a0_00 + 0xc) = *unaff_s1;
  *(undefined2 *)(extraout_a0_00 + 0xe) = unaff_s1[1];
  *(undefined2 *)(extraout_a0_00 + 0x10) = unaff_s1[2];
  if (extraout_a0_00[4] == '\0') {
    extraout_a0_00[0x12] = 0;
  }
  else {
    extraout_a0_00[0x12] = *(undefined *)(unaff_s1 + 8);
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001031a(void)

{
  undefined uVar1;
  code *pcVar2;
  undefined2 *unaff_s1;
  undefined *extraout_a0;
  int extraout_a0_00;
  uint uVar3;
  int iVar4;
  int unaff_s2;
  ushort *puVar5;
  undefined2 unaff_s3;
  undefined *puVar6;
  
  FUN_0001031a();
  *extraout_a0 = 10;
  extraout_a0[1] = (char)unaff_s2;
  *(undefined2 *)(extraout_a0 + 2) = unaff_s3;
  if (unaff_s2 != 0) {
    if (unaff_s2 == 0x3c) {
      extraout_a0[4] = 1;
      uVar1 = *(undefined *)(unaff_s1 + 7);
      *(undefined2 *)(extraout_a0 + 2) = 0;
      extraout_a0[5] = uVar1;
      pcVar2 = pcRam00000000;
      *(undefined2 *)(extraout_a0 + 0x18) = 0;
      *(undefined2 *)(extraout_a0 + 0x1a) = 0;
      *(undefined2 *)(extraout_a0 + 0x1c) = 0;
      (*pcVar2)(extraout_a0 + 6,unaff_s1 + 4,6,pcVar2);
      (*pcRam00000000)(extraout_a0 + 0x12,0,6,pcRam00000000);
      (*pcRam00000000)(extraout_a0 + 0xc,0,6,pcRam00000000);
    }
    goto _L0;
  }
  FUN_00010338();
  extraout_a0[4] = extraout_a0_00 != 3;
  uVar3 = (uint)(ushort)unaff_s1[3];
  puVar6 = extraout_a0 + 0xc;
  if (uVar3 == 0) {
    (*pcRam00000000)(puVar6,0,6,pcRam00000000);
    puVar6 = extraout_a0 + 0x12;
_L0:
    (*pcRam00000000)(puVar6,0,6,pcRam00000000);
  }
  else {
    puVar5 = (ushort *)(((uVar3 - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e);
    if (((*puVar5 >> 1 & 1) == 0) ||
       ((*(char *)((int)unaff_s1 + 0x11) != '\0' && ((*puVar5 >> 3 & 1) == 0)))) {
      iVar4 = 0;
    }
    else {
      iVar4 = (uVar3 + 0x12 & 0xffff) + 0x28008000;
    }
    (*pcRam00000000)(extraout_a0 + 0x12,iVar4,6,pcRam00000000);
    if (((*puVar5 >> 5 & 1) == 0) || ((extraout_a0[4] == '\x01' && ((_DAT_28008154 >> 2 & 1) == 0)))
       ) goto _L0;
    (*pcRam00000000)(puVar6,((ushort)unaff_s1[3] + 0x2e & 0xffff) + 0x28008000,6,pcRam00000000);
  }
  extraout_a0[5] = *(undefined *)(unaff_s1 + 7);
  (*pcRam00000000)(extraout_a0 + 6,unaff_s1 + 4,6,pcRam00000000);
  *(undefined2 *)(extraout_a0 + 0x18) = *unaff_s1;
  *(undefined2 *)(extraout_a0 + 0x1a) = unaff_s1[1];
  *(undefined2 *)(extraout_a0 + 0x1c) = unaff_s1[2];
  if (extraout_a0[4] == '\0') {
    extraout_a0[0x1e] = 0;
  }
  else {
    extraout_a0[0x1e] = *(undefined *)(unaff_s1 + 8);
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010338(void)

{
  int unaff_s0;
  undefined2 *unaff_s1;
  int extraout_a0;
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  
  FUN_00010338();
  *(bool *)(unaff_s0 + 4) = extraout_a0 != 3;
  uVar1 = (uint)(ushort)unaff_s1[3];
  iVar4 = unaff_s0 + 0xc;
  if (uVar1 == 0) {
    (*pcRam00000000)(iVar4,0,6,pcRam00000000);
    iVar4 = unaff_s0 + 0x12;
  }
  else {
    puVar3 = (ushort *)(((uVar1 - 0x22e) / 0x34 & 0xff) * 0x34 + 0x2800822e);
    if (((*puVar3 >> 1 & 1) == 0) ||
       ((*(char *)((int)unaff_s1 + 0x11) != '\0' && ((*puVar3 >> 3 & 1) == 0)))) {
      iVar2 = 0;
    }
    else {
      iVar2 = (uVar1 + 0x12 & 0xffff) + 0x28008000;
    }
    (*pcRam00000000)(unaff_s0 + 0x12,iVar2,6,pcRam00000000);
    if (((*puVar3 >> 5 & 1) != 0) &&
       ((*(char *)(unaff_s0 + 4) != '\x01' || ((_DAT_28008154 >> 2 & 1) != 0)))) {
      (*pcRam00000000)(iVar4,((ushort)unaff_s1[3] + 0x2e & 0xffff) + 0x28008000,6,pcRam00000000);
      goto _L0;
    }
  }
  (*pcRam00000000)(iVar4,0,6,pcRam00000000);
_L0:
  *(undefined *)(unaff_s0 + 5) = *(undefined *)(unaff_s1 + 7);
  (*pcRam00000000)(unaff_s0 + 6,unaff_s1 + 4,6,pcRam00000000);
  *(undefined2 *)(unaff_s0 + 0x18) = *unaff_s1;
  *(undefined2 *)(unaff_s0 + 0x1a) = unaff_s1[1];
  *(undefined2 *)(unaff_s0 + 0x1c) = unaff_s1[2];
  if (*(char *)(unaff_s0 + 4) == '\0') {
    *(undefined *)(unaff_s0 + 0x1e) = 0;
  }
  else {
    *(undefined *)(unaff_s0 + 0x1e) = *(undefined *)(unaff_s1 + 8);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 47f7

void llc_le_ch_sel_algo_evt_send(uint8_t chSel,uint16_t conhdl,llc_create_con_req_ind *param)

{
  int extraout_a0;
  undefined *extraout_a0_00;
  
  _L0();
  if (extraout_a0 == 0) {
    return;
  }
  FUN_000104e6();
  *extraout_a0_00 = 0x14;
  extraout_a0_00[4] = chSel;
  *(uint16_t *)(extraout_a0_00 + 2) = conhdl;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 unaff_s0;
  undefined unaff_s1;
  int extraout_a0;
  undefined *extraout_a0_00;
  
  _L0();
  if (extraout_a0 == 0) {
    return;
  }
  FUN_000104e6();
  *extraout_a0_00 = 0x14;
  extraout_a0_00[4] = unaff_s1;
  *(undefined2 *)(extraout_a0_00 + 2) = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000104e6(void)

{
  undefined2 unaff_s0;
  undefined unaff_s1;
  undefined *extraout_a0;
  
  FUN_000104e6();
  *extraout_a0 = 0x14;
  extraout_a0[4] = unaff_s1;
  *(undefined2 *)(extraout_a0 + 2) = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 40c2

void llc_start(llc_create_con_req_ind *param,ea_elt_tag *elt)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)((uint)*(ushort *)&elt[2].ea_cb_start * 4);
  if (*piVar4 == 0) {
    iVar3 = 0xa8;
    _LVL97(_DAT_00000020,_DAT_0000002c,uRam00000030);
    *piVar4 = iVar3;
  }
  pcVar1 = pcRam00000000;
  puVar2 = (undefined4 *)*piVar4;
  *(undefined *)((int)puVar2 + 0xa6) = 1;
  (*pcVar1)(puVar2 + 0xf,0,6,pcVar1);
  FUN_00010592(_DAT_00000020,_DAT_0000002c,uRam00000030);
  FUN_0001059e(_DAT_00000020,_DAT_0000002c,uRam00000030);
  if (*(char *)((int)&elt[2].ea_cb_stop + 3) == '\x03') {
    (*pcRam00000000)(puVar2 + 5,0,0x28,pcRam00000000);
    *(undefined *)((int)puVar2 + 0x3a) = DAT_00000031;
    FUN_000105da();
    if (*(ushort *)((int)&elt[2].linked_element + 2) < 2) {
      *(undefined *)((int)puVar2 + 0x39) = 0;
    }
    else {
      *(undefined *)((int)puVar2 + 0x39) = 1;
    }
  }
  puVar2[4] = elt;
  *(uint16_t *)(puVar2 + 0x15) = param->sup_to;
  _L0();
  *(undefined *)((int)puVar2 + 0xa1) = 8;
  *(undefined2 *)(puVar2 + 0x17) = 0;
  *(undefined *)((int)puVar2 + 0xa2) = 0;
  _L0();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  _L0();
  iVar3 = *piVar4;
  *(undefined2 *)(iVar3 + 0x58) = 3000;
  *(undefined *)(iVar3 + 0xa3) = 0;
  *(undefined *)(iVar3 + 0xa4) = 0;
  _L0();
  *(undefined *)((int)puVar2 + 0x52) = 0;
  *(undefined2 *)((int)puVar2 + 0x42) = _DAT_00000020;
  *(undefined2 *)((int)puVar2 + 0x4a) = _DAT_00000022;
  puVar2[0x11] = 0x1b00fb;
  *(undefined2 *)(puVar2 + 0x12) = 0x1b;
  puVar2[0x13] = 0x1480848;
  *(undefined2 *)(puVar2 + 0x14) = 0x148;
  *(byte *)((int)puVar2 + 0x53) = *(byte *)((int)puVar2 + 0x53) & 0xfe | 2;
  *(undefined4 *)*piVar4 = 0;
  *(undefined4 *)(*piVar4 + 4) = 0;
  iVar3 = *piVar4;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined *)(iVar3 + 0xa5) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL97(undefined4 uRam00000020,undefined2 uRam0000002c,undefined2 uRam00000030)

{
  code *pcVar1;
  undefined4 *unaff_s0;
  undefined4 *puVar2;
  int unaff_s1;
  int *piVar3;
  undefined4 in_a0;
  int iVar4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s8;
  
  _LVL97(uRam00000020,uRam0000002c,uRam00000030);
  *unaff_s0 = in_a0;
  pcVar1 = pcRam00000000;
  puVar2 = *(undefined4 **)(unaff_s1 + unaff_s8);
  *(undefined *)((int)puVar2 + 0xa6) = 1;
  (*pcVar1)(puVar2 + 0xf,0,6,pcVar1);
  FUN_00010592(uRam00000020,uRam0000002c,uRam00000030);
  FUN_0001059e(uRam00000020,uRam0000002c,uRam00000030);
  if (*(char *)(unaff_s6 + 0x7b) == '\x03') {
    (*pcRam00000000)(puVar2 + 5,0,0x28,pcRam00000000);
    *(undefined *)((int)puVar2 + 0x3a) = uRam00000030._1_1_;
    FUN_000105da();
    if (*(ushort *)(unaff_s6 + 0x5e) < 2) {
      *(undefined *)((int)puVar2 + 0x39) = 0;
    }
    else {
      *(undefined *)((int)puVar2 + 0x39) = 1;
    }
  }
  puVar2[4] = unaff_s6;
  *(undefined2 *)(puVar2 + 0x15) = *(undefined2 *)(unaff_s5 + 4);
  _L0();
  *(undefined *)((int)puVar2 + 0xa1) = 8;
  *(undefined2 *)(puVar2 + 0x17) = 0;
  *(undefined *)((int)puVar2 + 0xa2) = 0;
  _L0();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  _L0();
  piVar3 = (int *)(unaff_s1 + unaff_s8);
  iVar4 = *piVar3;
  *(undefined2 *)(iVar4 + 0x58) = 3000;
  *(undefined *)(iVar4 + 0xa3) = 0;
  *(undefined *)(iVar4 + 0xa4) = 0;
  _L0();
  *(undefined *)((int)puVar2 + 0x52) = 0;
  *(undefined2 *)((int)puVar2 + 0x42) = (undefined2)uRam00000020;
  *(undefined2 *)((int)puVar2 + 0x4a) = uRam00000020._2_2_;
  puVar2[0x11] = 0x1b00fb;
  *(undefined2 *)(puVar2 + 0x12) = 0x1b;
  puVar2[0x13] = 0x1480848;
  *(undefined2 *)(puVar2 + 0x14) = 0x148;
  *(byte *)((int)puVar2 + 0x53) = *(byte *)((int)puVar2 + 0x53) & 0xfe | 2;
  *(undefined4 *)*piVar3 = 0;
  *(undefined4 *)(*piVar3 + 4) = 0;
  iVar4 = *piVar3;
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined *)(iVar4 + 0xa5) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010592(undefined4 uRam00000020,undefined2 uRam0000002c,undefined2 uRam00000030)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int *piVar1;
  int iVar2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s8;
  uint unaff_s9;
  code **unaff_s10;
  
  FUN_00010592(uRam00000020,uRam0000002c,uRam00000030);
  FUN_0001059e(uRam00000020,uRam0000002c,uRam00000030);
  if (*(char *)(unaff_s6 + 0x7b) == '\x03') {
    (**unaff_s10)(unaff_s0 + 5,0,0x28,*unaff_s10);
    *(undefined *)((int)unaff_s0 + 0x3a) = uRam00000030._1_1_;
    FUN_000105da();
    if (unaff_s9 < *(ushort *)(unaff_s6 + 0x5e)) {
      *(char *)((int)unaff_s0 + 0x39) = (char)unaff_s9;
    }
    else {
      *(undefined *)((int)unaff_s0 + 0x39) = 0;
    }
  }
  unaff_s0[4] = unaff_s6;
  *(undefined2 *)(unaff_s0 + 0x15) = *(undefined2 *)(unaff_s5 + 4);
  _L0();
  *(undefined *)((int)unaff_s0 + 0xa1) = 8;
  *(undefined2 *)(unaff_s0 + 0x17) = 0;
  *(undefined *)((int)unaff_s0 + 0xa2) = 0;
  _L0();
  *unaff_s0 = 0;
  unaff_s0[1] = 0;
  unaff_s0[2] = 0;
  unaff_s0[3] = 0;
  _L0();
  piVar1 = (int *)(unaff_s1 + unaff_s8);
  iVar2 = *piVar1;
  *(undefined2 *)(iVar2 + 0x58) = 3000;
  *(undefined *)(iVar2 + 0xa3) = 0;
  *(undefined *)(iVar2 + 0xa4) = 0;
  _L0();
  *(undefined *)((int)unaff_s0 + 0x52) = 0;
  *(undefined2 *)((int)unaff_s0 + 0x42) = (undefined2)uRam00000020;
  *(undefined2 *)((int)unaff_s0 + 0x4a) = uRam00000020._2_2_;
  unaff_s0[0x11] = 0x1b00fb;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x1b;
  unaff_s0[0x13] = 0x1480848;
  *(undefined2 *)(unaff_s0 + 0x14) = 0x148;
  *(byte *)((int)unaff_s0 + 0x53) = *(byte *)((int)unaff_s0 + 0x53) & 0xfe | 2;
  *(undefined4 *)*piVar1 = 0;
  *(undefined4 *)(*piVar1 + 4) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined *)(iVar2 + 0xa5) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001059e(undefined4 uRam00000020,undefined2 uRam0000002c,undefined2 param_3)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int *piVar1;
  int iVar2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s8;
  uint unaff_s9;
  code **unaff_s10;
  
  FUN_0001059e(uRam00000020,uRam0000002c,param_3);
  if (*(char *)(unaff_s6 + 0x7b) == '\x03') {
    (**unaff_s10)(unaff_s0 + 5,0,0x28,*unaff_s10);
    *(undefined *)((int)unaff_s0 + 0x3a) = param_3._1_1_;
    FUN_000105da();
    if (unaff_s9 < *(ushort *)(unaff_s6 + 0x5e)) {
      *(char *)((int)unaff_s0 + 0x39) = (char)unaff_s9;
    }
    else {
      *(undefined *)((int)unaff_s0 + 0x39) = 0;
    }
  }
  unaff_s0[4] = unaff_s6;
  *(undefined2 *)(unaff_s0 + 0x15) = *(undefined2 *)(unaff_s5 + 4);
  _L0();
  *(undefined *)((int)unaff_s0 + 0xa1) = 8;
  *(undefined2 *)(unaff_s0 + 0x17) = 0;
  *(undefined *)((int)unaff_s0 + 0xa2) = 0;
  _L0();
  *unaff_s0 = 0;
  unaff_s0[1] = 0;
  unaff_s0[2] = 0;
  unaff_s0[3] = 0;
  _L0();
  piVar1 = (int *)(unaff_s1 + unaff_s8);
  iVar2 = *piVar1;
  *(undefined2 *)(iVar2 + 0x58) = 3000;
  *(undefined *)(iVar2 + 0xa3) = 0;
  *(undefined *)(iVar2 + 0xa4) = 0;
  _L0();
  *(undefined *)((int)unaff_s0 + 0x52) = 0;
  *(undefined2 *)((int)unaff_s0 + 0x42) = (undefined2)uRam00000020;
  *(undefined2 *)((int)unaff_s0 + 0x4a) = uRam00000020._2_2_;
  unaff_s0[0x11] = 0x1b00fb;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x1b;
  unaff_s0[0x13] = 0x1480848;
  *(undefined2 *)(unaff_s0 + 0x14) = 0x148;
  *(byte *)((int)unaff_s0 + 0x53) = *(byte *)((int)unaff_s0 + 0x53) & 0xfe | 2;
  *(undefined4 *)*piVar1 = 0;
  *(undefined4 *)(*piVar1 + 4) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined *)(iVar2 + 0xa5) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000105da(void)

{
  undefined2 uVar1;
  undefined4 *unaff_s0;
  int unaff_s1;
  int *piVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  int unaff_s8;
  uint unaff_s9;
  
  FUN_000105da();
  if (unaff_s9 < *(ushort *)(unaff_s6 + 0x5e)) {
    *(char *)((int)unaff_s0 + 0x39) = (char)unaff_s9;
  }
  else {
    *(undefined *)((int)unaff_s0 + 0x39) = 0;
  }
  unaff_s0[4] = unaff_s6;
  *(undefined2 *)(unaff_s0 + 0x15) = *(undefined2 *)(unaff_s5 + 4);
  _L0();
  *(undefined *)((int)unaff_s0 + 0xa1) = 8;
  *(undefined2 *)(unaff_s0 + 0x17) = 0;
  *(undefined *)((int)unaff_s0 + 0xa2) = 0;
  _L0();
  *unaff_s0 = 0;
  unaff_s0[1] = 0;
  unaff_s0[2] = 0;
  unaff_s0[3] = 0;
  _L0();
  piVar2 = (int *)(unaff_s1 + unaff_s8);
  iVar3 = *piVar2;
  *(undefined2 *)(iVar3 + 0x58) = 3000;
  *(undefined *)(iVar3 + 0xa3) = 0;
  *(undefined *)(iVar3 + 0xa4) = 0;
  _L0();
  uVar1 = *(undefined2 *)(unaff_s3 + 0x20);
  *(undefined *)((int)unaff_s0 + 0x52) = 0;
  *(undefined2 *)((int)unaff_s0 + 0x42) = uVar1;
  *(undefined2 *)((int)unaff_s0 + 0x4a) = *(undefined2 *)(unaff_s3 + 0x22);
  unaff_s0[0x11] = 0x1b00fb;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x1b;
  unaff_s0[0x13] = 0x1480848;
  *(undefined2 *)(unaff_s0 + 0x14) = 0x148;
  *(byte *)((int)unaff_s0 + 0x53) = *(byte *)((int)unaff_s0 + 0x53) & 0xfe | 2;
  *(undefined4 *)*piVar2 = 0;
  *(undefined4 *)(*piVar2 + 4) = 0;
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined *)(iVar3 + 0xa5) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 uVar1;
  undefined4 *unaff_s0;
  int unaff_s1;
  int *piVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s8;
  
  _L0();
  *(undefined *)((int)unaff_s0 + 0xa1) = 8;
  *(undefined2 *)(unaff_s0 + 0x17) = 0;
  *(undefined *)((int)unaff_s0 + 0xa2) = 0;
  _L0();
  *unaff_s0 = 0;
  unaff_s0[1] = 0;
  unaff_s0[2] = 0;
  unaff_s0[3] = 0;
  _L0();
  piVar2 = (int *)(unaff_s1 + unaff_s8);
  iVar3 = *piVar2;
  *(undefined2 *)(iVar3 + 0x58) = 3000;
  *(undefined *)(iVar3 + 0xa3) = 0;
  *(undefined *)(iVar3 + 0xa4) = 0;
  _L0();
  uVar1 = *(undefined2 *)(unaff_s3 + 0x20);
  *(undefined *)((int)unaff_s0 + 0x52) = 0;
  *(undefined2 *)((int)unaff_s0 + 0x42) = uVar1;
  *(undefined2 *)((int)unaff_s0 + 0x4a) = *(undefined2 *)(unaff_s3 + 0x22);
  unaff_s0[0x11] = 0x1b00fb;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x1b;
  unaff_s0[0x13] = 0x1480848;
  *(undefined2 *)(unaff_s0 + 0x14) = 0x148;
  *(byte *)((int)unaff_s0 + 0x53) = *(byte *)((int)unaff_s0 + 0x53) & 0xfe | 2;
  *(undefined4 *)*piVar2 = 0;
  *(undefined4 *)(*piVar2 + 4) = 0;
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined *)(iVar3 + 0xa5) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 uVar1;
  undefined4 *unaff_s0;
  int unaff_s1;
  int *piVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s8;
  
  _L0();
  *unaff_s0 = 0;
  unaff_s0[1] = 0;
  unaff_s0[2] = 0;
  unaff_s0[3] = 0;
  _L0();
  piVar2 = (int *)(unaff_s1 + unaff_s8);
  iVar3 = *piVar2;
  *(undefined2 *)(iVar3 + 0x58) = 3000;
  *(undefined *)(iVar3 + 0xa3) = 0;
  *(undefined *)(iVar3 + 0xa4) = 0;
  _L0();
  uVar1 = *(undefined2 *)(unaff_s3 + 0x20);
  *(undefined *)((int)unaff_s0 + 0x52) = 0;
  *(undefined2 *)((int)unaff_s0 + 0x42) = uVar1;
  *(undefined2 *)((int)unaff_s0 + 0x4a) = *(undefined2 *)(unaff_s3 + 0x22);
  unaff_s0[0x11] = 0x1b00fb;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x1b;
  unaff_s0[0x13] = 0x1480848;
  *(undefined2 *)(unaff_s0 + 0x14) = 0x148;
  *(byte *)((int)unaff_s0 + 0x53) = *(byte *)((int)unaff_s0 + 0x53) & 0xfe | 2;
  *(undefined4 *)*piVar2 = 0;
  *(undefined4 *)(*piVar2 + 4) = 0;
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined *)(iVar3 + 0xa5) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 uVar1;
  int unaff_s0;
  int unaff_s1;
  int *piVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s8;
  
  _L0();
  piVar2 = (int *)(unaff_s1 + unaff_s8);
  iVar3 = *piVar2;
  *(undefined2 *)(iVar3 + 0x58) = 3000;
  *(undefined *)(iVar3 + 0xa3) = 0;
  *(undefined *)(iVar3 + 0xa4) = 0;
  _L0();
  uVar1 = *(undefined2 *)(unaff_s3 + 0x20);
  *(undefined *)(unaff_s0 + 0x52) = 0;
  *(undefined2 *)(unaff_s0 + 0x42) = uVar1;
  *(undefined2 *)(unaff_s0 + 0x4a) = *(undefined2 *)(unaff_s3 + 0x22);
  *(undefined4 *)(unaff_s0 + 0x44) = 0x1b00fb;
  *(undefined2 *)(unaff_s0 + 0x48) = 0x1b;
  *(undefined4 *)(unaff_s0 + 0x4c) = 0x1480848;
  *(undefined2 *)(unaff_s0 + 0x50) = 0x148;
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfe | 2;
  *(undefined4 *)*piVar2 = 0;
  *(undefined4 *)(*piVar2 + 4) = 0;
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined *)(iVar3 + 0xa5) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 uVar1;
  int unaff_s0;
  int *unaff_s1;
  int iVar2;
  int unaff_s3;
  
  _L0();
  uVar1 = *(undefined2 *)(unaff_s3 + 0x20);
  *(undefined *)(unaff_s0 + 0x52) = 0;
  *(undefined2 *)(unaff_s0 + 0x42) = uVar1;
  *(undefined2 *)(unaff_s0 + 0x4a) = *(undefined2 *)(unaff_s3 + 0x22);
  *(undefined4 *)(unaff_s0 + 0x44) = 0x1b00fb;
  *(undefined2 *)(unaff_s0 + 0x48) = 0x1b;
  *(undefined4 *)(unaff_s0 + 0x4c) = 0x1480848;
  *(undefined2 *)(unaff_s0 + 0x50) = 0x148;
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfe | 2;
  *(undefined4 *)*unaff_s1 = 0;
  *(undefined4 *)(*unaff_s1 + 4) = 0;
  iVar2 = *unaff_s1;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined *)(iVar2 + 0xa5) = 0;
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



// DWARF DIE: 3a6d

void llc_con_update_complete_send(uint8_t status,uint16_t conhdl,lld_evt_tag *evt)

{
  int **ppiVar1;
  undefined *extraout_a0;
  undefined2 in_register_0000202e;
  undefined2 uVar2;
  int iVar3;
  
  _L0();
  *extraout_a0 = 3;
  *(uint16_t *)(extraout_a0 + 2) = conhdl;
  extraout_a0[1] = status;
  ppiVar1 = (int **)(CONCAT22(in_register_0000202e,conhdl) << 2);
  if (evt == (lld_evt_tag *)0x0) {
    iVar3 = **ppiVar1;
    if (iVar3 == 0) {
      *(undefined2 *)(extraout_a0 + 4) = 0;
      *(undefined2 *)(extraout_a0 + 6) = 0;
      *(undefined2 *)(extraout_a0 + 8) = 0;
      goto _L0;
    }
    *(undefined2 *)(extraout_a0 + 4) = *(undefined2 *)(iVar3 + 0xe);
    *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(iVar3 + 6);
    uVar2 = *(undefined2 *)(iVar3 + 8);
  }
  else {
    *(uint16_t *)(extraout_a0 + 4) = evt->interval >> 1;
    *(short *)(extraout_a0 + 6) = *(short *)&(evt->evt).field_0xa + -1;
    uVar2 = *(undefined2 *)(*ppiVar1 + 0x15);
  }
  *(undefined2 *)(extraout_a0 + 8) = uVar2;
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined *extraout_a0;
  undefined2 uVar1;
  int iVar2;
  undefined unaff_s2;
  
  _L0();
  *extraout_a0 = 3;
  *(short *)(extraout_a0 + 2) = (short)unaff_s0;
  extraout_a0[1] = unaff_s2;
  if (unaff_s1 == 0) {
    iVar2 = **(int **)(unaff_s0 * 4);
    if (iVar2 == 0) {
      *(undefined2 *)(extraout_a0 + 4) = 0;
      *(undefined2 *)(extraout_a0 + 6) = 0;
      *(undefined2 *)(extraout_a0 + 8) = 0;
      goto _L0;
    }
    *(undefined2 *)(extraout_a0 + 4) = *(undefined2 *)(iVar2 + 0xe);
    *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(iVar2 + 6);
    uVar1 = *(undefined2 *)(iVar2 + 8);
  }
  else {
    *(ushort *)(extraout_a0 + 4) = *(ushort *)(unaff_s1 + 0x50) >> 1;
    *(short *)(extraout_a0 + 6) = *(short *)(unaff_s1 + 0x36) + -1;
    uVar1 = *(undefined2 *)(*(int **)(unaff_s0 * 4) + 0x15);
  }
  *(undefined2 *)(extraout_a0 + 8) = uVar1;
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 39a7

void llc_ltk_req_send(uint16_t conhdl,llcp_enc_req *param)

{
  undefined *extraout_a0;
  
  _L0();
  *(uint16_t *)(extraout_a0 + 2) = conhdl;
  *extraout_a0 = 5;
  *(undefined2 *)(extraout_a0 + 0xc) = *(undefined2 *)param->ediv;
  (*pcRam00000000)(extraout_a0 + 4,&param->rand,8,pcRam00000000);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s1;
  undefined *extraout_a0;
  undefined2 unaff_s2;
  
  _L0();
  *(undefined2 *)(extraout_a0 + 2) = unaff_s2;
  *extraout_a0 = 5;
  *(undefined2 *)(extraout_a0 + 0xc) = *(undefined2 *)(unaff_s1 + 9);
  (*pcRam00000000)(extraout_a0 + 4,unaff_s1 + 1,8,pcRam00000000);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 38dd

void llc_feats_rd_event_send(uint8_t status,uint16_t conhdl,le_features *feats)

{
  int extraout_a0;
  undefined *extraout_a0_00;
  
  _L0();
  if (extraout_a0 == 0) {
    return;
  }
  FUN_00010838();
  *extraout_a0_00 = 4;
  extraout_a0_00[1] = status;
  *(uint16_t *)(extraout_a0_00 + 2) = conhdl;
  (*pcRam00000000)(extraout_a0_00 + 4,feats,8,pcRam00000000);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 unaff_s1;
  int extraout_a0;
  undefined *extraout_a0_00;
  undefined unaff_s3;
  
  _L0();
  if (extraout_a0 == 0) {
    return;
  }
  FUN_00010838();
  *extraout_a0_00 = 4;
  extraout_a0_00[1] = unaff_s3;
  *(undefined2 *)(extraout_a0_00 + 2) = unaff_s1;
  (*pcRam00000000)(extraout_a0_00 + 4,8,pcRam00000000);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010838(void)

{
  undefined2 unaff_s1;
  undefined *extraout_a0;
  undefined unaff_s3;
  
  FUN_00010838();
  *extraout_a0 = 4;
  extraout_a0[1] = unaff_s3;
  *(undefined2 *)(extraout_a0 + 2) = unaff_s1;
  (*pcRam00000000)(extraout_a0 + 4,8,pcRam00000000);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 385e

void llc_version_rd_event_send(uint8_t status,uint16_t conhdl)

{
  int *piVar1;
  uint8_t *extraout_a0;
  undefined2 in_register_0000202e;
  int iVar2;
  
  _L0();
  *(uint16_t *)(extraout_a0 + 2) = conhdl;
  piVar1 = (int *)(CONCAT22(in_register_0000202e,conhdl) << 2);
  *extraout_a0 = status;
  *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(*piVar1 + 0x3e);
  iVar2 = *piVar1;
  *(undefined2 *)(extraout_a0 + 8) = *(undefined2 *)(iVar2 + 0x40);
  extraout_a0[4] = *(uint8_t *)(iVar2 + 0x3c);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined unaff_s1;
  undefined *extraout_a0;
  int iVar1;
  
  _L0();
  *(short *)(extraout_a0 + 2) = (short)unaff_s0;
  *extraout_a0 = unaff_s1;
  *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(*(int *)(unaff_s0 * 4) + 0x3e);
  iVar1 = *(int *)(unaff_s0 * 4);
  *(undefined2 *)(extraout_a0 + 8) = *(undefined2 *)(iVar1 + 0x40);
  extraout_a0[4] = *(undefined *)(iVar1 + 0x3c);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 37d3

void llc_common_cmd_complete_send(uint16_t opcode,uint8_t status,uint16_t conhdl)

{
  uint8_t *extraout_a0;
  
  _L0();
  *extraout_a0 = status;
  *(uint16_t *)(extraout_a0 + 2) = conhdl;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 unaff_s0;
  undefined unaff_s1;
  undefined *extraout_a0;
  
  _L0();
  *extraout_a0 = unaff_s1;
  *(undefined2 *)(extraout_a0 + 2) = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 374e

void llc_common_cmd_status_send(uint16_t opcode,uint8_t status,uint16_t conhdl)

{
  uint8_t *extraout_a0;
  
  _L0();
  *extraout_a0 = status;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined unaff_s0;
  undefined *extraout_a0;
  
  _L0();
  *extraout_a0 = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 36e0

void llc_common_flush_occurred_send(uint16_t conhdl)

{
  uint16_t *extraout_a0;
  
  _L0();
  *extraout_a0 = conhdl;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 unaff_s0;
  undefined2 *extraout_a0;
  
  _L0();
  *extraout_a0 = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 3660

void llc_common_enc_key_ref_comp_evt_send(uint16_t conhdl,uint8_t status)

{
  uint8_t *extraout_a0;
  
  _L0();
  *(uint16_t *)(extraout_a0 + 2) = conhdl;
  *extraout_a0 = status;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 unaff_s0;
  undefined unaff_s1;
  undefined *extraout_a0;
  
  _L0();
  *(undefined2 *)(extraout_a0 + 2) = unaff_s0;
  *extraout_a0 = unaff_s1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 3557

void llc_common_enc_change_evt_send(uint16_t conhdl,uint8_t enc_status,uint8_t status)

{
  uint8_t *extraout_a0;
  undefined3 in_register_0000202d;
  
  if (CONCAT31(in_register_0000202d,enc_status) == 0) {
    _LVL203();
    FUN_00010a58();
  }
  else {
    FUN_000109f2();
    FUN_00010a06();
  }
  FUN_00010a1a();
  *(uint16_t *)(extraout_a0 + 2) = conhdl;
  extraout_a0[4] = enc_status;
  *extraout_a0 = status;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000109f2(void)

{
  undefined *extraout_a0;
  undefined2 unaff_s2;
  undefined unaff_s3;
  undefined unaff_s4;
  
  FUN_000109f2();
  FUN_00010a06();
  FUN_00010a1a();
  *(undefined2 *)(extraout_a0 + 2) = unaff_s2;
  extraout_a0[4] = unaff_s3;
  *extraout_a0 = unaff_s4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a06(void)

{
  undefined *extraout_a0;
  undefined2 unaff_s2;
  undefined unaff_s3;
  undefined unaff_s4;
  
  FUN_00010a06();
  FUN_00010a1a();
  *(undefined2 *)(extraout_a0 + 2) = unaff_s2;
  extraout_a0[4] = unaff_s3;
  *extraout_a0 = unaff_s4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a1a(void)

{
  undefined *extraout_a0;
  undefined2 unaff_s2;
  undefined unaff_s3;
  undefined unaff_s4;
  
  FUN_00010a1a();
  *(undefined2 *)(extraout_a0 + 2) = unaff_s2;
  extraout_a0[4] = unaff_s3;
  *extraout_a0 = unaff_s4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL203(void)

{
  undefined *extraout_a0;
  undefined2 unaff_s2;
  undefined unaff_s3;
  undefined unaff_s4;
  
  _LVL203();
  FUN_00010a58();
  FUN_00010a1a();
  *(undefined2 *)(extraout_a0 + 2) = unaff_s2;
  extraout_a0[4] = unaff_s3;
  *extraout_a0 = unaff_s4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a58(void)

{
  undefined *extraout_a0;
  undefined2 unaff_s2;
  undefined unaff_s3;
  undefined unaff_s4;
  
  FUN_00010a58();
  FUN_00010a1a();
  *(undefined2 *)(extraout_a0 + 2) = unaff_s2;
  extraout_a0[4] = unaff_s3;
  *extraout_a0 = unaff_s4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 34d8

void llc_common_nb_of_pkt_comp_evt_send(uint16_t conhdl,uint8_t nb_of_pkt)

{
  undefined *extraout_a0;
  undefined3 in_register_0000202d;
  
  _L0();
  *(uint16_t *)(extraout_a0 + 2) = conhdl;
  *(short *)(extraout_a0 + 4) = (short)CONCAT31(in_register_0000202d,nb_of_pkt);
  *extraout_a0 = 1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined2 unaff_s0;
  undefined2 unaff_s1;
  undefined *extraout_a0;
  
  _L0();
  *(undefined2 *)(extraout_a0 + 2) = unaff_s0;
  *(undefined2 *)(extraout_a0 + 4) = unaff_s1;
  *extraout_a0 = 1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 3470

void llc_con_update_ind(uint16_t conhdl,ea_elt_tag *elt_new)

{
  ushort uVar1;
  undefined2 in_register_0000202a;
  int extraout_a0;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  iVar2 = *piVar3;
  uVar1 = *(ushort *)(iVar2 + 0x5c);
  if ((uVar1 & 0xc0) != 0) {
    *(ushort *)(iVar2 + 0x5c) = uVar1 & 0xff3f;
    _LVL213();
    if (extraout_a0 != 0) {
      FUN_00010aea();
    }
  }
  iVar2 = *piVar3;
  if (*(ushort *)((int)&elt_new[2].linked_element + 2) < 2) {
    *(undefined *)(iVar2 + 0x39) = 0;
  }
  else {
    *(undefined *)(iVar2 + 0x39) = 1;
  }
  return;
}



void _LVL213(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  
  _LVL213();
  if (extraout_a0 != 0) {
    FUN_00010aea();
  }
  if (*(ushort *)(unaff_s1 + 0x5e) < 2) {
    *(undefined *)(*(int *)(unaff_s0 + unaff_s2) + 0x39) = 0;
  }
  else {
    *(undefined *)(*(int *)(unaff_s0 + unaff_s2) + 0x39) = 1;
  }
  return;
}



void FUN_00010aea(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  FUN_00010aea();
  if (*(ushort *)(unaff_s1 + 0x5e) < 2) {
    *(undefined *)(*(int *)(unaff_s0 + unaff_s2) + 0x39) = 0;
  }
  else {
    *(undefined *)(*(int *)(unaff_s0 + unaff_s2) + 0x39) = 1;
  }
  return;
}



// DWARF DIE: 33f5

void llc_lsto_con_update(uint16_t conhdl)

{
  int iVar1;
  undefined2 in_register_0000202a;
  uint uVar2;
  
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  uVar2 = (uint)*(ushort *)(iVar1 + 0x54);
  if ((uint)*(ushort *)(iVar1 + 0x54) < (uint)*(ushort *)(iVar1 + 0x56)) {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x56);
  }
  *(short *)(iVar1 + 0x54) = (short)((uVar2 << 0x11) >> 0x10);
  _LVL221();
  *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) | 0x20;
  return;
}



void _LVL221(void)

{
  int unaff_s0;
  
  _LVL221();
  *(ushort *)(unaff_s0 + 0x5c) = *(ushort *)(unaff_s0 + 0x5c) | 0x20;
  return;
}



// DWARF DIE: 32a5

void llc_map_update_ind(uint16_t conhdl)

{
  int iVar1;
  undefined2 in_register_0000202a;
  int extraout_a0;
  int iVar2;
  
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  _LVL226();
  iVar2 = CONCAT22(in_register_0000202a,conhdl) * 0x5c;
  *(undefined2 *)(iVar2 + 0x280080aa) = *(undefined2 *)(iVar1 + 99);
  *(undefined2 *)(iVar2 + 0x280080ac) = *(undefined2 *)(iVar1 + 0x65);
  *(ushort *)(iVar2 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)*(byte *)(iVar1 + 0x67);
  FUN_00010bf6();
  return;
}



void _LVL226(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int iVar1;
  
  _LVL226();
  iVar1 = unaff_s0 * 0x5c;
  *(undefined2 *)(iVar1 + 0x280080aa) = *(undefined2 *)(unaff_s1 + 99);
  *(undefined2 *)(iVar1 + 0x280080ac) = *(undefined2 *)(unaff_s1 + 0x65);
  *(ushort *)(iVar1 + 0x280080ae) = (ushort)(extraout_a0 << 8) | (ushort)*(byte *)(unaff_s1 + 0x67);
  FUN_00010bf6();
  return;
}



void FUN_00010bf6(void)

{
  FUN_00010bf6();
  return;
}



// DWARF DIE: 3157

void llc_con_update_finished(uint16_t conhdl)

{
  ushort uVar1;
  undefined2 in_register_0000202a;
  uint extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int *piVar3;
  
  _L0();
  if ((extraout_a0 & 0xf) != 0xf) {
    _LVL242();
    piVar3 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
    if (extraout_a0_00 == 3) {
      FUN_00010c5c();
      FUN_00010c6a();
      *(undefined *)(*piVar3 + 0xa3) = 0;
    }
    else {
      uVar1 = *(ushort *)(*piVar3 + 0x5c);
      if ((uVar1 & 0x400) == 0) {
        *(ushort *)(*piVar3 + 0x5c) = uVar1 | 0x800;
      }
      else {
        FUN_00010c9e();
        iVar2 = *piVar3;
        *(undefined *)(iVar2 + 0xa4) = 0;
        *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) & 0xfbff;
      }
    }
  }
  return;
}



void _L0(void)

{
  ushort uVar1;
  uint extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int unaff_s2;
  int *piVar3;
  
  _L0();
  if ((extraout_a0 & 0xf) != 0xf) {
    _LVL242();
    piVar3 = (int *)(unaff_s2 * 4);
    if (extraout_a0_00 == 3) {
      FUN_00010c5c();
      FUN_00010c6a();
      *(undefined *)(*piVar3 + 0xa3) = 0;
    }
    else {
      uVar1 = *(ushort *)(*piVar3 + 0x5c);
      if ((uVar1 & 0x400) == 0) {
        *(ushort *)(*piVar3 + 0x5c) = uVar1 | 0x800;
      }
      else {
        FUN_00010c9e();
        iVar2 = *piVar3;
        *(undefined *)(iVar2 + 0xa4) = 0;
        *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) & 0xfbff;
      }
    }
  }
  return;
}



void _LVL242(void)

{
  ushort uVar1;
  int extraout_a0;
  int iVar2;
  int unaff_s2;
  int *piVar3;
  
  _LVL242();
  piVar3 = (int *)(unaff_s2 * 4);
  if (extraout_a0 == 3) {
    FUN_00010c5c();
    FUN_00010c6a();
    *(undefined *)(*piVar3 + 0xa3) = 0;
  }
  else {
    uVar1 = *(ushort *)(*piVar3 + 0x5c);
    if ((uVar1 & 0x400) == 0) {
      *(ushort *)(*piVar3 + 0x5c) = uVar1 | 0x800;
    }
    else {
      FUN_00010c9e();
      iVar2 = *piVar3;
      *(undefined *)(iVar2 + 0xa4) = 0;
      *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) & 0xfbff;
    }
  }
  return;
}



void FUN_00010c5c(void)

{
  int unaff_s0;
  int unaff_s4;
  
  FUN_00010c5c();
  FUN_00010c6a();
  *(undefined *)(*(int *)(unaff_s0 + unaff_s4) + 0xa3) = 0;
  return;
}



void FUN_00010c6a(void)

{
  int unaff_s0;
  int unaff_s4;
  
  FUN_00010c6a();
  *(undefined *)(*(int *)(unaff_s0 + unaff_s4) + 0xa3) = 0;
  return;
}



void FUN_00010c9e(void)

{
  int *unaff_s0;
  int iVar1;
  
  FUN_00010c9e();
  iVar1 = *unaff_s0;
  *(undefined *)(iVar1 + 0xa4) = 0;
  *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) & 0xfbff;
  return;
}



// DWARF DIE: 3022

void llc_map_update_finished(uint16_t conhdl)

{
  ushort uVar1;
  undefined2 in_register_0000202a;
  uint extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int *piVar3;
  
  _L0();
  if ((extraout_a0 & 0xf) != 0xf) {
    _LVL257();
    piVar3 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
    if (extraout_a0_00 == 3) {
      FUN_00010d18();
      *(undefined *)(*piVar3 + 0xa3) = 0;
    }
    else {
      uVar1 = *(ushort *)(*piVar3 + 0x5c);
      if ((uVar1 & 0x400) == 0) {
        *(ushort *)(*piVar3 + 0x5c) = uVar1 | 0x800;
      }
      else {
        FUN_00010d4a();
        iVar2 = *piVar3;
        *(undefined *)(iVar2 + 0xa4) = 0;
        *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) & 0xfbff;
      }
    }
  }
  return;
}



void _L0(void)

{
  ushort uVar1;
  uint extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int unaff_s2;
  int *piVar3;
  
  _L0();
  if ((extraout_a0 & 0xf) != 0xf) {
    _LVL257();
    piVar3 = (int *)(unaff_s2 * 4);
    if (extraout_a0_00 == 3) {
      FUN_00010d18();
      *(undefined *)(*piVar3 + 0xa3) = 0;
    }
    else {
      uVar1 = *(ushort *)(*piVar3 + 0x5c);
      if ((uVar1 & 0x400) == 0) {
        *(ushort *)(*piVar3 + 0x5c) = uVar1 | 0x800;
      }
      else {
        FUN_00010d4a();
        iVar2 = *piVar3;
        *(undefined *)(iVar2 + 0xa4) = 0;
        *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) & 0xfbff;
      }
    }
  }
  return;
}



void _LVL257(void)

{
  ushort uVar1;
  int extraout_a0;
  int iVar2;
  int unaff_s2;
  int *piVar3;
  
  _LVL257();
  piVar3 = (int *)(unaff_s2 * 4);
  if (extraout_a0 == 3) {
    FUN_00010d18();
    *(undefined *)(*piVar3 + 0xa3) = 0;
  }
  else {
    uVar1 = *(ushort *)(*piVar3 + 0x5c);
    if ((uVar1 & 0x400) == 0) {
      *(ushort *)(*piVar3 + 0x5c) = uVar1 | 0x800;
    }
    else {
      FUN_00010d4a();
      iVar2 = *piVar3;
      *(undefined *)(iVar2 + 0xa4) = 0;
      *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) & 0xfbff;
    }
  }
  return;
}



void FUN_00010d18(void)

{
  int unaff_s0;
  int unaff_s2;
  
  FUN_00010d18();
  *(undefined *)(*(int *)(unaff_s0 + unaff_s2) + 0xa3) = 0;
  return;
}



void FUN_00010d4a(void)

{
  int *unaff_s0;
  int iVar1;
  
  FUN_00010d4a();
  iVar1 = *unaff_s0;
  *(undefined *)(iVar1 + 0xa4) = 0;
  *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) & 0xfbff;
  return;
}


