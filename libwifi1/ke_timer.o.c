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

typedef union anon_union.conflicte2 anon_union.conflicte2, *Panon_union.conflicte2;

typedef uint wint_t;

union anon_union.conflicte2 { // DWARF DIE: e2
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte2_for___value anon_union.conflicte2_for___value, *Panon_union.conflicte2_for___value;

union anon_union.conflicte2_for___value { // DWARF DIE: e2
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 114
    int __count;
    union anon_union.conflicte2_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong uint32_t;

struct la_mem_format { // DWARF DIE: c94
    uint32_t word[4];
};

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef ushort uint16_t;

struct dma_desc { // DWARF DIE: bdb
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: c2f
    struct dma_desc * last_dma[4];
};

typedef uchar uint8_t;

typedef char int8_t;

typedef long int32_t;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: ccc
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct co_list co_list, *Pco_list;

typedef struct mblock_free mblock_free, *Pmblock_free;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: a2d
    struct co_list_hdr * next;
};

struct co_list { // DWARF DIE: a53
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mblock_free { // DWARF DIE: adb
};

struct ke_env_tag { // DWARF DIE: a8c
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_task_id_t;

typedef uint16_t ke_msg_id_t;

typedef enum anon_enum_8.conflictaf2 {
    HAL_AC0_TIMER=0,
    HAL_AC1_TIMER=1,
    HAL_AC2_TIMER=2,
    HAL_AC3_TIMER=3,
    HAL_BCN_TIMER=4,
    HAL_IDLE_TIMER=5,
    HAL_KE_TIMER=8,
    HAL_MM_TIMER=7,
    HAL_RX_TIMER=6,
    HAL_TIMER_MAX=9,
    KE_EVT_DUMP_STATISTIC=26,
    KE_EVT_GP_DMA_DL=25,
    KE_EVT_GP_DMA_UL=3,
    KE_EVT_HW_IDLE=8,
    KE_EVT_IPC_EMB_MSG=6,
    KE_EVT_IPC_EMB_TXDESC_AC0=24,
    KE_EVT_IPC_EMB_TXDESC_AC1=23,
    KE_EVT_IPC_EMB_TXDESC_AC2=22,
    KE_EVT_IPC_EMB_TXDESC_AC3=21,
    KE_EVT_IPC_EMB_TXDESC_BCN=20,
    KE_EVT_IRQ_UP_BH=1,
    KE_EVT_IRQ_USR=2,
    KE_EVT_KE_MESSAGE=7,
    KE_EVT_KE_TIMER=5,
    KE_EVT_MAX=27,
    KE_EVT_MM_TIMER=4,
    KE_EVT_PRIMARY_TBTT=9,
    KE_EVT_RESET=0,
    KE_EVT_RXREADY=13,
    KE_EVT_RXUPLOADED=11,
    KE_EVT_RXUREADY=12,
    KE_EVT_SECONDARY_TBTT=10,
    KE_EVT_TXCFM_AC0=19,
    KE_EVT_TXCFM_AC1=18,
    KE_EVT_TXCFM_AC2=17,
    KE_EVT_TXCFM_AC3=16,
    KE_EVT_TXCFM_BCN=15,
    KE_EVT_TXFRAME_CFM=14,
    TASK_API=13,
    TASK_APM=7,
    TASK_BAM=8,
    TASK_CFG=12,
    TASK_DBG=1,
    TASK_HOSTAPD_U=10,
    TASK_LAST_EMB=12,
    TASK_MAX=14,
    TASK_ME=5,
    TASK_MESH=9,
    TASK_MM=0,
    TASK_NONE=-1,
    TASK_RXU=11,
    TASK_SCAN=2,
    TASK_SCANU=4,
    TASK_SM=6,
    TASK_TDLS=3
} anon_enum_8.conflictaf2;

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 8f1
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

struct rx_swdesc { // DWARF DIE: f47
};

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct phy_channel_info { // DWARF DIE: c6c
    uint32_t info1;
    uint32_t info2;
};

typedef struct mac_addr mac_addr, *Pmac_addr;

struct mac_addr { // DWARF DIE: 96d
    uint16_t array[3];
};

typedef struct ke_timer ke_timer, *Pke_timer;

struct ke_timer { // DWARF DIE: 129d
    struct ke_timer * next;
    ke_msg_id_t id;
    ke_task_id_t task;
    uint32_t time;
};

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

struct tx_cfm_tag { // DWARF DIE: 1082
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

typedef struct rx_pbd rx_pbd, *Prx_pbd;

struct rx_pbd { // DWARF DIE: f52
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

typedef union anon_union.conflictd4e anon_union.conflictd4e, *Panon_union.conflictd4e;

union anon_union.conflictd4e { // DWARF DIE: d4e
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct rx_hd rx_hd, *Prx_hd;

struct rx_hd { // DWARF DIE: e3c
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

typedef union anon_union.conflictd04_for_field_3 anon_union.conflictd04_for_field_3, *Panon_union.conflictd04_for_field_3;

typedef union anon_union.conflictd29_for_field_4 anon_union.conflictd29_for_field_4, *Panon_union.conflictd29_for_field_4;

typedef union anon_union.conflictd4e_for_field_5 anon_union.conflictd4e_for_field_5, *Panon_union.conflictd4e_for_field_5;

union anon_union.conflictd29_for_field_4 { // DWARF DIE: d29
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflictd04_for_field_3 { // DWARF DIE: d04
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflictd4e_for_field_5 { // DWARF DIE: d4e
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: d73
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictd04_for_field_3 field_3;
    union anon_union.conflictd29_for_field_4 field_4;
    union anon_union.conflictd4e_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1101
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

struct rx_payloaddesc { // DWARF DIE: 1025
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

struct rx_dmadesc { // DWARF DIE: fb5
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef union anon_union.conflictd29 anon_union.conflictd29, *Panon_union.conflictd29;

union anon_union.conflictd29 { // DWARF DIE: d29
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflictd04 anon_union.conflictd04, *Panon_union.conflictd04;

union anon_union.conflictd04 { // DWARF DIE: d04
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8bc_for__new anon_union.conflict8bc_for__new, *Panon_union.conflict8bc_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict730 anon_struct.conflict730, *Panon_struct.conflict730;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: 1da
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

struct _on_exit_args { // DWARF DIE: 25d
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2b2
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _rand48 { // DWARF DIE: 6e7
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict730 { // DWARF DIE: 730
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

struct _Bigint { // DWARF DIE: 16a
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

union anon_union.conflict8bc_for__new { // DWARF DIE: 8bc
    struct anon_struct.conflict730 _reent;
    struct anon_struct.conflict730 _unused;
};

struct _glue { // DWARF DIE: 6a2
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 312
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 340
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

struct _reent { // DWARF DIE: 4ac
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
    union anon_union.conflict8bc_for__new _new;
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

typedef union anon_union.conflict8bc anon_union.conflict8bc, *Panon_union.conflict8bc;

union anon_union.conflict8bc { // DWARF DIE: 8bc
    struct anon_struct.conflict730 _reent;
    struct anon_struct.conflict730 _unused;
    undefined1 field2[240]; // Automatically generated padding to match DWARF declared size
};

typedef enum anon_enum_16.conflict124b {
    HAL_AC0_TIMER_BIT=1,
    HAL_AC1_TIMER_BIT=2,
    HAL_AC2_TIMER_BIT=4,
    HAL_AC3_TIMER_BIT=8,
    HAL_BCN_TIMER_BIT=16,
    HAL_IDLE_TIMER_BIT=32,
    HAL_KE_TIMER_BIT=256,
    HAL_MM_TIMER_BIT=-128,
    HAL_RX_TIMER_BIT=64
} anon_enum_16.conflict124b;

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
// DWARF DIE: 194f

void ke_timer_hw_set(ke_timer *timer)

{
  if (timer == (ke_timer *)0x0) {
    _DAT_44b0808c &= 0xfffffeff;
  }
  else {
    _DAT_44b00148 = timer->time;
    if ((_DAT_44b0808c & 0x100) == 0) {
      _DAT_44b08088 = 0x100;
      _DAT_44b0808c |= 0x100;
    }
  }
  return;
}



// DWARF DIE: 18f7

_Bool cmp_abs_time(co_list_hdr *timerA,co_list_hdr *timerB)

{
  return (_Bool)((co_list_hdr *)0x11e1a300 <
                (co_list_hdr *)((int)timerA[2].next - (int)timerB[2].next));
}



// DWARF DIE: 1896

_Bool cmp_timer_id(co_list_hdr *timer,uint32_t timer_task)

{
  if ((uint)*(ushort *)&timer[1].next == timer_task >> 0x10) {
    return (_Bool)((uint)*(ushort *)((int)&timer[1].next + 2) == (timer_task & 0xffff));
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 16c0

void ke_timer_set(ke_msg_id_t timer_id,ke_task_id_t task_id,uint32_t delay)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 in_register_0000202a;
  int extraout_a0;
  int extraout_a0_00;
  undefined2 in_register_0000202e;
  
  if (delay == 0) {
    _L0(_DAT_00000014);
  }
  else {
    if (299999999 < delay) {
      _L0(_DAT_00000014);
      return;
    }
  }
  bVar1 = false;
  if ((_DAT_00000014 != 0) &&
     ((uint)*(ushort *)(_DAT_00000014 + 4) == CONCAT22(in_register_0000202a,timer_id))) {
    bVar1 = (uint)*(ushort *)(_DAT_00000014 + 6) == CONCAT22(in_register_0000202e,task_id);
  }
  FUN_000100f0();
  iVar3 = extraout_a0;
  if (extraout_a0 == 0) {
    FUN_000100fe();
    if (extraout_a0_00 == 0) {
      FUN_0001011e();
    }
    *(ke_msg_id_t *)(extraout_a0_00 + 4) = timer_id;
    *(ke_task_id_t *)(extraout_a0_00 + 6) = task_id;
    iVar3 = extraout_a0_00;
  }
  iVar2 = delay + _DAT_44b00120;
  *(int *)(iVar3 + 8) = iVar2;
  FUN_00010148();
  if ((bVar1) || (_DAT_00000014 == iVar3)) {
    FUN_00010160();
  }
  if (-1 < iVar2 - _DAT_44b00120) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(int iRam00000014)

{
  bool bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  int extraout_a0;
  int extraout_a0_00;
  uint unaff_s5;
  uint unaff_s6;
  
  _L0(iRam00000014);
  bVar1 = false;
  if ((iRam00000014 != 0) && (*(ushort *)(iRam00000014 + 4) == unaff_s6)) {
    bVar1 = *(ushort *)(iRam00000014 + 6) == unaff_s5;
  }
  FUN_000100f0();
  iVar3 = extraout_a0;
  if (extraout_a0 == 0) {
    FUN_000100fe();
    if (extraout_a0_00 == 0) {
      FUN_0001011e();
    }
    *(short *)(extraout_a0_00 + 4) = (short)unaff_s6;
    *(short *)(extraout_a0_00 + 6) = (short)unaff_s5;
    iVar3 = extraout_a0_00;
  }
  iVar2 = unaff_s0 + _DAT_44b00120;
  *(int *)(iVar3 + 8) = iVar2;
  FUN_00010148();
  if ((bVar1) || (iRam00000014 == iVar3)) {
    FUN_00010160();
  }
  if (-1 < iVar2 - _DAT_44b00120) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100f0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int extraout_a0;
  int extraout_a0_00;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s5;
  undefined2 unaff_s6;
  
  FUN_000100f0();
  iVar2 = extraout_a0;
  if (extraout_a0 == 0) {
    FUN_000100fe();
    if (extraout_a0_00 == 0) {
      FUN_0001011e();
    }
    *(undefined2 *)(extraout_a0_00 + 4) = unaff_s6;
    *(undefined2 *)(extraout_a0_00 + 6) = unaff_s5;
    iVar2 = extraout_a0_00;
  }
  iVar1 = unaff_s0 + _DAT_44b00120;
  *(int *)(iVar2 + 8) = iVar1;
  FUN_00010148();
  if ((unaff_s2 != 0) || (*(int *)(unaff_s3 + 0x14) == iVar2)) {
    FUN_00010160();
  }
  if (-1 < iVar1 - _DAT_44b00120) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100fe(void)

{
  int unaff_s0;
  int iVar1;
  int extraout_a0;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s5;
  undefined2 unaff_s6;
  
  FUN_000100fe();
  if (extraout_a0 == 0) {
    FUN_0001011e();
  }
  *(undefined2 *)(extraout_a0 + 4) = unaff_s6;
  *(undefined2 *)(extraout_a0 + 6) = unaff_s5;
  iVar1 = unaff_s0 + _DAT_44b00120;
  *(int *)(extraout_a0 + 8) = iVar1;
  FUN_00010148();
  if ((unaff_s2 != 0) || (*(int *)(unaff_s3 + 0x14) == extraout_a0)) {
    FUN_00010160();
  }
  if (-1 < iVar1 - _DAT_44b00120) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001011e(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s5;
  undefined2 unaff_s6;
  
  FUN_0001011e();
  *(undefined2 *)(unaff_s1 + 4) = unaff_s6;
  *(undefined2 *)(unaff_s1 + 6) = unaff_s5;
  iVar1 = unaff_s0 + _DAT_44b00120;
  *(int *)(unaff_s1 + 8) = iVar1;
  FUN_00010148();
  if ((unaff_s2 != 0) || (*(int *)(unaff_s3 + 0x14) == unaff_s1)) {
    FUN_00010160();
  }
  if (-1 < iVar1 - _DAT_44b00120) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010148(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_00010148();
  if ((unaff_s2 != 0) || (*(int *)(unaff_s3 + 0x14) == unaff_s1)) {
    FUN_00010160();
  }
  if (-1 < unaff_s0 - _DAT_44b00120) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010160(void)

{
  int unaff_s0;
  
  FUN_00010160();
  if (-1 < unaff_s0 - _DAT_44b00120) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 156c

void ke_timer_clear(ke_msg_id_t timer_id,ke_task_id_t task_id)

{
  int iVar1;
  undefined2 in_register_0000202a;
  int extraout_a0;
  undefined2 in_register_0000202e;
  
  if (_DAT_00000014 == 0) {
    return;
  }
  if (((uint)*(ushort *)(_DAT_00000014 + 4) == CONCAT22(in_register_0000202a,timer_id)) &&
     ((uint)*(ushort *)(_DAT_00000014 + 6) == CONCAT22(in_register_0000202e,task_id))) {
    _LVL44();
    iVar1 = _DAT_00000014;
    FUN_00010202();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) - _DAT_44b00120 < 0)) {
      FUN_00010230();
    }
  }
  else {
    _LVL54();
    if (extraout_a0 == 0) {
      return;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL44(void)

{
  int unaff_s1;
  int iVar1;
  
  _LVL44();
  iVar1 = *(int *)(unaff_s1 + 0x14);
  FUN_00010202();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) - _DAT_44b00120 < 0)) {
    FUN_00010230();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010202(void)

{
  int unaff_s1;
  
  FUN_00010202();
  if ((unaff_s1 != 0) && (*(int *)(unaff_s1 + 8) - _DAT_44b00120 < 0)) {
    FUN_00010230();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010230(void)

{
  FUN_00010230();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL54(void)

{
  int extraout_a0;
  
  _LVL54();
  if (extraout_a0 != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 13b3

void ke_timer_schedule(int dummy)

{
  int iVar1;
  int extraout_a0;
  
  while( true ) {
    FUN_00010292(0x4000000);
    iVar1 = _DAT_00000014;
    if (_DAT_00000014 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if ((-1 < (*(int *)(_DAT_00000014 + 8) - _DAT_44b00120) + -0x32) &&
       (FUN_000102f4(_DAT_00000014), -1 < *(int *)(iVar1 + 8) - _DAT_44b00120)) break;
    FUN_000102c8(0x14);
    FUN_000102de((uint)*(ushort *)(extraout_a0 + 4),(uint)*(ushort *)(extraout_a0 + 6),0xff);
    FUN_000102e8(extraout_a0);
  }
  return;
}



void FUN_00010292(undefined4 param_1)

{
  int iVar1;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_00010292(param_1);
    iVar1 = *(int *)(unaff_s1 + 0x14);
    if (iVar1 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if ((-1 < (*(int *)(iVar1 + 8) - *(int *)(unaff_s2 + 0x120)) + -0x32) &&
       (FUN_000102f4(iVar1), -1 < *(int *)(iVar1 + 8) - *(int *)(unaff_s2 + 0x120))) break;
    FUN_000102c8(unaff_s3 + 0x14);
    FUN_000102de((uint)*(ushort *)(extraout_a0 + 4),(uint)*(ushort *)(extraout_a0 + 6),0xff);
    FUN_000102e8(extraout_a0);
    param_1 = 0x4000000;
  }
  return;
}



void FUN_000102c8(int param_1)

{
  int iVar1;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_000102c8(param_1);
    FUN_000102de((uint)*(ushort *)(extraout_a0 + 4),(uint)*(ushort *)(extraout_a0 + 6),0xff);
    FUN_000102e8(extraout_a0);
    FUN_00010292(0x4000000);
    iVar1 = *(int *)(unaff_s1 + 0x14);
    if (iVar1 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if ((-1 < (*(int *)(iVar1 + 8) - *(int *)(unaff_s2 + 0x120)) + -0x32) &&
       (FUN_000102f4(iVar1), -1 < *(int *)(iVar1 + 8) - *(int *)(unaff_s2 + 0x120))) break;
    param_1 = unaff_s3 + 0x14;
  }
  return;
}



void FUN_000102de(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_000102de(param_1,param_2,param_3);
    FUN_000102e8(unaff_s0);
    FUN_00010292(0x4000000);
    iVar1 = *(int *)(unaff_s1 + 0x14);
    if (iVar1 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if ((-1 < (*(int *)(iVar1 + 8) - *(int *)(unaff_s2 + 0x120)) + -0x32) &&
       (FUN_000102f4(iVar1), -1 < *(int *)(iVar1 + 8) - *(int *)(unaff_s2 + 0x120))) break;
    FUN_000102c8(unaff_s3 + 0x14);
    param_2 = (uint)*(ushort *)(extraout_a0 + 6);
    param_1 = (uint)*(ushort *)(extraout_a0 + 4);
    param_3 = 0xff;
    unaff_s0 = extraout_a0;
  }
  return;
}



void FUN_000102e8(int param_1)

{
  int iVar1;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_000102e8(param_1);
    FUN_00010292(0x4000000);
    iVar1 = *(int *)(unaff_s1 + 0x14);
    if (iVar1 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if ((-1 < (*(int *)(iVar1 + 8) - *(int *)(unaff_s2 + 0x120)) + -0x32) &&
       (FUN_000102f4(iVar1), -1 < *(int *)(iVar1 + 8) - *(int *)(unaff_s2 + 0x120))) break;
    FUN_000102c8(unaff_s3 + 0x14);
    FUN_000102de((uint)*(ushort *)(extraout_a0 + 4),(uint)*(ushort *)(extraout_a0 + 6),0xff);
    param_1 = extraout_a0;
  }
  return;
}



void FUN_000102f4(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  do {
    FUN_000102f4(param_1);
    if (-1 < *(int *)(unaff_s0 + 8) - *(int *)(unaff_s2 + 0x120)) {
      return;
    }
    do {
      FUN_000102c8(unaff_s3 + 0x14);
      FUN_000102de((uint)*(ushort *)(extraout_a0 + 4),(uint)*(ushort *)(extraout_a0 + 6),0xff);
      FUN_000102e8(extraout_a0);
      FUN_00010292(0x4000000);
      unaff_s0 = *(int *)(unaff_s1 + 0x14);
      if (unaff_s0 == 0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      param_1 = unaff_s0;
    } while ((*(int *)(unaff_s0 + 8) - *(int *)(unaff_s2 + 0x120)) + -0x32 < 0);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1359

_Bool ke_timer_active(ke_msg_id_t timer_id,ke_task_id_t task_id)

{
  undefined2 in_register_0000202a;
  undefined2 in_register_0000202e;
  int *piVar1;
  
  piVar1 = (int *)_DAT_00000014;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return false;
    }
    if (((uint)*(ushort *)(piVar1 + 1) == CONCAT22(in_register_0000202a,timer_id)) &&
       ((uint)*(ushort *)((int)piVar1 + 6) == CONCAT22(in_register_0000202e,task_id))) break;
    piVar1 = (int *)*piVar1;
  }
  return true;
}


