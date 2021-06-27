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
typedef unsigned long long    undefined6;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

typedef ulong uint32_t;

struct phy_channel_info { // DWARF DIE: bb9
    uint32_t info1;
    uint32_t info2;
};

typedef int _ssize_t;

typedef union anon_union.conflictd1 anon_union.conflictd1, *Panon_union.conflictd1;

typedef uint wint_t;

union anon_union.conflictd1 { // DWARF DIE: d1
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictd1_for___value anon_union.conflictd1_for___value, *Panon_union.conflictd1_for___value;

union anon_union.conflictd1_for___value { // DWARF DIE: d1
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 103
    int __count;
    union anon_union.conflictd1_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: be1
    uint32_t word[4];
};

typedef enum anon_enum_8.conflict95c {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_VI=2,
    AC_VO=3,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_DATA_RX=1,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_MAX=4,
    MAC_RATE_11MBPS=22,
    MAC_RATE_12MBPS=24,
    MAC_RATE_18MBPS=36,
    MAC_RATE_1MBPS=2,
    MAC_RATE_24MBPS=48,
    MAC_RATE_2MBPS=4,
    MAC_RATE_36MBPS=72,
    MAC_RATE_48MBPS=96,
    MAC_RATE_54MBPS=108,
    MAC_RATE_5_5MBPS=11,
    MAC_RATE_6MBPS=12,
    MAC_RATE_9MBPS=18,
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
} anon_enum_8.conflict95c;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr { // DWARF DIE: a2b
    uint16_t array[3];
};

typedef struct dma_desc dma_desc, *Pdma_desc;

struct dma_desc { // DWARF DIE: b28
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: b7c
    struct dma_desc * last_dma[4];
};

typedef uchar uint8_t;

typedef char int8_t;

typedef union anon_union.conflictc51 anon_union.conflictc51, *Panon_union.conflictc51;

union anon_union.conflictc51 { // DWARF DIE: c51
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

struct tx_cfm_tag { // DWARF DIE: fcf
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

typedef union anon_union.conflictc76 anon_union.conflictc76, *Panon_union.conflictc76;

union anon_union.conflictc76 { // DWARF DIE: c76
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef struct rx_pbd rx_pbd, *Prx_pbd;

struct rx_pbd { // DWARF DIE: e9f
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

struct rx_swdesc { // DWARF DIE: e94
};

struct rx_hd { // DWARF DIE: d89
    uint32_t upatternrx;
    uint32_t next;
    uint32_t first_pbd_ptr;
    struct rx_swdesc * swdesc;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t headerctrlinfo;
    uint16_t frmlen;
    uint16_t ampdu_stat_info;
    uint32_t tsflo;
    uint32_t tsfhi;
    uint32_t recvec1a;
    uint32_t recvec1b;
    uint32_t recvec1c;
    uint32_t recvec1d;
    uint32_t recvec2a;
    uint32_t recvec2b;
    uint32_t statinfo;
};

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef union anon_union.conflictc51_for_field_3 anon_union.conflictc51_for_field_3, *Panon_union.conflictc51_for_field_3;

typedef union anon_union.conflictc76_for_field_4 anon_union.conflictc76_for_field_4, *Panon_union.conflictc76_for_field_4;

typedef union anon_union.conflictc9b_for_field_5 anon_union.conflictc9b_for_field_5, *Panon_union.conflictc9b_for_field_5;

union anon_union.conflictc9b_for_field_5 { // DWARF DIE: c9b
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflictc76_for_field_4 { // DWARF DIE: c76
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflictc51_for_field_3 { // DWARF DIE: c51
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd { // DWARF DIE: cc0
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictc51_for_field_3 field_3;
    union anon_union.conflictc76_for_field_4 field_4;
    union anon_union.conflictc9b_for_field_5 field_5;
    uint32_t frmlen;
    uint32_t frmlifetime;
    uint32_t phyctrlinfo;
    uint32_t policyentryaddr;
    uint32_t optlen[3];
    uint32_t macctrlinfo1;
    uint32_t macctrlinfo2;
    uint32_t statinfo;
    uint32_t mediumtimeused;
};

struct tx_hw_desc { // DWARF DIE: 104e
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

typedef union anon_union.conflictc9b anon_union.conflictc9b, *Panon_union.conflictc9b;

union anon_union.conflictc9b { // DWARF DIE: c9b
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

struct rx_payloaddesc { // DWARF DIE: f72
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

struct rx_dmadesc { // DWARF DIE: f02
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: c19
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8ab_for__new anon_union.conflict8ab_for__new, *Panon_union.conflict8ab_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict71f anon_struct.conflict71f, *Panon_struct.conflict71f;

typedef struct anon_struct.conflict864 anon_struct.conflict864, *Panon_struct.conflict864;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 159
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 6d6
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 691
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 24c
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2a1
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 301
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 32f
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

struct anon_struct.conflict864 { // DWARF DIE: 864
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct __tm { // DWARF DIE: 1c9
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

struct anon_struct.conflict71f { // DWARF DIE: 71f
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

union anon_union.conflict8ab_for__new { // DWARF DIE: 8ab
    struct anon_struct.conflict71f _reent;
    struct anon_struct.conflict864 _unused;
};

struct _reent { // DWARF DIE: 49b
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
    union anon_union.conflict8ab_for__new _new;
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

struct __locale_t { // DWARF DIE: 8e0
};

typedef union anon_union.conflict8ab anon_union.conflict8ab, *Panon_union.conflict8ab;

union anon_union.conflict8ab { // DWARF DIE: 8ab
    struct anon_struct.conflict71f _reent;
    struct anon_struct.conflict864 _unused;
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




// DWARF DIE: 125c

uint32_t mac_paid_gid_sta_compute(mac_addr *p_mac_addr)

{
  return ((uint)*(byte *)((int)p_mac_addr->array + 5) << 1 | *(byte *)(p_mac_addr->array + 2) & 0x80
         ) << 0x16;
}



// DWARF DIE: 11d8

uint32_t mac_paid_gid_ap_compute(mac_addr *p_mac_addr,uint16_t aid)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((int)p_mac_addr->array + 5);
  return ((uint)aid + (((int)uVar1 >> 4 ^ uVar1) & 0xf) * 0x20) * 0x400000 & 0x7fc00000 | 0x3f0000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1185

void bl60x_current_time_us(longlong *time_now)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_44b080a8;
  *(undefined4 *)time_now = _DAT_44b080a4;
  *(undefined4 *)((int)time_now + 4) = uVar1;
  return;
}


