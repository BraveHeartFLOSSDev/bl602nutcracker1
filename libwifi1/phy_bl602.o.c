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

typedef union anon_union.conflicte4_for___value anon_union.conflicte4_for___value, *Panon_union.conflicte4_for___value;

typedef uint wint_t;

union anon_union.conflicte4_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflicte4_for___value __value;
};

typedef union anon_union.conflicte4 anon_union.conflicte4, *Panon_union.conflicte4;

union anon_union.conflicte4 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

struct la_mem_format {
    uint32_t word[4];
};

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

struct dma_desc {
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag {
    struct dma_desc * last_dma[4];
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct trpc_env_tag trpc_env_tag, *Ptrpc_env_tag;

typedef char __int8_t;

typedef __int8_t int8_t;

typedef short __int16_t;

typedef __int16_t int16_t;

struct trpc_env_tag {
    int8_t power_dbm_max_rf;
    int8_t power_dbm_min_rf;
    int8_t power_dbm_lim_reg;
    undefined field_0x3;
    int16_t channel_freq;
    int8_t temperature;
    int8_t temperature_compensate;
};

typedef struct rd_env_tag rd_env_tag, *Prd_env_tag;

typedef struct co_list co_list, *Pco_list;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr {
    struct co_list_hdr * next;
};

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct rd_env_tag {
    struct co_list event_free_list;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

struct rx_swdesc {
};

typedef union anon_union.conflict8be_for__new anon_union.conflict8be_for__new, *Panon_union.conflict8be_for__new;

typedef struct anon_struct.conflict732 anon_struct.conflict732, *Panon_struct.conflict732;

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

struct anon_struct.conflict732 {
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

union anon_union.conflict8be_for__new {
    struct anon_struct.conflict732 _reent;
    struct anon_struct.conflict732 _unused;
};

typedef struct phy_cfg_tag phy_cfg_tag, *Pphy_cfg_tag;

struct phy_cfg_tag {
    uint32_t parameters[16];
};

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct phy_channel_info {
    uint32_t info1;
    uint32_t info2;
};

typedef long __int32_t;

typedef uchar __uint8_t;

typedef enum anon_enum_8.conflict9c1 {
    HAL_MM_TIMER=7,
    AC_VI=2,
    RFC_FORMATMOD_11G=1,
    AC_VO=3,
    RFC_FORMATMOD_11N=2,
    PHY_CHNL_BW_80P80=4,
    HAL_AC3_TIMER=3,
    IPC_DMA_CHANNEL_MAX=4,
    PHY_BAND_MAX=2,
    HAL_KE_TIMER=8,
    HAL_AC2_TIMER=2,
    PHY_CHNL_BW_160=3,
    PHY_BAND_2G4=0,
    HAL_AC0_TIMER=0,
    AC_MAX=4,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    TID_2=2,
    HAL_IDLE_TIMER=5,
    TID_5=5,
    TID_4=4,
    HAL_RX_TIMER=6,
    TID_7=7,
    TID_6=6,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    TID_MGT=8,
    HAL_TIMER_MAX=9,
    HAL_AC1_TIMER=1,
    AC_BE=1,
    TID_MAX=9,
    PHY_CHNL_BW_20=0,
    AC_BK=0,
    PHY_BAND_5G=1,
    HAL_BCN_TIMER=4,
    PHY_CHNL_BW_40=1,
    PHY_FORMATMOD_11N=2,
    PHY_CHNL_BW_OTHER=5,
    IPC_DMA_CHANNEL_DATA_TX=3,
    PHY_CHNL_BW_80=2,
    PHY_FORMATMOD_11B=0,
    PHY_FORMATMOD_11G=1,
    RFC_FORMATMOD_11B=0,
    IPC_DMA_CHANNEL_DATA_RX=1
} anon_enum_8.conflict9c1;

typedef struct mac_addr mac_addr, *Pmac_addr;

struct mac_addr {
    uint16_t array[3];
};

typedef union anon_union.conflictd72 anon_union.conflictd72, *Panon_union.conflictd72;

union anon_union.conflictd72 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef __uint8_t uint8_t;

struct tx_cfm_tag {
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

typedef union anon_union.conflictd97 anon_union.conflictd97, *Panon_union.conflictd97;

union anon_union.conflictd97 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct rx_pbd rx_pbd, *Prx_pbd;

struct rx_pbd {
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef union anon_union.conflictd4d_for_field_3 anon_union.conflictd4d_for_field_3, *Panon_union.conflictd4d_for_field_3;

typedef union anon_union.conflictd72_for_field_4 anon_union.conflictd72_for_field_4, *Panon_union.conflictd72_for_field_4;

typedef union anon_union.conflictd97_for_field_5 anon_union.conflictd97_for_field_5, *Panon_union.conflictd97_for_field_5;

union anon_union.conflictd72_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflictd97_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflictd4d_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictd4d_for_field_3 field_3;
    union anon_union.conflictd72_for_field_4 field_4;
    union anon_union.conflictd97_for_field_5 field_5;
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

struct tx_hw_desc {
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

typedef union anon_union.conflictd4d anon_union.conflictd4d, *Panon_union.conflictd4d;

union anon_union.conflictd4d {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct rx_hd rx_hd, *Prx_hd;

struct rx_hd {
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

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

struct rx_payloaddesc {
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

struct rx_dmadesc {
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct phy_env_tag phy_env_tag, *Pphy_env_tag;

typedef struct phy_bl602_cfg_tag phy_bl602_cfg_tag, *Pphy_bl602_cfg_tag;

struct phy_bl602_cfg_tag {
    uint32_t reserved;
};

struct phy_env_tag {
    struct phy_bl602_cfg_tag cfg;
    uint16_t chnl_prim20_freq;
    uint16_t chnl_center1_freq;
    uint16_t chnl_center2_freq;
    uint8_t band;
    uint8_t chnl_type;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict anon_union.conflict, *Panon_union.conflict;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict877 anon_struct.conflict877, *Panon_struct.conflict877;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

struct anon_struct.conflict877 {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict {
    struct anon_struct.conflict732 _reent;
    struct anon_struct.conflict877 _unused;
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

typedef union anon_union.conflict8be anon_union.conflict8be, *Panon_union.conflict8be;

union anon_union.conflict8be {
    struct anon_struct.conflict732 _reent;
    struct anon_struct.conflict877 _unused;
};

typedef __int32_t int32_t;

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

void mdm_txcbwmax_setf(uint8_t txcbwmax)

{
  if ((txcbwmax & 0xfc) != 0) {
    FUN_00010028(0,0,0xb58);
  }
  _DAT_44c00824 = _DAT_44c00824 & 0xfcffffff | (uint)txcbwmax << 0x18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010028(void)

{
  uint unaff_s0;
  
  FUN_00010028();
  _DAT_44c00824 = _DAT_44c00824 & 0xfcffffff | unaff_s0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_config_rxgain(int offset)

{
  if (cRam00000000 != offset) {
    cRam00000000 = (char)offset;
    _DAT_44c0c080 =
         (cRam00000000 + 0x19) * 0x1000000 |
         (cRam00000000 + 0x12) * 0x10000 & 0xff0000U |
         (cRam00000000 + 0xb) * 0x100 & 0xffffU | (int)cRam00000000 + 3U & 0xff;
    _DAT_44c0c084 =
         (cRam00000000 + 0x35) * 0x1000000 |
         (cRam00000000 + 0x2d) * 0x10000 & 0xff0000U |
         (cRam00000000 + 0x27) * 0x100 & 0xffffU | (int)cRam00000000 + 0x20U & 0xff;
    _DAT_44c0c088 = (int)cRam00000000 + 0x3bU & 0xff | _DAT_44c0c088 & 0xffffff00;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void agc_config(void)

{
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffefbff;
  _DAT_44c0b3a4 = _DAT_44c0b3a4 & 0xffff0000;
  _DAT_44c0b394 = _DAT_44c0b394 & 0xff00ffff | 0xf80000;
  _DAT_44c0b398 = _DAT_44c0b398 & 0xffff00ff | 0x9e00;
  _DAT_44c0b3c4 = _DAT_44c0b3c4 & 0xffffff00 | 0xce;
  _DAT_44c0b364 = _DAT_44c0b364 & 0xe0c0c0c0 | 0x83c3839;
  _DAT_44c0b368 = _DAT_44c0b368 & 0xffc00c00 | 0x70070;
  _DAT_44c0b36c = _DAT_44c0b36c & 0xf800f800 | 0x7280512;
  _DAT_44c0b370 = _DAT_44c0b370 & 0xff80ffff | 0x580000;
  _DAT_44c0b3c0 = _DAT_44c0b3c0 & 0xffffff | 0x18000000;
  _DAT_44c0b380 = _DAT_44c0b380 & 0x3ff | 0x77f8400;
  _DAT_44c0b384 = _DAT_44c0b384 & 0x3ff | 0xe7750800;
  _DAT_44c0b388 = _DAT_44c0b388 & 0x3ff | 0x3d7a9400;
  _DAT_44c0b38c = _DAT_44c0b38c & 0x23ff | 0x64038800;
  _DAT_44c0c830 = _DAT_44c0c830 & 0x23ff | 0xfc1d9400;
  _DAT_44c0c814 = _DAT_44c0c814 & 0xffffffc0 | 8;
  _DAT_44c0c040 = _DAT_44c0c040 & 0xfe007fff | 0xc18000;
  _DAT_44c0c044 = _DAT_44c0c044 & 0xffff0000 | 0x800;
  _L0(0);
  _DAT_44c0b3a0 = _DAT_44c0b3a0 & 0xffffff00 | 0x9e;
  _DAT_44c0b3c0 = _DAT_44c0b3c0 & 0xffff0000 | 0xa3a4;
  _DAT_44c0c82c = _DAT_44c0c82c & 0xff007700 | 0x2009b5;
  _DAT_44c0c838 = _DAT_44c0c838 & 0x7ff80000 | 0x80000100;
  _DAT_44c0c83c = _DAT_44c0c83c & 0x7ff00000 | 0x8000017c;
  _DAT_44c0c840 = _DAT_44c0c840 & 0x7fc00000 | 0x80000100;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  
  _L0();
  *(uint *)(unaff_s0 + 0x3a0) = *(uint *)(unaff_s0 + 0x3a0) & 0xffffff00 | 0x9e;
  *(uint *)(unaff_s0 + 0x3c0) = *(uint *)(unaff_s0 + 0x3c0) & 0xffffff00 | 0xa4;
  *(uint *)(unaff_s0 + 0x3c0) = *(uint *)(unaff_s0 + 0x3c0) & unaff_s2 | unaff_s4;
  *(uint *)(unaff_s1 + -0x7d4) = *(uint *)(unaff_s1 + -0x7d4) & 0xffffff00 | 0xb5;
  *(uint *)(unaff_s1 + -0x7d4) = *(uint *)(unaff_s1 + -0x7d4) | 0x100;
  *(uint *)(unaff_s1 + -0x7d4) = *(uint *)(unaff_s1 + -0x7d4) & 0xfffff7ff | unaff_s3;
  *(uint *)(unaff_s1 + -0x7c8) = *(uint *)(unaff_s1 + -0x7c8) & 0x7fffffff | 0x80000000;
  *(uint *)(unaff_s1 + -0x7c8) = *(uint *)(unaff_s1 + -0x7c8) & 0xfff80000 | 0x100;
  *(uint *)(unaff_s1 + -0x7c4) = *(uint *)(unaff_s1 + -0x7c4) & 0x7fffffff | 0x80000000;
  *(uint *)(unaff_s1 + -0x7c4) = *(uint *)(unaff_s1 + -0x7c4) & 0xfff00000 | 0x17c;
  *(uint *)(unaff_s1 + -0x7c0) = *(uint *)(unaff_s1 + -0x7c0) & 0x7fffffff | 0x80000000;
  *(uint *)(unaff_s1 + -0x7c0) = *(uint *)(unaff_s1 + -0x7c0) & 0xffc00000 | 0x100;
  *(uint *)(unaff_s1 + -0x7d4) = *(uint *)(unaff_s1 + -0x7d4) & 0xff007fff | 0x200000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mdm_reset(void)

{
  _DAT_44c00888 = 0;
  return;
}



void phy_powroffset_set(int8_t *power_offset)

{
  int8_t *piVar1;
  int8_t *piVar2;
  
  piVar1 = (int8_t *)0x0;
  do {
    piVar2 = piVar1 + 1;
    *piVar1 = power_offset[(int)piVar1];
    piVar1 = piVar2;
  } while (piVar2 != (int8_t *)0xe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_hw_set_channel(uint8_t band,uint16_t freq,uint16_t freq1,uint8_t chantype)

{
  undefined3 in_register_00002029;
  int iVar1;
  uint uVar2;
  undefined2 in_register_0000202e;
  int iVar3;
  undefined2 in_register_00002032;
  undefined3 in_register_00002035;
  int iVar4;
  
  iVar4 = CONCAT31(in_register_00002035,chantype);
  iVar3 = CONCAT22(in_register_0000202e,freq);
  iVar1 = CONCAT31(in_register_00002029,band);
  if (iVar4 != 0) {
    FUN_0001061a(0,0,0x144);
  }
  if (iVar1 != 0) {
    FUN_0001063a(0,0,0x145);
  }
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffeff;
  _DAT_44c00820 = _DAT_44c00820 | 1;
  _DAT_44c00800 = 0;
  _L0();
  _DAT_44c00838 = 0xb4;
  _DAT_44c0088c = 0x1c13;
  _DAT_44c00898 = 0x2d00438;
  _DAT_44c00858 = _DAT_44c00858 & 0xffffff00;
  _DAT_44c0081c = 0xf07;
  _DAT_44c00834 = _DAT_44c00834 & 0xffffff | 0x6000000;
  _DAT_44c00818 = 0x1880c06;
  _DAT_44c00860 = 0x7f03;
  _DAT_44c0b340 = 0;
  _DAT_44c0b344 = 0;
  _DAT_44c0b348 = 0;
  _L0(iVar4);
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b118 = 1;
  }
  FUN_00010706(iVar4,CONCAT22(in_register_00002032,freq1));
  if (iVar1 == 0) {
    uVar2 = 0;
    if ((0x48 < (iVar3 - 0x96cU & 0xffff)) || (uVar2 = 0xe, iVar3 == 0x9b4)) goto _L0;
    iVar1 = -0x967;
  }
  else {
    uVar2 = 0;
    if ((iVar1 != 1) || (uVar2 = 0, 0x334 < (iVar3 - 0x138dU & 0xffff))) goto _L0;
    iVar1 = -5000;
  }
  uVar2 = (iVar3 + iVar1) / 5;
_L0:
  FUN_0001074c(uVar2 & 0xff,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001061a(void)

{
  int unaff_s1;
  int iVar1;
  uint uVar2;
  int unaff_s4;
  
  FUN_0001061a();
  if (unaff_s4 != 0) {
    FUN_0001063a(0,0,0x145);
  }
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffeff;
  _DAT_44c00820 = _DAT_44c00820 | 1;
  _DAT_44c00800 = 0;
  _L0();
  _DAT_44c00838 = 0xb4;
  _DAT_44c0088c = 0x1c13;
  _DAT_44c00898 = 0x2d00438;
  _DAT_44c00858 = _DAT_44c00858 & 0xffffff00;
  _DAT_44c0081c = 0xf07;
  _DAT_44c00834 = _DAT_44c00834 & 0xffffff | 0x6000000;
  _DAT_44c00818 = 0x1880c06;
  _DAT_44c00860 = 0x7f03;
  _DAT_44c0b340 = 0;
  _DAT_44c0b344 = 0;
  _DAT_44c0b348 = 0;
  _L0();
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b118 = 1;
  }
  FUN_00010706();
  if (unaff_s4 == 0) {
    uVar2 = 0;
    if ((0x48 < (unaff_s1 - 0x96cU & 0xffff)) || (uVar2 = 0xe, unaff_s1 == 0x9b4)) goto _L0;
    iVar1 = -0x967;
  }
  else {
    uVar2 = 0;
    if ((unaff_s4 != 1) || (uVar2 = 0, 0x334 < (unaff_s1 - 0x138dU & 0xffff))) goto _L0;
    iVar1 = -5000;
  }
  uVar2 = (unaff_s1 + iVar1) / 5;
_L0:
  FUN_0001074c(uVar2 & 0xff,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001063a(void)

{
  int unaff_s1;
  int iVar1;
  uint uVar2;
  int unaff_s4;
  
  FUN_0001063a();
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffeff;
  _DAT_44c00820 = _DAT_44c00820 | 1;
  _DAT_44c00800 = 0;
  _L0();
  _DAT_44c00838 = 0xb4;
  _DAT_44c0088c = 0x1c13;
  _DAT_44c00898 = 0x2d00438;
  _DAT_44c00858 = _DAT_44c00858 & 0xffffff00;
  _DAT_44c0081c = 0xf07;
  _DAT_44c00834 = _DAT_44c00834 & 0xffffff | 0x6000000;
  _DAT_44c00818 = 0x1880c06;
  _DAT_44c00860 = 0x7f03;
  _DAT_44c0b340 = 0;
  _DAT_44c0b344 = 0;
  _DAT_44c0b348 = 0;
  _L0();
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b118 = 1;
  }
  FUN_00010706();
  if (unaff_s4 == 0) {
    uVar2 = 0;
    if ((0x48 < (unaff_s1 - 0x96cU & 0xffff)) || (uVar2 = 0xe, unaff_s1 == 0x9b4)) goto _L0;
    iVar1 = -0x967;
  }
  else {
    uVar2 = 0;
    if ((unaff_s4 != 1) || (uVar2 = 0, 0x334 < (unaff_s1 - 0x138dU & 0xffff))) goto _L0;
    iVar1 = -5000;
  }
  uVar2 = (unaff_s1 + iVar1) / 5;
_L0:
  FUN_0001074c(uVar2 & 0xff,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  int *unaff_s2;
  int unaff_s4;
  
  _L0();
  *(undefined4 *)(unaff_s0 + -0x7c8) = 0xb4;
  *(undefined4 *)(unaff_s0 + -0x774) = 0x1c13;
  *(undefined4 *)(unaff_s0 + -0x768) = 0x2d00438;
  *(uint *)(unaff_s0 + -0x7a8) = *(uint *)(unaff_s0 + -0x7a8) & 0xffffff00;
  *(undefined4 *)(unaff_s0 + -0x7e4) = 0xf0f;
  *(uint *)(unaff_s0 + -0x7e4) = *(uint *)(unaff_s0 + -0x7e4) & 0xffffff80 | 7;
  *(uint *)(unaff_s0 + -0x7cc) = *(uint *)(unaff_s0 + -0x7cc) & 0xffffff | 0x6000000;
  *(undefined4 *)(unaff_s0 + -0x7e8) = 0x1880c06;
  *(undefined4 *)(unaff_s0 + -0x7a0) = 0x7f03;
  unaff_s2[0xd0] = 0;
  unaff_s2[0xd1] = 0;
  unaff_s2[0xd2] = 0;
  _L0();
  if (*unaff_s2 << 10 < 0) {
    unaff_s2[0x46] = 1;
  }
  FUN_00010706();
  if (unaff_s4 == 0) {
    uVar2 = 0;
    if ((0x48 < (unaff_s1 - 0x96cU & 0xffff)) || (uVar2 = 0xe, unaff_s1 == 0x9b4)) goto _L0;
    iVar1 = -0x967;
  }
  else {
    uVar2 = 0;
    if ((unaff_s4 != 1) || (uVar2 = 0, 0x334 < (unaff_s1 - 0x138dU & 0xffff))) goto _L0;
    iVar1 = -5000;
  }
  uVar2 = (unaff_s1 + iVar1) / 5;
_L0:
  FUN_0001074c(uVar2 & 0xff,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s1;
  int iVar1;
  uint uVar2;
  int *unaff_s2;
  int unaff_s4;
  
  _L0();
  if (*unaff_s2 << 10 < 0) {
    unaff_s2[0x46] = 1;
  }
  FUN_00010706();
  if (unaff_s4 == 0) {
    uVar2 = 0;
    if ((0x48 < (unaff_s1 - 0x96cU & 0xffff)) || (uVar2 = 0xe, unaff_s1 == 0x9b4)) goto _L0;
    iVar1 = -0x967;
  }
  else {
    uVar2 = 0;
    if ((unaff_s4 != 1) || (uVar2 = 0, 0x334 < (unaff_s1 - 0x138dU & 0xffff))) goto _L0;
    iVar1 = -5000;
  }
  uVar2 = (unaff_s1 + iVar1) / 5;
_L0:
  FUN_0001074c(uVar2 & 0xff,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010706(void)

{
  int unaff_s1;
  int iVar1;
  uint uVar2;
  int unaff_s4;
  
  FUN_00010706();
  if (unaff_s4 == 0) {
    uVar2 = 0;
    if ((0x48 < (unaff_s1 - 0x96cU & 0xffff)) || (uVar2 = 0xe, unaff_s1 == 0x9b4)) goto _L0;
    iVar1 = -0x967;
  }
  else {
    uVar2 = 0;
    if ((unaff_s4 != 1) || (uVar2 = 0, 0x334 < (unaff_s1 - 0x138dU & 0xffff))) goto _L0;
    iVar1 = -5000;
  }
  uVar2 = (unaff_s1 + iVar1) / 5;
_L0:
  FUN_0001074c(uVar2 & 0xff,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001074c(void)

{
  FUN_0001074c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void phy_reset(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_get_channel(phy_channel_info *info,uint8_t index)

{
  info->info1 = (uint)DAT_0000000b << 8 | (uint)_DAT_00000004 << 0x10 | (uint)DAT_0000000a;
  info->info2 = CONCAT22(_DAT_00000008,_DAT_00000006);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_set_channel(uint8_t band,uint8_t type,uint16_t prim20_freq,uint16_t center1_freq,
                    uint16_t center2_freq,uint8_t index)

{
  undefined3 in_register_00002029;
  undefined3 in_register_0000202d;
  undefined2 in_register_00002032;
  undefined2 in_register_00002036;
  
  if ((((CONCAT22(in_register_00002036,center1_freq) - 0x96cU & 0xffff) < 0x49) ||
      (CONCAT31(in_register_00002029,band) != 0)) && (CONCAT31(in_register_00002029,band) < 2)) {
    _L0(CONCAT22(in_register_00002032,prim20_freq),CONCAT22(in_register_00002036,center1_freq),
        CONCAT31(in_register_0000202d,type));
    _DAT_00000004 = prim20_freq;
    _DAT_00000006 = center1_freq;
    DAT_0000000a = band;
    DAT_0000000b = type;
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  undefined unaff_s0;
  undefined2 unaff_s1;
  undefined2 unaff_s2;
  undefined unaff_s3;
  
  _L0();
  _DAT_00000004 = unaff_s2;
  _DAT_00000006 = unaff_s1;
  DAT_0000000a = unaff_s0;
  DAT_0000000b = unaff_s3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_get_version(uint32_t *version_1,uint32_t *version_2)

{
  *version_1 = _DAT_44c00000;
  *version_2 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool phy_vht_supported(void)

{
  _Bool _Var1;
  
  _Var1 = true;
  if (-1 < _DAT_44c00000 << 9) {
    _Var1 = (_Bool)((byte)((uint)_DAT_44c00000 >> 0x19) & 1);
  }
  return _Var1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_init(phy_cfg_tag *config)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  _DAT_44c00800 = 0;
  _L0();
  _DAT_44c00820 = 0x20d;
  uVar1 = ((_DAT_44c00000 >> 8 & 0xf) - 1 & 0xff) << 4;
  if ((uVar1 & 0xffffff8f) != 0) {
    FUN_000108a2(0,0,0xa09);
  }
  _DAT_44c00820 = uVar1 | _DAT_44c00820 & 0xffffff8f;
  uVar1 = ((_DAT_44c00000 >> 0xc & 0xf) - 1 & 0xff) << 0xc;
  if ((uVar1 & 0xf8000) != 0) {
    FUN_000108ec(0,0,0x987);
  }
  _DAT_44c00820 = _DAT_44c00000 >> 0x13 & 0x100 | uVar1 | _DAT_44c00820 & 0xffff8eff;
  iVar2 = _L0();
  _DAT_44c00820 =
       (_DAT_44c00000 >> 0x1e & 1) << 0x14 |
       (_DAT_44c00000 >> 0x1e & 1) << 0x10 | (iVar2 << 1 | _DAT_44c00820 & 0xfffffffd) & 0xffeeffff;
  _DAT_44c03024 = _DAT_44c03024 & 0xffc0ffff | 0x2d0000;
  _DAT_44c0089c = 0xffffffff;
  _DAT_44c00824 = 0x20d;
  uVar1 = ((_DAT_44c00000 >> 8 & 0xf) - 1 & 0xff) << 4;
  if ((uVar1 & 0xffffff8f) != 0) {
    FUN_000109b8(0,0,0xc0e);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xffffff8f;
  uVar1 = ((_DAT_44c00000 >> 4 & 0xf) - 1 & 0xff) << 0x14;
  if ((uVar1 & 0xf800000) != 0) {
    FUN_00010a02(0,0,0xb72);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xff8fffff;
  FUN_00010a2a(_DAT_44c00000 >> 0x18 & 3);
  _DAT_44c00824 = _DAT_44c00000 >> 0x12 & 0x100 | _DAT_44c00824 & 0xfffffeff;
  iVar2 = _L0();
  _DAT_44c00824 =
       (_DAT_44c00000 >> 0x1f) << 0x10 | (iVar2 << 1 | _DAT_44c00824 & 0xfffffffd) & 0xfffeffff;
  _DAT_44c00834 = _DAT_44c00834 | 1;
  _DAT_44c00818 = _DAT_44c00818 & 0xfffbffff;
  _DAT_44c00830 = _DAT_44c00830 & 0xffff0000 | 0x1b0f;
  _DAT_44c0083c = 0x4920492;
  _DAT_44c00874 = _DAT_44c00874 & 0xf7ffffff | 0x8000000;
  _DAT_44c0b500 = _DAT_44c0b500 & 0xffffcfff | 0x2000;
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b110 = _DAT_44c0b110 & 0xfffffff0;
    _DAT_44c0b118 = 0;
  }
  _DAT_44c0b004 = 1;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffffc | 1;
  _DAT_44c0b3bc = 4000000;
  _DAT_44c0b414 = _DAT_44c0b414 | 0x100;
  _L0();
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  puVar6 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)&DAT_54c0a000;
  do {
    uVar3 = *puVar6;
    puVar5 = puVar4 + 1;
    puVar6 = puVar6 + 1;
    *puVar4 = uVar3;
    puVar4 = puVar5;
  } while (puVar5 != (undefined4 *)0x54c0a800);
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c0c020 = _DAT_44c0c020 & 0xfc00ffff | 0x140000;
  uRam00000000 = config->parameters[0];
  _DAT_00000004 = 0xff00ff;
  _DAT_00000008 = 0x50000ff;
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_s2;
  
  _L0();
  *(undefined4 *)(unaff_s0 + -0x7e0) = 0x20d;
  uVar1 = ((_DAT_44c00000 >> 8 & 0xf) - 1 & 0xff) << 4;
  if ((uVar1 & 0xffffff8f) != 0) {
    FUN_000108a2(0,0,0xa09);
  }
  _DAT_44c00820 = uVar1 | _DAT_44c00820 & 0xffffff8f;
  uVar1 = ((_DAT_44c00000 >> 0xc & 0xf) - 1 & 0xff) << 0xc;
  if ((uVar1 & 0xf8000) != 0) {
    FUN_000108ec(0,0,0x987);
  }
  _DAT_44c00820 = _DAT_44c00000 >> 0x13 & 0x100 | uVar1 | _DAT_44c00820 & 0xffff8eff;
  iVar2 = _L0();
  _DAT_44c00820 =
       (_DAT_44c00000 >> 0x1e & 1) << 0x14 |
       (_DAT_44c00000 >> 0x1e & 1) << 0x10 | (iVar2 << 1 | _DAT_44c00820 & 0xfffffffd) & 0xffeeffff;
  _DAT_44c03024 = _DAT_44c03024 & 0xffc0ffff | 0x2d0000;
  _DAT_44c0089c = 0xffffffff;
  _DAT_44c00824 = 0x20d;
  uVar1 = ((_DAT_44c00000 >> 8 & 0xf) - 1 & 0xff) << 4;
  if ((uVar1 & 0xffffff8f) != 0) {
    FUN_000109b8(0,0,0xc0e);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xffffff8f;
  uVar1 = ((_DAT_44c00000 >> 4 & 0xf) - 1 & 0xff) << 0x14;
  if ((uVar1 & 0xf800000) != 0) {
    FUN_00010a02(0,0,0xb72);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xff8fffff;
  FUN_00010a2a(_DAT_44c00000 >> 0x18 & 3);
  _DAT_44c00824 = _DAT_44c00000 >> 0x12 & 0x100 | _DAT_44c00824 & 0xfffffeff;
  iVar2 = _L0();
  _DAT_44c00824 =
       (_DAT_44c00000 >> 0x1f) << 0x10 | (iVar2 << 1 | _DAT_44c00824 & 0xfffffffd) & 0xfffeffff;
  _DAT_44c00834 = _DAT_44c00834 | 1;
  _DAT_44c00818 = _DAT_44c00818 & 0xfffbffff;
  _DAT_44c00830 = _DAT_44c00830 & 0xffff0000 | 0x1b0f;
  _DAT_44c0083c = 0x4920492;
  _DAT_44c00874 = _DAT_44c00874 & 0xf7ffffff | 0x8000000;
  _DAT_44c0b500 = _DAT_44c0b500 & 0xffffcfff | 0x2000;
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b110 = _DAT_44c0b110 & 0xfffffff0;
    _DAT_44c0b118 = 0;
  }
  _DAT_44c0b004 = 1;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffffc | 1;
  _DAT_44c0b3bc = 4000000;
  _DAT_44c0b414 = _DAT_44c0b414 | 0x100;
  _L0();
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  puVar6 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)&DAT_54c0a000;
  do {
    uVar3 = *puVar6;
    puVar5 = puVar4 + 1;
    puVar6 = puVar6 + 1;
    *puVar4 = uVar3;
    puVar4 = puVar5;
  } while (puVar5 != (undefined4 *)0x54c0a800);
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c0c020 = _DAT_44c0c020 & 0xfc00ffff | 0x140000;
  uRam00000000 = *unaff_s2;
  _DAT_00000004 = 0xff00ff;
  _DAT_00000008 = 0x50000ff;
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000108a2(void)

{
  uint unaff_s0;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_s2;
  
  FUN_000108a2();
  _DAT_44c00820 = unaff_s0 | _DAT_44c00820 & 0xffffff8f;
  uVar1 = ((_DAT_44c00000 >> 0xc & 0xf) - 1 & 0xff) << 0xc;
  if ((uVar1 & 0xf8000) != 0) {
    FUN_000108ec(0,0,0x987);
  }
  _DAT_44c00820 = _DAT_44c00000 >> 0x13 & 0x100 | uVar1 | _DAT_44c00820 & 0xffff8eff;
  iVar2 = _L0();
  _DAT_44c00820 =
       (_DAT_44c00000 >> 0x1e & 1) << 0x14 |
       (_DAT_44c00000 >> 0x1e & 1) << 0x10 | (iVar2 << 1 | _DAT_44c00820 & 0xfffffffd) & 0xffeeffff;
  _DAT_44c03024 = _DAT_44c03024 & 0xffc0ffff | 0x2d0000;
  _DAT_44c0089c = 0xffffffff;
  _DAT_44c00824 = 0x20d;
  uVar1 = ((_DAT_44c00000 >> 8 & 0xf) - 1 & 0xff) << 4;
  if ((uVar1 & 0xffffff8f) != 0) {
    FUN_000109b8(0,0,0xc0e);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xffffff8f;
  uVar1 = ((_DAT_44c00000 >> 4 & 0xf) - 1 & 0xff) << 0x14;
  if ((uVar1 & 0xf800000) != 0) {
    FUN_00010a02(0,0,0xb72);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xff8fffff;
  FUN_00010a2a(_DAT_44c00000 >> 0x18 & 3);
  _DAT_44c00824 = _DAT_44c00000 >> 0x12 & 0x100 | _DAT_44c00824 & 0xfffffeff;
  iVar2 = _L0();
  _DAT_44c00824 =
       (_DAT_44c00000 >> 0x1f) << 0x10 | (iVar2 << 1 | _DAT_44c00824 & 0xfffffffd) & 0xfffeffff;
  _DAT_44c00834 = _DAT_44c00834 | 1;
  _DAT_44c00818 = _DAT_44c00818 & 0xfffbffff;
  _DAT_44c00830 = _DAT_44c00830 & 0xffff0000 | 0x1b0f;
  _DAT_44c0083c = 0x4920492;
  _DAT_44c00874 = _DAT_44c00874 & 0xf7ffffff | 0x8000000;
  _DAT_44c0b500 = _DAT_44c0b500 & 0xffffcfff | 0x2000;
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b110 = _DAT_44c0b110 & 0xfffffff0;
    _DAT_44c0b118 = 0;
  }
  _DAT_44c0b004 = 1;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffffc | 1;
  _DAT_44c0b3bc = 4000000;
  _DAT_44c0b414 = _DAT_44c0b414 | 0x100;
  _L0();
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  puVar6 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)&DAT_54c0a000;
  do {
    uVar3 = *puVar6;
    puVar5 = puVar4 + 1;
    puVar6 = puVar6 + 1;
    *puVar4 = uVar3;
    puVar4 = puVar5;
  } while (puVar5 != (undefined4 *)0x54c0a800);
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c0c020 = _DAT_44c0c020 & 0xfc00ffff | 0x140000;
  uRam00000000 = *unaff_s2;
  _DAT_00000004 = 0xff00ff;
  _DAT_00000008 = 0x50000ff;
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000108ec(void)

{
  uint uVar1;
  uint unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_s2;
  
  FUN_000108ec();
  _DAT_44c00820 =
       _DAT_44c00000 >> 0x13 & 0x100 | (unaff_s1 | _DAT_44c00820 & 0xffff8fff) & 0xfffffeff;
  iVar2 = _L0();
  _DAT_44c00820 =
       (_DAT_44c00000 >> 0x1e & 1) << 0x14 |
       (_DAT_44c00000 >> 0x1e & 1) << 0x10 | (iVar2 << 1 | _DAT_44c00820 & 0xfffffffd) & 0xffeeffff;
  _DAT_44c03024 = _DAT_44c03024 & 0xffc0ffff | 0x2d0000;
  _DAT_44c0089c = 0xffffffff;
  _DAT_44c00824 = 0x20d;
  uVar1 = ((_DAT_44c00000 >> 8 & 0xf) - 1 & 0xff) << 4;
  if ((uVar1 & 0xffffff8f) != 0) {
    FUN_000109b8(0,0,0xc0e);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xffffff8f;
  uVar1 = ((_DAT_44c00000 >> 4 & 0xf) - 1 & 0xff) << 0x14;
  if ((uVar1 & 0xf800000) != 0) {
    FUN_00010a02(0,0,0xb72);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xff8fffff;
  FUN_00010a2a(_DAT_44c00000 >> 0x18 & 3);
  _DAT_44c00824 = _DAT_44c00000 >> 0x12 & 0x100 | _DAT_44c00824 & 0xfffffeff;
  iVar2 = _L0();
  _DAT_44c00824 =
       (_DAT_44c00000 >> 0x1f) << 0x10 | (iVar2 << 1 | _DAT_44c00824 & 0xfffffffd) & 0xfffeffff;
  _DAT_44c00834 = _DAT_44c00834 | 1;
  _DAT_44c00818 = _DAT_44c00818 & 0xfffbffff;
  _DAT_44c00830 = _DAT_44c00830 & 0xffff0000 | 0x1b0f;
  _DAT_44c0083c = 0x4920492;
  _DAT_44c00874 = _DAT_44c00874 & 0xf7ffffff | 0x8000000;
  _DAT_44c0b500 = _DAT_44c0b500 & 0xffffcfff | 0x2000;
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b110 = _DAT_44c0b110 & 0xfffffff0;
    _DAT_44c0b118 = 0;
  }
  _DAT_44c0b004 = 1;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffffc | 1;
  _DAT_44c0b3bc = 4000000;
  _DAT_44c0b414 = _DAT_44c0b414 | 0x100;
  _L0();
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  puVar6 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)&DAT_54c0a000;
  do {
    uVar3 = *puVar6;
    puVar5 = puVar4 + 1;
    puVar6 = puVar6 + 1;
    *puVar4 = uVar3;
    puVar4 = puVar5;
  } while (puVar5 != (undefined4 *)0x54c0a800);
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c0c020 = _DAT_44c0c020 & 0xfc00ffff | 0x140000;
  uRam00000000 = *unaff_s2;
  _DAT_00000004 = 0xff00ff;
  _DAT_00000008 = 0x50000ff;
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint *unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_s2;
  
  iVar2 = _L0();
  *(uint *)(unaff_s0 + -0x7e0) = iVar2 << 1 | *(uint *)(unaff_s0 + -0x7e0) & 0xfffffffd;
  *(uint *)(unaff_s0 + -0x7e0) =
       (*unaff_s1 >> 0x1e & 1) << 0x10 | *(uint *)(unaff_s0 + -0x7e0) & 0xfffeffff;
  *(uint *)(unaff_s0 + -0x7e0) =
       (*unaff_s1 >> 0x1e & 1) << 0x14 | *(uint *)(unaff_s0 + -0x7e0) & 0xffefffff;
  _DAT_44c03024 = _DAT_44c03024 & 0xffc0ffff | 0x2d0000;
  *(undefined4 *)(unaff_s0 + -0x764) = 0xffffffff;
  *(undefined4 *)(unaff_s0 + -0x7dc) = 0x20d;
  uVar1 = ((*unaff_s1 >> 8 & 0xf) - 1 & 0xff) << 4;
  if ((uVar1 & 0xffffff8f) != 0) {
    FUN_000109b8(0,0,0xc0e);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xffffff8f;
  uVar1 = ((_DAT_44c00000 >> 4 & 0xf) - 1 & 0xff) << 0x14;
  if ((uVar1 & 0xf800000) != 0) {
    FUN_00010a02(0,0,0xb72);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xff8fffff;
  FUN_00010a2a(_DAT_44c00000 >> 0x18 & 3);
  _DAT_44c00824 = _DAT_44c00000 >> 0x12 & 0x100 | _DAT_44c00824 & 0xfffffeff;
  iVar2 = _L0();
  _DAT_44c00824 =
       (_DAT_44c00000 >> 0x1f) << 0x10 | (iVar2 << 1 | _DAT_44c00824 & 0xfffffffd) & 0xfffeffff;
  _DAT_44c00834 = _DAT_44c00834 | 1;
  _DAT_44c00818 = _DAT_44c00818 & 0xfffbffff;
  _DAT_44c00830 = _DAT_44c00830 & 0xffff0000 | 0x1b0f;
  _DAT_44c0083c = 0x4920492;
  _DAT_44c00874 = _DAT_44c00874 & 0xf7ffffff | 0x8000000;
  _DAT_44c0b500 = _DAT_44c0b500 & 0xffffcfff | 0x2000;
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b110 = _DAT_44c0b110 & 0xfffffff0;
    _DAT_44c0b118 = 0;
  }
  _DAT_44c0b004 = 1;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffffc | 1;
  _DAT_44c0b3bc = 4000000;
  _DAT_44c0b414 = _DAT_44c0b414 | 0x100;
  _L0();
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  puVar6 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)&DAT_54c0a000;
  do {
    uVar3 = *puVar6;
    puVar5 = puVar4 + 1;
    puVar6 = puVar6 + 1;
    *puVar4 = uVar3;
    puVar4 = puVar5;
  } while (puVar5 != (undefined4 *)0x54c0a800);
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c0c020 = _DAT_44c0c020 & 0xfc00ffff | 0x140000;
  uRam00000000 = *unaff_s2;
  _DAT_00000004 = 0xff00ff;
  _DAT_00000008 = 0x50000ff;
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000109b8(void)

{
  uint unaff_s0;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_s2;
  
  FUN_000109b8();
  _DAT_44c00824 = unaff_s0 | _DAT_44c00824 & 0xffffff8f;
  uVar1 = ((_DAT_44c00000 >> 4 & 0xf) - 1 & 0xff) << 0x14;
  if ((uVar1 & 0xf800000) != 0) {
    FUN_00010a02(0,0,0xb72);
  }
  _DAT_44c00824 = uVar1 | _DAT_44c00824 & 0xff8fffff;
  FUN_00010a2a(_DAT_44c00000 >> 0x18 & 3);
  _DAT_44c00824 = _DAT_44c00000 >> 0x12 & 0x100 | _DAT_44c00824 & 0xfffffeff;
  iVar2 = _L0();
  _DAT_44c00824 =
       (_DAT_44c00000 >> 0x1f) << 0x10 | (iVar2 << 1 | _DAT_44c00824 & 0xfffffffd) & 0xfffeffff;
  _DAT_44c00834 = _DAT_44c00834 | 1;
  _DAT_44c00818 = _DAT_44c00818 & 0xfffbffff;
  _DAT_44c00830 = _DAT_44c00830 & 0xffff0000 | 0x1b0f;
  _DAT_44c0083c = 0x4920492;
  _DAT_44c00874 = _DAT_44c00874 & 0xf7ffffff | 0x8000000;
  _DAT_44c0b500 = _DAT_44c0b500 & 0xffffcfff | 0x2000;
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b110 = _DAT_44c0b110 & 0xfffffff0;
    _DAT_44c0b118 = 0;
  }
  _DAT_44c0b004 = 1;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffffc | 1;
  _DAT_44c0b3bc = 4000000;
  _DAT_44c0b414 = _DAT_44c0b414 | 0x100;
  _L0();
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  puVar6 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)&DAT_54c0a000;
  do {
    uVar3 = *puVar6;
    puVar5 = puVar4 + 1;
    puVar6 = puVar6 + 1;
    *puVar4 = uVar3;
    puVar4 = puVar5;
  } while (puVar5 != (undefined4 *)0x54c0a800);
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c0c020 = _DAT_44c0c020 & 0xfc00ffff | 0x140000;
  uRam00000000 = *unaff_s2;
  _DAT_00000004 = 0xff00ff;
  _DAT_00000008 = 0x50000ff;
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a02(void)

{
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_s2;
  
  FUN_00010a02();
  _DAT_44c00824 = unaff_s1 | _DAT_44c00824 & 0xff8fffff;
  FUN_00010a2a(_DAT_44c00000 >> 0x18 & 3);
  _DAT_44c00824 = _DAT_44c00000 >> 0x12 & 0x100 | _DAT_44c00824 & 0xfffffeff;
  iVar1 = _L0();
  _DAT_44c00824 =
       (_DAT_44c00000 >> 0x1f) << 0x10 | (iVar1 << 1 | _DAT_44c00824 & 0xfffffffd) & 0xfffeffff;
  _DAT_44c00834 = _DAT_44c00834 | 1;
  _DAT_44c00818 = _DAT_44c00818 & 0xfffbffff;
  _DAT_44c00830 = _DAT_44c00830 & 0xffff0000 | 0x1b0f;
  _DAT_44c0083c = 0x4920492;
  _DAT_44c00874 = _DAT_44c00874 & 0xf7ffffff | 0x8000000;
  _DAT_44c0b500 = _DAT_44c0b500 & 0xffffcfff | 0x2000;
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b110 = _DAT_44c0b110 & 0xfffffff0;
    _DAT_44c0b118 = 0;
  }
  _DAT_44c0b004 = 1;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffffc | 1;
  _DAT_44c0b3bc = 4000000;
  _DAT_44c0b414 = _DAT_44c0b414 | 0x100;
  _L0();
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  puVar5 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)&DAT_54c0a000;
  do {
    uVar2 = *puVar5;
    puVar4 = puVar3 + 1;
    puVar5 = puVar5 + 1;
    *puVar3 = uVar2;
    puVar3 = puVar4;
  } while (puVar4 != (undefined4 *)0x54c0a800);
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c0c020 = _DAT_44c0c020 & 0xfc00ffff | 0x140000;
  uRam00000000 = *unaff_s2;
  _DAT_00000004 = 0xff00ff;
  _DAT_00000008 = 0x50000ff;
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a2a(void)

{
  int unaff_s0;
  uint *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_s2;
  
  FUN_00010a2a();
  *(uint *)(unaff_s0 + -0x7dc) =
       *unaff_s1 >> 0x12 & 0x100 | *(uint *)(unaff_s0 + -0x7dc) & 0xfffffeff;
  iVar1 = _L0();
  *(uint *)(unaff_s0 + -0x7dc) = iVar1 << 1 | *(uint *)(unaff_s0 + -0x7dc) & 0xfffffffd;
  *(uint *)(unaff_s0 + -0x7dc) =
       (*unaff_s1 >> 0x1f) << 0x10 | *(uint *)(unaff_s0 + -0x7dc) & 0xfffeffff;
  *(uint *)(unaff_s0 + -0x7cc) = *(uint *)(unaff_s0 + -0x7cc) | 1;
  *(uint *)(unaff_s0 + -0x7e8) = *(uint *)(unaff_s0 + -0x7e8) & 0xfffbffff;
  *(uint *)(unaff_s0 + -2000) = *(uint *)(unaff_s0 + -2000) & 0xffff00ff | 0x1b00;
  *(uint *)(unaff_s0 + -2000) = *(uint *)(unaff_s0 + -2000) & 0xffffff00 | 0xf;
  *(undefined4 *)(unaff_s0 + -0x7c4) = 0x4920492;
  *(uint *)(unaff_s0 + -0x78c) = *(uint *)(unaff_s0 + -0x78c) & 0xf7ffffff | 0x8000000;
  _DAT_44c0b500 = _DAT_44c0b500 & 0xffffcfff | 0x2000;
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b110 = _DAT_44c0b110 & 0xfffffff0;
    _DAT_44c0b118 = 0;
  }
  _DAT_44c0b004 = 1;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffffc | 1;
  _DAT_44c0b3bc = 4000000;
  _DAT_44c0b414 = _DAT_44c0b414 | 0x100;
  _L0();
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  puVar5 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)&DAT_54c0a000;
  do {
    uVar2 = *puVar5;
    puVar4 = puVar3 + 1;
    puVar5 = puVar5 + 1;
    *puVar3 = uVar2;
    puVar3 = puVar4;
  } while (puVar4 != (undefined4 *)0x54c0a800);
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c0c020 = _DAT_44c0c020 & 0xfc00ffff | 0x140000;
  uRam00000000 = *unaff_s2;
  _DAT_00000004 = 0xff00ff;
  _DAT_00000008 = 0x50000ff;
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_s2;
  
  iVar1 = _L0();
  *(uint *)(unaff_s0 + -0x7dc) = iVar1 << 1 | *(uint *)(unaff_s0 + -0x7dc) & 0xfffffffd;
  *(uint *)(unaff_s0 + -0x7dc) =
       (*unaff_s1 >> 0x1f) << 0x10 | *(uint *)(unaff_s0 + -0x7dc) & 0xfffeffff;
  *(uint *)(unaff_s0 + -0x7cc) = *(uint *)(unaff_s0 + -0x7cc) | 1;
  *(uint *)(unaff_s0 + -0x7e8) = *(uint *)(unaff_s0 + -0x7e8) & 0xfffbffff;
  *(uint *)(unaff_s0 + -2000) = *(uint *)(unaff_s0 + -2000) & 0xffff00ff | 0x1b00;
  *(uint *)(unaff_s0 + -2000) = *(uint *)(unaff_s0 + -2000) & 0xffffff00 | 0xf;
  *(undefined4 *)(unaff_s0 + -0x7c4) = 0x4920492;
  *(uint *)(unaff_s0 + -0x78c) = *(uint *)(unaff_s0 + -0x78c) & 0xf7ffffff | 0x8000000;
  _DAT_44c0b500 = _DAT_44c0b500 & 0xffffcfff | 0x2000;
  if (_DAT_44c0b000 << 10 < 0) {
    _DAT_44c0b110 = _DAT_44c0b110 & 0xfffffff0;
    _DAT_44c0b118 = 0;
  }
  _DAT_44c0b004 = 1;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xfffffffc | 1;
  _DAT_44c0b3bc = 4000000;
  _DAT_44c0b414 = _DAT_44c0b414 | 0x100;
  _L0();
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  puVar5 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)&DAT_54c0a000;
  do {
    uVar2 = *puVar5;
    puVar4 = puVar3 + 1;
    puVar5 = puVar5 + 1;
    *puVar3 = uVar2;
    puVar3 = puVar4;
  } while (puVar4 != (undefined4 *)0x54c0a800);
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c0c020 = _DAT_44c0c020 & 0xfc00ffff | 0x140000;
  uRam00000000 = *unaff_s2;
  _DAT_00000004 = 0xff00ff;
  _DAT_00000008 = 0x50000ff;
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *unaff_s2;
  
  _L0();
  *(uint *)(unaff_s0 + 0x390) = *(uint *)(unaff_s0 + 0x390) & 0xffffefff | 0x1000;
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  puVar4 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)&DAT_54c0a000;
  do {
    uVar1 = *puVar4;
    puVar3 = puVar2 + 1;
    puVar4 = puVar4 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)0x54c0a800);
  _DAT_44c00874 = _DAT_44c00874 & 0xdfffffff;
  _DAT_44c0b390 = _DAT_44c0b390 & 0xffffefff;
  _DAT_44c0c020 = _DAT_44c0c020 & 0xfc00ffff | 0x140000;
  uRam00000000 = *unaff_s2;
  _DAT_00000004 = 0xff00ff;
  _DAT_00000008 = 0x50000ff;
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint8_t phy_get_nss(void)

{
  return (uint8_t)(((byte)((uint)_DAT_44c00000 >> 8) & 0xf) - 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint8_t phy_get_ntx(void)

{
  return (uint8_t)(((byte)(_DAT_44c00000 >> 4) & 0xf) - 1);
}



void phy_stop(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool phy_bfmee_supported(void)

{
  return (_Bool)((byte)((uint)_DAT_44c00000 >> 0x1c) & 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool phy_bfmer_supported(void)

{
  return (_Bool)((byte)((uint)_DAT_44c00000 >> 0x1d) & 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool phy_mu_mimo_rx_supported(void)

{
  return (_Bool)((byte)((uint)_DAT_44c00000 >> 0x1e) & 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool phy_mu_mimo_tx_supported(void)

{
  return SUB41((uint)_DAT_44c00000 >> 0x1f,0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool phy_ldpc_tx_supported(void)

{
  return (_Bool)((byte)((uint)_DAT_44c00000 >> 0x1a) & 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool phy_ldpc_rx_supported(void)

{
  return (_Bool)((byte)((uint)_DAT_44c00000 >> 0x1b) & 1);
}



uint8_t phy_get_mac_freq(void)

{
  return '(';
}



void phy_get_rf_gain_idx(int8_t *power,uint8_t *idx)

{
  uint8_t uVar1;
  
  uVar1 = FUN_00010cb6(2,*power * 10);
  *idx = uVar1;
  return;
}



void FUN_00010cb6(void)

{
  undefined *unaff_s0;
  undefined uVar1;
  
  uVar1 = FUN_00010cb6();
  *unaff_s0 = uVar1;
  return;
}



void phy_get_rf_gain_idx_vs_mode(uint8_t mode,int8_t *power,uint8_t *idx)

{
  uint8_t uVar1;
  
  uVar1 = FUN_00010cda(*power * 10);
  *idx = uVar1;
  return;
}



void FUN_00010cda(void)

{
  undefined uVar1;
  undefined *in_stack_0000000c;
  
  uVar1 = FUN_00010cda();
  *in_stack_0000000c = uVar1;
  return;
}



void phy_get_trpc_idx(uint8_t formatmod,uint8_t mcs,int8_t power,uint8_t *idx)

{
  uint8_t uVar1;
  undefined3 in_register_00002029;
  uint uVar2;
  undefined3 in_register_0000202d;
  uint uVar3;
  undefined3 in_register_00002031;
  
  uVar3 = CONCAT31(in_register_0000202d,mcs);
  uVar2 = CONCAT31(in_register_00002029,formatmod);
  if (uVar2 < 3) {
    if ((uVar2 != 0) || (3 < uVar3)) goto _L0;
_L0:
    FUN_00010d64(0,0,0x27d);
    if ((uVar2 == 2) && (uVar3 < 8)) goto _L0;
  }
  else {
    FUN_00010d1e(0,0,0x27b);
_L0:
    FUN_00010d36(0,0,0x27c);
    if ((uVar2 != 1) || (7 < uVar3)) goto _L0;
  }
  FUN_00010d82(0,0,0x27e);
_L0:
  uVar1 = FUN_00010d90(uVar2,uVar3,CONCAT31(in_register_00002031,power));
  *idx = uVar1;
  return;
}



void FUN_00010d1e(void)

{
  int unaff_s0;
  uint unaff_s1;
  undefined uVar1;
  undefined *unaff_s3;
  
  FUN_00010d1e();
  FUN_00010d36(0,0x27c);
  if ((((unaff_s0 == 1) && (unaff_s1 < 8)) || (FUN_00010d64(0,0x27d), unaff_s0 != 2)) ||
     (7 < unaff_s1)) {
    FUN_00010d82(0,0x27e);
  }
  uVar1 = FUN_00010d90();
  *unaff_s3 = uVar1;
  return;
}



void FUN_00010d36(void)

{
  int unaff_s0;
  uint unaff_s1;
  undefined uVar1;
  undefined *unaff_s3;
  
  FUN_00010d36();
  if ((((unaff_s0 == 1) && (unaff_s1 < 8)) || (FUN_00010d64(0,0x27d), unaff_s0 != 2)) ||
     (7 < unaff_s1)) {
    FUN_00010d82(0,0x27e);
  }
  uVar1 = FUN_00010d90();
  *unaff_s3 = uVar1;
  return;
}



void FUN_00010d64(void)

{
  int unaff_s0;
  uint unaff_s1;
  undefined uVar1;
  undefined *unaff_s3;
  
  FUN_00010d64();
  if ((unaff_s0 != 2) || (7 < unaff_s1)) {
    FUN_00010d82(0,0x27e);
  }
  uVar1 = FUN_00010d90();
  *unaff_s3 = uVar1;
  return;
}



void FUN_00010d82(void)

{
  undefined uVar1;
  undefined *unaff_s3;
  
  FUN_00010d82();
  uVar1 = FUN_00010d90();
  *unaff_s3 = uVar1;
  return;
}



void FUN_00010d90(void)

{
  undefined uVar1;
  undefined *unaff_s3;
  
  uVar1 = FUN_00010d90();
  *unaff_s3 = uVar1;
  return;
}



void phy_get_rf_gain_capab(int8_t *max,int8_t *min)

{
  int8_t iVar1;
  
  iVar1 = _L0();
  *max = iVar1;
  iVar1 = _L0();
  *min = iVar1;
  return;
}



void _L0(void)

{
  undefined *unaff_s0;
  undefined uVar1;
  undefined *in_stack_0000000c;
  
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  uVar1 = _L0();
  *in_stack_0000000c = uVar1;
  return;
}



void _L0(void)

{
  undefined uVar1;
  undefined *in_stack_0000000c;
  
  uVar1 = _L0();
  *in_stack_0000000c = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void bz_phy_reset(void)

{
  _DAT_40002808 = _DAT_40002808 & 0x7fffff | 0x8800000;
  _DAT_4000280c = _DAT_4000280c & 0x7fff00 | 0x4800000;
  _DAT_40002810 = _DAT_40002810 & 0xfffffffe | 2;
  _DAT_40002854 = 0x1e0a201e;
  _DAT_40002cac = _DAT_40002cac & 0xffffffe0 | 4;
  return;
}



void mpif_clk_init(void)

{
  return;
}



void phy_mdm_isr(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_rc_isr(void)

{
  if ((_DAT_44c0b41c & 0x100) == 0) {
    _DAT_44c0b420 = _DAT_44c0b41c;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


