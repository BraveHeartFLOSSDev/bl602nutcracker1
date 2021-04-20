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

struct co_list_hdr {
    struct co_list_hdr * next;
};

struct em_buf_node {
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc {
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
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

typedef enum llc_util_enc_state {
    LLC_ENC_TX_FLOW_OFF=4,
    LLC_ENC_REFRESH_PENDING=16,
    LLC_ENC_PAUSE_PENDING=32,
    LLC_ENC_RX=2,
    LLC_ENC_ENABLE=3,
    LLC_ENC_TX=1,
    LLC_ENC_FLOW_OFF=12,
    LLC_ENC_RX_FLOW_OFF=8,
    LLC_ENC_DISABLED=0
} llc_util_enc_state;

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict1722_for___value anon_union.conflict1722_for___value, *Panon_union.conflict1722_for___value;

typedef uint wint_t;

union anon_union.conflict1722_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflict1722_for___value __value;
};

typedef union anon_union.conflict1722 anon_union.conflict1722, *Panon_union.conflict1722;

union anon_union.conflict1722 {
    wint_t __wch;
    uchar __wchb[4];
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

typedef struct le_chnl_map le_chnl_map, *Ple_chnl_map;

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

struct le_chnl_map {
    uint8_t map[5];
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

typedef enum anon_enum_8.conflict6f {
    KE_MEM_KE_MSG=0,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_NON_RETENTION=0,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_EM=1
} anon_enum_8.conflict6f;

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

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

struct llcp_con_param_req {
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

struct le_features {
    uint8_t feats[8];
};

struct llcp_pause_enc_rsp {
    uint8_t opcode;
};

struct rand_nb {
    uint8_t nb[8];
};

struct llcp_ping_rsp {
    uint8_t opcode;
};

struct llcp_vers_ind {
    uint8_t opcode;
    uint8_t vers;
    uint16_t compid;
    uint16_t subvers;
};

struct llcp_feats_req {
    uint8_t opcode;
    struct le_features feats;
};

struct llcp_start_enc_rsp {
    uint8_t opcode;
};

struct llcp_unknown_rsp {
    uint8_t opcode;
    uint8_t unk_type;
};

struct llcp_feats_rsp {
    uint8_t opcode;
    struct le_features feats;
};

struct llcp_start_enc_req {
    uint8_t opcode;
};

struct llcp_pause_enc_req {
    uint8_t opcode;
};

struct llcp_reject_ind_ext {
    uint8_t opcode;
    uint8_t rej_opcode;
    uint8_t err_code;
};

struct llcp_length_req {
    uint8_t opcode;
    undefined field_0x1;
    uint16_t max_rx_octets;
    uint16_t max_rx_time;
    uint16_t max_tx_octets;
    uint16_t max_tx_time;
};

struct llcp_slave_feature_req {
    uint8_t opcode;
    struct le_features feats;
};

struct llcp_reject_ind {
    uint8_t opcode;
    uint8_t err_code;
};

struct llcp_channel_map_ind {
    uint8_t opcode;
    struct le_chnl_map ch_map;
    uint16_t instant;
};

struct llcp_con_upd_ind {
    uint8_t opcode;
    uint8_t win_size;
    uint16_t win_off;
    uint16_t interv;
    uint16_t latency;
    uint16_t timeout;
    uint16_t instant;
};

struct llcp_terminate_ind {
    uint8_t opcode;
    uint8_t err_code;
};

struct llcp_con_param_rsp {
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

struct init_vect {
    uint8_t iv[4];
};

struct sess_k_div_x {
    uint8_t skdiv[8];
};

struct llcp_enc_req {
    uint8_t opcode;
    struct rand_nb rand;
    uint8_t ediv[2];
    struct sess_k_div_x skdm;
    struct init_vect ivm;
};

struct llcp_length_rsp {
    uint8_t opcode;
    undefined field_0x1;
    uint16_t max_rx_octets;
    uint16_t max_rx_time;
    uint16_t max_tx_octets;
    uint16_t max_tx_time;
};

struct llcp_enc_rsp {
    uint8_t opcode;
    struct sess_k_div_x skds;
    struct init_vect ivs;
};

struct llcp_ping_req {
    uint8_t opcode;
};

union llcp_pdu {
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

struct llc_llcp_recv_ind {
    uint8_t status;
    uint8_t dummy;
    union llcp_pdu pdu;
};

typedef struct llc_data_ind llc_data_ind, *Pllc_data_ind;

struct llc_data_ind {
    uint16_t conhdl;
    uint8_t pb_bc_flag;
    undefined field_0x3;
    uint16_t length;
    uint8_t rx_hdl;
    undefined field_0x7;
};

typedef enum llc_rem_proc_state {
    LLC_REM_WAIT_CON_PARAM_HOST_RSP=2,
    LLC_REM_WAIT_START_ENC_RSP_ACK=12,
    LLC_REM_WAIT_ENC_REQ=7,
    LLC_REM_IDLE=0,
    LLC_REM_WAIT_TP_FOR_PAUSE_ENC_REQ=5,
    LLC_REM_WAIT_TP_FOR_ENC_REQ=8,
    LLC_REM_WAIT_LTK=9,
    LLC_REM_WAIT_START_ENC_RSP=11,
    LLC_REM_WAIT_RANDN_GEN_IND=14,
    LLC_REM_WAIT_ENC_REJECT_ACK=13,
    LLC_REM_WAIT_CON_UPD_INSTANT=4,
    LLC_REM_WAIT_MAP_UPD_INSTANT=1,
    LLC_REM_WAIT_PAUSE_ENC_RSP=6,
    LLC_REM_WAIT_SK=10,
    LLC_REM_WAIT_CON_UPD_REQ=3
} llc_rem_proc_state;

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

typedef enum llc_loc_proc_state {
    LLC_LOC_WAIT_CON_PARAM_RSP=7,
    LLC_LOC_WAIT_CON_UPD_INSTANT=9,
    LLC_LOC_WAIT_START_ENC_REQ=16,
    LLC_LOC_WAIT_PAUSE_ENC_RSP=11,
    LLC_LOC_WAIT_SK=15,
    LLC_LOC_WAIT_ENC_RSP=13,
    LLC_LOC_WAIT_MAP_UPD_INSTANT=6,
    LLC_LOC_WAIT_VERS_IND=2,
    LLC_LOC_WAIT_LENGTH_RSP=4,
    LLC_LOC_WAIT_RANDN_GEN_IND=19,
    LLC_LOC_WAIT_CON_UPD_REQ=8,
    LLC_LOC_WAIT_START_ENC_RSP=18,
    LLC_LOC_WAIT_PING_RSP=5,
    LLC_LOC_IDLE=0,
    LLC_LOC_WAIT_FEAT_RSP=1,
    LLC_LOC_WAIT_TRAFFIC_PAUSED=10,
    LLC_LOC_WAIT_PAUSE_ENC_RSP_SENT=12,
    LLC_LOC_SEND_START_ENC_RSP=17,
    LLC_LOC_WAIT_TERM_ACK=3,
    LLC_LOC_WAIT_SK_AND_START_ENC_REQ=14
} llc_loc_proc_state;

typedef enum llc_state_id {
    LLC_DISC_BUSY=15,
    LLC_TRAFFIC_PAUSED_BUSY=4,
    LLC_REM_PROC_BUSY=2,
    LLC_FREE=127,
    LLC_STATE_MAX=-128,
    LLC_CONNECTED=0,
    LLC_LOC_PROC_BUSY=1
} llc_state_id;

typedef enum llc_proc_field {
    LLC_TRAFFIC_PAUSED=2,
    LLC_DISC=3,
    LLC_REM_PROC=1,
    LLC_LOC_PROC=0
} llc_proc_field;

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

typedef long int32_t;

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

typedef uint8_t ke_state_t;

typedef enum ke_msg_status_tag {
    KE_MSG_SAVED=2,
    KE_MSG_NO_FREE=1,
    KE_MSG_CONSUMED=0
} ke_msg_status_tag;

typedef enum co_error {
    CO_ERROR_MEMORY_CAPA_EXCEED=7,
    CO_ERROR_INVALID_LMP_PARAM=30,
    CO_ERROR_INSTANT_PASSED=40,
    CO_ERROR_TERMINATED_MIC_FAILURE=61,
    CO_ERROR_UNSUPPORTED_LMP_PARAM_VALUE=32,
    CO_ERROR_PAIRING_WITH_UNIT_KEY_NOT_SUP=41,
    CO_ERROR_UNKNOW_ADV_ID=66,
    CO_ERROR_QOS_NOT_SUPPORTED=39,
    CO_ERROR_ROLE_SWITCH_FAIL=53,
    CO_ERROR_INSUFFICIENT_SECURITY=47,
    CO_ERROR_PIN_MISSING=6,
    CO_ERROR_LINK_KEY_CANT_CHANGE=38,
    CO_ERROR_ROLE_CHANGE_NOT_ALLOWED=33,
    CO_ERROR_CONN_ACCEPT_TIMEOUT_EXCEED=16,
    CO_ERROR_REMOTE_DEV_TERM_LOW_RESOURCES=20,
    CO_ERROR_UNSUPPORTED_REMOTE_FEATURE=26,
    CO_ERROR_DIRECT_ADV_TO=60,
    CO_ERROR_CONN_REJ_SECURITY_REASONS=14,
    CO_ERROR_ACL_CON_EXISTS=11,
    CO_ERROR_UNDEFINED=-1,
    CO_ERROR_UNKNOWN_LMP_PDU=25,
    CO_ERROR_QOS_UNACCEPTABLE_PARAM=44,
    CO_ERROR_PAIRING_NOT_ALLOWED=24,
    CO_ERROR_REMOTE_USER_TERM_CON=19,
    CO_ERROR_ROLE_SWITCH_PEND=50,
    CO_ERROR_LMP_RSP_TIMEOUT=34,
    CO_ERROR_CONN_FAILED_TO_BE_EST=62,
    CO_ERROR_SYNC_CON_LIMIT_DEV_EXCEED=10,
    CO_ERROR_REMOTE_DEV_POWER_OFF=21,
    CO_ERROR_CONN_REJ_LIMITED_RESOURCES=13,
    CO_ERROR_UNSUPPORTED=17,
    CO_ERROR_HW_MEM_ALLOC_FAIL=1,
    CO_ERROR_OP_CANCELL_BY_HOST=68,
    CO_ERROR_UNKNOWN_CONNECTION_ID=2,
    CO_ERROR_SCO_AIR_MODE_REJECTED=29,
    CO_ERROR_SP_NOT_SUPPORTED_HOST=55,
    CO_ERROR_DIFF_TRANSACTION_COLLISION=42,
    CO_ERROR_PARAM_OUT_OF_MAND_RANGE=48,
    CO_ERROR_UNKNOWN_HCI_COMMAND=1,
    CO_ERROR_CCA_REJ_USE_CLOCK_DRAG=64,
    CO_ERROR_PAGE_TIMEOUT=4,
    CO_ERROR_LMP_COLLISION=35,
    CO_ERROR_LIMIT_REACHED=67,
    CO_ERROR_HW_UART_OUT_OF_SYNC=0,
    CO_ERROR_CON_LIMIT_EXCEED=9,
    CO_ERROR_NO_ERROR=0,
    CO_ERROR_ENC_MODE_NOT_ACCEPT=37,
    CO_ERROR_QOS_REJECTED=45,
    CO_ERROR_HOST_BUSY_PAIRING=56,
    CO_ERROR_SCO_OFFSET_REJECTED=27,
    CO_ERROR_EIR_TOO_LARGE=54,
    CO_ERROR_CONTROLLER_BUSY=58,
    CO_ERROR_CON_TERM_BY_LOCAL_HOST=22,
    CO_ERROR_UNSPECIFIED_ERROR=31,
    CO_ERROR_CON_TIMEOUT=8,
    CO_ERROR_REPEATED_ATTEMPTS=23,
    CO_ERROR_UNACCEPTABLE_CONN_INT=59,
    CO_ERROR_LMP_PDU_NOT_ALLOWED=36,
    CO_ERROR_HARDWARE_FAILURE=3,
    CO_ERROR_CONN_REJ_UNACCEPTABLE_BDADDR=15,
    CO_ERROR_INVALID_HCI_PARAM=18,
    CO_ERROR_RESERVED_SLOT_VIOLATION=52,
    CO_ERROR_CHANNEL_CLASS_NOT_SUP=46,
    CO_ERROR_COMMAND_DISALLOWED=12,
    CO_ERROR_SCO_INTERVAL_REJECTED=28,
    CO_ERROR_AUTH_FAILURE=5
} co_error;

typedef struct hci_le_set_data_len_cmd hci_le_set_data_len_cmd, *Phci_le_set_data_len_cmd;

struct hci_le_set_data_len_cmd {
    uint16_t conhdl;
    uint16_t tx_octets;
    uint16_t tx_time;
};

typedef struct hci_auth_payl_to_exp_evt hci_auth_payl_to_exp_evt, *Phci_auth_payl_to_exp_evt;

struct hci_auth_payl_to_exp_evt {
    uint16_t conhdl;
};

typedef struct hci_le_rem_con_param_req_evt hci_le_rem_con_param_req_evt, *Phci_le_rem_con_param_req_evt;

struct hci_le_rem_con_param_req_evt {
    uint8_t subcode;
    undefined field_0x1;
    uint16_t conhdl;
    uint16_t interval_min;
    uint16_t interval_max;
    uint16_t latency;
    uint16_t timeout;
};

typedef enum hci_evt_code {
    HCI_ROLE_CHG_EVT_CODE=18,
    HCI_DISC_CMP_EVT_CODE=5,
    HCI_CON_REQ_EVT_CODE=4,
    HCI_AUTH_PAYL_TO_EXP_EVT_CODE=87,
    HCI_LE_GEN_DHKEY_CMP_EVT_SUBCODE=9,
    HCI_CON_SLV_BCST_TO_EVT_CODE=82,
    HCI_LE_REM_CON_PARAM_REQ_EVT_SUBCODE=6,
    HCI_ENC_KEY_REFRESH_CMP_EVT_CODE=48,
    HCI_INQ_RES_WITH_RSSI_EVT_CODE=34,
    HCI_CMD_CMP_EVT_CODE=14,
    HCI_LE_META_EVT_CODE=62,
    HCI_USER_PASSKEY_REQ_EVT_CODE=52,
    HCI_LE_DATA_LEN_CHG_EVT_SUBCODE=7,
    HCI_PAGE_SCAN_REPET_MODE_CHG_EVT_CODE=32,
    HCI_USER_CFM_REQ_EVT_CODE=51,
    HCI_REM_OOB_DATA_REQ_EVT_CODE=53,
    HCI_LE_RD_LOC_P256_PUB_KEY_CMP_EVT_SUBCODE=8,
    HCI_SYNC_TRAIN_REC_EVT_CODE=80,
    HCI_LE_CON_UPDATE_CMP_EVT_SUBCODE=3,
    HCI_LE_LTK_REQUEST_EVT_SUBCODE=5,
    HCI_FLOW_SPEC_CMP_EVT_CODE=33,
    HCI_IO_CAP_REQ_EVT_CODE=49,
    HCI_QOS_VIOL_EVT_CODE=30,
    HCI_RD_REM_SUPP_FEATS_CMP_EVT_CODE=11,
    HCI_SLV_PAGE_RSP_TO_EVT_CODE=84,
    HCI_LE_DIR_ADV_REP_EVT_SUBCODE=11,
    HCI_CON_SLV_BCST_REC_EVT_CODE=81,
    HCI_INQ_RES_EVT_CODE=2,
    HCI_LE_ADV_REPORT_EVT_SUBCODE=2,
    HCI_SYNC_CON_CHG_EVT_CODE=45,
    HCI_MAX_EVT_MSK_PAGE_1_CODE=64,
    HCI_LE_ENH_CON_CMP_EVT_SUBCODE=10,
    HCI_INQ_CMP_EVT_CODE=1,
    HCI_RD_REM_EXT_FEATS_CMP_EVT_CODE=35,
    HCI_LE_CH_SEL_ALGO_EVT_SUBCODE=20,
    HCI_CON_CMP_EVT_CODE=3,
    HCI_ENC_CHG_EVT_CODE=8,
    HCI_CON_PKT_TYPE_CHG_EVT_CODE=29,
    HCI_LINK_SUPV_TO_CHG_EVT_CODE=56,
    HCI_TRUNC_PAGE_CMP_EVT_CODE=83,
    HCI_NB_CMP_PKTS_EVT_CODE=19,
    HCI_LK_NOTIF_EVT_CODE=24,
    HCI_MAX_SLOT_CHG_EVT_CODE=27,
    HCI_KEYPRESS_NOTIF_EVT_CODE=60,
    HCI_RD_REM_VER_INFO_CMP_EVT_CODE=12,
    HCI_SYNC_CON_CMP_EVT_CODE=44,
    HCI_CHG_CON_LK_CMP_EVT_CODE=9,
    HCI_RD_CLK_OFF_CMP_EVT_CODE=28,
    HCI_DBG_META_EVT_CODE=-1,
    HCI_AUTH_CMP_EVT_CODE=6,
    HCI_ENH_FLUSH_CMP_EVT_CODE=57,
    HCI_CMD_STATUS_EVT_CODE=15,
    HCI_REM_NAME_REQ_CMP_EVT_CODE=7,
    HCI_PIN_CODE_REQ_EVT_CODE=22,
    HCI_QOS_SETUP_CMP_EVT_CODE=13,
    HCI_SYNC_TRAIN_CMP_EVT_CODE=79,
    HCI_MAX_EVT_MSK_PAGE_2_CODE=88,
    HCI_MODE_CHG_EVT_CODE=20,
    HCI_REM_HOST_SUPP_FEATS_NOTIF_EVT_CODE=61,
    HCI_CON_SLV_BCST_CH_MAP_CHG_EVT_CODE=85,
    HCI_LE_CON_CMP_EVT_SUBCODE=1,
    HCI_HW_ERR_EVT_CODE=16,
    HCI_RETURN_LINK_KEYS_EVT_CODE=21,
    HCI_EXT_INQ_RES_EVT_CODE=47,
    HCI_SP_CMP_EVT_CODE=54,
    HCI_USER_PASSKEY_NOTIF_EVT_CODE=59,
    HCI_SNIFF_SUB_EVT_CODE=46,
    HCI_DATA_BUF_OVFLW_EVT_CODE=26,
    HCI_LK_REQ_EVT_CODE=23,
    HCI_MASTER_LK_CMP_EVT_CODE=10,
    HCI_IO_CAP_RSP_EVT_CODE=50,
    HCI_LE_RD_REM_USED_FEATS_CMP_EVT_SUBCODE=4,
    HCI_FLUSH_OCCURRED_EVT_CODE=17
} hci_evt_code;

typedef struct hci_le_start_enc_cmd hci_le_start_enc_cmd, *Phci_le_start_enc_cmd;

typedef struct ltk ltk, *Pltk;

struct ltk {
    uint8_t ltk[16];
};

struct hci_le_start_enc_cmd {
    uint16_t conhdl;
    struct rand_nb nb;
    uint16_t enc_div;
    struct ltk ltk;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef enum HCI_MSG {
    HCI_ACL_DATA_RX=2054,
    HCI_CMD_STAT_EVENT=2050,
    HCI_COMMAND=2053,
    HCI_ACL_DATA_TX=2055,
    HCI_TCI_LMP=2056,
    HCI_DBG_EVT=2057,
    HCI_MSG_ID_LAST=2058,
    HCI_CMD_CMP_EVENT=2049,
    HCI_LE_EVENT=2052,
    HCI_MSG_ID_FIRST=2048,
    HCI_EVENT=2051
} HCI_MSG;

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

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div {
    uint8_t skd[16];
};

typedef struct le_states le_states, *Ple_states;

struct le_states {
    uint8_t supp_states[8];
};

typedef enum le_evt_mask {
    LE_DATA_LEN_CHG_EVT_MSK=64,
    LE_REM_CON_PARA_REQ_EVT_BIT=5,
    LE_CON_CMP_EVT_MSK=1,
    LE_CON_RD_REM_FEAT_EVT_BIT=3,
    LE_GEN_DHKEY_CMP_EVT_BIT=8,
    LE_CH_SEL_ALGO_EVT_MSK=524288,
    LE_DATA_LEN_CHG_EVT_BIT=6,
    LE_SCAN_REQ_REC_EVT_MSK=262144,
    LE_REM_CON_PARA_REQ_EVT_MSK=32,
    LE_ENH_CON_CMP_EVT_BIT=9,
    LE_GEN_DHKEY_CMP_EVT_MSK=256,
    LE_CH_SEL_ALGO_EVT_BIT=19,
    LE_PER_ADV_SYNC_LOST_EVT_BIT=15,
    LE_ENH_CON_CMP_EVT_MSK=512,
    LE_ADV_REP_EVT_MSK=2,
    LE_EXT_ADV_SET_TER_EVT_MSK=131072,
    LE_RD_LOC_P256_PUB_KEY_CMP_EVT_MSK=-128,
    LE_CON_RD_REM_FEAT_EVT_MSK=8,
    LE_CON_CMP_EVT_BIT=0,
    LE_ADV_REP_EVT_BIT=1,
    LE_RD_LOC_P256_PUB_KEY_CMP_EVT_BIT=7,
    LE_DIR_ADV_REP_EVT_BIT=10,
    LE_EXT_ADV_REP_EVT_MSK=4096,
    LE_PHY_UPD_CMP_EVT_MSK=2048,
    LE_EXT_SCAN_TO_EVT_MSK=65536,
    LE_LG_TR_KEY_REQ_EVT_BIT=4,
    LE_DIR_ADV_REP_EVT_MSK=1024,
    LE_EXT_ADV_REP_EVT_BIT=12,
    LE_PER_ADV_SYNC_LOST_EVT_MSK=-32768,
    LE_EXT_SCAN_TO_EVT_BIT=16,
    LE_PHY_UPD_CMP_EVT_BIT=11,
    LE_LG_TR_KEY_REQ_EVT_MSK=16,
    LE_EXT_ADV_SET_TER_EVT_BIT=17,
    LE_PER_ADV_SYNC_EST_EVT_BIT=13,
    LE_CON_UPD_EVT_BIT=2,
    LE_PER_ADV_REP_EVT_MSK=16384,
    LE_SCAN_REQ_REC_EVT_BIT=18,
    LE_PER_ADV_SYNC_EST_EVT_MSK=8192,
    LE_CON_UPD_EVT_MSK=4,
    LE_PER_ADV_REP_EVT_BIT=14,
    LE_DFT_EVT_MSK=31
} le_evt_mask;

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds {
    uint8_t cmds[64];
};

typedef struct lld_evt_tag lld_evt_tag, *Plld_evt_tag;

typedef struct lld_evt_anchor lld_evt_anchor, *Plld_evt_anchor;

typedef struct ea_interval_tag ea_interval_tag, *Pea_interval_tag;

typedef union lld_evt_info lld_evt_info, *Plld_evt_info;

typedef struct lld_non_conn lld_non_conn, *Plld_non_conn;

typedef struct lld_conn lld_conn, *Plld_conn;

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

struct ea_interval_tag {
    struct co_list_hdr hdr;
    uint16_t interval_used;
    uint16_t offset_used;
    uint16_t bandwidth_used;
    uint16_t conhdl_used;
    uint16_t role_used;
    uint16_t linkid;
};

struct lld_non_conn {
    uint32_t window;
    uint32_t anchor;
    uint32_t end_ts;
    _Bool initiate;
    _Bool connect_req_sent;
    undefined field_0xe;
    undefined field_0xf;
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

typedef enum co_llcp_opcode {
    LLCP_OPCODE_MAX_OPCODE=22,
    LLCP_START_ENC_REQ_OPCODE=5,
    LLCP_LENGTH_RSP_OPCODE=21,
    LLCP_REJECT_IND_OPCODE=13,
    LLCP_PING_RSP_OPCODE=19,
    LLCP_CHANNEL_MAP_IND_OPCODE=1,
    LLCP_PAUSE_ENC_RSP_OPCODE=11,
    LLCP_PING_REQ_OPCODE=18,
    LLCP_TERMINATE_IND_OPCODE=2,
    LLCP_ENC_REQ_OPCODE=3,
    LLCP_START_ENC_RSP_OPCODE=6,
    LLCP_CONNECTION_UPDATE_IND_OPCODE=0,
    LLCP_ENC_RSP_OPCODE=4,
    LLCP_VERSION_IND_OPCODE=12,
    LLCP_LENGTH_REQ_OPCODE=20,
    LLCP_FEATURE_RSP_OPCODE=9,
    LLCP_PAUSE_ENC_REQ_OPCODE=10,
    LLCP_CONNECTION_PARAM_RSP_OPCODE=16,
    LLCP_FEATURE_REQ_OPCODE=8,
    LLCP_CONNECTION_PARAM_REQ_OPCODE=15,
    LLCP_UNKNOWN_RSP_OPCODE=7,
    LLCP_SLAVE_FEATURE_REQ_OPCODE=14,
    LLCP_REJECT_IND_EXT_OPCODE=17
} co_llcp_opcode;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict1ee7_for__new anon_union.conflict1ee7_for__new, *Panon_union.conflict1ee7_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict1d5b anon_struct.conflict1d5b, *Panon_struct.conflict1d5b;

typedef struct anon_struct.conflict1ea0 anon_struct.conflict1ea0, *Panon_struct.conflict1ea0;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue {
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct anon_struct.conflict1ea0 {
    uchar * _nextf[30];
    uint _nmalloc[30];
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

struct anon_struct.conflict1d5b {
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

union anon_union.conflict1ee7_for__new {
    struct anon_struct.conflict1d5b _reent;
    struct anon_struct.conflict1ea0 _unused;
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
    union anon_union.conflict1ee7_for__new _new;
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

struct _Bigint {
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

typedef union anon_union.conflict1ee7 anon_union.conflict1ee7, *Panon_union.conflict1ee7;

union anon_union.conflict1ee7 {
    struct anon_struct.conflict1d5b _reent;
    struct anon_struct.conflict1ea0 _unused;
};

typedef struct llm_enc_ind llm_enc_ind, *Pllm_enc_ind;

struct llm_enc_ind {
    uint8_t status;
    uint8_t encrypted_data[16];
};

typedef struct llm_enc_req llm_enc_req, *Pllm_enc_req;

struct llm_enc_req {
    struct ltk key;
    uint8_t plain_data[16];
};

typedef enum llm_msg_id {
    LLM_LE_SET_HOST_CH_CLASS_REQ_IND=3,
    LLM_ENC_IND=5,
    LLM_ECC_RESULT_IND=6,
    LLM_STOP_IND=1,
    LLM_LE_CHNL_ASSESS_TIMER=7,
    LLM_LE_ENH_PRIV_ADDR_RENEW_TIMER=9,
    LLM_ENC_REQ=4,
    LLM_LE_SET_HOST_CH_CLASS_CMD_STO=0,
    LLM_GEN_CHNL_CLS_CMD=8,
    LLM_LE_SET_HOST_CH_CLASS_REQ=2
} llm_msg_id;

typedef int32_t BaseType_t;

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct rem_version {
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct encrypt {
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
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

typedef enum llc_dle_flag {
    LLC_DLE_REQ_RCVD_LSB=0,
    LLC_DLE_REQ_RCVD_MASK=1,
    LLC_DLE_EVT_SENT_LSB=1,
    LLC_DLE_EVT_SENT_MASK=2
} llc_dle_flag;

typedef enum anon_enum_16.conflict2fc5 {
    LLD_STOP_IND=512,
    LLD_EXT_ADV_STOP_IND=513
} anon_enum_16.conflict2fc5;

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




int llc_dft_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  return 0;
}



int llm_enc_ind_handler(ke_msg_id_t msgid,llm_enc_ind *param,ke_task_id_t dest_id,
                       ke_task_id_t src_id)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 in_register_00002032;
  uint uVar5;
  undefined2 in_register_00002036;
  int iVar6;
  
  uVar5 = CONCAT22(in_register_00002032,dest_id);
  uVar2 = _L0(uVar5,CONCAT22(in_register_00002036,src_id));
  if ((uVar2 & 0xf) != 0xf) {
    uVar1 = uVar5 >> 8;
    iVar6 = *(int *)(uVar1 * 4);
    if (((*(char *)(iVar6 + 0xa3) == '\x13') && (iVar3 = _LVL15(uVar1), iVar3 == 3)) ||
       ((*(char *)(iVar6 + 0xa4) == '\x0e' && (iVar3 = FUN_00010058(uVar1), iVar3 == 4)))) {
      (*pcRam00000000)(iVar6 + 0x91,param->encrypted_data,0x10,pcRam00000000);
    }
    else {
      iVar3 = FUN_00010068(uVar1);
      if (((iVar3 != 4) || ((uVar2 & 2) == 0)) || (*(char *)(iVar6 + 0xa4) != '\n')) {
        iVar3 = FUN_000100f8(uVar1);
        if (iVar3 != 3) {
          return 0;
        }
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        if (1 < (byte)(*(char *)(iVar6 + 0xa3) - 0xeU)) {
          return 0;
        }
      }
      puVar4 = (undefined2 *)(uVar1 * 0x5c + 0x280080b4);
      uVar2 = 0xf;
      do {
        *puVar4 = CONCAT11(param->encrypted_data[uVar2 - 1],(param->encrypted_data + (uVar2 - 1))[1]
                          );
        uVar2 = uVar2 - 2 & 0xff;
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0xff);
    }
    FUN_000100ec(0x106,uVar5,uVar5);
  }
  return 0;
}



undefined4 _L0(void)

{
  uint uVar1;
  uint unaff_s1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  int unaff_s2;
  int iVar5;
  
  uVar2 = _L0();
  if ((uVar2 & 0xf) != 0xf) {
    uVar1 = unaff_s1 >> 8;
    iVar5 = *(int *)(uVar1 * 4);
    if (((*(char *)(iVar5 + 0xa3) == '\x13') && (iVar3 = _LVL15(uVar1), iVar3 == 3)) ||
       ((*(char *)(iVar5 + 0xa4) == '\x0e' && (iVar3 = FUN_00010058(uVar1), iVar3 == 4)))) {
      (*pcRam00000000)(iVar5 + 0x91,unaff_s2 + 1,0x10,pcRam00000000);
    }
    else {
      iVar3 = FUN_00010068(uVar1);
      if (((iVar3 != 4) || ((uVar2 & 2) == 0)) || (*(char *)(iVar5 + 0xa4) != '\n')) {
        iVar3 = FUN_000100f8(uVar1);
        if (iVar3 != 3) {
          return 0;
        }
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        if (1 < (byte)(*(char *)(iVar5 + 0xa3) - 0xeU)) {
          return 0;
        }
      }
      puVar4 = (undefined2 *)(uVar1 * 0x5c + 0x280080b4);
      uVar2 = 0xf;
      do {
        *puVar4 = CONCAT11(*(undefined *)(unaff_s2 + uVar2),((undefined *)(unaff_s2 + uVar2))[1]);
        uVar2 = uVar2 - 2 & 0xff;
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0xff);
    }
    FUN_000100ec(0x106);
  }
  return 0;
}



undefined4 FUN_00010058(void)

{
  int unaff_s0;
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  
  iVar1 = FUN_00010058();
  if (iVar1 == 4) {
    (*pcRam00000000)(unaff_s3 + 0x91,unaff_s2 + 1,0x10,pcRam00000000);
  }
  else {
    iVar1 = FUN_00010068();
    if (((iVar1 != 4) || ((unaff_s4 & 2) == 0)) || (*(char *)(unaff_s3 + 0xa4) != '\n')) {
      iVar1 = FUN_000100f8();
      if (iVar1 != 3) {
        return 0;
      }
      if ((unaff_s4 & 1) == 0) {
        return 0;
      }
      if (1 < (byte)(*(char *)(unaff_s3 + 0xa3) - 0xeU)) {
        return 0;
      }
    }
    puVar2 = (undefined2 *)(unaff_s0 * 0x5c + 0x280080b4);
    uVar3 = 0xf;
    do {
      *puVar2 = CONCAT11(*(undefined *)(unaff_s2 + uVar3),((undefined *)(unaff_s2 + uVar3))[1]);
      uVar3 = uVar3 - 2 & 0xff;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0xff);
  }
  FUN_000100ec(0x106);
  return 0;
}



undefined4 FUN_00010068(void)

{
  int unaff_s0;
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  
  iVar1 = FUN_00010068();
  if ((((iVar1 == 4) && ((unaff_s4 & 2) != 0)) && (*(char *)(unaff_s3 + 0xa4) == '\n')) ||
     (((iVar1 = FUN_000100f8(), iVar1 == 3 && ((unaff_s4 & 1) != 0)) &&
      ((byte)(*(char *)(unaff_s3 + 0xa3) - 0xeU) < 2)))) {
    puVar2 = (undefined2 *)(unaff_s0 * 0x5c + 0x280080b4);
    uVar3 = 0xf;
    do {
      *puVar2 = CONCAT11(*(undefined *)(unaff_s2 + uVar3),((undefined *)(unaff_s2 + uVar3))[1]);
      uVar3 = uVar3 - 2 & 0xff;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0xff);
    FUN_000100ec(0x106);
  }
  return 0;
}



undefined4 _LVL15(void)

{
  int unaff_s0;
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  
  iVar2 = _LVL15();
  if ((iVar2 == 3) ||
     ((*(char *)(unaff_s3 + 0xa4) == '\x0e' && (iVar2 = FUN_00010058(), iVar2 == 4)))) {
    (*pcRam00000000)(unaff_s3 + 0x91,unaff_s2 + 1,0x10,pcRam00000000);
  }
  else {
    iVar2 = FUN_00010068();
    if (((iVar2 != 4) || ((unaff_s4 & 2) == 0)) || (*(char *)(unaff_s3 + 0xa4) != '\n')) {
      iVar2 = FUN_000100f8();
      if (iVar2 != 3) {
        return 0;
      }
      if ((unaff_s4 & 1) == 0) {
        return 0;
      }
      if (1 < (byte)(*(char *)(unaff_s3 + 0xa3) - 0xeU)) {
        return 0;
      }
    }
    puVar1 = (undefined2 *)(unaff_s0 * 0x5c + 0x280080b4);
    uVar3 = 0xf;
    do {
      *puVar1 = CONCAT11(*(undefined *)(unaff_s2 + uVar3),((undefined *)(unaff_s2 + uVar3))[1]);
      uVar3 = uVar3 - 2 & 0xff;
      puVar1 = puVar1 + 1;
    } while (uVar3 != 0xff);
  }
  FUN_000100ec(0x106);
  return 0;
}



undefined4 FUN_000100ec(void)

{
  FUN_000100ec();
  return 0;
}



undefined4 FUN_000100f8(void)

{
  int unaff_s0;
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  
  iVar2 = FUN_000100f8();
  if (((iVar2 == 3) && ((unaff_s4 & 1) != 0)) && ((byte)(*(char *)(unaff_s3 + 0xa3) - 0xeU) < 2)) {
    puVar1 = (undefined2 *)(unaff_s0 * 0x5c + 0x280080b4);
    uVar3 = 0xf;
    do {
      *puVar1 = CONCAT11(*(undefined *)(unaff_s2 + uVar3),((undefined *)(unaff_s2 + uVar3))[1]);
      uVar3 = uVar3 - 2 & 0xff;
      puVar1 = puVar1 + 1;
    } while (uVar3 != 0xff);
    FUN_000100ec(0x106);
  }
  return 0;
}



int llc_llcp_recv_ind_handler
              (ke_msg_id_t msgid,llc_llcp_recv_ind *ind,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



int llc_chmap_update_req_ind_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined2 in_register_00002032;
  uint uVar4;
  int iVar5;
  
  uVar4 = CONCAT22(in_register_00002032,dest_id);
  bVar2 = _L0(uVar4);
  if (((bVar2 & 0xf) != 0xf) && ((bVar2 & 4) == 0)) {
    if ((bVar2 & 1) != 0) {
      return 2;
    }
    uVar1 = uVar4 >> 8;
    iVar5 = *(int *)(uVar1 * 4);
    _L0(uVar1);
    iVar3 = (*pcRam00000000)(iVar5 + 99,5,pcRam00000000);
    if (iVar3 != 0) {
      FUN_000101c2(uVar4,bVar2 | 1);
      *(undefined *)(iVar5 + 0xa3) = 6;
      FUN_000101d2(uVar1);
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint unaff_s2;
  int iVar4;
  
  bVar2 = _L0();
  if (((bVar2 & 0xf) != 0xf) && ((bVar2 & 4) == 0)) {
    if ((bVar2 & 1) != 0) {
      return 2;
    }
    uVar1 = unaff_s2 >> 8;
    iVar4 = *(int *)(uVar1 * 4);
    _L0(uVar1);
    iVar3 = (*pcRam00000000)(iVar4 + 99,5,pcRam00000000);
    if (iVar3 != 0) {
      FUN_000101c2(bVar2 | 1);
      *(undefined *)(iVar4 + 0xa3) = 6;
      FUN_000101d2(uVar1);
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  byte unaff_s0;
  int iVar1;
  int unaff_s3;
  
  _L0();
  iVar1 = (*pcRam00000000)(unaff_s3 + 99,5,pcRam00000000);
  if (iVar1 != 0) {
    FUN_000101c2(unaff_s0 | 1);
    *(undefined *)(unaff_s3 + 0xa3) = 6;
    FUN_000101d2();
  }
  return 0;
}



undefined4 FUN_000101c2(void)

{
  int unaff_s3;
  
  FUN_000101c2();
  *(undefined *)(unaff_s3 + 0xa3) = 6;
  FUN_000101d2();
  return 0;
}



undefined4 FUN_000101d2(void)

{
  FUN_000101d2();
  return 0;
}



int llc_auth_payl_real_to_ind_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 in_register_00002032;
  uint uVar3;
  undefined2 in_register_00002036;
  int *piVar4;
  int iVar5;
  
  uVar3 = CONCAT22(in_register_00002032,dest_id);
  uVar1 = _L0(uVar3,CONCAT22(in_register_00002036,src_id));
  if ((uVar1 & 0xf) != 0xf) {
    piVar4 = (int *)((uVar3 >> 8) * 4);
    iVar5 = *piVar4;
    FUN_0001021e(0x103,uVar3,(uint)*(ushort *)(iVar5 + 0x58) - (uint)*(ushort *)(iVar5 + 0x5a));
    FUN_00010232(0x104,uVar3,*(undefined2 *)(*piVar4 + 0x58));
    puVar2 = (undefined2 *)FUN_00010248(0x803,uVar3 >> 8,0x57,2);
    *puVar2 = (short)(uVar3 >> 8);
    _L0();
  }
  return 0;
}



undefined4 _L0(void)

{
  uint unaff_s1;
  uint uVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = _L0();
  if ((uVar1 & 0xf) != 0xf) {
    piVar3 = (int *)((unaff_s1 >> 8) * 4);
    iVar4 = *piVar3;
    FUN_0001021e(0x103,(uint)*(ushort *)(iVar4 + 0x58) - (uint)*(ushort *)(iVar4 + 0x5a));
    FUN_00010232(0x104,*(undefined2 *)(*piVar3 + 0x58));
    puVar2 = (undefined2 *)FUN_00010248(0x803,unaff_s1 >> 8,0x57,2);
    *puVar2 = (short)(unaff_s1 >> 8);
    _L0();
  }
  return 0;
}



undefined4 FUN_0001021e(void)

{
  int *unaff_s0;
  undefined2 *puVar1;
  undefined2 unaff_s2;
  
  FUN_0001021e();
  FUN_00010232(0x104,*(undefined2 *)(*unaff_s0 + 0x58));
  puVar1 = (undefined2 *)FUN_00010248(0x803,0x57,2);
  *puVar1 = unaff_s2;
  _L0();
  return 0;
}



undefined4 FUN_00010232(void)

{
  undefined2 *puVar1;
  undefined2 unaff_s2;
  
  FUN_00010232();
  puVar1 = (undefined2 *)FUN_00010248(0x803,0x57,2);
  *puVar1 = unaff_s2;
  _L0();
  return 0;
}



undefined4 FUN_00010248(void)

{
  undefined2 *puVar1;
  undefined2 unaff_s2;
  
  puVar1 = (undefined2 *)FUN_00010248();
  *puVar1 = unaff_s2;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Variable defined which should be unmapped: con_upd_pdu

int llc_con_upd_req_ind_handler
              (ke_msg_id_t msgid,llc_con_upd_req_ind *param,ke_task_id_t dest_id,ke_task_id_t src_id
              )

{
  uint uVar1;
  int iVar2;
  undefined2 in_register_00002032;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  llcp_con_upd_ind con_upd_pdu;
  
  uVar1 = _L0(CONCAT22(in_register_00002032,dest_id));
  if ((uVar1 & 0xf) == 0xf) {
    iVar2 = 0;
  }
  else {
    uVar3 = CONCAT22(in_register_00002032,dest_id) >> 8;
    if (((((uVar1 & 1) == 0) || (iVar2 = 2, **(int **)(uVar3 * 4) != 0)) &&
        (((uVar1 & 2) == 0 || (iVar2 = 2, *(char *)(*(int *)(uVar3 * 4) + 0xa4) != '\x04')))) &&
       (iVar2 = 2, (uVar1 & 4) == 0)) {
      iVar2 = 0;
      if (param->operation < 5) {
        UNRECOVERED_JUMPTABLE = *(code **)((uint)param->operation * 4);
                    // WARNING: Could not emulate address calculation at 0x00010324
                    // WARNING: Treating indirect jump as call
        iVar2 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
        return iVar2;
      }
    }
  }
  return iVar2;
}



undefined4 _L0(void)

{
  byte *unaff_s0;
  uint uVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint unaff_s5;
  
  uVar1 = _L0();
  if ((uVar1 & 0xf) == 0xf) {
    uVar2 = 0;
  }
  else {
    if (((((uVar1 & 1) == 0) || (uVar2 = 2, **(int **)((unaff_s5 >> 8) * 4) != 0)) &&
        (((uVar1 & 2) == 0 || (uVar2 = 2, *(char *)(*(int *)((unaff_s5 >> 8) * 4) + 0xa4) != '\x04')
         ))) && (uVar2 = 2, (uVar1 & 4) == 0)) {
      uVar2 = 0;
      if (*unaff_s0 < 5) {
        UNRECOVERED_JUMPTABLE = *(code **)((uint)*unaff_s0 * 4);
                    // WARNING: Could not emulate address calculation at 0x00010324
                    // WARNING: Treating indirect jump as call
        uVar2 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
        return uVar2;
      }
    }
  }
  return uVar2;
}



undefined4 FUN_00010360(void)

{
  undefined4 unaff_s0;
  byte unaff_s1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  
  FUN_00010360();
  FUN_0001036c();
  FUN_0001037e(unaff_s1 | 1);
  *(undefined *)(unaff_s4 + 0xa3) = 7;
  FUN_00010398(0x102,4000);
  **(undefined4 **)(unaff_s2 + unaff_s6) = unaff_s0;
  return 1;
}



undefined4 FUN_0001036c(void)

{
  undefined4 unaff_s0;
  byte unaff_s1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  
  FUN_0001036c();
  FUN_0001037e(unaff_s1 | 1);
  *(undefined *)(unaff_s4 + 0xa3) = 7;
  FUN_00010398(0x102,4000);
  **(undefined4 **)(unaff_s2 + unaff_s6) = unaff_s0;
  return 1;
}



undefined4 FUN_0001037e(void)

{
  undefined4 unaff_s0;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  
  FUN_0001037e();
  *(undefined *)(unaff_s4 + 0xa3) = 7;
  FUN_00010398(0x102,4000);
  **(undefined4 **)(unaff_s2 + unaff_s6) = unaff_s0;
  return 1;
}



undefined4 FUN_00010398(void)

{
  undefined4 unaff_s0;
  int unaff_s2;
  int unaff_s6;
  
  FUN_00010398();
  **(undefined4 **)(unaff_s2 + unaff_s6) = unaff_s0;
  return 1;
}



undefined4 FUN_000103b4(void)

{
  char *unaff_s0;
  byte unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000a;
  
  iVar1 = FUN_000103b4();
  if (iVar1 == 0) {
    if (*unaff_s0 != '\x01') {
      *(ushort *)(unaff_s4 + 0x5c) = *(ushort *)(unaff_s4 + 0x5c) | 0x40;
      FUN_00010360(*(undefined4 *)(unaff_s4 + 0x10));
    }
    FUN_0001036c();
    FUN_0001037e(unaff_s1 | 1);
    *(undefined *)(unaff_s4 + 0xa3) = 7;
    FUN_00010398(0x102,4000);
  }
  else {
    *(undefined2 *)(unaff_s0 + 0xe) = *(undefined2 *)(unaff_s0 + 2);
    *(undefined2 *)(unaff_s0 + 0x10) = *(undefined2 *)(unaff_s0 + 4);
    iVar1 = _L0();
    if (iVar1 != 3) {
      return 0;
    }
    FUN_000103e6(*(undefined4 *)(unaff_s4 + 0x10),&stack0x00000004);
    *(undefined2 *)(unaff_s4 + 0x56) = *(undefined2 *)(unaff_s0 + 8);
    _L0(&stack0x00000004);
    *(undefined2 *)(unaff_s0 + 0xe) = in_stack_00000008;
    *(undefined2 *)(unaff_s0 + 6) = in_stack_0000000a;
    _L0(unaff_s1 | 1);
    *(undefined *)(unaff_s4 + 0xa3) = 9;
  }
  **(char ***)(unaff_s2 + unaff_s6) = unaff_s0;
  return 1;
}



bool _L0(void)

{
  int unaff_s0;
  byte unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000a;
  
  iVar1 = _L0();
  if (iVar1 == 3) {
    FUN_000103e6(*(undefined4 *)(unaff_s4 + 0x10),&stack0x00000004);
    *(undefined2 *)(unaff_s4 + 0x56) = *(undefined2 *)(unaff_s0 + 8);
    _L0(&stack0x00000004);
    *(undefined2 *)(unaff_s0 + 0xe) = in_stack_00000008;
    *(undefined2 *)(unaff_s0 + 6) = in_stack_0000000a;
    _L0(unaff_s1 | 1);
    *(undefined *)(unaff_s4 + 0xa3) = 9;
    **(int **)(unaff_s2 + unaff_s6) = unaff_s0;
  }
  return iVar1 == 3;
}



undefined4 FUN_000103e6(void)

{
  int unaff_s0;
  byte unaff_s1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000a;
  
  FUN_000103e6();
  *(undefined2 *)(unaff_s4 + 0x56) = *(undefined2 *)(unaff_s0 + 8);
  _L0(&stack0x00000004);
  *(undefined2 *)(unaff_s0 + 0xe) = in_stack_00000008;
  *(undefined2 *)(unaff_s0 + 6) = in_stack_0000000a;
  _L0(unaff_s1 | 1);
  *(undefined *)(unaff_s4 + 0xa3) = 9;
  **(int **)(unaff_s2 + unaff_s6) = unaff_s0;
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  byte unaff_s1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000a;
  
  _L0();
  *(undefined2 *)(unaff_s0 + 0xe) = in_stack_00000008;
  *(undefined2 *)(unaff_s0 + 6) = in_stack_0000000a;
  _L0(unaff_s1 | 1);
  *(undefined *)(unaff_s4 + 0xa3) = 9;
  **(int **)(unaff_s2 + unaff_s6) = unaff_s0;
  return 1;
}



undefined4 _L0(void)

{
  undefined4 unaff_s0;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  
  _L0();
  *(undefined *)(unaff_s4 + 0xa3) = 9;
  **(undefined4 **)(unaff_s2 + unaff_s6) = unaff_s0;
  return 1;
}



undefined4 FUN_0001043a(void)

{
  int unaff_s0;
  byte unaff_s1;
  undefined *puVar1;
  int unaff_s2;
  undefined2 unaff_s3;
  int unaff_s4;
  int unaff_s6;
  
  puVar1 = (undefined *)FUN_0001043a();
  *puVar1 = 6;
  *(undefined2 *)(puVar1 + 2) = unaff_s3;
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(unaff_s0 + 0xe);
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(unaff_s0 + 0x10);
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(unaff_s0 + 6);
  *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(unaff_s0 + 8);
  _L0();
  *(int *)(*(int *)(unaff_s2 + unaff_s6) + 4) = unaff_s0;
  *(undefined *)(unaff_s4 + 0xa4) = 2;
  FUN_0001048c(unaff_s1 | 2);
  return 1;
}



undefined4 _L0(void)

{
  undefined4 unaff_s0;
  byte unaff_s1;
  int *unaff_s2;
  int unaff_s4;
  
  _L0();
  *(undefined4 *)(*unaff_s2 + 4) = unaff_s0;
  *(undefined *)(unaff_s4 + 0xa4) = 2;
  FUN_0001048c(unaff_s1 | 2);
  return 1;
}



undefined4 FUN_0001048c(void)

{
  FUN_0001048c();
  return 1;
}



bool FUN_0001049a(void)

{
  int unaff_s0;
  byte unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000a;
  
  iVar1 = FUN_0001049a();
  if (iVar1 == 3) {
    FUN_000104b4(*(undefined4 *)(unaff_s4 + 0x10),&stack0x00000004,1);
    *(undefined2 *)(unaff_s4 + 0x56) = *(undefined2 *)(unaff_s0 + 8);
    _L0(&stack0x00000004);
    *(undefined2 *)(unaff_s0 + 0xe) = in_stack_00000008;
    *(undefined2 *)(unaff_s0 + 6) = in_stack_0000000a;
    _L0(unaff_s1 | 1);
    *(undefined *)(unaff_s4 + 0xa3) = 9;
    **(int **)(unaff_s2 + unaff_s6) = unaff_s0;
  }
  return iVar1 == 3;
}



undefined4 FUN_000104b4(void)

{
  int unaff_s0;
  byte unaff_s1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000a;
  
  FUN_000104b4();
  *(undefined2 *)(unaff_s4 + 0x56) = *(undefined2 *)(unaff_s0 + 8);
  _L0(&stack0x00000004);
  *(undefined2 *)(unaff_s0 + 0xe) = in_stack_00000008;
  *(undefined2 *)(unaff_s0 + 6) = in_stack_0000000a;
  _L0(unaff_s1 | 1);
  *(undefined *)(unaff_s4 + 0xa3) = 9;
  **(int **)(unaff_s2 + unaff_s6) = unaff_s0;
  return 1;
}



int llc_length_req_ind_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  byte bVar2;
  undefined2 in_register_00002032;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = CONCAT22(in_register_00002032,dest_id);
  bVar2 = _L0(uVar3);
  if ((bVar2 & 0xf) != 0xf) {
    if ((bVar2 & 5) != 0) {
      return 2;
    }
    uVar5 = uVar3 >> 8;
    iVar1 = *(int *)(uVar5 * 4);
    iVar4 = *(int *)(iVar1 + 0xc);
    if (iVar4 != 0) {
      *(undefined2 *)(iVar1 + 0x42) = *(undefined2 *)(iVar4 + 2);
      *(undefined2 *)(iVar1 + 0x4a) = *(undefined2 *)(iVar4 + 4);
    }
    FUN_0001053c(uVar5,3);
    if ((*(byte *)(iVar1 + 0x53) & 1) == 0) {
      FUN_00010556(uVar3,bVar2 | 1);
      *(undefined *)(iVar1 + 0xa3) = 4;
      _L0(uVar5);
      FUN_0001057a(0x102,uVar3,4000);
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint unaff_s2;
  uint uVar4;
  
  bVar2 = _L0();
  if ((bVar2 & 0xf) != 0xf) {
    if ((bVar2 & 5) != 0) {
      return 2;
    }
    uVar4 = unaff_s2 >> 8;
    iVar1 = *(int *)(uVar4 * 4);
    iVar3 = *(int *)(iVar1 + 0xc);
    if (iVar3 != 0) {
      *(undefined2 *)(iVar1 + 0x42) = *(undefined2 *)(iVar3 + 2);
      *(undefined2 *)(iVar1 + 0x4a) = *(undefined2 *)(iVar3 + 4);
    }
    FUN_0001053c(uVar4,3);
    if ((*(byte *)(iVar1 + 0x53) & 1) == 0) {
      FUN_00010556(bVar2 | 1);
      *(undefined *)(iVar1 + 0xa3) = 4;
      _L0(uVar4);
      FUN_0001057a(0x102,4000);
    }
  }
  return 0;
}



undefined4 FUN_0001053c(void)

{
  int unaff_s0;
  byte unaff_s1;
  
  FUN_0001053c();
  if ((*(byte *)(unaff_s0 + 0x53) & 1) == 0) {
    FUN_00010556(unaff_s1 | 1);
    *(undefined *)(unaff_s0 + 0xa3) = 4;
    _L0();
    FUN_0001057a(0x102,4000);
  }
  return 0;
}



undefined4 FUN_00010556(void)

{
  int unaff_s0;
  
  FUN_00010556();
  *(undefined *)(unaff_s0 + 0xa3) = 4;
  _L0();
  FUN_0001057a(0x102,4000);
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_0001057a(0x102,4000);
  return 0;
}



undefined4 FUN_0001057a(void)

{
  FUN_0001057a();
  return 0;
}



void llc_task_random_gen_request(ke_task_id_t dest_id)

{
  int iVar1;
  undefined2 in_register_0000202a;
  int iVar2;
  int iVar3;
  undefined4 uStack36;
  uint32_t randn;
  
  iVar2 = _L0(4,0,CONCAT22(in_register_0000202a,dest_id),0x20);
  uStack36 = 0;
  iVar1 = iVar2;
  do {
    uStack36 = _L0();
    (*pcRam00000000)(iVar1,&uStack36,4,pcRam00000000);
    uStack36 = _L0();
    iVar3 = iVar1 + 0x10;
    iVar1 = iVar1 + 4;
    (*pcRam00000000)(iVar3,&uStack36,4,pcRam00000000);
  } while (iVar1 != iVar2 + 0x10);
  FUN_000105e6(iVar2);
  return;
}



void _L0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack0000000c;
  
  iVar2 = _L0();
  uStack0000000c = 0;
  iVar1 = iVar2;
  do {
    uStack0000000c = _L0();
    (*pcRam00000000)(iVar1,&stack0x0000000c,4,pcRam00000000);
    uStack0000000c = _L0();
    iVar3 = iVar1 + 0x10;
    iVar1 = iVar1 + 4;
    (*pcRam00000000)(iVar3,&stack0x0000000c,4,pcRam00000000);
  } while (iVar1 != iVar2 + 0x10);
  FUN_000105e6(iVar2);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  code **unaff_s2;
  int unaff_s3;
  undefined4 in_stack_0000000c;
  
  do {
    in_stack_0000000c = _L0();
    (**unaff_s2)(unaff_s0,&stack0x0000000c,4,*unaff_s2);
    in_stack_0000000c = _L0();
    iVar1 = unaff_s0 + 0x10;
    unaff_s0 = unaff_s0 + 4;
    (**unaff_s2)(iVar1,&stack0x0000000c,4,*unaff_s2);
  } while (unaff_s0 != unaff_s3);
  FUN_000105e6();
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  code **unaff_s2;
  int unaff_s3;
  undefined4 in_stack_0000000c;
  
  while( true ) {
    in_stack_0000000c = _L0();
    iVar1 = unaff_s0 + 0x10;
    unaff_s0 = unaff_s0 + 4;
    (**unaff_s2)(iVar1,&stack0x0000000c,4,*unaff_s2);
    if (unaff_s0 == unaff_s3) break;
    in_stack_0000000c = _L0();
    (**unaff_s2)(unaff_s0,&stack0x0000000c,4,*unaff_s2);
  }
  FUN_000105e6();
  return;
}



void FUN_000105e6(void)

{
  FUN_000105e6();
  return;
}



int llc_enc_mgt_ind_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined2 in_register_00002032;
  undefined2 in_register_00002036;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar7;
  
  uVar6 = CONCAT22(in_register_00002032,dest_id);
  bVar4 = _L0(uVar6,CONCAT22(in_register_00002036,src_id));
  if ((bVar4 & 0xf) == 0xf) {
    return 0;
  }
  uVar2 = uVar6 >> 8;
  iVar5 = _LVL118(uVar2);
  if (iVar5 == 3) {
    if ((bVar4 & 1) == 0) {
      return 0;
    }
    uVar6 = *(byte *)(*(int *)(uVar2 * 4) + 0xa3) - 10 & 0xff;
    if (9 < uVar6) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(uVar6 * 4);
                    // WARNING: Could not emulate address calculation at 0x0001066c
                    // WARNING: Treating indirect jump as call
    iVar5 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return iVar5;
  }
  if ((bVar4 & 2) == 0) {
    return 0;
  }
  piVar7 = (int *)(uVar2 * 4);
  iVar5 = *piVar7;
  bVar1 = *(byte *)(iVar5 + 0xa4);
  if (bVar1 == 8) {
    iVar5 = FUN_0001083c(4);
    if (iVar5 != 0) {
      FUN_00010848(uVar6);
      *(undefined *)(*piVar7 + 0xa4) = 0xe;
      return 0;
    }
    if ((*(byte *)(*piVar7 + 0xa5) & 0x10) == 0) {
      if ((bVar4 & 1) != 0) {
        FUN_00010888(0x102,uVar6,4000);
      }
      _L0(uVar2,3,6);
      FUN_000108a8(uVar6,(int)(char)bVar4 & 0xfd);
      FUN_000108b6(uVar6,(int)(char)bVar4 & 0xf9);
      *(undefined *)(*piVar7 + 0xa4) = 0;
    }
    else {
      FUN_0001086c(uVar2,6);
    }
_L0:
    FUN_000106ea(uVar2,2);
  }
  else {
    if (bVar1 < 9) {
      if (bVar1 != 5) {
        return 0;
      }
      *(byte *)(iVar5 + 0xa5) = *(byte *)(iVar5 + 0xa5) | 0x30;
      *(undefined *)(iVar5 + 0xa4) = 6;
      FUN_000107b2(uVar2);
    }
    else {
      if (bVar1 != 10) {
        if (bVar1 != 0xe) {
          return 0;
        }
        iVar3 = *(int *)(iVar5 + 8);
        *(undefined *)(iVar5 + 0xa4) = 9;
        (*pcRam00000000)(iVar5 + 0x71,iVar3 + 0xd,8,pcRam00000000);
        *(undefined2 *)(uVar2 * 0x5c + 0x280080c4) = *(undefined2 *)(iVar3 + 0x15);
        *(undefined2 *)(uVar2 * 0x5c + 0x280080c6) = *(undefined2 *)(iVar3 + 0x17);
        _L0(uVar2,iVar3 + 2);
        FUN_00010830(uVar2,iVar3 + 2);
        goto _L0;
      }
      FUN_000108cc(uVar2);
      *(undefined *)(*piVar7 + 0xa4) = 0xb;
    }
    FUN_00010764(0x102,uVar6,4000);
  }
  return 0;
}



undefined4 _L0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  uint unaff_s2;
  int *piVar7;
  
  bVar4 = _L0();
  if ((bVar4 & 0xf) == 0xf) {
    return 0;
  }
  uVar2 = unaff_s2 >> 8;
  iVar5 = _LVL118(uVar2);
  if (iVar5 == 3) {
    if ((bVar4 & 1) == 0) {
      return 0;
    }
    uVar2 = *(byte *)(*(int *)(uVar2 * 4) + 0xa3) - 10 & 0xff;
    if (9 < uVar2) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4);
                    // WARNING: Could not emulate address calculation at 0x0001066c
                    // WARNING: Treating indirect jump as call
    uVar6 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return uVar6;
  }
  if ((bVar4 & 2) == 0) {
    return 0;
  }
  piVar7 = (int *)(uVar2 * 4);
  iVar5 = *piVar7;
  bVar1 = *(byte *)(iVar5 + 0xa4);
  if (bVar1 == 8) {
    iVar5 = FUN_0001083c(4);
    if (iVar5 != 0) {
      FUN_00010848();
      *(undefined *)(*piVar7 + 0xa4) = 0xe;
      return 0;
    }
    if ((*(byte *)(*piVar7 + 0xa5) & 0x10) == 0) {
      if ((bVar4 & 1) != 0) {
        FUN_00010888(0x102,4000);
      }
      _L0(uVar2,3,6);
      FUN_000108a8((int)(char)bVar4 & 0xfd);
      FUN_000108b6((int)(char)bVar4 & 0xf9);
      *(undefined *)(*piVar7 + 0xa4) = 0;
    }
    else {
      FUN_0001086c(uVar2,6);
    }
_L0:
    FUN_000106ea(uVar2,2);
  }
  else {
    if (bVar1 < 9) {
      if (bVar1 != 5) {
        return 0;
      }
      *(byte *)(iVar5 + 0xa5) = *(byte *)(iVar5 + 0xa5) | 0x30;
      *(undefined *)(iVar5 + 0xa4) = 6;
      FUN_000107b2(uVar2);
    }
    else {
      if (bVar1 != 10) {
        if (bVar1 != 0xe) {
          return 0;
        }
        iVar3 = *(int *)(iVar5 + 8);
        *(undefined *)(iVar5 + 0xa4) = 9;
        (*pcRam00000000)(iVar5 + 0x71,iVar3 + 0xd,8,pcRam00000000);
        *(undefined2 *)(uVar2 * 0x5c + 0x280080c4) = *(undefined2 *)(iVar3 + 0x15);
        *(undefined2 *)(uVar2 * 0x5c + 0x280080c6) = *(undefined2 *)(iVar3 + 0x17);
        _L0(uVar2,iVar3 + 2);
        FUN_00010830(uVar2,iVar3 + 2);
        goto _L0;
      }
      FUN_000108cc(uVar2);
      *(undefined *)(*piVar7 + 0xa4) = 0xb;
    }
    FUN_00010764(0x102,4000);
  }
  return 0;
}



undefined4 _LVL118(void)

{
  byte bVar1;
  int unaff_s0;
  byte unaff_s1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar6;
  
  iVar3 = _LVL118();
  if (iVar3 == 3) {
    if ((unaff_s1 & 1) == 0) {
      return 0;
    }
    uVar5 = *(byte *)(*(int *)(unaff_s0 * 4) + 0xa3) - 10 & 0xff;
    if (9 < uVar5) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(uVar5 * 4);
                    // WARNING: Could not emulate address calculation at 0x0001066c
                    // WARNING: Treating indirect jump as call
    uVar4 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return uVar4;
  }
  if ((unaff_s1 & 2) == 0) {
    return 0;
  }
  piVar6 = (int *)(unaff_s0 * 4);
  iVar3 = *piVar6;
  bVar1 = *(byte *)(iVar3 + 0xa4);
  if (bVar1 == 8) {
    iVar3 = FUN_0001083c(4);
    if (iVar3 != 0) {
      FUN_00010848();
      *(undefined *)(*piVar6 + 0xa4) = 0xe;
      return 0;
    }
    if ((*(byte *)(*piVar6 + 0xa5) & 0x10) == 0) {
      if ((unaff_s1 & 1) != 0) {
        FUN_00010888(0x102,4000);
      }
      _L0(3,6);
      FUN_000108a8((int)(char)unaff_s1 & 0xfd);
      FUN_000108b6((int)(char)unaff_s1 & 0xf9);
      *(undefined *)(*piVar6 + 0xa4) = 0;
    }
    else {
      FUN_0001086c(6);
    }
_L0:
    FUN_000106ea(2);
  }
  else {
    if (bVar1 < 9) {
      if (bVar1 != 5) {
        return 0;
      }
      *(byte *)(iVar3 + 0xa5) = *(byte *)(iVar3 + 0xa5) | 0x30;
      *(undefined *)(iVar3 + 0xa4) = 6;
      FUN_000107b2();
    }
    else {
      if (bVar1 != 10) {
        if (bVar1 != 0xe) {
          return 0;
        }
        iVar2 = *(int *)(iVar3 + 8);
        *(undefined *)(iVar3 + 0xa4) = 9;
        (*pcRam00000000)(iVar3 + 0x71,iVar2 + 0xd,8,pcRam00000000);
        *(undefined2 *)(unaff_s0 * 0x5c + 0x280080c4) = *(undefined2 *)(iVar2 + 0x15);
        *(undefined2 *)(unaff_s0 * 0x5c + 0x280080c6) = *(undefined2 *)(iVar2 + 0x17);
        _L0(iVar2 + 2);
        FUN_00010830(iVar2 + 2);
        goto _L0;
      }
      FUN_000108cc();
      *(undefined *)(*piVar6 + 0xa4) = 0xb;
    }
    FUN_00010764(0x102,4000);
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_000106b0(void)

{
  int unaff_s1;
  int unaff_s3;
  
  FUN_000106b0();
  *(undefined *)(*(int *)(unaff_s1 + unaff_s3) + 0xa3) = 0x13;
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000106ea(2);
  return 0;
}



undefined4 FUN_000106ea(void)

{
  FUN_000106ea();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010764(0x102,4000);
  return 0;
}



undefined4 FUN_00010764(void)

{
  FUN_00010764();
  return 0;
}



undefined4 FUN_000107b2(void)

{
  FUN_000107b2();
  FUN_00010764(0x102,4000);
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010830();
  FUN_000106ea(2);
  return 0;
}



undefined4 FUN_00010830(void)

{
  FUN_00010830();
  FUN_000106ea(2);
  return 0;
}



undefined4 FUN_0001083c(void)

{
  byte unaff_s1;
  int iVar1;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  iVar1 = FUN_0001083c();
  if (iVar1 == 0) {
    if ((*(byte *)(*unaff_s3 + 0xa5) & 0x10) == 0) {
      if ((unaff_s1 & 1) != 0) {
        FUN_00010888(0x102,4000);
      }
      _L0(3,6);
      FUN_000108a8((int)(char)unaff_s1 & 0xfd);
      FUN_000108b6((int)(char)unaff_s1 & 0xf9);
      *(undefined *)(*(int *)(unaff_s5 + unaff_s4) + 0xa4) = 0;
    }
    else {
      FUN_0001086c(6);
    }
    FUN_000106ea(2);
  }
  else {
    FUN_00010848();
    *(undefined *)(*unaff_s3 + 0xa4) = 0xe;
  }
  return 0;
}



undefined4 FUN_00010848(void)

{
  int *unaff_s3;
  
  FUN_00010848();
  *(undefined *)(*unaff_s3 + 0xa4) = 0xe;
  return 0;
}



undefined4 FUN_0001086c(void)

{
  FUN_0001086c();
  FUN_000106ea(2);
  return 0;
}



undefined4 FUN_00010888(void)

{
  char unaff_s1;
  int unaff_s4;
  int unaff_s5;
  
  FUN_00010888();
  _L0(3,6);
  FUN_000108a8((int)unaff_s1 & 0xfd);
  FUN_000108b6((int)unaff_s1 & 0xf9);
  *(undefined *)(*(int *)(unaff_s5 + unaff_s4) + 0xa4) = 0;
  FUN_000106ea(2);
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s1;
  int unaff_s4;
  int unaff_s5;
  
  _L0();
  FUN_000108a8(unaff_s1 >> 0x18 & 0xfd);
  FUN_000108b6(unaff_s1 >> 0x18 & 0xf9);
  *(undefined *)(*(int *)(unaff_s5 + unaff_s4) + 0xa4) = 0;
  FUN_000106ea(2);
  return 0;
}



undefined4 FUN_000108a8(void)

{
  uint unaff_s1;
  int unaff_s4;
  int unaff_s5;
  
  FUN_000108a8();
  FUN_000108b6(unaff_s1 & 0xf9);
  *(undefined *)(*(int *)(unaff_s5 + unaff_s4) + 0xa4) = 0;
  FUN_000106ea(2);
  return 0;
}



undefined4 FUN_000108b6(void)

{
  int unaff_s4;
  int unaff_s5;
  
  FUN_000108b6();
  *(undefined *)(*(int *)(unaff_s5 + unaff_s4) + 0xa4) = 0;
  FUN_000106ea(2);
  return 0;
}



undefined4 FUN_000108cc(void)

{
  int *unaff_s3;
  
  FUN_000108cc();
  *(undefined *)(*unaff_s3 + 0xa4) = 0xb;
  FUN_00010764(0x102,4000);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int llc_chnl_assess_timer_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  undefined2 in_register_00002032;
  uint uVar2;
  undefined2 in_register_00002036;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined auStack48 [4];
  le_chnl_map new_map;
  le_chnl_map host_map;
  
  uVar2 = CONCAT22(in_register_00002032,dest_id);
  uVar5 = uVar2 >> 8;
  iVar4 = *(int *)(uVar5 * 4);
  uVar1 = _L0(uVar2,CONCAT22(in_register_00002036,src_id));
  if ((uVar1 & 0xf) != 0xf) {
    if (*(char *)(iVar4 + 0xa3) != '\x06') {
      FUN_00010974(new_map.map + 4);
      uVar1 = FUN_00010982(uVar5,auStack48,new_map.map + 4);
      cVar3 = *(char *)(iVar4 + 0x3a) + -1;
      *(char *)(iVar4 + 0x3a) = cVar3;
      if ((cVar3 == '\0') || (uVar1 < 2)) {
        _LVL172(uVar5,auStack48,new_map.map + 4,uVar1);
      }
      (*pcRam00000000)(iVar4 + 99,auStack48,5,pcRam00000000);
      FUN_000109ca(0x108,uVar2,uVar2);
    }
    FUN_0001095a(0x105,uVar2,_DAT_0000002c);
  }
  return 0;
}



undefined4 _L0(undefined2 uRam0000002c)

{
  uint uVar1;
  char cVar2;
  int unaff_s2;
  
  uVar1 = _L0();
  if ((uVar1 & 0xf) != 0xf) {
    if (*(char *)(unaff_s2 + 0xa3) != '\x06') {
      FUN_00010974(&stack0x00000008);
      uVar1 = FUN_00010982(&stack0x00000008);
      cVar2 = *(char *)(unaff_s2 + 0x3a) + -1;
      *(char *)(unaff_s2 + 0x3a) = cVar2;
      if ((cVar2 == '\0') || (uVar1 < 2)) {
        _LVL172(&stack0x00000008,uVar1);
      }
      (*pcRam00000000)(unaff_s2 + 99,5,pcRam00000000);
      FUN_000109ca(0x108);
    }
    FUN_0001095a(0x105,uRam0000002c);
  }
  return 0;
}



undefined4 FUN_0001095a(void)

{
  FUN_0001095a();
  return 0;
}



undefined4 FUN_00010974(void)

{
  int unaff_s1;
  uint uVar1;
  char cVar2;
  int unaff_s2;
  
  FUN_00010974();
  uVar1 = FUN_00010982(&stack0x00000008);
  cVar2 = *(char *)(unaff_s2 + 0x3a) + -1;
  *(char *)(unaff_s2 + 0x3a) = cVar2;
  if ((cVar2 == '\0') || (uVar1 < 2)) {
    _LVL172(&stack0x00000008,uVar1);
  }
  (*pcRam00000000)(unaff_s2 + 99,5,pcRam00000000);
  FUN_000109ca(0x108);
  FUN_0001095a(0x105,*(undefined2 *)(unaff_s1 + 0x2c));
  return 0;
}



undefined4 FUN_00010982(void)

{
  int unaff_s1;
  uint uVar1;
  char cVar2;
  int unaff_s2;
  
  uVar1 = FUN_00010982();
  cVar2 = *(char *)(unaff_s2 + 0x3a) + -1;
  *(char *)(unaff_s2 + 0x3a) = cVar2;
  if ((cVar2 == '\0') || (uVar1 < 2)) {
    _LVL172(&stack0x00000008,uVar1);
  }
  (*pcRam00000000)(unaff_s2 + 99,5,pcRam00000000);
  FUN_000109ca(0x108);
  FUN_0001095a(0x105,*(undefined2 *)(unaff_s1 + 0x2c));
  return 0;
}



undefined4 _LVL172(void)

{
  int unaff_s1;
  int unaff_s2;
  
  _LVL172();
  (*pcRam00000000)(unaff_s2 + 99,5,pcRam00000000);
  FUN_000109ca(0x108);
  FUN_0001095a(0x105,*(undefined2 *)(unaff_s1 + 0x2c));
  return 0;
}



undefined4 FUN_000109ca(void)

{
  int unaff_s1;
  
  FUN_000109ca();
  FUN_0001095a(0x105,*(undefined2 *)(unaff_s1 + 0x2c));
  return 0;
}



int llc_llcp_rsp_to_ind_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined2 in_register_00002032;
  
  _L0(CONCAT22(in_register_00002032,dest_id) >> 8,0x22);
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



int llc_link_sup_to_ind_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  undefined2 in_register_00002032;
  uint uVar2;
  int iVar3;
  
  uVar2 = CONCAT22(in_register_00002032,dest_id);
  uVar1 = FUN_000109f8(uVar2);
  if ((uVar1 & 0x7f) != 0x7f) {
    iVar3 = *(int *)((uVar2 >> 8) * 4);
    if ((*(byte *)(*(int *)(iVar3 + 0x10) + 0x7e) & 2) == 0) {
      FUN_00010a4e(8);
    }
    else {
      FUN_00010a3c(0x101,uVar2 & 0xffffff00 | 1,*(undefined2 *)(iVar3 + 0x54));
    }
  }
  return 0;
}



undefined4 FUN_000109f8(void)

{
  uint uVar1;
  int iVar2;
  uint in_stack_0000000c;
  
  uVar1 = FUN_000109f8();
  if ((uVar1 & 0x7f) != 0x7f) {
    iVar2 = *(int *)((in_stack_0000000c >> 8) * 4);
    if ((*(byte *)(*(int *)(iVar2 + 0x10) + 0x7e) & 2) == 0) {
      FUN_00010a4e(8);
    }
    else {
      FUN_00010a3c(0x101,in_stack_0000000c & 0xffffff00 | 1,*(undefined2 *)(iVar2 + 0x54));
    }
  }
  return 0;
}



undefined4 FUN_00010a3c(void)

{
  FUN_00010a3c();
  return 0;
}



undefined4 FUN_00010a4e(void)

{
  FUN_00010a4e();
  return 0;
}



int llc_auth_payl_nearly_to_ind_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  byte bVar1;
  int iVar2;
  undefined2 in_register_00002032;
  uint uVar3;
  uint uVar4;
  
  uVar3 = CONCAT22(in_register_00002032,dest_id);
  bVar1 = _L0(uVar3);
  if ((bVar1 & 0xf) != 0xf) {
    uVar4 = uVar3 >> 8;
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 4) != 0) {
        return 2;
      }
      iVar2 = FUN_00010abe(0x102,uVar3);
      if (iVar2 == 0) {
        FUN_00010ad2(uVar3,bVar1 | 1);
        *(undefined *)(*(int *)(uVar4 * 4) + 0xa3) = 5;
        _L0(uVar4);
        FUN_00010b06(0x102,uVar3,4000);
      }
    }
    else {
      if (*(char *)(*(int *)(uVar4 * 4) + 0xa3) != '\x05') {
        return 2;
      }
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  uint unaff_s1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = _L0();
  if ((bVar1 & 0xf) != 0xf) {
    uVar3 = unaff_s1 >> 8;
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 4) != 0) {
        return 2;
      }
      iVar2 = FUN_00010abe(0x102);
      if (iVar2 == 0) {
        FUN_00010ad2(bVar1 | 1);
        *(undefined *)(*(int *)(uVar3 * 4) + 0xa3) = 5;
        _L0(uVar3);
        FUN_00010b06(0x102,4000);
      }
    }
    else {
      if (*(char *)(*(int *)(uVar3 * 4) + 0xa3) != '\x05') {
        return 2;
      }
    }
  }
  return 0;
}



undefined4 FUN_00010abe(void)

{
  byte unaff_s0;
  int iVar1;
  int unaff_s2;
  
  iVar1 = FUN_00010abe();
  if (iVar1 == 0) {
    FUN_00010ad2(unaff_s0 | 1);
    *(undefined *)(*(int *)(unaff_s2 * 4) + 0xa3) = 5;
    _L0();
    FUN_00010b06(0x102,4000);
  }
  return 0;
}



undefined4 FUN_00010ad2(void)

{
  int unaff_s2;
  
  FUN_00010ad2();
  *(undefined *)(*(int *)(unaff_s2 * 4) + 0xa3) = 5;
  _L0();
  FUN_00010b06(0x102,4000);
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010b06(0x102,4000);
  return 0;
}



undefined4 FUN_00010b06(void)

{
  FUN_00010b06();
  return 0;
}



int llc_data_ind_handler
              (ke_msg_id_t msgid,llc_data_ind *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  undefined2 in_register_00002032;
  uint uVar2;
  
  uVar2 = CONCAT22(in_register_00002032,dest_id);
  uVar1 = _L0(uVar2);
  if ((uVar1 & 0xf) == 0xf) {
    FUN_00010b34(param->rx_hdl);
  }
  else {
    if ((*(byte *)(*(int *)((uVar2 >> 8) * 4) + 0xa5) & 8) == 0) {
      param[-1].conhdl = 0x806;
      *(short *)&param[-1].pb_bc_flag = (short)(uVar2 >> 8);
      _L0(param);
      return 1;
    }
    FUN_00010b62(param->rx_hdl);
    FUN_00010b70(uVar2 >> 8,0x3d);
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  int in_stack_0000000c;
  
  uVar1 = _L0();
  if ((uVar1 & 0xf) == 0xf) {
    FUN_00010b34(*(undefined *)(in_stack_0000000c + 6));
  }
  else {
    if ((*(byte *)(*(int *)(unaff_s0 * 4) + 0xa5) & 8) == 0) {
      *(undefined2 *)(in_stack_0000000c + -8) = 0x806;
      *(short *)(in_stack_0000000c + -6) = (short)unaff_s0;
      _L0(in_stack_0000000c);
      return 1;
    }
    FUN_00010b62(*(undefined *)(in_stack_0000000c + 6));
    FUN_00010b70(0x3d);
  }
  return 0;
}



undefined4 FUN_00010b34(void)

{
  FUN_00010b34();
  return 0;
}



undefined4 FUN_00010b62(void)

{
  FUN_00010b62();
  FUN_00010b70(0x3d);
  return 0;
}



undefined4 FUN_00010b70(void)

{
  FUN_00010b70();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



int lld_stop_ind_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 in_register_00002032;
  uint uVar4;
  undefined2 in_register_00002036;
  ushort *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined uVar6;
  
  uVar4 = CONCAT22(in_register_00002032,dest_id);
  iVar2 = _L0(uVar4,CONCAT22(in_register_00002036,src_id));
  if (iVar2 != 0x7f) {
    uVar1 = uVar4 >> 8;
    puVar5 = (ushort *)(uVar1 * 0x5c + 0x28008092);
    *puVar5 = *puVar5 & 0xfcff;
    iVar2 = *(int *)(uVar1 * 4);
    uVar6 = *(undefined *)(iVar2 + 0xa1);
    uVar3 = _L0(uVar4);
    if (uVar3 != 0xf) {
      uVar6 = 8;
      if ((*(ushort *)(*(int *)(uVar1 * 4) + 0x5c) & 0x100) == 0) {
        uVar6 = 0x3e;
      }
    }
    if (((uVar3 & 1) != 0) && (uVar3 = *(byte *)(iVar2 + 0xa3) - 1 & 0xff, uVar3 < 0x13)) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar3 * 4);
                    // WARNING: Could not emulate address calculation at 0x00010c44
                    // WARNING: Treating indirect jump as call
      iVar2 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return iVar2;
    }
    FUN_00010c60(uVar4,0,uVar1,uVar6);
    FUN_00010c6e(0x101,uVar4);
    FUN_00010c7c(0x102,uVar4);
    FUN_00010c8a(0x103,uVar4);
    FUN_00010c98(0x104,uVar4);
    FUN_00010ca2(uVar1);
  }
  return 0;
}



undefined4 _L0(void)

{
  uint uVar1;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined uVar6;
  
  iVar2 = _L0();
  if (iVar2 != 0x7f) {
    uVar1 = unaff_s1 >> 8;
    puVar5 = (ushort *)(uVar1 * 0x5c + 0x28008092);
    *puVar5 = *puVar5 & 0xfcff;
    iVar2 = *(int *)(uVar1 * 4);
    uVar6 = *(undefined *)(iVar2 + 0xa1);
    uVar3 = _L0();
    if (uVar3 != 0xf) {
      uVar6 = 8;
      if ((*(ushort *)(*(int *)(uVar1 * 4) + 0x5c) & 0x100) == 0) {
        uVar6 = 0x3e;
      }
    }
    if (((uVar3 & 1) != 0) && (uVar3 = *(byte *)(iVar2 + 0xa3) - 1 & 0xff, uVar3 < 0x13)) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar3 * 4);
                    // WARNING: Could not emulate address calculation at 0x00010c44
                    // WARNING: Treating indirect jump as call
      uVar4 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar4;
    }
    FUN_00010c60(0,uVar1,uVar6);
    FUN_00010c6e(0x101);
    FUN_00010c7c(0x102);
    FUN_00010c8a(0x103);
    FUN_00010c98(0x104);
    FUN_00010ca2(uVar1);
  }
  return 0;
}



undefined4 _L0(void)

{
  uint uVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_s2;
  int unaff_s4;
  int *unaff_s5;
  
  uVar1 = _L0();
  if (uVar1 != 0xf) {
    unaff_s2 = 8;
    if ((*(ushort *)(*unaff_s5 + 0x5c) & 0x100) == 0) {
      unaff_s2 = 0x3e;
    }
  }
  if (((uVar1 & 1) != 0) && (uVar1 = *(byte *)(unaff_s4 + 0xa3) - 1 & 0xff, uVar1 < 0x13)) {
    UNRECOVERED_JUMPTABLE = *(code **)(uVar1 * 4);
                    // WARNING: Could not emulate address calculation at 0x00010c44
                    // WARNING: Treating indirect jump as call
    uVar2 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  FUN_00010c60(0,unaff_s2);
  FUN_00010c6e(0x101);
  FUN_00010c7c(0x102);
  FUN_00010c8a(0x103);
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010c50(void)

{
  FUN_00010c50();
  FUN_00010c60(0);
  FUN_00010c6e(0x101);
  FUN_00010c7c(0x102);
  FUN_00010c8a(0x103);
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010c60(void)

{
  FUN_00010c60();
  FUN_00010c6e(0x101);
  FUN_00010c7c(0x102);
  FUN_00010c8a(0x103);
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010c6e(void)

{
  FUN_00010c6e();
  FUN_00010c7c(0x102);
  FUN_00010c8a(0x103);
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010c7c(void)

{
  FUN_00010c7c();
  FUN_00010c8a(0x103);
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010c8a(void)

{
  FUN_00010c8a();
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010c98(void)

{
  FUN_00010c98();
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010ca2(void)

{
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010cc4(void)

{
  FUN_00010cc4();
  FUN_00010c60(0);
  FUN_00010c6e(0x101);
  FUN_00010c7c(0x102);
  FUN_00010c8a(0x103);
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010ce0(void)

{
  FUN_00010ce0();
  FUN_00010c60(0);
  FUN_00010c6e(0x101);
  FUN_00010c7c(0x102);
  FUN_00010c8a(0x103);
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010cf0(void)

{
  FUN_00010cf0();
  FUN_00010c60(0);
  FUN_00010c6e(0x101);
  FUN_00010c7c(0x102);
  FUN_00010c8a(0x103);
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010cfc(void)

{
  int iVar1;
  int unaff_s4;
  
  iVar1 = FUN_00010cfc();
  if ((iVar1 != 0) && ((*(ushort *)(unaff_s4 + 0x5c) & 0x40) != 0)) {
    FUN_00010d16(0);
  }
  FUN_00010c60(0);
  FUN_00010c6e(0x101);
  FUN_00010c7c(0x102);
  FUN_00010c8a(0x103);
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}



undefined4 FUN_00010d16(void)

{
  FUN_00010d16();
  FUN_00010c60(0);
  FUN_00010c6e(0x101);
  FUN_00010c7c(0x102);
  FUN_00010c8a(0x103);
  FUN_00010c98(0x104);
  FUN_00010ca2();
  return 0;
}


