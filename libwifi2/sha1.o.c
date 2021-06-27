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

struct Bl_SHA1_CTX { // DWARF DIE: ad9
    UINT32 Intermediate_Hash[5];
    UINT32 Length_Low;
    UINT32 Length_High;
    UINT32 Scratch[16];
    UINT8 Message_Block[64];
    SINT16 Message_Block_Index;
    UINT8 Computed;
    UINT8 Corrupted;
};

typedef enum anon_enum_8.conflictab2 {
    shaInputTooLong=2,
    shaNull=1,
    shaStateError=3,
    shaSuccess=0
} anon_enum_8.conflictab2;

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




// DWARF DIE: ba9

void Bl_SHA1ProcessMessageBlock(Bl_SHA1_CTX *context)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UINT32 *pUVar4;
  uint uVar5;
  UINT32 *pUVar6;
  UINT32 *pUVar7;
  uint uVar8;
  UINT32 UVar9;
  uint uVar10;
  uint uVar11;
  UINT32 UVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  UINT32 UVar16;
  
  pUVar4 = context->Scratch;
  pUVar6 = pUVar4;
  do {
    pUVar7 = pUVar6 + 1;
    *pUVar6 = (uint)*(byte *)(pUVar6 + 0x10) << 0x18 | (uint)*(byte *)((int)pUVar6 + 0x41) << 0x10 |
              (uint)*(byte *)((int)pUVar6 + 0x42) << 8 | (uint)*(byte *)((int)pUVar6 + 0x43);
    pUVar6 = pUVar7;
  } while ((UINT32 *)context->Message_Block != pUVar7);
  uVar11 = 0;
  uVar8 = context->Intermediate_Hash[2];
  uVar10 = context->Intermediate_Hash[0];
  UVar12 = context->Intermediate_Hash[1];
  uVar2 = context->Intermediate_Hash[3];
  UVar16 = context->Intermediate_Hash[4];
  do {
    uVar13 = uVar2;
    uVar3 = uVar10;
    uVar2 = uVar8;
    if ((uVar11 & 0x30) == 0) {
      UVar9 = context->Scratch[uVar11];
    }
    else {
      uVar8 = pUVar4[uVar11 + 0xd & 0xf] ^ pUVar4[uVar11 + 8 & 0xf] ^ pUVar4[uVar11 & 0xf] ^
              pUVar4[uVar11 + 2 & 0xf];
      UVar9 = uVar8 >> 0x1f | uVar8 << 1;
      pUVar4[uVar11 & 0xf] = UVar9;
    }
    uVar11 += 1;
    uVar10 = UVar9 + ((uVar2 ^ uVar13) & UVar12 ^ uVar13) +
                     (uVar3 << 5 | uVar3 >> 0x1b) + 0x5a827999 + UVar16;
    uVar8 = UVar12 << 0x1e | UVar12 >> 2;
    UVar12 = uVar3;
    UVar16 = uVar13;
  } while (uVar11 != 0x14);
  do {
    uVar14 = uVar10;
    uVar1 = uVar2;
    uVar2 = uVar11 + 0xd;
    uVar10 = uVar11 + 8;
    uVar15 = uVar11 & 0xf;
    uVar5 = uVar11 + 2;
    uVar11 += 1;
    uVar2 = pUVar4[uVar2 & 0xf] ^ pUVar4[uVar10 & 0xf] ^ pUVar4[uVar15] ^ pUVar4[uVar5 & 0xf];
    uVar2 = uVar2 >> 0x1f | uVar2 << 1;
    pUVar4[uVar15] = uVar2;
    uVar10 = (uVar3 ^ uVar8 ^ uVar1) + (uVar14 << 5 | uVar14 >> 0x1b) + 0x6ed9eba1 + uVar2 + uVar13;
    uVar5 = uVar3 << 0x1e | uVar3 >> 2;
    uVar2 = uVar8;
    uVar3 = uVar14;
    uVar8 = uVar5;
    uVar13 = uVar1;
  } while (uVar11 != 0x28);
  do {
    uVar8 = uVar10;
    uVar13 = uVar11 + 0xd;
    uVar10 = uVar11 + 8;
    uVar15 = uVar11 & 0xf;
    uVar3 = uVar11 + 2;
    uVar11 += 1;
    uVar10 = pUVar4[uVar13 & 0xf] ^ pUVar4[uVar10 & 0xf] ^ pUVar4[uVar15] ^ pUVar4[uVar3 & 0xf];
    uVar10 = uVar10 >> 0x1f | uVar10 << 1;
    pUVar4[uVar15] = uVar10;
    uVar10 = ((uVar5 | uVar2) & uVar14 | uVar5 & uVar2) + (uVar8 << 5 | uVar8 >> 0x1b) + 0x8f1bbcdc
             + uVar10 + uVar1;
    uVar13 = uVar14 << 0x1e | uVar14 >> 2;
    uVar1 = uVar2;
    uVar14 = uVar8;
    uVar3 = uVar2;
    uVar2 = uVar5;
    uVar5 = uVar13;
  } while (uVar11 != 0x3c);
  do {
    uVar15 = uVar13;
    uVar5 = uVar2;
    uVar1 = uVar10;
    uVar10 = uVar11 + 0xd;
    uVar13 = uVar11 + 8;
    uVar2 = uVar11 & 0xf;
    uVar14 = uVar11 + 2;
    uVar11 += 1;
    uVar10 = pUVar4[uVar10 & 0xf] ^ pUVar4[uVar13 & 0xf] ^ pUVar4[uVar2] ^ pUVar4[uVar14 & 0xf];
    uVar10 = uVar10 >> 0x1f | uVar10 << 1;
    pUVar4[uVar2] = uVar10;
    uVar10 = uVar10 + (uVar8 ^ uVar15 ^ uVar5) + (uVar1 << 5 | uVar1 >> 0x1b) + 0xca62c1d6 + uVar3;
    uVar13 = uVar8 << 0x1e | uVar8 >> 2;
    uVar8 = uVar1;
    uVar3 = uVar5;
    uVar2 = uVar15;
  } while (uVar11 != 0x50);
  context->Message_Block_Index = 0;
  UVar12 = context->Intermediate_Hash[1];
  context->Intermediate_Hash[0] = uVar10 + context->Intermediate_Hash[0];
  context->Intermediate_Hash[1] = uVar1 + UVar12;
  context->Intermediate_Hash[2] = uVar13 + context->Intermediate_Hash[2];
  context->Intermediate_Hash[3] = uVar15 + context->Intermediate_Hash[3];
  context->Intermediate_Hash[4] = uVar5 + context->Intermediate_Hash[4];
  return;
}



// DWARF DIE: d81

int Bl_SHA1Init(Bl_SHA1_CTX *context)

{
  if (context != (Bl_SHA1_CTX *)0x0) {
    context->Intermediate_Hash[0] = 0x67452301;
    context->Intermediate_Hash[1] = 0xefcdab89;
    context->Intermediate_Hash[2] = 0x98badcfe;
    context->Intermediate_Hash[3] = 0x10325476;
    context->Length_Low = 0;
    context->Length_High = 0;
    context->Intermediate_Hash[4] = 0xc3d2e1f0;
    *(undefined4 *)&context->Message_Block_Index = 0;
    return 0;
  }
  return 1;
}



// DWARF DIE: cd5

int Bl_SHA1Final(Bl_SHA1_CTX *context,UINT8 *Message_Digest)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  UINT32 UVar5;
  SINT16 *pSVar6;
  
  uVar4 = 1;
  if (((context != (Bl_SHA1_CTX *)0x0) && (Message_Digest != (UINT8 *)0x0)) &&
     (uVar4 = (uint)context->Corrupted, uVar4 == 0)) {
    if (context->Computed == '\0') {
      iVar3 = (int)context->Message_Block_Index;
      context->Message_Block_Index = (SINT16)((uint)((iVar3 + 1) * 0x10000) >> 0x10);
      context->Message_Block[iVar3] = -0x80;
      if (iVar3 < 0x38) {
        while( true ) {
          sVar1 = context->Message_Block_Index;
          if (0x37 < sVar1) break;
          context->Message_Block_Index = sVar1 + 1;
          context->Message_Block[sVar1] = '\0';
        }
      }
      else {
        while( true ) {
          sVar1 = context->Message_Block_Index;
          if (0x3f < sVar1) break;
          context->Message_Block_Index = sVar1 + 1;
          context->Message_Block[sVar1] = '\0';
        }
        _LVL50();
        while( true ) {
          sVar1 = context->Message_Block_Index;
          if (0x37 < sVar1) break;
          context->Message_Block_Index = sVar1 + 1;
          context->Message_Block[sVar1] = '\0';
        }
      }
      UVar5 = context->Length_High;
      *(ushort *)(context->Message_Block + 0x3a) =
           *(ushort *)&context->Length_High << 8 | *(ushort *)&context->Length_High >> 8;
      context->Message_Block[0x39] = (UINT8)(UVar5 >> 0x10);
      uVar2 = *(ushort *)&context->Length_Low;
      context->Message_Block[0x38] = (UINT8)(UVar5 >> 0x18);
      UVar5 = context->Length_Low;
      *(ushort *)(context->Message_Block + 0x3e) = uVar2 << 8 | uVar2 >> 8;
      context->Message_Block[0x3d] = (UINT8)(UVar5 >> 0x10);
      context->Message_Block[0x3c] = (UINT8)(UVar5 >> 0x18);
      _L0();
      pSVar6 = (SINT16 *)context->Message_Block;
      do {
        *(UINT8 *)pSVar6 = '\0';
        pSVar6 = (SINT16 *)((int)pSVar6 + 1);
      } while (&context->Message_Block_Index != pSVar6);
      context->Length_Low = 0;
      context->Length_High = 0;
      context->Computed = '\x01';
    }
    uVar4 = 0;
    do {
      Message_Digest[uVar4] =
           (UINT8)(*(uint *)((int)context->Intermediate_Hash + (uVar4 & 0xfffffffc)) >>
                  ((~uVar4 & 3) << 3));
      uVar4 += 1;
    } while (uVar4 != 0x14);
    FUN_00010414();
    return 0;
  }
  return uVar4;
}



undefined4 _LVL50(void)

{
  short sVar1;
  int unaff_s0;
  int unaff_s1;
  undefined *puVar2;
  uint uVar3;
  
  _LVL50();
  while( true ) {
    sVar1 = *(short *)(unaff_s0 + 0x9c);
    if (0x37 < sVar1) break;
    *(short *)(unaff_s0 + 0x9c) = sVar1 + 1;
    *(undefined *)(sVar1 + unaff_s0 + 0x5c) = 0;
  }
  *(ushort *)(unaff_s0 + 0x96) =
       *(ushort *)(unaff_s0 + 0x18) << 8 | *(ushort *)(unaff_s0 + 0x18) >> 8;
  *(char *)(unaff_s0 + 0x95) = (char)((uint)*(undefined4 *)(unaff_s0 + 0x18) >> 0x10);
  *(char *)(unaff_s0 + 0x94) = (char)((uint)*(undefined4 *)(unaff_s0 + 0x18) >> 0x18);
  *(ushort *)(unaff_s0 + 0x9a) =
       *(ushort *)(unaff_s0 + 0x14) << 8 | *(ushort *)(unaff_s0 + 0x14) >> 8;
  *(char *)(unaff_s0 + 0x99) = (char)((uint)*(undefined4 *)(unaff_s0 + 0x14) >> 0x10);
  *(char *)(unaff_s0 + 0x98) = (char)((uint)*(undefined4 *)(unaff_s0 + 0x14) >> 0x18);
  _L0();
  puVar2 = (undefined *)(unaff_s0 + 0x5c);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while ((undefined *)(unaff_s0 + 0x9c) != puVar2);
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  *(undefined4 *)(unaff_s0 + 0x18) = 0;
  *(undefined *)(unaff_s0 + 0x9e) = 1;
  uVar3 = 0;
  do {
    *(char *)(unaff_s1 + uVar3) =
         (char)(*(uint *)((uVar3 & 0xfffffffc) + unaff_s0) >> ((~uVar3 & 3) << 3));
    uVar3 += 1;
  } while (uVar3 != 0x14);
  FUN_00010414();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  uint uVar2;
  
  _L0();
  puVar1 = (undefined *)(unaff_s0 + 0x5c);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while ((undefined *)(unaff_s0 + 0x9c) != puVar1);
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  *(undefined4 *)(unaff_s0 + 0x18) = 0;
  *(undefined *)(unaff_s0 + 0x9e) = 1;
  uVar2 = 0;
  do {
    *(char *)(unaff_s1 + uVar2) =
         (char)(*(uint *)((uVar2 & 0xfffffffc) + unaff_s0) >> ((~uVar2 & 3) << 3));
    uVar2 += 1;
  } while (uVar2 != 0x14);
  FUN_00010414();
  return 0;
}



undefined4 FUN_00010414(void)

{
  FUN_00010414();
  return 0;
}



// DWARF DIE: c74

int Bl_SHA1Update(Bl_SHA1_CTX *context,UINT8 *message_array,uint length)

{
  short sVar1;
  UINT8 *pUVar2;
  uint uVar3;
  UINT32 UVar4;
  int iVar5;
  
  if (length == 0) {
    return 0;
  }
  uVar3 = 1;
  if ((context != (Bl_SHA1_CTX *)0x0) && (message_array != (UINT8 *)0x0)) {
    if (context->Computed == '\0') {
      uVar3 = (uint)context->Corrupted;
      if (uVar3 == 0) {
        pUVar2 = message_array + length;
        while ((message_array != pUVar2 && (context->Corrupted == '\0'))) {
          sVar1 = context->Message_Block_Index;
          iVar5 = (sVar1 + 1) * 0x10000;
          context->Message_Block_Index = (SINT16)((uint)iVar5 >> 0x10);
          context->Message_Block[sVar1] = *message_array;
          UVar4 = context->Length_Low + 8;
          context->Length_Low = UVar4;
          if ((UVar4 == 0) &&
             (UVar4 = context->Length_High + 1, context->Length_High = UVar4, UVar4 == 0)) {
            context->Corrupted = '\x01';
          }
          if (iVar5 >> 0x10 == 0x40) {
            _L0();
          }
          message_array = message_array + 1;
        }
        uVar3 = 0;
      }
    }
    else {
      context->Corrupted = '\x03';
      uVar3 = 3;
    }
  }
  return uVar3;
}



undefined4 _L0(void)

{
  short sVar1;
  int unaff_s0;
  undefined *unaff_s1;
  int iVar2;
  int iVar3;
  undefined unaff_s2;
  int unaff_s3;
  undefined *in_stack_0000000c;
  
  do {
    _L0();
    do {
      in_stack_0000000c = in_stack_0000000c + 1;
      if ((in_stack_0000000c == unaff_s1) || (*(char *)(unaff_s0 + 0x9f) != '\0')) {
        return 0;
      }
      sVar1 = *(short *)(unaff_s0 + 0x9c);
      iVar3 = (sVar1 + 1) * 0x10000;
      *(short *)(unaff_s0 + 0x9c) = (short)((uint)iVar3 >> 0x10);
      *(undefined *)(sVar1 + unaff_s0 + 0x5c) = *in_stack_0000000c;
      iVar2 = *(int *)(unaff_s0 + 0x14) + 8;
      *(int *)(unaff_s0 + 0x14) = iVar2;
      if ((iVar2 == 0) &&
         (iVar2 = *(int *)(unaff_s0 + 0x18) + 1, *(int *)(unaff_s0 + 0x18) = iVar2, iVar2 == 0)) {
        *(undefined *)(unaff_s0 + 0x9f) = unaff_s2;
      }
    } while (iVar3 >> 0x10 != unaff_s3);
  } while( true );
}


