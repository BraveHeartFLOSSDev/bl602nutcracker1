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

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict74e_for___value anon_union.conflict74e_for___value, *Panon_union.conflict74e_for___value;

typedef uint wint_t;

union anon_union.conflict74e_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflict74e_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflict74e anon_union.conflict74e, *Panon_union.conflict74e;

union anon_union.conflict74e {
    wint_t __wch;
    uchar __wchb[4];
};

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

typedef char int8_t;

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

typedef enum KE_TASK_TYPE {
    TASK_HCI_ONCHIP=4,
    TASK_NONE=-1,
    TASK_LLM=0,
    TASK_DBG=3,
    TASK_LLD=2,
    TASK_MAX=5,
    TASK_LLC=1
} KE_TASK_TYPE;

typedef enum anon_enum_8.conflict14a {
    KE_MEM_KE_MSG=0,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_NON_RETENTION=0,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_EM=1
} anon_enum_8.conflict14a;

typedef long int32_t;

typedef struct ble_ke_env_tag ble_ke_env_tag, *Pble_ke_env_tag;

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free {
};

struct ble_ke_env_tag {
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * heap[2];
    uint16_t heap_size[2];
};

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

typedef struct rwip_prio rwip_prio, *Prwip_prio;

struct rwip_prio {
    uint8_t value;
    uint8_t increment;
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler {
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

struct ke_state_handler {
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct le_features le_features, *Ple_features;

struct le_features {
    uint8_t feats[8];
};

typedef struct le_states le_states, *Ple_states;

struct le_states {
    uint8_t supp_states[8];
};

typedef struct supp_cmds supp_cmds, *Psupp_cmds;

struct supp_cmds {
    uint8_t cmds[64];
};

typedef struct ke_timer ke_timer, *Pke_timer;

struct ke_timer {
    struct ke_timer * next;
    ke_msg_id_t id;
    ke_task_id_t task;
    uint32_t time;
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

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflictf13_for__new anon_union.conflictf13_for__new, *Panon_union.conflictf13_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflictd87 anon_struct.conflictd87, *Panon_struct.conflictd87;

typedef struct anon_struct.conflictecc anon_struct.conflictecc, *Panon_struct.conflictecc;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

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

struct anon_struct.conflictecc {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _Bigint {
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflictd87 {
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

union anon_union.conflictf13_for__new {
    struct anon_struct.conflictd87 _reent;
    struct anon_struct.conflictecc _unused;
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
    union anon_union.conflictf13_for__new _new;
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

typedef union anon_union.conflictf13 anon_union.conflictf13, *Panon_union.conflictf13;

union anon_union.conflictf13 {
    struct anon_struct.conflictd87 _reent;
    struct anon_struct.conflictecc _unused;
};

typedef int32_t BaseType_t;

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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




_Bool ble_cmp_abs_time(co_list_hdr *timerA,co_list_hdr *timerB)

{
  int iVar1;
  byte abStack17 [4];
  _Bool result;
  
  iVar1 = (*pcRam00000000)(abStack17,timerA,timerB,pcRam00000000);
  if (iVar1 == 0) {
    abStack17[0] = (byte)((uint)((int)timerA[2].next - (int)timerB[2].next) >> 0x16) & 1;
  }
  return (_Bool)abStack17[0];
}



_Bool ble_cmp_timer_id(co_list_hdr *timer,uint32_t timer_task)

{
  int iVar1;
  undefined auStack17 [4];
  _Bool result;
  
  iVar1 = (*pcRam00000000)(auStack17,timer,timer_task,pcRam00000000);
  if ((iVar1 == 0) && (auStack17[0] = 0, (uint)*(ushort *)&timer[1].next == timer_task >> 0x10)) {
    auStack17[0] = (uint)*(ushort *)((int)&timer[1].next + 2) == (timer_task & 0xffff);
  }
  return (_Bool)auStack17[0];
}



// WARNING: Removing unreachable block (ram,0x0001009a)

uint32_t _patch_ke_time(void *pRet)

{
                    // WARNING: Do nothing block with infinite loop
  do {
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000100d8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t ble_ke_time(void)

{
  int iVar1;
  uint32_t uStack20;
  uint32_t time;
  
  iVar1 = (*pcRam00000000)(&uStack20,pcRam00000000);
  if (iVar1 == 0) {
    do {
    } while( true );
  }
  return uStack20;
}



uint32_t _patch_ble_ke_time_cmp(void *pRet,uint32_t newer,uint32_t older)

{
  *(byte *)pRet = ((byte)(newer - older >> 0x16) ^ 1) & 1;
  return 1;
}



_Bool ble_ke_time_cmp(uint32_t newer,uint32_t older)

{
  int iVar1;
  byte abStack17 [4];
  _Bool result;
  
  iVar1 = (*pcRam00000000)(abStack17,newer,older,pcRam00000000);
  if (iVar1 == 0) {
    abStack17[0] = ((byte)(newer - older >> 0x16) ^ 1) & 1;
  }
  return (_Bool)abStack17[0];
}



uint32_t _patch_ble_ke_time_past(void *pRet,uint32_t time)

{
  undefined uVar1;
  
  _L0();
  uVar1 = FUN_0001014c(time);
  *(undefined *)pRet = uVar1;
  return 1;
}



undefined4 _L0(void)

{
  undefined *unaff_s0;
  undefined uVar1;
  undefined4 in_stack_0000000c;
  
  _L0();
  uVar1 = FUN_0001014c(in_stack_0000000c);
  *unaff_s0 = uVar1;
  return 1;
}



undefined4 FUN_0001014c(void)

{
  undefined *unaff_s0;
  undefined uVar1;
  
  uVar1 = FUN_0001014c();
  *unaff_s0 = uVar1;
  return 1;
}



_Bool ble_ke_time_past(uint32_t time)

{
  int iVar1;
  undefined auStack17 [4];
  _Bool result;
  
  iVar1 = (*pcRam00000000)(auStack17,time,pcRam00000000);
  if (iVar1 == 0) {
    _L0();
    auStack17[0] = FUN_00010192(time);
  }
  return (_Bool)auStack17[0];
}



void _L0(void)

{
  _L0();
  FUN_00010192();
  return;
}



void FUN_00010192(void)

{
  FUN_00010192();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t _patch_ble_ke_timer_hw_set(void *pRet,ke_timer *timer)

{
  if (timer == (ke_timer *)0x0) {
    _DAT_2800000c = _DAT_2800000c & 0xffffffbf;
  }
  else {
    _DAT_280000f4 = timer->time;
    if ((_DAT_2800000c >> 6 & 1) == 0) {
      _DAT_28000018 = 0x40;
      _DAT_2800000c = _DAT_2800000c | 0x40;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ble_ke_timer_hw_set(ke_timer *timer)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,timer,pcRam00000000);
  if (iVar1 == 0) {
    if (timer == (ke_timer *)0x0) {
      _DAT_2800000c = _DAT_2800000c & 0xffffffbf;
    }
    else {
      _DAT_280000f4 = timer->time;
      if ((_DAT_2800000c >> 6 & 1) == 0) {
        _DAT_28000018 = 0x40;
        _DAT_2800000c = _DAT_2800000c | 0x40;
      }
    }
  }
  return;
}



void ble_ke_timer_schedule(int iRam00000010)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*pcRam00000000)(0,pcRam00000000);
  if (iVar1 != 0) {
    return;
  }
  do {
    FUN_00010246(3);
    iVar1 = iRam00000010;
    if (iRam00000010 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar2 = FUN_0001026a(*(int *)(iRam00000010 + 8) + -1);
    if (iVar2 == 0) {
      FUN_000102a4(iVar1);
      iVar1 = FUN_000102ae(*(undefined4 *)(iVar1 + 8));
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = FUN_00010278(0x10);
    FUN_0001028e(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6),0xff);
    FUN_00010298(iVar1);
  } while( true );
}



void FUN_00010246(undefined4 param_1)

{
  int iVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  
  do {
    FUN_00010246(param_1);
    iVar1 = *(int *)(unaff_s1 + 0x10);
    if (iVar1 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar2 = FUN_0001026a(*(int *)(iVar1 + 8) + -1);
    if (iVar2 == 0) {
      FUN_000102a4(iVar1);
      iVar1 = FUN_000102ae(*(undefined4 *)(iVar1 + 8));
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = FUN_00010278(unaff_s2 + 0x10);
    FUN_0001028e(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6),0xff);
    FUN_00010298(iVar1);
    param_1 = 3;
  } while( true );
}



void FUN_0001026a(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  
  while( true ) {
    iVar1 = FUN_0001026a(param_1);
    if (iVar1 == 0) {
      FUN_000102a4(unaff_s0);
      iVar1 = FUN_000102ae(*(undefined4 *)(unaff_s0 + 8));
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = FUN_00010278(unaff_s2 + 0x10);
    FUN_0001028e(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6),0xff);
    FUN_00010298(iVar1);
    FUN_00010246(3);
    unaff_s0 = *(int *)(unaff_s1 + 0x10);
    if (unaff_s0 == 0) break;
    param_1 = *(int *)(unaff_s0 + 8) + -1;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010278(int param_1)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    iVar2 = FUN_00010278(param_1);
    FUN_0001028e(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6),0xff);
    FUN_00010298(iVar2);
    FUN_00010246(3);
    iVar2 = *(int *)(unaff_s1 + 0x10);
    if (iVar2 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar1 = FUN_0001026a(*(int *)(iVar2 + 8) + -1);
    if (iVar1 == 0) {
      FUN_000102a4(iVar2);
      iVar2 = FUN_000102ae(*(undefined4 *)(iVar2 + 8));
      if (iVar2 == 0) {
        return;
      }
    }
    param_1 = unaff_s2 + 0x10;
  } while( true );
}



void FUN_0001028e(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  
  do {
    FUN_0001028e(param_1,param_2,param_3);
    FUN_00010298(unaff_s0);
    FUN_00010246(3);
    iVar1 = *(int *)(unaff_s1 + 0x10);
    if (iVar1 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar2 = FUN_0001026a(*(int *)(iVar1 + 8) + -1);
    if (iVar2 == 0) {
      FUN_000102a4(iVar1);
      iVar1 = FUN_000102ae(*(undefined4 *)(iVar1 + 8));
      if (iVar1 == 0) {
        return;
      }
    }
    unaff_s0 = FUN_00010278(unaff_s2 + 0x10);
    param_2 = (uint)*(ushort *)(unaff_s0 + 6);
    param_1 = (uint)*(ushort *)(unaff_s0 + 4);
    param_3 = 0xff;
  } while( true );
}



void FUN_00010298(int param_1)

{
  int iVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  
  do {
    FUN_00010298(param_1);
    FUN_00010246(3);
    iVar1 = *(int *)(unaff_s1 + 0x10);
    if (iVar1 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar2 = FUN_0001026a(*(int *)(iVar1 + 8) + -1);
    if (iVar2 == 0) {
      FUN_000102a4(iVar1);
      iVar1 = FUN_000102ae(*(undefined4 *)(iVar1 + 8));
      if (iVar1 == 0) {
        return;
      }
    }
    param_1 = FUN_00010278(unaff_s2 + 0x10);
    FUN_0001028e(*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6),0xff);
  } while( true );
}



void FUN_000102a4(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  
  do {
    FUN_000102a4(param_1);
    iVar1 = FUN_000102ae(*(undefined4 *)(unaff_s0 + 8));
    if (iVar1 == 0) {
      return;
    }
    do {
      iVar1 = FUN_00010278(unaff_s2 + 0x10);
      FUN_0001028e(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6),0xff);
      FUN_00010298(iVar1);
      FUN_00010246(3);
      unaff_s0 = *(int *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar1 = FUN_0001026a(*(int *)(unaff_s0 + 8) + -1);
      param_1 = unaff_s0;
    } while (iVar1 != 0);
  } while( true );
}



void FUN_000102ae(undefined4 param_1)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    iVar2 = FUN_000102ae(param_1);
    if (iVar2 == 0) {
      return;
    }
    do {
      iVar2 = FUN_00010278(unaff_s2 + 0x10);
      FUN_0001028e(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6),0xff);
      FUN_00010298(iVar2);
      FUN_00010246(3);
      iVar2 = *(int *)(unaff_s1 + 0x10);
      if (iVar2 == 0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar1 = FUN_0001026a(*(int *)(iVar2 + 8) + -1);
    } while (iVar1 != 0);
    FUN_000102a4(iVar2);
    param_1 = *(undefined4 *)(iVar2 + 8);
  } while( true );
}



uint32_t _patch_ble_cmp_abs_time(void *pRet,co_list_hdr *timerA,co_list_hdr *timerB)

{
  *(byte *)pRet = (byte)((uint)((int)timerA[2].next - (int)timerB[2].next) >> 0x16) & 1;
  return 1;
}



uint32_t _patch_ble_cmp_timer_id(void *pRet,co_list_hdr *timer,uint32_t timer_task)

{
  bool bVar1;
  
  bVar1 = false;
  if ((uint)*(ushort *)&timer[1].next == timer_task >> 0x10) {
    bVar1 = (uint)*(ushort *)((int)&timer[1].next + 2) == (timer_task & 0xffff);
  }
  *(bool *)pRet = bVar1;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t _patch_ble_ke_timer_schedule(void *pRet)

{
  int iVar1;
  int iVar2;
  
  do {
    FUN_00010312(3);
    iVar2 = _DAT_00000010;
    if (_DAT_00000010 == 0) {
      FUN_00010320(0);
      return 1;
    }
    iVar1 = FUN_0001033a(*(int *)(_DAT_00000010 + 8) + -1);
    if (iVar1 == 0) {
      FUN_00010374(iVar2);
      iVar2 = FUN_0001037e(*(undefined4 *)(iVar2 + 8));
      if (iVar2 == 0) {
        return 1;
      }
    }
    iVar2 = FUN_00010348(0x10);
    FUN_0001035e(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6),0xff);
    FUN_00010368(iVar2);
  } while( true );
}



undefined4 FUN_00010312(undefined4 param_1)

{
  int iVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  
  do {
    FUN_00010312(param_1);
    iVar1 = *(int *)(unaff_s1 + 0x10);
    if (iVar1 == 0) {
      FUN_00010320(0);
      return 1;
    }
    iVar2 = FUN_0001033a(*(int *)(iVar1 + 8) + -1);
    if (iVar2 == 0) {
      FUN_00010374(iVar1);
      iVar1 = FUN_0001037e(*(undefined4 *)(iVar1 + 8));
      if (iVar1 == 0) {
        return 1;
      }
    }
    iVar1 = FUN_00010348(unaff_s2 + 0x10);
    FUN_0001035e(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6),0xff);
    FUN_00010368(iVar1);
    param_1 = 3;
  } while( true );
}



undefined4 FUN_00010320(void)

{
  FUN_00010320();
  return 1;
}



undefined4 FUN_0001033a(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  
  while( true ) {
    iVar1 = FUN_0001033a(param_1);
    if (iVar1 == 0) {
      FUN_00010374(unaff_s0);
      iVar1 = FUN_0001037e(*(undefined4 *)(unaff_s0 + 8));
      if (iVar1 == 0) {
        return 1;
      }
    }
    iVar1 = FUN_00010348(unaff_s2 + 0x10);
    FUN_0001035e(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6),0xff);
    FUN_00010368(iVar1);
    FUN_00010312(3);
    unaff_s0 = *(int *)(unaff_s1 + 0x10);
    if (unaff_s0 == 0) break;
    param_1 = *(int *)(unaff_s0 + 8) + -1;
  }
  FUN_00010320(0);
  return 1;
}



undefined4 FUN_00010348(int param_1)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    iVar2 = FUN_00010348(param_1);
    FUN_0001035e(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6),0xff);
    FUN_00010368(iVar2);
    FUN_00010312(3);
    iVar2 = *(int *)(unaff_s1 + 0x10);
    if (iVar2 == 0) {
      FUN_00010320(0);
      return 1;
    }
    iVar1 = FUN_0001033a(*(int *)(iVar2 + 8) + -1);
    if (iVar1 == 0) {
      FUN_00010374(iVar2);
      iVar2 = FUN_0001037e(*(undefined4 *)(iVar2 + 8));
      if (iVar2 == 0) {
        return 1;
      }
    }
    param_1 = unaff_s2 + 0x10;
  } while( true );
}



undefined4 FUN_0001035e(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  
  do {
    FUN_0001035e(param_1,param_2,param_3);
    FUN_00010368(unaff_s0);
    FUN_00010312(3);
    iVar1 = *(int *)(unaff_s1 + 0x10);
    if (iVar1 == 0) {
      FUN_00010320(0);
      return 1;
    }
    iVar2 = FUN_0001033a(*(int *)(iVar1 + 8) + -1);
    if (iVar2 == 0) {
      FUN_00010374(iVar1);
      iVar1 = FUN_0001037e(*(undefined4 *)(iVar1 + 8));
      if (iVar1 == 0) {
        return 1;
      }
    }
    unaff_s0 = FUN_00010348(unaff_s2 + 0x10);
    param_2 = (uint)*(ushort *)(unaff_s0 + 6);
    param_1 = (uint)*(ushort *)(unaff_s0 + 4);
    param_3 = 0xff;
  } while( true );
}



undefined4 FUN_00010368(int param_1)

{
  int iVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  
  do {
    FUN_00010368(param_1);
    FUN_00010312(3);
    iVar1 = *(int *)(unaff_s1 + 0x10);
    if (iVar1 == 0) {
      FUN_00010320(0);
      return 1;
    }
    iVar2 = FUN_0001033a(*(int *)(iVar1 + 8) + -1);
    if (iVar2 == 0) {
      FUN_00010374(iVar1);
      iVar1 = FUN_0001037e(*(undefined4 *)(iVar1 + 8));
      if (iVar1 == 0) {
        return 1;
      }
    }
    param_1 = FUN_00010348(unaff_s2 + 0x10);
    FUN_0001035e(*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6),0xff);
  } while( true );
}



undefined4 FUN_00010374(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  
  do {
    FUN_00010374(param_1);
    iVar1 = FUN_0001037e(*(undefined4 *)(unaff_s0 + 8));
    if (iVar1 == 0) {
      return 1;
    }
    do {
      iVar1 = FUN_00010348(unaff_s2 + 0x10);
      FUN_0001035e(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6),0xff);
      FUN_00010368(iVar1);
      FUN_00010312(3);
      unaff_s0 = *(int *)(unaff_s1 + 0x10);
      if (unaff_s0 == 0) {
        FUN_00010320(0);
        return 1;
      }
      iVar1 = FUN_0001033a(*(int *)(unaff_s0 + 8) + -1);
      param_1 = unaff_s0;
    } while (iVar1 != 0);
  } while( true );
}



undefined4 FUN_0001037e(undefined4 param_1)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    iVar2 = FUN_0001037e(param_1);
    if (iVar2 == 0) {
      return 1;
    }
    do {
      iVar2 = FUN_00010348(unaff_s2 + 0x10);
      FUN_0001035e(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6),0xff);
      FUN_00010368(iVar2);
      FUN_00010312(3);
      iVar2 = *(int *)(unaff_s1 + 0x10);
      if (iVar2 == 0) {
        FUN_00010320(0);
        return 1;
      }
      iVar1 = FUN_0001033a(*(int *)(iVar2 + 8) + -1);
    } while (iVar1 != 0);
    FUN_00010374(iVar2);
    param_1 = *(undefined4 *)(iVar2 + 8);
  } while( true );
}



uint32_t _patch_ble_ke_timer_init(void *pRet)

{
  _L0(3,0);
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



void ble_ke_timer_init(void)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,pcRam00000000);
  if (iVar1 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t _patch_ble_ke_timer_set
                   (void *pRet,ke_msg_id_t timer_id,ke_task_id_t task_id,uint32_t delay)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  undefined2 in_register_0000202e;
  undefined2 in_register_00002032;
  
  uVar2 = 0x3fffff;
  if ((delay < 0x400000) && (uVar2 = delay, delay == 0)) {
    uVar2 = 1;
  }
  bVar1 = false;
  if ((_DAT_00000010 != 0) &&
     ((uint)*(ushort *)(_DAT_00000010 + 4) == CONCAT22(in_register_0000202e,timer_id))) {
    bVar1 = (uint)*(ushort *)(_DAT_00000010 + 6) == CONCAT22(in_register_00002032,task_id);
  }
  iVar3 = _LVL117(0x10,0,CONCAT22(in_register_0000202e,timer_id) << 0x10 |
                         CONCAT22(in_register_00002032,task_id));
  if (iVar3 == 0) {
    iVar3 = FUN_0001044c(0xc,0);
    *(ke_msg_id_t *)(iVar3 + 4) = timer_id;
    *(ke_task_id_t *)(iVar3 + 6) = task_id;
  }
  iVar4 = _L0();
  *(uint32_t *)(iVar3 + 8) = uVar2 + iVar4 & 0x7fffff;
  FUN_0001047e(0x10,iVar3,0);
  if ((bVar1) || (_DAT_00000010 == iVar3)) {
    FUN_00010496(_DAT_00000010);
  }
  iVar3 = FUN_000104a0(uVar2 + iVar4);
  if (iVar3 != 0) {
    FUN_000104ac(3);
  }
  return 1;
}



undefined4 _LVL117(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  undefined2 unaff_s5;
  int unaff_s6;
  
  iVar1 = _LVL117();
  if (iVar1 == 0) {
    iVar1 = FUN_0001044c(0xc,0);
    *(undefined2 *)(iVar1 + 4) = unaff_s5;
    *(undefined2 *)(iVar1 + 6) = unaff_s4;
  }
  iVar2 = _L0();
  *(uint *)(iVar1 + 8) = unaff_s0 + iVar2 & 0x7fffff;
  FUN_0001047e(unaff_s3 + 0x10,iVar1,0);
  if ((unaff_s2 != 0) || (*(int *)(unaff_s6 + 0x10) == iVar1)) {
    FUN_00010496(*(undefined4 *)(unaff_s6 + 0x10));
  }
  iVar1 = FUN_000104a0(unaff_s0 + iVar2);
  if (iVar1 != 0) {
    FUN_000104ac(3);
  }
  return 1;
}



undefined4 FUN_0001044c(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  undefined2 unaff_s5;
  int unaff_s6;
  
  iVar1 = FUN_0001044c();
  *(undefined2 *)(iVar1 + 4) = unaff_s5;
  *(undefined2 *)(iVar1 + 6) = unaff_s4;
  iVar2 = _L0();
  *(uint *)(iVar1 + 8) = unaff_s0 + iVar2 & 0x7fffff;
  FUN_0001047e(unaff_s3 + 0x10,iVar1,0);
  if ((unaff_s2 != 0) || (*(int *)(unaff_s6 + 0x10) == iVar1)) {
    FUN_00010496(*(undefined4 *)(unaff_s6 + 0x10));
  }
  iVar1 = FUN_000104a0(unaff_s0 + iVar2);
  if (iVar1 != 0) {
    FUN_000104ac(3);
  }
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s6;
  
  iVar1 = _L0();
  *(uint *)(unaff_s1 + 8) = unaff_s0 + iVar1 & 0x7fffff;
  FUN_0001047e(unaff_s3 + 0x10,0);
  if ((unaff_s2 != 0) || (*(int *)(unaff_s6 + 0x10) == unaff_s1)) {
    FUN_00010496(*(undefined4 *)(unaff_s6 + 0x10));
  }
  iVar1 = FUN_000104a0(unaff_s0 + iVar1);
  if (iVar1 != 0) {
    FUN_000104ac(3);
  }
  return 1;
}



undefined4 FUN_0001047e(void)

{
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s6;
  
  FUN_0001047e();
  if ((unaff_s2 != 0) || (*(int *)(unaff_s6 + 0x10) == unaff_s1)) {
    FUN_00010496(*(undefined4 *)(unaff_s6 + 0x10));
  }
  iVar1 = FUN_000104a0();
  if (iVar1 != 0) {
    FUN_000104ac(3);
  }
  return 1;
}



undefined4 FUN_00010496(void)

{
  int iVar1;
  
  FUN_00010496();
  iVar1 = FUN_000104a0();
  if (iVar1 != 0) {
    FUN_000104ac(3);
  }
  return 1;
}



undefined4 FUN_000104a0(void)

{
  int iVar1;
  
  iVar1 = FUN_000104a0();
  if (iVar1 != 0) {
    FUN_000104ac(3);
  }
  return 1;
}



undefined4 FUN_000104ac(void)

{
  FUN_000104ac();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ble_ke_timer_set(ke_msg_id_t timer_id,ke_task_id_t task_id,uint32_t delay)

{
  bool bVar1;
  undefined2 in_register_0000202a;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 in_register_0000202e;
  uint uVar5;
  
  uVar5 = CONCAT22(in_register_0000202e,task_id);
  uVar2 = CONCAT22(in_register_0000202a,timer_id);
  iVar3 = (*pcRam00000000)(0,uVar2,uVar5,delay,pcRam00000000);
  if (iVar3 == 0) {
    if (delay < 0x400000) {
      if (delay == 0) {
        delay = 1;
      }
    }
    else {
      delay = 0x3fffff;
    }
    bVar1 = false;
    if ((_DAT_00000010 != 0) && (*(ushort *)(_DAT_00000010 + 4) == uVar2)) {
      bVar1 = *(ushort *)(_DAT_00000010 + 6) == uVar5;
    }
    iVar3 = FUN_00010540(0x10,0,uVar2 << 0x10 | uVar5);
    if (iVar3 == 0) {
      iVar3 = FUN_00010550(0xc,0);
      *(ke_msg_id_t *)(iVar3 + 4) = timer_id;
      *(ke_task_id_t *)(iVar3 + 6) = task_id;
    }
    iVar4 = _L0();
    *(uint32_t *)(iVar3 + 8) = delay + iVar4 & 0x7fffff;
    FUN_00010582(0x10,iVar3,0);
    if ((bVar1) || (_DAT_00000010 == iVar3)) {
      FUN_0001059a(_DAT_00000010);
    }
    iVar3 = FUN_000105a4(delay + iVar4);
    if (iVar3 != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_00010540(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  undefined2 unaff_s6;
  
  iVar1 = FUN_00010540();
  if (iVar1 == 0) {
    iVar1 = FUN_00010550(0xc,0);
    *(undefined2 *)(iVar1 + 4) = unaff_s6;
    *(undefined2 *)(iVar1 + 6) = unaff_s5;
  }
  iVar2 = _L0();
  *(uint *)(iVar1 + 8) = unaff_s0 + iVar2 & 0x7fffff;
  FUN_00010582(unaff_s3 + 0x10,iVar1,0);
  if ((unaff_s2 != 0) || (*(int *)(unaff_s4 + 0x10) == iVar1)) {
    FUN_0001059a(*(undefined4 *)(unaff_s4 + 0x10));
  }
  iVar1 = FUN_000105a4(unaff_s0 + iVar2);
  if (iVar1 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010550(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  undefined2 unaff_s6;
  
  iVar1 = FUN_00010550();
  *(undefined2 *)(iVar1 + 4) = unaff_s6;
  *(undefined2 *)(iVar1 + 6) = unaff_s5;
  iVar2 = _L0();
  *(uint *)(iVar1 + 8) = unaff_s0 + iVar2 & 0x7fffff;
  FUN_00010582(unaff_s3 + 0x10,iVar1,0);
  if ((unaff_s2 != 0) || (*(int *)(unaff_s4 + 0x10) == iVar1)) {
    FUN_0001059a(*(undefined4 *)(unaff_s4 + 0x10));
  }
  iVar1 = FUN_000105a4(unaff_s0 + iVar2);
  if (iVar1 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  iVar1 = _L0();
  *(uint *)(unaff_s1 + 8) = unaff_s0 + iVar1 & 0x7fffff;
  FUN_00010582(unaff_s3 + 0x10,0);
  if ((unaff_s2 != 0) || (*(int *)(unaff_s4 + 0x10) == unaff_s1)) {
    FUN_0001059a(*(undefined4 *)(unaff_s4 + 0x10));
  }
  iVar1 = FUN_000105a4(unaff_s0 + iVar1);
  if (iVar1 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010582(void)

{
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  
  FUN_00010582();
  if ((unaff_s2 != 0) || (*(int *)(unaff_s4 + 0x10) == unaff_s1)) {
    FUN_0001059a(*(undefined4 *)(unaff_s4 + 0x10));
  }
  iVar1 = FUN_000105a4();
  if (iVar1 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001059a(void)

{
  int iVar1;
  
  FUN_0001059a();
  iVar1 = FUN_000105a4();
  if (iVar1 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000105a4(void)

{
  int iVar1;
  
  iVar1 = FUN_000105a4();
  if (iVar1 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t _patch_ble_ke_timer_clear(void *pRet,ke_msg_id_t timer_id,ke_task_id_t task_id)

{
  int iVar1;
  int iVar2;
  undefined2 in_register_0000202e;
  undefined2 in_register_00002032;
  
  iVar2 = _DAT_00000010;
  if (_DAT_00000010 != 0) {
    if (((uint)*(ushort *)(_DAT_00000010 + 4) == CONCAT22(in_register_0000202e,timer_id)) &&
       ((uint)*(ushort *)(_DAT_00000010 + 6) == CONCAT22(in_register_00002032,task_id))) {
      FUN_00010610(0x10);
      iVar1 = _DAT_00000010;
      FUN_0001061c(_DAT_00000010);
      if ((iVar1 != 0) && (iVar1 = FUN_00010628(*(undefined4 *)(iVar1 + 8)), iVar1 != 0)) {
        FUN_00010634(3);
      }
    }
    else {
      iVar2 = FUN_00010658(0x10,0,CONCAT22(in_register_00002032,task_id) |
                                  CONCAT22(in_register_0000202e,timer_id) << 0x10);
      if (iVar2 == 0) {
        return 1;
      }
    }
    FUN_0001063e(iVar2);
  }
  return 1;
}



undefined4 FUN_00010610(void)

{
  int unaff_s1;
  int iVar1;
  
  FUN_00010610();
  iVar1 = *(int *)(unaff_s1 + 0x10);
  FUN_0001061c(iVar1);
  if ((iVar1 != 0) && (iVar1 = FUN_00010628(*(undefined4 *)(iVar1 + 8)), iVar1 != 0)) {
    FUN_00010634(3);
  }
  FUN_0001063e();
  return 1;
}



undefined4 FUN_0001061c(void)

{
  int unaff_s1;
  int iVar1;
  
  FUN_0001061c();
  if ((unaff_s1 != 0) && (iVar1 = FUN_00010628(*(undefined4 *)(unaff_s1 + 8)), iVar1 != 0)) {
    FUN_00010634(3);
  }
  FUN_0001063e();
  return 1;
}



undefined4 FUN_00010628(void)

{
  int iVar1;
  
  iVar1 = FUN_00010628();
  if (iVar1 != 0) {
    FUN_00010634(3);
  }
  FUN_0001063e();
  return 1;
}



undefined4 FUN_00010634(void)

{
  FUN_00010634();
  FUN_0001063e();
  return 1;
}



undefined4 FUN_0001063e(void)

{
  FUN_0001063e();
  return 1;
}



undefined4 FUN_00010658(void)

{
  int iVar1;
  
  iVar1 = FUN_00010658();
  if (iVar1 != 0) {
    FUN_0001063e(iVar1);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ble_ke_timer_clear(ke_msg_id_t timer_id,ke_task_id_t task_id)

{
  undefined2 in_register_0000202a;
  uint uVar1;
  int iVar2;
  undefined2 in_register_0000202e;
  uint uVar3;
  
  uVar3 = CONCAT22(in_register_0000202e,task_id);
  uVar1 = CONCAT22(in_register_0000202a,timer_id);
  iVar2 = (*pcRam00000000)(0,uVar1,uVar3,pcRam00000000);
  if ((iVar2 == 0) && (_DAT_00000010 != 0)) {
    if ((*(ushort *)(_DAT_00000010 + 4) == uVar1) && (*(ushort *)(_DAT_00000010 + 6) == uVar3)) {
      FUN_000106b8(0x10);
      iVar2 = _DAT_00000010;
      FUN_000106c6(_DAT_00000010);
      if ((iVar2 != 0) && (iVar2 = FUN_000106d2(*(undefined4 *)(iVar2 + 8)), iVar2 != 0)) {
        FUN_000106de(3);
      }
    }
    else {
      iVar2 = FUN_00010710(0x10,0,uVar1 << 0x10 | uVar3);
      if (iVar2 == 0) {
        return;
      }
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_000106b8(void)

{
  int iVar1;
  int unaff_s2;
  
  FUN_000106b8();
  iVar1 = *(int *)(unaff_s2 + 0x10);
  FUN_000106c6(iVar1);
  if ((iVar1 != 0) && (iVar1 = FUN_000106d2(*(undefined4 *)(iVar1 + 8)), iVar1 != 0)) {
    FUN_000106de(3);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106c6(void)

{
  int unaff_s1;
  int iVar1;
  
  FUN_000106c6();
  if ((unaff_s1 != 0) && (iVar1 = FUN_000106d2(*(undefined4 *)(unaff_s1 + 8)), iVar1 != 0)) {
    FUN_000106de(3);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106d2(void)

{
  int iVar1;
  
  iVar1 = FUN_000106d2();
  if (iVar1 != 0) {
    FUN_000106de(3);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106de(void)

{
  FUN_000106de();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010710(void)

{
  int iVar1;
  
  iVar1 = FUN_00010710();
  if (iVar1 != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t _patch_ble_ke_timer_active(void *pRet,ke_msg_id_t timer_id,ke_task_id_t task_id)

{
  undefined2 in_register_0000202e;
  undefined2 in_register_00002032;
  int *piVar1;
  
  piVar1 = (int *)_DAT_00000010;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      *(undefined *)pRet = 0;
      return 1;
    }
    if (((uint)*(ushort *)(piVar1 + 1) == CONCAT22(in_register_0000202e,timer_id)) &&
       ((uint)*(ushort *)((int)piVar1 + 6) == CONCAT22(in_register_00002032,task_id))) break;
    piVar1 = (int *)*piVar1;
  }
  *(undefined *)pRet = 1;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool ble_ke_timer_active(ke_msg_id_t timer_id,ke_task_id_t task_id)

{
  undefined2 in_register_0000202a;
  int iVar1;
  undefined2 in_register_0000202e;
  int *piVar2;
  undefined auStack17 [4];
  _Bool result;
  
  iVar1 = (*pcRam00000000)(auStack17,CONCAT22(in_register_0000202a,timer_id),
                           CONCAT22(in_register_0000202e,task_id),pcRam00000000);
  piVar2 = _DAT_00000010;
  if (iVar1 == 0) {
    while (piVar2 != (int *)0x0) {
      if (((uint)*(ushort *)(piVar2 + 1) == CONCAT22(in_register_0000202a,timer_id)) &&
         ((uint)*(ushort *)((int)piVar2 + 6) == CONCAT22(in_register_0000202e,task_id))) {
        return true;
      }
      piVar2 = (int *)*piVar2;
    }
    auStack17[0] = 0;
  }
  return (_Bool)auStack17[0];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ble_ke_timer_adjust_all(uint32_t delay)

{
  int *piVar1;
  
  piVar1 = (int *)_DAT_00000010;
  while (piVar1 != (int *)0x0) {
    piVar1[2] = piVar1[2] + delay;
    piVar1 = (int *)*piVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t _patch_ble_ke_timer_target_get(void *pRet)

{
  *(undefined4 *)pRet = 0xffffffff;
  if (_DAT_00000010 != 0) {
    *(int *)pRet = *(int *)(_DAT_00000010 + 8) << 4;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t ble_ke_timer_target_get(void)

{
  int iVar1;
  uint32_t uStack20;
  uint32_t res;
  
  iVar1 = (*pcRam00000000)(&uStack20,pcRam00000000);
  if (iVar1 == 0) {
    uStack20 = 0xffffffff;
    if (_DAT_00000010 != 0) {
      uStack20 = *(int *)(_DAT_00000010 + 8) << 4;
    }
  }
  return uStack20;
}


