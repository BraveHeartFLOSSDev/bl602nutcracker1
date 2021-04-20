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
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

typedef ulong uint32_t;

struct phy_channel_info {
    uint32_t info1;
    uint32_t info2;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict151_for___value anon_union.conflict151_for___value, *Panon_union.conflict151_for___value;

typedef uint wint_t;

union anon_union.conflict151_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflict151_for___value __value;
};

typedef union anon_union.conflict151 anon_union.conflict151, *Panon_union.conflict151;

union anon_union.conflict151 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format {
    uint32_t word[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr {
    uint16_t array[3];
};

typedef enum anon_enum_8.conflict9dc {
    HAL_MM_TIMER=7,
    AC_VI=2,
    AC_VO=3,
    HAL_AC3_TIMER=3,
    IPC_DMA_CHANNEL_MAX=4,
    HAL_KE_TIMER=8,
    HAL_AC2_TIMER=2,
    TCAL_RXGAIN=2,
    TCAL_RXIQ=3,
    HAL_AC0_TIMER=0,
    TCAL_TXIQ=1,
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
    TCAL_NUM_CALS=4,
    HAL_AC1_TIMER=1,
    AC_BE=1,
    TID_MAX=9,
    AC_BK=0,
    HAL_BCN_TIMER=4,
    TCAL_TXGAIN=0,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_DATA_RX=1
} anon_enum_8.conflict9dc;

typedef struct anon_struct.conflict11cd anon_struct.conflict11cd, *Panon_struct.conflict11cd;

typedef long int32_t;

struct anon_struct.conflict11cd {
    uint32_t index;
    int32_t dvga;
};

typedef struct regs_to_opti regs_to_opti, *Pregs_to_opti;

struct regs_to_opti {
    uint32_t vbcore;
    uint32_t iet;
    uint32_t vbcore_11n;
    uint32_t iet_11n;
    uint32_t vbcore_11g;
    uint32_t iet_11g;
    uint32_t vbcore_11b;
    uint32_t iet_11b;
    uint32_t lo_fbdv_halfstep_en;
    uint32_t lo_fbdv_halfstep_en_tx;
    uint32_t lo_fbdv_halfstep_en_rx;
    uint32_t clkpll_reset_postdiv;
    uint32_t clkpll_dither_sel;
};

typedef struct notch_param notch_param, *Pnotch_param;

struct notch_param {
    uint32_t notch_en;
    int32_t spur_freq;
};

typedef struct tx_pwr_index tx_pwr_index, *Ptx_pwr_index;

struct tx_pwr_index {
    uint32_t index;
    int32_t dvga;
};

typedef struct anon_struct.conflict125b anon_struct.conflict125b, *Panon_struct.conflict125b;

struct anon_struct.conflict125b {
    uint32_t vbcore;
    uint32_t iet;
    uint32_t vbcore_11n;
    uint32_t iet_11n;
    uint32_t vbcore_11g;
    uint32_t iet_11g;
    uint32_t vbcore_11b;
    uint32_t iet_11b;
    uint32_t lo_fbdv_halfstep_en;
    uint32_t lo_fbdv_halfstep_en_tx;
    uint32_t lo_fbdv_halfstep_en_rx;
    uint32_t clkpll_reset_postdiv;
    uint32_t clkpll_dither_sel;
};

typedef struct dma_desc dma_desc, *Pdma_desc;

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

typedef uchar uint8_t;

typedef char int8_t;

typedef short int16_t;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

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

typedef union anon_union.conflictcc4 anon_union.conflictcc4, *Panon_union.conflictcc4;

union anon_union.conflictcc4 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

struct rx_swdesc {
};

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

typedef union anon_union.conflictc7a_for_field_3 anon_union.conflictc7a_for_field_3, *Panon_union.conflictc7a_for_field_3;

typedef union anon_union.conflictc9f_for_field_4 anon_union.conflictc9f_for_field_4, *Panon_union.conflictc9f_for_field_4;

typedef union anon_union.conflictcc4_for_field_5 anon_union.conflictcc4_for_field_5, *Panon_union.conflictcc4_for_field_5;

union anon_union.conflictc7a_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflictc9f_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflictcc4_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictc7a_for_field_3 field_3;
    union anon_union.conflictc9f_for_field_4 field_4;
    union anon_union.conflictcc4_for_field_5 field_5;
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

typedef union anon_union.conflictc7a anon_union.conflictc7a, *Panon_union.conflictc7a;

union anon_union.conflictc7a {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflictc9f anon_union.conflictc9f, *Panon_union.conflictc9f;

union anon_union.conflictc9f {
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

typedef union anon_union.conflict92b_for__new anon_union.conflict92b_for__new, *Panon_union.conflict92b_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict79f anon_struct.conflict79f, *Panon_struct.conflict79f;

typedef struct anon_struct.conflict8e4 anon_struct.conflict8e4, *Panon_struct.conflict8e4;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct anon_struct.conflict8e4 {
    uchar * _nextf[30];
    uint _nmalloc[30];
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

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict79f {
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

union anon_union.conflict92b_for__new {
    struct anon_struct.conflict79f _reent;
    struct anon_struct.conflict8e4 _unused;
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
    union anon_union.conflict92b_for__new _new;
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

typedef union anon_union.conflict92b anon_union.conflict92b, *Panon_union.conflict92b;

union anon_union.conflict92b {
    struct anon_struct.conflict79f _reent;
    struct anon_struct.conflict8e4 _unused;
};

typedef struct trpc_env_tag trpc_env_tag, *Ptrpc_env_tag;

struct trpc_env_tag {
    int8_t power_dbm_max_rf;
    int8_t power_dbm_min_rf;
    int8_t power_dbm_lim_reg;
    undefined field_0x3;
    int16_t channel_freq;
    int8_t temperature;
    int8_t temperature_compensate;
};

typedef struct tcal_tag tcal_tag, *Ptcal_tag;

struct tcal_tag {
    int16_t prev_temperature;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t last_action_time[4];
    uint32_t last_action_temperature[4];
    int32_t last_action_out[4];
    _Bool enabled;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
};

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




void phy_tcal_reset(undefined4 uRam00000014,undefined4 uRam00000018,undefined4 uRam0000001c,
                   undefined4 uRam00000020,undefined param_5)

{
  _L0(0,0,0x38);
  uRam00000000 = 0x19;
  uRam00000014 = 0x19;
  uRam00000018 = 0x19;
  uRam0000001c = 0x19;
  uRam00000020 = 0x19;
  DAT_00000034 = 1;
  return;
}



void _L0(void)

{
  undefined2 *unaff_s0;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 10) = 0x19;
  *(undefined4 *)(unaff_s0 + 0xc) = 0x19;
  *(undefined4 *)(unaff_s0 + 0xe) = 0x19;
  *(undefined4 *)(unaff_s0 + 0x10) = 0x19;
  *unaff_s0 = 0x19;
  *(undefined *)(unaff_s0 + 0x1a) = 1;
  return;
}



void phy_tcal_start(void)

{
  DAT_00000034 = 1;
  return;
}



void phy_tcal_stop(void)

{
  DAT_00000034 = 0;
  return;
}



void phy_tcal_txpwr(int16_t curr_temperature)

{
  undefined2 in_register_0000202a;
  
  _L0(CONCAT22(in_register_0000202a,curr_temperature));
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



// WARNING: Variable defined which should be unmapped: curr_temperature

void phy_tcal_handle(int iRam0000001c,int iRam0000002c)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort auStack18 [2];
  int16_t curr_temperature;
  
  iVar1 = _L0(auStack18);
  if (iVar1 != 0) {
    _LVL9((int)(short)auStack18[0]);
    uVar2 = (uint)auStack18[0];
    if (0x7d < (short)auStack18[0]) {
      uVar2 = 0x7d;
    }
    if ((short)uVar2 < -0x28) {
      uVar2 = 0xffffffd8;
    }
    auStack18[0] = (ushort)uVar2;
    iVar1 = (int)((uVar2 - 0x19) * 0x10000) >> 0x10;
    iVar3 = (int)(short)auStack18[0];
    if (iVar1 < 1) {
      iVar1 = iVar1 * -6 >> 8;
    }
    else {
      iVar1 = (iVar1 * 6 >> 8) * -0x10000 >> 0x10;
    }
    if (iVar1 != iRam0000002c) {
      FUN_000100fa(iVar1);
      iRam0000001c = iVar3;
      iRam0000002c = iVar1;
    }
    uRam00000000 = auStack18[0];
  }
  return;
}



void _L0(int iRam0000001c,int iRam0000002c)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  ushort in_stack_0000000e;
  
  iVar1 = _L0();
  sVar3 = sRam00000000;
  if (iVar1 != 0) {
    _LVL9((int)(short)in_stack_0000000e);
    uVar2 = (uint)in_stack_0000000e;
    if (0x7d < (short)in_stack_0000000e) {
      uVar2 = 0x7d;
    }
    if ((short)uVar2 < -0x28) {
      uVar2 = 0xffffffd8;
    }
    sVar3 = (short)uVar2;
    iVar1 = (int)((uVar2 - 0x19) * 0x10000) >> 0x10;
    if (iVar1 < 1) {
      iVar1 = iVar1 * -6 >> 8;
    }
    else {
      iVar1 = (iVar1 * 6 >> 8) * -0x10000 >> 0x10;
    }
    if (iVar1 != iRam0000002c) {
      FUN_000100fa(iVar1);
      iRam0000001c = (int)sVar3;
      iRam0000002c = iVar1;
    }
  }
  sRam00000000 = sVar3;
  return;
}



void _LVL9(int iRam0000001c,int iRam0000002c)

{
  uint uVar1;
  int iVar2;
  ushort in_stack_0000000e;
  
  _LVL9();
  uVar1 = (uint)in_stack_0000000e;
  if (0x7d < (short)in_stack_0000000e) {
    uVar1 = 0x7d;
  }
  if ((short)uVar1 < -0x28) {
    uVar1 = 0xffffffd8;
  }
  iVar2 = (int)((uVar1 - 0x19) * 0x10000) >> 0x10;
  if (iVar2 < 1) {
    iVar2 = iVar2 * -6 >> 8;
  }
  else {
    iVar2 = (iVar2 * 6 >> 8) * -0x10000 >> 0x10;
  }
  if (iVar2 != iRam0000002c) {
    FUN_000100fa(iVar2);
    iRam0000001c = (int)(short)uVar1;
    iRam0000002c = iVar2;
  }
  sRam00000000 = (short)uVar1;
  return;
}



void FUN_000100fa(void)

{
  undefined4 unaff_s0;
  undefined2 *unaff_s1;
  undefined4 unaff_s2;
  undefined2 in_stack_0000000e;
  
  FUN_000100fa();
  *(undefined4 *)(unaff_s1 + 0xe) = unaff_s2;
  *(undefined4 *)(unaff_s1 + 0x16) = unaff_s0;
  *unaff_s1 = in_stack_0000000e;
  return;
}



void phy_tcal_callback(int16_t temperature)

{
  _L0();
  if (DAT_00000034 == '\0') {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(char param_1)

{
  _L0();
  if (DAT_00000034 == '\0') {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


