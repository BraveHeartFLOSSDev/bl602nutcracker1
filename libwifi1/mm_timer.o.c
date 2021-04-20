typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef int _ssize_t;

typedef union anon_union.conflictd8 anon_union.conflictd8, *Panon_union.conflictd8;

typedef uint wint_t;

union anon_union.conflictd8 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictd8_for___value anon_union.conflictd8_for___value, *Panon_union.conflictd8_for___value;

union anon_union.conflictd8_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictd8_for___value __value;
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

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr {
    struct co_list_hdr * next;
};

struct mm_timer_tag {
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag {
    struct co_list prog;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free {
};

struct ke_env_tag {
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

struct rx_swdesc {
};

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct phy_channel_info {
    uint32_t info1;
    uint32_t info2;
};

typedef long __int32_t;

typedef uchar __uint8_t;

typedef char __int8_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

struct mac_addr {
    uint16_t array[3];
};

typedef enum anon_enum_8.conflict9a4 {
    HAL_MM_TIMER=7,
    KE_EVT_RXUREADY=12,
    KE_EVT_IPC_EMB_MSG=6,
    KE_EVT_RXREADY=13,
    KE_EVT_KE_TIMER=5,
    IPC_DMA_CHANNEL_MAX=4,
    HAL_AC2_TIMER=2,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    TID_2=2,
    KE_EVT_SECONDARY_TBTT=10,
    TID_5=5,
    TID_4=4,
    TID_7=7,
    TID_6=6,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    TID_MGT=8,
    HAL_TIMER_MAX=9,
    HAL_AC1_TIMER=1,
    KE_EVT_KE_MESSAGE=7,
    AC_BE=1,
    AC_BK=0,
    KE_EVT_IPC_EMB_TXDESC_BCN=20,
    KE_EVT_MM_TIMER=4,
    KE_EVT_HW_IDLE=8,
    IPC_DMA_CHANNEL_DATA_RX=1,
    AC_VI=2,
    KE_EVT_MAX=27,
    KE_EVT_TXCFM_AC1=18,
    AC_VO=3,
    KE_EVT_TXCFM_AC0=19,
    KE_EVT_PRIMARY_TBTT=9,
    KE_EVT_TXCFM_AC3=16,
    KE_EVT_RXUPLOADED=11,
    KE_EVT_TXCFM_AC2=17,
    KE_EVT_IPC_EMB_TXDESC_AC3=21,
    HAL_AC3_TIMER=3,
    HAL_KE_TIMER=8,
    KE_EVT_IPC_EMB_TXDESC_AC2=22,
    KE_EVT_IPC_EMB_TXDESC_AC1=23,
    KE_EVT_IPC_EMB_TXDESC_AC0=24,
    KE_EVT_DUMP_STATISTIC=26,
    KE_EVT_TXFRAME_CFM=14,
    HAL_AC0_TIMER=0,
    KE_EVT_RESET=0,
    KE_EVT_IRQ_USR=2,
    AC_MAX=4,
    KE_EVT_GP_DMA_DL=25,
    KE_EVT_TXCFM_BCN=15,
    HAL_IDLE_TIMER=5,
    HAL_RX_TIMER=6,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    TID_MAX=9,
    HAL_BCN_TIMER=4,
    KE_EVT_IRQ_UP_BH=1,
    KE_EVT_GP_DMA_UL=3,
    IPC_DMA_CHANNEL_DATA_TX=3
} anon_enum_8.conflict9a4;

typedef union anon_union.conflicte92 anon_union.conflicte92, *Panon_union.conflicte92;

union anon_union.conflicte92 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef __int8_t int8_t;

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

typedef struct rx_pbd rx_pbd, *Prx_pbd;

struct rx_pbd {
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
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

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef union anon_union.conflicte48_for_field_3 anon_union.conflicte48_for_field_3, *Panon_union.conflicte48_for_field_3;

typedef union anon_union.conflicte6d_for_field_4 anon_union.conflicte6d_for_field_4, *Panon_union.conflicte6d_for_field_4;

typedef union anon_union.conflicte92_for_field_5 anon_union.conflicte92_for_field_5, *Panon_union.conflicte92_for_field_5;

union anon_union.conflicte6d_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflicte48_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflicte92_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflicte48_for_field_3 field_3;
    union anon_union.conflicte6d_for_field_4 field_4;
    union anon_union.conflicte92_for_field_5 field_5;
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

typedef union anon_union.conflicte6d anon_union.conflicte6d, *Panon_union.conflicte6d;

union anon_union.conflicte6d {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
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

typedef union anon_union.conflicte48 anon_union.conflicte48, *Panon_union.conflicte48;

union anon_union.conflicte48 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8b2_for__new anon_union.conflict8b2_for__new, *Panon_union.conflict8b2_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict726 anon_struct.conflict726, *Panon_struct.conflict726;

typedef struct anon_struct.conflict86b anon_struct.conflict86b, *Panon_struct.conflict86b;

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

struct anon_struct.conflict726 {
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

struct anon_struct.conflict86b {
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

union anon_union.conflict8b2_for__new {
    struct anon_struct.conflict726 _reent;
    struct anon_struct.conflict86b _unused;
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
    union anon_union.conflict8b2_for__new _new;
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

typedef union anon_union.conflict8b2 anon_union.conflict8b2, *Panon_union.conflict8b2;

union anon_union.conflict8b2 {
    struct anon_struct.conflict726 _reent;
    struct anon_struct.conflict86b _unused;
};

typedef enum anon_enum_16.conflict138f {
    HAL_AC2_TIMER_BIT=4,
    HAL_AC1_TIMER_BIT=2,
    HAL_AC3_TIMER_BIT=8,
    HAL_MM_TIMER_BIT=-128,
    HAL_KE_TIMER_BIT=256,
    HAL_RX_TIMER_BIT=64,
    HAL_AC0_TIMER_BIT=1,
    HAL_BCN_TIMER_BIT=16,
    HAL_IDLE_TIMER_BIT=32
} anon_enum_16.conflict138f;

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

void mm_timer_hw_set(mm_timer_tag *timer)

{
  if (timer == (mm_timer_tag *)0x0) {
    _DAT_44b0808c = _DAT_44b0808c & 0xffffff7f;
  }
  else {
    _DAT_44b00144 = timer->time;
    if ((_DAT_44b0808c & 0x80) == 0) {
      _DAT_44b08088 = 0x80;
      _DAT_44b0808c = _DAT_44b0808c | 0x80;
    }
  }
  return;
}



_Bool cmp_abs_time(co_list_hdr *timerA,co_list_hdr *timerB)

{
  return SUB41((uint)((int)timerA[3].next - (int)timerB[3].next) >> 0x1f,0);
}



void mm_timer_init(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mm_timer_set(mm_timer_tag *timer,uint32_t value)

{
  bool bVar1;
  
  if ((int)(value - _DAT_44b00120) < 0) {
    FUN_00010084(0);
    value = _DAT_44b00120 + 3000;
  }
  bVar1 = timer != pmRam00000000;
  if (bVar1) {
    FUN_00010110(0,timer);
  }
  else {
    FUN_000100a8(0);
  }
  timer->time = value;
  FUN_000100c4(0,timer,0);
  if ((!bVar1) || (timer == pmRam00000000)) {
    FUN_000100dc(pmRam00000000);
  }
  if (-1 < (int)(value - _DAT_44b00120)) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010084(void)

{
  bool bVar1;
  int iVar2;
  int unaff_s1;
  int unaff_s2;
  
  FUN_00010084();
  iVar2 = *(int *)(unaff_s1 + 0x120) + 3000;
  bVar1 = unaff_s2 != iRam00000000;
  if (bVar1) {
    FUN_00010110(0);
  }
  else {
    FUN_000100a8(0);
  }
  *(int *)(unaff_s2 + 0xc) = iVar2;
  FUN_000100c4(0,0);
  if ((!bVar1) || (unaff_s2 == iRam00000000)) {
    FUN_000100dc(iRam00000000);
  }
  if (-1 < iVar2 - _DAT_44b00120) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000100d0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100a8(void)

{
  int unaff_s0;
  undefined4 *unaff_s1;
  int unaff_s2;
  
  FUN_000100a8();
  *(int *)(unaff_s2 + 0xc) = unaff_s0;
  FUN_000100c4(0);
  FUN_000100dc(*unaff_s1);
  if (unaff_s0 - _DAT_44b00120 < 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100c4(void)

{
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_000100c4();
  if ((unaff_s3 != 0) || (unaff_s2 == *unaff_s1)) {
    FUN_000100dc(*unaff_s1);
  }
  if (-1 < unaff_s0 - _DAT_44b00120) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100dc(void)

{
  int unaff_s0;
  
  FUN_000100dc();
  if (-1 < unaff_s0 - _DAT_44b00120) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010110(void)

{
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  
  FUN_00010110();
  *(int *)(unaff_s2 + 0xc) = unaff_s0;
  FUN_000100c4(0);
  if (unaff_s2 == *unaff_s1) {
    FUN_000100dc(*unaff_s1);
  }
  if (unaff_s0 - _DAT_44b00120 < 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void mm_timer_clear(mm_timer_tag *timer)

{
  if (timer != pmRam00000000) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL32(0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL32(void)

{
  _LVL32();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mm_timer_schedule(int dummy)

{
  int iVar1;
  
  while( true ) {
    FUN_00010194(0x8000000);
    iVar1 = iRam00000000;
    if (iRam00000000 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if ((-1 < (*(int *)(iRam00000000 + 0xc) - _DAT_44b00120) + -0x32) &&
       (FUN_000101fa(iRam00000000), -1 < *(int *)(iVar1 + 0xc) - _DAT_44b00120)) break;
    FUN_000101d0(0);
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_000101e8(0,0,0xde);
    }
    (**(code **)(iVar1 + 4))(*(undefined4 *)(iVar1 + 8),*(code **)(iVar1 + 4));
  }
  return;
}



void FUN_00010194(undefined4 param_1)

{
  int iVar1;
  int *unaff_s1;
  int unaff_s2;
  
  while( true ) {
    FUN_00010194(param_1);
    iVar1 = *unaff_s1;
    if (iVar1 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if ((-1 < (*(int *)(iVar1 + 0xc) - *(int *)(unaff_s2 + 0x120)) + -0x32) &&
       (FUN_000101fa(iVar1), -1 < *(int *)(iVar1 + 0xc) - *(int *)(unaff_s2 + 0x120))) break;
    FUN_000101d0();
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_000101e8(0xde);
    }
    (**(code **)(iVar1 + 4))(*(undefined4 *)(iVar1 + 8),*(code **)(iVar1 + 4));
    param_1 = 0x8000000;
  }
  return;
}



void FUN_000101d0(void)

{
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  
  while( true ) {
    FUN_000101d0();
    if (*(int *)(unaff_s0 + 4) == 0) {
      FUN_000101e8(0xde);
    }
    (**(code **)(unaff_s0 + 4))(*(undefined4 *)(unaff_s0 + 8),*(code **)(unaff_s0 + 4));
    FUN_00010194(0x8000000);
    unaff_s0 = *unaff_s1;
    if (unaff_s0 == 0) break;
    if ((-1 < (*(int *)(unaff_s0 + 0xc) - *(int *)(unaff_s2 + 0x120)) + -0x32) &&
       (FUN_000101fa(unaff_s0), -1 < *(int *)(unaff_s0 + 0xc) - *(int *)(unaff_s2 + 0x120))) {
      return;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000101e8(undefined4 param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  
  do {
    FUN_000101e8(param_1);
    do {
      (**(code **)(unaff_s0 + 4))(*(undefined4 *)(unaff_s0 + 8),*(code **)(unaff_s0 + 4));
      FUN_00010194(0x8000000);
      unaff_s0 = *unaff_s1;
      if (unaff_s0 == 0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if ((-1 < (*(int *)(unaff_s0 + 0xc) - *(int *)(unaff_s2 + 0x120)) + -0x32) &&
         (FUN_000101fa(unaff_s0), -1 < *(int *)(unaff_s0 + 0xc) - *(int *)(unaff_s2 + 0x120))) {
        return;
      }
      FUN_000101d0();
    } while (*(int *)(unaff_s0 + 4) != 0);
    param_1 = 0xde;
  } while( true );
}



void FUN_000101fa(int param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  
  do {
    FUN_000101fa(param_1);
    if (-1 < *(int *)(unaff_s0 + 0xc) - *(int *)(unaff_s2 + 0x120)) {
      return;
    }
    do {
      FUN_000101d0();
      if (*(int *)(unaff_s0 + 4) == 0) {
        FUN_000101e8(0xde);
      }
      (**(code **)(unaff_s0 + 4))(*(undefined4 *)(unaff_s0 + 8),*(code **)(unaff_s0 + 4));
      FUN_00010194(0x8000000);
      unaff_s0 = *unaff_s1;
      if (unaff_s0 == 0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      param_1 = unaff_s0;
    } while ((*(int *)(unaff_s0 + 0xc) - *(int *)(unaff_s2 + 0x120)) + -0x32 < 0);
  } while( true );
}


