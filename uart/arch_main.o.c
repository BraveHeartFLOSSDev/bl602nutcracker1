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

typedef struct rwip_eif_api rwip_eif_api, *Prwip_eif_api;

typedef uchar uint8_t;

typedef ulong uint32_t;

struct rwip_eif_api {
    void (* read)(uint8_t *, uint32_t, void (* )(void *, uint8_t), void *);
    void (* write)(uint8_t *, uint32_t, void (* )(void *, uint8_t), void *);
    void (* flow_on)(void);
    _Bool (* flow_off)(void);
};

typedef struct rw_task_msg_t rw_task_msg_t, *Prw_task_msg_t;

struct rw_task_msg_t {
    uint8_t msg_type;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    void * params;
};

typedef struct rwip_prio rwip_prio, *Prwip_prio;

struct rwip_prio {
    uint8_t value;
    uint8_t increment;
};

typedef enum rwip_eif_types {
    RWIP_EIF_HCIH=1,
    RWIP_EIF_HCIC=0,
    RWIP_EIF_AHI=2
} rwip_eif_types;

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

typedef char int8_t;

typedef ushort uint16_t;

struct rwip_rf_api {
    void (* reset)(void);
    void (* force_agc_enable)(_Bool);
    _Bool (* txpwr_dec)(uint8_t);
    _Bool (* txpwr_inc)(uint8_t);
    void (* txpwr_max_set)(int8_t);
    uint8_t (* txpwr_dbm_get)(uint8_t, uint8_t);
    uint8_t (* txpwr_cs_get)(int8_t);
    int8_t (* rssi_convert)(uint8_t);
    uint32_t (* reg_rd)(uint16_t);
    void (* reg_wr)(uint16_t, uint32_t);
    void (* sleep)(void);
    uint8_t txpwr_max;
    int8_t rssi_high_thr;
    int8_t rssi_low_thr;
    int8_t rssi_interf_thr;
    uint8_t wakeup_delay;
    undefined field_0x31;
    undefined field_0x32;
    undefined field_0x33;
};

typedef enum rw_task_msg_type {
    HOST_TO_FW_MSG=1,
    FW_TO_FW_MSG=2
} rw_task_msg_type;

typedef struct tskTaskControlBlock tskTaskControlBlock, *PtskTaskControlBlock;

typedef struct tskTaskControlBlock * TaskHandle_t;

struct tskTaskControlBlock {
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict1d8_for___value anon_union.conflict1d8_for___value, *Panon_union.conflict1d8_for___value;

typedef uint wint_t;

union anon_union.conflict1d8_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflict1d8_for___value __value;
};

typedef union anon_union.conflict1d8 anon_union.conflict1d8, *Panon_union.conflict1d8;

union anon_union.conflict1d8 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef enum rwip_prio_idx {
    RWIP_PRIO_LE_ESTAB_IDX=2,
    RWIP_PRIO_INIT_IDX=1,
    RWIP_PRIO_LE_CON_IDLE_IDX=3,
    RWIP_PRIO_ADV_HDC_IDX=6,
    RWIP_PRIO_IDX_MAX=7,
    RWIP_PRIO_LE_CON_ACT_IDX=4,
    RWIP_PRIO_ADV_IDX=5,
    RWIP_PRIO_SCAN_IDX=0
} rwip_prio_idx;

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

typedef enum anon_enum_8.conflict31 {
    KE_MEM_KE_MSG=0,
    RESERVED19=64,
    MSOFT_IRQn=3,
    BMX_ERR_IRQn=16,
    KE_MEM_NON_RETENTION=0,
    MAC_PORT_TRG_IRQn=78,
    KE_MEM_BLOCK_EM=1,
    IRTX_IRQn=35,
    SEC_AES_IRQn=29,
    GPIO_INT0_IRQn=60,
    RESERVED10=55,
    PDS_WAKEUP_IRQn=66,
    UART0_IRQn=45,
    SEC_TRNG_IRQn=28,
    RESERVED12=57,
    SEC_PKA_IRQn=27,
    EFUSE_IRQn=42,
    RESERVED11=56,
    RF_TOP_INT1_IRQn=22,
    RESERVED14=59,
    SPI_IRQn=43,
    TIMER_WDT_IRQn=54,
    RESERVED13=58,
    RESERVED16=61,
    WIFI_IPC_PUBLIC_IRQn=79,
    RESERVED18=63,
    RESERVED17=62,
    IRQn_LAST=80,
    RESERVED3=37,
    RESERVED2=34,
    RESERVED1=33,
    SEC_SHA_IRQn=30,
    RESERVED0=32,
    RESERVED7=47,
    RESERVED6=44,
    RESERVED5=40,
    RESERVED4=38,
    MAC_TXRX_MISC_IRQn=74,
    BLE_IRQn=72,
    UART1_IRQn=46,
    GPADC_DMA_IRQn=41,
    KE_MEM_ENV=0,
    DMA_ALL_IRQn=31,
    I2C_IRQn=48,
    MAC_TXRX_TIMER_IRQn=73,
    MTIME_IRQn=7,
    RESERVED20=65,
    TIMER_CH1_IRQn=53,
    RESERVED9=51,
    SEC_GMAC_IRQn=25,
    RESERVED8=49,
    MAC_TX_TRG_IRQn=76,
    PWM_IRQn=50,
    BMX_TO_IRQn=17,
    TIMER_CH0_IRQn=52,
    BZ_PHY_IRQn=71,
    HBN_OUT1_IRQn=68,
    WIFI_IRQn=70,
    SEC_BMX_ERR_IRQn=20,
    HBN_OUT0_IRQn=67,
    KE_MEM_BLOCK_RAM=0,
    SEC_CDET_IRQn=26,
    DMA_BMX_ERR_IRQn=24,
    IRRX_IRQn=36,
    BOR_IRQn=69,
    CLIC_SOFT_PEND_IRQn=12,
    KE_MEM_BLOCK_MAX=2,
    MEXT_IRQn=11,
    RF_TOP_INT0_IRQn=21,
    MAC_GEN_IRQn=77,
    SF_CTRL_IRQn=39,
    MAC_RX_TRG_IRQn=75,
    SDIO_IRQn=23,
    L1C_BMX_ERR_IRQn=18,
    L1C_BMX_TO_IRQn=19
} anon_enum_8.conflict31;

typedef struct QueueDefinition QueueDefinition, *PQueueDefinition;

typedef struct QueueDefinition * QueueHandle_t;

struct QueueDefinition {
};

typedef struct bd_addr bd_addr, *Pbd_addr;

struct bd_addr {
    uint8_t addr[6];
};

typedef long int32_t;

typedef enum TASK_API_ID {
    TASK_ID_LANC=54,
    TASK_ID_PLXC=68,
    TASK_ID_SCPPS=34,
    TASK_ID_ANPS=47,
    TASK_ID_FINDT=25,
    TASK_ID_GAPM=13,
    TASK_ID_APP=15,
    TASK_ID_CSCPS=45,
    TASK_ID_FINDL=24,
    TASK_ID_BASS=36,
    TASK_ID_AM0_HAS=-15,
    TASK_ID_SCPPC=35,
    TASK_ID_BCSS=63,
    TASK_ID_DBG=3,
    TASK_ID_ANPC=48,
    TASK_ID_AHI=16,
    TASK_ID_AM0=-16,
    TASK_ID_HOGPBH=39,
    TASK_ID_GATTM=11,
    TASK_ID_HRPS=30,
    TASK_ID_CSCPC=46,
    TASK_ID_RSCPC=44,
    TASK_ID_PROXM=22,
    TASK_ID_WPTC=66,
    TASK_ID_DISPLAY=9,
    TASK_ID_DISC=21,
    TASK_ID_PROXR=23,
    TASK_ID_HTPT=27,
    TASK_ID_HOGPRH=40,
    TASK_ID_LANS=53,
    TASK_ID_HRPC=31,
    TASK_ID_RSCPS=43,
    TASK_ID_PLXS=67,
    TASK_ID_HTPC=26,
    TASK_ID_HCI=8,
    TASK_ID_ENVS=57,
    TASK_ID_UDSS=61,
    TASK_ID_LM=4,
    TASK_ID_GLPS=41,
    TASK_ID_CPPS=51,
    TASK_ID_TIPC=33,
    TASK_ID_LD=7,
    TASK_ID_LC=5,
    TASK_ID_LB=6,
    TASK_ID_INVALID=-1,
    TASK_ID_ENVC=58,
    TASK_ID_UDSC=62,
    TASK_ID_GATTC=12,
    TASK_ID_GLPC=42,
    TASK_ID_HOGPD=38,
    TASK_ID_CPPC=52,
    TASK_ID_WPTS=65,
    TASK_ID_LLC=1,
    TASK_ID_DISS=20,
    TASK_ID_LLD=2,
    TASK_ID_PASPC=50,
    TASK_ID_GAPC=14,
    TASK_ID_IPSS=55,
    TASK_ID_L2CC=10,
    TASK_ID_BLPS=28,
    TASK_ID_LLM=0,
    TASK_ID_BASC=37,
    TASK_ID_BCSC=64,
    TASK_ID_WSCS=59,
    TASK_ID_PASPS=49,
    TASK_ID_IPSC=56,
    TASK_ID_BLPC=29,
    TASK_ID_TIPS=32,
    TASK_ID_WSCC=60
} TASK_API_ID;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict9a9_for__new anon_union.conflict9a9_for__new, *Panon_union.conflict9a9_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict81d anon_struct.conflict81d, *Panon_struct.conflict81d;

typedef struct anon_struct.conflict962 anon_struct.conflict962, *Panon_struct.conflict962;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
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

struct anon_struct.conflict81d {
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

struct anon_struct.conflict962 {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict9a9_for__new {
    struct anon_struct.conflict81d _reent;
    struct anon_struct.conflict962 _unused;
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
    union anon_union.conflict9a9_for__new _new;
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

typedef union anon_union.conflict9a9 anon_union.conflict9a9, *Panon_union.conflict9a9;

union anon_union.conflict9a9 {
    struct anon_struct.conflict81d _reent;
    struct anon_struct.conflict962 _unused;
};

typedef uint16_t ke_msg_id_t;

typedef struct ke_msg ke_msg, *Pke_msg;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef uint16_t ke_task_id_t;

struct co_list_hdr {
    struct co_list_hdr * next;
};

struct ke_msg {
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef uint32_t TickType_t;

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




uint32_t BLE_ROM_patch(void *pRet,...)

{
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

void blecontroller_main(void *pvParameters)

{
  int iVar1;
  char acStack24 [4];
  rw_task_msg_t msg;
  
  (*pcRam00000000)(acStack24,0,8,pcRam00000000);
  do {
    iVar1 = FUN_0001003c(pcRam00000000,acStack24,0xffffffff);
    if ((iVar1 == 1) && (acStack24[0] == '\x01')) {
      FUN_00010052(msg._0_4_);
    }
    _L0();
  } while( true );
}



void FUN_0001003c(undefined4 param_1,undefined *param_2,undefined4 param_3)

{
  uint unaff_s0;
  undefined4 *unaff_s1;
  uint uVar1;
  byte in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  do {
    uVar1 = FUN_0001003c(param_1,param_2,param_3);
    if ((uVar1 == unaff_s0) && (in_stack_00000008 == unaff_s0)) {
      FUN_00010052(in_stack_0000000c);
    }
    _L0();
    param_1 = *unaff_s1;
    param_3 = 0xffffffff;
    param_2 = &stack0x00000008;
  } while( true );
}



void FUN_00010052(undefined4 param_1)

{
  uint unaff_s0;
  undefined4 *unaff_s1;
  uint uVar1;
  byte in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  do {
    FUN_00010052(param_1);
    do {
      do {
        _L0();
        uVar1 = FUN_0001003c(*unaff_s1,&stack0x00000008,0xffffffff);
      } while (uVar1 != unaff_s0);
      param_1 = in_stack_0000000c;
    } while (in_stack_00000008 != unaff_s0);
  } while( true );
}



void _L0(void)

{
  uint unaff_s0;
  undefined4 *unaff_s1;
  uint uVar1;
  byte in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  do {
    do {
      do {
        _L0();
        uVar1 = FUN_0001003c(*unaff_s1,&stack0x00000008,0xffffffff);
      } while (uVar1 != unaff_s0);
    } while (in_stack_00000008 != unaff_s0);
    FUN_00010052(in_stack_0000000c);
  } while( true );
}



void BLE_ROM_hook_init(void)

{
  uRam00000000 = 0;
  return;
}



uint16_t get_stack_usage(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)0x0;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 == -0x45);
  return (uint16_t)((uint)((int)pcVar2 * -0x10000) >> 0x10);
}



void platform_reset(uint32_t error)

{
  _L0();
  if ((error != 0xc3c3c3c3) && (error != 0xa5a5a5a5)) {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x0)();
    return;
  }
  return;
}



void _L0(void)

{
  int in_stack_0000000c;
  
  _L0();
  if ((in_stack_0000000c != -0x3c3c3c3d) && (in_stack_0000000c != -0x5a5a5a5b)) {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x0)();
    return;
  }
  return;
}



_Bool rw_main_task_post(void *msg,uint32_t timeout)

{
  int iVar1;
  
  if (msg != (void *)0x0) {
    iVar1 = _L0(uRam00000000,msg,timeout,0);
    return (_Bool)(iVar1 == 1);
  }
  return false;
}



bool _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  return iVar1 == 1;
}



// WARNING: Could not reconcile some variable overlaps

void rw_main_task_post_from_fw(void)

{
  int iStack28;
  BaseType_t xHigherPriorityTaskWoken;
  rw_task_msg_t msg;
  
  xHigherPriorityTaskWoken._0_1_ = 2;
  msg._0_4_ = 0;
  if (iRam00000000 == 0) {
    FUN_00010190(&xHigherPriorityTaskWoken,0xffffffff);
  }
  else {
    iStack28 = 0;
    _L0(iRam00000000,&xHigherPriorityTaskWoken,&iStack28,0);
    if (iStack28 == 1) {
      _L0();
    }
  }
  return;
}



void _L0(void)

{
  int in_stack_00000004;
  
  _L0();
  if (in_stack_00000004 == 1) {
    _L0();
  }
  return;
}



void _L0(void)

{
  _L0();
  return;
}



void FUN_00010190(void)

{
  FUN_00010190();
  return;
}



// WARNING: Could not reconcile some variable overlaps

void rw_main_task_post_from_isr(void)

{
  int iStack28;
  BaseType_t xHigherPriorityTaskWoken;
  rw_task_msg_t msg;
  
  xHigherPriorityTaskWoken._0_1_ = 2;
  msg._0_4_ = 0;
  iStack28 = 0;
  _L0(uRam00000000,&xHigherPriorityTaskWoken,&iStack28,0);
  if (iStack28 == 1) {
    _L0();
  }
  return;
}



void _L0(void)

{
  int in_stack_00000004;
  
  _L0();
  if (in_stack_00000004 == 1) {
    _L0();
  }
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Could not reconcile some variable overlaps

void bdaddr_init(void)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uStack24;
  uint8_t uStack23;
  undefined2 uStack22;
  uint8_t addr [6];
  
  _L0(&uStack24);
  uVar2 = addr[1];
  uVar1 = addr[0];
  addr[1] = uStack24;
  addr[0] = uStack23;
  uStack23 = uVar1;
  uStack22 = uStack22 >> 8 | uStack22 << 8;
  if (uVar2 == -1) {
    uStack23 = uVar1 + '\x01';
    uStack24 = '\0';
  }
  else {
    uStack24 = uVar2 + '\x01';
  }
  FUN_0001021e(&uStack24);
  FUN_00010246(0,addr[1],addr[0],uStack22._1_1_,(undefined)uStack22,uStack23,uStack24);
  return;
}



void _L0(void)

{
  char cVar1;
  char cVar2;
  char in_stack_00000008;
  char in_stack_00000009;
  undefined uStack0000000a;
  ushort in_stack_0000000a;
  undefined uStack0000000b;
  char in_stack_0000000c;
  char in_stack_0000000d;
  
  _L0();
  cVar2 = in_stack_0000000d;
  cVar1 = in_stack_0000000c;
  in_stack_0000000d = in_stack_00000008;
  in_stack_0000000c = in_stack_00000009;
  in_stack_00000009 = cVar1;
  in_stack_0000000a = in_stack_0000000a >> 8 | in_stack_0000000a << 8;
  if (cVar2 == -1) {
    in_stack_00000009 = cVar1 + '\x01';
    in_stack_00000008 = '\0';
  }
  else {
    in_stack_00000008 = cVar2 + '\x01';
  }
  FUN_0001021e(&stack0x00000008);
  FUN_00010246(0,in_stack_0000000d,in_stack_0000000c,uStack0000000b,uStack0000000a,in_stack_00000009
               ,in_stack_00000008);
  return;
}



void FUN_0001021e(void)

{
  undefined in_stack_00000008;
  undefined in_stack_00000009;
  undefined in_stack_0000000a;
  undefined in_stack_0000000b;
  undefined in_stack_0000000c;
  undefined in_stack_0000000d;
  
  FUN_0001021e();
  FUN_00010246(0,in_stack_0000000d,in_stack_0000000c,in_stack_0000000b,in_stack_0000000a,
               in_stack_00000009,in_stack_00000008);
  return;
}



void FUN_00010246(void)

{
  FUN_00010246();
  return;
}



void ble_controller_init(uint8_t task_priority)

{
  _L0();
  FUN_00010276(40000000);
  uRam00000000 = uRam00000000 & 0xffffff00;
  _L0();
  FUN_0001029a(0x48);
  FUN_000102ae(0x48,0);
  FUN_000102ba(0x48);
  _L0();
  FUN_000102d2(uRam00000000);
  FUN_000102e0(0x14,8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_00010276(40000000);
  uRam00000000 = uRam00000000 & 0xffffff00;
  _L0();
  FUN_0001029a(0x48);
  FUN_000102ae(0x48,0);
  FUN_000102ba(0x48);
  _L0();
  FUN_000102d2(uRam00000000);
  FUN_000102e0(0x14,8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010276(void)

{
  FUN_00010276();
  uRam00000000 = uRam00000000 & 0xffffff00;
  _L0();
  FUN_0001029a(0x48);
  FUN_000102ae(0x48,0);
  FUN_000102ba(0x48);
  _L0();
  FUN_000102d2(uRam00000000);
  FUN_000102e0(0x14,8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_0001029a(0x48);
  FUN_000102ae(0x48,0);
  FUN_000102ba(0x48);
  _L0();
  FUN_000102d2(uRam00000000);
  FUN_000102e0(0x14,8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001029a(void)

{
  FUN_0001029a();
  FUN_000102ae(0x48,0);
  FUN_000102ba(0x48);
  _L0();
  FUN_000102d2(uRam00000000);
  FUN_000102e0(0x14,8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102ae(void)

{
  FUN_000102ae();
  FUN_000102ba(0x48);
  _L0();
  FUN_000102d2(uRam00000000);
  FUN_000102e0(0x14,8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102ba(void)

{
  FUN_000102ba();
  _L0();
  FUN_000102d2(uRam00000000);
  FUN_000102e0(0x14,8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_000102d2(uRam00000000);
  FUN_000102e0(0x14,8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102d2(void)

{
  FUN_000102d2();
  FUN_000102e0(0x14,8,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102e0(void)

{
  FUN_000102e0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Could not reconcile some variable overlaps

void ble_controller_deinit(void)

{
  int iVar1;
  undefined auStack24 [4];
  rw_task_msg_t task_msg;
  
  (*pcRam00000000)(auStack24,0,8,pcRam00000000);
  _L0(0x48);
  _L0(pcRam00000000);
  pcRam00000000 = (code *)0x0;
  while (iVar1 = FUN_00010362(pcRam00000000,auStack24,0), iVar1 == 1) {
    if (task_msg._0_4_ != 0) {
      _LVL54(task_msg._0_4_ + -0xc);
    }
  }
  FUN_00010372(pcRam00000000);
  pcRam00000000 = (code *)0x0;
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  int iVar1;
  int in_stack_0000000c;
  
  _L0();
  _L0(*unaff_s0);
  *unaff_s0 = 0;
  while (iVar1 = FUN_00010362(uRam00000000,&stack0x00000008,0), iVar1 == 1) {
    if (in_stack_0000000c != 0) {
      _LVL54(in_stack_0000000c + -0xc);
    }
  }
  FUN_00010372(uRam00000000);
  uRam00000000 = 0;
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int iVar1;
  int in_stack_0000000c;
  
  _L0();
  *unaff_s0 = 0;
  while (iVar1 = FUN_00010362(uRam00000000,&stack0x00000008,0), iVar1 == unaff_s1) {
    if (in_stack_0000000c != 0) {
      _LVL54(in_stack_0000000c + -0xc);
    }
  }
  FUN_00010372(uRam00000000);
  uRam00000000 = 0;
  return;
}



void FUN_00010362(undefined4 param_1,undefined *param_2,undefined4 param_3)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int iVar1;
  int in_stack_0000000c;
  
  while (iVar1 = FUN_00010362(param_1,param_2,param_3), iVar1 == unaff_s1) {
    if (in_stack_0000000c != 0) {
      _LVL54(in_stack_0000000c + -0xc);
    }
    param_1 = *unaff_s0;
    param_3 = 0;
    param_2 = &stack0x00000008;
  }
  FUN_00010372(*unaff_s0);
  *unaff_s0 = 0;
  return;
}



void FUN_00010372(void)

{
  undefined4 *unaff_s0;
  
  FUN_00010372();
  *unaff_s0 = 0;
  return;
}



void _LVL54(int param_1)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int iVar1;
  int in_stack_0000000c;
  
  do {
    _LVL54(param_1);
    do {
      iVar1 = FUN_00010362(*unaff_s0,&stack0x00000008,0);
      if (iVar1 != unaff_s1) {
        FUN_00010372(*unaff_s0);
        *unaff_s0 = 0;
        return;
      }
    } while (in_stack_0000000c == 0);
    param_1 = in_stack_0000000c + -0xc;
  } while( true );
}



rwip_eif_api * rwip_eif_get(uint8_t type)

{
  undefined3 in_register_00002029;
  
  if ((CONCAT31(in_register_00002029,type) != 0) && (CONCAT31(in_register_00002029,type) != 2)) {
    return (rwip_eif_api *)0x0;
  }
  return (rwip_eif_api *)0x0;
}


