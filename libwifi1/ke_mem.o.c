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

typedef union anon_union.conflictc5_for___value anon_union.conflictc5_for___value, *Panon_union.conflictc5_for___value;

typedef uint wint_t;

union anon_union.conflictc5_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictc5_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflictc5 anon_union.conflictc5, *Panon_union.conflictc5;

union anon_union.conflictc5 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef enum anon_enum_8.conflict950 {
    AC_MAX=4,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    AC_VI=2,
    TID_2=2,
    TID_5=5,
    AC_VO=3,
    TID_4=4,
    TID_7=7,
    TID_6=6,
    TID_MGT=8,
    AC_BE=1,
    TID_MAX=9,
    AC_BK=0
} anon_enum_8.conflict950;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr {
    uint16_t array[3];
};

typedef uchar uint8_t;

typedef ulong uint32_t;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict anon_union.conflict, *Panon_union.conflict;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict713 anon_struct.conflict713, *Panon_struct.conflict713;

typedef struct anon_struct.conflict858 anon_struct.conflict858, *Panon_struct.conflict858;

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

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict713 {
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

struct anon_struct.conflict858 {
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

union anon_union.conflict {
    struct anon_struct.conflict713 _reent;
    struct anon_struct.conflict858 _unused;
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
    union anon_union.conflict _new;
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

typedef union anon_union.conflict89f anon_union.conflict89f, *Panon_union.conflict89f;

union anon_union.conflict89f {
    struct anon_struct.conflict713 _reent;
    struct anon_struct.conflict858 _unused;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct co_list co_list, *Pco_list;

typedef struct mblock_free mblock_free, *Pmblock_free;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr {
    struct co_list_hdr * next;
};

struct mblock_free {
    struct mblock_free * next;
    uint32_t size;
};

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct ke_env_tag {
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef struct mblock_used mblock_used, *Pmblock_used;

struct mblock_used {
    uint32_t size;
};

typedef union anon_union.conflict89f_for__new anon_union.conflict89f_for__new, *Panon_union.conflict89f_for__new;

union anon_union.conflict89f_for__new {
    struct anon_struct.conflict713 _reent;
    struct anon_struct.conflict713 _unused;
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

mblock_free * ke_mem_init(void)

{
  uRam00000000 = 0;
  _DAT_00000004 = 0x1480;
  return (mblock_free *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * ke_malloc(uint32_t size)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  
  uVar2 = size + 3 & 0xfffffffc;
  uVar6 = uVar2 + 4;
  if (uVar6 < 8) {
    FUN_00010054(0,0,0x79);
  }
  piVar1 = (int *)0x0;
  piVar5 = (int *)_DAT_0000001c;
  while (piVar5 != (int *)0x0) {
    if ((uVar2 + 0xc <= (uint)piVar5[1]) &&
       ((piVar1 == (int *)0x0 || ((uint)piVar5[1] < *(uint *)((int)piVar1 + 4))))) {
      piVar1 = piVar5;
    }
    piVar5 = (int *)*piVar5;
  }
  if (piVar1 == (int *)0x0) {
    FUN_00010084(0,0,0x95);
  }
  iVar3 = *(int *)((int)piVar1 + 4) - uVar6;
  *(int *)((int)piVar1 + 4) = iVar3;
  puVar4 = (uint *)(iVar3 + (int)piVar1);
  *puVar4 = uVar6;
  return puVar4 + 1;
}



int * FUN_00010054(int iRam0000001c)

{
  int *piVar1;
  int unaff_s1;
  int iVar2;
  int *piVar3;
  int unaff_s2;
  
  FUN_00010054();
  piVar1 = (int *)0x0;
  piVar3 = (int *)iRam0000001c;
  while (piVar3 != (int *)0x0) {
    if ((unaff_s1 + 0xcU <= (uint)piVar3[1]) &&
       ((piVar1 == (int *)0x0 || ((uint)piVar3[1] < *(uint *)((int)piVar1 + 4))))) {
      piVar1 = piVar3;
    }
    piVar3 = (int *)*piVar3;
  }
  if (piVar1 == (int *)0x0) {
    FUN_00010084(0,0,0x95);
  }
  iVar2 = *(int *)((int)piVar1 + 4) - unaff_s2;
  *(int *)((int)piVar1 + 4) = iVar2;
  piVar1 = (int *)(iVar2 + (int)piVar1);
  *piVar1 = unaff_s2;
  return piVar1 + 1;
}



int * FUN_00010084(void)

{
  int unaff_s0;
  int iVar1;
  int *piVar2;
  int unaff_s2;
  
  FUN_00010084();
  iVar1 = *(int *)(unaff_s0 + 4) - unaff_s2;
  *(int *)(unaff_s0 + 4) = iVar1;
  piVar2 = (int *)(iVar1 + unaff_s0);
  *piVar2 = unaff_s2;
  return piVar2 + 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ke_free(void *mem_ptr)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  puVar1 = (uint *)_DAT_0000001c;
  uVar4 = (int)mem_ptr - 4;
  iVar5 = *(int *)((int)mem_ptr + -4);
  if (mem_ptr <= _DAT_0000001c) {
    FUN_000100fa(0,0,0xc5);
  }
  puVar6 = (uint *)0x0;
  do {
    puVar2 = puVar1;
    if (puVar2 == (uint *)0x0) {
      *puVar6 = uVar4;
      *(undefined4 *)((int)mem_ptr + -4) = 0;
_L0:
      *(int *)mem_ptr = iVar5;
      return;
    }
    if (puVar2[1] + (int)puVar2 == uVar4) {
      puVar3 = (undefined4 *)*puVar2;
      iVar5 = puVar2[1] + iVar5;
      puVar2[1] = iVar5;
      if (puVar3 != (undefined4 *)((int)puVar2 + iVar5)) {
        return;
      }
      puVar2[1] = iVar5 + puVar3[1];
      *puVar2 = *puVar3;
      return;
    }
    if (uVar4 < puVar2) {
      if (puVar6 == (uint *)0x0) {
        FUN_00010166(0,0,0xe0);
      }
      *puVar6 = uVar4;
      if (puVar2 == (uint *)(uVar4 + iVar5)) {
        *(uint *)((int)mem_ptr + -4) = *puVar2;
        *(uint *)mem_ptr = (int)puVar2 + (puVar2[1] - uVar4);
        return;
      }
      *(uint **)((int)mem_ptr + -4) = puVar2;
      goto _L0;
    }
    puVar1 = (uint *)*puVar2;
    puVar6 = puVar2;
  } while( true );
}



void FUN_000100fa(void)

{
  uint *unaff_s0;
  uint *puVar1;
  int *unaff_s1;
  undefined4 *puVar2;
  int iVar3;
  uint unaff_s2;
  int unaff_s3;
  uint *puVar4;
  
  FUN_000100fa();
  puVar4 = (uint *)0x0;
  do {
    puVar1 = unaff_s0;
    if (puVar1 == (uint *)0x0) {
      *puVar4 = unaff_s2;
      unaff_s1[-1] = 0;
_L0:
      *unaff_s1 = unaff_s3;
      return;
    }
    if (puVar1[1] + (int)puVar1 == unaff_s2) {
      puVar2 = (undefined4 *)*puVar1;
      iVar3 = puVar1[1] + unaff_s3;
      puVar1[1] = iVar3;
      if (puVar2 != (undefined4 *)((int)puVar1 + iVar3)) {
        return;
      }
      puVar1[1] = iVar3 + puVar2[1];
      *puVar1 = *puVar2;
      return;
    }
    if (unaff_s2 < puVar1) {
      if (puVar4 == (uint *)0x0) {
        FUN_00010166(0,0,0xe0);
      }
      *puVar4 = unaff_s2;
      if (puVar1 == (uint *)(unaff_s2 + unaff_s3)) {
        unaff_s1[-1] = *puVar1;
        *unaff_s1 = (int)puVar1 + (puVar1[1] - unaff_s2);
        return;
      }
      unaff_s1[-1] = (int)puVar1;
      goto _L0;
    }
    unaff_s0 = (uint *)*puVar1;
    puVar4 = puVar1;
  } while( true );
}



void FUN_00010166(void)

{
  int *unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  
  FUN_00010166();
  *unaff_s4 = unaff_s2;
  if (unaff_s0 == (int *)(unaff_s2 + unaff_s3)) {
    unaff_s1[-1] = *unaff_s0;
    *unaff_s1 = (int)unaff_s0 + (unaff_s0[1] - unaff_s2);
  }
  else {
    unaff_s1[-1] = (int)unaff_s0;
    *unaff_s1 = unaff_s3;
  }
  return;
}


