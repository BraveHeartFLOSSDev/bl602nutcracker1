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
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef ushort uint16_t;

struct co_list_hdr { // DWARF DIE: 168b
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: c47
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: 17ba
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 175e
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 16ac
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 17fc
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

struct llc_ch_asses_tag { // DWARF DIE: 2f6d
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef int _ssize_t;

typedef union anon_union.conflict18bf anon_union.conflict18bf, *Panon_union.conflict18bf;

typedef uint wint_t;

union anon_union.conflict18bf { // DWARF DIE: 18bf
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict18bf_for___value anon_union.conflict18bf_for___value, *Panon_union.conflict18bf_for___value;

union anon_union.conflict18bf_for___value { // DWARF DIE: 18bf
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 18f1
    int __count;
    union anon_union.conflict18bf_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 294f
    struct em_buf_node * conn_req_desc_node;
    uint16_t interval;
    uint16_t window;
    uint8_t filterpolicy;
    uint8_t type;
    uint8_t filter_duplicate;
    uint8_t own_addr_type;
};

typedef struct llm_le_env_tag llm_le_env_tag, *Pllm_le_env_tag;

typedef struct advertising_pdu_params advertising_pdu_params, *Padvertising_pdu_params;

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

typedef struct channel_map_assess channel_map_assess, *Pchannel_map_assess;

typedef struct evt_mask evt_mask, *Pevt_mask;

typedef struct access_addr_gen access_addr_gen, *Paccess_addr_gen;

typedef struct ea_elt_tag ea_elt_tag, *Pea_elt_tag;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

typedef struct bd_addr bd_addr, *Pbd_addr;

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

typedef enum t_key_multiplication_type {
    LLM_DHKEY_GENERATION=2,
    LLM_ECC_IDLE=0,
    LLM_PUBLIC_KEY_GENERATION=1
} t_key_multiplication_type;

typedef enum t_key_multiplication_type t_key_multi_type;

typedef struct ke_msg ke_msg, *Pke_msg;

typedef struct le_chnl_map le_chnl_map, *Ple_chnl_map;

typedef ulong uint32_t;

typedef uint16_t ke_msg_id_t;

typedef uint16_t ke_task_id_t;

struct bd_addr { // DWARF DIE: 303
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 2878
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

struct llm_test_mode { // DWARF DIE: 29ed
    _Bool end_of_tst;
    uint8_t directtesttype;
};

struct ea_elt_tag { // DWARF DIE: 2790
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

struct data_len_ext { // DWARF DIE: 2a18
    uint16_t conn_initial_max_tx_octets;
    uint16_t conn_initial_max_tx_time;
    uint16_t suppted_max_tx_octets;
    uint16_t suppted_max_tx_time;
    uint16_t suppted_max_rx_octets;
    uint16_t suppted_max_rx_time;
};

struct t_public_key256 { // DWARF DIE: 2ab3
    uint8_t x[32];
    uint8_t y[32];
};

struct le_chnl_map { // DWARF DIE: 37f
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 2ae7
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 2d6
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 29b8
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 2b58
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

struct ke_msg { // DWARF DIE: 2191
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
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

typedef enum anon_enum_8.conflictf4 {
    ADV_DIS=0,
    ADV_EN=1,
    ADV_EN_END=2,
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0,
    SCAN_DIS=0,
    SCAN_EN=1,
    SCAN_EN_END=2
} anon_enum_8.conflictf4;

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

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

typedef struct hci_rd_rfpath_cps_cmd_cmp_evt hci_rd_rfpath_cps_cmd_cmp_evt, *Phci_rd_rfpath_cps_cmd_cmp_evt;

struct hci_rd_rfpath_cps_cmd_cmp_evt { // DWARF DIE: 13fa
    uint8_t status;
    undefined field_0x1;
    uint16_t rf_txpath_compensation_value;
    uint16_t rf_rxpath_compensation_value;
};

typedef struct hci_host_buf_size_cmd hci_host_buf_size_cmd, *Phci_host_buf_size_cmd;

struct hci_host_buf_size_cmd { // DWARF DIE: ce3
    uint16_t acl_pkt_len;
    uint8_t sync_pkt_len;
    undefined field_0x3;
    uint16_t nb_acl_pkts;
    uint16_t nb_sync_pkts;
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

typedef struct hci_le_enc_cmd hci_le_enc_cmd, *Phci_le_enc_cmd;

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 3ac
    uint8_t ltk[16];
};

struct hci_le_enc_cmd { // DWARF DIE: 1229
    struct ltk key;
    uint8_t plain_data[16];
};

typedef struct hci_rd_local_ver_info_cmd_cmp_evt hci_rd_local_ver_info_cmd_cmp_evt, *Phci_rd_local_ver_info_cmd_cmp_evt;

struct hci_rd_local_ver_info_cmd_cmp_evt { // DWARF DIE: d8d
    uint8_t status;
    uint8_t hci_ver;
    uint16_t hci_rev;
    uint8_t lmp_ver;
    undefined field_0x5;
    uint16_t manuf_name;
    uint16_t lmp_subver;
};

typedef struct hci_le_rx_test_cmd hci_le_rx_test_cmd, *Phci_le_rx_test_cmd;

struct hci_le_rx_test_cmd { // DWARF DIE: 11d3
    uint8_t rx_freq;
};

typedef struct hci_rd_trans_pwr_cmd_cmp_evt hci_rd_trans_pwr_cmd_cmp_evt, *Phci_rd_trans_pwr_cmd_cmp_evt;

struct hci_rd_trans_pwr_cmd_cmp_evt { // DWARF DIE: 13b5
    uint8_t status;
    char min_tx_pwr;
    char max_tx_pwr;
};

typedef struct hci_le_set_scan_rsp_data_cmd hci_le_set_scan_rsp_data_cmd, *Phci_le_set_scan_rsp_data_cmd;

typedef struct scan_rsp_data scan_rsp_data, *Pscan_rsp_data;

struct scan_rsp_data { // DWARF DIE: 362
    uint8_t data[31];
};

struct hci_le_set_scan_rsp_data_cmd { // DWARF DIE: fbe
    uint8_t scan_rsp_data_len;
    struct scan_rsp_data data;
};

typedef struct hci_le_rd_suggted_dft_data_len_cmd_cmp_evt hci_le_rd_suggted_dft_data_len_cmd_cmp_evt, *Phci_le_rd_suggted_dft_data_len_cmd_cmp_evt;

struct hci_le_rd_suggted_dft_data_len_cmd_cmp_evt { // DWARF DIE: 145e
    uint8_t status;
    undefined field_0x1;
    uint16_t suggted_max_tx_octets;
    uint16_t suggted_max_tx_time;
};

typedef struct hci_le_rd_max_data_len_cmd_cmp_evt hci_le_rd_max_data_len_cmd_cmp_evt, *Phci_le_rd_max_data_len_cmd_cmp_evt;

struct hci_le_rd_max_data_len_cmd_cmp_evt { // DWARF DIE: 1497
    uint8_t status;
    undefined field_0x1;
    uint16_t suppted_max_tx_octets;
    uint16_t suppted_max_tx_time;
    uint16_t suppted_max_rx_octets;
    uint16_t suppted_max_rx_time;
};

typedef struct hci_rd_bd_addr_cmd_cmp_evt hci_rd_bd_addr_cmd_cmp_evt, *Phci_rd_bd_addr_cmd_cmp_evt;

struct hci_rd_bd_addr_cmd_cmp_evt { // DWARF DIE: e9b
    uint8_t status;
    struct bd_addr local_addr;
};

typedef struct hci_rd_adv_chnl_tx_pw_cmd_cmp_evt hci_rd_adv_chnl_tx_pw_cmd_cmp_evt, *Phci_rd_adv_chnl_tx_pw_cmd_cmp_evt;

struct hci_rd_adv_chnl_tx_pw_cmd_cmp_evt { // DWARF DIE: 12d1
    uint8_t status;
    int8_t adv_tx_pw_lvl;
};

typedef struct hci_rd_wlst_size_cmd_cmp_evt hci_rd_wlst_size_cmd_cmp_evt, *Phci_rd_wlst_size_cmd_cmp_evt;

struct hci_rd_wlst_size_cmd_cmp_evt { // DWARF DIE: 12fc
    uint8_t status;
    uint8_t wlst_size;
};

typedef struct hci_le_set_rand_addr_cmd hci_le_set_rand_addr_cmd, *Phci_le_set_rand_addr_cmd;

struct hci_le_set_rand_addr_cmd { // DWARF DIE: ee8
    struct bd_addr rand_addr;
};

typedef struct hci_le_generate_dh_key_cmd hci_le_generate_dh_key_cmd, *Phci_le_generate_dh_key_cmd;

struct hci_le_generate_dh_key_cmd { // DWARF DIE: c82
    uint8_t public_key[64];
};

typedef struct hci_set_evt_mask_cmd hci_set_evt_mask_cmd, *Phci_set_evt_mask_cmd;

struct hci_set_evt_mask_cmd { // DWARF DIE: c9f
    struct evt_mask event_mask;
};

typedef struct hci_set_ctrl_to_host_flow_ctrl_cmd hci_set_ctrl_to_host_flow_ctrl_cmd, *Phci_set_ctrl_to_host_flow_ctrl_cmd;

struct hci_set_ctrl_to_host_flow_ctrl_cmd { // DWARF DIE: cc1
    uint8_t flow_cntl;
};

typedef struct hci_le_wr_rfpath_cps_cmd hci_le_wr_rfpath_cps_cmd, *Phci_le_wr_rfpath_cps_cmd;

struct hci_le_wr_rfpath_cps_cmd { // DWARF DIE: 1156
    uint16_t rf_txpath_compensation_value;
    uint16_t rf_rxpath_compensation_value;
};

typedef struct hci_le_add_dev_to_wlst_cmd hci_le_add_dev_to_wlst_cmd, *Phci_le_add_dev_to_wlst_cmd;

struct hci_le_add_dev_to_wlst_cmd { // DWARF DIE: 1186
    uint8_t dev_addr_type;
    struct bd_addr dev_addr;
};

typedef struct hci_le_set_evt_mask_cmd hci_le_set_evt_mask_cmd, *Phci_le_set_evt_mask_cmd;

struct hci_le_set_evt_mask_cmd { // DWARF DIE: ec6
    struct evt_mask le_mask;
};

typedef struct hci_rd_buff_size_cmd_cmp_evt hci_rd_buff_size_cmd_cmp_evt, *Phci_rd_buff_size_cmd_cmp_evt;

struct hci_rd_buff_size_cmd_cmp_evt { // DWARF DIE: e46
    uint8_t status;
    undefined field_0x1;
    uint16_t hc_data_pk_len;
    uint8_t hc_sync_pk_len;
    undefined field_0x5;
    uint16_t hc_tot_nb_data_pkts;
    uint16_t hc_tot_nb_sync_pkts;
};

typedef struct hci_le_rd_local_supp_feats_cmd_cmp_evt hci_le_rd_local_supp_feats_cmd_cmp_evt, *Phci_le_rd_local_supp_feats_cmd_cmp_evt;

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 3f5
    uint8_t feats[8];
};

struct hci_le_rd_local_supp_feats_cmd_cmp_evt { // DWARF DIE: 12a6
    uint8_t status;
    struct le_features feats;
};

typedef struct hci_le_rd_buff_size_cmd_cmp_evt hci_le_rd_buff_size_cmd_cmp_evt, *Phci_le_rd_buff_size_cmd_cmp_evt;

struct hci_le_rd_buff_size_cmd_cmp_evt { // DWARF DIE: 1327
    uint8_t status;
    undefined field_0x1;
    uint16_t hc_data_pk_len;
    uint8_t hc_tot_nb_data_pkts;
    undefined field_0x5;
};

typedef struct hci_vsc_set_tx_pwr_cmd hci_vsc_set_tx_pwr_cmd, *Phci_vsc_set_tx_pwr_cmd;

struct hci_vsc_set_tx_pwr_cmd { // DWARF DIE: 1289
    int8_t power;
};

typedef struct hci_le_wr_suggted_dft_data_len_cmd hci_le_wr_suggted_dft_data_len_cmd, *Phci_le_wr_suggted_dft_data_len_cmd;

struct hci_le_wr_suggted_dft_data_len_cmd { // DWARF DIE: 1259
    uint16_t suggted_max_tx_octets;
    uint16_t suggted_max_tx_time;
};

typedef struct hci_rd_local_supp_cmds_cmd_cmp_evt hci_rd_local_supp_cmds_cmd_cmp_evt, *Phci_rd_local_supp_cmds_cmd_cmp_evt;

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 434
    uint8_t cmds[64];
};

struct hci_rd_local_supp_cmds_cmd_cmp_evt { // DWARF DIE: df0
    uint8_t status;
    struct supp_cmds local_cmds;
};

typedef struct hci_host_nb_cmp_pkts_cmd hci_host_nb_cmp_pkts_cmd, *Phci_host_nb_cmp_pkts_cmd;

struct hci_host_nb_cmp_pkts_cmd { // DWARF DIE: d2f
    uint8_t nb_of_hdl;
    undefined field_0x1;
    uint16_t con_hdl[3];
    uint16_t nb_comp_pkt[3];
};

typedef struct hci_le_set_adv_data_cmd hci_le_set_adv_data_cmd, *Phci_le_set_adv_data_cmd;

typedef struct adv_data adv_data, *Padv_data;

struct adv_data { // DWARF DIE: 335
    uint8_t data[31];
};

struct hci_le_set_adv_data_cmd { // DWARF DIE: f8e
    uint8_t adv_data_len;
    struct adv_data data;
};

typedef struct hci_le_tx_test_cmd hci_le_tx_test_cmd, *Phci_le_tx_test_cmd;

struct hci_le_tx_test_cmd { // DWARF DIE: 11f0
    uint8_t tx_freq;
    uint8_t test_data_len;
    uint8_t pk_payload_type;
};

typedef struct hci_le_set_host_ch_class_cmd hci_le_set_host_ch_class_cmd, *Phci_le_set_host_ch_class_cmd;

struct hci_le_set_host_ch_class_cmd { // DWARF DIE: 11b1
    struct le_chnl_map chmap;
};

typedef struct hci_rd_supp_states_cmd_cmp_evt hci_rd_supp_states_cmd_cmp_evt, *Phci_rd_supp_states_cmd_cmp_evt;

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 47d
    uint8_t supp_states[8];
};

struct hci_rd_supp_states_cmd_cmp_evt { // DWARF DIE: 138a
    uint8_t status;
    struct le_states states;
};

typedef struct hci_le_set_adv_param_cmd hci_le_set_adv_param_cmd, *Phci_le_set_adv_param_cmd;

struct hci_le_set_adv_param_cmd { // DWARF DIE: f0a
    uint16_t adv_intv_min;
    uint16_t adv_intv_max;
    uint8_t adv_type;
    uint8_t own_addr_type;
    uint8_t peer_addr_type;
    struct bd_addr peer_addr;
    uint8_t adv_chnl_map;
    uint8_t adv_filt_policy;
    undefined field_0xf;
};

typedef struct hci_le_rand_cmd_cmp_evt hci_le_rand_cmd_cmp_evt, *Phci_le_rand_cmd_cmp_evt;

typedef struct rand_nb rand_nb, *Prand_nb;

struct rand_nb { // DWARF DIE: 3d9
    uint8_t nb[8];
};

struct hci_le_rand_cmd_cmp_evt { // DWARF DIE: 1360
    uint8_t status;
    struct rand_nb nb;
};

typedef struct hci_le_set_scan_en_cmd hci_le_set_scan_en_cmd, *Phci_le_set_scan_en_cmd;

struct hci_le_set_scan_en_cmd { // DWARF DIE: 106a
    uint8_t scan_en;
    uint8_t filter_duplic_en;
};

typedef struct hci_le_create_con_cmd hci_le_create_con_cmd, *Phci_le_create_con_cmd;

struct hci_le_create_con_cmd { // DWARF DIE: 109a
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

typedef struct hci_le_set_adv_en_cmd hci_le_set_adv_en_cmd, *Phci_le_set_adv_en_cmd;

struct hci_le_set_adv_en_cmd { // DWARF DIE: fee
    uint8_t adv_en;
};

typedef struct hci_test_end_cmd_cmp_evt hci_test_end_cmd_cmp_evt, *Phci_test_end_cmd_cmp_evt;

struct hci_test_end_cmd_cmp_evt { // DWARF DIE: 1433
    uint8_t status;
    undefined field_0x1;
    uint16_t nb_packet_received;
};

typedef struct hci_rd_local_supp_feats_cmd_cmp_evt hci_rd_local_supp_feats_cmd_cmp_evt, *Phci_rd_local_supp_feats_cmd_cmp_evt;

typedef struct features features, *Pfeatures;

struct features { // DWARF DIE: 417
    uint8_t feats[8];
};

struct hci_rd_local_supp_feats_cmd_cmp_evt { // DWARF DIE: e1b
    uint8_t status;
    struct features feats;
};

typedef struct hci_le_set_scan_param_cmd hci_le_set_scan_param_cmd, *Phci_le_set_scan_param_cmd;

struct hci_le_set_scan_param_cmd { // DWARF DIE: 1010
    uint8_t scan_type;
    undefined field_0x1;
    uint16_t scan_intv;
    uint16_t scan_window;
    uint8_t own_addr_type;
    uint8_t scan_filt_policy;
};

typedef enum hci_evt_mask_page {
    HCI_PAGE_0=0,
    HCI_PAGE_1=1,
    HCI_PAGE_2=2,
    HCI_PAGE_DFT=3
} hci_evt_mask_page;

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 20b9
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

struct rwip_rf_api { // DWARF DIE: 2591
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

struct rwip_prio { // DWARF DIE: 2715
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 23f2
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 241e
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef enum adv_filter_policy {
    ADV_ALLOW_SCAN_ANY_CON_ANY=0,
    ADV_ALLOW_SCAN_ANY_CON_WLST=2,
    ADV_ALLOW_SCAN_END=4,
    ADV_ALLOW_SCAN_WLST_CON_ANY=1,
    ADV_ALLOW_SCAN_WLST_CON_WLST=3
} adv_filter_policy;

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: 49f
    uint8_t skd[16];
};

typedef enum scan_filter_policy {
    SCAN_ALLOW_ADV_ALL=0,
    SCAN_ALLOW_ADV_ALL_AND_INIT_RPA=2,
    SCAN_ALLOW_ADV_END=4,
    SCAN_ALLOW_ADV_WLST=1,
    SCAN_ALLOW_ADV_WLST_AND_INIT_RPA=3
} scan_filter_policy;

typedef enum bl_flag_wl {
    LLM_UTIL_BL_CLEAR_WL=1,
    LLM_UTIL_BL_NO_ACTION_WL=0,
    LLM_UTIL_BL_SET_WL=2
} bl_flag_wl;

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 2e00
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

typedef union anon_union.conflict2084_for__new anon_union.conflict2084_for__new, *Panon_union.conflict2084_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict1ef8 anon_struct.conflict1ef8, *Panon_struct.conflict1ef8;

typedef struct anon_struct.conflict203d anon_struct.conflict203d, *Panon_struct.conflict203d;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: 19b5
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

struct _rand48 { // DWARF DIE: 1eaf
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict1ef8 { // DWARF DIE: 1ef8
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

struct anon_struct.conflict203d { // DWARF DIE: 203d
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict2084_for__new { // DWARF DIE: 2084
    struct anon_struct.conflict1ef8 _reent;
    struct anon_struct.conflict203d _unused;
};

struct _on_exit_args { // DWARF DIE: 1a38
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 1a8d
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 1945
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 1e6a
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 1ae6
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 1b14
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

struct _reent { // DWARF DIE: 1c80
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
    union anon_union.conflict2084_for__new _new;
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

typedef union anon_union.conflict2084 anon_union.conflict2084, *Panon_union.conflict2084;

union anon_union.conflict2084 { // DWARF DIE: 2084
    struct anon_struct.conflict1ef8 _reent;
    struct anon_struct.conflict203d _unused;
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

struct llm_enc_req { // DWARF DIE: 2513
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

struct encrypt { // DWARF DIE: 2ff4
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct rem_version { // DWARF DIE: 2fbf
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct data_len_ext_tag { // DWARF DIE: 3029
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

struct llc_env_tag { // DWARF DIE: 30b9
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 32e6

int hci_vsc_set_tx_pwr(ke_msg_id_t msgid,hci_vsc_set_tx_pwr_cmd *param,ke_task_id_t dest_id,
                      ke_task_id_t src_id)

{
  if ((byte)param->power < 0x15) {
    (*_DAT_00000010)(0x12,_DAT_00000010);
  }
  FUN_00010026();
  return 0;
}



undefined4 FUN_00010026(void)

{
  FUN_00010026();
  return 0;
}



// DWARF DIE: 4d4c

int hci_le_wr_rfpath_compensation_cmd_handler
              (ke_msg_id_t msgid,hci_le_wr_rfpath_cps_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uRam00000000 = param->rf_rxpath_compensation_value;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3a23

int hci_wr_le_host_supp_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
                    // WARNING: Load size is inaccurate
  DAT_00000008 = *param << 1 | DAT_00000008;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 352f

int hci_le_wr_suggted_dft_data_len_cmd_handler
              (ke_msg_id_t msgid,hci_le_wr_suggted_dft_data_len_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  if (((ushort)(param->suggted_max_tx_octets - 0x1b) < 0xe1) &&
     ((ushort)(param->suggted_max_tx_time - 0x148) < 0x701)) {
    _DAT_00000022 = param->suggted_max_tx_time;
    _DAT_00000020 = param->suggted_max_tx_octets;
  }
  FUN_000100de();
  return 0;
}



undefined4 FUN_000100de(void)

{
  FUN_000100de();
  return 0;
}



// DWARF DIE: 5087

int hci_le_set_evt_mask_cmd_handler
              (ke_msg_id_t msgid,hci_le_set_evt_mask_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  (*pcRam00000000)(0x38,8,pcRam00000000);
  FUN_0001010e();
  return 0;
}



undefined4 FUN_0001010e(void)

{
  FUN_0001010e();
  return 0;
}



// DWARF DIE: 4dcf

int hci_le_rd_rfpath_compensation_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined2 uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)_L0();
  *(undefined2 *)(puVar2 + 2) = uRam00000000;
  uVar1 = uRam00000000;
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 4) = uVar1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)_L0();
  *(undefined2 *)(puVar2 + 2) = uRam00000000;
  uVar1 = uRam00000000;
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 4) = uVar1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 4e75

int hci_le_rd_trans_pwr_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)_L0(DAT_0000002c);
  puVar2[1] = 0;
  uVar1 = DAT_0000002c;
  *puVar2 = 0;
  puVar2[2] = uVar1;
  _L0();
  return 0;
}



undefined4 _L0(undefined param_1)

{
  undefined uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)_L0(param_1);
  puVar2[1] = 0;
  uVar1 = param_1;
  *puVar2 = 0;
  puVar2[2] = uVar1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3655

int hci_rd_buff_size_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  *(undefined2 *)(puVar1 + 6) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  puVar1[4] = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  *(undefined2 *)(puVar1 + 6) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  puVar1[4] = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3aa3

int hci_rd_local_supp_feats_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  (*pcRam00000000)(puVar1 + 1,0,8,pcRam00000000);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  (*pcRam00000000)(puVar1 + 1,0,8,pcRam00000000);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3b5e

int hci_rd_local_supp_cmds_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  (*pcRam00000000)(puVar1 + 1,0,0x40,pcRam00000000);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  (*pcRam00000000)(puVar1 + 1,0,0x40,pcRam00000000);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3c22

int hci_rd_local_ver_info_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)_L0();
  puVar1[4] = 0x321;
  puVar1[1] = 0x321;
  *puVar1 = 0x900;
  puVar1[3] = 0x7af;
  *(undefined *)(puVar1 + 2) = 9;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  short unaff_s0;
  short *psVar1;
  
  psVar1 = (short *)_L0();
  psVar1[4] = 0x321;
  psVar1[1] = 0x321;
  *psVar1 = unaff_s0 + -0x700;
  psVar1[3] = 0x7af;
  *(undefined *)(psVar1 + 2) = 9;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3cc7

int hci_rd_bd_addr_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  (*pcRam00000000)(puVar1 + 1,0x61,6,pcRam00000000);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  (*pcRam00000000)(puVar1 + 1,0x61,6,pcRam00000000);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3489

int hci_le_rd_max_data_len_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0(_DAT_00000024,_DAT_00000028);
  *(undefined2 *)(puVar1 + 6) = _DAT_00000028;
  *(undefined2 *)(puVar1 + 8) = _DAT_0000002a;
  *(undefined2 *)(puVar1 + 2) = _DAT_00000024;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 4) = _DAT_00000026;
  _L0();
  return 0;
}



undefined4 _L0(undefined4 uRam00000024,undefined4 uRam00000028)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0(uRam00000024,uRam00000028);
  *(undefined2 *)(puVar1 + 6) = (undefined2)uRam00000028;
  *(undefined2 *)(puVar1 + 8) = uRam00000028._2_2_;
  *(undefined2 *)(puVar1 + 2) = (undefined2)uRam00000024;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 4) = uRam00000024._2_2_;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 35af

int hci_le_rd_suggted_dft_data_len_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0(_DAT_00000020);
  *(undefined2 *)(puVar1 + 2) = _DAT_00000020;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 4) = _DAT_00000022;
  _L0();
  return 0;
}



undefined4 _L0(undefined4 uRam00000020)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0(uRam00000020);
  *(undefined2 *)(puVar1 + 2) = (undefined2)uRam00000020;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 4) = uRam00000020._2_2_;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 4107

int hci_le_rd_supp_states_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  (*pcRam00000000)(puVar1 + 1,0,8,pcRam00000000);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  (*pcRam00000000)(puVar1 + 1,0,8,pcRam00000000);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 41c9

int hci_le_rd_wl_size_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  *puVar1 = 0;
  puVar1[1] = 4;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  *puVar1 = 0;
  puVar1[1] = 4;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4c90

int hci_le_rd_adv_ch_tx_pw_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)_L0(_DAT_00000014,DAT_0000002c);
  uVar1 = (*_DAT_00000014)(DAT_0000002c,1,_DAT_00000014);
  puVar2[1] = uVar1;
  *puVar2 = 0;
  FUN_00010474();
  return 0;
}



undefined4 _L0(undefined *pcRam00000014,undefined param_2)

{
  undefined uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)_L0(pcRam00000014,param_2);
  uVar1 = (*(code *)pcRam00000014)(param_2,1,pcRam00000014);
  puVar2[1] = uVar1;
  *puVar2 = 0;
  FUN_00010474();
  return 0;
}



undefined4 FUN_00010474(void)

{
  FUN_00010474();
  return 0;
}



// DWARF DIE: 426f

int hci_le_rd_local_supp_feats_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  (*pcRam00000000)(puVar1 + 1,0,8,pcRam00000000);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_L0();
  (*pcRam00000000)(puVar1 + 1,0,8,pcRam00000000);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4061

int hci_le_rd_buff_size_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined2 uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)_L0(_DAT_00000024);
  puVar2[4] = 2;
  uVar1 = _DAT_00000024;
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 2) = uVar1;
  _L0();
  return 0;
}



undefined4 _L0(undefined2 uRam00000024)

{
  undefined2 uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)_L0(uRam00000024);
  puVar2[4] = 2;
  uVar1 = uRam00000024;
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 2) = uVar1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3366

int hci_le_generate_dhkey_cmd_handler
              (ke_msg_id_t msgid,hci_le_generate_dh_key_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int iVar1;
  hci_le_generate_dh_key_cmd *phVar2;
  
  iVar1 = 0;
  do {
    if (param->public_key[iVar1] != '\0') {
      iVar1 = 0;
      goto _L0;
    }
    iVar1 += 1;
  } while (iVar1 != 0x20);
  iVar1 = 0x12;
_L0:
  phVar2 = (hci_le_generate_dh_key_cmd *)(param->public_key + 0x20);
  do {
    if (phVar2->public_key[0] != '\0') goto _L0;
    phVar2 = (hci_le_generate_dh_key_cmd *)(phVar2->public_key + 1);
  } while (param + 1 != phVar2);
  iVar1 = 0x12;
_L0:
  if ((DAT_000000d3 == '\0') && (iVar1 == 0)) {
    DAT_000000d3 = '\x02';
    _LVL154();
  }
  _LVL156();
  return 0;
}



undefined4 _LVL154(void)

{
  _LVL154();
  _LVL156();
  return 0;
}



undefined4 _LVL156(void)

{
  _LVL156();
  return 0;
}



// DWARF DIE: 36fb

int hci_host_nb_cmp_pkts_cmd_handler
              (ke_msg_id_t msgid,hci_host_nb_cmp_pkts_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int iVar1;
  uint8_t uVar2;
  ushort *puVar3;
  
  puVar3 = param->con_hdl;
  iVar1 = 0;
  for (uVar2 = '\0'; param->nb_of_hdl != uVar2; uVar2 += '\x01') {
    if (1 < *puVar3) {
      iVar1 = 0x12;
    }
    puVar3 = puVar3 + 1;
  }
  _L0();
  if (iVar1 != 0) {
    FUN_000105c2();
  }
  return 0;
}



undefined4 _L0(void)

{
  int in_stack_00000008;
  
  _L0();
  if (in_stack_00000008 != 0) {
    FUN_000105c2();
  }
  return 0;
}



undefined4 FUN_000105c2(void)

{
  FUN_000105c2();
  return 0;
}



// DWARF DIE: 37b7

int hci_host_buf_size_cmd_handler
              (ke_msg_id_t msgid,hci_host_buf_size_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  _L0();
  _LVL179();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  _LVL179();
  return 0;
}



undefined4 _LVL179(void)

{
  _LVL179();
  return 0;
}



// DWARF DIE: 38e3

int hci_set_evt_mask_page_2_cmd_handler
              (ke_msg_id_t msgid,hci_set_evt_mask_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  _L0();
  _LVL185();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  _LVL185();
  return 0;
}



undefined4 _LVL185(void)

{
  _LVL185();
  return 0;
}



// DWARF DIE: 3986

int hci_set_evt_mask_cmd_handler
              (ke_msg_id_t msgid,hci_set_evt_mask_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  _L0();
  _LVL191();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  _LVL191();
  return 0;
}



undefined4 _LVL191(void)

{
  _LVL191();
  return 0;
}



// DWARF DIE: 3849

int hci_set_ctrl_to_host_flow_ctrl_cmd_handler
              (ke_msg_id_t msgid,hci_set_ctrl_to_host_flow_ctrl_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  if (param->flow_cntl < 4) {
    _L0();
  }
  FUN_0001069e();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_0001069e();
  return 0;
}



undefined4 FUN_0001069e(void)

{
  FUN_0001069e();
  return 0;
}



// DWARF DIE: 3d89

int hci_reset_cmd_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  _L0();
  FUN_000106c2();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000106c2();
  return 0;
}



undefined4 FUN_000106c2(void)

{
  FUN_000106c2();
  return 0;
}



// DWARF DIE: 4695

int hci_le_tx_test_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  undefined2 in_register_00002036;
  
  iVar1 = _L0();
  if ((iVar1 == 0) && (CONCAT22(in_register_00002036,src_id) == 0x201e)) {
    FUN_000106f4();
  }
  _LVL207();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = _L0();
  if ((iVar1 == 0) && (unaff_s0 == 0x201e)) {
    FUN_000106f4();
  }
  _LVL207();
  return 0;
}



undefined4 FUN_000106f4(void)

{
  FUN_000106f4();
  _LVL207();
  return 0;
}



undefined4 _LVL207(void)

{
  _LVL207();
  return 0;
}



// DWARF DIE: 473e

int hci_le_rx_test_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  undefined2 in_register_00002036;
  
  iVar1 = _L0();
  if ((iVar1 == 0) && (CONCAT22(in_register_00002036,src_id) == 0x201d)) {
    FUN_00010738();
  }
  _LVL215();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = _L0();
  if ((iVar1 == 0) && (unaff_s0 == 0x201d)) {
    FUN_00010738();
  }
  _LVL215();
  return 0;
}



undefined4 FUN_00010738(void)

{
  FUN_00010738();
  _LVL215();
  return 0;
}



undefined4 _LVL215(void)

{
  _LVL215();
  return 0;
}



// DWARF DIE: 3e65

int hci_le_rand_cmd_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined *)_L0();
  uVar2 = _L0();
  puVar1[1] = (char)uVar2;
  puVar1[2] = (char)((uint)uVar2 >> 8);
  puVar1[3] = (char)((uint)uVar2 >> 0x10);
  puVar1[4] = (char)((uint)uVar2 >> 0x18);
  uVar2 = _L0();
  puVar1[5] = (char)uVar2;
  puVar1[6] = (char)((uint)uVar2 >> 8);
  puVar1[8] = (char)((uint)uVar2 >> 0x18);
  puVar1[7] = (char)((uint)uVar2 >> 0x10);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined *)_L0();
  uVar2 = _L0();
  puVar1[1] = (char)uVar2;
  puVar1[2] = (char)((uint)uVar2 >> 8);
  puVar1[3] = (char)((uint)uVar2 >> 0x10);
  puVar1[4] = (char)((uint)uVar2 >> 0x18);
  uVar2 = _L0();
  puVar1[5] = (char)uVar2;
  puVar1[6] = (char)((uint)uVar2 >> 8);
  puVar1[8] = (char)((uint)uVar2 >> 0x18);
  puVar1[7] = (char)((uint)uVar2 >> 0x10);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *unaff_s0;
  undefined4 uVar1;
  
  uVar1 = _L0();
  unaff_s0[1] = (char)uVar1;
  unaff_s0[2] = (char)((uint)uVar1 >> 8);
  unaff_s0[3] = (char)((uint)uVar1 >> 0x10);
  unaff_s0[4] = (char)((uint)uVar1 >> 0x18);
  uVar1 = _L0();
  unaff_s0[5] = (char)uVar1;
  unaff_s0[6] = (char)((uint)uVar1 >> 8);
  unaff_s0[8] = (char)((uint)uVar1 >> 0x18);
  unaff_s0[7] = (char)((uint)uVar1 >> 0x10);
  *unaff_s0 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *unaff_s0;
  undefined4 uVar1;
  
  uVar1 = _L0();
  unaff_s0[5] = (char)uVar1;
  unaff_s0[6] = (char)((uint)uVar1 >> 8);
  unaff_s0[8] = (char)((uint)uVar1 >> 0x18);
  unaff_s0[7] = (char)((uint)uVar1 >> 0x10);
  *unaff_s0 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3fc6

int hci_le_enc_cmd_handler
              (ke_msg_id_t msgid,hci_le_enc_cmd *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  *(undefined2 *)(param[-1].plain_data + 8) = 4;
  *(undefined2 *)(param[-1].plain_data + 0xc) = 8;
  _LVL240();
  if (DAT_00000058 == '\0') {
    FUN_00010808();
  }
  return 1;
}



undefined4 _LVL240(void)

{
  int unaff_s1;
  
  _LVL240();
  if (*(char *)(unaff_s1 + 0x58) == '\0') {
    FUN_00010808();
  }
  return 1;
}



undefined4 FUN_00010808(void)

{
  FUN_00010808();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4542

int hci_le_wl_mngt_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined2 in_register_0000202a;
  int iVar1;
  uint uVar2;
  uint16_t conhdl;
  
  iVar1 = CONCAT22(in_register_0000202a,msgid);
  uVar2 = _L0(_DAT_00000010,_DAT_00000014);
  if ((((uVar2 & 0xf0) != 0x10) || (*(char *)(_DAT_00000014 + 0x1b) == '\0')) &&
     ((1 < (uVar2 & 0xf) - 1 || (*(char *)(_DAT_00000010 + 8) == '\0')))) {
    if (iVar1 == 0x2011) {
      FUN_000108c6();
    }
    else {
      if (iVar1 == 0x2012) {
        FUN_000108da();
      }
      else {
        if (iVar1 == 0x2010) {
          _L0();
          FUN_0001089a();
        }
      }
    }
  }
  FUN_000108a6();
  return 0;
}



undefined4 _L0(int iRam00000010,int iRam00000014)

{
  uint uVar1;
  int unaff_s2;
  
  uVar1 = _L0(iRam00000010,iRam00000014);
  if ((((uVar1 & 0xf0) != 0x10) || (*(char *)(iRam00000014 + 0x1b) == '\0')) &&
     ((1 < (uVar1 & 0xf) - 1 || (*(char *)(iRam00000010 + 8) == '\0')))) {
    if (unaff_s2 == 0x2011) {
      FUN_000108c6();
    }
    else {
      if (unaff_s2 == 0x2012) {
        FUN_000108da();
      }
      else {
        if (unaff_s2 == 0x2010) {
          _L0();
          FUN_0001089a();
        }
      }
    }
  }
  FUN_000108a6();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_0001089a();
  FUN_000108a6();
  return 0;
}



undefined4 FUN_0001089a(void)

{
  FUN_0001089a();
  FUN_000108a6();
  return 0;
}



undefined4 FUN_000108a6(void)

{
  FUN_000108a6();
  return 0;
}



undefined4 FUN_000108c6(void)

{
  FUN_000108c6();
  FUN_000108a6();
  return 0;
}



undefined4 FUN_000108da(void)

{
  FUN_000108da();
  FUN_000108a6();
  return 0;
}



// DWARF DIE: 4331

int hci_le_set_host_ch_class_cmd_handler
              (ke_msg_id_t msgid,hci_le_set_host_ch_class_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int iVar1;
  
  if (DAT_00000037 != '\0') {
    iVar1 = _LVL261();
    FUN_0001091a();
    DAT_00000037 = '\0';
    if ((iVar1 - 2U & 0xff) < 0x24) {
      FUN_0001093e();
    }
  }
  FUN_0001094a();
  return 0;
}



undefined4 _LVL261(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = _LVL261();
  FUN_0001091a();
  *(undefined *)(unaff_s0 + 0x37) = 0;
  if ((iVar1 - 2U & 0xff) < 0x24) {
    FUN_0001093e();
  }
  FUN_0001094a();
  return 0;
}



undefined4 FUN_0001091a(void)

{
  int unaff_s0;
  char unaff_s1;
  
  FUN_0001091a();
  *(undefined *)(unaff_s0 + 0x37) = 0;
  if ((byte)(unaff_s1 - 2U) < 0x24) {
    FUN_0001093e();
  }
  FUN_0001094a();
  return 0;
}



undefined4 FUN_0001093e(void)

{
  FUN_0001093e();
  FUN_0001094a();
  return 0;
}



undefined4 FUN_0001094a(void)

{
  FUN_0001094a();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 447d

int hci_le_create_con_cmd_handler
              (ke_msg_id_t msgid,hci_le_create_con_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = _L0(_DAT_0000004c,DAT_00000050);
  if (uVar1 == 0x10) {
_L0:
    iVar2 = FUN_000109b4(_DAT_0000004c,DAT_00000050);
    if (iVar2 == 0) {
      _DAT_0000004c = _DAT_0000004c & 0xffff | (uint)src_id << 0x10;
      uVar3 = _L0();
      _DAT_0000004c = CONCAT31(DAT_0000004c_1,1);
      DAT_00000050 = (char)uVar3;
    }
  }
  else {
    if (uVar1 < 0x11) {
      if (uVar1 == 0) goto _L0;
      uVar4 = 3;
    }
    else {
      if (uVar1 == 0x20) goto _L0;
      if (uVar1 == 0x23) {
        return 2;
      }
      uVar4 = 0x13;
    }
    if (uVar1 == uVar4) {
      return 2;
    }
  }
  FUN_000109e4();
  return 0;
}



undefined4 _L0(uint uRam0000004c,undefined param_2)

{
  ushort unaff_s1;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = _L0(uRam0000004c,param_2);
  if (uVar1 == 0x10) {
_L0:
    iVar2 = FUN_000109b4(uRam0000004c,param_2);
    if (iVar2 == 0) {
      uRam0000004c = uRam0000004c & 0xffff | (uint)unaff_s1 << 0x10;
      uVar3 = _L0();
      uRam0000004c = CONCAT31(uRam0000004c._1_3_,1);
      param_2 = (char)uVar3;
    }
  }
  else {
    if (uVar1 < 0x11) {
      if (uVar1 == 0) goto _L0;
      uVar4 = 3;
    }
    else {
      if (uVar1 == 0x20) goto _L0;
      if (uVar1 == 0x23) {
        return 2;
      }
      uVar4 = 0x13;
    }
    if (uVar1 == uVar4) {
      return 2;
    }
  }
  FUN_000109e4();
  return 0;
}



undefined4 FUN_000109b4(uint uRam0000004c,undefined param_2)

{
  ushort unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000109b4(uRam0000004c,param_2);
  if (iVar1 == 0) {
    uRam0000004c = uRam0000004c & 0xffff | (uint)unaff_s1 << 0x10;
    uVar2 = _L0();
    uRam0000004c = CONCAT31(uRam0000004c._1_3_,1);
    param_2 = (char)uVar2;
  }
  FUN_000109e4();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = _L0();
  *(char *)(unaff_s0 + 0x50) = (char)uVar1;
  *(undefined *)(unaff_s0 + 0x4c) = 1;
  FUN_000109e4();
  return 0;
}



undefined4 FUN_000109e4(void)

{
  FUN_000109e4();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 47e7

int hci_le_set_scan_en_cmd_handler
              (ke_msg_id_t msgid,hci_le_set_scan_en_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = _L0(_DAT_0000004c,DAT_00000050);
  if (uVar1 == 0x12) goto _L0;
  if (uVar1 < 0x13) {
    if (uVar1 == 2) goto _L0;
    if (uVar1 < 3) {
      uVar4 = 1;
    }
    else {
      if (uVar1 == 3) {
        return 2;
      }
      uVar4 = 0x11;
    }
    if (uVar1 == uVar4) goto _L0;
_L0:
    if (param->scan_en != '\x01') goto _L0;
  }
  else {
    if (uVar1 != 0x21) {
      if (uVar1 < 0x22) {
        uVar4 = 0x13;
      }
      else {
        if (uVar1 == 0x22) goto _L0;
        uVar4 = 0x23;
      }
      if (uVar1 == uVar4) {
        return 2;
      }
      goto _L0;
    }
_L0:
    if (param->scan_en != '\0') goto _L0;
  }
  uVar2 = FUN_00010a32(_DAT_0000004c,DAT_00000050);
  DAT_00000050 = (byte)uVar2;
  DAT_0000004c_1 = (uint3)((uint)_DAT_0000004c >> 8) & 0xff | (uint3)(((uint)src_id << 0x10) >> 8);
  _DAT_0000004c = CONCAT31(DAT_0000004c_1,1);
  iVar3 = _L0(1,DAT_00000050);
  if ((iVar3 == 0) && (param->scan_en != '\x01')) {
    return 0;
  }
_L0:
  FUN_00010a6a(DAT_0000004c,DAT_00000050);
  _DAT_0000004c = CONCAT31(DAT_0000004c_1,1);
  DAT_00000050 = DAT_00000050 & 0xf0;
  return 0;
}



undefined4 _L0(undefined4 uRam0000004c,byte param_2)

{
  char *unaff_s0;
  ushort unaff_s1;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = _L0(uRam0000004c,param_2);
  if (uVar1 == 0x12) goto _L0;
  if (uVar1 < 0x13) {
    if (uVar1 == 2) goto _L0;
    if (uVar1 < 3) {
      uVar4 = 1;
    }
    else {
      if (uVar1 == 3) {
        return 2;
      }
      uVar4 = 0x11;
    }
    if (uVar1 == uVar4) goto _L0;
_L0:
    if (*unaff_s0 != '\x01') goto _L0;
  }
  else {
    if (uVar1 != 0x21) {
      if (uVar1 < 0x22) {
        uVar4 = 0x13;
      }
      else {
        if (uVar1 == 0x22) goto _L0;
        uVar4 = 0x23;
      }
      if (uVar1 == uVar4) {
        return 2;
      }
      goto _L0;
    }
_L0:
    if (*unaff_s0 != '\0') goto _L0;
  }
  uVar2 = FUN_00010a32(uRam0000004c,param_2);
  param_2 = (byte)uVar2;
  uRam0000004c._1_3_ =
       (uint3)((uint)uRam0000004c >> 8) & 0xff | (uint3)(((uint)unaff_s1 << 0x10) >> 8);
  uRam0000004c = CONCAT31(uRam0000004c._1_3_,1);
  iVar3 = _L0(1,param_2);
  if ((iVar3 == 0) && (*unaff_s0 != '\x01')) {
    return 0;
  }
_L0:
  FUN_00010a6a((undefined)uRam0000004c,param_2);
  uRam0000004c = CONCAT31(uRam0000004c._1_3_,1);
  param_2 = param_2 & 0xf0;
  return 0;
}



undefined4 FUN_00010a32(undefined4 uRam0000004c,byte param_2)

{
  char *unaff_s0;
  ushort unaff_s1;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00010a32(uRam0000004c,param_2);
  param_2 = (byte)uVar1;
  uRam0000004c._1_3_ =
       (uint3)((uint)uRam0000004c >> 8) & 0xff | (uint3)(((uint)unaff_s1 << 0x10) >> 8);
  uRam0000004c._0_1_ = 1;
  iVar2 = _L0(1,param_2);
  if ((iVar2 != 0) || (*unaff_s0 == '\x01')) {
    FUN_00010a6a((undefined)uRam0000004c,param_2);
    param_2 &= 0xf0;
    uRam0000004c._0_1_ = 1;
  }
  return 0;
}



undefined4 _L0(undefined param_1,byte param_2)

{
  byte *unaff_s0;
  int iVar1;
  uint unaff_s2;
  
  iVar1 = _L0(param_1,param_2);
  if ((iVar1 != 0) || (*unaff_s0 == unaff_s2)) {
    FUN_00010a6a(param_1,param_2);
    param_2 &= 0xf0;
    param_1 = 1;
  }
  return 0;
}



undefined4 FUN_00010a6a(undefined param_1,byte param_2)

{
  FUN_00010a6a(param_1,param_2);
  param_1 = 1;
  param_2 = param_2 & 0xf0;
  return 0;
}



// DWARF DIE: 48a8

int hci_le_set_scan_param_cmd_handler
              (ke_msg_id_t msgid,hci_le_set_scan_param_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if (((iVar1 != 0x11) && (iVar1 != 0x21)) && (iVar1 != 1)) {
    FUN_00010b00();
  }
  FUN_00010b0e();
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (((iVar1 != 0x11) && (iVar1 != 0x21)) && (iVar1 != 1)) {
    FUN_00010b00();
  }
  FUN_00010b0e();
  return 0;
}



undefined4 FUN_00010b00(void)

{
  FUN_00010b00();
  FUN_00010b0e();
  return 0;
}



undefined4 FUN_00010b0e(void)

{
  FUN_00010b0e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4957

int hci_le_set_scan_rsp_data_cmd_handler
              (ke_msg_id_t msgid,hci_le_set_scan_rsp_data_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0(_DAT_00000014);
  if (iVar1 - 0x10U < 4) {
    if (param->scan_rsp_data_len < 0x20) {
      if (*(int *)(_DAT_00000014 + 4) != 0) {
        _L0();
        *(undefined4 *)(_DAT_00000014 + 4) = 0;
      }
      *(uint8_t **)(_DAT_00000014 + 4) = param[-1].data.data + 0x13;
      iVar1 = 1;
      goto _L0;
    }
  }
  else {
    FUN_00010b9e();
  }
  iVar1 = 0;
_L0:
  FUN_00010b84();
  return iVar1;
}



undefined4 _L0(int iRam00000014)

{
  byte *unaff_s0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _L0(iRam00000014);
  if (iVar2 - 0x10U < 4) {
    if (*unaff_s0 < 0x20) {
      if (*(int *)(iRam00000014 + 4) != 0) {
        _L0();
        *(undefined4 *)(iRam00000014 + 4) = 0;
      }
      *(byte **)(iRam00000014 + 4) = unaff_s0 + -0xc;
      uVar1 = 1;
      goto _L0;
    }
  }
  else {
    FUN_00010b9e();
  }
  uVar1 = 0;
_L0:
  FUN_00010b84();
  return uVar1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _L0();
  *(undefined4 *)(*(int *)(unaff_s1 + 0x14) + 4) = 0;
  *(int *)(*(int *)(unaff_s1 + 0x14) + 4) = unaff_s0 + -0xc;
  FUN_00010b84();
  return 1;
}



void FUN_00010b84(void)

{
  FUN_00010b84();
  return;
}



undefined4 FUN_00010b9e(void)

{
  FUN_00010b9e();
  FUN_00010b84();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4a93

int hci_le_set_adv_en_cmd_handler
              (ke_msg_id_t msgid,hci_le_set_adv_en_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = _L0(DAT_0000004c,_DAT_0000006c);
  if (uVar1 < 0x10) {
_L0:
    if (param->adv_en != '\x01') goto _L0;
  }
  else {
    if (0x13 < uVar1) {
      if ((uVar1 - 0x20 & 0xff) < 4) {
        return 2;
      }
      goto _L0;
    }
    if (param->adv_en != '\0') goto _L0;
  }
  uVar2 = FUN_00010bf4(DAT_0000004c,_DAT_0000006c);
  _DAT_0000006c = CONCAT12((char)uVar2,src_id);
  iVar3 = _L0(DAT_0000004c);
  if ((iVar3 == 0) && (param->adv_en != '\x01')) {
    DAT_0000004c = 0;
    return 0;
  }
_L0:
  FUN_00010c3e(DAT_0000004c);
  DAT_0000004c = 0;
  return 0;
}



undefined4 _L0(undefined param_1,undefined3 param_2)

{
  char *unaff_s0;
  undefined2 unaff_s1;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = _L0(param_1,param_2);
  if (uVar1 < 0x10) {
_L0:
    if (*unaff_s0 != '\x01') goto _L0;
  }
  else {
    if (0x13 < uVar1) {
      if ((uVar1 - 0x20 & 0xff) < 4) {
        return 2;
      }
      goto _L0;
    }
    if (*unaff_s0 != '\0') goto _L0;
  }
  uVar2 = FUN_00010bf4(param_1,param_2);
  param_2 = CONCAT12((char)uVar2,unaff_s1);
  iVar3 = _L0(param_1);
  if ((iVar3 == 0) && (*unaff_s0 != '\x01')) {
    param_1 = 0;
    return 0;
  }
_L0:
  FUN_00010c3e(param_1);
  param_1 = 0;
  return 0;
}



undefined4 FUN_00010bf4(undefined param_1,undefined3 param_2)

{
  char *unaff_s0;
  undefined2 unaff_s1;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00010bf4(param_1,param_2);
  param_2 = CONCAT12((char)uVar1,unaff_s1);
  iVar2 = _L0(param_1);
  if ((iVar2 != 0) || (*unaff_s0 == '\x01')) {
    FUN_00010c3e(param_1);
  }
  param_1 = 0;
  return 0;
}



undefined4 _L0(undefined param_1)

{
  char *unaff_s0;
  int iVar1;
  
  iVar1 = _L0(param_1);
  if ((iVar1 != 0) || (*unaff_s0 == '\x01')) {
    FUN_00010c3e(param_1);
  }
  param_1 = 0;
  return 0;
}



undefined4 FUN_00010c3e(undefined param_1)

{
  FUN_00010c3e(param_1);
  param_1 = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4b54

int hci_le_set_adv_data_cmd_handler
              (ke_msg_id_t msgid,hci_le_set_adv_data_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0(_DAT_00000014);
  if (iVar1 - 0x10U < 4) {
    if (param->adv_data_len < 0x20) {
      if (*_DAT_00000014 != (byte *)0x0) {
        _L0();
        *_DAT_00000014 = (byte *)0x0;
      }
      *_DAT_00000014 = param[-1].data.data + 0x13;
      iVar1 = 1;
      goto _L0;
    }
  }
  else {
    FUN_00010cc6();
  }
  iVar1 = 0;
_L0:
  FUN_00010cac();
  return iVar1;
}



undefined4 _L0(byte **ppbRam00000014)

{
  byte *unaff_s0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _L0(ppbRam00000014);
  if (iVar2 - 0x10U < 4) {
    if (*unaff_s0 < 0x20) {
      if (*ppbRam00000014 != (byte *)0x0) {
        _L0();
        *ppbRam00000014 = (byte *)0x0;
      }
      *ppbRam00000014 = unaff_s0 + -0xc;
      uVar1 = 1;
      goto _L0;
    }
  }
  else {
    FUN_00010cc6();
  }
  uVar1 = 0;
_L0:
  FUN_00010cac();
  return uVar1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _L0();
  **(undefined4 **)(unaff_s1 + 0x14) = 0;
  **(int **)(unaff_s1 + 0x14) = unaff_s0 + -0xc;
  FUN_00010cac();
  return 1;
}



void FUN_00010cac(void)

{
  FUN_00010cac();
  return;
}



undefined4 FUN_00010cc6(void)

{
  FUN_00010cc6();
  FUN_00010cac();
  return 0;
}



// DWARF DIE: 4f1b

int hci_le_set_adv_param_cmd_handler
              (ke_msg_id_t msgid,hci_le_set_adv_param_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if (3 < iVar1 - 0x10U) {
    FUN_00010cfc();
  }
  _LVL345();
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (3 < iVar1 - 0x10U) {
    FUN_00010cfc();
  }
  _LVL345();
  return 0;
}



undefined4 FUN_00010cfc(void)

{
  FUN_00010cfc();
  _LVL345();
  return 0;
}



undefined4 _LVL345(void)

{
  _LVL345();
  return 0;
}



// DWARF DIE: 4fc4

int hci_le_set_rand_add_cmd_handler
              (ke_msg_id_t msgid,hci_le_set_rand_addr_cmd *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if ((iVar1 == 0) && (iVar1 = FUN_00010d42(), iVar1 == 0)) {
    (*pcRam00000000)(0x5b,param,6,pcRam00000000);
  }
  FUN_00010d66();
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if ((iVar1 == 0) && (iVar1 = FUN_00010d42(), iVar1 == 0)) {
    (*pcRam00000000)(0x5b,6,pcRam00000000);
  }
  FUN_00010d66();
  return 0;
}



undefined4 FUN_00010d42(void)

{
  int iVar1;
  
  iVar1 = FUN_00010d42();
  if (iVar1 == 0) {
    (*pcRam00000000)(0x5b,6,pcRam00000000);
  }
  FUN_00010d66();
  return 0;
}



undefined4 FUN_00010d66(void)

{
  FUN_00010d66();
  return 0;
}



// DWARF DIE: 5176

int hci_le_rd_local_p256_public_key_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  char cVar1;
  
  cVar1 = DAT_000000d3;
  if (DAT_000000d3 != '\0') {
    cVar1 = '\f';
  }
  _LVL360();
  if (cVar1 == '\0') {
    FUN_00010db4();
    DAT_000000d3 = '\x01';
    _L0();
  }
  return 0;
}



undefined4 _LVL360(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _LVL360();
  if (unaff_s1 == 0) {
    FUN_00010db4();
    *(undefined *)(unaff_s0 + 0xd3) = 1;
    _L0();
  }
  return 0;
}



undefined4 FUN_00010db4(void)

{
  int unaff_s0;
  
  FUN_00010db4();
  *(undefined *)(unaff_s0 + 0xd3) = 1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 524f

int hci_le_test_end_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = _L0(_DAT_00000058);
  if (iVar1 == 0x24) {
    _DAT_00000058 = CONCAT11(1,DAT_00000058);
    _L0();
    FUN_00010e12();
  }
  else {
    puVar2 = (undefined *)FUN_00010e30();
    *(undefined2 *)(puVar2 + 2) = 0;
    *puVar2 = 0xc;
    _L0();
  }
  return 0;
}



undefined4 _L0(undefined2 param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = _L0(param_1);
  if (iVar1 == 0x24) {
    param_1 = CONCAT11(1,(undefined)param_1);
    _L0();
    FUN_00010e12();
  }
  else {
    puVar2 = (undefined *)FUN_00010e30();
    *(undefined2 *)(puVar2 + 2) = 0;
    *puVar2 = 0xc;
    _L0();
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010e12();
  return 0;
}



undefined4 FUN_00010e12(void)

{
  FUN_00010e12();
  return 0;
}



undefined4 FUN_00010e30(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_00010e30();
  *(undefined2 *)(puVar1 + 2) = 0;
  *puVar1 = 0xc;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5334

int hci_le_create_con_cancel_cmd_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0(_DAT_0000004c,DAT_00000050,_DAT_00000054);
  if (((iVar1 == 0x12) || (iVar1 == 0x22)) || (iVar1 == 2)) {
    FUN_00010e7e();
    DAT_00000050 = DAT_00000050 & 0xf0 | 2;
    _DAT_0000004c =
         CONCAT31((uint3)((uint)_DAT_0000004c >> 8) & 0xff | (uint3)(((uint)src_id << 0x10) >> 8),1)
    ;
    _L0();
    FUN_00010eb2();
  }
  else {
    FUN_00010eca();
  }
  return 0;
}



undefined4 _L0(undefined4 uRam0000004c,byte param_2,undefined4 uRam00000054)

{
  ushort unaff_s1;
  int iVar1;
  
  iVar1 = _L0(uRam0000004c,param_2,uRam00000054);
  if (((iVar1 == 0x12) || (iVar1 == 0x22)) || (iVar1 == 2)) {
    FUN_00010e7e();
    param_2 = param_2 & 0xf0 | 2;
    uRam0000004c = CONCAT31((uint3)((uint)uRam0000004c >> 8) & 0xff |
                            (uint3)(((uint)unaff_s1 << 0x10) >> 8),1);
    _L0();
    FUN_00010eb2();
  }
  else {
    FUN_00010eca();
  }
  return 0;
}



undefined4 FUN_00010e7e(void)

{
  int unaff_s0;
  undefined2 unaff_s1;
  
  FUN_00010e7e();
  *(undefined2 *)(unaff_s0 + 0x4e) = unaff_s1;
  *(byte *)(unaff_s0 + 0x50) = *(byte *)(unaff_s0 + 0x50) & 0xf0 | 2;
  *(undefined *)(unaff_s0 + 0x4c) = 1;
  _L0();
  FUN_00010eb2();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010eb2();
  return 0;
}



undefined4 FUN_00010eb2(void)

{
  FUN_00010eb2();
  return 0;
}



undefined4 FUN_00010eca(void)

{
  FUN_00010eca();
  return 0;
}



// DWARF DIE: 325f

int hci_command_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort *puVar1;
  undefined2 in_register_00002036;
  uint uVar2;
  int iVar3;
  
  uVar2 = CONCAT22(in_register_00002036,src_id);
  puVar1 = (ushort *)0x0;
  iVar3 = 0;
  do {
    if (*puVar1 == uVar2) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar3 * 8 + 4);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
                    // WARNING: Could not recover jumptable at 0x00010efe. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar3 = (*UNRECOVERED_JUMPTABLE)(uVar2,uVar2);
      return iVar3;
    }
    iVar3 += 1;
    puVar1 = puVar1 + 4;
  } while (iVar3 != 0x2d);
  return 0;
}


