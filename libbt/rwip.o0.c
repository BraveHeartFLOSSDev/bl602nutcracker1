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
typedef unsigned long long    undefined5;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef ushort uint16_t;

struct co_list_hdr { // DWARF DIE: 727
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 6d0
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: 13e3
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 1387
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 748
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 1425
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

struct llc_ch_asses_tag { // DWARF DIE: 1bb7
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef int _ssize_t;

typedef union anon_union.conflicta8e anon_union.conflicta8e, *Panon_union.conflicta8e;

typedef uint wint_t;

union anon_union.conflicta8e { // DWARF DIE: a8e
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicta8e_for___value anon_union.conflicta8e_for___value, *Panon_union.conflicta8e_for___value;

union anon_union.conflicta8e_for___value { // DWARF DIE: a8e
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: ac0
    int __count;
    union anon_union.conflicta8e_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 179e
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 17c9
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

struct bd_addr { // DWARF DIE: 5b1
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 1629
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

struct ke_msg { // DWARF DIE: 79e
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 1864
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 1700
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

struct ea_elt_tag { // DWARF DIE: 1541
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

struct le_chnl_map { // DWARF DIE: 5e3
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 1898
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 584
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 1769
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 1909
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

typedef enum rwip_incr_dft {
    RWIP_INCR_ADV_DFT=1,
    RWIP_INCR_ADV_HDC_PRIO_DFT=1,
    RWIP_INCR_INIT_DFT=1,
    RWIP_INCR_LE_CON_ACT_DFT=11,
    RWIP_INCR_LE_CON_IDLE_DFT=1,
    RWIP_INCR_LE_ESTAB_DFT=1,
    RWIP_INCR_SCAN_DFT=1
} rwip_incr_dft;

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

typedef enum anon_enum_8.conflict8e {
    GLB_PLL_XTAL_24M=1,
    GLB_PLL_XTAL_26M=5,
    GLB_PLL_XTAL_32M=2,
    GLB_PLL_XTAL_38P4M=3,
    GLB_PLL_XTAL_40M=4,
    GLB_PLL_XTAL_NONE=0,
    GLB_PLL_XTAL_RC32M=6,
    GLB_SYS_CLK_PLL120M=3,
    GLB_SYS_CLK_PLL160M=4,
    GLB_SYS_CLK_PLL192M=5,
    GLB_SYS_CLK_PLL48M=2,
    GLB_SYS_CLK_RC32M=0,
    GLB_SYS_CLK_XTAL=1,
    HBN_32K_DIG=3,
    HBN_32K_RC=0,
    HBN_32K_XTAL=1,
    HBN_ROOT_CLK_PLL=2,
    HBN_ROOT_CLK_RC32M=0,
    HBN_ROOT_CLK_XTAL=1,
    HBN_UART_CLK_160M=1,
    HBN_UART_CLK_FCLK=0,
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflict8e;

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

typedef enum rwip_prio_dft {
    RWIP_PRIO_ADV_DFT=5,
    RWIP_PRIO_ADV_HDC_DFT=10,
    RWIP_PRIO_INIT_DFT=5,
    RWIP_PRIO_LE_CON_ACT_DFT=15,
    RWIP_PRIO_LE_CON_IDLE_DFT=10,
    RWIP_PRIO_LE_ESTAB_DFT=20,
    RWIP_PRIO_MAX=31,
    RWIP_PRIO_SCAN_DFT=5
} rwip_prio_dft;

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

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 1288
};

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

struct rwip_rf_api { // DWARF DIE: 349
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

struct rwip_prio { // DWARF DIE: 4db
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 14e7
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

struct ke_state_handler { // DWARF DIE: a06
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct rwip_time_t rwip_time_t, *Prwip_time_t;

struct rwip_time_t { // DWARF DIE: 1f25
    uint32_t time;
    uint32_t next_tick;
};

typedef struct rwip_env_tag rwip_env_tag, *Prwip_env_tag;

struct rwip_env_tag { // DWARF DIE: 1f71
    uint32_t lp_cycle_wakeup_delay;
    uint32_t sleep_acc_error;
    uint16_t sleep_algo_dur;
    uint16_t prevent_sleep;
    _Bool sleep_enable;
    _Bool ext_wakeup_enable;
    undefined field_0xe;
    undefined field_0xf;
};

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 610
    uint8_t ltk[16];
};

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 62d
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 691
    uint8_t supp_states[8];
};

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: 6b3
    uint8_t skd[16];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 64f
    uint8_t cmds[64];
};

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 1b2b
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

typedef struct anon_struct.conflict10c7 anon_struct.conflict10c7, *Panon_struct.conflict10c7;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 107e
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: b84
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

struct anon_struct.conflict10c7 { // DWARF DIE: 10c7
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

typedef union anon_union.conflict1253_for__new anon_union.conflict1253_for__new, *Panon_union.conflict1253_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict120c anon_struct.conflict120c, *Panon_struct.conflict120c;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

struct anon_struct.conflict120c { // DWARF DIE: 120c
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict1253_for__new { // DWARF DIE: 1253
    struct anon_struct.conflict10c7 _reent;
    struct anon_struct.conflict120c _unused;
};

struct _on_exit_args { // DWARF DIE: c07
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: c5c
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: b14
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 1039
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: cb5
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: ce3
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

struct _reent { // DWARF DIE: e4f
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
    union anon_union.conflict1253_for__new _new;
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

typedef union anon_union.conflict1253 anon_union.conflict1253, *Panon_union.conflict1253;

union anon_union.conflict1253 { // DWARF DIE: 1253
    struct anon_struct.conflict10c7 _reent;
    struct anon_struct.conflict120c _unused;
};

typedef int32_t BaseType_t;

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct encrypt { // DWARF DIE: 1c3e
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct rem_version { // DWARF DIE: 1c09
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct data_len_ext_tag { // DWARF DIE: 1c73
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

struct llc_env_tag { // DWARF DIE: 1d03
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 28da

_Bool rwip_check_wakeup_boundary(void)

{
  do {
  } while (true);
  _DAT_2800001c = 0x80000000;
  return (_Bool)(0x1d3 < _DAT_28000020);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 270a

void rwip_reset(void)

{
  _L0();
  FUN_00010034();
  _L0();
  _L0();
  _DAT_00000008 = 200;
  _DAT_0000000c = 0x101;
  _DAT_00000004 = 0;
  _L0();
  (*pcRam00000000)(pcRam00000000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  FUN_00010034();
  _L0();
  _L0();
  _DAT_00000008 = 200;
  _DAT_0000000c = 0x101;
  _DAT_00000004 = 0;
  _L0();
  (*pcRam00000000)(pcRam00000000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010034(void)

{
  FUN_00010034();
  _L0();
  _L0();
  _DAT_00000008 = 200;
  _DAT_0000000c = 0x101;
  _DAT_00000004 = 0;
  _L0();
  (*pcRam00000000)(pcRam00000000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  _L0();
  _DAT_00000008 = 200;
  _DAT_0000000c = 0x101;
  _DAT_00000004 = 0;
  _L0();
  (*pcRam00000000)(pcRam00000000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  _DAT_00000008 = 200;
  _DAT_0000000c = 0x101;
  _DAT_00000004 = 0;
  _L0();
  (*pcRam00000000)(pcRam00000000);
  return;
}



void _L0(void)

{
  _L0();
  (*pcRam00000000)(pcRam00000000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 27ac

void rwip_init(uint32_t error)

{
  (*pcRam00000000)(0,0,0x10,pcRam00000000);
  _L0();
  FUN_000100c0();
  FUN_000100d6();
  FUN_000100e6();
  FUN_000100f0();
  _L0();
  _L0();
  FUN_0001010a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  FUN_000100c0();
  FUN_000100d6();
  FUN_000100e6();
  FUN_000100f0();
  _L0();
  _L0();
  FUN_0001010a();
  *(undefined4 *)(unaff_s0 + 8) = 200;
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(undefined2 *)(unaff_s0 + 0xc) = 0x101;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100c0(void)

{
  int unaff_s0;
  
  FUN_000100c0();
  FUN_000100d6();
  FUN_000100e6();
  FUN_000100f0();
  _L0();
  _L0();
  FUN_0001010a();
  *(undefined4 *)(unaff_s0 + 8) = 200;
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(undefined2 *)(unaff_s0 + 0xc) = 0x101;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100d6(void)

{
  int unaff_s0;
  
  FUN_000100d6();
  FUN_000100e6();
  FUN_000100f0();
  _L0();
  _L0();
  FUN_0001010a();
  *(undefined4 *)(unaff_s0 + 8) = 200;
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(undefined2 *)(unaff_s0 + 0xc) = 0x101;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100e6(void)

{
  int unaff_s0;
  
  FUN_000100e6();
  FUN_000100f0();
  _L0();
  _L0();
  FUN_0001010a();
  *(undefined4 *)(unaff_s0 + 8) = 200;
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(undefined2 *)(unaff_s0 + 0xc) = 0x101;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100f0(void)

{
  int unaff_s0;
  
  FUN_000100f0();
  _L0();
  _L0();
  FUN_0001010a();
  *(undefined4 *)(unaff_s0 + 8) = 200;
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(undefined2 *)(unaff_s0 + 0xc) = 0x101;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  _L0();
  FUN_0001010a();
  *(undefined4 *)(unaff_s0 + 8) = 200;
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(undefined2 *)(unaff_s0 + 0xc) = 0x101;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  FUN_0001010a();
  *(undefined4 *)(unaff_s0 + 8) = 200;
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(undefined2 *)(unaff_s0 + 0xc) = 0x101;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001010a(void)

{
  int unaff_s0;
  
  FUN_0001010a();
  *(undefined4 *)(unaff_s0 + 8) = 200;
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(undefined2 *)(unaff_s0 + 0xc) = 0x101;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 26b8

void rwip_version(uint8_t *fw_version,uint8_t *hw_version)

{
  rwip_version(fw_version,hw_version);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2697

void rwip_schedule(void)

{
  if ((_DAT_0000000a & 1) != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 2680

int32_t rwip_get_sw_wakup_cnt(void)

{
  return iRam00000000;
}



// DWARF DIE: 2669

int32_t rwip_get_sleep_dur_cnt(void)

{
  return iRam00000000;
}



// DWARF DIE: 2652

int32_t rwip_get_sleep_stat_cnt(void)

{
  return iRam00000000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 25e3

void do_reset(void)

{
  _L0();
  _DAT_400000a8 &= 0xffffefff;
  _DAT_4000f030 |= 0x18;
  _DAT_40000014 &= 0xffffbfff;
  _L0();
  FUN_000101c2();
  FUN_000101cc();
  _DAT_400000a8 = _DAT_400000a8 | 0x1000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  _DAT_400000a8 &= 0xffffefff;
  _DAT_4000f030 |= 0x18;
  _DAT_40000014 &= 0xffffbfff;
  _L0();
  FUN_000101c2();
  FUN_000101cc();
  _DAT_400000a8 = _DAT_400000a8 | 0x1000;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  FUN_000101c2();
  FUN_000101cc();
  *(uint *)(unaff_s0 + 0xa8) = *(uint *)(unaff_s0 + 0xa8) | 0x1000;
  return;
}



void FUN_000101c2(void)

{
  int unaff_s0;
  
  FUN_000101c2();
  FUN_000101cc();
  *(uint *)(unaff_s0 + 0xa8) = *(uint *)(unaff_s0 + 0xa8) | 0x1000;
  return;
}



void FUN_000101cc(void)

{
  int unaff_s0;
  
  FUN_000101cc();
  *(uint *)(unaff_s0 + 0xa8) = *(uint *)(unaff_s0 + 0xa8) | 0x1000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 239b

int32_t rwip_sleep(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((_DAT_0000000a & 1) == 0) && (uVar2 = _L0(_DAT_00000028), uVar2 == 0)) {
    return 0;
  }
  if (DAT_0000000c == '\0') {
    return 0xffffffff;
  }
  if (_DAT_0000000a != 0) {
    return 0xffffffff;
  }
  uVar2 = _L0(_DAT_00000028);
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  _DAT_2800001c = 0x80000000;
  do {
  } while (true);
  iVar1 = 2;
  if (_DAT_00000008 <= _DAT_28000020) {
    iVar1 = 1;
  }
  uVar2 = _L0(_DAT_00000028);
  uVar3 = _LVL47(_DAT_00000028);
  if (uVar2 == 0xffffffff) {
    if (uVar3 == 0xffffffff) {
      uVar4 = 16000;
    }
    else {
_L0:
      uVar4 = uVar3 - iVar1;
      uVar2 = uVar3;
joined_r0x000102ba:
      uVar4 &= 0x7ffffff;
      if (0x4000000 < uVar4) goto _L0;
    }
  }
  else {
    if (uVar3 == 0xffffffff) {
      uVar4 = uVar2 - iVar1;
      goto joined_r0x000102ba;
    }
    uVar4 = uVar2 - uVar3 & 0x7ffffff;
    if ((uVar4 < 0x4000001) && (uVar4 != 0)) goto _L0;
    uVar4 = uVar2 - iVar1 & 0x7ffffff;
    if (uVar4 < 0x4000001) goto _L0;
_L0:
    uVar4 = -(iVar1 - uVar2 & 0x7ffffff);
  }
_L0:
  if (DAT_0000000d == '\0') {
    if (800 < (int)uVar4) {
      uVar2 = 800;
      goto _L0;
    }
  }
  else {
    uVar2 = 16000;
    if (16000 < (int)uVar4) goto _L0;
  }
  uVar2 = uVar4;
  if ((int)uVar4 < 2) {
    return 0xffffffff;
  }
_L0:
  uVar2 = (uVar2 << 0xb) / 100 - 1;
  if ((iRam00000000 + 1U <= uVar2) && (iVar1 = _L0(_DAT_00000028), iVar1 != 0)) {
    _L0(_DAT_00000028);
    _L0(_DAT_00000028);
    (*_DAT_00000028)(_DAT_00000028);
    iRam00000000 += 1;
    _L0();
    do {
    } while (-1 < (int)(_DAT_28000030 << 0xf));
    if ((int)(_DAT_28000030 << 0x10) < 0) {
      iVar1 = _L0();
      uVar3 = _DAT_28000038;
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar4 = _L0();
      if (uVar3 < uVar4) {
        return uVar2;
      }
      iRam00000000 += 1;
    }
    else {
      iRam00000000 += 1;
      _L0();
      _L0();
    }
    iRam00000000 += 1;
    _L0();
    _DAT_28000030 |= 0x10;
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint _L0(undefined *pcRam00000028)

{
  int iVar1;
  int *unaff_s1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = _L0(pcRam00000028);
  if (uVar2 == 0) {
    return 0;
  }
  if (*(char *)(unaff_s1 + 3) == '\0') {
    return 0xffffffff;
  }
  if (*(short *)((int)unaff_s1 + 10) != 0) {
    return 0xffffffff;
  }
  uVar2 = _L0(pcRam00000028);
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  _DAT_2800001c = 0x80000000;
  do {
  } while (true);
  iVar1 = 2;
  if (*(ushort *)(unaff_s1 + 2) <= _DAT_28000020) {
    iVar1 = 1;
  }
  uVar2 = _L0(pcRam00000028);
  uVar3 = _LVL47(pcRam00000028);
  if (uVar2 == 0xffffffff) {
    if (uVar3 == 0xffffffff) {
      uVar4 = 16000;
    }
    else {
_L0:
      uVar4 = uVar3 - iVar1;
      uVar2 = uVar3;
joined_r0x000102ba:
      uVar4 &= 0x7ffffff;
      if (0x4000000 < uVar4) goto _L0;
    }
  }
  else {
    if (uVar3 == 0xffffffff) {
      uVar4 = uVar2 - iVar1;
      goto joined_r0x000102ba;
    }
    uVar4 = uVar2 - uVar3 & 0x7ffffff;
    if ((uVar4 < 0x4000001) && (uVar4 != 0)) goto _L0;
    uVar4 = uVar2 - iVar1 & 0x7ffffff;
    if (uVar4 < 0x4000001) goto _L0;
_L0:
    uVar4 = -(iVar1 - uVar2 & 0x7ffffff);
  }
_L0:
  if (*(char *)((int)unaff_s1 + 0xd) == '\0') {
    if (800 < (int)uVar4) {
      uVar2 = 800;
      goto _L0;
    }
  }
  else {
    uVar2 = 16000;
    if (16000 < (int)uVar4) goto _L0;
  }
  uVar2 = uVar4;
  if ((int)uVar4 < 2) {
    return 0xffffffff;
  }
_L0:
  uVar2 = (uVar2 << 0xb) / 100 - 1;
  if ((*unaff_s1 + 1U <= uVar2) && (iVar1 = _L0(pcRam00000028), iVar1 != 0)) {
    _L0(pcRam00000028);
    _L0(pcRam00000028);
    (*(code *)pcRam00000028)(pcRam00000028);
    iRam00000000 += 1;
    _L0();
    do {
    } while (-1 < (int)(_DAT_28000030 << 0xf));
    if ((int)(_DAT_28000030 << 0x10) < 0) {
      iVar1 = _L0();
      uVar3 = _DAT_28000038;
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar4 = _L0();
      if (uVar3 < uVar4) {
        return uVar2;
      }
      iRam00000000 += 1;
    }
    else {
      iRam00000000 += 1;
      _L0();
      _L0();
    }
    iRam00000000 += 1;
    _L0();
    _DAT_28000030 |= 0x10;
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint _L0(undefined *pcRam00000028)

{
  int iVar1;
  int *unaff_s1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = _L0(pcRam00000028);
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  _DAT_2800001c = 0x80000000;
  do {
  } while (true);
  iVar1 = 2;
  if (*(ushort *)(unaff_s1 + 2) <= _DAT_28000020) {
    iVar1 = 1;
  }
  uVar2 = _L0(pcRam00000028);
  uVar3 = _LVL47(pcRam00000028);
  if (uVar2 == 0xffffffff) {
    if (uVar3 == 0xffffffff) {
      uVar4 = 16000;
    }
    else {
_L0:
      uVar4 = uVar3 - iVar1;
      uVar2 = uVar3;
joined_r0x000102ba:
      uVar4 &= 0x7ffffff;
      if (0x4000000 < uVar4) goto _L0;
    }
  }
  else {
    if (uVar3 == 0xffffffff) {
      uVar4 = uVar2 - iVar1;
      goto joined_r0x000102ba;
    }
    uVar4 = uVar2 - uVar3 & 0x7ffffff;
    if ((uVar4 < 0x4000001) && (uVar4 != 0)) goto _L0;
    uVar4 = uVar2 - iVar1 & 0x7ffffff;
    if (uVar4 < 0x4000001) goto _L0;
_L0:
    uVar4 = -(iVar1 - uVar2 & 0x7ffffff);
  }
_L0:
  if (*(char *)((int)unaff_s1 + 0xd) == '\0') {
    if (800 < (int)uVar4) {
      uVar2 = 800;
      goto _L0;
    }
  }
  else {
    uVar2 = 16000;
    if (16000 < (int)uVar4) goto _L0;
  }
  uVar2 = uVar4;
  if ((int)uVar4 < 2) {
    return 0xffffffff;
  }
_L0:
  uVar2 = (uVar2 << 0xb) / 100 - 1;
  if ((*unaff_s1 + 1U <= uVar2) && (iVar1 = _L0(pcRam00000028), iVar1 != 0)) {
    _L0(pcRam00000028);
    _L0(pcRam00000028);
    (*(code *)pcRam00000028)(pcRam00000028);
    iRam00000000 += 1;
    _L0();
    do {
    } while (-1 < (int)(_DAT_28000030 << 0xf));
    if ((int)(_DAT_28000030 << 0x10) < 0) {
      iVar1 = _L0();
      uVar3 = _DAT_28000038;
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar4 = _L0();
      if (uVar3 < uVar4) {
        return uVar2;
      }
      iRam00000000 += 1;
    }
    else {
      iRam00000000 += 1;
      _L0();
      _L0();
    }
    iRam00000000 += 1;
    _L0();
    _DAT_28000030 |= 0x10;
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint _L0(undefined *pcRam00000028)

{
  uint unaff_s0;
  uint uVar1;
  int *unaff_s1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint unaff_s2;
  
  uVar2 = _L0(pcRam00000028);
  uVar1 = unaff_s0 & unaff_s2;
  uVar3 = _LVL47(pcRam00000028);
  if (uVar2 == 0xffffffff) {
    if (uVar3 == 0xffffffff) {
      uVar5 = 16000;
    }
    else {
_L0:
      uVar5 = uVar3 - uVar1;
joined_r0x000102ba:
      uVar5 &= unaff_s2;
      if (0x4000000 < uVar5) {
        uVar5 = uVar1 - uVar3 & unaff_s2;
        goto _L0;
      }
    }
  }
  else {
    if (uVar3 == 0xffffffff) {
      uVar5 = uVar2 - uVar1;
      uVar3 = uVar2;
      goto joined_r0x000102ba;
    }
    uVar5 = uVar2 - uVar3 & unaff_s2;
    if ((uVar5 < 0x4000001) && (uVar5 != 0)) goto _L0;
    uVar5 = uVar2 - uVar1 & 0x7ffffff;
    if (uVar5 < 0x4000001) goto _L0;
    uVar5 = uVar1 - uVar2 & 0x7ffffff;
_L0:
    uVar5 = -uVar5;
  }
_L0:
  if (*(char *)((int)unaff_s1 + 0xd) == '\0') {
    if (800 < (int)uVar5) {
      uVar3 = 800;
      goto _L0;
    }
  }
  else {
    uVar3 = 16000;
    if (16000 < (int)uVar5) goto _L0;
  }
  uVar3 = uVar5;
  if ((int)uVar5 < 2) {
    return 0xffffffff;
  }
_L0:
  uVar3 = (uVar3 << 0xb) / 100 - 1;
  if ((*unaff_s1 + 1U <= uVar3) && (iVar4 = _L0(pcRam00000028), iVar4 != 0)) {
    _L0(pcRam00000028);
    _L0(pcRam00000028);
    (*(code *)pcRam00000028)(pcRam00000028);
    iRam00000000 += 1;
    _L0();
    do {
    } while (-1 < (int)(_DAT_28000030 << 0xf));
    if ((int)(_DAT_28000030 << 0x10) < 0) {
      iVar4 = _L0();
      uVar1 = _DAT_28000038;
      if (iVar4 == 0) {
        return uVar3;
      }
      uVar2 = _L0();
      if (uVar1 < uVar2) {
        return uVar3;
      }
      iRam00000000 += 1;
    }
    else {
      iRam00000000 += 1;
      _L0();
      _L0();
    }
    iRam00000000 += 1;
    _L0();
    _DAT_28000030 |= 0x10;
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint _LVL47(undefined *pcRam00000028)

{
  int unaff_s0;
  int *unaff_s1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s2;
  int unaff_s3;
  
  uVar1 = _LVL47(pcRam00000028);
  if (unaff_s3 == -1) {
    if (uVar1 == 0xffffffff) {
      uVar4 = 16000;
    }
    else {
_L0:
      uVar4 = uVar1 - unaff_s0 & unaff_s2;
      if (0x4000000 < uVar4) {
        iVar2 = -uVar1;
_L0:
        uVar4 = unaff_s0 + iVar2 & unaff_s2;
        goto _L0;
      }
    }
  }
  else {
    if (uVar1 == 0xffffffff) {
      uVar4 = unaff_s3 - unaff_s0 & unaff_s2;
      if (0x4000000 < uVar4) {
        iVar2 = -unaff_s3;
        goto _L0;
      }
    }
    else {
      uVar4 = unaff_s3 - uVar1 & unaff_s2;
      if ((uVar4 < 0x4000001) && (uVar4 != 0)) goto _L0;
      uVar4 = unaff_s3 - unaff_s0 & 0x7ffffff;
      if (uVar4 < 0x4000001) goto _L0;
      uVar4 = unaff_s0 - unaff_s3 & 0x7ffffff;
_L0:
      uVar4 = -uVar4;
    }
  }
_L0:
  if (*(char *)((int)unaff_s1 + 0xd) == '\0') {
    if (800 < (int)uVar4) {
      uVar1 = 800;
      goto _L0;
    }
  }
  else {
    uVar1 = 16000;
    if (16000 < (int)uVar4) goto _L0;
  }
  uVar1 = uVar4;
  if ((int)uVar4 < 2) {
    return 0xffffffff;
  }
_L0:
  uVar1 = (uVar1 << 0xb) / 100 - 1;
  if ((*unaff_s1 + 1U <= uVar1) && (iVar2 = _L0(pcRam00000028), iVar2 != 0)) {
    _L0(pcRam00000028);
    _L0(pcRam00000028);
    (*(code *)pcRam00000028)(pcRam00000028);
    iRam00000000 += 1;
    _L0();
    do {
    } while (-1 < (int)(_DAT_28000030 << 0xf));
    if ((int)(_DAT_28000030 << 0x10) < 0) {
      iVar2 = _L0();
      uVar4 = _DAT_28000038;
      if (iVar2 == 0) {
        return uVar1;
      }
      uVar3 = _L0();
      if (uVar4 < uVar3) {
        return uVar1;
      }
      iRam00000000 += 1;
    }
    else {
      iRam00000000 += 1;
      _L0();
      _L0();
    }
    iRam00000000 += 1;
    _L0();
    _DAT_28000030 |= 0x10;
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(undefined *pcRam00000028)

{
  uint uVar1;
  undefined4 unaff_s0;
  int iVar2;
  uint uVar3;
  
  iVar2 = _L0(pcRam00000028);
  if (iVar2 != 0) {
    _L0(pcRam00000028);
    _L0(pcRam00000028);
    (*(code *)pcRam00000028)(pcRam00000028);
    iRam00000000 += 1;
    _L0();
    do {
    } while (-1 < (int)(_DAT_28000030 << 0xf));
    if ((int)(_DAT_28000030 << 0x10) < 0) {
      iVar2 = _L0();
      uVar1 = _DAT_28000038;
      if (iVar2 == 0) {
        return unaff_s0;
      }
      uVar3 = _L0();
      if (uVar1 < uVar3) {
        return unaff_s0;
      }
      iRam00000000 += 1;
    }
    else {
      iRam00000000 += 1;
      _L0();
      _L0();
    }
    iRam00000000 += 1;
    _L0();
    _DAT_28000030 |= 0x10;
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(undefined *pcRam00000028)

{
  uint uVar1;
  undefined4 unaff_s0;
  int iVar2;
  uint uVar3;
  
  _L0(pcRam00000028);
  _L0(pcRam00000028);
  (*(code *)pcRam00000028)(pcRam00000028);
  iRam00000000 += 1;
  _L0();
  do {
  } while (-1 < (int)(_DAT_28000030 << 0xf));
  if ((int)(_DAT_28000030 << 0x10) < 0) {
    iVar2 = _L0();
    uVar1 = _DAT_28000038;
    if (iVar2 == 0) {
      return unaff_s0;
    }
    uVar3 = _L0();
    if (uVar1 < uVar3) {
      return unaff_s0;
    }
    iRam00000000 += 1;
  }
  else {
    iRam00000000 += 1;
    _L0();
    _L0();
  }
  iRam00000000 += 1;
  _L0();
  _DAT_28000030 = _DAT_28000030 | 0x10;
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(undefined *pcRam00000028)

{
  undefined4 unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  _L0(pcRam00000028);
  (*(code *)pcRam00000028)(pcRam00000028);
  iRam00000000 += 1;
  _L0();
  do {
  } while (-1 < *(int *)(unaff_s1 + 0x30) << 0xf);
  if (*(int *)(unaff_s1 + 0x30) << 0x10 < 0) {
    iVar2 = _L0();
    if (iVar2 == 0) {
      return unaff_s0;
    }
    uVar1 = *(uint *)(unaff_s1 + 0x38);
    uVar3 = _L0();
    if (uVar1 < uVar3) {
      return unaff_s0;
    }
    iRam00000000 += 1;
  }
  else {
    iRam00000000 += 1;
    _L0();
    _L0();
  }
  iRam00000000 += 1;
  _L0();
  _DAT_28000030 = _DAT_28000030 | 0x10;
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  undefined4 unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  _L0();
  do {
  } while (-1 < *(int *)(unaff_s1 + 0x30) << 0xf);
  if (*(int *)(unaff_s1 + 0x30) << 0x10 < 0) {
    iVar2 = _L0();
    if (iVar2 == 0) {
      return unaff_s0;
    }
    uVar1 = *(uint *)(unaff_s1 + 0x38);
    uVar3 = _L0();
    if (uVar1 < uVar3) {
      return unaff_s0;
    }
    iRam00000000 += 1;
  }
  else {
    iRam00000000 += 1;
    _L0();
    _L0();
  }
  iRam00000000 += 1;
  _L0();
  _DAT_28000030 = _DAT_28000030 | 0x10;
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  _L0();
  _L0();
  iRam00000000 += 1;
  _L0();
  _DAT_28000030 = _DAT_28000030 | 0x10;
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  _L0();
  iRam00000000 += 1;
  _L0();
  _DAT_28000030 = _DAT_28000030 | 0x10;
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  _L0();
  _DAT_28000030 = _DAT_28000030 | 0x10;
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  undefined4 unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = _L0();
  if ((iVar2 != 0) && (uVar1 = *(uint *)(unaff_s1 + 0x38), uVar3 = _L0(), uVar3 <= uVar1)) {
    iRam00000000 += 2;
    _L0();
    _DAT_28000030 |= 0x10;
    unaff_s0 = 0xffffffff;
  }
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  undefined4 unaff_s0;
  uint unaff_s1;
  uint uVar1;
  
  uVar1 = _L0();
  if (uVar1 <= unaff_s1) {
    iRam00000000 += 2;
    _L0();
    _DAT_28000030 |= 0x10;
    unaff_s0 = 0xffffffff;
  }
  return unaff_s0;
}



// DWARF DIE: 2376

int32_t ble_controller_sleep(void)

{
  int32_t iVar1;
  
  iVar1 = ble_controller_sleep();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2332

void ble_controller_wakeup(void)

{
  _DAT_28000030 = _DAT_28000030 | 0x10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 22f5

uint8_t ble_get_deep_sleep_stat(void)

{
  return (uint8_t)((byte)(_DAT_28000030 >> 0xf) & 1);
}



// DWARF DIE: 222f

void rwip_wakeup_delay_set(uint16_t wakeup_delay)

{
  undefined2 in_register_0000202a;
  
  uRam00000000 = (uint)(CONCAT22(in_register_0000202a,wakeup_delay) << 0xf) / 1000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 21b9

void rwip_prevent_sleep_set(uint16_t prv_slp_bit)

{
  _DAT_0000000a = prv_slp_bit | _DAT_0000000a;
  return;
}



// DWARF DIE: 22c1

void rwip_wakeup(void)

{
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2143

void rwip_prevent_sleep_clear(uint16_t prv_slp_bit)

{
  _DAT_0000000a = ~prv_slp_bit & _DAT_0000000a;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 227e

void rwip_wakeup_end(void)

{
  if ((_DAT_0000000a & 1) == 0) {
    return;
  }
  _L0();
  FUN_000104c2();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_000104c2();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000104c2(void)

{
  FUN_000104c2();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 212c

_Bool rwip_sleep_enable(void)

{
  return (_Bool)DAT_0000000c;
}



// DWARF DIE: 2115

_Bool rwip_ext_wakeup_enable(void)

{
  return (_Bool)DAT_0000000d;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 20d7

uint32_t rwip_sleep_lpcycles_2_us(uint32_t lpcycles)

{
  uint uVar1;
  
  uVar1 = _DAT_00000004 + lpcycles * 0x109;
  _DAT_00000004 = uVar1 & 0x1ff;
  return lpcycles * 0x1e + (uVar1 >> 9);
}



// DWARF DIE: 2a34

uint32_t rwip_us_2_lpcycles(uint32_t us)

{
  return (us << 0xf) / 1000000;
}



// DWARF DIE: 2079

void rwip_wlcoex_set(_Bool state)

{
  rwip_wlcoex_set(state);
  return;
}


