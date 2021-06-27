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

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict9c_for___value anon_union.conflict9c_for___value, *Panon_union.conflict9c_for___value;

typedef uint wint_t;

union anon_union.conflict9c_for___value { // DWARF DIE: 9c
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: ce
    int __count;
    union anon_union.conflict9c_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflict9c anon_union.conflict9c, *Panon_union.conflict9c;

union anon_union.conflict9c { // DWARF DIE: 9c
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong uint32_t;

struct la_mem_format { // DWARF DIE: 9fc
    uint32_t word[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr { // DWARF DIE: 95c
    uint16_t array[3];
};

typedef uchar uint8_t;

typedef long int32_t;

typedef ulong UINT32;

typedef uchar UINT8;

typedef short SINT16;

typedef ulonglong UINT64;

typedef char SINT8;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: a34
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict876_for__new anon_union.conflict876_for__new, *Panon_union.conflict876_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict6ea anon_struct.conflict6ea, *Panon_struct.conflict6ea;

typedef struct anon_struct.conflict82f anon_struct.conflict82f, *Panon_struct.conflict82f;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 124
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 6a1
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 65c
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 217
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 26c
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 2cc
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 2fa
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

struct anon_struct.conflict82f { // DWARF DIE: 82f
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct __tm { // DWARF DIE: 194
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

struct anon_struct.conflict6ea { // DWARF DIE: 6ea
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

union anon_union.conflict876_for__new { // DWARF DIE: 876
    struct anon_struct.conflict6ea _reent;
    struct anon_struct.conflict82f _unused;
};

struct _reent { // DWARF DIE: 466
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
    union anon_union.conflict876_for__new _new;
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

struct __locale_t { // DWARF DIE: 8ab
};

typedef union anon_union.conflict876 anon_union.conflict876, *Panon_union.conflict876;

union anon_union.conflict876 { // DWARF DIE: 876
    struct anon_struct.conflict6ea _reent;
    struct anon_struct.conflict82f _unused;
};

typedef int32_t BaseType_t;

typedef struct Bl_SHA1_CTX Bl_SHA1_CTX, *PBl_SHA1_CTX;

struct Bl_SHA1_CTX { // DWARF DIE: ac0
    UINT32 Intermediate_Hash[5];
    UINT32 Length_Low;
    UINT32 Length_High;
    UINT32 Scratch[16];
    UINT8 Message_Block[64];
    SINT16 Message_Block_Index;
    UINT8 Computed;
    UINT8 Corrupted;
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




// DWARF DIE: d2f

void Bl_hmac_sha1(uchar **ppText,int *pTextLen,int textNum,uchar *key,int key_len,uchar *output,
                 int outputLen)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uStack448;
  uchar pBuf [400];
  
  if (0x40 < key_len) {
    _LVL3();
    _LVL5();
    _LVL7();
  }
  FUN_00010072();
  FUN_00010080();
  puVar1 = &uStack448;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x36363636;
    puVar1[1] = puVar1[1] ^ 0x36363636;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)(pBuf + 0x3c));
  _LVL14();
  _LVL16();
  for (iVar3 = 0; iVar3 < textNum; iVar3 += 1) {
    _L0(pBuf + 0x50,ppText[iVar3],pTextLen[iVar3]);
  }
  _LVL19();
  FUN_000100e4();
  FUN_000100f2();
  puVar1 = &uStack448;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x5c5c5c5c;
    puVar1[1] = puVar1[1] ^ 0x5c5c5c5c;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)(pBuf + 0x3c));
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void _LVL3(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  _LVL3();
  _LVL5();
  _LVL7();
  FUN_00010072();
  FUN_00010080();
  puVar1 = (uint *)register0x00002008;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x36363636;
    puVar1[1] = puVar1[1] ^ 0x36363636;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)&stack0x00000040);
  _LVL14();
  _LVL16();
  for (iVar3 = 0; iVar3 < unaff_s7; iVar3 += 1) {
    _L0(&stack0x00000054,*(undefined4 *)(iVar3 * 4 + unaff_s8),*(undefined4 *)(unaff_s9 + iVar3 * 4)
       );
  }
  _LVL19();
  FUN_000100e4();
  FUN_000100f2();
  puVar1 = (uint *)register0x00002008;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x5c5c5c5c;
    puVar1[1] = puVar1[1] ^ 0x5c5c5c5c;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)&stack0x00000040);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void _LVL5(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  _LVL5();
  _LVL7();
  FUN_00010072();
  FUN_00010080();
  puVar1 = (uint *)register0x00002008;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x36363636;
    puVar1[1] = puVar1[1] ^ 0x36363636;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)&stack0x00000040);
  _LVL14();
  _LVL16();
  for (iVar3 = 0; iVar3 < unaff_s7; iVar3 += 1) {
    _L0(&stack0x00000054,*(undefined4 *)(iVar3 * 4 + unaff_s8),*(undefined4 *)(unaff_s9 + iVar3 * 4)
       );
  }
  _LVL19();
  FUN_000100e4();
  FUN_000100f2();
  puVar1 = (uint *)register0x00002008;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x5c5c5c5c;
    puVar1[1] = puVar1[1] ^ 0x5c5c5c5c;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)&stack0x00000040);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void _LVL7(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  _LVL7();
  FUN_00010072();
  FUN_00010080();
  puVar1 = (uint *)register0x00002008;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x36363636;
    puVar1[1] = puVar1[1] ^ 0x36363636;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)&stack0x00000040);
  _LVL14();
  _LVL16();
  for (iVar3 = 0; iVar3 < unaff_s7; iVar3 += 1) {
    _L0(&stack0x00000054,*(undefined4 *)(iVar3 * 4 + unaff_s8),*(undefined4 *)(unaff_s9 + iVar3 * 4)
       );
  }
  _LVL19();
  FUN_000100e4();
  FUN_000100f2();
  puVar1 = (uint *)register0x00002008;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x5c5c5c5c;
    puVar1[1] = puVar1[1] ^ 0x5c5c5c5c;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)&stack0x00000040);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void FUN_00010072(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  FUN_00010072();
  FUN_00010080();
  puVar1 = (uint *)register0x00002008;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x36363636;
    puVar1[1] = puVar1[1] ^ 0x36363636;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)&stack0x00000040);
  _LVL14();
  _LVL16();
  for (iVar3 = 0; iVar3 < unaff_s7; iVar3 += 1) {
    _L0(&stack0x00000054,*(undefined4 *)(iVar3 * 4 + unaff_s8),*(undefined4 *)(unaff_s9 + iVar3 * 4)
       );
  }
  _LVL19();
  FUN_000100e4();
  FUN_000100f2();
  puVar1 = (uint *)register0x00002008;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x5c5c5c5c;
    puVar1[1] = puVar1[1] ^ 0x5c5c5c5c;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)&stack0x00000040);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void FUN_00010080(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  FUN_00010080();
  puVar1 = (uint *)register0x00002008;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x36363636;
    puVar1[1] = puVar1[1] ^ 0x36363636;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)&stack0x00000040);
  _LVL14();
  _LVL16();
  for (iVar3 = 0; iVar3 < unaff_s7; iVar3 += 1) {
    _L0(&stack0x00000054,*(undefined4 *)(iVar3 * 4 + unaff_s8),*(undefined4 *)(unaff_s9 + iVar3 * 4)
       );
  }
  _LVL19();
  FUN_000100e4();
  FUN_000100f2();
  puVar1 = (uint *)register0x00002008;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ 0x5c5c5c5c;
    puVar1[1] = puVar1[1] ^ 0x5c5c5c5c;
    puVar1 = puVar2;
  } while (puVar2 != (uint *)&stack0x00000040);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void _LVL14(void)

{
  uint *unaff_s0;
  uint *puVar1;
  int iVar2;
  uint *unaff_s4;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  _LVL14();
  _LVL16();
  for (iVar2 = 0; iVar2 < unaff_s7; iVar2 += 1) {
    _L0(&stack0x00000054,*(undefined4 *)(iVar2 * 4 + unaff_s8),*(undefined4 *)(unaff_s9 + iVar2 * 4)
       );
  }
  _LVL19();
  FUN_000100e4();
  FUN_000100f2();
  do {
    puVar1 = unaff_s0 + 2;
    *unaff_s0 = *unaff_s0 ^ 0x5c5c5c5c;
    unaff_s0[1] = unaff_s0[1] ^ 0x5c5c5c5c;
    unaff_s0 = puVar1;
  } while (puVar1 != unaff_s4);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void _LVL16(void)

{
  uint *unaff_s0;
  uint *puVar1;
  int iVar2;
  uint *unaff_s4;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  _LVL16();
  for (iVar2 = 0; iVar2 < unaff_s7; iVar2 += 1) {
    _L0(&stack0x00000054,*(undefined4 *)(iVar2 * 4 + unaff_s8),*(undefined4 *)(unaff_s9 + iVar2 * 4)
       );
  }
  _LVL19();
  FUN_000100e4();
  FUN_000100f2();
  do {
    puVar1 = unaff_s0 + 2;
    *unaff_s0 = *unaff_s0 ^ 0x5c5c5c5c;
    unaff_s0[1] = unaff_s0[1] ^ 0x5c5c5c5c;
    unaff_s0 = puVar1;
  } while (puVar1 != unaff_s4);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void _LVL19(void)

{
  uint *unaff_s0;
  uint *puVar1;
  uint *unaff_s4;
  
  _LVL19();
  FUN_000100e4();
  FUN_000100f2();
  do {
    puVar1 = unaff_s0 + 2;
    *unaff_s0 = *unaff_s0 ^ 0x5c5c5c5c;
    unaff_s0[1] = unaff_s0[1] ^ 0x5c5c5c5c;
    unaff_s0 = puVar1;
  } while (puVar1 != unaff_s4);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void FUN_000100e4(void)

{
  uint *unaff_s0;
  uint *puVar1;
  uint *unaff_s4;
  
  FUN_000100e4();
  FUN_000100f2();
  do {
    puVar1 = unaff_s0 + 2;
    *unaff_s0 = *unaff_s0 ^ 0x5c5c5c5c;
    unaff_s0[1] = unaff_s0[1] ^ 0x5c5c5c5c;
    unaff_s0 = puVar1;
  } while (puVar1 != unaff_s4);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void FUN_000100f2(void)

{
  uint *unaff_s0;
  uint *puVar1;
  uint *unaff_s4;
  
  FUN_000100f2();
  do {
    puVar1 = unaff_s0 + 2;
    *unaff_s0 = *unaff_s0 ^ 0x5c5c5c5c;
    unaff_s0[1] = unaff_s0[1] ^ 0x5c5c5c5c;
    unaff_s0 = puVar1;
  } while (puVar1 != unaff_s4);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void _LVL24(void)

{
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void _LVL26(void)

{
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void _LVL28(void)

{
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



void _LVL30(void)

{
  _LVL30();
  FUN_00010154();
  return;
}



void FUN_00010154(void)

{
  FUN_00010154();
  return;
}



void _L0(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *unaff_s0;
  int unaff_s3;
  uint *unaff_s4;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  for (; _L0(param_1,param_2,param_3), unaff_s3 < unaff_s7; unaff_s3 += 1) {
    param_3 = *(undefined4 *)(unaff_s9 + unaff_s3 * 4);
    param_2 = *(undefined4 *)(unaff_s3 * 4 + unaff_s8);
    param_1 = &stack0x00000054;
  }
  _LVL19();
  FUN_000100e4();
  FUN_000100f2();
  do {
    puVar1 = unaff_s0 + 2;
    *unaff_s0 = *unaff_s0 ^ 0x5c5c5c5c;
    unaff_s0[1] = unaff_s0[1] ^ 0x5c5c5c5c;
    unaff_s0 = puVar1;
  } while (puVar1 != unaff_s4);
  _LVL24();
  _LVL26();
  _LVL28();
  _LVL30();
  FUN_00010154();
  return;
}



// DWARF DIE: b6e

void Bl_PRF(uchar *key,int key_len,uchar *prefix,int prefix_len,uchar *data,int data_len,
           uchar *output,int len)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack176;
  int total_len;
  uchar *pText;
  UINT8 prf_input [120];
  
  total_len = (int)&pText;
  _L0();
  if (prefix == (uchar *)0x0) {
    FUN_00010264();
    iStack176 = data_len;
  }
  else {
    FUN_000101f0();
    iStack176 = prefix_len + 1 + data_len;
    prf_input[prefix_len + -4] = '\0';
    _L0();
  }
  prf_input[iStack176 + -4] = '\0';
  iVar3 = 0;
  for (iVar2 = 0; iVar1 = (iVar2 * -0x14 + len) * 0x1000000 >> 0x18, iVar2 < (len + 0x13) / 0x14;
      iVar2 += 1) {
    if (0x14 < iVar1) {
      iVar1 = 0x14;
    }
    FUN_0001028c((undefined *)&total_len,1,(int)(output + iVar3),(int)(char)iVar1);
    iVar3 += (char)iVar1;
    prf_input[iStack176 + -4] = prf_input[iStack176 + -4] + '\x01';
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s4;
  int iVar3;
  int unaff_s6;
  int iVar4;
  int unaff_s8;
  
  _L0();
  if (unaff_s8 == 0) {
    FUN_00010264();
  }
  else {
    FUN_000101f0();
    unaff_s6 = unaff_s0 + 1 + unaff_s6;
    (&stack0x00000008)[unaff_s0] = 0;
    _L0();
  }
  iVar1 = unaff_s6 + 1;
  (&stack0x00000008)[unaff_s6] = 0;
  iVar4 = 0;
  for (iVar3 = 0; iVar2 = (iVar3 * -0x14 + unaff_s1) * 0x1000000 >> 0x18,
      iVar3 < (unaff_s1 + 0x13) / 0x14; iVar3 += 1) {
    if (0x14 < iVar2) {
      iVar2 = 0x14;
    }
    FUN_0001028c(&stack0x00000004,1,unaff_s4 + iVar4,(int)(char)iVar2);
    iVar4 += (char)iVar2;
    (&stack0x00000007)[iVar1] = (&stack0x00000007)[iVar1] + '\x01';
  }
  return;
}



void FUN_000101f0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s4;
  int unaff_s6;
  int iVar3;
  int iStack00000000;
  
  FUN_000101f0();
  iVar1 = unaff_s0 + 1 + unaff_s6;
  (&stack0x00000008)[unaff_s0] = 0;
  _L0();
  iStack00000000 = iVar1 + 1;
  (&stack0x00000008)[iVar1] = 0;
  iVar3 = 0;
  for (iVar1 = 0; iVar2 = (iVar1 * -0x14 + unaff_s1) * 0x1000000 >> 0x18,
      iVar1 < (unaff_s1 + 0x13) / 0x14; iVar1 += 1) {
    if (0x14 < iVar2) {
      iVar2 = 0x14;
    }
    FUN_0001028c(&stack0x00000004,1,unaff_s4 + iVar3,(int)(char)iVar2);
    iVar3 += (char)iVar2;
    (&stack0x00000007)[iStack00000000] = (&stack0x00000007)[iStack00000000] + '\x01';
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s4;
  int iVar3;
  int iVar4;
  
  _L0();
  iVar1 = unaff_s0 + 1;
  (&stack0x00000008)[unaff_s0] = 0;
  iVar4 = 0;
  for (iVar3 = 0; iVar2 = (iVar3 * -0x14 + unaff_s1) * 0x1000000 >> 0x18,
      iVar3 < (unaff_s1 + 0x13) / 0x14; iVar3 += 1) {
    if (0x14 < iVar2) {
      iVar2 = 0x14;
    }
    FUN_0001028c(&stack0x00000004,1,unaff_s4 + iVar4,(int)(char)iVar2);
    iVar4 += (char)iVar2;
    (&stack0x00000007)[iVar1] = (&stack0x00000007)[iVar1] + '\x01';
  }
  return;
}



void FUN_00010264(void)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s4;
  int iVar3;
  int unaff_s6;
  int iVar4;
  
  FUN_00010264();
  iVar1 = unaff_s6 + 1;
  (&stack0x00000008)[unaff_s6] = 0;
  iVar4 = 0;
  for (iVar3 = 0; iVar2 = (iVar3 * -0x14 + unaff_s1) * 0x1000000 >> 0x18,
      iVar3 < (unaff_s1 + 0x13) / 0x14; iVar3 += 1) {
    if (0x14 < iVar2) {
      iVar2 = 0x14;
    }
    FUN_0001028c(&stack0x00000004,1,unaff_s4 + iVar4,(int)(char)iVar2);
    iVar4 += (char)iVar2;
    (&stack0x00000007)[iVar1] = (&stack0x00000007)[iVar1] + '\x01';
  }
  return;
}



void FUN_0001028c(undefined *param_1,undefined4 param_2,int param_3,int param_4)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000000;
  
  while( true ) {
    FUN_0001028c(param_1,param_2,param_3,param_4);
    unaff_s7 += unaff_s0;
    unaff_s5 += 1;
    (&stack0x00000007)[in_stack_00000000] = (&stack0x00000007)[in_stack_00000000] + '\x01';
    iVar1 = (unaff_s5 * unaff_s8 + unaff_s1) * 0x1000000 >> 0x18;
    if (unaff_s6 <= unaff_s5) break;
    if (unaff_s9 < iVar1) {
      iVar1 = 0x14;
    }
    unaff_s0 = (int)(char)iVar1;
    param_3 = unaff_s4 + unaff_s7;
    param_2 = 1;
    param_1 = &stack0x00000004;
    param_4 = unaff_s0;
  }
  return;
}


