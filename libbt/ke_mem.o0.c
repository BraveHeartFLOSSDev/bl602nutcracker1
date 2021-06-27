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

typedef struct __sFILE __sFILE, *P__sFILE;

typedef int _ssize_t;

typedef struct _reent _reent, *P_reent;

typedef long _fpos_t;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8fc_for__new anon_union.conflict8fc_for__new, *Panon_union.conflict8fc_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict770 anon_struct.conflict770, *Panon_struct.conflict770;

typedef struct anon_struct.conflict8b5 anon_struct.conflict8b5, *Panon_struct.conflict8b5;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflict12b_for___value anon_union.conflict12b_for___value, *Panon_union.conflict12b_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

union anon_union.conflict12b_for___value { // DWARF DIE: 12b
    wint_t __wch;
    uchar __wchb[4];
};

struct _Bigint { // DWARF DIE: 1b1
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 727
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 6e2
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct anon_struct.conflict8b5 { // DWARF DIE: 8b5
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct __tm { // DWARF DIE: 221
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

struct _mbstate_t { // DWARF DIE: 15d
    int __count;
    union anon_union.conflict12b_for___value __value;
};

struct anon_struct.conflict770 { // DWARF DIE: 770
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

union anon_union.conflict8fc_for__new { // DWARF DIE: 8fc
    struct anon_struct.conflict770 _reent;
    struct anon_struct.conflict8b5 _unused;
};

struct _on_exit_args { // DWARF DIE: 2a4
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2f9
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 352
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 380
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

struct _reent { // DWARF DIE: 4ec
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
    union anon_union.conflict8fc_for__new _new;
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

struct __locale_t { // DWARF DIE: 931
};

typedef union anon_union.conflict8fc anon_union.conflict8fc, *Panon_union.conflict8fc;

union anon_union.conflict8fc { // DWARF DIE: 8fc
    struct anon_struct.conflict770 _reent;
    struct anon_struct.conflict8b5 _unused;
};

typedef struct ble_ke_env_tag ble_ke_env_tag, *Pble_ke_env_tag;

typedef struct co_list co_list, *Pco_list;

typedef struct mblock_free mblock_free, *Pmblock_free;

typedef ushort uint16_t;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 9db
    struct co_list_hdr * next;
};

struct mblock_free { // DWARF DIE: a89
    uint16_t corrupt_check;
    uint16_t free_size;
    struct mblock_free * next;
    struct mblock_free * previous;
};

struct co_list { // DWARF DIE: 9fc
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct ble_ke_env_tag { // DWARF DIE: a24
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * heap[2];
    uint16_t heap_size[2];
};

typedef union anon_union.conflict12b anon_union.conflict12b, *Panon_union.conflict12b;

union anon_union.conflict12b { // DWARF DIE: 12b
    wint_t __wch;
    uchar __wchb[4];
};

typedef enum anon_enum_8.conflict8f {
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflict8f;

typedef ulong uint32_t;

typedef uchar uint8_t;

typedef struct mblock_used mblock_used, *Pmblock_used;

struct mblock_used { // DWARF DIE: ae7
    uint16_t corrupt_check;
    uint16_t size;
};

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




// DWARF DIE: 138b

uint32_t _patch_ble_ke_mem_is_in_heap(void *pRet,uint8_t type,void *mem_ptr)

{
  undefined3 in_register_0000202d;
  void *pvVar1;
  
  *(undefined *)pRet = 0;
  pvVar1 = *(void **)((CONCAT31(in_register_0000202d,type) + 4) * 4 + 8);
  if ((pvVar1 <= mem_ptr) &&
     (mem_ptr <=
      (void *)((uint)*(ushort *)((CONCAT31(in_register_0000202d,type) + 0x10) * 2) + (int)pvVar1)))
  {
    *(undefined *)pRet = 1;
  }
  return 1;
}



// DWARF DIE: 1311

_Bool ble_ke_mem_is_in_heap(uint8_t type,void *mem_ptr)

{
  undefined3 in_register_00002029;
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined auStack17 [4];
  _Bool ret;
  
  iVar1 = CONCAT31(in_register_00002029,type);
  iVar2 = (*pcRam00000000)(auStack17,iVar1,mem_ptr,pcRam00000000);
  if (iVar2 == 0) {
    pvVar3 = *(void **)((iVar1 + 4) * 4 + 8);
    auStack17[0] = 0;
    if ((pvVar3 <= mem_ptr) &&
       (mem_ptr <= (void *)((uint)*(ushort *)((iVar1 + 0x10) * 2) + (int)pvVar3))) {
      auStack17[0] = 1;
    }
  }
  return (_Bool)auStack17[0];
}



// DWARF DIE: 126e

uint32_t _patch_ble_ke_mem_init(void *pRet,uint8_t type,uint8_t *heap,uint16_t heap_size)

{
  uint uVar1;
  undefined3 in_register_0000202d;
  int iVar2;
  
  iVar2 = (CONCAT31(in_register_0000202d,type) + 4) * 4;
  uVar1 = (uint)(heap + 3) & 0xfffffffc;
  *(uint *)(iVar2 + 8) = uVar1;
  *(uint16_t *)(uVar1 + 2) = ((short)heap + heap_size & 0xfffc) - (short)uVar1;
  **(undefined2 **)(iVar2 + 8) = 0xa55a;
  *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar2 + 8) + 8) = 0;
  *(uint16_t *)((CONCAT31(in_register_0000202d,type) + 0x10) * 2) = heap_size;
  return 1;
}



// DWARF DIE: 11b8

void ble_ke_mem_init(uint8_t type,uint8_t *heap,uint16_t heap_size)

{
  undefined3 in_register_00002029;
  int iVar1;
  int iVar2;
  undefined2 in_register_00002032;
  uint uVar3;
  
  iVar1 = CONCAT31(in_register_00002029,type);
  iVar2 = (*pcRam00000000)(0,iVar1,heap,CONCAT22(in_register_00002032,heap_size),pcRam00000000);
  if (iVar2 == 0) {
    iVar2 = (iVar1 + 4) * 4;
    uVar3 = (uint)(heap + 3) & 0xfffffffc;
    *(uint *)(iVar2 + 8) = uVar3;
    *(uint16_t *)(uVar3 + 2) = ((short)heap + heap_size & 0xfffc) - (short)uVar3;
    **(undefined2 **)(iVar2 + 8) = 0xa55a;
    *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = 0;
    *(undefined4 *)(*(int *)(iVar2 + 8) + 8) = 0;
    *(uint16_t *)((iVar1 + 0x10) * 2) = heap_size;
  }
  return;
}



// DWARF DIE: 1103

_Bool ble_ke_mem_is_empty(uint8_t type)

{
  undefined3 in_register_00002029;
  int iVar1;
  
  iVar1 = *(int *)((CONCAT31(in_register_00002029,type) + 4) * 4 + 8);
  return (_Bool)((uint)*(ushort *)(iVar1 + 2) ==
                ((uint)*(ushort *)((CONCAT31(in_register_00002029,type) + 0x10) * 2) + iVar1 &
                0xfffffffc) - iVar1);
}



// DWARF DIE: 102c

_Bool ble_ke_check_malloc(uint32_t size,uint8_t type)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (size + 3 & 0xfffffffc) + 4;
  if (uVar4 < 0xc) {
    uVar4 = 0xc;
  }
  iVar2 = 0;
  do {
    iVar1 = 0;
    for (iVar3 = *(int *)(((iVar2 + (uint)type & 1) + 4) * 4 + 8); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 4)) {
      uVar5 = (uint)*(ushort *)(iVar3 + 2);
      if (((uVar4 <= uVar5) && ((uVar4 + 0xc <= uVar5 || (*(int *)(iVar3 + 8) != 0)))) &&
         ((iVar1 == 0 || (uVar5 < *(ushort *)(iVar1 + 2))))) {
        iVar1 = iVar3;
      }
    }
    if ((iVar1 != 0) && ((uint)*(ushort *)(iVar1 + 2) < uVar4 + 0xc)) {
      uVar4 = (uint)*(ushort *)(iVar1 + 2);
    }
  } while ((iVar2 != 1) && (iVar2 = 1, iVar1 == 0));
  return (_Bool)(iVar1 != 0);
}



// DWARF DIE: f20

uint32_t _patch_ble_ke_malloc(void *pRet,uint32_t size,uint8_t type)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)pRet = 0;
  uVar1 = (size + 3 & 0xfffffffc) + 4;
  if (uVar1 < 0xc) {
    uVar1 = 0xc;
  }
  iVar2 = 0;
  while( true ) {
    iVar5 = 0;
    for (iVar3 = *(int *)((((uint)type + iVar2 & 1) + 4) * 4 + 8); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 4)) {
      uVar4 = (uint)*(ushort *)(iVar3 + 2);
      if (((uVar1 <= uVar4) && ((uVar1 + 0xc <= uVar4 || (*(int *)(iVar3 + 8) != 0)))) &&
         ((iVar5 == 0 || (uVar4 < *(ushort *)(iVar5 + 2))))) {
        iVar5 = iVar3;
      }
    }
    if ((iVar5 != 0) && ((uint)*(ushort *)(iVar5 + 2) < uVar1 + 0xc)) {
      uVar1 = (uint)*(ushort *)(iVar5 + 2);
    }
    if (iVar2 == 1) break;
    iVar2 = 1;
    if (iVar5 != 0) {
_L0:
      if (*(ushort *)(iVar5 + 2) == uVar1) {
        iVar2 = *(int *)(iVar5 + 4);
        *(int *)(*(int *)(iVar5 + 8) + 4) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar5 + 8);
        }
      }
      else {
        uVar4 = (uint)*(ushort *)(iVar5 + 2) - (uVar1 & 0xffff);
        *(short *)(iVar5 + 2) = (short)(uVar4 * 0x10000 >> 0x10);
        iVar5 += uVar4 & 0xffff;
      }
      *(int *)pRet = iVar5;
                    // WARNING: Load size is inaccurate
      *(short *)(*pRet + 2) = (short)uVar1;
                    // WARNING: Load size is inaccurate
      **pRet = 0x8338;
                    // WARNING: Load size is inaccurate
      *(int *)pRet = *pRet + 4;
      return 1;
    }
  }
  if (iVar5 == 0) {
    return 1;
  }
  goto _L0;
}



// DWARF DIE: e10

void * ble_ke_malloc(uint32_t size,uint8_t type)

{
  int iVar1;
  uint uVar2;
  undefined3 in_register_0000202d;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puStack20;
  mblock_used *alloc;
  
  iVar1 = (*pcRam00000000)(&puStack20,size,CONCAT31(in_register_0000202d,type),pcRam00000000);
  if (iVar1 == 0) {
    uVar2 = (size + 3 & 0xfffffffc) + 4;
    if (uVar2 < 0xc) {
      uVar2 = 0xc;
    }
    iVar1 = 0;
    do {
      puStack20 = (undefined2 *)0x0;
      for (puVar3 = *(undefined2 **)
                     (((CONCAT31(in_register_0000202d,type) + iVar1 & 1U) + 4) * 4 + 8);
          puVar3 != (undefined2 *)0x0; puVar3 = *(undefined2 **)(puVar3 + 2)) {
        uVar4 = (uint)(ushort)puVar3[1];
        if (((uVar2 <= uVar4) && ((uVar2 + 0xc <= uVar4 || (*(int *)(puVar3 + 4) != 0)))) &&
           ((puStack20 == (undefined2 *)0x0 || (uVar4 < (ushort)puStack20[1])))) {
          puStack20 = puVar3;
        }
      }
      if ((puStack20 != (undefined2 *)0x0) && ((uint)(ushort)puStack20[1] < uVar2 + 0xc)) {
        uVar2 = (uint)(ushort)puStack20[1];
      }
      if (iVar1 == 1) {
        if (puStack20 == (undefined2 *)0x0) {
          return (undefined2 *)0x0;
        }
        break;
      }
      iVar1 = 1;
    } while (puStack20 == (undefined2 *)0x0);
    if ((ushort)puStack20[1] == uVar2) {
      *(undefined4 *)(*(int *)(puStack20 + 4) + 4) = *(undefined4 *)(puStack20 + 2);
      if (*(int *)(puStack20 + 2) != 0) {
        *(undefined4 *)(*(int *)(puStack20 + 2) + 8) = *(undefined4 *)(puStack20 + 4);
      }
    }
    else {
      uVar4 = (uint)(ushort)puStack20[1] - (uVar2 & 0xffff);
      puStack20[1] = (short)(uVar4 * 0x10000 >> 0x10);
      puStack20 = (undefined2 *)((int)puStack20 + (uVar4 & 0xffff));
    }
    puStack20[1] = (short)uVar2;
    *puStack20 = 0x8338;
    puStack20 = puStack20 + 2;
  }
  return puStack20;
}



// DWARF DIE: ce7

uint32_t _patch_ble_ke_free(void *pRet,void *mem_ptr)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (int)mem_ptr - 4;
  *(undefined2 *)((int)mem_ptr + -4) = 0xf00f;
  uVar2 = *(ushort *)((int)mem_ptr + -2);
  iVar7 = 0;
  do {
    while (iVar3 = FUN_00010414(iVar7), iVar3 == 0) {
      if (iVar7 != 0) {
        uVar4 = 0;
        goto _L0;
      }
      iVar7 = 1;
    }
    uVar5 = *(uint *)((iVar7 + 4) * 4 + 8);
  } while (uVar5 == 0);
  uVar4 = 0;
  for (; uVar5 != 0; uVar5 = *(uint *)(uVar5 + 4)) {
    if (*(ushort *)(uVar5 + 2) + uVar5 == uVar6) {
      uVar6 = (uint)uVar2 + (uint)*(ushort *)(uVar5 + 2);
      iVar7 = *(int *)(uVar5 + 4);
      sVar1 = (short)(uVar6 * 0x10000 >> 0x10);
      *(short *)(uVar5 + 2) = sVar1;
      if (iVar7 != (uVar6 & 0xffff) + uVar5) {
        return 1;
      }
      *(short *)(uVar5 + 2) = sVar1 + *(short *)(iVar7 + 2);
      iVar7 = *(int *)(iVar7 + 4);
      *(int *)(uVar5 + 4) = iVar7;
      if (iVar7 == 0) {
        return 1;
      }
      *(uint *)(iVar7 + 8) = uVar5;
      return 1;
    }
    if (uVar6 < uVar5) {
      *(uint *)(uVar4 + 4) = uVar6;
      *(uint *)((int)mem_ptr + 4) = uVar4;
      *(undefined2 *)((int)mem_ptr + -4) = 0xa55a;
      if (uVar5 == uVar2 + uVar6) {
        iVar7 = *(int *)(uVar5 + 4);
        *(int *)mem_ptr = iVar7;
        if (iVar7 != 0) {
          *(uint *)(iVar7 + 8) = uVar6;
        }
        uVar2 += *(short *)(uVar5 + 2);
      }
      else {
        *(uint *)mem_ptr = uVar5;
        *(uint *)(uVar5 + 8) = uVar6;
      }
      *(ushort *)((int)mem_ptr + -2) = uVar2;
      return 1;
    }
    uVar4 = uVar5;
  }
_L0:
  *(uint *)(uVar4 + 4) = uVar6;
  *(undefined4 *)mem_ptr = 0;
  *(uint *)((int)mem_ptr + 4) = uVar4;
  *(ushort *)((int)mem_ptr + -2) = uVar2;
  *(undefined2 *)((int)mem_ptr + -4) = 0xa55a;
  return 1;
}



undefined4 FUN_00010414(int param_1)

{
  short sVar1;
  int unaff_s0;
  uint uVar2;
  uint *unaff_s1;
  int iVar3;
  uint uVar4;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  do {
    while (iVar3 = FUN_00010414(param_1), iVar3 == 0) {
      if (unaff_s3 != 0) {
        uVar2 = 0;
        goto _L0;
      }
      param_1 = 1;
      unaff_s3 = param_1;
    }
    uVar4 = *(uint *)((unaff_s3 + 4) * 4 + unaff_s4 + 8);
    param_1 = unaff_s3;
  } while (uVar4 == 0);
  uVar2 = 0;
  for (; uVar4 != 0; uVar4 = *(uint *)(uVar4 + 4)) {
    if (*(ushort *)(uVar4 + 2) + uVar4 == unaff_s2) {
      uVar2 = unaff_s0 + (uint)*(ushort *)(uVar4 + 2);
      iVar3 = *(int *)(uVar4 + 4);
      sVar1 = (short)(uVar2 * 0x10000 >> 0x10);
      *(short *)(uVar4 + 2) = sVar1;
      if (iVar3 != (uVar2 & 0xffff) + uVar4) {
        return 1;
      }
      *(short *)(uVar4 + 2) = sVar1 + *(short *)(iVar3 + 2);
      iVar3 = *(int *)(iVar3 + 4);
      *(int *)(uVar4 + 4) = iVar3;
      if (iVar3 == 0) {
        return 1;
      }
      *(uint *)(iVar3 + 8) = uVar4;
      return 1;
    }
    if (unaff_s2 < uVar4) {
      *(uint *)(uVar2 + 4) = unaff_s2;
      unaff_s1[1] = uVar2;
      *(undefined2 *)(unaff_s1 + -1) = 0xa55a;
      if (uVar4 == unaff_s0 + unaff_s2) {
        uVar2 = *(uint *)(uVar4 + 4);
        *unaff_s1 = uVar2;
        if (uVar2 != 0) {
          *(uint *)(uVar2 + 8) = unaff_s2;
        }
        unaff_s0 += (uint)*(ushort *)(uVar4 + 2);
      }
      else {
        *unaff_s1 = uVar4;
        *(uint *)(uVar4 + 8) = unaff_s2;
      }
      *(short *)((int)unaff_s1 + -2) = (short)unaff_s0;
      return 1;
    }
    uVar2 = uVar4;
  }
_L0:
  *(uint *)(uVar2 + 4) = unaff_s2;
  *unaff_s1 = 0;
  unaff_s1[1] = uVar2;
  *(short *)((int)unaff_s1 + -2) = (short)unaff_s0;
  *(undefined2 *)(unaff_s1 + -1) = 0xa55a;
  return 1;
}



// DWARF DIE: bb8

void ble_ke_free(void *mem_ptr)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int extraout_a0;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = (*pcRam00000000)(0,mem_ptr,pcRam00000000);
  if (iVar3 == 0) {
    uVar6 = (int)mem_ptr - 4;
    *(undefined2 *)((int)mem_ptr + -4) = 0xf00f;
    uVar2 = *(ushort *)((int)mem_ptr + -2);
    iVar3 = 0;
    do {
      while (FUN_00010524(iVar3), extraout_a0 == 0) {
        if (iVar3 != 0) {
          uVar4 = 0;
          goto _L0;
        }
        iVar3 = 1;
      }
      uVar5 = *(uint *)((iVar3 + 4) * 4 + 8);
    } while (uVar5 == 0);
    uVar4 = 0;
    for (; uVar5 != 0; uVar5 = *(uint *)(uVar5 + 4)) {
      if (*(ushort *)(uVar5 + 2) + uVar5 == uVar6) {
        uVar6 = (uint)uVar2 + (uint)*(ushort *)(uVar5 + 2);
        iVar3 = *(int *)(uVar5 + 4);
        sVar1 = (short)(uVar6 * 0x10000 >> 0x10);
        *(short *)(uVar5 + 2) = sVar1;
        if (iVar3 != (uVar6 & 0xffff) + uVar5) {
          return;
        }
        *(short *)(uVar5 + 2) = sVar1 + *(short *)(iVar3 + 2);
        iVar3 = *(int *)(iVar3 + 4);
        *(int *)(uVar5 + 4) = iVar3;
        if (iVar3 == 0) {
          return;
        }
        *(uint *)(iVar3 + 8) = uVar5;
        return;
      }
      if (uVar6 < uVar5) {
        *(uint *)(uVar4 + 4) = uVar6;
        *(uint *)((int)mem_ptr + 4) = uVar4;
        *(undefined2 *)((int)mem_ptr + -4) = 0xa55a;
        if (uVar5 == uVar2 + uVar6) {
          iVar3 = *(int *)(uVar5 + 4);
          *(int *)mem_ptr = iVar3;
          if (iVar3 != 0) {
            *(uint *)(iVar3 + 8) = uVar6;
          }
          uVar2 += *(short *)(uVar5 + 2);
        }
        else {
          *(uint *)mem_ptr = uVar5;
          *(uint *)(uVar5 + 8) = uVar6;
        }
        *(ushort *)((int)mem_ptr + -2) = uVar2;
        return;
      }
      uVar4 = uVar5;
    }
_L0:
    *(uint *)(uVar4 + 4) = uVar6;
    *(undefined4 *)mem_ptr = 0;
    *(uint *)((int)mem_ptr + 4) = uVar4;
    *(ushort *)((int)mem_ptr + -2) = uVar2;
    *(undefined2 *)((int)mem_ptr + -4) = 0xa55a;
  }
  return;
}



void FUN_00010524(int param_1)

{
  uint *unaff_s0;
  short sVar1;
  int unaff_s1;
  uint uVar2;
  int extraout_a0;
  int iVar3;
  uint uVar4;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  do {
    while (FUN_00010524(param_1), extraout_a0 == 0) {
      if (unaff_s3 != 0) {
        uVar2 = 0;
        goto _L0;
      }
      param_1 = 1;
      unaff_s3 = param_1;
    }
    uVar4 = *(uint *)((unaff_s3 + 4) * 4 + unaff_s4 + 8);
    param_1 = unaff_s3;
  } while (uVar4 == 0);
  uVar2 = 0;
  for (; uVar4 != 0; uVar4 = *(uint *)(uVar4 + 4)) {
    if (*(ushort *)(uVar4 + 2) + uVar4 == unaff_s2) {
      uVar2 = unaff_s1 + (uint)*(ushort *)(uVar4 + 2);
      iVar3 = *(int *)(uVar4 + 4);
      sVar1 = (short)(uVar2 * 0x10000 >> 0x10);
      *(short *)(uVar4 + 2) = sVar1;
      if (iVar3 != (uVar2 & 0xffff) + uVar4) {
        return;
      }
      *(short *)(uVar4 + 2) = sVar1 + *(short *)(iVar3 + 2);
      iVar3 = *(int *)(iVar3 + 4);
      *(int *)(uVar4 + 4) = iVar3;
      if (iVar3 == 0) {
        return;
      }
      *(uint *)(iVar3 + 8) = uVar4;
      return;
    }
    if (unaff_s2 < uVar4) {
      *(uint *)(uVar2 + 4) = unaff_s2;
      unaff_s0[1] = uVar2;
      *(undefined2 *)(unaff_s0 + -1) = 0xa55a;
      if (uVar4 == unaff_s1 + unaff_s2) {
        uVar2 = *(uint *)(uVar4 + 4);
        *unaff_s0 = uVar2;
        if (uVar2 != 0) {
          *(uint *)(uVar2 + 8) = unaff_s2;
        }
        unaff_s1 += (uint)*(ushort *)(uVar4 + 2);
      }
      else {
        *unaff_s0 = uVar4;
        *(uint *)(uVar4 + 8) = unaff_s2;
      }
      *(short *)((int)unaff_s0 + -2) = (short)unaff_s1;
      return;
    }
    uVar2 = uVar4;
  }
_L0:
  *(uint *)(uVar2 + 4) = unaff_s2;
  *unaff_s0 = 0;
  unaff_s0[1] = uVar2;
  *(short *)((int)unaff_s0 + -2) = (short)unaff_s1;
  *(undefined2 *)(unaff_s0 + -1) = 0xa55a;
  return;
}



// DWARF DIE: b65

uint32_t _patch_ble_ke_is_free(void *pRet,void *mem_ptr)

{
  *(bool *)pRet = *(short *)((int)mem_ptr + -4) != -0x7cc8;
  return 1;
}



// DWARF DIE: b0f

_Bool ble_ke_is_free(void *mem_ptr)

{
  int iVar1;
  undefined auStack17 [4];
  _Bool ret;
  
  iVar1 = (*pcRam00000000)(auStack17,mem_ptr,pcRam00000000);
  if (iVar1 == 0) {
    auStack17[0] = *(short *)((int)mem_ptr + -4) != -0x7cc8;
  }
  return (_Bool)auStack17[0];
}


