typedef unsigned char   undefined;

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
typedef struct __sFILE __sFILE, *P__sFILE;

typedef int _ssize_t;

typedef struct _reent _reent, *P_reent;

typedef long _fpos_t;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict876_for__new anon_union.conflict876_for__new, *Panon_union.conflict876_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict6ea anon_struct.conflict6ea, *Panon_struct.conflict6ea;

typedef struct anon_struct.conflict82f anon_struct.conflict82f, *Panon_struct.conflict82f;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflict9c_for___value anon_union.conflict9c_for___value, *Panon_union.conflict9c_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

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

union anon_union.conflict9c_for___value { // DWARF DIE: 9c
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: ce
    int __count;
    union anon_union.conflict9c_for___value __value;
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

struct anon_struct.conflict82f { // DWARF DIE: 82f
    uchar * _nextf[30];
    uint _nmalloc[30];
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

typedef union anon_union.conflict9c anon_union.conflict9c, *Panon_union.conflict9c;

union anon_union.conflict9c { // DWARF DIE: 9c
    wint_t __wch;
    uchar __wchb[4];
};

typedef uchar u8;

typedef struct rijndael_ctx rijndael_ctx, *Prijndael_ctx;

typedef uint u32;

struct rijndael_ctx { // DWARF DIE: 93b
    int decrypt;
    int Nr;
    u32 key[60];
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




// DWARF DIE: f19

int rijndaelKeySetupEnc(u32 *rk,u8 *cipherKey,int keyBits)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  u32 *puVar4;
  
  *rk = (uint)*cipherKey << 0x18 ^ (uint)cipherKey[1] << 0x10 ^ (uint)cipherKey[3] ^
        (uint)cipherKey[2] << 8;
  rk[1] = (uint)cipherKey[4] << 0x18 ^ (uint)cipherKey[5] << 0x10 ^ (uint)cipherKey[7] ^
          (uint)cipherKey[6] << 8;
  rk[2] = (uint)cipherKey[8] << 0x18 ^ (uint)cipherKey[9] << 0x10 ^ (uint)cipherKey[0xb] ^
          (uint)cipherKey[10] << 8;
  rk[3] = (uint)cipherKey[0xc] << 0x18 ^ (uint)cipherKey[0xd] << 0x10 ^ (uint)cipherKey[0xf] ^
          (uint)cipherKey[0xe] << 8;
  if (keyBits == 0x80) {
    puVar3 = (uint *)0x0;
    puVar4 = rk + 0x24;
    while( true ) {
      uVar1 = *puVar3;
      uVar2 = rk[3];
      puVar3 = puVar3 + 1;
      uVar1 = *rk ^ uVar1 ^ (uint)*(byte *)(uVar2 >> 0x18) ^ (uint)*(byte *)(uVar2 & 0xff) << 8 ^
              (uint)*(byte *)(uVar2 >> 0x10 & 0xff) << 0x18 ^
              (uint)*(byte *)(uVar2 >> 8 & 0xff) << 0x10;
      rk[4] = uVar1;
      uVar1 ^= rk[1];
      rk[5] = uVar1;
      uVar1 ^= rk[2];
      rk[6] = uVar1;
      rk[7] = uVar1 ^ uVar2;
      if (rk == puVar4) break;
      rk = rk + 4;
    }
    return 10;
  }
  return 0;
}



// DWARF DIE: c4c

void rijndael_set_key(rijndael_ctx *ctx,u8 *key,int bits,int encrypt)

{
  int iVar1;
  u32 *puVar2;
  int extraout_a0;
  int extraout_a0_00;
  int iVar3;
  u32 uVar4;
  uint uVar5;
  u32 *puVar6;
  
  _L0();
  ctx->Nr = extraout_a0;
  if (encrypt == 0) {
    ctx->decrypt = 1;
    iVar3 = extraout_a0;
    if (extraout_a0 == 0) {
      _LVL17();
      iVar3 = extraout_a0_00;
    }
    puVar2 = ctx->key;
    puVar6 = ctx->key + iVar3 * 4 + -2;
    for (; encrypt < iVar3 * 4 - encrypt; encrypt += 4) {
      uVar4 = *puVar2;
      *puVar2 = puVar6[2];
      puVar6[2] = uVar4;
      uVar4 = puVar2[1];
      puVar2[1] = puVar6[3];
      puVar6[3] = uVar4;
      uVar4 = puVar2[2];
      puVar2[2] = puVar6[4];
      puVar6[4] = uVar4;
      uVar4 = puVar2[3];
      puVar2[3] = puVar6[5];
      puVar6[5] = uVar4;
      puVar2 = puVar2 + 4;
      puVar6 = puVar6 + -4;
    }
    puVar2 = ctx->key;
    for (iVar1 = 1; iVar1 < iVar3; iVar1 += 1) {
      puVar6 = puVar2 + 4;
      uVar5 = *puVar6;
      *puVar6 = *(uint *)((uint)*(byte *)(uVar5 >> 8 & 0xff) * 4) ^
                *(uint *)((uint)*(byte *)(uVar5 >> 0x18) * 4) ^
                *(uint *)((uint)*(byte *)(uVar5 & 0xff) * 4) ^
                *(uint *)((uint)*(byte *)(uVar5 >> 0x10 & 0xff) * 4);
      uVar5 = puVar2[5];
      puVar2[5] = *(uint *)((uint)*(byte *)(uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar5 >> 0x18) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar5 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar5 >> 0x10 & 0xff) * 4);
      uVar5 = puVar2[6];
      puVar2[6] = *(uint *)((uint)*(byte *)(uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar5 >> 0x18) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar5 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar5 >> 0x10 & 0xff) * 4);
      uVar5 = puVar2[7];
      puVar2[7] = *(uint *)((uint)*(byte *)(uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar5 >> 0x18) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar5 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar5 >> 0x10 & 0xff) * 4);
      puVar2 = puVar6;
    }
  }
  else {
    ctx->decrypt = 0;
  }
  return;
}



void _L0(void)

{
  int iVar1;
  undefined4 *unaff_s0;
  uint *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_s2;
  
  _L0();
  unaff_s0[1] = extraout_a0;
  if (unaff_s2 == 0) {
    *unaff_s0 = 1;
    iVar2 = extraout_a0;
    if (extraout_a0 == 0) {
      _LVL17();
      iVar2 = extraout_a0_00;
    }
    puVar3 = unaff_s1;
    puVar5 = unaff_s0 + iVar2 * 4;
    for (; unaff_s2 < iVar2 * 4 - unaff_s2; unaff_s2 += 4) {
      uVar4 = *puVar3;
      *puVar3 = puVar5[2];
      puVar5[2] = uVar4;
      uVar4 = puVar3[1];
      puVar3[1] = puVar5[3];
      puVar5[3] = uVar4;
      uVar4 = puVar3[2];
      puVar3[2] = puVar5[4];
      puVar5[4] = uVar4;
      uVar4 = puVar3[3];
      puVar3[3] = puVar5[5];
      puVar5[5] = uVar4;
      puVar3 = puVar3 + 4;
      puVar5 = puVar5 + -4;
    }
    for (iVar1 = 1; iVar1 < iVar2; iVar1 += 1) {
      puVar3 = unaff_s1 + 4;
      uVar4 = *puVar3;
      *puVar3 = *(uint *)((uint)*(byte *)(uVar4 >> 8 & 0xff) * 4) ^
                *(uint *)((uint)*(byte *)(uVar4 >> 0x18) * 4) ^
                *(uint *)((uint)*(byte *)(uVar4 & 0xff) * 4) ^
                *(uint *)((uint)*(byte *)(uVar4 >> 0x10 & 0xff) * 4);
      uVar4 = unaff_s1[5];
      unaff_s1[5] = *(uint *)((uint)*(byte *)(uVar4 >> 8 & 0xff) * 4) ^
                    *(uint *)((uint)*(byte *)(uVar4 >> 0x18) * 4) ^
                    *(uint *)((uint)*(byte *)(uVar4 & 0xff) * 4) ^
                    *(uint *)((uint)*(byte *)(uVar4 >> 0x10 & 0xff) * 4);
      uVar4 = unaff_s1[6];
      unaff_s1[6] = *(uint *)((uint)*(byte *)(uVar4 >> 8 & 0xff) * 4) ^
                    *(uint *)((uint)*(byte *)(uVar4 >> 0x18) * 4) ^
                    *(uint *)((uint)*(byte *)(uVar4 & 0xff) * 4) ^
                    *(uint *)((uint)*(byte *)(uVar4 >> 0x10 & 0xff) * 4);
      uVar4 = unaff_s1[7];
      unaff_s1[7] = *(uint *)((uint)*(byte *)(uVar4 >> 8 & 0xff) * 4) ^
                    *(uint *)((uint)*(byte *)(uVar4 >> 0x18) * 4) ^
                    *(uint *)((uint)*(byte *)(uVar4 & 0xff) * 4) ^
                    *(uint *)((uint)*(byte *)(uVar4 >> 0x10 & 0xff) * 4);
      unaff_s1 = puVar3;
    }
  }
  else {
    *unaff_s0 = 0;
  }
  return;
}



void _LVL17(void)

{
  int iVar1;
  int unaff_s0;
  uint *unaff_s1;
  int extraout_a0;
  uint *puVar2;
  uint uVar3;
  int unaff_s2;
  
  _LVL17();
  puVar2 = unaff_s1;
  iVar1 = extraout_a0 * 0x10 + unaff_s0;
  for (; unaff_s2 < extraout_a0 * 4 - unaff_s2; unaff_s2 += 4) {
    uVar3 = *puVar2;
    *puVar2 = *(uint *)(iVar1 + 8);
    *(uint *)(iVar1 + 8) = uVar3;
    uVar3 = puVar2[1];
    puVar2[1] = *(uint *)(iVar1 + 0xc);
    *(uint *)(iVar1 + 0xc) = uVar3;
    uVar3 = puVar2[2];
    puVar2[2] = *(uint *)(iVar1 + 0x10);
    *(uint *)(iVar1 + 0x10) = uVar3;
    uVar3 = puVar2[3];
    puVar2[3] = *(uint *)(iVar1 + 0x14);
    *(uint *)(iVar1 + 0x14) = uVar3;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -0x10;
  }
  for (iVar1 = 1; iVar1 < extraout_a0; iVar1 += 1) {
    puVar2 = unaff_s1 + 4;
    uVar3 = *puVar2;
    *puVar2 = *(uint *)((uint)*(byte *)(uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)((uint)*(byte *)(uVar3 >> 0x18) * 4) ^
              *(uint *)((uint)*(byte *)(uVar3 & 0xff) * 4) ^
              *(uint *)((uint)*(byte *)(uVar3 >> 0x10 & 0xff) * 4);
    uVar3 = unaff_s1[5];
    unaff_s1[5] = *(uint *)((uint)*(byte *)(uVar3 >> 8 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar3 >> 0x18) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar3 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar3 >> 0x10 & 0xff) * 4);
    uVar3 = unaff_s1[6];
    unaff_s1[6] = *(uint *)((uint)*(byte *)(uVar3 >> 8 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar3 >> 0x18) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar3 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar3 >> 0x10 & 0xff) * 4);
    uVar3 = unaff_s1[7];
    unaff_s1[7] = *(uint *)((uint)*(byte *)(uVar3 >> 8 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar3 >> 0x18) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar3 & 0xff) * 4) ^
                  *(uint *)((uint)*(byte *)(uVar3 >> 0x10 & 0xff) * 4);
    unaff_s1 = puVar2;
  }
  return;
}



// DWARF DIE: b76

void rijndael_decrypt(rijndael_ctx *ctx,u8 *src,u8 *dst)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  u32 *puVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  
  uVar11 = (uint)*src << 0x18 ^ (uint)src[1] << 0x10 ^ (uint)src[3] ^ (uint)src[2] << 8 ^
           ctx->key[0];
  uVar17 = (uint)src[4] << 0x18 ^ (uint)src[5] << 0x10 ^ (uint)src[7] ^ (uint)src[6] << 8 ^
           ctx->key[1];
  uVar14 = (uint)src[8] << 0x18 ^ (uint)src[9] << 0x10 ^ (uint)src[0xb] ^ (uint)src[10] << 8 ^
           ctx->key[2];
  uVar12 = (uint)src[0xc] << 0x18 ^ (uint)src[0xd] << 0x10 ^ (uint)src[0xf] ^ (uint)src[0xe] << 8 ^
           ctx->key[3];
  iVar13 = ctx->Nr >> 1;
  puVar5 = ctx->key;
  iVar16 = iVar13;
  while( true ) {
    uVar6 = *(uint *)((uVar11 >> 0x18) * 4) ^ *(uint *)((uVar17 & 0xff) * 4) ^ puVar5[4] ^
            *(uint *)(uVar12 >> 0xe & 0x3fc) ^ *(uint *)(uVar14 >> 6 & 0x3fc);
    iVar16 += -1;
    pbVar19 = (byte *)(uVar6 >> 0x10 & 0xff);
    uVar7 = *(uint *)((uVar17 >> 0x18) * 4) ^ *(uint *)((uVar14 & 0xff) * 4) ^ puVar5[5] ^
            *(uint *)(uVar11 >> 0xe & 0x3fc) ^ *(uint *)(uVar12 >> 6 & 0x3fc);
    uVar9 = *(uint *)((uVar14 >> 0x18) * 4) ^ *(uint *)((uVar12 & 0xff) * 4) ^ puVar5[6] ^
            *(uint *)(uVar17 >> 0xe & 0x3fc) ^ *(uint *)(uVar11 >> 6 & 0x3fc);
    uVar12 = *(uint *)((uVar12 >> 0x18) * 4) ^ *(uint *)((uVar11 & 0xff) * 4) ^ puVar5[7] ^
             *(uint *)(uVar14 >> 0xe & 0x3fc) ^ *(uint *)(uVar17 >> 6 & 0x3fc);
    pbVar21 = (byte *)(uVar12 >> 0x10 & 0xff);
    pbVar20 = (byte *)(uVar9 >> 8 & 0xff);
    uVar11 = puVar5[8];
    pbVar18 = (byte *)(uVar12 >> 8 & 0xff);
    pbVar4 = (byte *)(uVar7 >> 0x10 & 0xff);
    pbVar15 = (byte *)(uVar6 >> 8 & 0xff);
    pbVar10 = (byte *)(uVar9 >> 0x10 & 0xff);
    pbVar8 = (byte *)(uVar7 >> 8 & 0xff);
    if (iVar16 == 0) break;
    uVar11 = *(uint *)((int)(byte *)(uVar6 >> 0x18) * 4) ^
             *(uint *)((int)(byte *)(uVar7 & 0xff) * 4) ^ uVar11 ^ *(uint *)((int)pbVar21 * 4) ^
             *(uint *)((int)pbVar20 * 4);
    uVar17 = *(uint *)((int)(byte *)(uVar7 >> 0x18) * 4) ^
             *(uint *)((int)(byte *)(uVar9 & 0xff) * 4) ^ puVar5[9] ^ *(uint *)((int)pbVar19 * 4) ^
             *(uint *)((int)pbVar18 * 4);
    uVar14 = *(uint *)((int)(byte *)(uVar9 >> 0x18) * 4) ^
             *(uint *)((int)(byte *)(uVar12 & 0xff) * 4) ^ puVar5[10] ^ *(uint *)((int)pbVar4 * 4) ^
             *(uint *)((int)pbVar15 * 4);
    uVar12 = *(uint *)((int)(byte *)(uVar12 >> 0x18) * 4) ^
             *(uint *)((int)(byte *)(uVar6 & 0xff) * 4) ^ puVar5[0xb] ^ *(uint *)((int)pbVar10 * 4)
             ^ *(uint *)((int)pbVar8 * 4);
    puVar5 = puVar5 + 8;
  }
  puVar5 = ctx->key + iVar13 * 8;
  uVar11 = (uint)*(byte *)(uVar6 >> 0x18) << 0x18 ^ (uint)*pbVar21 << 0x10 ^
           (uint)*(byte *)(uVar7 & 0xff) ^ (uint)*pbVar20 << 8 ^ uVar11;
  *dst = (u8)(uVar11 >> 0x18);
  dst[1] = (u8)(uVar11 >> 0x10);
  dst[2] = (u8)(uVar11 >> 8);
  bVar1 = *pbVar19;
  bVar2 = *(byte *)(uVar7 >> 0x18);
  bVar3 = *(byte *)(uVar9 & 0xff);
  dst[3] = (u8)uVar11;
  uVar11 = (uint)bVar2 << 0x18 ^ (uint)bVar1 << 0x10 ^ (uint)bVar3 ^ (uint)*pbVar18 << 8 ^ puVar5[1]
  ;
  dst[4] = (u8)(uVar11 >> 0x18);
  dst[5] = (u8)(uVar11 >> 0x10);
  dst[6] = (u8)(uVar11 >> 8);
  dst[7] = (u8)uVar11;
  bVar1 = *(byte *)(uVar12 >> 0x18);
  uVar11 = (uint)*(byte *)(uVar9 >> 0x18) << 0x18 ^ (uint)*pbVar4 << 0x10 ^
           (uint)*(byte *)(uVar12 & 0xff) ^ (uint)*pbVar15 << 8 ^ puVar5[2];
  dst[8] = (u8)(uVar11 >> 0x18);
  dst[9] = (u8)(uVar11 >> 0x10);
  dst[0xb] = (u8)uVar11;
  bVar2 = *pbVar10;
  dst[10] = (u8)(uVar11 >> 8);
  uVar11 = (uint)bVar1 << 0x18 ^ (uint)bVar2 << 0x10 ^ (uint)*(byte *)(uVar6 & 0xff) ^
           (uint)*pbVar8 << 8 ^ puVar5[3];
  dst[0xc] = (u8)(uVar11 >> 0x18);
  dst[0xd] = (u8)(uVar11 >> 0x10);
  dst[0xe] = (u8)(uVar11 >> 8);
  dst[0xf] = (u8)uVar11;
  return;
}



// DWARF DIE: a94

void rijndael_encrypt(rijndael_ctx *ctx,u8 *src,u8 *dst)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  u32 *puVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  
  uVar11 = (uint)*src << 0x18 ^ (uint)src[1] << 0x10 ^ (uint)src[3] ^ (uint)src[2] << 8 ^
           ctx->key[0];
  uVar17 = (uint)src[4] << 0x18 ^ (uint)src[5] << 0x10 ^ (uint)src[7] ^ (uint)src[6] << 8 ^
           ctx->key[1];
  uVar14 = (uint)src[8] << 0x18 ^ (uint)src[9] << 0x10 ^ (uint)src[0xb] ^ (uint)src[10] << 8 ^
           ctx->key[2];
  uVar12 = (uint)src[0xc] << 0x18 ^ (uint)src[0xd] << 0x10 ^ (uint)src[0xf] ^ (uint)src[0xe] << 8 ^
           ctx->key[3];
  iVar13 = ctx->Nr >> 1;
  puVar5 = ctx->key;
  iVar16 = iVar13;
  while( true ) {
    uVar9 = *(uint *)((uVar11 >> 0x18) * 4) ^ *(uint *)((uVar12 & 0xff) * 4) ^ puVar5[4] ^
            *(uint *)(uVar17 >> 0xe & 0x3fc) ^ *(uint *)(uVar14 >> 6 & 0x3fc);
    iVar16 += -1;
    uVar7 = *(uint *)((uVar17 >> 0x18) * 4) ^ *(uint *)((uVar11 & 0xff) * 4) ^ puVar5[5] ^
            *(uint *)(uVar14 >> 0xe & 0x3fc) ^ *(uint *)(uVar12 >> 6 & 0x3fc);
    uVar6 = *(uint *)((uVar14 >> 0x18) * 4) ^ *(uint *)((uVar17 & 0xff) * 4) ^ puVar5[6] ^
            *(uint *)(uVar12 >> 0xe & 0x3fc) ^ *(uint *)(uVar11 >> 6 & 0x3fc);
    uVar12 = *(uint *)((uVar12 >> 0x18) * 4) ^ *(uint *)((uVar14 & 0xff) * 4) ^ puVar5[7] ^
             *(uint *)(uVar11 >> 0xe & 0x3fc) ^ *(uint *)(uVar17 >> 6 & 0x3fc);
    pbVar21 = (byte *)(uVar7 >> 0x10 & 0xff);
    pbVar20 = (byte *)(uVar6 >> 8 & 0xff);
    uVar11 = puVar5[8];
    pbVar19 = (byte *)(uVar6 >> 0x10 & 0xff);
    pbVar18 = (byte *)(uVar12 >> 8 & 0xff);
    pbVar4 = (byte *)(uVar12 >> 0x10 & 0xff);
    pbVar15 = (byte *)(uVar9 >> 8 & 0xff);
    pbVar10 = (byte *)(uVar9 >> 0x10 & 0xff);
    pbVar8 = (byte *)(uVar7 >> 8 & 0xff);
    if (iVar16 == 0) break;
    uVar11 = *(uint *)((int)(byte *)(uVar9 >> 0x18) * 4) ^
             *(uint *)((int)(byte *)(uVar12 & 0xff) * 4) ^ uVar11 ^ *(uint *)((int)pbVar21 * 4) ^
             *(uint *)((int)pbVar20 * 4);
    uVar17 = *(uint *)((int)(byte *)(uVar7 >> 0x18) * 4) ^
             *(uint *)((int)(byte *)(uVar9 & 0xff) * 4) ^ puVar5[9] ^ *(uint *)((int)pbVar19 * 4) ^
             *(uint *)((int)pbVar18 * 4);
    uVar14 = *(uint *)((int)(byte *)(uVar6 >> 0x18) * 4) ^
             *(uint *)((int)(byte *)(uVar7 & 0xff) * 4) ^ puVar5[10] ^ *(uint *)((int)pbVar4 * 4) ^
             *(uint *)((int)pbVar15 * 4);
    uVar12 = *(uint *)((int)(byte *)(uVar12 >> 0x18) * 4) ^
             *(uint *)((int)(byte *)(uVar6 & 0xff) * 4) ^ puVar5[0xb] ^ *(uint *)((int)pbVar10 * 4)
             ^ *(uint *)((int)pbVar8 * 4);
    puVar5 = puVar5 + 8;
  }
  puVar5 = ctx->key + iVar13 * 8;
  uVar11 = (uint)*(byte *)(uVar9 >> 0x18) << 0x18 ^ (uint)*pbVar21 << 0x10 ^
           (uint)*(byte *)(uVar12 & 0xff) ^ (uint)*pbVar20 << 8 ^ uVar11;
  *dst = (u8)(uVar11 >> 0x18);
  dst[1] = (u8)(uVar11 >> 0x10);
  dst[2] = (u8)(uVar11 >> 8);
  bVar1 = *pbVar19;
  bVar2 = *(byte *)(uVar7 >> 0x18);
  bVar3 = *(byte *)(uVar9 & 0xff);
  dst[3] = (u8)uVar11;
  uVar11 = (uint)bVar2 << 0x18 ^ (uint)bVar1 << 0x10 ^ (uint)bVar3 ^ (uint)*pbVar18 << 8 ^ puVar5[1]
  ;
  dst[4] = (u8)(uVar11 >> 0x18);
  dst[5] = (u8)(uVar11 >> 0x10);
  dst[6] = (u8)(uVar11 >> 8);
  dst[7] = (u8)uVar11;
  bVar1 = *(byte *)(uVar12 >> 0x18);
  uVar11 = (uint)*(byte *)(uVar6 >> 0x18) << 0x18 ^ (uint)*pbVar4 << 0x10 ^
           (uint)*(byte *)(uVar7 & 0xff) ^ (uint)*pbVar15 << 8 ^ puVar5[2];
  dst[8] = (u8)(uVar11 >> 0x18);
  dst[9] = (u8)(uVar11 >> 0x10);
  dst[0xb] = (u8)uVar11;
  bVar2 = *pbVar10;
  dst[10] = (u8)(uVar11 >> 8);
  uVar11 = (uint)bVar1 << 0x18 ^ (uint)bVar2 << 0x10 ^ (uint)*(byte *)(uVar6 & 0xff) ^
           (uint)*pbVar8 << 8 ^ puVar5[3];
  dst[0xc] = (u8)(uVar11 >> 0x18);
  dst[0xd] = (u8)(uVar11 >> 0x10);
  dst[0xe] = (u8)(uVar11 >> 8);
  dst[0xf] = (u8)uVar11;
  return;
}


