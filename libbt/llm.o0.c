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
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined7;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

typedef ushort uint16_t;

struct em_buf_tx_desc { // DWARF DIE: 230e
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 2be
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 159e
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 22b2
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 2df
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 2350
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

struct llc_ch_asses_tag { // DWARF DIE: 346b
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict19b9_for___value anon_union.conflict19b9_for___value, *Panon_union.conflict19b9_for___value;

typedef uint wint_t;

union anon_union.conflict19b9_for___value { // DWARF DIE: 19b9
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 19eb
    int __count;
    union anon_union.conflict19b9_for___value __value;
};

typedef long _off_t;

typedef union anon_union.conflict19b9 anon_union.conflict19b9, *Panon_union.conflict19b9;

union anon_union.conflict19b9 { // DWARF DIE: 19b9
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 2d65
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct llm_pdu_con_req_tx llm_pdu_con_req_tx, *Pllm_pdu_con_req_tx;

typedef struct access_addr access_addr, *Paccess_addr;

typedef struct crc_init crc_init, *Pcrc_init;

typedef struct le_chnl_map le_chnl_map, *Ple_chnl_map;

struct crc_init { // DWARF DIE: c3b
    uint8_t crc[3];
};

struct access_addr { // DWARF DIE: a17
    uint8_t addr[4];
};

struct le_chnl_map { // DWARF DIE: a8e
    uint8_t map[5];
};

struct llm_pdu_con_req_tx { // DWARF DIE: 2cd9
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

typedef enum llm_enh_priv {
    LLM_PRIV_ENABLE_LSB=0,
    LLM_PRIV_ENABLE_MASK=1,
    LLM_PRIV_RFU_LSB=2,
    LLM_PRIV_RFU_MASK=-116,
    LLM_RPA_RENEW_TIMER_EN_LSB=1,
    LLM_RPA_RENEW_TIMER_EN_MASK=2
} llm_enh_priv;

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 2d90
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

struct bd_addr { // DWARF DIE: 9d5
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 2a61
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

struct ke_msg { // DWARF DIE: 33a
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct adv_device_list adv_device_list, *Padv_device_list;

struct adv_device_list { // DWARF DIE: 2bd6
    struct co_list_hdr hdr;
    uint8_t adv_type;
    struct bd_addr adv_addr;
    undefined field_0xb;
};

typedef struct llm_pdu_adv llm_pdu_adv, *Pllm_pdu_adv;

struct llm_pdu_adv { // DWARF DIE: 2c0b
    struct bd_addr adva;
    undefined field_0x6;
    undefined field_0x7;
    uint8_t * adva_data;
};

typedef struct llm_pdu_con_req_rx llm_pdu_con_req_rx, *Pllm_pdu_con_req_rx;

struct llm_pdu_con_req_rx { // DWARF DIE: 2c33
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

struct t_public_key256 { // DWARF DIE: 2e2b
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 2b38
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

struct ea_elt_tag { // DWARF DIE: 2942
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

struct channel_map_assess { // DWARF DIE: 2e5f
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 9a8
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 2ba1
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 2ed0
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

typedef enum anon_enum_8.conflict14f {
    ADDR_END=4,
    ADDR_MASK=1,
    ADDR_PUBLIC=0,
    ADDR_RAND=1,
    ADDR_RPA_MASK=2,
    ADDR_RPA_OR_PUBLIC=2,
    ADDR_RPA_OR_RAND=3,
    ADV_CONN_DIR=1,
    ADV_CONN_DIR_LDC=4,
    ADV_CONN_UNDIR=0,
    ADV_DISC_UNDIR=2,
    ADV_END=5,
    ADV_NONCONN_UNDIR=3,
    INIT_FILT_END=2,
    INIT_FILT_IGNORE_WLST=0,
    INIT_FILT_USE_WLST=1,
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
    LL_SCAN_RSP=4,
    PAYL_00001111=6,
    PAYL_01010101=7,
    PAYL_10101010=2,
    PAYL_11110000=1,
    PAYL_ALL_0=5,
    PAYL_ALL_1=4,
    PAYL_END=8,
    PAYL_PSEUDO_RAND_15=3,
    PAYL_PSEUDO_RAND_9=0,
    SCAN_ACTIVE=1,
    SCAN_DIS=0,
    SCAN_EN=1,
    SCAN_END=2,
    SCAN_EN_END=2,
    SCAN_PASSIVE=0,
    TEST_END=3,
    TEST_RX=1,
    TEST_RXTX=2,
    TEST_TX=0
} anon_enum_8.conflict14f;

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

typedef struct llc_create_con_req_ind llc_create_con_req_ind, *Pllc_create_con_req_ind;

struct llc_create_con_req_ind { // DWARF DIE: 3247
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

typedef struct hci_le_adv_report_evt hci_le_adv_report_evt, *Phci_le_adv_report_evt;

typedef struct adv_report adv_report, *Padv_report;

struct adv_report { // DWARF DIE: ae8
    uint8_t evt_type;
    uint8_t adv_addr_type;
    struct bd_addr adv_addr;
    uint8_t data_len;
    uint8_t data[31];
    uint8_t rssi;
};

struct hci_le_adv_report_evt { // DWARF DIE: 18f6
    uint8_t subcode;
    uint8_t nb_reports;
    struct adv_report adv_rep[1];
};

typedef struct hci_le_rx_test_cmd hci_le_rx_test_cmd, *Phci_le_rx_test_cmd;

struct hci_le_rx_test_cmd { // DWARF DIE: 1825
    uint8_t rx_freq;
};

typedef struct hci_le_set_scan_en_cmd hci_le_set_scan_en_cmd, *Phci_le_set_scan_en_cmd;

struct hci_le_set_scan_en_cmd { // DWARF DIE: 1739
    uint8_t scan_en;
    uint8_t filter_duplic_en;
};

typedef struct hci_le_tx_test_cmd hci_le_tx_test_cmd, *Phci_le_tx_test_cmd;

struct hci_le_tx_test_cmd { // DWARF DIE: 1847
    uint8_t tx_freq;
    uint8_t test_data_len;
    uint8_t pk_payload_type;
};

typedef struct hci_le_create_con_cmd hci_le_create_con_cmd, *Phci_le_create_con_cmd;

struct hci_le_create_con_cmd { // DWARF DIE: 1769
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

typedef struct hci_cmd_stat_event hci_cmd_stat_event, *Phci_cmd_stat_event;

struct hci_cmd_stat_event { // DWARF DIE: 18a2
    uint8_t status;
};

typedef struct hci_le_set_adv_en_cmd hci_le_set_adv_en_cmd, *Phci_le_set_adv_en_cmd;

struct hci_le_set_adv_en_cmd { // DWARF DIE: 16bd
    uint8_t adv_en;
};

typedef struct hci_le_set_scan_rsp_data_cmd hci_le_set_scan_rsp_data_cmd, *Phci_le_set_scan_rsp_data_cmd;

typedef struct scan_rsp_data scan_rsp_data, *Pscan_rsp_data;

struct scan_rsp_data { // DWARF DIE: a71
    uint8_t data[31];
};

struct hci_le_set_scan_rsp_data_cmd { // DWARF DIE: 168d
    uint8_t scan_rsp_data_len;
    struct scan_rsp_data data;
};

typedef struct hci_le_enc_cmd_cmp_evt hci_le_enc_cmd_cmp_evt, *Phci_le_enc_cmd_cmp_evt;

struct hci_le_enc_cmd_cmp_evt { // DWARF DIE: 18cb
    uint8_t status;
    uint8_t encrypted_data[16];
};

typedef struct hci_le_set_scan_param_cmd hci_le_set_scan_param_cmd, *Phci_le_set_scan_param_cmd;

struct hci_le_set_scan_param_cmd { // DWARF DIE: 16df
    uint8_t scan_type;
    undefined field_0x1;
    uint16_t scan_intv;
    uint16_t scan_window;
    uint8_t own_addr_type;
    uint8_t scan_filt_policy;
};

typedef struct hci_basic_cmd_cmp_evt hci_basic_cmd_cmp_evt, *Phci_basic_cmd_cmp_evt;

struct hci_basic_cmd_cmp_evt { // DWARF DIE: 1885
    uint8_t status;
};

typedef struct hci_le_set_adv_param_cmd hci_le_set_adv_param_cmd, *Phci_le_set_adv_param_cmd;

struct hci_le_set_adv_param_cmd { // DWARF DIE: 15d9
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

typedef struct hci_le_set_adv_data_cmd hci_le_set_adv_data_cmd, *Phci_le_set_adv_data_cmd;

typedef struct adv_data adv_data, *Padv_data;

struct adv_data { // DWARF DIE: a44
    uint8_t data[31];
};

struct hci_le_set_adv_data_cmd { // DWARF DIE: 165d
    uint8_t adv_data_len;
    struct adv_data data;
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

typedef struct hci_le_dir_adv_rep_evt hci_le_dir_adv_rep_evt, *Phci_le_dir_adv_rep_evt;

typedef struct dir_adv_report dir_adv_report, *Pdir_adv_report;

struct dir_adv_report { // DWARF DIE: b4b
    uint8_t evt_type;
    uint8_t addr_type;
    struct bd_addr addr;
    uint8_t dir_addr_type;
    struct bd_addr dir_addr;
    uint8_t rssi;
};

struct hci_le_dir_adv_rep_evt { // DWARF DIE: 193f
    uint8_t subcode;
    uint8_t nb_reports;
    struct dir_adv_report adv_rep[1];
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 21b3
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

struct rwip_rf_api { // DWARF DIE: 2743
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

typedef enum prevent_sleep {
    RW_AHI_TIMEOUT=8,
    RW_CRYPT_ONGOING=16,
    RW_CSB_NOT_LPO_ALLOWED=64,
    RW_DELETE_ELT_ONGOING=32,
    RW_MWS_WLAN_EVENT_GENERATOR_ACTIVE=-128,
    RW_TL_RX_ONGOING=4,
    RW_TL_TX_ONGOING=2,
    RW_WAKE_UP_ONGOING=1
} prevent_sleep;

typedef struct rwip_prio rwip_prio, *Prwip_prio;

struct rwip_prio { // DWARF DIE: 28c7
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 3da
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

struct ke_state_handler { // DWARF DIE: 406
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct ke_task_desc ke_task_desc, *Pke_task_desc;

struct ke_task_desc { // DWARF DIE: 439
    struct ke_state_handler * state_handler;
    struct ke_state_handler * default_handler;
    ke_state_t * state;
    uint16_t state_max;
    uint16_t idx_max;
};

typedef enum rnd_addr_type {
    RND_NON_RSLV_ADDR=0,
    RND_RSLV_ADDR=64,
    RND_STATIC_ADDR=-64
} rnd_addr_type;

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: abb
    uint8_t ltk[16];
};

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: bae
    uint8_t feats[8];
};

typedef enum adv_channel_map {
    ADV_ALL_CHNLS_EN=7,
    ADV_CHNL_37_EN=1,
    ADV_CHNL_38_EN=2,
    ADV_CHNL_39_EN=4,
    ADV_CHNL_END=8
} adv_channel_map;

typedef enum adv_filter_policy {
    ADV_ALLOW_SCAN_ANY_CON_ANY=0,
    ADV_ALLOW_SCAN_ANY_CON_WLST=2,
    ADV_ALLOW_SCAN_END=4,
    ADV_ALLOW_SCAN_WLST_CON_ANY=1,
    ADV_ALLOW_SCAN_WLST_CON_WLST=3
} adv_filter_policy;

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: c58
    uint8_t skd[16];
};

typedef enum scan_dup_filter_policy {
    SCAN_FILT_DUPLIC_DIS=0,
    SCAN_FILT_DUPLIC_EN=1,
    SCAN_FILT_DUPLIC_END=2
} scan_dup_filter_policy;

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: c19
    uint8_t supp_states[8];
};

typedef enum scan_filter_policy {
    SCAN_ALLOW_ADV_ALL=0,
    SCAN_ALLOW_ADV_ALL_AND_INIT_RPA=2,
    SCAN_ALLOW_ADV_END=4,
    SCAN_ALLOW_ADV_WLST=1,
    SCAN_ALLOW_ADV_WLST_AND_INIT_RPA=3
} scan_filter_policy;

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

struct supp_cmds { // DWARF DIE: bd0
    uint8_t cmds[64];
};

typedef enum bl_flag_wl {
    LLM_UTIL_BL_CLEAR_WL=1,
    LLM_UTIL_BL_NO_ACTION_WL=0,
    LLM_UTIL_BL_SET_WL=2
} bl_flag_wl;

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 32fe
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

typedef enum co_llcp_length {
    LLCP_CH_MAP_REQ_LEN=8,
    LLCP_CON_PARAM_REQ_LEN=24,
    LLCP_CON_PARAM_RSP_LEN=24,
    LLCP_CON_REQ_LEN=34,
    LLCP_CON_UPD_IND_LEN=12,
    LLCP_ENC_REQ_LEN=23,
    LLCP_ENC_RSP_LEN=13,
    LLCP_FEAT_REQ_LEN=9,
    LLCP_FEAT_RSP_LEN=9,
    LLCP_LENGTH_REQ_LEN=9,
    LLCP_LENGTH_RSP_LEN=9,
    LLCP_PA_ENC_REQ_LEN=1,
    LLCP_PA_ENC_RSP_LEN=1,
    LLCP_PDU_LENGTH_MAX=34,
    LLCP_PING_REQ_LEN=1,
    LLCP_PING_RSP_LEN=1,
    LLCP_REJECT_IND_EXT_LEN=3,
    LLCP_REJ_IND_LEN=2,
    LLCP_SLAVE_FEATURE_REQ_LEN=9,
    LLCP_ST_ENC_REQ_LEN=1,
    LLCP_ST_ENC_RSP_LEN=1,
    LLCP_TERM_IND_LEN=2,
    LLCP_UNKN_RSP_LEN=2,
    LLCP_VERS_IND_LEN=6
} co_llcp_length;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict217e_for__new anon_union.conflict217e_for__new, *Panon_union.conflict217e_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict1ff2 anon_struct.conflict1ff2, *Panon_struct.conflict1ff2;

typedef struct anon_struct.conflict2137 anon_struct.conflict2137, *Panon_struct.conflict2137;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 1fa9
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 1aaf
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

struct anon_struct.conflict1ff2 { // DWARF DIE: 1ff2
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

struct anon_struct.conflict2137 { // DWARF DIE: 2137
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _on_exit_args { // DWARF DIE: 1b32
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 1b87
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 1a3f
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 1f64
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 1be0
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 1c0e
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

union anon_union.conflict217e_for__new { // DWARF DIE: 217e
    struct anon_struct.conflict1ff2 _reent;
    struct anon_struct.conflict2137 _unused;
};

struct _reent { // DWARF DIE: 1d7a
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
    union anon_union.conflict217e_for__new _new;
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

typedef union anon_union.conflict217e anon_union.conflict217e, *Panon_union.conflict217e;

union anon_union.conflict217e { // DWARF DIE: 217e
    struct anon_struct.conflict1ff2 _reent;
    struct anon_struct.conflict2137 _unused;
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

struct llm_enc_req { // DWARF DIE: 2655
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

typedef struct llm_enc_ind llm_enc_ind, *Pllm_enc_ind;

struct llm_enc_ind { // DWARF DIE: 2682
    uint8_t status;
    uint8_t encrypted_data[16];
};

typedef int32_t BaseType_t;

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct encrypt { // DWARF DIE: 34f2
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct rem_version { // DWARF DIE: 34bd
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct data_len_ext_tag { // DWARF DIE: 3527
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

struct llc_env_tag { // DWARF DIE: 35b7
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




// DWARF DIE: 60a8

void llm_wlpub_addr_set(uint16_t elem_index,bd_addr *bdaddr)

{
  undefined2 *puVar1;
  undefined2 in_register_0000202a;
  undefined2 *puVar2;
  bd_addr *pbVar3;
  
  pbVar3 = bdaddr + 1;
  puVar2 = (undefined2 *)(CONCAT22(in_register_0000202a,elem_index) * 6 + 0x280081fe);
  do {
    puVar1 = (undefined2 *)bdaddr->addr;
    bdaddr = (bd_addr *)(bdaddr->addr + 2);
    *puVar2 = *puVar1;
    puVar2 = puVar2 + 1;
  } while (pbVar3 != bdaddr);
  return;
}



// DWARF DIE: 6002

void llm_wlpriv_addr_set(uint16_t elem_index,bd_addr *bdaddr)

{
  undefined2 *puVar1;
  undefined2 in_register_0000202a;
  undefined2 *puVar2;
  bd_addr *pbVar3;
  
  pbVar3 = bdaddr + 1;
  puVar2 = (undefined2 *)(CONCAT22(in_register_0000202a,elem_index) * 6 + 0x28008216);
  do {
    puVar1 = (undefined2 *)bdaddr->addr;
    bdaddr = (bd_addr *)(bdaddr->addr + 2);
    *puVar2 = *puVar1;
    puVar2 = puVar2 + 1;
  } while (pbVar3 != bdaddr);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 59b7

void llm_con_req_ind(uint8_t rx_hdl,uint16_t status)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined3 in_register_00002029;
  undefined *puVar4;
  uint8_t *puVar5;
  undefined4 extraout_a0;
  undefined auStack90 [2];
  ushort uStack88;
  uint16_t conhdl;
  llc_create_con_req_ind param;
  llm_pdu_con_req_rx data;
  
  iVar3 = CONCAT31(in_register_00002029,rx_hdl) * 0xe;
  (*pcRam00000000)(&param.sleep_clk_acc,*(ushort *)(iVar3 + 0x280083d6) + 0x28008000,0x22,
                   pcRam00000000);
  if (0xc76 < (data.interval - 10 & 0xffff)) {
    return;
  }
  if (0xc7a < (data._18_2_ - 6 & 0xffff)) {
    return;
  }
  if (499 < data.winoffset) {
    return;
  }
  if ((uint)data.interval << 2 <= (data.winoffset + 1) * (uint)data._18_2_) {
    return;
  }
  puVar4 = auStack90;
  FUN_000100da(_DAT_00000048);
  if (puVar4 != (undefined *)0x0) {
    return;
  }
  if ((status & 0x200) == 0) {
    uVar1 = *(ushort *)(iVar3 + 0x280083d8);
    uVar2 = (uint)uVar1;
    if (uVar2 != 0) {
      (*pcRam00000000)(&param.sleep_clk_acc,(uVar2 + 0x18 & 0xffff) + 0x28008000,6,pcRam00000000);
      param.peer_addr.addr[2] =
           (byte)*(undefined2 *)(&DAT_2800822e + ((uVar2 - 0x22e) / 0x34 & 0xff) * 0x34) & 2 |
           (byte)*(undefined2 *)(&DAT_2800822e + ((uVar2 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
      goto _L0;
    }
  }
  uVar1 = 0;
  param.peer_addr.addr[2] = (byte)(*(ushort *)(iVar3 + 0x280083d2) >> 6) & 1;
_L0:
  puVar5 = &param.sleep_clk_acc;
  FUN_0001014e(_DAT_00000048);
  if (puVar5 == (uint8_t *)0x0) {
    puVar5 = &param.sleep_clk_acc;
    FUN_00010162(_DAT_00000048);
    if (puVar5 == (uint8_t *)0x0) {
      uStack88 = data._18_2_;
      conhdl = data.winoffset;
      param.con_int = data.interval;
      param.peer_addr.addr[4] = data.chm.map[1] >> 5;
      param.peer_addr.addr[3] = data.chm.map[1] & 0x1f;
      param.con_lat = uVar1;
      (*pcRam00000000)(&param.sup_to,&param.sleep_clk_acc,6,pcRam00000000);
      FUN_000101ba();
      _DAT_00000048 = extraout_a0;
      FUN_000101c8();
      _DAT_00000048 = 0;
      _L0();
    }
    FUN_000101e4();
    _LVL36();
  }
  return;
}



void FUN_000100da(undefined4 uRam00000048)

{
  uint unaff_s0;
  uint uVar1;
  int unaff_s1;
  int in_a0;
  undefined *puVar2;
  undefined4 extraout_a0;
  undefined2 *puVar3;
  code **unaff_s2;
  int unaff_s4;
  byte bStack00000016;
  byte in_stack_00000017;
  byte in_stack_00000018;
  byte in_stack_0000003d;
  
  FUN_000100da(uRam00000048);
  if (in_a0 == 0) {
    if (((unaff_s0 & 0x200) == 0) &&
       (uVar1 = (uint)*(ushort *)(unaff_s4 + 0x3d8 + unaff_s1), uVar1 != 0)) {
      (**unaff_s2)(&stack0x0000001c,(uVar1 + 0x18 & 0xffff) + unaff_s4,6,*unaff_s2);
      puVar3 = (undefined2 *)(((uVar1 - 0x22e) / 0x34 & 0xff) * 0x34 + unaff_s4 + 0x22e);
      bStack00000016 = (byte)*puVar3 & 2 | (byte)*puVar3 & 1;
    }
    else {
      bStack00000016 = (byte)(*(ushort *)(unaff_s1 + 0x280083d2) >> 6) & 1;
    }
    puVar2 = &stack0x0000001c;
    FUN_0001014e(uRam00000048);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = &stack0x0000001c;
      FUN_00010162(uRam00000048);
      if (puVar2 == (undefined *)0x0) {
        in_stack_00000018 = in_stack_0000003d >> 5;
        in_stack_00000017 = in_stack_0000003d & 0x1f;
        (**unaff_s2)(&stack0x00000010,&stack0x0000001c,6,*unaff_s2);
        FUN_000101ba();
        uRam00000048 = extraout_a0;
        FUN_000101c8();
        uRam00000048 = 0;
        _L0();
      }
      FUN_000101e4();
      _LVL36();
    }
    return;
  }
  return;
}



void FUN_0001014e(undefined4 uRam00000048)

{
  int in_a0;
  undefined *puVar1;
  undefined4 extraout_a0;
  code **unaff_s2;
  byte in_stack_00000017;
  byte in_stack_00000018;
  byte in_stack_0000003d;
  
  FUN_0001014e(uRam00000048);
  if (in_a0 == 0) {
    puVar1 = &stack0x0000001c;
    FUN_00010162(uRam00000048);
    if (puVar1 == (undefined *)0x0) {
      in_stack_00000018 = in_stack_0000003d >> 5;
      in_stack_00000017 = in_stack_0000003d & 0x1f;
      (**unaff_s2)(&stack0x00000010,&stack0x0000001c,6,*unaff_s2);
      FUN_000101ba();
      uRam00000048 = extraout_a0;
      FUN_000101c8();
      uRam00000048 = 0;
      _L0();
    }
    FUN_000101e4();
    _LVL36();
  }
  return;
}



void FUN_00010162(undefined4 uRam00000048)

{
  int in_a0;
  undefined4 extraout_a0;
  code **unaff_s2;
  byte in_stack_00000017;
  byte in_stack_00000018;
  byte in_stack_0000003d;
  
  FUN_00010162(uRam00000048);
  if (in_a0 == 0) {
    in_stack_00000018 = in_stack_0000003d >> 5;
    in_stack_00000017 = in_stack_0000003d & 0x1f;
    (**unaff_s2)(&stack0x00000010,&stack0x0000001c,6,*unaff_s2);
    FUN_000101ba();
    uRam00000048 = extraout_a0;
    FUN_000101c8();
    uRam00000048 = 0;
    _L0();
  }
  FUN_000101e4();
  _LVL36();
  return;
}



void FUN_000101ba(void)

{
  int unaff_s0;
  undefined4 extraout_a0;
  
  FUN_000101ba();
  *(undefined4 *)(unaff_s0 + 0x48) = extraout_a0;
  FUN_000101c8();
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  FUN_000101e4();
  _LVL36();
  return;
}



void FUN_000101c8(void)

{
  int unaff_s0;
  
  FUN_000101c8();
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  FUN_000101e4();
  _LVL36();
  return;
}



void _L0(void)

{
  _L0();
  FUN_000101e4();
  _LVL36();
  return;
}



void FUN_000101e4(void)

{
  FUN_000101e4();
  _LVL36();
  return;
}



void _LVL36(void)

{
  _LVL36();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 529f

void llm_le_adv_report_ind(uint8_t rx_hdl)

{
  ushort uVar1;
  int *piVar2;
  ushort uVar3;
  undefined uVar4;
  undefined3 in_register_00002029;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  byte bVar8;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  undefined auStack72 [4];
  bd_addr adv_addr;
  bd_addr inita;
  bd_addr adva;
  
  iVar11 = CONCAT31(in_register_00002029,rx_hdl) * 0xe;
  puVar9 = (ushort *)(iVar11 + 0x280083d2);
  puVar10 = (ushort *)(iVar11 + 0x280083d6);
  uVar3 = *puVar9;
  uVar5 = (*pcRam00000000)(auStack72,*puVar10 + 0x28008000,6,pcRam00000000);
  uVar3 &= 0xf;
  piVar2 = _DAT_00000008;
  if ((*(char *)(_DAT_00000010 + 10) == '\x01') || (uVar3 == 1)) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      puVar7 = auStack72;
      _LVL79(puVar7,(int)piVar2 + 5,_DAT_0000001c);
      if ((puVar7 != (undefined *)0x0) && (*(byte *)(piVar2 + 1) == uVar3)) {
        return;
      }
    }
    iVar6 = 8;
    FUN_00010296(_DAT_0000001c);
    if (iVar6 == 10) {
      return;
    }
    iVar6 = 0xc;
    FUN_000102a8(_DAT_0000001c);
    (*pcRam00000000)(iVar6 + 5,auStack72,6,pcRam00000000);
    *(char *)(iVar6 + 4) = (char)uVar3;
    uVar5 = 8;
    FUN_000102c8(_DAT_0000001c);
  }
  if ((char)pcRam00000000 != '\0') {
    return;
  }
  _L0(_DAT_0000001c);
  if (0x14 < uVar5) {
    return;
  }
  uVar5 = (uint)*(ushort *)(iVar11 + 0x280083d8);
  uVar1 = *(ushort *)(iVar11 + 0x280083d0);
  (*pcRam00000000)(adv_addr.addr + 4,(*puVar10 + 6 & 0xffff) + 0x28008000,6,pcRam00000000);
  (*pcRam00000000)(inita.addr + 4,*puVar10 + 0x28008000,6,pcRam00000000);
  if (((((uVar3 == 1) && (1 < *(byte *)(_DAT_00000010 + 8))) && ((*puVar9 >> 7 & 1) != 0)) &&
      ((inita.addr[1] & 0xc0) == 0x40)) && ((uVar5 == 0 || ((uVar1 & 0x600) == 0x600)))) {
    iVar6 = 10;
    FUN_00010374(_DAT_0000001c);
    if (iVar6 == 0) {
      return;
    }
    puVar7 = (undefined *)0x804;
    FUN_0001038a(_DAT_0000001c);
    *puVar7 = 0xb;
    puVar7[1] = 1;
    uVar4 = (*_DAT_0000001c)(*(ushort *)(iVar11 + 0x280083d4) & 0xff,_DAT_0000001c);
    puVar7[0x11] = uVar4;
    puVar7[2] = (byte)*puVar9 & 0xf;
    if (uVar5 == 0) {
      (*pcRam00000000)(puVar7 + 4,*puVar10 + 0x28008000,6,pcRam00000000);
      puVar7[3] = (byte)(*puVar9 >> 6) & 1;
      (*pcRam00000000)(puVar7 + 0xb,adv_addr.addr + 4,6,pcRam00000000);
      puVar7[10] = 1;
    }
    else {
      (*pcRam00000000)((uVar5 + 0x18 & 0xffff) + 0x28008000,6,pcRam00000000);
      bVar8 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar5 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
      puVar7[3] = bVar8;
      if ((adva.addr[1] & 0xc0) == 0x40) {
        puVar7[3] = bVar8 | 2;
      }
      (*pcRam00000000)(puVar7 + 0xb,adv_addr.addr + 4,6,pcRam00000000);
      puVar7[10] = 1;
    }
    goto _L0;
  }
  iVar6 = 1;
  FUN_000104a0(_DAT_0000001c);
  if (iVar6 == 0) {
    return;
  }
  puVar7 = (undefined *)0x804;
  FUN_000104b8(_DAT_0000001c);
  puVar7[1] = 1;
  *puVar7 = 2;
  uVar4 = (*_DAT_0000001c)(*(ushort *)(iVar11 + 0x280083d4) & 0xff,_DAT_0000001c);
  puVar7[0x2a] = uVar4;
  uVar3 = *puVar9 & 0xf;
  uVar4 = (undefined)uVar3;
  if (uVar3 == 2) {
    uVar4 = 3;
_L0:
    puVar7[2] = uVar4;
  }
  else {
    if (uVar3 != 6) goto _L0;
    puVar7[2] = 2;
  }
  if (puVar7[2] == '\x01') {
    puVar7[10] = 0;
  }
  else {
    uVar3 = (*puVar9 >> 8) - 6 & 0xff;
    if (uVar3 < 0x20) {
      puVar7[10] = (char)uVar3;
    }
    else {
      puVar7[10] = 0x1f;
    }
    (*pcRam00000000)(puVar7 + 0xb,(*puVar10 + 6 & 0xffff) + 0x28008000,puVar7[10],pcRam00000000);
  }
  if ((uVar5 == 0) || ((uVar1 & 0x600) == 0x200)) {
    (*pcRam00000000)(puVar7 + 4,*puVar10 + 0x28008000,6);
    bVar8 = (byte)(*puVar9 >> 6) & 1;
  }
  else {
    (*pcRam00000000)(puVar7 + 4,(uVar5 + 0x18 & 0xffff) + 0x28008000,6);
    bVar8 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar5 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
    puVar7[3] = bVar8;
    if ((adva.addr[1] & 0xc0) != 0x40) goto _L0;
    bVar8 |= 2;
  }
  puVar7[3] = bVar8;
_L0:
  FUN_00010436();
  return;
}



void FUN_00010296(undefined *pcRam0000001c)

{
  ushort uVar1;
  int unaff_s1;
  undefined uVar2;
  int in_a0;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  ushort uVar7;
  code **unaff_s2;
  ushort *unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  byte in_stack_00000015;
  byte in_stack_0000001d;
  
  FUN_00010296(pcRam0000001c);
  if (in_a0 == 10) {
    return;
  }
  iVar3 = 0xc;
  FUN_000102a8(pcRam0000001c);
  (**unaff_s2)(iVar3 + 5,&stack0x00000008,6,*unaff_s2);
  *(char *)(iVar3 + 4) = (char)unaff_s1;
  uVar4 = unaff_s6 + 8;
  FUN_000102c8(pcRam0000001c);
  if (cRam00000000 != '\0') {
    return;
  }
  _L0(pcRam0000001c);
  if (0x14 < uVar4) {
    return;
  }
  uVar4 = (uint)*(ushort *)(unaff_s5 + 0x280083d8);
  uVar1 = *(ushort *)(unaff_s5 + 0x280083d0);
  (**unaff_s2)(&stack0x00000010,(*unaff_s4 + 6 & 0xffff) + 0x28008000,6,*unaff_s2);
  (**unaff_s2)(&stack0x00000018,*unaff_s4 + 0x28008000,6,*unaff_s2);
  if (((((unaff_s1 == 1) && (1 < *(byte *)(*(int *)(unaff_s7 + 0x10) + 8))) &&
       ((*unaff_s3 >> 7 & 1) != 0)) && ((in_stack_00000015 & 0xc0) == 0x40)) &&
     ((uVar4 == 0 || ((uVar1 & 0x600) == 0x600)))) {
    iVar3 = 10;
    FUN_00010374(pcRam0000001c);
    if (iVar3 == 0) {
      return;
    }
    puVar5 = (undefined *)0x804;
    FUN_0001038a(pcRam0000001c);
    *puVar5 = 0xb;
    puVar5[1] = 1;
    uVar2 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
    puVar5[0x11] = uVar2;
    puVar5[2] = (byte)*unaff_s3 & 0xf;
    if (uVar4 == 0) {
      (**unaff_s2)(puVar5 + 4,*unaff_s4 + 0x28008000,6,*unaff_s2);
      puVar5[3] = (byte)(*unaff_s3 >> 6) & 1;
      (**unaff_s2)(puVar5 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar5[10] = 1;
    }
    else {
      (**unaff_s2)((uVar4 + 0x18 & 0xffff) + 0x28008000,6,*unaff_s2);
      bVar6 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar4 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
      puVar5[3] = bVar6;
      if ((in_stack_0000001d & 0xc0) == 0x40) {
        puVar5[3] = bVar6 | 2;
      }
      (**unaff_s2)(puVar5 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar5[10] = 1;
    }
    goto _L0;
  }
  iVar3 = 1;
  FUN_000104a0(pcRam0000001c);
  if (iVar3 == 0) {
    return;
  }
  puVar5 = (undefined *)0x804;
  FUN_000104b8(pcRam0000001c);
  puVar5[1] = 1;
  *puVar5 = 2;
  uVar2 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
  puVar5[0x2a] = uVar2;
  uVar7 = *unaff_s3 & 0xf;
  uVar2 = (undefined)uVar7;
  if (uVar7 == 2) {
    uVar2 = 3;
_L0:
    puVar5[2] = uVar2;
  }
  else {
    if (uVar7 != 6) goto _L0;
    puVar5[2] = 2;
  }
  if (puVar5[2] == '\x01') {
    puVar5[10] = 0;
  }
  else {
    uVar7 = (*unaff_s3 >> 8) - 6 & 0xff;
    if (uVar7 < 0x20) {
      puVar5[10] = (char)uVar7;
    }
    else {
      puVar5[10] = 0x1f;
    }
    (**unaff_s2)(puVar5 + 0xb,(*unaff_s4 + 6 & 0xffff) + 0x28008000,puVar5[10],*unaff_s2);
  }
  if ((uVar4 == 0) || ((uVar1 & 0x600) == 0x200)) {
    (**unaff_s2)(puVar5 + 4,*unaff_s4 + 0x28008000,6);
    bVar6 = (byte)(*unaff_s3 >> 6) & 1;
  }
  else {
    (**unaff_s2)(puVar5 + 4,(uVar4 + 0x18 & 0xffff) + 0x28008000,6);
    bVar6 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar4 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
    puVar5[3] = bVar6;
    if ((in_stack_0000001d & 0xc0) != 0x40) goto _L0;
    bVar6 |= 2;
  }
  puVar5[3] = bVar6;
_L0:
  FUN_00010436();
  return;
}



void FUN_000102a8(undefined *pcRam0000001c)

{
  ushort uVar1;
  int unaff_s1;
  undefined uVar2;
  int in_a0;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  byte bVar6;
  ushort uVar7;
  code **unaff_s2;
  ushort *unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  byte in_stack_00000015;
  byte in_stack_0000001d;
  
  FUN_000102a8(pcRam0000001c);
  (**unaff_s2)(in_a0 + 5,&stack0x00000008,6,*unaff_s2);
  *(char *)(in_a0 + 4) = (char)unaff_s1;
  uVar3 = unaff_s6 + 8;
  FUN_000102c8(pcRam0000001c);
  if (cRam00000000 != '\0') {
    return;
  }
  _L0(pcRam0000001c);
  if (0x14 < uVar3) {
    return;
  }
  uVar3 = (uint)*(ushort *)(unaff_s5 + 0x280083d8);
  uVar1 = *(ushort *)(unaff_s5 + 0x280083d0);
  (**unaff_s2)(&stack0x00000010,(*unaff_s4 + 6 & 0xffff) + 0x28008000,6,*unaff_s2);
  (**unaff_s2)(&stack0x00000018,*unaff_s4 + 0x28008000,6,*unaff_s2);
  if (((((unaff_s1 == 1) && (1 < *(byte *)(*(int *)(unaff_s7 + 0x10) + 8))) &&
       ((*unaff_s3 >> 7 & 1) != 0)) && ((in_stack_00000015 & 0xc0) == 0x40)) &&
     ((uVar3 == 0 || ((uVar1 & 0x600) == 0x600)))) {
    iVar4 = 10;
    FUN_00010374(pcRam0000001c);
    if (iVar4 == 0) {
      return;
    }
    puVar5 = (undefined *)0x804;
    FUN_0001038a(pcRam0000001c);
    *puVar5 = 0xb;
    puVar5[1] = 1;
    uVar2 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
    puVar5[0x11] = uVar2;
    puVar5[2] = (byte)*unaff_s3 & 0xf;
    if (uVar3 == 0) {
      (**unaff_s2)(puVar5 + 4,*unaff_s4 + 0x28008000,6,*unaff_s2);
      puVar5[3] = (byte)(*unaff_s3 >> 6) & 1;
      (**unaff_s2)(puVar5 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar5[10] = 1;
    }
    else {
      (**unaff_s2)((uVar3 + 0x18 & 0xffff) + 0x28008000,6,*unaff_s2);
      bVar6 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar3 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
      puVar5[3] = bVar6;
      if ((in_stack_0000001d & 0xc0) == 0x40) {
        puVar5[3] = bVar6 | 2;
      }
      (**unaff_s2)(puVar5 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar5[10] = 1;
    }
    goto _L0;
  }
  iVar4 = 1;
  FUN_000104a0(pcRam0000001c);
  if (iVar4 == 0) {
    return;
  }
  puVar5 = (undefined *)0x804;
  FUN_000104b8(pcRam0000001c);
  puVar5[1] = 1;
  *puVar5 = 2;
  uVar2 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
  puVar5[0x2a] = uVar2;
  uVar7 = *unaff_s3 & 0xf;
  uVar2 = (undefined)uVar7;
  if (uVar7 == 2) {
    uVar2 = 3;
_L0:
    puVar5[2] = uVar2;
  }
  else {
    if (uVar7 != 6) goto _L0;
    puVar5[2] = 2;
  }
  if (puVar5[2] == '\x01') {
    puVar5[10] = 0;
  }
  else {
    uVar7 = (*unaff_s3 >> 8) - 6 & 0xff;
    if (uVar7 < 0x20) {
      puVar5[10] = (char)uVar7;
    }
    else {
      puVar5[10] = 0x1f;
    }
    (**unaff_s2)(puVar5 + 0xb,(*unaff_s4 + 6 & 0xffff) + 0x28008000,puVar5[10],*unaff_s2);
  }
  if ((uVar3 == 0) || ((uVar1 & 0x600) == 0x200)) {
    (**unaff_s2)(puVar5 + 4,*unaff_s4 + 0x28008000,6);
    bVar6 = (byte)(*unaff_s3 >> 6) & 1;
  }
  else {
    (**unaff_s2)(puVar5 + 4,(uVar3 + 0x18 & 0xffff) + 0x28008000,6);
    bVar6 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar3 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
    puVar5[3] = bVar6;
    if ((in_stack_0000001d & 0xc0) != 0x40) goto _L0;
    bVar6 |= 2;
  }
  puVar5[3] = bVar6;
_L0:
  FUN_00010436();
  return;
}



void FUN_000102c8(undefined *pcRam0000001c)

{
  ushort uVar1;
  uint uVar2;
  int unaff_s1;
  undefined uVar3;
  uint in_a0;
  int iVar4;
  undefined *puVar5;
  byte bVar6;
  ushort uVar7;
  code **unaff_s2;
  ushort *unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  int unaff_s7;
  byte in_stack_00000015;
  byte in_stack_0000001d;
  
  FUN_000102c8(pcRam0000001c);
  if (cRam00000000 != '\0') {
    return;
  }
  _L0(pcRam0000001c);
  if (0x14 < in_a0) {
    return;
  }
  uVar2 = (uint)*(ushort *)(unaff_s5 + 0x280083d8);
  uVar1 = *(ushort *)(unaff_s5 + 0x280083d0);
  (**unaff_s2)(&stack0x00000010,(*unaff_s4 + 6 & 0xffff) + 0x28008000,6,*unaff_s2);
  (**unaff_s2)(&stack0x00000018,*unaff_s4 + 0x28008000,6,*unaff_s2);
  if (((((unaff_s1 == 1) && (1 < *(byte *)(*(int *)(unaff_s7 + 0x10) + 8))) &&
       ((*unaff_s3 >> 7 & 1) != 0)) && ((in_stack_00000015 & 0xc0) == 0x40)) &&
     ((uVar2 == 0 || ((uVar1 & 0x600) == 0x600)))) {
    iVar4 = 10;
    FUN_00010374(pcRam0000001c);
    if (iVar4 == 0) {
      return;
    }
    puVar5 = (undefined *)0x804;
    FUN_0001038a(pcRam0000001c);
    *puVar5 = 0xb;
    puVar5[1] = 1;
    uVar3 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
    puVar5[0x11] = uVar3;
    puVar5[2] = (byte)*unaff_s3 & 0xf;
    if (uVar2 == 0) {
      (**unaff_s2)(puVar5 + 4,*unaff_s4 + 0x28008000,6,*unaff_s2);
      puVar5[3] = (byte)(*unaff_s3 >> 6) & 1;
      (**unaff_s2)(puVar5 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar5[10] = 1;
    }
    else {
      (**unaff_s2)((uVar2 + 0x18 & 0xffff) + 0x28008000,6,*unaff_s2);
      bVar6 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar2 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
      puVar5[3] = bVar6;
      if ((in_stack_0000001d & 0xc0) == 0x40) {
        puVar5[3] = bVar6 | 2;
      }
      (**unaff_s2)(puVar5 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar5[10] = 1;
    }
    goto _L0;
  }
  iVar4 = 1;
  FUN_000104a0(pcRam0000001c);
  if (iVar4 == 0) {
    return;
  }
  puVar5 = (undefined *)0x804;
  FUN_000104b8(pcRam0000001c);
  puVar5[1] = 1;
  *puVar5 = 2;
  uVar3 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
  puVar5[0x2a] = uVar3;
  uVar7 = *unaff_s3 & 0xf;
  uVar3 = (undefined)uVar7;
  if (uVar7 == 2) {
    uVar3 = 3;
_L0:
    puVar5[2] = uVar3;
  }
  else {
    if (uVar7 != 6) goto _L0;
    puVar5[2] = 2;
  }
  if (puVar5[2] == '\x01') {
    puVar5[10] = 0;
  }
  else {
    uVar7 = (*unaff_s3 >> 8) - 6 & 0xff;
    if (uVar7 < 0x20) {
      puVar5[10] = (char)uVar7;
    }
    else {
      puVar5[10] = 0x1f;
    }
    (**unaff_s2)(puVar5 + 0xb,(*unaff_s4 + 6 & 0xffff) + 0x28008000,puVar5[10],*unaff_s2);
  }
  if ((uVar2 == 0) || ((uVar1 & 0x600) == 0x200)) {
    (**unaff_s2)(puVar5 + 4,*unaff_s4 + 0x28008000,6);
    bVar6 = (byte)(*unaff_s3 >> 6) & 1;
  }
  else {
    (**unaff_s2)(puVar5 + 4,(uVar2 + 0x18 & 0xffff) + 0x28008000,6);
    bVar6 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar2 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
    puVar5[3] = bVar6;
    if ((in_stack_0000001d & 0xc0) != 0x40) goto _L0;
    bVar6 |= 2;
  }
  puVar5[3] = bVar6;
_L0:
  FUN_00010436();
  return;
}



void _L0(undefined *pcRam0000001c)

{
  ushort uVar1;
  uint uVar2;
  int unaff_s1;
  undefined uVar3;
  uint in_a0;
  int iVar4;
  undefined *puVar5;
  byte bVar6;
  ushort uVar7;
  code **unaff_s2;
  ushort *unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  int unaff_s7;
  byte in_stack_00000015;
  byte in_stack_0000001d;
  
  _L0(pcRam0000001c);
  if (0x14 < in_a0) {
    return;
  }
  uVar2 = (uint)*(ushort *)(unaff_s5 + 0x280083d8);
  uVar1 = *(ushort *)(unaff_s5 + 0x280083d0);
  (**unaff_s2)(&stack0x00000010,(*unaff_s4 + 6 & 0xffff) + 0x28008000,6,*unaff_s2);
  (**unaff_s2)(&stack0x00000018,*unaff_s4 + 0x28008000,6,*unaff_s2);
  if (((((unaff_s1 == 1) && (1 < *(byte *)(*(int *)(unaff_s7 + 0x10) + 8))) &&
       ((*unaff_s3 >> 7 & 1) != 0)) && ((in_stack_00000015 & 0xc0) == 0x40)) &&
     ((uVar2 == 0 || ((uVar1 & 0x600) == 0x600)))) {
    iVar4 = 10;
    FUN_00010374(pcRam0000001c);
    if (iVar4 == 0) {
      return;
    }
    puVar5 = (undefined *)0x804;
    FUN_0001038a(pcRam0000001c);
    *puVar5 = 0xb;
    puVar5[1] = 1;
    uVar3 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
    puVar5[0x11] = uVar3;
    puVar5[2] = (byte)*unaff_s3 & 0xf;
    if (uVar2 == 0) {
      (**unaff_s2)(puVar5 + 4,*unaff_s4 + 0x28008000,6,*unaff_s2);
      puVar5[3] = (byte)(*unaff_s3 >> 6) & 1;
      (**unaff_s2)(puVar5 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar5[10] = 1;
    }
    else {
      (**unaff_s2)((uVar2 + 0x18 & 0xffff) + 0x28008000,6,*unaff_s2);
      bVar6 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar2 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
      puVar5[3] = bVar6;
      if ((in_stack_0000001d & 0xc0) == 0x40) {
        puVar5[3] = bVar6 | 2;
      }
      (**unaff_s2)(puVar5 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar5[10] = 1;
    }
    goto _L0;
  }
  iVar4 = 1;
  FUN_000104a0(pcRam0000001c);
  if (iVar4 == 0) {
    return;
  }
  puVar5 = (undefined *)0x804;
  FUN_000104b8(pcRam0000001c);
  puVar5[1] = 1;
  *puVar5 = 2;
  uVar3 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
  puVar5[0x2a] = uVar3;
  uVar7 = *unaff_s3 & 0xf;
  uVar3 = (undefined)uVar7;
  if (uVar7 == 2) {
    uVar3 = 3;
_L0:
    puVar5[2] = uVar3;
  }
  else {
    if (uVar7 != 6) goto _L0;
    puVar5[2] = 2;
  }
  if (puVar5[2] == '\x01') {
    puVar5[10] = 0;
  }
  else {
    uVar7 = (*unaff_s3 >> 8) - 6 & 0xff;
    if (uVar7 < 0x20) {
      puVar5[10] = (char)uVar7;
    }
    else {
      puVar5[10] = 0x1f;
    }
    (**unaff_s2)(puVar5 + 0xb,(*unaff_s4 + 6 & 0xffff) + 0x28008000,puVar5[10],*unaff_s2);
  }
  if ((uVar2 == 0) || ((uVar1 & 0x600) == 0x200)) {
    (**unaff_s2)(puVar5 + 4,*unaff_s4 + 0x28008000,6);
    bVar6 = (byte)(*unaff_s3 >> 6) & 1;
  }
  else {
    (**unaff_s2)(puVar5 + 4,(uVar2 + 0x18 & 0xffff) + 0x28008000,6);
    bVar6 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar2 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
    puVar5[3] = bVar6;
    if ((in_stack_0000001d & 0xc0) != 0x40) goto _L0;
    bVar6 |= 2;
  }
  puVar5[3] = bVar6;
_L0:
  FUN_00010436();
  return;
}



void FUN_00010374(undefined *pcRam0000001c)

{
  int unaff_s0;
  undefined uVar1;
  int in_a0;
  undefined *puVar2;
  byte bVar3;
  code **unaff_s2;
  ushort *unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  byte in_stack_0000001d;
  
  FUN_00010374(pcRam0000001c);
  if (in_a0 != 0) {
    puVar2 = (undefined *)0x804;
    FUN_0001038a(pcRam0000001c);
    *puVar2 = 0xb;
    puVar2[1] = 1;
    uVar1 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
    puVar2[0x11] = uVar1;
    puVar2[2] = (byte)*unaff_s3 & 0xf;
    if (unaff_s0 == 0) {
      (**unaff_s2)(puVar2 + 4,*unaff_s4 + 0x28008000,6,*unaff_s2);
      puVar2[3] = (byte)(*unaff_s3 >> 6) & 1;
      (**unaff_s2)(puVar2 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar2[10] = 1;
    }
    else {
      (**unaff_s2)((unaff_s0 + 0x18U & 0xffff) + 0x28008000,6,*unaff_s2);
      bVar3 = (byte)*(undefined2 *)(&DAT_2800822e + ((unaff_s0 - 0x22eU) / 0x34 & 0xff) * 0x34) & 1;
      puVar2[3] = bVar3;
      if ((in_stack_0000001d & 0xc0) == 0x40) {
        puVar2[3] = bVar3 | 2;
      }
      (**unaff_s2)(puVar2 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar2[10] = 1;
    }
    FUN_00010436();
  }
  return;
}



void FUN_0001038a(undefined *pcRam0000001c)

{
  int unaff_s0;
  undefined uVar1;
  undefined *in_a0;
  byte bVar2;
  code **unaff_s2;
  ushort *unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  byte in_stack_0000001d;
  
  FUN_0001038a(pcRam0000001c);
  *in_a0 = 0xb;
  in_a0[1] = 1;
  uVar1 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
  in_a0[0x11] = uVar1;
  in_a0[2] = (byte)*unaff_s3 & 0xf;
  if (unaff_s0 == 0) {
    (**unaff_s2)(in_a0 + 4,*unaff_s4 + 0x28008000,6,*unaff_s2);
    in_a0[3] = (byte)(*unaff_s3 >> 6) & 1;
    (**unaff_s2)(in_a0 + 0xb,&stack0x00000010,6,*unaff_s2);
    in_a0[10] = 1;
  }
  else {
    (**unaff_s2)((unaff_s0 + 0x18U & 0xffff) + 0x28008000,6,*unaff_s2);
    bVar2 = (byte)*(undefined2 *)(&DAT_2800822e + ((unaff_s0 - 0x22eU) / 0x34 & 0xff) * 0x34) & 1;
    in_a0[3] = bVar2;
    if ((in_stack_0000001d & 0xc0) == 0x40) {
      in_a0[3] = bVar2 | 2;
    }
    (**unaff_s2)(in_a0 + 0xb,&stack0x00000010,6,*unaff_s2);
    in_a0[10] = 1;
  }
  FUN_00010436();
  return;
}



void FUN_00010436(void)

{
  FUN_00010436();
  return;
}



void _LVL79(undefined *param_1,int param_2,undefined *pcRam0000001c)

{
  ushort uVar1;
  int *unaff_s0;
  uint unaff_s1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  ushort uVar7;
  code **unaff_s2;
  ushort *unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  int unaff_s7;
  byte in_stack_00000015;
  byte in_stack_0000001d;
  
  while( true ) {
    _LVL79(param_1,param_2,pcRam0000001c);
    if ((param_1 != (undefined *)0x0) && (*(byte *)(unaff_s0 + 1) == unaff_s1)) {
      return;
    }
    unaff_s0 = (int *)*unaff_s0;
    if (unaff_s0 == (int *)0x0) break;
    param_2 = (int)unaff_s0 + 5;
    param_1 = &stack0x00000008;
  }
  iVar3 = 8;
  FUN_00010296(pcRam0000001c);
  if (iVar3 == 10) {
    return;
  }
  iVar3 = 0xc;
  FUN_000102a8(pcRam0000001c);
  (**unaff_s2)(iVar3 + 5,&stack0x00000008,6,*unaff_s2);
  *(char *)(iVar3 + 4) = (char)unaff_s1;
  uVar4 = 8;
  FUN_000102c8(pcRam0000001c);
  if (cRam00000000 != '\0') {
    return;
  }
  _L0(pcRam0000001c);
  if (0x14 < uVar4) {
    return;
  }
  uVar4 = (uint)*(ushort *)(unaff_s5 + 0x280083d8);
  uVar1 = *(ushort *)(unaff_s5 + 0x280083d0);
  (**unaff_s2)(&stack0x00000010,(*unaff_s4 + 6 & 0xffff) + 0x28008000,6,*unaff_s2);
  (**unaff_s2)(&stack0x00000018,*unaff_s4 + 0x28008000,6,*unaff_s2);
  if (((((unaff_s1 == 1) && (1 < *(byte *)(*(int *)(unaff_s7 + 0x10) + 8))) &&
       ((*unaff_s3 >> 7 & 1) != 0)) && ((in_stack_00000015 & 0xc0) == 0x40)) &&
     ((uVar4 == 0 || ((uVar1 & 0x600) == 0x600)))) {
    iVar3 = 10;
    FUN_00010374(pcRam0000001c);
    if (iVar3 == 0) {
      return;
    }
    puVar5 = (undefined *)0x804;
    FUN_0001038a(pcRam0000001c);
    *puVar5 = 0xb;
    puVar5[1] = 1;
    uVar2 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
    puVar5[0x11] = uVar2;
    puVar5[2] = (byte)*unaff_s3 & 0xf;
    if (uVar4 == 0) {
      (**unaff_s2)(puVar5 + 4,*unaff_s4 + 0x28008000,6,*unaff_s2);
      puVar5[3] = (byte)(*unaff_s3 >> 6) & 1;
      (**unaff_s2)(puVar5 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar5[10] = 1;
    }
    else {
      (**unaff_s2)((uVar4 + 0x18 & 0xffff) + 0x28008000,6,*unaff_s2);
      bVar6 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar4 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
      puVar5[3] = bVar6;
      if ((in_stack_0000001d & 0xc0) == 0x40) {
        puVar5[3] = bVar6 | 2;
      }
      (**unaff_s2)(puVar5 + 0xb,&stack0x00000010,6,*unaff_s2);
      puVar5[10] = 1;
    }
    goto _L0;
  }
  iVar3 = 1;
  FUN_000104a0(pcRam0000001c);
  if (iVar3 == 0) {
    return;
  }
  puVar5 = (undefined *)0x804;
  FUN_000104b8(pcRam0000001c);
  puVar5[1] = 1;
  *puVar5 = 2;
  uVar2 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
  puVar5[0x2a] = uVar2;
  uVar7 = *unaff_s3 & 0xf;
  uVar2 = (undefined)uVar7;
  if (uVar7 == 2) {
    uVar2 = 3;
_L0:
    puVar5[2] = uVar2;
  }
  else {
    if (uVar7 != 6) goto _L0;
    puVar5[2] = 2;
  }
  if (puVar5[2] == '\x01') {
    puVar5[10] = 0;
  }
  else {
    uVar7 = (*unaff_s3 >> 8) - 6 & 0xff;
    if (uVar7 < 0x20) {
      puVar5[10] = (char)uVar7;
    }
    else {
      puVar5[10] = 0x1f;
    }
    (**unaff_s2)(puVar5 + 0xb,(*unaff_s4 + 6 & 0xffff) + 0x28008000,puVar5[10],*unaff_s2);
  }
  if ((uVar4 == 0) || ((uVar1 & 0x600) == 0x200)) {
    (**unaff_s2)(puVar5 + 4,*unaff_s4 + 0x28008000,6);
    bVar6 = (byte)(*unaff_s3 >> 6) & 1;
  }
  else {
    (**unaff_s2)(puVar5 + 4,(uVar4 + 0x18 & 0xffff) + 0x28008000,6);
    bVar6 = (byte)*(undefined2 *)(&DAT_2800822e + ((uVar4 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
    puVar5[3] = bVar6;
    if ((in_stack_0000001d & 0xc0) != 0x40) goto _L0;
    bVar6 |= 2;
  }
  puVar5[3] = bVar6;
_L0:
  FUN_00010436();
  return;
}



void FUN_000104a0(undefined *pcRam0000001c)

{
  int unaff_s0;
  undefined uVar1;
  int in_a0;
  undefined *puVar2;
  byte bVar3;
  ushort uVar4;
  code **unaff_s2;
  ushort *unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  byte in_stack_0000001d;
  
  FUN_000104a0(pcRam0000001c);
  if (in_a0 == 0) {
    return;
  }
  puVar2 = (undefined *)0x804;
  FUN_000104b8(pcRam0000001c);
  puVar2[1] = 1;
  *puVar2 = 2;
  uVar1 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
  puVar2[0x2a] = uVar1;
  uVar4 = *unaff_s3 & 0xf;
  uVar1 = (undefined)uVar4;
  if (uVar4 == 2) {
    uVar1 = 3;
_L0:
    puVar2[2] = uVar1;
  }
  else {
    if (uVar4 != 6) goto _L0;
    puVar2[2] = 2;
  }
  if (puVar2[2] == '\x01') {
    puVar2[10] = 0;
  }
  else {
    uVar4 = (*unaff_s3 >> 8) - 6 & 0xff;
    if (uVar4 < 0x20) {
      puVar2[10] = (char)uVar4;
    }
    else {
      puVar2[10] = 0x1f;
    }
    (**unaff_s2)(puVar2 + 0xb,(*unaff_s4 + 6 & 0xffff) + 0x28008000,puVar2[10],*unaff_s2);
  }
  if ((unaff_s0 == 0) || ((unaff_s6 & 0x600) == 0x200)) {
    (**unaff_s2)(puVar2 + 4,*unaff_s4 + 0x28008000,6);
    bVar3 = (byte)(*unaff_s3 >> 6) & 1;
  }
  else {
    (**unaff_s2)(puVar2 + 4,(unaff_s0 + 0x18U & 0xffff) + 0x28008000,6);
    bVar3 = (byte)*(undefined2 *)(&DAT_2800822e + ((unaff_s0 - 0x22eU) / 0x34 & 0xff) * 0x34) & 1;
    puVar2[3] = bVar3;
    if ((in_stack_0000001d & 0xc0) != 0x40) goto _L0;
    bVar3 |= 2;
  }
  puVar2[3] = bVar3;
_L0:
  FUN_00010436();
  return;
}



void FUN_000104b8(undefined *pcRam0000001c)

{
  int unaff_s0;
  undefined uVar1;
  undefined *in_a0;
  byte bVar2;
  ushort uVar3;
  code **unaff_s2;
  ushort *unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  byte in_stack_0000001d;
  
  FUN_000104b8(pcRam0000001c);
  in_a0[1] = 1;
  *in_a0 = 2;
  uVar1 = (*(code *)pcRam0000001c)(*(ushort *)(unaff_s5 + 0x280083d4) & 0xff,pcRam0000001c);
  in_a0[0x2a] = uVar1;
  uVar3 = *unaff_s3 & 0xf;
  uVar1 = (undefined)uVar3;
  if (uVar3 == 2) {
    uVar1 = 3;
_L0:
    in_a0[2] = uVar1;
  }
  else {
    if (uVar3 != 6) goto _L0;
    in_a0[2] = 2;
  }
  if (in_a0[2] == '\x01') {
    in_a0[10] = 0;
  }
  else {
    uVar3 = (*unaff_s3 >> 8) - 6 & 0xff;
    if (uVar3 < 0x20) {
      in_a0[10] = (char)uVar3;
    }
    else {
      in_a0[10] = 0x1f;
    }
    (**unaff_s2)(in_a0 + 0xb,(*unaff_s4 + 6 & 0xffff) + 0x28008000,in_a0[10],*unaff_s2);
  }
  if ((unaff_s0 == 0) || ((unaff_s6 & 0x600) == 0x200)) {
    (**unaff_s2)(in_a0 + 4,*unaff_s4 + 0x28008000,6);
    bVar2 = (byte)(*unaff_s3 >> 6) & 1;
  }
  else {
    (**unaff_s2)(in_a0 + 4,(unaff_s0 + 0x18U & 0xffff) + 0x28008000,6);
    bVar2 = (byte)*(undefined2 *)(&DAT_2800822e + ((unaff_s0 - 0x22eU) / 0x34 & 0xff) * 0x34) & 1;
    in_a0[3] = bVar2;
    if ((in_stack_0000001d & 0xc0) != 0x40) goto _L0;
    bVar2 |= 2;
  }
  in_a0[3] = bVar2;
_L0:
  FUN_00010436();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4f91

void llm_con_req_tx_cfm(uint8_t rx_hdl)

{
  int iVar1;
  undefined3 in_register_00002029;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint uVar2;
  undefined auStack88 [4];
  llm_pdu_adv rxdata;
  llc_create_con_req_ind param;
  llm_pdu_con_req_tx txdata;
  
  iVar1 = CONCAT31(in_register_00002029,rx_hdl) * 0xe;
  (*pcRam00000000)(auStack88,*(ushort *)(iVar1 + 0x280083d6) + 0x28008000,6,pcRam00000000);
  (*pcRam00000000)(&param.sleep_clk_acc,_DAT_280082ec + 0x28008000,0x16,pcRam00000000);
  param.con_lat = *(ushort *)(iVar1 + 0x280083d8);
  uVar2 = (uint)param.con_lat;
  if (uVar2 == 0) {
    param.peer_addr.addr[2] = (byte)(*(ushort *)(iVar1 + 0x280083d2) >> 6) & 1;
    (*pcRam00000000)(&param.sup_to,auStack88,6,pcRam00000000);
  }
  else {
    (*pcRam00000000)(&param.sup_to,(uVar2 + 0x18 & 0xffff) + 0x28008000,6,pcRam00000000);
    param.peer_addr.addr[2] =
         (byte)*(undefined2 *)(&DAT_2800822e + ((uVar2 - 0x22e) / 0x34 & 0xff) * 0x34) & 2 |
         (byte)*(undefined2 *)(&DAT_2800822e + ((uVar2 - 0x22e) / 0x34 & 0xff) * 0x34) & 1;
  }
  rxdata.adva_data._0_2_ = txdata._6_2_;
  rxdata.adva_data._2_2_ = txdata.winoffset;
  param.con_int = txdata.interval;
  param.peer_addr.addr[4] = txdata.chm.map[1] >> 5;
  param.peer_addr.addr[3] = txdata.chm.map[1] & 0x1f;
  if ((_DAT_00000054 != 0) && (FUN_000106b0(), extraout_a0 == 0)) {
    FUN_000106c4();
    _DAT_00000054 = extraout_a0_00;
    FUN_000106d2();
    _DAT_00000054 = 0;
  }
  FUN_000106e0();
  _LVL143();
  return;
}



void FUN_000106b0(void)

{
  int unaff_s0;
  int extraout_a0;
  undefined4 extraout_a0_00;
  
  FUN_000106b0();
  if (extraout_a0 == 0) {
    FUN_000106c4();
    *(undefined4 *)(unaff_s0 + 0x54) = extraout_a0_00;
    FUN_000106d2();
    *(undefined4 *)(unaff_s0 + 0x54) = 0;
  }
  FUN_000106e0();
  _LVL143();
  return;
}



void FUN_000106c4(void)

{
  int unaff_s0;
  undefined4 extraout_a0;
  
  FUN_000106c4();
  *(undefined4 *)(unaff_s0 + 0x54) = extraout_a0;
  FUN_000106d2();
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  FUN_000106e0();
  _LVL143();
  return;
}



void FUN_000106d2(void)

{
  int unaff_s0;
  
  FUN_000106d2();
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  FUN_000106e0();
  _LVL143();
  return;
}



void FUN_000106e0(void)

{
  FUN_000106e0();
  _LVL143();
  return;
}



void _LVL143(void)

{
  _LVL143();
  return;
}



// DWARF DIE: 4f18

void llm_common_cmd_complete_send(uint16_t opcode,uint8_t status)

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



// DWARF DIE: 5cb6

void llm_ble_ready(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4e9f

void llm_common_cmd_status_send(uint16_t opcode,uint8_t status)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4adb

uint8_t llm_test_mode_start_tx(hci_le_tx_test_cmd *param)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  ushort *puVar5;
  uint8_t uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined auStack288 [4];
  uint8_t data [255];
  
  if ((param->tx_freq < 0x28) && (uVar6 = '\x12', param->test_data_len != '\0')) {
    if (param->pk_payload_type < 8) {
      iVar1 = FUN_000107da(_DAT_00000014,_DAT_00000048,_DAT_00000058);
      iVar2 = FUN_000107f0(_DAT_00000014,_DAT_00000048,_DAT_00000058);
      uVar6 = '\a';
      if ((iVar1 != 0) && (iVar2 != 0)) {
        *(undefined2 *)((uint)*(ushort *)(iVar2 + 4) * 10 + 0x280082ce) = *(undefined2 *)(iVar1 + 6)
        ;
        puVar5 = (ushort *)((uint)*(ushort *)(iVar2 + 4) * 10 + 0x280082d2);
        *puVar5 = (ushort)(((uint)*puVar5 << 0x11) >> 0x11) | 0x8000;
        _L0(_DAT_00000014,_DAT_00000048,_DAT_00000058);
        _DAT_28000000 = _DAT_28000000 & 0xfffbffff | 0x40000;
        uVar7 = (uint)param->pk_payload_type;
        if (uVar7 < 8) {
          uVar4 = 1 << (uVar7 & 0x1f);
          if ((uVar4 & 0xf6) == 0) {
            if ((uVar4 & 9) != 0) {
              _DAT_280000e0 = (uVar7 & 1) << 0xd | _DAT_280000e0 & 0xffffcfff | 0x1000;
            }
          }
          else {
            puVar8 = (undefined *)(uVar7 - 1 & 0xff);
            uVar3 = 0;
            if (puVar8 < (undefined *)0x7) {
              uVar3 = *puVar8;
            }
            (*pcRam00000000)(auStack288,uVar3,param->test_data_len,pcRam00000000);
            (*pcRam00000000)(*(ushort *)(iVar1 + 6) + 0x28008000,auStack288,param->test_data_len,
                             pcRam00000000);
            _DAT_280000e0 &= 0xffffefff;
          }
        }
        if (_DAT_00000014 == 0) {
          _DAT_00000014 = FUN_000108b8();
          (*pcRam00000000)(0,0x24,pcRam00000000);
          iVar1 = _DAT_00000014;
          *(undefined2 *)(_DAT_00000014 + 0x16) = 0x800;
          *(undefined *)(iVar1 + 0x1c) = 0;
          *(undefined2 *)(iVar1 + 0x18) = 0x800;
          *(undefined *)(iVar1 + 0x1b) = 0;
          iVar1 = _DAT_00000014;
          *(undefined *)(_DAT_00000014 + 0x1a) = 7;
          *(undefined *)(iVar1 + 0x21) = 1;
          _DAT_280082fe = *(byte *)(iVar1 + 0x1c) | 0x600;
          _DAT_280082f4 = 0x604;
        }
        *(ushort *)((uint)*(ushort *)(iVar2 + 4) * 10 + 0x280082cc) =
             CONCAT11(param->test_data_len,param->pk_payload_type);
        _DAT_00000048 = FUN_0001094c();
        uVar6 = '\x1f';
        if (_DAT_00000048 != 0) {
          _DAT_00000058 &= 0xffff;
          uVar6 = '\0';
        }
      }
    }
    return uVar6;
  }
  return '\x12';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000107da(int iRam00000014,int iRam00000048,uint3 uRam00000058)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  uint unaff_s3;
  
  iVar1 = FUN_000107da(iRam00000014,iRam00000048,uRam00000058);
  iVar2 = FUN_000107f0(iRam00000014,iRam00000048,uRam00000058);
  uVar6 = 7;
  if ((iVar1 != 0) && (iVar2 != 0)) {
    *(undefined2 *)((uint)*(ushort *)(iVar2 + 4) * 10 + 0x280082ce) = *(undefined2 *)(iVar1 + 6);
    puVar5 = (ushort *)((uint)*(ushort *)(iVar2 + 4) * 10 + 0x280082d2);
    *puVar5 = (ushort)(((uint)*puVar5 << 0x11) >> 0x11) | 0x8000;
    _L0(iRam00000014,iRam00000048,uRam00000058);
    _DAT_28000000 = _DAT_28000000 & 0xfffbffff | 0x40000;
    uVar7 = (uint)*(byte *)(unaff_s0 + 2);
    if (uVar7 <= unaff_s3) {
      uVar4 = 1 << (uVar7 & 0x1f);
      if ((uVar4 & 0xf6) == 0) {
        if ((uVar4 & 9) != 0) {
          _DAT_280000e0 = (uVar7 & 1) << 0xd | _DAT_280000e0 & 0xffffcfff | 0x1000;
        }
      }
      else {
        puVar8 = (undefined *)(uVar7 - 1 & 0xff);
        uVar3 = 0;
        if (puVar8 < (undefined *)0x7) {
          uVar3 = *puVar8;
        }
        (*pcRam00000000)(uVar3,*(undefined *)(unaff_s0 + 1),pcRam00000000);
        (*pcRam00000000)(*(ushort *)(iVar1 + 6) + 0x28008000,*(undefined *)(unaff_s0 + 1),
                         pcRam00000000);
        _DAT_280000e0 &= 0xffffefff;
      }
    }
    if (iRam00000014 == 0) {
      iRam00000014 = FUN_000108b8();
      (*pcRam00000000)(0,0x24,pcRam00000000);
      iVar1 = iRam00000014;
      *(undefined2 *)(iRam00000014 + 0x16) = 0x800;
      *(undefined *)(iVar1 + 0x1c) = 0;
      *(undefined2 *)(iVar1 + 0x18) = 0x800;
      *(undefined *)(iVar1 + 0x1b) = 0;
      iVar1 = iRam00000014;
      *(undefined *)(iRam00000014 + 0x1a) = 7;
      *(undefined *)(iVar1 + 0x21) = 1;
      _DAT_280082fe = *(byte *)(iVar1 + 0x1c) | 0x600;
      _DAT_280082f4 = 0x604;
    }
    *(ushort *)((uint)*(ushort *)(iVar2 + 4) * 10 + 0x280082cc) =
         CONCAT11(*(undefined *)(unaff_s0 + 1),*(undefined *)(unaff_s0 + 2));
    iRam00000048 = FUN_0001094c();
    uVar6 = 0x1f;
    if (iRam00000048 != 0) {
      uRam00000058 &= 0xffff;
      uVar6 = 0;
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000107f0(int iRam00000014,int iRam00000048,uint3 uRam00000058)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  uint unaff_s3;
  
  iVar2 = FUN_000107f0(iRam00000014,iRam00000048,uRam00000058);
  uVar6 = 7;
  if ((unaff_s1 != 0) && (iVar2 != 0)) {
    *(undefined2 *)((uint)*(ushort *)(iVar2 + 4) * 10 + 0x280082ce) = *(undefined2 *)(unaff_s1 + 6);
    puVar5 = (ushort *)((uint)*(ushort *)(iVar2 + 4) * 10 + 0x280082d2);
    *puVar5 = (ushort)(((uint)*puVar5 << 0x11) >> 0x11) | 0x8000;
    _L0(iRam00000014,iRam00000048,uRam00000058);
    _DAT_28000000 = _DAT_28000000 & 0xfffbffff | 0x40000;
    uVar7 = (uint)*(byte *)(unaff_s0 + 2);
    if (uVar7 <= unaff_s3) {
      uVar4 = 1 << (uVar7 & 0x1f);
      if ((uVar4 & 0xf6) == 0) {
        if ((uVar4 & 9) != 0) {
          _DAT_280000e0 = (uVar7 & 1) << 0xd | _DAT_280000e0 & 0xffffcfff | 0x1000;
        }
      }
      else {
        puVar8 = (undefined *)(uVar7 - 1 & 0xff);
        uVar3 = 0;
        if (puVar8 < (undefined *)0x7) {
          uVar3 = *puVar8;
        }
        (*pcRam00000000)(uVar3,*(undefined *)(unaff_s0 + 1),pcRam00000000);
        (*pcRam00000000)(*(ushort *)(unaff_s1 + 6) + 0x28008000,*(undefined *)(unaff_s0 + 1),
                         pcRam00000000);
        _DAT_280000e0 &= 0xffffefff;
      }
    }
    if (iRam00000014 == 0) {
      iRam00000014 = FUN_000108b8();
      (*pcRam00000000)(0,0x24,pcRam00000000);
      iVar1 = iRam00000014;
      *(undefined2 *)(iRam00000014 + 0x16) = 0x800;
      *(undefined *)(iVar1 + 0x1c) = 0;
      *(undefined2 *)(iVar1 + 0x18) = 0x800;
      *(undefined *)(iVar1 + 0x1b) = 0;
      iVar1 = iRam00000014;
      *(undefined *)(iRam00000014 + 0x1a) = 7;
      *(undefined *)(iVar1 + 0x21) = 1;
      _DAT_280082fe = *(byte *)(iVar1 + 0x1c) | 0x600;
      _DAT_280082f4 = 0x604;
    }
    *(ushort *)((uint)*(ushort *)(iVar2 + 4) * 10 + 0x280082cc) =
         CONCAT11(*(undefined *)(unaff_s0 + 1),*(undefined *)(unaff_s0 + 2));
    iRam00000048 = FUN_0001094c();
    uVar6 = 0x1f;
    if (iRam00000048 != 0) {
      uRam00000058 &= 0xffff;
      uVar6 = 0;
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(int iRam00000014,int iRam00000048,uint3 param_3)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint unaff_s3;
  int unaff_s4;
  
  _L0(iRam00000014,iRam00000048,param_3);
  _DAT_28000000 = _DAT_28000000 & 0xfffbffff | 0x40000;
  uVar4 = (uint)*(byte *)(unaff_s0 + 2);
  if (uVar4 <= unaff_s3) {
    uVar3 = 1 << (uVar4 & 0x1f);
    if ((uVar3 & 0xf6) == 0) {
      if ((uVar3 & 9) != 0) {
        _DAT_280000e0 = (uVar4 & 1) << 0xd | _DAT_280000e0 & 0xffffcfff | 0x1000;
      }
    }
    else {
      puVar6 = (undefined *)(uVar4 - 1 & 0xff);
      uVar2 = 0;
      if (puVar6 < (undefined *)0x7) {
        uVar2 = *puVar6;
      }
      (*pcRam00000000)(uVar2,*(undefined *)(unaff_s0 + 1),pcRam00000000);
      (*pcRam00000000)(*(ushort *)(unaff_s1 + 6) + 0x28008000,*(undefined *)(unaff_s0 + 1),
                       pcRam00000000);
      _DAT_280000e0 &= 0xffffefff;
    }
  }
  if (iRam00000014 == 0) {
    iRam00000014 = FUN_000108b8();
    (*pcRam00000000)(0,0x24,pcRam00000000);
    iVar1 = iRam00000014;
    *(undefined2 *)(iRam00000014 + 0x16) = 0x800;
    *(undefined *)(iVar1 + 0x1c) = 0;
    *(undefined2 *)(iVar1 + 0x18) = 0x800;
    *(undefined *)(iVar1 + 0x1b) = 0;
    iVar1 = iRam00000014;
    *(undefined *)(iRam00000014 + 0x1a) = 7;
    *(undefined *)(iVar1 + 0x21) = 1;
    _DAT_280082fe = *(byte *)(iVar1 + 0x1c) | 0x600;
    _DAT_280082f4 = 0x604;
  }
  *(ushort *)((uint)*(ushort *)(unaff_s4 + 4) * 10 + 0x280082cc) =
       CONCAT11(*(undefined *)(unaff_s0 + 1),*(undefined *)(unaff_s0 + 2));
  iRam00000048 = FUN_0001094c();
  uVar5 = 0x1f;
  if (iRam00000048 != 0) {
    param_3 &= 0xffff;
    uVar5 = 0;
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000108b8(void)

{
  code *pcVar1;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s4;
  
  uVar2 = FUN_000108b8();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s1 + 0x14) = uVar2;
  (*pcVar1)(0,0x24,pcVar1);
  iVar3 = *(int *)(unaff_s1 + 0x14);
  *(undefined2 *)(iVar3 + 0x16) = 0x800;
  *(undefined *)(iVar3 + 0x1c) = 0;
  *(undefined2 *)(iVar3 + 0x18) = 0x800;
  *(undefined *)(iVar3 + 0x1b) = 0;
  iVar3 = *(int *)(unaff_s1 + 0x14);
  *(undefined *)(iVar3 + 0x1a) = 7;
  *(undefined *)(iVar3 + 0x21) = 1;
  _DAT_280082fe = *(byte *)(iVar3 + 0x1c) | 0x600;
  _DAT_280082f4 = 0x604;
  *(ushort *)((uint)*(ushort *)(unaff_s4 + 4) * 10 + 0x280082cc) =
       CONCAT11(*(undefined *)(unaff_s0 + 1),*(undefined *)(unaff_s0 + 2));
  iVar3 = FUN_0001094c();
  *(int *)(unaff_s1 + 0x48) = iVar3;
  uVar2 = 0x1f;
  if (iVar3 != 0) {
    *(undefined *)(unaff_s1 + 0x5a) = 0;
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0001094c(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001094c();
  *(int *)(unaff_s1 + 0x48) = iVar1;
  uVar2 = 0x1f;
  if (iVar1 != 0) {
    *(undefined *)(unaff_s1 + 0x5a) = 0;
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 498f

uint8_t llm_test_mode_start_rx(hci_le_rx_test_cmd *param)

{
  int iVar1;
  uint8_t uVar2;
  
  if (param->rx_freq < 0x28) {
    if (_DAT_00000014 == 0) {
      _DAT_00000014 = _LVL205();
      (*pcRam00000000)(0,0x24,pcRam00000000);
      iVar1 = _DAT_00000014;
      *(undefined2 *)(_DAT_00000014 + 0x16) = 0x800;
      *(undefined *)(iVar1 + 0x1c) = 0;
      *(undefined2 *)(iVar1 + 0x18) = 0x800;
      *(undefined *)(iVar1 + 0x1b) = 0;
      iVar1 = _DAT_00000014;
      *(undefined *)(_DAT_00000014 + 0x1a) = 7;
      *(undefined *)(iVar1 + 0x21) = 1;
      _DAT_280082fe = *(byte *)(iVar1 + 0x1c) | 0x600;
      _DAT_280082f4 = 0x604;
    }
    _DAT_28000000 = _DAT_28000000 & 0xfffbffff | 0x40000;
    FUN_00010a7e();
    _DAT_00000048 = FUN_00010a8a();
    uVar2 = '\x1f';
    if (_DAT_00000048 != 0) {
      DAT_0000005a = 1;
      uVar2 = '\0';
    }
    return uVar2;
  }
  return '\x12';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _LVL205(void)

{
  code *pcVar1;
  int unaff_s0;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = _LVL205();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = uVar2;
  (*pcVar1)(0,0x24,pcVar1);
  iVar3 = *(int *)(unaff_s0 + 0x14);
  *(undefined2 *)(iVar3 + 0x16) = 0x800;
  *(undefined *)(iVar3 + 0x1c) = 0;
  *(undefined2 *)(iVar3 + 0x18) = 0x800;
  *(undefined *)(iVar3 + 0x1b) = 0;
  iVar3 = *(int *)(unaff_s0 + 0x14);
  *(undefined *)(iVar3 + 0x1a) = 7;
  *(undefined *)(iVar3 + 0x21) = 1;
  _DAT_280082fe = *(byte *)(iVar3 + 0x1c) | 0x600;
  _DAT_280082f4 = 0x604;
  _DAT_28000000 = _DAT_28000000 & 0xfffbffff | 0x40000;
  FUN_00010a7e();
  iVar3 = FUN_00010a8a();
  *(int *)(unaff_s0 + 0x48) = iVar3;
  uVar2 = 0x1f;
  if (iVar3 != 0) {
    *(undefined *)(unaff_s0 + 0x5a) = 1;
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_00010a7e(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  
  FUN_00010a7e();
  iVar1 = FUN_00010a8a();
  *(int *)(unaff_s0 + 0x48) = iVar1;
  uVar2 = 0x1f;
  if (iVar1 != 0) {
    *(undefined *)(unaff_s0 + 0x5a) = 1;
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_00010a8a(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010a8a();
  *(int *)(unaff_s0 + 0x48) = iVar1;
  uVar2 = 0x1f;
  if (iVar1 != 0) {
    *(undefined *)(unaff_s0 + 0x5a) = 1;
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4764

uint8_t llm_set_adv_param(hci_le_set_adv_param_cmd *param)

{
  int iVar1;
  uint8_t uVar2;
  int extraout_a0;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((((param->adv_intv_max < param->adv_intv_min) || (7 < param->adv_chnl_map)) ||
        (3 < param->adv_filt_policy)) ||
       (((param->adv_type & 0xfb) == 0 && (param->adv_intv_min < 0x20)))) ||
      ((3 < param->own_addr_type || (1 < param->peer_addr_type)))) ||
     ((param->adv_type != 1 && (0x4000 < param->adv_intv_max)))) {
    return '\x12';
  }
  if (_DAT_00000014 == 0) {
    FUN_00010b3c();
    _DAT_00000014 = extraout_a0;
    (*pcRam00000000)(0,0x24,pcRam00000000);
    iVar1 = _DAT_00000014;
    *(undefined2 *)(_DAT_00000014 + 0x16) = 0x800;
    *(undefined *)(iVar1 + 0x1c) = 0;
    *(undefined2 *)(iVar1 + 0x18) = 0x800;
    *(undefined *)(iVar1 + 0x1b) = 0;
    iVar1 = _DAT_00000014;
    *(undefined *)(_DAT_00000014 + 0x1a) = 7;
    *(undefined *)(iVar1 + 0x21) = 1;
    _DAT_280082fe = *(byte *)(iVar1 + 0x1c) | 0x600;
    _DAT_280082f4 = 0x604;
  }
  iVar1 = _DAT_00000014;
  *(undefined *)(_DAT_00000014 + 0x1c) = 8;
  *(undefined *)(iVar1 + 0x21) = 1;
  if (param->adv_type < 5) {
    UNRECOVERED_JUMPTABLE = *(code **)((uint)param->adv_type * 4);
                    // WARNING: Could not emulate address calculation at 0x00010bba
                    // WARNING: Treating indirect jump as call
    uVar2 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  return '\x12';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010b3c(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 extraout_a0;
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  FUN_00010b3c();
  UNRECOVERED_JUMPTABLE = pcRam00000000;
  *(undefined4 *)(unaff_s1 + 0x14) = extraout_a0;
  (*UNRECOVERED_JUMPTABLE)(0,0x24,UNRECOVERED_JUMPTABLE);
  iVar1 = *(int *)(unaff_s1 + 0x14);
  *(undefined2 *)(iVar1 + 0x16) = 0x800;
  *(undefined *)(iVar1 + 0x1c) = 0;
  *(undefined2 *)(iVar1 + 0x18) = 0x800;
  *(undefined *)(iVar1 + 0x1b) = 0;
  iVar1 = *(int *)(unaff_s1 + 0x14);
  *(undefined *)(iVar1 + 0x1a) = 7;
  *(undefined *)(iVar1 + 0x21) = 1;
  _DAT_280082fe = *(byte *)(iVar1 + 0x1c) | 0x600;
  _DAT_280082f4 = 0x604;
  iVar1 = *(int *)(unaff_s1 + 0x14);
  *(undefined *)(iVar1 + 0x1c) = 8;
  *(undefined *)(iVar1 + 0x21) = 1;
  if (*(byte *)(unaff_s0 + 4) < 5) {
    UNRECOVERED_JUMPTABLE = *(code **)((uint)*(byte *)(unaff_s0 + 4) * 4);
                    // WARNING: Could not emulate address calculation at 0x00010bba
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(0x12,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



undefined4 FUN_00010be0(void)

{
  undefined2 *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  code **unaff_s4;
  
  iVar2 = FUN_00010be0();
  if (iVar2 == 0) {
    *(ushort *)(unaff_s2 + 0x2e0) =
         (ushort)*(byte *)(unaff_s0 + 3) << 7 | *(ushort *)(unaff_s2 + 0x2e0) & 0xff7f;
    (**unaff_s4)((uint)*(ushort *)(unaff_s2 + 0x2e2) + unaff_s2,6,*unaff_s4);
  }
  iVar2 = *(int *)(unaff_s1 + 0x14);
  if (*(char *)(unaff_s0 + 2) == '\x04') {
    *(undefined2 *)(iVar2 + 0x18) = unaff_s0[1];
    *(undefined2 *)(iVar2 + 0x16) = *unaff_s0;
  }
  else {
    *(undefined *)(iVar2 + 0x21) = 0;
  }
  iVar2 = *(int *)(unaff_s1 + 0x14);
  *(undefined *)(iVar2 + 0x20) = *(undefined *)(unaff_s0 + 3);
  (**unaff_s4)(iVar2 + 0x10,6,*unaff_s4);
  *(undefined *)(*(int *)(unaff_s1 + 0x14) + 0x1f) = *(undefined *)((int)unaff_s0 + 5);
  iVar2 = _L0();
  if (iVar2 == 0) {
    uVar1 = 0x12;
  }
  else {
    uVar1 = 0;
    *(undefined *)(*(int *)(unaff_s1 + 0x14) + 0x1a) = *(undefined *)((int)unaff_s0 + 0xd);
  }
  return uVar1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    uVar1 = 0x12;
  }
  else {
    uVar1 = 0;
    *(undefined *)(*(int *)(unaff_s1 + 0x14) + 0x1a) = *(undefined *)(unaff_s0 + 0xd);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 44f2

uint8_t llm_set_adv_en(hci_le_set_adv_en_cmd *param)

{
  byte bVar1;
  uint8_t uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param->adv_en == '\0') {
    _LVL265();
    _LVL267();
    FUN_00010e5c();
    return '\0';
  }
  if (_DAT_00000014 == 0) {
    _DAT_00000014 = _LVL243(DAT_0000002c);
    (*pcRam00000000)(0,0x24,pcRam00000000);
    iVar3 = _DAT_00000014;
    *(undefined2 *)(_DAT_00000014 + 0x16) = 0x800;
    *(undefined *)(iVar3 + 0x1c) = 0;
    *(undefined2 *)(iVar3 + 0x18) = 0x800;
    *(undefined *)(iVar3 + 0x1b) = 0;
    iVar3 = _DAT_00000014;
    *(undefined *)(_DAT_00000014 + 0x1a) = 7;
    *(undefined *)(iVar3 + 0x21) = 1;
    _DAT_280082fe = *(byte *)(iVar3 + 0x1c) | 0x600;
    _DAT_280082f4 = 0x604;
  }
  iVar3 = FUN_00010d42(DAT_0000002c);
  if ((iVar3 == 0) || ((*(byte *)(_DAT_00000014 + 0x1f) & 1) == 0)) {
    FUN_00010d6a(DAT_0000002c);
    bVar1 = *(byte *)(_DAT_00000014 + 0x1c);
    if (bVar1 == 1) {
      uVar4 = _L0();
      return (uint8_t)uVar4;
    }
    if (((bVar1 != 0) && (bVar1 != 2)) && (bVar1 != 6)) {
      return '\x12';
    }
    _DAT_280082fe =
         (ushort)((*(byte *)(_DAT_00000014 + 0x1d) + 6 & 0xff) << 8) | (ushort)bVar1 | 0x20;
    if (*(char *)(_DAT_00000014 + 0x1c) == '\x02') {
      _DAT_00000048 = _L0();
      if (_DAT_00000048 == 0) goto _L0;
    }
    else {
      _DAT_280082f4 = (ushort)((*(byte *)(_DAT_00000014 + 0x1e) + 6 & 0xff) << 8) | 0x24;
      _DAT_00000048 = _L0();
      if (_DAT_00000048 == 0) {
        return '\x1f';
      }
    }
    FUN_00010e0c();
    _LVL261();
    uVar2 = '\0';
  }
  else {
_L0:
    uVar2 = '\x12';
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _LVL243(undefined param_1)

{
  byte bVar1;
  code *pcVar2;
  int unaff_s0;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = _LVL243(param_1);
  pcVar2 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = uVar3;
  (*pcVar2)(0,0x24,pcVar2);
  iVar4 = *(int *)(unaff_s0 + 0x14);
  *(undefined2 *)(iVar4 + 0x16) = 0x800;
  *(undefined *)(iVar4 + 0x1c) = 0;
  *(undefined2 *)(iVar4 + 0x18) = 0x800;
  *(undefined *)(iVar4 + 0x1b) = 0;
  iVar4 = *(int *)(unaff_s0 + 0x14);
  *(undefined *)(iVar4 + 0x1a) = 7;
  *(undefined *)(iVar4 + 0x21) = 1;
  _DAT_280082fe = *(byte *)(iVar4 + 0x1c) | 0x600;
  _DAT_280082f4 = 0x604;
  iVar4 = FUN_00010d42(param_1);
  if ((iVar4 == 0) || ((*(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1f) & 1) == 0)) {
    FUN_00010d6a(param_1);
    bVar1 = *(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1c);
    if (bVar1 == 1) {
      uVar3 = _L0();
      return uVar3;
    }
    if (((bVar1 != 0) && (bVar1 != 2)) && (bVar1 != 6)) {
      return 0x12;
    }
    _DAT_280082fe =
         (ushort)((*(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1d) + 6 & 0xff) << 8) | (ushort)bVar1 |
         0x20;
    if (*(char *)(*(int *)(unaff_s0 + 0x14) + 0x1c) == '\x02') {
      iVar4 = _L0();
      *(int *)(unaff_s0 + 0x48) = iVar4;
      if (iVar4 == 0) goto _L0;
    }
    else {
      _DAT_280082f4 = (ushort)((*(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1e) + 6 & 0xff) << 8) | 0x24
      ;
      iVar4 = _L0();
      *(int *)(unaff_s0 + 0x48) = iVar4;
      if (iVar4 == 0) {
        return 0x1f;
      }
    }
    FUN_00010e0c();
    _LVL261();
    uVar3 = 0;
  }
  else {
_L0:
    uVar3 = 0x12;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010d42(undefined param_1)

{
  byte bVar1;
  int unaff_s0;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_00010d42(param_1);
  if ((iVar3 == 0) || ((*(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1f) & 1) == 0)) {
    FUN_00010d6a(param_1);
    bVar1 = *(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1c);
    if (bVar1 == 1) {
      uVar2 = _L0();
      return uVar2;
    }
    if (((bVar1 != 0) && (bVar1 != 2)) && (bVar1 != 6)) {
      return 0x12;
    }
    _DAT_280082fe =
         (ushort)((*(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1d) + 6 & 0xff) << 8) | (ushort)bVar1 |
         0x20;
    if (*(char *)(*(int *)(unaff_s0 + 0x14) + 0x1c) == '\x02') {
      iVar3 = _L0();
      *(int *)(unaff_s0 + 0x48) = iVar3;
      if (iVar3 == 0) goto _L0;
    }
    else {
      _DAT_280082f4 = (ushort)((*(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1e) + 6 & 0xff) << 8) | 0x24
      ;
      iVar3 = _L0();
      *(int *)(unaff_s0 + 0x48) = iVar3;
      if (iVar3 == 0) {
        return 0x1f;
      }
    }
    FUN_00010e0c();
    _LVL261();
    uVar2 = 0;
  }
  else {
_L0:
    uVar2 = 0x12;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010d6a(undefined param_1)

{
  byte bVar1;
  int unaff_s0;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00010d6a(param_1);
  bVar1 = *(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1c);
  if (bVar1 == 1) {
    uVar2 = _L0();
    return uVar2;
  }
  if (((bVar1 == 0) || (bVar1 == 2)) || (uVar2 = 0x12, bVar1 == 6)) {
    _DAT_280082fe =
         (ushort)((*(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1d) + 6 & 0xff) << 8) | (ushort)bVar1 |
         0x20;
    if (*(char *)(*(int *)(unaff_s0 + 0x14) + 0x1c) == '\x02') {
      iVar3 = _L0();
      *(int *)(unaff_s0 + 0x48) = iVar3;
      if (iVar3 == 0) {
        return 0x12;
      }
    }
    else {
      _DAT_280082f4 = (ushort)((*(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1e) + 6 & 0xff) << 8) | 0x24
      ;
      iVar3 = _L0();
      *(int *)(unaff_s0 + 0x48) = iVar3;
      if (iVar3 == 0) {
        return 0x1f;
      }
    }
    FUN_00010e0c();
    _LVL261();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _L0();
  *(int *)(unaff_s0 + 0x48) = iVar2;
  if (iVar2 == 0) {
    uVar1 = 0x12;
  }
  else {
    FUN_00010e0c();
    _LVL261();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  
  iVar1 = _L0();
  *(int *)(unaff_s0 + 0x48) = iVar1;
  if (iVar1 != 0) {
    FUN_00010e0c();
    _LVL261();
    unaff_s1 = 0;
  }
  return unaff_s1;
}



undefined4 FUN_00010e0c(void)

{
  FUN_00010e0c();
  _LVL261();
  return 0;
}



undefined4 _LVL261(void)

{
  _LVL261();
  return 0;
}



void _LVL265(void)

{
  _LVL265();
  _LVL267();
  FUN_00010e5c();
  return;
}



void _LVL267(void)

{
  _LVL267();
  FUN_00010e5c();
  return;
}



void FUN_00010e5c(void)

{
  FUN_00010e5c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 436b

uint8_t llm_set_adv_data(hci_le_set_adv_data_cmd *param)

{
  uint8_t uVar1;
  int iVar2;
  
  if (param->adv_data_len < 0x20) {
    if (_DAT_00000014 == 0) {
      _DAT_00000014 = _LVL271();
      (*pcRam00000000)(0,0x24,pcRam00000000);
      iVar2 = _DAT_00000014;
      *(undefined2 *)(_DAT_00000014 + 0x16) = 0x800;
      *(undefined *)(iVar2 + 0x1c) = 0;
      *(undefined2 *)(iVar2 + 0x18) = 0x800;
      *(undefined *)(iVar2 + 0x1b) = 0;
      iVar2 = _DAT_00000014;
      *(undefined *)(_DAT_00000014 + 0x1a) = 7;
      *(undefined *)(iVar2 + 0x21) = 1;
      _DAT_280082fe = *(byte *)(iVar2 + 0x1c) | 0x600;
      _DAT_280082f4 = 0x604;
    }
    uVar1 = param->adv_data_len;
    *(uint8_t *)(_DAT_00000014 + 0x1d) = uVar1;
    if (uVar1 != '\0') {
      (*pcRam00000000)(_DAT_28008300 + 0x28008000,&param->data,pcRam00000000);
    }
    _DAT_280082fe =
         (ushort)((*(byte *)(_DAT_00000014 + 0x1d) + 6 & 0xff) << 8) | _DAT_280082fe & 0xff;
    return '\0';
  }
  return '\x12';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _LVL271(void)

{
  char cVar1;
  code *pcVar2;
  int unaff_s0;
  char *unaff_s1;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = _LVL271();
  pcVar2 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = uVar3;
  (*pcVar2)(0,0x24,pcVar2);
  iVar4 = *(int *)(unaff_s0 + 0x14);
  *(undefined2 *)(iVar4 + 0x16) = 0x800;
  *(undefined *)(iVar4 + 0x1c) = 0;
  *(undefined2 *)(iVar4 + 0x18) = 0x800;
  *(undefined *)(iVar4 + 0x1b) = 0;
  iVar4 = *(int *)(unaff_s0 + 0x14);
  *(undefined *)(iVar4 + 0x1a) = 7;
  *(undefined *)(iVar4 + 0x21) = 1;
  _DAT_280082fe = *(byte *)(iVar4 + 0x1c) | 0x600;
  _DAT_280082f4 = 0x604;
  cVar1 = *unaff_s1;
  *(char *)(*(int *)(unaff_s0 + 0x14) + 0x1d) = cVar1;
  if (cVar1 != '\0') {
    (*pcRam00000000)(_DAT_28008300 + 0x28008000,unaff_s1 + 1,pcRam00000000);
  }
  _DAT_280082fe =
       (ushort)((*(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1d) + 6 & 0xff) << 8) |
       _DAT_280082fe & 0xff;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 41e4

uint8_t llm_set_scan_rsp_data(hci_le_set_scan_rsp_data_cmd *param)

{
  uint8_t uVar1;
  int iVar2;
  
  if (param->scan_rsp_data_len < 0x20) {
    if (_DAT_00000014 == 0) {
      _DAT_00000014 = _LVL289();
      (*pcRam00000000)(0,0x24,pcRam00000000);
      iVar2 = _DAT_00000014;
      *(undefined2 *)(_DAT_00000014 + 0x16) = 0x800;
      *(undefined *)(iVar2 + 0x1c) = 0;
      *(undefined2 *)(iVar2 + 0x18) = 0x800;
      *(undefined *)(iVar2 + 0x1b) = 0;
      iVar2 = _DAT_00000014;
      *(undefined *)(_DAT_00000014 + 0x1a) = 7;
      *(undefined *)(iVar2 + 0x21) = 1;
      _DAT_280082fe = *(byte *)(iVar2 + 0x1c) | 0x600;
      _DAT_280082f4 = 0x604;
    }
    uVar1 = param->scan_rsp_data_len;
    *(uint8_t *)(_DAT_00000014 + 0x1e) = uVar1;
    if (uVar1 != '\0') {
      (*pcRam00000000)(_DAT_280082f6 + 0x28008000,&param->data,pcRam00000000);
    }
    _DAT_280082f4 =
         (ushort)((*(byte *)(_DAT_00000014 + 0x1e) + 6 & 0xff) << 8) | _DAT_280082f4 & 0xff;
    return '\0';
  }
  return '\x12';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _LVL289(void)

{
  char cVar1;
  code *pcVar2;
  int unaff_s0;
  char *unaff_s1;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = _LVL289();
  pcVar2 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = uVar3;
  (*pcVar2)(0,0x24,pcVar2);
  iVar4 = *(int *)(unaff_s0 + 0x14);
  *(undefined2 *)(iVar4 + 0x16) = 0x800;
  *(undefined *)(iVar4 + 0x1c) = 0;
  *(undefined2 *)(iVar4 + 0x18) = 0x800;
  *(undefined *)(iVar4 + 0x1b) = 0;
  iVar4 = *(int *)(unaff_s0 + 0x14);
  *(undefined *)(iVar4 + 0x1a) = 7;
  *(undefined *)(iVar4 + 0x21) = 1;
  _DAT_280082fe = *(byte *)(iVar4 + 0x1c) | 0x600;
  _DAT_280082f4 = 0x604;
  cVar1 = *unaff_s1;
  *(char *)(*(int *)(unaff_s0 + 0x14) + 0x1e) = cVar1;
  if (cVar1 != '\0') {
    (*pcRam00000000)(_DAT_280082f6 + 0x28008000,unaff_s1 + 1,pcRam00000000);
  }
  _DAT_280082f4 =
       (ushort)((*(byte *)(*(int *)(unaff_s0 + 0x14) + 0x1e) + 6 & 0xff) << 8) |
       _DAT_280082f4 & 0xff;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 413d

uint8_t llm_set_scan_param(hci_le_set_scan_param_cmd *param)

{
  uint8_t uVar1;
  
  if (param->scan_window <= param->scan_intv) {
    uVar1 = '\x12';
    if ((((param->scan_type < 2) && ((ushort)(param->scan_window - 4) < 0x3ffd)) &&
        ((ushort)(param->scan_intv - 4) < 0x3ffd)) && (param->scan_filt_policy < 4)) {
      if (_DAT_00000010 == 0) {
        _DAT_00000010 = FUN_0001106a();
        (*pcRam00000000)(0,0xc,pcRam00000000);
      }
      uVar1 = '\0';
      *(uint8_t *)(_DAT_00000010 + 8) = param->scan_filt_policy;
      *(uint16_t *)(_DAT_00000010 + 4) = param->scan_intv;
      *(uint16_t *)(_DAT_00000010 + 6) = param->scan_window;
      *(uint8_t *)(_DAT_00000010 + 9) = param->scan_type;
      *(uint8_t *)(_DAT_00000010 + 0xb) = param->own_addr_type;
      if (param->scan_type == '\x01') {
        _DAT_280082ea = 0xc03;
      }
    }
    return uVar1;
  }
  return '\x12';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001106a(void)

{
  code *pcVar1;
  char *unaff_s0;
  int unaff_s1;
  undefined4 uVar2;
  
  uVar2 = FUN_0001106a();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s1 + 0x10) = uVar2;
  (*pcVar1)(0,0xc,pcVar1);
  *(char *)(*(int *)(unaff_s1 + 0x10) + 8) = unaff_s0[7];
  *(undefined2 *)(*(int *)(unaff_s1 + 0x10) + 4) = *(undefined2 *)(unaff_s0 + 2);
  *(undefined2 *)(*(int *)(unaff_s1 + 0x10) + 6) = *(undefined2 *)(unaff_s0 + 4);
  *(char *)(*(int *)(unaff_s1 + 0x10) + 9) = *unaff_s0;
  *(char *)(*(int *)(unaff_s1 + 0x10) + 0xb) = unaff_s0[6];
  if (*unaff_s0 == '\x01') {
    _DAT_280082ea = 0xc03;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4007

uint8_t llm_set_scan_en(hci_le_set_scan_en_cmd *param)

{
  uint8_t uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = param->scan_en;
  if (uVar1 == '\0') {
    _LVL316();
    _LVL318();
    FUN_00011112();
    FUN_00011122();
  }
  else {
    if (_DAT_00000010 == 0) {
      _DAT_00000010 = _LVL323();
      *(undefined *)(_DAT_00000010 + 8) = 0;
      *(undefined2 *)(_DAT_00000010 + 4) = 0x10;
      *(undefined2 *)(_DAT_00000010 + 6) = 8;
      *(undefined *)(_DAT_00000010 + 9) = 0;
      *(undefined *)(_DAT_00000010 + 10) = 0;
    }
    iVar2 = FUN_0001117c();
    if (((iVar2 == 0) || ((*(byte *)(_DAT_00000010 + 0xb) & 1) == 0)) ||
       (uVar1 = '\x12', *(char *)(_DAT_00000010 + 9) != '\x01')) {
      *(uint8_t *)(_DAT_00000010 + 10) = param->filter_duplic_en;
      FUN_000111ac();
      if (*(char *)(_DAT_00000010 + 9) == '\0') {
        _DAT_00000054 = _L225();
        if (_DAT_00000054 == 0) {
          return '\x1f';
        }
      }
      else {
        if (*(char *)(_DAT_00000010 + 9) == '\x01') {
          uVar3 = _L225();
          return (uint8_t)uVar3;
        }
      }
      FUN_000111c4();
      _LVL328();
      uVar1 = '\0';
    }
  }
  return uVar1;
}



void _LVL316(void)

{
  _LVL316();
  _LVL318();
  FUN_00011112();
  FUN_00011122();
  return;
}



void _LVL318(void)

{
  _LVL318();
  FUN_00011112();
  FUN_00011122();
  return;
}



void FUN_00011112(void)

{
  FUN_00011112();
  FUN_00011122();
  return;
}



void FUN_00011122(void)

{
  FUN_00011122();
  return;
}



undefined4 _LVL323(void)

{
  char cVar1;
  int unaff_s0;
  undefined4 uVar2;
  int iVar3;
  int unaff_s2;
  
  iVar3 = _LVL323();
  *(int *)(unaff_s0 + 0x10) = iVar3;
  *(undefined *)(iVar3 + 8) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0x10) + 4) = 0x10;
  *(undefined2 *)(*(int *)(unaff_s0 + 0x10) + 6) = 8;
  *(undefined *)(*(int *)(unaff_s0 + 0x10) + 9) = 0;
  *(undefined *)(*(int *)(unaff_s0 + 0x10) + 10) = 0;
  iVar3 = FUN_0001117c();
  if (((iVar3 == 0) || ((*(byte *)(*(int *)(unaff_s0 + 0x10) + 0xb) & 1) == 0)) ||
     (uVar2 = 0x12, *(char *)(*(int *)(unaff_s0 + 0x10) + 9) != '\x01')) {
    *(undefined *)(*(int *)(unaff_s0 + 0x10) + 10) = *(undefined *)(unaff_s2 + 1);
    FUN_000111ac();
    cVar1 = *(char *)(*(int *)(unaff_s0 + 0x10) + 9);
    if (cVar1 == '\0') {
      iVar3 = _L225();
      *(int *)(unaff_s0 + 0x54) = iVar3;
      if (iVar3 == 0) {
        return 0x1f;
      }
    }
    else {
      if (cVar1 == '\x01') {
        uVar2 = _L225();
        return uVar2;
      }
    }
    FUN_000111c4();
    _LVL328();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0001117c(void)

{
  char cVar1;
  int unaff_s0;
  undefined4 uVar2;
  int iVar3;
  int unaff_s2;
  
  iVar3 = FUN_0001117c();
  if (((iVar3 == 0) || ((*(byte *)(*(int *)(unaff_s0 + 0x10) + 0xb) & 1) == 0)) ||
     (uVar2 = 0x12, *(char *)(*(int *)(unaff_s0 + 0x10) + 9) != '\x01')) {
    *(undefined *)(*(int *)(unaff_s0 + 0x10) + 10) = *(undefined *)(unaff_s2 + 1);
    FUN_000111ac();
    cVar1 = *(char *)(*(int *)(unaff_s0 + 0x10) + 9);
    if (cVar1 == '\0') {
      iVar3 = _L225();
      *(int *)(unaff_s0 + 0x54) = iVar3;
      if (iVar3 == 0) {
        return 0x1f;
      }
    }
    else {
      if (cVar1 == '\x01') {
        uVar2 = _L225();
        return uVar2;
      }
    }
    FUN_000111c4();
    _LVL328();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_000111ac(void)

{
  char cVar1;
  int unaff_s0;
  int iVar2;
  undefined4 uVar3;
  
  FUN_000111ac();
  cVar1 = *(char *)(*(int *)(unaff_s0 + 0x10) + 9);
  if (cVar1 == '\0') {
    iVar2 = _L225();
    *(int *)(unaff_s0 + 0x54) = iVar2;
    if (iVar2 == 0) {
      return 0x1f;
    }
  }
  else {
    if (cVar1 == '\x01') {
      uVar3 = _L225();
      return uVar3;
    }
  }
  FUN_000111c4();
  _LVL328();
  return 0;
}



undefined4 FUN_000111c4(void)

{
  FUN_000111c4();
  _LVL328();
  return 0;
}



undefined4 _LVL328(void)

{
  _LVL328();
  return 0;
}



undefined4 _L225(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _L225();
  *(int *)(unaff_s0 + 0x54) = iVar2;
  uVar1 = 0x1f;
  if (iVar2 != 0) {
    FUN_000111c4();
    _LVL328();
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 68c1

void llm_wl_clr(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1 & 0xffff;
    _L0(uVar2,uRam00000070);
    uVar2 = uVar1;
  } while (uVar1 != 4);
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1 & 0xffff;
    _L0(uVar2,(ushort)uRam00000070);
    uVar2 = uVar1;
  } while (uVar1 != 4);
  uRam00000070._0_2_ = (ushort)uRam00000070 & 0xff;
  uRam00000070 = (uint3)(ushort)uRam00000070;
  _DAT_2800822e = _DAT_2800822e & 0xdfff;
  _DAT_28008262 = _DAT_28008262 & 0xdfff;
  _DAT_28008296 = _DAT_28008296 & 0xdfff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(uint param_1,uint3 param_2)

{
  uint unaff_s0;
  uint uVar1;
  uint uVar2;
  uint unaff_s3;
  
  while (uVar1 = unaff_s0, _L0(param_1,param_2), uVar1 != unaff_s3) {
    param_1 = uVar1;
    unaff_s0 = uVar1 + 1 & 0xffff;
  }
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1 & 0xffff;
    _L0(uVar1,(ushort)param_2);
    uVar1 = uVar2;
  } while (uVar2 != 4);
  param_2._0_2_ = (ushort)param_2 & 0xff;
  param_2 = (uint3)(ushort)param_2;
  _DAT_2800822e = _DAT_2800822e & 0xdfff;
  _DAT_28008262 = _DAT_28008262 & 0xdfff;
  _DAT_28008296 = _DAT_28008296 & 0xdfff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(uint param_1,ushort param_2)

{
  uint unaff_s0;
  uint uVar1;
  uint unaff_s1;
  
  while (uVar1 = unaff_s0, _L0(param_1,param_2), uVar1 != unaff_s1) {
    param_1 = uVar1;
    unaff_s0 = uVar1 + 1 & 0xffff;
  }
  param_2 &= 0xff;
  DAT_00000072 = 0;
  _DAT_2800822e = _DAT_2800822e & 0xdfff;
  _DAT_28008262 = _DAT_28008262 & 0xdfff;
  _DAT_28008296 = _DAT_28008296 & 0xdfff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5ce2

void llm_init(_Bool reset)

{
  undefined extraout_a0;
  undefined3 in_register_00002029;
  int extraout_a0_00;
  
  if (CONCAT31(in_register_00002029,reset) == 0) {
    FUN_000112b2();
    FUN_000112c4();
  }
  else {
    if (_DAT_00000014 != (int *)0x0) {
      if (*_DAT_00000014 != 0) {
        _L0();
      }
      if (_DAT_00000014[1] != 0) {
        _L0();
      }
      FUN_000113da();
    }
    if (_DAT_00000010 != 0) {
      _L0();
    }
    FUN_000113f2();
    FUN_00011402();
  }
  FUN_000112d0();
  DAT_0000005a = 3;
  DAT_0000004c = 0;
  _DAT_00000054 = 0;
  DAT_00000059 = 0;
  _L0();
  DAT_00000041 = 0;
  DAT_00000042 = 0;
  DAT_00000040 = extraout_a0;
  (*pcRam00000000)(0x32,0xff,4,pcRam00000000);
  DAT_00000036 = 0x1f;
  _DAT_00000048 = 0;
  _L0();
  _DAT_0000006a = 0x10;
  DAT_000000d3 = 0;
  DAT_00000038 = 0x1f;
  (*pcRam00000000)(0x39,0,7,pcRam00000000);
  DAT_00000058 = 0;
  _DAT_00000010 = 0;
  _L0();
  _DAT_00000014 = (int *)0x0;
  (*pcRam00000000)(0x5b,0,6,pcRam00000000);
  DAT_00000061 = (undefined)_DAT_28000024;
  DAT_00000062 = (undefined)((uint)_DAT_28000024 >> 8);
  DAT_00000063 = (undefined)((uint)_DAT_28000024 >> 0x10);
  DAT_00000064 = (undefined)((uint)_DAT_28000024 >> 0x18);
  DAT_00000065 = (undefined)_DAT_28000028;
  DAT_00000066 = (undefined)((uint)_DAT_28000028 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  _DAT_0000002c = 0xaf60064;
  _DAT_00000030 = 0x8c4;
  DAT_00000037 = 1;
  _DAT_0000004e = 0;
  DAT_00000050 = 0;
  _DAT_0000006c = 0;
  DAT_0000006e = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000112b2(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_s0;
  undefined extraout_a0;
  int extraout_a0_00;
  
  FUN_000112b2();
  FUN_000112c4();
  FUN_000112d0();
  *(undefined *)(unaff_s0 + 0x5a) = 3;
  *(undefined *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  *(undefined *)(unaff_s0 + 0x59) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0x40) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x41) = 0;
  *(undefined *)(unaff_s0 + 0x42) = 0;
  (*pcVar1)(0x32,0xff,4,pcVar1);
  *(undefined *)(unaff_s0 + 0x36) = 0x1f;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = 0x1f;
  (*pcVar1)(0x39,0,7,pcVar1);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar1)(0x5b,0,6,pcVar1);
  uVar2 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar2 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar2 >> 0x18);
  uVar2 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar2 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000112c4(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_s0;
  undefined extraout_a0;
  int extraout_a0_00;
  
  FUN_000112c4();
  FUN_000112d0();
  *(undefined *)(unaff_s0 + 0x5a) = 3;
  *(undefined *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  *(undefined *)(unaff_s0 + 0x59) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0x40) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x41) = 0;
  *(undefined *)(unaff_s0 + 0x42) = 0;
  (*pcVar1)(0x32,0xff,4,pcVar1);
  *(undefined *)(unaff_s0 + 0x36) = 0x1f;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = 0x1f;
  (*pcVar1)(0x39,0,7,pcVar1);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar1)(0x5b,0,6,pcVar1);
  uVar2 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar2 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar2 >> 0x18);
  uVar2 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar2 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000112d0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_s0;
  undefined extraout_a0;
  int extraout_a0_00;
  
  FUN_000112d0();
  *(undefined *)(unaff_s0 + 0x5a) = 3;
  *(undefined *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  *(undefined *)(unaff_s0 + 0x59) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0x40) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x41) = 0;
  *(undefined *)(unaff_s0 + 0x42) = 0;
  (*pcVar1)(0x32,0xff,4,pcVar1);
  *(undefined *)(unaff_s0 + 0x36) = 0x1f;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = 0x1f;
  (*pcVar1)(0x39,0,7,pcVar1);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar1)(0x5b,0,6,pcVar1);
  uVar2 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar2 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar2 >> 0x18);
  uVar2 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar2 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  undefined4 uVar1;
  int unaff_s0;
  undefined extraout_a0;
  int extraout_a0_00;
  code *pcVar2;
  code **unaff_s2;
  
  _L0();
  pcVar2 = *unaff_s2;
  *(undefined *)(unaff_s0 + 0x40) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x41) = 0;
  *(undefined *)(unaff_s0 + 0x42) = 0;
  (*pcVar2)(0x32,0xff,4,pcVar2);
  *(undefined *)(unaff_s0 + 0x36) = 0x1f;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar2 = *unaff_s2;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = 0x1f;
  (*pcVar2)(0x39,0,7,pcVar2);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar2 = *unaff_s2;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar2)(0x5b,0,6,pcVar2);
  uVar1 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar1 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar1 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar1 >> 0x18);
  uVar1 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar1 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  undefined4 uVar1;
  int unaff_s0;
  int extraout_a0;
  code *pcVar2;
  code **unaff_s2;
  undefined unaff_s4;
  
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar2 = *unaff_s2;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = unaff_s4;
  (*pcVar2)(0x39,0,7,pcVar2);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar2 = *unaff_s2;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar2)(0x5b,0,6,pcVar2);
  uVar1 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar1 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar1 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar1 >> 0x18);
  uVar1 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar1 >> 8);
  while (FUN_000113a6(), extraout_a0 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  undefined4 uVar1;
  int unaff_s0;
  int extraout_a0;
  code *pcVar2;
  code **unaff_s2;
  
  _L0();
  pcVar2 = *unaff_s2;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar2)(0x5b,0,6,pcVar2);
  uVar1 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar1 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar1 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar1 >> 0x18);
  uVar1 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar1 >> 8);
  while (FUN_000113a6(), extraout_a0 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



void FUN_000113a6(void)

{
  int unaff_s0;
  int extraout_a0;
  
  while (FUN_000113a6(), extraout_a0 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  
  do {
    _L0();
    FUN_000113a6();
  } while (extraout_a0 != 0);
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_s0;
  undefined extraout_a0;
  int extraout_a0_00;
  
  _L0();
  if (*(int *)(*(int *)(unaff_s0 + 0x14) + 4) != 0) {
    _L0();
  }
  FUN_000113da();
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    _L0();
  }
  FUN_000113f2();
  FUN_00011402();
  FUN_000112d0();
  *(undefined *)(unaff_s0 + 0x5a) = 3;
  *(undefined *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  *(undefined *)(unaff_s0 + 0x59) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0x40) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x41) = 0;
  *(undefined *)(unaff_s0 + 0x42) = 0;
  (*pcVar1)(0x32,0xff,4,pcVar1);
  *(undefined *)(unaff_s0 + 0x36) = 0x1f;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = 0x1f;
  (*pcVar1)(0x39,0,7,pcVar1);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar1)(0x5b,0,6,pcVar1);
  uVar2 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar2 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar2 >> 0x18);
  uVar2 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar2 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_s0;
  undefined extraout_a0;
  int extraout_a0_00;
  
  _L0();
  FUN_000113da();
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    _L0();
  }
  FUN_000113f2();
  FUN_00011402();
  FUN_000112d0();
  *(undefined *)(unaff_s0 + 0x5a) = 3;
  *(undefined *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  *(undefined *)(unaff_s0 + 0x59) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0x40) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x41) = 0;
  *(undefined *)(unaff_s0 + 0x42) = 0;
  (*pcVar1)(0x32,0xff,4,pcVar1);
  *(undefined *)(unaff_s0 + 0x36) = 0x1f;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = 0x1f;
  (*pcVar1)(0x39,0,7,pcVar1);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar1)(0x5b,0,6,pcVar1);
  uVar2 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar2 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar2 >> 0x18);
  uVar2 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar2 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000113da(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_s0;
  undefined extraout_a0;
  int extraout_a0_00;
  
  FUN_000113da();
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    _L0();
  }
  FUN_000113f2();
  FUN_00011402();
  FUN_000112d0();
  *(undefined *)(unaff_s0 + 0x5a) = 3;
  *(undefined *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  *(undefined *)(unaff_s0 + 0x59) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0x40) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x41) = 0;
  *(undefined *)(unaff_s0 + 0x42) = 0;
  (*pcVar1)(0x32,0xff,4,pcVar1);
  *(undefined *)(unaff_s0 + 0x36) = 0x1f;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = 0x1f;
  (*pcVar1)(0x39,0,7,pcVar1);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar1)(0x5b,0,6,pcVar1);
  uVar2 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar2 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar2 >> 0x18);
  uVar2 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar2 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_s0;
  undefined extraout_a0;
  int extraout_a0_00;
  
  _L0();
  FUN_000113f2();
  FUN_00011402();
  FUN_000112d0();
  *(undefined *)(unaff_s0 + 0x5a) = 3;
  *(undefined *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  *(undefined *)(unaff_s0 + 0x59) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0x40) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x41) = 0;
  *(undefined *)(unaff_s0 + 0x42) = 0;
  (*pcVar1)(0x32,0xff,4,pcVar1);
  *(undefined *)(unaff_s0 + 0x36) = 0x1f;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = 0x1f;
  (*pcVar1)(0x39,0,7,pcVar1);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar1)(0x5b,0,6,pcVar1);
  uVar2 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar2 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar2 >> 0x18);
  uVar2 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar2 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000113f2(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_s0;
  undefined extraout_a0;
  int extraout_a0_00;
  
  FUN_000113f2();
  FUN_00011402();
  FUN_000112d0();
  *(undefined *)(unaff_s0 + 0x5a) = 3;
  *(undefined *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  *(undefined *)(unaff_s0 + 0x59) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0x40) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x41) = 0;
  *(undefined *)(unaff_s0 + 0x42) = 0;
  (*pcVar1)(0x32,0xff,4,pcVar1);
  *(undefined *)(unaff_s0 + 0x36) = 0x1f;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = 0x1f;
  (*pcVar1)(0x39,0,7,pcVar1);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar1)(0x5b,0,6,pcVar1);
  uVar2 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar2 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar2 >> 0x18);
  uVar2 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar2 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011402(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_s0;
  undefined extraout_a0;
  int extraout_a0_00;
  
  FUN_00011402();
  FUN_000112d0();
  *(undefined *)(unaff_s0 + 0x5a) = 3;
  *(undefined *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  *(undefined *)(unaff_s0 + 0x59) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0x40) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x41) = 0;
  *(undefined *)(unaff_s0 + 0x42) = 0;
  (*pcVar1)(0x32,0xff,4,pcVar1);
  *(undefined *)(unaff_s0 + 0x36) = 0x1f;
  *(undefined4 *)(unaff_s0 + 0x48) = 0;
  _L0();
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x10;
  pcVar1 = pcRam00000000;
  *(undefined *)(unaff_s0 + 0xd3) = 0;
  *(undefined *)(unaff_s0 + 0x38) = 0x1f;
  (*pcVar1)(0x39,0,7,pcVar1);
  *(undefined *)(unaff_s0 + 0x58) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  _L0();
  pcVar1 = pcRam00000000;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  (*pcVar1)(0x5b,0,6,pcVar1);
  uVar2 = _DAT_28000024;
  *(char *)(unaff_s0 + 0x61) = (char)_DAT_28000024;
  *(char *)(unaff_s0 + 0x62) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_s0 + 99) = (char)((uint)uVar2 >> 0x10);
  *(char *)(unaff_s0 + 100) = (char)((uint)uVar2 >> 0x18);
  uVar2 = _DAT_28000028;
  *(char *)(unaff_s0 + 0x65) = (char)_DAT_28000028;
  *(char *)(unaff_s0 + 0x66) = (char)((uint)uVar2 >> 8);
  while (FUN_000113a6(), extraout_a0_00 != 0) {
    _L0();
  }
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



void _LVL374(void)

{
  int unaff_s0;
  
  _LVL374();
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



void FUN_00011420(void)

{
  int unaff_s0;
  
  FUN_00011420();
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



void FUN_00011436(void)

{
  int unaff_s0;
  
  FUN_00011436();
  *(undefined *)(unaff_s0 + 0x37) = 1;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0xaf60064;
  *(undefined2 *)(unaff_s0 + 0x30) = 0x8c4;
  *(undefined *)(unaff_s0 + 0x6e) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  *(undefined *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  return;
}



// DWARF DIE: 3f5f

void llm_wl_dev_add(bd_addr *bd_addr,uint8_t bd_addr_type)

{
  undefined3 in_register_0000202d;
  
  _L0(uRam00000070);
  if (CONCAT31(in_register_0000202d,bd_addr_type) == 0) {
    FUN_000114ba(uRam00000070);
  }
  else {
    if (CONCAT31(in_register_0000202d,bd_addr_type) == 1) {
      FUN_000114c6(uRam00000070);
    }
  }
  uRam00000070 = uRam00000070 & 0xffff | (uint3)(byte)(DAT_00000072 + 1) << 0x10;
  return;
}



void _L0(uint3 param_1)

{
  int unaff_s1;
  
  _L0(param_1);
  if (unaff_s1 == 0) {
    FUN_000114ba(param_1);
  }
  else {
    if (unaff_s1 == 1) {
      FUN_000114c6(param_1);
    }
  }
  param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ + 1) << 0x10;
  return;
}



void FUN_000114ba(uint3 param_1)

{
  FUN_000114ba(param_1);
  param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ + 1) << 0x10;
  return;
}



void FUN_000114c6(uint3 param_1)

{
  FUN_000114c6(param_1);
  param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ + 1) << 0x10;
  return;
}



// DWARF DIE: 6955

void llm_wl_dev_rem(bd_addr *bd_addr,uint8_t bd_addr_type)

{
  undefined3 in_register_0000202d;
  
  _L0(uRam00000070);
  if (bd_addr < (bd_addr *)0x4) {
    if (CONCAT31(in_register_0000202d,bd_addr_type) == 1) {
      _L0(uRam00000070);
    }
    else {
      _L0(uRam00000070);
    }
    uRam00000070 = uRam00000070 & 0xffff | (uint3)(byte)(DAT_00000072 - 1) << 0x10;
  }
  return;
}



void _L0(uint3 uRam00000070)

{
  int unaff_s0;
  uint in_a0;
  
  _L0(uRam00000070);
  if (in_a0 < 4) {
    if (unaff_s0 == 1) {
      _L0(uRam00000070);
    }
    else {
      _L0(uRam00000070);
    }
    uRam00000070 = uRam00000070 & 0xffff | (uint3)(byte)(uRam00000070._2_1_ - 1) << 0x10;
  }
  return;
}



void _L0(uint3 param_1)

{
  _L0(param_1);
  param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ - 1) << 0x10;
  return;
}



void _L0(uint3 param_1)

{
  _L0(param_1);
  param_1 = param_1 & 0xffff | (uint3)(byte)(param_1._2_1_ - 1) << 0x10;
  return;
}



// DWARF DIE: 3e7c

uint8_t llm_wl_dev_add_hdl(bd_addr *bd_addr,uint8_t bd_addr_type)

{
  uint8_t uVar1;
  int iVar2;
  undefined3 in_register_0000202d;
  
  if (1 < CONCAT31(in_register_0000202d,bd_addr_type)) {
    return '\x12';
  }
  iVar2 = _L0(uRam00000070);
  if (iVar2 == 0) {
    uVar1 = '\a';
    if (DAT_00000071 < 4) {
      iVar2 = FUN_00011574();
      if (iVar2 != 0xb) {
        FUN_00011586();
      }
      uVar1 = '\0';
      uRam00000070 = uRam00000070 & 0xff | (ushort)(byte)(DAT_00000071 + 1) << 8;
    }
  }
  else {
    uVar1 = '\x12';
  }
  return uVar1;
}



undefined4 _L0(ushort param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _L0(param_1);
  if (iVar1 == 0) {
    uVar2 = 7;
    if (param_1._1_1_ < 4) {
      iVar1 = FUN_00011574();
      if (iVar1 != 0xb) {
        FUN_00011586();
      }
      uVar2 = 0;
      param_1 = param_1 & 0xff | (ushort)(byte)(param_1._1_1_ + 1) << 8;
    }
  }
  else {
    uVar2 = 0x12;
  }
  return uVar2;
}



undefined4 FUN_00011574(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = FUN_00011574();
  if (iVar1 != 0xb) {
    FUN_00011586();
  }
  *(char *)(unaff_s0 + 0x71) = *(char *)(unaff_s0 + 0x71) + '\x01';
  return 0;
}



undefined4 FUN_00011586(void)

{
  int unaff_s0;
  
  FUN_00011586();
  *(char *)(unaff_s0 + 0x71) = *(char *)(unaff_s0 + 0x71) + '\x01';
  return 0;
}



// DWARF DIE: 3dbc

uint8_t llm_wl_dev_rem_hdl(bd_addr *bd_addr,uint8_t bd_addr_type)

{
  uint8_t uVar1;
  int iVar2;
  undefined3 in_register_0000202d;
  char cStack17;
  _Bool in_black_list;
  
  if (1 < CONCAT31(in_register_0000202d,bd_addr_type)) {
    return '\x12';
  }
  iVar2 = _L0(uRam00000070);
  if (iVar2 == 0) {
    uVar1 = '\x12';
  }
  else {
    if (cStack17 == '\0') {
      FUN_000115fe(uRam00000070);
    }
    else {
      FUN_000115dc(uRam00000070);
    }
    uVar1 = '\0';
    uRam00000070 = uRam00000070 & 0xff | (ushort)(byte)(DAT_00000071 - 1) << 8;
  }
  return uVar1;
}



undefined4 _L0(ushort uRam00000070)

{
  undefined4 uVar1;
  int iVar2;
  char in_stack_0000000f;
  
  iVar2 = _L0(uRam00000070);
  if (iVar2 == 0) {
    uVar1 = 0x12;
  }
  else {
    if (in_stack_0000000f == '\0') {
      FUN_000115fe(uRam00000070);
    }
    else {
      FUN_000115dc(uRam00000070);
    }
    uVar1 = 0;
    uRam00000070 = uRam00000070 & 0xff | (ushort)(byte)(uRam00000070._1_1_ - 1) << 8;
  }
  return uVar1;
}



undefined4 FUN_000115dc(ushort param_1)

{
  FUN_000115dc(param_1);
  param_1 = param_1 & 0xff | (ushort)(byte)(param_1._1_1_ - 1) << 8;
  return 0;
}



undefined4 FUN_000115fe(ushort param_1)

{
  FUN_000115fe(param_1);
  param_1 = param_1 & 0xff | (ushort)(byte)(param_1._1_1_ - 1) << 8;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3cd2

uint8_t llm_create_con(hci_le_create_con_cmd *param)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = _L0(_DAT_00000044,_DAT_00000054,_DAT_0000006c,uRam00000070);
  iVar3 = 9;
  if (iVar2 != 0) goto _L0;
  if (param->init_filt_policy == '\x01') {
    if (DAT_00000072 == '\0') {
      iVar3 = (DAT_00000071 == '\0') + 0xb;
      goto _L0;
    }
  }
  else {
    iVar3 = FUN_00011644(_DAT_00000044,_DAT_00000054,_DAT_0000006c);
    if (iVar3 != 0) goto _L0;
  }
  if (param->scan_window <= param->scan_intv) {
    uVar4 = (uint)param->con_intv_max;
    if ((((((param->con_intv_min <= uVar4) && ((ushort)(param->scan_window - 4) < 0x3ffd)) &&
          ((ushort)(param->scan_intv - 4) < 0x3ffd)) &&
         ((param->ce_len_min <= param->ce_len_max && (5 < param->con_intv_min)))) &&
        ((uVar4 < 0xc81 &&
         (((param->superv_to - 10 & 0xffff) < 0xc77 && (param->con_latency < 500)))))) &&
       ((param->con_latency + 1) * uVar4 < (uint)param->superv_to << 2)) {
      iVar3 = FUN_00011704(_DAT_00000044,_DAT_00000054,_DAT_0000006c);
      bVar1 = param->own_addr_type;
      if ((iVar3 == 0) || ((bVar1 & 1) == 0)) {
        if ((_DAT_0000006c & 0x1000000) != 0) {
          if ((bVar1 & 2) == 0) goto _L0;
_L0:
          FUN_0001173e();
          _LVL420();
          _DAT_00000054 = FUN_00011766();
          iVar3 = iVar2;
          if (_DAT_00000054 == 0) {
            iVar3 = 0x1f;
          }
          goto _L0;
        }
        if ((bVar1 & 2) == 0) {
_L0:
          if ((param->peer_addr_type & 2) == 0) goto _L0;
        }
      }
    }
  }
  iVar3 = 0x12;
_L0:
  return (uint8_t)iVar3;
}



int _L0(undefined2 uRam00000044,int iRam00000054,uint uRam0000006c,undefined2 param_4)

{
  byte bVar1;
  ushort *unaff_s0;
  int iVar2;
  uint uVar3;
  
  iVar2 = _L0(uRam00000044,iRam00000054,uRam0000006c,param_4);
  if (iVar2 != 0) {
    return 9;
  }
  if (*(char *)(unaff_s0 + 2) == '\x01') {
    if (DAT_00000072 == '\0') {
      return (param_4._1_1_ == '\0') + 0xb;
    }
  }
  else {
    iVar2 = FUN_00011644(uRam00000044,iRam00000054,uRam0000006c);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (unaff_s0[1] <= *unaff_s0) {
    uVar3 = (uint)unaff_s0[8];
    if (uVar3 < unaff_s0[7]) {
      return 0x12;
    }
    if (0x3ffc < (ushort)(unaff_s0[1] - 4)) {
      return 0x12;
    }
    if (0x3ffc < (ushort)(*unaff_s0 - 4)) {
      return 0x12;
    }
    if (unaff_s0[0xc] < unaff_s0[0xb]) {
      return 0x12;
    }
    if (unaff_s0[7] < 6) {
      return 0x12;
    }
    if (0xc80 < uVar3) {
      return 0x12;
    }
    if (0xc76 < (unaff_s0[10] - 10 & 0xffff)) {
      return 0x12;
    }
    if (499 < unaff_s0[9]) {
      return 0x12;
    }
    if ((uint)unaff_s0[10] << 2 <= (unaff_s0[9] + 1) * uVar3) {
      return 0x12;
    }
    iVar2 = FUN_00011704(uRam00000044,iRam00000054,uRam0000006c);
    bVar1 = *(byte *)(unaff_s0 + 6);
    if ((iVar2 != 0) && ((bVar1 & 1) != 0)) {
      return 0x12;
    }
    if ((uRam0000006c & 0x1000000) == 0) {
      if ((bVar1 & 2) != 0) {
        return 0x12;
      }
    }
    else {
      if ((bVar1 & 2) != 0) goto _L0;
    }
    if ((*(byte *)((int)unaff_s0 + 5) & 2) == 0) {
_L0:
      FUN_0001173e();
      _LVL420();
      iRam00000054 = FUN_00011766();
      if (iRam00000054 == 0) {
        return 0x1f;
      }
      return 0;
    }
  }
  return 0x12;
}



int FUN_00011644(undefined2 uRam00000044,int iRam00000054,uint uRam0000006c)

{
  byte bVar1;
  ushort *unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00011644(uRam00000044,iRam00000054,uRam0000006c);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (unaff_s0[1] <= *unaff_s0) {
    uVar3 = (uint)unaff_s0[8];
    if (uVar3 < unaff_s0[7]) {
      return 0x12;
    }
    if (0x3ffc < (ushort)(unaff_s0[1] - 4)) {
      return 0x12;
    }
    if (0x3ffc < (ushort)(*unaff_s0 - 4)) {
      return 0x12;
    }
    if (unaff_s0[0xc] < unaff_s0[0xb]) {
      return 0x12;
    }
    if (unaff_s0[7] < 6) {
      return 0x12;
    }
    if (0xc80 < uVar3) {
      return 0x12;
    }
    if (0xc76 < (unaff_s0[10] - 10 & 0xffff)) {
      return 0x12;
    }
    if (499 < unaff_s0[9]) {
      return 0x12;
    }
    if ((uint)unaff_s0[10] << 2 <= (unaff_s0[9] + 1) * uVar3) {
      return 0x12;
    }
    iVar2 = FUN_00011704(uRam00000044,iRam00000054,uRam0000006c);
    bVar1 = *(byte *)(unaff_s0 + 6);
    if ((iVar2 != 0) && ((bVar1 & 1) != 0)) {
      return 0x12;
    }
    if ((uRam0000006c & 0x1000000) == 0) {
      if ((bVar1 & 2) != 0) {
        return 0x12;
      }
    }
    else {
      if ((bVar1 & 2) != 0) goto _L0;
    }
    if ((*(byte *)((int)unaff_s0 + 5) & 2) == 0) {
_L0:
      FUN_0001173e();
      _LVL420();
      iRam00000054 = FUN_00011766();
      if (iRam00000054 == 0) {
        return 0x1f;
      }
      return unaff_s1;
    }
  }
  return 0x12;
}



undefined4 FUN_00011704(undefined2 uRam00000044,int iRam00000054,uint uRam0000006c)

{
  byte bVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar2;
  
  iVar2 = FUN_00011704(uRam00000044,iRam00000054,uRam0000006c);
  bVar1 = *(byte *)(unaff_s0 + 0xc);
  if ((iVar2 == 0) || ((bVar1 & 1) == 0)) {
    if ((uRam0000006c & 0x1000000) == 0) {
      if ((bVar1 & 2) != 0) {
        return 0x12;
      }
    }
    else {
      if ((bVar1 & 2) != 0) goto _L0;
    }
    if ((*(byte *)(unaff_s0 + 5) & 2) == 0) {
_L0:
      FUN_0001173e();
      _LVL420();
      iRam00000054 = FUN_00011766();
      if (iRam00000054 == 0) {
        return 0x1f;
      }
      return unaff_s1;
    }
  }
  return 0x12;
}



undefined4 FUN_0001173e(void)

{
  undefined4 unaff_s1;
  int iVar1;
  int unaff_s2;
  
  FUN_0001173e();
  _LVL420();
  iVar1 = FUN_00011766();
  *(int *)(unaff_s2 + 0x54) = iVar1;
  if (iVar1 == 0) {
    unaff_s1 = 0x1f;
  }
  return unaff_s1;
}



undefined4 _LVL420(void)

{
  undefined4 unaff_s1;
  int iVar1;
  int unaff_s2;
  
  _LVL420();
  iVar1 = FUN_00011766();
  *(int *)(unaff_s2 + 0x54) = iVar1;
  if (iVar1 == 0) {
    unaff_s1 = 0x1f;
  }
  return unaff_s1;
}



undefined4 FUN_00011766(void)

{
  undefined4 unaff_s1;
  int iVar1;
  int unaff_s2;
  
  iVar1 = FUN_00011766();
  *(int *)(unaff_s2 + 0x54) = iVar1;
  if (iVar1 == 0) {
    unaff_s1 = 0x1f;
  }
  return unaff_s1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 37a1

void llm_encryption_start(llm_enc_req *param)

{
  _DAT_280000c4 = *(undefined4 *)(param->key).ltk;
  _DAT_280000c8 = *(undefined4 *)((param->key).ltk + 4);
  _DAT_280000cc = *(undefined4 *)((param->key).ltk + 8);
  _DAT_280000d0 = *(undefined4 *)((param->key).ltk + 0xc);
  (*pcRam00000000)(0x2800806e,param->plain_data,0x10,pcRam00000000);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 3adf

void llm_encryption_done(void)

{
  int extraout_a0;
  undefined *extraout_a0_00;
  undefined *extraout_a0_01;
  
  _L0();
  _LVL440();
  if (extraout_a0 != 0) {
    if ((*(ushort *)(extraout_a0 + 8) & 0xff) == 1) {
      FUN_000118e4();
      (*pcRam00000000)(extraout_a0_01 + 1,0x2800807e,0x10,pcRam00000000);
      *extraout_a0_01 = 0;
      _L0();
    }
    else {
      FUN_0001188e();
      (*pcRam00000000)(extraout_a0_00 + 1,0x2800807e,0x10,pcRam00000000);
      *extraout_a0_00 = 0;
      _L0();
    }
    FUN_000118ba();
    if (pcRam00000000 != (code *)0x0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _LVL458();
    DAT_00000058 = 0;
  }
  return;
}



void _L0(void)

{
  int *unaff_s0;
  int extraout_a0;
  undefined *extraout_a0_00;
  undefined *extraout_a0_01;
  
  _L0();
  _LVL440();
  if (extraout_a0 != 0) {
    if ((*(ushort *)(extraout_a0 + 8) & 0xff) == 1) {
      FUN_000118e4();
      (*pcRam00000000)(extraout_a0_01 + 1,0x2800807e,0x10,pcRam00000000);
      *extraout_a0_01 = 0;
      _L0();
    }
    else {
      FUN_0001188e();
      (*pcRam00000000)(extraout_a0_00 + 1,0x2800807e,0x10,pcRam00000000);
      *extraout_a0_00 = 0;
      _L0();
    }
    FUN_000118ba();
    if (*unaff_s0 != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _LVL458();
    *(undefined *)(unaff_s0 + 0x16) = 0;
  }
  return;
}



void _LVL440(void)

{
  int *unaff_s0;
  undefined *extraout_a0;
  undefined *extraout_a0_00;
  int unaff_s3;
  
  _LVL440();
  if (unaff_s3 != 0) {
    if ((*(ushort *)(unaff_s3 + 8) & 0xff) == 1) {
      FUN_000118e4();
      (*pcRam00000000)(extraout_a0_00 + 1,0x2800807e,0x10,pcRam00000000);
      *extraout_a0_00 = 0;
      _L0();
    }
    else {
      FUN_0001188e();
      (*pcRam00000000)(extraout_a0 + 1,0x2800807e,0x10,pcRam00000000);
      *extraout_a0 = 0;
      _L0();
    }
    FUN_000118ba();
    if (*unaff_s0 != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _LVL458();
    *(undefined *)(unaff_s0 + 0x16) = 0;
  }
  return;
}



void FUN_0001188e(void)

{
  int *unaff_s0;
  undefined *extraout_a0;
  code **unaff_s2;
  
  FUN_0001188e();
  (**unaff_s2)(extraout_a0 + 1,0x2800807e,0x10,*unaff_s2);
  *extraout_a0 = 0;
  _L0();
  FUN_000118ba();
  if (*unaff_s0 == 0) {
    _LVL458();
    *(undefined *)(unaff_s0 + 0x16) = 0;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int *unaff_s0;
  
  _L0();
  FUN_000118ba();
  if (*unaff_s0 == 0) {
    _LVL458();
    *(undefined *)(unaff_s0 + 0x16) = 0;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000118ba(void)

{
  int *unaff_s0;
  
  FUN_000118ba();
  if (*unaff_s0 == 0) {
    _LVL458();
    *(undefined *)(unaff_s0 + 0x16) = 0;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000118e4(void)

{
  int *unaff_s0;
  undefined *extraout_a0;
  code **unaff_s2;
  
  FUN_000118e4();
  (**unaff_s2)(extraout_a0 + 1,0x2800807e,0x10,*unaff_s2);
  *extraout_a0 = 0;
  _L0();
  FUN_000118ba();
  if (*unaff_s0 == 0) {
    _LVL458();
    *(undefined *)(unaff_s0 + 0x16) = 0;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int *unaff_s0;
  
  _L0();
  FUN_000118ba();
  if (*unaff_s0 == 0) {
    _LVL458();
    *(undefined *)(unaff_s0 + 0x16) = 0;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL458(void)

{
  int unaff_s0;
  
  _LVL458();
  *(undefined *)(unaff_s0 + 0x58) = 0;
  return;
}


