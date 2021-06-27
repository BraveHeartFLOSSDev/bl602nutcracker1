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

struct la_mem_format { // DWARF DIE: a74
    uint32_t word[4];
};

typedef enum anon_enum_8.conflict95c {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_VI=2,
    AC_VO=3,
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
} anon_enum_8.conflict95c;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr { // DWARF DIE: 9d4
    uint16_t array[3];
};

typedef uchar uint8_t;

typedef long int32_t;

typedef uchar UINT8;

typedef ulong UINT32;

typedef int BOOLEAN;

typedef char SINT8;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: aac
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

typedef struct BL_ENDECRYPT_t BL_ENDECRYPT_t, *PBL_ENDECRYPT_t;

struct BL_ENDECRYPT_t { // DWARF DIE: b31
    UINT8 enDeAction;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    UINT8 * pData;
};

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




// DWARF DIE: 11ae

void bl_aes_128(UINT8 *key,UINT8 *input,UINT8 *output)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 1163

void xor_128(UINT8 *a,UINT8 *b,UINT8 *out)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  iVar2 = 0;
  do {
    pbVar1 = a + iVar2;
    pbVar4 = b + iVar2;
    pbVar3 = out + iVar2;
    iVar2 += 1;
    *pbVar3 = *pbVar1 ^ *pbVar4;
  } while (iVar2 != 0x10);
  return;
}



// DWARF DIE: 1112

void leftshift_onebit(UINT8 *input,UINT8 *output)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar3 = 0;
  iVar2 = 0xf;
  do {
    pbVar1 = input + iVar2;
    pbVar4 = output + iVar2;
    iVar2 += -1;
    *pbVar4 = bVar3 | *pbVar1 << 1;
    bVar3 = *pbVar1 >> 7;
  } while (iVar2 != -1);
  return;
}



// WARNING: Variable defined which should be unmapped: tmp
// DWARF DIE: fbc

void generate_subkey(UINT8 *key,UINT8 *K1,UINT8 *K2)

{
  char cStack64;
  UINT8 L [16];
  UINT8 Z [16];
  UINT8 tmp [16];
  
  _L0();
  FUN_00010082();
  if (cStack64 < '\0') {
    FUN_000100c2();
    FUN_000100d6();
  }
  else {
    FUN_00010096();
  }
  if ((char)*K1 < '\0') {
    FUN_000100e4();
    FUN_000100f8();
  }
  else {
    FUN_000100aa();
  }
  return;
}



void _L0(void)

{
  char *unaff_s0;
  char in_stack_00000000;
  
  _L0();
  FUN_00010082();
  if (in_stack_00000000 < '\0') {
    FUN_000100c2();
    FUN_000100d6();
  }
  else {
    FUN_00010096();
  }
  if (*unaff_s0 < '\0') {
    FUN_000100e4();
    FUN_000100f8();
  }
  else {
    FUN_000100aa();
  }
  return;
}



void FUN_00010082(void)

{
  char *unaff_s0;
  char in_stack_00000000;
  
  FUN_00010082();
  if (in_stack_00000000 < '\0') {
    FUN_000100c2();
    FUN_000100d6();
  }
  else {
    FUN_00010096();
  }
  if (*unaff_s0 < '\0') {
    FUN_000100e4();
    FUN_000100f8();
  }
  else {
    FUN_000100aa();
  }
  return;
}



void FUN_00010096(void)

{
  char *unaff_s0;
  
  FUN_00010096();
  if (*unaff_s0 < '\0') {
    FUN_000100e4();
    FUN_000100f8();
  }
  else {
    FUN_000100aa();
  }
  return;
}



void FUN_000100aa(void)

{
  FUN_000100aa();
  return;
}



void FUN_000100c2(void)

{
  char *unaff_s0;
  
  FUN_000100c2();
  FUN_000100d6();
  if (*unaff_s0 < '\0') {
    FUN_000100e4();
    FUN_000100f8();
  }
  else {
    FUN_000100aa();
  }
  return;
}



void FUN_000100d6(void)

{
  char *unaff_s0;
  
  FUN_000100d6();
  if (*unaff_s0 < '\0') {
    FUN_000100e4();
    FUN_000100f8();
  }
  else {
    FUN_000100aa();
  }
  return;
}



void FUN_000100e4(void)

{
  FUN_000100e4();
  FUN_000100f8();
  return;
}



void FUN_000100f8(void)

{
  FUN_000100f8();
  return;
}



// DWARF DIE: f6d

void padding(UINT8 *lastb,UINT8 *pad,int length)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (iVar1 < length) {
      pad[iVar1] = lastb[iVar1];
    }
    else {
      if (length == iVar1) {
        pad[length] = -0x80;
      }
      else {
        pad[iVar1] = '\0';
      }
    }
    iVar1 += 1;
  } while (iVar1 != 0x10);
  return;
}



// DWARF DIE: d89

void bl_aes_cmac(UINT8 *key,UINT8 *input,int length,UINT8 *mac)

{
  int iVar1;
  int iVar2;
  UINT8 *pUVar3;
  UINT8 *pUVar4;
  UINT8 aUStack128 [4];
  UINT8 X [16];
  UINT8 Y [16];
  UINT8 M_last [16];
  UINT8 padded [16];
  UINT8 K1 [16];
  UINT8 K2 [16];
  
  _L0();
  iVar1 = (length + 0xf) / 0x10;
  if ((iVar1 != 0) && ((length & 0xfU) == 0)) {
    _L0();
    FUN_0001018c();
    for (iVar2 = 0; iVar2 < iVar1 + -1; iVar2 += 1) {
      FUN_0001020e((int)(input + iVar2 * 0x10),X + 0xc);
      FUN_0001021c(X + 0xc);
    }
    FUN_000101a2();
    FUN_000101b0();
    iVar1 = 0;
    do {
      pUVar3 = aUStack128 + iVar1;
      pUVar4 = mac + iVar1;
      iVar1 += 1;
      *pUVar4 = *pUVar3;
    } while (iVar1 != 0x10);
    return;
  }
  FUN_000101f4();
  _L0();
  return;
}



void _L0(void)

{
  int iVar1;
  uint unaff_s1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int unaff_s2;
  int unaff_s3;
  
  _L0();
  iVar1 = (int)(unaff_s1 + 0xf) / 0x10;
  if ((iVar1 != 0) && ((unaff_s1 & 0xf) == 0)) {
    _L0();
    FUN_0001018c();
    for (iVar2 = 0; iVar2 < iVar1 + -1; iVar2 += 1) {
      FUN_0001020e(iVar2 * 0x10 + unaff_s2,&stack0x00000010);
      FUN_0001021c(&stack0x00000010);
    }
    FUN_000101a2();
    FUN_000101b0();
    iVar1 = 0;
    do {
      puVar3 = &stack0x00000000 + iVar1;
      puVar4 = (undefined *)(unaff_s3 + iVar1);
      iVar1 += 1;
      *puVar4 = *puVar3;
    } while (iVar1 != 0x10);
    return;
  }
  FUN_000101f4();
  _L0();
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int unaff_s2;
  int unaff_s3;
  
  _L0();
  FUN_0001018c();
  for (iVar1 = 0; iVar1 < unaff_s0 + -1; iVar1 += 1) {
    FUN_0001020e(iVar1 * 0x10 + unaff_s2,&stack0x00000010);
    FUN_0001021c(&stack0x00000010);
  }
  FUN_000101a2();
  FUN_000101b0();
  iVar1 = 0;
  do {
    puVar2 = &stack0x00000000 + iVar1;
    puVar3 = (undefined *)(unaff_s3 + iVar1);
    iVar1 += 1;
    *puVar3 = *puVar2;
  } while (iVar1 != 0x10);
  return;
}



void FUN_0001018c(void)

{
  int unaff_s0;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int unaff_s2;
  int unaff_s3;
  
  FUN_0001018c();
  for (iVar1 = 0; iVar1 < unaff_s0 + -1; iVar1 += 1) {
    FUN_0001020e(iVar1 * 0x10 + unaff_s2,&stack0x00000010);
    FUN_0001021c(&stack0x00000010);
  }
  FUN_000101a2();
  FUN_000101b0();
  iVar1 = 0;
  do {
    puVar2 = &stack0x00000000 + iVar1;
    puVar3 = (undefined *)(unaff_s3 + iVar1);
    iVar1 += 1;
    *puVar3 = *puVar2;
  } while (iVar1 != 0x10);
  return;
}



void FUN_000101a2(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_s3;
  
  FUN_000101a2();
  FUN_000101b0();
  iVar3 = 0;
  do {
    puVar1 = &stack0x00000000 + iVar3;
    puVar2 = (undefined *)(unaff_s3 + iVar3);
    iVar3 += 1;
    *puVar2 = *puVar1;
  } while (iVar3 != 0x10);
  return;
}



void FUN_000101b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_s3;
  
  FUN_000101b0();
  iVar3 = 0;
  do {
    puVar1 = &stack0x00000000 + iVar3;
    puVar2 = (undefined *)(unaff_s3 + iVar3);
    iVar3 += 1;
    *puVar2 = *puVar1;
  } while (iVar3 != 0x10);
  return;
}



void FUN_000101f4(void)

{
  FUN_000101f4();
  _L0();
  return;
}



void FUN_0001020e(int param_1,undefined *param_2)

{
  int unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_0001020e(param_1,param_2);
    FUN_0001021c(&stack0x00000010);
    unaff_s1 += 1;
    if (unaff_s0 <= unaff_s1) break;
    param_2 = &stack0x00000010;
    param_1 = unaff_s1 * 0x10 + unaff_s2;
  }
  FUN_000101a2();
  FUN_000101b0();
  iVar3 = 0;
  do {
    puVar1 = &stack0x00000000 + iVar3;
    puVar2 = (undefined *)(unaff_s3 + iVar3);
    iVar3 += 1;
    *puVar2 = *puVar1;
  } while (iVar3 != 0x10);
  return;
}



void FUN_0001021c(undefined *param_1)

{
  int unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_0001021c(param_1);
    unaff_s1 += 1;
    if (unaff_s0 <= unaff_s1) break;
    FUN_0001020e(unaff_s1 * 0x10 + unaff_s2,&stack0x00000010);
    param_1 = &stack0x00000010;
  }
  FUN_000101a2();
  FUN_000101b0();
  iVar3 = 0;
  do {
    puVar1 = &stack0x00000000 + iVar3;
    puVar2 = (undefined *)(unaff_s3 + iVar3);
    iVar3 += 1;
    *puVar2 = *puVar1;
  } while (iVar3 != 0x10);
  return;
}


