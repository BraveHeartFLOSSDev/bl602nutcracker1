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

struct co_list_hdr { // DWARF DIE: 110d
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 8b2
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: 1207
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 11ab
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 112e
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 1249
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

struct llc_ch_asses_tag { // DWARF DIE: 2fdc
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

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict144f_for___value anon_union.conflict144f_for___value, *Panon_union.conflict144f_for___value;

typedef uint wint_t;

union anon_union.conflict144f_for___value { // DWARF DIE: 144f
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 1481
    int __count;
    union anon_union.conflict144f_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflict144f anon_union.conflict144f, *Panon_union.conflict144f;

union anon_union.conflict144f { // DWARF DIE: 144f
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 243c
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 2467
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

struct bd_addr { // DWARF DIE: 54d
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 22c7
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

struct ke_msg { // DWARF DIE: 1309
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 2502
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 239e
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

struct ea_elt_tag { // DWARF DIE: 2176
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

struct le_chnl_map { // DWARF DIE: 58f
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 2536
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 520
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 2407
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 25a7
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

typedef struct llc_llcp_recv_ind llc_llcp_recv_ind, *Pllc_llcp_recv_ind;

typedef union llcp_pdu llcp_pdu, *Pllcp_pdu;

typedef struct llcp_con_upd_ind llcp_con_upd_ind, *Pllcp_con_upd_ind;

typedef struct llcp_channel_map_ind llcp_channel_map_ind, *Pllcp_channel_map_ind;

typedef struct llcp_terminate_ind llcp_terminate_ind, *Pllcp_terminate_ind;

typedef struct llcp_enc_req llcp_enc_req, *Pllcp_enc_req;

typedef struct llcp_enc_rsp llcp_enc_rsp, *Pllcp_enc_rsp;

typedef struct llcp_start_enc_req llcp_start_enc_req, *Pllcp_start_enc_req;

typedef struct llcp_start_enc_rsp llcp_start_enc_rsp, *Pllcp_start_enc_rsp;

typedef struct llcp_unknown_rsp llcp_unknown_rsp, *Pllcp_unknown_rsp;

typedef struct llcp_feats_req llcp_feats_req, *Pllcp_feats_req;

typedef struct llcp_feats_rsp llcp_feats_rsp, *Pllcp_feats_rsp;

typedef struct llcp_pause_enc_req llcp_pause_enc_req, *Pllcp_pause_enc_req;

typedef struct llcp_pause_enc_rsp llcp_pause_enc_rsp, *Pllcp_pause_enc_rsp;

typedef struct llcp_vers_ind llcp_vers_ind, *Pllcp_vers_ind;

typedef struct llcp_reject_ind llcp_reject_ind, *Pllcp_reject_ind;

typedef struct llcp_slave_feature_req llcp_slave_feature_req, *Pllcp_slave_feature_req;

typedef struct llcp_con_param_req llcp_con_param_req, *Pllcp_con_param_req;

typedef struct llcp_con_param_rsp llcp_con_param_rsp, *Pllcp_con_param_rsp;

typedef struct llcp_reject_ind_ext llcp_reject_ind_ext, *Pllcp_reject_ind_ext;

typedef struct llcp_ping_req llcp_ping_req, *Pllcp_ping_req;

typedef struct llcp_ping_rsp llcp_ping_rsp, *Pllcp_ping_rsp;

typedef struct llcp_length_req llcp_length_req, *Pllcp_length_req;

typedef struct llcp_length_rsp llcp_length_rsp, *Pllcp_length_rsp;

typedef struct rand_nb rand_nb, *Prand_nb;

typedef struct sess_k_div_x sess_k_div_x, *Psess_k_div_x;

typedef struct init_vect init_vect, *Pinit_vect;

typedef struct le_features le_features, *Ple_features;

struct llcp_con_param_req { // DWARF DIE: d2c
    uint8_t opcode;
    undefined field_0x1;
    uint16_t interval_min;
    uint16_t interval_max;
    uint16_t latency;
    uint16_t timeout;
    uint8_t pref_period;
    undefined field_0xb;
    uint16_t ref_con_event_count;
    uint16_t offset0;
    uint16_t offset1;
    uint16_t offset2;
    uint16_t offset3;
    uint16_t offset4;
    uint16_t offset5;
};

struct le_features { // DWARF DIE: 605
    uint8_t feats[8];
};

struct llcp_pause_enc_rsp { // DWARF DIE: c72
    uint8_t opcode;
};

struct rand_nb { // DWARF DIE: 5e9
    uint8_t nb[8];
};

struct llcp_ping_rsp { // DWARF DIE: f0c
    uint8_t opcode;
};

struct llcp_vers_ind { // DWARF DIE: c8f
    uint8_t opcode;
    uint8_t vers;
    uint16_t compid;
    uint16_t subvers;
};

struct llcp_feats_req { // DWARF DIE: c07
    uint8_t opcode;
    struct le_features feats;
};

struct llcp_start_enc_rsp { // DWARF DIE: bc4
    uint8_t opcode;
};

struct llcp_unknown_rsp { // DWARF DIE: bdf
    uint8_t opcode;
    uint8_t unk_type;
};

struct llcp_feats_rsp { // DWARF DIE: c2f
    uint8_t opcode;
    struct le_features feats;
};

struct llcp_start_enc_req { // DWARF DIE: ba9
    uint8_t opcode;
};

struct llcp_pause_enc_req { // DWARF DIE: c57
    uint8_t opcode;
};

struct llcp_reject_ind_ext { // DWARF DIE: eb6
    uint8_t opcode;
    uint8_t rej_opcode;
    uint8_t err_code;
};

struct llcp_length_req { // DWARF DIE: f29
    uint8_t opcode;
    undefined field_0x1;
    uint16_t max_rx_octets;
    uint16_t max_rx_time;
    uint16_t max_tx_octets;
    uint16_t max_tx_time;
};

struct llcp_slave_feature_req { // DWARF DIE: d01
    uint8_t opcode;
    struct le_features feats;
};

struct llcp_reject_ind { // DWARF DIE: cd6
    uint8_t opcode;
    uint8_t err_code;
};

struct llcp_channel_map_ind { // DWARF DIE: ab8
    uint8_t opcode;
    struct le_chnl_map ch_map;
    uint16_t instant;
};

struct llcp_con_upd_ind { // DWARF DIE: a4f
    uint8_t opcode;
    uint8_t win_size;
    uint16_t win_off;
    uint16_t interv;
    uint16_t latency;
    uint16_t timeout;
    uint16_t instant;
};

struct llcp_terminate_ind { // DWARF DIE: aed
    uint8_t opcode;
    uint8_t err_code;
};

struct llcp_con_param_rsp { // DWARF DIE: df1
    uint8_t opcode;
    undefined field_0x1;
    uint16_t interval_min;
    uint16_t interval_max;
    uint16_t latency;
    uint16_t timeout;
    uint8_t pref_period;
    undefined field_0xb;
    uint16_t ref_con_event_count;
    uint16_t offset0;
    uint16_t offset1;
    uint16_t offset2;
    uint16_t offset3;
    uint16_t offset4;
    uint16_t offset5;
};

struct init_vect { // DWARF DIE: 6cc
    uint8_t iv[4];
};

struct sess_k_div_x { // DWARF DIE: 692
    uint8_t skdiv[8];
};

struct llcp_enc_req { // DWARF DIE: b15
    uint8_t opcode;
    struct rand_nb rand;
    uint8_t ediv[2];
    struct sess_k_div_x skdm;
    struct init_vect ivm;
};

struct llcp_length_rsp { // DWARF DIE: f7e
    uint8_t opcode;
    undefined field_0x1;
    uint16_t max_rx_octets;
    uint16_t max_rx_time;
    uint16_t max_tx_octets;
    uint16_t max_tx_time;
};

struct llcp_enc_rsp { // DWARF DIE: b74
    uint8_t opcode;
    struct sess_k_div_x skds;
    struct init_vect ivs;
};

struct llcp_ping_req { // DWARF DIE: eef
    uint8_t opcode;
};

union llcp_pdu { // DWARF DIE: fd3
    uint8_t opcode;
    struct llcp_con_upd_ind con_up_req;
    struct llcp_channel_map_ind channel_map_req;
    struct llcp_terminate_ind terminate_ind;
    struct llcp_enc_req enc_req;
    struct llcp_enc_rsp enc_rsp;
    struct llcp_start_enc_req start_enc_req;
    struct llcp_start_enc_rsp start_enc_rsp;
    struct llcp_unknown_rsp unknown_rsp;
    struct llcp_feats_req feats_req;
    struct llcp_feats_rsp feats_rsp;
    struct llcp_pause_enc_req pause_enc_req;
    struct llcp_pause_enc_rsp pause_enc_rsp;
    struct llcp_vers_ind vers_ind;
    struct llcp_reject_ind reject_ind;
    struct llcp_slave_feature_req slave_feature_req;
    struct llcp_con_param_req con_param_req;
    struct llcp_con_param_rsp con_param_rsp;
    struct llcp_reject_ind_ext reject_ind_ext;
    struct llcp_ping_req ping_req;
    struct llcp_ping_rsp ping_rsp;
    struct llcp_length_req length_req;
    struct llcp_length_rsp length_rsp;
};

struct llc_llcp_recv_ind { // DWARF DIE: 29ba
    uint8_t status;
    uint8_t dummy;
    union llcp_pdu pdu;
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

struct llc_con_upd_req_ind { // DWARF DIE: 2a25
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

typedef struct llcp_pdu_tag llcp_pdu_tag, *Pllcp_pdu_tag;

struct llcp_pdu_tag { // DWARF DIE: 2b4c
    struct co_list_hdr hdr;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
    void * ptr;
    uint8_t opcode;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

typedef enum llc_llcp_authorize {
    LLC_LLCP_NO_AUTHZED=0,
    LLC_LLCP_PAUSE_ENC_AUTHZED=2,
    LLC_LLCP_START_ENC_AUTHZED=1
} llc_llcp_authorize;

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

typedef struct hci_le_data_len_chg_evt hci_le_data_len_chg_evt, *Phci_le_data_len_chg_evt;

struct hci_le_data_len_chg_evt { // DWARF DIE: 94f
    uint8_t subcode;
    undefined field_0x1;
    uint16_t conhdl;
    uint16_t max_tx_octets;
    uint16_t max_tx_time;
    uint16_t max_rx_octets;
    uint16_t max_rx_time;
};

typedef struct hci_le_start_enc_cmd hci_le_start_enc_cmd, *Phci_le_start_enc_cmd;

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 5bc
    uint8_t ltk[16];
};

struct hci_le_start_enc_cmd { // DWARF DIE: 8fd
    uint16_t conhdl;
    struct rand_nb nb;
    uint16_t enc_div;
    struct ltk ltk;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 1c49
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

struct rwip_rf_api { // DWARF DIE: 1f71
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

struct rwip_prio { // DWARF DIE: 20f5
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 13b9
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 13e5
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: 6af
    uint8_t skd[16];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 670
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

struct supp_cmds { // DWARF DIE: 627
    uint8_t cmds[64];
};

typedef struct lld_evt_tag lld_evt_tag, *Plld_evt_tag;

typedef struct lld_evt_anchor lld_evt_anchor, *Plld_evt_anchor;

typedef struct ea_interval_tag ea_interval_tag, *Pea_interval_tag;

typedef union lld_evt_info lld_evt_info, *Plld_evt_info;

typedef struct lld_non_conn lld_non_conn, *Plld_non_conn;

typedef struct lld_conn lld_conn, *Plld_conn;

struct lld_conn { // DWARF DIE: 2c81
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

struct ea_interval_tag { // DWARF DIE: 225e
    struct co_list_hdr hdr;
    uint16_t interval_used;
    uint16_t offset_used;
    uint16_t bandwidth_used;
    uint16_t conhdl_used;
    uint16_t role_used;
    uint16_t linkid;
};

struct lld_non_conn { // DWARF DIE: 2c31
    uint32_t window;
    uint32_t anchor;
    uint32_t end_ts;
    _Bool initiate;
    _Bool connect_req_sent;
    undefined field_0xe;
    undefined field_0xf;
};

union lld_evt_info { // DWARF DIE: 2d70
    struct lld_non_conn non_conn;
    struct lld_conn conn;
};

struct lld_evt_anchor { // DWARF DIE: 2bfc
    uint32_t basetime_cnt;
    uint16_t finetime_cnt;
    uint16_t evt_cnt;
};

struct lld_evt_tag { // DWARF DIE: 2d99
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

struct lld_evt_env_tag { // DWARF DIE: 2e94
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

typedef struct anon_struct.conflict1a88 anon_struct.conflict1a88, *Panon_struct.conflict1a88;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 1a3f
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 1545
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

struct anon_struct.conflict1a88 { // DWARF DIE: 1a88
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

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict1c14_for__new anon_union.conflict1c14_for__new, *Panon_union.conflict1c14_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict1bcd anon_struct.conflict1bcd, *Panon_struct.conflict1bcd;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

struct anon_struct.conflict1bcd { // DWARF DIE: 1bcd
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _glue { // DWARF DIE: 19fa
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

union anon_union.conflict1c14_for__new { // DWARF DIE: 1c14
    struct anon_struct.conflict1a88 _reent;
    struct anon_struct.conflict1bcd _unused;
};

struct _on_exit_args { // DWARF DIE: 15c8
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 161d
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 1676
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 16a4
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

struct _reent { // DWARF DIE: 1810
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
    union anon_union.conflict1c14_for__new _new;
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

struct _Bigint { // DWARF DIE: 14d5
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

typedef union anon_union.conflict1c14 anon_union.conflict1c14, *Panon_union.conflict1c14;

union anon_union.conflict1c14 { // DWARF DIE: 1c14
    struct anon_struct.conflict1a88 _reent;
    struct anon_struct.conflict1bcd _unused;
};

typedef struct llcp_pdu_handler_info llcp_pdu_handler_info, *Pllcp_pdu_handler_info;

struct llcp_pdu_handler_info { // DWARF DIE: 342d
    int (* handler)(uint16_t, ke_task_id_t, _Bool, union llcp_pdu *);
    _Bool int_ctx_allowed;
    uint8_t enc_auth;
    undefined field_0x6;
    undefined field_0x7;
};

typedef enum llc_instant_state {
    LLC_INSTANT_ACCEPTED=1,
    LLC_INSTANT_COLLISION=2,
    LLC_INSTANT_IGNORED=0,
    LLC_INSTANT_MIC_FAILURE=4,
    LLC_INSTANT_PASSED=3,
    LLC_INSTANT_REJECT=5
} llc_instant_state;

typedef struct llm_enc_req llm_enc_req, *Pllm_enc_req;

struct llm_enc_req { // DWARF DIE: 1ef3
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

struct rem_version { // DWARF DIE: 3100
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct encrypt { // DWARF DIE: 3135
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct data_len_ext_tag { // DWARF DIE: 316a
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

struct llc_env_tag { // DWARF DIE: 31fa
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

typedef enum llc_dle_flag {
    LLC_DLE_EVT_SENT_LSB=1,
    LLC_DLE_EVT_SENT_MASK=2,
    LLC_DLE_REQ_RCVD_LSB=0,
    LLC_DLE_REQ_RCVD_MASK=1
} llc_dle_flag;

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




// DWARF DIE: 63c8

void llc_llcp_send(uint8_t conhdl,void *param,uint8_t opcode)

{
  undefined3 in_register_00002029;
  int extraout_a0;
  int extraout_a0_00;
  
  _L0();
  _LVL5();
  if ((extraout_a0 != 0) && (extraout_a0_00 != 0)) {
    (*pcRam00000000)(extraout_a0,param,0x1a,pcRam00000000);
    *(int *)(extraout_a0_00 + 8) = extraout_a0;
    *(short *)(extraout_a0_00 + 4) = (short)CONCAT31(in_register_00002029,conhdl);
    *(uint8_t *)(extraout_a0_00 + 0xc) = opcode;
    FUN_0001007a();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _L0(void)

{
  int extraout_a0;
  int extraout_a0_00;
  undefined2 unaff_s4;
  undefined unaff_s5;
  
  _L0();
  _LVL5();
  if ((extraout_a0 != 0) && (extraout_a0_00 != 0)) {
    (*pcRam00000000)(extraout_a0,0x1a,pcRam00000000);
    *(int *)(extraout_a0_00 + 8) = extraout_a0;
    *(undefined2 *)(extraout_a0_00 + 4) = unaff_s4;
    *(undefined *)(extraout_a0_00 + 0xc) = unaff_s5;
    FUN_0001007a();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _LVL5(void)

{
  int extraout_a0;
  int unaff_s3;
  undefined2 unaff_s4;
  undefined unaff_s5;
  
  _LVL5();
  if ((unaff_s3 != 0) && (extraout_a0 != 0)) {
    (*pcRam00000000)(0x1a,pcRam00000000);
    *(int *)(extraout_a0 + 8) = unaff_s3;
    *(undefined2 *)(extraout_a0 + 4) = unaff_s4;
    *(undefined *)(extraout_a0 + 0xc) = unaff_s5;
    FUN_0001007a();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_0001007a(void)

{
  FUN_0001007a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 3e39

int llcp_ping_rsp_handler(uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,void *param)

{
  int iVar1;
  undefined2 in_register_0000202a;
  uint uVar2;
  
  uVar2 = _L0();
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  if ((*(byte *)(iVar1 + 0xa5) & 8) == 0) {
    if (((uVar2 & 1) != 0) && (*(char *)(iVar1 + 0xa3) == '\x05')) {
      _LVL30();
      *(undefined *)(iVar1 + 0xa3) = 0;
      FUN_0001012c();
    }
  }
  else {
    _LVL25();
  }
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_s2;
  
  uVar2 = _L0();
  iVar1 = *(int *)(unaff_s2 * 4);
  if ((*(byte *)(iVar1 + 0xa5) & 8) == 0) {
    if (((uVar2 & 1) != 0) && (*(char *)(iVar1 + 0xa3) == '\x05')) {
      _LVL30();
      *(undefined *)(iVar1 + 0xa3) = 0;
      FUN_0001012c();
    }
  }
  else {
    _LVL25();
  }
  return 0;
}



undefined4 _LVL25(void)

{
  _LVL25();
  return 0;
}



undefined4 _LVL30(void)

{
  int unaff_s1;
  
  _LVL30();
  *(undefined *)(unaff_s1 + 0xa3) = 0;
  FUN_0001012c();
  return 0;
}



undefined4 FUN_0001012c(void)

{
  FUN_0001012c();
  return 0;
}



// DWARF DIE: 59be

int llcp_terminate_ind_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_terminate_ind *param)

{
  undefined2 in_register_0000202a;
  int iVar1;
  
  _L0();
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  *(uint8_t *)(iVar1 + 0xa1) = param->err_code;
  *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) | 0x200;
  _L0();
  iVar1 = FUN_00010184();
  if (iVar1 == 4) {
    FUN_00010198();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  _L0();
  iVar1 = *(int *)(unaff_s0 * 4);
  *(undefined *)(iVar1 + 0xa1) = *(undefined *)(unaff_s1 + 1);
  *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) | 0x200;
  _L0();
  iVar1 = FUN_00010184();
  if (iVar1 == 4) {
    FUN_00010198();
  }
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  
  _L0();
  iVar1 = FUN_00010184();
  if (iVar1 == 4) {
    FUN_00010198();
  }
  return 0;
}



undefined4 FUN_00010184(void)

{
  int iVar1;
  
  iVar1 = FUN_00010184();
  if (iVar1 == 4) {
    FUN_00010198();
  }
  return 0;
}



undefined4 FUN_00010198(void)

{
  FUN_00010198();
  return 0;
}



// DWARF DIE: 4a16

int llcp_enc_rsp_handler(uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_enc_rsp *param)

{
  int iVar1;
  undefined2 in_register_0000202a;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = _L0();
  piVar4 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  iVar1 = *piVar4;
  if (((*(byte *)(iVar1 + 0xa5) & 8) != 0) && (*(char *)(iVar1 + 0xa3) != '\r')) {
    FUN_00010200();
  }
  if (((uVar2 & 1) == 0) || (*(char *)(iVar1 + 0xa3) == '\r')) {
    iVar3 = FUN_00010224();
    (*pcRam00000000)(iVar1 + 0x79,&param->skds,8,pcRam00000000);
    (*pcRam00000000)(iVar3,iVar1 + 0x81,0x10,pcRam00000000);
    (*pcRam00000000)(iVar3 + 0x10,iVar1 + 0x71,0x10,pcRam00000000);
    FUN_00010262();
    iVar3 = CONCAT22(in_register_0000202a,conhdl) * 0x5c;
    *(undefined2 *)(iVar3 + 0x280080c8) = *(undefined2 *)(param->ivs).iv;
    *(undefined2 *)(iVar3 + 0x280080ca) = *(undefined2 *)((param->ivs).iv + 2);
    iVar3 = *piVar4;
    *(byte *)(iVar3 + 0xa5) = *(byte *)(iVar3 + 0xa5) | 8;
    *(undefined *)(iVar1 + 0xa3) = 0xe;
    FUN_000102d2();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_s2;
  int unaff_s3;
  
  uVar2 = _L0();
  iVar1 = *(int *)(unaff_s2 + unaff_s0 * 4);
  if (((*(byte *)(iVar1 + 0xa5) & 8) != 0) && (*(char *)(iVar1 + 0xa3) != '\r')) {
    FUN_00010200();
  }
  if (((uVar2 & 1) == 0) || (*(char *)(iVar1 + 0xa3) == '\r')) {
    iVar3 = FUN_00010224();
    (*pcRam00000000)(iVar1 + 0x79,unaff_s3 + 1,8,pcRam00000000);
    (*pcRam00000000)(iVar3,iVar1 + 0x81,0x10,pcRam00000000);
    (*pcRam00000000)(iVar3 + 0x10,iVar1 + 0x71,0x10,pcRam00000000);
    FUN_00010262();
    *(undefined2 *)(unaff_s0 * 0x5c + 0x280080c8) = *(undefined2 *)(unaff_s3 + 9);
    *(undefined2 *)(unaff_s0 * 0x5c + 0x280080ca) = *(undefined2 *)(unaff_s3 + 0xb);
    iVar3 = *(int *)(unaff_s2 + unaff_s0 * 4);
    *(byte *)(iVar3 + 0xa5) = *(byte *)(iVar3 + 0xa5) | 8;
    *(undefined *)(iVar1 + 0xa3) = 0xe;
    FUN_000102d2();
  }
  return 0;
}



undefined4 FUN_00010200(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  uint unaff_s6;
  
  FUN_00010200();
  if (((unaff_s6 & 1) == 0) || (*(char *)(unaff_s1 + 0xa3) == '\r')) {
    iVar1 = FUN_00010224();
    (*pcRam00000000)(unaff_s1 + 0x79,unaff_s3 + 1,8,pcRam00000000);
    (*pcRam00000000)(iVar1,unaff_s1 + 0x81,0x10,pcRam00000000);
    (*pcRam00000000)(iVar1 + 0x10,unaff_s1 + 0x71,0x10,pcRam00000000);
    FUN_00010262();
    *(undefined2 *)(unaff_s0 * 0x5c + 0x280080c8) = *(undefined2 *)(unaff_s3 + 9);
    *(undefined2 *)(unaff_s0 * 0x5c + 0x280080ca) = *(undefined2 *)(unaff_s3 + 0xb);
    *(byte *)(*(int *)(unaff_s2 + unaff_s5) + 0xa5) =
         *(byte *)(*(int *)(unaff_s2 + unaff_s5) + 0xa5) | 8;
    *(undefined *)(unaff_s1 + 0xa3) = 0xe;
    FUN_000102d2();
  }
  return 0;
}



undefined4 FUN_00010224(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  
  iVar1 = FUN_00010224();
  (*pcRam00000000)(unaff_s1 + 0x79,unaff_s3 + 1,8,pcRam00000000);
  (*pcRam00000000)(iVar1,unaff_s1 + 0x81,0x10,pcRam00000000);
  (*pcRam00000000)(iVar1 + 0x10,unaff_s1 + 0x71,0x10,pcRam00000000);
  FUN_00010262();
  *(undefined2 *)(unaff_s0 * 0x5c + 0x280080c8) = *(undefined2 *)(unaff_s3 + 9);
  *(undefined2 *)(unaff_s0 * 0x5c + 0x280080ca) = *(undefined2 *)(unaff_s3 + 0xb);
  *(byte *)(*(int *)(unaff_s2 + unaff_s5) + 0xa5) =
       *(byte *)(*(int *)(unaff_s2 + unaff_s5) + 0xa5) | 8;
  *(undefined *)(unaff_s1 + 0xa3) = 0xe;
  FUN_000102d2();
  return 0;
}



undefined4 FUN_00010262(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  
  FUN_00010262();
  *(undefined2 *)(unaff_s0 * 0x5c + 0x280080c8) = *(undefined2 *)(unaff_s3 + 9);
  *(undefined2 *)(unaff_s0 * 0x5c + 0x280080ca) = *(undefined2 *)(unaff_s3 + 0xb);
  *(byte *)(*(int *)(unaff_s2 + unaff_s5) + 0xa5) =
       *(byte *)(*(int *)(unaff_s2 + unaff_s5) + 0xa5) | 8;
  *(undefined *)(unaff_s1 + 0xa3) = 0xe;
  FUN_000102d2();
  return 0;
}



undefined4 FUN_000102d2(void)

{
  FUN_000102d2();
  return 0;
}



// DWARF DIE: 6003

void llc_llcp_reject_ind(uint16_t conhdl,ke_task_id_t dest_id,uint8_t err_code,_Bool extended)

{
  undefined2 in_register_0000202a;
  uint extraout_a0;
  undefined3 in_register_00002035;
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  int *piVar3;
  
  _L0();
  piVar3 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  iVar2 = *piVar3;
  _L0();
  if ((extraout_a0 & 1) == 0) {
    if ((((extraout_a0 & 2) != 0) && (CONCAT31(in_register_00002035,extended) != 0)) &&
       ((*(byte *)(*piVar3 + 0xa5) & 8) == 0)) {
      if (*(char *)(iVar2 + 0xa4) != '\x03') {
        return;
      }
      FUN_000104ea();
      *(undefined *)(iVar2 + 0xa4) = 0;
      return;
    }
  }
  else {
    uVar1 = *(byte *)(iVar2 + 0xa3) - 4 & 0xff;
    if (uVar1 < 0xd) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar1 * 4);
                    // WARNING: Could not emulate address calculation at 0x00010364
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  if ((*(byte *)(*piVar3 + 0xa5) & 8) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  uint extraout_a0;
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  int unaff_s4;
  int unaff_s5;
  int *piVar3;
  int in_stack_0000000c;
  
  _L0();
  piVar3 = (int *)(unaff_s5 + unaff_s4 * 4);
  iVar2 = *piVar3;
  _L0();
  if ((extraout_a0 & 1) == 0) {
    if ((((extraout_a0 & 2) != 0) && (in_stack_0000000c != 0)) &&
       ((*(byte *)(*piVar3 + 0xa5) & 8) == 0)) {
      if (*(char *)(iVar2 + 0xa4) != '\x03') {
        return;
      }
      FUN_000104ea();
      *(undefined *)(iVar2 + 0xa4) = 0;
      return;
    }
  }
  else {
    uVar1 = *(byte *)(iVar2 + 0xa3) - 4 & 0xff;
    if (uVar1 < 0xd) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar1 * 4);
                    // WARNING: Could not emulate address calculation at 0x00010364
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  if ((*(byte *)(*(int *)(unaff_s0 + unaff_s4 * 4) + 0xa5) & 8) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  uint unaff_s3;
  int *unaff_s5;
  int unaff_s7;
  int in_stack_0000000c;
  
  _L0();
  if ((unaff_s3 & 1) == 0) {
    if ((((unaff_s3 & 2) != 0) && (in_stack_0000000c != 0)) &&
       ((*(byte *)(*unaff_s5 + 0xa5) & 8) == 0)) {
      if (*(char *)(unaff_s2 + 0xa4) != '\x03') {
        return;
      }
      FUN_000104ea();
      *(undefined *)(unaff_s2 + 0xa4) = 0;
      return;
    }
  }
  else {
    uVar1 = *(byte *)(unaff_s2 + 0xa3) - 4 & 0xff;
    if (uVar1 < 0xd) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar1 * 4);
                    // WARNING: Could not emulate address calculation at 0x00010364
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  if ((*(byte *)(*(int *)(unaff_s0 + unaff_s7) + 0xa5) & 8) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001036e(void)

{
  int unaff_s0;
  int extraout_a0;
  int unaff_s2;
  int unaff_s7;
  
  FUN_0001036e();
  FUN_00010378();
  if ((extraout_a0 == 3) && ((*(byte *)(*(int *)(unaff_s0 + unaff_s7) + 0xa5) & 0x10) == 0)) {
    *(undefined *)(*(int *)(unaff_s0 + unaff_s7) + 0xa5) = 0;
    _L0();
    FUN_000103b2();
    *(undefined *)(unaff_s2 + 0xa3) = 0;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_00010378(void)

{
  int unaff_s0;
  int extraout_a0;
  int unaff_s2;
  int unaff_s7;
  
  FUN_00010378();
  if ((extraout_a0 == 3) && ((*(byte *)(*(int *)(unaff_s0 + unaff_s7) + 0xa5) & 0x10) == 0)) {
    *(undefined *)(*(int *)(unaff_s0 + unaff_s7) + 0xa5) = 0;
    _L0();
    FUN_000103b2();
    *(undefined *)(unaff_s2 + 0xa3) = 0;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _L0(void)

{
  int unaff_s2;
  
  _L0();
  FUN_000103b2();
  *(undefined *)(unaff_s2 + 0xa3) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000103b2(void)

{
  int unaff_s2;
  
  FUN_000103b2();
  *(undefined *)(unaff_s2 + 0xa3) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000103fc(void)

{
  int extraout_a0;
  int extraout_a0_00;
  int unaff_s2;
  undefined4 *unaff_s5;
  int unaff_s6;
  
  FUN_000103fc();
  if ((unaff_s6 == 0x1a) && (FUN_0001040c(), extraout_a0 == 3)) {
    **(undefined **)*unaff_s5 = 2;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((*(ushort *)(unaff_s2 + 0x5c) & 0x40) != 0) {
    *(ushort *)(unaff_s2 + 0x5c) = *(ushort *)(unaff_s2 + 0x5c) & 0xffbf;
    FUN_00010456();
    if (extraout_a0_00 != 0) {
      _LVL89();
    }
  }
  FUN_00010478();
  FUN_00010486();
  *(undefined *)(unaff_s2 + 0xa3) = 0;
  return;
}



void FUN_0001040c(void)

{
  int extraout_a0;
  int extraout_a0_00;
  int unaff_s2;
  undefined4 *unaff_s5;
  
  FUN_0001040c();
  if (extraout_a0 != 3) {
    if ((*(ushort *)(unaff_s2 + 0x5c) & 0x40) != 0) {
      *(ushort *)(unaff_s2 + 0x5c) = *(ushort *)(unaff_s2 + 0x5c) & 0xffbf;
      FUN_00010456();
      if (extraout_a0_00 != 0) {
        _LVL89();
      }
    }
    FUN_00010478();
    FUN_00010486();
    *(undefined *)(unaff_s2 + 0xa3) = 0;
    return;
  }
  **(undefined **)*unaff_s5 = 2;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010456(void)

{
  int extraout_a0;
  int unaff_s2;
  
  FUN_00010456();
  if (extraout_a0 != 0) {
    _LVL89();
  }
  FUN_00010478();
  FUN_00010486();
  *(undefined *)(unaff_s2 + 0xa3) = 0;
  return;
}



void _LVL89(void)

{
  int unaff_s2;
  
  _LVL89();
  FUN_00010478();
  FUN_00010486();
  *(undefined *)(unaff_s2 + 0xa3) = 0;
  return;
}



void FUN_00010478(void)

{
  int unaff_s2;
  
  FUN_00010478();
  FUN_00010486();
  *(undefined *)(unaff_s2 + 0xa3) = 0;
  return;
}



void FUN_00010486(void)

{
  int unaff_s2;
  
  FUN_00010486();
  *(undefined *)(unaff_s2 + 0xa3) = 0;
  return;
}



void FUN_000104bc(void)

{
  int unaff_s2;
  
  FUN_000104bc();
  FUN_00010486();
  *(undefined *)(unaff_s2 + 0xa3) = 0;
  return;
}



void FUN_000104ea(void)

{
  int unaff_s2;
  
  FUN_000104ea();
  *(undefined *)(unaff_s2 + 0xa4) = 0;
  return;
}



// DWARF DIE: 3ff5

int llcp_reject_ind_ext_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_reject_ind_ext *param)

{
  _LVL106();
  return 0;
}



undefined4 _LVL106(void)

{
  _LVL106();
  return 0;
}



// DWARF DIE: 406a

int llcp_reject_ind_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_reject_ind *param)

{
  _LVL110();
  return 0;
}



undefined4 _LVL110(void)

{
  _LVL110();
  return 0;
}



// DWARF DIE: 433f

int llcp_pause_enc_req_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_pause_enc_req *param)

{
  undefined2 in_register_0000202a;
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = _L0();
  piVar4 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  iVar3 = *piVar4;
  if ((*(byte *)(iVar3 + 0xa5) & 8) == 0) {
    iVar2 = _L0();
    if ((iVar2 == 4) && ((uVar1 & 2) == 0)) {
      FUN_00010612();
      if ((uVar1 & 1) != 0) {
        FUN_00010626();
      }
      FUN_00010632();
      FUN_00010644();
      *(undefined *)(iVar3 + 0xa4) = 5;
      iVar2 = *piVar4;
      *(byte *)(iVar2 + 0xa5) = *(byte *)(iVar2 + 0xa5) | 0xc;
      iVar2 = FUN_00010670();
      if (iVar2 == 0) {
        _LVL132();
      }
      else {
        *(ushort *)(iVar3 + 0x5c) = *(ushort *)(iVar3 + 0x5c) | 4;
      }
    }
  }
  else {
    _LVL116();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = _L0();
  iVar3 = *(int *)(unaff_s1 * 4);
  if ((*(byte *)(iVar3 + 0xa5) & 8) == 0) {
    iVar2 = _L0();
    if ((iVar2 == 4) && ((uVar1 & 2) == 0)) {
      FUN_00010612();
      if ((uVar1 & 1) != 0) {
        FUN_00010626();
      }
      FUN_00010632();
      FUN_00010644();
      *(undefined *)(iVar3 + 0xa4) = 5;
      iVar2 = *(int *)(unaff_s1 * 4);
      *(byte *)(iVar2 + 0xa5) = *(byte *)(iVar2 + 0xa5) | 0xc;
      iVar2 = FUN_00010670();
      if (iVar2 == 0) {
        _LVL132();
      }
      else {
        *(ushort *)(iVar3 + 0x5c) = *(ushort *)(iVar3 + 0x5c) | 4;
      }
    }
  }
  else {
    _LVL116();
  }
  return 0;
}



undefined4 _LVL116(void)

{
  _LVL116();
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  
  iVar1 = _L0();
  if ((iVar1 == 4) && ((unaff_s4 & 2) == 0)) {
    FUN_00010612();
    if ((unaff_s4 & 1) != 0) {
      FUN_00010626();
    }
    FUN_00010632();
    FUN_00010644();
    *(undefined *)(unaff_s2 + 0xa4) = 5;
    *(byte *)(*(int *)(unaff_s5 + unaff_s3) + 0xa5) =
         *(byte *)(*(int *)(unaff_s5 + unaff_s3) + 0xa5) | 0xc;
    iVar1 = FUN_00010670();
    if (iVar1 == 0) {
      _LVL132();
    }
    else {
      *(ushort *)(unaff_s2 + 0x5c) = *(ushort *)(unaff_s2 + 0x5c) | 4;
    }
  }
  return 0;
}



undefined4 FUN_00010612(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  
  FUN_00010612();
  if ((unaff_s4 & 1) != 0) {
    FUN_00010626();
  }
  FUN_00010632();
  FUN_00010644();
  *(undefined *)(unaff_s2 + 0xa4) = 5;
  *(byte *)(*(int *)(unaff_s5 + unaff_s3) + 0xa5) =
       *(byte *)(*(int *)(unaff_s5 + unaff_s3) + 0xa5) | 0xc;
  iVar1 = FUN_00010670();
  if (iVar1 == 0) {
    _LVL132();
  }
  else {
    *(ushort *)(unaff_s2 + 0x5c) = *(ushort *)(unaff_s2 + 0x5c) | 4;
  }
  return 0;
}



undefined4 FUN_00010626(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  
  FUN_00010626();
  FUN_00010632();
  FUN_00010644();
  *(undefined *)(unaff_s2 + 0xa4) = 5;
  *(byte *)(*(int *)(unaff_s5 + unaff_s3) + 0xa5) =
       *(byte *)(*(int *)(unaff_s5 + unaff_s3) + 0xa5) | 0xc;
  iVar1 = FUN_00010670();
  if (iVar1 == 0) {
    _LVL132();
  }
  else {
    *(ushort *)(unaff_s2 + 0x5c) = *(ushort *)(unaff_s2 + 0x5c) | 4;
  }
  return 0;
}



undefined4 FUN_00010632(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  
  FUN_00010632();
  FUN_00010644();
  *(undefined *)(unaff_s2 + 0xa4) = 5;
  *(byte *)(*(int *)(unaff_s5 + unaff_s3) + 0xa5) =
       *(byte *)(*(int *)(unaff_s5 + unaff_s3) + 0xa5) | 0xc;
  iVar1 = FUN_00010670();
  if (iVar1 == 0) {
    _LVL132();
  }
  else {
    *(ushort *)(unaff_s2 + 0x5c) = *(ushort *)(unaff_s2 + 0x5c) | 4;
  }
  return 0;
}



undefined4 FUN_00010644(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  
  FUN_00010644();
  *(undefined *)(unaff_s2 + 0xa4) = 5;
  *(byte *)(*(int *)(unaff_s5 + unaff_s3) + 0xa5) =
       *(byte *)(*(int *)(unaff_s5 + unaff_s3) + 0xa5) | 0xc;
  iVar1 = FUN_00010670();
  if (iVar1 == 0) {
    _LVL132();
  }
  else {
    *(ushort *)(unaff_s2 + 0x5c) = *(ushort *)(unaff_s2 + 0x5c) | 4;
  }
  return 0;
}



undefined4 FUN_00010670(void)

{
  int iVar1;
  int unaff_s2;
  
  iVar1 = FUN_00010670();
  if (iVar1 == 0) {
    _LVL132();
  }
  else {
    *(ushort *)(unaff_s2 + 0x5c) = *(ushort *)(unaff_s2 + 0x5c) | 4;
  }
  return 0;
}



undefined4 _LVL132(void)

{
  _LVL132();
  return 0;
}



// DWARF DIE: 4915

int llcp_start_enc_req_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_start_enc_req *param)

{
  char cVar1;
  int iVar2;
  undefined2 in_register_0000202a;
  uint uVar3;
  
  uVar3 = _L0();
  iVar2 = *(int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  if (((*(byte *)(iVar2 + 0xa5) & 8) != 0) && ((*(char *)(iVar2 + 0xa3) - 0xeU & 0xfd) != 0)) {
    FUN_000106e4();
  }
  cVar1 = *(char *)(iVar2 + 0xa3);
  if ((uVar3 & 1) == 0) {
    if (cVar1 == '\x0e') goto _L0;
  }
  else {
    if (cVar1 == '\x0e') {
_L0:
      *(undefined *)(iVar2 + 0xa3) = 0xf;
      return 0;
    }
    if (cVar1 != '\x10') {
      return 0;
    }
  }
  *(undefined *)(iVar2 + 0xa3) = 0x11;
  FUN_0001070e();
  return 0;
}



undefined4 _L0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int unaff_s3;
  
  uVar3 = _L0();
  iVar2 = *(int *)(unaff_s3 * 4);
  if (((*(byte *)(iVar2 + 0xa5) & 8) != 0) && ((*(char *)(iVar2 + 0xa3) - 0xeU & 0xfd) != 0)) {
    FUN_000106e4();
  }
  cVar1 = *(char *)(iVar2 + 0xa3);
  if ((uVar3 & 1) == 0) {
    if (cVar1 == '\x0e') goto _L0;
  }
  else {
    if (cVar1 == '\x0e') {
_L0:
      *(undefined *)(iVar2 + 0xa3) = 0xf;
      return 0;
    }
    if (cVar1 != '\x10') {
      return 0;
    }
  }
  *(undefined *)(iVar2 + 0xa3) = 0x11;
  FUN_0001070e();
  return 0;
}



undefined4 FUN_000106e4(void)

{
  char cVar1;
  int unaff_s0;
  uint unaff_s1;
  
  FUN_000106e4();
  cVar1 = *(char *)(unaff_s0 + 0xa3);
  if ((unaff_s1 & 1) == 0) {
    if (cVar1 == '\x0e') goto _L0;
  }
  else {
    if (cVar1 == '\x0e') {
_L0:
      *(undefined *)(unaff_s0 + 0xa3) = 0xf;
      return 0;
    }
    if (cVar1 != '\x10') {
      return 0;
    }
  }
  *(undefined *)(unaff_s0 + 0xa3) = 0x11;
  FUN_0001070e();
  return 0;
}



undefined4 FUN_0001070e(void)

{
  FUN_0001070e();
  return 0;
}



// DWARF DIE: 4cac

int llcp_enc_req_handler(uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_enc_req *param)

{
  int iVar1;
  undefined2 in_register_0000202a;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar2 = _L0();
  piVar5 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  iVar1 = *piVar5;
  if (((*(byte *)(iVar1 + 0xa5) & 8) == 0) || (*(char *)(iVar1 + 0xa4) == '\a')) {
    iVar3 = FUN_000107a4();
    iVar4 = 0;
    if ((iVar3 == 4) && (((uVar2 & 2) == 0 || (iVar4 = 0, *(char *)(iVar1 + 0xa4) == '\a')))) {
      FUN_000107ce();
      FUN_000107e0();
      *(undefined *)(iVar1 + 0xa4) = 8;
      *(uint8_t **)(*piVar5 + 8) = param[-1].ivm.iv + 2;
      FUN_00010800();
      *(byte *)(*piVar5 + 0xa5) = *(byte *)(*piVar5 + 0xa5) | 0xc;
      iVar4 = FUN_00010822();
      if (iVar4 == 0) {
        _LVL165();
      }
      else {
        *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) | 4;
      }
      iVar4 = 1;
    }
  }
  else {
    FUN_00010782();
    iVar4 = 0;
  }
  return iVar4;
}



undefined4 _L0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_s3;
  int unaff_s4;
  int *piVar5;
  
  uVar2 = _L0();
  piVar5 = (int *)(unaff_s4 * 4);
  iVar1 = *piVar5;
  if (((*(byte *)(iVar1 + 0xa5) & 8) == 0) || (*(char *)(iVar1 + 0xa4) == '\a')) {
    iVar3 = FUN_000107a4();
    uVar4 = 0;
    if ((iVar3 == 4) && (((uVar2 & 2) == 0 || (uVar4 = 0, *(char *)(iVar1 + 0xa4) == '\a')))) {
      FUN_000107ce();
      FUN_000107e0();
      *(undefined *)(iVar1 + 0xa4) = 8;
      *(int *)(*piVar5 + 8) = unaff_s3 + -2;
      FUN_00010800();
      *(byte *)(*piVar5 + 0xa5) = *(byte *)(*piVar5 + 0xa5) | 0xc;
      iVar3 = FUN_00010822();
      if (iVar3 == 0) {
        _LVL165();
      }
      else {
        *(ushort *)(iVar1 + 0x5c) = *(ushort *)(iVar1 + 0x5c) | 4;
      }
      uVar4 = 1;
    }
  }
  else {
    FUN_00010782();
    uVar4 = 0;
  }
  return uVar4;
}



undefined4 FUN_00010782(void)

{
  FUN_00010782();
  return 0;
}



undefined4 FUN_000107a4(void)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  
  iVar1 = FUN_000107a4();
  uVar2 = 0;
  if ((iVar1 == 4) && (((unaff_s1 & 2) == 0 || (uVar2 = 0, *(char *)(unaff_s0 + 0xa4) == '\a')))) {
    FUN_000107ce();
    FUN_000107e0();
    *(undefined *)(unaff_s0 + 0xa4) = 8;
    *(int *)(*(int *)(unaff_s5 + unaff_s6) + 8) = unaff_s3 + -2;
    FUN_00010800();
    iVar1 = *(int *)(unaff_s5 + unaff_s6);
    *(byte *)(iVar1 + 0xa5) = *(byte *)(iVar1 + 0xa5) | 0xc;
    iVar1 = FUN_00010822();
    if (iVar1 == 0) {
      _LVL165();
    }
    else {
      *(ushort *)(unaff_s0 + 0x5c) = *(ushort *)(unaff_s0 + 0x5c) | 4;
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 FUN_000107ce(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  
  FUN_000107ce();
  FUN_000107e0();
  *(undefined *)(unaff_s0 + 0xa4) = 8;
  *(int *)(*(int *)(unaff_s5 + unaff_s6) + 8) = unaff_s3 + -2;
  FUN_00010800();
  iVar1 = *(int *)(unaff_s5 + unaff_s6);
  *(byte *)(iVar1 + 0xa5) = *(byte *)(iVar1 + 0xa5) | 0xc;
  iVar1 = FUN_00010822();
  if (iVar1 == 0) {
    _LVL165();
  }
  else {
    *(ushort *)(unaff_s0 + 0x5c) = *(ushort *)(unaff_s0 + 0x5c) | 4;
  }
  return 1;
}



undefined4 FUN_000107e0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  
  FUN_000107e0();
  *(undefined *)(unaff_s0 + 0xa4) = 8;
  *(int *)(*(int *)(unaff_s5 + unaff_s6) + 8) = unaff_s3 + -2;
  FUN_00010800();
  iVar1 = *(int *)(unaff_s5 + unaff_s6);
  *(byte *)(iVar1 + 0xa5) = *(byte *)(iVar1 + 0xa5) | 0xc;
  iVar1 = FUN_00010822();
  if (iVar1 == 0) {
    _LVL165();
  }
  else {
    *(ushort *)(unaff_s0 + 0x5c) = *(ushort *)(unaff_s0 + 0x5c) | 4;
  }
  return 1;
}



undefined4 FUN_00010800(void)

{
  int unaff_s0;
  int iVar1;
  int *unaff_s5;
  
  FUN_00010800();
  *(byte *)(*unaff_s5 + 0xa5) = *(byte *)(*unaff_s5 + 0xa5) | 0xc;
  iVar1 = FUN_00010822();
  if (iVar1 == 0) {
    _LVL165();
  }
  else {
    *(ushort *)(unaff_s0 + 0x5c) = *(ushort *)(unaff_s0 + 0x5c) | 4;
  }
  return 1;
}



undefined4 FUN_00010822(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = FUN_00010822();
  if (iVar1 == 0) {
    _LVL165();
  }
  else {
    *(ushort *)(unaff_s0 + 0x5c) = *(ushort *)(unaff_s0 + 0x5c) | 4;
  }
  return 1;
}



undefined4 _LVL165(void)

{
  _LVL165();
  return 1;
}



// DWARF DIE: 34cc

int llcp_unknown_rsp_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_unknown_rsp *param)

{
  int iVar1;
  undefined2 in_register_0000202a;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = _L0();
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  if (((*(byte *)(iVar1 + 0xa5) & 8) == 0) || (*(char *)(iVar1 + 0xa3) == '\r')) {
    if (((uVar2 & 1) != 0) && (uVar2 = *(byte *)(iVar1 + 0xa3) - 1 & 0xff, uVar2 < 0xd)) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4);
                    // WARNING: Could not emulate address calculation at 0x000108e2
                    // WARNING: Treating indirect jump as call
      iVar1 = (*UNRECOVERED_JUMPTABLE)(param,UNRECOVERED_JUMPTABLE);
      return iVar1;
    }
  }
  else {
    _LVL171();
  }
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  undefined4 in_stack_0000000c;
  
  uVar2 = _L0();
  iVar1 = *(int *)(unaff_s2 * 4);
  if (((*(byte *)(iVar1 + 0xa5) & 8) == 0) || (*(char *)(iVar1 + 0xa3) == '\r')) {
    if (((uVar2 & 1) != 0) && (uVar2 = *(byte *)(iVar1 + 0xa3) - 1 & 0xff, uVar2 < 0xd)) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4);
                    // WARNING: Could not emulate address calculation at 0x000108e2
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(in_stack_0000000c,UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
  }
  else {
    _LVL171();
  }
  return 0;
}



undefined4 _LVL171(void)

{
  _LVL171();
  return 0;
}



undefined4 _LVL176(void)

{
  int unaff_s0;
  
  _LVL176();
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 FUN_00010902(void)

{
  int unaff_s0;
  
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 _LVL180(void)

{
  int unaff_s0;
  
  _LVL180();
  FUN_00010930();
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 FUN_00010930(void)

{
  int unaff_s0;
  
  FUN_00010930();
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 _LVL184(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s4;
  int unaff_s5;
  
  _LVL184();
  *(undefined *)(unaff_s0 + 0xa6) = 0;
  iVar1 = _L0();
  if (iVar1 == 3) {
    *(undefined *)**(undefined4 **)(unaff_s4 + unaff_s5) = 2;
    _L0();
  }
  else {
    if ((*(ushort *)(unaff_s0 + 0x5c) & 0x40) != 0) {
      *(ushort *)(unaff_s0 + 0x5c) = *(ushort *)(unaff_s0 + 0x5c) & 0xffbf;
      iVar1 = FUN_00010992();
      if (iVar1 != 0) {
        _LVL192();
      }
    }
    FUN_000109b2();
    FUN_00010902();
    *(undefined *)(unaff_s0 + 0xa3) = 0;
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s4;
  int unaff_s5;
  
  iVar1 = _L0();
  if (iVar1 == 3) {
    *(undefined *)**(undefined4 **)(unaff_s4 + unaff_s5) = 2;
    _L0();
  }
  else {
    if ((*(ushort *)(unaff_s0 + 0x5c) & 0x40) != 0) {
      *(ushort *)(unaff_s0 + 0x5c) = *(ushort *)(unaff_s0 + 0x5c) & 0xffbf;
      iVar1 = FUN_00010992();
      if (iVar1 != 0) {
        _LVL192();
      }
    }
    FUN_000109b2();
    FUN_00010902();
    *(undefined *)(unaff_s0 + 0xa3) = 0;
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_00010992(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = FUN_00010992();
  if (iVar1 != 0) {
    _LVL192();
  }
  FUN_000109b2();
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 _LVL192(void)

{
  int unaff_s0;
  
  _LVL192();
  FUN_000109b2();
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 FUN_000109b2(void)

{
  int unaff_s0;
  
  FUN_000109b2();
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 FUN_000109cc(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  undefined2 unaff_s2;
  
  FUN_000109cc();
  *(undefined *)(unaff_s0 + 0x52) = 1;
  iVar1 = FUN_000109dc();
  if ((iVar1 != 0) && ((*(byte *)(unaff_s0 + 0x53) & 2) == 0)) {
    puVar2 = (undefined *)FUN_000109fc();
    *puVar2 = 7;
    *(undefined2 *)(puVar2 + 2) = unaff_s2;
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
    *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
    _L0();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  }
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 FUN_000109dc(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  undefined2 unaff_s2;
  
  iVar1 = FUN_000109dc();
  if ((iVar1 != 0) && ((*(byte *)(unaff_s0 + 0x53) & 2) == 0)) {
    puVar2 = (undefined *)FUN_000109fc();
    *puVar2 = 7;
    *(undefined2 *)(puVar2 + 2) = unaff_s2;
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
    *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
    _L0();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  }
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 FUN_000109fc(void)

{
  int unaff_s0;
  undefined *puVar1;
  undefined2 unaff_s2;
  
  puVar1 = (undefined *)FUN_000109fc();
  *puVar1 = 7;
  *(undefined2 *)(puVar1 + 2) = unaff_s2;
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
  *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
  _L0();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  FUN_00010902();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  return 0;
}



undefined4 FUN_00010a54(void)

{
  int unaff_s0;
  
  FUN_00010a54();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  FUN_00010a66();
  return 0;
}



undefined4 FUN_00010a66(void)

{
  FUN_00010a66();
  return 0;
}



// DWARF DIE: 71cf

void llc_llcp_version_ind_pdu_send(uint16_t conhdl)

{
  llcp_vers_ind pdu;
  
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 54a4

int llcp_vers_ind_handler(uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_vers_ind *param)

{
  ushort uVar1;
  uint16_t uVar2;
  int iVar3;
  undefined2 in_register_0000202a;
  uint uVar4;
  
  uVar4 = _L0();
  iVar3 = *(int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  if ((*(byte *)(iVar3 + 0xa5) & 8) == 0) {
    uVar1 = *(ushort *)(iVar3 + 0x5c);
    *(uint8_t *)(iVar3 + 0x3c) = param->vers;
    *(uint16_t *)(iVar3 + 0x3e) = param->compid;
    uVar2 = param->subvers;
    *(ushort *)(iVar3 + 0x5c) = uVar1 | 2;
    *(uint16_t *)(iVar3 + 0x40) = uVar2;
    if (((uVar4 & 1) == 0) || (*(char *)(iVar3 + 0xa3) != '\x02')) {
      if (((int)(uint)uVar1 >> 1 & 1U) == 0) {
        _LVL226();
      }
    }
    else {
      _LVL220();
      FUN_00010b72();
      *(undefined *)(iVar3 + 0xa3) = 0;
      FUN_00010b84();
    }
  }
  else {
    _LVL214();
  }
  return 0;
}



undefined4 _L0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_s1;
  uint uVar4;
  int in_stack_0000000c;
  
  uVar4 = _L0();
  iVar3 = *(int *)(unaff_s1 * 4);
  if ((*(byte *)(iVar3 + 0xa5) & 8) == 0) {
    uVar1 = *(ushort *)(iVar3 + 0x5c);
    *(undefined *)(iVar3 + 0x3c) = *(undefined *)(in_stack_0000000c + 1);
    *(undefined2 *)(iVar3 + 0x3e) = *(undefined2 *)(in_stack_0000000c + 2);
    uVar2 = *(undefined2 *)(in_stack_0000000c + 4);
    *(ushort *)(iVar3 + 0x5c) = uVar1 | 2;
    *(undefined2 *)(iVar3 + 0x40) = uVar2;
    if (((uVar4 & 1) == 0) || (*(char *)(iVar3 + 0xa3) != '\x02')) {
      if (((int)(uint)uVar1 >> 1 & 1U) == 0) {
        _LVL226();
      }
    }
    else {
      _LVL220();
      FUN_00010b72();
      *(undefined *)(iVar3 + 0xa3) = 0;
      FUN_00010b84();
    }
  }
  else {
    _LVL214();
  }
  return 0;
}



undefined4 _LVL214(void)

{
  _LVL214();
  return 0;
}



undefined4 _LVL220(void)

{
  int unaff_s0;
  
  _LVL220();
  FUN_00010b72();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  FUN_00010b84();
  return 0;
}



undefined4 FUN_00010b72(void)

{
  int unaff_s0;
  
  FUN_00010b72();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  FUN_00010b84();
  return 0;
}



undefined4 FUN_00010b84(void)

{
  FUN_00010b84();
  return 0;
}



undefined4 _LVL226(void)

{
  _LVL226();
  return 0;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 7144

void llc_llcp_ch_map_update_pdu_send(uint16_t conhdl)

{
  int iVar1;
  undefined2 extraout_a0;
  undefined2 in_register_0000202a;
  undefined auStack23 [3];
  llcp_channel_map_ind pdu;
  
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  FUN_00010bc4();
  pdu.ch_map.map._1_2_ = extraout_a0;
  (*pcRam00000000)(auStack23,iVar1 + 99,5,pcRam00000000);
  FUN_00010bee();
  return;
}



void FUN_00010bc4(void)

{
  int unaff_s1;
  undefined2 extraout_a0;
  undefined2 uStack0000000e;
  
  FUN_00010bc4();
  uStack0000000e = extraout_a0;
  (*pcRam00000000)(&stack0x00000009,unaff_s1 + 99,5,pcRam00000000);
  FUN_00010bee();
  return;
}



void FUN_00010bee(void)

{
  FUN_00010bee();
  return;
}



// DWARF DIE: 70be

void llc_llcp_pause_enc_req_pdu_send(uint16_t conhdl)

{
  llcp_pause_enc_req pdu;
  
  _L0();
  FUN_00010c36();
  return;
}



void _L0(void)

{
  _L0();
  FUN_00010c36();
  return;
}



void FUN_00010c36(void)

{
  FUN_00010c36();
  return;
}



// DWARF DIE: 7025

void llc_llcp_pause_enc_rsp_pdu_send(uint16_t conhdl)

{
  undefined2 in_register_0000202a;
  ushort *puVar1;
  int iVar2;
  llcp_pause_enc_rsp pdu;
  
  puVar1 = (ushort *)(CONCAT22(in_register_0000202a,conhdl) * 0x5c + 0x28008092);
  *puVar1 = *puVar1 & 0xfeff;
  iVar2 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  *(byte *)(iVar2 + 0xa5) = *(byte *)(iVar2 + 0xa5) & 0xfd;
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 40df

int llcp_pause_enc_rsp_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_pause_enc_rsp *param)

{
  undefined2 in_register_0000202a;
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = CONCAT22(in_register_0000202a,conhdl);
  uVar2 = _L0();
  piVar5 = (int *)(iVar1 << 2);
  iVar4 = *piVar5;
  if (((uVar2 & 1) == 0) || (*(char *)(iVar4 + 0xa3) != '\v')) {
    if ((*(char *)(iVar4 + 0xa4) == '\x06') && ((uVar2 >> 1 & 1) != 0)) {
      FUN_00010d74();
      puVar3 = (ushort *)(iVar1 * 0x5c + 0x28008092);
      *puVar3 = *puVar3 & 0xfcff;
      *(byte *)(*piVar5 + 0xa5) = *(byte *)(*piVar5 + 0xa5) & 0xdc;
      *(undefined *)(iVar4 + 0xa4) = 7;
      _L0();
    }
    else {
      if ((*(byte *)(iVar4 + 0xa5) & 8) != 0) {
        FUN_00010dde();
      }
    }
  }
  else {
    _LVL250();
    puVar3 = (ushort *)(iVar1 * 0x5c + 0x28008092);
    *puVar3 = *puVar3 & 0xfcff;
    *(undefined *)(iVar4 + 0xa3) = 0xc;
    _L0();
    *(byte *)(*piVar5 + 0xa5) = *(byte *)(*piVar5 + 0xa5) & 0xfc | 8;
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s1;
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = _L0();
  piVar4 = (int *)(unaff_s1 * 4);
  iVar3 = *piVar4;
  if (((uVar1 & 1) == 0) || (*(char *)(iVar3 + 0xa3) != '\v')) {
    if ((*(char *)(iVar3 + 0xa4) == '\x06') && ((uVar1 >> 1 & 1) != 0)) {
      FUN_00010d74();
      puVar2 = (ushort *)(unaff_s1 * 0x5c + 0x28008092);
      *puVar2 = *puVar2 & 0xfcff;
      *(byte *)(*piVar4 + 0xa5) = *(byte *)(*piVar4 + 0xa5) & 0xdc;
      *(undefined *)(iVar3 + 0xa4) = 7;
      _L0();
    }
    else {
      if ((*(byte *)(iVar3 + 0xa5) & 8) != 0) {
        FUN_00010dde();
      }
    }
  }
  else {
    _LVL250();
    puVar2 = (ushort *)(unaff_s1 * 0x5c + 0x28008092);
    *puVar2 = *puVar2 & 0xfcff;
    *(undefined *)(iVar3 + 0xa3) = 0xc;
    _L0();
    *(byte *)(*piVar4 + 0xa5) = *(byte *)(*piVar4 + 0xa5) & 0xfc | 8;
  }
  return 0;
}



undefined4 _LVL250(void)

{
  int unaff_s1;
  ushort *puVar1;
  int unaff_s2;
  int *unaff_s4;
  
  _LVL250();
  puVar1 = (ushort *)(unaff_s1 * 0x5c + 0x28008092);
  *puVar1 = *puVar1 & 0xfcff;
  *(undefined *)(unaff_s2 + 0xa3) = 0xc;
  _L0();
  *(byte *)(*unaff_s4 + 0xa5) = *(byte *)(*unaff_s4 + 0xa5) & 0xfc | 8;
  return 0;
}



undefined4 _L0(void)

{
  int *unaff_s4;
  
  _L0();
  *(byte *)(*unaff_s4 + 0xa5) = *(byte *)(*unaff_s4 + 0xa5) & 0xfc | 8;
  return 0;
}



undefined4 FUN_00010d74(void)

{
  int unaff_s0;
  int unaff_s1;
  ushort *puVar1;
  int unaff_s2;
  int unaff_s5;
  
  FUN_00010d74();
  puVar1 = (ushort *)(unaff_s1 * 0x5c + 0x28008092);
  *puVar1 = *puVar1 & 0xfcff;
  *(byte *)(*(int *)(unaff_s0 + unaff_s5) + 0xa5) =
       *(byte *)(*(int *)(unaff_s0 + unaff_s5) + 0xa5) & 0xdc;
  *(undefined *)(unaff_s2 + 0xa4) = 7;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_00010dde(void)

{
  FUN_00010dde();
  return 0;
}



// WARNING: Variable defined which should be unmapped: pdu
// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 6df1

void llc_llcp_enc_req_pdu_send(uint16_t conhdl,hci_le_start_enc_cmd *param)

{
  int iVar1;
  undefined2 in_register_0000202a;
  int *piVar2;
  int iVar3;
  undefined auStack55 [3];
  llcp_enc_req pdu;
  
  piVar2 = (int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  pdu.rand.nb[4] = (uint8_t)param->enc_div;
  pdu.rand.nb[5] = (uint8_t)(param->enc_div >> 8);
  iVar3 = *piVar2;
  (*pcRam00000000)(auStack55,&param->nb,8,pcRam00000000);
  (*pcRam00000000)(pdu.skdm.skdiv + 4,iVar3 + 0x91,4,pcRam00000000);
  iVar1 = CONCAT22(in_register_0000202a,conhdl) * 0x5c;
  (*pcRam00000000)(pdu.rand.nb + 6,iVar3 + 0x95,8,pcRam00000000);
  *(undefined2 *)(iVar1 + 0x280080c4) = pdu.skdm.skdiv._4_2_;
  *(undefined2 *)(iVar1 + 0x280080c6) = pdu.skdm.skdiv._6_2_;
  (*pcRam00000000)(iVar3 + 0x81,&param->ltk,0x10,pcRam00000000);
  (*pcRam00000000)(iVar3 + 0x71,pdu.rand.nb + 6,8,pcRam00000000);
  *(ushort *)(iVar1 + 0x28008092) = *(ushort *)(iVar1 + 0x28008092) & 0xfeff;
  iVar1 = *piVar2;
  *(byte *)(iVar1 + 0xa5) = *(byte *)(iVar1 + 0xa5) & 0xfd;
  FUN_00010eea();
  FUN_00010efc();
  return;
}



void FUN_00010eea(void)

{
  FUN_00010eea();
  FUN_00010efc();
  return;
}



void FUN_00010efc(void)

{
  FUN_00010efc();
  return;
}



// WARNING: Variable defined which should be unmapped: pdu
// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 6c9a

void llc_llcp_enc_rsp_pdu_send(uint16_t conhdl,llcp_enc_req *param)

{
  int iVar1;
  undefined2 in_register_0000202a;
  int iVar2;
  undefined auStack31 [3];
  llcp_enc_rsp pdu;
  
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  (*pcRam00000000)(pdu.skds.skdiv + 4,iVar1 + 0x91,4,pcRam00000000);
  (*pcRam00000000)(auStack31,iVar1 + 0x95,8,pcRam00000000);
  iVar2 = CONCAT22(in_register_0000202a,conhdl) * 0x5c;
  *(undefined2 *)(iVar2 + 0x280080c8) = pdu.skds.skdiv._4_2_;
  *(undefined2 *)(iVar2 + 0x280080ca) = pdu.skds.skdiv._6_2_;
  (*pcRam00000000)(iVar1 + 0x79,auStack31,8,pcRam00000000);
  FUN_00010fb0();
  return;
}



void FUN_00010fb0(void)

{
  FUN_00010fb0();
  return;
}



// DWARF DIE: 6bff

void llc_llcp_start_enc_rsp_pdu_send(uint16_t conhdl)

{
  undefined2 in_register_0000202a;
  ushort *puVar1;
  int iVar2;
  llcp_start_enc_rsp pdu;
  
  puVar1 = (ushort *)(CONCAT22(in_register_0000202a,conhdl) * 0x5c + 0x28008092);
  *puVar1 = *puVar1 | 0x300;
  iVar2 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  *(byte *)(iVar2 + 0xa5) = *(byte *)(iVar2 + 0xa5) | 3;
  _L0();
  FUN_00011028();
  return;
}



void _L0(void)

{
  _L0();
  FUN_00011028();
  return;
}



void FUN_00011028(void)

{
  FUN_00011028();
  return;
}



// DWARF DIE: 45d6

int llcp_start_enc_rsp_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_start_enc_rsp *param)

{
  byte bVar1;
  undefined2 in_register_0000202a;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  
  uVar2 = _L0();
  piVar6 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  iVar5 = *piVar6;
  if ((((*(byte *)(iVar5 + 0xa5) & 8) == 0) || (*(char *)(iVar5 + 0xa3) == '\x12')) ||
     (*(char *)(iVar5 + 0xa4) == '\v')) {
    if ((uVar2 & 0xf) == 0xf) {
      iVar3 = FUN_000110b8();
      if ((iVar3 == 4) && (*(char *)(iVar5 + 0xa4) == '\v')) {
        puVar4 = (ushort *)(CONCAT22(in_register_0000202a,conhdl) * 0x5c + 0x28008092);
        *puVar4 = *puVar4 | 0x300;
        *(byte *)(*piVar6 + 0xa5) = *(byte *)(*piVar6 + 0xa5) | 3;
      }
    }
    else {
      FUN_00011106();
      iVar3 = FUN_00011110();
      if (iVar3 == 4) {
        *(undefined *)(iVar5 + 0xa4) = 0xc;
        if ((uVar2 & 1) != 0) {
          FUN_00011134();
        }
        FUN_0001113e();
        *(byte *)(*piVar6 + 0xa5) = *(byte *)(*piVar6 + 0xa5) & 0xf7;
      }
      else {
        FUN_0001118e();
        *(undefined *)(iVar5 + 0xa3) = 0;
        *(byte *)(*piVar6 + 0xa5) = *(byte *)(*piVar6 + 0xa5) & 0xd3;
        FUN_000111be();
      }
      bVar1 = *(byte *)(*piVar6 + 0xa5);
      if ((bVar1 & 0x10) == 0) {
        FUN_000111ce();
      }
      else {
        *(byte *)(*piVar6 + 0xa5) = bVar1 & 0xef;
        FUN_0001117a();
      }
    }
  }
  else {
    FUN_00011090();
  }
  return 0;
}



undefined4 _L0(void)

{
  byte bVar1;
  int unaff_s0;
  uint uVar2;
  int iVar3;
  int unaff_s2;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = _L0();
  iVar6 = unaff_s2 * 4;
  iVar5 = *(int *)(unaff_s0 + iVar6);
  if ((((*(byte *)(iVar5 + 0xa5) & 8) == 0) || (*(char *)(iVar5 + 0xa3) == '\x12')) ||
     (*(char *)(iVar5 + 0xa4) == '\v')) {
    if ((uVar2 & 0xf) == 0xf) {
      iVar3 = FUN_000110b8();
      if ((iVar3 == 4) && (*(char *)(iVar5 + 0xa4) == '\v')) {
        puVar4 = (ushort *)(unaff_s2 * 0x5c + 0x28008092);
        *puVar4 = *puVar4 | 0x300;
        *(byte *)(*(int *)(unaff_s0 + iVar6) + 0xa5) =
             *(byte *)(*(int *)(unaff_s0 + iVar6) + 0xa5) | 3;
      }
    }
    else {
      FUN_00011106();
      iVar3 = FUN_00011110();
      if (iVar3 == 4) {
        *(undefined *)(iVar5 + 0xa4) = 0xc;
        if ((uVar2 & 1) != 0) {
          FUN_00011134();
        }
        FUN_0001113e();
        *(byte *)(*(int *)(unaff_s0 + iVar6) + 0xa5) =
             *(byte *)(*(int *)(unaff_s0 + iVar6) + 0xa5) & 0xf7;
      }
      else {
        FUN_0001118e();
        *(undefined *)(iVar5 + 0xa3) = 0;
        *(byte *)(*(int *)(unaff_s0 + iVar6) + 0xa5) =
             *(byte *)(*(int *)(unaff_s0 + iVar6) + 0xa5) & 0xd3;
        FUN_000111be();
      }
      bVar1 = *(byte *)(*(int *)(unaff_s0 + iVar6) + 0xa5);
      if ((bVar1 & 0x10) == 0) {
        FUN_000111ce();
      }
      else {
        *(byte *)(*(int *)(unaff_s0 + iVar6) + 0xa5) = bVar1 & 0xef;
        FUN_0001117a();
      }
    }
  }
  else {
    FUN_00011090();
  }
  return 0;
}



undefined4 FUN_00011090(void)

{
  FUN_00011090();
  return 0;
}



undefined4 FUN_000110b8(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  ushort *puVar2;
  int unaff_s3;
  int unaff_s4;
  
  iVar1 = FUN_000110b8();
  if ((iVar1 == 4) && (*(char *)(unaff_s3 + 0xa4) == '\v')) {
    puVar2 = (ushort *)(unaff_s2 * 0x5c + 0x28008092);
    *puVar2 = *puVar2 | 0x300;
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) =
         *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) | 3;
  }
  return 0;
}



undefined4 FUN_00011106(void)

{
  byte bVar1;
  int unaff_s0;
  uint unaff_s1;
  int iVar2;
  int unaff_s3;
  int unaff_s4;
  
  FUN_00011106();
  iVar2 = FUN_00011110();
  if (iVar2 == 4) {
    *(undefined *)(unaff_s3 + 0xa4) = 0xc;
    if ((unaff_s1 & 1) != 0) {
      FUN_00011134();
    }
    FUN_0001113e();
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) =
         *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) & 0xf7;
  }
  else {
    FUN_0001118e();
    *(undefined *)(unaff_s3 + 0xa3) = 0;
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) =
         *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) & 0xd3;
    FUN_000111be();
  }
  bVar1 = *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5);
  if ((bVar1 & 0x10) == 0) {
    FUN_000111ce();
  }
  else {
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) = bVar1 & 0xef;
    FUN_0001117a();
  }
  return 0;
}



undefined4 FUN_00011110(void)

{
  byte bVar1;
  int unaff_s0;
  uint unaff_s1;
  int iVar2;
  int unaff_s3;
  int unaff_s4;
  
  iVar2 = FUN_00011110();
  if (iVar2 == 4) {
    *(undefined *)(unaff_s3 + 0xa4) = 0xc;
    if ((unaff_s1 & 1) != 0) {
      FUN_00011134();
    }
    FUN_0001113e();
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) =
         *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) & 0xf7;
  }
  else {
    FUN_0001118e();
    *(undefined *)(unaff_s3 + 0xa3) = 0;
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) =
         *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) & 0xd3;
    FUN_000111be();
  }
  bVar1 = *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5);
  if ((bVar1 & 0x10) == 0) {
    FUN_000111ce();
  }
  else {
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) = bVar1 & 0xef;
    FUN_0001117a();
  }
  return 0;
}



undefined4 FUN_00011134(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s4;
  
  FUN_00011134();
  FUN_0001113e();
  *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) =
       *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) & 0xf7;
  bVar1 = *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5);
  if ((bVar1 & 0x10) == 0) {
    FUN_000111ce();
  }
  else {
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) = bVar1 & 0xef;
    FUN_0001117a();
  }
  return 0;
}



undefined4 FUN_0001113e(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s4;
  
  FUN_0001113e();
  *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) =
       *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) & 0xf7;
  bVar1 = *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5);
  if ((bVar1 & 0x10) == 0) {
    FUN_000111ce();
  }
  else {
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) = bVar1 & 0xef;
    FUN_0001117a();
  }
  return 0;
}



undefined4 FUN_0001117a(void)

{
  FUN_0001117a();
  return 0;
}



undefined4 FUN_0001118e(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s3;
  int unaff_s4;
  
  FUN_0001118e();
  *(undefined *)(unaff_s3 + 0xa3) = 0;
  *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) =
       *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) & 0xd3;
  FUN_000111be();
  bVar1 = *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5);
  if ((bVar1 & 0x10) == 0) {
    FUN_000111ce();
  }
  else {
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) = bVar1 & 0xef;
    FUN_0001117a();
  }
  return 0;
}



undefined4 FUN_000111be(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s4;
  
  FUN_000111be();
  bVar1 = *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5);
  if ((bVar1 & 0x10) == 0) {
    FUN_000111ce();
  }
  else {
    *(byte *)(*(int *)(unaff_s0 + unaff_s4) + 0xa5) = bVar1 & 0xef;
    FUN_0001117a();
  }
  return 0;
}



undefined4 FUN_000111ce(void)

{
  FUN_000111ce();
  return 0;
}



// DWARF DIE: 75cf

void llc_llcp_reject_ind_pdu_send(uint16_t conhdl,uint8_t rej_opcode,uint8_t reason)

{
  undefined2 in_register_0000202a;
  undefined3 in_register_0000202d;
  int iVar1;
  llcp_reject_ind_ext pdu;
  
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  if (((((*(ushort *)(iVar1 + 0x5c) & 1) == 0) || ((*(byte *)(iVar1 + 0x69) & 4) == 0)) &&
      (CONCAT31(in_register_0000202d,rej_opcode) < 0xe)) &&
     ((CONCAT31(in_register_0000202d,rej_opcode) - 3 & 0xfd) == 0)) {
    *(undefined *)(iVar1 + 0xa5) = 0;
  }
  FUN_00011218();
  return;
}



void FUN_00011218(void)

{
  FUN_00011218();
  return;
}



// DWARF DIE: 38d6

int llcp_length_rsp_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_length_rsp *param)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  undefined2 in_register_0000202a;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  
  uVar4 = _L0();
  iVar2 = *(int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  if ((*(byte *)(iVar2 + 0xa5) & 8) == 0) {
    _LVL359();
    if (((uVar4 & 1) != 0) && (*(char *)(iVar2 + 0xa3) == '\x04')) {
      *(undefined *)(iVar2 + 0xa3) = 0;
      FUN_000112c8();
      uVar3 = param->max_rx_octets;
      if ((0x1a < uVar3) &&
         (((uVar9 = param->max_tx_octets, 0x1a < uVar9 &&
           (uVar1 = param->max_rx_time, 0x147 < uVar1)) &&
          (uVar8 = param->max_tx_time, 0x147 < uVar8)))) {
        uVar7 = *(ushort *)(iVar2 + 0x44);
        if (uVar9 < *(ushort *)(iVar2 + 0x44)) {
          uVar7 = uVar9;
        }
        uVar9 = *(ushort *)(iVar2 + 0x4c);
        if (uVar8 < *(ushort *)(iVar2 + 0x4c)) {
          uVar9 = uVar8;
        }
        uVar8 = *(ushort *)(iVar2 + 0x42);
        if (uVar3 < *(ushort *)(iVar2 + 0x42)) {
          uVar8 = uVar3;
        }
        uVar3 = *(ushort *)(iVar2 + 0x4a);
        if (uVar1 < *(ushort *)(iVar2 + 0x4a)) {
          uVar3 = uVar1;
        }
        FUN_00011350();
        if (((*(ushort *)(iVar2 + 0x48) != uVar7) || (*(ushort *)(iVar2 + 0x50) != uVar9)) ||
           ((*(ushort *)(iVar2 + 0x46) != uVar8 || (*(ushort *)(iVar2 + 0x4e) != uVar3)))) {
          *(ushort *)(iVar2 + 0x48) = uVar7;
          *(ushort *)(iVar2 + 0x50) = uVar9;
          *(ushort *)(iVar2 + 0x46) = uVar8;
          *(ushort *)(iVar2 + 0x4e) = uVar3;
          FUN_00011396();
          *(byte *)(iVar2 + 0x53) = *(byte *)(iVar2 + 0x53) & 0xfd;
        }
        iVar5 = FUN_000113ae();
        if (iVar5 == 0) {
          return 0;
        }
        if ((*(byte *)(iVar2 + 0x53) & 2) != 0) {
          return 0;
        }
        puVar6 = (undefined *)FUN_000113d2();
        *puVar6 = 7;
        *(uint16_t *)(puVar6 + 2) = conhdl;
        *(undefined2 *)(puVar6 + 8) = *(undefined2 *)(iVar2 + 0x48);
        *(undefined2 *)(puVar6 + 10) = *(undefined2 *)(iVar2 + 0x50);
        *(undefined2 *)(puVar6 + 4) = *(undefined2 *)(iVar2 + 0x46);
        *(undefined2 *)(puVar6 + 6) = *(undefined2 *)(iVar2 + 0x4e);
        _L0();
        *(byte *)(iVar2 + 0x53) = *(byte *)(iVar2 + 0x53) | 2;
        return 0;
      }
    }
    FUN_00011300();
  }
  else {
    _LVL355();
  }
  return 0;
}



undefined4 _L0(void)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  int unaff_s1;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int unaff_s4;
  
  uVar4 = _L0();
  iVar2 = *(int *)(unaff_s4 * 4);
  if ((*(byte *)(iVar2 + 0xa5) & 8) == 0) {
    _LVL359();
    if (((uVar4 & 1) != 0) && (*(char *)(iVar2 + 0xa3) == '\x04')) {
      *(undefined *)(iVar2 + 0xa3) = 0;
      FUN_000112c8();
      uVar3 = *(ushort *)(unaff_s1 + 2);
      if ((0x1a < uVar3) &&
         (((uVar9 = *(ushort *)(unaff_s1 + 6), 0x1a < uVar9 &&
           (uVar1 = *(ushort *)(unaff_s1 + 4), 0x147 < uVar1)) &&
          (uVar8 = *(ushort *)(unaff_s1 + 8), 0x147 < uVar8)))) {
        uVar7 = *(ushort *)(iVar2 + 0x44);
        if (uVar9 < *(ushort *)(iVar2 + 0x44)) {
          uVar7 = uVar9;
        }
        uVar9 = *(ushort *)(iVar2 + 0x4c);
        if (uVar8 < *(ushort *)(iVar2 + 0x4c)) {
          uVar9 = uVar8;
        }
        uVar8 = *(ushort *)(iVar2 + 0x42);
        if (uVar3 < *(ushort *)(iVar2 + 0x42)) {
          uVar8 = uVar3;
        }
        uVar3 = *(ushort *)(iVar2 + 0x4a);
        if (uVar1 < *(ushort *)(iVar2 + 0x4a)) {
          uVar3 = uVar1;
        }
        FUN_00011350();
        if (((*(ushort *)(iVar2 + 0x48) != uVar7) || (*(ushort *)(iVar2 + 0x50) != uVar9)) ||
           ((*(ushort *)(iVar2 + 0x46) != uVar8 || (*(ushort *)(iVar2 + 0x4e) != uVar3)))) {
          *(ushort *)(iVar2 + 0x48) = uVar7;
          *(ushort *)(iVar2 + 0x50) = uVar9;
          *(ushort *)(iVar2 + 0x46) = uVar8;
          *(ushort *)(iVar2 + 0x4e) = uVar3;
          FUN_00011396();
          *(byte *)(iVar2 + 0x53) = *(byte *)(iVar2 + 0x53) & 0xfd;
        }
        iVar5 = FUN_000113ae();
        if (iVar5 == 0) {
          return 0;
        }
        if ((*(byte *)(iVar2 + 0x53) & 2) != 0) {
          return 0;
        }
        puVar6 = (undefined *)FUN_000113d2();
        *puVar6 = 7;
        *(short *)(puVar6 + 2) = (short)unaff_s4;
        *(undefined2 *)(puVar6 + 8) = *(undefined2 *)(iVar2 + 0x48);
        *(undefined2 *)(puVar6 + 10) = *(undefined2 *)(iVar2 + 0x50);
        *(undefined2 *)(puVar6 + 4) = *(undefined2 *)(iVar2 + 0x46);
        *(undefined2 *)(puVar6 + 6) = *(undefined2 *)(iVar2 + 0x4e);
        _L0();
        *(byte *)(iVar2 + 0x53) = *(byte *)(iVar2 + 0x53) | 2;
        return 0;
      }
    }
    FUN_00011300();
  }
  else {
    _LVL355();
  }
  return 0;
}



undefined4 _LVL355(void)

{
  _LVL355();
  return 0;
}



undefined4 _LVL359(void)

{
  ushort uVar1;
  int unaff_s0;
  ushort uVar2;
  int unaff_s1;
  int iVar3;
  undefined *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint unaff_s3;
  undefined2 unaff_s4;
  
  _LVL359();
  if (((unaff_s3 & 1) != 0) && (*(char *)(unaff_s0 + 0xa3) == '\x04')) {
    *(undefined *)(unaff_s0 + 0xa3) = 0;
    FUN_000112c8();
    uVar2 = *(ushort *)(unaff_s1 + 2);
    if ((0x1a < uVar2) &&
       (((uVar7 = *(ushort *)(unaff_s1 + 6), 0x1a < uVar7 &&
         (uVar1 = *(ushort *)(unaff_s1 + 4), 0x147 < uVar1)) &&
        (uVar6 = *(ushort *)(unaff_s1 + 8), 0x147 < uVar6)))) {
      uVar5 = *(ushort *)(unaff_s0 + 0x44);
      if (uVar7 < *(ushort *)(unaff_s0 + 0x44)) {
        uVar5 = uVar7;
      }
      uVar7 = *(ushort *)(unaff_s0 + 0x4c);
      if (uVar6 < *(ushort *)(unaff_s0 + 0x4c)) {
        uVar7 = uVar6;
      }
      uVar6 = *(ushort *)(unaff_s0 + 0x42);
      if (uVar2 < *(ushort *)(unaff_s0 + 0x42)) {
        uVar6 = uVar2;
      }
      uVar2 = *(ushort *)(unaff_s0 + 0x4a);
      if (uVar1 < *(ushort *)(unaff_s0 + 0x4a)) {
        uVar2 = uVar1;
      }
      FUN_00011350();
      if (((*(ushort *)(unaff_s0 + 0x48) != uVar5) || (*(ushort *)(unaff_s0 + 0x50) != uVar7)) ||
         ((*(ushort *)(unaff_s0 + 0x46) != uVar6 || (*(ushort *)(unaff_s0 + 0x4e) != uVar2)))) {
        *(ushort *)(unaff_s0 + 0x48) = uVar5;
        *(ushort *)(unaff_s0 + 0x50) = uVar7;
        *(ushort *)(unaff_s0 + 0x46) = uVar6;
        *(ushort *)(unaff_s0 + 0x4e) = uVar2;
        FUN_00011396();
        *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfd;
      }
      iVar3 = FUN_000113ae();
      if (iVar3 == 0) {
        return 0;
      }
      if ((*(byte *)(unaff_s0 + 0x53) & 2) != 0) {
        return 0;
      }
      puVar4 = (undefined *)FUN_000113d2();
      *puVar4 = 7;
      *(undefined2 *)(puVar4 + 2) = unaff_s4;
      *(undefined2 *)(puVar4 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
      *(undefined2 *)(puVar4 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
      *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
      *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
      _L0();
      *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
      return 0;
    }
  }
  FUN_00011300();
  return 0;
}



undefined4 FUN_000112c8(void)

{
  ushort uVar1;
  int unaff_s0;
  ushort uVar2;
  int unaff_s1;
  int iVar3;
  undefined *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 unaff_s4;
  
  FUN_000112c8();
  uVar2 = *(ushort *)(unaff_s1 + 2);
  if ((((uVar2 < 0x1b) || (uVar7 = *(ushort *)(unaff_s1 + 6), uVar7 < 0x1b)) ||
      (uVar1 = *(ushort *)(unaff_s1 + 4), uVar1 < 0x148)) ||
     (uVar6 = *(ushort *)(unaff_s1 + 8), uVar6 < 0x148)) {
    FUN_00011300();
  }
  else {
    uVar5 = *(ushort *)(unaff_s0 + 0x44);
    if (uVar7 < *(ushort *)(unaff_s0 + 0x44)) {
      uVar5 = uVar7;
    }
    uVar7 = *(ushort *)(unaff_s0 + 0x4c);
    if (uVar6 < *(ushort *)(unaff_s0 + 0x4c)) {
      uVar7 = uVar6;
    }
    uVar6 = *(ushort *)(unaff_s0 + 0x42);
    if (uVar2 < *(ushort *)(unaff_s0 + 0x42)) {
      uVar6 = uVar2;
    }
    uVar2 = *(ushort *)(unaff_s0 + 0x4a);
    if (uVar1 < *(ushort *)(unaff_s0 + 0x4a)) {
      uVar2 = uVar1;
    }
    FUN_00011350();
    if (((*(ushort *)(unaff_s0 + 0x48) != uVar5) || (*(ushort *)(unaff_s0 + 0x50) != uVar7)) ||
       ((*(ushort *)(unaff_s0 + 0x46) != uVar6 || (*(ushort *)(unaff_s0 + 0x4e) != uVar2)))) {
      *(ushort *)(unaff_s0 + 0x48) = uVar5;
      *(ushort *)(unaff_s0 + 0x50) = uVar7;
      *(ushort *)(unaff_s0 + 0x46) = uVar6;
      *(ushort *)(unaff_s0 + 0x4e) = uVar2;
      FUN_00011396();
      *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfd;
    }
    iVar3 = FUN_000113ae();
    if ((iVar3 != 0) && ((*(byte *)(unaff_s0 + 0x53) & 2) == 0)) {
      puVar4 = (undefined *)FUN_000113d2();
      *puVar4 = 7;
      *(undefined2 *)(puVar4 + 2) = unaff_s4;
      *(undefined2 *)(puVar4 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
      *(undefined2 *)(puVar4 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
      *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
      *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
      _L0();
      *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
    }
  }
  return 0;
}



undefined4 FUN_00011300(void)

{
  FUN_00011300();
  return 0;
}



undefined4 FUN_00011350(void)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined *puVar2;
  uint unaff_s2;
  uint unaff_s3;
  undefined2 unaff_s4;
  uint unaff_s5;
  
  FUN_00011350();
  if ((((*(ushort *)(unaff_s0 + 0x48) != unaff_s5) || (*(ushort *)(unaff_s0 + 0x50) != unaff_s3)) ||
      (*(ushort *)(unaff_s0 + 0x46) != unaff_s2)) || (*(ushort *)(unaff_s0 + 0x4e) != unaff_s1)) {
    *(short *)(unaff_s0 + 0x48) = (short)unaff_s5;
    *(short *)(unaff_s0 + 0x50) = (short)unaff_s3;
    *(short *)(unaff_s0 + 0x46) = (short)unaff_s2;
    *(short *)(unaff_s0 + 0x4e) = (short)unaff_s1;
    FUN_00011396();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfd;
  }
  iVar1 = FUN_000113ae();
  if ((iVar1 != 0) && ((*(byte *)(unaff_s0 + 0x53) & 2) == 0)) {
    puVar2 = (undefined *)FUN_000113d2();
    *puVar2 = 7;
    *(undefined2 *)(puVar2 + 2) = unaff_s4;
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
    *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
    _L0();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  }
  return 0;
}



undefined4 FUN_00011396(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  undefined2 unaff_s4;
  
  FUN_00011396();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfd;
  iVar1 = FUN_000113ae();
  if ((iVar1 != 0) && ((*(byte *)(unaff_s0 + 0x53) & 2) == 0)) {
    puVar2 = (undefined *)FUN_000113d2();
    *puVar2 = 7;
    *(undefined2 *)(puVar2 + 2) = unaff_s4;
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
    *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
    _L0();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  }
  return 0;
}



undefined4 FUN_000113ae(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  undefined2 unaff_s4;
  
  iVar1 = FUN_000113ae();
  if ((iVar1 != 0) && ((*(byte *)(unaff_s0 + 0x53) & 2) == 0)) {
    puVar2 = (undefined *)FUN_000113d2();
    *puVar2 = 7;
    *(undefined2 *)(puVar2 + 2) = unaff_s4;
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
    *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
    _L0();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  }
  return 0;
}



undefined4 FUN_000113d2(void)

{
  int unaff_s0;
  undefined *puVar1;
  undefined2 unaff_s4;
  
  puVar1 = (undefined *)FUN_000113d2();
  *puVar1 = 7;
  *(undefined2 *)(puVar1 + 2) = unaff_s4;
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
  *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
  _L0();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  return 0;
}



// DWARF DIE: 4f39

int llcp_con_param_rsp_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_con_param_rsp *param)

{
  undefined4 *puVar1;
  undefined2 in_register_0000202a;
  undefined *puVar2;
  int iVar3;
  ushort uVar4;
  int *piVar5;
  
  _L0();
  piVar5 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  iVar3 = *piVar5;
  if ((*(byte *)(iVar3 + 0xa5) & 8) == 0) {
    if (*(char *)(iVar3 + 0xa3) == '\a') {
      _LVL393();
      iVar3 = FUN_000114a2();
      if (iVar3 == 3) {
        puVar1 = (undefined4 *)*piVar5;
        puVar2 = (undefined *)*puVar1;
        if ((*(ushort *)(puVar2 + 4) < param->interval_min) ||
           (param->interval_max < *(ushort *)(puVar2 + 2))) {
          _L0();
          if ((*(ushort *)(puVar1 + 0x17) & 0x40) != 0) {
            *(ushort *)(puVar1 + 0x17) = *(ushort *)(puVar1 + 0x17) & 0xffbf;
            iVar3 = FUN_00011558();
            if (iVar3 != 0) {
              FUN_0001156c();
            }
          }
          FUN_0001157a();
          *(undefined *)((int)puVar1 + 0xa3) = 0;
          FUN_0001158a();
        }
        else {
          *puVar2 = 4;
          *(uint16_t *)(puVar2 + 2) = param->interval_min;
          *(uint16_t *)(puVar2 + 4) = param->interval_max;
          uVar4 = param->latency;
          if (param->latency < *(ushort *)(puVar2 + 6)) {
            uVar4 = *(ushort *)(puVar2 + 6);
          }
          *(ushort *)(puVar2 + 6) = uVar4;
          uVar4 = param->timeout;
          if (param->timeout < *(ushort *)(puVar2 + 8)) {
            uVar4 = *(ushort *)(puVar2 + 8);
          }
          *(ushort *)(puVar2 + 8) = uVar4;
          *(ushort *)(puVar2 + 10) = *(ushort *)(puVar1[4] + 0x12) / 0x271;
          *(ushort *)(puVar2 + 0xc) = *(ushort *)(puVar1[4] + 0x12) / 0x271;
          _L0();
        }
      }
    }
    else {
      _LVL390();
    }
  }
  else {
    _LVL386();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int *piVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  ushort uVar5;
  int unaff_s2;
  
  _L0();
  piVar1 = (int *)(unaff_s1 + unaff_s0 * 4);
  iVar4 = *piVar1;
  if ((*(byte *)(iVar4 + 0xa5) & 8) == 0) {
    if (*(char *)(iVar4 + 0xa3) == '\a') {
      _LVL393();
      iVar4 = FUN_000114a2();
      if (iVar4 == 3) {
        puVar2 = (undefined4 *)*piVar1;
        puVar3 = (undefined *)*puVar2;
        if ((*(ushort *)(puVar3 + 4) < *(ushort *)(unaff_s2 + 2)) ||
           (*(ushort *)(unaff_s2 + 4) < *(ushort *)(puVar3 + 2))) {
          _L0();
          if ((*(ushort *)(puVar2 + 0x17) & 0x40) != 0) {
            *(ushort *)(puVar2 + 0x17) = *(ushort *)(puVar2 + 0x17) & 0xffbf;
            iVar4 = FUN_00011558();
            if (iVar4 != 0) {
              FUN_0001156c();
            }
          }
          FUN_0001157a();
          *(undefined *)((int)puVar2 + 0xa3) = 0;
          FUN_0001158a();
        }
        else {
          *puVar3 = 4;
          *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(unaff_s2 + 2);
          *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(unaff_s2 + 4);
          uVar5 = *(ushort *)(unaff_s2 + 6);
          if (*(ushort *)(unaff_s2 + 6) < *(ushort *)(puVar3 + 6)) {
            uVar5 = *(ushort *)(puVar3 + 6);
          }
          *(ushort *)(puVar3 + 6) = uVar5;
          uVar5 = *(ushort *)(unaff_s2 + 8);
          if (*(ushort *)(unaff_s2 + 8) < *(ushort *)(puVar3 + 8)) {
            uVar5 = *(ushort *)(puVar3 + 8);
          }
          *(ushort *)(puVar3 + 8) = uVar5;
          *(ushort *)(puVar3 + 10) = *(ushort *)(puVar2[4] + 0x12) / 0x271;
          *(ushort *)(puVar3 + 0xc) = *(ushort *)(puVar2[4] + 0x12) / 0x271;
          _L0();
        }
      }
    }
    else {
      _LVL390();
    }
  }
  else {
    _LVL386();
  }
  return 0;
}



undefined4 _LVL386(void)

{
  _LVL386();
  return 0;
}



undefined4 _LVL390(void)

{
  _LVL390();
  return 0;
}



undefined4 _LVL393(void)

{
  undefined4 *unaff_s1;
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  ushort uVar4;
  int unaff_s2;
  
  _LVL393();
  iVar2 = FUN_000114a2();
  if (iVar2 == 3) {
    puVar1 = (undefined4 *)*unaff_s1;
    puVar3 = (undefined *)*puVar1;
    if ((*(ushort *)(puVar3 + 4) < *(ushort *)(unaff_s2 + 2)) ||
       (*(ushort *)(unaff_s2 + 4) < *(ushort *)(puVar3 + 2))) {
      _L0();
      if ((*(ushort *)(puVar1 + 0x17) & 0x40) != 0) {
        *(ushort *)(puVar1 + 0x17) = *(ushort *)(puVar1 + 0x17) & 0xffbf;
        iVar2 = FUN_00011558();
        if (iVar2 != 0) {
          FUN_0001156c();
        }
      }
      FUN_0001157a();
      *(undefined *)((int)puVar1 + 0xa3) = 0;
      FUN_0001158a();
    }
    else {
      *puVar3 = 4;
      *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(unaff_s2 + 2);
      *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(unaff_s2 + 4);
      uVar4 = *(ushort *)(unaff_s2 + 6);
      if (*(ushort *)(unaff_s2 + 6) < *(ushort *)(puVar3 + 6)) {
        uVar4 = *(ushort *)(puVar3 + 6);
      }
      *(ushort *)(puVar3 + 6) = uVar4;
      uVar4 = *(ushort *)(unaff_s2 + 8);
      if (*(ushort *)(unaff_s2 + 8) < *(ushort *)(puVar3 + 8)) {
        uVar4 = *(ushort *)(puVar3 + 8);
      }
      *(ushort *)(puVar3 + 8) = uVar4;
      *(ushort *)(puVar3 + 10) = *(ushort *)(puVar1[4] + 0x12) / 0x271;
      *(ushort *)(puVar3 + 0xc) = *(ushort *)(puVar1[4] + 0x12) / 0x271;
      _L0();
    }
  }
  return 0;
}



undefined4 FUN_000114a2(void)

{
  undefined4 *unaff_s1;
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  ushort uVar4;
  int unaff_s2;
  
  iVar2 = FUN_000114a2();
  if (iVar2 == 3) {
    puVar1 = (undefined4 *)*unaff_s1;
    puVar3 = (undefined *)*puVar1;
    if ((*(ushort *)(puVar3 + 4) < *(ushort *)(unaff_s2 + 2)) ||
       (*(ushort *)(unaff_s2 + 4) < *(ushort *)(puVar3 + 2))) {
      _L0();
      if ((*(ushort *)(puVar1 + 0x17) & 0x40) != 0) {
        *(ushort *)(puVar1 + 0x17) = *(ushort *)(puVar1 + 0x17) & 0xffbf;
        iVar2 = FUN_00011558();
        if (iVar2 != 0) {
          FUN_0001156c();
        }
      }
      FUN_0001157a();
      *(undefined *)((int)puVar1 + 0xa3) = 0;
      FUN_0001158a();
    }
    else {
      *puVar3 = 4;
      *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(unaff_s2 + 2);
      *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(unaff_s2 + 4);
      uVar4 = *(ushort *)(unaff_s2 + 6);
      if (*(ushort *)(unaff_s2 + 6) < *(ushort *)(puVar3 + 6)) {
        uVar4 = *(ushort *)(puVar3 + 6);
      }
      *(ushort *)(puVar3 + 6) = uVar4;
      uVar4 = *(ushort *)(unaff_s2 + 8);
      if (*(ushort *)(unaff_s2 + 8) < *(ushort *)(puVar3 + 8)) {
        uVar4 = *(ushort *)(puVar3 + 8);
      }
      *(ushort *)(puVar3 + 8) = uVar4;
      *(ushort *)(puVar3 + 10) = *(ushort *)(puVar1[4] + 0x12) / 0x271;
      *(ushort *)(puVar3 + 0xc) = *(ushort *)(puVar1[4] + 0x12) / 0x271;
      _L0();
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s1;
  int iVar1;
  
  _L0();
  if ((*(ushort *)(unaff_s1 + 0x5c) & 0x40) != 0) {
    *(ushort *)(unaff_s1 + 0x5c) = *(ushort *)(unaff_s1 + 0x5c) & 0xffbf;
    iVar1 = FUN_00011558();
    if (iVar1 != 0) {
      FUN_0001156c();
    }
  }
  FUN_0001157a();
  *(undefined *)(unaff_s1 + 0xa3) = 0;
  FUN_0001158a();
  return 0;
}



undefined4 FUN_00011558(void)

{
  int unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00011558();
  if (iVar1 != 0) {
    FUN_0001156c();
  }
  FUN_0001157a();
  *(undefined *)(unaff_s1 + 0xa3) = 0;
  FUN_0001158a();
  return 0;
}



undefined4 FUN_0001156c(void)

{
  int unaff_s1;
  
  FUN_0001156c();
  FUN_0001157a();
  *(undefined *)(unaff_s1 + 0xa3) = 0;
  FUN_0001158a();
  return 0;
}



undefined4 FUN_0001157a(void)

{
  int unaff_s1;
  
  FUN_0001157a();
  *(undefined *)(unaff_s1 + 0xa3) = 0;
  FUN_0001158a();
  return 0;
}



undefined4 FUN_0001158a(void)

{
  FUN_0001158a();
  return 0;
}



// DWARF DIE: 563a

int llcp_feats_rsp_handler(uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_feats_rsp *param)

{
  byte *pbVar1;
  int iVar2;
  undefined2 in_register_0000202a;
  uint uVar3;
  le_features *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  uVar3 = _L0();
  iVar2 = *(int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  if ((*(byte *)(iVar2 + 0xa5) & 8) == 0) {
    if (((uVar3 & 1) == 0) || (*(char *)(iVar2 + 0xa3) != '\x01')) {
      _LVL429();
    }
    else {
      _LVL421();
      plVar4 = &param->feats;
      pbVar5 = (byte *)(iVar2 + 0x69);
      do {
        pbVar1 = plVar4->feats;
        pbVar6 = pbVar5 + 1;
        plVar4 = (le_features *)(plVar4->feats + 1);
        *pbVar5 = *pbVar5 & *pbVar1;
        pbVar5 = pbVar6;
      } while (pbVar6 != (byte *)(iVar2 + 0x71));
      *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) | 1;
      _L0();
      *(undefined *)(iVar2 + 0xa3) = 0;
      FUN_0001165a();
    }
  }
  else {
    _LVL414();
  }
  return 0;
}



undefined4 _L0(void)

{
  byte bVar1;
  int iVar2;
  int unaff_s1;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int unaff_s4;
  
  uVar3 = _L0();
  iVar2 = *(int *)(unaff_s1 * 4);
  if ((*(byte *)(iVar2 + 0xa5) & 8) == 0) {
    if (((uVar3 & 1) == 0) || (*(char *)(iVar2 + 0xa3) != '\x01')) {
      _LVL429();
    }
    else {
      _LVL421();
      pbVar4 = (byte *)(unaff_s4 + 1);
      pbVar5 = (byte *)(iVar2 + 0x69);
      do {
        bVar1 = *pbVar4;
        pbVar6 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
        *pbVar5 = *pbVar5 & bVar1;
        pbVar5 = pbVar6;
      } while (pbVar6 != (byte *)(iVar2 + 0x71));
      *(ushort *)(iVar2 + 0x5c) = *(ushort *)(iVar2 + 0x5c) | 1;
      _L0();
      *(undefined *)(iVar2 + 0xa3) = 0;
      FUN_0001165a();
    }
  }
  else {
    _LVL414();
  }
  return 0;
}



undefined4 _LVL414(void)

{
  _LVL414();
  return 0;
}



undefined4 _LVL421(void)

{
  byte bVar1;
  int unaff_s0;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int unaff_s4;
  
  _LVL421();
  pbVar2 = (byte *)(unaff_s4 + 1);
  pbVar3 = (byte *)(unaff_s0 + 0x69);
  do {
    bVar1 = *pbVar2;
    pbVar4 = pbVar3 + 1;
    pbVar2 = pbVar2 + 1;
    *pbVar3 = *pbVar3 & bVar1;
    pbVar3 = pbVar4;
  } while (pbVar4 != (byte *)(unaff_s0 + 0x71));
  *(ushort *)(unaff_s0 + 0x5c) = *(ushort *)(unaff_s0 + 0x5c) | 1;
  _L0();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  FUN_0001165a();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  FUN_0001165a();
  return 0;
}



undefined4 FUN_0001165a(void)

{
  FUN_0001165a();
  return 0;
}



undefined4 _LVL429(void)

{
  _LVL429();
  return 0;
}



// DWARF DIE: 5a7c

int llcp_channel_map_ind_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_channel_map_ind *param)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined2 in_register_0000202a;
  uint uVar4;
  int extraout_a0;
  int extraout_a0_00;
  undefined3 in_register_00002031;
  int iVar5;
  int *piVar6;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  
  iVar5 = CONCAT31(in_register_00002031,int_ctx);
  uVar4 = _L0();
  piVar6 = (int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  iVar3 = *piVar6;
  iVar7 = (uint)(iVar5 != 0) << 1;
  if (iVar5 == 0) {
    cVar1 = *(char *)((int)&param[-1].instant + 1);
    if (cVar1 != '\0') {
      uVar4 = (uint)(byte)(cVar1 - 1);
      if (4 < uVar4) {
        return iVar7;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(uVar4 * 4);
                    // WARNING: Could not emulate address calculation at 0x00011700
                    // WARNING: Treating indirect jump as call
      iVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return iVar3;
    }
  }
  else {
    *(undefined *)((int)&param[-1].instant + 1) = 0;
  }
  if ((*(byte *)(*piVar6 + 0xa5) & 8) == 0) {
    FUN_00011706();
    if (extraout_a0 == 0) {
      FUN_00011736();
      if ((extraout_a0_00 == 4) && ((uVar4 & 2) == 0)) {
        if ((ushort)(param->instant - *(short *)(*(int *)(iVar3 + 0x10) + 0x60)) < 0x7fff) {
          FUN_0001177c();
          FUN_00011788();
          *(undefined *)((int)&param[-1].instant + 1) = 1;
          if (iVar5 != 0) {
            return iVar7;
          }
          uVar2 = *(ushort *)(iVar3 + 0x5c);
          if ((int)((uint)uVar2 << 0x14) < 0) {
            *(ushort *)(iVar3 + 0x5c) = uVar2 & 0xf7ff;
            return iVar7;
          }
          *(ushort *)(iVar3 + 0x5c) = uVar2 | 0x400;
          *(undefined *)(iVar3 + 0xa4) = 1;
          FUN_000117f6();
          return iVar7;
        }
        *(undefined *)((int)&param[-1].instant + 1) = 3;
        goto joined_r0x000117b8;
      }
      *(undefined *)((int)&param[-1].instant + 1) = 5;
    }
    else {
      *(undefined *)((int)&param[-1].instant + 1) = 2;
    }
    if (iVar5 == 0) {
      FUN_000117d4();
    }
  }
  else {
    *(undefined *)((int)&param[-1].instant + 1) = 4;
joined_r0x000117b8:
    if (iVar5 == 0) {
      FUN_000117c0();
    }
  }
  return iVar7;
}



int _L0(void)

{
  ushort uVar1;
  int iVar2;
  int unaff_s1;
  uint uVar3;
  int extraout_a0;
  int extraout_a0_00;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s3;
  int iVar4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  
  uVar3 = _L0();
  iVar2 = *(int *)(unaff_s6 * 4);
  iVar4 = unaff_s3 << 1;
  if (unaff_s1 == 0) {
    if (*(char *)(unaff_s5 + 1) != '\0') {
      uVar3 = (uint)(byte)(*(char *)(unaff_s5 + 1) - 1);
      if (4 < uVar3) {
        return iVar4;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(uVar3 * 4);
                    // WARNING: Could not emulate address calculation at 0x00011700
                    // WARNING: Treating indirect jump as call
      iVar2 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return iVar2;
    }
  }
  else {
    *(undefined *)(unaff_s5 + 1) = 0;
  }
  if ((*(byte *)(*(int *)(unaff_s6 * 4) + 0xa5) & 8) == 0) {
    FUN_00011706();
    if (extraout_a0 == 0) {
      FUN_00011736();
      if ((extraout_a0_00 == 4) && ((uVar3 & 2) == 0)) {
        if ((ushort)(*(short *)(unaff_s7 + 6) - *(short *)(*(int *)(iVar2 + 0x10) + 0x60)) < 0x7fff)
        {
          FUN_0001177c();
          FUN_00011788();
          *(undefined *)(unaff_s5 + 1) = 1;
          if (unaff_s1 != 0) {
            return iVar4;
          }
          uVar1 = *(ushort *)(iVar2 + 0x5c);
          if ((int)((uint)uVar1 << 0x14) < 0) {
            *(ushort *)(iVar2 + 0x5c) = uVar1 & 0xf7ff;
            return iVar4;
          }
          *(ushort *)(iVar2 + 0x5c) = uVar1 | 0x400;
          *(undefined *)(iVar2 + 0xa4) = 1;
          FUN_000117f6();
          return iVar4;
        }
        *(undefined *)(unaff_s5 + 1) = 3;
        goto joined_r0x000117b8;
      }
      *(undefined *)(unaff_s5 + 1) = 5;
    }
    else {
      *(undefined *)(unaff_s5 + 1) = 2;
    }
    if (unaff_s1 == 0) {
      FUN_000117d4();
    }
  }
  else {
    *(undefined *)(unaff_s5 + 1) = 4;
joined_r0x000117b8:
    if (unaff_s1 == 0) {
      FUN_000117c0();
    }
  }
  return iVar4;
}



void FUN_00011706(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  uint unaff_s2;
  int unaff_s5;
  int unaff_s7;
  
  FUN_00011706();
  if (extraout_a0 == 0) {
    FUN_00011736();
    if ((extraout_a0_00 == 4) && ((unaff_s2 & 2) == 0)) {
      if (0x7ffe < (ushort)(*(short *)(unaff_s7 + 6) - *(short *)(*(int *)(unaff_s0 + 0x10) + 0x60))
         ) {
        *(undefined *)(unaff_s5 + 1) = 3;
        if (unaff_s1 != 0) {
          return;
        }
        FUN_000117c0();
        return;
      }
      FUN_0001177c();
      FUN_00011788();
      *(undefined *)(unaff_s5 + 1) = 1;
      if (unaff_s1 != 0) {
        return;
      }
      uVar1 = *(ushort *)(unaff_s0 + 0x5c);
      if ((int)((uint)uVar1 << 0x14) < 0) {
        *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
        return;
      }
      *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
      *(undefined *)(unaff_s0 + 0xa4) = 1;
      FUN_000117f6();
      return;
    }
    *(undefined *)(unaff_s5 + 1) = 5;
  }
  else {
    *(undefined *)(unaff_s5 + 1) = 2;
  }
  if (unaff_s1 == 0) {
    FUN_000117d4();
  }
  return;
}



void FUN_00011736(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  uint unaff_s2;
  int unaff_s5;
  int unaff_s7;
  
  FUN_00011736();
  if ((extraout_a0 == 4) && ((unaff_s2 & 2) == 0)) {
    if ((ushort)(*(short *)(unaff_s7 + 6) - *(short *)(*(int *)(unaff_s0 + 0x10) + 0x60)) < 0x7fff)
    {
      FUN_0001177c();
      FUN_00011788();
      *(undefined *)(unaff_s5 + 1) = 1;
      if (unaff_s1 == 0) {
        uVar1 = *(ushort *)(unaff_s0 + 0x5c);
        if ((int)((uint)uVar1 << 0x14) < 0) {
          *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
        }
        else {
          *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
          *(undefined *)(unaff_s0 + 0xa4) = 1;
          FUN_000117f6();
        }
      }
    }
    else {
      *(undefined *)(unaff_s5 + 1) = 3;
      if (unaff_s1 == 0) {
        FUN_000117c0();
      }
    }
  }
  else {
    *(undefined *)(unaff_s5 + 1) = 5;
    if (unaff_s1 == 0) {
      FUN_000117d4();
    }
  }
  return;
}



void FUN_0001177c(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s5;
  
  FUN_0001177c();
  FUN_00011788();
  *(undefined *)(unaff_s5 + 1) = 1;
  if (unaff_s1 == 0) {
    uVar1 = *(ushort *)(unaff_s0 + 0x5c);
    if ((int)((uint)uVar1 << 0x14) < 0) {
      *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
    }
    else {
      *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
      *(undefined *)(unaff_s0 + 0xa4) = 1;
      FUN_000117f6();
    }
  }
  return;
}



void FUN_00011788(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s5;
  
  FUN_00011788();
  *(undefined *)(unaff_s5 + 1) = 1;
  if (unaff_s1 == 0) {
    uVar1 = *(ushort *)(unaff_s0 + 0x5c);
    if ((int)((uint)uVar1 << 0x14) < 0) {
      *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
    }
    else {
      *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
      *(undefined *)(unaff_s0 + 0xa4) = 1;
      FUN_000117f6();
    }
  }
  return;
}



void FUN_000117c0(void)

{
  FUN_000117c0();
  return;
}



void FUN_000117d4(void)

{
  FUN_000117d4();
  return;
}



void FUN_000117f6(void)

{
  FUN_000117f6();
  return;
}



// DWARF DIE: 5c50

int llcp_con_upd_ind_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_con_upd_ind *param)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined2 in_register_0000202a;
  uint uVar4;
  int extraout_a0;
  int extraout_a0_00;
  undefined3 in_register_00002031;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  int *piVar7;
  
  iVar5 = CONCAT31(in_register_00002031,int_ctx);
  piVar7 = (int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  iVar3 = *piVar7;
  uVar4 = _L0();
  iVar6 = (uint)(iVar5 != 0) << 1;
  if (iVar5 == 0) {
    cVar1 = *(char *)((int)&param[-1].instant + 1);
    if (cVar1 != '\0') {
      uVar4 = (uint)(byte)(cVar1 - 1);
      if (4 < uVar4) {
        return iVar6;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(uVar4 * 4);
                    // WARNING: Could not emulate address calculation at 0x000118a2
                    // WARNING: Treating indirect jump as call
      iVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return iVar3;
    }
  }
  else {
    *(undefined *)((int)&param[-1].instant + 1) = 0;
  }
  if ((*(byte *)(*piVar7 + 0xa5) & 8) == 0) {
    FUN_000118a8();
    if (extraout_a0 == 0) {
      FUN_000118d2();
      if (extraout_a0_00 == 4) {
        if ((ushort)(param->instant - *(short *)(*(int *)(iVar3 + 0x10) + 0x60)) < 0x7fff) {
          uVar2 = *(ushort *)(*(int *)(iVar3 + 0x10) + 0x78) >> 1;
          if (uVar2 <= param->win_size) {
            param->win_size = (char)uVar2 + -1;
          }
          *(uint16_t *)(iVar3 + 0x56) = param->timeout;
          _L0();
          *(undefined *)((int)&param[-1].instant + 1) = 1;
          if (iVar5 != 0) {
            return iVar6;
          }
          if (((uVar4 & 1) != 0) && ((byte)(*(char *)(iVar3 + 0xa3) - 7U) < 2)) {
            FUN_00011954();
            *(undefined *)(iVar3 + 0xa3) = 0;
            _L0();
            FUN_00011974();
          }
          if (*(char *)(iVar3 + 0xa4) == '\x03') {
            FUN_0001198c();
          }
          uVar2 = *(ushort *)(iVar3 + 0x5c);
          if ((int)((uint)uVar2 << 0x14) < 0) {
            *(ushort *)(iVar3 + 0x5c) = uVar2 & 0xf7ff;
            return iVar6;
          }
          *(ushort *)(iVar3 + 0x5c) = uVar2 | 0x400;
          *(undefined *)(iVar3 + 0xa4) = 4;
          FUN_000119fc();
          return iVar6;
        }
        *(undefined *)((int)&param[-1].instant + 1) = 3;
        goto joined_r0x000119b4;
      }
      *(undefined *)((int)&param[-1].instant + 1) = 5;
    }
    else {
      *(undefined *)((int)&param[-1].instant + 1) = 2;
    }
    if (iVar5 == 0) {
      FUN_000118c6();
    }
  }
  else {
    *(undefined *)((int)&param[-1].instant + 1) = 4;
joined_r0x000119b4:
    if (iVar5 == 0) {
      FUN_000119da();
    }
  }
  return iVar6;
}



int _L0(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int extraout_a0;
  int extraout_a0_00;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s3;
  int iVar3;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  uVar2 = _L0();
  iVar3 = unaff_s3 << 1;
  if (unaff_s6 == 0) {
    if (*(char *)(unaff_s7 + 1) != '\0') {
      uVar2 = (uint)(byte)(*(char *)(unaff_s7 + 1) - 1);
      if (4 < uVar2) {
        return iVar3;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4);
                    // WARNING: Could not emulate address calculation at 0x000118a2
                    // WARNING: Treating indirect jump as call
      iVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return iVar3;
    }
  }
  else {
    *(undefined *)(unaff_s7 + 1) = 0;
  }
  if ((*(byte *)(*(int *)(unaff_s8 + unaff_s9) + 0xa5) & 8) == 0) {
    FUN_000118a8();
    if (extraout_a0 == 0) {
      FUN_000118d2();
      if (extraout_a0_00 == 4) {
        if ((ushort)(*(short *)(unaff_s1 + 10) - *(short *)(*(int *)(unaff_s0 + 0x10) + 0x60)) <
            0x7fff) {
          uVar1 = *(ushort *)(*(int *)(unaff_s0 + 0x10) + 0x78) >> 1;
          if (uVar1 <= *(byte *)(unaff_s1 + 1)) {
            *(char *)(unaff_s1 + 1) = (char)uVar1 + -1;
          }
          *(undefined2 *)(unaff_s0 + 0x56) = *(undefined2 *)(unaff_s1 + 8);
          _L0();
          *(undefined *)(unaff_s7 + 1) = 1;
          if (unaff_s6 != 0) {
            return iVar3;
          }
          if (((uVar2 & 1) != 0) && ((byte)(*(char *)(unaff_s0 + 0xa3) - 7U) < 2)) {
            FUN_00011954();
            *(undefined *)(unaff_s0 + 0xa3) = 0;
            _L0();
            FUN_00011974();
          }
          if (*(char *)(unaff_s0 + 0xa4) == '\x03') {
            FUN_0001198c();
          }
          uVar1 = *(ushort *)(unaff_s0 + 0x5c);
          if ((int)((uint)uVar1 << 0x14) < 0) {
            *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
            return iVar3;
          }
          *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
          *(undefined *)(unaff_s0 + 0xa4) = 4;
          FUN_000119fc();
          return iVar3;
        }
        *(undefined *)(unaff_s7 + 1) = 3;
        goto joined_r0x000119b4;
      }
      *(undefined *)(unaff_s7 + 1) = 5;
    }
    else {
      *(undefined *)(unaff_s7 + 1) = 2;
    }
    if (unaff_s6 == 0) {
      FUN_000118c6();
    }
  }
  else {
    *(undefined *)(unaff_s7 + 1) = 4;
joined_r0x000119b4:
    if (unaff_s6 == 0) {
      FUN_000119da();
    }
  }
  return iVar3;
}



void FUN_000118a8(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  uint unaff_s2;
  int unaff_s6;
  int unaff_s7;
  
  FUN_000118a8();
  if (extraout_a0 == 0) {
    FUN_000118d2();
    if (extraout_a0_00 == 4) {
      if (0x7ffe < (ushort)(*(short *)(unaff_s1 + 10) - *(short *)(*(int *)(unaff_s0 + 0x10) + 0x60)
                           )) {
        *(undefined *)(unaff_s7 + 1) = 3;
        if (unaff_s6 != 0) {
          return;
        }
        FUN_000119da();
        return;
      }
      uVar1 = *(ushort *)(*(int *)(unaff_s0 + 0x10) + 0x78) >> 1;
      if (uVar1 <= *(byte *)(unaff_s1 + 1)) {
        *(char *)(unaff_s1 + 1) = (char)uVar1 + -1;
      }
      *(undefined2 *)(unaff_s0 + 0x56) = *(undefined2 *)(unaff_s1 + 8);
      _L0();
      *(undefined *)(unaff_s7 + 1) = 1;
      if (unaff_s6 != 0) {
        return;
      }
      if (((unaff_s2 & 1) != 0) && ((byte)(*(char *)(unaff_s0 + 0xa3) - 7U) < 2)) {
        FUN_00011954();
        *(undefined *)(unaff_s0 + 0xa3) = 0;
        _L0();
        FUN_00011974();
      }
      if (*(char *)(unaff_s0 + 0xa4) == '\x03') {
        FUN_0001198c();
      }
      uVar1 = *(ushort *)(unaff_s0 + 0x5c);
      if ((int)((uint)uVar1 << 0x14) < 0) {
        *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
        return;
      }
      *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
      *(undefined *)(unaff_s0 + 0xa4) = 4;
      FUN_000119fc();
      return;
    }
    *(undefined *)(unaff_s7 + 1) = 5;
  }
  else {
    *(undefined *)(unaff_s7 + 1) = 2;
  }
  if (unaff_s6 == 0) {
    FUN_000118c6();
  }
  return;
}



void FUN_000118c6(void)

{
  FUN_000118c6();
  return;
}



void FUN_000118d2(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  uint unaff_s2;
  int unaff_s6;
  int unaff_s7;
  
  FUN_000118d2();
  if (extraout_a0 == 4) {
    if ((ushort)(*(short *)(unaff_s1 + 10) - *(short *)(*(int *)(unaff_s0 + 0x10) + 0x60)) < 0x7fff)
    {
      uVar1 = *(ushort *)(*(int *)(unaff_s0 + 0x10) + 0x78) >> 1;
      if (uVar1 <= *(byte *)(unaff_s1 + 1)) {
        *(char *)(unaff_s1 + 1) = (char)uVar1 + -1;
      }
      *(undefined2 *)(unaff_s0 + 0x56) = *(undefined2 *)(unaff_s1 + 8);
      _L0();
      *(undefined *)(unaff_s7 + 1) = 1;
      if (unaff_s6 == 0) {
        if (((unaff_s2 & 1) != 0) && ((byte)(*(char *)(unaff_s0 + 0xa3) - 7U) < 2)) {
          FUN_00011954();
          *(undefined *)(unaff_s0 + 0xa3) = 0;
          _L0();
          FUN_00011974();
        }
        if (*(char *)(unaff_s0 + 0xa4) == '\x03') {
          FUN_0001198c();
        }
        uVar1 = *(ushort *)(unaff_s0 + 0x5c);
        if ((int)((uint)uVar1 << 0x14) < 0) {
          *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
        }
        else {
          *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
          *(undefined *)(unaff_s0 + 0xa4) = 4;
          FUN_000119fc();
        }
      }
    }
    else {
      *(undefined *)(unaff_s7 + 1) = 3;
      if (unaff_s6 == 0) {
        FUN_000119da();
      }
    }
  }
  else {
    *(undefined *)(unaff_s7 + 1) = 5;
    if (unaff_s6 == 0) {
      FUN_000118c6();
    }
  }
  return;
}



void _L0(void)

{
  ushort uVar1;
  int unaff_s0;
  uint unaff_s2;
  int unaff_s6;
  int unaff_s7;
  
  _L0();
  *(undefined *)(unaff_s7 + 1) = 1;
  if (unaff_s6 == 0) {
    if (((unaff_s2 & 1) != 0) && ((byte)(*(char *)(unaff_s0 + 0xa3) - 7U) < 2)) {
      FUN_00011954();
      *(undefined *)(unaff_s0 + 0xa3) = 0;
      _L0();
      FUN_00011974();
    }
    if (*(char *)(unaff_s0 + 0xa4) == '\x03') {
      FUN_0001198c();
    }
    uVar1 = *(ushort *)(unaff_s0 + 0x5c);
    if ((int)((uint)uVar1 << 0x14) < 0) {
      *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
    }
    else {
      *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
      *(undefined *)(unaff_s0 + 0xa4) = 4;
      FUN_000119fc();
    }
  }
  return;
}



void FUN_00011954(void)

{
  ushort uVar1;
  int unaff_s0;
  
  FUN_00011954();
  *(undefined *)(unaff_s0 + 0xa3) = 0;
  _L0();
  FUN_00011974();
  if (*(char *)(unaff_s0 + 0xa4) == '\x03') {
    FUN_0001198c();
  }
  uVar1 = *(ushort *)(unaff_s0 + 0x5c);
  if ((int)((uint)uVar1 << 0x14) < 0) {
    *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
  }
  else {
    *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
    *(undefined *)(unaff_s0 + 0xa4) = 4;
    FUN_000119fc();
  }
  return;
}



void _L0(void)

{
  ushort uVar1;
  int unaff_s0;
  
  _L0();
  FUN_00011974();
  if (*(char *)(unaff_s0 + 0xa4) == '\x03') {
    FUN_0001198c();
  }
  uVar1 = *(ushort *)(unaff_s0 + 0x5c);
  if ((int)((uint)uVar1 << 0x14) < 0) {
    *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
  }
  else {
    *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
    *(undefined *)(unaff_s0 + 0xa4) = 4;
    FUN_000119fc();
  }
  return;
}



void FUN_00011974(void)

{
  ushort uVar1;
  int unaff_s0;
  
  FUN_00011974();
  if (*(char *)(unaff_s0 + 0xa4) == '\x03') {
    FUN_0001198c();
  }
  uVar1 = *(ushort *)(unaff_s0 + 0x5c);
  if ((int)((uint)uVar1 << 0x14) < 0) {
    *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
  }
  else {
    *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
    *(undefined *)(unaff_s0 + 0xa4) = 4;
    FUN_000119fc();
  }
  return;
}



void FUN_0001198c(void)

{
  ushort uVar1;
  int unaff_s0;
  
  FUN_0001198c();
  uVar1 = *(ushort *)(unaff_s0 + 0x5c);
  if ((int)((uint)uVar1 << 0x14) < 0) {
    *(ushort *)(unaff_s0 + 0x5c) = uVar1 & 0xf7ff;
  }
  else {
    *(ushort *)(unaff_s0 + 0x5c) = uVar1 | 0x400;
    *(undefined *)(unaff_s0 + 0xa4) = 4;
    FUN_000119fc();
  }
  return;
}



void FUN_000119da(void)

{
  FUN_000119da();
  return;
}



void FUN_000119fc(void)

{
  FUN_000119fc();
  return;
}



// DWARF DIE: 6b34

void llc_llcp_con_update_pdu_send(uint16_t conhdl,llcp_con_upd_ind *param)

{
  llcp_con_upd_ind pdu;
  
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 6ace

void llc_llcp_con_param_req_pdu_send(uint16_t conhdl,llc_con_upd_req_ind *param)

{
  llcp_con_param_req pdu;
  
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 6a68

void llc_llcp_con_param_rsp_pdu_send(uint16_t conhdl,llc_con_upd_req_ind *param)

{
  llcp_con_param_rsp pdu;
  
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 51c8

int llcp_con_param_req_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_con_param_req *param)

{
  char cVar1;
  undefined2 in_register_0000202a;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  llc_con_upd_req_ind data;
  
  uVar2 = _L0();
  iVar9 = *(int *)(CONCAT22(in_register_0000202a,conhdl) << 2);
  if ((*(byte *)(iVar9 + 0xa5) & 8) != 0) {
    _LVL531();
    return 0;
  }
  if (((uVar2 & 2) == 0) &&
     (((iVar3 = _LVL540(), iVar3 != 3 || ((uVar2 & 1) == 0)) ||
      ((cVar1 = *(char *)(iVar9 + 0xa3), cVar1 != '\a' && ((cVar1 != '\t' && (cVar1 != '\x06')))))))
     ) {
    uVar2 = (uint)param->interval_min;
    uVar7 = (uint)param->interval_max;
    if ((uVar2 <= uVar7) &&
       ((((uVar5 = (uint)param->latency, uVar5 < 500 && (uVar7 < 0xc81)) && (5 < uVar2)) &&
        ((uVar6 = (uint)param->timeout, (uVar6 - 10 & 0xffff) < 0xc77 &&
         ((uVar5 + 1) * uVar7 < uVar6 << 2)))))) {
      uVar8 = (uint)(*(ushort *)(*(int *)(iVar9 + 0x10) + 0x78) >> 1);
      if (((uVar8 < uVar2) ||
          ((uVar7 < uVar8 || (uVar5 != *(ushort *)(*(int *)(iVar9 + 0x10) + 0x5e) - 1)))) ||
         (*(ushort *)(iVar9 + 0x54) != uVar6)) {
        iVar9 = FUN_00011c8c();
        if (iVar9 != 0) {
          puVar4 = (undefined *)FUN_00011ca2();
          *puVar4 = 3;
          goto _L0;
        }
      }
      else {
        iVar3 = FUN_00011d22();
        if (iVar3 == 3) {
          puVar4 = (undefined *)FUN_00011d3c();
          *puVar4 = 2;
          *(uint16_t *)(puVar4 + 2) = param->interval_min;
          *(uint16_t *)(puVar4 + 4) = param->interval_max;
          *(undefined2 *)(puVar4 + 8) = *(undefined2 *)(iVar9 + 0x54);
          *(ushort *)(puVar4 + 10) = *(ushort *)(*(int *)(iVar9 + 0x10) + 0x12) / 0x271;
          *(ushort *)(puVar4 + 0xc) = *(ushort *)(*(int *)(iVar9 + 0x10) + 0x12) / 0x271;
_L0:
          *(uint16_t *)(puVar4 + 0xe) = param->interval_min;
          *(uint16_t *)(puVar4 + 0x10) = param->interval_max;
          *(uint16_t *)(puVar4 + 6) = param->latency;
          *(uint16_t *)(puVar4 + 8) = param->timeout;
          puVar4[0x12] = param->pref_period;
          *(uint16_t *)(puVar4 + 0x14) = param->ref_con_event_count;
          *(uint16_t *)(puVar4 + 0x16) = param->offset0;
          *(uint16_t *)(puVar4 + 0x18) = param->offset1;
          *(uint16_t *)(puVar4 + 0x1a) = param->offset2;
          *(uint16_t *)(puVar4 + 0x1c) = param->offset3;
          *(uint16_t *)(puVar4 + 0x1e) = param->offset4;
          *(uint16_t *)(puVar4 + 0x20) = param->offset5;
          _L0();
          return 0;
        }
        iVar3 = FUN_00011d8c();
        if (iVar3 != 4) {
          return 0;
        }
        iVar3 = FUN_00011e02();
        if (iVar3 == 0) {
          *(undefined *)(iVar9 + 0xa4) = 3;
          FUN_00011e1a();
          FUN_00011e26();
          FUN_00011e3a();
          return 0;
        }
      }
    }
  }
  FUN_00011bd8();
  return 0;
}



undefined4 _L0(void)

{
  char cVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = _L0();
  iVar9 = *(int *)(unaff_s1 * 4);
  if ((*(byte *)(iVar9 + 0xa5) & 8) != 0) {
    _LVL531();
    return 0;
  }
  if (((uVar2 & 2) == 0) &&
     (((iVar3 = _LVL540(), iVar3 != 3 || ((uVar2 & 1) == 0)) ||
      ((cVar1 = *(char *)(iVar9 + 0xa3), cVar1 != '\a' && ((cVar1 != '\t' && (cVar1 != '\x06')))))))
     ) {
    uVar2 = (uint)*(ushort *)(unaff_s0 + 2);
    uVar7 = (uint)*(ushort *)(unaff_s0 + 4);
    if ((uVar2 <= uVar7) &&
       ((((uVar5 = (uint)*(ushort *)(unaff_s0 + 6), uVar5 < 500 && (uVar7 < 0xc81)) && (5 < uVar2))
        && ((uVar6 = (uint)*(ushort *)(unaff_s0 + 8), (uVar6 - 10 & 0xffff) < 0xc77 &&
            ((uVar5 + 1) * uVar7 < uVar6 << 2)))))) {
      uVar8 = (uint)(*(ushort *)(*(int *)(iVar9 + 0x10) + 0x78) >> 1);
      if (((uVar8 < uVar2) ||
          ((uVar7 < uVar8 || (uVar5 != *(ushort *)(*(int *)(iVar9 + 0x10) + 0x5e) - 1)))) ||
         (*(ushort *)(iVar9 + 0x54) != uVar6)) {
        iVar9 = FUN_00011c8c();
        if (iVar9 != 0) {
          puVar4 = (undefined *)FUN_00011ca2();
          *puVar4 = 3;
          goto _L0;
        }
      }
      else {
        iVar3 = FUN_00011d22();
        if (iVar3 == 3) {
          puVar4 = (undefined *)FUN_00011d3c();
          *puVar4 = 2;
          *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(unaff_s0 + 2);
          *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(unaff_s0 + 4);
          *(undefined2 *)(puVar4 + 8) = *(undefined2 *)(iVar9 + 0x54);
          *(ushort *)(puVar4 + 10) = *(ushort *)(*(int *)(iVar9 + 0x10) + 0x12) / 0x271;
          *(ushort *)(puVar4 + 0xc) = *(ushort *)(*(int *)(iVar9 + 0x10) + 0x12) / 0x271;
_L0:
          *(undefined2 *)(puVar4 + 0xe) = *(undefined2 *)(unaff_s0 + 2);
          *(undefined2 *)(puVar4 + 0x10) = *(undefined2 *)(unaff_s0 + 4);
          *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(unaff_s0 + 6);
          *(undefined2 *)(puVar4 + 8) = *(undefined2 *)(unaff_s0 + 8);
          puVar4[0x12] = *(undefined *)(unaff_s0 + 10);
          *(undefined2 *)(puVar4 + 0x14) = *(undefined2 *)(unaff_s0 + 0xc);
          *(undefined2 *)(puVar4 + 0x16) = *(undefined2 *)(unaff_s0 + 0xe);
          *(undefined2 *)(puVar4 + 0x18) = *(undefined2 *)(unaff_s0 + 0x10);
          *(undefined2 *)(puVar4 + 0x1a) = *(undefined2 *)(unaff_s0 + 0x12);
          *(undefined2 *)(puVar4 + 0x1c) = *(undefined2 *)(unaff_s0 + 0x14);
          *(undefined2 *)(puVar4 + 0x1e) = *(undefined2 *)(unaff_s0 + 0x16);
          *(undefined2 *)(puVar4 + 0x20) = *(undefined2 *)(unaff_s0 + 0x18);
          _L0();
          return 0;
        }
        iVar3 = FUN_00011d8c();
        if (iVar3 != 4) {
          return 0;
        }
        iVar3 = FUN_00011e02();
        if (iVar3 == 0) {
          *(undefined *)(iVar9 + 0xa4) = 3;
          FUN_00011e1a();
          FUN_00011e26();
          FUN_00011e3a();
          return 0;
        }
      }
    }
  }
  FUN_00011bd8();
  return 0;
}



undefined4 _LVL531(void)

{
  _LVL531();
  return 0;
}



undefined4 FUN_00011bd8(void)

{
  FUN_00011bd8();
  return 0;
}



undefined4 _LVL540(void)

{
  char cVar1;
  int unaff_s0;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_s2;
  uint unaff_s4;
  
  iVar2 = _LVL540();
  if (((iVar2 != 3) || ((unaff_s4 & 1) == 0)) ||
     ((cVar1 = *(char *)(unaff_s2 + 0xa3), cVar1 != '\a' && ((cVar1 != '\t' && (cVar1 != '\x06')))))
     ) {
    uVar4 = (uint)*(ushort *)(unaff_s0 + 2);
    uVar7 = (uint)*(ushort *)(unaff_s0 + 4);
    if ((uVar4 <= uVar7) &&
       ((((uVar5 = (uint)*(ushort *)(unaff_s0 + 6), uVar5 < 500 && (uVar7 < 0xc81)) && (5 < uVar4))
        && ((uVar6 = (uint)*(ushort *)(unaff_s0 + 8), (uVar6 - 10 & 0xffff) < 0xc77 &&
            ((uVar5 + 1) * uVar7 < uVar6 << 2)))))) {
      uVar8 = (uint)(*(ushort *)(*(int *)(unaff_s2 + 0x10) + 0x78) >> 1);
      if (((uVar8 < uVar4) ||
          ((uVar7 < uVar8 || (uVar5 != *(ushort *)(*(int *)(unaff_s2 + 0x10) + 0x5e) - 1)))) ||
         (*(ushort *)(unaff_s2 + 0x54) != uVar6)) {
        iVar2 = FUN_00011c8c();
        if (iVar2 != 0) {
          puVar3 = (undefined *)FUN_00011ca2();
          *puVar3 = 3;
          goto _L0;
        }
      }
      else {
        iVar2 = FUN_00011d22();
        if (iVar2 == 3) {
          puVar3 = (undefined *)FUN_00011d3c();
          *puVar3 = 2;
          *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(unaff_s0 + 2);
          *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(unaff_s0 + 4);
          *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(unaff_s2 + 0x54);
          *(ushort *)(puVar3 + 10) = *(ushort *)(*(int *)(unaff_s2 + 0x10) + 0x12) / 0x271;
          *(ushort *)(puVar3 + 0xc) = *(ushort *)(*(int *)(unaff_s2 + 0x10) + 0x12) / 0x271;
_L0:
          *(undefined2 *)(puVar3 + 0xe) = *(undefined2 *)(unaff_s0 + 2);
          *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(unaff_s0 + 4);
          *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(unaff_s0 + 6);
          *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(unaff_s0 + 8);
          puVar3[0x12] = *(undefined *)(unaff_s0 + 10);
          *(undefined2 *)(puVar3 + 0x14) = *(undefined2 *)(unaff_s0 + 0xc);
          *(undefined2 *)(puVar3 + 0x16) = *(undefined2 *)(unaff_s0 + 0xe);
          *(undefined2 *)(puVar3 + 0x18) = *(undefined2 *)(unaff_s0 + 0x10);
          *(undefined2 *)(puVar3 + 0x1a) = *(undefined2 *)(unaff_s0 + 0x12);
          *(undefined2 *)(puVar3 + 0x1c) = *(undefined2 *)(unaff_s0 + 0x14);
          *(undefined2 *)(puVar3 + 0x1e) = *(undefined2 *)(unaff_s0 + 0x16);
          *(undefined2 *)(puVar3 + 0x20) = *(undefined2 *)(unaff_s0 + 0x18);
          _L0();
          return 0;
        }
        iVar2 = FUN_00011d8c();
        if (iVar2 != 4) {
          return 0;
        }
        iVar2 = FUN_00011e02();
        if (iVar2 == 0) {
          *(undefined *)(unaff_s2 + 0xa4) = 3;
          FUN_00011e1a();
          FUN_00011e26();
          FUN_00011e3a();
          return 0;
        }
      }
    }
  }
  FUN_00011bd8();
  return 0;
}



undefined4 FUN_00011c8c(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_00011c8c();
  if (iVar1 == 0) {
    FUN_00011bd8();
  }
  else {
    puVar2 = (undefined *)FUN_00011ca2();
    *puVar2 = 3;
    *(undefined2 *)(puVar2 + 0xe) = *(undefined2 *)(unaff_s0 + 2);
    *(undefined2 *)(puVar2 + 0x10) = *(undefined2 *)(unaff_s0 + 4);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 6);
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 8);
    puVar2[0x12] = *(undefined *)(unaff_s0 + 10);
    *(undefined2 *)(puVar2 + 0x14) = *(undefined2 *)(unaff_s0 + 0xc);
    *(undefined2 *)(puVar2 + 0x16) = *(undefined2 *)(unaff_s0 + 0xe);
    *(undefined2 *)(puVar2 + 0x18) = *(undefined2 *)(unaff_s0 + 0x10);
    *(undefined2 *)(puVar2 + 0x1a) = *(undefined2 *)(unaff_s0 + 0x12);
    *(undefined2 *)(puVar2 + 0x1c) = *(undefined2 *)(unaff_s0 + 0x14);
    *(undefined2 *)(puVar2 + 0x1e) = *(undefined2 *)(unaff_s0 + 0x16);
    *(undefined2 *)(puVar2 + 0x20) = *(undefined2 *)(unaff_s0 + 0x18);
    _L0();
  }
  return 0;
}



undefined4 FUN_00011ca2(void)

{
  int unaff_s0;
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_00011ca2();
  *puVar1 = 3;
  *(undefined2 *)(puVar1 + 0xe) = *(undefined2 *)(unaff_s0 + 2);
  *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(unaff_s0 + 4);
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(unaff_s0 + 6);
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(unaff_s0 + 8);
  puVar1[0x12] = *(undefined *)(unaff_s0 + 10);
  *(undefined2 *)(puVar1 + 0x14) = *(undefined2 *)(unaff_s0 + 0xc);
  *(undefined2 *)(puVar1 + 0x16) = *(undefined2 *)(unaff_s0 + 0xe);
  *(undefined2 *)(puVar1 + 0x18) = *(undefined2 *)(unaff_s0 + 0x10);
  *(undefined2 *)(puVar1 + 0x1a) = *(undefined2 *)(unaff_s0 + 0x12);
  *(undefined2 *)(puVar1 + 0x1c) = *(undefined2 *)(unaff_s0 + 0x14);
  *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)(unaff_s0 + 0x16);
  *(undefined2 *)(puVar1 + 0x20) = *(undefined2 *)(unaff_s0 + 0x18);
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_00011d22(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  int unaff_s2;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  undefined2 uStack0000001a;
  undefined2 uStack0000001c;
  undefined uStack0000001e;
  undefined2 uStack00000020;
  undefined2 uStack00000022;
  undefined2 uStack00000024;
  undefined2 uStack00000026;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined2 uStack0000002c;
  
  iVar1 = FUN_00011d22();
  if (iVar1 == 3) {
    puVar2 = (undefined *)FUN_00011d3c();
    *puVar2 = 2;
    *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(unaff_s0 + 2);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(unaff_s0 + 4);
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s2 + 0x54);
    *(ushort *)(puVar2 + 10) = *(ushort *)(*(int *)(unaff_s2 + 0x10) + 0x12) / 0x271;
    *(ushort *)(puVar2 + 0xc) = *(ushort *)(*(int *)(unaff_s2 + 0x10) + 0x12) / 0x271;
    *(undefined2 *)(puVar2 + 0xe) = *(undefined2 *)(unaff_s0 + 2);
    *(undefined2 *)(puVar2 + 0x10) = *(undefined2 *)(unaff_s0 + 4);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 6);
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 8);
    puVar2[0x12] = *(undefined *)(unaff_s0 + 10);
    *(undefined2 *)(puVar2 + 0x14) = *(undefined2 *)(unaff_s0 + 0xc);
    *(undefined2 *)(puVar2 + 0x16) = *(undefined2 *)(unaff_s0 + 0xe);
    *(undefined2 *)(puVar2 + 0x18) = *(undefined2 *)(unaff_s0 + 0x10);
    *(undefined2 *)(puVar2 + 0x1a) = *(undefined2 *)(unaff_s0 + 0x12);
    *(undefined2 *)(puVar2 + 0x1c) = *(undefined2 *)(unaff_s0 + 0x14);
    *(undefined2 *)(puVar2 + 0x1e) = *(undefined2 *)(unaff_s0 + 0x16);
    *(undefined2 *)(puVar2 + 0x20) = *(undefined2 *)(unaff_s0 + 0x18);
    _L0();
  }
  else {
    iVar1 = FUN_00011d8c();
    if (iVar1 == 4) {
      uStack0000001a = *(undefined2 *)(unaff_s0 + 2);
      uStack0000001c = *(undefined2 *)(unaff_s0 + 4);
      uStack00000012 = *(undefined2 *)(unaff_s0 + 6);
      uStack00000014 = *(undefined2 *)(unaff_s0 + 8);
      uStack0000001e = *(undefined *)(unaff_s0 + 10);
      uStack00000020 = *(undefined2 *)(unaff_s0 + 0xc);
      uStack00000022 = *(undefined2 *)(unaff_s0 + 0xe);
      uStack00000024 = *(undefined2 *)(unaff_s0 + 0x10);
      uStack00000026 = *(undefined2 *)(unaff_s0 + 0x12);
      uStack00000028 = *(undefined2 *)(unaff_s0 + 0x14);
      uStack0000002a = *(undefined2 *)(unaff_s0 + 0x16);
      uStack0000002c = *(undefined2 *)(unaff_s0 + 0x18);
      iVar1 = FUN_00011e02();
      if (iVar1 == 0) {
        *(undefined *)(unaff_s2 + 0xa4) = 3;
        FUN_00011e1a();
        FUN_00011e26();
        FUN_00011e3a();
      }
      else {
        FUN_00011bd8();
      }
    }
  }
  return 0;
}



undefined4 FUN_00011d3c(void)

{
  int unaff_s0;
  undefined *puVar1;
  int unaff_s2;
  
  puVar1 = (undefined *)FUN_00011d3c();
  *puVar1 = 2;
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(unaff_s0 + 2);
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(unaff_s0 + 4);
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(unaff_s2 + 0x54);
  *(ushort *)(puVar1 + 10) = *(ushort *)(*(int *)(unaff_s2 + 0x10) + 0x12) / 0x271;
  *(ushort *)(puVar1 + 0xc) = *(ushort *)(*(int *)(unaff_s2 + 0x10) + 0x12) / 0x271;
  *(undefined2 *)(puVar1 + 0xe) = *(undefined2 *)(unaff_s0 + 2);
  *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(unaff_s0 + 4);
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(unaff_s0 + 6);
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(unaff_s0 + 8);
  puVar1[0x12] = *(undefined *)(unaff_s0 + 10);
  *(undefined2 *)(puVar1 + 0x14) = *(undefined2 *)(unaff_s0 + 0xc);
  *(undefined2 *)(puVar1 + 0x16) = *(undefined2 *)(unaff_s0 + 0xe);
  *(undefined2 *)(puVar1 + 0x18) = *(undefined2 *)(unaff_s0 + 0x10);
  *(undefined2 *)(puVar1 + 0x1a) = *(undefined2 *)(unaff_s0 + 0x12);
  *(undefined2 *)(puVar1 + 0x1c) = *(undefined2 *)(unaff_s0 + 0x14);
  *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)(unaff_s0 + 0x16);
  *(undefined2 *)(puVar1 + 0x20) = *(undefined2 *)(unaff_s0 + 0x18);
  _L0();
  return 0;
}



undefined4 FUN_00011d8c(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  undefined unaff_s5;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  undefined2 uStack0000001a;
  undefined2 uStack0000001c;
  undefined uStack0000001e;
  undefined2 uStack00000020;
  undefined2 uStack00000022;
  undefined2 uStack00000024;
  undefined2 uStack00000026;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined2 uStack0000002c;
  
  iVar1 = FUN_00011d8c();
  if (iVar1 == 4) {
    uStack0000001a = *(undefined2 *)(unaff_s0 + 2);
    uStack0000001c = *(undefined2 *)(unaff_s0 + 4);
    uStack00000012 = *(undefined2 *)(unaff_s0 + 6);
    uStack00000014 = *(undefined2 *)(unaff_s0 + 8);
    uStack0000001e = *(undefined *)(unaff_s0 + 10);
    uStack00000020 = *(undefined2 *)(unaff_s0 + 0xc);
    uStack00000022 = *(undefined2 *)(unaff_s0 + 0xe);
    uStack00000024 = *(undefined2 *)(unaff_s0 + 0x10);
    uStack00000026 = *(undefined2 *)(unaff_s0 + 0x12);
    uStack00000028 = *(undefined2 *)(unaff_s0 + 0x14);
    uStack0000002a = *(undefined2 *)(unaff_s0 + 0x16);
    uStack0000002c = *(undefined2 *)(unaff_s0 + 0x18);
    iVar1 = FUN_00011e02();
    if (iVar1 == 0) {
      *(undefined *)(unaff_s2 + 0xa4) = unaff_s5;
      FUN_00011e1a();
      FUN_00011e26();
      FUN_00011e3a();
    }
    else {
      FUN_00011bd8();
    }
  }
  return 0;
}



undefined4 FUN_00011e02(void)

{
  int iVar1;
  int unaff_s2;
  undefined unaff_s5;
  
  iVar1 = FUN_00011e02();
  if (iVar1 == 0) {
    *(undefined *)(unaff_s2 + 0xa4) = unaff_s5;
    FUN_00011e1a();
    FUN_00011e26();
    FUN_00011e3a();
  }
  else {
    FUN_00011bd8();
  }
  return 0;
}



undefined4 FUN_00011e1a(void)

{
  FUN_00011e1a();
  FUN_00011e26();
  FUN_00011e3a();
  return 0;
}



undefined4 FUN_00011e26(void)

{
  FUN_00011e26();
  FUN_00011e3a();
  return 0;
}



undefined4 FUN_00011e3a(void)

{
  FUN_00011e3a();
  return 0;
}



// DWARF DIE: 69f1

void llc_llcp_feats_req_pdu_send(uint16_t conhdl)

{
  llcp_feats_req pdu;
  
  _L0();
  _L0();
  FUN_00011e7e();
  return;
}



void _L0(void)

{
  int extraout_a0;
  undefined uStack00000004;
  
  _L0();
  uStack00000004 = 0xe;
  if (extraout_a0 == 3) {
    uStack00000004 = 8;
  }
  _L0();
  FUN_00011e7e();
  return;
}



void _L0(void)

{
  _L0();
  FUN_00011e7e();
  return;
}



void FUN_00011e7e(void)

{
  FUN_00011e7e();
  return;
}



// DWARF DIE: 698e

void llc_llcp_feats_rsp_pdu_send(uint16_t conhdl)

{
  llcp_feats_rsp pdu;
  
  _L0();
  _L0();
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined uStack00000005;
  
  _L0();
  uStack00000005 = *(undefined *)(*(int *)(unaff_s0 * 4) + 0x69);
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 681e

void llc_llcp_start_enc_req_pdu_send(uint16_t conhdl)

{
  undefined2 in_register_0000202a;
  int iVar1;
  int iVar2;
  llcp_start_enc_req pdu;
  
  iVar2 = CONCAT22(in_register_0000202a,conhdl) * 0x5c;
  *(ushort *)(iVar2 + 0x28008092) = *(ushort *)(iVar2 + 0x28008092) | 0x100;
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  *(byte *)(iVar1 + 0xa5) = *(byte *)(iVar1 + 0xa5) | 2;
  *(undefined2 *)(iVar2 + 0x280080cc) = 0;
  *(undefined2 *)(iVar2 + 0x280080ce) = 0;
  *(undefined2 *)(iVar2 + 0x280080d0) = 0;
  *(undefined2 *)(iVar2 + 0x280080d2) = 0;
  *(undefined2 *)(iVar2 + 0x280080d4) = 0;
  *(undefined2 *)(iVar2 + 0x280080d6) = 0;
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Variable defined which should be unmapped: pdu
// DWARF DIE: 6712

void llc_llcp_terminate_ind_pdu_send(uint16_t conhdl,uint8_t err_code)

{
  undefined2 in_register_0000202a;
  undefined3 in_register_0000202d;
  int iVar1;
  int iVar2;
  llcp_terminate_ind pdu;
  
  iVar2 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  _L0();
  iVar1 = 0x16;
  if (CONCAT31(in_register_0000202d,err_code) != 0x13) {
    iVar1 = CONCAT31(in_register_0000202d,err_code);
  }
  *(char *)(iVar2 + 0xa1) = (char)iVar1;
  _L0();
  FUN_00011fdc();
  FUN_00011fee();
  return;
}



void _L0(void)

{
  int iVar1;
  int unaff_s2;
  int in_stack_0000000c;
  undefined uStack0000001c;
  undefined uStack0000001d;
  
  _L0();
  iVar1 = 0x16;
  if (in_stack_0000000c != 0x13) {
    iVar1 = in_stack_0000000c;
  }
  uStack0000001d = (undefined)in_stack_0000000c;
  *(char *)(unaff_s2 + 0xa1) = (char)iVar1;
  uStack0000001c = 2;
  _L0();
  FUN_00011fdc();
  FUN_00011fee();
  return;
}



void _L0(void)

{
  _L0();
  FUN_00011fdc();
  FUN_00011fee();
  return;
}



void FUN_00011fdc(void)

{
  FUN_00011fdc();
  FUN_00011fee();
  return;
}



void FUN_00011fee(void)

{
  FUN_00011fee();
  return;
}



// DWARF DIE: 66ac

void llc_llcp_unknown_rsp_send_pdu(uint16_t conhdl,uint8_t unk_type)

{
  llcp_unknown_rsp pdu;
  
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 7677

int llc_llcp_unknown_ind_handler(uint16_t conhdl,uint8_t opcode,ke_task_id_t dest_id)

{
  undefined2 in_register_0000202a;
  
  if ((*(byte *)(*(int *)(CONCAT22(in_register_0000202a,conhdl) * 4) + 0xa5) & 8) == 0) {
    _L0();
  }
  else {
    _LVL600();
  }
  return 0;
}



undefined4 _LVL600(void)

{
  _LVL600();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 58ba

int llcp_feats_req_handler(uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_feats_req *param)

{
  undefined2 in_register_0000202a;
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  iVar4 = *piVar5;
  iVar1 = _L0();
  if ((iVar1 == 4) || (param->opcode != '\b')) {
    if ((*(byte *)(*piVar5 + 0xa5) & 8) == 0) {
      pbVar2 = (byte *)(iVar4 + 0x69);
      do {
        param = (llcp_feats_req *)&param->feats;
        pbVar3 = pbVar2 + 1;
        *pbVar2 = *pbVar2 & param->opcode;
        pbVar2 = pbVar3;
      } while (pbVar3 != (byte *)(iVar4 + 0x71));
      *(ushort *)(iVar4 + 0x5c) = *(ushort *)(iVar4 + 0x5c) | 1;
      _L0();
    }
    else {
      FUN_000120ce();
    }
  }
  else {
    FUN_000120a4();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int unaff_s2;
  int unaff_s3;
  byte *in_stack_0000000c;
  
  iVar1 = _L0();
  if ((iVar1 == 4) || (*in_stack_0000000c != 8)) {
    if ((*(byte *)(*(int *)(unaff_s0 + unaff_s3) + 0xa5) & 8) == 0) {
      pbVar2 = (byte *)(unaff_s2 + 0x69);
      do {
        in_stack_0000000c = in_stack_0000000c + 1;
        pbVar3 = pbVar2 + 1;
        *pbVar2 = *pbVar2 & *in_stack_0000000c;
        pbVar2 = pbVar3;
      } while (pbVar3 != (byte *)(unaff_s2 + 0x71));
      *(ushort *)(unaff_s2 + 0x5c) = *(ushort *)(unaff_s2 + 0x5c) | 1;
      _L0();
    }
    else {
      FUN_000120ce();
    }
  }
  else {
    FUN_000120a4();
  }
  return 0;
}



undefined4 FUN_000120a4(void)

{
  FUN_000120a4();
  return 0;
}



undefined4 FUN_000120ce(void)

{
  FUN_000120ce();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 57fc

int llcp_slave_feature_req_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_slave_feature_req *param)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 3) {
    FUN_00012146();
    return 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 3) {
    FUN_00012146();
    return 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_00012146(void)

{
  FUN_00012146();
  return 0;
}



// DWARF DIE: 6657

void llc_llcp_ping_req_pdu_send(uint16_t conhdl)

{
  llcp_ping_req pdu;
  
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 6602

void llc_llcp_ping_rsp_pdu_send(uint16_t conhdl)

{
  llcp_ping_rsp pdu;
  
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 3f6a

int llcp_ping_req_handler(uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,void *param)

{
  undefined2 in_register_0000202a;
  
  if ((*(byte *)(*(int *)(CONCAT22(in_register_0000202a,conhdl) * 4) + 0xa5) & 8) == 0) {
    _L0();
  }
  else {
    _LVL628();
  }
  return 0;
}



undefined4 _LVL628(void)

{
  _LVL628();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 659c

void llc_llcp_length_req_pdu_send(uint16_t conhdl)

{
  llcp_length_req pdu;
  
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 6536

void llc_llcp_length_rsp_pdu_send(uint16_t conhdl)

{
  llcp_length_rsp pdu;
  
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 3be8

int llcp_length_req_handler
              (uint16_t conhdl,ke_task_id_t dest_id,_Bool int_ctx,llcp_length_req *param)

{
  int iVar1;
  ushort uVar2;
  undefined2 in_register_0000202a;
  int iVar3;
  undefined *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  
  iVar1 = *(int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  *(byte *)(iVar1 + 0x53) = *(byte *)(iVar1 + 0x53) | 1;
  if ((*(byte *)(iVar1 + 0xa5) & 8) == 0) {
    uVar5 = *(ushort *)(iVar1 + 0x44);
    if (param->max_tx_octets < *(ushort *)(iVar1 + 0x44)) {
      uVar5 = param->max_tx_octets;
    }
    uVar7 = *(ushort *)(iVar1 + 0x4c);
    if (param->max_tx_time < *(ushort *)(iVar1 + 0x4c)) {
      uVar7 = param->max_tx_time;
    }
    uVar6 = *(ushort *)(iVar1 + 0x42);
    if (param->max_rx_octets < *(ushort *)(iVar1 + 0x42)) {
      uVar6 = param->max_rx_octets;
    }
    uVar2 = *(ushort *)(iVar1 + 0x4a);
    if (param->max_rx_time < *(ushort *)(iVar1 + 0x4a)) {
      uVar2 = param->max_rx_time;
    }
    _LVL661();
    if ((((*(ushort *)(iVar1 + 0x48) != uVar5) || (*(ushort *)(iVar1 + 0x50) != uVar7)) ||
        (*(ushort *)(iVar1 + 0x46) != uVar6)) || (*(ushort *)(iVar1 + 0x4e) != uVar2)) {
      *(ushort *)(iVar1 + 0x48) = uVar5;
      *(ushort *)(iVar1 + 0x50) = uVar7;
      *(ushort *)(iVar1 + 0x46) = uVar6;
      *(ushort *)(iVar1 + 0x4e) = uVar2;
      FUN_00012368();
      *(byte *)(iVar1 + 0x53) = *(byte *)(iVar1 + 0x53) & 0xfd;
    }
    FUN_00012380();
    *(byte *)(iVar1 + 0x53) = *(byte *)(iVar1 + 0x53) & 0xfe;
    iVar3 = _L0();
    if ((iVar3 != 0) && ((*(byte *)(iVar1 + 0x53) & 2) == 0)) {
      puVar4 = (undefined *)FUN_000123b4();
      *puVar4 = 7;
      *(uint16_t *)(puVar4 + 2) = conhdl;
      *(undefined2 *)(puVar4 + 8) = *(undefined2 *)(iVar1 + 0x48);
      *(undefined2 *)(puVar4 + 10) = *(undefined2 *)(iVar1 + 0x50);
      *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(iVar1 + 0x46);
      *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(iVar1 + 0x4e);
      _L0();
      *(byte *)(iVar1 + 0x53) = *(byte *)(iVar1 + 0x53) | 2;
    }
  }
  else {
    _LVL650();
  }
  return 0;
}



undefined4 _LVL650(void)

{
  _LVL650();
  return 0;
}



undefined4 _LVL661(void)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined *puVar2;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  undefined2 unaff_s5;
  
  _LVL661();
  if ((((*(ushort *)(unaff_s0 + 0x48) != unaff_s4) || (*(ushort *)(unaff_s0 + 0x50) != unaff_s3)) ||
      (*(ushort *)(unaff_s0 + 0x46) != unaff_s2)) || (*(ushort *)(unaff_s0 + 0x4e) != unaff_s1)) {
    *(short *)(unaff_s0 + 0x48) = (short)unaff_s4;
    *(short *)(unaff_s0 + 0x50) = (short)unaff_s3;
    *(short *)(unaff_s0 + 0x46) = (short)unaff_s2;
    *(short *)(unaff_s0 + 0x4e) = (short)unaff_s1;
    FUN_00012368();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfd;
  }
  FUN_00012380();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfe;
  iVar1 = _L0();
  if ((iVar1 != 0) && ((*(byte *)(unaff_s0 + 0x53) & 2) == 0)) {
    puVar2 = (undefined *)FUN_000123b4();
    *puVar2 = 7;
    *(undefined2 *)(puVar2 + 2) = unaff_s5;
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
    *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
    _L0();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  }
  return 0;
}



undefined4 FUN_00012368(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  undefined2 unaff_s5;
  
  FUN_00012368();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfd;
  FUN_00012380();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfe;
  iVar1 = _L0();
  if ((iVar1 != 0) && ((*(byte *)(unaff_s0 + 0x53) & 2) == 0)) {
    puVar2 = (undefined *)FUN_000123b4();
    *puVar2 = 7;
    *(undefined2 *)(puVar2 + 2) = unaff_s5;
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
    *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
    _L0();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  }
  return 0;
}



undefined4 FUN_00012380(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  undefined2 unaff_s5;
  
  FUN_00012380();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) & 0xfe;
  iVar1 = _L0();
  if ((iVar1 != 0) && ((*(byte *)(unaff_s0 + 0x53) & 2) == 0)) {
    puVar2 = (undefined *)FUN_000123b4();
    *puVar2 = 7;
    *(undefined2 *)(puVar2 + 2) = unaff_s5;
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
    *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
    _L0();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  undefined2 unaff_s5;
  
  iVar1 = _L0();
  if ((iVar1 != 0) && ((*(byte *)(unaff_s0 + 0x53) & 2) == 0)) {
    puVar2 = (undefined *)FUN_000123b4();
    *puVar2 = 7;
    *(undefined2 *)(puVar2 + 2) = unaff_s5;
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
    *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
    _L0();
    *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  }
  return 0;
}



undefined4 FUN_000123b4(void)

{
  int unaff_s0;
  undefined *puVar1;
  undefined2 unaff_s5;
  
  puVar1 = (undefined *)FUN_000123b4();
  *puVar1 = 7;
  *(undefined2 *)(puVar1 + 2) = unaff_s5;
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(unaff_s0 + 0x48);
  *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(unaff_s0 + 0x50);
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(unaff_s0 + 0x46);
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(unaff_s0 + 0x4e);
  _L0();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(byte *)(unaff_s0 + 0x53) = *(byte *)(unaff_s0 + 0x53) | 2;
  return 0;
}



// DWARF DIE: 5eef

int llc_llcp_recv_handler(ke_task_id_t dest_id,uint8_t status,llcp_pdu *pdu,_Bool int_ctx)

{
  undefined2 in_register_0000202a;
  uint uVar1;
  int iVar2;
  undefined3 in_register_0000202d;
  undefined3 in_register_00002035;
  
  iVar2 = CONCAT31(in_register_00002035,int_ctx);
  uVar1 = _L0();
  if (((uVar1 & 0x7f) != 0x7f) &&
     ((((uVar1 & 0xf) != 0xf || ((*(byte *)pdu & 0xfb) == 2)) &&
      ((*(ushort *)(*(int *)((CONCAT22(in_register_0000202a,dest_id) >> 8) * 4) + 0x5c) & 8) == 0)))
     ) {
    if (CONCAT31(in_register_0000202d,status) == 0) {
      if ((iVar2 == 0) || (*(char *)((code **)((uint)*(byte *)pdu * 8) + 1) != '\0')) {
                    // WARNING: Could not recover jumptable at 0x0001248e. Too many branches
                    // WARNING: Treating indirect jump as call
        iVar2 = (**(code **)((uint)*(byte *)pdu * 8))(CONCAT22(in_register_0000202a,dest_id),pdu);
        return iVar2;
      }
    }
    else {
      if ((CONCAT31(in_register_0000202d,status) == 0x19) && (iVar2 == 0)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  return (uint)(iVar2 != 0) << 1;
}



int _L0(void)

{
  byte *unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  uint unaff_s2;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  uVar1 = _L0();
  if (((uVar1 & 0x7f) != 0x7f) &&
     ((((uVar1 & 0xf) != 0xf || ((*unaff_s0 & 0xfb) == 2)) &&
      ((*(ushort *)(*(int *)((unaff_s2 >> 8) * 4) + 0x5c) & 8) == 0)))) {
    if (in_stack_0000000c == 0) {
      if ((in_stack_00000008 == 0) || (*(char *)((code **)((uint)*unaff_s0 * 8) + 1) != '\0')) {
                    // WARNING: Could not recover jumptable at 0x0001248e. Too many branches
                    // WARNING: Treating indirect jump as call
        iVar2 = (**(code **)((uint)*unaff_s0 * 8))();
        return iVar2;
      }
    }
    else {
      if ((in_stack_0000000c == 0x19) && (in_stack_00000008 == 0)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  return unaff_s1 << 1;
}



// DWARF DIE: 348e

uint8_t llc_llcp_get_autorize(uint8_t opcode)

{
  undefined3 in_register_00002029;
  
  if (CONCAT31(in_register_00002029,opcode) < 0x16) {
    return *(uint8_t *)(CONCAT31(in_register_00002029,opcode) * 8 + 5);
  }
  return '\0';
}


