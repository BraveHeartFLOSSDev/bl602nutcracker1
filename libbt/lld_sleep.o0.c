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
typedef unsigned int    undefined3;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

typedef uchar uint8_t;

typedef char int8_t;

typedef ulong uint32_t;

typedef ushort uint16_t;

struct rwip_rf_api { // DWARF DIE: 1141
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

struct rwip_prio { // DWARF DIE: 12c5
    uint8_t value;
    uint8_t increment;
};

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 2d6
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 27f
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: d64
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

struct em_desc_node { // DWARF DIE: d08
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 2f7
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: da6
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

typedef union anon_union.conflict464_for___value anon_union.conflict464_for___value, *Panon_union.conflict464_for___value;

typedef uint wint_t;

union anon_union.conflict464_for___value { // DWARF DIE: 464
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 496
    int __count;
    union anon_union.conflict464_for___value __value;
};

typedef union anon_union.conflict464 anon_union.conflict464, *Panon_union.conflict464;

union anon_union.conflict464 { // DWARF DIE: 464
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 159d
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 15c8
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

struct bd_addr { // DWARF DIE: 193
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 1428
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

struct ke_msg { // DWARF DIE: 1017
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 1663
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 14ff
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

struct ea_elt_tag { // DWARF DIE: 1340
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

struct le_chnl_map { // DWARF DIE: 1c5
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 1697
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 166
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 1568
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 1708
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

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 10a2
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

struct ke_state_handler { // DWARF DIE: 10ce
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef enum llc_proc_field {
    LLC_DISC=3,
    LLC_LOC_PROC=0,
    LLC_REM_PROC=1,
    LLC_TRAFFIC_PAUSED=2
} llc_proc_field;

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 1f2
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 25d
    uint8_t supp_states[8];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 214
    uint8_t cmds[64];
};

typedef long int32_t;

typedef struct lld_sleep_env_tag lld_sleep_env_tag, *Plld_sleep_env_tag;

struct lld_sleep_env_tag { // DWARF DIE: 1a0b
    uint32_t irq_mask;
    int32_t last_sleep_dur;
    _Bool sw_wakeup;
    _Bool pds_reset;
    undefined field_0xa;
    undefined field_0xb;
    uint32_t basetimecnt;
    uint32_t finetimecnt;
};

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 197f
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

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflictc29_for__new anon_union.conflictc29_for__new, *Panon_union.conflictc29_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflicta9d anon_struct.conflicta9d, *Panon_struct.conflicta9d;

typedef struct anon_struct.conflictbe2 anon_struct.conflictbe2, *Panon_struct.conflictbe2;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: a54
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 55a
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

struct anon_struct.conflicta9d { // DWARF DIE: a9d
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

struct anon_struct.conflictbe2 { // DWARF DIE: be2
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflictc29_for__new { // DWARF DIE: c29
    struct anon_struct.conflicta9d _reent;
    struct anon_struct.conflictbe2 _unused;
};

struct _Bigint { // DWARF DIE: 4ea
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: a0f
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 68b
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 6b9
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

struct _on_exit_args { // DWARF DIE: 5dd
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 632
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 825
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
    union anon_union.conflictc29_for__new _new;
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

struct __locale_t { // DWARF DIE: c5e
};

typedef union anon_union.conflictc29 anon_union.conflictc29, *Panon_union.conflictc29;

union anon_union.conflictc29 { // DWARF DIE: c29
    struct anon_struct.conflicta9d _reent;
    struct anon_struct.conflictbe2 _unused;
};

typedef uint8_t ke_state_t;

typedef int32_t BaseType_t;

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
// DWARF DIE: 1ebf

void lld_sleep_init(void)

{
  int extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  
  (*pcRam00000000)(0,0,0x14,pcRam00000000);
  FUN_0001002c();
  FUN_0001003a();
  FUN_00010048();
  _DAT_2800003c = extraout_a0_01 & 0xffff | extraout_a0 << 0x15 | (extraout_a0_00 & 0xffff) << 10;
  FUN_00010072();
  _DAT_00000004 = 0;
  _DAT_00000008 = 0;
  _DAT_28000030 = _DAT_28000030 & 0x7fffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001002c(void)

{
  int extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  int unaff_s3;
  
  FUN_0001002c();
  FUN_0001003a();
  FUN_00010048();
  _DAT_2800003c = extraout_a0_01 & 0xffff | extraout_a0 << 0x15 | (extraout_a0_00 & 0xffff) << 10;
  FUN_00010072();
  _DAT_28000030 &= 0x7fffffff;
  *(undefined4 *)(unaff_s3 + 4) = 0;
  *(undefined2 *)(unaff_s3 + 8) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001003a(void)

{
  uint extraout_a0;
  uint extraout_a0_00;
  int unaff_s2;
  int unaff_s3;
  
  FUN_0001003a();
  FUN_00010048();
  _DAT_2800003c = extraout_a0_00 & 0xffff | unaff_s2 << 0x15 | (extraout_a0 & 0xffff) << 10;
  FUN_00010072();
  _DAT_28000030 &= 0x7fffffff;
  *(undefined4 *)(unaff_s3 + 4) = 0;
  *(undefined2 *)(unaff_s3 + 8) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010048(void)

{
  uint unaff_s0;
  uint extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  FUN_00010048();
  _DAT_2800003c = extraout_a0 & 0xffff | unaff_s2 << 0x15 | (unaff_s0 & 0xffff) << 10;
  FUN_00010072();
  _DAT_28000030 &= 0x7fffffff;
  *(undefined4 *)(unaff_s3 + 4) = 0;
  *(undefined2 *)(unaff_s3 + 8) = 0;
  return;
}



void FUN_00010072(void)

{
  int unaff_s0;
  int unaff_s3;
  
  FUN_00010072();
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0x7fffffff;
  *(undefined4 *)(unaff_s3 + 4) = 0;
  *(undefined2 *)(unaff_s3 + 8) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1da8

void lld_sleep_enter(uint32_t sleep_duration,_Bool ext_wakeup)

{
  undefined3 in_register_0000202d;
  
  _DAT_28000018 = 0x10e;
  if (false) {
    _DAT_28000018 = 0x80;
  }
  if (CONCAT31(in_register_0000202d,ext_wakeup) == 0) {
    _DAT_28000030 |= 0x80000000;
  }
  uRam00000000 = _DAT_2800000c;
  _DAT_2800000c = 4;
  _DAT_28000034 = sleep_duration;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1ba1

void lld_sleep_wakeup(void)

{
  bool bVar1;
  int iVar2;
  
  _DAT_28000030 &= 0x7fffffff;
  if (DAT_00000009 != '\0') {
    _DAT_00000008 = 0;
    _DAT_2800000c = 1;
    _DAT_28000018 = 1;
    _DAT_28000030 = _DAT_28000030 | 8;
    _DAT_28000040 = _DAT_00000010;
    _DAT_28000044 = _DAT_0000000c;
    return;
  }
  if (DAT_00000008 != '\0') {
    _DAT_00000008 = 0;
    iVar2 = _DAT_28000038 - _DAT_00000004;
    _L0(uRam00000028);
    _DAT_28000044 = (iVar2 + (uint)DAT_0000002a) / 0x271;
    _DAT_28000040 = (_DAT_28000044 * 0x271 - (iVar2 + (uint)DAT_0000002a)) + 0x270 & 0xffff;
    bVar1 = _DAT_28000040 == 0;
    if (bVar1) {
      _DAT_28000044 += 1;
      _DAT_28000040 = 0x270;
    }
    uRam00000028 = uRam00000028 & 0xffff | (uint3)bVar1 << 0x10;
    _DAT_2800000c = 1;
    _DAT_28000018 = 1;
    _DAT_28000030 = _DAT_28000030 | 8;
    return;
  }
  _DAT_00000004 = _DAT_28000038;
  _L0(uRam00000028);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(uint3 param_1)

{
  bool bVar1;
  int in_a0;
  
  _L0(param_1);
  _DAT_28000044 = (in_a0 + (uint)param_1._2_1_) / 0x271;
  _DAT_28000040 = (_DAT_28000044 * 0x271 - (in_a0 + (uint)param_1._2_1_)) + 0x270 & 0xffff;
  bVar1 = _DAT_28000040 == 0;
  if (bVar1) {
    _DAT_28000044 += 1;
    _DAT_28000040 = 0x270;
  }
  param_1 = param_1 & 0xffff | (uint3)bVar1 << 0x10;
  _DAT_2800000c = 1;
  _DAT_28000018 = 1;
  _DAT_28000030 = _DAT_28000030 | 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1b6e

void lld_sleep_wakeup_end(void)

{
  _DAT_2800000c = uRam00000000;
  return;
}



// DWARF DIE: 21fa

void lld_sleep_set_sw_wakeup(_Bool sw_wakeup)

{
  DAT_00000008 = sw_wakeup;
  return;
}



// DWARF DIE: 2215

_Bool lld_sleep_is_sw_wakeup(void)

{
  return (_Bool)DAT_00000008;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2224

void lld_sleep_set_last_sleep_dur(uint32_t sleep_dur)

{
  _DAT_00000004 = sleep_dur;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 223f

uint32_t lld_sleep_get_last_sleep_dur(void)

{
  return _DAT_00000004;
}



// DWARF DIE: 224e

void lld_sleep_set_pds_reset(_Bool pds_reset)

{
  DAT_00000009 = pds_reset;
  return;
}



// DWARF DIE: 2269

uint32_t lld_sleep_get_pds_reset(void)

{
  return (uint)DAT_00000009;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1a79

void lld_sleep_set_current_time(void)

{
  do {
  } while (true);
  _DAT_0000000c = 0x80000000;
  _DAT_00000010 = _DAT_28000020;
  _DAT_2800001c = 0x80000000;
  return;
}


