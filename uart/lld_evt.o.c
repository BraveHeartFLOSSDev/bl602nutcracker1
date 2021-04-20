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

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

typedef ushort uint16_t;

struct em_buf_tx_desc {
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr {
    struct co_list_hdr * next;
};

struct em_buf_node {
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node {
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag {
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

struct llc_ch_asses_tag {
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef int _ssize_t;

typedef union anon_union.conflictc37 anon_union.conflictc37, *Panon_union.conflictc37;

typedef uint wint_t;

union anon_union.conflictc37 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictc37_for___value anon_union.conflictc37_for___value, *Panon_union.conflictc37_for___value;

union anon_union.conflictc37_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictc37_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode {
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext {
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

struct bd_addr {
    uint8_t addr[6];
};

struct advertising_pdu_params {
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

struct ke_msg {
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct llm_pdu_con_req_rx llm_pdu_con_req_rx, *Pllm_pdu_con_req_rx;

typedef struct access_addr access_addr, *Paccess_addr;

typedef struct crc_init crc_init, *Pcrc_init;

typedef struct le_chnl_map le_chnl_map, *Ple_chnl_map;

struct access_addr {
    uint8_t addr[4];
};

struct crc_init {
    uint8_t crc[3];
};

struct le_chnl_map {
    uint8_t map[5];
};

struct llm_pdu_con_req_rx {
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

struct t_public_key256 {
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params {
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

struct ea_elt_tag {
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

struct channel_map_assess {
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask {
    uint8_t mask[8];
};

struct access_addr_gen {
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag {
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

typedef enum anon_enum_8.conflictcc {
    KE_MEM_KE_MSG=0,
    SCA_100PPM=3,
    SCA_20PPM=7,
    SCA_500PPM=0,
    SCA_250PPM=1,
    KE_MEM_NON_RETENTION=0,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_EM=1,
    SCA_75PPM=4,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    SCA_50PPM=5,
    SCA_30PPM=6,
    SCA_150PPM=2
} anon_enum_8.conflictcc;

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

typedef enum KE_EVENT_TYPE {
    KE_EVENT_H4TL_CMD_HDR_RX=5,
    KE_EVENT_H4TL_TX=4,
    KE_EVENT_MAX=10,
    KE_EVENT_BLE_EVT_DELETE=9,
    KE_EVENT_KE_TIMER=3,
    KE_EVENT_H4TL_CMD_PLD_RX=6,
    KE_EVENT_BT_PSCAN_PROC=7,
    KE_EVENT_ECC_MULTIPLICATION=0,
    KE_EVENT_BLE_CRYPT=1,
    KE_EVENT_KE_MESSAGE=2,
    KE_EVENT_BLE_EVT_DEFER=8
} KE_EVENT_TYPE;

typedef enum rwip_prio_idx {
    RWIP_PRIO_LE_ESTAB_IDX=2,
    RWIP_PRIO_INIT_IDX=1,
    RWIP_PRIO_LE_CON_IDLE_IDX=3,
    RWIP_PRIO_ADV_HDC_IDX=6,
    RWIP_PRIO_IDX_MAX=7,
    RWIP_PRIO_LE_CON_ACT_IDX=4,
    RWIP_PRIO_ADV_IDX=5,
    RWIP_PRIO_SCAN_IDX=0
} rwip_prio_idx;

typedef enum KE_TASK_TYPE {
    TASK_HCI_ONCHIP=4,
    TASK_NONE=-1,
    TASK_LLM=0,
    TASK_DBG=3,
    TASK_LLD=2,
    TASK_MAX=5,
    TASK_LLC=1
} KE_TASK_TYPE;

typedef enum rwip_prio_dft {
    RWIP_PRIO_LE_CON_IDLE_DFT=10,
    RWIP_PRIO_INIT_DFT=5,
    RWIP_PRIO_SCAN_DFT=5,
    RWIP_PRIO_ADV_DFT=5,
    RWIP_PRIO_ADV_HDC_DFT=10,
    RWIP_PRIO_LE_ESTAB_DFT=20,
    RWIP_PRIO_MAX=31,
    RWIP_PRIO_LE_CON_ACT_DFT=15
} rwip_prio_dft;

typedef struct llc_create_con_req_ind llc_create_con_req_ind, *Pllc_create_con_req_ind;

struct llc_create_con_req_ind {
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

typedef enum LLC_MSG {
    LLC_CON_UPD_REQ_IND=265,
    LLC_LLCP_RSP_TO=258,
    LLC_CHMAP_UPDATE_REQ_IND=264,
    LLC_LENGTH_REQ_IND=263,
    LLC_CHNL_ASSESS_TO=261,
    LLC_DATA_IND=256,
    LLC_ENC_MGT_IND=262,
    LLC_LLCP_RECV_IND=266,
    LLC_AUTH_PAYL_NEARLY_TO=259,
    LLC_AUTH_PAYL_REAL_TO=260,
    LLC_LE_LINK_SUP_TO=257
} LLC_MSG;

typedef enum llc_proc_field {
    LLC_TRAFFIC_PAUSED=2,
    LLC_DISC=3,
    LLC_REM_PROC=1,
    LLC_LOC_PROC=0
} llc_proc_field;

typedef struct llc_con_upd_req_ind llc_con_upd_req_ind, *Pllc_con_upd_req_ind;

struct llc_con_upd_req_ind {
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
    LLC_OP_REM_PARAM_UPD=1,
    LLC_OP_DLE_UPD=3,
    LLC_OP_ENCRYPT=2,
    LLC_OP_LOC_PARAM_UPD=0,
    LLC_OP_MAX=4
} llc_op_type;

typedef enum llc_con_up_op {
    LLC_CON_UP_FORCE=2,
    LLC_CON_UP_HCI_REQ=0,
    LLC_CON_UP_MOVE_ANCHOR=1,
    LLC_CON_UP_LOC_REQ=4,
    LLC_CON_UP_PEER_REQ=3
} llc_con_up_op;

typedef short int16_t;

typedef long int32_t;

typedef enum lld_util_instant_action {
    LLD_UTIL_NO_ACTION=0,
    LLD_UTIL_PARAM_UPDATE=1,
    LLD_UTIL_CHMAP_UPDATE=2
} lld_util_instant_action;

typedef enum TASK_API_ID {
    TASK_ID_LANC=54,
    TASK_ID_PLXC=68,
    TASK_ID_SCPPS=34,
    TASK_ID_ANPS=47,
    TASK_ID_FINDT=25,
    TASK_ID_GAPM=13,
    TASK_ID_APP=15,
    TASK_ID_CSCPS=45,
    TASK_ID_FINDL=24,
    TASK_ID_BASS=36,
    TASK_ID_AM0_HAS=-15,
    TASK_ID_SCPPC=35,
    TASK_ID_BCSS=63,
    TASK_ID_DBG=3,
    TASK_ID_ANPC=48,
    TASK_ID_AHI=16,
    TASK_ID_AM0=-16,
    TASK_ID_HOGPBH=39,
    TASK_ID_GATTM=11,
    TASK_ID_HRPS=30,
    TASK_ID_CSCPC=46,
    TASK_ID_RSCPC=44,
    TASK_ID_PROXM=22,
    TASK_ID_WPTC=66,
    TASK_ID_DISPLAY=9,
    TASK_ID_DISC=21,
    TASK_ID_PROXR=23,
    TASK_ID_HTPT=27,
    TASK_ID_HOGPRH=40,
    TASK_ID_LANS=53,
    TASK_ID_HRPC=31,
    TASK_ID_RSCPS=43,
    TASK_ID_PLXS=67,
    TASK_ID_HTPC=26,
    TASK_ID_HCI=8,
    TASK_ID_ENVS=57,
    TASK_ID_UDSS=61,
    TASK_ID_LM=4,
    TASK_ID_GLPS=41,
    TASK_ID_CPPS=51,
    TASK_ID_TIPC=33,
    TASK_ID_LD=7,
    TASK_ID_LC=5,
    TASK_ID_LB=6,
    TASK_ID_INVALID=-1,
    TASK_ID_ENVC=58,
    TASK_ID_UDSC=62,
    TASK_ID_GATTC=12,
    TASK_ID_GLPC=42,
    TASK_ID_HOGPD=38,
    TASK_ID_CPPC=52,
    TASK_ID_WPTS=65,
    TASK_ID_LLC=1,
    TASK_ID_DISS=20,
    TASK_ID_LLD=2,
    TASK_ID_PASPC=50,
    TASK_ID_GAPC=14,
    TASK_ID_IPSS=55,
    TASK_ID_L2CC=10,
    TASK_ID_BLPS=28,
    TASK_ID_LLM=0,
    TASK_ID_BASC=37,
    TASK_ID_BCSC=64,
    TASK_ID_WSCS=59,
    TASK_ID_PASPS=49,
    TASK_ID_IPSC=56,
    TASK_ID_BLPC=29,
    TASK_ID_TIPS=32,
    TASK_ID_WSCC=60
} TASK_API_ID;

typedef enum lld_evt_defer_type {
    LLD_DEFER_TEST_END=2,
    LLD_DEFER_RX=0,
    LLD_DEFER_MAP_UP_INSTANT=4,
    LLD_DEFER_END=1,
    LLD_DEFER_MAX=5,
    LLD_DEFER_CON_UP_INSTANT=3
} lld_evt_defer_type;

typedef uint8_t ke_state_t;

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

struct rwip_rf_api {
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
    RW_CRYPT_ONGOING=16,
    RW_CSB_NOT_LPO_ALLOWED=64,
    RW_MWS_WLAN_EVENT_GENERATOR_ACTIVE=-128,
    RW_TL_TX_ONGOING=2,
    RW_WAKE_UP_ONGOING=1,
    RW_TL_RX_ONGOING=4,
    RW_AHI_TIMEOUT=8,
    RW_DELETE_ELT_ONGOING=32
} prevent_sleep;

typedef struct rwip_prio rwip_prio, *Prwip_prio;

struct rwip_prio {
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler {
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler {
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct ltk ltk, *Pltk;

struct ltk {
    uint8_t ltk[16];
};

typedef struct le_features le_features, *Ple_features;

struct le_features {
    uint8_t feats[8];
};

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div {
    uint8_t skd[16];
};

typedef struct back_packet_info back_packet_info, *Pback_packet_info;

struct back_packet_info {
    uint8_t used;
    uint8_t advmode_headlen;
    uint8_t head_flags;
    struct bd_addr adva_addr;
    struct bd_addr targeta_addr;
    undefined field_0xf;
    uint16_t adi;
    uint8_t auxptr[3];
    uint8_t syncinfo[18];
    uint8_t txpwr;
    uint8_t datalen;
    uint8_t data[255];
};

typedef struct le_states le_states, *Ple_states;

struct le_states {
    uint8_t supp_states[8];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds {
    uint8_t cmds[64];
};

typedef struct lld_evt_deferred_tag lld_evt_deferred_tag, *Plld_evt_deferred_tag;

struct lld_evt_deferred_tag {
    struct co_list_hdr hdr;
    struct ea_elt_tag * elt_ptr;
    uint8_t type;
    uint8_t rx_desc_cnt;
    undefined field_0xa;
    undefined field_0xb;
};

typedef struct lld_evt_tag lld_evt_tag, *Plld_evt_tag;

typedef struct lld_evt_anchor lld_evt_anchor, *Plld_evt_anchor;

typedef struct ea_interval_tag ea_interval_tag, *Pea_interval_tag;

typedef union lld_evt_info lld_evt_info, *Plld_evt_info;

typedef struct lld_non_conn lld_non_conn, *Plld_non_conn;

typedef struct lld_conn lld_conn, *Plld_conn;

struct lld_non_conn {
    uint32_t window;
    uint32_t anchor;
    uint32_t end_ts;
    _Bool initiate;
    _Bool connect_req_sent;
    undefined field_0xe;
    undefined field_0xf;
};

struct lld_conn {
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

union lld_evt_info {
    struct lld_non_conn non_conn;
    struct lld_conn conn;
};

struct lld_evt_anchor {
    uint32_t basetime_cnt;
    uint16_t finetime_cnt;
    uint16_t evt_cnt;
};

struct lld_evt_tag {
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

struct ea_interval_tag {
    struct co_list_hdr hdr;
    uint16_t interval_used;
    uint16_t offset_used;
    uint16_t bandwidth_used;
    uint16_t conhdl_used;
    uint16_t role_used;
    uint16_t linkid;
};

typedef enum lld_evt_mode {
    LLD_EVT_EXT_ADV_MODE=5,
    LLD_EVT_ADV_MODE=0,
    LLD_EVT_TEST_MODE=2,
    LLD_EVT_SLV_MODE=4,
    LLD_EVT_PER_ADV_MODE=6,
    LLD_EVT_SCAN_MODE=1,
    LLD_EVT_MODE_MAX=8,
    LLD_EVT_EXT_SCAN_MODE=7,
    LLD_EVT_MST_MODE=3
} lld_evt_mode;

typedef struct lld_evt_update_tag lld_evt_update_tag, *Plld_evt_update_tag;

struct lld_evt_update_tag {
    uint16_t win_offset;
    uint16_t instant;
    uint8_t win_size;
    undefined field_0x5;
};

typedef struct lld_evt_delete_tag lld_evt_delete_tag, *Plld_evt_delete_tag;

struct lld_evt_delete_tag {
    struct co_list_hdr hdr;
    struct ea_elt_tag * elt_ptr;
    _Bool flush;
    _Bool send_ind;
    undefined field_0xa;
    undefined field_0xb;
};

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag {
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

typedef struct lld_evt_wait_tag lld_evt_wait_tag, *Plld_evt_wait_tag;

struct lld_evt_wait_tag {
    struct co_list_hdr hdr;
    struct ea_elt_tag * elt_ptr;
};

typedef enum lld_evt_cs_format {
    LLD_ACTIVE_SCANNING=9,
    LLD_INITIATING=15,
    LLD_PASSIVE_SCANNING=8,
    LLD_RXTEST_MODE=29,
    LLD_TXRXTEST_MODE=30,
    LLD_MASTER_CONNECTED=2,
    LLD_LD_ADVERTISER=4,
    LLD_HD_ADVERTISER=5,
    LLD_TXTEST_MODE=28,
    LLD_SLAVE_CONNECTED=3
} lld_evt_cs_format;

typedef enum lld_evt_flag {
    LLD_EVT_FLAG_APFM=64,
    LLD_EVT_FLAG_NO_RESTART=32,
    LLD_EVT_FLAG_WAITING_INSTANT=8,
    LLD_EVT_FLAG_WAITING_ACK=1,
    LLD_EVT_FLAG_WAITING_TXPROG=4,
    LLD_EVT_FLAG_WAITING_SYNC=2,
    LLD_EVT_FLAG_WAITING_EOEVT_TO_DELETE=16,
    LLD_EVT_FLAG_LATENCY_ACTIVE=-128
} lld_evt_flag;

typedef struct llcp_con_upd_ind llcp_con_upd_ind, *Pllcp_con_upd_ind;

struct llcp_con_upd_ind {
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

typedef union anon_union.conflict13fc_for__new anon_union.conflict13fc_for__new, *Panon_union.conflict13fc_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict1270 anon_struct.conflict1270, *Panon_struct.conflict1270;

typedef struct anon_struct.conflict13b5 anon_struct.conflict13b5, *Panon_struct.conflict13b5;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm {
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

struct anon_struct.conflict1270 {
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

struct anon_struct.conflict13b5 {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict13fc_for__new {
    struct anon_struct.conflict1270 _reent;
    struct anon_struct.conflict13b5 _unused;
};

struct _on_exit_args {
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit {
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint {
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue {
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf {
    uchar * _base;
    int _size;
};

struct __sFILE {
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

struct _reent {
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
    union anon_union.conflict13fc_for__new _new;
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

typedef union anon_union.conflict13fc anon_union.conflict13fc, *Panon_union.conflict13fc;

union anon_union.conflict13fc {
    struct anon_struct.conflict1270 _reent;
    struct anon_struct.conflict13b5 _unused;
};

typedef int32_t BaseType_t;

typedef enum ea_elt_asap_type {
    EA_FLAG_NO_ASAP=0,
    EA_FLAG_ASAP_NO_LIMIT=1,
    EA_FLAG_ASAP_LIMIT=2,
    EA_FLAG_MAX=3
} ea_elt_asap_type;

typedef struct ea_param_output ea_param_output, *Pea_param_output;

struct ea_param_output {
    uint16_t interval;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t duration;
    uint16_t offset;
    undefined field_0xa;
    undefined field_0xb;
};

typedef struct ea_param_input ea_param_input, *Pea_param_input;

struct ea_param_input {
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
    EA_NO_PARITY=2,
    EA_EVEN_SLOT=0,
    EA_ODD_SLOT=1
} ea_elt_asap_parity;

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct encrypt {
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct rem_version {
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct data_len_ext_tag {
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

struct llc_env_tag {
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
    LLC_STAT_DISC_REM_REQ_MASK=512,
    LLC_STAT_UPDATE_PENDING_LSB=5,
    LLC_STAT_INSTANT_PROCEED_MASK=2048,
    LLC_STAT_LLCP_INSTANT_EXTRACTED_LSB=10,
    LLC_STAT_FEAT_EXCH_MASK=1,
    LLC_STAT_TO_PENDING_MASK=16,
    LLC_STAT_LLCP_DISCARD_LSB=3,
    LLC_STAT_INSTANT_PROCEED_LSB=11,
    LLC_STAT_SYNC_FOUND_LSB=8,
    LLC_STAT_UPDATE_EVT_SENT_MASK=-128,
    LLC_STAT_UPDATE_PENDING_MASK=32,
    LLC_STAT_PEER_VERS_KNOWN_MASK=2,
    LLC_STAT_TO_PENDING_LSB=4,
    LLC_STAT_FEAT_EXCH_LSB=0,
    LLC_STAT_UPDATE_HOST_REQ_LSB=6,
    LLC_STAT_WAIT_TRAFFIC_PAUSED_LSB=2,
    LLC_STAT_LLCP_DISCARD_MASK=8,
    LLC_STAT_LLCP_INSTANT_EXTRACTED_MASK=1024,
    LLC_STAT_SYNC_FOUND_MASK=256,
    LLC_STAT_UPDATE_HOST_REQ_MASK=64,
    LLC_STAT_PEER_VERS_KNOWN_LSB=1,
    LLC_STAT_WAIT_TRAFFIC_PAUSED_MASK=4,
    LLC_STAT_DISC_REM_REQ_LSB=9,
    LLC_STAT_UPDATE_EVT_SENT_LSB=7
} llc_status_flag;

typedef enum anon_enum_16.conflict26a6 {
    LLD_STOP_IND=512,
    LLD_EXT_ADV_STOP_IND=513
} anon_enum_16.conflict26a6;

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

typedef enum Elf_SectionHeaderType_RISCV {
    SHT_SYMTAB=2,
    SHT_GNU_versym=1879048191,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_LIBLIST=1879048183,
    SHT_FINI_ARRAY=15,
    SHT_GROUP=17,
    SHT_CHECKSUM=1879048184,
    SHT_SHLIB=10,
    SHT_ANDROID_RELA=1610612738,
    SHT_NOBITS=8,
    SHT_GNU_HASH=1879048182,
    SHT_REL=9,
    SHT_SYMTAB_SHNDX=18,
    SHT_HASH=5,
    SHT_PROGBITS=1,
    SHT_ANDROID_REL=1610612737,
    SHT_NULL=0,
    SHT_GNU_verneed=1879048190,
    SHT_INIT_ARRAY=14,
    SHT_NOTE=7,
    SHT_PREINIT_ARRAY=16,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_SUNW_COMDAT=1879048187,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
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




void lld_evt_winsize_change(lld_evt_tag *evt,_Bool instant)

{
  undefined3 in_register_0000202d;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)&evt->evt;
  if ((int)(uVar1 << 0x10) < 0) {
    uVar1 = (uVar1 & 0x7fff) * 0x271;
  }
  uVar1 = uVar1 + *(int *)&(evt->evt).field_0x4 * 2;
  uVar2 = uVar1;
  if (uVar1 < 0xe) {
    uVar2 = 0xe;
  }
  if (((uint)(evt->interval >> 1) * (uint)*(ushort *)&(evt->evt).field_0xa * 0x271 - 0x96 <= uVar2)
     && (CONCAT31(in_register_0000202d,instant) == 0)) {
    evt->evt_flag = evt->evt_flag | 0x10;
    return;
  }
  if (0x3fff < uVar1) {
    uVar2 = ((uVar2 + 0x270) / 0x271 | 0xffff8000) & 0xffff;
    if ((evt->anchor_point).finetime_cnt == 0) goto _L0;
    uVar2 = uVar2 + 1;
  }
  uVar2 = uVar2 & 0xffff;
_L0:
  *(short *)((uint)evt->conhdl * 0x5c + 0x280080a2) = (short)uVar2;
  *(uint *)&evt->evt = uVar2;
  return;
}



void lld_evt_slave_time_compute(ea_elt_tag *elt,uint16_t slot_offset)

{
  ushort uVar1;
  int iVar2;
  undefined2 in_register_0000202e;
  uint uVar3;
  uint uVar4;
  int iVar5;
  anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *paVar6;
  uint16_t uVar7;
  void *pvVar8;
  
  pvVar8 = elt->env;
  uVar3 = CONCAT22(in_register_0000202e,slot_offset) * 0x271 + (uint)*(ushort *)&elt[1].hdr.next;
  iVar5 = (uint)*(ushort *)&elt[2].ea_cb_start * 0x5c;
  uVar1 = *(ushort *)(iVar5 + 0x280080a2);
  if ((short)uVar1 < 0) {
    iVar2 = (((uint)uVar1 << 0x11) >> 0x12) * -0x271;
  }
  else {
    iVar2 = -(uint)(uVar1 >> 1);
  }
  uVar4 = (uVar3 + iVar2) - 0x21;
  elt->env = (void *)(uVar3 / 0x271 + (int)pvVar8 & 0x7ffffff);
  *(short *)&elt[1].hdr.next = (short)(uVar3 % 0x271);
  elt->timestamp = uVar4 / 0x271 + (int)pvVar8 & 0x7ffffff;
  if ((short)uVar1 < 0) {
    uVar7 = uVar1 & 0x7fff;
  }
  else {
    uVar7 = (uint16_t)((uVar1 / 0x271 + 1) * 0x10000 >> 0x10);
  }
  paVar6 = elt[1].ea_cb_cancel;
  elt->duration_min = uVar7;
  elt->duration_min = (uVar7 + *(short *)(paVar6 + 8)) * 0x271;
  uVar7 = (uint16_t)(uVar4 % 0x271);
  *(uint16_t *)(iVar5 + 0x28008090) = uVar7;
  elt->delay = uVar7;
  return;
}



void lld_evt_prevent_stop(ea_elt_tag *elt)

{
  return;
}



void lld_evt_deferred_elt_push(ea_elt_tag *elt,uint8_t type,uint8_t rx_desc_cnt)

{
  int iVar1;
  
  iVar1 = _L0(0xc,0);
  *(ea_elt_tag **)(iVar1 + 4) = elt;
  *(uint8_t *)(iVar1 + 8) = type;
  *(uint8_t *)(iVar1 + 9) = rx_desc_cnt;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined in_stack_0000000c;
  
  iVar1 = _L0();
  *(undefined4 *)(iVar1 + 4) = unaff_s1;
  *(undefined *)(iVar1 + 8) = unaff_s0;
  *(undefined *)(iVar1 + 9) = in_stack_0000000c;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void lld_evt_elt_wait_insert(ea_elt_tag *elt)

{
  int iVar1;
  
  iVar1 = _L0(8,0);
  *(ea_elt_tag **)(iVar1 + 4) = elt;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined4 unaff_s0;
  int iVar1;
  
  iVar1 = _L0();
  *(undefined4 *)(iVar1 + 4) = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000101e2)

ea_elt_tag * lld_evt_deferred_elt_pop(uint8_t *type,uint8_t *rx_desc_cnt)

{
  ea_elt_tag *peVar1;
  ea_elt_tag *peVar2;
  undefined4 in_mstatus;
  
  peVar2 = (ea_elt_tag *)FUN_000101f2(0x10,in_mstatus);
  peVar1 = peVar2;
  if (peVar2 != (ea_elt_tag *)0x0) {
    peVar1 = peVar2->linked_element;
    *type = *(uint8_t *)&peVar2->timestamp;
    *rx_desc_cnt = *(uint8_t *)((int)&peVar2->timestamp + 1);
    _L0();
  }
  return peVar1;
}



int FUN_000101f2(void)

{
  int iVar1;
  undefined *unaff_s1;
  int iVar2;
  undefined *in_stack_0000000c;
  
  iVar2 = FUN_000101f2();
  iVar1 = iVar2;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    *unaff_s1 = *(undefined *)(iVar2 + 8);
    *in_stack_0000000c = *(undefined *)(iVar2 + 9);
    _L0();
  }
  return iVar1;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Removing unreachable block (ram,0x00010260)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t lld_evt_get_next_free_slot(void)

{
  if (iRam00000000 != 0) {
    return *(ushort *)(_DAT_00000004 + 0x12) / 0x271 + *(int *)(_DAT_00000004 + 8) & 0x7ffffff;
  }
  do {
  } while( true );
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

lld_evt_wait_tag * lld_evt_elt_wait_get(ea_elt_tag *elt)

{
  lld_evt_wait_tag *plVar1;
  
  plVar1 = _DAT_00000008;
  if (elt == (ea_elt_tag *)0x0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  while( true ) {
    if (plVar1 == (lld_evt_wait_tag *)0x0) {
      return (lld_evt_wait_tag *)0x0;
    }
    if (plVar1->elt_ptr == elt) break;
    plVar1 = *(lld_evt_wait_tag **)&plVar1->hdr;
  }
  FUN_00010288(8,plVar1,0);
  return plVar1;
}



void FUN_00010288(void)

{
  FUN_00010288();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void lld_evt_schedule(ea_elt_tag *elt)

{
  char cVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  ea_elt_tag *peVar6;
  uint uVar7;
  
  if (elt == (ea_elt_tag *)0x0) {
    return;
  }
  uVar2 = elt->timestamp;
  iVar4 = _L0();
  if (iVar4 != 0) {
    _L0();
  }
  cVar1 = *(char *)((int)&elt[2].ea_cb_stop + 3);
  if ((cVar1 == '\0') || (cVar1 == '\x05')) {
    if ((*(byte *)((int)&elt[2].ea_cb_cancel + 2) & 0x10) != 0) goto _L0;
    _L0();
    if ((*(char *)(_DAT_00000014 + 0x21) == '\0') &&
       (peVar6 = (ea_elt_tag *)((int)elt[2].linked_element - elt->timestamp),
       _DAT_28008160 = SUB42(peVar6,0), (int)peVar6 * 0x10000 >> 0x10 < 1)) {
      _DAT_28008160 = 1;
    }
  }
  if (*(char *)((int)&elt[2].ea_cb_stop + 3) == '\x01') {
    if ((*(byte *)((int)&elt[2].ea_cb_cancel + 2) & 0x10) != 0) {
_L0:
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar4 = (int)((int)elt[2].linked_element - elt->timestamp) * 0x10000 >> 0x10;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    _DAT_280081bc = (ushort)iVar4;
    _DAT_280081b6 = _DAT_280081bc | 0x8000;
    peVar6 = elt->linked_element;
    if (peVar6 != (ea_elt_tag *)0x0) {
      uVar5 = (uint)*(ushort *)&peVar6[2].ea_cb_stop;
      uVar7 = uVar5 - (elt->timestamp - peVar6->timestamp & 0x7ffffff) % uVar5 & 0xffff;
      if (uVar7 < 6) {
        uVar7 = uVar7 + uVar5 & 0xffff;
      }
      _DAT_280081ba = (undefined2)(((uVar7 >> 1) - 1) * 0x10000 >> 0x10);
    }
  }
  puVar3 = (ushort *)(((uVar2 & 0xf) + 0xa002000) * 4);
  *puVar3 = 0;
  if ((byte)(*(char *)((int)&elt[2].ea_cb_stop + 3) - 3U) < 2) {
    FUN_000103c4(*(undefined2 *)&elt[2].ea_cb_start);
  }
  *(undefined2 *)((uint)*(ushort *)&elt[2].ea_cb_start * 0x5c + 0x280080d8) =
       *(undefined2 *)&elt[2].timestamp;
  *puVar3 = *puVar3 & 0xffcf;
  *puVar3 = *puVar3 & 0xfff0 | 2;
  puVar3[1] = *(ushort *)((int)&elt[2].ea_cb_start + 2);
  _L0(&elt->env);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(int iRam00000014)

{
  int unaff_s0;
  uint unaff_s1;
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = _L0();
  if (iVar2 != 0) {
    _L0();
  }
  if ((*(char *)(unaff_s0 + 0x7b) == '\0') || (*(char *)(unaff_s0 + 0x7b) == '\x05')) {
    if ((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) goto _L0;
    _L0();
    if ((*(char *)(iRam00000014 + 0x21) == '\0') &&
       (iVar2 = *(int *)(unaff_s0 + 0x5c) - *(int *)(unaff_s0 + 8),
       _DAT_28008160 = (undefined2)iVar2, iVar2 * 0x10000 >> 0x10 < 1)) {
      _DAT_28008160 = 1;
    }
  }
  if (*(char *)(unaff_s0 + 0x7b) == '\x01') {
    if ((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) {
_L0:
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar2 = (*(int *)(unaff_s0 + 0x5c) - *(int *)(unaff_s0 + 8)) * 0x10000 >> 0x10;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    _DAT_280081bc = (ushort)iVar2;
    _DAT_280081b6 = _DAT_280081bc | 0x8000;
    iVar2 = *(int *)(unaff_s0 + 4);
    if (iVar2 != 0) {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x78);
      uVar4 = uVar3 - (*(int *)(unaff_s0 + 8) - *(int *)(iVar2 + 8) & 0x7ffffffU) % uVar3 & 0xffff;
      if (uVar4 < 6) {
        uVar4 = uVar4 + uVar3 & 0xffff;
      }
      _DAT_280081ba = (undefined2)(((uVar4 >> 1) - 1) * 0x10000 >> 0x10);
    }
  }
  puVar1 = (ushort *)(((unaff_s1 & 0xf) + 0xa002000) * 4);
  *puVar1 = 0;
  if ((byte)(*(char *)(unaff_s0 + 0x7b) - 3U) < 2) {
    FUN_000103c4(*(undefined2 *)(unaff_s0 + 0x74));
  }
  *(undefined2 *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080d8) =
       *(undefined2 *)(unaff_s0 + 0x60);
  *puVar1 = *puVar1 & 0xffcf;
  *puVar1 = *puVar1 & 0xfff0 | 2;
  puVar1[1] = *(ushort *)(unaff_s0 + 0x76);
  _L0(unaff_s0 + 0x28);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(int iRam00000014)

{
  int unaff_s0;
  uint unaff_s1;
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  _L0();
  if ((*(char *)(unaff_s0 + 0x7b) == '\0') || (*(char *)(unaff_s0 + 0x7b) == '\x05')) {
    if ((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) goto _L0;
    _L0();
    if ((*(char *)(iRam00000014 + 0x21) == '\0') &&
       (iVar3 = *(int *)(unaff_s0 + 0x5c) - *(int *)(unaff_s0 + 8),
       _DAT_28008160 = (undefined2)iVar3, iVar3 * 0x10000 >> 0x10 < 1)) {
      _DAT_28008160 = 1;
    }
  }
  if (*(char *)(unaff_s0 + 0x7b) == '\x01') {
    if ((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) {
_L0:
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar3 = (*(int *)(unaff_s0 + 0x5c) - *(int *)(unaff_s0 + 8)) * 0x10000 >> 0x10;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    _DAT_280081bc = (ushort)iVar3;
    _DAT_280081b6 = _DAT_280081bc | 0x8000;
    iVar3 = *(int *)(unaff_s0 + 4);
    if (iVar3 != 0) {
      uVar2 = (uint)*(ushort *)(iVar3 + 0x78);
      uVar4 = uVar2 - (*(int *)(unaff_s0 + 8) - *(int *)(iVar3 + 8) & 0x7ffffffU) % uVar2 & 0xffff;
      if (uVar4 < 6) {
        uVar4 = uVar4 + uVar2 & 0xffff;
      }
      _DAT_280081ba = (undefined2)(((uVar4 >> 1) - 1) * 0x10000 >> 0x10);
    }
  }
  puVar1 = (ushort *)(((unaff_s1 & 0xf) + 0xa002000) * 4);
  *puVar1 = 0;
  if ((byte)(*(char *)(unaff_s0 + 0x7b) - 3U) < 2) {
    FUN_000103c4(*(undefined2 *)(unaff_s0 + 0x74));
  }
  *(undefined2 *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080d8) =
       *(undefined2 *)(unaff_s0 + 0x60);
  *puVar1 = *puVar1 & 0xffcf;
  *puVar1 = *puVar1 & 0xfff0 | 2;
  puVar1[1] = *(ushort *)(unaff_s0 + 0x76);
  _L0(unaff_s0 + 0x28);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(int iRam00000014)

{
  int unaff_s0;
  uint unaff_s1;
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  _L0();
  if ((*(char *)(iRam00000014 + 0x21) == '\0') &&
     (iVar3 = *(int *)(unaff_s0 + 0x5c) - *(int *)(unaff_s0 + 8), _DAT_28008160 = (undefined2)iVar3,
     iVar3 * 0x10000 >> 0x10 < 1)) {
    _DAT_28008160 = 1;
  }
  if (*(char *)(unaff_s0 + 0x7b) == '\x01') {
    if ((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar3 = (*(int *)(unaff_s0 + 0x5c) - *(int *)(unaff_s0 + 8)) * 0x10000 >> 0x10;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    _DAT_280081bc = (ushort)iVar3;
    _DAT_280081b6 = _DAT_280081bc | 0x8000;
    iVar3 = *(int *)(unaff_s0 + 4);
    if (iVar3 != 0) {
      uVar2 = (uint)*(ushort *)(iVar3 + 0x78);
      uVar4 = uVar2 - (*(int *)(unaff_s0 + 8) - *(int *)(iVar3 + 8) & 0x7ffffffU) % uVar2 & 0xffff;
      if (uVar4 < 6) {
        uVar4 = uVar4 + uVar2 & 0xffff;
      }
      _DAT_280081ba = (undefined2)(((uVar4 >> 1) - 1) * 0x10000 >> 0x10);
    }
  }
  puVar1 = (ushort *)(((unaff_s1 & 0xf) + 0xa002000) * 4);
  *puVar1 = 0;
  if ((byte)(*(char *)(unaff_s0 + 0x7b) - 3U) < 2) {
    FUN_000103c4(*(undefined2 *)(unaff_s0 + 0x74));
  }
  *(undefined2 *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080d8) =
       *(undefined2 *)(unaff_s0 + 0x60);
  *puVar1 = *puVar1 & 0xffcf;
  *puVar1 = *puVar1 & 0xfff0 | 2;
  puVar1[1] = *(ushort *)(unaff_s0 + 0x76);
  _L0(unaff_s0 + 0x28);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000103c4(void)

{
  int unaff_s0;
  ushort *unaff_s1;
  
  FUN_000103c4();
  *(undefined2 *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080d8) =
       *(undefined2 *)(unaff_s0 + 0x60);
  *unaff_s1 = *unaff_s1 & 0xffcf;
  *unaff_s1 = *unaff_s1 & 0xfff0 | 2;
  unaff_s1[1] = *(ushort *)(unaff_s0 + 0x76);
  _L0(unaff_s0 + 0x28);
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



// WARNING: Removing unreachable block (ram,0x0001044a)

void lld_evt_delete_elt_push(ea_elt_tag *elt,_Bool flush,_Bool send_indication)

{
  int iVar1;
  
  if (*(char *)((int)&elt[2].ea_cb_cancel + 3) == '\0') {
    iVar1 = _L0(0xc,0);
    *(ea_elt_tag **)(iVar1 + 4) = elt;
    *(_Bool *)(iVar1 + 8) = flush;
    *(_Bool *)(iVar1 + 9) = send_indication;
    *(undefined *)((int)&elt[2].ea_cb_cancel + 3) = 1;
    FUN_00010486(0x20,iVar1);
  }
  FUN_00010496(0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  undefined unaff_s2;
  undefined in_stack_0000000c;
  
  iVar1 = _L0();
  *(int *)(iVar1 + 4) = unaff_s0;
  *(undefined *)(iVar1 + 8) = unaff_s2;
  *(undefined *)(iVar1 + 9) = in_stack_0000000c;
  *(undefined *)(unaff_s0 + 0x7f) = 1;
  FUN_00010486(0x20,iVar1);
  FUN_00010496(0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010486(void)

{
  FUN_00010486();
  FUN_00010496(0x20);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010496(void)

{
  FUN_00010496();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001059c)
// WARNING: Variable defined which should be unmapped: type

void lld_evt_deffered_elt_handler(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cStack34;
  undefined auStack33 [3];
  uint8_t type;
  uint8_t rx_desc_cnt;
  
  _L0(8);
  iVar1 = FUN_000104d6(&cStack34,auStack33);
  do {
    if (iVar1 == 0) {
      return;
    }
    if (cStack34 == '\x03') {
      FUN_00010510(*(undefined2 *)(iVar1 + 0x74),iVar1);
      FUN_0001051c(*(undefined2 *)(iVar1 + 0x74));
    }
    else {
      if (cStack34 == '\x04') {
        FUN_00010572(*(undefined2 *)(iVar1 + 0x74));
      }
      else {
        if (cStack34 == '\x01') {
          if ((*(byte *)(iVar1 + 0x7e) & 0x10) != 0) {
            uVar4 = 1;
            uVar3 = 1;
_L0:
            FUN_0001058e(iVar1,uVar3,uVar4);
          }
        }
        else {
          if (cStack34 == '\x02') {
            if (*(int *)(iVar1 + 0x48) != 0) {
              FUN_000105ac(iVar1 + 0x48);
              _L0();
            }
            if (*(int *)(iVar1 + 0x30) != 0) {
              FUN_000105c4(iVar1 + 0x30);
              _L0();
            }
            uVar4 = 0;
            uVar3 = 0;
            goto _L0;
          }
        }
      }
    }
    iVar2 = FUN_00010526(iVar1 + 0x28);
    if (((byte)(cStack34 - 1U) < 2) && (iVar2 == 0)) {
      if ((ushort)(*(short *)(iVar1 + 0x74) - 2U) < 2) {
        _L0();
      }
      else {
        _L0();
      }
    }
    iVar1 = FUN_0001055e(&cStack34,auStack33);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void _L0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char in_stack_0000000e;
  
  _L0();
  iVar1 = FUN_000104d6(&stack0x0000000e,&stack0x0000000f);
  do {
    if (iVar1 == 0) {
      return;
    }
    if (in_stack_0000000e == '\x03') {
      FUN_00010510(*(undefined2 *)(iVar1 + 0x74),iVar1);
      FUN_0001051c(*(undefined2 *)(iVar1 + 0x74));
    }
    else {
      if (in_stack_0000000e == '\x04') {
        FUN_00010572(*(undefined2 *)(iVar1 + 0x74));
      }
      else {
        if (in_stack_0000000e == '\x01') {
          if ((*(byte *)(iVar1 + 0x7e) & 0x10) != 0) {
            uVar4 = 1;
            uVar3 = 1;
_L0:
            FUN_0001058e(iVar1,uVar3,uVar4);
          }
        }
        else {
          if (in_stack_0000000e == '\x02') {
            if (*(int *)(iVar1 + 0x48) != 0) {
              FUN_000105ac(iVar1 + 0x48);
              _L0();
            }
            if (*(int *)(iVar1 + 0x30) != 0) {
              FUN_000105c4(iVar1 + 0x30);
              _L0();
            }
            uVar4 = 0;
            uVar3 = 0;
            goto _L0;
          }
        }
      }
    }
    iVar2 = FUN_00010526(iVar1 + 0x28);
    if (((byte)(in_stack_0000000e - 1U) < 2) && (iVar2 == 0)) {
      if ((ushort)(*(short *)(iVar1 + 0x74) - 2U) < 2) {
        _L0();
      }
      else {
        _L0();
      }
    }
    iVar1 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void FUN_000104d6(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char in_stack_0000000e;
  
  iVar1 = FUN_000104d6();
  do {
    if (iVar1 == 0) {
      return;
    }
    if (in_stack_0000000e == '\x03') {
      FUN_00010510(*(undefined2 *)(iVar1 + 0x74),iVar1);
      FUN_0001051c(*(undefined2 *)(iVar1 + 0x74));
    }
    else {
      if (in_stack_0000000e == '\x04') {
        FUN_00010572(*(undefined2 *)(iVar1 + 0x74));
      }
      else {
        if (in_stack_0000000e == '\x01') {
          if ((*(byte *)(iVar1 + 0x7e) & 0x10) != 0) {
            uVar4 = 1;
            uVar3 = 1;
_L0:
            FUN_0001058e(iVar1,uVar3,uVar4);
          }
        }
        else {
          if (in_stack_0000000e == '\x02') {
            if (*(int *)(iVar1 + 0x48) != 0) {
              FUN_000105ac(iVar1 + 0x48);
              _L0();
            }
            if (*(int *)(iVar1 + 0x30) != 0) {
              FUN_000105c4(iVar1 + 0x30);
              _L0();
            }
            uVar4 = 0;
            uVar3 = 0;
            goto _L0;
          }
        }
      }
    }
    iVar2 = FUN_00010526(iVar1 + 0x28);
    if (((byte)(in_stack_0000000e - 1U) < 2) && (iVar2 == 0)) {
      if ((ushort)(*(short *)(iVar1 + 0x74) - 2U) < 2) {
        _L0();
      }
      else {
        _L0();
      }
    }
    iVar1 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void FUN_00010510(uint param_1,int param_2)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  byte in_stack_0000000e;
  
  do {
    FUN_00010510(param_1,param_2);
    FUN_0001051c(*(undefined2 *)(unaff_s0 + 0x74));
_L0:
    while( true ) {
      iVar1 = FUN_00010526(unaff_s5);
      if (((in_stack_0000000e - 1 & 0xff) <= unaff_s1) && (iVar1 == 0)) {
        if (unaff_s1 < (*(ushort *)(unaff_s0 + 0x74) - 2 & 0xffff)) {
          _L0();
        }
        else {
          _L0();
        }
      }
      unaff_s0 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
      if (unaff_s0 == 0) {
        return;
      }
      uVar4 = (uint)in_stack_0000000e;
      unaff_s5 = unaff_s0 + 0x28;
      if (uVar4 == unaff_s2) break;
      if (uVar4 == unaff_s3) {
        FUN_00010572(*(undefined2 *)(unaff_s0 + 0x74));
      }
      else {
        if (uVar4 != unaff_s1) goto _L0;
        if ((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) {
          uVar3 = 1;
          uVar2 = 1;
          goto _L0;
        }
      }
    }
    param_1 = (uint)*(ushort *)(unaff_s0 + 0x74);
    param_2 = unaff_s0;
  } while( true );
_L0:
  if (uVar4 == unaff_s4) {
    if (*(int *)(unaff_s0 + 0x48) != 0) {
      FUN_000105ac(unaff_s0 + 0x48);
      _L0();
    }
    if (*(int *)(unaff_s0 + 0x30) != 0) {
      FUN_000105c4(unaff_s0 + 0x30);
      _L0();
    }
    uVar3 = 0;
    uVar2 = 0;
_L0:
    FUN_0001058e(unaff_s0,uVar2,uVar3);
  }
  goto _L0;
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void FUN_0001051c(uint param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  byte in_stack_0000000e;
  
  do {
    FUN_0001051c(param_1);
_L0:
    while( true ) {
      iVar1 = FUN_00010526(unaff_s5);
      if (((in_stack_0000000e - 1 & 0xff) <= unaff_s1) && (iVar1 == 0)) {
        if (unaff_s1 < (*(ushort *)(unaff_s0 + 0x74) - 2 & 0xffff)) {
          _L0();
        }
        else {
          _L0();
        }
      }
      unaff_s0 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
      if (unaff_s0 == 0) {
        return;
      }
      uVar4 = (uint)in_stack_0000000e;
      unaff_s5 = unaff_s0 + 0x28;
      if (uVar4 == unaff_s2) break;
      if (uVar4 == unaff_s3) {
        FUN_00010572(*(undefined2 *)(unaff_s0 + 0x74));
      }
      else {
        if (uVar4 != unaff_s1) goto _L0;
        if ((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) {
          uVar3 = 1;
          uVar2 = 1;
          goto _L0;
        }
      }
    }
    FUN_00010510(*(undefined2 *)(unaff_s0 + 0x74),unaff_s0);
    param_1 = (uint)*(ushort *)(unaff_s0 + 0x74);
  } while( true );
_L0:
  if (uVar4 == unaff_s4) {
    if (*(int *)(unaff_s0 + 0x48) != 0) {
      FUN_000105ac(unaff_s0 + 0x48);
      _L0();
    }
    if (*(int *)(unaff_s0 + 0x30) != 0) {
      FUN_000105c4(unaff_s0 + 0x30);
      _L0();
    }
    uVar3 = 0;
    uVar2 = 0;
_L0:
    FUN_0001058e(unaff_s0,uVar2,uVar3);
  }
  goto _L0;
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void FUN_00010526(int param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  byte in_stack_0000000e;
  
code_r0x00010526:
  do {
    while( true ) {
      while( true ) {
        iVar1 = FUN_00010526(param_1);
        if (((in_stack_0000000e - 1 & 0xff) <= unaff_s1) && (iVar1 == 0)) {
          if (unaff_s1 < (*(ushort *)(unaff_s0 + 0x74) - 2 & 0xffff)) {
            _L0();
          }
          else {
            _L0();
          }
        }
        unaff_s0 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
        if (unaff_s0 == 0) {
          return;
        }
        uVar4 = (uint)in_stack_0000000e;
        param_1 = unaff_s0 + 0x28;
        if (uVar4 != unaff_s2) break;
        FUN_00010510(*(undefined2 *)(unaff_s0 + 0x74),unaff_s0);
        FUN_0001051c(*(undefined2 *)(unaff_s0 + 0x74));
      }
      if (uVar4 != unaff_s3) break;
      FUN_00010572(*(undefined2 *)(unaff_s0 + 0x74));
    }
    if (uVar4 != unaff_s1) goto _L0;
  } while ((*(byte *)(unaff_s0 + 0x7e) & 0x10) == 0);
  uVar3 = 1;
  uVar2 = 1;
  goto _L0;
_L0:
  if (uVar4 == unaff_s4) {
    if (*(int *)(unaff_s0 + 0x48) != 0) {
      FUN_000105ac(unaff_s0 + 0x48);
      _L0();
    }
    if (*(int *)(unaff_s0 + 0x30) != 0) {
      FUN_000105c4(unaff_s0 + 0x30);
      _L0();
    }
    uVar3 = 0;
    uVar2 = 0;
_L0:
    FUN_0001058e(unaff_s0,uVar2,uVar3);
  }
  goto code_r0x00010526;
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void _L0(void)

{
  uint unaff_s1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  byte in_stack_0000000e;
  
  do {
    _L0();
_L0:
    do {
      iVar2 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
      if (iVar2 == 0) {
        return;
      }
      uVar5 = (uint)in_stack_0000000e;
      if (uVar5 == unaff_s2) {
        FUN_00010510(*(undefined2 *)(iVar2 + 0x74),iVar2);
        FUN_0001051c(*(undefined2 *)(iVar2 + 0x74));
      }
      else {
        if (uVar5 == unaff_s3) {
          FUN_00010572(*(undefined2 *)(iVar2 + 0x74));
        }
        else {
          if (uVar5 == unaff_s1) {
            if ((*(byte *)(iVar2 + 0x7e) & 0x10) != 0) {
              uVar4 = 1;
              uVar3 = 1;
_L0:
              FUN_0001058e(iVar2,uVar3,uVar4);
            }
          }
          else {
            if (uVar5 == unaff_s4) {
              if (*(int *)(iVar2 + 0x48) != 0) {
                FUN_000105ac(iVar2 + 0x48);
                _L0();
              }
              if (*(int *)(iVar2 + 0x30) != 0) {
                FUN_000105c4(iVar2 + 0x30);
                _L0();
              }
              uVar4 = 0;
              uVar3 = 0;
              goto _L0;
            }
          }
        }
      }
      iVar1 = FUN_00010526(iVar2 + 0x28);
    } while ((unaff_s1 < (in_stack_0000000e - 1 & 0xff)) || (iVar1 != 0));
  } while (unaff_s1 < (*(ushort *)(iVar2 + 0x74) - 2 & 0xffff));
  _L0();
  goto _L0;
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void FUN_0001055e(undefined *param_1,undefined *param_2)

{
  uint unaff_s1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  byte in_stack_0000000e;
  
  do {
    iVar2 = FUN_0001055e(param_1,param_2);
    if (iVar2 == 0) {
      return;
    }
    uVar5 = (uint)in_stack_0000000e;
    if (uVar5 == unaff_s2) {
      FUN_00010510(*(undefined2 *)(iVar2 + 0x74),iVar2);
      FUN_0001051c(*(undefined2 *)(iVar2 + 0x74));
    }
    else {
      if (uVar5 == unaff_s3) {
        FUN_00010572(*(undefined2 *)(iVar2 + 0x74));
      }
      else {
        if (uVar5 == unaff_s1) {
          if ((*(byte *)(iVar2 + 0x7e) & 0x10) != 0) {
            uVar4 = 1;
            uVar3 = 1;
_L0:
            FUN_0001058e(iVar2,uVar3,uVar4);
          }
        }
        else {
          if (uVar5 == unaff_s4) {
            if (*(int *)(iVar2 + 0x48) != 0) {
              FUN_000105ac(iVar2 + 0x48);
              _L0();
            }
            if (*(int *)(iVar2 + 0x30) != 0) {
              FUN_000105c4(iVar2 + 0x30);
              _L0();
            }
            uVar4 = 0;
            uVar3 = 0;
            goto _L0;
          }
        }
      }
    }
    iVar1 = FUN_00010526(iVar2 + 0x28);
    if (((in_stack_0000000e - 1 & 0xff) <= unaff_s1) && (iVar1 == 0)) {
      if (unaff_s1 < (*(ushort *)(iVar2 + 0x74) - 2 & 0xffff)) {
        _L0();
      }
      else {
        _L0();
      }
    }
    param_2 = &stack0x0000000f;
    param_1 = &stack0x0000000e;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void FUN_00010572(uint param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  byte in_stack_0000000e;
  
  do {
    FUN_00010572(param_1);
_L0:
    while( true ) {
      while( true ) {
        iVar1 = FUN_00010526(unaff_s5);
        if (((in_stack_0000000e - 1 & 0xff) <= unaff_s1) && (iVar1 == 0)) {
          if (unaff_s1 < (*(ushort *)(unaff_s0 + 0x74) - 2 & 0xffff)) {
            _L0();
          }
          else {
            _L0();
          }
        }
        unaff_s0 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
        if (unaff_s0 == 0) {
          return;
        }
        uVar4 = (uint)in_stack_0000000e;
        unaff_s5 = unaff_s0 + 0x28;
        if (uVar4 != unaff_s2) break;
        FUN_00010510(*(undefined2 *)(unaff_s0 + 0x74),unaff_s0);
        FUN_0001051c(*(undefined2 *)(unaff_s0 + 0x74));
      }
      if (uVar4 == unaff_s3) break;
      if (uVar4 != unaff_s1) goto _L0;
      if ((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) {
        uVar3 = 1;
        uVar2 = 1;
        goto _L0;
      }
    }
    param_1 = (uint)*(ushort *)(unaff_s0 + 0x74);
  } while( true );
_L0:
  if (uVar4 == unaff_s4) {
    if (*(int *)(unaff_s0 + 0x48) != 0) {
      FUN_000105ac(unaff_s0 + 0x48);
      _L0();
    }
    if (*(int *)(unaff_s0 + 0x30) != 0) {
      FUN_000105c4(unaff_s0 + 0x30);
      _L0();
    }
    uVar3 = 0;
    uVar2 = 0;
_L0:
    FUN_0001058e(unaff_s0,uVar2,uVar3);
  }
  goto _L0;
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void FUN_0001058e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  uint uVar2;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  byte in_stack_0000000e;
  
code_r0x0001058e:
  do {
    FUN_0001058e(param_1,param_2,param_3);
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = FUN_00010526(unaff_s5);
            if (((in_stack_0000000e - 1 & 0xff) <= unaff_s1) && (iVar1 == 0)) {
              if (unaff_s1 < (*(ushort *)(unaff_s0 + 0x74) - 2 & 0xffff)) {
                _L0();
              }
              else {
                _L0();
              }
            }
            unaff_s0 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
            if (unaff_s0 == 0) {
              return;
            }
            uVar2 = (uint)in_stack_0000000e;
            unaff_s5 = unaff_s0 + 0x28;
            if (uVar2 != unaff_s2) break;
            FUN_00010510(*(undefined2 *)(unaff_s0 + 0x74),unaff_s0);
            FUN_0001051c(*(undefined2 *)(unaff_s0 + 0x74));
          }
          if (uVar2 != unaff_s3) break;
          FUN_00010572(*(undefined2 *)(unaff_s0 + 0x74));
        }
        param_1 = unaff_s0;
        if (uVar2 != unaff_s1) break;
        if ((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) {
          param_3 = 1;
          param_2 = 1;
          goto code_r0x0001058e;
        }
      }
    } while (uVar2 != unaff_s4);
    if (*(int *)(unaff_s0 + 0x48) != 0) {
      FUN_000105ac(unaff_s0 + 0x48);
      _L0();
    }
    if (*(int *)(unaff_s0 + 0x30) != 0) {
      FUN_000105c4(unaff_s0 + 0x30);
      _L0();
    }
    param_3 = 0;
    param_2 = 0;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void FUN_000105ac(int param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  byte in_stack_0000000e;
  
code_r0x000105ac:
  FUN_000105ac(param_1);
  _L0();
_L0:
  if (*(int *)(unaff_s0 + 0x30) != 0) {
    FUN_000105c4(unaff_s0 + 0x30);
    _L0();
  }
  uVar3 = 0;
  uVar2 = 0;
  do {
    FUN_0001058e(unaff_s0,uVar2,uVar3);
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = FUN_00010526(unaff_s5);
            if (((in_stack_0000000e - 1 & 0xff) <= unaff_s1) && (iVar1 == 0)) {
              if (unaff_s1 < (*(ushort *)(unaff_s0 + 0x74) - 2 & 0xffff)) {
                _L0();
              }
              else {
                _L0();
              }
            }
            unaff_s0 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
            if (unaff_s0 == 0) {
              return;
            }
            uVar4 = (uint)in_stack_0000000e;
            unaff_s5 = unaff_s0 + 0x28;
            if (uVar4 != unaff_s2) break;
            FUN_00010510(*(undefined2 *)(unaff_s0 + 0x74),unaff_s0);
            FUN_0001051c(*(undefined2 *)(unaff_s0 + 0x74));
          }
          if (uVar4 != unaff_s3) break;
          FUN_00010572(*(undefined2 *)(unaff_s0 + 0x74));
        }
        if (uVar4 == unaff_s1) break;
        if (uVar4 == unaff_s4) {
          if (*(int *)(unaff_s0 + 0x48) == 0) goto _L0;
          param_1 = unaff_s0 + 0x48;
          goto code_r0x000105ac;
        }
      }
    } while ((*(byte *)(unaff_s0 + 0x7e) & 0x10) == 0);
    uVar3 = 1;
    uVar2 = 1;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  byte in_stack_0000000e;
  
code_r0x000105b4:
  _L0();
_L0:
  if (*(int *)(unaff_s0 + 0x30) != 0) {
    FUN_000105c4(unaff_s0 + 0x30);
    _L0();
  }
  uVar3 = 0;
  uVar2 = 0;
  do {
    FUN_0001058e(unaff_s0,uVar2,uVar3);
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = FUN_00010526(unaff_s5);
            if (((in_stack_0000000e - 1 & 0xff) <= unaff_s1) && (iVar1 == 0)) {
              if (unaff_s1 < (*(ushort *)(unaff_s0 + 0x74) - 2 & 0xffff)) {
                _L0();
              }
              else {
                _L0();
              }
            }
            unaff_s0 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
            if (unaff_s0 == 0) {
              return;
            }
            uVar4 = (uint)in_stack_0000000e;
            unaff_s5 = unaff_s0 + 0x28;
            if (uVar4 != unaff_s2) break;
            FUN_00010510(*(undefined2 *)(unaff_s0 + 0x74),unaff_s0);
            FUN_0001051c(*(undefined2 *)(unaff_s0 + 0x74));
          }
          if (uVar4 != unaff_s3) break;
          FUN_00010572(*(undefined2 *)(unaff_s0 + 0x74));
        }
        if (uVar4 == unaff_s1) break;
        if (uVar4 == unaff_s4) {
          if (*(int *)(unaff_s0 + 0x48) == 0) goto _L0;
          FUN_000105ac(unaff_s0 + 0x48);
          goto code_r0x000105b4;
        }
      }
    } while ((*(byte *)(unaff_s0 + 0x7e) & 0x10) == 0);
    uVar3 = 1;
    uVar2 = 1;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void FUN_000105c4(int param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  byte in_stack_0000000e;
  
code_r0x000105c4:
  FUN_000105c4(param_1);
  _L0();
_L0:
  uVar3 = 0;
  uVar2 = 0;
  do {
    FUN_0001058e(unaff_s0,uVar2,uVar3);
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = FUN_00010526(unaff_s5);
            if (((in_stack_0000000e - 1 & 0xff) <= unaff_s1) && (iVar1 == 0)) {
              if (unaff_s1 < (*(ushort *)(unaff_s0 + 0x74) - 2 & 0xffff)) {
                _L0();
              }
              else {
                _L0();
              }
            }
            unaff_s0 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
            if (unaff_s0 == 0) {
              return;
            }
            uVar4 = (uint)in_stack_0000000e;
            unaff_s5 = unaff_s0 + 0x28;
            if (uVar4 != unaff_s2) break;
            FUN_00010510(*(undefined2 *)(unaff_s0 + 0x74),unaff_s0);
            FUN_0001051c(*(undefined2 *)(unaff_s0 + 0x74));
          }
          if (uVar4 != unaff_s3) break;
          FUN_00010572(*(undefined2 *)(unaff_s0 + 0x74));
        }
        if (uVar4 == unaff_s1) break;
        if (uVar4 == unaff_s4) {
          if (*(int *)(unaff_s0 + 0x48) != 0) {
            FUN_000105ac(unaff_s0 + 0x48);
            _L0();
          }
          if (*(int *)(unaff_s0 + 0x30) == 0) goto _L0;
          param_1 = unaff_s0 + 0x30;
          goto code_r0x000105c4;
        }
      }
    } while ((*(byte *)(unaff_s0 + 0x7e) & 0x10) == 0);
    uVar3 = 1;
    uVar2 = 1;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  byte in_stack_0000000e;
  
code_r0x000105cc:
  _L0();
_L0:
  uVar3 = 0;
  uVar2 = 0;
  do {
    FUN_0001058e(unaff_s0,uVar2,uVar3);
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = FUN_00010526(unaff_s5);
            if (((in_stack_0000000e - 1 & 0xff) <= unaff_s1) && (iVar1 == 0)) {
              if (unaff_s1 < (*(ushort *)(unaff_s0 + 0x74) - 2 & 0xffff)) {
                _L0();
              }
              else {
                _L0();
              }
            }
            unaff_s0 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
            if (unaff_s0 == 0) {
              return;
            }
            uVar4 = (uint)in_stack_0000000e;
            unaff_s5 = unaff_s0 + 0x28;
            if (uVar4 != unaff_s2) break;
            FUN_00010510(*(undefined2 *)(unaff_s0 + 0x74),unaff_s0);
            FUN_0001051c(*(undefined2 *)(unaff_s0 + 0x74));
          }
          if (uVar4 != unaff_s3) break;
          FUN_00010572(*(undefined2 *)(unaff_s0 + 0x74));
        }
        if (uVar4 == unaff_s1) break;
        if (uVar4 == unaff_s4) {
          if (*(int *)(unaff_s0 + 0x48) != 0) {
            FUN_000105ac(unaff_s0 + 0x48);
            _L0();
          }
          if (*(int *)(unaff_s0 + 0x30) == 0) goto _L0;
          FUN_000105c4(unaff_s0 + 0x30);
          goto code_r0x000105cc;
        }
      }
    } while ((*(byte *)(unaff_s0 + 0x7e) & 0x10) == 0);
    uVar3 = 1;
    uVar2 = 1;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001059c)

void _L0(void)

{
  uint unaff_s1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  byte in_stack_0000000e;
  
  do {
    _L0();
_L0:
    do {
      iVar2 = FUN_0001055e(&stack0x0000000e,&stack0x0000000f);
      if (iVar2 == 0) {
        return;
      }
      uVar5 = (uint)in_stack_0000000e;
      if (uVar5 == unaff_s2) {
        FUN_00010510(*(undefined2 *)(iVar2 + 0x74),iVar2);
        FUN_0001051c(*(undefined2 *)(iVar2 + 0x74));
      }
      else {
        if (uVar5 == unaff_s3) {
          FUN_00010572(*(undefined2 *)(iVar2 + 0x74));
        }
        else {
          if (uVar5 == unaff_s1) {
            if ((*(byte *)(iVar2 + 0x7e) & 0x10) != 0) {
              uVar4 = 1;
              uVar3 = 1;
_L0:
              FUN_0001058e(iVar2,uVar3,uVar4);
            }
          }
          else {
            if (uVar5 == unaff_s4) {
              if (*(int *)(iVar2 + 0x48) != 0) {
                FUN_000105ac(iVar2 + 0x48);
                _L0();
              }
              if (*(int *)(iVar2 + 0x30) != 0) {
                FUN_000105c4(iVar2 + 0x30);
                _L0();
              }
              uVar4 = 0;
              uVar3 = 0;
              goto _L0;
            }
          }
        }
      }
      iVar1 = FUN_00010526(iVar2 + 0x28);
    } while ((unaff_s1 < (in_stack_0000000e - 1 & 0xff)) || (iVar1 != 0));
  } while ((*(ushort *)(iVar2 + 0x74) - 2 & 0xffff) <= unaff_s1);
  _L0();
  goto _L0;
}



void lld_evt_channel_next(uint16_t conhdl,int16_t nb_inc)

{
  undefined2 in_register_0000202a;
  ushort *puVar1;
  undefined2 in_register_0000202e;
  int iVar2;
  
  puVar1 = (ushort *)(CONCAT22(in_register_0000202a,conhdl) * 0x5c + 0x2800809e);
  iVar2 = (int)(((int)(uint)*puVar1 >> 8 & 0x1fU) * CONCAT22(in_register_0000202e,nb_inc) +
               (*puVar1 & 0x3f)) % 0x25;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x25;
  }
  *puVar1 = (ushort)iVar2 | *puVar1 & 0xffc0;
  return;
}



// WARNING: Removing unreachable block (ram,0x00010688)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void lld_evt_init(_Bool reset)

{
  undefined3 in_register_00002029;
  int iVar1;
  
  _DAT_00000028 = 0;
  DAT_0000002a = 0;
  if (CONCAT31(in_register_00002029,reset) != 0) {
    _LVL166(0x10);
    FUN_0001067c(0x18);
    do {
      if ((iRam00000000 == 0) && (_DAT_00000008 == 0)) goto _L0;
      iVar1 = FUN_000106a4(0);
      if (iVar1 == 0) {
        iVar1 = FUN_000106b4(8);
        if (iVar1 == 0) goto _L0;
        iVar1 = *(int *)(iVar1 + 4);
        _L0();
        if (iVar1 == 0) goto _L0;
      }
      _LVL189(iVar1 + 0x28);
      if (*(int *)(iVar1 + 0x50) != 0) {
        _L0();
        FUN_00010768(*(undefined4 *)(iVar1 + 0x50));
      }
      if (*(int *)(iVar1 + 4) != 0) {
        _L0();
      }
      FUN_0001077e(iVar1);
    } while( true );
  }
_L0:
  FUN_000106dc(0);
  FUN_000106e8(0x10);
  FUN_000106f4(0x18);
  FUN_00010704(0x20);
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
_L0:
  while (_DAT_00000020 != 0) {
    FUN_0001078c(0x20);
    _L0();
  }
  FUN_000106d0(0x20);
  goto _L0;
}



// WARNING: Removing unreachable block (ram,0x00010688)

void _LVL166(void)

{
  int *unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  _LVL166();
  FUN_0001067c(unaff_s2 + 0x18);
  do {
    if ((*unaff_s1 == 0) && (unaff_s1[2] == 0)) goto _L0;
    iVar1 = FUN_000106a4();
    if (iVar1 == 0) {
      iVar1 = FUN_000106b4(8);
      if (iVar1 == 0) {
_L0:
        while (unaff_s1[8] != 0) {
          FUN_0001078c(0x20);
          _L0();
        }
        FUN_000106d0(0x20);
        FUN_000106dc();
        FUN_000106e8(unaff_s3 + 0x10);
        FUN_000106f4(unaff_s2 + 0x18);
        FUN_00010704(0x20);
        FUN_00010716(8,0);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar1 = *(int *)(iVar1 + 4);
      _L0();
      if (iVar1 == 0) goto _L0;
    }
    _LVL189(iVar1 + 0x28);
    if (*(int *)(iVar1 + 0x50) != 0) {
      _L0();
      FUN_00010768(*(undefined4 *)(iVar1 + 0x50));
    }
    if (*(int *)(iVar1 + 4) != 0) {
      _L0();
    }
    FUN_0001077e(iVar1);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00010688)

void FUN_0001067c(void)

{
  int *unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_0001067c();
  do {
    if ((*unaff_s1 == 0) && (unaff_s1[2] == 0)) goto _L0;
    iVar1 = FUN_000106a4();
    if (iVar1 == 0) {
      iVar1 = FUN_000106b4(8);
      if (iVar1 == 0) {
_L0:
        while (unaff_s1[8] != 0) {
          FUN_0001078c(0x20);
          _L0();
        }
        FUN_000106d0(0x20);
        FUN_000106dc();
        FUN_000106e8(unaff_s3 + 0x10);
        FUN_000106f4(unaff_s2 + 0x18);
        FUN_00010704(0x20);
        FUN_00010716(8,0);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar1 = *(int *)(iVar1 + 4);
      _L0();
      if (iVar1 == 0) goto _L0;
    }
    _LVL189(iVar1 + 0x28);
    if (*(int *)(iVar1 + 0x50) != 0) {
      _L0();
      FUN_00010768(*(undefined4 *)(iVar1 + 0x50));
    }
    if (*(int *)(iVar1 + 4) != 0) {
      _L0();
    }
    FUN_0001077e(iVar1);
  } while( true );
}



void FUN_000106a4(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s6;
  
  do {
    iVar1 = FUN_000106a4();
    if (iVar1 == 0) {
      iVar1 = FUN_000106b4(unaff_s6 + 8);
      if (iVar1 == 0) break;
      iVar1 = *(int *)(iVar1 + 4);
      _L0();
      if (iVar1 == 0) break;
    }
    _LVL189(iVar1 + 0x28);
    if (*(int *)(iVar1 + 0x50) != 0) {
      _L0();
      FUN_00010768(*(undefined4 *)(iVar1 + 0x50));
    }
    if (*(int *)(iVar1 + 4) != 0) {
      _L0();
    }
    FUN_0001077e(iVar1);
  } while ((*unaff_s4 != 0) || (unaff_s4[2] != 0));
  while (unaff_s4[8] != 0) {
    FUN_0001078c(0x20);
    _L0();
  }
  FUN_000106d0(0x20);
  FUN_000106dc();
  FUN_000106e8(unaff_s3 + 0x10);
  FUN_000106f4(unaff_s2 + 0x18);
  FUN_00010704(0x20);
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106b4(int param_1)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s6;
  
  while (iVar1 = FUN_000106b4(param_1), iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    _L0();
    if (iVar1 == 0) break;
    do {
      _LVL189(iVar1 + 0x28);
      if (*(int *)(iVar1 + 0x50) != 0) {
        _L0();
        FUN_00010768(*(undefined4 *)(iVar1 + 0x50));
      }
      if (*(int *)(iVar1 + 4) != 0) {
        _L0();
      }
      FUN_0001077e(iVar1);
      if ((*unaff_s4 == 0) && (unaff_s4[2] == 0)) goto _L0;
      iVar1 = FUN_000106a4();
    } while (iVar1 != 0);
    param_1 = unaff_s6 + 8;
  }
_L0:
  while (unaff_s4[8] != 0) {
    FUN_0001078c(0x20);
    _L0();
  }
  FUN_000106d0(0x20);
  FUN_000106dc();
  FUN_000106e8(unaff_s3 + 0x10);
  FUN_000106f4(unaff_s2 + 0x18);
  FUN_00010704(0x20);
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106d0(void)

{
  int unaff_s2;
  int unaff_s3;
  
  FUN_000106d0();
  FUN_000106dc();
  FUN_000106e8(unaff_s3 + 0x10);
  FUN_000106f4(unaff_s2 + 0x18);
  FUN_00010704(0x20);
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106dc(void)

{
  int unaff_s2;
  int unaff_s3;
  
  FUN_000106dc();
  FUN_000106e8(unaff_s3 + 0x10);
  FUN_000106f4(unaff_s2 + 0x18);
  FUN_00010704(0x20);
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106e8(void)

{
  int unaff_s2;
  
  FUN_000106e8();
  FUN_000106f4(unaff_s2 + 0x18);
  FUN_00010704(0x20);
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106f4(void)

{
  FUN_000106f4();
  FUN_00010704(0x20);
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010704(void)

{
  FUN_00010704();
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010716(void)

{
  FUN_00010716();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s6;
  
  while (_L0(), unaff_s0 != 0) {
    do {
      _LVL189(unaff_s0 + 0x28);
      if (*(int *)(unaff_s0 + 0x50) != 0) {
        _L0();
        FUN_00010768(*(undefined4 *)(unaff_s0 + 0x50));
      }
      if (*(int *)(unaff_s0 + 4) != 0) {
        _L0();
      }
      FUN_0001077e(unaff_s0);
      if ((*unaff_s4 == 0) && (unaff_s4[2] == 0)) goto _L0;
      unaff_s0 = FUN_000106a4();
    } while (unaff_s0 != 0);
    iVar1 = FUN_000106b4(unaff_s6 + 8);
    if (iVar1 == 0) break;
    unaff_s0 = *(int *)(iVar1 + 4);
  }
_L0:
  while (unaff_s4[8] != 0) {
    FUN_0001078c(0x20);
    _L0();
  }
  FUN_000106d0(0x20);
  FUN_000106dc();
  FUN_000106e8(unaff_s3 + 0x10);
  FUN_000106f4(unaff_s2 + 0x18);
  FUN_00010704(0x20);
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL189(int param_1)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s6;
  
  do {
    _LVL189(param_1);
    if (*(int *)(unaff_s0 + 0x50) != 0) {
      _L0();
      FUN_00010768(*(undefined4 *)(unaff_s0 + 0x50));
    }
    if (*(int *)(unaff_s0 + 4) != 0) {
      _L0();
    }
    FUN_0001077e(unaff_s0);
    if ((*unaff_s4 == 0) && (unaff_s4[2] == 0)) goto _L0;
    unaff_s0 = FUN_000106a4();
    if (unaff_s0 == 0) {
      iVar1 = FUN_000106b4(unaff_s6 + 8);
      if (iVar1 == 0) {
_L0:
        while (unaff_s4[8] != 0) {
          FUN_0001078c(0x20);
          _L0();
        }
        FUN_000106d0(0x20);
        FUN_000106dc();
        FUN_000106e8(unaff_s3 + 0x10);
        FUN_000106f4(unaff_s2 + 0x18);
        FUN_00010704(0x20);
        FUN_00010716(8,0);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      unaff_s0 = *(int *)(iVar1 + 4);
      _L0();
      if (unaff_s0 == 0) goto _L0;
    }
    param_1 = unaff_s0 + 0x28;
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s6;
  
  do {
    _L0();
    FUN_00010768(*(undefined4 *)(unaff_s0 + 0x50));
    do {
      if (*(int *)(unaff_s0 + 4) != 0) {
        _L0();
      }
      FUN_0001077e(unaff_s0);
      if ((*unaff_s4 == 0) && (unaff_s4[2] == 0)) goto _L0;
      unaff_s0 = FUN_000106a4();
      if (unaff_s0 == 0) {
        iVar1 = FUN_000106b4(unaff_s6 + 8);
        if (iVar1 == 0) {
_L0:
          while (unaff_s4[8] != 0) {
            FUN_0001078c(0x20);
            _L0();
          }
          FUN_000106d0(0x20);
          FUN_000106dc();
          FUN_000106e8(unaff_s3 + 0x10);
          FUN_000106f4(unaff_s2 + 0x18);
          FUN_00010704(0x20);
          FUN_00010716(8,0);
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        unaff_s0 = *(int *)(iVar1 + 4);
        _L0();
        if (unaff_s0 == 0) goto _L0;
      }
      _LVL189(unaff_s0 + 0x28);
    } while (*(int *)(unaff_s0 + 0x50) == 0);
  } while( true );
}



void FUN_00010768(undefined4 param_1)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s6;
  
  do {
    FUN_00010768(param_1);
    do {
      if (*(int *)(unaff_s0 + 4) != 0) {
        _L0();
      }
      FUN_0001077e(unaff_s0);
      if ((*unaff_s4 == 0) && (unaff_s4[2] == 0)) goto _L0;
      unaff_s0 = FUN_000106a4();
      if (unaff_s0 == 0) {
        iVar1 = FUN_000106b4(unaff_s6 + 8);
        if (iVar1 == 0) {
_L0:
          while (unaff_s4[8] != 0) {
            FUN_0001078c(0x20);
            _L0();
          }
          FUN_000106d0(0x20);
          FUN_000106dc();
          FUN_000106e8(unaff_s3 + 0x10);
          FUN_000106f4(unaff_s2 + 0x18);
          FUN_00010704(0x20);
          FUN_00010716(8,0);
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        unaff_s0 = *(int *)(iVar1 + 4);
        _L0();
        if (unaff_s0 == 0) goto _L0;
      }
      _LVL189(unaff_s0 + 0x28);
    } while (*(int *)(unaff_s0 + 0x50) == 0);
    _L0();
    param_1 = *(undefined4 *)(unaff_s0 + 0x50);
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s6;
  
  do {
    _L0();
    do {
      FUN_0001077e(unaff_s0);
      if ((*unaff_s4 == 0) && (unaff_s4[2] == 0)) goto _L0;
      unaff_s0 = FUN_000106a4();
      if (unaff_s0 == 0) {
        iVar1 = FUN_000106b4(unaff_s6 + 8);
        if (iVar1 == 0) {
_L0:
          while (unaff_s4[8] != 0) {
            FUN_0001078c(0x20);
            _L0();
          }
          FUN_000106d0(0x20);
          FUN_000106dc();
          FUN_000106e8(unaff_s3 + 0x10);
          FUN_000106f4(unaff_s2 + 0x18);
          FUN_00010704(0x20);
          FUN_00010716(8,0);
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        unaff_s0 = *(int *)(iVar1 + 4);
        _L0();
        if (unaff_s0 == 0) goto _L0;
      }
      _LVL189(unaff_s0 + 0x28);
      if (*(int *)(unaff_s0 + 0x50) != 0) {
        _L0();
        FUN_00010768(*(undefined4 *)(unaff_s0 + 0x50));
      }
    } while (*(int *)(unaff_s0 + 4) == 0);
  } while( true );
}



void FUN_0001077e(int param_1)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s6;
  
  do {
    FUN_0001077e(param_1);
    if ((*unaff_s4 == 0) && (unaff_s4[2] == 0)) goto _L0;
    param_1 = FUN_000106a4();
    if (param_1 == 0) {
      iVar1 = FUN_000106b4(unaff_s6 + 8);
      if (iVar1 == 0) {
_L0:
        while (unaff_s4[8] != 0) {
          FUN_0001078c(0x20);
          _L0();
        }
        FUN_000106d0(0x20);
        FUN_000106dc();
        FUN_000106e8(unaff_s3 + 0x10);
        FUN_000106f4(unaff_s2 + 0x18);
        FUN_00010704(0x20);
        FUN_00010716(8,0);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      param_1 = *(int *)(iVar1 + 4);
      _L0();
      if (param_1 == 0) goto _L0;
    }
    _LVL189(param_1 + 0x28);
    if (*(int *)(param_1 + 0x50) != 0) {
      _L0();
      FUN_00010768(*(undefined4 *)(param_1 + 0x50));
    }
    if (*(int *)(param_1 + 4) != 0) {
      _L0();
    }
  } while( true );
}



void FUN_0001078c(int param_1)

{
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  while( true ) {
    FUN_0001078c(param_1);
    _L0();
    if (*(int *)(unaff_s4 + 0x20) == 0) break;
    param_1 = unaff_s0 + 0x20;
  }
  FUN_000106d0(0x20);
  FUN_000106dc();
  FUN_000106e8(unaff_s3 + 0x10);
  FUN_000106f4(unaff_s2 + 0x18);
  FUN_00010704(0x20);
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  while (_L0(), *(int *)(unaff_s4 + 0x20) != 0) {
    FUN_0001078c(unaff_s0 + 0x20);
  }
  FUN_000106d0(0x20);
  FUN_000106dc();
  FUN_000106e8(unaff_s3 + 0x10);
  FUN_000106f4(unaff_s2 + 0x18);
  FUN_00010704(0x20);
  FUN_00010716(8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000107bc)

void lld_evt_init_evt(lld_evt_tag *evt)

{
  undefined4 in_mstatus;
  
  evt->tx_pwr = DAT_0000002c;
  evt->rx_cnt = '\0';
  evt->delete_ongoing = false;
  _LVL201(&evt->tx_acl_rdy,in_mstatus);
  FUN_000107d2(&evt->tx_acl_tofree);
  FUN_000107de(&evt->tx_llcp_pdu_rdy);
  FUN_000107ea(&evt->tx_prog);
  return;
}



void _LVL201(void)

{
  int unaff_s0;
  
  _LVL201();
  FUN_000107d2(unaff_s0 + 0x10);
  FUN_000107de(unaff_s0 + 0x18);
  FUN_000107ea(unaff_s0 + 0x20);
  return;
}



void FUN_000107d2(void)

{
  int unaff_s0;
  
  FUN_000107d2();
  FUN_000107de(unaff_s0 + 0x18);
  FUN_000107ea(unaff_s0 + 0x20);
  return;
}



void FUN_000107de(void)

{
  int unaff_s0;
  
  FUN_000107de();
  FUN_000107ea(unaff_s0 + 0x20);
  return;
}



void FUN_000107ea(void)

{
  FUN_000107ea();
  return;
}



// WARNING: Removing unreachable block (ram,0x0001081a)

_Bool lld_evt_elt_delete(ea_elt_tag *elt,_Bool flush_data,_Bool send_indication)

{
  ea_elt_tag *peVar1;
  int iVar2;
  int iVar3;
  undefined3 in_register_0000202d;
  uint uVar4;
  undefined3 in_register_00002031;
  undefined4 in_mstatus;
  
  iVar2 = _LVL212(0,elt,in_mstatus);
  if (iVar2 == 0) {
    do {
      iVar3 = FUN_00010872(elt);
      if (elt == (ea_elt_tag *)0x0) {
        if (iVar3 == 0) goto _L0;
        peVar1 = *(ea_elt_tag **)(iVar3 + 4);
      }
      else {
        peVar1 = elt;
        if (iVar2 != 0) goto _L0;
      }
      if (CONCAT31(in_register_00002031,send_indication) != 0) {
        if (*(ushort *)&peVar1[2].ea_cb_start < 2) {
          uVar4 = (*(ushort *)&peVar1[2].ea_cb_start & 0xff) << 8 | 1;
        }
        else {
          uVar4 = 0;
        }
        _LVL224(0x200,uVar4,2);
      }
      FUN_000108a8(peVar1);
      FUN_000108b8(0,peVar1,0);
      if (CONCAT31(in_register_0000202d,flush_data) != 0) {
        FUN_000108c8(&peVar1->env);
      }
      if (peVar1[1].ea_cb_cancel != (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *)0x0) {
        _L0();
        FUN_000108de(peVar1[1].ea_cb_cancel);
      }
      if (peVar1->linked_element != (ea_elt_tag *)0x0) {
        _L0();
      }
      FUN_000108f4(peVar1);
      if (iVar3 == 0) goto _L0;
      FUN_00010902(iVar3);
      iVar2 = 1;
    } while( true );
  }
  iVar2 = 0;
  *(byte *)((int)&elt[2].ea_cb_cancel + 2) = *(byte *)((int)&elt[2].ea_cb_cancel + 2) | 0x10;
  _L0(0x20);
_L0:
  return SUB41(iVar2,0);
_L0:
  iVar2 = 1;
  goto _L0;
}



int _LVL212(void)

{
  int iVar1;
  int unaff_s1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_s5;
  int unaff_s6;
  
  iVar2 = _LVL212();
  if (iVar2 != 0) {
    *(byte *)(unaff_s1 + 0x7e) = *(byte *)(unaff_s1 + 0x7e) | 0x10;
    _L0(0x20);
    return 0;
  }
  while( true ) {
    iVar3 = FUN_00010872();
    if (unaff_s1 == 0) {
      if (iVar3 == 0) {
        return iVar2;
      }
      iVar1 = *(int *)(iVar3 + 4);
    }
    else {
      iVar1 = unaff_s1;
      if (iVar2 != 0) {
        return 1;
      }
    }
    if (unaff_s6 != 0) {
      if (*(ushort *)(iVar1 + 0x74) < 2) {
        uVar4 = (*(ushort *)(iVar1 + 0x74) & 0xff) << 8 | 1;
      }
      else {
        uVar4 = 0;
      }
      _LVL224(0x200,uVar4,2);
    }
    FUN_000108a8(iVar1);
    FUN_000108b8(iVar1,0);
    if (unaff_s5 != 0) {
      FUN_000108c8(iVar1 + 0x28);
    }
    if (*(int *)(iVar1 + 0x50) != 0) {
      _L0();
      FUN_000108de(*(undefined4 *)(iVar1 + 0x50));
    }
    if (*(int *)(iVar1 + 4) != 0) {
      _L0();
    }
    FUN_000108f4(iVar1);
    if (iVar3 == 0) break;
    FUN_00010902(iVar3);
    iVar2 = 1;
  }
  return 1;
}



void _L0(void)

{
  _L0();
  return;
}



int FUN_00010872(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  while( true ) {
    iVar2 = FUN_00010872();
    if (unaff_s1 == 0) {
      if (iVar2 == 0) {
        return unaff_s0;
      }
      iVar1 = *(int *)(iVar2 + 4);
    }
    else {
      iVar1 = unaff_s1;
      if (unaff_s0 != 0) {
        return 1;
      }
    }
    if (unaff_s6 != 0) {
      if (unaff_s7 < *(ushort *)(iVar1 + 0x74)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (*(ushort *)(iVar1 + 0x74) & 0xff) << 8 | 1;
      }
      _LVL224(0x200,uVar3,2);
    }
    FUN_000108a8(iVar1);
    FUN_000108b8(iVar1,0);
    if (unaff_s5 != 0) {
      FUN_000108c8(iVar1 + 0x28);
    }
    if (*(int *)(iVar1 + 0x50) != 0) {
      _L0();
      FUN_000108de(*(undefined4 *)(iVar1 + 0x50));
    }
    if (*(int *)(iVar1 + 4) != 0) {
      _L0();
    }
    FUN_000108f4(iVar1);
    if (iVar2 == 0) break;
    FUN_00010902(iVar2);
    unaff_s0 = 1;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00010914)

undefined4 _LVL224(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  do {
    _LVL224(param_1,param_2,param_3);
    do {
      FUN_000108a8(unaff_s0);
      FUN_000108b8(unaff_s0,0);
      if (unaff_s5 != 0) {
        FUN_000108c8(unaff_s0 + 0x28);
      }
      if (*(int *)(unaff_s0 + 0x50) != 0) {
        _L0();
        FUN_000108de(*(undefined4 *)(unaff_s0 + 0x50));
      }
      if (*(int *)(unaff_s0 + 4) != 0) {
        _L0();
      }
      FUN_000108f4(unaff_s0);
      if (unaff_s2 == 0) {
        return 1;
      }
      FUN_00010902(unaff_s2);
      unaff_s2 = FUN_00010872();
      if (unaff_s1 != 0) {
        return 1;
      }
      if (unaff_s2 == 0) {
        return 1;
      }
      unaff_s0 = *(int *)(unaff_s2 + 4);
    } while (unaff_s6 == 0);
    if (unaff_s7 < *(ushort *)(unaff_s0 + 0x74)) {
      param_2 = 0;
    }
    else {
      param_2 = (*(ushort *)(unaff_s0 + 0x74) & 0xff) << 8 | 1;
    }
    param_3 = 2;
    param_1 = 0x200;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00010914)

undefined4 FUN_000108a8(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  while( true ) {
    FUN_000108a8(param_1);
    FUN_000108b8(unaff_s0,0);
    if (unaff_s5 != 0) {
      FUN_000108c8(unaff_s0 + 0x28);
    }
    if (*(int *)(unaff_s0 + 0x50) != 0) {
      _L0();
      FUN_000108de(*(undefined4 *)(unaff_s0 + 0x50));
    }
    if (*(int *)(unaff_s0 + 4) != 0) {
      _L0();
    }
    FUN_000108f4(unaff_s0);
    if (unaff_s2 == 0) {
      return 1;
    }
    FUN_00010902(unaff_s2);
    unaff_s2 = FUN_00010872();
    if (unaff_s1 != 0) {
      return 1;
    }
    if (unaff_s2 == 0) break;
    unaff_s0 = *(int *)(unaff_s2 + 4);
    param_1 = unaff_s0;
    if (unaff_s6 != 0) {
      if (unaff_s7 < *(ushort *)(unaff_s0 + 0x74)) {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(ushort *)(unaff_s0 + 0x74) & 0xff) << 8 | 1;
      }
      _LVL224(0x200,uVar1,2);
    }
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00010914)

undefined4 FUN_000108b8(int param_1,undefined4 param_2)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  while( true ) {
    FUN_000108b8(param_1,param_2);
    if (unaff_s5 != 0) {
      FUN_000108c8(unaff_s0 + 0x28);
    }
    if (*(int *)(unaff_s0 + 0x50) != 0) {
      _L0();
      FUN_000108de(*(undefined4 *)(unaff_s0 + 0x50));
    }
    if (*(int *)(unaff_s0 + 4) != 0) {
      _L0();
    }
    FUN_000108f4(unaff_s0);
    if (unaff_s2 == 0) {
      return 1;
    }
    FUN_00010902(unaff_s2);
    unaff_s2 = FUN_00010872();
    if (unaff_s1 != 0) {
      return 1;
    }
    if (unaff_s2 == 0) break;
    unaff_s0 = *(int *)(unaff_s2 + 4);
    if (unaff_s6 != 0) {
      if (unaff_s7 < *(ushort *)(unaff_s0 + 0x74)) {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(ushort *)(unaff_s0 + 0x74) & 0xff) << 8 | 1;
      }
      _LVL224(0x200,uVar1,2);
    }
    FUN_000108a8(unaff_s0);
    param_2 = 0;
    param_1 = unaff_s0;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00010914)

undefined4 FUN_000108c8(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  do {
    FUN_000108c8(param_1);
    do {
      if (*(int *)(unaff_s0 + 0x50) != 0) {
        _L0();
        FUN_000108de(*(undefined4 *)(unaff_s0 + 0x50));
      }
      if (*(int *)(unaff_s0 + 4) != 0) {
        _L0();
      }
      FUN_000108f4(unaff_s0);
      if (unaff_s2 == 0) {
        return 1;
      }
      FUN_00010902(unaff_s2);
      unaff_s2 = FUN_00010872();
      if (unaff_s1 != 0) {
        return 1;
      }
      if (unaff_s2 == 0) {
        return 1;
      }
      unaff_s0 = *(int *)(unaff_s2 + 4);
      if (unaff_s6 != 0) {
        if (unaff_s7 < *(ushort *)(unaff_s0 + 0x74)) {
          uVar1 = 0;
        }
        else {
          uVar1 = (*(ushort *)(unaff_s0 + 0x74) & 0xff) << 8 | 1;
        }
        _LVL224(0x200,uVar1,2);
      }
      FUN_000108a8(unaff_s0);
      FUN_000108b8(unaff_s0,0);
    } while (unaff_s5 == 0);
    param_1 = unaff_s0 + 0x28;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00010914)

undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  do {
    _L0();
    FUN_000108de(*(undefined4 *)(unaff_s0 + 0x50));
    do {
      if (*(int *)(unaff_s0 + 4) != 0) {
        _L0();
      }
      FUN_000108f4(unaff_s0);
      if (unaff_s2 == 0) {
        return 1;
      }
      FUN_00010902(unaff_s2);
      unaff_s2 = FUN_00010872();
      if (unaff_s1 != 0) {
        return 1;
      }
      if (unaff_s2 == 0) {
        return 1;
      }
      unaff_s0 = *(int *)(unaff_s2 + 4);
      if (unaff_s6 != 0) {
        if (unaff_s7 < *(ushort *)(unaff_s0 + 0x74)) {
          uVar1 = 0;
        }
        else {
          uVar1 = (*(ushort *)(unaff_s0 + 0x74) & 0xff) << 8 | 1;
        }
        _LVL224(0x200,uVar1,2);
      }
      FUN_000108a8(unaff_s0);
      FUN_000108b8(unaff_s0,0);
      if (unaff_s5 != 0) {
        FUN_000108c8(unaff_s0 + 0x28);
      }
    } while (*(int *)(unaff_s0 + 0x50) == 0);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00010914)

undefined4 FUN_000108de(undefined4 param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  do {
    FUN_000108de(param_1);
    do {
      if (*(int *)(unaff_s0 + 4) != 0) {
        _L0();
      }
      FUN_000108f4(unaff_s0);
      if (unaff_s2 == 0) {
        return 1;
      }
      FUN_00010902(unaff_s2);
      unaff_s2 = FUN_00010872();
      if (unaff_s1 != 0) {
        return 1;
      }
      if (unaff_s2 == 0) {
        return 1;
      }
      unaff_s0 = *(int *)(unaff_s2 + 4);
      if (unaff_s6 != 0) {
        if (unaff_s7 < *(ushort *)(unaff_s0 + 0x74)) {
          uVar1 = 0;
        }
        else {
          uVar1 = (*(ushort *)(unaff_s0 + 0x74) & 0xff) << 8 | 1;
        }
        _LVL224(0x200,uVar1,2);
      }
      FUN_000108a8(unaff_s0);
      FUN_000108b8(unaff_s0,0);
      if (unaff_s5 != 0) {
        FUN_000108c8(unaff_s0 + 0x28);
      }
    } while (*(int *)(unaff_s0 + 0x50) == 0);
    _L0();
    param_1 = *(undefined4 *)(unaff_s0 + 0x50);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00010914)

undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  do {
    _L0();
    do {
      FUN_000108f4(unaff_s0);
      if (unaff_s2 == 0) {
        return 1;
      }
      FUN_00010902(unaff_s2);
      unaff_s2 = FUN_00010872();
      if (unaff_s1 != 0) {
        return 1;
      }
      if (unaff_s2 == 0) {
        return 1;
      }
      unaff_s0 = *(int *)(unaff_s2 + 4);
      if (unaff_s6 != 0) {
        if (unaff_s7 < *(ushort *)(unaff_s0 + 0x74)) {
          uVar1 = 0;
        }
        else {
          uVar1 = (*(ushort *)(unaff_s0 + 0x74) & 0xff) << 8 | 1;
        }
        _LVL224(0x200,uVar1,2);
      }
      FUN_000108a8(unaff_s0);
      FUN_000108b8(unaff_s0,0);
      if (unaff_s5 != 0) {
        FUN_000108c8(unaff_s0 + 0x28);
      }
      if (*(int *)(unaff_s0 + 0x50) != 0) {
        _L0();
        FUN_000108de(*(undefined4 *)(unaff_s0 + 0x50));
      }
    } while (*(int *)(unaff_s0 + 4) == 0);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00010914)

undefined4 FUN_000108f4(int param_1)

{
  int unaff_s1;
  uint uVar1;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  while( true ) {
    FUN_000108f4(param_1);
    if (unaff_s2 == 0) {
      return 1;
    }
    FUN_00010902(unaff_s2);
    unaff_s2 = FUN_00010872();
    if (unaff_s1 != 0) break;
    if (unaff_s2 == 0) {
      return 1;
    }
    param_1 = *(int *)(unaff_s2 + 4);
    if (unaff_s6 != 0) {
      if (unaff_s7 < *(ushort *)(param_1 + 0x74)) {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(ushort *)(param_1 + 0x74) & 0xff) << 8 | 1;
      }
      _LVL224(0x200,uVar1,2);
    }
    FUN_000108a8(param_1);
    FUN_000108b8(param_1,0);
    if (unaff_s5 != 0) {
      FUN_000108c8(param_1 + 0x28);
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      _L0();
      FUN_000108de(*(undefined4 *)(param_1 + 0x50));
    }
    if (*(int *)(param_1 + 4) != 0) {
      _L0();
    }
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00010914)

undefined4 FUN_00010902(int param_1)

{
  int iVar1;
  int unaff_s1;
  uint uVar2;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  while( true ) {
    FUN_00010902(param_1);
    param_1 = FUN_00010872();
    if (unaff_s1 != 0) {
      return 1;
    }
    if (param_1 == 0) break;
    iVar1 = *(int *)(param_1 + 4);
    if (unaff_s6 != 0) {
      if (unaff_s7 < *(ushort *)(iVar1 + 0x74)) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(ushort *)(iVar1 + 0x74) & 0xff) << 8 | 1;
      }
      _LVL224(0x200,uVar2,2);
    }
    FUN_000108a8(iVar1);
    FUN_000108b8(iVar1,0);
    if (unaff_s5 != 0) {
      FUN_000108c8(iVar1 + 0x28);
    }
    if (*(int *)(iVar1 + 0x50) != 0) {
      _L0();
      FUN_000108de(*(undefined4 *)(iVar1 + 0x50));
    }
    if (*(int *)(iVar1 + 4) != 0) {
      _L0();
    }
    FUN_000108f4(iVar1);
    if (param_1 == 0) {
      return 1;
    }
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000109a6)
// WARNING: Removing unreachable block (ram,0x00010938)
// WARNING: Removing unreachable block (ram,0x000109d0)
// WARNING: Removing unreachable block (ram,0x0001095a)

void lld_evt_delete_elt_handler(int iRam00000020)

{
  int **ppiVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 in_mstatus;
  
  _L0(9);
  iVar2 = 1;
  ppiVar3 = (int **)iRam00000020;
  while (ppiVar1 = ppiVar3, ppiVar1 != (int **)0x0) {
    if (ppiVar1[1] != (int *)0x0) {
      iVar2 = FUN_00010994(*(undefined *)(ppiVar1 + 2),*(undefined *)((int)ppiVar1 + 9));
    }
    ppiVar3 = (int **)*ppiVar1;
    if (iVar2 != 0) {
      FUN_000109b6(0x20,ppiVar1,0,in_mstatus);
      FUN_000109c4(ppiVar1);
    }
  }
  if (iRam00000020 == 0) {
    FUN_0001096a(0x20);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000109a6)
// WARNING: Removing unreachable block (ram,0x00010938)
// WARNING: Removing unreachable block (ram,0x000109d0)
// WARNING: Removing unreachable block (ram,0x0001095a)

void _L0(int iRam00000020)

{
  int **ppiVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 in_mstatus;
  
  _L0();
  iVar2 = 1;
  ppiVar3 = (int **)iRam00000020;
  while (ppiVar1 = ppiVar3, ppiVar1 != (int **)0x0) {
    if (ppiVar1[1] != (int *)0x0) {
      iVar2 = FUN_00010994(*(undefined *)(ppiVar1 + 2),*(undefined *)((int)ppiVar1 + 9));
    }
    ppiVar3 = (int **)*ppiVar1;
    if (iVar2 != 0) {
      FUN_000109b6(0x20,ppiVar1,0,in_mstatus);
      FUN_000109c4(ppiVar1);
    }
  }
  if (iRam00000020 == 0) {
    FUN_0001096a(0x20);
  }
  return;
}



void FUN_0001096a(void)

{
  FUN_0001096a();
  return;
}



// WARNING: Removing unreachable block (ram,0x000109d0)
// WARNING: Removing unreachable block (ram,0x000109a6)
// WARNING: Removing unreachable block (ram,0x0001095a)

void FUN_00010994(uint param_1,uint param_2)

{
  int *unaff_s0;
  int *piVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s3;
  undefined4 in_mstatus;
  
  do {
    iVar2 = FUN_00010994(param_1,param_2);
    piVar1 = unaff_s0;
    do {
      unaff_s0 = (int *)*piVar1;
      if (iVar2 != 0) {
        FUN_000109b6(unaff_s3 + 0x20,piVar1,0,in_mstatus);
        FUN_000109c4(piVar1);
      }
      if (unaff_s0 == (int *)0x0) {
        if (*(int *)(unaff_s1 + 0x20) == 0) {
          FUN_0001096a(0x20);
        }
        return;
      }
      piVar1 = unaff_s0;
    } while (unaff_s0[1] == 0);
    param_2 = (uint)*(byte *)((int)unaff_s0 + 9);
    param_1 = (uint)*(byte *)(unaff_s0 + 2);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000109a6)
// WARNING: Removing unreachable block (ram,0x000109d0)
// WARNING: Removing unreachable block (ram,0x0001095a)

void FUN_000109b6(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  undefined4 unaff_s5;
  
  do {
    FUN_000109b6(param_1,param_2,param_3,param_4);
    FUN_000109c4(unaff_s0);
    param_4 = unaff_s5;
    do {
      unaff_s0 = unaff_s4;
      if (unaff_s0 == (undefined4 *)0x0) {
        if (*(int *)(unaff_s1 + 0x20) == 0) {
          FUN_0001096a(0x20);
        }
        return;
      }
      if (unaff_s0[1] != 0) {
        unaff_s2 = FUN_00010994(*(undefined *)(unaff_s0 + 2),*(undefined *)((int)unaff_s0 + 9));
      }
      unaff_s4 = (undefined4 *)*unaff_s0;
    } while (unaff_s2 == 0);
    param_3 = 0;
    param_1 = unaff_s3 + 0x20;
    param_2 = unaff_s0;
    unaff_s5 = param_4;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000109a6)
// WARNING: Removing unreachable block (ram,0x000109d0)
// WARNING: Removing unreachable block (ram,0x0001095a)

void FUN_000109c4(undefined4 *param_1)

{
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  undefined4 in_mstatus;
  
  do {
    FUN_000109c4(param_1);
    do {
      param_1 = unaff_s4;
      if (param_1 == (undefined4 *)0x0) {
        if (*(int *)(unaff_s1 + 0x20) == 0) {
          FUN_0001096a(0x20);
        }
        return;
      }
      if (param_1[1] != 0) {
        unaff_s2 = FUN_00010994(*(undefined *)(param_1 + 2),*(undefined *)((int)param_1 + 9));
      }
      unaff_s4 = (undefined4 *)*param_1;
    } while (unaff_s2 == 0);
    FUN_000109b6(unaff_s3 + 0x20,param_1,0,in_mstatus);
  } while( true );
}



uint16_t lld_evt_drift_compute(uint16_t delay,uint8_t master_sca)

{
  undefined2 in_register_0000202a;
  undefined3 in_register_0000202d;
  
  return (uint16_t)
         (((uint)*(ushort *)((uint)DAT_00000028 * 2) +
          (uint)*(ushort *)(CONCAT31(in_register_0000202d,master_sca) * 2)) *
          CONCAT22(in_register_0000202a,delay) * 0x29 >> 0x10);
}



void lld_evt_rxwin_compute(ea_elt_tag *elt)

{
  ushort uVar1;
  co_list_hdr *pcVar2;
  
  pcVar2 = (co_list_hdr *)
           FUN_00010a2e((*(short *)((int)&elt[2].timestamp + 2) + 1) * *(short *)&elt[2].ea_cb_stop,
                        elt[2].current_prio);
  uVar1 = *(ushort *)&elt[2].ea_cb_start;
  elt[2].hdr.next = pcVar2;
  elt[1].env = (void *)(uint)*(ushort *)((uint)uVar1 * 0x5c + 0x280080a2);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a2e(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_00010a2e();
  *(undefined4 *)(unaff_s0 + 0x58) = uVar1;
  *(uint *)(unaff_s0 + 0x54) =
       (uint)*(ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080a2);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



_Bool lld_evt_restart(ea_elt_tag *elt,_Bool rejected)

{
  undefined uVar1;
  undefined3 in_register_0000202d;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((int)&elt[2].ea_cb_stop + 3);
  if (uVar2 < 5) {
    UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4);
                    // WARNING: Could not emulate address calculation at 0x00010a9e
                    // WARNING: Treating indirect jump as call
    uVar1 = (*UNRECOVERED_JUMPTABLE)(CONCAT31(in_register_0000202d,rejected),UNRECOVERED_JUMPTABLE);
    return (_Bool)uVar1;
  }
  return (_Bool)((*(byte *)((int)&elt[2].ea_cb_cancel + 2) >> 4 ^ 1) & 1);
}



byte _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  
  uVar1 = _L0();
  *(uint *)(unaff_s0 + 8) =
       (uint)*(ushort *)(unaff_s0 + 0x78) + *(int *)(unaff_s0 + 8) + ((uVar1 & 0xf) + 1 & 0x1e) &
       0x7ffffff;
  *(ushort *)(unaff_s0 + 0x10) = *(byte *)(unaff_s1 + 0xb) & 0xf | 0x60a0;
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _L0();
  iVar3 = *(int *)(unaff_s0 + 0x5c);
  *(ushort *)(unaff_s0 + 0x10) = *(byte *)(unaff_s1 + 0xd) & 0xf | 0xa050;
  *(int *)(unaff_s0 + 8) = iVar2;
  *(int *)(unaff_s0 + 0xc) = iVar3;
  if (((iVar3 - iVar2 & 0x7ffffffU) < 0x4000001) || (bVar1 = 0, (iVar2 - iVar3 & 0x7ffffffU) == 0))
  {
    bVar1 = (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
  }
  return bVar1;
}



byte FUN_00010c14(void)

{
  byte bVar1;
  int unaff_s0;
  ushort uVar2;
  undefined4 unaff_s5;
  int unaff_s6;
  
  FUN_00010c14();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(uint *)(unaff_s0 + 8) = (uint)*(ushort *)(unaff_s0 + 0x78) + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  uVar2 = *(short *)(unaff_s0 + 0x60) + 1;
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  *(ushort *)(unaff_s0 + 0x60) = uVar2;
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) != 0) {
        unaff_s5 = 4;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < uVar2) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_00010d98(void)

{
  byte bVar1;
  int unaff_s0;
  ushort uVar2;
  int iVar3;
  undefined4 unaff_s5;
  int unaff_s6;
  
  FUN_00010d98();
  iVar3 = (uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c;
  *(undefined2 *)(iVar3 + 0x280080a6) = *(undefined2 *)(iVar3 + 0x280080a8);
  _L0(0,0);
  FUN_00010dda(*(undefined2 *)(unaff_s0 + 0x74));
  if (unaff_s6 != 0) {
    FUN_00010c14(*(undefined2 *)(unaff_s0 + 0x74),1);
  }
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(uint *)(unaff_s0 + 8) = (uint)*(ushort *)(unaff_s0 + 0x78) + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  uVar2 = *(short *)(unaff_s0 + 0x60) + 1;
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  *(ushort *)(unaff_s0 + 0x60) = uVar2;
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) != 0) {
        unaff_s5 = 4;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < uVar2) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte _L0(void)

{
  byte bVar1;
  int unaff_s0;
  ushort uVar2;
  undefined4 unaff_s5;
  int unaff_s6;
  
  _L0();
  FUN_00010dda(*(undefined2 *)(unaff_s0 + 0x74));
  if (unaff_s6 != 0) {
    FUN_00010c14(*(undefined2 *)(unaff_s0 + 0x74),1);
  }
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(uint *)(unaff_s0 + 8) = (uint)*(ushort *)(unaff_s0 + 0x78) + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  uVar2 = *(short *)(unaff_s0 + 0x60) + 1;
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  *(ushort *)(unaff_s0 + 0x60) = uVar2;
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) != 0) {
        unaff_s5 = 4;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < uVar2) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_00010dda(void)

{
  byte bVar1;
  int unaff_s0;
  ushort uVar2;
  undefined4 unaff_s5;
  int unaff_s6;
  
  FUN_00010dda();
  if (unaff_s6 != 0) {
    FUN_00010c14(*(undefined2 *)(unaff_s0 + 0x74),1);
  }
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(uint *)(unaff_s0 + 8) = (uint)*(ushort *)(unaff_s0 + 0x78) + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  uVar2 = *(short *)(unaff_s0 + 0x60) + 1;
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  *(ushort *)(unaff_s0 + 0x60) = uVar2;
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) != 0) {
        unaff_s5 = 4;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < uVar2) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_00010de8(void)

{
  byte bVar1;
  int unaff_s0;
  ushort uVar2;
  undefined4 unaff_s5;
  int unaff_s6;
  
  FUN_00010de8();
  if (unaff_s6 != 0) {
    FUN_00010c14(*(undefined2 *)(unaff_s0 + 0x74),1);
  }
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(uint *)(unaff_s0 + 8) = (uint)*(ushort *)(unaff_s0 + 0x78) + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  uVar2 = *(short *)(unaff_s0 + 0x60) + 1;
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  *(ushort *)(unaff_s0 + 0x60) = uVar2;
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) != 0) {
        unaff_s5 = 4;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < uVar2) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_00010e16(void)

{
  byte bVar1;
  int unaff_s0;
  ushort uVar2;
  undefined4 unaff_s5;
  int unaff_s6;
  
  FUN_00010e16();
  *(undefined *)(unaff_s0 + 0x6d) = 0;
  *(undefined2 *)(unaff_s0 + 0x5c) = 0;
  if (unaff_s6 != 0) {
    FUN_00010c14(*(undefined2 *)(unaff_s0 + 0x74),1);
  }
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(uint *)(unaff_s0 + 8) = (uint)*(ushort *)(unaff_s0 + 0x78) + *(int *)(unaff_s0 + 8) & 0x7ffffff;
  uVar2 = *(short *)(unaff_s0 + 0x60) + 1;
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  *(ushort *)(unaff_s0 + 0x60) = uVar2;
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) != 0) {
        unaff_s5 = 4;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < uVar2) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_00010e34(void)

{
  int unaff_s0;
  
  FUN_00010e34();
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_00010f34(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s2;
  short unaff_s3;
  undefined4 unaff_s5;
  int unaff_s6;
  
  FUN_00010f34();
  FUN_000111b8();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(short *)(unaff_s0 + 0x60) = unaff_s3 + *(short *)(unaff_s0 + 0x60);
  if (unaff_s2 != 0) {
    FUN_000111dc(*(undefined2 *)(unaff_s0 + 0x74),(int)(short)unaff_s2);
  }
  if ((*(ushort *)(unaff_s0 + 0x60) == (ushort)(*(short *)(unaff_s0 + 0x5c) - 1U)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 8;
  }
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) == 0) {
        unaff_s5 = 3;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < *(ushort *)(unaff_s0 + 0x60)) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte _L0(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s2;
  short unaff_s3;
  undefined4 unaff_s5;
  int unaff_s6;
  int unaff_s8;
  int unaff_s9;
  int unaff_s10;
  
  _L0();
  FUN_00011168(*(undefined2 *)(unaff_s0 + 0x74));
  iVar2 = FUN_00011176(*(undefined *)(unaff_s0 + 0x6e));
  *(uint *)(unaff_s0 + 0x58) = iVar2 + (uint)*(byte *)(unaff_s0 + 0x6c) * unaff_s10;
  *(uint *)(unaff_s0 + 0x54) =
       (uint)*(ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * unaff_s9 + unaff_s8);
  _L0(1);
  *(undefined *)(unaff_s0 + 0x6c) = 0;
  *(undefined2 *)(unaff_s0 + 0x66) = 0;
  *(undefined *)(unaff_s0 + 0x71) = 1;
  FUN_000111b8();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(short *)(unaff_s0 + 0x60) = unaff_s3 + *(short *)(unaff_s0 + 0x60);
  if (unaff_s2 != 0) {
    FUN_000111dc(*(undefined2 *)(unaff_s0 + 0x74),(int)(short)unaff_s2);
  }
  if ((*(ushort *)(unaff_s0 + 0x60) == (ushort)(*(short *)(unaff_s0 + 0x5c) - 1U)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 8;
  }
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) == 0) {
        unaff_s5 = 3;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < *(ushort *)(unaff_s0 + 0x60)) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_00011168(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s2;
  short unaff_s3;
  undefined4 unaff_s5;
  int unaff_s6;
  int unaff_s8;
  int unaff_s9;
  int unaff_s10;
  
  FUN_00011168();
  iVar2 = FUN_00011176(*(undefined *)(unaff_s0 + 0x6e));
  *(uint *)(unaff_s0 + 0x58) = iVar2 + (uint)*(byte *)(unaff_s0 + 0x6c) * unaff_s10;
  *(uint *)(unaff_s0 + 0x54) =
       (uint)*(ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * unaff_s9 + unaff_s8);
  _L0(1);
  *(undefined *)(unaff_s0 + 0x6c) = 0;
  *(undefined2 *)(unaff_s0 + 0x66) = 0;
  *(undefined *)(unaff_s0 + 0x71) = 1;
  FUN_000111b8();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(short *)(unaff_s0 + 0x60) = unaff_s3 + *(short *)(unaff_s0 + 0x60);
  if (unaff_s2 != 0) {
    FUN_000111dc(*(undefined2 *)(unaff_s0 + 0x74),(int)(short)unaff_s2);
  }
  if ((*(ushort *)(unaff_s0 + 0x60) == (ushort)(*(short *)(unaff_s0 + 0x5c) - 1U)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 8;
  }
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) == 0) {
        unaff_s5 = 3;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < *(ushort *)(unaff_s0 + 0x60)) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_00011176(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s2;
  short unaff_s3;
  undefined4 unaff_s5;
  int unaff_s6;
  int unaff_s8;
  int unaff_s9;
  int unaff_s10;
  
  iVar2 = FUN_00011176();
  *(uint *)(unaff_s0 + 0x58) = iVar2 + (uint)*(byte *)(unaff_s0 + 0x6c) * unaff_s10;
  *(uint *)(unaff_s0 + 0x54) =
       (uint)*(ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * unaff_s9 + unaff_s8);
  _L0(1);
  *(undefined *)(unaff_s0 + 0x6c) = 0;
  *(undefined2 *)(unaff_s0 + 0x66) = 0;
  *(undefined *)(unaff_s0 + 0x71) = 1;
  FUN_000111b8();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(short *)(unaff_s0 + 0x60) = unaff_s3 + *(short *)(unaff_s0 + 0x60);
  if (unaff_s2 != 0) {
    FUN_000111dc(*(undefined2 *)(unaff_s0 + 0x74),(int)(short)unaff_s2);
  }
  if ((*(ushort *)(unaff_s0 + 0x60) == (ushort)(*(short *)(unaff_s0 + 0x5c) - 1U)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 8;
  }
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) == 0) {
        unaff_s5 = 3;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < *(ushort *)(unaff_s0 + 0x60)) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte _L0(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s2;
  short unaff_s3;
  undefined4 unaff_s5;
  int unaff_s6;
  
  _L0();
  *(undefined *)(unaff_s0 + 0x6c) = 0;
  *(undefined2 *)(unaff_s0 + 0x66) = 0;
  *(undefined *)(unaff_s0 + 0x71) = 1;
  FUN_000111b8();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(short *)(unaff_s0 + 0x60) = unaff_s3 + *(short *)(unaff_s0 + 0x60);
  if (unaff_s2 != 0) {
    FUN_000111dc(*(undefined2 *)(unaff_s0 + 0x74),(int)(short)unaff_s2);
  }
  if ((*(ushort *)(unaff_s0 + 0x60) == (ushort)(*(short *)(unaff_s0 + 0x5c) - 1U)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 8;
  }
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) == 0) {
        unaff_s5 = 3;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < *(ushort *)(unaff_s0 + 0x60)) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_000111b8(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s2;
  short unaff_s3;
  undefined4 unaff_s5;
  int unaff_s6;
  
  FUN_000111b8();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(short *)(unaff_s0 + 0x60) = unaff_s3 + *(short *)(unaff_s0 + 0x60);
  if (unaff_s2 != 0) {
    FUN_000111dc(*(undefined2 *)(unaff_s0 + 0x74),(int)(short)unaff_s2);
  }
  if ((*(ushort *)(unaff_s0 + 0x60) == (ushort)(*(short *)(unaff_s0 + 0x5c) - 1U)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 8;
  }
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) == 0) {
        unaff_s5 = 3;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < *(ushort *)(unaff_s0 + 0x60)) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_000111dc(void)

{
  byte bVar1;
  int unaff_s0;
  undefined4 unaff_s5;
  int unaff_s6;
  
  FUN_000111dc();
  if ((*(ushort *)(unaff_s0 + 0x60) == (ushort)(*(short *)(unaff_s0 + 0x5c) - 1U)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 8;
  }
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) == 0) {
        unaff_s5 = 3;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < *(ushort *)(unaff_s0 + 0x60)) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_00011226(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s2;
  short unaff_s3;
  undefined4 unaff_s5;
  int unaff_s6;
  
  FUN_00011226();
  FUN_00010f34();
  FUN_000111b8();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(short *)(unaff_s0 + 0x60) = unaff_s3 + *(short *)(unaff_s0 + 0x60);
  if (unaff_s2 != 0) {
    FUN_000111dc(*(undefined2 *)(unaff_s0 + 0x74),(int)(short)unaff_s2);
  }
  if ((*(ushort *)(unaff_s0 + 0x60) == (ushort)(*(short *)(unaff_s0 + 0x5c) - 1U)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 8;
  }
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) == 0) {
        unaff_s5 = 3;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < *(ushort *)(unaff_s0 + 0x60)) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



byte FUN_00011262(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s2;
  short unaff_s3;
  undefined4 unaff_s5;
  int unaff_s6;
  
  FUN_00011262();
  *(undefined *)(unaff_s0 + 0x6d) = 0;
  *(undefined2 *)(unaff_s0 + 0x5c) = 0;
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
  FUN_00010f34();
  FUN_000111b8();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(short *)(unaff_s0 + 0x60) = unaff_s3 + *(short *)(unaff_s0 + 0x60);
  if (unaff_s2 != 0) {
    FUN_000111dc(*(undefined2 *)(unaff_s0 + 0x74),(int)(short)unaff_s2);
  }
  if ((*(ushort *)(unaff_s0 + 0x60) == (ushort)(*(short *)(unaff_s0 + 0x5c) - 1U)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 8;
  }
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  if ((bVar1 & 2) == 0) {
    if (unaff_s6 == 0) {
      if ((bVar1 & 5) == 0) {
        unaff_s5 = 3;
      }
      FUN_00010e34(unaff_s5);
    }
  }
  else {
    if (5 < *(ushort *)(unaff_s0 + 0x60)) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 0x10;
    }
  }
  return (*(byte *)(unaff_s0 + 0x7e) >> 4 ^ 1) & 1;
}



// WARNING: Removing unreachable block (ram,0x000112c2)

void lld_evt_elt_insert(ea_elt_tag *elt,_Bool inc_prio)

{
  int iVar1;
  undefined3 in_register_0000202d;
  undefined4 in_mstatus;
  
  do {
    iVar1 = FUN_000112b6(elt);
    if (iVar1 != 1) {
      FUN_000112cc(elt,in_mstatus);
      return;
    }
    if ((CONCAT31(in_register_0000202d,inc_prio) != 0) && (elt->current_prio < 0x1f)) {
      elt->current_prio = elt->current_prio + 1;
    }
    iVar1 = FUN_000112fc(elt,1);
  } while (iVar1 != 0);
  FUN_0001130c(elt,1,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000112c2)

void FUN_000112b6(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  uint unaff_s3;
  undefined4 in_mstatus;
  
  do {
    iVar1 = FUN_000112b6();
    if (iVar1 != unaff_s1) {
      FUN_000112cc(in_mstatus);
      return;
    }
    if ((unaff_s2 != 0) && (*(byte *)(unaff_s0 + 0x16) <= unaff_s3)) {
      *(byte *)(unaff_s0 + 0x16) = *(byte *)(unaff_s0 + 0x16) + 1;
    }
    iVar1 = FUN_000112fc(1);
  } while (iVar1 != 0);
  FUN_0001130c(1,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000112cc(void)

{
  FUN_000112cc();
  return;
}



// WARNING: Removing unreachable block (ram,0x000112c2)

void FUN_000112fc(undefined4 param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  uint unaff_s3;
  undefined4 in_mstatus;
  
  while( true ) {
    iVar1 = FUN_000112fc(param_1);
    if (iVar1 == 0) {
      FUN_0001130c(1,0);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar1 = FUN_000112b6();
    if (iVar1 != unaff_s1) break;
    if ((unaff_s2 != 0) && (*(byte *)(unaff_s0 + 0x16) <= unaff_s3)) {
      *(byte *)(unaff_s0 + 0x16) = *(byte *)(unaff_s0 + 0x16) + 1;
    }
    param_1 = 1;
  }
  FUN_000112cc(in_mstatus);
  return;
}



void FUN_0001130c(void)

{
  FUN_0001130c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void lld_evt_canceled(ea_elt_tag *elt)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    _L0();
  }
  if (elt->current_prio < 0x1f) {
    elt->current_prio = elt->current_prio + 1;
  }
  iVar1 = FUN_00011358(elt,1);
  if (iVar1 == 0) {
    FUN_0001137a(elt,1,0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    _L0();
  }
  if (*(byte *)(unaff_s0 + 0x16) < 0x1f) {
    *(byte *)(unaff_s0 + 0x16) = *(byte *)(unaff_s0 + 0x16) + 1;
  }
  iVar1 = FUN_00011358(1);
  if (iVar1 == 0) {
    FUN_0001137a(1,0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  
  _L0();
  if (*(byte *)(unaff_s0 + 0x16) < 0x1f) {
    *(byte *)(unaff_s0 + 0x16) = *(byte *)(unaff_s0 + 0x16) + 1;
  }
  iVar1 = FUN_00011358(1);
  if (iVar1 == 0) {
    FUN_0001137a(1,0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011358(void)

{
  int iVar1;
  
  iVar1 = FUN_00011358();
  if (iVar1 == 0) {
    FUN_0001137a(1,0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001137a(void)

{
  FUN_0001137a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00011400)

void lld_evt_schedule_next(ea_elt_tag *elt)

{
  uint8_t uVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  ushort *puVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  
  iVar7 = _L0();
  if ((*(char *)((int)&elt[2].ea_cb_stop + 3) == '\x04') &&
     (bVar11 = *(byte *)((int)&elt[2].ea_cb_cancel + 2), (char)bVar11 < '\0')) {
    uVar13 = (uint)*(ushort *)&elt[2].ea_cb_stop;
    uVar12 = (uint)elt->start_latency + iVar7 & 0x7ffffff;
    if (((elt->timestamp - (uVar13 + uVar12 & 0x7ffffff) & 0x7ffffff) < 0x30bb01) &&
       (uVar6 = (uint)((int)elt->env - uVar12) & 0x7ffffff, uVar13 <= uVar6)) {
      if (*(int *)&elt[1].delay != 0) {
        *(byte *)((int)&elt[2].ea_cb_cancel + 2) = bVar11 | 4;
      }
      iVar7 = FUN_0001141e(0,elt);
      if (iVar7 == 0) {
        iVar8 = _LVL420(elt);
        if (iVar8 != 0) {
          _L0();
        }
        FUN_00011440(elt);
      }
      if (iVar7 == 0) {
        uVar6 = uVar6 / uVar13;
        uVar2 = *(undefined2 *)&elt[2].ea_cb_start;
        uVar13 = uVar6 & 0xffff;
        elt->env = (void *)((uint)((int)elt->env - (uVar6 + 1) * (uint)*(ushort *)&elt[2].ea_cb_stop
                                  ) & 0x7ffffff);
        *(short *)&elt[2].timestamp = (*(short *)&elt[2].timestamp + -1) - (short)uVar13;
        _L0(uVar2,(int)(uVar13 * -0x10000) >> 0x10);
        uVar1 = elt[2].current_prio;
        *(byte *)((int)&elt[2].ea_cb_cancel + 2) = *(byte *)((int)&elt[2].ea_cb_cancel + 2) & 0x7f;
        iVar7 = _L0(uVar13,uVar1);
        puVar10 = (ushort *)((uint)*(ushort *)&elt[2].ea_cb_start * 0x5c + 0x280080a2);
        uVar3 = *puVar10;
        uVar13 = (uint)uVar3;
        if ((short)uVar3 < 0) {
          uVar13 = (uVar13 & 0x7fff) * 0x271;
        }
        pvVar9 = (void *)(uVar13 + iVar7 * -2);
        if (pvVar9 < (void *)0xe) {
          pvVar9 = (void *)0xe;
        }
        else {
          if ((void *)0x3fff < pvVar9) {
            pvVar9 = (void *)(((int)pvVar9 + 0x270U) / 0x271 | 0x8000);
          }
        }
        *puVar10 = (ushort)pvVar9;
        uVar2 = *(undefined2 *)&elt[2].ea_cb_stop;
        elt[1].env = pvVar9;
        while (FUN_00011520(elt,uVar2), (uVar12 - elt->timestamp & 0x7ffffff) < 0x30bb01) {
          *(short *)((int)&elt[2].timestamp + 2) = *(short *)((int)&elt[2].timestamp + 2) + 1;
          _L0(elt);
        }
        sVar4 = *(short *)((int)&elt[2].timestamp + 2);
        *(short *)&elt[2].timestamp = *(short *)&elt[2].timestamp + sVar4 + 1;
        FUN_00011566(*(undefined2 *)&elt[2].ea_cb_start,(int)sVar4);
        sVar4 = *(short *)&elt[2].linked_element;
        sVar5 = *(short *)&elt[2].timestamp;
        bVar11 = *(byte *)((int)&elt[2].ea_cb_cancel + 2) & 0xf7;
        *(byte *)((int)&elt[2].ea_cb_cancel + 2) = bVar11;
        if ((sVar5 == (short)(sVar4 + -1)) && (*(char *)((int)&elt[2].delay + 1) != '\0')) {
          *(byte *)((int)&elt[2].ea_cb_cancel + 2) = bVar11 | 8;
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00011400)

void _L0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = _L0();
  if ((*(char *)(unaff_s0 + 0x7b) == '\x04') && ((char)*(byte *)(unaff_s0 + 0x7e) < '\0')) {
    uVar9 = (uint)*(ushort *)(unaff_s0 + 0x78);
    uVar8 = (uint)*(byte *)(unaff_s0 + 0x19) + iVar4 & 0x7ffffff;
    if (((*(int *)(unaff_s0 + 8) - (uVar9 + uVar8 & 0x7ffffff) & 0x7ffffff) < 0x30bb01) &&
       (uVar3 = *(int *)(unaff_s0 + 0x28) - uVar8 & 0x7ffffff, uVar9 <= uVar3)) {
      if (*(int *)(unaff_s0 + 0x40) != 0) {
        *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 4;
      }
      iVar4 = FUN_0001141e(0);
      if (iVar4 == 0) {
        iVar5 = _LVL420();
        if (iVar5 != 0) {
          _L0();
        }
        FUN_00011440();
      }
      if (iVar4 == 0) {
        uVar3 = uVar3 / uVar9;
        uVar9 = uVar3 & 0xffff;
        *(uint *)(unaff_s0 + 0x28) =
             *(int *)(unaff_s0 + 0x28) - (uVar3 + 1) * (uint)*(ushort *)(unaff_s0 + 0x78) &
             0x7ffffff;
        *(short *)(unaff_s0 + 0x60) = (*(short *)(unaff_s0 + 0x60) + -1) - (short)uVar9;
        _L0(*(undefined2 *)(unaff_s0 + 0x74),(int)(uVar9 * -0x10000) >> 0x10);
        *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) & 0x7f;
        iVar4 = _L0(uVar9,*(undefined *)(unaff_s0 + 0x6e));
        puVar6 = (ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080a2);
        uVar1 = *puVar6;
        uVar9 = (uint)uVar1;
        if ((short)uVar1 < 0) {
          uVar9 = (uVar9 & 0x7fff) * 0x271;
        }
        uVar9 = uVar9 + iVar4 * -2;
        if (uVar9 < 0xe) {
          uVar9 = 0xe;
        }
        else {
          if (0x3fff < uVar9) {
            uVar9 = (uVar9 + 0x270) / 0x271 | 0x8000;
          }
        }
        *puVar6 = (ushort)uVar9;
        uVar2 = *(undefined2 *)(unaff_s0 + 0x78);
        *(uint *)(unaff_s0 + 0x54) = uVar9;
        while (FUN_00011520(uVar2), (uVar8 - *(int *)(unaff_s0 + 8) & 0x7ffffff) < 0x30bb01) {
          *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + 1;
          _L0();
        }
        *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + *(short *)(unaff_s0 + 0x62) + 1;
        FUN_00011566(*(undefined2 *)(unaff_s0 + 0x74),(int)*(short *)(unaff_s0 + 0x62));
        bVar7 = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
        *(byte *)(unaff_s0 + 0x7e) = bVar7;
        if ((*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s0 + 0x5c) + -1)) &&
           (*(char *)(unaff_s0 + 0x6d) != '\0')) {
          *(byte *)(unaff_s0 + 0x7e) = bVar7 | 8;
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  return;
}



void FUN_0001141e(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint unaff_s1;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  byte bVar7;
  int unaff_s2;
  uint unaff_s3;
  
  iVar4 = FUN_0001141e();
  if (iVar4 == 0) {
    iVar5 = _LVL420();
    if (iVar5 != 0) {
      _L0();
    }
    FUN_00011440();
  }
  if (iVar4 == 0) {
    uVar3 = unaff_s1 / unaff_s3 & 0xffff;
    *(uint *)(unaff_s0 + 0x28) =
         *(int *)(unaff_s0 + 0x28) - (unaff_s1 / unaff_s3 + 1) * (uint)*(ushort *)(unaff_s0 + 0x78)
         & 0x7ffffff;
    *(short *)(unaff_s0 + 0x60) = (*(short *)(unaff_s0 + 0x60) + -1) - (short)uVar3;
    _L0(*(undefined2 *)(unaff_s0 + 0x74),(int)(uVar3 * -0x10000) >> 0x10);
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) & 0x7f;
    iVar4 = _L0(uVar3,*(undefined *)(unaff_s0 + 0x6e));
    puVar6 = (ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080a2);
    uVar1 = *puVar6;
    uVar3 = (uint)uVar1;
    if ((short)uVar1 < 0) {
      uVar3 = (uVar3 & 0x7fff) * 0x271;
    }
    uVar3 = uVar3 + iVar4 * -2;
    if (uVar3 < 0xe) {
      uVar3 = 0xe;
    }
    else {
      if (0x3fff < uVar3) {
        uVar3 = (uVar3 + 0x270) / 0x271 | 0x8000;
      }
    }
    *puVar6 = (ushort)uVar3;
    uVar2 = *(undefined2 *)(unaff_s0 + 0x78);
    *(uint *)(unaff_s0 + 0x54) = uVar3;
    while (FUN_00011520(uVar2), (unaff_s2 - *(int *)(unaff_s0 + 8) & 0x7ffffffU) < 0x30bb01) {
      *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + 1;
      _L0();
    }
    *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + *(short *)(unaff_s0 + 0x62) + 1;
    FUN_00011566(*(undefined2 *)(unaff_s0 + 0x74),(int)*(short *)(unaff_s0 + 0x62));
    bVar7 = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
    *(byte *)(unaff_s0 + 0x7e) = bVar7;
    if ((*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s0 + 0x5c) + -1)) &&
       (*(char *)(unaff_s0 + 0x6d) != '\0')) {
      *(byte *)(unaff_s0 + 0x7e) = bVar7 | 8;
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _LVL420(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint unaff_s1;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  byte bVar6;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  
  iVar4 = _LVL420();
  if (iVar4 != 0) {
    _L0();
  }
  FUN_00011440();
  if (unaff_s4 == 0) {
    uVar3 = unaff_s1 / unaff_s3 & 0xffff;
    *(uint *)(unaff_s0 + 0x28) =
         *(int *)(unaff_s0 + 0x28) - (unaff_s1 / unaff_s3 + 1) * (uint)*(ushort *)(unaff_s0 + 0x78)
         & 0x7ffffff;
    *(short *)(unaff_s0 + 0x60) = (*(short *)(unaff_s0 + 0x60) + -1) - (short)uVar3;
    _L0(*(undefined2 *)(unaff_s0 + 0x74),(int)(uVar3 * -0x10000) >> 0x10);
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) & 0x7f;
    iVar4 = _L0(uVar3,*(undefined *)(unaff_s0 + 0x6e));
    puVar5 = (ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080a2);
    uVar1 = *puVar5;
    uVar3 = (uint)uVar1;
    if ((short)uVar1 < 0) {
      uVar3 = (uVar3 & 0x7fff) * 0x271;
    }
    uVar3 = uVar3 + iVar4 * -2;
    if (uVar3 < 0xe) {
      uVar3 = 0xe;
    }
    else {
      if (0x3fff < uVar3) {
        uVar3 = (uVar3 + 0x270) / 0x271 | 0x8000;
      }
    }
    *puVar5 = (ushort)uVar3;
    uVar2 = *(undefined2 *)(unaff_s0 + 0x78);
    *(uint *)(unaff_s0 + 0x54) = uVar3;
    while (FUN_00011520(uVar2), (unaff_s2 - *(int *)(unaff_s0 + 8) & 0x7ffffffU) < 0x30bb01) {
      *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + 1;
      _L0();
    }
    *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + *(short *)(unaff_s0 + 0x62) + 1;
    FUN_00011566(*(undefined2 *)(unaff_s0 + 0x74),(int)*(short *)(unaff_s0 + 0x62));
    bVar6 = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
    *(byte *)(unaff_s0 + 0x7e) = bVar6;
    if ((*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s0 + 0x5c) + -1)) &&
       (*(char *)(unaff_s0 + 0x6d) != '\0')) {
      *(byte *)(unaff_s0 + 0x7e) = bVar6 | 8;
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _L0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint unaff_s1;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  byte bVar6;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  
  _L0();
  FUN_00011440();
  if (unaff_s4 == 0) {
    uVar3 = unaff_s1 / unaff_s3 & 0xffff;
    *(uint *)(unaff_s0 + 0x28) =
         *(int *)(unaff_s0 + 0x28) - (unaff_s1 / unaff_s3 + 1) * (uint)*(ushort *)(unaff_s0 + 0x78)
         & 0x7ffffff;
    *(short *)(unaff_s0 + 0x60) = (*(short *)(unaff_s0 + 0x60) + -1) - (short)uVar3;
    _L0(*(undefined2 *)(unaff_s0 + 0x74),(int)(uVar3 * -0x10000) >> 0x10);
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) & 0x7f;
    iVar4 = _L0(uVar3,*(undefined *)(unaff_s0 + 0x6e));
    puVar5 = (ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080a2);
    uVar1 = *puVar5;
    uVar3 = (uint)uVar1;
    if ((short)uVar1 < 0) {
      uVar3 = (uVar3 & 0x7fff) * 0x271;
    }
    uVar3 = uVar3 + iVar4 * -2;
    if (uVar3 < 0xe) {
      uVar3 = 0xe;
    }
    else {
      if (0x3fff < uVar3) {
        uVar3 = (uVar3 + 0x270) / 0x271 | 0x8000;
      }
    }
    *puVar5 = (ushort)uVar3;
    uVar2 = *(undefined2 *)(unaff_s0 + 0x78);
    *(uint *)(unaff_s0 + 0x54) = uVar3;
    while (FUN_00011520(uVar2), (unaff_s2 - *(int *)(unaff_s0 + 8) & 0x7ffffffU) < 0x30bb01) {
      *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + 1;
      _L0();
    }
    *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + *(short *)(unaff_s0 + 0x62) + 1;
    FUN_00011566(*(undefined2 *)(unaff_s0 + 0x74),(int)*(short *)(unaff_s0 + 0x62));
    bVar6 = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
    *(byte *)(unaff_s0 + 0x7e) = bVar6;
    if ((*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s0 + 0x5c) + -1)) &&
       (*(char *)(unaff_s0 + 0x6d) != '\0')) {
      *(byte *)(unaff_s0 + 0x7e) = bVar6 | 8;
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_00011440(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint unaff_s1;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  byte bVar6;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  
  FUN_00011440();
  if (unaff_s4 == 0) {
    uVar3 = unaff_s1 / unaff_s3 & 0xffff;
    *(uint *)(unaff_s0 + 0x28) =
         *(int *)(unaff_s0 + 0x28) - (unaff_s1 / unaff_s3 + 1) * (uint)*(ushort *)(unaff_s0 + 0x78)
         & 0x7ffffff;
    *(short *)(unaff_s0 + 0x60) = (*(short *)(unaff_s0 + 0x60) + -1) - (short)uVar3;
    _L0(*(undefined2 *)(unaff_s0 + 0x74),(int)(uVar3 * -0x10000) >> 0x10);
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) & 0x7f;
    iVar4 = _L0(uVar3,*(undefined *)(unaff_s0 + 0x6e));
    puVar5 = (ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080a2);
    uVar1 = *puVar5;
    uVar3 = (uint)uVar1;
    if ((short)uVar1 < 0) {
      uVar3 = (uVar3 & 0x7fff) * 0x271;
    }
    uVar3 = uVar3 + iVar4 * -2;
    if (uVar3 < 0xe) {
      uVar3 = 0xe;
    }
    else {
      if (0x3fff < uVar3) {
        uVar3 = (uVar3 + 0x270) / 0x271 | 0x8000;
      }
    }
    *puVar5 = (ushort)uVar3;
    uVar2 = *(undefined2 *)(unaff_s0 + 0x78);
    *(uint *)(unaff_s0 + 0x54) = uVar3;
    while (FUN_00011520(uVar2), (unaff_s2 - *(int *)(unaff_s0 + 8) & 0x7ffffffU) < 0x30bb01) {
      *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + 1;
      _L0();
    }
    *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + *(short *)(unaff_s0 + 0x62) + 1;
    FUN_00011566(*(undefined2 *)(unaff_s0 + 0x74),(int)*(short *)(unaff_s0 + 0x62));
    bVar6 = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
    *(byte *)(unaff_s0 + 0x7e) = bVar6;
    if ((*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s0 + 0x5c) + -1)) &&
       (*(char *)(unaff_s0 + 0x6d) != '\0')) {
      *(byte *)(unaff_s0 + 0x7e) = bVar6 | 8;
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _L0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_s0;
  int iVar3;
  ushort *puVar4;
  byte bVar5;
  uint uVar6;
  int unaff_s2;
  
  _L0();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) & 0x7f;
  iVar3 = _L0(*(undefined *)(unaff_s0 + 0x6e));
  puVar4 = (ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080a2);
  uVar1 = *puVar4;
  uVar6 = (uint)uVar1;
  if ((short)uVar1 < 0) {
    uVar6 = (uVar6 & 0x7fff) * 0x271;
  }
  uVar6 = uVar6 + iVar3 * -2;
  if (uVar6 < 0xe) {
    uVar6 = 0xe;
  }
  else {
    if (0x3fff < uVar6) {
      uVar6 = (uVar6 + 0x270) / 0x271 | 0x8000;
    }
  }
  *puVar4 = (ushort)uVar6;
  uVar2 = *(undefined2 *)(unaff_s0 + 0x78);
  *(uint *)(unaff_s0 + 0x54) = uVar6;
  while (FUN_00011520(uVar2), (unaff_s2 - *(int *)(unaff_s0 + 8) & 0x7ffffffU) < 0x30bb01) {
    *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + 1;
    _L0();
  }
  *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + *(short *)(unaff_s0 + 0x62) + 1;
  FUN_00011566(*(undefined2 *)(unaff_s0 + 0x74),(int)*(short *)(unaff_s0 + 0x62));
  bVar5 = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
  *(byte *)(unaff_s0 + 0x7e) = bVar5;
  if ((*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s0 + 0x5c) + -1)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = bVar5 | 8;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_s0;
  int iVar3;
  ushort *puVar4;
  byte bVar5;
  uint uVar6;
  int unaff_s2;
  
  iVar3 = _L0();
  puVar4 = (ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080a2);
  uVar1 = *puVar4;
  uVar6 = (uint)uVar1;
  if ((short)uVar1 < 0) {
    uVar6 = (uVar6 & 0x7fff) * 0x271;
  }
  uVar6 = uVar6 + iVar3 * -2;
  if (uVar6 < 0xe) {
    uVar6 = 0xe;
  }
  else {
    if (0x3fff < uVar6) {
      uVar6 = (uVar6 + 0x270) / 0x271 | 0x8000;
    }
  }
  *puVar4 = (ushort)uVar6;
  uVar2 = *(undefined2 *)(unaff_s0 + 0x78);
  *(uint *)(unaff_s0 + 0x54) = uVar6;
  while (FUN_00011520(uVar2), (unaff_s2 - *(int *)(unaff_s0 + 8) & 0x7ffffffU) < 0x30bb01) {
    *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + 1;
    _L0();
  }
  *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + *(short *)(unaff_s0 + 0x62) + 1;
  FUN_00011566(*(undefined2 *)(unaff_s0 + 0x74),(int)*(short *)(unaff_s0 + 0x62));
  bVar5 = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
  *(byte *)(unaff_s0 + 0x7e) = bVar5;
  if ((*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s0 + 0x5c) + -1)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = bVar5 | 8;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011520(void)

{
  int unaff_s0;
  uint unaff_s1;
  byte bVar1;
  int unaff_s2;
  uint unaff_s3;
  
  while (FUN_00011520(), (unaff_s2 - *(int *)(unaff_s0 + 8) & unaff_s1) <= unaff_s3) {
    *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + 1;
    _L0();
  }
  *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + *(short *)(unaff_s0 + 0x62) + 1;
  FUN_00011566(*(undefined2 *)(unaff_s0 + 0x74),(int)*(short *)(unaff_s0 + 0x62));
  bVar1 = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
  *(byte *)(unaff_s0 + 0x7e) = bVar1;
  if ((*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s0 + 0x5c) + -1)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = bVar1 | 8;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  byte bVar1;
  int unaff_s2;
  uint unaff_s3;
  
  while( true ) {
    _L0();
    FUN_00011520();
    if (unaff_s3 < (unaff_s2 - *(int *)(unaff_s0 + 8) & unaff_s1)) break;
    *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + 1;
  }
  *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + *(short *)(unaff_s0 + 0x62) + 1;
  FUN_00011566(*(undefined2 *)(unaff_s0 + 0x74),(int)*(short *)(unaff_s0 + 0x62));
  bVar1 = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
  *(byte *)(unaff_s0 + 0x7e) = bVar1;
  if ((*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s0 + 0x5c) + -1)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = bVar1 | 8;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011566(void)

{
  int unaff_s0;
  byte bVar1;
  
  FUN_00011566();
  bVar1 = *(byte *)(unaff_s0 + 0x7e) & 0xf7;
  *(byte *)(unaff_s0 + 0x7e) = bVar1;
  if ((*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s0 + 0x5c) + -1)) &&
     (*(char *)(unaff_s0 + 0x6d) != '\0')) {
    *(byte *)(unaff_s0 + 0x7e) = bVar1 | 8;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



ea_elt_tag * lld_evt_scan_create(uint16_t handle,uint16_t latency)

{
  ea_elt_tag *peVar1;
  uint32_t uVar2;
  
  peVar1 = (ea_elt_tag *)_L0(0x58);
  _LVL456(&peVar1->env);
  *(undefined *)((int)&peVar1[2].ea_cb_stop + 3) = 1;
  *(uint16_t *)&peVar1[2].ea_cb_start = handle;
  *(uint16_t *)((int)&peVar1[2].linked_element + 2) = latency + 1;
  *(uint16_t *)((int)&peVar1[2].ea_cb_start + 2) = handle * 0x5c + 0x8e;
  _L0(peVar1,0);
  peVar1->ea_cb_start = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_start *)0x0;
  peVar1->ea_cb_cancel = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *)0x0;
  peVar1->ea_cb_stop = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_stop *)0x0;
  peVar1->duration_min = 0x9c4;
  peVar1->asap_settings = bRam00000001 & 0xf | 0x6050;
  peVar1->stop_latency1 = '\0';
  *(undefined2 *)&peVar1->stop_latency2 = 0x200;
  uVar2 = _L0();
  peVar1->timestamp = uVar2;
  return peVar1;
}



int _L0(void)

{
  short unaff_s1;
  int iVar1;
  undefined4 uVar2;
  short in_stack_0000000c;
  
  iVar1 = _L0();
  _LVL456(iVar1 + 0x28);
  *(undefined *)(iVar1 + 0x7b) = 1;
  *(short *)(iVar1 + 0x74) = unaff_s1;
  *(short *)(iVar1 + 0x5e) = in_stack_0000000c + 1;
  *(short *)(iVar1 + 0x76) = unaff_s1 * 0x5c + 0x8e;
  _L0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined2 *)(iVar1 + 0x12) = 0x9c4;
  *(ushort *)(iVar1 + 0x10) = bRam00000001 & 0xf | 0x6050;
  *(undefined *)(iVar1 + 0x17) = 0;
  *(undefined2 *)(iVar1 + 0x18) = 0x200;
  uVar2 = _L0();
  *(undefined4 *)(iVar1 + 8) = uVar2;
  return iVar1;
}



void _LVL456(void)

{
  int unaff_s0;
  short unaff_s1;
  undefined4 uVar1;
  short in_stack_0000000c;
  
  _LVL456();
  *(undefined *)(unaff_s0 + 0x7b) = 1;
  *(short *)(unaff_s0 + 0x74) = unaff_s1;
  *(short *)(unaff_s0 + 0x5e) = in_stack_0000000c + 1;
  *(short *)(unaff_s0 + 0x76) = unaff_s1 * 0x5c + 0x8e;
  _L0(0);
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x9c4;
  *(ushort *)(unaff_s0 + 0x10) = bRam00000001 & 0xf | 0x6050;
  *(undefined *)(unaff_s0 + 0x17) = 0;
  *(undefined2 *)(unaff_s0 + 0x18) = 0x200;
  uVar1 = _L0();
  *(undefined4 *)(unaff_s0 + 8) = uVar1;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  *(undefined2 *)(unaff_s0 + 0x12) = 0x9c4;
  *(ushort *)(unaff_s0 + 0x10) = bRam00000001 & 0xf | 0x6050;
  *(undefined *)(unaff_s0 + 0x17) = 0;
  *(undefined2 *)(unaff_s0 + 0x18) = 0x200;
  uVar1 = _L0();
  *(undefined4 *)(unaff_s0 + 8) = uVar1;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = _L0();
  *(undefined4 *)(unaff_s0 + 8) = uVar1;
  return;
}



ea_elt_tag *
lld_evt_move_to_master
          (ea_elt_tag *elt_scan,uint16_t conhdl,llc_create_con_req_ind *pdu_tx,uint8_t rx_hdl)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *paVar5;
  int iVar6;
  undefined2 in_register_0000202e;
  undefined3 in_register_00002035;
  uint uVar7;
  uint uVar8;
  ea_elt_tag *peVar9;
  uint uVar10;
  
  peVar9 = elt_scan->linked_element;
  paVar5 = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *)
           _L0(CONCAT22(in_register_0000202e,conhdl));
  uVar10 = (uint)*(ushort *)&peVar9[2].ea_cb_stop;
  uVar4 = peVar9->timestamp;
  uVar1 = *(ushort *)((uint)*(ushort *)&elt_scan[2].ea_cb_start * 0x5c + 0x280080cc);
  elt_scan->linked_element = (ea_elt_tag *)0x0;
  _L0(elt_scan);
  iVar6 = _L0();
  uVar4 = uVar4 % uVar10;
  uVar8 = (int)elt_scan->env +
          (((uint)*(ushort *)&elt_scan[1].hdr.next +
            (uint)(*(ushort *)(CONCAT31(in_register_00002035,rx_hdl) * 0xe + 0x280083d2) >> 8) * 8 +
           0x48e) / 0x271 - 1) & 0x7ffffff;
  uVar3 = (uVar10 + uVar8) - (uVar8 - uVar4 & 0x7ffffff) % uVar10 & 0x7ffffff;
  uVar7 = uVar3 - uVar8 & 0x7ffffff;
  if (0x4000000 < uVar7) {
    uVar7 = -(uVar8 - uVar3 & 0x7ffffff);
  }
  if ((int)uVar7 < (int)(((uint)uVar1 << 0x11) >> 0x10)) {
    uVar3 = uVar3 + uVar10 & 0x7ffffff;
  }
  uVar7 = iVar6 - uVar3 & 0x7ffffff;
  if (0x4000000 < uVar7) {
    if ((uVar3 - iVar6 & 0x7ffffff) != 0) goto _L0;
    uVar7 = 0;
  }
  uVar7 = uVar7 / uVar10 + 1;
  uVar8 = uVar7 & 0xffff;
  FUN_0001178e(CONCAT22(in_register_0000202e,conhdl),(int)(short)uVar8);
  *(short *)&peVar9[2].timestamp = (short)(uVar7 * 0x10000 >> 0x10) + *(short *)&peVar9[2].timestamp
  ;
  uVar3 = uVar3 + uVar8 * uVar10 & 0x7ffffff;
_L0:
  uVar2 = *(undefined2 *)&peVar9[2].ea_cb_stop;
  peVar9->timestamp = uVar3;
  *(undefined2 *)(paVar5 + 4) = uVar2;
  *(ushort *)(paVar5 + 8) = peVar9->duration_min / 0x271;
  uVar2 = *(undefined2 *)&peVar9[2].ea_cb_start;
  *(short *)(paVar5 + 6) = (short)uVar4;
  *(undefined2 *)(paVar5 + 0xc) = 0;
  *(undefined2 *)(paVar5 + 10) = uVar2;
  *(short *)(paVar5 + 0xe) = *(short *)&peVar9[2].ea_cb_start * 0x5c + 0x8e;
  _L0(paVar5);
  peVar9[1].ea_cb_cancel = paVar5;
  FUN_000117f8(peVar9,2);
  *(byte *)((int)&peVar9[2].ea_cb_cancel + 2) = *(byte *)((int)&peVar9[2].ea_cb_cancel + 2) | 2;
  return peVar9;
}



void _L0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_s3;
  uint uVar9;
  int in_stack_0000000c;
  
  iVar5 = _L0();
  uVar9 = (uint)*(ushort *)(unaff_s3 + 0x78);
  uVar4 = *(uint *)(unaff_s3 + 8);
  uVar1 = *(ushort *)((uint)*(ushort *)(unaff_s0 + 0x74) * 0x5c + 0x280080cc);
  *(undefined4 *)(unaff_s0 + 4) = 0;
  _L0();
  iVar6 = _L0();
  uVar4 = uVar4 % uVar9;
  uVar8 = ((uint)*(ushort *)(unaff_s0 + 0x2c) +
           (uint)(*(ushort *)(in_stack_0000000c * 0xe + 0x280083d2) >> 8) * 8 + 0x48e) / 0x271 +
          *(int *)(unaff_s0 + 0x28) + -1 & 0x7ffffff;
  uVar3 = (uVar9 + uVar8) - (uVar8 - uVar4 & 0x7ffffff) % uVar9 & 0x7ffffff;
  uVar7 = uVar3 - uVar8 & 0x7ffffff;
  if (0x4000000 < uVar7) {
    uVar7 = -(uVar8 - uVar3 & 0x7ffffff);
  }
  if ((int)uVar7 < (int)(((uint)uVar1 << 0x11) >> 0x10)) {
    uVar3 = uVar3 + uVar9 & 0x7ffffff;
  }
  uVar7 = iVar6 - uVar3 & 0x7ffffff;
  if (0x4000000 < uVar7) {
    if ((uVar3 - iVar6 & 0x7ffffff) != 0) goto _L0;
    uVar7 = 0;
  }
  uVar7 = uVar7 / uVar9 + 1;
  uVar8 = uVar7 & 0xffff;
  FUN_0001178e((int)(short)uVar8);
  *(short *)(unaff_s3 + 0x60) = (short)(uVar7 * 0x10000 >> 0x10) + *(short *)(unaff_s3 + 0x60);
  uVar3 = uVar3 + uVar8 * uVar9 & 0x7ffffff;
_L0:
  *(uint *)(unaff_s3 + 8) = uVar3;
  *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(unaff_s3 + 0x78);
  *(ushort *)(iVar5 + 8) = *(ushort *)(unaff_s3 + 0x12) / 0x271;
  uVar2 = *(undefined2 *)(unaff_s3 + 0x74);
  *(short *)(iVar5 + 6) = (short)uVar4;
  *(undefined2 *)(iVar5 + 0xc) = 0;
  *(undefined2 *)(iVar5 + 10) = uVar2;
  *(short *)(iVar5 + 0xe) = *(short *)(unaff_s3 + 0x74) * 0x5c + 0x8e;
  _L0(iVar5);
  *(int *)(unaff_s3 + 0x50) = iVar5;
  FUN_000117f8(2);
  *(byte *)(unaff_s3 + 0x7e) = *(byte *)(unaff_s3 + 0x7e) | 2;
  return;
}



void _L0(void)

{
  undefined2 uVar1;
  int unaff_s0;
  uint uVar2;
  uint unaff_s1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int unaff_s8;
  int in_stack_0000000c;
  
  _L0();
  iVar3 = _L0();
  uVar5 = ((uint)*(ushort *)(unaff_s0 + 0x2c) +
           (uint)(*(ushort *)(in_stack_0000000c * 0xe + unaff_s8) >> 8) * 8 + 0x48e) / 0x271 +
          *(int *)(unaff_s0 + 0x28) + -1 & 0x7ffffff;
  uVar2 = (unaff_s4 + uVar5) - (uVar5 - unaff_s1 % unaff_s4 & 0x7ffffff) % unaff_s4 & 0x7ffffff;
  uVar4 = uVar2 - uVar5 & 0x7ffffff;
  if (0x4000000 < uVar4) {
    uVar4 = -(uVar5 - uVar2 & 0x7ffffff);
  }
  if ((int)uVar4 < (int)((uint)(unaff_s7 << 0x11) >> 0x10)) {
    uVar2 = uVar2 + unaff_s4 & 0x7ffffff;
  }
  uVar4 = iVar3 - uVar2 & 0x7ffffff;
  if (0x4000000 < uVar4) {
    if ((uVar2 - iVar3 & 0x7ffffff) != 0) goto _L0;
    uVar4 = 0;
  }
  uVar4 = (int)uVar4 / (int)unaff_s4 + 1;
  uVar5 = uVar4 & 0xffff;
  FUN_0001178e((int)(short)uVar5);
  *(short *)(unaff_s3 + 0x60) = (short)(uVar4 * 0x10000 >> 0x10) + *(short *)(unaff_s3 + 0x60);
  uVar2 = uVar2 + uVar5 * unaff_s4 & 0x7ffffff;
_L0:
  *(uint *)(unaff_s3 + 8) = uVar2;
  *(undefined2 *)(unaff_s5 + 4) = *(undefined2 *)(unaff_s3 + 0x78);
  *(ushort *)(unaff_s5 + 8) = *(ushort *)(unaff_s3 + 0x12) / 0x271;
  uVar1 = *(undefined2 *)(unaff_s3 + 0x74);
  *(short *)(unaff_s5 + 6) = (short)(unaff_s1 % unaff_s4);
  *(undefined2 *)(unaff_s5 + 0xc) = 0;
  *(undefined2 *)(unaff_s5 + 10) = uVar1;
  *(short *)(unaff_s5 + 0xe) = *(short *)(unaff_s3 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s3 + 0x50) = unaff_s5;
  FUN_000117f8(2);
  *(byte *)(unaff_s3 + 0x7e) = *(byte *)(unaff_s3 + 0x7e) | 2;
  return;
}



void _L0(void)

{
  undefined2 uVar1;
  int unaff_s0;
  uint uVar2;
  uint unaff_s1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int unaff_s8;
  int in_stack_0000000c;
  
  iVar3 = _L0();
  uVar5 = ((uint)*(ushort *)(unaff_s0 + 0x2c) +
           (uint)(*(ushort *)(in_stack_0000000c * 0xe + unaff_s8) >> 8) * 8 + 0x48e) / 0x271 +
          *(int *)(unaff_s0 + 0x28) + -1 & 0x7ffffff;
  uVar2 = (unaff_s4 + uVar5) - (uVar5 - unaff_s1 % unaff_s4 & 0x7ffffff) % unaff_s4 & 0x7ffffff;
  uVar4 = uVar2 - uVar5 & 0x7ffffff;
  if (0x4000000 < uVar4) {
    uVar4 = -(uVar5 - uVar2 & 0x7ffffff);
  }
  if ((int)uVar4 < (int)((uint)(unaff_s7 << 0x11) >> 0x10)) {
    uVar2 = uVar2 + unaff_s4 & 0x7ffffff;
  }
  uVar4 = iVar3 - uVar2 & 0x7ffffff;
  if (0x4000000 < uVar4) {
    if ((uVar2 - iVar3 & 0x7ffffff) != 0) goto _L0;
    uVar4 = 0;
  }
  uVar4 = (int)uVar4 / (int)unaff_s4 + 1;
  uVar5 = uVar4 & 0xffff;
  FUN_0001178e((int)(short)uVar5);
  *(short *)(unaff_s3 + 0x60) = (short)(uVar4 * 0x10000 >> 0x10) + *(short *)(unaff_s3 + 0x60);
  uVar2 = uVar2 + uVar5 * unaff_s4 & 0x7ffffff;
_L0:
  *(uint *)(unaff_s3 + 8) = uVar2;
  *(undefined2 *)(unaff_s5 + 4) = *(undefined2 *)(unaff_s3 + 0x78);
  *(ushort *)(unaff_s5 + 8) = *(ushort *)(unaff_s3 + 0x12) / 0x271;
  uVar1 = *(undefined2 *)(unaff_s3 + 0x74);
  *(short *)(unaff_s5 + 6) = (short)(unaff_s1 % unaff_s4);
  *(undefined2 *)(unaff_s5 + 0xc) = 0;
  *(undefined2 *)(unaff_s5 + 10) = uVar1;
  *(short *)(unaff_s5 + 0xe) = *(short *)(unaff_s3 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s3 + 0x50) = unaff_s5;
  FUN_000117f8(2);
  *(byte *)(unaff_s3 + 0x7e) = *(byte *)(unaff_s3 + 0x7e) | 2;
  return;
}



void FUN_0001178e(void)

{
  undefined2 uVar1;
  int unaff_s0;
  short unaff_s1;
  undefined2 unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  FUN_0001178e();
  *(short *)(unaff_s3 + 0x60) = unaff_s1 + *(short *)(unaff_s3 + 0x60);
  *(uint *)(unaff_s3 + 8) = unaff_s0 + unaff_s4 & 0x7ffffff;
  *(undefined2 *)(unaff_s5 + 4) = *(undefined2 *)(unaff_s3 + 0x78);
  *(ushort *)(unaff_s5 + 8) = *(ushort *)(unaff_s3 + 0x12) / 0x271;
  uVar1 = *(undefined2 *)(unaff_s3 + 0x74);
  *(undefined2 *)(unaff_s5 + 6) = unaff_s2;
  *(undefined2 *)(unaff_s5 + 0xc) = 0;
  *(undefined2 *)(unaff_s5 + 10) = uVar1;
  *(short *)(unaff_s5 + 0xe) = *(short *)(unaff_s3 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s3 + 0x50) = unaff_s5;
  FUN_000117f8(2);
  *(byte *)(unaff_s3 + 0x7e) = *(byte *)(unaff_s3 + 0x7e) | 2;
  return;
}



void _L0(void)

{
  int unaff_s3;
  undefined4 unaff_s5;
  
  _L0();
  *(undefined4 *)(unaff_s3 + 0x50) = unaff_s5;
  FUN_000117f8(2);
  *(byte *)(unaff_s3 + 0x7e) = *(byte *)(unaff_s3 + 0x7e) | 2;
  return;
}



void FUN_000117f8(void)

{
  int unaff_s3;
  
  FUN_000117f8();
  *(byte *)(unaff_s3 + 0x7e) = *(byte *)(unaff_s3 + 0x7e) | 2;
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ea_elt_tag *
lld_evt_update_create
          (ea_elt_tag *elt_old,uint16_t ce_len,uint16_t mininterval,uint16_t maxinterval,
          uint16_t latency,uint8_t pref_period,lld_evt_update_tag *upd_par)

{
  ea_elt_tag *peVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  uint extraout_a1;
  uint16_t uVar5;
  undefined2 in_register_00002036;
  uint uVar6;
  uint uVar7;
  undefined2 auStack84 [2];
  ea_param_output set_param;
  ea_param_input input_param;
  
  uVar6 = CONCAT22(in_register_00002036,maxinterval);
  peVar1 = (ea_elt_tag *)_L0(0x58);
  if (peVar1 == (ea_elt_tag *)0x0) {
    return (ea_elt_tag *)0x0;
  }
  (*pcRam00000000)(elt_old,0x2c,pcRam00000000);
  _LVL501(&peVar1->env);
  *(uint16_t *)((int)&peVar1[2].linked_element + 2) = latency + 1;
  *(undefined *)((int)&peVar1[2].ea_cb_stop + 3) = 3;
  set_param.offset = mininterval;
  set_param._10_2_ = maxinterval;
  _L0(&set_param.offset,auStack84);
  iVar2 = _L0(&set_param.offset,auStack84);
  if (iVar2 == 0) {
    *(undefined2 *)&peVar1[2].ea_cb_stop = auStack84[0];
    _L0(peVar1,auStack84);
    uVar3 = peVar1->timestamp;
    uVar6 = (uint)*(ushort *)((int)&elt_old[2].linked_element + 2) * 0x60000;
    uVar5 = *(short *)&elt_old[2].timestamp + (short)(uVar6 >> 0x10);
    uVar4 = 0x7ffffff;
    uVar6 = (uint)*(ushort *)&elt_old[2].ea_cb_stop * (uVar6 >> 0x10) + elt_old->timestamp &
            0x7ffffff;
    uVar7 = uVar6 - uVar3 & 0x7ffffff;
    if (uVar7 < 0x4000001) goto _L0;
  }
  else {
    uVar5 = 0;
    uVar3 = FUN_00011938(peVar1,1);
    ebreak();
    uVar4 = extraout_a1;
  }
  uVar7 = -(uVar3 - uVar6 & uVar4);
_L0:
  uVar4 = (uint)*(ushort *)&peVar1[2].ea_cb_stop;
  peVar1->timestamp = ((int)((uVar4 - 1) + uVar7) / (int)uVar4) * uVar4 + uVar3 & 0x7ffffff;
  upd_par->win_size = '\x01';
  *(uint16_t *)&elt_old[2].linked_element = uVar5;
  uVar3 = peVar1->timestamp;
  upd_par->instant = uVar5;
  upd_par->win_offset = (uint16_t)((uVar3 - uVar6) * 0x20 >> 6);
  elt_old->linked_element = peVar1;
  *(undefined *)((int)&elt_old[2].delay + 1) = 1;
  return peVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(uint param_1)

{
  undefined2 *unaff_s1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_a1;
  short sVar4;
  uint uVar5;
  int unaff_s2;
  short unaff_s3;
  undefined2 in_stack_0000000c;
  undefined2 uStack00000024;
  undefined uStack00000026;
  short sStack00000028;
  undefined2 uStack0000002a;
  undefined uStack0000002c;
  short sStack0000002e;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    return 0;
  }
  (*pcRam00000000)(0x2c,pcRam00000000);
  _LVL501(iVar1 + 0x28);
  *(short *)(iVar1 + 0x5e) = unaff_s3 + 1;
  *(undefined *)(iVar1 + 0x7b) = 3;
  sStack00000028 = *(short *)(unaff_s2 + 0x74);
  uStack00000026 = 0;
  uStack0000002a = 0;
  sStack0000002e = sStack00000028 * 0x5c + 0x8e;
  _L0(&stack0x00000018,&stack0x0000000c);
  uStack00000024 = 0;
  uStack0000002c = 0;
  iVar2 = _L0(&stack0x00000018,&stack0x0000000c);
  if (iVar2 == 0) {
    *(undefined2 *)(iVar1 + 0x78) = in_stack_0000000c;
    _L0(iVar1,&stack0x0000000c);
    iVar2 = *(int *)(iVar1 + 8);
    uVar5 = (uint)*(ushort *)(unaff_s2 + 0x5e) * 0x60000;
    sVar4 = *(short *)(unaff_s2 + 0x60) + (short)(uVar5 >> 0x10);
    uVar3 = 0x7ffffff;
    param_1 = (uint)*(ushort *)(unaff_s2 + 0x78) * (uVar5 >> 0x10) + *(int *)(unaff_s2 + 8) &
              0x7ffffff;
    uVar5 = param_1 - iVar2 & 0x7ffffff;
    if (uVar5 < 0x4000001) goto _L0;
  }
  else {
    sVar4 = 0;
    iVar2 = FUN_00011938(iVar1,1);
    ebreak();
    uVar3 = extraout_a1;
  }
  uVar5 = -(iVar2 - param_1 & uVar3);
_L0:
  uVar3 = (uint)*(ushort *)(iVar1 + 0x78);
  *(uint *)(iVar1 + 8) = ((int)((uVar3 - 1) + uVar5) / (int)uVar3) * uVar3 + iVar2 & 0x7ffffff;
  *(undefined *)(unaff_s1 + 2) = 1;
  *(short *)(unaff_s2 + 0x5c) = sVar4;
  iVar2 = *(int *)(iVar1 + 8);
  unaff_s1[1] = sVar4;
  *unaff_s1 = (short)((iVar2 - param_1) * 0x20 >> 6);
  *(int *)(unaff_s2 + 4) = iVar1;
  *(undefined *)(unaff_s2 + 0x6d) = 1;
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL501(uint param_1)

{
  int unaff_s0;
  undefined2 *unaff_s1;
  int iVar1;
  uint uVar2;
  uint extraout_a1;
  short sVar3;
  uint uVar4;
  int unaff_s2;
  short unaff_s3;
  undefined2 in_stack_0000000c;
  undefined2 uStack00000024;
  undefined uStack00000026;
  short sStack00000028;
  undefined2 uStack0000002a;
  undefined uStack0000002c;
  short sStack0000002e;
  
  _LVL501();
  *(short *)(unaff_s0 + 0x5e) = unaff_s3 + 1;
  *(undefined *)(unaff_s0 + 0x7b) = 3;
  sStack00000028 = *(short *)(unaff_s2 + 0x74);
  uStack00000026 = 0;
  uStack0000002a = 0;
  sStack0000002e = sStack00000028 * 0x5c + 0x8e;
  _L0(&stack0x00000018,&stack0x0000000c);
  uStack00000024 = 0;
  uStack0000002c = 0;
  iVar1 = _L0(&stack0x00000018,&stack0x0000000c);
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_s0 + 0x78) = in_stack_0000000c;
    _L0(&stack0x0000000c);
    iVar1 = *(int *)(unaff_s0 + 8);
    uVar4 = (uint)*(ushort *)(unaff_s2 + 0x5e) * 0x60000;
    sVar3 = *(short *)(unaff_s2 + 0x60) + (short)(uVar4 >> 0x10);
    uVar2 = 0x7ffffff;
    param_1 = (uint)*(ushort *)(unaff_s2 + 0x78) * (uVar4 >> 0x10) + *(int *)(unaff_s2 + 8) &
              0x7ffffff;
    uVar4 = param_1 - iVar1 & 0x7ffffff;
    if (uVar4 < 0x4000001) goto _L0;
  }
  else {
    sVar3 = 0;
    iVar1 = FUN_00011938(1);
    ebreak();
    uVar2 = extraout_a1;
  }
  uVar4 = -(iVar1 - param_1 & uVar2);
_L0:
  uVar2 = (uint)*(ushort *)(unaff_s0 + 0x78);
  *(uint *)(unaff_s0 + 8) = ((int)((uVar2 - 1) + uVar4) / (int)uVar2) * uVar2 + iVar1 & 0x7ffffff;
  *(undefined *)(unaff_s1 + 2) = 1;
  *(short *)(unaff_s2 + 0x5c) = sVar3;
  iVar1 = *(int *)(unaff_s0 + 8);
  unaff_s1[1] = sVar3;
  *unaff_s1 = (short)((iVar1 - param_1) * 0x20 >> 6);
  *(int *)(unaff_s2 + 4) = unaff_s0;
  *(undefined *)(unaff_s2 + 0x6d) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(uint param_1)

{
  int unaff_s0;
  undefined2 *unaff_s1;
  int iVar1;
  uint uVar2;
  uint extraout_a1;
  short sVar3;
  uint uVar4;
  int unaff_s2;
  undefined2 in_stack_0000000c;
  undefined2 uStack00000024;
  undefined uStack0000002c;
  
  _L0();
  uStack00000024 = 0;
  uStack0000002c = 0;
  iVar1 = _L0(&stack0x00000018,&stack0x0000000c);
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_s0 + 0x78) = in_stack_0000000c;
    _L0(&stack0x0000000c);
    iVar1 = *(int *)(unaff_s0 + 8);
    uVar4 = (uint)*(ushort *)(unaff_s2 + 0x5e) * 0x60000;
    sVar3 = *(short *)(unaff_s2 + 0x60) + (short)(uVar4 >> 0x10);
    uVar2 = 0x7ffffff;
    param_1 = (uint)*(ushort *)(unaff_s2 + 0x78) * (uVar4 >> 0x10) + *(int *)(unaff_s2 + 8) &
              0x7ffffff;
    uVar4 = param_1 - iVar1 & 0x7ffffff;
    if (uVar4 < 0x4000001) goto _L0;
  }
  else {
    sVar3 = 0;
    iVar1 = FUN_00011938(1);
    ebreak();
    uVar2 = extraout_a1;
  }
  uVar4 = -(iVar1 - param_1 & uVar2);
_L0:
  uVar2 = (uint)*(ushort *)(unaff_s0 + 0x78);
  *(uint *)(unaff_s0 + 8) = ((int)((uVar2 - 1) + uVar4) / (int)uVar2) * uVar2 + iVar1 & 0x7ffffff;
  *(undefined *)(unaff_s1 + 2) = 1;
  *(short *)(unaff_s2 + 0x5c) = sVar3;
  iVar1 = *(int *)(unaff_s0 + 8);
  unaff_s1[1] = sVar3;
  *unaff_s1 = (short)((iVar1 - param_1) * 0x20 >> 6);
  *(int *)(unaff_s2 + 4) = unaff_s0;
  *(undefined *)(unaff_s2 + 0x6d) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(uint param_1)

{
  int unaff_s0;
  undefined2 *unaff_s1;
  int iVar1;
  uint uVar2;
  uint extraout_a1;
  short sVar3;
  uint uVar4;
  int unaff_s2;
  undefined2 in_stack_0000000c;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_s0 + 0x78) = in_stack_0000000c;
    _L0(&stack0x0000000c);
    iVar1 = *(int *)(unaff_s0 + 8);
    uVar4 = (uint)*(ushort *)(unaff_s2 + 0x5e) * 0x60000;
    sVar3 = *(short *)(unaff_s2 + 0x60) + (short)(uVar4 >> 0x10);
    uVar2 = 0x7ffffff;
    param_1 = (uint)*(ushort *)(unaff_s2 + 0x78) * (uVar4 >> 0x10) + *(int *)(unaff_s2 + 8) &
              0x7ffffff;
    uVar4 = param_1 - iVar1 & 0x7ffffff;
    if (uVar4 < 0x4000001) goto _L0;
  }
  else {
    sVar3 = 0;
    iVar1 = FUN_00011938(1);
    ebreak();
    uVar2 = extraout_a1;
  }
  uVar4 = -(iVar1 - param_1 & uVar2);
_L0:
  uVar2 = (uint)*(ushort *)(unaff_s0 + 0x78);
  *(uint *)(unaff_s0 + 8) = ((int)((uVar2 - 1) + uVar4) / (int)uVar2) * uVar2 + iVar1 & 0x7ffffff;
  *(undefined *)(unaff_s1 + 2) = 1;
  *(short *)(unaff_s2 + 0x5c) = sVar3;
  iVar1 = *(int *)(unaff_s0 + 8);
  unaff_s1[1] = sVar3;
  *unaff_s1 = (short)((iVar1 - param_1) * 0x20 >> 6);
  *(int *)(unaff_s2 + 4) = unaff_s0;
  *(undefined *)(unaff_s2 + 0x6d) = 1;
  return;
}



void _L0(void)

{
  ushort uVar1;
  int unaff_s0;
  undefined2 *unaff_s1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_s2;
  
  _L0();
  uVar1 = *(ushort *)(unaff_s2 + 0x60);
  iVar2 = *(int *)(unaff_s0 + 8);
  uVar6 = (uint)*(ushort *)(unaff_s2 + 0x5e) * 0x60000 >> 0x10;
  uVar5 = *(ushort *)(unaff_s2 + 0x78) * uVar6 + *(int *)(unaff_s2 + 8) & 0x7ffffff;
  uVar7 = uVar5 - iVar2 & 0x7ffffff;
  if (0x4000000 < uVar7) {
    uVar7 = -(iVar2 - uVar5 & 0x7ffffff);
  }
  uVar3 = (uint)*(ushort *)(unaff_s0 + 0x78);
  *(uint *)(unaff_s0 + 8) = ((int)((uVar3 - 1) + uVar7) / (int)uVar3) * uVar3 + iVar2 & 0x7ffffff;
  *(undefined *)(unaff_s1 + 2) = 1;
  uVar4 = (undefined2)((uVar1 + uVar6) * 0x10000 >> 0x10);
  *(undefined2 *)(unaff_s2 + 0x5c) = uVar4;
  iVar2 = *(int *)(unaff_s0 + 8);
  unaff_s1[1] = uVar4;
  *unaff_s1 = (short)((iVar2 - uVar5) * 0x20 >> 6);
  *(int *)(unaff_s2 + 4) = unaff_s0;
  *(undefined *)(unaff_s2 + 0x6d) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011938(undefined2 param_1,int param_2)

{
  int unaff_s0;
  undefined2 *unaff_s1;
  int iVar1;
  uint extraout_a1;
  uint uVar2;
  int unaff_s2;
  
  iVar1 = FUN_00011938();
  ebreak();
  uVar2 = (uint)*(ushort *)(unaff_s0 + 0x78);
  *(uint *)(unaff_s0 + 8) =
       ((int)((uVar2 - 1) - (iVar1 - param_2 & extraout_a1)) / (int)uVar2) * uVar2 + iVar1 &
       0x7ffffff;
  *(undefined *)(unaff_s1 + 2) = 1;
  *(undefined2 *)(unaff_s2 + 0x5c) = param_1;
  iVar1 = *(int *)(unaff_s0 + 8);
  unaff_s1[1] = param_1;
  *unaff_s1 = (short)((uint)((iVar1 - param_2) * 0x20) >> 6);
  *(int *)(unaff_s2 + 4) = unaff_s0;
  *(undefined *)(unaff_s2 + 0x6d) = 1;
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ea_elt_tag *
lld_evt_move_to_slave
          (llc_create_con_req_ind *con_par,llm_pdu_con_req_rx *con_req_pdu,ea_elt_tag *elt_adv,
          uint16_t conhdl)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint16_t uVar4;
  short sVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  ea_elt_tag *peVar9;
  anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *paVar10;
  co_list_hdr *pcVar11;
  int iVar12;
  undefined *puVar13;
  uint uVar14;
  undefined2 in_register_00002036;
  ushort uVar15;
  void *pvVar16;
  uint uVar17;
  ushort auStack100 [2];
  ea_param_output set_param;
  ea_param_input input_param;
  
  peVar9 = (ea_elt_tag *)_L0(0x58);
  paVar10 = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *)_L0();
  uVar7 = _DAT_28008198;
  uVar8 = _DAT_28008196;
  uVar6 = _DAT_28008194;
  uVar17 = (uint)con_req_pdu->winoffset;
  bVar1 = con_req_pdu->hop_sca;
  bVar2 = con_req_pdu->winsize;
  con_par->filter_policy = (uint8_t)((ushort)_DAT_28008154 >> 8);
  if (peVar9 == (ea_elt_tag *)0x0) {
    _LVL569(elt_adv,1,0);
  }
  else {
    _LVL531(&peVar9->env);
    FUN_00011a28(elt_adv,1,0);
    *(uint16_t *)&peVar9[2].ea_cb_start = conhdl;
    bVar1 = bVar1 >> 5;
    *(uint16_t *)&peVar9[2].ea_cb_stop = con_par->con_int << 1;
    uVar4 = con_par->con_lat;
    peVar9[2].current_prio = bVar1;
    peVar9[2].start_latency = '\0';
    *(uint16_t *)((int)&peVar9[2].linked_element + 2) = uVar4 + 1;
    *(undefined *)((int)&peVar9[2].ea_cb_stop + 3) = 4;
    *(undefined2 *)&peVar9[2].asap_limit = 2;
    bVar3 = elt_adv->start_latency;
    peVar9->duration_min = 0x4e2;
    peVar9->start_latency = bVar3;
    if (uVar17 << 1 <= (uint)bVar3) {
      uVar15 = con_par->con_int;
      FUN_00011a90(CONCAT22(in_register_00002036,conhdl),1);
      uVar17 = uVar17 + uVar15 & 0xffff;
      *(undefined2 *)&peVar9[2].timestamp = 1;
    }
    uVar17 = uVar17 * 2 + bVar2 + 2 & 0xffff;
    pcVar11 = (co_list_hdr *)FUN_00011ab8(uVar17,bVar1);
    peVar9[2].hdr.next = pcVar11;
    pvVar16 = (void *)CONCAT22(uVar8,uVar6);
    peVar9[1].env = (void *)((uint)bVar2 * 0x4e2 + -0x21);
    _L0(&peVar9->env,1);
    uVar15 = 0x3a8 - (uVar7 & 0x3ff);
    if (0x270 < uVar15) {
      uVar15 = 0x137 - (uVar7 & 0x3ff);
      pvVar16 = (void *)((int)pvVar16 + 1);
    }
    sVar5 = *(short *)&peVar9[2].ea_cb_start;
    *(ushort *)&peVar9[1].hdr.next = uVar15;
    peVar9->env = pvVar16;
    peVar9->asap_settings = 0x6000;
    *(short *)((int)&peVar9[2].ea_cb_start + 2) = sVar5 * 0x5c + 0x8e;
    peVar9->ea_cb_start = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_start *)0x0;
    peVar9->ea_cb_cancel = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *)0x0;
    peVar9->ea_cb_stop = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_stop *)0x0;
    _L0(peVar9,2);
    set_param.offset = *(uint16_t *)&peVar9[2].ea_cb_stop;
    *(byte *)((int)&peVar9[2].ea_cb_cancel + 2) = *(byte *)((int)&peVar9[2].ea_cb_cancel + 2) | 2;
    auStack100[0] = 0;
    set_param._0_4_ = 0;
    set_param.duration._0_2_ = 0;
    set_param._10_2_ = set_param.offset;
    _L0(&set_param.offset,auStack100);
    iVar12 = _L0(&set_param.offset,auStack100);
    if (iVar12 != 0) {
      iVar12 = _L0(&set_param.offset,auStack100);
      if (iVar12 == 0) {
        puVar13 = (undefined *)FUN_00011bf8(0x109,(conhdl & 0xff) << 8 | 1,2,0x22);
        *puVar13 = 1;
        uVar7 = auStack100[0] >> 1;
        *(ushort *)(puVar13 + 2) = uVar7;
        *(ushort *)(puVar13 + 4) = uVar7;
        *(ushort *)(puVar13 + 0xe) = uVar7;
        *(ushort *)(puVar13 + 0x10) = uVar7;
        sVar5 = *(short *)((int)&peVar9[2].linked_element + 2);
        puVar13[0x12] = 0;
        *(short *)(puVar13 + 6) = sVar5 + -1;
        *(undefined2 *)(puVar13 + 8) = 3000;
        uVar6 = *(undefined2 *)&peVar9[2].timestamp;
        *(undefined2 *)(puVar13 + 0x14) = uVar6;
        *(undefined2 *)(puVar13 + 10) = uVar6;
        *(undefined2 *)(puVar13 + 0xc) = *(undefined2 *)&peVar9[2].timestamp;
        uVar14 = FUN_00011c50((undefined2)set_param.duration,peVar9->timestamp);
        *(short *)(puVar13 + 0x16) = (short)(uVar14 >> 1);
        *(undefined2 *)(puVar13 + 0x18) = 0xffff;
        *(undefined2 *)(puVar13 + 0x1a) = 0xffff;
        *(undefined2 *)(puVar13 + 0x1c) = 0xffff;
        *(undefined2 *)(puVar13 + 0x1e) = 0xffff;
        *(undefined2 *)(puVar13 + 0x20) = 0xffff;
        FUN_00011c76(puVar13);
      }
    }
    *(short *)(paVar10 + 6) = (short)(peVar9->timestamp % (uint)*(ushort *)&peVar9[2].ea_cb_stop);
    *(undefined2 *)(paVar10 + 4) = *(undefined2 *)&peVar9[2].ea_cb_stop;
    *(undefined2 *)(paVar10 + 8) = 2;
    *(undefined2 *)(paVar10 + 10) = *(undefined2 *)&peVar9[2].ea_cb_start;
    *(undefined2 *)(paVar10 + 0xc) = 1;
    *(short *)(paVar10 + 0xe) = *(short *)&peVar9[2].ea_cb_start * 0x5c + 0x8e;
    _L0(paVar10);
    peVar9[1].ea_cb_cancel = paVar10;
    FUN_00011cce(peVar9,uVar17);
    *(byte *)((int)&peVar9[2].ea_cb_cancel + 2) = *(byte *)((int)&peVar9[2].ea_cb_cancel + 2) | 1;
  }
  return peVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint unaff_s1;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  ushort uVar12;
  uint uVar13;
  ushort *unaff_s3;
  int iVar14;
  uint uVar15;
  int unaff_s11;
  int in_stack_0000000c;
  ushort uStack0000001c;
  undefined4 uStack00000020;
  undefined2 uStack00000024;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined4 uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  short sStack00000038;
  undefined2 uStack0000003a;
  byte bStack0000003c;
  short sStack0000003e;
  
  iVar8 = _L0();
  iVar9 = _L0();
  uVar6 = _DAT_28008198;
  uVar7 = _DAT_28008196;
  uVar5 = _DAT_28008194;
  uVar15 = (uint)*(ushort *)(in_stack_0000000c + 0x14);
  bVar1 = *(byte *)(in_stack_0000000c + 0x21);
  bVar2 = *(byte *)(in_stack_0000000c + 0x13);
  *(char *)((int)unaff_s3 + 0x11) = (char)((ushort)_DAT_28008154 >> 8);
  if (iVar8 == 0) {
    _LVL569(1,0);
  }
  else {
    _LVL531(iVar8 + 0x28);
    FUN_00011a28(1,0);
    *(short *)(iVar8 + 0x74) = (short)unaff_s1;
    bVar1 = bVar1 >> 5;
    *(ushort *)(iVar8 + 0x78) = *unaff_s3 << 1;
    uVar12 = unaff_s3[1];
    *(byte *)(iVar8 + 0x6e) = bVar1;
    *(undefined *)(iVar8 + 0x71) = 0;
    *(ushort *)(iVar8 + 0x5e) = uVar12 + 1;
    *(undefined *)(iVar8 + 0x7b) = 4;
    *(undefined2 *)(iVar8 + 100) = 2;
    bVar3 = *(byte *)(unaff_s11 + 0x19);
    *(undefined2 *)(iVar8 + 0x12) = 0x4e2;
    *(byte *)(iVar8 + 0x19) = bVar3;
    if (uVar15 << 1 <= (uint)bVar3) {
      uVar12 = *unaff_s3;
      FUN_00011a90(1);
      uVar15 = uVar15 + uVar12 & 0xffff;
      *(undefined2 *)(iVar8 + 0x60) = 1;
    }
    uVar15 = uVar15 * 2 + bVar2 + 2 & 0xffff;
    uVar10 = FUN_00011ab8(uVar15,bVar1);
    *(undefined4 *)(iVar8 + 0x58) = uVar10;
    iVar14 = CONCAT22(uVar7,uVar5);
    *(uint *)(iVar8 + 0x54) = (uint)bVar2 * 0x4e2 + -0x21;
    _L0(iVar8 + 0x28,1);
    uVar12 = 0x3a8 - (uVar6 & 0x3ff);
    if (0x270 < uVar12) {
      uVar12 = 0x137 - (uVar6 & 0x3ff);
      iVar14 = iVar14 + 1;
    }
    *(ushort *)(iVar8 + 0x2c) = uVar12;
    *(int *)(iVar8 + 0x28) = iVar14;
    *(undefined2 *)(iVar8 + 0x10) = 0x6000;
    *(short *)(iVar8 + 0x76) = *(short *)(iVar8 + 0x74) * 0x5c + 0x8e;
    *(undefined4 *)(iVar8 + 0x1c) = 0;
    *(undefined4 *)(iVar8 + 0x24) = 0;
    *(undefined4 *)(iVar8 + 0x20) = 0;
    _L0(iVar8,2);
    uStack00000028 = *(undefined2 *)(iVar8 + 0x78);
    uStack0000002c = 2;
    uStack00000030 = 2;
    sStack00000038 = *(short *)(iVar8 + 0x74);
    *(byte *)(iVar8 + 0x7e) = *(byte *)(iVar8 + 0x7e) | 2;
    uStack0000001c = 0;
    uStack00000020 = 0;
    uStack00000024 = 0;
    uStack00000032 = 0;
    uStack00000036 = 1;
    uStack0000003a = 1;
    sStack0000003e = sStack00000038 * 0x5c + 0x8e;
    uStack0000002a = uStack00000028;
    _L0(&stack0x00000028,&stack0x0000001c);
    uVar13 = *(uint *)(iVar8 + 8) % (uint)*(ushort *)(iVar8 + 0x78);
    uStack00000034 = (undefined2)uVar13;
    bStack0000003c = (byte)uVar13 & 1;
    iVar14 = _L0(&stack0x00000028,&stack0x0000001c);
    if (iVar14 != 0) {
      uStack00000036 = 0;
      iVar14 = _L0(&stack0x00000028,&stack0x0000001c);
      if (iVar14 == 0) {
        puVar11 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
        *puVar11 = 1;
        uVar6 = uStack0000001c >> 1;
        *(ushort *)(puVar11 + 2) = uVar6;
        *(ushort *)(puVar11 + 4) = uVar6;
        *(ushort *)(puVar11 + 0xe) = uVar6;
        *(ushort *)(puVar11 + 0x10) = uVar6;
        sVar4 = *(short *)(iVar8 + 0x5e);
        puVar11[0x12] = 0;
        *(short *)(puVar11 + 6) = sVar4 + -1;
        *(undefined2 *)(puVar11 + 8) = 3000;
        uVar5 = *(undefined2 *)(iVar8 + 0x60);
        *(undefined2 *)(puVar11 + 0x14) = uVar5;
        *(undefined2 *)(puVar11 + 10) = uVar5;
        *(undefined2 *)(puVar11 + 0xc) = *(undefined2 *)(iVar8 + 0x60);
        uVar13 = FUN_00011c50(uStack00000024,*(undefined4 *)(iVar8 + 8));
        *(short *)(puVar11 + 0x16) = (short)(uVar13 >> 1);
        *(undefined2 *)(puVar11 + 0x18) = 0xffff;
        *(undefined2 *)(puVar11 + 0x1a) = 0xffff;
        *(undefined2 *)(puVar11 + 0x1c) = 0xffff;
        *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
        *(undefined2 *)(puVar11 + 0x20) = 0xffff;
        FUN_00011c76(puVar11);
      }
    }
    *(short *)(iVar9 + 6) = (short)(*(uint *)(iVar8 + 8) % (uint)*(ushort *)(iVar8 + 0x78));
    *(undefined2 *)(iVar9 + 4) = *(undefined2 *)(iVar8 + 0x78);
    *(undefined2 *)(iVar9 + 8) = 2;
    *(undefined2 *)(iVar9 + 10) = *(undefined2 *)(iVar8 + 0x74);
    *(undefined2 *)(iVar9 + 0xc) = 1;
    *(short *)(iVar9 + 0xe) = *(short *)(iVar8 + 0x74) * 0x5c + 0x8e;
    _L0(iVar9);
    *(int *)(iVar8 + 0x50) = iVar9;
    FUN_00011cce(iVar8,uVar15);
    *(byte *)(iVar8 + 0x7e) = *(byte *)(iVar8 + 0x7e) | 1;
  }
  return iVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  int unaff_s0;
  uint unaff_s1;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  ushort uVar11;
  uint uVar12;
  ushort *unaff_s3;
  int iVar13;
  uint uVar14;
  int unaff_s11;
  int in_stack_0000000c;
  ushort uStack0000001c;
  undefined4 uStack00000020;
  undefined2 uStack00000024;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined4 uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  short sStack00000038;
  undefined2 uStack0000003a;
  byte bStack0000003c;
  short sStack0000003e;
  
  iVar8 = _L0();
  uVar6 = _DAT_28008198;
  uVar7 = _DAT_28008196;
  uVar5 = _DAT_28008194;
  uVar14 = (uint)*(ushort *)(in_stack_0000000c + 0x14);
  bVar1 = *(byte *)(in_stack_0000000c + 0x21);
  bVar2 = *(byte *)(in_stack_0000000c + 0x13);
  *(char *)((int)unaff_s3 + 0x11) = (char)((ushort)_DAT_28008154 >> 8);
  if (unaff_s0 == 0) {
    _LVL569(1,0);
  }
  else {
    _LVL531(unaff_s0 + 0x28);
    FUN_00011a28(1,0);
    *(short *)(unaff_s0 + 0x74) = (short)unaff_s1;
    bVar1 = bVar1 >> 5;
    *(ushort *)(unaff_s0 + 0x78) = *unaff_s3 << 1;
    uVar11 = unaff_s3[1];
    *(byte *)(unaff_s0 + 0x6e) = bVar1;
    *(undefined *)(unaff_s0 + 0x71) = 0;
    *(ushort *)(unaff_s0 + 0x5e) = uVar11 + 1;
    *(undefined *)(unaff_s0 + 0x7b) = 4;
    *(undefined2 *)(unaff_s0 + 100) = 2;
    bVar3 = *(byte *)(unaff_s11 + 0x19);
    *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
    *(byte *)(unaff_s0 + 0x19) = bVar3;
    if (uVar14 << 1 <= (uint)bVar3) {
      uVar11 = *unaff_s3;
      FUN_00011a90(1);
      uVar14 = uVar14 + uVar11 & 0xffff;
      *(undefined2 *)(unaff_s0 + 0x60) = 1;
    }
    uVar14 = uVar14 * 2 + bVar2 + 2 & 0xffff;
    uVar9 = FUN_00011ab8(uVar14,bVar1);
    *(undefined4 *)(unaff_s0 + 0x58) = uVar9;
    iVar13 = CONCAT22(uVar7,uVar5);
    *(uint *)(unaff_s0 + 0x54) = (uint)bVar2 * 0x4e2 + -0x21;
    _L0(unaff_s0 + 0x28,1);
    uVar11 = 0x3a8 - (uVar6 & 0x3ff);
    if (0x270 < uVar11) {
      uVar11 = 0x137 - (uVar6 & 0x3ff);
      iVar13 = iVar13 + 1;
    }
    *(ushort *)(unaff_s0 + 0x2c) = uVar11;
    *(int *)(unaff_s0 + 0x28) = iVar13;
    *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
    *(short *)(unaff_s0 + 0x76) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
    *(undefined4 *)(unaff_s0 + 0x1c) = 0;
    *(undefined4 *)(unaff_s0 + 0x24) = 0;
    *(undefined4 *)(unaff_s0 + 0x20) = 0;
    _L0(2);
    uStack00000028 = *(undefined2 *)(unaff_s0 + 0x78);
    uStack0000002c = 2;
    uStack00000030 = 2;
    sStack00000038 = *(short *)(unaff_s0 + 0x74);
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 2;
    uStack0000001c = 0;
    uStack00000020 = 0;
    uStack00000024 = 0;
    uStack00000032 = 0;
    uStack00000036 = 1;
    uStack0000003a = 1;
    sStack0000003e = sStack00000038 * 0x5c + 0x8e;
    uStack0000002a = uStack00000028;
    _L0(&stack0x00000028,&stack0x0000001c);
    uVar12 = *(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78);
    uStack00000034 = (undefined2)uVar12;
    bStack0000003c = (byte)uVar12 & 1;
    iVar13 = _L0(&stack0x00000028,&stack0x0000001c);
    if (iVar13 != 0) {
      uStack00000036 = 0;
      iVar13 = _L0(&stack0x00000028,&stack0x0000001c);
      if (iVar13 == 0) {
        puVar10 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
        *puVar10 = 1;
        uVar6 = uStack0000001c >> 1;
        *(ushort *)(puVar10 + 2) = uVar6;
        *(ushort *)(puVar10 + 4) = uVar6;
        *(ushort *)(puVar10 + 0xe) = uVar6;
        *(ushort *)(puVar10 + 0x10) = uVar6;
        sVar4 = *(short *)(unaff_s0 + 0x5e);
        puVar10[0x12] = 0;
        *(short *)(puVar10 + 6) = sVar4 + -1;
        *(undefined2 *)(puVar10 + 8) = 3000;
        uVar5 = *(undefined2 *)(unaff_s0 + 0x60);
        *(undefined2 *)(puVar10 + 0x14) = uVar5;
        *(undefined2 *)(puVar10 + 10) = uVar5;
        *(undefined2 *)(puVar10 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
        uVar12 = FUN_00011c50(uStack00000024,*(undefined4 *)(unaff_s0 + 8));
        *(short *)(puVar10 + 0x16) = (short)(uVar12 >> 1);
        *(undefined2 *)(puVar10 + 0x18) = 0xffff;
        *(undefined2 *)(puVar10 + 0x1a) = 0xffff;
        *(undefined2 *)(puVar10 + 0x1c) = 0xffff;
        *(undefined2 *)(puVar10 + 0x1e) = 0xffff;
        *(undefined2 *)(puVar10 + 0x20) = 0xffff;
        FUN_00011c76(puVar10);
      }
    }
    *(short *)(iVar8 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
    *(undefined2 *)(iVar8 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
    *(undefined2 *)(iVar8 + 8) = 2;
    *(undefined2 *)(iVar8 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
    *(undefined2 *)(iVar8 + 0xc) = 1;
    *(short *)(iVar8 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
    _L0(iVar8);
    *(int *)(unaff_s0 + 0x50) = iVar8;
    FUN_00011cce(uVar14);
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  }
  return;
}



void _LVL531(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int unaff_s0;
  uint unaff_s1;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  ushort uVar7;
  int unaff_s2;
  ushort *unaff_s3;
  int unaff_s4;
  uint uVar8;
  int unaff_s5;
  uint unaff_s6;
  uint uVar9;
  uint unaff_s8;
  ushort unaff_s9;
  uint unaff_s10;
  int unaff_s11;
  ushort uStack0000001c;
  undefined4 uStack00000020;
  undefined2 uStack00000024;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined4 uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  short sStack00000038;
  undefined2 uStack0000003a;
  byte bStack0000003c;
  short sStack0000003e;
  
  _LVL531();
  FUN_00011a28(1,0);
  *(short *)(unaff_s0 + 0x74) = (short)unaff_s1;
  *(ushort *)(unaff_s0 + 0x78) = *unaff_s3 << 1;
  uVar7 = unaff_s3[1];
  *(char *)(unaff_s0 + 0x6e) = (char)(unaff_s8 >> 5);
  *(undefined *)(unaff_s0 + 0x71) = 0;
  *(ushort *)(unaff_s0 + 0x5e) = uVar7 + 1;
  *(undefined *)(unaff_s0 + 0x7b) = 4;
  *(undefined2 *)(unaff_s0 + 100) = 2;
  bVar1 = *(byte *)(unaff_s11 + 0x19);
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  *(byte *)(unaff_s0 + 0x19) = bVar1;
  if (unaff_s6 << 1 <= (uint)bVar1) {
    uVar7 = *unaff_s3;
    FUN_00011a90(1);
    unaff_s6 = unaff_s6 + uVar7 & 0xffff;
    *(undefined2 *)(unaff_s0 + 0x60) = 1;
  }
  uVar9 = unaff_s6 * 2 + unaff_s5 + 2 & 0xffff;
  uVar4 = FUN_00011ab8(uVar9,unaff_s8 >> 5);
  *(undefined4 *)(unaff_s0 + 0x58) = uVar4;
  uVar8 = unaff_s4 << 0x10 | unaff_s10 >> 0x10;
  *(int *)(unaff_s0 + 0x54) = unaff_s5 * 0x4e2 + -0x21;
  _L0(1);
  uVar7 = 0x3a8 - (unaff_s9 & 0x3ff);
  if (0x270 < uVar7) {
    uVar7 = 0x137 - (unaff_s9 & 0x3ff);
    uVar8 = uVar8 + 1;
  }
  *(ushort *)(unaff_s0 + 0x2c) = uVar7;
  *(uint *)(unaff_s0 + 0x28) = uVar8;
  *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
  *(short *)(unaff_s0 + 0x76) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  _L0(2);
  uStack00000028 = *(undefined2 *)(unaff_s0 + 0x78);
  uStack0000002c = 2;
  uStack00000030 = 2;
  sStack00000038 = *(short *)(unaff_s0 + 0x74);
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 2;
  uStack0000001c = 0;
  uStack00000020 = 0;
  uStack00000024 = 0;
  uStack00000032 = 0;
  uStack00000036 = 1;
  uStack0000003a = 1;
  sStack0000003e = sStack00000038 * 0x5c + 0x8e;
  uStack0000002a = uStack00000028;
  _L0(&stack0x00000028,&stack0x0000001c);
  uVar8 = *(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78);
  uStack00000034 = (undefined2)uVar8;
  bStack0000003c = (byte)uVar8 & 1;
  iVar5 = _L0(&stack0x00000028,&stack0x0000001c);
  if (iVar5 != 0) {
    uStack00000036 = 0;
    iVar5 = _L0(&stack0x00000028,&stack0x0000001c);
    if (iVar5 == 0) {
      puVar6 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
      *puVar6 = 1;
      uVar7 = uStack0000001c >> 1;
      *(ushort *)(puVar6 + 2) = uVar7;
      *(ushort *)(puVar6 + 4) = uVar7;
      *(ushort *)(puVar6 + 0xe) = uVar7;
      *(ushort *)(puVar6 + 0x10) = uVar7;
      sVar2 = *(short *)(unaff_s0 + 0x5e);
      puVar6[0x12] = 0;
      *(short *)(puVar6 + 6) = sVar2 + -1;
      *(undefined2 *)(puVar6 + 8) = 3000;
      uVar3 = *(undefined2 *)(unaff_s0 + 0x60);
      *(undefined2 *)(puVar6 + 0x14) = uVar3;
      *(undefined2 *)(puVar6 + 10) = uVar3;
      *(undefined2 *)(puVar6 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
      uVar8 = FUN_00011c50(uStack00000024,*(undefined4 *)(unaff_s0 + 8));
      *(short *)(puVar6 + 0x16) = (short)(uVar8 >> 1);
      *(undefined2 *)(puVar6 + 0x18) = 0xffff;
      *(undefined2 *)(puVar6 + 0x1a) = 0xffff;
      *(undefined2 *)(puVar6 + 0x1c) = 0xffff;
      *(undefined2 *)(puVar6 + 0x1e) = 0xffff;
      *(undefined2 *)(puVar6 + 0x20) = 0xffff;
      FUN_00011c76(puVar6);
    }
  }
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce(uVar9);
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void FUN_00011a28(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int unaff_s0;
  uint unaff_s1;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  ushort uVar7;
  int unaff_s2;
  ushort *unaff_s3;
  int unaff_s4;
  uint uVar8;
  int unaff_s5;
  uint unaff_s6;
  uint uVar9;
  uint unaff_s8;
  ushort unaff_s9;
  uint unaff_s10;
  int unaff_s11;
  ushort uStack0000001c;
  undefined4 uStack00000020;
  undefined2 uStack00000024;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined4 uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  short sStack00000038;
  undefined2 uStack0000003a;
  byte bStack0000003c;
  short sStack0000003e;
  
  FUN_00011a28();
  *(short *)(unaff_s0 + 0x74) = (short)unaff_s1;
  *(ushort *)(unaff_s0 + 0x78) = *unaff_s3 << 1;
  uVar7 = unaff_s3[1];
  *(char *)(unaff_s0 + 0x6e) = (char)(unaff_s8 >> 5);
  *(undefined *)(unaff_s0 + 0x71) = 0;
  *(ushort *)(unaff_s0 + 0x5e) = uVar7 + 1;
  *(undefined *)(unaff_s0 + 0x7b) = 4;
  *(undefined2 *)(unaff_s0 + 100) = 2;
  bVar1 = *(byte *)(unaff_s11 + 0x19);
  *(undefined2 *)(unaff_s0 + 0x12) = 0x4e2;
  *(byte *)(unaff_s0 + 0x19) = bVar1;
  if (unaff_s6 << 1 <= (uint)bVar1) {
    uVar7 = *unaff_s3;
    FUN_00011a90(1);
    unaff_s6 = unaff_s6 + uVar7 & 0xffff;
    *(undefined2 *)(unaff_s0 + 0x60) = 1;
  }
  uVar9 = unaff_s6 * 2 + unaff_s5 + 2 & 0xffff;
  uVar4 = FUN_00011ab8(uVar9,unaff_s8 >> 5);
  *(undefined4 *)(unaff_s0 + 0x58) = uVar4;
  uVar8 = unaff_s4 << 0x10 | unaff_s10 >> 0x10;
  *(int *)(unaff_s0 + 0x54) = unaff_s5 * 0x4e2 + -0x21;
  _L0(1);
  uVar7 = 0x3a8 - (unaff_s9 & 0x3ff);
  if (0x270 < uVar7) {
    uVar7 = 0x137 - (unaff_s9 & 0x3ff);
    uVar8 = uVar8 + 1;
  }
  *(ushort *)(unaff_s0 + 0x2c) = uVar7;
  *(uint *)(unaff_s0 + 0x28) = uVar8;
  *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
  *(short *)(unaff_s0 + 0x76) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  _L0(2);
  uStack00000028 = *(undefined2 *)(unaff_s0 + 0x78);
  uStack0000002c = 2;
  uStack00000030 = 2;
  sStack00000038 = *(short *)(unaff_s0 + 0x74);
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 2;
  uStack0000001c = 0;
  uStack00000020 = 0;
  uStack00000024 = 0;
  uStack00000032 = 0;
  uStack00000036 = 1;
  uStack0000003a = 1;
  sStack0000003e = sStack00000038 * 0x5c + 0x8e;
  uStack0000002a = uStack00000028;
  _L0(&stack0x00000028,&stack0x0000001c);
  uVar8 = *(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78);
  uStack00000034 = (undefined2)uVar8;
  bStack0000003c = (byte)uVar8 & 1;
  iVar5 = _L0(&stack0x00000028,&stack0x0000001c);
  if (iVar5 != 0) {
    uStack00000036 = 0;
    iVar5 = _L0(&stack0x00000028,&stack0x0000001c);
    if (iVar5 == 0) {
      puVar6 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
      *puVar6 = 1;
      uVar7 = uStack0000001c >> 1;
      *(ushort *)(puVar6 + 2) = uVar7;
      *(ushort *)(puVar6 + 4) = uVar7;
      *(ushort *)(puVar6 + 0xe) = uVar7;
      *(ushort *)(puVar6 + 0x10) = uVar7;
      sVar2 = *(short *)(unaff_s0 + 0x5e);
      puVar6[0x12] = 0;
      *(short *)(puVar6 + 6) = sVar2 + -1;
      *(undefined2 *)(puVar6 + 8) = 3000;
      uVar3 = *(undefined2 *)(unaff_s0 + 0x60);
      *(undefined2 *)(puVar6 + 0x14) = uVar3;
      *(undefined2 *)(puVar6 + 10) = uVar3;
      *(undefined2 *)(puVar6 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
      uVar8 = FUN_00011c50(uStack00000024,*(undefined4 *)(unaff_s0 + 8));
      *(short *)(puVar6 + 0x16) = (short)(uVar8 >> 1);
      *(undefined2 *)(puVar6 + 0x18) = 0xffff;
      *(undefined2 *)(puVar6 + 0x1a) = 0xffff;
      *(undefined2 *)(puVar6 + 0x1c) = 0xffff;
      *(undefined2 *)(puVar6 + 0x1e) = 0xffff;
      *(undefined2 *)(puVar6 + 0x20) = 0xffff;
      FUN_00011c76(puVar6);
    }
  }
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce(uVar9);
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void FUN_00011a90(void)

{
  short sVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint unaff_s1;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  ushort uVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  uint uVar7;
  int unaff_s5;
  int unaff_s6;
  uint uVar8;
  ushort unaff_s9;
  uint unaff_s10;
  ushort uStack0000001c;
  undefined4 uStack00000020;
  undefined2 uStack00000024;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined4 uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  short sStack00000038;
  undefined2 uStack0000003a;
  byte bStack0000003c;
  short sStack0000003e;
  
  FUN_00011a90();
  *(undefined2 *)(unaff_s0 + 0x60) = 1;
  uVar8 = (unaff_s6 + unaff_s3 & 0xffffU) * 2 + unaff_s5 + 2 & 0xffff;
  uVar3 = FUN_00011ab8(uVar8);
  *(undefined4 *)(unaff_s0 + 0x58) = uVar3;
  uVar7 = unaff_s4 << 0x10 | unaff_s10;
  *(int *)(unaff_s0 + 0x54) = unaff_s5 * 0x4e2 + -0x21;
  _L0(1);
  uVar6 = 0x3a8 - (unaff_s9 & 0x3ff);
  if (0x270 < uVar6) {
    uVar6 = 0x137 - (unaff_s9 & 0x3ff);
    uVar7 = uVar7 + 1;
  }
  *(ushort *)(unaff_s0 + 0x2c) = uVar6;
  *(uint *)(unaff_s0 + 0x28) = uVar7;
  *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
  *(short *)(unaff_s0 + 0x76) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  _L0(2);
  uStack00000028 = *(undefined2 *)(unaff_s0 + 0x78);
  uStack0000002c = 2;
  uStack00000030 = 2;
  sStack00000038 = *(short *)(unaff_s0 + 0x74);
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 2;
  uStack0000001c = 0;
  uStack00000020 = 0;
  uStack00000024 = 0;
  uStack00000032 = 0;
  uStack00000036 = 1;
  uStack0000003a = 1;
  sStack0000003e = sStack00000038 * 0x5c + 0x8e;
  uStack0000002a = uStack00000028;
  _L0(&stack0x00000028,&stack0x0000001c);
  uVar7 = *(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78);
  uStack00000034 = (undefined2)uVar7;
  bStack0000003c = (byte)uVar7 & 1;
  iVar4 = _L0(&stack0x00000028,&stack0x0000001c);
  if (iVar4 != 0) {
    uStack00000036 = 0;
    iVar4 = _L0(&stack0x00000028,&stack0x0000001c);
    if (iVar4 == 0) {
      puVar5 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
      *puVar5 = 1;
      uVar6 = uStack0000001c >> 1;
      *(ushort *)(puVar5 + 2) = uVar6;
      *(ushort *)(puVar5 + 4) = uVar6;
      *(ushort *)(puVar5 + 0xe) = uVar6;
      *(ushort *)(puVar5 + 0x10) = uVar6;
      sVar1 = *(short *)(unaff_s0 + 0x5e);
      puVar5[0x12] = 0;
      *(short *)(puVar5 + 6) = sVar1 + -1;
      *(undefined2 *)(puVar5 + 8) = 3000;
      uVar2 = *(undefined2 *)(unaff_s0 + 0x60);
      *(undefined2 *)(puVar5 + 0x14) = uVar2;
      *(undefined2 *)(puVar5 + 10) = uVar2;
      *(undefined2 *)(puVar5 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
      uVar7 = FUN_00011c50(uStack00000024,*(undefined4 *)(unaff_s0 + 8));
      *(short *)(puVar5 + 0x16) = (short)(uVar7 >> 1);
      *(undefined2 *)(puVar5 + 0x18) = 0xffff;
      *(undefined2 *)(puVar5 + 0x1a) = 0xffff;
      *(undefined2 *)(puVar5 + 0x1c) = 0xffff;
      *(undefined2 *)(puVar5 + 0x1e) = 0xffff;
      *(undefined2 *)(puVar5 + 0x20) = 0xffff;
      FUN_00011c76(puVar5);
    }
  }
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce(uVar8);
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void FUN_00011ab8(void)

{
  short sVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint unaff_s1;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  ushort uVar6;
  int unaff_s2;
  int unaff_s4;
  uint uVar7;
  int unaff_s5;
  ushort unaff_s9;
  uint unaff_s10;
  ushort uStack0000001c;
  undefined4 uStack00000020;
  undefined2 uStack00000024;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined4 uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  short sStack00000038;
  undefined2 uStack0000003a;
  byte bStack0000003c;
  short sStack0000003e;
  
  uVar3 = FUN_00011ab8();
  *(undefined4 *)(unaff_s0 + 0x58) = uVar3;
  uVar7 = unaff_s4 << 0x10 | unaff_s10;
  *(int *)(unaff_s0 + 0x54) = unaff_s5 * 0x4e2 + -0x21;
  _L0(1);
  uVar6 = 0x3a8 - (unaff_s9 & 0x3ff);
  if (0x270 < uVar6) {
    uVar6 = 0x137 - (unaff_s9 & 0x3ff);
    uVar7 = uVar7 + 1;
  }
  *(ushort *)(unaff_s0 + 0x2c) = uVar6;
  *(uint *)(unaff_s0 + 0x28) = uVar7;
  *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
  *(short *)(unaff_s0 + 0x76) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  _L0(2);
  uStack00000028 = *(undefined2 *)(unaff_s0 + 0x78);
  uStack0000002c = 2;
  uStack00000030 = 2;
  sStack00000038 = *(short *)(unaff_s0 + 0x74);
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 2;
  uStack0000001c = 0;
  uStack00000020 = 0;
  uStack00000024 = 0;
  uStack00000032 = 0;
  uStack00000036 = 1;
  uStack0000003a = 1;
  sStack0000003e = sStack00000038 * 0x5c + 0x8e;
  uStack0000002a = uStack00000028;
  _L0(&stack0x00000028,&stack0x0000001c);
  uVar7 = *(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78);
  uStack00000034 = (undefined2)uVar7;
  bStack0000003c = (byte)uVar7 & 1;
  iVar4 = _L0(&stack0x00000028,&stack0x0000001c);
  if (iVar4 != 0) {
    uStack00000036 = 0;
    iVar4 = _L0(&stack0x00000028,&stack0x0000001c);
    if (iVar4 == 0) {
      puVar5 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
      *puVar5 = 1;
      uVar6 = uStack0000001c >> 1;
      *(ushort *)(puVar5 + 2) = uVar6;
      *(ushort *)(puVar5 + 4) = uVar6;
      *(ushort *)(puVar5 + 0xe) = uVar6;
      *(ushort *)(puVar5 + 0x10) = uVar6;
      sVar1 = *(short *)(unaff_s0 + 0x5e);
      puVar5[0x12] = 0;
      *(short *)(puVar5 + 6) = sVar1 + -1;
      *(undefined2 *)(puVar5 + 8) = 3000;
      uVar2 = *(undefined2 *)(unaff_s0 + 0x60);
      *(undefined2 *)(puVar5 + 0x14) = uVar2;
      *(undefined2 *)(puVar5 + 10) = uVar2;
      *(undefined2 *)(puVar5 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
      uVar7 = FUN_00011c50(uStack00000024,*(undefined4 *)(unaff_s0 + 8));
      *(short *)(puVar5 + 0x16) = (short)(uVar7 >> 1);
      *(undefined2 *)(puVar5 + 0x18) = 0xffff;
      *(undefined2 *)(puVar5 + 0x1a) = 0xffff;
      *(undefined2 *)(puVar5 + 0x1c) = 0xffff;
      *(undefined2 *)(puVar5 + 0x1e) = 0xffff;
      *(undefined2 *)(puVar5 + 0x20) = 0xffff;
      FUN_00011c76(puVar5);
    }
  }
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void _L0(void)

{
  short sVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint unaff_s1;
  int iVar3;
  undefined *puVar4;
  ushort uVar5;
  uint uVar6;
  int unaff_s2;
  int unaff_s4;
  short unaff_s9;
  ushort uStack0000001c;
  undefined4 uStack00000020;
  undefined2 uStack00000024;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined4 uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  short sStack00000038;
  undefined2 uStack0000003a;
  byte bStack0000003c;
  short sStack0000003e;
  
  _L0();
  uVar5 = 0x3a8 - unaff_s9;
  if (0x270 < uVar5) {
    uVar5 = 0x137 - unaff_s9;
    unaff_s4 = unaff_s4 + 1;
  }
  *(ushort *)(unaff_s0 + 0x2c) = uVar5;
  *(int *)(unaff_s0 + 0x28) = unaff_s4;
  *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
  *(short *)(unaff_s0 + 0x76) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  _L0(2);
  uStack00000028 = *(undefined2 *)(unaff_s0 + 0x78);
  uStack0000002c = 2;
  uStack00000030 = 2;
  sStack00000038 = *(short *)(unaff_s0 + 0x74);
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 2;
  uStack0000001c = 0;
  uStack00000020 = 0;
  uStack00000024 = 0;
  uStack00000032 = 0;
  uStack00000036 = 1;
  uStack0000003a = 1;
  sStack0000003e = sStack00000038 * 0x5c + 0x8e;
  uStack0000002a = uStack00000028;
  _L0(&stack0x00000028,&stack0x0000001c);
  uVar6 = *(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78);
  uStack00000034 = (undefined2)uVar6;
  bStack0000003c = (byte)uVar6 & 1;
  iVar3 = _L0(&stack0x00000028,&stack0x0000001c);
  if (iVar3 != 0) {
    uStack00000036 = 0;
    iVar3 = _L0(&stack0x00000028,&stack0x0000001c);
    if (iVar3 == 0) {
      puVar4 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
      *puVar4 = 1;
      uVar5 = uStack0000001c >> 1;
      *(ushort *)(puVar4 + 2) = uVar5;
      *(ushort *)(puVar4 + 4) = uVar5;
      *(ushort *)(puVar4 + 0xe) = uVar5;
      *(ushort *)(puVar4 + 0x10) = uVar5;
      sVar1 = *(short *)(unaff_s0 + 0x5e);
      puVar4[0x12] = 0;
      *(short *)(puVar4 + 6) = sVar1 + -1;
      *(undefined2 *)(puVar4 + 8) = 3000;
      uVar2 = *(undefined2 *)(unaff_s0 + 0x60);
      *(undefined2 *)(puVar4 + 0x14) = uVar2;
      *(undefined2 *)(puVar4 + 10) = uVar2;
      *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
      uVar6 = FUN_00011c50(uStack00000024,*(undefined4 *)(unaff_s0 + 8));
      *(short *)(puVar4 + 0x16) = (short)(uVar6 >> 1);
      *(undefined2 *)(puVar4 + 0x18) = 0xffff;
      *(undefined2 *)(puVar4 + 0x1a) = 0xffff;
      *(undefined2 *)(puVar4 + 0x1c) = 0xffff;
      *(undefined2 *)(puVar4 + 0x1e) = 0xffff;
      *(undefined2 *)(puVar4 + 0x20) = 0xffff;
      FUN_00011c76(puVar4);
    }
  }
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void _L0(void)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int unaff_s0;
  uint unaff_s1;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int unaff_s2;
  undefined unaff_s4;
  short unaff_s5;
  ushort uStack0000001c;
  undefined4 uStack00000020;
  undefined2 uStack00000024;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined4 uStack0000002c;
  undefined2 uStack00000030;
  undefined uStack00000032;
  undefined2 uStack00000034;
  undefined uStack00000036;
  short sStack00000038;
  byte bStack0000003c;
  short sStack0000003e;
  
  _L0();
  uStack00000028 = *(undefined2 *)(unaff_s0 + 0x78);
  uStack0000002c = 2;
  uStack00000030 = 2;
  sStack00000038 = *(short *)(unaff_s0 + 0x74);
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 2;
  uStack0000001c = 0;
  uStack00000020 = 0;
  uStack00000024 = 0;
  uStack00000032 = 0;
  sStack0000003e = sStack00000038 * unaff_s5 + 0x8e;
  uStack0000002a = uStack00000028;
  uStack00000036 = unaff_s4;
  _L0(&stack0x00000028,&stack0x0000001c);
  uVar6 = *(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78);
  uStack00000034 = (undefined2)uVar6;
  bStack0000003c = (byte)uVar6 & 1;
  iVar4 = _L0(&stack0x00000028,&stack0x0000001c);
  if (iVar4 != 0) {
    uStack00000036 = 0;
    iVar4 = _L0(&stack0x00000028,&stack0x0000001c);
    if (iVar4 == 0) {
      puVar5 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
      *puVar5 = unaff_s4;
      uVar3 = uStack0000001c >> 1;
      *(ushort *)(puVar5 + 2) = uVar3;
      *(ushort *)(puVar5 + 4) = uVar3;
      *(ushort *)(puVar5 + 0xe) = uVar3;
      *(ushort *)(puVar5 + 0x10) = uVar3;
      sVar1 = *(short *)(unaff_s0 + 0x5e);
      puVar5[0x12] = 0;
      *(short *)(puVar5 + 6) = sVar1 + -1;
      *(undefined2 *)(puVar5 + 8) = 3000;
      uVar2 = *(undefined2 *)(unaff_s0 + 0x60);
      *(undefined2 *)(puVar5 + 0x14) = uVar2;
      *(undefined2 *)(puVar5 + 10) = uVar2;
      *(undefined2 *)(puVar5 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
      uVar6 = FUN_00011c50(uStack00000024,*(undefined4 *)(unaff_s0 + 8));
      *(short *)(puVar5 + 0x16) = (short)(uVar6 >> 1);
      *(undefined2 *)(puVar5 + 0x18) = 0xffff;
      *(undefined2 *)(puVar5 + 0x1a) = 0xffff;
      *(undefined2 *)(puVar5 + 0x1c) = 0xffff;
      *(undefined2 *)(puVar5 + 0x1e) = 0xffff;
      *(undefined2 *)(puVar5 + 0x20) = 0xffff;
      FUN_00011c76(puVar5);
    }
  }
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void _L0(void)

{
  short sVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint unaff_s1;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int unaff_s2;
  undefined unaff_s4;
  ushort in_stack_0000001c;
  undefined2 in_stack_00000024;
  undefined2 uStack00000034;
  undefined in_stack_00000036;
  byte bStack0000003c;
  
  _L0();
  uVar5 = *(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78);
  uStack00000034 = (undefined2)uVar5;
  bStack0000003c = (byte)uVar5 & 1;
  iVar3 = _L0(&stack0x00000028,&stack0x0000001c);
  if (iVar3 != 0) {
    in_stack_00000036 = 0;
    iVar3 = _L0(&stack0x00000028,&stack0x0000001c);
    if (iVar3 == 0) {
      puVar4 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
      *puVar4 = unaff_s4;
      in_stack_0000001c = in_stack_0000001c >> 1;
      *(ushort *)(puVar4 + 2) = in_stack_0000001c;
      *(ushort *)(puVar4 + 4) = in_stack_0000001c;
      *(ushort *)(puVar4 + 0xe) = in_stack_0000001c;
      *(ushort *)(puVar4 + 0x10) = in_stack_0000001c;
      sVar1 = *(short *)(unaff_s0 + 0x5e);
      puVar4[0x12] = 0;
      *(short *)(puVar4 + 6) = sVar1 + -1;
      *(undefined2 *)(puVar4 + 8) = 3000;
      uVar2 = *(undefined2 *)(unaff_s0 + 0x60);
      *(undefined2 *)(puVar4 + 0x14) = uVar2;
      *(undefined2 *)(puVar4 + 10) = uVar2;
      *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
      uVar5 = FUN_00011c50(in_stack_00000024,*(undefined4 *)(unaff_s0 + 8));
      *(short *)(puVar4 + 0x16) = (short)(uVar5 >> 1);
      *(undefined2 *)(puVar4 + 0x18) = 0xffff;
      *(undefined2 *)(puVar4 + 0x1a) = 0xffff;
      *(undefined2 *)(puVar4 + 0x1c) = 0xffff;
      *(undefined2 *)(puVar4 + 0x1e) = 0xffff;
      *(undefined2 *)(puVar4 + 0x20) = 0xffff;
      FUN_00011c76(puVar4);
    }
  }
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void _L0(void)

{
  short sVar1;
  undefined2 uVar2;
  int unaff_s0;
  uint unaff_s1;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int unaff_s2;
  undefined unaff_s4;
  ushort in_stack_0000001c;
  undefined2 in_stack_00000024;
  undefined in_stack_00000036;
  
  iVar3 = _L0();
  if (iVar3 != 0) {
    in_stack_00000036 = 0;
    iVar3 = _L0(&stack0x00000028,&stack0x0000001c);
    if (iVar3 == 0) {
      puVar4 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
      *puVar4 = unaff_s4;
      in_stack_0000001c = in_stack_0000001c >> 1;
      *(ushort *)(puVar4 + 2) = in_stack_0000001c;
      *(ushort *)(puVar4 + 4) = in_stack_0000001c;
      *(ushort *)(puVar4 + 0xe) = in_stack_0000001c;
      *(ushort *)(puVar4 + 0x10) = in_stack_0000001c;
      sVar1 = *(short *)(unaff_s0 + 0x5e);
      puVar4[0x12] = 0;
      *(short *)(puVar4 + 6) = sVar1 + -1;
      *(undefined2 *)(puVar4 + 8) = 3000;
      uVar2 = *(undefined2 *)(unaff_s0 + 0x60);
      *(undefined2 *)(puVar4 + 0x14) = uVar2;
      *(undefined2 *)(puVar4 + 10) = uVar2;
      *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
      uVar5 = FUN_00011c50(in_stack_00000024,*(undefined4 *)(unaff_s0 + 8));
      *(short *)(puVar4 + 0x16) = (short)(uVar5 >> 1);
      *(undefined2 *)(puVar4 + 0x18) = 0xffff;
      *(undefined2 *)(puVar4 + 0x1a) = 0xffff;
      *(undefined2 *)(puVar4 + 0x1c) = 0xffff;
      *(undefined2 *)(puVar4 + 0x1e) = 0xffff;
      *(undefined2 *)(puVar4 + 0x20) = 0xffff;
      FUN_00011c76(puVar4);
    }
  }
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void _L0(void)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int unaff_s0;
  uint unaff_s1;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int unaff_s2;
  undefined unaff_s4;
  ushort in_stack_0000001c;
  undefined2 in_stack_00000024;
  
  iVar4 = _L0();
  if (iVar4 == 0) {
    puVar5 = (undefined *)FUN_00011bf8(0x109,(unaff_s1 & 0xff) << 8 | 1,2,0x22);
    *puVar5 = unaff_s4;
    uVar3 = in_stack_0000001c >> 1;
    *(ushort *)(puVar5 + 2) = uVar3;
    *(ushort *)(puVar5 + 4) = uVar3;
    *(ushort *)(puVar5 + 0xe) = uVar3;
    *(ushort *)(puVar5 + 0x10) = uVar3;
    sVar1 = *(short *)(unaff_s0 + 0x5e);
    puVar5[0x12] = 0;
    *(short *)(puVar5 + 6) = sVar1 + -1;
    *(undefined2 *)(puVar5 + 8) = 3000;
    uVar2 = *(undefined2 *)(unaff_s0 + 0x60);
    *(undefined2 *)(puVar5 + 0x14) = uVar2;
    *(undefined2 *)(puVar5 + 10) = uVar2;
    *(undefined2 *)(puVar5 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
    uVar6 = FUN_00011c50(in_stack_00000024,*(undefined4 *)(unaff_s0 + 8));
    *(short *)(puVar5 + 0x16) = (short)(uVar6 >> 1);
    *(undefined2 *)(puVar5 + 0x18) = 0xffff;
    *(undefined2 *)(puVar5 + 0x1a) = 0xffff;
    *(undefined2 *)(puVar5 + 0x1c) = 0xffff;
    *(undefined2 *)(puVar5 + 0x1e) = 0xffff;
    *(undefined2 *)(puVar5 + 0x20) = 0xffff;
    FUN_00011c76(puVar5);
  }
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void FUN_00011bf8(void)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int unaff_s0;
  undefined *puVar4;
  uint uVar5;
  int unaff_s2;
  undefined unaff_s4;
  ushort in_stack_0000001c;
  undefined2 in_stack_00000024;
  
  puVar4 = (undefined *)FUN_00011bf8();
  *puVar4 = unaff_s4;
  uVar3 = in_stack_0000001c >> 1;
  *(ushort *)(puVar4 + 2) = uVar3;
  *(ushort *)(puVar4 + 4) = uVar3;
  *(ushort *)(puVar4 + 0xe) = uVar3;
  *(ushort *)(puVar4 + 0x10) = uVar3;
  sVar1 = *(short *)(unaff_s0 + 0x5e);
  puVar4[0x12] = 0;
  *(short *)(puVar4 + 6) = sVar1 + -1;
  *(undefined2 *)(puVar4 + 8) = 3000;
  uVar2 = *(undefined2 *)(unaff_s0 + 0x60);
  *(undefined2 *)(puVar4 + 0x14) = uVar2;
  *(undefined2 *)(puVar4 + 10) = uVar2;
  *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
  uVar5 = FUN_00011c50(in_stack_00000024,*(undefined4 *)(unaff_s0 + 8));
  *(short *)(puVar4 + 0x16) = (short)(uVar5 >> 1);
  *(undefined2 *)(puVar4 + 0x18) = 0xffff;
  *(undefined2 *)(puVar4 + 0x1a) = 0xffff;
  *(undefined2 *)(puVar4 + 0x1c) = 0xffff;
  *(undefined2 *)(puVar4 + 0x1e) = 0xffff;
  *(undefined2 *)(puVar4 + 0x20) = 0xffff;
  FUN_00011c76(puVar4);
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void FUN_00011c50(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int unaff_s2;
  
  uVar1 = FUN_00011c50();
  *(short *)(unaff_s1 + 0x16) = (short)(uVar1 >> 1);
  *(undefined2 *)(unaff_s1 + 0x18) = 0xffff;
  *(undefined2 *)(unaff_s1 + 0x1a) = 0xffff;
  *(undefined2 *)(unaff_s1 + 0x1c) = 0xffff;
  *(undefined2 *)(unaff_s1 + 0x1e) = 0xffff;
  *(undefined2 *)(unaff_s1 + 0x20) = 0xffff;
  FUN_00011c76();
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void FUN_00011c76(void)

{
  int unaff_s0;
  int unaff_s2;
  
  FUN_00011c76();
  *(short *)(unaff_s2 + 6) = (short)(*(uint *)(unaff_s0 + 8) % (uint)*(ushort *)(unaff_s0 + 0x78));
  *(undefined2 *)(unaff_s2 + 4) = *(undefined2 *)(unaff_s0 + 0x78);
  *(undefined2 *)(unaff_s2 + 8) = 2;
  *(undefined2 *)(unaff_s2 + 10) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s2 + 0xc) = 1;
  *(short *)(unaff_s2 + 0xe) = *(short *)(unaff_s0 + 0x74) * 0x5c + 0x8e;
  _L0();
  *(int *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 unaff_s2;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x50) = unaff_s2;
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void FUN_00011cce(void)

{
  int unaff_s0;
  
  FUN_00011cce();
  *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 1;
  return;
}



void _LVL569(void)

{
  _LVL569();
  return;
}



void lld_evt_slave_update(llcp_con_upd_ind *param_pdu,ea_elt_tag *elt_old)

{
  byte bVar1;
  short sVar2;
  ea_elt_tag *peVar3;
  co_list_hdr *pcVar4;
  int iVar5;
  
  if (*(uint16_t *)&elt_old[2].timestamp == param_pdu->instant) {
    iVar5 = *(int *)((uint)*(ushort *)&elt_old[2].ea_cb_start * 4);
    if ((((uint)*(ushort *)&elt_old[2].ea_cb_stop != (uint)param_pdu->interv << 1) ||
        ((uint)*(ushort *)((int)&elt_old[2].linked_element + 2) != param_pdu->latency + 1)) ||
       (*(short *)(iVar5 + 0x54) != *(short *)(iVar5 + 0x56))) {
      *(ushort *)(iVar5 + 0x5c) = *(ushort *)(iVar5 + 0x5c) | 0x80;
    }
    *(uint16_t *)&elt_old[2].ea_cb_stop = param_pdu->interv << 1;
    *(uint16_t *)((int)&elt_old[2].linked_element + 2) = param_pdu->latency + 1;
    *(uint16_t *)&elt_old[2].linked_element = param_pdu->instant;
    *(undefined *)((int)&elt_old[2].delay + 1) = 1;
    *(byte *)((int)&elt_old[2].ea_cb_cancel + 2) = *(byte *)((int)&elt_old[2].ea_cb_cancel + 2) | 9;
    return;
  }
  peVar3 = (ea_elt_tag *)_L0(0x58);
  if (peVar3 != (ea_elt_tag *)0x0) {
    (*pcRam00000000)(elt_old,0x2c,pcRam00000000);
    _LVL580(&peVar3->env);
    *(undefined2 *)&peVar3[2].ea_cb_start = *(undefined2 *)&elt_old[2].ea_cb_start;
    *(uint16_t *)&peVar3[2].ea_cb_stop = param_pdu->interv << 1;
    *(uint16_t *)((int)&peVar3[2].linked_element + 2) = param_pdu->latency + 1;
    *(undefined *)((int)&peVar3[2].ea_cb_stop + 3) = 4;
    peVar3[2].current_prio = elt_old[2].current_prio;
    *(undefined2 *)&peVar3[2].asap_limit = *(undefined2 *)&elt_old[2].asap_limit;
    *(byte *)((int)&peVar3[2].ea_cb_cancel + 2) = *(byte *)((int)&peVar3[2].ea_cb_cancel + 2) | 1;
    peVar3->duration_min = 0xffff;
    pcVar4 = (co_list_hdr *)
             FUN_00011e28((param_pdu->win_off + (ushort)param_pdu->win_size) * 2 +
                          *(short *)&elt_old[2].ea_cb_stop);
    peVar3[2].hdr.next = pcVar4;
    peVar3[1].env = (void *)((uint)param_pdu->win_size * 0x4e2 + -0x21);
    elt_old->linked_element = peVar3;
    bVar1 = *(byte *)((int)&elt_old[2].ea_cb_cancel + 2);
    sVar2 = *(short *)&elt_old[2].timestamp;
    *(uint16_t *)&elt_old[2].linked_element = param_pdu->instant;
    *(undefined *)((int)&elt_old[2].delay + 1) = 1;
    *(uint16_t *)((int)&elt_old[2].asap_limit + 2) = param_pdu->win_off;
    *(uint8_t *)&elt_old[2].delay = param_pdu->win_size;
    *(byte *)((int)&elt_old[2].ea_cb_cancel + 2) = bVar1 | 1;
    if (sVar2 == (uint16_t)(param_pdu->instant - 1)) {
      *(byte *)((int)&elt_old[2].ea_cb_cancel + 2) = bVar1 | 9;
    }
  }
  return;
}



void _L0(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = _L0();
  if (iVar2 != 0) {
    (*pcRam00000000)(0x2c,pcRam00000000);
    _LVL580(iVar2 + 0x28);
    *(undefined2 *)(iVar2 + 0x74) = *(undefined2 *)(unaff_s0 + 0x74);
    *(short *)(iVar2 + 0x78) = *(short *)(unaff_s1 + 4) << 1;
    *(short *)(iVar2 + 0x5e) = *(short *)(unaff_s1 + 6) + 1;
    *(undefined *)(iVar2 + 0x7b) = 4;
    *(undefined *)(iVar2 + 0x6e) = *(undefined *)(unaff_s0 + 0x6e);
    *(undefined2 *)(iVar2 + 100) = *(undefined2 *)(unaff_s0 + 100);
    *(byte *)(iVar2 + 0x7e) = *(byte *)(iVar2 + 0x7e) | 1;
    *(undefined2 *)(iVar2 + 0x12) = 0xffff;
    uVar3 = FUN_00011e28((*(short *)(unaff_s1 + 2) + (ushort)*(byte *)(unaff_s1 + 1)) * 2 +
                         *(short *)(unaff_s0 + 0x78));
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(uint *)(iVar2 + 0x54) = (uint)*(byte *)(unaff_s1 + 1) * 0x4e2 + -0x21;
    *(int *)(unaff_s0 + 4) = iVar2;
    bVar1 = *(byte *)(unaff_s0 + 0x7e);
    *(undefined2 *)(unaff_s0 + 0x5c) = *(undefined2 *)(unaff_s1 + 10);
    *(undefined *)(unaff_s0 + 0x6d) = 1;
    *(undefined2 *)(unaff_s0 + 0x66) = *(undefined2 *)(unaff_s1 + 2);
    *(undefined *)(unaff_s0 + 0x6c) = *(undefined *)(unaff_s1 + 1);
    *(byte *)(unaff_s0 + 0x7e) = bVar1 | 1;
    if (*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s1 + 10) + -1)) {
      *(byte *)(unaff_s0 + 0x7e) = bVar1 | 9;
    }
  }
  return;
}



void _LVL580(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar2;
  int unaff_s2;
  
  _LVL580();
  *(undefined2 *)(unaff_s2 + 0x74) = *(undefined2 *)(unaff_s0 + 0x74);
  *(short *)(unaff_s2 + 0x78) = *(short *)(unaff_s1 + 4) << 1;
  *(short *)(unaff_s2 + 0x5e) = *(short *)(unaff_s1 + 6) + 1;
  *(undefined *)(unaff_s2 + 0x7b) = 4;
  *(undefined *)(unaff_s2 + 0x6e) = *(undefined *)(unaff_s0 + 0x6e);
  *(undefined2 *)(unaff_s2 + 100) = *(undefined2 *)(unaff_s0 + 100);
  *(byte *)(unaff_s2 + 0x7e) = *(byte *)(unaff_s2 + 0x7e) | 1;
  *(undefined2 *)(unaff_s2 + 0x12) = 0xffff;
  uVar2 = FUN_00011e28((*(short *)(unaff_s1 + 2) + (ushort)*(byte *)(unaff_s1 + 1)) * 2 +
                       *(short *)(unaff_s0 + 0x78));
  *(undefined4 *)(unaff_s2 + 0x58) = uVar2;
  *(uint *)(unaff_s2 + 0x54) = (uint)*(byte *)(unaff_s1 + 1) * 0x4e2 + -0x21;
  *(int *)(unaff_s0 + 4) = unaff_s2;
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  *(undefined2 *)(unaff_s0 + 0x5c) = *(undefined2 *)(unaff_s1 + 10);
  *(undefined *)(unaff_s0 + 0x6d) = 1;
  *(undefined2 *)(unaff_s0 + 0x66) = *(undefined2 *)(unaff_s1 + 2);
  *(undefined *)(unaff_s0 + 0x6c) = *(undefined *)(unaff_s1 + 1);
  *(byte *)(unaff_s0 + 0x7e) = bVar1 | 1;
  if (*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s1 + 10) + -1)) {
    *(byte *)(unaff_s0 + 0x7e) = bVar1 | 9;
  }
  return;
}



void FUN_00011e28(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar2;
  int unaff_s2;
  
  uVar2 = FUN_00011e28();
  *(undefined4 *)(unaff_s2 + 0x58) = uVar2;
  *(uint *)(unaff_s2 + 0x54) = (uint)*(byte *)(unaff_s1 + 1) * 0x4e2 + -0x21;
  *(int *)(unaff_s0 + 4) = unaff_s2;
  bVar1 = *(byte *)(unaff_s0 + 0x7e);
  *(undefined2 *)(unaff_s0 + 0x5c) = *(undefined2 *)(unaff_s1 + 10);
  *(undefined *)(unaff_s0 + 0x6d) = 1;
  *(undefined2 *)(unaff_s0 + 0x66) = *(undefined2 *)(unaff_s1 + 2);
  *(undefined *)(unaff_s0 + 0x6c) = *(undefined *)(unaff_s1 + 1);
  *(byte *)(unaff_s0 + 0x7e) = bVar1 | 1;
  if (*(short *)(unaff_s0 + 0x60) == (short)(*(short *)(unaff_s1 + 10) + -1)) {
    *(byte *)(unaff_s0 + 0x7e) = bVar1 | 9;
  }
  return;
}



ea_elt_tag *
lld_evt_adv_create(uint16_t handle,uint16_t mininterval,uint16_t maxinterval,_Bool restart_pol)

{
  ea_elt_tag *peVar1;
  uint32_t uVar2;
  undefined2 in_register_0000202e;
  undefined3 in_register_00002035;
  
  peVar1 = (ea_elt_tag *)_L0(0x58,CONCAT22(in_register_0000202e,mininterval));
  _LVL594(&peVar1->env);
  peVar1->duration_min = 0x9c4;
  *(uint16_t *)&peVar1[2].ea_cb_start = handle;
  *(undefined2 *)((int)&peVar1[2].ea_cb_stop + 2) = 0;
  *(uint16_t *)&peVar1[2].ea_cb_stop = maxinterval;
  *(uint16_t *)((int)&peVar1[2].ea_cb_start + 2) = handle * 0x5c + 0x8e;
  _L0(peVar1,5);
  *(undefined2 *)&peVar1->stop_latency2 = 0x200;
  peVar1->ea_cb_start = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_start *)0x0;
  peVar1->ea_cb_cancel = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_cancel *)0x0;
  peVar1->ea_cb_stop = (anon_subr_void_ea_elt_tag_ptr_for_ea_cb_stop *)0x0;
  peVar1->stop_latency1 = '\0';
  peVar1->asap_settings = 0x6000;
  if (CONCAT31(in_register_00002035,restart_pol) == 0) {
    *(byte *)((int)&peVar1[2].ea_cb_cancel + 2) = *(byte *)((int)&peVar1[2].ea_cb_cancel + 2) | 0x20
    ;
  }
  uVar2 = _L0();
  peVar1->timestamp = uVar2;
  return peVar1;
}



int _L0(void)

{
  short unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000008;
  undefined2 in_stack_0000000c;
  
  iVar1 = _L0();
  _LVL594(iVar1 + 0x28);
  *(undefined2 *)(iVar1 + 0x12) = 0x9c4;
  *(short *)(iVar1 + 0x74) = unaff_s1;
  *(undefined2 *)(iVar1 + 0x7a) = 0;
  *(undefined2 *)(iVar1 + 0x78) = in_stack_0000000c;
  *(short *)(iVar1 + 0x76) = unaff_s1 * 0x5c + 0x8e;
  _L0(iVar1,5);
  *(undefined2 *)(iVar1 + 0x18) = 0x200;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined *)(iVar1 + 0x17) = 0;
  *(undefined2 *)(iVar1 + 0x10) = 0x6000;
  if (in_stack_00000008 == 0) {
    *(byte *)(iVar1 + 0x7e) = *(byte *)(iVar1 + 0x7e) | 0x20;
  }
  uVar2 = _L0();
  *(undefined4 *)(iVar1 + 8) = uVar2;
  return iVar1;
}



void _LVL594(void)

{
  int unaff_s0;
  short unaff_s1;
  undefined4 uVar1;
  int in_stack_00000008;
  undefined2 in_stack_0000000c;
  
  _LVL594();
  *(undefined2 *)(unaff_s0 + 0x12) = 0x9c4;
  *(short *)(unaff_s0 + 0x74) = unaff_s1;
  *(undefined2 *)(unaff_s0 + 0x7a) = 0;
  *(undefined2 *)(unaff_s0 + 0x78) = in_stack_0000000c;
  *(short *)(unaff_s0 + 0x76) = unaff_s1 * 0x5c + 0x8e;
  _L0(5);
  *(undefined2 *)(unaff_s0 + 0x18) = 0x200;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  *(undefined *)(unaff_s0 + 0x17) = 0;
  *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
  if (in_stack_00000008 == 0) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 0x20;
  }
  uVar1 = _L0();
  *(undefined4 *)(unaff_s0 + 8) = uVar1;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int in_stack_00000008;
  
  _L0();
  *(undefined2 *)(unaff_s0 + 0x18) = 0x200;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  *(undefined *)(unaff_s0 + 0x17) = 0;
  *(undefined2 *)(unaff_s0 + 0x10) = 0x6000;
  if (in_stack_00000008 == 0) {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 0x20;
  }
  uVar1 = _L0();
  *(undefined4 *)(unaff_s0 + 8) = uVar1;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = _L0();
  *(undefined4 *)(unaff_s0 + 8) = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void lld_evt_end(ea_elt_tag *elt)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  ea_elt_tag *peVar12;
  
  iVar11 = (uint)*(ushort *)&elt[2].ea_cb_start * 0x5c;
  uVar2 = *(ushort *)(iVar11 + 0x280080e2);
  uVar4 = (uint)(*(ushort *)(iVar11 + 0x280080e4) >> 8) +
          (uint)(*(ushort *)(iVar11 + 0x280080e2) >> 8);
  uVar5 = uVar4 & 0xff;
  if (((*(ushort *)(iVar11 + 0x280080e6) >> 7 & 1) != 0) && (uVar5 == 0)) {
    bVar3 = true;
_L0:
    bVar9 = false;
    goto _L0;
  }
  bVar1 = *(byte *)((int)&elt[2].ea_cb_cancel + 2);
  if ((bVar1 & 0x10) == 0) {
    if ((bVar1 & 0x40) == 0) {
      elt->current_prio = *(uint8_t *)((int)&elt[2].ea_cb_cancel + 1);
      if (uVar5 == 0) goto _L0;
      goto _L0;
    }
    *(byte *)((int)&elt[2].ea_cb_cancel + 2) = bVar1 & 0xbf;
    cVar8 = *(char *)((int)&elt[2].ea_cb_stop + 3);
    cVar10 = '\x01';
    if (uVar5 == 0) {
_L0:
      cVar10 = *(char *)((int)&elt[2].ea_cb_stop + 3);
      if (cVar10 == '\0') {
        if (*(char *)(_DAT_00000014 + 0x21) == '\0') {
          _L0();
          return;
        }
        goto _L0;
      }
      cVar8 = '\x01';
    }
    if (cVar10 != cVar8) goto _L0;
    uVar6 = _L0();
    elt->asap_settings = bRam00000001 & 0xf | 0xa050;
    peVar12 = elt[2].linked_element;
    elt->timestamp = uVar6;
    elt->asap_limit = (uint32_t)peVar12;
    iVar11 = _L0(elt);
    if (iVar11 != 0) goto _L0;
    FUN_00012040(elt);
    bVar3 = false;
    bVar9 = false;
    if (uVar5 == 0) goto _L0;
  }
  else {
_L0:
    bVar9 = true;
  }
  bVar3 = bVar9;
  uVar7 = (uint)*(byte *)((int)&elt[2].ea_cb_stop + 2);
  if (uVar5 < uVar7) {
    FUN_0001207c(0,0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  FUN_00011fc8(&elt->env,uVar5 - uVar7 & 0xff);
  if (*(char *)((int)&elt[2].ea_cb_stop + 3) == '\x02') {
    FUN_00011fe2(elt,2,uVar4 & 1);
  }
  else {
    uVar4 = (uint)*(byte *)((int)&elt[2].ea_cb_stop + 2);
    if (uVar5 < uVar4) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar5 - uVar4 & 0xff;
    }
    FUN_0001209a(elt,1,uVar4);
    elt[2].stop_latency1 =
         (byte)(*(ushort *)
                 (((int)((uint)DAT_0000015c + (uVar5 - 1)) % 8 & 0xffU) * 0xe + 0x280083d2) >> 4) &
         1;
  }
  if (((*(char *)((int)&elt[2].ea_cb_stop + 3) == '\x01') && (*(char *)&elt[2].timestamp != '\0'))
     && ((uVar2 & 0xff) != 0)) {
    *(undefined *)((int)&elt[2].timestamp + 1) = 1;
  }
  *(undefined *)((int)&elt[2].ea_cb_stop + 2) = 0;
  FUN_000120f6(8);
  bVar9 = true;
_L0:
  bVar1 = *(byte *)((int)&elt[2].ea_cb_cancel + 2);
  if (((bVar1 & 0x30) == 0) && (bVar3)) {
    iVar11 = FUN_00012112(elt,0);
    if (iVar11 != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  else {
    if (((bVar1 & 0x10) != 0) && (!bVar9)) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00012142)

void FUN_00011fc8(byte param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  uint uVar2;
  int unaff_s2;
  char unaff_s3;
  
  FUN_00011fc8();
  if (*(char *)(unaff_s0 + 0x7b) == '\x02') {
    FUN_00011fe2(2,unaff_s1 & 1);
  }
  else {
    if (unaff_s1 < *(byte *)(unaff_s0 + 0x7a)) {
      uVar2 = 0;
    }
    else {
      uVar2 = unaff_s1 - *(byte *)(unaff_s0 + 0x7a) & 0xff;
    }
    FUN_0001209a(1,uVar2);
    *(byte *)(unaff_s0 + 0x6f) =
         (byte)(*(ushort *)
                 (((int)((uint)DAT_0000015c + (unaff_s1 - 1)) % 8 & 0xffU) * 0xe + 0x280083d2) >> 4)
         & 1;
  }
  if (((*(char *)(unaff_s0 + 0x7b) == '\x01') && (*(char *)(unaff_s0 + 0x60) != '\0')) &&
     (unaff_s3 != '\0')) {
    *(undefined *)(unaff_s0 + 0x61) = 1;
  }
  *(undefined *)(unaff_s0 + 0x7a) = 0;
  FUN_000120f6(8);
  if ((((*(byte *)(unaff_s0 + 0x7e) & 0x30) == 0) && (unaff_s2 != 0)) &&
     (iVar1 = FUN_00012112(0), iVar1 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00012142)

void FUN_00011fe2(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  char unaff_s3;
  
  FUN_00011fe2();
  if (((*(char *)(unaff_s0 + 0x7b) == '\x01') && (*(char *)(unaff_s0 + 0x60) != '\0')) &&
     (unaff_s3 != '\0')) {
    *(undefined *)(unaff_s0 + 0x61) = 1;
  }
  *(undefined *)(unaff_s0 + 0x7a) = 0;
  FUN_000120f6(8);
  if ((((*(byte *)(unaff_s0 + 0x7e) & 0x30) == 0) && (unaff_s2 != 0)) &&
     (iVar1 = FUN_00012112(0), iVar1 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _L0(byte param_1)

{
  bool bVar1;
  int unaff_s0;
  uint unaff_s1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  char unaff_s3;
  
  uVar2 = _L0();
  *(ushort *)(unaff_s0 + 0x10) = bRam00000001 & 0xf | 0xa050;
  *(undefined4 *)(unaff_s0 + 8) = uVar2;
  *(undefined4 *)(unaff_s0 + 0xc) = *(undefined4 *)(unaff_s0 + 0x5c);
  iVar3 = _L0();
  if (iVar3 == 0) {
    FUN_00012040();
    bVar1 = false;
    bVar5 = false;
    if (unaff_s1 == 0) {
      bVar5 = false;
      goto _L0;
    }
  }
  else {
    bVar5 = true;
  }
  bVar1 = bVar5;
  if (unaff_s1 < *(byte *)(unaff_s0 + 0x7a)) {
    FUN_0001207c(0,0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  FUN_00011fc8(unaff_s0 + 0x28,unaff_s1 - *(byte *)(unaff_s0 + 0x7a) & 0xff);
  if (*(char *)(unaff_s0 + 0x7b) == '\x02') {
    FUN_00011fe2(2,unaff_s1 & 1);
  }
  else {
    if (unaff_s1 < *(byte *)(unaff_s0 + 0x7a)) {
      uVar4 = 0;
    }
    else {
      uVar4 = unaff_s1 - *(byte *)(unaff_s0 + 0x7a) & 0xff;
    }
    FUN_0001209a(1,uVar4);
    *(byte *)(unaff_s0 + 0x6f) =
         (byte)(*(ushort *)
                 (((int)((uint)DAT_0000015c + (unaff_s1 - 1)) % 8 & 0xffU) * 0xe + 0x280083d2) >> 4)
         & 1;
  }
  if (((*(char *)(unaff_s0 + 0x7b) == '\x01') && (*(char *)(unaff_s0 + 0x60) != '\0')) &&
     (unaff_s3 != '\0')) {
    *(undefined *)(unaff_s0 + 0x61) = 1;
  }
  *(undefined *)(unaff_s0 + 0x7a) = 0;
  FUN_000120f6(8);
  bVar5 = true;
_L0:
  if (((*(byte *)(unaff_s0 + 0x7e) & 0x30) == 0) && (bVar1)) {
    iVar3 = FUN_00012112(0);
    if (iVar3 != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  else {
    if (((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) && (!bVar5)) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void _L0(byte param_1)

{
  bool bVar1;
  int unaff_s0;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char unaff_s3;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    FUN_00012040();
    bVar1 = false;
    bVar4 = false;
    if (unaff_s1 == 0) {
      bVar4 = false;
      goto _L0;
    }
  }
  else {
    bVar4 = true;
  }
  bVar1 = bVar4;
  if (unaff_s1 < *(byte *)(unaff_s0 + 0x7a)) {
    FUN_0001207c(0,0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  FUN_00011fc8(unaff_s0 + 0x28,unaff_s1 - *(byte *)(unaff_s0 + 0x7a) & 0xff);
  if (*(char *)(unaff_s0 + 0x7b) == '\x02') {
    FUN_00011fe2(2,unaff_s1 & 1);
  }
  else {
    if (unaff_s1 < *(byte *)(unaff_s0 + 0x7a)) {
      uVar3 = 0;
    }
    else {
      uVar3 = unaff_s1 - *(byte *)(unaff_s0 + 0x7a) & 0xff;
    }
    FUN_0001209a(1,uVar3);
    *(byte *)(unaff_s0 + 0x6f) =
         (byte)(*(ushort *)
                 (((int)((uint)DAT_0000015c + (unaff_s1 - 1)) % 8 & 0xffU) * 0xe + 0x280083d2) >> 4)
         & 1;
  }
  if (((*(char *)(unaff_s0 + 0x7b) == '\x01') && (*(char *)(unaff_s0 + 0x60) != '\0')) &&
     (unaff_s3 != '\0')) {
    *(undefined *)(unaff_s0 + 0x61) = 1;
  }
  *(undefined *)(unaff_s0 + 0x7a) = 0;
  FUN_000120f6(8);
  bVar4 = true;
_L0:
  if (((*(byte *)(unaff_s0 + 0x7e) & 0x30) == 0) && (bVar1)) {
    iVar2 = FUN_00012112(0);
    if (iVar2 != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  else {
    if (((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) && (!bVar4)) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001210e)
// WARNING: Removing unreachable block (ram,0x0001211c)
// WARNING: Removing unreachable block (ram,0x0001212c)

void FUN_00012040(byte param_1)

{
  int unaff_s0;
  uint unaff_s1;
  uint uVar1;
  bool bVar2;
  char unaff_s3;
  
  FUN_00012040();
  if (unaff_s1 == 0) {
    bVar2 = false;
  }
  else {
    if (unaff_s1 < *(byte *)(unaff_s0 + 0x7a)) {
      FUN_0001207c(0,0);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    FUN_00011fc8(unaff_s0 + 0x28,unaff_s1 - *(byte *)(unaff_s0 + 0x7a) & 0xff);
    if (*(char *)(unaff_s0 + 0x7b) == '\x02') {
      FUN_00011fe2(2,unaff_s1 & 1);
    }
    else {
      if (unaff_s1 < *(byte *)(unaff_s0 + 0x7a)) {
        uVar1 = 0;
      }
      else {
        uVar1 = unaff_s1 - *(byte *)(unaff_s0 + 0x7a) & 0xff;
      }
      FUN_0001209a(1,uVar1);
      *(byte *)(unaff_s0 + 0x6f) =
           (byte)(*(ushort *)
                   (((int)((uint)DAT_0000015c + (unaff_s1 - 1)) % 8 & 0xffU) * 0xe + 0x280083d2) >>
                 4) & 1;
    }
    if (((*(char *)(unaff_s0 + 0x7b) == '\x01') && (*(char *)(unaff_s0 + 0x60) != '\0')) &&
       (unaff_s3 != '\0')) {
      *(undefined *)(unaff_s0 + 0x61) = 1;
    }
    *(undefined *)(unaff_s0 + 0x7a) = 0;
    FUN_000120f6(8);
    bVar2 = true;
  }
  if (((*(byte *)(unaff_s0 + 0x7e) & 0x10) != 0) && (!bVar2)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_0001207c(void)

{
  FUN_0001207c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00012142)

void FUN_0001209a(byte param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  char unaff_s3;
  
  FUN_0001209a();
  *(byte *)(unaff_s0 + 0x6f) =
       (byte)(*(ushort *)
               (((int)((uint)DAT_0000015c + unaff_s1 + -1) % 8 & 0xffU) * 0xe + 0x280083d2) >> 4) &
       1;
  if (((*(char *)(unaff_s0 + 0x7b) == '\x01') && (*(char *)(unaff_s0 + 0x60) != '\0')) &&
     (unaff_s3 != '\0')) {
    *(undefined *)(unaff_s0 + 0x61) = 1;
  }
  *(undefined *)(unaff_s0 + 0x7a) = 0;
  FUN_000120f6(8);
  if ((((*(byte *)(unaff_s0 + 0x7e) & 0x30) == 0) && (unaff_s2 != 0)) &&
     (iVar1 = FUN_00012112(0), iVar1 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00012142)

void FUN_000120f6(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  
  FUN_000120f6();
  if ((((*(byte *)(unaff_s0 + 0x7e) & 0x30) == 0) && (unaff_s2 != 0)) &&
     (iVar1 = FUN_00012112(0), iVar1 != 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_00012112(void)

{
  int iVar1;
  
  iVar1 = FUN_00012112();
  if (iVar1 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void lld_evt_rx(ea_elt_tag *elt)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)((uint)*(ushort *)&elt[2].ea_cb_start * 0x5c + 0x28008092);
  FUN_00012196(&elt->env,uVar1 >> 0xc);
  *(byte *)((int)&elt[2].ea_cb_stop + 2) =
       *(char *)((int)&elt[2].ea_cb_stop + 2) + (byte)(uVar1 >> 0xc);
  _L0(elt,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00012196(void)

{
  int unaff_s0;
  char in_stack_0000000c;
  
  FUN_00012196();
  *(char *)(unaff_s0 + 0x7a) = *(char *)(unaff_s0 + 0x7a) + in_stack_0000000c;
  _L0(0);
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



void lld_evt_rx_afs(ea_elt_tag *elt,uint8_t num)

{
  undefined3 in_register_0000202d;
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((int)&elt[2].ea_cb_stop + 2);
  if (CONCAT31(in_register_0000202d,num) <= uVar1) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _L0(&elt->env,CONCAT31(in_register_0000202d,num) - uVar1 & 0xff);
  *(uint8_t *)((int)&elt[2].ea_cb_stop + 2) = num;
  FUN_000121f6(elt,0,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined unaff_s1;
  
  _L0();
  *(undefined *)(unaff_s0 + 0x7a) = unaff_s1;
  FUN_000121f6(0,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000121f6(void)

{
  FUN_000121f6();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void lld_evt_timer_isr(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void lld_evt_end_isr(_Bool apfm)

{
  undefined3 in_register_00002029;
  int iVar1;
  
  iVar1 = _L0(0);
  _L0();
  if (CONCAT31(in_register_00002029,apfm) == 0) {
    if (*(ushort *)(iVar1 + 0x10) >> 0xe != 0) {
      *(undefined2 *)(iVar1 + 0x10) = 0;
    }
  }
  else {
    *(byte *)(iVar1 + 0x7e) = *(byte *)(iVar1 + 0x7e) | 0x40;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s1;
  int iVar1;
  
  iVar1 = _L0();
  _L0();
  if (unaff_s1 == 0) {
    if (*(ushort *)(iVar1 + 0x10) >> 0xe != 0) {
      *(undefined2 *)(iVar1 + 0x10) = 0;
    }
  }
  else {
    *(byte *)(iVar1 + 0x7e) = *(byte *)(iVar1 + 0x7e) | 0x40;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _L0();
  if (unaff_s1 == 0) {
    if (*(ushort *)(unaff_s0 + 0x10) >> 0xe != 0) {
      *(undefined2 *)(unaff_s0 + 0x10) = 0;
    }
  }
  else {
    *(byte *)(unaff_s0 + 0x7e) = *(byte *)(unaff_s0 + 0x7e) | 0x40;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void lld_evt_rx_isr(void)

{
  if (iRam00000000 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void lld_evt_afs_isr(uint8_t num)

{
  if (iRam00000000 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


