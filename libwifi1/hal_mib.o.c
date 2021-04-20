typedef unsigned char   undefined;

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
typedef struct __sFILE __sFILE, *P__sFILE;

typedef int _ssize_t;

typedef struct _reent _reent, *P_reent;

typedef long _fpos_t;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict882_for__new anon_union.conflict882_for__new, *Panon_union.conflict882_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict6f6 anon_struct.conflict6f6, *Panon_struct.conflict6f6;

typedef struct anon_struct.conflict83b anon_struct.conflict83b, *Panon_struct.conflict83b;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflicta8_for___value anon_union.conflicta8_for___value, *Panon_union.conflicta8_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

struct _Bigint {
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
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

union anon_union.conflicta8_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflicta8_for___value __value;
};

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict6f6 {
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

struct _glue {
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct anon_struct.conflict83b {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict882_for__new {
    struct anon_struct.conflict6f6 _reent;
    struct anon_struct.conflict83b _unused;
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
    union anon_union.conflict882_for__new _new;
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

typedef union anon_union.conflict882 anon_union.conflict882, *Panon_union.conflict882;

union anon_union.conflict882 {
    struct anon_struct.conflict6f6 _reent;
    struct anon_struct.conflict83b _unused;
};

typedef ulong __uint32_t;

typedef union anon_union.conflicta8 anon_union.conflicta8, *Panon_union.conflicta8;

union anon_union.conflicta8 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct machw_mib_tag machw_mib_tag, *Pmachw_mib_tag;

typedef __uint32_t uint32_t;

struct machw_mib_tag {
    uint32_t dot11_wep_excluded_count;
    uint32_t dot11_fcs_error_count;
    uint32_t nx_rx_phy_error_count;
    uint32_t nx_rd_fifo_overflow_count;
    uint32_t nx_tx_underun_count;
    uint32_t reserved_1[7];
    uint32_t nx_qos_utransmitted_mpdu_count[8];
    uint32_t nx_qos_gtransmitted_mpdu_count[8];
    uint32_t dot11_qos_failed_count[8];
    uint32_t dot11_qos_retry_count[8];
    uint32_t dot11_qos_rts_success_count[8];
    uint32_t dot11_qos_rts_failure_count[8];
    uint32_t nx_qos_ack_failure_count[8];
    uint32_t nx_qos_ureceived_mpdu_count[8];
    uint32_t nx_qos_greceived_mpdu_count[8];
    uint32_t nx_qos_ureceived_other_mpdu[8];
    uint32_t dot11_qos_retries_received_count[8];
    uint32_t nx_utransmitted_amsdu_count[8];
    uint32_t nx_gtransmitted_amsdu_count[8];
    uint32_t dot11_failed_amsdu_count[8];
    uint32_t dot11_retry_amsdu_count[8];
    uint32_t dot11_transmitted_octets_in_amsdu[8];
    uint32_t dot11_amsdu_ack_failure_count[8];
    uint32_t nx_ureceived_amsdu_count[8];
    uint32_t nx_greceived_amsdu_count[8];
    uint32_t nx_ureceived_other_amsdu[8];
    uint32_t dot11_received_octets_in_amsdu_count[8];
    uint32_t reserved_2[24];
    uint32_t dot11_transmitted_ampdu_count;
    uint32_t dot11_transmitted_mpdus_in_ampdu_count;
    uint32_t dot11_transmitted_octets_in_ampdu_count;
    uint32_t wnlu_ampdu_received_count;
    uint32_t nx_gampdu_received_count;
    uint32_t nx_other_ampdu_received_count;
    uint32_t dot11_mpdu_in_received_ampdu_count;
    uint32_t dot11_received_octets_in_ampdu_count;
    uint32_t dot11_ampdu_delimiter_crc_error_count;
    uint32_t dot11_implicit_bar_failure_count;
    uint32_t dot11_explicit_bar_failure_count;
    uint32_t reserved_3[5];
    uint32_t dot11_20mhz_frame_transmitted_count;
    uint32_t dot11_40mhz_frame_transmitted_count;
    uint32_t dot11_20mhz_frame_received_count;
    uint32_t dot11_40mhz_frame_received_count;
    uint32_t nx_failed_40mhz_txop;
    uint32_t nx_successful_txops;
    uint32_t reserved_4[4];
    uint32_t dot11_dualcts_success_count;
    uint32_t dot11_stbc_cts_success_count;
    uint32_t dot11_stbc_cts_failure_count;
    uint32_t dot11_non_stbc_cts_success_count;
    uint32_t dot11_non_stbc_cts_failure_count;
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




void hal_mib_dump(void)

{
  _L0(0);
  _L0(0,*(undefined4 *)(iRam00000000 + 0xc));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0(0,*(undefined4 *)(iRam00000000 + 0xc));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


