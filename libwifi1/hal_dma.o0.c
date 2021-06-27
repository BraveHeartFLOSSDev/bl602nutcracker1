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
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef ushort __uint16_t;

typedef long __int32_t;

typedef ulong __uint32_t;

typedef uchar __uint8_t;

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictcc_for___value anon_union.conflictcc_for___value, *Panon_union.conflictcc_for___value;

typedef uint wint_t;

union anon_union.conflictcc_for___value { // DWARF DIE: cc
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: fe
    int __count;
    union anon_union.conflictcc_for___value __value;
};

typedef union anon_union.conflictcc anon_union.conflictcc, *Panon_union.conflictcc;

union anon_union.conflictcc { // DWARF DIE: cc
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef __uint32_t uint32_t;

struct la_mem_format { // DWARF DIE: e39
    uint32_t word[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef __uint16_t uint16_t;

struct mac_addr { // DWARF DIE: a1c
    uint16_t array[3];
};

typedef enum anon_enum_8.conflict9a4 {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_VI=2,
    AC_VO=3,
    DMA_DL=0,
    DMA_MAX=2,
    DMA_UL=1,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_DATA_RX=1,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_MAX=4,
    IPC_DMA_LLI_CFM_TX=8,
    IPC_DMA_LLI_DATA_AC0_TX=0,
    IPC_DMA_LLI_DATA_AC1_TX=1,
    IPC_DMA_LLI_DATA_AC2_TX=2,
    IPC_DMA_LLI_DATA_AC3_TX=3,
    IPC_DMA_LLI_DATA_BCN_TX=4,
    IPC_DMA_LLI_DATA_RX0=5,
    IPC_DMA_LLI_DBG=7,
    IPC_DMA_LLI_DBG_DUMP=10,
    IPC_DMA_LLI_GP_DL=9,
    IPC_DMA_LLI_GP_UL=11,
    IPC_DMA_LLI_MAX=12,
    IPC_DMA_LLI_MSG=6,
    KE_EVT_DUMP_STATISTIC=26,
    KE_EVT_GP_DMA_DL=25,
    KE_EVT_GP_DMA_UL=3,
    KE_EVT_HW_IDLE=8,
    KE_EVT_IPC_EMB_MSG=6,
    KE_EVT_IPC_EMB_TXDESC_AC0=24,
    KE_EVT_IPC_EMB_TXDESC_AC1=23,
    KE_EVT_IPC_EMB_TXDESC_AC2=22,
    KE_EVT_IPC_EMB_TXDESC_AC3=21,
    KE_EVT_IPC_EMB_TXDESC_BCN=20,
    KE_EVT_IRQ_UP_BH=1,
    KE_EVT_IRQ_USR=2,
    KE_EVT_KE_MESSAGE=7,
    KE_EVT_KE_TIMER=5,
    KE_EVT_MAX=27,
    KE_EVT_MM_TIMER=4,
    KE_EVT_PRIMARY_TBTT=9,
    KE_EVT_RESET=0,
    KE_EVT_RXREADY=13,
    KE_EVT_RXUPLOADED=11,
    KE_EVT_RXUREADY=12,
    KE_EVT_SECONDARY_TBTT=10,
    KE_EVT_TXCFM_AC0=19,
    KE_EVT_TXCFM_AC1=18,
    KE_EVT_TXCFM_AC2=17,
    KE_EVT_TXCFM_AC3=16,
    KE_EVT_TXCFM_BCN=15,
    KE_EVT_TXFRAME_CFM=14,
    TID_0=0,
    TID_1=1,
    TID_2=2,
    TID_3=3,
    TID_4=4,
    TID_5=5,
    TID_6=6,
    TID_7=7,
    TID_MAX=9,
    TID_MGT=8
} anon_enum_8.conflict9a4;

typedef struct dma_desc dma_desc, *Pdma_desc;

struct dma_desc { // DWARF DIE: cbd
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: d11
    struct dma_desc * last_dma[4];
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: e71
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct co_list co_list, *Pco_list;

typedef struct mblock_free mblock_free, *Pmblock_free;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: abc
    struct co_list_hdr * next;
};

struct co_list { // DWARF DIE: add
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mblock_free { // DWARF DIE: b65
};

struct ke_env_tag { // DWARF DIE: b16
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8a6_for__new anon_union.conflict8a6_for__new, *Panon_union.conflict8a6_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict71a anon_struct.conflict71a, *Panon_struct.conflict71a;

typedef struct anon_struct.conflict85f anon_struct.conflict85f, *Panon_struct.conflict85f;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 154
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 6d1
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 68c
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __tm { // DWARF DIE: 1c4
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

struct anon_struct.conflict71a { // DWARF DIE: 71a
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

struct anon_struct.conflict85f { // DWARF DIE: 85f
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8a6_for__new { // DWARF DIE: 8a6
    struct anon_struct.conflict71a _reent;
    struct anon_struct.conflict85f _unused;
};

struct _on_exit_args { // DWARF DIE: 247
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 29c
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 2fc
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 32a
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

struct _reent { // DWARF DIE: 496
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
    union anon_union.conflict8a6_for__new _new;
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

struct __locale_t { // DWARF DIE: 8db
};

typedef union anon_union.conflict8a6 anon_union.conflict8a6, *Panon_union.conflict8a6;

union anon_union.conflict8a6 { // DWARF DIE: 8a6
    struct anon_struct.conflict71a _reent;
    struct anon_struct.conflict85f _unused;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: dd8
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: d91
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef __uint8_t uint8_t;

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
// DWARF DIE: 1064

void hal_dma_init(void)

{
  _L0();
  _DAT_00000018 = (undefined2)_DAT_44a000a4;
  _L0();
  _DAT_0000001a = (short)_DAT_44a000ac;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(short *)(unaff_s0 + 0x18) = (short)_DAT_44a000a4;
  _L0();
  *(short *)(unaff_s0 + 0x1a) = (short)_DAT_44a000ac;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _L0();
  *(short *)(unaff_s0 + 0x1a) = (short)*(undefined4 *)(unaff_s1 + 0xac);
  return;
}



// DWARF DIE: f86

void hal_dma_push(hal_dma_desc_tag *desc,int type)

{
  if (desc->cb == (cb_dma_func_ptr *)0x0) {
    desc->dma_desc->ctrl = 0;
  }
  else {
    desc->dma_desc->ctrl = (ushort)*(byte *)type << 8 | *(byte *)type | 0x10 | 0x1000;
    FUN_0001008c();
  }
  FUN_000100a0();
  if ((type != 0) && (type != 1)) {
    do {
      FUN_000100b8(1000);
      FUN_000100c4();
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001008c(void)

{
  int unaff_s1;
  
  FUN_0001008c();
  FUN_000100a0();
  if ((unaff_s1 != 0) && (unaff_s1 != 1)) {
    do {
      FUN_000100b8(1000);
      FUN_000100c4();
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100a0(void)

{
  int unaff_s1;
  
  FUN_000100a0();
  if ((unaff_s1 != 0) && (unaff_s1 != 1)) {
    do {
      FUN_000100b8(1000);
      FUN_000100c4();
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100b8(undefined4 param_1)

{
  do {
    FUN_000100b8(param_1);
    FUN_000100c4();
    param_1 = 1000;
  } while( true );
}



void FUN_000100c4(void)

{
  do {
    FUN_000100c4();
    FUN_000100b8(1000);
  } while( true );
}



// DWARF DIE: ef0

void hal_dma_evt(int dma_queue)

{
  int extraout_a0;
  
  if (dma_queue != 0) {
    _L0();
    return;
  }
  _L0();
  while (FUN_0001011a(), extraout_a0 != 0) {
    if (*(code **)(extraout_a0 + 8) != (code *)0x0) {
      (**(code **)(extraout_a0 + 8))(*(undefined4 *)(extraout_a0 + 0xc),0);
    }
  }
  return;
}



void _L0(void)

{
  int extraout_a0;
  
  _L0();
  while (FUN_0001011a(), extraout_a0 != 0) {
    if (*(code **)(extraout_a0 + 8) != (code *)0x0) {
      (**(code **)(extraout_a0 + 8))(*(undefined4 *)(extraout_a0 + 0xc));
    }
  }
  return;
}



void FUN_0001011a(void)

{
  int extraout_a0;
  
  while (FUN_0001011a(), extraout_a0 != 0) {
    if (*(code **)(extraout_a0 + 8) != (code *)0x0) {
      (**(code **)(extraout_a0 + 8))(*(undefined4 *)(extraout_a0 + 0xc));
    }
  }
  return;
}


