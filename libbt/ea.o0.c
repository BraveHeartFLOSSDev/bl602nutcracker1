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

struct co_list_hdr { // DWARF DIE: c41
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 30e
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: 1036
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: fda
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: c67
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 1078
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

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict396_for___value anon_union.conflict396_for___value, *Panon_union.conflict396_for___value;

typedef uint wint_t;

union anon_union.conflict396_for___value { // DWARF DIE: 396
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 3c8
    int __count;
    union anon_union.conflict396_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflict396 anon_union.conflict396, *Panon_union.conflict396;

union anon_union.conflict396 { // DWARF DIE: 396
    wint_t __wch;
    uchar __wchb[4];
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

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

typedef enum anon_enum_8.conflict31 {
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflict31;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 1787
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 17b2
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

struct bd_addr { // DWARF DIE: 222
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 1612
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

struct ke_msg { // DWARF DIE: 12e9
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 184d
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 16e9
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

typedef char int8_t;

typedef struct le_chnl_map le_chnl_map, *Ple_chnl_map;

struct ea_elt_tag { // DWARF DIE: d2e
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

struct le_chnl_map { // DWARF DIE: 254
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 1881
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 1f5
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 1752
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 18f2
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

struct __locale_t { // DWARF DIE: b97
};

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

struct rwip_rf_api { // DWARF DIE: 1413
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

struct rwip_prio { // DWARF DIE: 1597
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 1374
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

struct ke_state_handler { // DWARF DIE: 13a0
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 281
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 2ec
    uint8_t supp_states[8];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 2a3
    uint8_t cmds[64];
};

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 1b6f
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

typedef union anon_union.conflictb62 anon_union.conflictb62, *Panon_union.conflictb62;

typedef struct anon_struct.conflict9d6 anon_struct.conflict9d6, *Panon_struct.conflict9d6;

typedef struct anon_struct.conflictb1b anon_struct.conflictb1b, *Panon_struct.conflictb1b;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct anon_struct.conflictb1b { // DWARF DIE: b1b
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _rand48 { // DWARF DIE: 98d
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 48c
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

struct anon_struct.conflict9d6 { // DWARF DIE: 9d6
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

union anon_union.conflictb62 { // DWARF DIE: b62
    struct anon_struct.conflict9d6 _reent;
    struct anon_struct.conflictb1b _unused;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflictb62_for__new anon_union.conflictb62_for__new, *Panon_union.conflictb62_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

struct _on_exit_args { // DWARF DIE: 50f
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 564
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 41c
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 948
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 5c4
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 5f2
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

union anon_union.conflictb62_for__new { // DWARF DIE: b62
    struct anon_struct.conflict9d6 _reent;
    struct anon_struct.conflictb1b _unused;
};

struct _reent { // DWARF DIE: 75e
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
    union anon_union.conflictb62_for__new _new;
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

typedef int32_t BaseType_t;

typedef struct ea_param_output ea_param_output, *Pea_param_output;

struct ea_param_output { // DWARF DIE: f1e
    uint16_t interval;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t duration;
    uint16_t offset;
    undefined field_0xa;
    undefined field_0xb;
};

typedef enum ea_elt_asap_type {
    EA_FLAG_ASAP_LIMIT=2,
    EA_FLAG_ASAP_NO_LIMIT=1,
    EA_FLAG_MAX=3,
    EA_FLAG_NO_ASAP=0
} ea_elt_asap_type;

typedef struct ea_param_input ea_param_input, *Pea_param_input;

struct ea_param_input { // DWARF DIE: e7f
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

typedef struct ea_interval_tag ea_interval_tag, *Pea_interval_tag;

struct ea_interval_tag { // DWARF DIE: e16
    struct co_list_hdr hdr;
    uint16_t interval_used;
    uint16_t offset_used;
    uint16_t bandwidth_used;
    uint16_t conhdl_used;
    uint16_t role_used;
    uint16_t linkid;
};

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

typedef struct ea_env_tag ea_env_tag, *Pea_env_tag;

struct ea_env_tag { // DWARF DIE: 1c32
    struct co_list elt_wait;
    struct ea_elt_tag * elt_prog;
    struct co_list elt_canceled;
    struct co_list interval_list;
    uint32_t finetarget_time;
};

typedef enum ea_conflict {
    START_AFTER_END_AFTER=5,
    START_BEFORE_END_AFTER=2,
    START_BEFORE_END_BEFORE=0,
    START_BEFORE_END_DURING=1,
    START_DURING_END_AFTER=4,
    START_DURING_END_DURING=3
} ea_conflict;

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




// DWARF DIE: 2b97

uint8_t ea_conflict_check(ea_elt_tag *evt_a,ea_elt_tag *evt_b)

{
  uint8_t uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = evt_b->timestamp - evt_a->timestamp & 0x7ffffff;
  uVar5 = (uint)evt_a->delay;
  uVar3 = (uint)evt_b->delay;
  if (uVar2 < 0x4000001) {
    if (uVar2 == 0) goto _L0;
_L0:
    iVar4 = (uVar5 + evt_a->duration_min) - uVar3;
    uVar1 = '\0';
    if ((0 < iVar4) && (uVar1 = '\0', (int)((iVar4 + -1) / -0x271 + uVar2) < 1)) {
      uVar1 = '\x01';
      iVar4 -= (uint)evt_b->duration_min;
      if (0 < iVar4) {
        return ((int)((iVar4 + -1) / -0x271 + uVar2) < 1) + '\x01';
      }
    }
  }
  else {
    uVar2 = -(evt_a->timestamp - evt_b->timestamp & 0x7ffffff);
    if (uVar2 == 0) {
_L0:
      if (uVar5 < uVar3) goto _L0;
    }
    iVar4 = (uVar3 + evt_b->duration_min) - uVar5;
    uVar1 = '\x05';
    if ((0 < iVar4) && (-1 < (int)((iVar4 + -1) / 0x271 + uVar2))) {
      iVar4 = ((uVar5 + evt_a->duration_min) - uVar3) - (uint)evt_b->duration_min;
      uVar1 = '\x04';
      if (iVar4 < 1) {
        uVar1 = ((int)(iVar4 / -0x271 + uVar2) < 0) + '\x03';
      }
    }
  }
  return uVar1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 29a0

void ea_elt_cancel(ea_elt_tag *new_elt)

{
  ushort uVar1;
  ea_elt_tag *peVar2;
  int extraout_a0;
  uint uVar3;
  uint uVar4;
  ea_elt_tag *peVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ea_elt_tag *peVar11;
  
  puVar8 = _DAT_0000000c;
  puVar9 = (undefined4 *)0x0;
_L0:
  do {
    do {
      puVar10 = puVar9;
      puVar9 = puVar8;
      if (puVar9 == (undefined4 *)0x0) {
        if (_DAT_0000000c != (undefined4 *)0x0) {
          _DAT_28000000 = _DAT_28000000 & 0xefffffff | 0x10000000;
        }
        return;
      }
      uVar1 = *(ushort *)(puVar9 + 4);
      puVar8 = (undefined4 *)*puVar9;
    } while ((uVar1 >> 0xe == 0) || (uVar4 = (int)(uint)uVar1 >> 4 & 0x3f, uVar4 == 0));
    uVar3 = uVar1 & 0xfffffc0f;
    *(byte *)((int)puVar9 + 0x16) = ((byte)uVar1 & 0xf) + *(char *)((int)puVar9 + 0x16);
    uVar4 = (uVar4 - 1) * 0x10;
    uVar6 = uVar4 & 0xffff | uVar3;
    *(ushort *)(puVar9 + 4) = (ushort)uVar4 | (ushort)uVar3;
    uVar4 = (int)uVar6 >> 0xc & 3;
    peVar2 = new_elt;
    peVar11 = (ea_elt_tag *)0x0;
    while ((peVar5 = peVar2, peVar5 != (ea_elt_tag *)0x0 &&
           (FUN_000101aa(puVar9,(int *)peVar5), extraout_a0 != 0))) {
      if (extraout_a0 != 5) {
        uVar3 = (uint)peVar5->delay + (uint)peVar5->duration_min;
        uVar7 = uVar3 / 0x271 + peVar5->timestamp;
        if ((uint)*(ushort *)(puVar9 + 5) < uVar3 % 0x271) {
          uVar7 += 1;
        }
        if (uVar4 == 1) {
          uVar7 |= 1;
        }
        else {
          if (uVar4 == 0) {
            uVar7 = uVar7 + 1 & 0xfffffffe;
          }
        }
        uVar7 &= 0x7ffffff;
        puVar9[2] = uVar7;
        if (1 < uVar6 >> 0xe) {
          uVar3 = puVar9[3] - uVar7 & 0x7ffffff;
          if (0x4000000 < uVar3) {
            uVar3 = -(uVar7 - puVar9[3] & 0x7ffffff);
          }
          if ((int)uVar3 < (int)(*(ushort *)((int)puVar9 + 0x12) / 0x271)) goto _L0;
        }
      }
      peVar2 = *(ea_elt_tag **)&peVar5->hdr;
      peVar11 = peVar5;
    }
    FUN_00010186(puVar10,puVar9);
    FUN_00010196((int *)peVar11,puVar9);
    puVar9 = puVar10;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010186(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int **ppiVar2;
  int unaff_s1;
  int extraout_a0;
  uint uVar3;
  uint uVar4;
  int **ppiVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s6;
  uint unaff_s8;
  undefined4 *unaff_s9;
  uint unaff_s10;
  int **unaff_s11;
  
code_r0x00010186:
  FUN_00010186(param_1,param_2);
  FUN_00010196((int *)unaff_s11,unaff_s6);
_L0:
  do {
    param_1 = unaff_s9;
    param_2 = unaff_s3;
    if (param_2 == (undefined4 *)0x0) {
      if (*(int *)(unaff_s1 + 0xc) != 0) {
        _DAT_28000000 = _DAT_28000000 & 0xefffffff | 0x10000000;
      }
      return;
    }
    uVar1 = *(ushort *)(param_2 + 4);
    unaff_s3 = (undefined4 *)*param_2;
    unaff_s9 = param_2;
  } while ((uVar1 >> 0xe == 0) ||
          (uVar4 = (int)(uint)uVar1 >> 4 & 0x3f, unaff_s9 = param_2, uVar4 == 0));
  uVar3 = uVar1 & 0xfffffc0f;
  *(byte *)((int)param_2 + 0x16) = ((byte)uVar1 & 0xf) + *(char *)((int)param_2 + 0x16);
  uVar4 = (uVar4 - 1) * 0x10;
  uVar6 = uVar4 & 0xffff | uVar3;
  *(ushort *)(param_2 + 4) = (ushort)uVar4 | (ushort)uVar3;
  uVar4 = (int)uVar6 >> 0xc & 3;
  ppiVar2 = (int **)unaff_s4;
  unaff_s11 = (int **)(int *)0x0;
  do {
    ppiVar5 = ppiVar2;
    unaff_s6 = param_2;
    unaff_s9 = param_1;
    if ((ppiVar5 == (int **)0x0) || (FUN_000101aa(param_2,(int *)ppiVar5), extraout_a0 == 0))
    goto code_r0x00010186;
    if (extraout_a0 != unaff_s5) {
      uVar3 = (uint)*(ushort *)(ppiVar5 + 5) + (uint)*(ushort *)((int)ppiVar5 + 0x12);
      uVar7 = uVar3 / unaff_s10 + (int)ppiVar5[2];
      if ((uint)*(ushort *)(param_2 + 5) < uVar3 % unaff_s10) {
        uVar7 += 1;
      }
      if (uVar4 == 1) {
        uVar7 |= 1;
      }
      else {
        if (uVar4 == 0) {
          uVar7 = uVar7 + 1 & 0xfffffffe;
        }
      }
      uVar7 &= unaff_s8;
      param_2[2] = uVar7;
      if (1 < uVar6 >> 0xe) {
        uVar3 = param_2[3] - uVar7 & unaff_s8;
        if (0x4000000 < uVar3) {
          uVar3 = -(uVar7 - param_2[3] & unaff_s8);
        }
        unaff_s9 = param_2;
        if ((int)uVar3 < (int)(*(ushort *)((int)param_2 + 0x12) / unaff_s10)) goto _L0;
      }
    }
    ppiVar2 = (int **)*ppiVar5;
    unaff_s11 = ppiVar5;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010196(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int **ppiVar2;
  int unaff_s1;
  int extraout_a0;
  uint uVar3;
  uint uVar4;
  int **ppiVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  uint unaff_s8;
  undefined4 *unaff_s9;
  uint unaff_s10;
  
code_r0x00010196:
  FUN_00010196(param_1,param_2);
  param_2 = unaff_s9;
_L0:
  do {
    unaff_s9 = param_2;
    param_2 = unaff_s3;
    if (param_2 == (undefined4 *)0x0) {
      if (*(int *)(unaff_s1 + 0xc) != 0) {
        _DAT_28000000 = _DAT_28000000 & 0xefffffff | 0x10000000;
      }
      return;
    }
    uVar1 = *(ushort *)(param_2 + 4);
    unaff_s3 = (undefined4 *)*param_2;
  } while ((uVar1 >> 0xe == 0) || (uVar4 = (int)(uint)uVar1 >> 4 & 0x3f, uVar4 == 0));
  uVar3 = uVar1 & 0xfffffc0f;
  *(byte *)((int)param_2 + 0x16) = ((byte)uVar1 & 0xf) + *(char *)((int)param_2 + 0x16);
  uVar4 = (uVar4 - 1) * 0x10;
  uVar6 = uVar4 & 0xffff | uVar3;
  *(ushort *)(param_2 + 4) = (ushort)uVar4 | (ushort)uVar3;
  uVar4 = (int)uVar6 >> 0xc & 3;
  ppiVar2 = (int **)unaff_s4;
  param_1 = (int *)0x0;
  do {
    ppiVar5 = ppiVar2;
    if (ppiVar5 == (int **)0x0) {
_L0:
      FUN_00010186(unaff_s9,param_2);
      goto code_r0x00010196;
    }
    FUN_000101aa(param_2,(int *)ppiVar5);
    if (extraout_a0 == 0) goto _L0;
    if (extraout_a0 != unaff_s5) {
      uVar3 = (uint)*(ushort *)(ppiVar5 + 5) + (uint)*(ushort *)((int)ppiVar5 + 0x12);
      uVar7 = uVar3 / unaff_s10 + (int)ppiVar5[2];
      if ((uint)*(ushort *)(param_2 + 5) < uVar3 % unaff_s10) {
        uVar7 += 1;
      }
      if (uVar4 == 1) {
        uVar7 |= 1;
      }
      else {
        if (uVar4 == 0) {
          uVar7 = uVar7 + 1 & 0xfffffffe;
        }
      }
      uVar7 &= unaff_s8;
      param_2[2] = uVar7;
      if (1 < uVar6 >> 0xe) {
        uVar3 = param_2[3] - uVar7 & unaff_s8;
        if (0x4000000 < uVar3) {
          uVar3 = -(uVar7 - param_2[3] & unaff_s8);
        }
        if ((int)uVar3 < (int)(*(ushort *)((int)param_2 + 0x12) / unaff_s10)) goto _L0;
      }
    }
    ppiVar2 = (int **)*ppiVar5;
    param_1 = (int *)ppiVar5;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000101aa(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  int unaff_s1;
  int extraout_a0;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *unaff_s3;
  int **unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  undefined4 *unaff_s9;
  uint unaff_s10;
  int **unaff_s11;
  int **in_stack_00000008;
  uint in_stack_0000000c;
  
  do {
    FUN_000101aa(param_1,param_2);
    param_1 = unaff_s6;
    if (extraout_a0 == 0) goto _L0;
    if (extraout_a0 != unaff_s5) {
      uVar3 = (uint)*(ushort *)(in_stack_00000008 + 5) +
              (uint)*(ushort *)((int)in_stack_00000008 + 0x12);
      uVar2 = uVar3 / unaff_s10 + (int)in_stack_00000008[2];
      if ((uint)*(ushort *)(unaff_s6 + 5) < uVar3 % unaff_s10) {
        uVar2 += 1;
      }
      if (in_stack_0000000c == 1) {
        uVar2 |= 1;
      }
      else {
        if (in_stack_0000000c == 0) {
          uVar2 = uVar2 + 1 & 0xfffffffe;
        }
      }
      uVar2 &= unaff_s8;
      unaff_s6[2] = uVar2;
      if (1 < unaff_s7) {
        uVar3 = unaff_s6[3] - uVar2 & unaff_s8;
        if (0x4000000 < uVar3) {
          uVar3 = -(uVar2 - unaff_s6[3] & unaff_s8);
        }
        if ((int)uVar3 < (int)(*(ushort *)((int)unaff_s6 + 0x12) / unaff_s10)) goto _L0;
      }
    }
    param_2 = *in_stack_00000008;
    while (unaff_s6 = param_1, unaff_s11 = in_stack_00000008, in_stack_00000008 = (int **)param_2,
          (int **)param_2 == (int **)0x0) {
_L0:
      FUN_00010186(unaff_s9,param_1);
      FUN_00010196((int *)unaff_s11,param_1);
      unaff_s6 = unaff_s9;
_L0:
      do {
        unaff_s9 = unaff_s6;
        param_1 = unaff_s3;
        if (param_1 == (undefined4 *)0x0) {
          if (*(int *)(unaff_s1 + 0xc) != 0) {
            _DAT_28000000 = _DAT_28000000 & 0xefffffff | 0x10000000;
          }
          return;
        }
        uVar1 = *(ushort *)(param_1 + 4);
        unaff_s3 = (undefined4 *)*param_1;
        unaff_s6 = param_1;
      } while ((uVar1 >> 0xe == 0) || (uVar3 = (int)(uint)uVar1 >> 4 & 0x3f, uVar3 == 0));
      uVar2 = uVar1 & 0xfffffc0f;
      *(byte *)((int)param_1 + 0x16) = ((byte)uVar1 & 0xf) + *(char *)((int)param_1 + 0x16);
      uVar3 = (uVar3 - 1) * 0x10;
      uVar4 = uVar3 & 0xffff | uVar2;
      *(ushort *)(param_1 + 4) = (ushort)uVar3 | (ushort)uVar2;
      in_stack_0000000c = (int)uVar4 >> 0xc & 3;
      unaff_s7 = uVar4 >> 0xe;
      in_stack_00000008 = (int **)0x0;
      param_2 = (int *)unaff_s4;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2725

void ea_init(_Bool reset)

{
  _L0();
  FUN_0001024e();
  FUN_0001025a();
  _DAT_00000008 = 0;
  _DAT_0000001c = 0xffffffff;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  FUN_0001024e();
  FUN_0001025a();
  *(undefined4 *)(unaff_s0 + 8) = 0;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0xffffffff;
  return;
}



void FUN_0001024e(void)

{
  int unaff_s0;
  
  FUN_0001024e();
  FUN_0001025a();
  *(undefined4 *)(unaff_s0 + 8) = 0;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0xffffffff;
  return;
}



void FUN_0001025a(void)

{
  int unaff_s0;
  
  FUN_0001025a();
  *(undefined4 *)(unaff_s0 + 8) = 0;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0xffffffff;
  return;
}



// DWARF DIE: 26b5

ea_elt_tag * ea_elt_create(uint16_t size_of_env)

{
  undefined2 in_register_0000202a;
  ea_elt_tag *peVar1;
  
  peVar1 = (ea_elt_tag *)FUN_00010282();
  if (peVar1 != (ea_elt_tag *)0x0) {
    (*pcRam00000000)(0,CONCAT22(in_register_0000202a,size_of_env) + 0x2c,pcRam00000000);
  }
  return peVar1;
}



int FUN_00010282(void)

{
  int iVar1;
  undefined4 in_stack_0000000c;
  
  iVar1 = FUN_00010282();
  if (iVar1 != 0) {
    (*pcRam00000000)(0,in_stack_0000000c,pcRam00000000);
  }
  return iVar1;
}



// DWARF DIE: 22ad

ea_interval_tag * ea_interval_create(void)

{
  ea_interval_tag *peVar1;
  
  peVar1 = (ea_interval_tag *)_L0();
  (*pcRam00000000)(0,0x10,pcRam00000000);
  return peVar1;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  
  uVar1 = _L0();
  (*pcRam00000000)(0,0x10,pcRam00000000);
  return uVar1;
}



// DWARF DIE: 226a

void ea_interval_insert(ea_interval_tag *interval_to_add)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 2222

void ea_interval_remove(ea_interval_tag *interval_to_remove)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 21c6

void ea_interval_delete(ea_interval_tag *interval_to_remove)

{
  if (interval_to_remove == (ea_interval_tag *)0x0) {
    return;
  }
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
// DWARF DIE: 1fde

void ea_sw_isr(void)

{
  int extraout_a0;
  
  while (_DAT_0000000c != 0) {
    FUN_0001034c();
    if (*(code **)(extraout_a0 + 0x24) != (code *)0x0) {
      (**(code **)(extraout_a0 + 0x24))();
    }
  }
  return;
}



void FUN_0001034c(void)

{
  int unaff_s0;
  int extraout_a0;
  
  do {
    FUN_0001034c();
    if (*(code **)(extraout_a0 + 0x24) != (code *)0x0) {
      (**(code **)(extraout_a0 + 0x24))();
    }
  } while (*(int *)(unaff_s0 + 0xc) != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1ed3

uint8_t ea_offset_req(ea_param_input *input_param,ea_param_output *output_param)

{
  uint16_t uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint8_t uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = (uint)output_param->interval;
  if (uVar12 != 0) {
    uVar13 = output_param->duration & 0xffff;
    if (uVar13 != 0) {
      if (input_param->action == '\x01') {
        uVar5 = (uint)input_param->offset;
      }
      else {
        uVar5 = (uint)input_param->odd_offset;
      }
      uVar2 = output_param->duration & 0xffff;
      piVar4 = _DAT_00000014;
_L0:
      do {
        uVar6 = uVar5;
        if (piVar4 == (int *)0x0) {
          uVar8 = '\x03';
          if (uVar6 < uVar12) {
_L0:
            output_param->offset = (uint16_t)uVar6;
            uVar8 = '\0';
          }
          return uVar8;
        }
        if (uVar12 <= uVar6) {
          return '\x03';
        }
        uVar1 = input_param->role;
        if (uVar1 == 0xff) goto _L0;
        uVar5 = (uint)*(ushort *)(piVar4 + 1);
        if (((uVar5 != 0) && (uVar9 = (uint)*(ushort *)(piVar4 + 2), uVar9 != 0)) &&
           (*(uint16_t *)((int)piVar4 + 10) != input_param->conhdl)) {
          uVar3 = uVar5;
          if (uVar12 < uVar5) {
            uVar3 = uVar12;
          }
          if ((*(uint16_t *)(piVar4 + 3) == uVar1) &&
             ((uVar1 != 1 || (*(uint16_t *)((int)piVar4 + 0xe) == input_param->linkid)))) {
            if (uVar3 < uVar2 + uVar9) {
              return '\x03';
            }
            iVar10 = uVar9 - 1;
            uVar9 = (uint)*(ushort *)((int)piVar4 + 6) % uVar3;
          }
          else {
            if (uVar3 < uVar2 + uVar9) {
              return '\x03';
            }
            iVar10 = uVar9 + 1;
            uVar9 = (int)(*(ushort *)((int)piVar4 + 6) + uVar3 + -1) % (int)uVar3 & 0xffff;
          }
          uVar11 = iVar10 + uVar9 & 0xffff;
          if ((uVar12 % uVar3 == 0) && (uVar5 % uVar3 == 0)) {
            uVar5 = uVar6 % uVar3;
            uVar7 = uVar5 + (uVar13 - 1) & 0xffff;
            if (uVar5 < uVar9) {
              if (uVar7 < uVar9) {
_L0:
                if (uVar7 < uVar11) goto _L0;
              }
            }
            else {
              if (uVar11 < uVar5) {
                if (uVar7 < uVar9) {
                  if (uVar9 == uVar5) goto _L0;
                }
                else {
                  if ((uVar7 <= uVar11) || (uVar5 <= uVar9)) goto _L0;
                }
_L0:
                if (((uVar11 < uVar3) || (uVar11 % uVar3 < uVar5)) &&
                   ((uVar7 < uVar3 || (uVar7 % uVar3 < uVar9)))) goto _L0;
              }
            }
_L0:
            piVar4 = _DAT_00000014;
            uVar5 = uVar12;
            if (input_param->action != '\x01') {
              for (uVar5 = (uVar11 + 1) % uVar3; uVar5 <= uVar6; uVar5 = uVar5 + uVar3 & 0xffff) {
              }
              if (input_param->odd_offset == false) {
                if ((uVar5 & 1) == 0) goto _L0;
              }
              else {
                if ((uVar5 & 1) != 0) goto _L0;
              }
              uVar5 = uVar5 + 1 & 0xffff;
            }
            goto _L0;
          }
        }
_L0:
        piVar4 = (int *)*piVar4;
        uVar5 = uVar6;
      } while( true );
    }
  }
  return '\x01';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1e54

uint32_t ea_time_get_halfslot_rounded(void)

{
  do {
  } while (true);
  _DAT_2800001c = 0x80000000;
  return (_DAT_28000020 < 0x138) + 0x80000000 & 0x7ffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1dd5

uint32_t ea_time_get_slot_rounded(void)

{
  do {
  } while (true);
  _DAT_2800001c = 0x80000000;
  return (_DAT_28000020 < 0x6a) + 0x80000000 & 0x7ffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2786

void ea_prog_timer(void)

{
  byte bVar1;
  uint extraout_a0;
  uint extraout_a0_00;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  _DAT_0000001c = 0xffffffff;
  _L0();
  if (uRam00000000 == 0) {
    if (_DAT_0000001c == 0xffffffff) {
      _DAT_2800000c &= 0xffffff7f;
      _DAT_28000018 = 0x80;
      uVar3 = extraout_a0;
      goto _L0;
    }
  }
  else {
    _DAT_0000001c = *(int *)(uRam00000000 + 8) - (uint)*(byte *)(uRam00000000 + 0x19) & 0x7ffffff;
    if (_DAT_00000008 != 0) {
      if ((*(byte *)(_DAT_00000008 + 0x16) < *(byte *)(uRam00000000 + 0x16)) &&
         ((int)((uint)*(ushort *)(uRam00000000 + 0x10) << 0x14) < 0)) {
        bVar1 = *(byte *)(_DAT_00000008 + 0x18);
      }
      else {
        bVar1 = *(byte *)(_DAT_00000008 + 0x17);
      }
      if ((uint)*(byte *)(uRam00000000 + 0x19) < (uint)bVar1) {
        _DAT_0000001c = *(int *)(uRam00000000 + 8) - (uint)bVar1 & 0x7ffffff;
        uVar3 = _DAT_0000001c - extraout_a0 & 0x7ffffff;
        if ((0x4000000 < uVar3) || (uVar3 == 0)) {
          _DAT_0000001c = extraout_a0 + 1 & 0x7ffffff;
          _L0();
          return;
        }
      }
    }
  }
  _L0();
  if (extraout_a0_00 - _DAT_0000001c < 0x3ffffff) {
    _DAT_0000001c = extraout_a0_00 + 1 & 0x7ffffff;
  }
  _DAT_280000f8 = _DAT_0000001c;
  uVar3 = extraout_a0_00;
  if ((_DAT_2800000c >> 7 & 1) == 0) {
    _DAT_28000018 = 0x80;
    _DAT_2800000c |= 0x80;
  }
_L0:
  if (((char)uRam00000000 != '\0') && (piVar4 = _DAT_00000014, -1 < (int)(uVar3 << 5))) {
    for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      uVar2 = (uint)*(ushort *)(piVar4 + 1);
      *(short *)((int)piVar4 + 6) =
           (short)((int)((uVar2 - 0x8000000U % uVar2) + (uint)*(ushort *)((int)piVar4 + 6)) %
                  (int)uVar2);
    }
  }
  uRam00000000 = uRam00000000 & 0xffffff00 | uVar3 >> 0x1a & 0xffffff01;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *unaff_s2;
  
  _L0();
  iVar5 = *unaff_s2;
  if (iVar5 == 0) {
    if (*(int *)(unaff_s0 + 0x1c) == unaff_s1) {
      _DAT_2800000c &= 0xffffff7f;
      _DAT_28000018 = 0x80;
      iVar5 = extraout_a0;
      goto _L0;
    }
  }
  else {
    iVar2 = *(int *)(unaff_s0 + 8);
    *(uint *)(unaff_s0 + 0x1c) = *(int *)(iVar5 + 8) - (uint)*(byte *)(iVar5 + 0x19) & 0x7ffffff;
    if (iVar2 != 0) {
      if ((*(byte *)(iVar2 + 0x16) < *(byte *)(iVar5 + 0x16)) &&
         ((int)((uint)*(ushort *)(iVar5 + 0x10) << 0x14) < 0)) {
        bVar1 = *(byte *)(iVar2 + 0x18);
      }
      else {
        bVar1 = *(byte *)(iVar2 + 0x17);
      }
      if ((uint)*(byte *)(iVar5 + 0x19) < (uint)bVar1) {
        uVar6 = *(int *)(iVar5 + 8) - (uint)bVar1 & 0x7ffffff;
        uVar3 = uVar6 - extraout_a0 & 0x7ffffff;
        if ((0x4000000 < uVar3) || (uVar3 == 0)) {
          *(uint *)(unaff_s0 + 0x1c) = extraout_a0 + 1U & 0x7ffffff;
          _L0();
          return;
        }
        *(uint *)(unaff_s0 + 0x1c) = uVar6;
      }
    }
  }
  _L0();
  if ((uint)(extraout_a0_00 - *(int *)(unaff_s0 + 0x1c)) < 0x3ffffff) {
    *(uint *)(unaff_s0 + 0x1c) = extraout_a0_00 + 1U & 0x7ffffff;
  }
  _DAT_280000f8 = *(undefined4 *)(unaff_s0 + 0x1c);
  iVar5 = extraout_a0_00;
  if ((_DAT_2800000c >> 7 & 1) == 0) {
    _DAT_28000018 = 0x80;
    _DAT_2800000c |= 0x80;
  }
_L0:
  if ((bRam00000000 != '\0') && (-1 < iVar5 << 5)) {
    for (piVar4 = *(int **)(unaff_s0 + 0x14); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      uVar3 = (uint)*(ushort *)(piVar4 + 1);
      *(short *)((int)piVar4 + 6) =
           (short)((int)((uVar3 - 0x8000000U % uVar3) + (uint)*(ushort *)((int)piVar4 + 6)) %
                  (int)uVar3);
    }
  }
  bRam00000000 = (byte)((uint)iVar5 >> 0x1a) & 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  uint uVar1;
  int *piVar2;
  
  _L0();
  if ((uint)(extraout_a0 - *(int *)(unaff_s0 + 0x1c)) < 0x3ffffff) {
    *(uint *)(unaff_s0 + 0x1c) = extraout_a0 + 1U & 0x7ffffff;
  }
  _DAT_280000f8 = *(undefined4 *)(unaff_s0 + 0x1c);
  if ((_DAT_2800000c >> 7 & 1) == 0) {
    _DAT_28000018 = 0x80;
    _DAT_2800000c |= 0x80;
  }
  if ((bRam00000000 != '\0') && (-1 < extraout_a0 << 5)) {
    for (piVar2 = *(int **)(unaff_s0 + 0x14); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      uVar1 = (uint)*(ushort *)(piVar2 + 1);
      *(short *)((int)piVar2 + 6) =
           (short)((int)((uVar1 - 0x8000000U % uVar1) + (uint)*(ushort *)((int)piVar2 + 6)) %
                  (int)uVar1);
    }
  }
  bRam00000000 = (byte)((uint)extraout_a0 >> 0x1a) & 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 240b

uint8_t ea_elt_insert(ea_elt_tag *elt)

{
  ushort uVar1;
  uint8_t uVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint32_t uVar9;
  uint uVar10;
  char cVar11;
  int **ppiVar12;
  int **ppiVar13;
  
  iVar6 = _L0();
  uVar9 = elt->start_latency + 1 + iVar6 & 0x7ffffff;
  if (((_DAT_00000008 != (int **)0x0) &&
      (uVar8 = (uint)*(byte *)((int)_DAT_00000008 + 0x17), uVar8 != 0)) &&
     ((uVar7 = uVar9 - iVar6 & 0x7ffffff, 0x4000000 < uVar7 || (uVar7 < uVar8)))) {
    uVar9 = uVar8 + iVar6 & 0x7ffffff;
  }
  uVar1 = elt->asap_settings >> 0xe;
  uVar8 = (int)(uint)elt->asap_settings >> 0xc;
  if (uVar1 != 0) {
    uVar7 = uVar8 & 3;
    if (uVar7 == 1) {
      uVar9 |= 1;
    }
    else {
      if (uVar7 == 0) {
        uVar9 = uVar9 + 1 & 0x7fffffe;
      }
    }
  }
  if (((elt->timestamp - uVar9 & 0x7ffffff) < 0x4000001) ||
     ((uVar9 - elt->timestamp & 0x7ffffff) == 0)) {
_L0:
    ppiVar5 = ppiRam00000000;
    if (1 < uVar1) {
      uVar7 = elt->asap_limit - elt->timestamp & 0x7ffffff;
      if (0x4000000 < uVar7) {
        uVar7 = -(elt->timestamp - elt->asap_limit & 0x7ffffff);
      }
      if ((int)uVar7 < (int)(elt->duration_min / 0x271)) goto _L0;
    }
    ppiVar3 = _DAT_00000008;
    if (_DAT_00000008 == (int **)0x0) {
      ppiVar3 = ppiRam00000000;
    }
    uVar8 &= 3;
    cVar11 = '\0';
    ppiVar13 = (int **)0x0;
    ppiVar12 = (int **)0x0;
    while( true ) {
      ppiVar4 = ppiVar3;
      if ((ppiVar4 == (int **)0x0) || (uVar7 = _L0(ppiVar4), uVar7 == 0)) goto _L0;
      if (uVar7 != 5) break;
_L0:
      if (1 < uVar1) {
_L0:
        uVar7 = elt->asap_limit - elt->timestamp & 0x7ffffff;
        if (0x4000000 < uVar7) {
          uVar7 = -(elt->timestamp - elt->asap_limit & 0x7ffffff);
        }
        if ((int)(elt->duration_min / 0x271) <= (int)uVar7) goto _L0;
        goto _L0;
      }
_L0:
      ppiVar3 = ppiVar5;
      if (_DAT_00000008 != ppiVar4) {
_L0:
        if (cVar11 == '\0') {
          ppiVar12 = ppiVar4;
        }
        ppiVar3 = (int **)*ppiVar4;
      }
    }
    if ((elt->current_prio <= *(byte *)((int)ppiVar4 + 0x16)) || (_DAT_00000008 == ppiVar4)) {
      if (uVar1 != 0) {
        uVar7 = (uint)*(ushort *)(ppiVar4 + 5) + (uint)*(ushort *)((int)ppiVar4 + 0x12);
        uVar10 = uVar7 / 0x271 + (int)ppiVar4[2];
        if ((uint)elt->delay < uVar7 % 0x271) {
          uVar10 += 1;
        }
        if (uVar8 == 1) {
          uVar10 |= 1;
        }
        else {
          if (uVar8 == 0) {
            uVar10 = uVar10 + 1 & 0xfffffffe;
          }
        }
        elt->timestamp = uVar10 & 0x7ffffff;
        cVar11 = '\0';
        ppiVar13 = (int **)0x0;
        goto _L0;
      }
      goto _L0;
    }
    if (cVar11 == '\0') {
      ppiVar13 = ppiVar4;
    }
    cVar11 += '\x01';
    if ((uVar7 & 0xfd) != 1) {
      if (1 < uVar1) goto _L0;
      goto _L0;
    }
_L0:
    if (cVar11 != '\0') {
      FUN_00010800();
      do {
        ppiVar5 = (int **)*ppiVar13;
        cVar11 += -1;
        _L0(ppiVar13);
        ppiVar13 = ppiVar5;
      } while (cVar11 != '\0');
    }
    if (ppiVar12 == (int **)0x0) {
      FUN_000108d8();
      _L0();
    }
    else {
      FUN_00010834();
    }
    uVar2 = '\0';
    if (_DAT_0000000c != 0) {
      FUN_00010848();
      uVar2 = '\0';
    }
  }
  else {
    if (uVar1 != 0) {
      elt->timestamp = uVar9;
      goto _L0;
    }
_L0:
    uVar2 = '\x01';
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  ushort uVar1;
  int unaff_s0;
  undefined4 uVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int **ppiVar11;
  int **ppiVar12;
  
  iVar6 = _L0();
  uVar9 = *(byte *)(unaff_s0 + 0x19) + 1 + iVar6 & 0x7ffffff;
  if (((_DAT_00000008 != (int **)0x0) &&
      (uVar8 = (uint)*(byte *)((int)_DAT_00000008 + 0x17), uVar8 != 0)) &&
     ((uVar7 = uVar9 - iVar6 & 0x7ffffff, 0x4000000 < uVar7 || (uVar7 < uVar8)))) {
    uVar9 = uVar8 + iVar6 & 0x7ffffff;
  }
  uVar1 = *(ushort *)(unaff_s0 + 0x10) >> 0xe;
  uVar8 = (int)(uint)*(ushort *)(unaff_s0 + 0x10) >> 0xc;
  if (uVar1 != 0) {
    uVar7 = uVar8 & 3;
    if (uVar7 == 1) {
      uVar9 |= 1;
    }
    else {
      if (uVar7 == 0) {
        uVar9 = uVar9 + 1 & 0x7fffffe;
      }
    }
  }
  if (((*(int *)(unaff_s0 + 8) - uVar9 & 0x7ffffff) < 0x4000001) ||
     ((uVar9 - *(int *)(unaff_s0 + 8) & 0x7ffffff) == 0)) {
_L0:
    ppiVar5 = ppiRam00000000;
    if (1 < uVar1) {
      uVar9 = *(int *)(unaff_s0 + 0xc) - *(int *)(unaff_s0 + 8) & 0x7ffffff;
      if (0x4000000 < uVar9) {
        uVar9 = -(*(int *)(unaff_s0 + 8) - *(int *)(unaff_s0 + 0xc) & 0x7ffffffU);
      }
      if ((int)uVar9 < (int)(*(ushort *)(unaff_s0 + 0x12) / 0x271)) goto _L0;
    }
    ppiVar3 = _DAT_00000008;
    if (_DAT_00000008 == (int **)0x0) {
      ppiVar3 = ppiRam00000000;
    }
    uVar8 &= 3;
    cVar10 = '\0';
    ppiVar12 = (int **)0x0;
    ppiVar11 = (int **)0x0;
    while( true ) {
      ppiVar4 = ppiVar3;
      if ((ppiVar4 == (int **)0x0) || (uVar9 = _L0(ppiVar4), uVar9 == 0)) goto _L0;
      if (uVar9 != 5) break;
_L0:
      if (1 < uVar1) {
_L0:
        uVar9 = *(int *)(unaff_s0 + 0xc) - *(int *)(unaff_s0 + 8) & 0x7ffffff;
        if (0x4000000 < uVar9) {
          uVar9 = -(*(int *)(unaff_s0 + 8) - *(int *)(unaff_s0 + 0xc) & 0x7ffffffU);
        }
        if ((int)(*(ushort *)(unaff_s0 + 0x12) / 0x271) <= (int)uVar9) goto _L0;
        goto _L0;
      }
_L0:
      ppiVar3 = ppiVar5;
      if (_DAT_00000008 != ppiVar4) {
_L0:
        if (cVar10 == '\0') {
          ppiVar11 = ppiVar4;
        }
        ppiVar3 = (int **)*ppiVar4;
      }
    }
    if ((*(byte *)(unaff_s0 + 0x16) <= *(byte *)((int)ppiVar4 + 0x16)) || (_DAT_00000008 == ppiVar4)
       ) {
      if (uVar1 != 0) {
        uVar9 = (uint)*(ushort *)(ppiVar4 + 5) + (uint)*(ushort *)((int)ppiVar4 + 0x12);
        uVar7 = uVar9 / 0x271 + (int)ppiVar4[2];
        if ((uint)*(ushort *)(unaff_s0 + 0x14) < uVar9 % 0x271) {
          uVar7 += 1;
        }
        if (uVar8 == 1) {
          uVar7 |= 1;
        }
        else {
          if (uVar8 == 0) {
            uVar7 = uVar7 + 1 & 0xfffffffe;
          }
        }
        *(uint *)(unaff_s0 + 8) = uVar7 & 0x7ffffff;
        cVar10 = '\0';
        ppiVar12 = (int **)0x0;
        goto _L0;
      }
      goto _L0;
    }
    if (cVar10 == '\0') {
      ppiVar12 = ppiVar4;
    }
    cVar10 += '\x01';
    if ((uVar9 & 0xfd) != 1) {
      if (1 < uVar1) goto _L0;
      goto _L0;
    }
_L0:
    if (cVar10 != '\0') {
      FUN_00010800();
      do {
        ppiVar5 = (int **)*ppiVar12;
        cVar10 += -1;
        _L0(ppiVar12);
        ppiVar12 = ppiVar5;
      } while (cVar10 != '\0');
    }
    if (ppiVar11 == (int **)0x0) {
      FUN_000108d8();
      _L0();
    }
    else {
      FUN_00010834();
    }
    uVar2 = 0;
    if (_DAT_0000000c != 0) {
      FUN_00010848();
      uVar2 = 0;
    }
  }
  else {
    if (uVar1 != 0) {
      *(uint *)(unaff_s0 + 8) = uVar9;
      goto _L0;
    }
_L0:
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 _L0(int **param_1)

{
  int unaff_s0;
  int **unaff_s1;
  int **ppiVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_s2;
  int unaff_s5;
  uint unaff_s6;
  int **unaff_s7;
  uint unaff_s8;
  int **unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  int **in_stack_0000000c;
  
  do {
    uVar2 = _L0(param_1);
    if (uVar2 == 0) break;
    if (uVar2 == 5) {
_L0:
      if (unaff_s11 < unaff_s8) {
_L0:
        uVar2 = *(int *)(unaff_s0 + 0xc) - *(int *)(unaff_s0 + 8) & unaff_s10;
        if (0x4000000 < uVar2) {
          uVar2 = -(*(int *)(unaff_s0 + 8) - *(int *)(unaff_s0 + 0xc) & unaff_s10);
        }
        if ((int)uVar2 < (int)(*(ushort *)(unaff_s0 + 0x12) / 0x271)) {
          return 1;
        }
      }
      param_1 = in_stack_0000000c;
      if (*(int ***)(unaff_s5 + 8) != unaff_s1) goto _L0;
    }
    else {
      if ((*(byte *)(unaff_s0 + 0x16) <= *(byte *)((int)unaff_s1 + 0x16)) ||
         (*(int ***)(unaff_s5 + 8) == unaff_s1)) {
        if (unaff_s8 == 0) {
          return 1;
        }
        uVar2 = (uint)*(ushort *)(unaff_s1 + 5) + (uint)*(ushort *)((int)unaff_s1 + 0x12);
        uVar3 = uVar2 / 0x271 + (int)unaff_s1[2];
        if ((uint)*(ushort *)(unaff_s0 + 0x14) < uVar2 % 0x271) {
          uVar3 += 1;
        }
        if (unaff_s6 == unaff_s11) {
          uVar3 |= 1;
        }
        else {
          if (unaff_s6 == 0) {
            uVar3 = uVar3 + 1 & 0xfffffffe;
          }
        }
        *(uint *)(unaff_s0 + 8) = uVar3 & unaff_s10;
        unaff_s2 = 0;
        unaff_s9 = (int **)0x0;
        goto _L0;
      }
      if (unaff_s2 == 0) {
        unaff_s9 = unaff_s1;
      }
      unaff_s2 = unaff_s2 + 1 & 0xff;
      if ((uVar2 & 0xfd) == unaff_s11) break;
      if (unaff_s11 < unaff_s8) goto _L0;
_L0:
      if (unaff_s2 == 0) {
        unaff_s7 = unaff_s1;
      }
      param_1 = (int **)*unaff_s1;
    }
    unaff_s1 = param_1;
  } while (param_1 != (int **)0x0);
  if (unaff_s2 != 0) {
    FUN_00010800();
    do {
      ppiVar1 = (int **)*unaff_s9;
      unaff_s2 = unaff_s2 - 1 & 0xff;
      _L0(unaff_s9);
      unaff_s9 = ppiVar1;
    } while (unaff_s2 != 0);
  }
  if (unaff_s7 == (int **)0x0) {
    FUN_000108d8();
    _L0();
  }
  else {
    FUN_00010834();
  }
  if (*(int *)(unaff_s5 + 0xc) != 0) {
    FUN_00010848();
  }
  return 0;
}



undefined4 FUN_00010800(void)

{
  undefined4 *puVar1;
  char unaff_s2;
  int unaff_s5;
  int unaff_s7;
  undefined4 *unaff_s9;
  
  FUN_00010800();
  do {
    puVar1 = (undefined4 *)*unaff_s9;
    unaff_s2 += -1;
    _L0(unaff_s9);
    unaff_s9 = puVar1;
  } while (unaff_s2 != '\0');
  if (unaff_s7 == 0) {
    FUN_000108d8();
    _L0();
  }
  else {
    FUN_00010834();
  }
  if (*(int *)(unaff_s5 + 0xc) != 0) {
    FUN_00010848();
  }
  return 0;
}



undefined4 _L0(undefined4 *param_1)

{
  undefined4 *unaff_s1;
  undefined4 *puVar1;
  uint unaff_s2;
  int unaff_s5;
  int unaff_s7;
  
  for (; puVar1 = unaff_s1, _L0(param_1), unaff_s2 != 0; unaff_s2 = unaff_s2 - 1 & 0xff) {
    unaff_s1 = (undefined4 *)*puVar1;
    param_1 = puVar1;
  }
  if (unaff_s7 == 0) {
    FUN_000108d8();
    _L0();
  }
  else {
    FUN_00010834();
  }
  if (*(int *)(unaff_s5 + 0xc) != 0) {
    FUN_00010848();
  }
  return 0;
}



undefined4 FUN_00010834(void)

{
  int unaff_s5;
  
  FUN_00010834();
  if (*(int *)(unaff_s5 + 0xc) != 0) {
    FUN_00010848();
  }
  return 0;
}



void FUN_00010848(void)

{
  FUN_00010848();
  return;
}



undefined4 FUN_000108d8(void)

{
  int unaff_s5;
  
  FUN_000108d8();
  _L0();
  if (*(int *)(unaff_s5 + 0xc) != 0) {
    FUN_00010848();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s5;
  
  _L0();
  if (*(int *)(unaff_s5 + 0xc) != 0) {
    FUN_00010848();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2308

uint8_t ea_elt_remove(ea_elt_tag *elt)

{
  int iVar1;
  
  if (elt != (ea_elt_tag *)0x0) {
    if (_DAT_00000008 == elt) {
      _DAT_00000008 = (ea_elt_tag *)0x0;
    }
    else {
      if (elt == peRam00000000) {
        FUN_00010936();
        _L0();
      }
      else {
        iVar1 = FUN_00010950();
        if ((iVar1 == 0) && (iVar1 = FUN_00010962(), iVar1 == 0)) {
          return '\x02';
        }
      }
    }
  }
  return '\0';
}



undefined4 FUN_00010936(void)

{
  FUN_00010936();
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_00010950(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00010950();
  if ((iVar2 == 0) && (iVar2 = FUN_00010962(), iVar2 == 0)) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00010962(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00010962();
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 203d

void ea_finetimer_isr(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  uint uVar4;
  
  iVar2 = _DAT_00000008;
  iVar3 = iRam00000000;
  _L0();
  if (iVar2 != 0) {
    if (iVar3 == 0) goto _L0;
    if ((*(byte *)(iVar2 + 0x16) < *(byte *)(iVar3 + 0x16)) &&
       ((int)((uint)*(ushort *)(iVar3 + 0x10) << 0x14) < 0)) {
      bVar1 = *(byte *)(iVar2 + 0x18);
    }
    else {
      bVar1 = *(byte *)(iVar2 + 0x17);
    }
    uVar4 = *(int *)(iVar3 + 8) - extraout_a0 & 0x7ffffff;
    if ((0x4000000 < uVar4) || (uVar4 <= bVar1)) {
      if (*(code **)(iVar2 + 0x20) != (code *)0x0) {
        (**(code **)(iVar2 + 0x20))(iVar2);
      }
      _DAT_00000008 = 0;
    }
  }
  if (iVar3 != 0) {
    do {
      uVar4 = *(int *)(iVar3 + 8) - (uint)*(byte *)(iVar3 + 0x19) & 0x7ffffff;
      if ((uVar4 - extraout_a0 & 0x7ffffff) < 0x3ffffff) {
        if (uVar4 == extraout_a0) {
          FUN_00010a6e();
          if ((_DAT_00000008 != 0) && (*(code **)(_DAT_00000008 + 0x20) != (code *)0x0)) {
            (**(code **)(_DAT_00000008 + 0x20))(iVar2);
          }
          if (*(code **)(extraout_a0_01 + 0x1c) != (code *)0x0) {
            _DAT_00000008 = extraout_a0_01;
            (**(code **)(extraout_a0_01 + 0x1c))(extraout_a0_01);
          }
        }
        break;
      }
      FUN_00010a0e();
      _LVL244(extraout_a0_00);
      iVar3 = iRam00000000;
    } while (iRam00000000 != 0);
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  uint uVar2;
  code *pcVar3;
  int *unaff_s2;
  
  _L0();
  if (unaff_s1 != 0) {
    if (unaff_s0 == 0) goto _L0;
    if ((*(byte *)(unaff_s1 + 0x16) < *(byte *)(unaff_s0 + 0x16)) &&
       ((int)((uint)*(ushort *)(unaff_s0 + 0x10) << 0x14) < 0)) {
      bVar1 = *(byte *)(unaff_s1 + 0x18);
    }
    else {
      bVar1 = *(byte *)(unaff_s1 + 0x17);
    }
    uVar2 = *(int *)(unaff_s0 + 8) - extraout_a0 & 0x7ffffff;
    if ((0x4000000 < uVar2) || (uVar2 <= bVar1)) {
      if (*(code **)(unaff_s1 + 0x20) != (code *)0x0) {
        (**(code **)(unaff_s1 + 0x20))();
      }
      unaff_s2[2] = 0;
    }
  }
  if (unaff_s0 != 0) {
    do {
      uVar2 = *(int *)(unaff_s0 + 8) - (uint)*(byte *)(unaff_s0 + 0x19) & 0x7ffffff;
      if ((uVar2 - extraout_a0 & 0x7ffffff) < 0x3ffffff) {
        if (uVar2 == extraout_a0) {
          FUN_00010a6e();
          if ((unaff_s2[2] != 0) && (pcVar3 = *(code **)(unaff_s2[2] + 0x20), pcVar3 != (code *)0x0)
             ) {
            (*pcVar3)();
          }
          pcVar3 = *(code **)(extraout_a0_01 + 0x1c);
          unaff_s2[2] = extraout_a0_01;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(extraout_a0_01);
          }
        }
        break;
      }
      FUN_00010a0e();
      _LVL244(extraout_a0_00);
      unaff_s0 = *unaff_s2;
    } while (unaff_s0 != 0);
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a0e(void)

{
  int iVar1;
  undefined4 extraout_a0;
  int extraout_a0_00;
  uint uVar2;
  code *pcVar3;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  
  do {
    FUN_00010a0e();
    _LVL244(extraout_a0);
    iVar1 = *unaff_s3;
    if (iVar1 == 0) goto _L0;
    uVar2 = *(int *)(iVar1 + 8) - (uint)*(byte *)(iVar1 + 0x19) & unaff_s4;
  } while (unaff_s6 < (uVar2 - unaff_s5 & unaff_s4));
  if (uVar2 == unaff_s5) {
    FUN_00010a6e();
    if ((unaff_s3[2] != 0) && (pcVar3 = *(code **)(unaff_s3[2] + 0x20), pcVar3 != (code *)0x0)) {
      (*pcVar3)();
    }
    pcVar3 = *(code **)(extraout_a0_00 + 0x1c);
    unaff_s3[2] = extraout_a0_00;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(extraout_a0_00);
    }
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL244(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_a0;
  int extraout_a0_00;
  uint uVar2;
  code *pcVar3;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  
  do {
    _LVL244(param_1);
    iVar1 = *unaff_s3;
    if (iVar1 == 0) {
_L0:
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    uVar2 = *(int *)(iVar1 + 8) - (uint)*(byte *)(iVar1 + 0x19) & unaff_s4;
    if ((uVar2 - unaff_s5 & unaff_s4) <= unaff_s6) {
      if (uVar2 == unaff_s5) {
        FUN_00010a6e();
        if ((unaff_s3[2] != 0) && (pcVar3 = *(code **)(unaff_s3[2] + 0x20), pcVar3 != (code *)0x0))
        {
          (*pcVar3)();
        }
        pcVar3 = *(code **)(extraout_a0_00 + 0x1c);
        unaff_s3[2] = extraout_a0_00;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(extraout_a0_00);
        }
      }
      goto _L0;
    }
    FUN_00010a0e();
    param_1 = extraout_a0;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a6e(void)

{
  int extraout_a0;
  code *pcVar1;
  int unaff_s3;
  
  FUN_00010a6e();
  if ((*(int *)(unaff_s3 + 8) != 0) &&
     (pcVar1 = *(code **)(*(int *)(unaff_s3 + 8) + 0x20), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  pcVar1 = *(code **)(extraout_a0 + 0x1c);
  *(int *)(unaff_s3 + 8) = extraout_a0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(extraout_a0);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1d97

uint32_t ea_timer_target_get(uint32_t current_time)

{
  if (_DAT_00000008 == 0) {
    current_time = _DAT_0000001c;
  }
  return current_time;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1ca0

void ea_interval_duration_req(ea_param_input *input_param,ea_param_output *output_param)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint32_t uVar8;
  uint uVar9;
  
  uVar4 = (uint)input_param->interval_max;
  output_param->interval = input_param->interval_max;
  uVar9 = (uint)input_param->interval_min;
  if (uVar4 <= uVar9) goto _L0;
  bVar6 = 0;
  uVar5 = 0xffff;
  for (piVar2 = (int *)_DAT_00000014; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    bVar6 += 1;
    uVar3 = uVar5;
    if ((*(uint16_t *)((int)piVar2 + 10) != input_param->conhdl) &&
       (uVar3 = (uint)*(ushort *)(piVar2 + 1), uVar5 < *(ushort *)(piVar2 + 1))) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  }
  if (bVar6 < 2) {
    uVar5 = (uint)input_param->pref_period;
    if (uVar5 != 0) {
_L0:
      uVar7 = uVar5 * (uVar4 / uVar5) & 0xffff;
      goto _L0;
    }
    uVar7 = 0xffff;
  }
  else {
    if (uVar5 <= uVar4) goto _L0;
    uVar7 = 0xffff;
    uVar3 = uVar4;
    do {
      bVar1 = uVar5 % uVar3 != 0;
      if (!bVar1) {
        uVar7 = uVar3;
      }
      uVar3 = uVar3 - 2 & 0xffff;
    } while ((uVar9 <= uVar3) && (bVar1));
_L0:
    if (uVar7 < uVar9) goto _L0;
  }
  if (uVar7 <= uVar4) {
    output_param->interval = (uint16_t)uVar7;
  }
_L0:
  uVar8 = input_param->duration_min;
  if (uVar8 < 2) {
    uVar8 = 2;
  }
  output_param->duration = uVar8;
  return;
}


