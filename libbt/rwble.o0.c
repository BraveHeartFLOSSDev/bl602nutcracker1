typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef ushort uint16_t;

struct co_list_hdr { // DWARF DIE: 339
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 2ad
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

struct em_buf_tx_desc { // DWARF DIE: 550
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 4f4
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 35a
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 592
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

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

typedef char int8_t;

typedef ulong uint32_t;

struct rwip_rf_api { // DWARF DIE: 1037
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

struct rwip_prio { // DWARF DIE: 11bb
    uint8_t value;
    uint8_t increment;
};

typedef struct llc_ch_asses_tag llc_ch_asses_tag, *Pllc_ch_asses_tag;

struct llc_ch_asses_tag { // DWARF DIE: 17ee
    int8_t rcvd_quality[37];
    _Bool latency_en;
    uint8_t reassess_count;
    uint8_t reassess_cursor;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict73d_for___value anon_union.conflict73d_for___value, *Panon_union.conflict73d_for___value;

typedef uint wint_t;

union anon_union.conflict73d_for___value { // DWARF DIE: 73d
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 76f
    int __count;
    union anon_union.conflict73d_for___value __value;
};

typedef long _off_t;

typedef union anon_union.conflict73d anon_union.conflict73d, *Panon_union.conflict73d;

union anon_union.conflict73d { // DWARF DIE: 73d
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _fpos_t;

typedef struct llm_test_mode llm_test_mode, *Pllm_test_mode;

struct llm_test_mode { // DWARF DIE: 13ab
    _Bool end_of_tst;
    uint8_t directtesttype;
};

typedef struct data_len_ext data_len_ext, *Pdata_len_ext;

struct data_len_ext { // DWARF DIE: 13d6
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

struct bd_addr { // DWARF DIE: 177
    uint8_t addr[6];
};

struct advertising_pdu_params { // DWARF DIE: 1236
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

struct ke_msg { // DWARF DIE: 3b5
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef struct t_public_key256 t_public_key256, *Pt_public_key256;

struct t_public_key256 { // DWARF DIE: 1471
    uint8_t x[32];
    uint8_t y[32];
};

typedef struct scanning_pdu_params scanning_pdu_params, *Pscanning_pdu_params;

struct scanning_pdu_params { // DWARF DIE: 130d
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

struct ea_elt_tag { // DWARF DIE: 624
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

struct le_chnl_map { // DWARF DIE: 1a9
    uint8_t map[5];
};

struct channel_map_assess { // DWARF DIE: 14a5
    uint16_t assess_timer;
    int8_t lower_limit;
    int8_t upper_limit;
    int8_t rssi_noise_limit;
    uint8_t reassess_count;
    struct le_chnl_map ch_map;
    _Bool llm_le_set_host_ch_class_cmd_sto;
};

struct evt_mask { // DWARF DIE: 14a
    uint8_t mask[8];
};

struct access_addr_gen { // DWARF DIE: 1376
    uint8_t intrand;
    uint8_t ct1_idx;
    uint8_t ct2_idx;
};

struct llm_le_env_tag { // DWARF DIE: 1516
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

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 440
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

struct ke_state_handler { // DWARF DIE: 46c
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct ltk ltk, *Pltk;

struct ltk { // DWARF DIE: 1d6
    uint8_t ltk[16];
};

typedef struct le_features le_features, *Ple_features;

struct le_features { // DWARF DIE: 203
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states { // DWARF DIE: 26e
    uint8_t supp_states[8];
};

typedef struct sess_k_div sess_k_div, *Psess_k_div;

struct sess_k_div { // DWARF DIE: 290
    uint8_t skd[16];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds { // DWARF DIE: 225
    uint8_t cmds[64];
};

typedef long int32_t;

typedef struct lld_evt_env_tag lld_evt_env_tag, *Plld_evt_env_tag;

struct lld_evt_env_tag { // DWARF DIE: 1762
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

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflictf02_for__new anon_union.conflictf02_for__new, *Panon_union.conflictf02_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflictd76 anon_struct.conflictd76, *Panon_struct.conflictd76;

typedef struct anon_struct.conflictebb anon_struct.conflictebb, *Panon_struct.conflictebb;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct anon_struct.conflictebb { // DWARF DIE: ebb
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _Bigint { // DWARF DIE: 7c3
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: d2d
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: ce8
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 964
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 992
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

struct _on_exit_args { // DWARF DIE: 8b6
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 90b
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __tm { // DWARF DIE: 833
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

struct anon_struct.conflictd76 { // DWARF DIE: d76
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

union anon_union.conflictf02_for__new { // DWARF DIE: f02
    struct anon_struct.conflictd76 _reent;
    struct anon_struct.conflictebb _unused;
};

struct _reent { // DWARF DIE: afe
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
    union anon_union.conflictf02_for__new _new;
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

struct __locale_t { // DWARF DIE: f37
};

typedef union anon_union.conflictf02 anon_union.conflictf02, *Panon_union.conflictf02;

union anon_union.conflictf02 { // DWARF DIE: f02
    struct anon_struct.conflictd76 _reent;
    struct anon_struct.conflictebb _unused;
};

typedef uint8_t ke_state_t;

typedef int32_t BaseType_t;

typedef struct llc_env_tag llc_env_tag, *Pllc_env_tag;

typedef struct rem_version rem_version, *Prem_version;

typedef struct data_len_ext_tag data_len_ext_tag, *Pdata_len_ext_tag;

typedef struct encrypt encrypt, *Pencrypt;

struct rem_version { // DWARF DIE: 1840
    uint8_t vers;
    undefined field_0x1;
    uint16_t compid;
    uint16_t subvers;
};

struct encrypt { // DWARF DIE: 1875
    struct sess_k_div skd;
    struct ltk ltk;
    uint8_t randn[16];
};

struct data_len_ext_tag { // DWARF DIE: 18aa
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

struct llc_env_tag { // DWARF DIE: 193a
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
// DWARF DIE: 2048

void rwble_init(void)

{
  _L0();
  FUN_0001000e();
  _L0();
  FUN_00010020();
  _DAT_28000050 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  FUN_0001000e();
  _L0();
  FUN_00010020();
  _DAT_28000050 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001000e(void)

{
  FUN_0001000e();
  _L0();
  FUN_00010020();
  _DAT_28000050 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  FUN_00010020();
  _DAT_28000050 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010020(void)

{
  FUN_00010020();
  _DAT_28000050 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1f2b

void rwble_reset(void)

{
  _DAT_2800001c = 0x80000000;
  do {
  } while (true);
  _L0();
  FUN_00010064();
  _L0();
  FUN_00010076();
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  FUN_00010064();
  _L0();
  FUN_00010076();
  _L0();
  return;
}



void FUN_00010064(void)

{
  FUN_00010064();
  _L0();
  FUN_00010076();
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  FUN_00010076();
  _L0();
  return;
}



void FUN_00010076(void)

{
  FUN_00010076();
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 1eeb

_Bool rwble_sleep_check(void)

{
  return (_Bool)(iRam00000000 == 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1e49

_Bool rwble_activity_ongoing_check(void)

{
  bool bVar1;
  
  bVar1 = true;
  if ((iRam00000000 == 0) && (_DAT_00000008 == 0)) {
    bVar1 = _DAT_00000010 != 0;
  }
  return (_Bool)bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1d8a

void rwble_version(uint8_t *fw_version,uint8_t *hw_version)

{
  fw_version[3] = '\t';
  fw_version[2] = '\x03';
  fw_version[1] = '!';
  *fw_version = '\0';
  hw_version[3] = (uint8_t)((uint)_DAT_28000004 >> 0x18);
  hw_version[2] = (uint8_t)((uint)_DAT_28000004 >> 0x10);
  hw_version[1] = (uint8_t)((uint)_DAT_28000004 >> 8);
  *hw_version = (uint8_t)_DAT_28000004;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1d39

void rwble_isr_clear(void)

{
  if (_DAT_28000010 != 0) {
    _DAT_28000018 = 0xffffffff;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1ab6

void rwble_isr(void)

{
  uint uVar1;
  
  while (uVar1 = _DAT_28000010, _DAT_28000010 != 0) {
    if ((_DAT_28000010 & 4) != 0) {
      _DAT_28000018 = 4;
      _L0();
    }
    if ((uVar1 & 1) != 0) {
      _DAT_28000018 = 1;
      _L0();
      _L0();
    }
    if ((uVar1 & 0x80) != 0) {
      _DAT_28000018 = 0x80;
      _L0();
    }
    if ((uVar1 & 8) != 0) {
      _DAT_28000018 = 8;
      if ((uVar1 & 2) != 0) {
        _DAT_28000018 = 2;
        uVar1 &= 0xfffffffd;
      }
      if ((int)(uVar1 << 0xf) < 0) {
        if ((char)uRam00000000 == '\0') {
          uRam00000000 = CONCAT31(uRam00000000._1_3_,1);
        }
        _DAT_28000018 = 0x10000;
      }
      FUN_000101ac(0);
    }
    if ((uVar1 & 0x10008) == 0x10000) {
      if ((char)uRam00000000 == '\0') {
        uRam00000000 = _DAT_280000ac;
      }
      _DAT_28000018 = 0x10000;
      if ((uVar1 & 2) != 0) {
        _DAT_28000018 = 2;
        uVar1 &= 0xfffffffd;
      }
      FUN_000101f4(uRam00000000 >> 0x10 & 0xff);
    }
    if ((uVar1 & 0x100) != 0) {
      _DAT_28000018 = 0x100;
      if ((uVar1 & 2) != 0) {
        _DAT_28000018 = 2;
        uVar1 &= 0xfffffffd;
      }
      FUN_00010216(1);
    }
    if ((uVar1 & 2) != 0) {
      _DAT_28000018 = 2;
      _L0();
    }
    if ((uVar1 & 0x200) != 0) {
      _DAT_28000018 = 0x200;
      _L0();
    }
    if ((uVar1 & 0x40) != 0) {
      _DAT_28000018 = 0x40;
      _L0();
    }
    if ((uVar1 & 0x10) != 0) {
      _DAT_28000018 = 0x10;
      _L0();
    }
    if ((uVar1 & 0x20) != 0) {
      _DAT_28000018 = 0x20;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    _L0();
    do {
      if ((unaff_s0 & 1) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
        _L0();
        _L0();
      }
      if ((unaff_s0 & 0x80) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
        _L0();
      }
      if ((unaff_s0 & 8) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 8;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        if ((int)(unaff_s0 << 0xf) < 0) {
          if (*unaff_s3 == '\0') {
            *unaff_s3 = unaff_s5;
          }
          *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        }
        FUN_000101ac(0);
      }
      if ((unaff_s0 & unaff_s7) == unaff_s2) {
        if (*unaff_s3 == '\0') {
          *unaff_s3 = unaff_s5;
          *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
          *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
        }
        *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_000101f4(*unaff_s4 >> 0x10 & 0xff);
      }
      if ((unaff_s0 & 0x100) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_00010216(1);
      }
      if ((unaff_s0 & 2) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 2;
        _L0();
      }
      if ((unaff_s0 & 0x200) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
        _L0();
      }
      if ((unaff_s0 & 0x40) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
        _L0();
      }
      if ((unaff_s0 & 0x10) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
        _L0();
      }
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
    } while ((unaff_s0 & 4) == 0);
    *(undefined4 *)(unaff_s1 + 0x18) = 4;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    _L0();
    _L0();
    do {
      if ((unaff_s0 & 0x80) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
        _L0();
      }
      if ((unaff_s0 & 8) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 8;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        if ((int)(unaff_s0 << 0xf) < 0) {
          if (*unaff_s3 == '\0') {
            *unaff_s3 = unaff_s5;
          }
          *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        }
        FUN_000101ac(0);
      }
      if ((unaff_s0 & unaff_s7) == unaff_s2) {
        if (*unaff_s3 == '\0') {
          *unaff_s3 = unaff_s5;
          *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
          *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
        }
        *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_000101f4(*unaff_s4 >> 0x10 & 0xff);
      }
      if ((unaff_s0 & 0x100) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_00010216(1);
      }
      if ((unaff_s0 & 2) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 2;
        _L0();
      }
      if ((unaff_s0 & 0x200) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
        _L0();
      }
      if ((unaff_s0 & 0x40) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
        _L0();
      }
      if ((unaff_s0 & 0x10) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
        _L0();
      }
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
      if ((unaff_s0 & 4) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 4;
        _L0();
      }
    } while ((unaff_s0 & 1) == 0);
    *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    _L0();
    do {
      if ((unaff_s0 & 0x80) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
        _L0();
      }
      if ((unaff_s0 & 8) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 8;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        if ((int)(unaff_s0 << 0xf) < 0) {
          if (*unaff_s3 == '\0') {
            *unaff_s3 = unaff_s5;
          }
          *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        }
        FUN_000101ac(0);
      }
      if ((unaff_s0 & unaff_s7) == unaff_s2) {
        if (*unaff_s3 == '\0') {
          *unaff_s3 = unaff_s5;
          *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
          *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
        }
        *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_000101f4(*unaff_s4 >> 0x10 & 0xff);
      }
      if ((unaff_s0 & 0x100) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_00010216(1);
      }
      if ((unaff_s0 & 2) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 2;
        _L0();
      }
      if ((unaff_s0 & 0x200) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
        _L0();
      }
      if ((unaff_s0 & 0x40) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
        _L0();
      }
      if ((unaff_s0 & 0x10) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
        _L0();
      }
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
      if ((unaff_s0 & 4) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 4;
        _L0();
      }
    } while ((unaff_s0 & 1) == 0);
    *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
    _L0();
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    _L0();
    do {
      if ((unaff_s0 & 8) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 8;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        if ((int)(unaff_s0 << 0xf) < 0) {
          if (*unaff_s3 == '\0') {
            *unaff_s3 = unaff_s5;
          }
          *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        }
        FUN_000101ac(0);
      }
      if ((unaff_s0 & unaff_s7) == unaff_s2) {
        if (*unaff_s3 == '\0') {
          *unaff_s3 = unaff_s5;
          *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
          *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
        }
        *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_000101f4(*unaff_s4 >> 0x10 & 0xff);
      }
      if ((unaff_s0 & 0x100) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_00010216(1);
      }
      if ((unaff_s0 & 2) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 2;
        _L0();
      }
      if ((unaff_s0 & 0x200) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
        _L0();
      }
      if ((unaff_s0 & 0x40) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
        _L0();
      }
      if ((unaff_s0 & 0x10) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
        _L0();
      }
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
      if ((unaff_s0 & 4) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 4;
        _L0();
      }
      if ((unaff_s0 & 1) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
        _L0();
        _L0();
      }
    } while ((unaff_s0 & 0x80) == 0);
    *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000101ac(undefined4 param_1)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    FUN_000101ac(param_1);
    do {
      if ((unaff_s0 & unaff_s7) == unaff_s2) {
        if (*unaff_s3 == '\0') {
          *unaff_s3 = unaff_s5;
          *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
          *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
        }
        *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_000101f4(*unaff_s4 >> 0x10 & 0xff);
      }
      if ((unaff_s0 & 0x100) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_00010216(1);
      }
      if ((unaff_s0 & 2) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 2;
        _L0();
      }
      if ((unaff_s0 & 0x200) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
        _L0();
      }
      if ((unaff_s0 & 0x40) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
        _L0();
      }
      if ((unaff_s0 & 0x10) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
        _L0();
      }
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
      if ((unaff_s0 & 4) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 4;
        _L0();
      }
      if ((unaff_s0 & 1) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
        _L0();
        _L0();
      }
      if ((unaff_s0 & 0x80) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
        _L0();
      }
    } while ((unaff_s0 & 8) == 0);
    *(undefined4 *)(unaff_s1 + 0x18) = 8;
    if ((unaff_s0 & 2) != 0) {
      *(undefined4 *)(unaff_s1 + 0x18) = 2;
      unaff_s0 &= 0xfffffffd;
    }
    if ((int)(unaff_s0 << 0xf) < 0) {
      if (*unaff_s3 == '\0') {
        *unaff_s3 = unaff_s5;
      }
      *(uint *)(unaff_s1 + 0x18) = unaff_s2;
    }
    param_1 = 0;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000101f4(uint param_1)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    FUN_000101f4(param_1);
    do {
      if ((unaff_s0 & 0x100) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_00010216(1);
      }
      if ((unaff_s0 & 2) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 2;
        _L0();
      }
      if ((unaff_s0 & 0x200) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
        _L0();
      }
      if ((unaff_s0 & 0x40) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
        _L0();
      }
      if ((unaff_s0 & 0x10) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
        _L0();
      }
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
      if ((unaff_s0 & 4) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 4;
        _L0();
      }
      if ((unaff_s0 & 1) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
        _L0();
        _L0();
      }
      if ((unaff_s0 & 0x80) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
        _L0();
      }
      if ((unaff_s0 & 8) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 8;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        if ((int)(unaff_s0 << 0xf) < 0) {
          if (*unaff_s3 == '\0') {
            *unaff_s3 = unaff_s5;
          }
          *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        }
        FUN_000101ac(0);
      }
    } while ((unaff_s0 & unaff_s7) != unaff_s2);
    if (*unaff_s3 == '\0') {
      *unaff_s3 = unaff_s5;
      *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
      *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
    }
    *(uint *)(unaff_s1 + 0x18) = unaff_s2;
    if ((unaff_s0 & 2) != 0) {
      *(undefined4 *)(unaff_s1 + 0x18) = 2;
      unaff_s0 &= 0xfffffffd;
    }
    param_1 = *unaff_s4 >> 0x10 & 0xff;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010216(undefined4 param_1)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    FUN_00010216(param_1);
    do {
      if ((unaff_s0 & 2) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 2;
        _L0();
      }
      if ((unaff_s0 & 0x200) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
        _L0();
      }
      if ((unaff_s0 & 0x40) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
        _L0();
      }
      if ((unaff_s0 & 0x10) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
        _L0();
      }
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
      if ((unaff_s0 & 4) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 4;
        _L0();
      }
      if ((unaff_s0 & 1) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
        _L0();
        _L0();
      }
      if ((unaff_s0 & 0x80) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
        _L0();
      }
      if ((unaff_s0 & 8) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 8;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        if ((int)(unaff_s0 << 0xf) < 0) {
          if (*unaff_s3 == '\0') {
            *unaff_s3 = unaff_s5;
          }
          *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        }
        FUN_000101ac(0);
      }
      if ((unaff_s0 & unaff_s7) == unaff_s2) {
        if (*unaff_s3 == '\0') {
          *unaff_s3 = unaff_s5;
          *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
          *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
        }
        *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_000101f4(*unaff_s4 >> 0x10 & 0xff);
      }
    } while ((unaff_s0 & 0x100) == 0);
    *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
    if ((unaff_s0 & 2) != 0) {
      *(undefined4 *)(unaff_s1 + 0x18) = 2;
      unaff_s0 &= 0xfffffffd;
    }
    param_1 = 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    _L0();
    do {
      if ((unaff_s0 & 0x200) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
        _L0();
      }
      if ((unaff_s0 & 0x40) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
        _L0();
      }
      if ((unaff_s0 & 0x10) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
        _L0();
      }
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
      if ((unaff_s0 & 4) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 4;
        _L0();
      }
      if ((unaff_s0 & 1) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
        _L0();
        _L0();
      }
      if ((unaff_s0 & 0x80) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
        _L0();
      }
      if ((unaff_s0 & 8) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 8;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        if ((int)(unaff_s0 << 0xf) < 0) {
          if (*unaff_s3 == '\0') {
            *unaff_s3 = unaff_s5;
          }
          *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        }
        FUN_000101ac(0);
      }
      if ((unaff_s0 & unaff_s7) == unaff_s2) {
        if (*unaff_s3 == '\0') {
          *unaff_s3 = unaff_s5;
          *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
          *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
        }
        *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_000101f4(*unaff_s4 >> 0x10 & 0xff);
      }
      if ((unaff_s0 & 0x100) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_00010216(1);
      }
    } while ((unaff_s0 & 2) == 0);
    *(undefined4 *)(unaff_s1 + 0x18) = 2;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    _L0();
    do {
      if ((unaff_s0 & 0x40) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
        _L0();
      }
      if ((unaff_s0 & 0x10) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
        _L0();
      }
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
      if ((unaff_s0 & 4) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 4;
        _L0();
      }
      if ((unaff_s0 & 1) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
        _L0();
        _L0();
      }
      if ((unaff_s0 & 0x80) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
        _L0();
      }
      if ((unaff_s0 & 8) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 8;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        if ((int)(unaff_s0 << 0xf) < 0) {
          if (*unaff_s3 == '\0') {
            *unaff_s3 = unaff_s5;
          }
          *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        }
        FUN_000101ac(0);
      }
      if ((unaff_s0 & unaff_s7) == unaff_s2) {
        if (*unaff_s3 == '\0') {
          *unaff_s3 = unaff_s5;
          *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
          *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
        }
        *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_000101f4(*unaff_s4 >> 0x10 & 0xff);
      }
      if ((unaff_s0 & 0x100) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_00010216(1);
      }
      if ((unaff_s0 & 2) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 2;
        _L0();
      }
    } while ((unaff_s0 & 0x200) == 0);
    *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    _L0();
    do {
      if ((unaff_s0 & 0x10) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
        _L0();
      }
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
      if ((unaff_s0 & 4) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 4;
        _L0();
      }
      if ((unaff_s0 & 1) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
        _L0();
        _L0();
      }
      if ((unaff_s0 & 0x80) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
        _L0();
      }
      if ((unaff_s0 & 8) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 8;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        if ((int)(unaff_s0 << 0xf) < 0) {
          if (*unaff_s3 == '\0') {
            *unaff_s3 = unaff_s5;
          }
          *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        }
        FUN_000101ac(0);
      }
      if ((unaff_s0 & unaff_s7) == unaff_s2) {
        if (*unaff_s3 == '\0') {
          *unaff_s3 = unaff_s5;
          *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
          *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
        }
        *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_000101f4(*unaff_s4 >> 0x10 & 0xff);
      }
      if ((unaff_s0 & 0x100) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_00010216(1);
      }
      if ((unaff_s0 & 2) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 2;
        _L0();
      }
      if ((unaff_s0 & 0x200) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
        _L0();
      }
    } while ((unaff_s0 & 0x40) == 0);
    *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  char *unaff_s3;
  uint *unaff_s4;
  char unaff_s5;
  undefined4 unaff_s6;
  uint unaff_s7;
  undefined4 *unaff_s8;
  
  do {
    _L0();
    do {
      if ((unaff_s0 & 0x20) != 0) {
        _DAT_28000018 = 0x20;
        unaff_s1 = 0x28000000;
        unaff_s8 = (undefined4 *)0x0;
      }
      unaff_s0 = *(uint *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        return;
      }
      if ((unaff_s0 & 4) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 4;
        _L0();
      }
      if ((unaff_s0 & 1) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = unaff_s6;
        _L0();
        _L0();
      }
      if ((unaff_s0 & 0x80) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x80;
        _L0();
      }
      if ((unaff_s0 & 8) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 8;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        if ((int)(unaff_s0 << 0xf) < 0) {
          if (*unaff_s3 == '\0') {
            *unaff_s3 = unaff_s5;
          }
          *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        }
        FUN_000101ac(0);
      }
      if ((unaff_s0 & unaff_s7) == unaff_s2) {
        if (*unaff_s3 == '\0') {
          *unaff_s3 = unaff_s5;
          *unaff_s8 = *(undefined4 *)(unaff_s1 + 0xa8);
          *unaff_s4 = *(uint *)(unaff_s1 + 0xac);
        }
        *(uint *)(unaff_s1 + 0x18) = unaff_s2;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_000101f4(*unaff_s4 >> 0x10 & 0xff);
      }
      if ((unaff_s0 & 0x100) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x100;
        if ((unaff_s0 & 2) != 0) {
          *(undefined4 *)(unaff_s1 + 0x18) = 2;
          unaff_s0 &= 0xfffffffd;
        }
        FUN_00010216(1);
      }
      if ((unaff_s0 & 2) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 2;
        _L0();
      }
      if ((unaff_s0 & 0x200) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x200;
        _L0();
      }
      if ((unaff_s0 & 0x40) != 0) {
        *(undefined4 *)(unaff_s1 + 0x18) = 0x40;
        _L0();
      }
    } while ((unaff_s0 & 0x10) == 0);
    *(undefined4 *)(unaff_s1 + 0x18) = 0x10;
  } while( true );
}


