typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef ushort uint16_t;

struct co_list_hdr { // DWARF DIE: 406
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 325
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: ff3
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: f97
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 427
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 1035
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

struct llc_ch_asses_tag { // DWARF DIE: 1ed0
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict6f3_for___value anon_union.conflict6f3_for___value, *Panon_union.conflict6f3_for___value;

typedef uint wint_t;

union anon_union.conflict6f3_for___value { // DWARF DIE: 6f3
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 725
    int __count;
    union anon_union.conflict6f3_for___value __value;
};

typedef union anon_union.conflict6f3 anon_union.conflict6f3, *Panon_union.conflict6f3;

union anon_union.conflict6f3 { // DWARF DIE: 6f3
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 15a9
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 15d4
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

struct bd_addr { // DWARF DIE: 1ef
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 1434
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

struct ke_msg { // DWARF DIE: 10f5
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 166f
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 150b
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

struct ea_elt_tag { // DWARF DIE: 499
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

struct le_chnl_map { // DWARF DIE: 221
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 16a3
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 1c2
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 1574
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 1714
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

typedef struct llc_con_upd_req_ind llc_con_upd_req_ind, *Pllc_con_upd_req_ind;

struct llc_con_upd_req_ind { // DWARF DIE: 19c8
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

typedef enum llc_con_up_op {
    LLC_CON_UP_FORCE=2,
    LLC_CON_UP_HCI_REQ=0,
    LLC_CON_UP_LOC_REQ=4,
    LLC_CON_UP_MOVE_ANCHOR=1,
    LLC_CON_UP_PEER_REQ=3
} llc_con_up_op;

typedef long int32_t;

typedef enum lld_util_instant_action {
    LLD_UTIL_CHMAP_UPDATE=2,
    LLD_UTIL_NO_ACTION=0,
    LLD_UTIL_PARAM_UPDATE=1
} lld_util_instant_action;

typedef uint8_t ke_state_t;

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: eed
};

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

struct rwip_rf_api { // DWARF DIE: 1235
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

struct rwip_prio { // DWARF DIE: 13b9
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 1180
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

struct ke_state_handler { // DWARF DIE: 11ac
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 24e
    uint8_t ltk[16];
};

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 27b
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 2e6
    uint8_t supp_states[8];
};

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: 308
    uint8_t skd[16];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 29d
    uint8_t cmds[64];
};

typedef struct lld_evt_tag lld_evt_tag, *Plld_evt_tag;

typedef struct lld_evt_anchor lld_evt_anchor, *Plld_evt_anchor;

typedef struct ea_interval_tag ea_interval_tag, *Pea_interval_tag;

typedef union lld_evt_info lld_evt_info, *Plld_evt_info;

typedef struct lld_non_conn lld_non_conn, *Plld_non_conn;

typedef struct lld_conn lld_conn, *Plld_conn;

struct lld_non_conn { // DWARF DIE: 1bbc
    uint32_t window;
    uint32_t anchor;
    uint32_t end_ts;
    _Bool initiate;
    _Bool connect_req_sent;
    undefined field_0xe;
    undefined field_0xf;
};

struct lld_conn { // DWARF DIE: 1c0c
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

union lld_evt_info { // DWARF DIE: 1cfb
    struct lld_non_conn non_conn;
    struct lld_conn conn;
};

struct lld_evt_anchor { // DWARF DIE: 1b87
    uint32_t basetime_cnt;
    uint16_t finetime_cnt;
    uint16_t evt_cnt;
};

struct lld_evt_tag { // DWARF DIE: 1d24
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

struct ea_interval_tag { // DWARF DIE: 581
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

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 1e1f
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

typedef struct anon_struct.conflicte71 anon_struct.conflicte71, *Panon_struct.conflicte71;

struct anon_struct.conflicte71 { // DWARF DIE: e71
    uchar * _nextf[30];
    uint _nmalloc[30];
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflicteb8_for__new anon_union.conflicteb8_for__new, *Panon_union.conflicteb8_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflictd2c anon_struct.conflictd2c, *Panon_struct.conflictd2c;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: 7e9
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

struct _rand48 { // DWARF DIE: ce3
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflictd2c { // DWARF DIE: d2c
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

union anon_union.conflicteb8_for__new { // DWARF DIE: eb8
    struct anon_struct.conflictd2c _reent;
    struct anon_struct.conflicte71 _unused;
};

struct _on_exit_args { // DWARF DIE: 86c
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 8c1
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 779
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: c9e
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 91a
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 948
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

struct _reent { // DWARF DIE: ab4
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
    union anon_union.conflicteb8_for__new _new;
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

typedef union anon_union.conflicteb8 anon_union.conflicteb8, *Panon_union.conflicteb8;

union anon_union.conflicteb8 { // DWARF DIE: eb8
    struct anon_struct.conflictd2c _reent;
    struct anon_struct.conflicte71 _unused;
};

typedef int32_t BaseType_t;

typedef struct ea_param_output ea_param_output, *Pea_param_output;

struct ea_param_output { // DWARF DIE: 689
    uint16_t interval;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t duration;
    uint16_t offset;
    undefined field_0xa;
    undefined field_0xb;
};

typedef enum ea_error {
    EA_ERROR_BW_FULL=3,
    EA_ERROR_NOT_FOUND=2,
    EA_ERROR_OK=0,
    EA_ERROR_REJECTED=1
} ea_error;

typedef struct ea_param_input ea_param_input, *Pea_param_input;

struct ea_param_input { // DWARF DIE: 5ea
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

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct encrypt { // DWARF DIE: 1f57
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct rem_version { // DWARF DIE: 1f22
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct data_len_ext_tag { // DWARF DIE: 1f8c
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

struct llc_env_tag { // DWARF DIE: 201c
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




// DWARF DIE: 29f4

uint16_t lld_util_instant_get(void *event,uint8_t action)

{
  uint16_t uVar1;
  
  *(uint8_t *)((int)event + 0x45) = action;
  uVar1 = *(short *)((int)event + 0x36) * 6 + *(short *)((int)event + 0x38);
  *(uint16_t *)((int)event + 0x34) = uVar1;
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 293f

void lld_util_get_bd_address(bd_addr *bd_addr)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_28000024;
  bd_addr->addr[0] = (uint8_t)_DAT_28000024;
  bd_addr->addr[1] = (uint8_t)((uint)uVar1 >> 8);
  bd_addr->addr[2] = (uint8_t)((uint)uVar1 >> 0x10);
  bd_addr->addr[3] = (uint8_t)((uint)uVar1 >> 0x18);
  uVar1 = _DAT_28000028;
  bd_addr->addr[4] = (uint8_t)_DAT_28000028;
  bd_addr->addr[5] = (uint8_t)((uint)uVar1 >> 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 280f

void lld_util_set_bd_address(bd_addr *bd_addr,uint8_t type)

{
  undefined3 in_register_0000202d;
  
  _DAT_28000024 = *(undefined4 *)bd_addr->addr;
  _DAT_28000028 =
       (uint)*(ushort *)(bd_addr->addr + 4) | _DAT_28000028 & 0xfffe0000 |
       CONCAT31(in_register_0000202d,type) << 0x10;
  return;
}



// DWARF DIE: 27d4

uint8_t lld_util_freq2chnl(uint8_t freq)

{
  char cVar1;
  undefined3 in_register_00002029;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00002029,freq);
  if (uVar2 == 0xc) {
    return '&';
  }
  if (uVar2 != 0x27) {
    if (uVar2 != 0) {
      if (uVar2 < 0xc) {
        cVar1 = -1;
      }
      else {
        cVar1 = -2;
      }
      return freq + cVar1;
    }
    uVar2 = 0x25;
  }
  return (uint8_t)uVar2;
}



// DWARF DIE: 277b

uint16_t lld_util_get_local_offset(uint16_t PeerOffset,uint16_t Interval,uint32_t AnchorPoint)

{
  undefined2 in_register_0000202a;
  undefined2 in_register_0000202e;
  
  return (uint16_t)
         ((int)(CONCAT22(in_register_0000202a,PeerOffset) +
               AnchorPoint % CONCAT22(in_register_0000202e,Interval)) %
         (int)CONCAT22(in_register_0000202e,Interval));
}



// DWARF DIE: 2d46

uint16_t lld_util_get_peer_offset(uint16_t LocalOffset,uint16_t Interval,uint32_t AnchorPoint)

{
  undefined2 in_register_0000202a;
  undefined2 in_register_0000202e;
  uint uVar1;
  
  uVar1 = CONCAT22(in_register_0000202e,Interval);
  return (uint16_t)
         ((int)((CONCAT22(in_register_0000202a,LocalOffset) + uVar1) - AnchorPoint % uVar1) %
         (int)uVar1);
}



// DWARF DIE: 26f0

void lld_util_connection_param_set(ea_elt_tag *elt,ea_param_output *param)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = param->interval;
  uVar2 = (uint)uVar3 - (uint)elt->start_latency;
  if (uVar2 < param->duration) {
    param->duration = uVar2;
  }
  if (param->duration == 0) {
    param->duration = 2;
  }
  uVar1 = param->offset;
  param->duration = param->duration * 0x271;
  uVar2 = elt->timestamp % (uint)uVar3;
  if (uVar1 < uVar2) {
    uVar3 = (uVar3 + uVar1) - (short)uVar2;
  }
  else {
    if ((uVar2 != 0) || (uVar1 != 0)) {
      uVar3 = uVar1 - (short)uVar2;
    }
  }
  param->offset = uVar3;
  return;
}



// DWARF DIE: 2687

void lld_util_dle_set_cs_fields(uint16_t conhdl)

{
  undefined2 in_register_0000202a;
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = CONCAT22(in_register_0000202a,conhdl) * 0x5c;
  piVar1 = (int *)(CONCAT22(in_register_0000202a,conhdl) * 4);
  puVar2 = (ushort *)(iVar3 + 0x280080b0);
  *puVar2 = *puVar2 & 0xff00 | (ushort)*(byte *)(*piVar1 + 0x48);
  *(undefined2 *)(iVar3 + 0x280080b2) = *(undefined2 *)(*piVar1 + 0x50);
  return;
}



// DWARF DIE: 259b

void lld_util_anchor_point_move(ea_elt_tag *elt_connect)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  int extraout_a0;
  undefined *extraout_a0_00;
  uint uVar4;
  ea_param_output set_param;
  ea_param_input input_param;
  
  uVar1 = *(ushort *)&elt_connect[2].ea_cb_stop;
  _L0();
  if (extraout_a0 == 0) {
    FUN_000101f2();
    *extraout_a0_00 = 1;
    uVar4 = (uint)uVar1;
    uVar1 >>= 1;
    *(ushort *)(extraout_a0_00 + 2) = uVar1;
    *(ushort *)(extraout_a0_00 + 4) = uVar1;
    *(ushort *)(extraout_a0_00 + 0xe) = uVar1;
    *(ushort *)(extraout_a0_00 + 0x10) = uVar1;
    sVar2 = *(short *)((int)&elt_connect[2].linked_element + 2);
    extraout_a0_00[0x12] = 0;
    *(short *)(extraout_a0_00 + 6) = sVar2 + -1;
    *(undefined2 *)(extraout_a0_00 + 8) = 3000;
    uVar3 = *(undefined2 *)&elt_connect[2].timestamp;
    *(undefined2 *)(extraout_a0_00 + 0x14) = uVar3;
    *(undefined2 *)(extraout_a0_00 + 10) = uVar3;
    *(undefined2 *)(extraout_a0_00 + 0xc) = *(undefined2 *)&elt_connect[2].timestamp;
    *(short *)(extraout_a0_00 + 0x16) =
         (short)(((int)(uVar4 - elt_connect->timestamp % uVar4) % (int)uVar4 & 0xffffU) >> 1);
    *(undefined2 *)(extraout_a0_00 + 0x18) = 0xffff;
    *(undefined2 *)(extraout_a0_00 + 0x1a) = 0xffff;
    *(undefined2 *)(extraout_a0_00 + 0x1c) = 0xffff;
    *(undefined2 *)(extraout_a0_00 + 0x1e) = 0xffff;
    *(undefined2 *)(extraout_a0_00 + 0x20) = 0xffff;
    _L0();
  }
  return;
}



void _L0(void)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int unaff_s0;
  int extraout_a0;
  undefined *extraout_a0_00;
  uint uVar4;
  ushort in_stack_0000000c;
  ushort in_stack_00000014;
  
  _L0();
  if (extraout_a0 == 0) {
    FUN_000101f2();
    *extraout_a0_00 = 1;
    uVar4 = (uint)in_stack_0000000c;
    uVar3 = in_stack_0000000c >> 1;
    *(ushort *)(extraout_a0_00 + 2) = uVar3;
    *(ushort *)(extraout_a0_00 + 4) = uVar3;
    *(ushort *)(extraout_a0_00 + 0xe) = uVar3;
    *(ushort *)(extraout_a0_00 + 0x10) = uVar3;
    sVar1 = *(short *)(unaff_s0 + 0x5e);
    extraout_a0_00[0x12] = 0;
    *(short *)(extraout_a0_00 + 6) = sVar1 + -1;
    *(undefined2 *)(extraout_a0_00 + 8) = 3000;
    uVar2 = *(undefined2 *)(unaff_s0 + 0x60);
    *(undefined2 *)(extraout_a0_00 + 0x14) = uVar2;
    *(undefined2 *)(extraout_a0_00 + 10) = uVar2;
    *(undefined2 *)(extraout_a0_00 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
    *(short *)(extraout_a0_00 + 0x16) =
         (short)(((int)((in_stack_00000014 + uVar4) - *(uint *)(unaff_s0 + 8) % uVar4) % (int)uVar4
                 & 0xffffU) >> 1);
    *(undefined2 *)(extraout_a0_00 + 0x18) = 0xffff;
    *(undefined2 *)(extraout_a0_00 + 0x1a) = 0xffff;
    *(undefined2 *)(extraout_a0_00 + 0x1c) = 0xffff;
    *(undefined2 *)(extraout_a0_00 + 0x1e) = 0xffff;
    *(undefined2 *)(extraout_a0_00 + 0x20) = 0xffff;
    _L0();
  }
  return;
}



void FUN_000101f2(void)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int unaff_s0;
  undefined *extraout_a0;
  uint uVar4;
  ushort in_stack_0000000c;
  ushort in_stack_00000014;
  
  FUN_000101f2();
  *extraout_a0 = 1;
  uVar4 = (uint)in_stack_0000000c;
  uVar3 = in_stack_0000000c >> 1;
  *(ushort *)(extraout_a0 + 2) = uVar3;
  *(ushort *)(extraout_a0 + 4) = uVar3;
  *(ushort *)(extraout_a0 + 0xe) = uVar3;
  *(ushort *)(extraout_a0 + 0x10) = uVar3;
  sVar1 = *(short *)(unaff_s0 + 0x5e);
  extraout_a0[0x12] = 0;
  *(short *)(extraout_a0 + 6) = sVar1 + -1;
  *(undefined2 *)(extraout_a0 + 8) = 3000;
  uVar2 = *(undefined2 *)(unaff_s0 + 0x60);
  *(undefined2 *)(extraout_a0 + 0x14) = uVar2;
  *(undefined2 *)(extraout_a0 + 10) = uVar2;
  *(undefined2 *)(extraout_a0 + 0xc) = *(undefined2 *)(unaff_s0 + 0x60);
  *(short *)(extraout_a0 + 0x16) =
       (short)(((int)((in_stack_00000014 + uVar4) - *(uint *)(unaff_s0 + 8) % uVar4) % (int)uVar4 &
               0xffffU) >> 1);
  *(undefined2 *)(extraout_a0 + 0x18) = 0xffff;
  *(undefined2 *)(extraout_a0 + 0x1a) = 0xffff;
  *(undefined2 *)(extraout_a0 + 0x1c) = 0xffff;
  *(undefined2 *)(extraout_a0 + 0x1e) = 0xffff;
  *(undefined2 *)(extraout_a0 + 0x20) = 0xffff;
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 2534

void lld_util_flush_list(co_list *list)

{
  int extraout_a0;
  
  while (FUN_00010290(), extraout_a0 != 0) {
    _L0();
  }
  return;
}



void FUN_00010290(void)

{
  int extraout_a0;
  
  while (FUN_00010290(), extraout_a0 != 0) {
    _L0();
  }
  return;
}



void _L0(void)

{
  int extraout_a0;
  
  do {
    _L0();
    FUN_00010290();
  } while (extraout_a0 != 0);
  return;
}



// DWARF DIE: 24f6

_Bool lld_util_instant_ongoing(ea_elt_tag *elt)

{
  return (_Bool)(*(char *)((int)&elt[2].delay + 1) != '\0');
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 236e

void lld_util_compute_ce_max(ea_elt_tag *elt,uint16_t tx_time,uint16_t rx_time)

{
  undefined2 in_register_0000202e;
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  
  iVar1 = (uint)*(ushort *)&elt[2].ea_cb_start * 0x5c;
  if (*(char *)((int)&elt[2].ea_cb_stop + 3) == '\x03') {
    uVar2 = _DAT_28000000 >> 4 & 0xf;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x280080a2);
    if ((short)*(ushort *)(iVar1 + 0x280080a2) < 0) {
      iVar3 = ((uVar2 << 0x11) >> 0x12) * 0x271;
      goto _L0;
    }
  }
  iVar3 = (int)uVar2 >> 1;
_L0:
  uVar2 = CONCAT22(in_register_0000202e,tx_time) + 0x15c;
  if ((*(ushort *)(iVar1 + 0x28008092) & 0x200) != 0) {
    uVar2 = CONCAT22(in_register_0000202e,tx_time) + 0x17c;
  }
  uVar5 = ((((((uint)*(ushort *)&elt[2].ea_cb_stop - (uint)elt->start_latency) + -1) * 0x271 - iVar3
            ) / uVar2) * uVar2 - (uVar2 >> 1)) / 0x271;
  if (0x96 < (int)((uVar2 - 0x271) * uVar5)) {
    uVar5 -= 1;
  }
  *(ushort *)(iVar1 + 0x280080a8) = (ushort)uVar5;
  puVar4 = (ushort *)((uint)*(ushort *)&elt[2].ea_cb_start * 0x5c + 0x280080a6);
  if (uVar5 < *puVar4) {
    *puVar4 = (ushort)uVar5;
  }
  return;
}



// DWARF DIE: 2305

_Bool lld_util_elt_programmed(ea_elt_tag *elt)

{
  bool bVar1;
  
  bVar1 = _L0();
  return (_Bool)((uint)elt->start_latency <= (elt->timestamp - (uint)bVar1 & 0xff));
}



bool _L0(void)

{
  int unaff_s0;
  bool bVar1;
  
  bVar1 = _L0();
  return (uint)*(byte *)(unaff_s0 + 0x19) <= (*(int *)(unaff_s0 + 8) - (uint)bVar1 & 0xff);
}



// DWARF DIE: 22ab

void lld_util_priority_set(ea_elt_tag *elt,uint8_t priority_index)

{
  uint8_t uVar1;
  undefined3 in_register_0000202d;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = DAT_0000000a;
  if (CONCAT31(in_register_0000202d,priority_index) < 7) {
    UNRECOVERED_JUMPTABLE = *(code **)(CONCAT31(in_register_0000202d,priority_index) * 4);
                    // WARNING: Could not emulate address calculation at 0x000103d6
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return;
  }
  elt->current_prio = DAT_0000000a;
  *(uint8_t *)((int)&elt[2].ea_cb_cancel + 1) = uVar1;
  return;
}



// DWARF DIE: 2264

void lld_util_priority_update(ea_elt_tag *elt,uint8_t value)

{
  *(uint8_t *)((int)&elt[2].ea_cb_cancel + 1) = value;
  return;
}



// DWARF DIE: 2226

uint8_t lld_util_get_tx_pkt_cnt(ea_elt_tag *elt)

{
  return elt[2].stop_latency2;
}



// DWARF DIE: 21d0

void lld_util_eff_tx_time_set(ea_elt_tag *elt,uint16_t max_tx_time,uint16_t max_tx_size)

{
  elt[2].asap_settings = max_tx_time;
  elt[2].duration_min = max_tx_size;
  return;
}


