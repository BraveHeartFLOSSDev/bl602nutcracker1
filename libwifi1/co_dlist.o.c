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

typedef struct __sFILE __sFILE, *P__sFILE;

typedef int _ssize_t;

typedef struct _reent _reent, *P_reent;

typedef long _fpos_t;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict89f_for__new anon_union.conflict89f_for__new, *Panon_union.conflict89f_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict713 anon_struct.conflict713, *Panon_struct.conflict713;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflictc5_for___value anon_union.conflictc5_for___value, *Panon_union.conflictc5_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

struct __tm { // DWARF DIE: 1bd
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

union anon_union.conflictc5_for___value { // DWARF DIE: c5
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: f7
    int __count;
    union anon_union.conflictc5_for___value __value;
};

struct _rand48 { // DWARF DIE: 6ca
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict713 { // DWARF DIE: 713
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

struct _Bigint { // DWARF DIE: 14d
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 685
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 240
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 295
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

union anon_union.conflict89f_for__new { // DWARF DIE: 89f
    struct anon_struct.conflict713 _reent;
    struct anon_struct.conflict713 _unused;
};

struct __sbuf { // DWARF DIE: 2f5
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 323
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

struct _reent { // DWARF DIE: 48f
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
    union anon_union.conflict89f_for__new _new;
    undefined field_0x128;
    undefined field_0x129;
    undefined field_0x12a;
    undefined field_0x12b;
    undefined field_0x12c;
    undefined field_0x12d;
    undefined field_0x12e;
    undefined field_0x12f;
    undefined field_0x130;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
    undefined field_0x134;
    undefined field_0x135;
    undefined field_0x136;
    undefined field_0x137;
    undefined field_0x138;
    undefined field_0x139;
    undefined field_0x13a;
    undefined field_0x13b;
    undefined field_0x13c;
    undefined field_0x13d;
    undefined field_0x13e;
    undefined field_0x13f;
    undefined field_0x140;
    undefined field_0x141;
    undefined field_0x142;
    undefined field_0x143;
    undefined field_0x144;
    undefined field_0x145;
    undefined field_0x146;
    undefined field_0x147;
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

struct __locale_t { // DWARF DIE: 8d4
};

typedef union anon_union.conflict89f anon_union.conflict89f, *Panon_union.conflict89f;

union anon_union.conflict89f { // DWARF DIE: 89f
    struct anon_struct.conflict713 _reent;
    struct anon_struct.conflict713 _unused;
    undefined1 field2[240]; // Automatically generated padding to match DWARF declared size
};

typedef union anon_union.conflictc5 anon_union.conflictc5, *Panon_union.conflictc5;

union anon_union.conflictc5 { // DWARF DIE: c5
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct co_dlist co_dlist, *Pco_dlist;

typedef struct co_dlist_hdr co_dlist_hdr, *Pco_dlist_hdr;

typedef ulong uint32_t;

struct co_dlist_hdr { // DWARF DIE: 9e0
    struct co_dlist_hdr * next;
    struct co_dlist_hdr * prev;
};

struct co_dlist { // DWARF DIE: a13
    struct co_dlist_hdr * first;
    struct co_dlist_hdr * last;
    uint32_t cnt;
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr { // DWARF DIE: 950
    uint16_t array[3];
};

typedef uchar uint8_t;

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




// DWARF DIE: b61

void co_dlist_init(co_dlist *list)

{
  list->first = (co_dlist_hdr *)0x0;
  list->last = (co_dlist_hdr *)0x0;
  list->cnt = 0;
  return;
}



// DWARF DIE: b2e

void co_dlist_push_back(co_dlist *list,co_dlist_hdr *list_hdr)

{
  if (list->first == (co_dlist_hdr *)0x0) {
    list->first = list_hdr;
  }
  else {
    list->last->next = list_hdr;
  }
  list_hdr->prev = list->last;
  list->last = list_hdr;
  list_hdr->next = (co_dlist_hdr *)0x0;
  list->cnt = list->cnt + 1;
  return;
}



// DWARF DIE: afb

void co_dlist_push_front(co_dlist *list,co_dlist_hdr *list_hdr)

{
  if (list->first == (co_dlist_hdr *)0x0) {
    list->last = list_hdr;
  }
  else {
    list->first->prev = list_hdr;
  }
  list_hdr->next = list->first;
  list->first = list_hdr;
  list_hdr->prev = (co_dlist_hdr *)0x0;
  list->cnt = list->cnt + 1;
  return;
}



// DWARF DIE: ac2

co_dlist_hdr * co_dlist_pop_front(co_dlist *list)

{
  co_dlist_hdr *pcVar1;
  co_dlist_hdr *pcVar2;
  
  pcVar1 = list->first;
  if (pcVar1 != (co_dlist_hdr *)0x0) {
    list->cnt = list->cnt - 1;
    pcVar2 = pcVar1->next;
    list->first = pcVar2;
    if (pcVar2 != (co_dlist_hdr *)0x0) {
      pcVar2->prev = (co_dlist_hdr *)0x0;
      return pcVar1;
    }
    list->last = (co_dlist_hdr *)0x0;
  }
  return pcVar1;
}



// DWARF DIE: a4d

void co_dlist_extract(co_dlist *list,co_dlist_hdr *list_hdr)

{
  co_dlist_hdr *pcVar1;
  co_dlist_hdr *pcVar2;
  
  pcVar2 = list->first;
  if (pcVar2 == (co_dlist_hdr *)0x0) {
    FUN_00010090();
  }
  pcVar1 = list_hdr->next;
  if (pcVar2 == list_hdr) {
    list->first = pcVar1;
    if (pcVar1 == (co_dlist_hdr *)0x0) {
      list->last = (co_dlist_hdr *)0x0;
    }
    else {
      pcVar1->prev = (co_dlist_hdr *)0x0;
    }
  }
  else {
    list_hdr->prev->next = pcVar1;
    if (list->last == list_hdr) {
      list->last = list_hdr->prev;
    }
    else {
      pcVar1->prev = list_hdr->prev;
    }
  }
  list->cnt = list->cnt - 1;
  return;
}



void FUN_00010090(void)

{
  int *unaff_s0;
  int *unaff_s1;
  int iVar1;
  int *unaff_s2;
  
  FUN_00010090();
  iVar1 = *unaff_s1;
  if (unaff_s2 == unaff_s1) {
    *unaff_s0 = iVar1;
    if (iVar1 == 0) {
      unaff_s0[1] = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  else {
    *(int *)unaff_s1[1] = iVar1;
    if ((int *)unaff_s0[1] == unaff_s1) {
      unaff_s0[1] = unaff_s1[1];
    }
    else {
      *(int *)(iVar1 + 4) = unaff_s1[1];
    }
  }
  unaff_s0[2] = unaff_s0[2] + -1;
  return;
}


