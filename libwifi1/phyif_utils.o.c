typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct __sFILE __sFILE, *P__sFILE;

typedef int _ssize_t;

typedef struct _reent _reent, *P_reent;

typedef long _fpos_t;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8a6_for__new anon_union.conflict8a6_for__new, *Panon_union.conflict8a6_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict71a anon_struct.conflict71a, *Panon_struct.conflict71a;

typedef struct anon_struct.conflict85f anon_struct.conflict85f, *Panon_struct.conflict85f;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflictcc_for___value anon_union.conflictcc_for___value, *Panon_union.conflictcc_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

union anon_union.conflictcc_for___value {
    wint_t __wch;
    uchar __wchb[4];
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

struct _glue {
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
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

struct _mbstate_t {
    int __count;
    union anon_union.conflictcc_for___value __value;
};

struct anon_struct.conflict71a {
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

struct anon_struct.conflict85f {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8a6_for__new {
    struct anon_struct.conflict71a _reent;
    struct anon_struct.conflict85f _unused;
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

struct __locale_t {
};

typedef union anon_union.conflict8a6 anon_union.conflict8a6, *Panon_union.conflict8a6;

union anon_union.conflict8a6 {
    struct anon_struct.conflict71a _reent;
    struct anon_struct.conflict85f _unused;
};

typedef short __int16_t;

typedef long __int32_t;

typedef ulong __uint32_t;

typedef char __int8_t;

typedef union anon_union.conflictcc anon_union.conflictcc, *Panon_union.conflictcc;

union anon_union.conflictcc {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct phyif_utils_recvtable_t phyif_utils_recvtable_t, *Pphyif_utils_recvtable_t;

typedef __uint32_t uint32_t;

struct phyif_utils_recvtable_t {
    uint32_t recvtable1;
    uint32_t recvtable2;
    uint32_t recvtable3;
    uint32_t recvtable4;
    uint32_t recvtable5;
    uint32_t recvtable6;
};

typedef __int16_t int16_t;

typedef __int8_t int8_t;

typedef __int32_t int32_t;

typedef struct phyif_utils_recvtable_priv_t phyif_utils_recvtable_priv_t, *Pphyif_utils_recvtable_priv_t;

struct phyif_utils_recvtable_priv_t {
    uint32_t leg_length:12;
    uint32_t leg_rate:4;
    uint32_t ht_length:16;
    uint32_t _ht_length:4;
    uint32_t short_gi:1;
    uint32_t stbc:2;
    uint32_t smoothing:1;
    uint32_t mcs:7;
    uint32_t pre_type:1;
    uint32_t format_mod:3;
    uint32_t ch_bw:2;
    uint32_t n_sts:3;
    uint32_t lsig_valid:1;
    uint32_t sounding:1;
    uint32_t num_extn_ss:2;
    uint32_t aggregation:1;
    uint32_t fec_coding:1;
    uint32_t dyn_bw:1;
    uint32_t doze_not_allowed:1;
    uint32_t antenna_set:8;
    uint32_t partial_aid:9;
    uint32_t group_id:6;
    uint32_t reserved_1c:1;
    int32_t rssi1:8;
    int32_t rssi2:8;
    int32_t rssi3:8;
    int32_t rssi4:8;
    uint32_t reserved_1d:8;
    uint32_t rcpi:8;
    uint32_t evm1:8;
    uint32_t evm2:8;
    uint32_t evm3:8;
    uint32_t evm4:8;
    uint32_t reserved2b_1:8;
    uint32_t reserved2b_2:8;
    uint32_t reserved2b_3:8;
};

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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int phyif_utils_decode(phyif_utils_recvtable_t *vec,int8_t *ppm)

{
  char cVar1;
  int8_t iVar2;
  
  cVar1 = *(char *)((int)&vec->recvtable5 + 3);
  if (((*(ushort *)((int)&vec->recvtable2 + 2) & 7) < 2) && ((vec->recvtable1 >> 0xc & 0xf) < 4)) {
    FUN_00010058(-(int)cVar1);
    FUN_0001006c(uRam00000000,_DAT_00000004);
    iVar2 = _L0();
  }
  else {
    iVar2 = (int8_t)((int)CONCAT11(*(undefined *)&vec->recvtable6,cVar1) / 0x7a);
  }
  *ppm = iVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010058(void)

{
  undefined *unaff_s0;
  undefined uVar1;
  
  FUN_00010058();
  FUN_0001006c(uRam00000000,_DAT_00000004);
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  return 0;
}



undefined4 FUN_0001006c(void)

{
  undefined *unaff_s0;
  undefined uVar1;
  
  FUN_0001006c();
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  return 0;
}



undefined4 _L0(void)

{
  undefined *unaff_s0;
  undefined uVar1;
  
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  return 0;
}


