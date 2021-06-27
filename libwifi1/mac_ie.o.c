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

typedef union anon_union.conflict89a_for__new anon_union.conflict89a_for__new, *Panon_union.conflict89a_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict70e anon_struct.conflict70e, *Panon_struct.conflict70e;

typedef struct anon_struct.conflict853 anon_struct.conflict853, *Panon_struct.conflict853;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflictc0_for___value anon_union.conflictc0_for___value, *Panon_union.conflictc0_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

struct _rand48 { // DWARF DIE: 6c5
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

union anon_union.conflictc0_for___value { // DWARF DIE: c0
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: f2
    int __count;
    union anon_union.conflictc0_for___value __value;
};

struct __tm { // DWARF DIE: 1b8
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

struct anon_struct.conflict70e { // DWARF DIE: 70e
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

struct anon_struct.conflict853 { // DWARF DIE: 853
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict89a_for__new { // DWARF DIE: 89a
    struct anon_struct.conflict70e _reent;
    struct anon_struct.conflict853 _unused;
};

struct _Bigint { // DWARF DIE: 148
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 680
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 23b
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 290
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 2f0
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 31e
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

struct _reent { // DWARF DIE: 48a
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
    union anon_union.conflict89a_for__new _new;
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

struct __locale_t { // DWARF DIE: 8cf
};

typedef union anon_union.conflict89a anon_union.conflict89a, *Panon_union.conflict89a;

union anon_union.conflict89a { // DWARF DIE: 89a
    struct anon_struct.conflict70e _reent;
    struct anon_struct.conflict853 _unused;
};

typedef ushort __uint16_t;

typedef ulong __uint32_t;

typedef uchar __uint8_t;

typedef union anon_union.conflictc0 anon_union.conflictc0, *Panon_union.conflictc0;

union anon_union.conflictc0 { // DWARF DIE: c0
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef __uint16_t uint16_t;

struct mac_addr { // DWARF DIE: 974
    uint16_t array[3];
};

typedef __uint8_t uint8_t;

typedef __uint32_t uint32_t;

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




// DWARF DIE: b07

uint32_t mac_ie_find(uint32_t addr,uint16_t buflen,uint8_t ie_id)

{
  undefined2 in_register_0000202e;
  byte *pbVar1;
  undefined3 in_register_00002031;
  
  pbVar1 = (byte *)(CONCAT22(in_register_0000202e,buflen) + addr);
  while( true ) {
    if (pbVar1 <= addr) {
      return (uint32_t)(byte *)0x0;
    }
    if ((uint)*(byte *)addr == CONCAT31(in_register_00002031,ie_id)) break;
    addr += *(byte *)(addr + 1) + 2;
  }
  return (uint32_t)(byte *)addr;
}



// DWARF DIE: a04

uint32_t mac_vsie_find(uint32_t addr,uint16_t buflen,uint8_t *oui,uint8_t ouilen)

{
  uint8_t *puVar1;
  int iVar2;
  undefined2 in_register_0000202e;
  char *pcVar3;
  undefined3 in_register_00002035;
  int iVar4;
  
  pcVar3 = (char *)(CONCAT22(in_register_0000202e,buflen) + addr);
  for (; addr < pcVar3; addr += *(byte *)(addr + 1) + 2) {
    if (*(char *)addr == -0x23) {
      iVar4 = 0;
      do {
        if (CONCAT31(in_register_00002035,ouilen) == iVar4) {
          return addr;
        }
        iVar2 = iVar4 + 2;
        puVar1 = oui + iVar4;
        iVar4 = iVar4 + 1;
      } while (*puVar1 == *(uint8_t *)(addr + iVar2));
    }
  }
  if ((char *)addr != pcVar3) {
    _L0();
    return (uint32_t)(char *)0x0;
  }
  return (uint32_t)(char *)0x0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}


