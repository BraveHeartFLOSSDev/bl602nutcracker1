typedef unsigned char   undefined;

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
typedef struct __sFILE __sFILE, *P__sFILE;

typedef int _ssize_t;

typedef struct _reent _reent, *P_reent;

typedef long _fpos_t;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict912_for__new anon_union.conflict912_for__new, *Panon_union.conflict912_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict786 anon_struct.conflict786, *Panon_struct.conflict786;

typedef struct anon_struct.conflict8cb anon_struct.conflict8cb, *Panon_struct.conflict8cb;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflict141_for___value anon_union.conflict141_for___value, *Panon_union.conflict141_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

struct anon_struct.conflict8cb { // DWARF DIE: 8cb
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict141_for___value { // DWARF DIE: 141
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 173
    int __count;
    union anon_union.conflict141_for___value __value;
};

struct _rand48 { // DWARF DIE: 73d
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 237
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

struct anon_struct.conflict786 { // DWARF DIE: 786
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

union anon_union.conflict912_for__new { // DWARF DIE: 912
    struct anon_struct.conflict786 _reent;
    struct anon_struct.conflict8cb _unused;
};

struct _Bigint { // DWARF DIE: 1c7
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 6f8
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 2ba
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 30f
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 368
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 396
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

struct _reent { // DWARF DIE: 502
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
    union anon_union.conflict912_for__new _new;
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

struct __locale_t { // DWARF DIE: 947
};

typedef union anon_union.conflict912 anon_union.conflict912, *Panon_union.conflict912;

union anon_union.conflict912 { // DWARF DIE: 912
    struct anon_struct.conflict786 _reent;
    struct anon_struct.conflict8cb _unused;
};

typedef union anon_union.conflict141 anon_union.conflict141, *Panon_union.conflict141;

union anon_union.conflict141 { // DWARF DIE: 141
    wint_t __wch;
    uchar __wchb[4];
};

typedef enum KE_EVENT_TYPE {
    KE_EVENT_BLE_CRYPT=1,
    KE_EVENT_BLE_EVT_DEFER=8,
    KE_EVENT_BLE_EVT_DELETE=9,
    KE_EVENT_BT_PSCAN_PROC=7,
    KE_EVENT_ECC_MULTIPLICATION=0,
    KE_EVENT_H4TL_CMD_HDR_RX=5,
    KE_EVENT_H4TL_CMD_PLD_RX=6,
    KE_EVENT_H4TL_TX=4,
    KE_EVENT_KE_MESSAGE=2,
    KE_EVENT_KE_TIMER=3,
    KE_EVENT_MAX=10
} KE_EVENT_TYPE;

typedef ulong uint32_t;

typedef uchar uint8_t;

typedef enum KE_EVENT_STATUS {
    KE_EVENT_ALREADY_EXISTS=4,
    KE_EVENT_CAPA_EXCEEDED=3,
    KE_EVENT_FAIL=1,
    KE_EVENT_OK=0,
    KE_EVENT_UNKNOWN=2
} KE_EVENT_STATUS;

typedef void (* p_callback_t)(void);

typedef struct ble_ke_event_env_tag ble_ke_event_env_tag, *Pble_ke_event_env_tag;

struct ble_ke_event_env_tag { // DWARF DIE: ad1
    uint32_t event_field;
    p_callback_t callback[10];
    uint8_t state;
    undefined field_0x2d;
    undefined field_0x2e;
    undefined field_0x2f;
};

typedef enum anon_enum_8.conflictab6 {
    KE_EVT_IDLE=0,
    KE_EVT_RUNNING=1
} anon_enum_8.conflictab6;

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
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




// DWARF DIE: 1081

uint32_t _patch_ble_ke_event_init(void *pRet)

{
  (*pcRam00000000)(0,0,0x30,pcRam00000000);
  return 1;
}



// DWARF DIE: 1041

void ble_ke_event_init(void)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,pcRam00000000);
  if (iVar1 == 0) {
                    // WARNING: Could not recover jumptable at 0x00010050. Too many branches
                    // WARNING: Treating indirect jump as call
    (*pcRam00000000)(0,0,0x30);
    return;
  }
  return;
}



// DWARF DIE: fe2

uint32_t _patch_ble_ke_event_callback_set
                   (void *pRet,uint8_t event_type,intCallback_Type *p_callback)

{
  undefined3 in_register_0000202d;
  
  *(undefined *)pRet = 3;
  if (CONCAT31(in_register_0000202d,event_type) < 10) {
    *(intCallback_Type **)(CONCAT31(in_register_0000202d,event_type) * 4 + 4) = p_callback;
    *(undefined *)pRet = 0;
  }
  return 1;
}



// DWARF DIE: f80

uint8_t ble_ke_event_callback_set(uint8_t event_type,intCallback_Type *p_callback)

{
  undefined3 in_register_00002029;
  uint uVar1;
  int iVar2;
  uint8_t auStack17 [4];
  uint8_t status;
  
  uVar1 = CONCAT31(in_register_00002029,event_type);
  iVar2 = (*pcRam00000000)(auStack17,uVar1,p_callback,pcRam00000000);
  if ((iVar2 == 0) && (auStack17[0] = '\x03', uVar1 < 10)) {
    *(intCallback_Type **)(uVar1 * 4 + 4) = p_callback;
    auStack17[0] = '\0';
  }
  return auStack17[0];
}



// DWARF DIE: ef7

uint32_t _patch_ble_ke_event_set(void *pRet,uint8_t event_type)

{
  undefined3 in_register_0000202d;
  
  if (CONCAT31(in_register_0000202d,event_type) < 10) {
    pcRam00000000 = (code *)((uint)pcRam00000000 | 1 << (event_type & 0x1f));
  }
  if (DAT_0000002c == '\0') {
    (*pcRam00000000)(pcRam00000000);
    return 1;
  }
  return 1;
}



// DWARF DIE: e6d

void ble_ke_event_set(uint8_t event_type)

{
  undefined3 in_register_00002029;
  int iVar1;
  undefined4 in_mstatus;
  
  iVar1 = (*pcRam00000000)(0,CONCAT31(in_register_00002029,event_type),pcRam00000000);
  if (iVar1 == 0) {
    if (CONCAT31(in_register_00002029,event_type) < 10) {
      pcRam00000000 = (code *)((uint)pcRam00000000 | 1 << (event_type & 0x1f));
    }
    if (DAT_0000002c == '\0') {
                    // WARNING: Could not recover jumptable at 0x00010160. Too many branches
                    // WARNING: Treating indirect jump as call
      (*pcRam00000000)(in_mstatus);
      return;
    }
  }
  return;
}



// DWARF DIE: de8

uint32_t _patch_ble_ke_event_clear(void *pRet,uint8_t event_type)

{
  undefined3 in_register_0000202d;
  
  if (CONCAT31(in_register_0000202d,event_type) < 10) {
    uRam00000000 = ~(1 << (event_type & 0x1f)) & uRam00000000;
  }
  return 1;
}



// DWARF DIE: d5e

void ble_ke_event_clear(uint8_t event_type)

{
  undefined3 in_register_00002029;
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,CONCAT31(in_register_00002029,event_type),pcRam00000000);
  if ((iVar1 == 0) && (CONCAT31(in_register_00002029,event_type) < 10)) {
    pcRam00000000 = (code *)(~(1 << (event_type & 0x1f)) & (uint)pcRam00000000);
  }
  return;
}



// DWARF DIE: cd6

uint8_t ble_ke_event_get(uint8_t event_type)

{
  byte bVar1;
  undefined3 in_register_00002029;
  
  if (CONCAT31(in_register_00002029,event_type) < 10) {
    bVar1 = (byte)(uRam00000000 >> (event_type & 0x1f)) & 1;
  }
  else {
    bVar1 = 0;
  }
  return (uint8_t)bVar1;
}



// DWARF DIE: ca9

uint32_t _patch_ble_ke_event_get_all(void *pRet)

{
  *(undefined4 *)pRet = uRam00000000;
  return 1;
}



// DWARF DIE: c71

uint32_t ble_ke_event_get_all(void)

{
  int iVar1;
  code *pcVar2;
  code *pcStack20;
  uint32_t retVal;
  
  iVar1 = (*pcRam00000000)(&pcStack20,pcRam00000000);
  pcVar2 = pcRam00000000;
  if (iVar1 != 0) {
    pcVar2 = pcStack20;
  }
  return (uint32_t)pcVar2;
}



// DWARF DIE: c44

uint32_t _patch_ble_ke_event_flush(void *pRet)

{
  uRam00000000 = 0;
  return 1;
}



// DWARF DIE: c21

void ble_ke_event_flush(void)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,pcRam00000000);
  if (iVar1 == 0) {
    pcRam00000000 = (code *)0x0;
  }
  return;
}



// DWARF DIE: ba8

uint32_t _patch_ble_ke_event_schedule(void *pRet)

{
  uint uVar1;
  code *pcVar2;
  
  do {
    if (uRam00000000 == 0) {
      DAT_0000002c = 0;
      return 1;
    }
    DAT_0000002c = 1;
    uVar1 = 0;
    do {
      if ((0x80000000U >> (uVar1 & 0x1f) & uRam00000000) != 0) break;
      uVar1 += 1;
    } while (uVar1 != 0x20);
    pcVar2 = *(code **)((0x1f - uVar1 & 0xff) * 4 + 4);
    if (pcVar2 != (code *)0x0) {
      pRet = (void *)(*pcVar2)(pRet);
    }
  } while( true );
}



// DWARF DIE: b28

void ble_ke_event_schedule(undefined param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  
  iVar1 = (*pcRam00000000)(0,pcRam00000000);
  if (iVar1 == 0) {
    do {
      while (pcRam00000000 != (code *)0x0) {
        param_1 = 1;
        uVar2 = 0;
        do {
          if ((0x80000000U >> (uVar2 & 0x1f) & (uint)pcRam00000000) != 0) break;
          uVar2 += 1;
        } while (uVar2 != 0x20);
        pcVar3 = *(code **)((0x1f - uVar2 & 0xff) * 4 + 4);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
      }
      param_1 = 0;
    } while (false);
  }
  return;
}


