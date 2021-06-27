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

struct em_buf_tx_desc { // DWARF DIE: 138b
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 398
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 798
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 132f
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 3b9
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 13cd
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

struct llc_ch_asses_tag { // DWARF DIE: 2a95
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef union anon_union.conflict9af anon_union.conflict9af, *Panon_union.conflict9af;

typedef uint wint_t;

union anon_union.conflict9af { // DWARF DIE: 9af
    wint_t __wch;
    uchar __wchb[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict9af_for___value anon_union.conflict9af_for___value, *Panon_union.conflict9af_for___value;

union anon_union.conflict9af_for___value { // DWARF DIE: 9af
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 9e1
    int __count;
    union anon_union.conflict9af_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 198a
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 19b5
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

struct bd_addr { // DWARF DIE: 5b6
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 1815
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

struct ke_msg { // DWARF DIE: 414
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 1a50
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 18ec
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

struct ea_elt_tag { // DWARF DIE: 16c4
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

struct le_chnl_map { // DWARF DIE: 5f8
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 1a84
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 589
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 1955
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 1af5
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
    LLID_CNTL=3,
    LLID_CONTINUE=1,
    LLID_END=4,
    LLID_RFU=0,
    LLID_START=2,
    LL_ADV_CONN_DIR=1,
    LL_ADV_CONN_UNDIR=0,
    LL_ADV_DISC_UNDIR=6,
    LL_ADV_END=8,
    LL_ADV_NONCONN_UNDIR=2,
    LL_CONNECT_REQ=5,
    LL_EXT_ADV=7,
    LL_SCAN_REQ=3,
    LL_SCAN_RSP=4
} anon_enum_8.conflict6f;

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

typedef struct llc_data_ind llc_data_ind, *Pllc_data_ind;

struct llc_data_ind { // DWARF DIE: 25c1
    uint16_t conhdl;
    uint8_t pb_bc_flag;
    undefined field_0x3;
    uint16_t length;
    uint8_t rx_hdl;
    undefined field_0x7;
};

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

struct llcp_con_param_req { // DWARF DIE: 2124
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

struct le_features { // DWARF DIE: 66e
    uint8_t feats[8];
};

struct llcp_pause_enc_rsp { // DWARF DIE: 206a
    uint8_t opcode;
};

struct rand_nb { // DWARF DIE: 652
    uint8_t nb[8];
};

struct llcp_ping_rsp { // DWARF DIE: 2304
    uint8_t opcode;
};

struct llcp_vers_ind { // DWARF DIE: 2087
    uint8_t opcode;
    uint8_t vers;
    uint16_t compid;
    uint16_t subvers;
};

struct llcp_feats_req { // DWARF DIE: 1fff
    uint8_t opcode;
    struct le_features feats;
};

struct llcp_start_enc_rsp { // DWARF DIE: 1fbc
    uint8_t opcode;
};

struct llcp_unknown_rsp { // DWARF DIE: 1fd7
    uint8_t opcode;
    uint8_t unk_type;
};

struct llcp_feats_rsp { // DWARF DIE: 2027
    uint8_t opcode;
    struct le_features feats;
};

struct llcp_start_enc_req { // DWARF DIE: 1fa1
    uint8_t opcode;
};

struct llcp_pause_enc_req { // DWARF DIE: 204f
    uint8_t opcode;
};

struct llcp_reject_ind_ext { // DWARF DIE: 22ae
    uint8_t opcode;
    uint8_t rej_opcode;
    uint8_t err_code;
};

struct llcp_length_req { // DWARF DIE: 2321
    uint8_t opcode;
    undefined field_0x1;
    uint16_t max_rx_octets;
    uint16_t max_rx_time;
    uint16_t max_tx_octets;
    uint16_t max_tx_time;
};

struct llcp_slave_feature_req { // DWARF DIE: 20f9
    uint8_t opcode;
    struct le_features feats;
};

struct llcp_reject_ind { // DWARF DIE: 20ce
    uint8_t opcode;
    uint8_t err_code;
};

struct llcp_channel_map_ind { // DWARF DIE: 1ec0
    uint8_t opcode;
    struct le_chnl_map ch_map;
    uint16_t instant;
};

struct llcp_con_upd_ind { // DWARF DIE: 1e57
    uint8_t opcode;
    uint8_t win_size;
    uint16_t win_off;
    uint16_t interv;
    uint16_t latency;
    uint16_t timeout;
    uint16_t instant;
};

struct llcp_terminate_ind { // DWARF DIE: 1ef5
    uint8_t opcode;
    uint8_t err_code;
};

struct llcp_con_param_rsp { // DWARF DIE: 21e9
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

struct init_vect { // DWARF DIE: 735
    uint8_t iv[4];
};

struct sess_k_div_x { // DWARF DIE: 6fb
    uint8_t skdiv[8];
};

struct llcp_enc_req { // DWARF DIE: 1f1d
    uint8_t opcode;
    struct rand_nb rand;
    uint8_t ediv[2];
    struct sess_k_div_x skdm;
    struct init_vect ivm;
};

struct llcp_length_rsp { // DWARF DIE: 2376
    uint8_t opcode;
    undefined field_0x1;
    uint16_t max_rx_octets;
    uint16_t max_rx_time;
    uint16_t max_tx_octets;
    uint16_t max_tx_time;
};

struct llcp_enc_rsp { // DWARF DIE: 1f6c
    uint8_t opcode;
    struct sess_k_div_x skds;
    struct init_vect ivs;
};

struct llcp_ping_req { // DWARF DIE: 22e7
    uint8_t opcode;
};

union llcp_pdu { // DWARF DIE: 23cb
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

struct llc_llcp_recv_ind { // DWARF DIE: 2608
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

typedef enum llc_op_type {
    LLC_OP_DLE_UPD=3,
    LLC_OP_ENCRYPT=2,
    LLC_OP_LOC_PARAM_UPD=0,
    LLC_OP_MAX=4,
    LLC_OP_REM_PARAM_UPD=1
} llc_op_type;

typedef short int16_t;

typedef long int32_t;

typedef struct llcp_pdu_tag llcp_pdu_tag, *Pllcp_pdu_tag;

struct llcp_pdu_tag { // DWARF DIE: 266b
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

typedef struct hci_acl_data_tx hci_acl_data_tx, *Phci_acl_data_tx;

struct hci_acl_data_tx { // DWARF DIE: 751
    uint16_t conhdl;
    uint8_t pb_bc_flag;
    undefined field_0x3;
    uint16_t length;
    undefined field_0x6;
    undefined field_0x7;
    struct em_buf_node * buf;
};

typedef struct lld_pdu_pack_desc lld_pdu_pack_desc, *Plld_pdu_pack_desc;

struct lld_pdu_pack_desc { // DWARF DIE: 2f54
    uint8_t pdu_len;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    void * pack_fmt;
    void (* unpack_func)(uint16_t, uint8_t, uint8_t *);
};

typedef struct lld_pdu_rx_info lld_pdu_rx_info, *Plld_pdu_rx_info;

struct lld_pdu_rx_info { // DWARF DIE: 2ed1
    struct co_list_hdr hdr;
    uint8_t rx_hdl;
    _Bool free;
    uint16_t conhdl;
    uint16_t status;
    uint8_t length;
    uint8_t channel;
    uint8_t rssi;
    uint8_t audio;
    undefined field_0xe;
    undefined field_0xf;
};

typedef enum lld_pdu_pack_status {
    LLC_PDU_PACK_OK=0,
    LLC_PDU_PACK_UNKNOWN=2,
    LLC_PDU_PACK_WRONG_FORMAT=1
} lld_pdu_pack_status;

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 11a9
};

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

struct rwip_rf_api { // DWARF DIE: 14c5
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

struct rwip_prio { // DWARF DIE: 1649
    uint8_t value;
    uint8_t increment;
};

typedef struct lld_pdu_data_tx_tag lld_pdu_data_tx_tag, *Plld_pdu_data_tx_tag;

struct lld_pdu_data_tx_tag { // DWARF DIE: 2a39
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t conhdl;
    uint16_t length;
    uint8_t pb_bc_flag;
    undefined field_0xb;
    struct em_buf_node * buf;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 4b6
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 4e2
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 625
    uint8_t ltk[16];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 6d9
    uint8_t supp_states[8];
};

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: 718
    uint8_t skd[16];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 690
    uint8_t cmds[64];
};

typedef struct lld_evt_tag lld_evt_tag, *Plld_evt_tag;

typedef struct lld_evt_anchor lld_evt_anchor, *Plld_evt_anchor;

typedef struct ea_interval_tag ea_interval_tag, *Pea_interval_tag;

typedef union lld_evt_info lld_evt_info, *Plld_evt_info;

typedef struct lld_non_conn lld_non_conn, *Plld_non_conn;

typedef struct lld_conn lld_conn, *Plld_conn;

struct lld_conn { // DWARF DIE: 279a
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

struct ea_interval_tag { // DWARF DIE: 17ac
    struct co_list_hdr hdr;
    uint16_t interval_used;
    uint16_t offset_used;
    uint16_t bandwidth_used;
    uint16_t conhdl_used;
    uint16_t role_used;
    uint16_t linkid;
};

struct lld_non_conn { // DWARF DIE: 274a
    uint32_t window;
    uint32_t anchor;
    uint32_t end_ts;
    _Bool initiate;
    _Bool connect_req_sent;
    undefined field_0xe;
    undefined field_0xf;
};

union lld_evt_info { // DWARF DIE: 2889
    struct lld_non_conn non_conn;
    struct lld_conn conn;
};

struct lld_evt_anchor { // DWARF DIE: 2715
    uint32_t basetime_cnt;
    uint16_t finetime_cnt;
    uint16_t evt_cnt;
};

struct lld_evt_tag { // DWARF DIE: 28b2
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

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 29ad
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

typedef struct anon_struct.conflict112d anon_struct.conflict112d, *Panon_struct.conflict112d;

struct anon_struct.conflict112d { // DWARF DIE: 112d
    uchar * _nextf[30];
    uint _nmalloc[30];
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict1174_for__new anon_union.conflict1174_for__new, *Panon_union.conflict1174_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflictfe8 anon_struct.conflictfe8, *Panon_struct.conflictfe8;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: aa5
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

struct _rand48 { // DWARF DIE: f9f
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflictfe8 { // DWARF DIE: fe8
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

struct _glue { // DWARF DIE: f5a
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: bd6
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: c04
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

struct _on_exit_args { // DWARF DIE: b28
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: b7d
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

union anon_union.conflict1174_for__new { // DWARF DIE: 1174
    struct anon_struct.conflictfe8 _reent;
    struct anon_struct.conflict112d _unused;
};

struct _reent { // DWARF DIE: d70
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
    union anon_union.conflict1174_for__new _new;
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

struct _Bigint { // DWARF DIE: a35
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

typedef union anon_union.conflict1174 anon_union.conflict1174, *Panon_union.conflict1174;

union anon_union.conflict1174 { // DWARF DIE: 1174
    struct anon_struct.conflictfe8 _reent;
    struct anon_struct.conflict112d _unused;
};

typedef int32_t BaseType_t;

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct rem_version { // DWARF DIE: 2b8e
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct encrypt { // DWARF DIE: 2bc3
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct data_len_ext_tag { // DWARF DIE: 2bf8
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

struct llc_env_tag { // DWARF DIE: 2c88
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




// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 5385

void lld_pdu_llcp_con_param_req_unpk(uint16_t pdu_ptr,uint8_t parlen,uint8_t *param)

{
  undefined2 in_register_0000202a;
  int iVar1;
  undefined2 auStack34 [2];
  uint16_t res;
  
  iVar1 = CONCAT22(in_register_0000202a,pdu_ptr);
  (*pcRam00000000)(auStack34,iVar1 + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 2) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 2U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 4) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 4U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 6) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 6U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 8) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 8U & 0xffff) + 0x28008000,1,pcRam00000000);
  param[10] = (uint8_t)auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 9U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0xc) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0xbU & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0xe) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0xdU & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0x10) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0xfU & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0x12) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0x11U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0x14) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0x13U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0x16) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0x15U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0x18) = auStack34[0];
  return;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 4d8d

void lld_pdu_llcp_con_param_rsp_unpk(uint16_t pdu_ptr,uint8_t parlen,uint8_t *param)

{
  undefined2 in_register_0000202a;
  int iVar1;
  undefined2 auStack34 [2];
  uint16_t res;
  
  iVar1 = CONCAT22(in_register_0000202a,pdu_ptr);
  (*pcRam00000000)(auStack34,iVar1 + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 2) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 2U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 4) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 4U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 6) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 6U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 8) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 8U & 0xffff) + 0x28008000,1,pcRam00000000);
  param[10] = (uint8_t)auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 9U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0xc) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0xbU & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0xe) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0xdU & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0x10) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0xfU & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0x12) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0x11U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0x14) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0x13U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0x16) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 0x15U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 0x18) = auStack34[0];
  return;
}



// DWARF DIE: 4b55

void lld_pdu_llcp_length_req_unpk(uint16_t pdu_ptr,uint8_t parlen,uint8_t *param)

{
  undefined2 in_register_0000202a;
  int iVar1;
  undefined2 auStack34 [2];
  uint16_t res;
  
  iVar1 = CONCAT22(in_register_0000202a,pdu_ptr);
  (*pcRam00000000)(auStack34,iVar1 + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 2) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 2U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 4) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 4U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 6) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 6U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 8) = auStack34[0];
  return;
}



// DWARF DIE: 491d

void lld_pdu_llcp_length_rsp_unpk(uint16_t pdu_ptr,uint8_t parlen,uint8_t *param)

{
  undefined2 in_register_0000202a;
  int iVar1;
  undefined2 auStack34 [2];
  uint16_t res;
  
  iVar1 = CONCAT22(in_register_0000202a,pdu_ptr);
  (*pcRam00000000)(auStack34,iVar1 + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 2) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 2U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 4) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 4U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 6) = auStack34[0];
  (*pcRam00000000)(auStack34,(iVar1 + 6U & 0xffff) + 0x28008000,2,pcRam00000000);
  *(undefined2 *)(param + 8) = auStack34[0];
  return;
}



// DWARF DIE: 4700

uint8_t lld_pdu_pack(uint8_t *p_data,uint8_t *p_length,char *format)

{
  byte bVar1;
  undefined2 uVar2;
  uint8_t *puVar3;
  uint8_t *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  puVar3 = p_data;
  puVar8 = (undefined4 *)p_data;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar10 = puVar8;
        puVar4 = puVar3;
        bVar1 = *format;
        if (bVar1 == 0) {
          *p_length = (char)puVar4 - (char)p_data;
          return (uint8_t)bVar1;
        }
        uVar6 = bVar1 - 0x30;
        uVar5 = 0;
        if ((uVar6 & 0xff) < 10) {
          while( true ) {
            uVar5 = uVar6 & 0xffff;
            format = (char *)((byte *)format + 1);
            if (9 < ((byte)*format - 0x30 & 0xff)) break;
            uVar6 = uVar5 * 10 + -0x30 + (uint)(byte)*format;
          }
        }
        bVar1 = *format;
        format = (char *)((byte *)format + 1);
        if (bVar1 != 0x48) break;
        puVar7 = (undefined2 *)((uint)((int)puVar10 + 1) & 0xfffffffe);
        uVar2 = *puVar7;
        *puVar4 = (uint8_t)uVar2;
        puVar4[1] = (uint8_t)((ushort)uVar2 >> 8);
        puVar3 = puVar4 + 2;
        puVar8 = (undefined4 *)(puVar7 + 1);
      }
      if (bVar1 != 0x4c) break;
      puVar8 = (undefined4 *)((uint)((int)puVar10 + 3) & 0xfffffffc);
      uVar9 = *puVar8;
      *puVar4 = (uint8_t)uVar9;
      puVar4[1] = (uint8_t)((uint)uVar9 >> 8);
      puVar4[2] = (uint8_t)((uint)uVar9 >> 0x10);
      puVar4[3] = (uint8_t)((uint)uVar9 >> 0x18);
      puVar3 = puVar4 + 4;
      puVar8 = puVar8 + 1;
    }
    if (bVar1 != 0x42) break;
    *puVar4 = *(uint8_t *)puVar10;
    puVar3 = puVar4 + 1;
    puVar8 = (undefined4 *)((int)puVar10 + 1);
    if (1 < uVar5) {
      (*pcRam00000000)(uVar5 - 1,pcRam00000000);
      puVar3 = puVar4 + uVar5;
      puVar8 = (undefined4 *)((int)puVar10 + uVar5);
    }
  }
  return '\x01';
}



// DWARF DIE: 45d7

uint8_t lld_pdu_tx_flush_list(co_list *list)

{
  uint8_t uVar1;
  uint uVar2;
  undefined4 in_mstatus;
  
  uVar1 = '\0';
  while (uVar2 = FUN_0001058e(in_mstatus), uVar2 != 0) {
    if ((ushort)(*(short *)(uVar2 + 4) - 6U) < 0x14) {
      uVar2 = _L0(in_mstatus);
      if (uVar2 != 0) {
        uVar1 += '\x01';
      }
    }
    else {
      if (0x17 < (ushort)(*(short *)(uVar2 + 4) - 2U)) {
        _L0();
      }
    }
  }
  return uVar1;
}



uint FUN_0001058e(undefined4 param_1)

{
  uint unaff_s0;
  undefined4 unaff_s1;
  uint uVar1;
  uint unaff_s3;
  uint unaff_s4;
  
  while (uVar1 = FUN_0001058e(param_1), uVar1 != 0) {
    param_1 = unaff_s1;
    if (unaff_s3 < (*(ushort *)(uVar1 + 4) - 6 & 0xffff)) {
      if (unaff_s4 < (*(ushort *)(uVar1 + 4) - 2 & 0xffff)) {
        _L0();
        param_1 = unaff_s1;
      }
    }
    else {
      uVar1 = _L0(unaff_s1);
      if (uVar1 != 0) {
        unaff_s0 = unaff_s0 + 1 & 0xff;
      }
    }
  }
  return unaff_s0;
}



uint _L0(undefined4 param_1)

{
  uint unaff_s0;
  undefined4 unaff_s1;
  uint uVar1;
  uint unaff_s3;
  uint unaff_s4;
  
  do {
    uVar1 = _L0(param_1);
    if (uVar1 != 0) {
      unaff_s0 = unaff_s0 + 1 & 0xff;
    }
    while( true ) {
      uVar1 = FUN_0001058e(unaff_s1);
      if (uVar1 == 0) {
        return unaff_s0;
      }
      param_1 = unaff_s1;
      if ((*(ushort *)(uVar1 + 4) - 6 & 0xffff) <= unaff_s3) break;
      if (unaff_s4 < (*(ushort *)(uVar1 + 4) - 2 & 0xffff)) {
        _L0();
      }
    }
  } while( true );
}



uint _L0(void)

{
  uint unaff_s0;
  uint uVar1;
  uint unaff_s3;
  uint unaff_s4;
  undefined4 in_mstatus;
  
  do {
    _L0();
    do {
      while( true ) {
        uVar1 = FUN_0001058e(in_mstatus);
        if (uVar1 == 0) {
          return unaff_s0;
        }
        if (unaff_s3 < (*(ushort *)(uVar1 + 4) - 6 & 0xffff)) break;
        uVar1 = _L0(in_mstatus);
        if (uVar1 != 0) {
          unaff_s0 = unaff_s0 + 1 & 0xff;
        }
      }
    } while ((*(ushort *)(uVar1 + 4) - 2 & 0xffff) <= unaff_s4);
  } while( true );
}



// DWARF DIE: 603b

void lld_pdu_cntl_aligned_unpk(uint16_t pdu_ptr,uint8_t parlen,uint8_t *param)

{
  undefined2 in_register_0000202a;
  undefined3 in_register_0000202d;
  
  if (CONCAT31(in_register_0000202d,parlen) != 0) {
                    // WARNING: Could not recover jumptable at 0x00010608. Too many branches
                    // WARNING: Treating indirect jump as call
    (*pcRam00000000)(param + 1,CONCAT22(in_register_0000202a,pdu_ptr) + 0x28008000,
                     CONCAT31(in_register_0000202d,parlen));
    return;
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 4100

_Bool lld_pdu_check(lld_evt_tag *evt)

{
  uint16_t uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int **ppiVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 in_mstatus;
  int iStack72;
  co_list tmp_pdu_list;
  
  _L0();
  uVar1 = evt->conhdl;
  ppiVar6 = (int **)(evt->tx_prog).first;
  cVar2 = '\0';
  while ((ppiVar6 != (int **)0x0 &&
         (*(short *)((uint)*(ushort *)(ppiVar6 + 1) * 10 + 0x280082ca) < 0))) {
    ppiVar6 = (int **)*ppiVar6;
    iVar3 = _L0(&evt->tx_prog,in_mstatus);
    if (((evt->tx_acl_tofree).first != (co_list_hdr *)0x0) && (iVar4 = _LVL243(), iVar4 != 0)) {
      _L0();
    }
    puVar5 = (ushort *)((uint)*(ushort *)(iVar3 + 4) * 10 + 0x280082ca);
    *puVar5 = *puVar5 & 0x8000;
    if (*(ushort *)(iVar3 + 4) < 2) {
      *(char *)&(evt->evt).field_0x1c = *(char *)&(evt->evt).field_0x1c + -1;
      if ((evt->tx_llcp_pdu_rdy).first == (co_list_hdr *)0x0) {
        evt->evt_flag = evt->evt_flag & 0xfb;
      }
      FUN_0001076c(iVar3);
      FUN_0001077e((uint)*(byte *)(iVar3 + 0xc));
    }
    else {
      if ((*(ushort *)(iVar3 + 4) < 6) || (iVar3 = FUN_0001078e(iVar3), iVar3 != 0)) {
        cVar2 += '\x01';
      }
    }
  }
  uVar7 = uVar1 - 2;
  if ((1 < uVar7) && (cVar2 != '\0')) {
    *(char *)&(evt->evt).field_0x1c = *(char *)&(evt->evt).field_0x1c - cVar2;
    FUN_00010694();
  }
  iVar3 = FUN_000106ac();
  uVar8 = 0;
  while (iVar3 != 0) {
    if (*(uint16_t *)(iVar3 + 6) == uVar1) {
      if (uVar7 < 2) {
        uVar8 = FUN_0001080a((uint)*(byte *)(iVar3 + 4));
      }
      else {
        FUN_000107c2((uint)*(ushort *)(iVar3 + 8),(uint)*(byte *)(iVar3 + 0xc),
                     (uint)*(byte *)(iVar3 + 0xb),(uint)*(byte *)(iVar3 + 10));
      }
      FUN_000107cc(iVar3);
    }
    else {
      FUN_0001081a(&iStack72,iVar3);
    }
    iVar3 = FUN_000107e0(0x18,in_mstatus);
    if ((iVar3 == 0) && (iStack72 != 0)) {
      FUN_000107f6(0x18,&iStack72);
    }
  }
  return SUB41(uVar8,0);
}



undefined4 _L0(void)

{
  short sVar1;
  char cVar2;
  int unaff_s1;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int **ppiVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 in_mstatus;
  int iStack0000000c;
  int in_stack_00000018;
  
  _L0();
  sVar1 = *(short *)(unaff_s1 + 0x4c);
  ppiVar6 = *(int ***)(unaff_s1 + 0x20);
  iStack0000000c = unaff_s1 + 0x20;
  cVar2 = '\0';
  while ((ppiVar6 != (int **)0x0 &&
         (*(short *)((uint)*(ushort *)(ppiVar6 + 1) * 10 + 0x280082ca) < 0))) {
    ppiVar6 = (int **)*ppiVar6;
    iVar3 = _L0(iStack0000000c,in_mstatus);
    if ((*(int *)(unaff_s1 + 0x10) != 0) && (iVar4 = _LVL243(), iVar4 != 0)) {
      _L0();
    }
    puVar5 = (ushort *)((uint)*(ushort *)(iVar3 + 4) * 10 + 0x280082ca);
    *puVar5 = *puVar5 & 0x8000;
    if (*(ushort *)(iVar3 + 4) < 2) {
      *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) + -1;
      if (*(int *)(unaff_s1 + 0x18) == 0) {
        *(byte *)(unaff_s1 + 0x56) = *(byte *)(unaff_s1 + 0x56) & 0xfb;
      }
      FUN_0001076c(iVar3);
      FUN_0001077e((uint)*(byte *)(iVar3 + 0xc));
    }
    else {
      if ((*(ushort *)(iVar3 + 4) < 6) || (iVar3 = FUN_0001078e(iVar3), iVar3 != 0)) {
        cVar2 += '\x01';
      }
    }
  }
  uVar7 = sVar1 - 2;
  if ((1 < uVar7) && (cVar2 != '\0')) {
    *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) - cVar2;
    FUN_00010694();
  }
  iVar3 = FUN_000106ac();
  uVar8 = 0;
  while (iVar3 != 0) {
    if (*(short *)(iVar3 + 6) == sVar1) {
      if (uVar7 < 2) {
        uVar8 = FUN_0001080a((uint)*(byte *)(iVar3 + 4));
      }
      else {
        FUN_000107c2((uint)*(ushort *)(iVar3 + 8),(uint)*(byte *)(iVar3 + 0xc),
                     (uint)*(byte *)(iVar3 + 0xb),(uint)*(byte *)(iVar3 + 10));
      }
      FUN_000107cc(iVar3);
    }
    else {
      FUN_0001081a((undefined4 *)&stack0x00000018,iVar3);
    }
    iVar3 = FUN_000107e0(0x18,in_mstatus);
    if ((iVar3 == 0) && (in_stack_00000018 != 0)) {
      FUN_000107f6(0x18,(undefined4 *)&stack0x00000018);
    }
  }
  return uVar8;
}



undefined4 FUN_00010694(void)

{
  int iVar1;
  uint unaff_s2;
  ushort unaff_s4;
  undefined4 uVar2;
  undefined4 in_mstatus;
  int in_stack_00000018;
  
  FUN_00010694();
  iVar1 = FUN_000106ac();
  uVar2 = 0;
  while (iVar1 != 0) {
    if (*(ushort *)(iVar1 + 6) == unaff_s2) {
      if (unaff_s4 < 2) {
        uVar2 = FUN_0001080a((uint)*(byte *)(iVar1 + 4));
      }
      else {
        FUN_000107c2((uint)*(ushort *)(iVar1 + 8),(uint)*(byte *)(iVar1 + 0xc),
                     (uint)*(byte *)(iVar1 + 0xb),(uint)*(byte *)(iVar1 + 10));
      }
      FUN_000107cc(iVar1);
    }
    else {
      FUN_0001081a((undefined4 *)&stack0x00000018,iVar1);
    }
    iVar1 = FUN_000107e0(0x18,in_mstatus);
    if ((iVar1 == 0) && (in_stack_00000018 != 0)) {
      FUN_000107f6(0x18,(undefined4 *)&stack0x00000018);
    }
  }
  return uVar2;
}



undefined4 FUN_000106ac(void)

{
  int iVar1;
  uint unaff_s2;
  int unaff_s3;
  ushort unaff_s4;
  undefined4 unaff_s5;
  undefined4 uVar2;
  int in_stack_00000018;
  
  iVar1 = FUN_000106ac();
  uVar2 = 0;
  while (iVar1 != 0) {
    if (*(ushort *)(iVar1 + 6) == unaff_s2) {
      if (unaff_s4 < 2) {
        uVar2 = FUN_0001080a((uint)*(byte *)(iVar1 + 4));
      }
      else {
        FUN_000107c2((uint)*(ushort *)(iVar1 + 8),(uint)*(byte *)(iVar1 + 0xc),
                     (uint)*(byte *)(iVar1 + 0xb),(uint)*(byte *)(iVar1 + 10));
      }
      FUN_000107cc(iVar1);
    }
    else {
      FUN_0001081a((undefined4 *)&stack0x00000018,iVar1);
    }
    iVar1 = FUN_000107e0(unaff_s3 + 0x18,unaff_s5);
    if ((iVar1 == 0) && (in_stack_00000018 != 0)) {
      FUN_000107f6(unaff_s3 + 0x18,(undefined4 *)&stack0x00000018);
    }
  }
  return uVar2;
}



undefined4 _L0(undefined4 param_1,undefined4 param_2)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint unaff_s2;
  undefined4 *unaff_s3;
  int unaff_s4;
  undefined4 uVar4;
  int unaff_s5;
  ushort unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  undefined4 unaff_s11;
  undefined4 in_stack_0000000c;
  int in_stack_00000018;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2);
    if ((*(int *)(unaff_s1 + 0x10) != 0) && (iVar2 = _LVL243(), iVar2 != 0)) {
      _L0();
    }
    puVar3 = (ushort *)((uint)*(ushort *)(iVar1 + 4) * unaff_s5 + unaff_s4);
    *puVar3 = *puVar3 & unaff_s8;
    if (unaff_s9 < *(ushort *)(iVar1 + 4)) {
      param_2 = unaff_s11;
      if ((*(ushort *)(iVar1 + 4) <= unaff_s10) ||
         (iVar1 = FUN_0001078e(iVar1), param_2 = unaff_s11, iVar1 != 0)) {
        unaff_s0 = unaff_s0 + 1 & 0xff;
      }
    }
    else {
      *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) + -1;
      if (*(int *)(unaff_s1 + 0x18) == 0) {
        *(byte *)(unaff_s1 + 0x56) = *(byte *)(unaff_s1 + 0x56) & 0xfb;
      }
      FUN_0001076c(iVar1);
      FUN_0001077e((uint)*(byte *)(iVar1 + 0xc));
      param_2 = unaff_s11;
    }
    if ((unaff_s3 == (undefined4 *)0x0) ||
       (-1 < *(short *)((uint)*(ushort *)(unaff_s3 + 1) * unaff_s5 + unaff_s4))) break;
    unaff_s3 = (undefined4 *)*unaff_s3;
    param_1 = in_stack_0000000c;
    unaff_s11 = param_2;
  }
  if ((1 < (unaff_s2 - 2 & 0xffff)) && (unaff_s0 != 0)) {
    *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) - (char)unaff_s0;
    FUN_00010694();
  }
  iVar1 = FUN_000106ac();
  uVar4 = 0;
  while (iVar1 != 0) {
    if (*(ushort *)(iVar1 + 6) == unaff_s2) {
      if ((unaff_s2 - 2 & 0xffff) < 2) {
        uVar4 = FUN_0001080a((uint)*(byte *)(iVar1 + 4));
      }
      else {
        FUN_000107c2((uint)*(ushort *)(iVar1 + 8),(uint)*(byte *)(iVar1 + 0xc),
                     (uint)*(byte *)(iVar1 + 0xb),(uint)*(byte *)(iVar1 + 10));
      }
      FUN_000107cc(iVar1);
    }
    else {
      FUN_0001081a((undefined4 *)&stack0x00000018,iVar1);
    }
    iVar1 = FUN_000107e0(0x18,param_2);
    if ((iVar1 == 0) && (in_stack_00000018 != 0)) {
      FUN_000107f6(0x18,(undefined4 *)&stack0x00000018);
    }
  }
  return uVar4;
}



undefined4 _LVL243(void)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  ushort *puVar2;
  uint unaff_s2;
  undefined4 *unaff_s3;
  int unaff_s4;
  undefined4 uVar3;
  int unaff_s5;
  int unaff_s6;
  ushort unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  undefined4 unaff_s11;
  undefined4 in_stack_0000000c;
  int in_stack_00000018;
  
  do {
    iVar1 = _LVL243();
    if (iVar1 != 0) {
      _L0();
    }
    do {
      puVar2 = (ushort *)((uint)*(ushort *)(unaff_s6 + 4) * unaff_s5 + unaff_s4);
      *puVar2 = *puVar2 & unaff_s8;
      if (unaff_s9 < *(ushort *)(unaff_s6 + 4)) {
        if ((*(ushort *)(unaff_s6 + 4) <= unaff_s10) || (iVar1 = FUN_0001078e(unaff_s6), iVar1 != 0)
           ) {
          unaff_s0 = unaff_s0 + 1 & 0xff;
        }
      }
      else {
        *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) + -1;
        if (*(int *)(unaff_s1 + 0x18) == 0) {
          *(byte *)(unaff_s1 + 0x56) = *(byte *)(unaff_s1 + 0x56) & 0xfb;
        }
        FUN_0001076c(unaff_s6);
        FUN_0001077e((uint)*(byte *)(unaff_s6 + 0xc));
      }
      if ((unaff_s3 == (undefined4 *)0x0) ||
         (-1 < *(short *)((uint)*(ushort *)(unaff_s3 + 1) * unaff_s5 + unaff_s4))) {
        if ((1 < (unaff_s2 - 2 & 0xffff)) && (unaff_s0 != 0)) {
          *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) - (char)unaff_s0;
          FUN_00010694();
        }
        iVar1 = FUN_000106ac();
        uVar3 = 0;
        while (iVar1 != 0) {
          if (*(ushort *)(iVar1 + 6) == unaff_s2) {
            if ((unaff_s2 - 2 & 0xffff) < 2) {
              uVar3 = FUN_0001080a((uint)*(byte *)(iVar1 + 4));
            }
            else {
              FUN_000107c2((uint)*(ushort *)(iVar1 + 8),(uint)*(byte *)(iVar1 + 0xc),
                           (uint)*(byte *)(iVar1 + 0xb),(uint)*(byte *)(iVar1 + 10));
            }
            FUN_000107cc(iVar1);
          }
          else {
            FUN_0001081a((undefined4 *)&stack0x00000018,iVar1);
          }
          iVar1 = FUN_000107e0(0x18,unaff_s11);
          if ((iVar1 == 0) && (in_stack_00000018 != 0)) {
            FUN_000107f6(0x18,(undefined4 *)&stack0x00000018);
          }
        }
        return uVar3;
      }
      unaff_s3 = (undefined4 *)*unaff_s3;
      unaff_s6 = _L0(in_stack_0000000c,unaff_s11);
    } while (*(int *)(unaff_s1 + 0x10) == 0);
  } while( true );
}



undefined4 _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  ushort *puVar2;
  uint unaff_s2;
  undefined4 *unaff_s3;
  int unaff_s4;
  undefined4 uVar3;
  int unaff_s5;
  int unaff_s6;
  ushort unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  undefined4 unaff_s11;
  undefined4 in_stack_0000000c;
  int in_stack_00000018;
  
  do {
    _L0();
    do {
      puVar2 = (ushort *)((uint)*(ushort *)(unaff_s6 + 4) * unaff_s5 + unaff_s4);
      *puVar2 = *puVar2 & unaff_s8;
      if (unaff_s9 < *(ushort *)(unaff_s6 + 4)) {
        if ((*(ushort *)(unaff_s6 + 4) <= unaff_s10) || (iVar1 = FUN_0001078e(unaff_s6), iVar1 != 0)
           ) {
          unaff_s0 = unaff_s0 + 1 & 0xff;
        }
      }
      else {
        *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) + -1;
        if (*(int *)(unaff_s1 + 0x18) == 0) {
          *(byte *)(unaff_s1 + 0x56) = *(byte *)(unaff_s1 + 0x56) & 0xfb;
        }
        FUN_0001076c(unaff_s6);
        FUN_0001077e((uint)*(byte *)(unaff_s6 + 0xc));
      }
      if ((unaff_s3 == (undefined4 *)0x0) ||
         (-1 < *(short *)((uint)*(ushort *)(unaff_s3 + 1) * unaff_s5 + unaff_s4))) {
        if ((1 < (unaff_s2 - 2 & 0xffff)) && (unaff_s0 != 0)) {
          *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) - (char)unaff_s0;
          FUN_00010694();
        }
        iVar1 = FUN_000106ac();
        uVar3 = 0;
        while (iVar1 != 0) {
          if (*(ushort *)(iVar1 + 6) == unaff_s2) {
            if ((unaff_s2 - 2 & 0xffff) < 2) {
              uVar3 = FUN_0001080a((uint)*(byte *)(iVar1 + 4));
            }
            else {
              FUN_000107c2((uint)*(ushort *)(iVar1 + 8),(uint)*(byte *)(iVar1 + 0xc),
                           (uint)*(byte *)(iVar1 + 0xb),(uint)*(byte *)(iVar1 + 10));
            }
            FUN_000107cc(iVar1);
          }
          else {
            FUN_0001081a((undefined4 *)&stack0x00000018,iVar1);
          }
          iVar1 = FUN_000107e0(0x18,unaff_s11);
          if ((iVar1 == 0) && (in_stack_00000018 != 0)) {
            FUN_000107f6(0x18,(undefined4 *)&stack0x00000018);
          }
        }
        return uVar3;
      }
      unaff_s3 = (undefined4 *)*unaff_s3;
      unaff_s6 = _L0(in_stack_0000000c,unaff_s11);
    } while ((*(int *)(unaff_s1 + 0x10) == 0) || (iVar1 = _LVL243(), iVar1 == 0));
  } while( true );
}



undefined4 FUN_0001076c(int param_1)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  ushort *puVar2;
  uint unaff_s2;
  int **unaff_s3;
  int unaff_s4;
  undefined4 uVar3;
  int unaff_s5;
  int unaff_s6;
  ushort unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  undefined4 unaff_s11;
  undefined4 in_stack_0000000c;
  int in_stack_00000018;
  
  do {
    FUN_0001076c(param_1);
    FUN_0001077e((uint)*(byte *)(unaff_s6 + 0xc));
    while( true ) {
      if ((unaff_s3 == (int **)0x0) ||
         (-1 < *(short *)((uint)*(ushort *)(unaff_s3 + 1) * unaff_s5 + unaff_s4))) {
        if ((1 < (unaff_s2 - 2 & 0xffff)) && (unaff_s0 != 0)) {
          *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) - (char)unaff_s0;
          FUN_00010694();
        }
        iVar1 = FUN_000106ac();
        uVar3 = 0;
        while (iVar1 != 0) {
          if (*(ushort *)(iVar1 + 6) == unaff_s2) {
            if ((unaff_s2 - 2 & 0xffff) < 2) {
              uVar3 = FUN_0001080a((uint)*(byte *)(iVar1 + 4));
            }
            else {
              FUN_000107c2((uint)*(ushort *)(iVar1 + 8),(uint)*(byte *)(iVar1 + 0xc),
                           (uint)*(byte *)(iVar1 + 0xb),(uint)*(byte *)(iVar1 + 10));
            }
            FUN_000107cc(iVar1);
          }
          else {
            FUN_0001081a((undefined4 *)&stack0x00000018,iVar1);
          }
          iVar1 = FUN_000107e0(0x18,unaff_s11);
          if ((iVar1 == 0) && (in_stack_00000018 != 0)) {
            FUN_000107f6(0x18,(undefined4 *)&stack0x00000018);
          }
        }
        return uVar3;
      }
      unaff_s3 = (int **)*unaff_s3;
      param_1 = _L0(in_stack_0000000c,unaff_s11);
      if ((*(int *)(unaff_s1 + 0x10) != 0) && (iVar1 = _LVL243(), iVar1 != 0)) {
        _L0();
      }
      puVar2 = (ushort *)((uint)*(ushort *)(param_1 + 4) * unaff_s5 + unaff_s4);
      *puVar2 = *puVar2 & unaff_s8;
      if (*(ushort *)(param_1 + 4) <= unaff_s9) break;
      if ((*(ushort *)(param_1 + 4) <= unaff_s10) || (iVar1 = FUN_0001078e(param_1), iVar1 != 0)) {
        unaff_s0 = unaff_s0 + 1 & 0xff;
      }
    }
    *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) + -1;
    unaff_s6 = param_1;
    if (*(int *)(unaff_s1 + 0x18) == 0) {
      *(byte *)(unaff_s1 + 0x56) = *(byte *)(unaff_s1 + 0x56) & 0xfb;
    }
  } while( true );
}



undefined4 FUN_0001077e(uint param_1)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint unaff_s2;
  int **unaff_s3;
  int unaff_s4;
  undefined4 uVar4;
  int unaff_s5;
  ushort unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  undefined4 in_mstatus;
  undefined4 in_stack_0000000c;
  int in_stack_00000018;
  
  do {
    FUN_0001077e(param_1);
    while( true ) {
      if ((unaff_s3 == (int **)0x0) ||
         (-1 < *(short *)((uint)*(ushort *)(unaff_s3 + 1) * unaff_s5 + unaff_s4))) {
        if ((1 < (unaff_s2 - 2 & 0xffff)) && (unaff_s0 != 0)) {
          *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) - (char)unaff_s0;
          FUN_00010694();
        }
        iVar1 = FUN_000106ac();
        uVar4 = 0;
        while (iVar1 != 0) {
          if (*(ushort *)(iVar1 + 6) == unaff_s2) {
            if ((unaff_s2 - 2 & 0xffff) < 2) {
              uVar4 = FUN_0001080a((uint)*(byte *)(iVar1 + 4));
            }
            else {
              FUN_000107c2((uint)*(ushort *)(iVar1 + 8),(uint)*(byte *)(iVar1 + 0xc),
                           (uint)*(byte *)(iVar1 + 0xb),(uint)*(byte *)(iVar1 + 10));
            }
            FUN_000107cc(iVar1);
          }
          else {
            FUN_0001081a((undefined4 *)&stack0x00000018,iVar1);
          }
          iVar1 = FUN_000107e0(0x18,in_mstatus);
          if ((iVar1 == 0) && (in_stack_00000018 != 0)) {
            FUN_000107f6(0x18,(undefined4 *)&stack0x00000018);
          }
        }
        return uVar4;
      }
      unaff_s3 = (int **)*unaff_s3;
      iVar1 = _L0(in_stack_0000000c,in_mstatus);
      if ((*(int *)(unaff_s1 + 0x10) != 0) && (iVar2 = _LVL243(), iVar2 != 0)) {
        _L0();
      }
      puVar3 = (ushort *)((uint)*(ushort *)(iVar1 + 4) * unaff_s5 + unaff_s4);
      *puVar3 = *puVar3 & unaff_s8;
      if (*(ushort *)(iVar1 + 4) <= unaff_s9) break;
      if ((*(ushort *)(iVar1 + 4) <= unaff_s10) || (iVar1 = FUN_0001078e(iVar1), iVar1 != 0)) {
        unaff_s0 = unaff_s0 + 1 & 0xff;
      }
    }
    *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) + -1;
    if (*(int *)(unaff_s1 + 0x18) == 0) {
      *(byte *)(unaff_s1 + 0x56) = *(byte *)(unaff_s1 + 0x56) & 0xfb;
    }
    FUN_0001076c(iVar1);
    param_1 = (uint)*(byte *)(iVar1 + 0xc);
  } while( true );
}



undefined4 FUN_0001078e(int param_1)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  ushort *puVar2;
  uint unaff_s2;
  int **unaff_s3;
  int unaff_s4;
  undefined4 uVar3;
  int unaff_s5;
  ushort unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  undefined4 in_mstatus;
  undefined4 in_stack_0000000c;
  int in_stack_00000018;
  
  do {
    iVar1 = FUN_0001078e(param_1);
    if (iVar1 == 0) goto _L0;
    do {
      unaff_s0 = unaff_s0 + 1 & 0xff;
_L0:
      while( true ) {
        if ((unaff_s3 == (int **)0x0) ||
           (-1 < *(short *)((uint)*(ushort *)(unaff_s3 + 1) * unaff_s5 + unaff_s4))) {
          if ((1 < (unaff_s2 - 2 & 0xffff)) && (unaff_s0 != 0)) {
            *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) - (char)unaff_s0;
            FUN_00010694();
          }
          iVar1 = FUN_000106ac();
          uVar3 = 0;
          while (iVar1 != 0) {
            if (*(ushort *)(iVar1 + 6) == unaff_s2) {
              if ((unaff_s2 - 2 & 0xffff) < 2) {
                uVar3 = FUN_0001080a((uint)*(byte *)(iVar1 + 4));
              }
              else {
                FUN_000107c2((uint)*(ushort *)(iVar1 + 8),(uint)*(byte *)(iVar1 + 0xc),
                             (uint)*(byte *)(iVar1 + 0xb),(uint)*(byte *)(iVar1 + 10));
              }
              FUN_000107cc(iVar1);
            }
            else {
              FUN_0001081a((undefined4 *)&stack0x00000018,iVar1);
            }
            iVar1 = FUN_000107e0(0x18,in_mstatus);
            if ((iVar1 == 0) && (in_stack_00000018 != 0)) {
              FUN_000107f6(0x18,(undefined4 *)&stack0x00000018);
            }
          }
          return uVar3;
        }
        unaff_s3 = (int **)*unaff_s3;
        param_1 = _L0(in_stack_0000000c,in_mstatus);
        if ((*(int *)(unaff_s1 + 0x10) != 0) && (iVar1 = _LVL243(), iVar1 != 0)) {
          _L0();
        }
        puVar2 = (ushort *)((uint)*(ushort *)(param_1 + 4) * unaff_s5 + unaff_s4);
        *puVar2 = *puVar2 & unaff_s8;
        if (unaff_s9 < *(ushort *)(param_1 + 4)) break;
        *(char *)(unaff_s1 + 0x48) = *(char *)(unaff_s1 + 0x48) + -1;
        if (*(int *)(unaff_s1 + 0x18) == 0) {
          *(byte *)(unaff_s1 + 0x56) = *(byte *)(unaff_s1 + 0x56) & 0xfb;
        }
        FUN_0001076c(param_1);
        FUN_0001077e((uint)*(byte *)(param_1 + 0xc));
      }
    } while (*(ushort *)(param_1 + 4) <= unaff_s10);
  } while( true );
}



undefined4 FUN_000107c2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int unaff_s1;
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  undefined4 unaff_s5;
  uint unaff_s6;
  undefined4 in_mstatus;
  int in_stack_00000018;
  
  do {
    FUN_000107c2(param_1,param_2,param_3,param_4);
    while( true ) {
      FUN_000107cc(unaff_s1);
      while( true ) {
        unaff_s1 = FUN_000107e0(unaff_s3 + 0x18,in_mstatus);
        if ((unaff_s1 == 0) && (in_stack_00000018 != 0)) {
          FUN_000107f6(unaff_s3 + 0x18,(undefined4 *)&stack0x00000018);
        }
        if (unaff_s1 == 0) {
          return unaff_s5;
        }
        if (*(ushort *)(unaff_s1 + 6) == unaff_s2) break;
        FUN_0001081a((undefined4 *)&stack0x00000018,unaff_s1);
      }
      param_1 = (uint)*(ushort *)(unaff_s1 + 8);
      if (unaff_s6 < unaff_s4) break;
      unaff_s5 = FUN_0001080a((uint)*(byte *)(unaff_s1 + 4));
    }
    param_4 = (uint)*(byte *)(unaff_s1 + 10);
    param_3 = (uint)*(byte *)(unaff_s1 + 0xb);
    param_2 = (uint)*(byte *)(unaff_s1 + 0xc);
  } while( true );
}



undefined4 FUN_000107cc(int param_1)

{
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  undefined4 unaff_s5;
  uint unaff_s6;
  undefined4 in_mstatus;
  int in_stack_00000018;
  
  do {
    FUN_000107cc(param_1);
    while( true ) {
      param_1 = FUN_000107e0(unaff_s3 + 0x18,in_mstatus);
      if ((param_1 == 0) && (in_stack_00000018 != 0)) {
        FUN_000107f6(unaff_s3 + 0x18,(undefined4 *)&stack0x00000018);
      }
      if (param_1 == 0) {
        return unaff_s5;
      }
      if (*(ushort *)(param_1 + 6) == unaff_s2) break;
      FUN_0001081a((undefined4 *)&stack0x00000018,param_1);
    }
    if (unaff_s6 < unaff_s4) {
      FUN_000107c2((uint)*(ushort *)(param_1 + 8),(uint)*(byte *)(param_1 + 0xc),
                   (uint)*(byte *)(param_1 + 0xb),(uint)*(byte *)(param_1 + 10));
    }
    else {
      unaff_s5 = FUN_0001080a((uint)*(byte *)(param_1 + 4));
    }
  } while( true );
}



undefined4 FUN_000107e0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  undefined4 unaff_s5;
  uint unaff_s6;
  undefined4 unaff_s7;
  int in_stack_00000018;
  
  while( true ) {
    iVar1 = FUN_000107e0(param_1,param_2);
    if ((iVar1 == 0) && (in_stack_00000018 != 0)) {
      FUN_000107f6(unaff_s3 + 0x18,(undefined4 *)&stack0x00000018);
    }
    if (iVar1 == 0) break;
    if (*(ushort *)(iVar1 + 6) == unaff_s2) {
      if (unaff_s6 < unaff_s4) {
        FUN_000107c2((uint)*(ushort *)(iVar1 + 8),(uint)*(byte *)(iVar1 + 0xc),
                     (uint)*(byte *)(iVar1 + 0xb),(uint)*(byte *)(iVar1 + 10));
      }
      else {
        unaff_s5 = FUN_0001080a((uint)*(byte *)(iVar1 + 4));
      }
      FUN_000107cc(iVar1);
      param_2 = unaff_s7;
    }
    else {
      FUN_0001081a((undefined4 *)&stack0x00000018,iVar1);
      param_2 = unaff_s7;
    }
    param_1 = unaff_s3 + 0x18;
    unaff_s7 = param_2;
  }
  return unaff_s5;
}



undefined4 FUN_000107f6(int param_1,undefined4 *param_2)

{
  int unaff_s1;
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  undefined4 unaff_s5;
  uint unaff_s6;
  undefined4 unaff_s7;
  int in_stack_00000018;
  
  do {
    FUN_000107f6(param_1,param_2);
    do {
      if (unaff_s1 == 0) {
        return unaff_s5;
      }
      if (*(ushort *)(unaff_s1 + 6) == unaff_s2) {
        if (unaff_s6 < unaff_s4) {
          FUN_000107c2((uint)*(ushort *)(unaff_s1 + 8),(uint)*(byte *)(unaff_s1 + 0xc),
                       (uint)*(byte *)(unaff_s1 + 0xb),(uint)*(byte *)(unaff_s1 + 10));
        }
        else {
          unaff_s5 = FUN_0001080a((uint)*(byte *)(unaff_s1 + 4));
        }
        FUN_000107cc(unaff_s1);
      }
      else {
        FUN_0001081a((undefined4 *)&stack0x00000018,unaff_s1);
      }
      unaff_s1 = FUN_000107e0(unaff_s3 + 0x18,unaff_s7);
    } while ((unaff_s1 != 0) || (in_stack_00000018 == 0));
    param_2 = (undefined4 *)&stack0x00000018;
    param_1 = unaff_s3 + 0x18;
  } while( true );
}



undefined4 FUN_0001080a(uint param_1)

{
  int unaff_s1;
  undefined4 uVar1;
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s6;
  undefined4 in_mstatus;
  int in_stack_00000018;
  
  do {
    uVar1 = FUN_0001080a(param_1);
    while( true ) {
      FUN_000107cc(unaff_s1);
      while( true ) {
        unaff_s1 = FUN_000107e0(unaff_s3 + 0x18,in_mstatus);
        if ((unaff_s1 == 0) && (in_stack_00000018 != 0)) {
          FUN_000107f6(unaff_s3 + 0x18,(undefined4 *)&stack0x00000018);
        }
        if (unaff_s1 == 0) {
          return uVar1;
        }
        if (*(ushort *)(unaff_s1 + 6) == unaff_s2) break;
        FUN_0001081a((undefined4 *)&stack0x00000018,unaff_s1);
      }
      if (unaff_s4 <= unaff_s6) break;
      FUN_000107c2((uint)*(ushort *)(unaff_s1 + 8),(uint)*(byte *)(unaff_s1 + 0xc),
                   (uint)*(byte *)(unaff_s1 + 0xb),(uint)*(byte *)(unaff_s1 + 10));
    }
    param_1 = (uint)*(byte *)(unaff_s1 + 4);
  } while( true );
}



undefined4 FUN_0001081a(undefined4 *param_1,int param_2)

{
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  undefined4 unaff_s5;
  uint unaff_s6;
  undefined4 in_mstatus;
  int in_stack_00000018;
  
  do {
    FUN_0001081a(param_1,param_2);
    while( true ) {
      param_2 = FUN_000107e0(unaff_s3 + 0x18,in_mstatus);
      if ((param_2 == 0) && (in_stack_00000018 != 0)) {
        FUN_000107f6(unaff_s3 + 0x18,(undefined4 *)&stack0x00000018);
      }
      if (param_2 == 0) {
        return unaff_s5;
      }
      if (*(ushort *)(param_2 + 6) != unaff_s2) break;
      if (unaff_s6 < unaff_s4) {
        FUN_000107c2((uint)*(ushort *)(param_2 + 8),(uint)*(byte *)(param_2 + 0xc),
                     (uint)*(byte *)(param_2 + 0xb),(uint)*(byte *)(param_2 + 10));
      }
      else {
        unaff_s5 = FUN_0001080a((uint)*(byte *)(param_2 + 4));
      }
      FUN_000107cc(param_2);
    }
    param_1 = (undefined4 *)&stack0x00000018;
  } while( true );
}



// DWARF DIE: 4053

void lld_pdu_tx_loop(lld_evt_tag *evt)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)((uint)*(ushort *)&(evt->tx_acl_rdy).last[1].next * 10 + 0x280082ca);
  *puVar1 = *(short *)&(evt->tx_acl_rdy).first[1].next * 10 + 0x2caU | *puVar1 & 0x8000;
  return;
}



// DWARF DIE: 3ef9

void lld_pdu_data_tx_push(lld_evt_tag *evt,em_desc_node *txnode,_Bool can_be_freed,_Bool encrypted)

{
  undefined3 in_register_00002031;
  undefined3 in_register_00002035;
  ushort *puVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)&txnode->idx * 10;
  *(undefined2 *)(iVar2 + 0x280082ca) = 0;
  if (CONCAT31(in_register_00002035,encrypted) != 0) {
    txnode->length = txnode->length + '\x04';
  }
  *(undefined2 *)(iVar2 + 0x280082cc) = *(undefined2 *)&txnode->llid;
  *(uint16_t *)(iVar2 + 0x280082ce) = txnode->buffer_ptr;
  if (CONCAT31(in_register_00002031,can_be_freed) != 0) {
    *(uint16_t *)(iVar2 + 0x280082d2) = txnode->buffer_idx | 0x8000;
    *(char *)&(evt->evt).field_0x1c = *(char *)&(evt->evt).field_0x1c + '\x01';
  }
  if (((evt->tx_prog).first == (co_list_hdr *)0x0) ||
     (puVar1 = (ushort *)((uint)*(ushort *)&(evt->tx_prog).last[1].next * 10 + 0x280082ca),
     *puVar1 = txnode->idx * 10 + 0x2ca | *puVar1 & 0x8000,
     (evt->tx_prog).first == (co_list_hdr *)0x0)) {
    (evt->tx_prog).first = (co_list_hdr *)txnode;
  }
  else {
    ((evt->tx_prog).last)->next = (co_list_hdr *)txnode;
  }
  (evt->tx_prog).last = (co_list_hdr *)txnode;
  (txnode->hdr).next = (co_list_hdr *)0x0;
  return;
}



// DWARF DIE: 3df5

_Bool lld_pdu_data_send(void *param)

{
  bool bVar1;
  undefined3 extraout_var;
  int extraout_a0;
  
  bVar1 = _L0();
  extraout_a0 = CONCAT31(extraout_var,bVar1);
  if (extraout_a0 != 0) {
    *(undefined4 *)(extraout_a0 + 0xc) = *(undefined4 *)((int)param + 8);
                    // WARNING: Load size is inaccurate
    *(undefined2 *)(extraout_a0 + 6) = *param;
    *(undefined2 *)(extraout_a0 + 8) = *(undefined2 *)((int)param + 4);
    *(undefined *)(extraout_a0 + 10) = *(undefined *)((int)param + 2);
    *(undefined2 *)(extraout_a0 + 4) = 0x1a;
    _L0();
  }
  return (_Bool)(extraout_a0 != 0);
}



bool _L0(void)

{
  undefined2 *unaff_s0;
  bool bVar1;
  undefined3 extraout_var;
  int extraout_a0;
  
  bVar1 = _L0();
  extraout_a0 = CONCAT31(extraout_var,bVar1);
  if (extraout_a0 != 0) {
    *(undefined4 *)(extraout_a0 + 0xc) = *(undefined4 *)(unaff_s0 + 4);
    *(undefined2 *)(extraout_a0 + 6) = *unaff_s0;
    *(undefined2 *)(extraout_a0 + 8) = unaff_s0[2];
    *(undefined *)(extraout_a0 + 10) = *(undefined *)(unaff_s0 + 1);
    *(undefined2 *)(extraout_a0 + 4) = 0x1a;
    _L0();
  }
  return extraout_a0 != 0;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// DWARF DIE: 3cc1

void lld_pdu_tx_push(ea_elt_tag *elt,em_desc_node *txnode)

{
  ushort *puVar1;
  
  *(undefined2 *)((uint)txnode->idx * 10 + 0x280082ca) = 0;
  if (elt[1].linked_element != (ea_elt_tag *)0x0) {
    puVar1 = (ushort *)((uint)*(ushort *)(elt[1].timestamp + 4) * 10 + 0x280082ca);
    *puVar1 = txnode->idx * 10 + 0x2ca | *puVar1 & 0x8000;
  }
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 358d

void lld_pdu_tx_prog(lld_evt_tag *evt)

{
  byte bVar1;
  int *piVar2;
  uint extraout_a0;
  uint uVar3;
  uint extraout_a0_00;
  int extraout_a0_01;
  uint extraout_a0_02;
  int extraout_a0_03;
  uint uVar4;
  ushort *puVar5;
  byte bVar6;
  co_list_hdr *pcVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  co_list_hdr *pcVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  undefined2 uVar19;
  byte bStack65;
  uint8_t length;
  
  piVar2 = (int *)(evt->tx_llcp_pdu_rdy).first;
  uVar14 = (uint)evt->conhdl;
  if ((piVar2 != (int *)0x0) && (*(short *)(uVar14 * 10 + 0x280082ca) < 0)) {
    bVar1 = *(byte *)(*(int *)(uVar14 * 4) + 0xa5);
    if ((bVar1 & 4) == 0) {
_L0:
      FUN_00010c4e();
      pbVar16 = (byte *)piVar2[2];
      if ((*(int *)((uint)*pbVar16 * 0xc + 4) != 0) && (FUN_00010c7a(), extraout_a0_03 == 0)) {
        (*_uRam00000000)(*(ushort *)((uint)*(ushort *)(piVar2 + 1) * 10 + 0x280082ce) + 0x28008000,
                         pbVar16,bStack65,_uRam00000000);
        FUN_00010cb4();
        if ((*(byte *)(*(int *)(uVar14 * 4) + 0xa5) & 1) != 0) {
          bStack65 += 4;
        }
        puVar5 = (ushort *)(uVar14 * 10 + 0x280082cc);
        *puVar5 = (ushort)bStack65 << 8 | *puVar5 & 0xff;
        *puVar5 = *puVar5 & 0xfffc | 3;
        *(undefined2 *)((uint)evt->conhdl * 10 + 0x280082ca) = 0;
        if ((evt->tx_prog).first != (co_list_hdr *)0x0) {
          puVar5 = (ushort *)((uint)*(ushort *)&(evt->tx_prog).last[1].next * 10 + 0x280082ca);
          *puVar5 = *(short *)(piVar2 + 1) * 10 + 0x2caU | *puVar5 & 0x8000;
        }
        FUN_00010d50();
        *(char *)&(evt->evt).field_0x1c = *(char *)&(evt->evt).field_0x1c + '\x01';
      }
    }
    else {
      do {
        if ((bVar1 & 0x20) == 0) {
          _L0((uint)*(byte *)(piVar2 + 3));
          uVar3 = extraout_a0_02 & 1;
        }
        else {
          _L0((uint)*(byte *)(piVar2 + 3));
          uVar3 = extraout_a0 & 2;
        }
        if (uVar3 != 0) goto _L0;
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
  }
  bVar1 = 1;
  if (evt->conhdl < 2) {
    bVar1 = (*(byte *)(*(int *)(uVar14 * 4) + 0xa5) >> 2 ^ 1) & 1;
  }
  if (((evt->tx_acl_rdy).first != (co_list_hdr *)0x0) && (bVar1 != 0)) {
    if (evt->conhdl < 2) {
      FUN_00010acc();
      pcVar15 = (evt->tx_acl_rdy).first;
      if (pcVar15 != (co_list_hdr *)0x0) {
        uVar3 = (uint)*(byte *)(*(int *)((uint)evt->conhdl * 4) + 0xa5);
        pcVar7 = pcVar15->next;
        (evt->tx_acl_rdy).first = pcVar7;
        if (pcVar7 == (co_list_hdr *)0x0) {
          (evt->tx_acl_rdy).last = (co_list_hdr *)0x0;
        }
        uVar11 = uVar3 & 1;
        uVar3 &= 1;
        uVar12 = 0;
        uVar13 = extraout_a0_00;
        while( true ) {
          uVar17 = SEXT24(*(short *)&pcVar15[2].next);
          uVar4 = (uint)*(ushort *)&(evt->evt).field_0x16;
          uVar8 = (uint)*(ushort *)&(evt->evt).field_0x14;
          uVar18 = uVar4 & 0xff;
          if (uVar8 < (uVar17 + 10 + ((uVar3 << 0x12) >> 0x10)) * 0x80000 >> 0x10) {
            uVar8 = (int)(uVar8 + uVar3 * -0x20 + -0x50) >> 3;
            if ((int)(uVar4 + uVar3 * -4) < (int)(uVar8 & 0xff)) {
              uVar18 = uVar18 + uVar3 * -4 & 0xff;
            }
            else {
              uVar18 = uVar8 & 0xff;
            }
          }
          if ((int)uVar18 < (int)uVar17) {
            uVar18 &= 0xfe;
          }
          uVar4 = (int)(uVar17 - 1) / (int)uVar18 + 1U & 0xff;
          if (uVar13 < uVar4) {
            pcVar7 = (evt->tx_acl_rdy).first;
            if (pcVar7 == (co_list_hdr *)0x0) {
              (evt->tx_acl_rdy).last = pcVar15;
            }
            pcVar15->next = pcVar7;
            (evt->tx_acl_rdy).first = pcVar15;
            goto _L0;
          }
          uVar19 = 0;
          uVar8 = 0;
          bVar6 = bVar1;
          while( true ) {
            FUN_00010b90(0);
            if (bVar6 == 0) {
              *(undefined *)(extraout_a0_01 + 10) = 1;
              uVar8 = uVar18 + uVar8 & 0xffff;
            }
            else {
              bVar6 = *(byte *)((int)&pcVar15[2].next + 2) & 3;
              if (bVar6 != 1) {
                bVar6 = 2;
              }
              *(byte *)(extraout_a0_01 + 10) = bVar6;
              uVar8 = (uint)*(ushort *)((int)&pcVar15[3].next[1].next + 2);
              uVar19 = *(undefined2 *)&pcVar15[3].next[1].next;
            }
            uVar9 = uVar18;
            if ((int)uVar17 <= (int)uVar18) {
              uVar9 = uVar17 & 0xff;
            }
            *(char *)(extraout_a0_01 + 0xb) = (char)uVar9;
            *(undefined2 *)(extraout_a0_01 + 6) = uVar19;
            *(short *)(extraout_a0_01 + 8) = (short)uVar8;
            uVar17 = (int)((uVar17 - uVar18) * 0x10000) >> 0x10;
            if ((int)uVar17 < 1) break;
            _LVL384(0,uVar11);
            bVar6 = 0;
          }
          _LVL349(1,uVar11);
          uVar12 = uVar12 + uVar4 & 0xff;
          uVar13 = uVar13 - uVar4 & 0xffff;
          if ((evt->tx_acl_tofree).first == (co_list_hdr *)0x0) {
            (evt->tx_acl_tofree).first = pcVar15;
          }
          else {
            ((evt->tx_acl_tofree).last)->next = pcVar15;
          }
          (evt->tx_acl_tofree).last = pcVar15;
          pcVar15->next = (co_list_hdr *)0x0;
          if (10 < uVar12) goto _L0;
          pcVar15 = (evt->tx_acl_rdy).first;
          if (pcVar15 == (co_list_hdr *)0x0) break;
          pcVar7 = pcVar15->next;
          (evt->tx_acl_rdy).first = pcVar7;
          if (pcVar7 == (co_list_hdr *)0x0) {
            (evt->tx_acl_rdy).last = (co_list_hdr *)0x0;
          }
        }
      }
    }
    else {
      FUN_00010e50();
    }
    FUN_00010e5a();
  }
_L0:
  piVar2 = (int *)(evt->tx_prog).first;
  puVar5 = (ushort *)(uVar14 * 0x5c + 0x2800808e);
  if (piVar2 == (int *)0x0) {
    *puVar5 = (ushort)(((uint)_uRam00000000 & 1) << 10) | *puVar5 & 0x1f |
              ((byte)uRam00000000 & 2) << 8 | ((byte)uRam00000000 & 4) << 6 | 0xf000;
    sVar10 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar2 + 1) * 10 + 0x280082ca)) {
        sVar10 = *(ushort *)(piVar2 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
    sVar10 = 0;
_L0:
    *puVar5 = (ushort)((uRam00000000._1_1_ & 1) << 10) | *puVar5 & 0x1f |
              (uRam00000000._1_1_ & 2) << 8 | (uRam00000000._1_1_ & 4) << 6 | 0xf000;
  }
  *(short *)(uVar14 * 0x5c + 0x280080a4) = sVar10;
  return;
}



void _L0(uint param_1)

{
  byte bVar1;
  int *unaff_s0;
  uint extraout_a0;
  uint uVar2;
  uint extraout_a0_00;
  int extraout_a0_01;
  uint extraout_a0_02;
  int extraout_a0_03;
  ushort *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s3;
  uint uVar10;
  int unaff_s4;
  uint uVar11;
  int unaff_s5;
  int unaff_s6;
  int *piVar12;
  byte *pbVar13;
  int unaff_s7;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined2 uVar17;
  int iStack00000008;
  byte in_stack_0000002f;
  
code_r0x00010a74:
  _L0(param_1);
  uVar2 = extraout_a0 & 2;
  do {
    if (uVar2 != 0) {
      FUN_00010c4e();
      pbVar13 = (byte *)unaff_s0[2];
      if ((*(int *)((uint)*pbVar13 * 0xc + 4) != 0) && (FUN_00010c7a(), extraout_a0_03 == 0)) {
        (*_uRam00000000)(*(ushort *)((uint)*(ushort *)(unaff_s0 + 1) * 10 + 0x280082ce) + 0x28008000
                         ,pbVar13,in_stack_0000002f,_uRam00000000);
        FUN_00010cb4();
        if ((*(byte *)(*(int *)(unaff_s3 + unaff_s4) + 0xa5) & 1) != 0) {
          in_stack_0000002f += 4;
        }
        puVar3 = (ushort *)(unaff_s2 + 0x280082cc);
        *puVar3 = (ushort)in_stack_0000002f << 8 | *puVar3 & 0xff;
        *puVar3 = *puVar3 & 0xfffc | 3;
        *(undefined2 *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 10 + 0x280082ca) = 0;
        if (*(int *)(unaff_s7 + 0x20) != 0) {
          puVar3 = (ushort *)((uint)*(ushort *)(*(int *)(unaff_s7 + 0x24) + 4) * 10 + 0x280082ca);
          *puVar3 = *(short *)(unaff_s0 + 1) * 10 + 0x2caU | *puVar3 & 0x8000;
        }
        FUN_00010d50();
        *(char *)(unaff_s7 + 0x48) = *(char *)(unaff_s7 + 0x48) + '\x01';
      }
_L0:
      bVar1 = 1;
      if (*(ushort *)(unaff_s7 + 0x4c) < 2) {
        bVar1 = (*(byte *)(*(int *)(unaff_s5 * 4) + 0xa5) >> 2 ^ 1) & 1;
      }
      if ((*(int *)(unaff_s7 + 8) == 0) || (bVar1 == 0)) goto _L0;
      iStack00000008 = unaff_s7 + 8;
      if (1 < *(ushort *)(unaff_s7 + 0x4c)) {
        FUN_00010e50();
        goto _L0;
      }
      FUN_00010acc();
      piVar12 = *(int **)(unaff_s7 + 8);
      if (piVar12 == (int *)0x0) goto _L0;
      uVar2 = (uint)*(byte *)(*(int *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 4) + 0xa5);
      iVar5 = *piVar12;
      *(int *)(unaff_s7 + 8) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(unaff_s7 + 0xc) = 0;
      }
      uVar9 = uVar2 & 1;
      uVar2 &= 1;
      uVar10 = 0;
      uVar11 = extraout_a0_00;
      break;
    }
    unaff_s0 = (int *)*unaff_s0;
    if (unaff_s0 == (int *)0x0) goto _L0;
    param_1 = (uint)*(byte *)(unaff_s0 + 3);
    if (unaff_s6 != 0) goto code_r0x00010a74;
    _L0(param_1);
    uVar2 = extraout_a0_02 & 1;
  } while( true );
_L0:
  uVar14 = SEXT24(*(short *)(piVar12 + 2));
  uVar15 = *(ushort *)(unaff_s7 + 0x42) & 0xff;
  if ((uint)*(ushort *)(unaff_s7 + 0x40) <
      (uVar14 + 10 + ((uVar2 << 0x12) >> 0x10)) * 0x80000 >> 0x10) {
    uVar6 = (int)((uint)*(ushort *)(unaff_s7 + 0x40) + uVar2 * -0x20 + -0x50) >> 3;
    if ((int)((uint)*(ushort *)(unaff_s7 + 0x42) + uVar2 * -4) < (int)(uVar6 & 0xff)) {
      uVar15 = uVar15 + uVar2 * -4 & 0xff;
    }
    else {
      uVar15 = uVar6 & 0xff;
    }
  }
  if ((int)uVar15 < (int)uVar14) {
    uVar15 &= 0xfe;
  }
  uVar6 = (int)(uVar14 - 1) / (int)uVar15 + 1U & 0xff;
  if (uVar11 < uVar6) {
    if (*(int *)(unaff_s7 + 8) == 0) {
      *(int **)(unaff_s7 + 0xc) = piVar12;
    }
    *piVar12 = *(int *)(unaff_s7 + 8);
    *(int **)(unaff_s7 + 8) = piVar12;
    goto _L0;
  }
  uVar17 = 0;
  uVar16 = 0;
  bVar4 = bVar1;
  while( true ) {
    FUN_00010b90(0);
    if (bVar4 == 0) {
      *(undefined *)(extraout_a0_01 + 10) = 1;
      uVar16 = uVar15 + uVar16 & 0xffff;
    }
    else {
      bVar4 = *(byte *)((int)piVar12 + 10) & 3;
      if (bVar4 != 1) {
        bVar4 = 2;
      }
      *(byte *)(extraout_a0_01 + 10) = bVar4;
      uVar16 = (uint)*(ushort *)(piVar12[3] + 6);
      uVar17 = *(undefined2 *)(piVar12[3] + 4);
    }
    uVar7 = uVar15;
    if ((int)uVar14 <= (int)uVar15) {
      uVar7 = uVar14 & 0xff;
    }
    *(char *)(extraout_a0_01 + 0xb) = (char)uVar7;
    *(undefined2 *)(extraout_a0_01 + 6) = uVar17;
    *(short *)(extraout_a0_01 + 8) = (short)uVar16;
    uVar14 = (int)((uVar14 - uVar15) * 0x10000) >> 0x10;
    if ((int)uVar14 < 1) break;
    _LVL384(0,uVar9);
    bVar4 = 0;
  }
  _LVL349(1,uVar9);
  uVar10 = uVar10 + uVar6 & 0xff;
  uVar11 = uVar11 - uVar6 & 0xffff;
  if (*(int *)(unaff_s7 + 0x10) == 0) {
    *(int **)(unaff_s7 + 0x10) = piVar12;
  }
  else {
    **(int ***)(unaff_s7 + 0x14) = piVar12;
  }
  *(int **)(unaff_s7 + 0x14) = piVar12;
  *piVar12 = 0;
  if (10 < uVar10) goto _L0;
  piVar12 = *(int **)(unaff_s7 + 8);
  if (piVar12 != (int *)0x0) {
    iVar5 = *piVar12;
    *(int *)(unaff_s7 + 8) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(unaff_s7 + 0xc) = 0;
    }
    goto _L0;
  }
_L0:
  FUN_00010e5a();
_L0:
  piVar12 = *(int **)(unaff_s7 + 0x20);
  puVar3 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar12 == (int *)0x0) {
    *puVar3 = (ushort)(((uint)_uRam00000000 & 1) << 10) | *puVar3 & 0x1f |
              ((byte)uRam00000000 & 2) << 8 | ((byte)uRam00000000 & 4) << 6 | 0xf000;
    sVar8 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar12 + 1) * 10 + 0x280082ca)) {
        sVar8 = *(ushort *)(piVar12 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)0x0);
    sVar8 = 0;
_L0:
    *puVar3 = (ushort)((uRam00000000._1_1_ & 1) << 10) | *puVar3 & 0x1f |
              (uRam00000000._1_1_ & 2) << 8 | (uRam00000000._1_1_ & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar8;
  return;
}



void FUN_00010acc(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  uint uVar1;
  uint extraout_a0;
  int extraout_a0_00;
  ushort *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_s5;
  int *piVar11;
  int unaff_s7;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  
  FUN_00010acc();
  piVar11 = *(int **)(unaff_s7 + 8);
  if (piVar11 != (int *)0x0) {
    uVar1 = (uint)*(byte *)(*(int *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 4) + 0xa5);
    iVar4 = *piVar11;
    *(int *)(unaff_s7 + 8) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(unaff_s7 + 0xc) = 0;
    }
    uVar8 = uVar1 & 1;
    uVar1 &= 1;
    uVar9 = 0;
    uVar10 = extraout_a0;
    while( true ) {
      uVar12 = SEXT24(*(short *)(piVar11 + 2));
      uVar13 = *(ushort *)(unaff_s7 + 0x42) & 0xff;
      if ((uint)*(ushort *)(unaff_s7 + 0x40) <
          (uVar12 + 10 + ((uVar1 << 0x12) >> 0x10)) * 0x80000 >> 0x10) {
        uVar5 = (int)((uint)*(ushort *)(unaff_s7 + 0x40) + uVar1 * -0x20 + -0x50) >> 3;
        if ((int)((uint)*(ushort *)(unaff_s7 + 0x42) + uVar1 * -4) < (int)(uVar5 & 0xff)) {
          uVar13 = uVar13 + uVar1 * -4 & 0xff;
        }
        else {
          uVar13 = uVar5 & 0xff;
        }
      }
      if ((int)uVar13 < (int)uVar12) {
        uVar13 &= 0xfe;
      }
      uVar5 = (int)(uVar12 - 1) / (int)uVar13 + 1U & 0xff;
      if (uVar10 < uVar5) {
        if (*(int *)(unaff_s7 + 8) == 0) {
          *(int **)(unaff_s7 + 0xc) = piVar11;
        }
        *piVar11 = *(int *)(unaff_s7 + 8);
        *(int **)(unaff_s7 + 8) = piVar11;
        goto _L0;
      }
      uVar15 = 0;
      uVar14 = 0;
      iVar4 = unaff_s0;
      while( true ) {
        FUN_00010b90(unaff_s1);
        if (iVar4 == 0) {
          *(undefined *)(extraout_a0_00 + 10) = 1;
          uVar14 = uVar13 + uVar14 & 0xffff;
        }
        else {
          bVar3 = *(byte *)((int)piVar11 + 10) & 3;
          if (bVar3 != 1) {
            bVar3 = 2;
          }
          *(byte *)(extraout_a0_00 + 10) = bVar3;
          uVar14 = (uint)*(ushort *)(piVar11[3] + 6);
          uVar15 = *(undefined2 *)(piVar11[3] + 4);
        }
        uVar6 = uVar13;
        if ((int)uVar12 <= (int)uVar13) {
          uVar6 = uVar12 & 0xff;
        }
        *(char *)(extraout_a0_00 + 0xb) = (char)uVar6;
        *(undefined2 *)(extraout_a0_00 + 6) = uVar15;
        *(short *)(extraout_a0_00 + 8) = (short)uVar14;
        uVar12 = (int)((uVar12 - uVar13) * 0x10000) >> 0x10;
        if ((int)uVar12 < 1) break;
        _LVL384(0,uVar8);
        iVar4 = 0;
      }
      _LVL349(1,uVar8);
      uVar9 = uVar9 + uVar5 & 0xff;
      uVar10 = uVar10 - uVar5 & 0xffff;
      if (*(int *)(unaff_s7 + 0x10) == 0) {
        *(int **)(unaff_s7 + 0x10) = piVar11;
      }
      else {
        **(int ***)(unaff_s7 + 0x14) = piVar11;
      }
      *(int **)(unaff_s7 + 0x14) = piVar11;
      *piVar11 = 0;
      if (10 < uVar9) goto _L0;
      piVar11 = *(int **)(unaff_s7 + 8);
      if (piVar11 == (int *)0x0) break;
      iVar4 = *piVar11;
      *(int *)(unaff_s7 + 8) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(unaff_s7 + 0xc) = 0;
      }
    }
  }
  FUN_00010e5a();
_L0:
  piVar11 = *(int **)(unaff_s7 + 0x20);
  puVar2 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar11 == (int *)0x0) {
    *puVar2 = (ushort)((bRam00000000 & 1) << 10) | *puVar2 & 0x1f | (bRam00000000 & 2) << 8 |
              (bRam00000000 & 4) << 6 | 0xf000;
    sVar7 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar11 + 1) * 10 + 0x280082ca)) {
        sVar7 = *(ushort *)(piVar11 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
    sVar7 = 0;
_L0:
    *puVar2 = (ushort)((bRam00000001 & 1) << 10) | *puVar2 & 0x1f | (bRam00000001 & 2) << 8 |
              (bRam00000001 & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar7;
  return;
}



void FUN_00010b90(undefined4 param_1)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  undefined2 unaff_s11;
  uint in_stack_00000000;
  undefined4 in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  
  while( true ) {
    while( true ) {
      FUN_00010b90(param_1);
      if (in_stack_0000001c == 0) {
        *(undefined *)(extraout_a0 + 10) = 1;
        unaff_s10 = in_stack_00000000 + unaff_s10 & 0xffff;
      }
      else {
        bVar2 = *(byte *)((int)unaff_s6 + 10) & 3;
        if (bVar2 != 1) {
          bVar2 = 2;
        }
        *(byte *)(extraout_a0 + 10) = bVar2;
        unaff_s10 = (uint)*(ushort *)(unaff_s6[3] + 6);
        unaff_s11 = *(undefined2 *)(unaff_s6[3] + 4);
      }
      uVar3 = unaff_s9;
      if ((int)unaff_s8 <= (int)unaff_s9) {
        uVar3 = unaff_s8 & 0xff;
      }
      *(char *)(extraout_a0 + 0xb) = (char)uVar3;
      *(undefined2 *)(extraout_a0 + 6) = unaff_s11;
      *(short *)(extraout_a0 + 8) = (short)unaff_s10;
      unaff_s8 = (int)((unaff_s8 - in_stack_00000000) * 0x10000) >> 0x10;
      param_1 = in_stack_00000018;
      if ((int)unaff_s8 < 1) break;
      _LVL384(0,in_stack_00000004);
      in_stack_0000001c = 0;
    }
    _LVL349(1,in_stack_00000004);
    unaff_s3 = unaff_s3 + unaff_s2 & 0xff;
    unaff_s4 = unaff_s4 - in_stack_00000014 & 0xffff;
    if (*(int *)(unaff_s7 + 0x10) == 0) {
      *(int **)(unaff_s7 + 0x10) = unaff_s6;
    }
    else {
      **(int ***)(unaff_s7 + 0x14) = unaff_s6;
    }
    *(int **)(unaff_s7 + 0x14) = unaff_s6;
    *unaff_s6 = 0;
    if (10 < unaff_s3) goto _L0;
    unaff_s6 = *(int **)(unaff_s7 + 8);
    if (unaff_s6 == (int *)0x0) {
      FUN_00010e5a();
      goto _L0;
    }
    iVar4 = *unaff_s6;
    *(int *)(unaff_s7 + 8) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(unaff_s7 + 0xc) = 0;
    }
    unaff_s8 = SEXT24(*(short *)(unaff_s6 + 2));
    unaff_s9 = *(ushort *)(unaff_s7 + 0x42) & 0xff;
    if ((uint)*(ushort *)(unaff_s7 + 0x40) < (unaff_s8 + 10 + in_stack_0000000c) * 0x80000 >> 0x10)
    {
      uVar3 = (int)(((uint)*(ushort *)(unaff_s7 + 0x40) - in_stack_00000010) + -0x50) >> 3;
      if ((int)((uint)*(ushort *)(unaff_s7 + 0x42) - unaff_s1) < (int)(uVar3 & 0xff)) {
        unaff_s9 = unaff_s9 - unaff_s1 & 0xff;
      }
      else {
        unaff_s9 = uVar3 & 0xff;
      }
    }
    if ((int)unaff_s9 < (int)unaff_s8) {
      unaff_s9 &= 0xfe;
    }
    unaff_s2 = (int)(unaff_s8 - 1) / (int)unaff_s9 + 1U & 0xff;
    if (unaff_s4 < unaff_s2) break;
    unaff_s11 = 0;
    unaff_s10 = 0;
    in_stack_00000000 = unaff_s9;
    in_stack_00000014 = unaff_s2;
    in_stack_0000001c = unaff_s0;
  }
  if (*(int *)(unaff_s7 + 8) == 0) {
    *(int **)(unaff_s7 + 0xc) = unaff_s6;
  }
  *unaff_s6 = *(int *)(unaff_s7 + 8);
  *(int **)(unaff_s7 + 8) = unaff_s6;
_L0:
  piVar6 = *(int **)(unaff_s7 + 0x20);
  puVar1 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar6 == (int *)0x0) {
    *puVar1 = (ushort)((bRam00000000 & 1) << 10) | *puVar1 & 0x1f | (bRam00000000 & 2) << 8 |
              (bRam00000000 & 4) << 6 | 0xf000;
    sVar5 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar6 + 1) * 10 + 0x280082ca)) {
        sVar5 = *(ushort *)(piVar6 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
    sVar5 = 0;
_L0:
    *puVar1 = (ushort)((bRam00000001 & 1) << 10) | *puVar1 & 0x1f | (bRam00000001 & 2) << 8 |
              (bRam00000001 & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar5;
  return;
}



void _LVL349(undefined4 param_1,undefined4 param_2)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int *piVar7;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined4 in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while( true ) {
    _LVL349(param_1,param_2);
    unaff_s3 = unaff_s3 + unaff_s2 & 0xff;
    unaff_s4 = unaff_s4 - in_stack_00000014 & 0xffff;
    if (*(int *)(unaff_s7 + 0x10) == 0) {
      *(int **)(unaff_s7 + 0x10) = unaff_s6;
    }
    else {
      **(int ***)(unaff_s7 + 0x14) = unaff_s6;
    }
    *(int **)(unaff_s7 + 0x14) = unaff_s6;
    *unaff_s6 = 0;
    if (10 < unaff_s3) goto _L0;
    unaff_s6 = *(int **)(unaff_s7 + 8);
    if (unaff_s6 == (int *)0x0) {
      FUN_00010e5a();
      goto _L0;
    }
    iVar5 = *unaff_s6;
    *(int *)(unaff_s7 + 8) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(unaff_s7 + 0xc) = 0;
    }
    uVar8 = SEXT24(*(short *)(unaff_s6 + 2));
    uVar9 = *(ushort *)(unaff_s7 + 0x42) & 0xff;
    if ((uint)*(ushort *)(unaff_s7 + 0x40) < (uVar8 + 10 + in_stack_0000000c) * 0x80000 >> 0x10) {
      uVar3 = (int)(((uint)*(ushort *)(unaff_s7 + 0x40) - in_stack_00000010) + -0x50) >> 3;
      if ((int)((uint)*(ushort *)(unaff_s7 + 0x42) - unaff_s1) < (int)(uVar3 & 0xff)) {
        uVar9 = uVar9 - unaff_s1 & 0xff;
      }
      else {
        uVar9 = uVar3 & 0xff;
      }
    }
    if ((int)uVar9 < (int)uVar8) {
      uVar9 &= 0xfe;
    }
    unaff_s2 = (int)(uVar8 - 1) / (int)uVar9 + 1U & 0xff;
    if (unaff_s4 < unaff_s2) break;
    uVar10 = 0;
    uVar3 = 0;
    iVar5 = unaff_s0;
    while( true ) {
      FUN_00010b90(in_stack_00000018);
      if (iVar5 == 0) {
        *(undefined *)(extraout_a0 + 10) = 1;
        uVar3 = uVar9 + uVar3 & 0xffff;
      }
      else {
        bVar2 = *(byte *)((int)unaff_s6 + 10) & 3;
        if (bVar2 != 1) {
          bVar2 = 2;
        }
        *(byte *)(extraout_a0 + 10) = bVar2;
        uVar3 = (uint)*(ushort *)(unaff_s6[3] + 6);
        uVar10 = *(undefined2 *)(unaff_s6[3] + 4);
      }
      uVar4 = uVar9;
      if ((int)uVar8 <= (int)uVar9) {
        uVar4 = uVar8 & 0xff;
      }
      *(char *)(extraout_a0 + 0xb) = (char)uVar4;
      *(undefined2 *)(extraout_a0 + 6) = uVar10;
      *(short *)(extraout_a0 + 8) = (short)uVar3;
      uVar8 = (int)((uVar8 - uVar9) * 0x10000) >> 0x10;
      if ((int)uVar8 < 1) break;
      _LVL384(0,in_stack_00000004);
      iVar5 = 0;
    }
    param_1 = 1;
    param_2 = in_stack_00000004;
    in_stack_00000014 = unaff_s2;
  }
  if (*(int *)(unaff_s7 + 8) == 0) {
    *(int **)(unaff_s7 + 0xc) = unaff_s6;
  }
  *unaff_s6 = *(int *)(unaff_s7 + 8);
  *(int **)(unaff_s7 + 8) = unaff_s6;
_L0:
  piVar7 = *(int **)(unaff_s7 + 0x20);
  puVar1 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar7 == (int *)0x0) {
    *puVar1 = (ushort)((bRam00000000 & 1) << 10) | *puVar1 & 0x1f | (bRam00000000 & 2) << 8 |
              (bRam00000000 & 4) << 6 | 0xf000;
    sVar6 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar7 + 1) * 10 + 0x280082ca)) {
        sVar6 = *(ushort *)(piVar7 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
    sVar6 = 0;
_L0:
    *puVar1 = (ushort)((bRam00000001 & 1) << 10) | *puVar1 & 0x1f | (bRam00000001 & 2) << 8 |
              (bRam00000001 & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar6;
  return;
}



void _L0(uint param_1)

{
  byte bVar1;
  int *unaff_s0;
  uint extraout_a0;
  uint extraout_a0_00;
  int extraout_a0_01;
  uint extraout_a0_02;
  uint uVar2;
  int extraout_a0_03;
  ushort *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int unaff_s2;
  uint uVar10;
  int unaff_s3;
  uint uVar11;
  int unaff_s4;
  int unaff_s5;
  int *piVar12;
  int unaff_s6;
  byte *pbVar13;
  int unaff_s7;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined2 uVar17;
  int iStack00000008;
  byte in_stack_0000002f;
  
code_r0x00010c3a:
  _L0(param_1);
  uVar2 = extraout_a0_02 & 1;
  do {
    if (uVar2 != 0) {
      FUN_00010c4e();
      pbVar13 = (byte *)unaff_s0[2];
      if ((*(int *)((uint)*pbVar13 * 0xc + 4) != 0) && (FUN_00010c7a(), extraout_a0_03 == 0)) {
        (*_uRam00000000)(*(ushort *)((uint)*(ushort *)(unaff_s0 + 1) * 10 + 0x280082ce) + 0x28008000
                         ,pbVar13,in_stack_0000002f,_uRam00000000);
        FUN_00010cb4();
        if ((*(byte *)(*(int *)(unaff_s3 + unaff_s4) + 0xa5) & 1) != 0) {
          in_stack_0000002f += 4;
        }
        puVar3 = (ushort *)(unaff_s2 + 0x280082cc);
        *puVar3 = (ushort)in_stack_0000002f << 8 | *puVar3 & 0xff;
        *puVar3 = *puVar3 & 0xfffc | 3;
        *(undefined2 *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 10 + 0x280082ca) = 0;
        if (*(int *)(unaff_s7 + 0x20) != 0) {
          puVar3 = (ushort *)((uint)*(ushort *)(*(int *)(unaff_s7 + 0x24) + 4) * 10 + 0x280082ca);
          *puVar3 = *(short *)(unaff_s0 + 1) * 10 + 0x2caU | *puVar3 & 0x8000;
        }
        FUN_00010d50();
        *(char *)(unaff_s7 + 0x48) = *(char *)(unaff_s7 + 0x48) + '\x01';
      }
_L0:
      bVar1 = 1;
      if (*(ushort *)(unaff_s7 + 0x4c) < 2) {
        bVar1 = (*(byte *)(*(int *)(unaff_s5 * 4) + 0xa5) >> 2 ^ 1) & 1;
      }
      if ((*(int *)(unaff_s7 + 8) == 0) || (bVar1 == 0)) goto _L0;
      iStack00000008 = unaff_s7 + 8;
      if (1 < *(ushort *)(unaff_s7 + 0x4c)) {
        FUN_00010e50();
        goto _L0;
      }
      FUN_00010acc();
      piVar12 = *(int **)(unaff_s7 + 8);
      if (piVar12 == (int *)0x0) goto _L0;
      uVar2 = (uint)*(byte *)(*(int *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 4) + 0xa5);
      iVar5 = *piVar12;
      *(int *)(unaff_s7 + 8) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(unaff_s7 + 0xc) = 0;
      }
      uVar9 = uVar2 & 1;
      uVar2 &= 1;
      uVar10 = 0;
      uVar11 = extraout_a0_00;
      break;
    }
    unaff_s0 = (int *)*unaff_s0;
    if (unaff_s0 == (int *)0x0) goto _L0;
    param_1 = (uint)*(byte *)(unaff_s0 + 3);
    if (unaff_s6 == 0) goto code_r0x00010c3a;
    _L0(param_1);
    uVar2 = extraout_a0 & 2;
  } while( true );
_L0:
  uVar14 = SEXT24(*(short *)(piVar12 + 2));
  uVar15 = *(ushort *)(unaff_s7 + 0x42) & 0xff;
  if ((uint)*(ushort *)(unaff_s7 + 0x40) <
      (uVar14 + 10 + ((uVar2 << 0x12) >> 0x10)) * 0x80000 >> 0x10) {
    uVar6 = (int)((uint)*(ushort *)(unaff_s7 + 0x40) + uVar2 * -0x20 + -0x50) >> 3;
    if ((int)((uint)*(ushort *)(unaff_s7 + 0x42) + uVar2 * -4) < (int)(uVar6 & 0xff)) {
      uVar15 = uVar15 + uVar2 * -4 & 0xff;
    }
    else {
      uVar15 = uVar6 & 0xff;
    }
  }
  if ((int)uVar15 < (int)uVar14) {
    uVar15 &= 0xfe;
  }
  uVar6 = (int)(uVar14 - 1) / (int)uVar15 + 1U & 0xff;
  if (uVar11 < uVar6) {
    if (*(int *)(unaff_s7 + 8) == 0) {
      *(int **)(unaff_s7 + 0xc) = piVar12;
    }
    *piVar12 = *(int *)(unaff_s7 + 8);
    *(int **)(unaff_s7 + 8) = piVar12;
    goto _L0;
  }
  uVar17 = 0;
  uVar16 = 0;
  bVar4 = bVar1;
  while( true ) {
    FUN_00010b90(0);
    if (bVar4 == 0) {
      *(undefined *)(extraout_a0_01 + 10) = 1;
      uVar16 = uVar15 + uVar16 & 0xffff;
    }
    else {
      bVar4 = *(byte *)((int)piVar12 + 10) & 3;
      if (bVar4 != 1) {
        bVar4 = 2;
      }
      *(byte *)(extraout_a0_01 + 10) = bVar4;
      uVar16 = (uint)*(ushort *)(piVar12[3] + 6);
      uVar17 = *(undefined2 *)(piVar12[3] + 4);
    }
    uVar7 = uVar15;
    if ((int)uVar14 <= (int)uVar15) {
      uVar7 = uVar14 & 0xff;
    }
    *(char *)(extraout_a0_01 + 0xb) = (char)uVar7;
    *(undefined2 *)(extraout_a0_01 + 6) = uVar17;
    *(short *)(extraout_a0_01 + 8) = (short)uVar16;
    uVar14 = (int)((uVar14 - uVar15) * 0x10000) >> 0x10;
    if ((int)uVar14 < 1) break;
    _LVL384(0,uVar9);
    bVar4 = 0;
  }
  _LVL349(1,uVar9);
  uVar10 = uVar10 + uVar6 & 0xff;
  uVar11 = uVar11 - uVar6 & 0xffff;
  if (*(int *)(unaff_s7 + 0x10) == 0) {
    *(int **)(unaff_s7 + 0x10) = piVar12;
  }
  else {
    **(int ***)(unaff_s7 + 0x14) = piVar12;
  }
  *(int **)(unaff_s7 + 0x14) = piVar12;
  *piVar12 = 0;
  if (10 < uVar10) goto _L0;
  piVar12 = *(int **)(unaff_s7 + 8);
  if (piVar12 != (int *)0x0) {
    iVar5 = *piVar12;
    *(int *)(unaff_s7 + 8) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(unaff_s7 + 0xc) = 0;
    }
    goto _L0;
  }
_L0:
  FUN_00010e5a();
_L0:
  piVar12 = *(int **)(unaff_s7 + 0x20);
  puVar3 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar12 == (int *)0x0) {
    *puVar3 = (ushort)(((uint)_uRam00000000 & 1) << 10) | *puVar3 & 0x1f |
              ((byte)uRam00000000 & 2) << 8 | ((byte)uRam00000000 & 4) << 6 | 0xf000;
    sVar8 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar12 + 1) * 10 + 0x280082ca)) {
        sVar8 = *(ushort *)(piVar12 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)0x0);
    sVar8 = 0;
_L0:
    *puVar3 = (ushort)((uRam00000000._1_1_ & 1) << 10) | *puVar3 & 0x1f |
              (uRam00000000._1_1_ & 2) << 8 | (uRam00000000._1_1_ & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar8;
  return;
}



void FUN_00010c4e(void)

{
  byte bVar1;
  int unaff_s0;
  uint uVar2;
  uint extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  ushort *puVar8;
  uint uVar9;
  int unaff_s2;
  uint uVar10;
  int unaff_s3;
  uint uVar11;
  int unaff_s4;
  int unaff_s5;
  int *piVar12;
  byte *pbVar13;
  int unaff_s7;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined2 uVar17;
  int iStack00000008;
  byte in_stack_0000002f;
  
  FUN_00010c4e();
  pbVar13 = *(byte **)(unaff_s0 + 8);
  if ((*(int *)((uint)*pbVar13 * 0xc + 4) != 0) && (FUN_00010c7a(), extraout_a0_01 == 0)) {
    (*_uRam00000000)(*(ushort *)((uint)*(ushort *)(unaff_s0 + 4) * 10 + 0x280082ce) + 0x28008000,
                     pbVar13,in_stack_0000002f,_uRam00000000);
    FUN_00010cb4();
    if ((*(byte *)(*(int *)(unaff_s3 + unaff_s4) + 0xa5) & 1) != 0) {
      in_stack_0000002f += 4;
    }
    puVar8 = (ushort *)(unaff_s2 + 0x280082cc);
    *puVar8 = (ushort)in_stack_0000002f << 8 | *puVar8 & 0xff;
    *puVar8 = *puVar8 & 0xfffc | 3;
    *(undefined2 *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 10 + 0x280082ca) = 0;
    if (*(int *)(unaff_s7 + 0x20) != 0) {
      puVar8 = (ushort *)((uint)*(ushort *)(*(int *)(unaff_s7 + 0x24) + 4) * 10 + 0x280082ca);
      *puVar8 = *(short *)(unaff_s0 + 4) * 10 + 0x2caU | *puVar8 & 0x8000;
    }
    FUN_00010d50();
    *(char *)(unaff_s7 + 0x48) = *(char *)(unaff_s7 + 0x48) + '\x01';
  }
  bVar1 = 1;
  if (*(ushort *)(unaff_s7 + 0x4c) < 2) {
    bVar1 = (*(byte *)(*(int *)(unaff_s5 * 4) + 0xa5) >> 2 ^ 1) & 1;
  }
  if ((*(int *)(unaff_s7 + 8) != 0) && (bVar1 != 0)) {
    iStack00000008 = unaff_s7 + 8;
    if (*(ushort *)(unaff_s7 + 0x4c) < 2) {
      FUN_00010acc();
      piVar12 = *(int **)(unaff_s7 + 8);
      if (piVar12 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(*(int *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 4) + 0xa5);
        iVar4 = *piVar12;
        *(int *)(unaff_s7 + 8) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(unaff_s7 + 0xc) = 0;
        }
        uVar9 = uVar2 & 1;
        uVar2 &= 1;
        uVar10 = 0;
        uVar11 = extraout_a0;
        while( true ) {
          uVar14 = SEXT24(*(short *)(piVar12 + 2));
          uVar15 = *(ushort *)(unaff_s7 + 0x42) & 0xff;
          if ((uint)*(ushort *)(unaff_s7 + 0x40) <
              (uVar14 + 10 + ((uVar2 << 0x12) >> 0x10)) * 0x80000 >> 0x10) {
            uVar5 = (int)((uint)*(ushort *)(unaff_s7 + 0x40) + uVar2 * -0x20 + -0x50) >> 3;
            if ((int)((uint)*(ushort *)(unaff_s7 + 0x42) + uVar2 * -4) < (int)(uVar5 & 0xff)) {
              uVar15 = uVar15 + uVar2 * -4 & 0xff;
            }
            else {
              uVar15 = uVar5 & 0xff;
            }
          }
          if ((int)uVar15 < (int)uVar14) {
            uVar15 &= 0xfe;
          }
          uVar5 = (int)(uVar14 - 1) / (int)uVar15 + 1U & 0xff;
          if (uVar11 < uVar5) {
            if (*(int *)(unaff_s7 + 8) == 0) {
              *(int **)(unaff_s7 + 0xc) = piVar12;
            }
            *piVar12 = *(int *)(unaff_s7 + 8);
            *(int **)(unaff_s7 + 8) = piVar12;
            goto _L0;
          }
          uVar17 = 0;
          uVar16 = 0;
          bVar3 = bVar1;
          while( true ) {
            FUN_00010b90(0);
            if (bVar3 == 0) {
              *(undefined *)(extraout_a0_00 + 10) = 1;
              uVar16 = uVar15 + uVar16 & 0xffff;
            }
            else {
              bVar3 = *(byte *)((int)piVar12 + 10) & 3;
              if (bVar3 != 1) {
                bVar3 = 2;
              }
              *(byte *)(extraout_a0_00 + 10) = bVar3;
              uVar16 = (uint)*(ushort *)(piVar12[3] + 6);
              uVar17 = *(undefined2 *)(piVar12[3] + 4);
            }
            uVar6 = uVar15;
            if ((int)uVar14 <= (int)uVar15) {
              uVar6 = uVar14 & 0xff;
            }
            *(char *)(extraout_a0_00 + 0xb) = (char)uVar6;
            *(undefined2 *)(extraout_a0_00 + 6) = uVar17;
            *(short *)(extraout_a0_00 + 8) = (short)uVar16;
            uVar14 = (int)((uVar14 - uVar15) * 0x10000) >> 0x10;
            if ((int)uVar14 < 1) break;
            _LVL384(0,uVar9);
            bVar3 = 0;
          }
          _LVL349(1,uVar9);
          uVar10 = uVar10 + uVar5 & 0xff;
          uVar11 = uVar11 - uVar5 & 0xffff;
          if (*(int *)(unaff_s7 + 0x10) == 0) {
            *(int **)(unaff_s7 + 0x10) = piVar12;
          }
          else {
            **(int ***)(unaff_s7 + 0x14) = piVar12;
          }
          *(int **)(unaff_s7 + 0x14) = piVar12;
          *piVar12 = 0;
          if (10 < uVar10) goto _L0;
          piVar12 = *(int **)(unaff_s7 + 8);
          if (piVar12 == (int *)0x0) break;
          iVar4 = *piVar12;
          *(int *)(unaff_s7 + 8) = iVar4;
          if (iVar4 == 0) {
            *(undefined4 *)(unaff_s7 + 0xc) = 0;
          }
        }
      }
    }
    else {
      FUN_00010e50();
    }
    FUN_00010e5a();
  }
_L0:
  piVar12 = *(int **)(unaff_s7 + 0x20);
  puVar8 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar12 == (int *)0x0) {
    *puVar8 = (ushort)(((uint)_uRam00000000 & 1) << 10) | *puVar8 & 0x1f |
              ((byte)uRam00000000 & 2) << 8 | ((byte)uRam00000000 & 4) << 6 | 0xf000;
    sVar7 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar12 + 1) * 10 + 0x280082ca)) {
        sVar7 = *(ushort *)(piVar12 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)0x0);
    sVar7 = 0;
_L0:
    *puVar8 = (ushort)((uRam00000000._1_1_ & 1) << 10) | *puVar8 & 0x1f |
              (uRam00000000._1_1_ & 2) << 8 | (uRam00000000._1_1_ & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar7;
  return;
}



void FUN_00010c7a(void)

{
  byte bVar1;
  int unaff_s0;
  uint uVar2;
  uint extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  ushort *puVar8;
  uint uVar9;
  int unaff_s2;
  uint uVar10;
  int unaff_s3;
  uint uVar11;
  int unaff_s4;
  int unaff_s5;
  int *piVar12;
  int unaff_s7;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 uVar16;
  int iStack00000008;
  byte in_stack_0000002f;
  
  FUN_00010c7a();
  if (extraout_a0_01 == 0) {
    (*_uRam00000000)(*(ushort *)((uint)*(ushort *)(unaff_s0 + 4) * 10 + 0x280082ce) + 0x28008000,
                     in_stack_0000002f,_uRam00000000);
    FUN_00010cb4();
    if ((*(byte *)(*(int *)(unaff_s3 + unaff_s4) + 0xa5) & 1) != 0) {
      in_stack_0000002f += 4;
    }
    puVar8 = (ushort *)(unaff_s2 + 0x280082cc);
    *puVar8 = (ushort)in_stack_0000002f << 8 | *puVar8 & 0xff;
    *puVar8 = *puVar8 & 0xfffc | 3;
    *(undefined2 *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 10 + 0x280082ca) = 0;
    if (*(int *)(unaff_s7 + 0x20) != 0) {
      puVar8 = (ushort *)((uint)*(ushort *)(*(int *)(unaff_s7 + 0x24) + 4) * 10 + 0x280082ca);
      *puVar8 = *(short *)(unaff_s0 + 4) * 10 + 0x2caU | *puVar8 & 0x8000;
    }
    FUN_00010d50();
    *(char *)(unaff_s7 + 0x48) = *(char *)(unaff_s7 + 0x48) + '\x01';
  }
  bVar1 = 1;
  if (*(ushort *)(unaff_s7 + 0x4c) < 2) {
    bVar1 = (*(byte *)(*(int *)(unaff_s5 * 4) + 0xa5) >> 2 ^ 1) & 1;
  }
  if ((*(int *)(unaff_s7 + 8) != 0) && (bVar1 != 0)) {
    iStack00000008 = unaff_s7 + 8;
    if (*(ushort *)(unaff_s7 + 0x4c) < 2) {
      FUN_00010acc();
      piVar12 = *(int **)(unaff_s7 + 8);
      if (piVar12 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(*(int *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 4) + 0xa5);
        iVar4 = *piVar12;
        *(int *)(unaff_s7 + 8) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(unaff_s7 + 0xc) = 0;
        }
        uVar9 = uVar2 & 1;
        uVar2 &= 1;
        uVar10 = 0;
        uVar11 = extraout_a0;
        while( true ) {
          uVar13 = SEXT24(*(short *)(piVar12 + 2));
          uVar14 = *(ushort *)(unaff_s7 + 0x42) & 0xff;
          if ((uint)*(ushort *)(unaff_s7 + 0x40) <
              (uVar13 + 10 + ((uVar2 << 0x12) >> 0x10)) * 0x80000 >> 0x10) {
            uVar5 = (int)((uint)*(ushort *)(unaff_s7 + 0x40) + uVar2 * -0x20 + -0x50) >> 3;
            if ((int)((uint)*(ushort *)(unaff_s7 + 0x42) + uVar2 * -4) < (int)(uVar5 & 0xff)) {
              uVar14 = uVar14 + uVar2 * -4 & 0xff;
            }
            else {
              uVar14 = uVar5 & 0xff;
            }
          }
          if ((int)uVar14 < (int)uVar13) {
            uVar14 &= 0xfe;
          }
          uVar5 = (int)(uVar13 - 1) / (int)uVar14 + 1U & 0xff;
          if (uVar11 < uVar5) {
            if (*(int *)(unaff_s7 + 8) == 0) {
              *(int **)(unaff_s7 + 0xc) = piVar12;
            }
            *piVar12 = *(int *)(unaff_s7 + 8);
            *(int **)(unaff_s7 + 8) = piVar12;
            goto _L0;
          }
          uVar16 = 0;
          uVar15 = 0;
          bVar3 = bVar1;
          while( true ) {
            FUN_00010b90(0);
            if (bVar3 == 0) {
              *(undefined *)(extraout_a0_00 + 10) = 1;
              uVar15 = uVar14 + uVar15 & 0xffff;
            }
            else {
              bVar3 = *(byte *)((int)piVar12 + 10) & 3;
              if (bVar3 != 1) {
                bVar3 = 2;
              }
              *(byte *)(extraout_a0_00 + 10) = bVar3;
              uVar15 = (uint)*(ushort *)(piVar12[3] + 6);
              uVar16 = *(undefined2 *)(piVar12[3] + 4);
            }
            uVar6 = uVar14;
            if ((int)uVar13 <= (int)uVar14) {
              uVar6 = uVar13 & 0xff;
            }
            *(char *)(extraout_a0_00 + 0xb) = (char)uVar6;
            *(undefined2 *)(extraout_a0_00 + 6) = uVar16;
            *(short *)(extraout_a0_00 + 8) = (short)uVar15;
            uVar13 = (int)((uVar13 - uVar14) * 0x10000) >> 0x10;
            if ((int)uVar13 < 1) break;
            _LVL384(0,uVar9);
            bVar3 = 0;
          }
          _LVL349(1,uVar9);
          uVar10 = uVar10 + uVar5 & 0xff;
          uVar11 = uVar11 - uVar5 & 0xffff;
          if (*(int *)(unaff_s7 + 0x10) == 0) {
            *(int **)(unaff_s7 + 0x10) = piVar12;
          }
          else {
            **(int ***)(unaff_s7 + 0x14) = piVar12;
          }
          *(int **)(unaff_s7 + 0x14) = piVar12;
          *piVar12 = 0;
          if (10 < uVar10) goto _L0;
          piVar12 = *(int **)(unaff_s7 + 8);
          if (piVar12 == (int *)0x0) break;
          iVar4 = *piVar12;
          *(int *)(unaff_s7 + 8) = iVar4;
          if (iVar4 == 0) {
            *(undefined4 *)(unaff_s7 + 0xc) = 0;
          }
        }
      }
    }
    else {
      FUN_00010e50();
    }
    FUN_00010e5a();
  }
_L0:
  piVar12 = *(int **)(unaff_s7 + 0x20);
  puVar8 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar12 == (int *)0x0) {
    *puVar8 = (ushort)(((uint)_uRam00000000 & 1) << 10) | *puVar8 & 0x1f |
              ((byte)uRam00000000 & 2) << 8 | ((byte)uRam00000000 & 4) << 6 | 0xf000;
    sVar7 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar12 + 1) * 10 + 0x280082ca)) {
        sVar7 = *(ushort *)(piVar12 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)0x0);
    sVar7 = 0;
_L0:
    *puVar8 = (ushort)((uRam00000000._1_1_ & 1) << 10) | *puVar8 & 0x1f |
              (uRam00000000._1_1_ & 2) << 8 | (uRam00000000._1_1_ & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar7;
  return;
}



void FUN_00010cb4(void)

{
  byte bVar1;
  int unaff_s0;
  uint uVar2;
  uint extraout_a0;
  int extraout_a0_00;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  ushort *puVar8;
  uint uVar9;
  int unaff_s2;
  uint uVar10;
  int *unaff_s3;
  uint uVar11;
  int unaff_s5;
  int *piVar12;
  int unaff_s7;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 uVar16;
  int iStack00000008;
  byte in_stack_0000002f;
  
  FUN_00010cb4();
  if ((*(byte *)(*unaff_s3 + 0xa5) & 1) != 0) {
    in_stack_0000002f += 4;
  }
  puVar8 = (ushort *)(unaff_s2 + 0x280082cc);
  *puVar8 = (ushort)in_stack_0000002f << 8 | *puVar8 & 0xff;
  *puVar8 = *puVar8 & 0xfffc | 3;
  *(undefined2 *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 10 + 0x280082ca) = 0;
  if (*(int *)(unaff_s7 + 0x20) != 0) {
    puVar8 = (ushort *)((uint)*(ushort *)(*(int *)(unaff_s7 + 0x24) + 4) * 10 + 0x280082ca);
    *puVar8 = *(short *)(unaff_s0 + 4) * 10 + 0x2caU | *puVar8 & 0x8000;
  }
  FUN_00010d50();
  *(char *)(unaff_s7 + 0x48) = *(char *)(unaff_s7 + 0x48) + '\x01';
  bVar1 = 1;
  if (*(ushort *)(unaff_s7 + 0x4c) < 2) {
    bVar1 = (*(byte *)(*(int *)(unaff_s5 * 4) + 0xa5) >> 2 ^ 1) & 1;
  }
  if ((*(int *)(unaff_s7 + 8) != 0) && (bVar1 != 0)) {
    iStack00000008 = unaff_s7 + 8;
    if (*(ushort *)(unaff_s7 + 0x4c) < 2) {
      FUN_00010acc();
      piVar12 = *(int **)(unaff_s7 + 8);
      if (piVar12 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(*(int *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 4) + 0xa5);
        iVar4 = *piVar12;
        *(int *)(unaff_s7 + 8) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(unaff_s7 + 0xc) = 0;
        }
        uVar9 = uVar2 & 1;
        uVar2 &= 1;
        uVar10 = 0;
        uVar11 = extraout_a0;
        while( true ) {
          uVar13 = SEXT24(*(short *)(piVar12 + 2));
          uVar14 = *(ushort *)(unaff_s7 + 0x42) & 0xff;
          if ((uint)*(ushort *)(unaff_s7 + 0x40) <
              (uVar13 + 10 + ((uVar2 << 0x12) >> 0x10)) * 0x80000 >> 0x10) {
            uVar5 = (int)((uint)*(ushort *)(unaff_s7 + 0x40) + uVar2 * -0x20 + -0x50) >> 3;
            if ((int)((uint)*(ushort *)(unaff_s7 + 0x42) + uVar2 * -4) < (int)(uVar5 & 0xff)) {
              uVar14 = uVar14 + uVar2 * -4 & 0xff;
            }
            else {
              uVar14 = uVar5 & 0xff;
            }
          }
          if ((int)uVar14 < (int)uVar13) {
            uVar14 &= 0xfe;
          }
          uVar5 = (int)(uVar13 - 1) / (int)uVar14 + 1U & 0xff;
          if (uVar11 < uVar5) {
            if (*(int *)(unaff_s7 + 8) == 0) {
              *(int **)(unaff_s7 + 0xc) = piVar12;
            }
            *piVar12 = *(int *)(unaff_s7 + 8);
            *(int **)(unaff_s7 + 8) = piVar12;
            goto _L0;
          }
          uVar16 = 0;
          uVar15 = 0;
          bVar3 = bVar1;
          while( true ) {
            FUN_00010b90(0);
            if (bVar3 == 0) {
              *(undefined *)(extraout_a0_00 + 10) = 1;
              uVar15 = uVar14 + uVar15 & 0xffff;
            }
            else {
              bVar3 = *(byte *)((int)piVar12 + 10) & 3;
              if (bVar3 != 1) {
                bVar3 = 2;
              }
              *(byte *)(extraout_a0_00 + 10) = bVar3;
              uVar15 = (uint)*(ushort *)(piVar12[3] + 6);
              uVar16 = *(undefined2 *)(piVar12[3] + 4);
            }
            uVar6 = uVar14;
            if ((int)uVar13 <= (int)uVar14) {
              uVar6 = uVar13 & 0xff;
            }
            *(char *)(extraout_a0_00 + 0xb) = (char)uVar6;
            *(undefined2 *)(extraout_a0_00 + 6) = uVar16;
            *(short *)(extraout_a0_00 + 8) = (short)uVar15;
            uVar13 = (int)((uVar13 - uVar14) * 0x10000) >> 0x10;
            if ((int)uVar13 < 1) break;
            _LVL384(0,uVar9);
            bVar3 = 0;
          }
          _LVL349(1,uVar9);
          uVar10 = uVar10 + uVar5 & 0xff;
          uVar11 = uVar11 - uVar5 & 0xffff;
          if (*(int *)(unaff_s7 + 0x10) == 0) {
            *(int **)(unaff_s7 + 0x10) = piVar12;
          }
          else {
            **(int ***)(unaff_s7 + 0x14) = piVar12;
          }
          *(int **)(unaff_s7 + 0x14) = piVar12;
          *piVar12 = 0;
          if (10 < uVar10) goto _L0;
          piVar12 = *(int **)(unaff_s7 + 8);
          if (piVar12 == (int *)0x0) break;
          iVar4 = *piVar12;
          *(int *)(unaff_s7 + 8) = iVar4;
          if (iVar4 == 0) {
            *(undefined4 *)(unaff_s7 + 0xc) = 0;
          }
        }
      }
    }
    else {
      FUN_00010e50();
    }
    FUN_00010e5a();
  }
_L0:
  piVar12 = *(int **)(unaff_s7 + 0x20);
  puVar8 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar12 == (int *)0x0) {
    *puVar8 = (ushort)((bRam00000000 & 1) << 10) | *puVar8 & 0x1f | (bRam00000000 & 2) << 8 |
              (bRam00000000 & 4) << 6 | 0xf000;
    sVar7 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar12 + 1) * 10 + 0x280082ca)) {
        sVar7 = *(ushort *)(piVar12 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)0x0);
    sVar7 = 0;
_L0:
    *puVar8 = (ushort)((bRam00000001 & 1) << 10) | *puVar8 & 0x1f | (bRam00000001 & 2) << 8 |
              (bRam00000001 & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar7;
  return;
}



void FUN_00010d50(void)

{
  byte bVar1;
  uint uVar2;
  uint extraout_a0;
  int extraout_a0_00;
  ushort *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int unaff_s5;
  int *piVar12;
  int unaff_s7;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 uVar16;
  int iStack00000008;
  
  FUN_00010d50();
  *(char *)(unaff_s7 + 0x48) = *(char *)(unaff_s7 + 0x48) + '\x01';
  bVar1 = 1;
  if (*(ushort *)(unaff_s7 + 0x4c) < 2) {
    bVar1 = (*(byte *)(*(int *)(unaff_s5 * 4) + 0xa5) >> 2 ^ 1) & 1;
  }
  if ((*(int *)(unaff_s7 + 8) != 0) && (bVar1 != 0)) {
    iStack00000008 = unaff_s7 + 8;
    if (*(ushort *)(unaff_s7 + 0x4c) < 2) {
      FUN_00010acc();
      piVar12 = *(int **)(unaff_s7 + 8);
      if (piVar12 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(*(int *)((uint)*(ushort *)(unaff_s7 + 0x4c) * 4) + 0xa5);
        iVar5 = *piVar12;
        *(int *)(unaff_s7 + 8) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(unaff_s7 + 0xc) = 0;
        }
        uVar9 = uVar2 & 1;
        uVar2 &= 1;
        uVar10 = 0;
        uVar11 = extraout_a0;
        while( true ) {
          uVar13 = SEXT24(*(short *)(piVar12 + 2));
          uVar14 = *(ushort *)(unaff_s7 + 0x42) & 0xff;
          if ((uint)*(ushort *)(unaff_s7 + 0x40) <
              (uVar13 + 10 + ((uVar2 << 0x12) >> 0x10)) * 0x80000 >> 0x10) {
            uVar6 = (int)((uint)*(ushort *)(unaff_s7 + 0x40) + uVar2 * -0x20 + -0x50) >> 3;
            if ((int)((uint)*(ushort *)(unaff_s7 + 0x42) + uVar2 * -4) < (int)(uVar6 & 0xff)) {
              uVar14 = uVar14 + uVar2 * -4 & 0xff;
            }
            else {
              uVar14 = uVar6 & 0xff;
            }
          }
          if ((int)uVar14 < (int)uVar13) {
            uVar14 &= 0xfe;
          }
          uVar6 = (int)(uVar13 - 1) / (int)uVar14 + 1U & 0xff;
          if (uVar11 < uVar6) {
            if (*(int *)(unaff_s7 + 8) == 0) {
              *(int **)(unaff_s7 + 0xc) = piVar12;
            }
            *piVar12 = *(int *)(unaff_s7 + 8);
            *(int **)(unaff_s7 + 8) = piVar12;
            goto _L0;
          }
          uVar16 = 0;
          uVar15 = 0;
          bVar4 = bVar1;
          while( true ) {
            FUN_00010b90(0);
            if (bVar4 == 0) {
              *(undefined *)(extraout_a0_00 + 10) = 1;
              uVar15 = uVar14 + uVar15 & 0xffff;
            }
            else {
              bVar4 = *(byte *)((int)piVar12 + 10) & 3;
              if (bVar4 != 1) {
                bVar4 = 2;
              }
              *(byte *)(extraout_a0_00 + 10) = bVar4;
              uVar15 = (uint)*(ushort *)(piVar12[3] + 6);
              uVar16 = *(undefined2 *)(piVar12[3] + 4);
            }
            uVar7 = uVar14;
            if ((int)uVar13 <= (int)uVar14) {
              uVar7 = uVar13 & 0xff;
            }
            *(char *)(extraout_a0_00 + 0xb) = (char)uVar7;
            *(undefined2 *)(extraout_a0_00 + 6) = uVar16;
            *(short *)(extraout_a0_00 + 8) = (short)uVar15;
            uVar13 = (int)((uVar13 - uVar14) * 0x10000) >> 0x10;
            if ((int)uVar13 < 1) break;
            _LVL384(0,uVar9);
            bVar4 = 0;
          }
          _LVL349(1,uVar9);
          uVar10 = uVar10 + uVar6 & 0xff;
          uVar11 = uVar11 - uVar6 & 0xffff;
          if (*(int *)(unaff_s7 + 0x10) == 0) {
            *(int **)(unaff_s7 + 0x10) = piVar12;
          }
          else {
            **(int ***)(unaff_s7 + 0x14) = piVar12;
          }
          *(int **)(unaff_s7 + 0x14) = piVar12;
          *piVar12 = 0;
          if (10 < uVar10) goto _L0;
          piVar12 = *(int **)(unaff_s7 + 8);
          if (piVar12 == (int *)0x0) break;
          iVar5 = *piVar12;
          *(int *)(unaff_s7 + 8) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(unaff_s7 + 0xc) = 0;
          }
        }
      }
    }
    else {
      FUN_00010e50();
    }
    FUN_00010e5a();
  }
_L0:
  piVar12 = *(int **)(unaff_s7 + 0x20);
  puVar3 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar12 == (int *)0x0) {
    *puVar3 = (ushort)((bRam00000000 & 1) << 10) | *puVar3 & 0x1f | (bRam00000000 & 2) << 8 |
              (bRam00000000 & 4) << 6 | 0xf000;
    sVar8 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar12 + 1) * 10 + 0x280082ca)) {
        sVar8 = *(ushort *)(piVar12 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)0x0);
    sVar8 = 0;
_L0:
    *puVar3 = (ushort)((bRam00000001 & 1) << 10) | *puVar3 & 0x1f | (bRam00000001 & 2) << 8 |
              (bRam00000001 & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar8;
  return;
}



void _LVL384(undefined4 param_1,undefined4 param_2)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  undefined2 unaff_s11;
  uint in_stack_00000000;
  undefined4 in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  undefined4 in_stack_00000018;
  
  do {
    _LVL384(param_1,param_2);
    iVar4 = 0;
    while( true ) {
      FUN_00010b90(in_stack_00000018);
      if (iVar4 == 0) {
        *(undefined *)(extraout_a0 + 10) = 1;
        unaff_s10 = in_stack_00000000 + unaff_s10 & 0xffff;
      }
      else {
        bVar2 = *(byte *)((int)unaff_s6 + 10) & 3;
        if (bVar2 != 1) {
          bVar2 = 2;
        }
        *(byte *)(extraout_a0 + 10) = bVar2;
        unaff_s10 = (uint)*(ushort *)(unaff_s6[3] + 6);
        unaff_s11 = *(undefined2 *)(unaff_s6[3] + 4);
      }
      uVar3 = unaff_s9;
      if ((int)unaff_s8 <= (int)unaff_s9) {
        uVar3 = unaff_s8 & 0xff;
      }
      *(char *)(extraout_a0 + 0xb) = (char)uVar3;
      *(undefined2 *)(extraout_a0 + 6) = unaff_s11;
      *(short *)(extraout_a0 + 8) = (short)unaff_s10;
      unaff_s8 = (int)((unaff_s8 - in_stack_00000000) * 0x10000) >> 0x10;
      if (0 < (int)unaff_s8) break;
      _LVL349(1,in_stack_00000004);
      unaff_s3 = unaff_s3 + unaff_s2 & 0xff;
      unaff_s4 = unaff_s4 - in_stack_00000014 & 0xffff;
      if (*(int *)(unaff_s7 + 0x10) == 0) {
        *(int **)(unaff_s7 + 0x10) = unaff_s6;
      }
      else {
        **(int ***)(unaff_s7 + 0x14) = unaff_s6;
      }
      *(int **)(unaff_s7 + 0x14) = unaff_s6;
      *unaff_s6 = 0;
      if (10 < unaff_s3) {
_L0:
        piVar6 = *(int **)(unaff_s7 + 0x20);
        puVar1 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
        if (piVar6 != (int *)0x0) goto _L0;
        *puVar1 = (ushort)((bRam00000000 & 1) << 10) | *puVar1 & 0x1f | (bRam00000000 & 2) << 8 |
                  (bRam00000000 & 4) << 6 | 0xf000;
        sVar5 = 0;
        goto _L0;
      }
      unaff_s6 = *(int **)(unaff_s7 + 8);
      if (unaff_s6 == (int *)0x0) {
        FUN_00010e5a();
        goto _L0;
      }
      iVar4 = *unaff_s6;
      *(int *)(unaff_s7 + 8) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(unaff_s7 + 0xc) = 0;
      }
      unaff_s8 = SEXT24(*(short *)(unaff_s6 + 2));
      unaff_s9 = *(ushort *)(unaff_s7 + 0x42) & 0xff;
      if ((uint)*(ushort *)(unaff_s7 + 0x40) < (unaff_s8 + 10 + in_stack_0000000c) * 0x80000 >> 0x10
         ) {
        uVar3 = (int)(((uint)*(ushort *)(unaff_s7 + 0x40) - in_stack_00000010) + -0x50) >> 3;
        if ((int)((uint)*(ushort *)(unaff_s7 + 0x42) - unaff_s1) < (int)(uVar3 & 0xff)) {
          unaff_s9 = unaff_s9 - unaff_s1 & 0xff;
        }
        else {
          unaff_s9 = uVar3 & 0xff;
        }
      }
      if ((int)unaff_s9 < (int)unaff_s8) {
        unaff_s9 &= 0xfe;
      }
      unaff_s2 = (int)(unaff_s8 - 1) / (int)unaff_s9 + 1U & 0xff;
      if (unaff_s4 < unaff_s2) {
        if (*(int *)(unaff_s7 + 8) == 0) {
          *(int **)(unaff_s7 + 0xc) = unaff_s6;
        }
        *unaff_s6 = *(int *)(unaff_s7 + 8);
        *(int **)(unaff_s7 + 8) = unaff_s6;
        goto _L0;
      }
      unaff_s11 = 0;
      unaff_s10 = 0;
      iVar4 = unaff_s0;
      in_stack_00000000 = unaff_s9;
      in_stack_00000014 = unaff_s2;
    }
    param_1 = 0;
    param_2 = in_stack_00000004;
  } while( true );
  while (piVar6 = (int *)*piVar6, piVar6 != (int *)0x0) {
_L0:
    if (-1 < *(short *)((uint)*(ushort *)(piVar6 + 1) * 10 + 0x280082ca)) {
      sVar5 = *(ushort *)(piVar6 + 1) * 10 + 0x2ca;
      goto _L0;
    }
  }
  sVar5 = 0;
_L0:
  *puVar1 = (ushort)((bRam00000001 & 1) << 10) | *puVar1 & 0x1f | (bRam00000001 & 2) << 8 |
            (bRam00000001 & 4) << 6 | 0xf000;
_L0:
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar5;
  return;
}



void FUN_00010e50(void)

{
  ushort *puVar1;
  short sVar2;
  int *piVar3;
  int unaff_s5;
  int unaff_s7;
  
  FUN_00010e50();
  FUN_00010e5a();
  piVar3 = *(int **)(unaff_s7 + 0x20);
  puVar1 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar3 == (int *)0x0) {
    *puVar1 = (ushort)((bRam00000000 & 1) << 10) | *puVar1 & 0x1f | (bRam00000000 & 2) << 8 |
              (bRam00000000 & 4) << 6 | 0xf000;
    sVar2 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar3 + 1) * 10 + 0x280082ca)) {
        sVar2 = *(ushort *)(piVar3 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
    sVar2 = 0;
_L0:
    *puVar1 = (ushort)((bRam00000001 & 1) << 10) | *puVar1 & 0x1f | (bRam00000001 & 2) << 8 |
              (bRam00000001 & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar2;
  return;
}



void FUN_00010e5a(void)

{
  ushort *puVar1;
  short sVar2;
  int *piVar3;
  int unaff_s5;
  int unaff_s7;
  
  FUN_00010e5a();
  piVar3 = *(int **)(unaff_s7 + 0x20);
  puVar1 = (ushort *)(unaff_s5 * 0x5c + 0x2800808e);
  if (piVar3 == (int *)0x0) {
    *puVar1 = (ushort)((bRam00000000 & 1) << 10) | *puVar1 & 0x1f | (bRam00000000 & 2) << 8 |
              (bRam00000000 & 4) << 6 | 0xf000;
    sVar2 = 0;
  }
  else {
    do {
      if (-1 < *(short *)((uint)*(ushort *)(piVar3 + 1) * 10 + 0x280082ca)) {
        sVar2 = *(ushort *)(piVar3 + 1) * 10 + 0x2ca;
        goto _L0;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
    sVar2 = 0;
_L0:
    *puVar1 = (ushort)((bRam00000001 & 1) << 10) | *puVar1 & 0x1f | (bRam00000001 & 2) << 8 |
              (bRam00000001 & 4) << 6 | 0xf000;
  }
  *(short *)(unaff_s5 * 0x5c + 0x280080a4) = sVar2;
  return;
}



// DWARF DIE: 342e

void lld_pdu_tx_flush(lld_evt_tag *evt)

{
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  
  while ((evt->tx_llcp_pdu_rdy).first != (co_list_hdr *)0x0) {
    FUN_00010f10();
    FUN_00010f1c(*(undefined4 *)(extraout_a0_02 + 8));
    FUN_00010f26(extraout_a0_02);
  }
  FUN_00010ec6();
  FUN_00010ed4();
  FUN_00010ee2();
  if ((extraout_a0_01 + (extraout_a0 + extraout_a0_00 & 0xffU) & 0xff) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_00010ec6(void)

{
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  
  FUN_00010ec6();
  FUN_00010ed4();
  FUN_00010ee2();
  if ((extraout_a0_01 + (extraout_a0 + extraout_a0_00 & 0xffU) & 0xff) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010ed4(void)

{
  int unaff_s0;
  int extraout_a0;
  int extraout_a0_00;
  
  FUN_00010ed4();
  FUN_00010ee2();
  if ((extraout_a0_00 + (unaff_s0 + extraout_a0 & 0xffU) & 0xff) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010ee2(void)

{
  uint unaff_s0;
  int extraout_a0;
  
  FUN_00010ee2();
  if ((extraout_a0 + (unaff_s0 & 0xff) & 0xff) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010f10(void)

{
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  
  do {
    FUN_00010f10();
    FUN_00010f1c(*(undefined4 *)(extraout_a0_02 + 8));
    FUN_00010f26(extraout_a0_02);
  } while (*(int *)(unaff_s1 + 0x18) != 0);
  FUN_00010ec6();
  FUN_00010ed4();
  FUN_00010ee2();
  if ((extraout_a0_01 + (extraout_a0 + extraout_a0_00 & 0xffU) & 0xff) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_00010f1c(undefined4 param_1)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  
  while( true ) {
    FUN_00010f1c(param_1);
    FUN_00010f26(unaff_s0);
    if (*(int *)(unaff_s1 + 0x18) == 0) break;
    FUN_00010f10();
    param_1 = *(undefined4 *)(extraout_a0_02 + 8);
    unaff_s0 = extraout_a0_02;
  }
  FUN_00010ec6();
  FUN_00010ed4();
  FUN_00010ee2();
  if ((extraout_a0_01 + (extraout_a0 + extraout_a0_00 & 0xffU) & 0xff) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_00010f26(int param_1)

{
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  
  while (FUN_00010f26(param_1), *(int *)(unaff_s1 + 0x18) != 0) {
    FUN_00010f10();
    FUN_00010f1c(*(undefined4 *)(extraout_a0_02 + 8));
    param_1 = extraout_a0_02;
  }
  FUN_00010ec6();
  FUN_00010ed4();
  FUN_00010ee2();
  if ((extraout_a0_01 + (extraout_a0 + extraout_a0_00 & 0xffU) & 0xff) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// DWARF DIE: 33a2

uint8_t lld_pdu_adv_pack(uint8_t code,uint8_t *buf,uint8_t *p_len)

{
  undefined3 in_register_00002029;
  
  if (*(int *)(CONCAT31(in_register_00002029,code) * 0xc + 4) == 0) {
    return '\x02';
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 2fdc

void lld_pdu_rx_handler(lld_evt_tag *evt,uint8_t nb_rx_desc)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int extraout_a0;
  byte *extraout_a0_00;
  undefined2 *extraout_a0_01;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  uint uVar12;
  byte *pbVar13;
  
  uVar12 = (uint)DAT_0000015c;
  do {
    nb_rx_desc += -1;
    if (nb_rx_desc == -1) {
      DAT_0000015c = (char)uVar12;
      return;
    }
    if ((evt->evt_flag & 0x10) == 0) {
      FUN_00010fea(0x10,0);
      iVar9 = uVar12 * 0xe;
      uVar3 = *(ushort *)(iVar9 + 0x280083d2);
      *(char *)(extraout_a0 + 4) = (char)uVar12;
      *(uint16_t *)(extraout_a0 + 6) = evt->conhdl;
      uVar4 = *(ushort *)(iVar9 + 0x280083d0);
      *(ushort *)(extraout_a0 + 8) = uVar4;
      uVar5 = *(ushort *)(iVar9 + 0x280083d4);
      *(undefined *)(extraout_a0 + 5) = 0;
      *(byte *)(extraout_a0 + 0xd) = (byte)(uVar5 >> 0xf);
      *(byte *)(extraout_a0 + 0xb) = (byte)((uint)uVar5 >> 8) & 0x3f;
      *(char *)(extraout_a0 + 0xc) = (char)uVar5;
      if (((evt->evt_flag & 1) != 0) && ((uVar4 & 0x40) == 0)) {
        evt->evt_flag = evt->evt_flag & 0xfe;
      }
      if (1 < (ushort)(*(short *)(extraout_a0 + 6) - 2U)) {
        *(char *)(extraout_a0 + 10) = (char)((uint)uVar3 >> 8);
        if (((evt->evt_flag & 2) != 0) && ((*(ushort *)(extraout_a0 + 8) & 1) == 0)) {
          evt->evt_flag = evt->evt_flag & 0xfd;
          iVar9 = *(int *)((uint)*(ushort *)(extraout_a0 + 6) * 4);
          *(ushort *)(iVar9 + 0x5c) = *(ushort *)(iVar9 + 0x5c) | 0x100;
        }
        if (((*(ushort *)(extraout_a0 + 8) & 0x13f) == 0) && (*(char *)(extraout_a0 + 10) != '\0'))
        {
          uVar6 = (uint)*(ushort *)(extraout_a0 + 6);
          uVar7 = uVar3 & 3;
          if ((*(byte *)(*(int *)(uVar6 * 4) + 0xa5) & 2) != 0) {
            *(char *)(extraout_a0 + 10) = *(char *)(extraout_a0 + 10) + -4;
          }
          if ((uVar3 & 3) != 0) {
            if (uVar7 < 3) {
              _L0(0x100,(uVar6 & 0xff) << 8 | 1,8);
              *extraout_a0_01 = *(undefined2 *)(extraout_a0 + 6);
              bVar8 = *(byte *)(extraout_a0 + 10);
              *(char *)(extraout_a0_01 + 1) = (char)uVar7;
              extraout_a0_01[2] = (ushort)bVar8;
              *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(extraout_a0 + 4);
              _L0();
              goto _L0;
            }
            if (uVar7 != 3) goto _L0;
            cVar1 = *(char *)(extraout_a0 + 10);
            uVar6 = (uVar6 & 0xff) << 8 | 1;
            _L0(0x10a,uVar6,uVar6,0x1c);
            pbVar13 = extraout_a0_00 + 2;
            uVar7 = (uint)*(ushort *)((uint)*(byte *)(extraout_a0 + 4) * 0xe + 0x280083d6);
            (*pcRam00000000)(pbVar13,uVar7 + 0x28008000,1,pcRam00000000);
            if (extraout_a0_00[2] < 0x16) {
              pcVar10 = (char *)((uint)extraout_a0_00[2] * 0xc);
              cVar2 = *pcVar10;
              if (cVar2 != cVar1) {
                bVar8 = 0x1e;
                goto _L0;
              }
              pcVar11 = *(code **)(pcVar10 + 8);
              *extraout_a0_00 = 0;
              (*pcVar11)(uVar7 + 1 & 0xffff,cVar2 + -1,pbVar13,pcVar11);
            }
            else {
              bVar8 = 0x19;
_L0:
              *extraout_a0_00 = bVar8;
            }
            FUN_0001115c(uVar6,(uint)*extraout_a0_00,pbVar13,1);
            FUN_00011166(extraout_a0_00);
          }
        }
_L0:
        FUN_00011172((uint)*(byte *)(extraout_a0 + 4));
        *(undefined *)(extraout_a0 + 5) = 1;
      }
_L0:
      FUN_000111fe(0x18,extraout_a0);
    }
    else {
      FUN_00011210(uVar12);
    }
    uVar12 = uVar12 + 1 & 7;
  } while( true );
}



void FUN_00010fea(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int extraout_a0;
  byte *extraout_a0_00;
  undefined2 *extraout_a0_01;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  uint unaff_s2;
  int unaff_s3;
  char unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  byte *pbVar12;
  code **unaff_s11;
  
  do {
    FUN_00010fea(param_1,param_2);
    iVar9 = unaff_s2 * 0xe;
    uVar3 = *(ushort *)(iVar9 + 0x280083d2);
    *(char *)(extraout_a0 + 4) = (char)unaff_s2;
    *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s3 + 0x4c);
    uVar4 = *(ushort *)(unaff_s5 + 0x3d0 + iVar9);
    *(ushort *)(extraout_a0 + 8) = uVar4;
    uVar5 = *(ushort *)(iVar9 + unaff_s5 + 0x3d4);
    *(undefined *)(extraout_a0 + 5) = 0;
    *(byte *)(extraout_a0 + 0xd) = (byte)(uVar5 >> 0xf);
    *(byte *)(extraout_a0 + 0xb) = (byte)((uint)uVar5 >> 8) & 0x3f;
    *(char *)(extraout_a0 + 0xc) = (char)uVar5;
    if (((*(byte *)(unaff_s3 + 0x56) & 1) != 0) && ((uVar4 & 0x40) == 0)) {
      *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfe;
    }
    if (1 < (ushort)(*(short *)(extraout_a0 + 6) - 2U)) {
      *(char *)(extraout_a0 + 10) = (char)((uint)uVar3 >> 8);
      if (((*(byte *)(unaff_s3 + 0x56) & 2) != 0) && ((*(ushort *)(extraout_a0 + 8) & 1) == 0)) {
        *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfd;
        iVar9 = *(int *)((uint)*(ushort *)(extraout_a0 + 6) * 4 + unaff_s7);
        *(ushort *)(iVar9 + 0x5c) = *(ushort *)(iVar9 + 0x5c) | 0x100;
      }
      if (((*(ushort *)(extraout_a0 + 8) & 0x13f) == 0) && (*(char *)(extraout_a0 + 10) != '\0')) {
        uVar6 = (uint)*(ushort *)(extraout_a0 + 6);
        uVar7 = uVar3 & 3;
        if ((*(byte *)(*(int *)(uVar6 * 4 + unaff_s7) + 0xa5) & 2) != 0) {
          *(char *)(extraout_a0 + 10) = *(char *)(extraout_a0 + 10) + -4;
        }
        if ((uVar3 & 3) != 0) {
          if (uVar7 < 3) {
            _L0(0x100,(uVar6 & 0xff) << 8 | 1,8);
            *extraout_a0_01 = *(undefined2 *)(extraout_a0 + 6);
            bVar8 = *(byte *)(extraout_a0 + 10);
            *(char *)(extraout_a0_01 + 1) = (char)uVar7;
            extraout_a0_01[2] = (ushort)bVar8;
            *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(extraout_a0 + 4);
            _L0();
            goto _L0;
          }
          if (uVar7 != 3) goto _L0;
          cVar1 = *(char *)(extraout_a0 + 10);
          uVar6 = (uVar6 & 0xff) << 8 | 1;
          _L0(0x10a,uVar6,uVar6,0x1c);
          pbVar12 = extraout_a0_00 + 2;
          uVar7 = (uint)*(ushort *)((uint)*(byte *)(extraout_a0 + 4) * 0xe + unaff_s5 + 0x3d6);
          (**unaff_s11)(pbVar12,uVar7 + unaff_s5,1,*unaff_s11);
          if (extraout_a0_00[2] < 0x16) {
            pcVar10 = (char *)((uint)extraout_a0_00[2] * 0xc + unaff_s8);
            cVar2 = *pcVar10;
            if (cVar2 != cVar1) {
              bVar8 = 0x1e;
              goto _L0;
            }
            pcVar11 = *(code **)(pcVar10 + 8);
            *extraout_a0_00 = 0;
            (*pcVar11)(uVar7 + 1 & 0xffff,cVar2 + -1,pbVar12,pcVar11);
          }
          else {
            bVar8 = 0x19;
_L0:
            *extraout_a0_00 = bVar8;
          }
          FUN_0001115c(uVar6,(uint)*extraout_a0_00,pbVar12,1);
          FUN_00011166(extraout_a0_00);
        }
      }
_L0:
      FUN_00011172((uint)*(byte *)(extraout_a0 + 4));
      *(undefined *)(extraout_a0 + 5) = 1;
    }
_L0:
    FUN_000111fe(0x18,extraout_a0);
    while( true ) {
      unaff_s2 = unaff_s2 + 1 & 7;
      unaff_s4 += -1;
      if (unaff_s4 == -1) {
        *(char *)(unaff_s6 + 0x15c) = (char)unaff_s2;
        return;
      }
      if ((*(byte *)(unaff_s3 + 0x56) & 0x10) == 0) break;
      FUN_00011210(unaff_s2);
    }
    param_2 = 0;
    param_1 = 0x10;
  } while( true );
}



void _L0(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  byte *extraout_a0_00;
  undefined2 *extraout_a0_01;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  code *pcVar9;
  uint unaff_s2;
  int unaff_s3;
  char unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  byte *pbVar10;
  code **unaff_s11;
  uint in_stack_0000000c;
  
  do {
    _L0(param_1,param_2,param_3,param_4);
    pbVar10 = extraout_a0_00 + 2;
    uVar5 = (uint)*(ushort *)((uint)*(byte *)(unaff_s0 + 4) * 0xe + unaff_s5 + 0x3d6);
    (**unaff_s11)(pbVar10,uVar5 + unaff_s5,1,*unaff_s11);
    if (extraout_a0_00[2] < 0x16) {
      pbVar8 = (byte *)((uint)extraout_a0_00[2] * 0xc + unaff_s8);
      uVar4 = (uint)*pbVar8;
      if (uVar4 != in_stack_0000000c) {
        bVar6 = 0x1e;
        goto _L0;
      }
      pcVar9 = *(code **)(pbVar8 + 8);
      *extraout_a0_00 = 0;
      (*pcVar9)(uVar5 + 1 & 0xffff,uVar4 - 1 & 0xff,pbVar10,pcVar9);
    }
    else {
      bVar6 = 0x19;
_L0:
      *extraout_a0_00 = bVar6;
    }
    FUN_0001115c(unaff_s1,(uint)*extraout_a0_00,pbVar10,1);
    FUN_00011166(extraout_a0_00);
_L0:
    do {
      FUN_00011172((uint)*(byte *)(unaff_s0 + 4));
      *(undefined *)(unaff_s0 + 5) = 1;
      while( true ) {
        do {
          FUN_000111fe(0x18,unaff_s0);
          while( true ) {
            unaff_s2 = unaff_s2 + 1 & 7;
            unaff_s4 += -1;
            if (unaff_s4 == -1) {
              *(char *)(unaff_s6 + 0x15c) = (char)unaff_s2;
              return;
            }
            if ((*(byte *)(unaff_s3 + 0x56) & 0x10) == 0) break;
            FUN_00011210(unaff_s2);
          }
          FUN_00010fea(0x10,0);
          iVar7 = unaff_s2 * 0xe;
          uVar1 = *(ushort *)(iVar7 + 0x280083d2);
          *(char *)(extraout_a0 + 4) = (char)unaff_s2;
          *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s3 + 0x4c);
          uVar2 = *(ushort *)(unaff_s5 + 0x3d0 + iVar7);
          *(ushort *)(extraout_a0 + 8) = uVar2;
          uVar3 = *(ushort *)(iVar7 + unaff_s5 + 0x3d4);
          *(undefined *)(extraout_a0 + 5) = 0;
          *(byte *)(extraout_a0 + 0xd) = (byte)(uVar3 >> 0xf);
          *(byte *)(extraout_a0 + 0xb) = (byte)((uint)uVar3 >> 8) & 0x3f;
          *(char *)(extraout_a0 + 0xc) = (char)uVar3;
          if (((*(byte *)(unaff_s3 + 0x56) & 1) != 0) && ((uVar2 & 0x40) == 0)) {
            *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfe;
          }
          unaff_s0 = extraout_a0;
        } while ((ushort)(*(short *)(extraout_a0 + 6) - 2U) < 2);
        *(char *)(extraout_a0 + 10) = (char)((uint)uVar1 >> 8);
        if (((*(byte *)(unaff_s3 + 0x56) & 2) != 0) && ((*(ushort *)(extraout_a0 + 8) & 1) == 0)) {
          *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfd;
          iVar7 = *(int *)((uint)*(ushort *)(extraout_a0 + 6) * 4 + unaff_s7);
          *(ushort *)(iVar7 + 0x5c) = *(ushort *)(iVar7 + 0x5c) | 0x100;
        }
        if (((*(ushort *)(extraout_a0 + 8) & 0x13f) != 0) || (*(char *)(extraout_a0 + 10) == '\0'))
        goto _L0;
        uVar5 = (uint)*(ushort *)(extraout_a0 + 6);
        uVar4 = uVar1 & 3;
        if ((*(byte *)(*(int *)(uVar5 * 4 + unaff_s7) + 0xa5) & 2) != 0) {
          *(char *)(extraout_a0 + 10) = *(char *)(extraout_a0 + 10) + -4;
        }
        if ((uVar1 & 3) == 0) goto _L0;
        if (2 < uVar4) break;
        _L0(0x100,(uVar5 & 0xff) << 8 | 1,8);
        *extraout_a0_01 = *(undefined2 *)(extraout_a0 + 6);
        bVar6 = *(byte *)(extraout_a0 + 10);
        *(char *)(extraout_a0_01 + 1) = (char)uVar4;
        extraout_a0_01[2] = (ushort)bVar6;
        *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(extraout_a0 + 4);
        _L0();
      }
    } while (uVar4 != 3);
    in_stack_0000000c = (uint)*(byte *)(extraout_a0 + 10);
    unaff_s1 = (uVar5 & 0xff) << 8 | 1;
    param_4 = 0x1c;
    param_1 = 0x10a;
    param_2 = unaff_s1;
    param_3 = unaff_s1;
  } while( true );
}



void FUN_0001115c(uint param_1,uint param_2,byte *param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int unaff_s0;
  uint uVar6;
  int extraout_a0;
  byte *extraout_a0_00;
  undefined2 *extraout_a0_01;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  uint unaff_s2;
  int unaff_s3;
  char unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  byte *unaff_s9;
  code **unaff_s11;
  
  do {
    FUN_0001115c(param_1,param_2,param_3,param_4);
    FUN_00011166(unaff_s9);
_L0:
    do {
      FUN_00011172((uint)*(byte *)(unaff_s0 + 4));
      *(undefined *)(unaff_s0 + 5) = 1;
      while( true ) {
        do {
          FUN_000111fe(0x18,unaff_s0);
          while( true ) {
            unaff_s2 = unaff_s2 + 1 & 7;
            unaff_s4 += -1;
            if (unaff_s4 == -1) {
              *(char *)(unaff_s6 + 0x15c) = (char)unaff_s2;
              return;
            }
            if ((*(byte *)(unaff_s3 + 0x56) & 0x10) == 0) break;
            FUN_00011210(unaff_s2);
          }
          FUN_00010fea(0x10,0);
          iVar9 = unaff_s2 * 0xe;
          uVar3 = *(ushort *)(iVar9 + 0x280083d2);
          *(char *)(extraout_a0 + 4) = (char)unaff_s2;
          *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s3 + 0x4c);
          uVar4 = *(ushort *)(unaff_s5 + 0x3d0 + iVar9);
          *(ushort *)(extraout_a0 + 8) = uVar4;
          uVar5 = *(ushort *)(iVar9 + unaff_s5 + 0x3d4);
          *(undefined *)(extraout_a0 + 5) = 0;
          *(byte *)(extraout_a0 + 0xd) = (byte)(uVar5 >> 0xf);
          *(byte *)(extraout_a0 + 0xb) = (byte)((uint)uVar5 >> 8) & 0x3f;
          *(char *)(extraout_a0 + 0xc) = (char)uVar5;
          if (((*(byte *)(unaff_s3 + 0x56) & 1) != 0) && ((uVar4 & 0x40) == 0)) {
            *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfe;
          }
          unaff_s0 = extraout_a0;
        } while ((ushort)(*(short *)(extraout_a0 + 6) - 2U) < 2);
        *(char *)(extraout_a0 + 10) = (char)((uint)uVar3 >> 8);
        if (((*(byte *)(unaff_s3 + 0x56) & 2) != 0) && ((*(ushort *)(extraout_a0 + 8) & 1) == 0)) {
          *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfd;
          iVar9 = *(int *)((uint)*(ushort *)(extraout_a0 + 6) * 4 + unaff_s7);
          *(ushort *)(iVar9 + 0x5c) = *(ushort *)(iVar9 + 0x5c) | 0x100;
        }
        if (((*(ushort *)(extraout_a0 + 8) & 0x13f) != 0) || (*(char *)(extraout_a0 + 10) == '\0'))
        goto _L0;
        uVar6 = (uint)*(ushort *)(extraout_a0 + 6);
        uVar7 = uVar3 & 3;
        if ((*(byte *)(*(int *)(uVar6 * 4 + unaff_s7) + 0xa5) & 2) != 0) {
          *(char *)(extraout_a0 + 10) = *(char *)(extraout_a0 + 10) + -4;
        }
        if ((uVar3 & 3) == 0) goto _L0;
        if (2 < uVar7) break;
        _L0(0x100,(uVar6 & 0xff) << 8 | 1,8);
        *extraout_a0_01 = *(undefined2 *)(extraout_a0 + 6);
        bVar8 = *(byte *)(extraout_a0 + 10);
        *(char *)(extraout_a0_01 + 1) = (char)uVar7;
        extraout_a0_01[2] = (ushort)bVar8;
        *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(extraout_a0 + 4);
        _L0();
      }
    } while (uVar7 != 3);
    cVar1 = *(char *)(extraout_a0 + 10);
    param_1 = (uVar6 & 0xff) << 8 | 1;
    _L0(0x10a,param_1,param_1,0x1c);
    param_3 = extraout_a0_00 + 2;
    uVar6 = (uint)*(ushort *)((uint)*(byte *)(extraout_a0 + 4) * 0xe + unaff_s5 + 0x3d6);
    (**unaff_s11)(param_3,uVar6 + unaff_s5,1,*unaff_s11);
    if (extraout_a0_00[2] < 0x16) {
      pcVar10 = (char *)((uint)extraout_a0_00[2] * 0xc + unaff_s8);
      cVar2 = *pcVar10;
      if (cVar2 != cVar1) {
        bVar8 = 0x1e;
        goto _L0;
      }
      pcVar11 = *(code **)(pcVar10 + 8);
      *extraout_a0_00 = 0;
      (*pcVar11)(uVar6 + 1 & 0xffff,cVar2 + -1,param_3,pcVar11);
    }
    else {
      bVar8 = 0x19;
_L0:
      *extraout_a0_00 = bVar8;
    }
    param_2 = (uint)*extraout_a0_00;
    param_4 = 1;
    unaff_s9 = extraout_a0_00;
  } while( true );
}



void FUN_00011166(byte *param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int unaff_s0;
  uint uVar6;
  int extraout_a0;
  byte *extraout_a0_00;
  undefined2 *extraout_a0_01;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  uint unaff_s2;
  int unaff_s3;
  char unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  byte *pbVar12;
  code **unaff_s11;
  
  do {
    FUN_00011166(param_1);
_L0:
    do {
      FUN_00011172((uint)*(byte *)(unaff_s0 + 4));
      *(undefined *)(unaff_s0 + 5) = 1;
      while( true ) {
        do {
          FUN_000111fe(0x18,unaff_s0);
          while( true ) {
            unaff_s2 = unaff_s2 + 1 & 7;
            unaff_s4 += -1;
            if (unaff_s4 == -1) {
              *(char *)(unaff_s6 + 0x15c) = (char)unaff_s2;
              return;
            }
            if ((*(byte *)(unaff_s3 + 0x56) & 0x10) == 0) break;
            FUN_00011210(unaff_s2);
          }
          FUN_00010fea(0x10,0);
          iVar9 = unaff_s2 * 0xe;
          uVar3 = *(ushort *)(iVar9 + 0x280083d2);
          *(char *)(extraout_a0 + 4) = (char)unaff_s2;
          *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s3 + 0x4c);
          uVar4 = *(ushort *)(unaff_s5 + 0x3d0 + iVar9);
          *(ushort *)(extraout_a0 + 8) = uVar4;
          uVar5 = *(ushort *)(iVar9 + unaff_s5 + 0x3d4);
          *(undefined *)(extraout_a0 + 5) = 0;
          *(byte *)(extraout_a0 + 0xd) = (byte)(uVar5 >> 0xf);
          *(byte *)(extraout_a0 + 0xb) = (byte)((uint)uVar5 >> 8) & 0x3f;
          *(char *)(extraout_a0 + 0xc) = (char)uVar5;
          if (((*(byte *)(unaff_s3 + 0x56) & 1) != 0) && ((uVar4 & 0x40) == 0)) {
            *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfe;
          }
          unaff_s0 = extraout_a0;
        } while ((ushort)(*(short *)(extraout_a0 + 6) - 2U) < 2);
        *(char *)(extraout_a0 + 10) = (char)((uint)uVar3 >> 8);
        if (((*(byte *)(unaff_s3 + 0x56) & 2) != 0) && ((*(ushort *)(extraout_a0 + 8) & 1) == 0)) {
          *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfd;
          iVar9 = *(int *)((uint)*(ushort *)(extraout_a0 + 6) * 4 + unaff_s7);
          *(ushort *)(iVar9 + 0x5c) = *(ushort *)(iVar9 + 0x5c) | 0x100;
        }
        if (((*(ushort *)(extraout_a0 + 8) & 0x13f) != 0) || (*(char *)(extraout_a0 + 10) == '\0'))
        goto _L0;
        uVar6 = (uint)*(ushort *)(extraout_a0 + 6);
        uVar7 = uVar3 & 3;
        if ((*(byte *)(*(int *)(uVar6 * 4 + unaff_s7) + 0xa5) & 2) != 0) {
          *(char *)(extraout_a0 + 10) = *(char *)(extraout_a0 + 10) + -4;
        }
        if ((uVar3 & 3) == 0) goto _L0;
        if (2 < uVar7) break;
        _L0(0x100,(uVar6 & 0xff) << 8 | 1,8);
        *extraout_a0_01 = *(undefined2 *)(extraout_a0 + 6);
        bVar8 = *(byte *)(extraout_a0 + 10);
        *(char *)(extraout_a0_01 + 1) = (char)uVar7;
        extraout_a0_01[2] = (ushort)bVar8;
        *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(extraout_a0 + 4);
        _L0();
      }
    } while (uVar7 != 3);
    cVar1 = *(char *)(extraout_a0 + 10);
    uVar6 = (uVar6 & 0xff) << 8 | 1;
    _L0(0x10a,uVar6,uVar6,0x1c);
    pbVar12 = extraout_a0_00 + 2;
    uVar7 = (uint)*(ushort *)((uint)*(byte *)(extraout_a0 + 4) * 0xe + unaff_s5 + 0x3d6);
    (**unaff_s11)(pbVar12,uVar7 + unaff_s5,1,*unaff_s11);
    if (extraout_a0_00[2] < 0x16) {
      pcVar10 = (char *)((uint)extraout_a0_00[2] * 0xc + unaff_s8);
      cVar2 = *pcVar10;
      if (cVar2 != cVar1) {
        bVar8 = 0x1e;
        goto _L0;
      }
      pcVar11 = *(code **)(pcVar10 + 8);
      *extraout_a0_00 = 0;
      (*pcVar11)(uVar7 + 1 & 0xffff,cVar2 + -1,pbVar12,pcVar11);
    }
    else {
      bVar8 = 0x19;
_L0:
      *extraout_a0_00 = bVar8;
    }
    FUN_0001115c(uVar6,(uint)*extraout_a0_00,pbVar12,1);
    param_1 = extraout_a0_00;
  } while( true );
}



void FUN_00011172(uint param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int unaff_s0;
  uint uVar6;
  int extraout_a0;
  byte *extraout_a0_00;
  undefined2 *extraout_a0_01;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  uint unaff_s2;
  int unaff_s3;
  char unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  byte *pbVar12;
  code **unaff_s11;
  
  do {
    FUN_00011172(param_1);
    *(undefined *)(unaff_s0 + 5) = 1;
    while( true ) {
      do {
        FUN_000111fe(0x18,unaff_s0);
        while( true ) {
          unaff_s2 = unaff_s2 + 1 & 7;
          unaff_s4 += -1;
          if (unaff_s4 == -1) {
            *(char *)(unaff_s6 + 0x15c) = (char)unaff_s2;
            return;
          }
          if ((*(byte *)(unaff_s3 + 0x56) & 0x10) == 0) break;
          FUN_00011210(unaff_s2);
        }
        FUN_00010fea(0x10,0);
        iVar9 = unaff_s2 * 0xe;
        uVar3 = *(ushort *)(iVar9 + 0x280083d2);
        *(char *)(extraout_a0 + 4) = (char)unaff_s2;
        *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s3 + 0x4c);
        uVar4 = *(ushort *)(unaff_s5 + 0x3d0 + iVar9);
        *(ushort *)(extraout_a0 + 8) = uVar4;
        uVar5 = *(ushort *)(iVar9 + unaff_s5 + 0x3d4);
        *(undefined *)(extraout_a0 + 5) = 0;
        *(byte *)(extraout_a0 + 0xd) = (byte)(uVar5 >> 0xf);
        *(byte *)(extraout_a0 + 0xb) = (byte)((uint)uVar5 >> 8) & 0x3f;
        *(char *)(extraout_a0 + 0xc) = (char)uVar5;
        if (((*(byte *)(unaff_s3 + 0x56) & 1) != 0) && ((uVar4 & 0x40) == 0)) {
          *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfe;
        }
        unaff_s0 = extraout_a0;
      } while ((ushort)(*(short *)(extraout_a0 + 6) - 2U) < 2);
      *(char *)(extraout_a0 + 10) = (char)((uint)uVar3 >> 8);
      if (((*(byte *)(unaff_s3 + 0x56) & 2) != 0) && ((*(ushort *)(extraout_a0 + 8) & 1) == 0)) {
        *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfd;
        iVar9 = *(int *)((uint)*(ushort *)(extraout_a0 + 6) * 4 + unaff_s7);
        *(ushort *)(iVar9 + 0x5c) = *(ushort *)(iVar9 + 0x5c) | 0x100;
      }
      if (((*(ushort *)(extraout_a0 + 8) & 0x13f) != 0) || (*(char *)(extraout_a0 + 10) == '\0'))
      goto _L0;
      uVar6 = (uint)*(ushort *)(extraout_a0 + 6);
      uVar7 = uVar3 & 3;
      if ((*(byte *)(*(int *)(uVar6 * 4 + unaff_s7) + 0xa5) & 2) != 0) {
        *(char *)(extraout_a0 + 10) = *(char *)(extraout_a0 + 10) + -4;
      }
      if ((uVar3 & 3) == 0) goto _L0;
      if (2 < uVar7) break;
      _L0(0x100,(uVar6 & 0xff) << 8 | 1,8);
      *extraout_a0_01 = *(undefined2 *)(extraout_a0 + 6);
      bVar8 = *(byte *)(extraout_a0 + 10);
      *(char *)(extraout_a0_01 + 1) = (char)uVar7;
      extraout_a0_01[2] = (ushort)bVar8;
      *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(extraout_a0 + 4);
      _L0();
    }
    if (uVar7 == 3) {
      cVar1 = *(char *)(extraout_a0 + 10);
      uVar6 = (uVar6 & 0xff) << 8 | 1;
      _L0(0x10a,uVar6,uVar6,0x1c);
      pbVar12 = extraout_a0_00 + 2;
      uVar7 = (uint)*(ushort *)((uint)*(byte *)(extraout_a0 + 4) * 0xe + unaff_s5 + 0x3d6);
      (**unaff_s11)(pbVar12,uVar7 + unaff_s5,1,*unaff_s11);
      if (extraout_a0_00[2] < 0x16) {
        pcVar10 = (char *)((uint)extraout_a0_00[2] * 0xc + unaff_s8);
        cVar2 = *pcVar10;
        if (cVar2 != cVar1) {
          bVar8 = 0x1e;
          goto _L0;
        }
        pcVar11 = *(code **)(pcVar10 + 8);
        *extraout_a0_00 = 0;
        (*pcVar11)(uVar7 + 1 & 0xffff,cVar2 + -1,pbVar12,pcVar11);
      }
      else {
        bVar8 = 0x19;
_L0:
        *extraout_a0_00 = bVar8;
      }
      FUN_0001115c(uVar6,(uint)*extraout_a0_00,pbVar12,1);
      FUN_00011166(extraout_a0_00);
    }
_L0:
    param_1 = (uint)*(byte *)(extraout_a0 + 4);
  } while( true );
}



void _L0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int unaff_s0;
  uint uVar6;
  int extraout_a0;
  byte *extraout_a0_00;
  undefined2 *extraout_a0_01;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  uint unaff_s2;
  int unaff_s3;
  char unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  byte *pbVar12;
  code **unaff_s11;
  uint in_stack_00000008;
  
code_r0x000111c6:
  _L0(param_1,param_2,param_3);
  *extraout_a0_01 = *(undefined2 *)(unaff_s0 + 6);
  bVar8 = *(byte *)(unaff_s0 + 10);
  *(char *)(extraout_a0_01 + 1) = (char)in_stack_00000008;
  extraout_a0_01[2] = (ushort)bVar8;
  *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(unaff_s0 + 4);
  _L0();
_L0:
  do {
    FUN_000111fe(0x18,unaff_s0);
    while( true ) {
      unaff_s2 = unaff_s2 + 1 & 7;
      unaff_s4 += -1;
      if (unaff_s4 == -1) {
        *(char *)(unaff_s6 + 0x15c) = (char)unaff_s2;
        return;
      }
      if ((*(byte *)(unaff_s3 + 0x56) & 0x10) == 0) break;
      FUN_00011210(unaff_s2);
    }
    FUN_00010fea(0x10,0);
    iVar9 = unaff_s2 * 0xe;
    uVar3 = *(ushort *)(iVar9 + 0x280083d2);
    *(char *)(extraout_a0 + 4) = (char)unaff_s2;
    *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s3 + 0x4c);
    uVar4 = *(ushort *)(unaff_s5 + 0x3d0 + iVar9);
    *(ushort *)(extraout_a0 + 8) = uVar4;
    uVar5 = *(ushort *)(iVar9 + unaff_s5 + 0x3d4);
    *(undefined *)(extraout_a0 + 5) = 0;
    *(byte *)(extraout_a0 + 0xd) = (byte)(uVar5 >> 0xf);
    *(byte *)(extraout_a0 + 0xb) = (byte)((uint)uVar5 >> 8) & 0x3f;
    *(char *)(extraout_a0 + 0xc) = (char)uVar5;
    if (((*(byte *)(unaff_s3 + 0x56) & 1) != 0) && ((uVar4 & 0x40) == 0)) {
      *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfe;
    }
    unaff_s0 = extraout_a0;
  } while ((ushort)(*(short *)(extraout_a0 + 6) - 2U) < 2);
  *(char *)(extraout_a0 + 10) = (char)((uint)uVar3 >> 8);
  if (((*(byte *)(unaff_s3 + 0x56) & 2) != 0) && ((*(ushort *)(extraout_a0 + 8) & 1) == 0)) {
    *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfd;
    iVar9 = *(int *)((uint)*(ushort *)(extraout_a0 + 6) * 4 + unaff_s7);
    *(ushort *)(iVar9 + 0x5c) = *(ushort *)(iVar9 + 0x5c) | 0x100;
  }
  if (((*(ushort *)(extraout_a0 + 8) & 0x13f) == 0) && (*(char *)(extraout_a0 + 10) != '\0')) {
    uVar6 = (uint)*(ushort *)(extraout_a0 + 6);
    in_stack_00000008 = uVar3 & 3;
    if ((*(byte *)(*(int *)(uVar6 * 4 + unaff_s7) + 0xa5) & 2) != 0) {
      *(char *)(extraout_a0 + 10) = *(char *)(extraout_a0 + 10) + -4;
    }
    if ((uVar3 & 3) != 0) {
      if (in_stack_00000008 < 3) goto _L0;
      if (in_stack_00000008 == 3) {
        cVar1 = *(char *)(extraout_a0 + 10);
        uVar6 = (uVar6 & 0xff) << 8 | 1;
        _L0(0x10a,uVar6,uVar6,0x1c);
        pbVar12 = extraout_a0_00 + 2;
        uVar7 = (uint)*(ushort *)((uint)*(byte *)(extraout_a0 + 4) * 0xe + unaff_s5 + 0x3d6);
        (**unaff_s11)(pbVar12,uVar7 + unaff_s5,1,*unaff_s11);
        if (extraout_a0_00[2] < 0x16) {
          pcVar10 = (char *)((uint)extraout_a0_00[2] * 0xc + unaff_s8);
          cVar2 = *pcVar10;
          if (cVar2 != cVar1) {
            bVar8 = 0x1e;
            goto _L0;
          }
          pcVar11 = *(code **)(pcVar10 + 8);
          *extraout_a0_00 = 0;
          (*pcVar11)(uVar7 + 1 & 0xffff,cVar2 + -1,pbVar12,pcVar11);
        }
        else {
          bVar8 = 0x19;
_L0:
          *extraout_a0_00 = bVar8;
        }
        FUN_0001115c(uVar6,(uint)*extraout_a0_00,pbVar12,1);
        FUN_00011166(extraout_a0_00);
      }
    }
  }
  FUN_00011172((uint)*(byte *)(extraout_a0 + 4));
  *(undefined *)(extraout_a0 + 5) = 1;
  goto _L0;
_L0:
  param_2 = (uVar6 & 0xff) << 8 | 1;
  param_3 = 8;
  param_1 = 0x100;
  goto code_r0x000111c6;
}



void _L0(void)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int unaff_s0;
  uint uVar6;
  int extraout_a0;
  byte *extraout_a0_00;
  undefined2 *extraout_a0_01;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  uint unaff_s2;
  int unaff_s3;
  char unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  byte *pbVar12;
  code **unaff_s11;
  
code_r0x000111ec:
  _L0();
_L0:
  do {
    FUN_000111fe(0x18,unaff_s0);
    while( true ) {
      unaff_s2 = unaff_s2 + 1 & 7;
      unaff_s4 += -1;
      if (unaff_s4 == -1) {
        *(char *)(unaff_s6 + 0x15c) = (char)unaff_s2;
        return;
      }
      if ((*(byte *)(unaff_s3 + 0x56) & 0x10) == 0) break;
      FUN_00011210(unaff_s2);
    }
    FUN_00010fea(0x10,0);
    iVar9 = unaff_s2 * 0xe;
    uVar3 = *(ushort *)(iVar9 + 0x280083d2);
    *(char *)(extraout_a0 + 4) = (char)unaff_s2;
    *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s3 + 0x4c);
    uVar4 = *(ushort *)(unaff_s5 + 0x3d0 + iVar9);
    *(ushort *)(extraout_a0 + 8) = uVar4;
    uVar5 = *(ushort *)(iVar9 + unaff_s5 + 0x3d4);
    *(undefined *)(extraout_a0 + 5) = 0;
    *(byte *)(extraout_a0 + 0xd) = (byte)(uVar5 >> 0xf);
    *(byte *)(extraout_a0 + 0xb) = (byte)((uint)uVar5 >> 8) & 0x3f;
    *(char *)(extraout_a0 + 0xc) = (char)uVar5;
    if (((*(byte *)(unaff_s3 + 0x56) & 1) != 0) && ((uVar4 & 0x40) == 0)) {
      *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfe;
    }
    unaff_s0 = extraout_a0;
  } while ((ushort)(*(short *)(extraout_a0 + 6) - 2U) < 2);
  *(char *)(extraout_a0 + 10) = (char)((uint)uVar3 >> 8);
  if (((*(byte *)(unaff_s3 + 0x56) & 2) != 0) && ((*(ushort *)(extraout_a0 + 8) & 1) == 0)) {
    *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfd;
    iVar9 = *(int *)((uint)*(ushort *)(extraout_a0 + 6) * 4 + unaff_s7);
    *(ushort *)(iVar9 + 0x5c) = *(ushort *)(iVar9 + 0x5c) | 0x100;
  }
  if (((*(ushort *)(extraout_a0 + 8) & 0x13f) == 0) && (*(char *)(extraout_a0 + 10) != '\0')) {
    uVar6 = (uint)*(ushort *)(extraout_a0 + 6);
    uVar7 = uVar3 & 3;
    if ((*(byte *)(*(int *)(uVar6 * 4 + unaff_s7) + 0xa5) & 2) != 0) {
      *(char *)(extraout_a0 + 10) = *(char *)(extraout_a0 + 10) + -4;
    }
    if ((uVar3 & 3) != 0) {
      if (uVar7 < 3) goto _L0;
      if (uVar7 == 3) {
        cVar1 = *(char *)(extraout_a0 + 10);
        uVar6 = (uVar6 & 0xff) << 8 | 1;
        _L0(0x10a,uVar6,uVar6,0x1c);
        pbVar12 = extraout_a0_00 + 2;
        uVar7 = (uint)*(ushort *)((uint)*(byte *)(extraout_a0 + 4) * 0xe + unaff_s5 + 0x3d6);
        (**unaff_s11)(pbVar12,uVar7 + unaff_s5,1,*unaff_s11);
        if (extraout_a0_00[2] < 0x16) {
          pcVar10 = (char *)((uint)extraout_a0_00[2] * 0xc + unaff_s8);
          cVar2 = *pcVar10;
          if (cVar2 != cVar1) {
            bVar8 = 0x1e;
            goto _L0;
          }
          pcVar11 = *(code **)(pcVar10 + 8);
          *extraout_a0_00 = 0;
          (*pcVar11)(uVar7 + 1 & 0xffff,cVar2 + -1,pbVar12,pcVar11);
        }
        else {
          bVar8 = 0x19;
_L0:
          *extraout_a0_00 = bVar8;
        }
        FUN_0001115c(uVar6,(uint)*extraout_a0_00,pbVar12,1);
        FUN_00011166(extraout_a0_00);
      }
    }
  }
  FUN_00011172((uint)*(byte *)(extraout_a0 + 4));
  *(undefined *)(extraout_a0 + 5) = 1;
  goto _L0;
_L0:
  _L0(0x100,(uVar6 & 0xff) << 8 | 1,8);
  *extraout_a0_01 = *(undefined2 *)(extraout_a0 + 6);
  bVar8 = *(byte *)(extraout_a0 + 10);
  *(char *)(extraout_a0_01 + 1) = (char)uVar7;
  extraout_a0_01[2] = (ushort)bVar8;
  *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(extraout_a0 + 4);
  goto code_r0x000111ec;
}



void FUN_000111fe(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int extraout_a0;
  byte *extraout_a0_00;
  undefined2 *extraout_a0_01;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  uint unaff_s2;
  int unaff_s3;
  char unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  byte *pbVar12;
  code **unaff_s11;
  
  do {
    FUN_000111fe(param_1,param_2);
    while( true ) {
      unaff_s2 = unaff_s2 + 1 & 7;
      unaff_s4 += -1;
      if (unaff_s4 == -1) {
        *(char *)(unaff_s6 + 0x15c) = (char)unaff_s2;
        return;
      }
      if ((*(byte *)(unaff_s3 + 0x56) & 0x10) == 0) break;
      FUN_00011210(unaff_s2);
    }
    FUN_00010fea(0x10,0);
    iVar9 = unaff_s2 * 0xe;
    uVar3 = *(ushort *)(iVar9 + 0x280083d2);
    *(char *)(extraout_a0 + 4) = (char)unaff_s2;
    *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s3 + 0x4c);
    uVar4 = *(ushort *)(unaff_s5 + 0x3d0 + iVar9);
    *(ushort *)(extraout_a0 + 8) = uVar4;
    uVar5 = *(ushort *)(iVar9 + unaff_s5 + 0x3d4);
    *(undefined *)(extraout_a0 + 5) = 0;
    *(byte *)(extraout_a0 + 0xd) = (byte)(uVar5 >> 0xf);
    *(byte *)(extraout_a0 + 0xb) = (byte)((uint)uVar5 >> 8) & 0x3f;
    *(char *)(extraout_a0 + 0xc) = (char)uVar5;
    if (((*(byte *)(unaff_s3 + 0x56) & 1) != 0) && ((uVar4 & 0x40) == 0)) {
      *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfe;
    }
    if (1 < (ushort)(*(short *)(extraout_a0 + 6) - 2U)) {
      *(char *)(extraout_a0 + 10) = (char)((uint)uVar3 >> 8);
      if (((*(byte *)(unaff_s3 + 0x56) & 2) != 0) && ((*(ushort *)(extraout_a0 + 8) & 1) == 0)) {
        *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfd;
        iVar9 = *(int *)((uint)*(ushort *)(extraout_a0 + 6) * 4 + unaff_s7);
        *(ushort *)(iVar9 + 0x5c) = *(ushort *)(iVar9 + 0x5c) | 0x100;
      }
      if (((*(ushort *)(extraout_a0 + 8) & 0x13f) == 0) && (*(char *)(extraout_a0 + 10) != '\0')) {
        uVar6 = (uint)*(ushort *)(extraout_a0 + 6);
        uVar7 = uVar3 & 3;
        if ((*(byte *)(*(int *)(uVar6 * 4 + unaff_s7) + 0xa5) & 2) != 0) {
          *(char *)(extraout_a0 + 10) = *(char *)(extraout_a0 + 10) + -4;
        }
        if ((uVar3 & 3) != 0) {
          if (uVar7 < 3) {
            _L0(0x100,(uVar6 & 0xff) << 8 | 1,8);
            *extraout_a0_01 = *(undefined2 *)(extraout_a0 + 6);
            bVar8 = *(byte *)(extraout_a0 + 10);
            *(char *)(extraout_a0_01 + 1) = (char)uVar7;
            extraout_a0_01[2] = (ushort)bVar8;
            *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(extraout_a0 + 4);
            _L0();
            goto _L0;
          }
          if (uVar7 != 3) goto _L0;
          cVar1 = *(char *)(extraout_a0 + 10);
          uVar6 = (uVar6 & 0xff) << 8 | 1;
          _L0(0x10a,uVar6,uVar6,0x1c);
          pbVar12 = extraout_a0_00 + 2;
          uVar7 = (uint)*(ushort *)((uint)*(byte *)(extraout_a0 + 4) * 0xe + unaff_s5 + 0x3d6);
          (**unaff_s11)(pbVar12,uVar7 + unaff_s5,1,*unaff_s11);
          if (extraout_a0_00[2] < 0x16) {
            pcVar10 = (char *)((uint)extraout_a0_00[2] * 0xc + unaff_s8);
            cVar2 = *pcVar10;
            if (cVar2 != cVar1) {
              bVar8 = 0x1e;
              goto _L0;
            }
            pcVar11 = *(code **)(pcVar10 + 8);
            *extraout_a0_00 = 0;
            (*pcVar11)(uVar7 + 1 & 0xffff,cVar2 + -1,pbVar12,pcVar11);
          }
          else {
            bVar8 = 0x19;
_L0:
            *extraout_a0_00 = bVar8;
          }
          FUN_0001115c(uVar6,(uint)*extraout_a0_00,pbVar12,1);
          FUN_00011166(extraout_a0_00);
        }
      }
_L0:
      FUN_00011172((uint)*(byte *)(extraout_a0 + 4));
      *(undefined *)(extraout_a0 + 5) = 1;
    }
_L0:
    param_1 = 0x18;
    param_2 = extraout_a0;
  } while( true );
}



void FUN_00011210(uint param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int extraout_a0;
  byte *extraout_a0_00;
  undefined2 *extraout_a0_01;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  uint unaff_s2;
  int unaff_s3;
  char unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  byte *pbVar12;
  code **unaff_s11;
  
  do {
    FUN_00011210(param_1);
    param_1 = unaff_s2;
    while( true ) {
      param_1 = param_1 + 1 & 7;
      unaff_s4 += -1;
      if (unaff_s4 == -1) {
        *(char *)(unaff_s6 + 0x15c) = (char)param_1;
        return;
      }
      unaff_s2 = param_1;
      if ((*(byte *)(unaff_s3 + 0x56) & 0x10) != 0) break;
      FUN_00010fea(0x10,0);
      iVar9 = param_1 * 0xe;
      uVar3 = *(ushort *)(iVar9 + 0x280083d2);
      *(char *)(extraout_a0 + 4) = (char)param_1;
      *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s3 + 0x4c);
      uVar4 = *(ushort *)(unaff_s5 + 0x3d0 + iVar9);
      *(ushort *)(extraout_a0 + 8) = uVar4;
      uVar5 = *(ushort *)(iVar9 + unaff_s5 + 0x3d4);
      *(undefined *)(extraout_a0 + 5) = 0;
      *(byte *)(extraout_a0 + 0xd) = (byte)(uVar5 >> 0xf);
      *(byte *)(extraout_a0 + 0xb) = (byte)((uint)uVar5 >> 8) & 0x3f;
      *(char *)(extraout_a0 + 0xc) = (char)uVar5;
      if (((*(byte *)(unaff_s3 + 0x56) & 1) != 0) && ((uVar4 & 0x40) == 0)) {
        *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfe;
      }
      if (1 < (ushort)(*(short *)(extraout_a0 + 6) - 2U)) {
        *(char *)(extraout_a0 + 10) = (char)((uint)uVar3 >> 8);
        if (((*(byte *)(unaff_s3 + 0x56) & 2) != 0) && ((*(ushort *)(extraout_a0 + 8) & 1) == 0)) {
          *(byte *)(unaff_s3 + 0x56) = *(byte *)(unaff_s3 + 0x56) & 0xfd;
          iVar9 = *(int *)((uint)*(ushort *)(extraout_a0 + 6) * 4 + unaff_s7);
          *(ushort *)(iVar9 + 0x5c) = *(ushort *)(iVar9 + 0x5c) | 0x100;
        }
        if (((*(ushort *)(extraout_a0 + 8) & 0x13f) == 0) && (*(char *)(extraout_a0 + 10) != '\0'))
        {
          uVar6 = (uint)*(ushort *)(extraout_a0 + 6);
          uVar7 = uVar3 & 3;
          if ((*(byte *)(*(int *)(uVar6 * 4 + unaff_s7) + 0xa5) & 2) != 0) {
            *(char *)(extraout_a0 + 10) = *(char *)(extraout_a0 + 10) + -4;
          }
          if ((uVar3 & 3) != 0) {
            if (uVar7 < 3) {
              _L0(0x100,(uVar6 & 0xff) << 8 | 1,8);
              *extraout_a0_01 = *(undefined2 *)(extraout_a0 + 6);
              bVar8 = *(byte *)(extraout_a0 + 10);
              *(char *)(extraout_a0_01 + 1) = (char)uVar7;
              extraout_a0_01[2] = (ushort)bVar8;
              *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(extraout_a0 + 4);
              _L0();
              goto _L0;
            }
            if (uVar7 != 3) goto _L0;
            cVar1 = *(char *)(extraout_a0 + 10);
            uVar6 = (uVar6 & 0xff) << 8 | 1;
            _L0(0x10a,uVar6,uVar6,0x1c);
            pbVar12 = extraout_a0_00 + 2;
            uVar7 = (uint)*(ushort *)((uint)*(byte *)(extraout_a0 + 4) * 0xe + unaff_s5 + 0x3d6);
            (**unaff_s11)(pbVar12,uVar7 + unaff_s5,1,*unaff_s11);
            if (extraout_a0_00[2] < 0x16) {
              pcVar10 = (char *)((uint)extraout_a0_00[2] * 0xc + unaff_s8);
              cVar2 = *pcVar10;
              if (cVar2 != cVar1) {
                bVar8 = 0x1e;
                goto _L0;
              }
              pcVar11 = *(code **)(pcVar10 + 8);
              *extraout_a0_00 = 0;
              (*pcVar11)(uVar7 + 1 & 0xffff,cVar2 + -1,pbVar12,pcVar11);
            }
            else {
              bVar8 = 0x19;
_L0:
              *extraout_a0_00 = bVar8;
            }
            FUN_0001115c(uVar6,(uint)*extraout_a0_00,pbVar12,1);
            FUN_00011166(extraout_a0_00);
          }
        }
_L0:
        FUN_00011172((uint)*(byte *)(extraout_a0 + 4));
        *(undefined *)(extraout_a0 + 5) = 1;
      }
_L0:
      FUN_000111fe(0x18,extraout_a0);
    }
  } while( true );
}


