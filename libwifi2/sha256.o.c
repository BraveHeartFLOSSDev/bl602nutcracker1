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
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictb7_for___value anon_union.conflictb7_for___value, *Panon_union.conflictb7_for___value;

typedef uint wint_t;

union anon_union.conflictb7_for___value { // DWARF DIE: b7
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: e9
    int __count;
    union anon_union.conflictb7_for___value __value;
};

typedef union anon_union.conflictb7 anon_union.conflictb7, *Panon_union.conflictb7;

union anon_union.conflictb7 { // DWARF DIE: b7
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong uint32_t;

struct la_mem_format { // DWARF DIE: a8f
    uint32_t word[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr { // DWARF DIE: 9ef
    uint16_t array[3];
};

typedef enum anon_enum_8.conflict977 {
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
} anon_enum_8.conflict977;

typedef uchar uint8_t;

typedef long int32_t;

typedef uchar UINT8;

typedef ulong UINT32;

typedef ulonglong UINT64;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: ac7
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct anon_struct.conflict705 anon_struct.conflict705, *Panon_struct.conflict705;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 6bc
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 1af
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

struct anon_struct.conflict705 { // DWARF DIE: 705
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

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict891_for__new anon_union.conflict891_for__new, *Panon_union.conflict891_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict84a anon_struct.conflict84a, *Panon_struct.conflict84a;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

struct anon_struct.conflict84a { // DWARF DIE: 84a
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict891_for__new { // DWARF DIE: 891
    struct anon_struct.conflict705 _reent;
    struct anon_struct.conflict84a _unused;
};

struct _on_exit_args { // DWARF DIE: 232
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 287
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 13f
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 677
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 2e7
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 315
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

struct _reent { // DWARF DIE: 481
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
    union anon_union.conflict891_for__new _new;
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

struct __locale_t { // DWARF DIE: 8c6
};

typedef union anon_union.conflict891 anon_union.conflict891, *Panon_union.conflict891;

union anon_union.conflict891 { // DWARF DIE: 891
    struct anon_struct.conflict705 _reent;
    struct anon_struct.conflict84a _unused;
};

typedef struct sha256_state sha256_state, *Psha256_state;

struct sha256_state { // DWARF DIE: b40
    UINT64 length;
    UINT32 state[8];
    UINT32 curlen;
    UINT8 buf[64];
    undefined field_0x6c;
    undefined field_0x6d;
    undefined field_0x6e;
    undefined field_0x6f;
};

typedef uint size_t;

typedef int32_t BaseType_t;

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




// DWARF DIE: cb3

int sha256_compress(sha256_state *md,UINT8 *msgBuf,UINT8 *pScratchMem)

{
  UINT32 *pUVar1;
  UINT32 *pUVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  piVar11 = (int *)(pScratchMem + 0x100);
  _L0();
  puVar5 = (uint *)pScratchMem;
  puVar12 = (ushort *)msgBuf;
  do {
    puVar13 = puVar12 + 2;
    *puVar5 = (((uint)(*puVar12 >> 8) | (*puVar12 & 0xff) << 8) << 8 | (uint)*(byte *)(puVar12 + 1))
              << 8 | (uint)*(byte *)((int)puVar12 + 3);
    puVar5 = puVar5 + 1;
    puVar12 = puVar13;
  } while (puVar13 != (ushort *)(msgBuf + 0x40));
  piVar3 = (int *)(pScratchMem + 0x40);
  do {
    uVar6 = piVar3[-2];
    uVar4 = piVar3[-0xf];
    piVar7 = piVar3 + 1;
    *piVar3 = ((uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar6 << 0xd | uVar6 >> 0x13) ^ uVar6 >> 10) +
              piVar3[-7] + piVar3[-0x10] +
              ((uVar4 >> 7 | uVar4 << 0x19) ^ (uVar4 << 0xe | uVar4 >> 0x12) ^ uVar4 >> 3);
    piVar3 = piVar7;
  } while (piVar11 != piVar7);
  piVar3 = (int *)0x0;
  do {
    uVar4 = *(uint *)(pScratchMem + 0x110);
    uVar14 = *(uint *)(pScratchMem + 0x118);
    uVar15 = *(uint *)(pScratchMem + 0x114);
    uVar6 = *(uint *)(pScratchMem + 0x100);
    iVar8 = *piVar3;
    uVar10 = *(uint *)(pScratchMem + 0x104);
    uVar16 = *(uint *)(pScratchMem + 0x108);
    iVar9 = *(int *)(pScratchMem + (int)piVar3);
    *(uint *)(pScratchMem + 0x114) = uVar4;
    iVar9 = ((uVar4 >> 6 | uVar4 << 0x1a) ^ (uVar4 >> 0xb | uVar4 << 0x15) ^
            (uVar4 << 7 | uVar4 >> 0x19)) + ((uVar14 ^ uVar15) & uVar4 ^ uVar14) +
            *(int *)(pScratchMem + 0x11c) + iVar8 + iVar9;
    *(int *)(pScratchMem + 0x110) = *(int *)(pScratchMem + 0x10c) + iVar9;
    *(uint *)(pScratchMem + 0x104) = uVar6;
    *(uint *)(pScratchMem + 0x11c) = uVar14;
    *(uint *)(pScratchMem + 0x118) = uVar15;
    *(uint *)(pScratchMem + 0x10c) = uVar16;
    *(uint *)(pScratchMem + 0x108) = uVar10;
    *(uint *)(pScratchMem + 0x100) =
         iVar9 + ((uVar6 >> 2 | uVar6 << 0x1e) ^ (uVar6 >> 0xd | uVar6 << 0x13) ^
                 (uVar6 << 10 | uVar6 >> 0x16)) + (uVar6 & uVar10 | (uVar6 | uVar10) & uVar16);
    piVar3 = piVar3 + 1;
  } while (piVar3 != (int *)0x100);
  pUVar1 = md->state;
  do {
    iVar8 = *piVar11;
    pUVar2 = pUVar1 + 1;
    piVar11 = piVar11 + 1;
    *pUVar1 = *pUVar1 + iVar8;
    pUVar1 = pUVar2;
  } while (&md->curlen != pUVar2);
  return 0;
}



undefined4 _L0(void)

{
  uint *unaff_s0;
  int *unaff_s1;
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *unaff_s2;
  int unaff_s3;
  ushort *unaff_s4;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  _L0();
  puVar3 = unaff_s0;
  puVar9 = unaff_s4;
  do {
    puVar10 = puVar9 + 2;
    *puVar3 = (((uint)(*puVar9 >> 8) | (*puVar9 & 0xff) << 8) << 8 | (uint)*(byte *)(puVar9 + 1)) <<
              8 | (uint)*(byte *)((int)puVar9 + 3);
    puVar3 = puVar3 + 1;
    puVar9 = puVar10;
  } while (puVar10 != unaff_s4 + 0x20);
  puVar3 = unaff_s0 + 0x10;
  do {
    uVar4 = puVar3[-2];
    uVar2 = puVar3[-0xf];
    puVar5 = puVar3 + 1;
    *puVar3 = ((uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar4 << 0xd | uVar4 >> 0x13) ^ uVar4 >> 10) +
              puVar3[-7] + puVar3[-0x10] +
              ((uVar2 >> 7 | uVar2 << 0x19) ^ (uVar2 << 0xe | uVar2 >> 0x12) ^ uVar2 >> 3);
    puVar3 = puVar5;
  } while (unaff_s2 != puVar5);
  piVar1 = (int *)0x0;
  do {
    uVar2 = unaff_s0[0x44];
    uVar11 = unaff_s0[0x46];
    uVar12 = unaff_s0[0x45];
    uVar4 = unaff_s0[0x40];
    iVar6 = *piVar1;
    uVar8 = unaff_s0[0x41];
    uVar13 = unaff_s0[0x42];
    iVar7 = *(int *)((int)unaff_s0 + (int)piVar1);
    unaff_s0[0x45] = uVar2;
    iVar7 = ((uVar2 >> 6 | uVar2 << 0x1a) ^ (uVar2 >> 0xb | uVar2 << 0x15) ^
            (uVar2 << 7 | uVar2 >> 0x19)) + ((uVar11 ^ uVar12) & uVar2 ^ uVar11) + unaff_s0[0x47] +
            iVar6 + iVar7;
    unaff_s0[0x44] = unaff_s0[0x43] + iVar7;
    unaff_s0[0x41] = uVar4;
    unaff_s0[0x47] = uVar11;
    unaff_s0[0x46] = uVar12;
    unaff_s0[0x43] = uVar13;
    unaff_s0[0x42] = uVar8;
    unaff_s0[0x40] =
         iVar7 + ((uVar4 >> 2 | uVar4 << 0x1e) ^ (uVar4 >> 0xd | uVar4 << 0x13) ^
                 (uVar4 << 10 | uVar4 >> 0x16)) + (uVar4 & uVar8 | (uVar4 | uVar8) & uVar13);
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)0x100);
  do {
    uVar2 = *unaff_s2;
    piVar1 = unaff_s1 + 1;
    unaff_s2 = unaff_s2 + 1;
    *unaff_s1 = *unaff_s1 + uVar2;
    unaff_s1 = piVar1;
  } while ((int *)(unaff_s3 + 0x28) != piVar1);
  return 0;
}



// DWARF DIE: c8d

void sha256_init(sha256_state *md)

{
  *(undefined4 *)&md->length = 0;
  md->state[0] = 0x6a09e667;
  md->state[1] = 0xbb67ae85;
  md->state[2] = 0x3c6ef372;
  md->state[3] = 0xa54ff53a;
  md->state[4] = 0x510e527f;
  md->state[5] = 0x9b05688c;
  md->state[6] = 0x1f83d9ab;
  md->curlen = 0;
  *(undefined4 *)((int)&md->length + 4) = 0;
  md->state[7] = 0x5be0cd19;
  return;
}



// DWARF DIE: daf

void sha256_vector(size_t num_elem,UINT8 **addr,size_t *len,UINT8 *mac,UINT8 *pScratchMem)

{
  int extraout_a0;
  int iVar1;
  int extraout_a0_00;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar7;
  
  _LVL35();
  iVar10 = 0;
  do {
    uVar3 = *(uint *)(pScratchMem + 0x28);
    if (iVar10 == num_elem << 2) {
      if (uVar3 < 0x40) {
        uVar2 = uVar3 * 8 + *(uint *)pScratchMem;
        *(uint *)(pScratchMem + 4) =
             (uint)(uVar2 < *(uint *)pScratchMem) + *(int *)(pScratchMem + 4);
        *(uint *)pScratchMem = uVar2;
        *(uint *)(pScratchMem + 0x28) = uVar3 + 1;
        pScratchMem[uVar3 + 0x2c] = -0x80;
        if (0x38 < uVar3 + 1) {
          while (uVar3 = *(uint *)(pScratchMem + 0x28), uVar3 < 0x40) {
            *(uint *)(pScratchMem + 0x28) = uVar3 + 1;
            pScratchMem[uVar3 + 0x2c] = '\0';
          }
          FUN_000102aa();
          *(undefined4 *)(pScratchMem + 0x28) = 0;
        }
        while (uVar3 = *(uint *)(pScratchMem + 0x28), uVar3 < 0x38) {
          *(uint *)(pScratchMem + 0x28) = uVar3 + 1;
          pScratchMem[uVar3 + 0x2c] = '\0';
        }
        uVar4 = *(undefined4 *)pScratchMem;
        pScratchMem[0x68] = (UINT8)((uint)uVar4 >> 0x18);
        pScratchMem[0x69] = (UINT8)((uint)uVar4 >> 0x10);
        pScratchMem[0x6b] = (UINT8)uVar4;
        uVar5 = *(undefined4 *)(pScratchMem + 4);
        pScratchMem[0x6a] = (UINT8)((uint)uVar4 >> 8);
        pScratchMem[100] = (UINT8)((uint)uVar5 >> 0x18);
        pScratchMem[0x65] = (UINT8)((uint)uVar5 >> 0x10);
        pScratchMem[0x67] = (UINT8)uVar5;
        pScratchMem[0x66] = (UINT8)((uint)uVar5 >> 8);
        _L0();
        puVar6 = (undefined4 *)(pScratchMem + 8);
        do {
          puVar7 = puVar6 + 1;
          uVar4 = *puVar6;
          *mac = (UINT8)((uint)uVar4 >> 0x18);
          mac[1] = (UINT8)((uint)uVar4 >> 0x10);
          mac[2] = (UINT8)((uint)uVar4 >> 8);
          mac[3] = (UINT8)uVar4;
          puVar6 = puVar7;
          mac = mac + 4;
        } while (puVar7 != (undefined4 *)(pScratchMem + 0x28));
      }
      return;
    }
    iVar9 = *(int *)((int)addr + iVar10);
    uVar2 = *(uint *)((int)len + iVar10);
    if (uVar3 < 0x41) {
      while (iVar1 = *(int *)(pScratchMem + 0x28), uVar2 != 0) {
        if ((iVar1 == 0) && (0x3f < uVar2)) {
          FUN_0001037e(iVar9);
          if (extraout_a0 < 0) break;
          uVar8 = *(uint *)pScratchMem;
          iVar9 += 0x40;
          uVar3 = uVar8 + 0x200;
          *(uint *)pScratchMem = uVar3;
          *(uint *)(pScratchMem + 4) = (uint)(uVar3 < uVar8) + *(int *)(pScratchMem + 4);
          uVar2 -= 0x40;
        }
        else {
          uVar3 = 0x40U - iVar1;
          if (uVar2 < 0x40U - iVar1) {
            uVar3 = uVar2;
          }
          FUN_000103ba((int)(pScratchMem + iVar1 + 0x2c),iVar9,uVar3);
          iVar1 = *(int *)(pScratchMem + 0x28);
          iVar9 += uVar3;
          uVar2 -= uVar3;
          *(uint *)(pScratchMem + 0x28) = iVar1 + uVar3;
          if (iVar1 + uVar3 == 0x40) {
            FUN_000103d8();
            if (extraout_a0_00 < 0) break;
            uVar8 = *(uint *)pScratchMem;
            *(undefined4 *)(pScratchMem + 0x28) = 0;
            uVar3 = uVar8 + 0x200;
            *(uint *)pScratchMem = uVar3;
            *(uint *)(pScratchMem + 4) = (uint)(uVar3 < uVar8) + *(int *)(pScratchMem + 4);
          }
        }
      }
    }
    iVar10 += 4;
  } while( true );
}



void _LVL35(void)

{
  uint *unaff_s0;
  int extraout_a0;
  int extraout_a0_00;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar5;
  undefined *unaff_s2;
  int iVar6;
  int unaff_s5;
  int iVar7;
  int unaff_s9;
  int in_stack_0000000c;
  uint *puVar4;
  
  _LVL35();
  iVar7 = 0;
  do {
    uVar2 = unaff_s0[10];
    if (iVar7 == unaff_s5) {
      if (uVar2 < 0x40) {
        uVar1 = uVar2 * 8 + *unaff_s0;
        unaff_s0[1] = (uint)(uVar1 < *unaff_s0) + unaff_s0[1];
        *unaff_s0 = uVar1;
        unaff_s0[10] = uVar2 + 1;
        *(undefined *)((int)unaff_s0 + uVar2 + 0x2c) = 0x80;
        if (0x38 < uVar2 + 1) {
          while (uVar2 = unaff_s0[10], uVar2 < 0x40) {
            unaff_s0[10] = uVar2 + 1;
            *(undefined *)((int)unaff_s0 + uVar2 + 0x2c) = 0;
          }
          FUN_000102aa();
          unaff_s0[10] = 0;
        }
        while (uVar2 = unaff_s0[10], uVar2 < 0x38) {
          unaff_s0[10] = uVar2 + 1;
          *(undefined *)((int)unaff_s0 + uVar2 + 0x2c) = 0;
        }
        uVar2 = *unaff_s0;
        *(char *)(unaff_s0 + 0x1a) = (char)(uVar2 >> 0x18);
        *(char *)((int)unaff_s0 + 0x69) = (char)(uVar2 >> 0x10);
        *(char *)((int)unaff_s0 + 0x6b) = (char)uVar2;
        uVar1 = unaff_s0[1];
        *(char *)((int)unaff_s0 + 0x6a) = (char)(uVar2 >> 8);
        *(char *)(unaff_s0 + 0x19) = (char)(uVar1 >> 0x18);
        *(char *)((int)unaff_s0 + 0x65) = (char)(uVar1 >> 0x10);
        *(char *)((int)unaff_s0 + 0x67) = (char)uVar1;
        *(char *)((int)unaff_s0 + 0x66) = (char)(uVar1 >> 8);
        _L0();
        puVar3 = unaff_s0 + 2;
        do {
          puVar4 = puVar3 + 1;
          uVar2 = *puVar3;
          *unaff_s2 = (char)(uVar2 >> 0x18);
          unaff_s2[1] = (char)(uVar2 >> 0x10);
          unaff_s2[2] = (char)(uVar2 >> 8);
          unaff_s2[3] = (char)uVar2;
          puVar3 = puVar4;
          unaff_s2 = unaff_s2 + 4;
        } while (puVar4 != unaff_s0 + 10);
      }
      return;
    }
    iVar6 = *(int *)(in_stack_0000000c + iVar7);
    uVar1 = *(uint *)(unaff_s9 + iVar7);
    if (uVar2 < 0x41) {
      while (uVar2 = unaff_s0[10], uVar1 != 0) {
        if ((uVar2 == 0) && (0x3f < uVar1)) {
          FUN_0001037e(iVar6);
          if (extraout_a0 < 0) break;
          uVar5 = *unaff_s0;
          iVar6 += 0x40;
          uVar2 = uVar5 + 0x200;
          *unaff_s0 = uVar2;
          unaff_s0[1] = (uint)(uVar2 < uVar5) + unaff_s0[1];
          uVar1 -= 0x40;
        }
        else {
          uVar5 = 0x40 - uVar2;
          if (uVar1 < 0x40 - uVar2) {
            uVar5 = uVar1;
          }
          FUN_000103ba((int)unaff_s0 + uVar2 + 0x2c,iVar6,uVar5);
          uVar2 = unaff_s0[10];
          iVar6 += uVar5;
          uVar1 -= uVar5;
          unaff_s0[10] = uVar2 + uVar5;
          if (uVar2 + uVar5 == 0x40) {
            FUN_000103d8();
            if (extraout_a0_00 < 0) break;
            uVar5 = *unaff_s0;
            unaff_s0[10] = 0;
            uVar2 = uVar5 + 0x200;
            *unaff_s0 = uVar2;
            unaff_s0[1] = (uint)(uVar2 < uVar5) + unaff_s0[1];
          }
        }
      }
    }
    iVar7 += 4;
  } while( true );
}



void FUN_000102aa(void)

{
  undefined4 *unaff_s0;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  undefined4 *puVar5;
  
  FUN_000102aa();
  unaff_s0[10] = 0;
  while (uVar1 = unaff_s0[10], uVar1 < 0x38) {
    unaff_s0[10] = uVar1 + 1;
    *(undefined *)((int)unaff_s0 + uVar1 + 0x2c) = 0;
  }
  uVar2 = *unaff_s0;
  *(char *)(unaff_s0 + 0x1a) = (char)((uint)uVar2 >> 0x18);
  *(char *)((int)unaff_s0 + 0x69) = (char)((uint)uVar2 >> 0x10);
  *(char *)((int)unaff_s0 + 0x6b) = (char)uVar2;
  uVar3 = unaff_s0[1];
  *(char *)((int)unaff_s0 + 0x6a) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_s0 + 0x19) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)unaff_s0 + 0x65) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)unaff_s0 + 0x67) = (char)uVar3;
  *(char *)((int)unaff_s0 + 0x66) = (char)((uint)uVar3 >> 8);
  _L0();
  puVar4 = unaff_s0 + 2;
  do {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    *unaff_s2 = (char)((uint)uVar2 >> 0x18);
    unaff_s2[1] = (char)((uint)uVar2 >> 0x10);
    unaff_s2[2] = (char)((uint)uVar2 >> 8);
    unaff_s2[3] = (char)uVar2;
    puVar4 = puVar5;
    unaff_s2 = unaff_s2 + 4;
  } while (puVar5 != unaff_s0 + 10);
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *unaff_s2;
  undefined4 *puVar3;
  
  _L0();
  puVar2 = (undefined4 *)(unaff_s0 + 8);
  do {
    puVar3 = puVar2 + 1;
    uVar1 = *puVar2;
    *unaff_s2 = (char)((uint)uVar1 >> 0x18);
    unaff_s2[1] = (char)((uint)uVar1 >> 0x10);
    unaff_s2[2] = (char)((uint)uVar1 >> 8);
    unaff_s2[3] = (char)uVar1;
    puVar2 = puVar3;
    unaff_s2 = unaff_s2 + 4;
  } while (puVar3 != (undefined4 *)(unaff_s0 + 0x28));
  return;
}



void FUN_0001037e(int param_1)

{
  uint *unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  uint uVar1;
  uint *puVar2;
  uint uVar4;
  undefined *unaff_s2;
  int unaff_s3;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  int in_stack_0000000c;
  uint *puVar3;
  
  do {
    FUN_0001037e(param_1);
    if (extraout_a0 < 0) goto _L16;
    uVar4 = *unaff_s0;
    param_1 = unaff_s3 + 0x40;
    uVar1 = uVar4 + 0x200;
    *unaff_s0 = uVar1;
    unaff_s0[1] = (uint)(uVar1 < uVar4) + unaff_s0[1];
    unaff_s1 -= 0x40;
_L14:
    uVar1 = unaff_s0[10];
    if (unaff_s1 == 0) goto _L16;
    if ((uVar1 != 0) || (unaff_s3 = param_1, unaff_s1 <= unaff_s10)) break;
  } while( true );
  uVar4 = unaff_s6 - uVar1;
  if (unaff_s1 < unaff_s6 - uVar1) {
    uVar4 = unaff_s1;
  }
  FUN_000103ba(uVar1 + unaff_s7,param_1,uVar4);
  uVar1 = unaff_s0[10];
  param_1 += uVar4;
  unaff_s1 -= uVar4;
  unaff_s0[10] = uVar1 + uVar4;
  if (uVar1 + uVar4 == unaff_s6) {
    FUN_000103d8();
    if (extraout_a0_00 < 0) {
_L16:
      do {
        unaff_s8 += 4;
        uVar1 = unaff_s0[10];
        if (unaff_s8 == unaff_s5) {
          if (uVar1 < 0x40) {
            uVar4 = uVar1 * 8 + *unaff_s0;
            unaff_s0[1] = (uint)(uVar4 < *unaff_s0) + unaff_s0[1];
            *unaff_s0 = uVar4;
            unaff_s0[10] = uVar1 + 1;
            *(undefined *)((int)unaff_s0 + uVar1 + 0x2c) = 0x80;
            if (0x38 < uVar1 + 1) {
              while (uVar1 = unaff_s0[10], uVar1 < 0x40) {
                unaff_s0[10] = uVar1 + 1;
                *(undefined *)((int)unaff_s0 + uVar1 + 0x2c) = 0;
              }
              FUN_000102aa();
              unaff_s0[10] = 0;
            }
            while (uVar1 = unaff_s0[10], uVar1 < 0x38) {
              unaff_s0[10] = uVar1 + 1;
              *(undefined *)((int)unaff_s0 + uVar1 + 0x2c) = 0;
            }
            uVar1 = *unaff_s0;
            *(char *)(unaff_s0 + 0x1a) = (char)(uVar1 >> 0x18);
            *(char *)((int)unaff_s0 + 0x69) = (char)(uVar1 >> 0x10);
            *(char *)((int)unaff_s0 + 0x6b) = (char)uVar1;
            uVar4 = unaff_s0[1];
            *(char *)((int)unaff_s0 + 0x6a) = (char)(uVar1 >> 8);
            *(char *)(unaff_s0 + 0x19) = (char)(uVar4 >> 0x18);
            *(char *)((int)unaff_s0 + 0x65) = (char)(uVar4 >> 0x10);
            *(char *)((int)unaff_s0 + 0x67) = (char)uVar4;
            *(char *)((int)unaff_s0 + 0x66) = (char)(uVar4 >> 8);
            _L0();
            puVar2 = unaff_s0 + 2;
            do {
              puVar3 = puVar2 + 1;
              uVar1 = *puVar2;
              *unaff_s2 = (char)(uVar1 >> 0x18);
              unaff_s2[1] = (char)(uVar1 >> 0x10);
              unaff_s2[2] = (char)(uVar1 >> 8);
              unaff_s2[3] = (char)uVar1;
              puVar2 = puVar3;
              unaff_s2 = unaff_s2 + 4;
            } while (puVar3 != unaff_s0 + 10);
          }
          return;
        }
        param_1 = *(int *)(in_stack_0000000c + unaff_s8);
        unaff_s1 = *(uint *)(unaff_s9 + unaff_s8);
      } while (unaff_s6 < uVar1);
    }
    else {
      uVar4 = *unaff_s0;
      unaff_s0[10] = 0;
      uVar1 = uVar4 + 0x200;
      *unaff_s0 = uVar1;
      unaff_s0[1] = (uint)(uVar1 < uVar4) + unaff_s0[1];
    }
  }
  goto _L14;
}



void FUN_000103ba(int param_1,int param_2,uint param_3)

{
  uint *unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  uint *puVar1;
  uint uVar3;
  uint uVar4;
  undefined *unaff_s2;
  int unaff_s3;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  uint *puVar2;
  
code_r0x000103ba:
  FUN_000103ba(param_1,param_2,param_3);
  uVar3 = unaff_s0[10];
  param_2 = unaff_s3 + unaff_s11;
  unaff_s1 -= unaff_s11;
  unaff_s0[10] = uVar3 + unaff_s11;
  if (uVar3 + unaff_s11 == unaff_s6) {
    FUN_000103d8();
    if (extraout_a0_00 < 0) goto _L16;
    uVar4 = *unaff_s0;
    unaff_s0[10] = 0;
    uVar3 = uVar4 + 0x200;
    *unaff_s0 = uVar3;
    unaff_s0[1] = (uint)(uVar3 < uVar4) + unaff_s0[1];
  }
_L14:
  do {
    uVar3 = unaff_s0[10];
    if (unaff_s1 != 0) {
      if ((uVar3 != 0) || (unaff_s1 <= unaff_s10)) break;
      FUN_0001037e(param_2);
      if (-1 < extraout_a0) {
        uVar4 = *unaff_s0;
        param_2 += 0x40;
        uVar3 = uVar4 + 0x200;
        *unaff_s0 = uVar3;
        unaff_s0[1] = (uint)(uVar3 < uVar4) + unaff_s0[1];
        unaff_s1 -= 0x40;
        goto _L14;
      }
    }
_L16:
    do {
      unaff_s8 += 4;
      uVar3 = unaff_s0[10];
      if (unaff_s8 == unaff_s5) {
        if (uVar3 < 0x40) {
          uVar4 = uVar3 * 8 + *unaff_s0;
          unaff_s0[1] = (uint)(uVar4 < *unaff_s0) + unaff_s0[1];
          *unaff_s0 = uVar4;
          unaff_s0[10] = uVar3 + 1;
          *(undefined *)((int)unaff_s0 + uVar3 + 0x2c) = 0x80;
          if (0x38 < uVar3 + 1) {
            while (uVar3 = unaff_s0[10], uVar3 < 0x40) {
              unaff_s0[10] = uVar3 + 1;
              *(undefined *)((int)unaff_s0 + uVar3 + 0x2c) = 0;
            }
            FUN_000102aa();
            unaff_s0[10] = 0;
          }
          while (uVar3 = unaff_s0[10], uVar3 < 0x38) {
            unaff_s0[10] = uVar3 + 1;
            *(undefined *)((int)unaff_s0 + uVar3 + 0x2c) = 0;
          }
          uVar3 = *unaff_s0;
          *(char *)(unaff_s0 + 0x1a) = (char)(uVar3 >> 0x18);
          *(char *)((int)unaff_s0 + 0x69) = (char)(uVar3 >> 0x10);
          *(char *)((int)unaff_s0 + 0x6b) = (char)uVar3;
          uVar4 = unaff_s0[1];
          *(char *)((int)unaff_s0 + 0x6a) = (char)(uVar3 >> 8);
          *(char *)(unaff_s0 + 0x19) = (char)(uVar4 >> 0x18);
          *(char *)((int)unaff_s0 + 0x65) = (char)(uVar4 >> 0x10);
          *(char *)((int)unaff_s0 + 0x67) = (char)uVar4;
          *(char *)((int)unaff_s0 + 0x66) = (char)(uVar4 >> 8);
          _L0();
          puVar1 = unaff_s0 + 2;
          do {
            puVar2 = puVar1 + 1;
            uVar3 = *puVar1;
            *unaff_s2 = (char)(uVar3 >> 0x18);
            unaff_s2[1] = (char)(uVar3 >> 0x10);
            unaff_s2[2] = (char)(uVar3 >> 8);
            unaff_s2[3] = (char)uVar3;
            puVar1 = puVar2;
            unaff_s2 = unaff_s2 + 4;
          } while (puVar2 != unaff_s0 + 10);
        }
        return;
      }
      param_2 = *(int *)(in_stack_0000000c + unaff_s8);
      unaff_s1 = *(uint *)(unaff_s9 + unaff_s8);
    } while (unaff_s6 < uVar3);
  } while( true );
  param_3 = unaff_s6 - uVar3;
  if (unaff_s1 < unaff_s6 - uVar3) {
    param_3 = unaff_s1;
  }
  param_1 = uVar3 + unaff_s7;
  unaff_s3 = param_2;
  unaff_s11 = param_3;
  goto code_r0x000103ba;
}



void FUN_000103d8(void)

{
  uint *unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  uint uVar1;
  uint *puVar2;
  uint uVar4;
  undefined *unaff_s2;
  int unaff_s3;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  int in_stack_0000000c;
  uint *puVar3;
  
  do {
    FUN_000103d8();
    if (extraout_a0_00 < 0) goto _L16;
    uVar4 = *unaff_s0;
    unaff_s0[10] = 0;
    uVar1 = uVar4 + 0x200;
    *unaff_s0 = uVar1;
    unaff_s0[1] = (uint)(uVar1 < uVar4) + unaff_s0[1];
_L14:
    do {
      while (uVar1 = unaff_s0[10], unaff_s1 == 0) {
_L16:
        do {
          unaff_s8 += 4;
          uVar1 = unaff_s0[10];
          if (unaff_s8 == unaff_s5) {
            if (uVar1 < 0x40) {
              uVar4 = uVar1 * 8 + *unaff_s0;
              unaff_s0[1] = (uint)(uVar4 < *unaff_s0) + unaff_s0[1];
              *unaff_s0 = uVar4;
              unaff_s0[10] = uVar1 + 1;
              *(undefined *)((int)unaff_s0 + uVar1 + 0x2c) = 0x80;
              if (0x38 < uVar1 + 1) {
                while (uVar1 = unaff_s0[10], uVar1 < 0x40) {
                  unaff_s0[10] = uVar1 + 1;
                  *(undefined *)((int)unaff_s0 + uVar1 + 0x2c) = 0;
                }
                FUN_000102aa();
                unaff_s0[10] = 0;
              }
              while (uVar1 = unaff_s0[10], uVar1 < 0x38) {
                unaff_s0[10] = uVar1 + 1;
                *(undefined *)((int)unaff_s0 + uVar1 + 0x2c) = 0;
              }
              uVar1 = *unaff_s0;
              *(char *)(unaff_s0 + 0x1a) = (char)(uVar1 >> 0x18);
              *(char *)((int)unaff_s0 + 0x69) = (char)(uVar1 >> 0x10);
              *(char *)((int)unaff_s0 + 0x6b) = (char)uVar1;
              uVar4 = unaff_s0[1];
              *(char *)((int)unaff_s0 + 0x6a) = (char)(uVar1 >> 8);
              *(char *)(unaff_s0 + 0x19) = (char)(uVar4 >> 0x18);
              *(char *)((int)unaff_s0 + 0x65) = (char)(uVar4 >> 0x10);
              *(char *)((int)unaff_s0 + 0x67) = (char)uVar4;
              *(char *)((int)unaff_s0 + 0x66) = (char)(uVar4 >> 8);
              _L0();
              puVar2 = unaff_s0 + 2;
              do {
                puVar3 = puVar2 + 1;
                uVar1 = *puVar2;
                *unaff_s2 = (char)(uVar1 >> 0x18);
                unaff_s2[1] = (char)(uVar1 >> 0x10);
                unaff_s2[2] = (char)(uVar1 >> 8);
                unaff_s2[3] = (char)uVar1;
                puVar2 = puVar3;
                unaff_s2 = unaff_s2 + 4;
              } while (puVar3 != unaff_s0 + 10);
            }
            return;
          }
          unaff_s3 = *(int *)(in_stack_0000000c + unaff_s8);
          unaff_s1 = *(uint *)(unaff_s9 + unaff_s8);
        } while (unaff_s6 < uVar1);
      }
      if ((uVar1 == 0) && (unaff_s10 < unaff_s1)) {
        FUN_0001037e(unaff_s3);
        if (extraout_a0 < 0) goto _L16;
        uVar4 = *unaff_s0;
        unaff_s3 += 0x40;
        uVar1 = uVar4 + 0x200;
        *unaff_s0 = uVar1;
        unaff_s0[1] = (uint)(uVar1 < uVar4) + unaff_s0[1];
        unaff_s1 -= 0x40;
        goto _L14;
      }
      uVar4 = unaff_s6 - uVar1;
      if (unaff_s1 < unaff_s6 - uVar1) {
        uVar4 = unaff_s1;
      }
      FUN_000103ba(uVar1 + unaff_s7,unaff_s3,uVar4);
      uVar1 = unaff_s0[10];
      unaff_s3 += uVar4;
      unaff_s1 -= uVar4;
      unaff_s0[10] = uVar1 + uVar4;
    } while (uVar1 + uVar4 != unaff_s6);
  } while( true );
}



// WARNING: Variable defined which should be unmapped: pScratchMem
// DWARF DIE: f91

void hmac_sha256_vector(UINT8 *key,size_t key_len,size_t num_elem,UINT8 **addr,size_t *len,
                       UINT8 *mac)

{
  UINT8 **ppUVar1;
  size_t **ppsVar2;
  UINT8 **ppUVar3;
  size_t *psVar4;
  int iVar5;
  size_t *psVar6;
  size_t *psStack580;
  UINT8 *_addr [6];
  size_t _len [6];
  UINT8 pScratchMem [500];
  
  if (0x40 < key_len) {
    _LVL81();
  }
  _LVL83();
  _LVL85();
  psVar6 = _len + 5;
  do {
    psVar4 = psVar6 + 1;
    *psVar6 = *psVar6 ^ 0x36363636;
    psVar6 = psVar4;
  } while (psVar4 != (size_t *)(pScratchMem + 0x3c));
  psStack580 = _len + 5;
  ppsVar2 = &psStack580;
  ppUVar3 = _addr + 5;
  _addr[5] = (UINT8 *)0x40;
  iVar5 = 0;
  while( true ) {
    ppsVar2 = ppsVar2 + 1;
    ppUVar3 = ppUVar3 + 1;
    if (iVar5 == num_elem << 2) break;
    *ppsVar2 = *(size_t **)((int)addr + iVar5);
    ppUVar1 = (UINT8 **)((int)len + iVar5);
    iVar5 += 4;
    *ppUVar3 = *ppUVar1;
  }
  FUN_000104d0();
  _LVL97();
  _LVL99();
  psVar6 = _len + 5;
  do {
    psVar4 = psVar6 + 1;
    *psVar6 = *psVar6 ^ 0x5c5c5c5c;
    psVar6 = psVar4;
  } while (psVar4 != (size_t *)(pScratchMem + 0x3c));
  psStack580 = _len + 5;
  _addr[5] = (UINT8 *)0x40;
  _len[0] = 0x20;
  _addr[0] = mac;
  _L0();
  return;
}



void _LVL81(void)

{
  uint *unaff_s0;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined4 uStack00000008;
  undefined *puStack0000001c;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  
  _LVL81();
  uStack00000008 = 0x20;
  _LVL83();
  _LVL85();
  puVar6 = (uint *)&stack0x0000004c;
  do {
    puVar4 = puVar6 + 1;
    *puVar6 = *puVar6 ^ 0x36363636;
    puVar6 = puVar4;
  } while (puVar4 != unaff_s0);
  puStack0000001c = &stack0x0000004c;
  puVar2 = (undefined4 *)&stack0x0000001c;
  puVar3 = (undefined4 *)&stack0x00000034;
  uStack00000034 = 0x40;
  iVar5 = 0;
  while( true ) {
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    if (iVar5 == unaff_s2 << 2) break;
    *puVar2 = *(undefined4 *)(unaff_s3 + iVar5);
    puVar1 = (undefined4 *)(unaff_s4 + iVar5);
    iVar5 += 4;
    *puVar3 = *puVar1;
  }
  FUN_000104d0();
  _LVL97();
  _LVL99();
  puVar6 = (uint *)&stack0x0000004c;
  do {
    puVar4 = puVar6 + 1;
    *puVar6 = *puVar6 ^ 0x5c5c5c5c;
    puVar6 = puVar4;
  } while (puVar4 != unaff_s0);
  puStack0000001c = &stack0x0000004c;
  uStack00000034 = 0x40;
  uStack00000038 = 0x20;
  _L0();
  return;
}



void _LVL83(void)

{
  uint *unaff_s0;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined *puStack0000001c;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  
  _LVL83();
  _LVL85();
  puVar6 = (uint *)&stack0x0000004c;
  do {
    puVar4 = puVar6 + 1;
    *puVar6 = *puVar6 ^ 0x36363636;
    puVar6 = puVar4;
  } while (puVar4 != unaff_s0);
  puStack0000001c = &stack0x0000004c;
  puVar2 = (undefined4 *)&stack0x0000001c;
  puVar3 = (undefined4 *)&stack0x00000034;
  uStack00000034 = 0x40;
  iVar5 = 0;
  while( true ) {
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    if (iVar5 == unaff_s2 << 2) break;
    *puVar2 = *(undefined4 *)(unaff_s3 + iVar5);
    puVar1 = (undefined4 *)(unaff_s4 + iVar5);
    iVar5 += 4;
    *puVar3 = *puVar1;
  }
  FUN_000104d0();
  _LVL97();
  _LVL99();
  puVar6 = (uint *)&stack0x0000004c;
  do {
    puVar4 = puVar6 + 1;
    *puVar6 = *puVar6 ^ 0x5c5c5c5c;
    puVar6 = puVar4;
  } while (puVar4 != unaff_s0);
  puStack0000001c = &stack0x0000004c;
  uStack00000034 = 0x40;
  uStack00000038 = 0x20;
  _L0();
  return;
}



void _LVL85(void)

{
  uint *unaff_s0;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined *puStack0000001c;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  
  _LVL85();
  puVar6 = (uint *)&stack0x0000004c;
  do {
    puVar4 = puVar6 + 1;
    *puVar6 = *puVar6 ^ 0x36363636;
    puVar6 = puVar4;
  } while (puVar4 != unaff_s0);
  puStack0000001c = &stack0x0000004c;
  puVar2 = (undefined4 *)&stack0x0000001c;
  puVar3 = (undefined4 *)&stack0x00000034;
  uStack00000034 = 0x40;
  iVar5 = 0;
  while( true ) {
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    if (iVar5 == unaff_s2 << 2) break;
    *puVar2 = *(undefined4 *)(unaff_s3 + iVar5);
    puVar1 = (undefined4 *)(unaff_s4 + iVar5);
    iVar5 += 4;
    *puVar3 = *puVar1;
  }
  FUN_000104d0();
  _LVL97();
  _LVL99();
  puVar6 = (uint *)&stack0x0000004c;
  do {
    puVar4 = puVar6 + 1;
    *puVar6 = *puVar6 ^ 0x5c5c5c5c;
    puVar6 = puVar4;
  } while (puVar4 != unaff_s0);
  puStack0000001c = &stack0x0000004c;
  uStack00000034 = 0x40;
  uStack00000038 = 0x20;
  _L0();
  return;
}



void FUN_000104d0(void)

{
  uint *unaff_s0;
  uint *puVar1;
  undefined *puStack0000001c;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  uint *puVar2;
  
  FUN_000104d0();
  _LVL97();
  _LVL99();
  puVar1 = (uint *)&stack0x0000004c;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = *puVar1 ^ 0x5c5c5c5c;
    puVar1 = puVar2;
  } while (puVar2 != unaff_s0);
  puStack0000001c = &stack0x0000004c;
  uStack00000034 = 0x40;
  uStack00000038 = 0x20;
  _L0();
  return;
}



void _LVL97(void)

{
  uint *unaff_s0;
  uint *puVar1;
  undefined *puStack0000001c;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  uint *puVar2;
  
  _LVL97();
  _LVL99();
  puVar1 = (uint *)&stack0x0000004c;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = *puVar1 ^ 0x5c5c5c5c;
    puVar1 = puVar2;
  } while (puVar2 != unaff_s0);
  puStack0000001c = &stack0x0000004c;
  uStack00000034 = 0x40;
  uStack00000038 = 0x20;
  _L0();
  return;
}



void _LVL99(void)

{
  uint *unaff_s0;
  uint *puVar1;
  undefined *puStack0000001c;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  uint *puVar2;
  
  _LVL99();
  puVar1 = (uint *)&stack0x0000004c;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = *puVar1 ^ 0x5c5c5c5c;
    puVar1 = puVar2;
  } while (puVar2 != unaff_s0);
  puStack0000001c = &stack0x0000004c;
  uStack00000034 = 0x40;
  uStack00000038 = 0x20;
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}


