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
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef ushort __uint16_t;

typedef long __int32_t;

typedef ulong __uint32_t;

typedef uchar __uint8_t;

typedef char __int8_t;

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

typedef __uint8_t uint8_t;

typedef __int8_t int8_t;

typedef __uint32_t uint32_t;

typedef __uint16_t uint16_t;

struct rwip_rf_api { // DWARF DIE: be8
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

struct rwip_prio { // DWARF DIE: d6c
    uint8_t value;
    uint8_t increment;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictdd_for___value anon_union.conflictdd_for___value, *Panon_union.conflictdd_for___value;

typedef uint wint_t;

union anon_union.conflictdd_for___value { // DWARF DIE: dd
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 10f
    int __count;
    union anon_union.conflictdd_for___value __value;
};

typedef union anon_union.conflictdd anon_union.conflictdd, *Panon_union.conflictdd;

union anon_union.conflictdd { // DWARF DIE: dd
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

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

typedef enum anon_enum_8.conflict995 {
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflict995;

typedef struct bd_addr bd_addr, *Pbd_addr;

struct bd_addr { // DWARF DIE: acd
    uint8_t addr[6];
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8b7_for__new anon_union.conflict8b7_for__new, *Panon_union.conflict8b7_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict72b anon_struct.conflict72b, *Panon_struct.conflict72b;

typedef struct anon_struct.conflict870 anon_struct.conflict870, *Panon_struct.conflict870;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 6e2
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 1d5
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

struct anon_struct.conflict72b { // DWARF DIE: 72b
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

struct anon_struct.conflict870 { // DWARF DIE: 870
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8b7_for__new { // DWARF DIE: 8b7
    struct anon_struct.conflict72b _reent;
    struct anon_struct.conflict870 _unused;
};

struct _Bigint { // DWARF DIE: 165
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 69d
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 258
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2ad
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 30d
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 33b
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

struct _reent { // DWARF DIE: 4a7
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
    union anon_union.conflict8b7_for__new _new;
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

struct __locale_t { // DWARF DIE: 8ec
};

typedef union anon_union.conflict8b7 anon_union.conflict8b7, *Panon_union.conflict8b7;

union anon_union.conflict8b7 { // DWARF DIE: 8b7
    struct anon_struct.conflict72b _reent;
    struct anon_struct.conflict870 _unused;
};

typedef __int32_t int32_t;

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




// DWARF DIE: fa1

void rf_force_agc_enable(_Bool en)

{
  return;
}



// DWARF DIE: f00

uint8_t rf_txpwr_dbm_get(uint8_t txpwr_idx,uint8_t modulation)

{
  return uRam00000000;
}



// DWARF DIE: ed5

int8_t rf_rssi_convert(uint8_t rssi_reg)

{
  return (int8_t)('\x02' - rssi_reg);
}



// DWARF DIE: eaa

uint32_t rf_reg_rd(uint16_t addr)

{
  return 0;
}



// DWARF DIE: e77

void rf_reg_wr(uint16_t addr,uint32_t value)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: e36

void rf_sleep(void)

{
  _DAT_28000030 = _DAT_28000030 | 7;
  return;
}



// DWARF DIE: f6d

_Bool rf_txpwr_dec(uint8_t dec)

{
  int extraout_a0;
  
  FUN_0001004e();
  if (extraout_a0 != 0) {
    cRam00000000 -= dec;
  }
  return SUB41(extraout_a0,0);
}



void FUN_0001004e(void)

{
  char *unaff_s0;
  char unaff_s1;
  int extraout_a0;
  
  FUN_0001004e();
  if (extraout_a0 != 0) {
    *unaff_s0 = *unaff_s0 - unaff_s1;
  }
  return;
}



// DWARF DIE: f39

_Bool rf_txpwr_inc(uint8_t inc)

{
  int extraout_a0;
  
  FUN_0001008e();
  if (extraout_a0 != 0) {
    cRam00000000 = inc + cRam00000000;
  }
  return SUB41(extraout_a0,0);
}



void FUN_0001008e(void)

{
  char *unaff_s0;
  char unaff_s1;
  int extraout_a0;
  
  FUN_0001008e();
  if (extraout_a0 != 0) {
    *unaff_s0 = unaff_s1 + *unaff_s0;
  }
  return;
}



// DWARF DIE: 12aa

void rf_txpwr_max_set(int8_t txpwr_dbm)

{
  bool bVar1;
  int extraout_a0;
  
  bVar1 = iRam00000000 == '\x7f';
  iRam00000000 = txpwr_dbm;
  if (bVar1) {
    iRam00000000 = '\x0f';
  }
  FUN_000100da();
  if (extraout_a0 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100da(void)

{
  int extraout_a0;
  
  FUN_000100da();
  if (extraout_a0 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: fc5

void rf_reset(void)

{
  _DAT_28000080 = _DAT_28000080 & 0x80000000 | 0x3c0042;
  _DAT_280001a4 = 10;
  _DAT_280001a8 = 0x7d;
  _DAT_280001ac = _DAT_280001ac & 0xffffffc0 | 0x28;
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



// DWARF DIE: 1197

void ble_rf_set_pwr_offset(int8_t offset)

{
  iRam00000000 = offset;
  return;
}



// DWARF DIE: 1128

void ble_controller_set_tx_pwr(int ble_tx_power)

{
  int extraout_a0;
  
  uRam00000000 = (undefined)ble_tx_power;
  FUN_000101b2();
  if (extraout_a0 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000101b2(void)

{
  int extraout_a0;
  
  FUN_000101b2();
  if (extraout_a0 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: e0b

void ble_rf_init(rwip_rf_api *api)

{
  api->reg_rd = (anon_subr_uint32_t_uint16_t_for_reg_rd *)0x0;
  api->reg_wr = (anon_subr_void_uint16_t_uint32_t_for_reg_wr *)0x0;
  api->txpwr_dbm_get = (anon_subr_uint8_t_uint8_t_uint8_t_for_txpwr_dbm_get *)0x0;
  api->txpwr_max = '\x0f';
  api->txpwr_max_set = (anon_subr_void_int8_t_for_txpwr_max_set *)0x0;
  api->txpwr_inc = (anon_subr__Bool_uint8_t_for_txpwr_inc *)0x0;
  api->txpwr_dec = (anon_subr__Bool_uint8_t_for_txpwr_dec *)0x0;
  api->sleep = (intCallback_Type *)0x0;
  api->reset = (intCallback_Type *)0x0;
  api->force_agc_enable = (anon_subr_void__Bool_for_force_agc_enable *)0x0;
  api->rssi_convert = (anon_subr_int8_t_uint8_t_for_rssi_convert *)0x0;
  return;
}


