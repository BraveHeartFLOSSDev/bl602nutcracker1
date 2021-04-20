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

typedef union anon_union.conflicta1_for___value anon_union.conflicta1_for___value, *Panon_union.conflicta1_for___value;

typedef uint wint_t;

union anon_union.conflicta1_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflicta1_for___value __value;
};

typedef union anon_union.conflicta1 anon_union.conflicta1, *Panon_union.conflicta1;

union anon_union.conflicta1 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong uint32_t;

struct la_mem_format {
    uint32_t word[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr {
    uint16_t array[3];
};

typedef enum anon_enum_8.conflict961 {
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
} anon_enum_8.conflict961;

typedef uchar uint8_t;

typedef long int32_t;

typedef ulong UINT32;

typedef uchar UINT8;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict87b_for__new anon_union.conflict87b_for__new, *Panon_union.conflict87b_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict6ef anon_struct.conflict6ef, *Panon_struct.conflict6ef;

typedef struct anon_struct.conflict834 anon_struct.conflict834, *Panon_struct.conflict834;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct anon_struct.conflict834 {
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

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue {
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
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

struct anon_struct.conflict6ef {
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

union anon_union.conflict87b_for__new {
    struct anon_struct.conflict6ef _reent;
    struct anon_struct.conflict834 _unused;
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
    union anon_union.conflict87b_for__new _new;
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

typedef union anon_union.conflict87b anon_union.conflict87b, *Panon_union.conflict87b;

union anon_union.conflict87b {
    struct anon_struct.conflict6ef _reent;
    struct anon_struct.conflict834 _unused;
};

typedef struct Bl_MD5_CTX Bl_MD5_CTX, *PBl_MD5_CTX;

struct Bl_MD5_CTX {
    ulong state[4];
    ulong count[2];
    ulong scratch[16];
    uchar buffer[64];
};

typedef int32_t BaseType_t;

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




void wpa_MD5Transform(UINT32 *state,ulong *block)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  
  uVar19 = *block;
  uVar20 = state[2];
  uVar21 = state[3];
  uVar12 = state[1];
  uVar5 = block[1];
  uVar8 = ((uVar20 ^ uVar21) & uVar12 ^ uVar21) + *state + uVar19 + 0xd76aa478;
  uVar9 = (uVar8 >> 0x19 | uVar8 * 0x80) + uVar12;
  uVar22 = block[2];
  uVar8 = ((uVar12 ^ uVar20) & uVar9 ^ uVar20) + uVar5 + 0xe8c7b756 + uVar21;
  uVar6 = (uVar8 >> 0x14 | uVar8 * 0x1000) + uVar9;
  uVar8 = ((uVar12 ^ uVar9) & uVar6 ^ uVar12) + uVar22 + 0x242070db + uVar20;
  uVar14 = block[3];
  uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) + uVar6;
  uVar7 = ((uVar9 ^ uVar6) & uVar8 ^ uVar9) + uVar14 + 0xc1bdceee + uVar12;
  uVar24 = block[4];
  uVar7 = (uVar7 * 0x400000 | uVar7 >> 10) + uVar8;
  uVar9 = ((uVar6 ^ uVar8) & uVar7 ^ uVar6) + uVar24 + 0xf57c0faf + uVar9;
  uVar16 = block[5];
  uVar9 = (uVar9 >> 0x19 | uVar9 * 0x80) + uVar7;
  uVar6 = ((uVar8 ^ uVar7) & uVar9 ^ uVar8) + uVar16 + 0x4787c62a + uVar6;
  uVar1 = block[6];
  uVar6 = (uVar6 >> 0x14 | uVar6 * 0x1000) + uVar9;
  uVar8 = ((uVar7 ^ uVar9) & uVar6 ^ uVar7) + uVar1 + 0xa8304613 + uVar8;
  uVar18 = block[7];
  uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) + uVar6;
  uVar7 = ((uVar9 ^ uVar6) & uVar8 ^ uVar9) + uVar18 + 0xfd469501 + uVar7;
  uVar4 = block[8];
  uVar7 = (uVar7 * 0x400000 | uVar7 >> 10) + uVar8;
  uVar9 = ((uVar6 ^ uVar8) & uVar7 ^ uVar6) + uVar4 + 0x698098d8 + uVar9;
  uVar2 = block[9];
  uVar9 = (uVar9 >> 0x19 | uVar9 * 0x80) + uVar7;
  uVar6 = ((uVar8 ^ uVar7) & uVar9 ^ uVar8) + uVar2 + 0x8b44f7af + uVar6;
  uVar13 = block[10];
  uVar6 = (uVar6 >> 0x14 | uVar6 * 0x1000) + uVar9;
  uVar8 = ((uVar7 ^ uVar9) & uVar6 ^ uVar7) + (uVar13 - 0xa44f) + uVar8;
  uVar23 = block[0xb];
  uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) + uVar6;
  uVar7 = ((uVar9 ^ uVar6) & uVar8 ^ uVar9) + uVar23 + 0x895cd7be + uVar7;
  uVar15 = block[0xc];
  uVar7 = (uVar7 * 0x400000 | uVar7 >> 10) + uVar8;
  uVar9 = ((uVar6 ^ uVar8) & uVar7 ^ uVar6) + uVar15 + 0x6b901122 + uVar9;
  uVar25 = block[0xd];
  uVar9 = (uVar9 >> 0x19 | uVar9 * 0x80) + uVar7;
  uVar6 = ((uVar8 ^ uVar7) & uVar9 ^ uVar8) + uVar25 + 0xfd987193 + uVar6;
  uVar17 = block[0xe];
  uVar6 = (uVar6 >> 0x14 | uVar6 * 0x1000) + uVar9;
  uVar8 = ((uVar7 ^ uVar9) & uVar6 ^ uVar7) + uVar17 + 0xa679438e + uVar8;
  uVar3 = block[0xf];
  uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) + uVar6;
  uVar7 = ((uVar9 ^ uVar6) & uVar8 ^ uVar9) + uVar3 + 0x49b40821 + uVar7;
  uVar7 = (uVar7 * 0x400000 | uVar7 >> 10) + uVar8;
  uVar9 = ((uVar8 ^ uVar7) & uVar6 ^ uVar8) + uVar5 + 0xf61e2562 + uVar9;
  uVar9 = (uVar9 >> 0x1b | uVar9 * 0x20) + uVar7;
  uVar6 = ((uVar7 ^ uVar9) & uVar8 ^ uVar7) + uVar1 + 0xc040b340 + uVar6;
  uVar6 = (uVar6 >> 0x17 | uVar6 * 0x200) + uVar9;
  uVar8 = ((uVar9 ^ uVar6) & uVar7 ^ uVar9) + uVar23 + 0x265e5a51 + uVar8;
  uVar8 = (uVar8 >> 0x12 | uVar8 * 0x4000) + uVar6;
  uVar7 = ((uVar6 ^ uVar8) & uVar9 ^ uVar6) + uVar19 + 0xe9b6c7aa + uVar7;
  uVar7 = (uVar7 * 0x100000 | uVar7 >> 0xc) + uVar8;
  uVar9 = ((uVar8 ^ uVar7) & uVar6 ^ uVar8) + uVar16 + 0xd62f105d + uVar9;
  uVar9 = (uVar9 >> 0x1b | uVar9 * 0x20) + uVar7;
  uVar6 = ((uVar7 ^ uVar9) & uVar8 ^ uVar7) + uVar13 + 0x2441453 + uVar6;
  uVar6 = (uVar6 >> 0x17 | uVar6 * 0x200) + uVar9;
  uVar8 = ((uVar9 ^ uVar6) & uVar7 ^ uVar9) + uVar3 + 0xd8a1e681 + uVar8;
  uVar8 = (uVar8 >> 0x12 | uVar8 * 0x4000) + uVar6;
  uVar7 = ((uVar6 ^ uVar8) & uVar9 ^ uVar6) + uVar24 + 0xe7d3fbc8 + uVar7;
  uVar7 = (uVar7 * 0x100000 | uVar7 >> 0xc) + uVar8;
  uVar9 = ((uVar8 ^ uVar7) & uVar6 ^ uVar8) + uVar2 + 0x21e1cde6 + uVar9;
  uVar9 = (uVar9 >> 0x1b | uVar9 * 0x20) + uVar7;
  uVar6 = ((uVar7 ^ uVar9) & uVar8 ^ uVar7) + uVar17 + 0xc33707d6 + uVar6;
  uVar6 = (uVar6 >> 0x17 | uVar6 * 0x200) + uVar9;
  uVar8 = ((uVar9 ^ uVar6) & uVar7 ^ uVar9) + uVar14 + 0xf4d50d87 + uVar8;
  uVar8 = (uVar8 >> 0x12 | uVar8 * 0x4000) + uVar6;
  uVar7 = ((uVar6 ^ uVar8) & uVar9 ^ uVar6) + uVar4 + 0x455a14ed + uVar7;
  uVar7 = (uVar7 * 0x100000 | uVar7 >> 0xc) + uVar8;
  uVar9 = ((uVar8 ^ uVar7) & uVar6 ^ uVar8) + uVar25 + 0xa9e3e905 + uVar9;
  uVar9 = (uVar9 >> 0x1b | uVar9 * 0x20) + uVar7;
  uVar6 = ((uVar7 ^ uVar9) & uVar8 ^ uVar7) + uVar22 + 0xfcefa3f8 + uVar6;
  uVar6 = (uVar6 >> 0x17 | uVar6 * 0x200) + uVar9;
  uVar8 = ((uVar9 ^ uVar6) & uVar7 ^ uVar9) + uVar8 + uVar18 + 0x676f02d9;
  uVar8 = (uVar8 >> 0x12 | uVar8 * 0x4000) + uVar6;
  uVar7 = (uVar9 & (uVar6 ^ uVar8) ^ uVar6) + uVar15 + 0x8d2a4c8a + uVar7;
  uVar7 = (uVar7 * 0x100000 | uVar7 >> 0xc) + uVar8;
  uVar9 = uVar9 + (uVar16 - 0x5c6be) + (uVar6 ^ uVar8 ^ uVar7);
  uVar10 = (uVar9 >> 0x1c | uVar9 * 0x10) + uVar7;
  uVar6 = (uVar8 ^ uVar7 ^ uVar10) + uVar4 + 0x8771f681 + uVar6;
  uVar6 = (uVar6 >> 0x15 | uVar6 * 0x800) + uVar10;
  uVar8 = (uVar7 ^ uVar10 ^ uVar6) + uVar23 + 0x6d9d6122 + uVar8;
  uVar8 = (uVar8 >> 0x10 | uVar8 * 0x10000) + uVar6;
  uVar7 = (uVar10 ^ uVar6 ^ uVar8) + uVar17 + 0xfde5380c + uVar7;
  uVar9 = (uVar7 * 0x800000 | uVar7 >> 9) + uVar8;
  uVar7 = (uVar6 ^ uVar8 ^ uVar9) + uVar5 + 0xa4beea44 + uVar10;
  uVar10 = (uVar7 >> 0x1c | uVar7 * 0x10) + uVar9;
  uVar6 = (uVar8 ^ uVar9 ^ uVar10) + uVar6 + uVar24 + 0x4bdecfa9;
  uVar6 = (uVar6 >> 0x15 | uVar6 * 0x800) + uVar10;
  uVar8 = (uVar9 ^ uVar10 ^ uVar6) + uVar8 + uVar18 + 0xf6bb4b60;
  uVar7 = (uVar8 >> 0x10 | uVar8 * 0x10000) + uVar6;
  uVar8 = (uVar10 ^ uVar6 ^ uVar7) + uVar13 + 0xbebfbc70 + uVar9;
  uVar9 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar7;
  uVar8 = (uVar6 ^ uVar7 ^ uVar9) + uVar10 + uVar25 + 0x289b7ec6;
  uVar8 = (uVar8 >> 0x1c | uVar8 * 0x10) + uVar9;
  uVar6 = (uVar7 ^ uVar9 ^ uVar8) + uVar6 + uVar19 + 0xeaa127fa;
  uVar10 = (uVar6 >> 0x15 | uVar6 * 0x800) + uVar8;
  uVar6 = (uVar9 ^ uVar8 ^ uVar10) + uVar14 + 0xd4ef3085 + uVar7;
  uVar7 = (uVar6 >> 0x10 | uVar6 * 0x10000) + uVar10;
  uVar6 = (uVar8 ^ uVar10 ^ uVar7) + uVar9 + uVar1 + 0x4881d05;
  uVar6 = (uVar6 * 0x800000 | uVar6 >> 9) + uVar7;
  uVar8 = (uVar10 ^ uVar7 ^ uVar6) + uVar8 + uVar2 + 0xd9d4d039;
  uVar9 = (uVar8 >> 0x1c | uVar8 * 0x10) + uVar6;
  uVar8 = (uVar7 ^ uVar6 ^ uVar9) + uVar10 + uVar15 + 0xe6db99e5;
  uVar8 = (uVar8 >> 0x15 | uVar8 * 0x800) + uVar9;
  uVar7 = (uVar6 ^ uVar9 ^ uVar8) + uVar3 + 0x1fa27cf8 + uVar7;
  uVar7 = (uVar7 >> 0x10 | uVar7 * 0x10000) + uVar8;
  uVar6 = (uVar9 ^ uVar8 ^ uVar7) + uVar6 + uVar22 + 0xc4ac5665;
  uVar10 = (uVar6 * 0x800000 | uVar6 >> 9) + uVar7;
  uVar6 = ((~uVar8 | uVar10) ^ uVar7) + uVar19 + 0xf4292244 + uVar9;
  uVar9 = (uVar6 >> 0x1a | uVar6 * 0x40) + uVar10;
  uVar8 = ((~uVar7 | uVar9) ^ uVar10) + uVar18 + 0x432aff97 + uVar8;
  uVar8 = (uVar8 >> 0x16 | uVar8 * 0x400) + uVar9;
  uVar6 = ((~uVar10 | uVar8) ^ uVar9) + uVar17 + 0xab9423a7 + uVar7;
  uVar7 = (uVar6 >> 0x11 | uVar6 * 0x8000) + uVar8;
  uVar6 = ((~uVar9 | uVar7) ^ uVar8) + uVar10 + uVar16 + 0xfc93a039;
  uVar6 = (uVar6 * 0x200000 | uVar6 >> 0xb) + uVar7;
  uVar9 = ((~uVar8 | uVar6) ^ uVar7) + uVar9 + uVar15 + 0x655b59c3;
  uVar11 = (uVar9 >> 0x1a | uVar9 * 0x40) + uVar6;
  uVar8 = ((~uVar7 | uVar11) ^ uVar6) + uVar8 + uVar14 + 0x8f0ccc92;
  uVar10 = (uVar8 >> 0x16 | uVar8 * 0x400) + uVar11;
  uVar8 = ((~uVar6 | uVar10) ^ uVar11) + (uVar13 - 0x100b83) + uVar7;
  uVar7 = (uVar8 >> 0x11 | uVar8 * 0x8000) + uVar10;
  uVar8 = ((~uVar11 | uVar7) ^ uVar10) + uVar5 + 0x85845dd1 + uVar6;
  uVar9 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar7;
  uVar8 = ((~uVar10 | uVar9) ^ uVar7) + uVar11 + uVar4 + 0x6fa87e4f;
  uVar6 = (uVar8 >> 0x1a | uVar8 * 0x40) + uVar9;
  uVar8 = ((~uVar7 | uVar6) ^ uVar9) + uVar10 + uVar3 + 0xfe2ce6e0;
  uVar8 = (uVar8 >> 0x16 | uVar8 * 0x400) + uVar6;
  uVar7 = ((~uVar9 | uVar8) ^ uVar6) + uVar7 + uVar1 + 0xa3014314;
  uVar7 = (uVar7 >> 0x11 | uVar7 * 0x8000) + uVar8;
  uVar9 = ((~uVar6 | uVar7) ^ uVar8) + uVar25 + 0x4e0811a1 + uVar9;
  uVar9 = (uVar9 * 0x200000 | uVar9 >> 0xb) + uVar7;
  uVar6 = ((~uVar8 | uVar9) ^ uVar7) + uVar6 + uVar24 + 0xf7537e82;
  uVar11 = (uVar6 >> 0x1a | uVar6 * 0x40) + uVar9;
  uVar8 = ((~uVar7 | uVar11) ^ uVar9) + uVar8 + uVar23 + 0xbd3af235;
  uVar10 = (uVar8 >> 0x16 | uVar8 * 0x400) + uVar11;
  uVar8 = ((~uVar9 | uVar10) ^ uVar11) + uVar7 + uVar22 + 0x2ad7d2bb;
  uVar6 = (uVar8 >> 0x11 | uVar8 * 0x8000) + uVar10;
  uVar8 = ((~uVar11 | uVar6) ^ uVar10) + uVar2 + 0xeb86d391 + uVar9;
  *state = uVar11 + *state;
  state[2] = uVar20 + uVar6;
  state[3] = uVar21 + uVar10;
  state[1] = uVar12 + uVar6 + (uVar8 * 0x200000 | uVar8 >> 0xb);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void wpa_MD5Init(Bl_MD5_CTX *context)

{
  context->state[0] = 0x67452301;
  context->state[1] = 0xefcdab89;
  context->state[2] = 0x98badcfe;
  context->count[1] = 0;
  context->count[0] = 0;
  context->state[3] = 0x10325476;
  return;
}



void wpa_MD5Update(Bl_MD5_CTX *context,UINT8 *input,UINT32 inputLen)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = context->count[0];
  uVar2 = uVar1 + inputLen * 8;
  context->count[0] = uVar2;
  uVar1 = uVar1 >> 3 & 0x3f;
  if (uVar2 < inputLen * 8) {
    context->count[1] = context->count[1] + 1;
  }
  context->count[1] = (inputLen >> 0x1d) + context->count[1];
  uVar2 = 0x40 - uVar1;
  if (uVar2 <= inputLen) {
    _LVL329(context->buffer + uVar1,input,uVar2);
    FUN_00010948(context,context->buffer);
    while (uVar2 + 0x3f < inputLen) {
      FUN_0001098c(context->scratch,input + uVar2,0x40);
      FUN_00010998(context,context->scratch);
      uVar2 = uVar2 + 0x40;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL329(void)

{
  int unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  int unaff_s3;
  
  _LVL329();
  FUN_00010948(unaff_s0 + 0x58);
  while (unaff_s1 + 0x3fU < unaff_s2) {
    FUN_0001098c(unaff_s0 + 0x18,unaff_s3 + unaff_s1,0x40);
    FUN_00010998(unaff_s0 + 0x18);
    unaff_s1 = unaff_s1 + 0x40;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010948(void)

{
  int unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  int unaff_s3;
  
  FUN_00010948();
  while (unaff_s1 + 0x3fU < unaff_s2) {
    FUN_0001098c(unaff_s0 + 0x18,unaff_s3 + unaff_s1,0x40);
    FUN_00010998(unaff_s0 + 0x18);
    unaff_s1 = unaff_s1 + 0x40;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001098c(int param_1,undefined4 param_2)

{
  int unaff_s1;
  uint unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_0001098c(param_1,param_2);
    FUN_00010998();
    param_1 = unaff_s3 + unaff_s1 + 0x40;
    if (unaff_s2 <= unaff_s1 + 0x7fU) break;
    param_2 = 0x40;
    unaff_s1 = unaff_s1 + 0x40;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010998(void)

{
  int unaff_s1;
  uint unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_00010998();
    if (unaff_s2 <= unaff_s1 + 0x7fU) break;
    FUN_0001098c(unaff_s3 + unaff_s1 + 0x40,0x40);
    unaff_s1 = unaff_s1 + 0x40;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void wpa_MD5Final(uchar *digest,Bl_MD5_CTX *context)

{
  uint uVar1;
  int iVar2;
  undefined auStack24 [4];
  uchar bits [8];
  
  _L0(auStack24,context->count,8);
  uVar1 = context->count[0] >> 3 & 0x3f;
  if (uVar1 < 0x38) {
    iVar2 = 0x38;
  }
  else {
    iVar2 = 0x78;
  }
  FUN_000109e6(context,0,iVar2 - uVar1);
  FUN_000109f4(context,auStack24,8);
  FUN_00010a02(digest,context,0x10);
  FUN_00010a12(context,0,0x98);
  return;
}



void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  
  _L0();
  uVar1 = *(uint *)(unaff_s0 + 0x10) >> 3 & 0x3f;
  if (uVar1 < 0x38) {
    iVar2 = 0x38;
  }
  else {
    iVar2 = 0x78;
  }
  FUN_000109e6(0,iVar2 - uVar1);
  FUN_000109f4(&stack0x00000008,8);
  FUN_00010a02(0x10);
  FUN_00010a12(0,0x98);
  return;
}



void FUN_000109e6(void)

{
  FUN_000109e6();
  FUN_000109f4(&stack0x00000008,8);
  FUN_00010a02(0x10);
  FUN_00010a12(0,0x98);
  return;
}



void FUN_000109f4(void)

{
  FUN_000109f4();
  FUN_00010a02(0x10);
  FUN_00010a12(0,0x98);
  return;
}



void FUN_00010a02(void)

{
  FUN_00010a02();
  FUN_00010a12(0,0x98);
  return;
}



void FUN_00010a12(void)

{
  FUN_00010a12();
  return;
}


