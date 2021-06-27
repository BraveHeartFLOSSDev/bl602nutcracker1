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

typedef union anon_union.conflict272_for___value anon_union.conflict272_for___value, *Panon_union.conflict272_for___value;

typedef uint wint_t;

union anon_union.conflict272_for___value { // DWARF DIE: 272
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 2a4
    int __count;
    union anon_union.conflict272_for___value __value;
};

typedef union anon_union.conflict272 anon_union.conflict272, *Panon_union.conflict272;

union anon_union.conflict272 { // DWARF DIE: 272
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef ulong uint32_t;

typedef uchar uint8_t;

typedef struct uart_env_tag uart_env_tag, *Puart_env_tag;

typedef struct uart_txchannel uart_txchannel, *Puart_txchannel;

typedef struct uart_rxchannel uart_rxchannel, *Puart_rxchannel;

struct uart_rxchannel { // DWARF DIE: db5
    void (* callback)(void *, uint8_t);
    void * dummy;
    uint32_t remain_size;
    uint8_t * remain_data;
};

struct uart_txchannel { // DWARF DIE: d57
    void (* callback)(void *, uint8_t);
    void * dummy;
    uint32_t remain_size;
    uint8_t * remain_data;
};

struct uart_env_tag { // DWARF DIE: dfd
    struct uart_txchannel tx;
    struct uart_rxchannel rx;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflicta4c_for__new anon_union.conflicta4c_for__new, *Panon_union.conflicta4c_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict8c0 anon_struct.conflict8c0, *Panon_struct.conflict8c0;

typedef struct anon_struct.conflicta05 anon_struct.conflicta05, *Panon_struct.conflicta05;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 2fa
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct __tm { // DWARF DIE: 36a
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

struct _rand48 { // DWARF DIE: 877
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict8c0 { // DWARF DIE: 8c0
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

struct _glue { // DWARF DIE: 832
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct anon_struct.conflicta05 { // DWARF DIE: a05
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflicta4c_for__new { // DWARF DIE: a4c
    struct anon_struct.conflict8c0 _reent;
    struct anon_struct.conflicta05 _unused;
};

struct _on_exit_args { // DWARF DIE: 3ed
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 442
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 4a2
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 4d0
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

struct _reent { // DWARF DIE: 63c
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
    union anon_union.conflicta4c_for__new _new;
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

struct __locale_t { // DWARF DIE: a81
};

typedef union anon_union.conflicta4c anon_union.conflicta4c, *Panon_union.conflicta4c;

union anon_union.conflicta4c { // DWARF DIE: a4c
    struct anon_struct.conflict8c0 _reent;
    struct anon_struct.conflicta05 _unused;
};

typedef enum UART_DataBits_Type {
    UART_DATABITS_5=0,
    UART_DATABITS_6=1,
    UART_DATABITS_7=2,
    UART_DATABITS_8=3
} UART_DataBits_Type;

typedef enum UART_ByteBitInverse_Type {
    UART_LSB_FIRST=0,
    UART_MSB_FIRST=1
} UART_ByteBitInverse_Type;

typedef struct UART_CFG_Type UART_CFG_Type, *PUART_CFG_Type;

typedef enum UART_StopBits_Type {
    UART_STOPBITS_1=0,
    UART_STOPBITS_1_5=1,
    UART_STOPBITS_2=2
} UART_StopBits_Type;

typedef enum UART_Parity_Type {
    UART_PARITY_EVEN=2,
    UART_PARITY_NONE=0,
    UART_PARITY_ODD=1
} UART_Parity_Type;

typedef enum BL_Fun_Type {
    DISABLE=0,
    ENABLE=1
} BL_Fun_Type;

struct UART_CFG_Type { // DWARF DIE: cb1
    uint32_t uartClk;
    uint32_t baudRate;
    enum UART_DataBits_Type dataBits;
    enum UART_StopBits_Type stopBits;
    enum UART_Parity_Type parity;
    enum BL_Fun_Type ctsFlowControl;
    enum BL_Fun_Type rxDeglitch;
    enum BL_Fun_Type rtsSoftwareControl;
    enum UART_ByteBitInverse_Type byteBitInverse;
    undefined field_0xf;
};

typedef enum anon_enum_8.conflict88 {
    BLE_IRQn=72,
    BMX_ERR_IRQn=16,
    BMX_TO_IRQn=17,
    BOR_IRQn=69,
    BZ_PHY_IRQn=71,
    CLIC_SOFT_PEND_IRQn=12,
    DMA_ALL_IRQn=31,
    DMA_BMX_ERR_IRQn=24,
    EFUSE_IRQn=42,
    ERROR=1,
    GPADC_DMA_IRQn=41,
    GPIO_INT0_IRQn=60,
    HBN_OUT0_IRQn=67,
    HBN_OUT1_IRQn=68,
    HBN_UART_CLK_160M=1,
    HBN_UART_CLK_FCLK=0,
    I2C_IRQn=48,
    IRQn_LAST=80,
    IRRX_IRQn=36,
    IRTX_IRQn=35,
    L1C_BMX_ERR_IRQn=18,
    L1C_BMX_TO_IRQn=19,
    MAC_GEN_IRQn=77,
    MAC_PORT_TRG_IRQn=78,
    MAC_RX_TRG_IRQn=75,
    MAC_TXRX_MISC_IRQn=74,
    MAC_TXRX_TIMER_IRQn=73,
    MAC_TX_TRG_IRQn=76,
    MASK=1,
    MEXT_IRQn=11,
    MSOFT_IRQn=3,
    MTIME_IRQn=7,
    PDS_WAKEUP_IRQn=66,
    PWM_IRQn=50,
    RESERVED0=32,
    RESERVED1=33,
    RESERVED10=55,
    RESERVED11=56,
    RESERVED12=57,
    RESERVED13=58,
    RESERVED14=59,
    RESERVED16=61,
    RESERVED17=62,
    RESERVED18=63,
    RESERVED19=64,
    RESERVED2=34,
    RESERVED20=65,
    RESERVED3=37,
    RESERVED4=38,
    RESERVED5=40,
    RESERVED6=44,
    RESERVED7=47,
    RESERVED8=49,
    RESERVED9=51,
    RF_TOP_INT0_IRQn=21,
    RF_TOP_INT1_IRQn=22,
    SDIO_IRQn=23,
    SEC_AES_IRQn=29,
    SEC_BMX_ERR_IRQn=20,
    SEC_CDET_IRQn=26,
    SEC_GMAC_IRQn=25,
    SEC_PKA_IRQn=27,
    SEC_SHA_IRQn=30,
    SEC_TRNG_IRQn=28,
    SF_CTRL_IRQn=39,
    SPI_IRQn=43,
    SUCCESS=0,
    TIMEOUT=2,
    TIMER_CH0_IRQn=52,
    TIMER_CH1_IRQn=53,
    TIMER_WDT_IRQn=54,
    UART0_ID=0,
    UART0_IRQn=45,
    UART1_ID=1,
    UART1_IRQn=46,
    UART_ID_MAX=2,
    UART_INT_ALL=8,
    UART_INT_PCE=5,
    UART_INT_RTO=4,
    UART_INT_RX_END=1,
    UART_INT_RX_FER=7,
    UART_INT_RX_FIFO_REQ=3,
    UART_INT_TX_END=0,
    UART_INT_TX_FER=6,
    UART_INT_TX_FIFO_REQ=2,
    UART_RX=1,
    UART_TX=0,
    UART_TXRX=2,
    UNMASK=0,
    WIFI_IPC_PUBLIC_IRQn=79,
    WIFI_IRQn=70
} anon_enum_8.conflict88;

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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 12e9

uint8_t read_data(void)

{
  uint uVar1;
  int iVar2;
  uint8_t uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  
  iVar2 = _DAT_0000001c;
  uVar1 = _DAT_00000018;
  uVar3 = '\0';
  if (_DAT_0000001c != 0) {
    puVar6 = (uint *)(iRam00000000 + 0x84);
    puVar4 = (undefined4 *)(iRam00000000 + 0x8c);
    for (uVar5 = 0; (uVar3 = (uint8_t)uVar5, (*puVar6 >> 8 & 0x3f) != 0 && ((uVar5 & 0xff) < uVar1))
        ; uVar5 += 1) {
      *(char *)(iVar2 + uVar5) = (char)*puVar4;
    }
  }
  return uVar3;
}



// DWARF DIE: 18e1

void write_data(uint8_t *bufptr,uint32_t size)

{
  byte bVar1;
  byte *pbVar2;
  uint *puVar3;
  
  if ((bufptr != (uint8_t *)0x0) && (size != 0)) {
    pbVar2 = bufptr + size;
    puVar3 = (uint *)(iRam00000000 + 0x88);
    do {
      bVar1 = *bufptr;
      bufptr = bufptr + 1;
      *puVar3 = (uint)bVar1;
    } while (pbVar2 != bufptr);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 127d

uint8_t read_fifo_data(uint8_t num)

{
  int iVar1;
  undefined3 in_register_00002029;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  
  iVar1 = _DAT_0000001c;
  uVar2 = 0;
  if (_DAT_0000001c != 0) {
    puVar5 = (uint *)(iRam00000000 + 0x84);
    puVar4 = (undefined4 *)(iRam00000000 + 0x8c);
    for (uVar3 = 0;
        (uVar2 = uVar3 & 0xff, (*puVar5 >> 8 & 0x3f) != 0 &&
        (uVar2 < CONCAT31(in_register_00002029,num))); uVar3 += 1) {
      *(char *)(iVar1 + uVar3) = (char)*puVar4;
    }
  }
  return (uint8_t)uVar2;
}



// DWARF DIE: 18ac

void uart_hw_rx_flow_ctl_en(_Bool enable)

{
  undefined3 in_register_00002029;
  uint uVar1;
  
  uVar1 = *(uint *)(iRam00000000 + 4) | 2;
  if (CONCAT31(in_register_00002029,enable) != 0) {
    uVar1 = *(uint *)(iRam00000000 + 4) & 0xfffffffd;
  }
  *(uint *)(iRam00000000 + 4) = uVar1;
  return;
}



// DWARF DIE: 1877

void uart_rx_func_en(_Bool enable)

{
  undefined3 in_register_00002029;
  uint uVar1;
  
  uVar1 = *(uint *)(iRam00000000 + 4) & 0xfffffffe;
  if (CONCAT31(in_register_00002029,enable) != 0) {
    uVar1 = *(uint *)(iRam00000000 + 4) | 1;
  }
  *(uint *)(iRam00000000 + 4) = uVar1;
  return;
}



// DWARF DIE: 1842

void uart_hw_tx_flow_ctl_en(_Bool enable)

{
  undefined3 in_register_00002029;
  uint uVar1;
  
  uVar1 = *puRam00000000 & 0xfffffffd;
  if (CONCAT31(in_register_00002029,enable) != 0) {
    uVar1 = *puRam00000000 | 2;
  }
  *puRam00000000 = uVar1;
  return;
}



// DWARF DIE: 180d

void uart_tx_func_en(_Bool enable)

{
  undefined3 in_register_00002029;
  uint uVar1;
  
  uVar1 = *puRam00000000 & 0xfffffffe;
  if (CONCAT31(in_register_00002029,enable) != 0) {
    uVar1 = *puRam00000000 | 1;
  }
  *puRam00000000 = uVar1;
  return;
}



// DWARF DIE: 17cc

void uart_tx_isr_en(_Bool enable)

{
  int iVar1;
  undefined3 in_register_00002029;
  uint uVar2;
  uint uVar3;
  
  iVar1 = iRam00000000;
  if (CONCAT31(in_register_00002029,enable) == 0) {
    uVar2 = *(uint *)(iRam00000000 + 0x24) | 1;
    uVar3 = *(uint *)(iRam00000000 + 0x2c) & 0xfffffffe;
  }
  else {
    uVar2 = *(uint *)(iRam00000000 + 0x24) & 0xfffffffe;
    uVar3 = *(uint *)(iRam00000000 + 0x2c) | 1;
  }
  *(uint *)(iRam00000000 + 0x24) = uVar2;
  *(uint *)(iVar1 + 0x2c) = uVar3;
  return;
}



// DWARF DIE: 178b

void uart_rx_isr_en(_Bool enable)

{
  int iVar1;
  undefined3 in_register_00002029;
  uint uVar2;
  uint uVar3;
  
  iVar1 = iRam00000000;
  if (CONCAT31(in_register_00002029,enable) == 0) {
    uVar2 = *(uint *)(iRam00000000 + 0x24) | 2;
    uVar3 = *(uint *)(iRam00000000 + 0x2c) & 0xfffffffd;
  }
  else {
    uVar2 = *(uint *)(iRam00000000 + 0x24) & 0xfffffffd;
    uVar3 = *(uint *)(iRam00000000 + 0x2c) | 2;
  }
  *(uint *)(iRam00000000 + 0x24) = uVar2;
  *(uint *)(iVar1 + 0x2c) = uVar3;
  return;
}



// DWARF DIE: 171e

void uart_tx_fifo_isr_en(_Bool enable,uint8_t enval)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined3 in_register_00002029;
  uint uVar4;
  uint uVar5;
  
  iVar3 = iRam00000000;
  puVar1 = (uint *)(iRam00000000 + 0x24);
  puVar2 = (uint *)(iRam00000000 + 0x2c);
  if (CONCAT31(in_register_00002029,enable) == 0) {
    uVar4 = *puVar1 | 4;
    uVar5 = *puVar2 & 0xfffffffb;
  }
  else {
    *(uint *)(iRam00000000 + 0x84) =
         (enval & 0x7f) << 0x10 | *(uint *)(iRam00000000 + 0x84) & 0xffe0ffff;
    uVar4 = *puVar1 & 0xfffffffb;
    uVar5 = *puVar2 | 4;
  }
  *(uint *)(iVar3 + 0x24) = uVar4;
  *(uint *)(iVar3 + 0x2c) = uVar5;
  return;
}



// DWARF DIE: 16b1

void uart_rx_fifo_isr_en(_Bool enable,uint8_t enval)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined3 in_register_00002029;
  uint uVar4;
  uint uVar5;
  
  iVar3 = iRam00000000;
  puVar1 = (uint *)(iRam00000000 + 0x24);
  puVar2 = (uint *)(iRam00000000 + 0x2c);
  if (CONCAT31(in_register_00002029,enable) == 0) {
    uVar4 = *puVar1 | 8;
    uVar5 = *puVar2 & 0xfffffff7;
  }
  else {
    *(uint *)(iRam00000000 + 0x84) =
         (enval & 0x7f) << 0x18 | *(uint *)(iRam00000000 + 0x84) & 0xe0ffffff;
    uVar4 = *puVar1 & 0xfffffff7;
    uVar5 = *puVar2 | 8;
  }
  *(uint *)(iVar3 + 0x24) = uVar4;
  *(uint *)(iVar3 + 0x2c) = uVar5;
  return;
}



// DWARF DIE: 1670

void uart_rx_rto_isr_en(_Bool enable)

{
  int iVar1;
  undefined3 in_register_00002029;
  uint uVar2;
  uint uVar3;
  
  iVar1 = iRam00000000;
  if (CONCAT31(in_register_00002029,enable) == 0) {
    uVar2 = *(uint *)(iRam00000000 + 0x24) | 0x10;
    uVar3 = *(uint *)(iRam00000000 + 0x2c) & 0xffffffef;
  }
  else {
    uVar2 = *(uint *)(iRam00000000 + 0x24) & 0xffffffef;
    uVar3 = *(uint *)(iRam00000000 + 0x2c) | 0x10;
  }
  *(uint *)(iRam00000000 + 0x24) = uVar2;
  *(uint *)(iVar1 + 0x2c) = uVar3;
  return;
}



// DWARF DIE: 162b

void uart_rx_parity_isr_en(_Bool enable)

{
  int iVar1;
  undefined3 in_register_00002029;
  uint uVar2;
  uint uVar3;
  
  iVar1 = iRam00000000;
  if (CONCAT31(in_register_00002029,enable) == 0) {
    uVar2 = *(uint *)(iRam00000000 + 0x24) | 0x20;
    uVar3 = *(uint *)(iRam00000000 + 0x2c) & 0xffffffdf;
  }
  else {
    uVar2 = *(uint *)(iRam00000000 + 0x24) & 0xffffffdf;
    uVar3 = *(uint *)(iRam00000000 + 0x2c) | 0x20;
  }
  *(uint *)(iRam00000000 + 0x24) = uVar2;
  *(uint *)(iVar1 + 0x2c) = uVar3;
  return;
}



// DWARF DIE: 15a2

void uart_sw_rx_flow_ctl_en(_Bool enable)

{
  undefined3 in_register_00002029;
  uint uVar1;
  
  _L0();
  uVar1 = *(uint *)(iRam00000000 + 4) & 0xfffffffb;
  if (CONCAT31(in_register_00002029,enable) == 0) {
    uVar1 = *(uint *)(iRam00000000 + 4) | 4;
  }
  *(uint *)(iRam00000000 + 4) = uVar1;
  return;
}



void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  
  _L0();
  uVar1 = *(uint *)(iRam00000000 + 4) & 0xfffffffb;
  if (unaff_s0 == 0) {
    uVar1 = *(uint *)(iRam00000000 + 4) | 4;
  }
  *(uint *)(iRam00000000 + 4) = uVar1;
  return;
}



// DWARF DIE: 1568

void uart_deg_en(uint8_t glitch_cycle_cnt)

{
  int iVar1;
  undefined3 in_register_00002029;
  
  iVar1 = iRam00000000;
  *(uint *)(iRam00000000 + 4) = *(uint *)(iRam00000000 + 4) | 0x800;
  *(uint *)(iVar1 + 4) =
       CONCAT31(in_register_00002029,glitch_cycle_cnt) << 0xc | *(uint *)(iVar1 + 4) & 0xffff0fff;
  return;
}



// DWARF DIE: 13fb

void uart_init(uint8_t uartid)

{
  undefined3 in_register_00002029;
  UART_CFG_Type uartCfg;
  
  _L0();
  if (CONCAT31(in_register_00002029,uartid) == 0) {
    iRam00000000 = 0x4000a000;
  }
  else {
    if (CONCAT31(in_register_00002029,uartid) != 1) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iRam00000000 = 0x4000a100;
  }
  FUN_000102a8();
  _L0();
  FUN_000102ce();
  FUN_000102dc();
  *(undefined4 *)(iRam00000000 + 0x2c) = 0;
  _L0();
  FUN_00010300();
  FUN_0001030c();
  FUN_00010316();
  FUN_00010322();
  FUN_0001032c();
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 uStack00000000;
  
  _L0();
  if (unaff_s0 == 0) {
    iRam00000000 = 0x4000a000;
  }
  else {
    if (unaff_s0 != 1) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iRam00000000 = 0x4000a100;
  }
  FUN_000102a8();
  uStack00000000 = 40000000;
  _L0();
  FUN_000102ce();
  FUN_000102dc();
  *(undefined4 *)(iRam00000000 + 0x2c) = 0;
  _L0();
  FUN_00010300();
  FUN_0001030c();
  FUN_00010316();
  FUN_00010322();
  FUN_0001032c();
  return;
}



void FUN_000102a8(void)

{
  undefined4 uStack00000000;
  
  FUN_000102a8();
  uStack00000000 = 40000000;
  _L0();
  FUN_000102ce();
  FUN_000102dc();
  *(undefined4 *)(iRam00000000 + 0x2c) = 0;
  _L0();
  FUN_00010300();
  FUN_0001030c();
  FUN_00010316();
  FUN_00010322();
  FUN_0001032c();
  return;
}



void _L0(void)

{
  _L0();
  FUN_000102ce();
  FUN_000102dc();
  *(undefined4 *)(iRam00000000 + 0x2c) = 0;
  _L0();
  FUN_00010300();
  FUN_0001030c();
  FUN_00010316();
  FUN_00010322();
  FUN_0001032c();
  return;
}



void FUN_000102ce(void)

{
  FUN_000102ce();
  FUN_000102dc();
  *(undefined4 *)(iRam00000000 + 0x2c) = 0;
  _L0();
  FUN_00010300();
  FUN_0001030c();
  FUN_00010316();
  FUN_00010322();
  FUN_0001032c();
  return;
}



void FUN_000102dc(void)

{
  FUN_000102dc();
  *(undefined4 *)(iRam00000000 + 0x2c) = 0;
  _L0();
  FUN_00010300();
  FUN_0001030c();
  FUN_00010316();
  FUN_00010322();
  FUN_0001032c();
  return;
}



void _L0(void)

{
  _L0();
  FUN_00010300();
  FUN_0001030c();
  FUN_00010316();
  FUN_00010322();
  FUN_0001032c();
  return;
}



void FUN_00010300(void)

{
  FUN_00010300();
  FUN_0001030c();
  FUN_00010316();
  FUN_00010322();
  FUN_0001032c();
  return;
}



void FUN_0001030c(void)

{
  FUN_0001030c();
  FUN_00010316();
  FUN_00010322();
  FUN_0001032c();
  return;
}



void FUN_00010316(void)

{
  FUN_00010316();
  FUN_00010322();
  FUN_0001032c();
  return;
}



void FUN_00010322(void)

{
  FUN_00010322();
  FUN_0001032c();
  return;
}



void FUN_0001032c(void)

{
  FUN_0001032c();
  return;
}



// DWARF DIE: 13e8

void uart_flow_on(void)

{
  return;
}



// DWARF DIE: 13b7

_Bool uart_flow_off(void)

{
  return true;
}



// DWARF DIE: 136d

void uart_finish_transfers(void)

{
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1201

void uart_read(uint8_t *bufptr,uint32_t size,anon_subr_void_void_ptr_uint8_t *callback,void *dummy)

{
  if (((bufptr != (uint8_t *)0x0) && (size != 0)) &&
     (callback != (anon_subr_void_void_ptr_uint8_t *)0x0)) {
    *(uint32_t *)(iRam00000000 + 4) = (size - 1) * 0x10000 | *(uint *)(iRam00000000 + 4) & 0xffff;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 10ff

void uart_write(uint8_t *bufptr,uint32_t size,anon_subr_void_void_ptr_uint8_t *callback,void *dummy)

{
  uint *puVar1;
  uint uVar2;
  
  if (((bufptr != (uint8_t *)0x0) && (size != 0)) &&
     (callback != (anon_subr_void_void_ptr_uint8_t *)0x0)) {
    puRam00000000 = (uint *)callback;
    _DAT_00000004 = dummy;
    _L0();
    puVar1 = puRam00000000;
    *puRam00000000 = (size - 1) * 0x10000 | *puRam00000000 & 0xffff;
    uVar2 = puVar1[0x21] & 0x3f;
    if (uVar2 < size) {
      FUN_00010460();
      _DAT_00000008 = size - uVar2;
      _DAT_0000000c = bufptr + uVar2;
      _L0();
      return;
    }
    FUN_00010432();
    _L0();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _L0(void)

{
  uint *puVar1;
  uint unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint uVar2;
  
  _L0();
  puVar1 = puRam00000000;
  *puRam00000000 = (unaff_s0 - 1) * 0x10000 | *puRam00000000 & 0xffff;
  uVar2 = puVar1[0x21] & 0x3f;
  if (uVar2 < unaff_s0) {
    FUN_00010460();
    *(uint *)(unaff_s2 + 8) = unaff_s0 - uVar2;
    *(uint *)(unaff_s2 + 0xc) = unaff_s1 + uVar2;
    _L0();
    return;
  }
  FUN_00010432();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010432(void)

{
  FUN_00010432();
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



void FUN_00010460(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_00010460();
  *(int *)(unaff_s2 + 8) = unaff_s0 - unaff_s3;
  *(int *)(unaff_s2 + 0xc) = unaff_s1 + unaff_s3;
  _L0();
  return;
}



// DWARF DIE: 10bc

void uart_read_blocking(uint8_t *bufptr,uint32_t size)

{
  int extraout_a0;
  
  if ((bufptr != (uint8_t *)0x0) && (size != 0)) {
    do {
      do {
        _L0(uRam00000000 & 0xff);
      } while (extraout_a0 == 0);
      size -= 1;
      *bufptr = (uint8_t)*(undefined4 *)(uRam00000000 + 0x8c);
    } while (size != 0);
    return;
  }
  return;
}



void _L0(uint param_1)

{
  undefined *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int *unaff_s2;
  int in_stack_0000000c;
  
  do {
    _L0(param_1);
    if (extraout_a0 != 0) {
      in_stack_0000000c += -1;
      *unaff_s0 = (char)*(undefined4 *)(*unaff_s1 + 0x8c);
      if (in_stack_0000000c == 0) {
        return;
      }
    }
    param_1 = (uint)*(byte *)unaff_s2;
    unaff_s1 = unaff_s2;
  } while( true );
}



// DWARF DIE: 1071

void uart_write_blocking(uint8_t *bufptr,uint32_t size)

{
  byte bVar1;
  byte *pbVar2;
  
  if ((bufptr != (uint8_t *)0x0) && (size != 0)) {
    pbVar2 = bufptr + size;
    *puRam00000000 = *puRam00000000 | 5;
    do {
      do {
      } while ((puRam00000000[0x21] & 0x3f) == 0);
      bVar1 = *bufptr;
      bufptr = bufptr + 1;
      puRam00000000[0x22] = (uint)bVar1;
    } while (pbVar2 != bufptr);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: f97

void uart_rx_isr(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  _L0();
  if (_DAT_00000018 != 0) {
    _L0();
  }
  FUN_00010536();
  iVar1 = iRam00000000;
  uVar4 = *(uint *)(iRam00000000 + 0x80);
  if ((uVar4 & 0x40) != 0) {
    *(uint *)(iRam00000000 + 0x80) = uVar4 | 8;
    *(uint *)(iVar1 + 0x80) = uVar4 & 0xfffffff7;
    _L0();
    FUN_0001056a();
  }
  uVar3 = _DAT_00000014;
  pcVar2 = _DAT_00000010;
  if (_DAT_00000010 != (code *)0x0) {
    _DAT_00000010 = (code *)0x0;
    _DAT_00000014 = 0;
    (*pcVar2)(uVar3,0);
  }
  FUN_0001058a();
  if (_DAT_00000018 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int iVar1;
  int unaff_s0;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  
  _L0();
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    _L0();
  }
  FUN_00010536();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(iRam00000000 + 0x80);
  if ((uVar3 & 0x40) != 0) {
    *(uint *)(iRam00000000 + 0x80) = uVar3 | 8;
    *(uint *)(iVar1 + 0x80) = uVar3 & 0xfffffff7;
    _L0();
    FUN_0001056a();
  }
  pcVar4 = *(code **)(unaff_s0 + 0x10);
  if (pcVar4 != (code *)0x0) {
    uVar2 = *(undefined4 *)(unaff_s0 + 0x14);
    *(undefined4 *)(unaff_s0 + 0x10) = 0;
    *(undefined4 *)(unaff_s0 + 0x14) = 0;
    (*pcVar4)(uVar2,0);
  }
  FUN_0001058a();
  if (*(int *)(unaff_s0 + 0x18) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int iVar1;
  int unaff_s0;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  
  _L0();
  FUN_00010536();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(iRam00000000 + 0x80);
  if ((uVar3 & 0x40) != 0) {
    *(uint *)(iRam00000000 + 0x80) = uVar3 | 8;
    *(uint *)(iVar1 + 0x80) = uVar3 & 0xfffffff7;
    _L0();
    FUN_0001056a();
  }
  pcVar4 = *(code **)(unaff_s0 + 0x10);
  if (pcVar4 != (code *)0x0) {
    uVar2 = *(undefined4 *)(unaff_s0 + 0x14);
    *(undefined4 *)(unaff_s0 + 0x10) = 0;
    *(undefined4 *)(unaff_s0 + 0x14) = 0;
    (*pcVar4)(uVar2,0);
  }
  FUN_0001058a();
  if (*(int *)(unaff_s0 + 0x18) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010536(void)

{
  int iVar1;
  int unaff_s0;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  
  FUN_00010536();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(iRam00000000 + 0x80);
  if ((uVar3 & 0x40) != 0) {
    *(uint *)(iRam00000000 + 0x80) = uVar3 | 8;
    *(uint *)(iVar1 + 0x80) = uVar3 & 0xfffffff7;
    _L0();
    FUN_0001056a();
  }
  pcVar4 = *(code **)(unaff_s0 + 0x10);
  if (pcVar4 != (code *)0x0) {
    uVar2 = *(undefined4 *)(unaff_s0 + 0x14);
    *(undefined4 *)(unaff_s0 + 0x10) = 0;
    *(undefined4 *)(unaff_s0 + 0x14) = 0;
    (*pcVar4)(uVar2,0);
  }
  FUN_0001058a();
  if (*(int *)(unaff_s0 + 0x18) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  code *pcVar2;
  
  _L0();
  FUN_0001056a();
  pcVar2 = *(code **)(unaff_s0 + 0x10);
  if (pcVar2 != (code *)0x0) {
    uVar1 = *(undefined4 *)(unaff_s0 + 0x14);
    *(undefined4 *)(unaff_s0 + 0x10) = 0;
    *(undefined4 *)(unaff_s0 + 0x14) = 0;
    (*pcVar2)(uVar1,0);
  }
  FUN_0001058a();
  if (*(int *)(unaff_s0 + 0x18) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001056a(void)

{
  int unaff_s0;
  undefined4 uVar1;
  code *pcVar2;
  
  FUN_0001056a();
  pcVar2 = *(code **)(unaff_s0 + 0x10);
  if (pcVar2 != (code *)0x0) {
    uVar1 = *(undefined4 *)(unaff_s0 + 0x14);
    *(undefined4 *)(unaff_s0 + 0x10) = 0;
    *(undefined4 *)(unaff_s0 + 0x14) = 0;
    (*pcVar2)(uVar1,0);
  }
  FUN_0001058a();
  if (*(int *)(unaff_s0 + 0x18) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001058a(void)

{
  int unaff_s0;
  
  FUN_0001058a();
  if (*(int *)(unaff_s0 + 0x18) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: f3f

void uart_tx_isr(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  _L0();
  uVar1 = _DAT_00000004;
  UNRECOVERED_JUMPTABLE = pcRam00000000;
  if (pcRam00000000 != (code *)0x0) {
    pcRam00000000 = (code *)0x0;
    _DAT_00000004 = 0;
                    // WARNING: Could not recover jumptable at 0x000105e6. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(uVar1,0);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  _L0();
  uVar1 = _DAT_00000004;
  UNRECOVERED_JUMPTABLE = pcRam00000000;
  if (pcRam00000000 != (code *)0x0) {
    pcRam00000000 = (code *)0x0;
    _DAT_00000004 = 0;
                    // WARNING: Could not recover jumptable at 0x000105e6. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(uVar1,0);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 192b

void uart_rx_fifo_isr(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  uint uVar2;
  uint extraout_a0;
  uint extraout_a0_00;
  uint uVar3;
  uint uVar4;
  
  uVar2 = _DAT_00000018;
  uVar3 = *(uint *)(iRam00000000 + 0x84) >> 0x18 & 0x7f;
  uVar4 = uVar3 + 1;
  if (_DAT_00000018 == uVar4) {
    FUN_00010622();
    if (uVar2 != extraout_a0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _LVL188();
    uVar1 = _DAT_00000014;
    UNRECOVERED_JUMPTABLE = _DAT_00000010;
    if (_DAT_00000010 != (code *)0x0) {
      _DAT_00000010 = (code *)0x0;
      _DAT_00000014 = 0;
                    // WARNING: Could not recover jumptable at 0x0001065c. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(uVar1,0);
      return;
    }
  }
  else {
    if (_DAT_00000018 <= uVar3) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    FUN_00010666();
    if (uVar4 != extraout_a0_00) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _DAT_00000018 = (uVar2 - 1) - uVar3;
    _DAT_0000001c = uVar4 + _DAT_0000001c;
    if (_DAT_00000018 < 0x11) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_00010622(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  undefined4 uVar1;
  
  FUN_00010622();
  if (unaff_s0 != extraout_a0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL188();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_s1 + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = *(undefined4 *)(unaff_s1 + 0x14);
    *(undefined4 *)(unaff_s1 + 0x10) = 0;
    *(undefined4 *)(unaff_s1 + 0x14) = 0;
                    // WARNING: Could not recover jumptable at 0x0001065c. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(uVar1,0);
    return;
  }
  return;
}



void _LVL188(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s1;
  undefined4 uVar1;
  
  _LVL188();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_s1 + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = *(undefined4 *)(unaff_s1 + 0x14);
    *(undefined4 *)(unaff_s1 + 0x10) = 0;
    *(undefined4 *)(unaff_s1 + 0x14) = 0;
                    // WARNING: Could not recover jumptable at 0x0001065c. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(uVar1,0);
    return;
  }
  return;
}



void FUN_00010666(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  uint uVar1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_00010666();
  if (unaff_s3 != extraout_a0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar1 = (unaff_s0 + -1) - unaff_s2;
  *(uint *)(unaff_s1 + 0x18) = uVar1;
  *(int *)(unaff_s1 + 0x1c) = unaff_s3 + *(int *)(unaff_s1 + 0x1c);
  if (0x10 < uVar1) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1a13

void uart_tx_fifo_isr(void)

{
  _L0();
  if ((*(uint *)(iRam00000000 + 0x80) & 0x30) == 0) {
    if (_DAT_00000008 != 0) {
      if ((*(uint *)(iRam00000000 + 0x84) & 0x3f) < _DAT_00000008) {
        _L0();
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      FUN_00010710();
      _DAT_0000000c = 0;
      _DAT_00000008 = 0;
    }
  }
  else {
    *(uint *)(iRam00000000 + 0x80) = *(uint *)(iRam00000000 + 0x80) | 4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  if ((*(uint *)(iRam00000000 + 0x80) & 0x30) == 0) {
    if (_DAT_00000008 != 0) {
      if ((*(uint *)(iRam00000000 + 0x84) & 0x3f) < _DAT_00000008) {
        _L0();
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      FUN_00010710();
      _DAT_0000000c = 0;
      _DAT_00000008 = 0;
    }
  }
  else {
    *(uint *)(iRam00000000 + 0x80) = *(uint *)(iRam00000000 + 0x80) | 4;
  }
  return;
}



void FUN_00010710(void)

{
  int unaff_s0;
  
  FUN_00010710();
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  *(undefined4 *)(unaff_s0 + 8) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s3;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0xc) = unaff_s3;
  *(undefined4 *)(unaff_s0 + 8) = unaff_s1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: e59

void uart_isr(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(iRam00000000 + 0x20);
  uVar1 = *(uint *)(iRam00000000 + 0x24);
  if (((uVar2 & 1) != 0) && ((uVar1 & 1) == 0)) {
    *(undefined4 *)(iRam00000000 + 0x28) = 1;
    _L0();
  }
  if (((uVar2 & 2) != 0) && ((uVar1 & 2) == 0)) {
    *(undefined4 *)(iRam00000000 + 0x28) = 2;
    _L0();
  }
  if (((uVar2 & 4) != 0) && ((uVar1 & 4) == 0)) {
    _L0();
  }
  if (((uVar2 & 8) != 0) && ((uVar1 & 8) == 0)) {
    _L0();
  }
  if (((uVar2 & 0x10) != 0) && ((uVar1 & 0x10) == 0)) {
    *(undefined4 *)(iRam00000000 + 0x28) = 0x10;
  }
  if (((uVar2 & 0x20) != 0) && ((uVar1 & 0x20) == 0)) {
    *(undefined4 *)(iRam00000000 + 0x28) = 0x20;
  }
  return;
}



void _L0(void)

{
  uint unaff_s0;
  uint unaff_s1;
  int *unaff_s2;
  
  _L0();
  if (((unaff_s1 & 2) != 0) && ((unaff_s0 & 2) == 0)) {
    *(undefined4 *)(*unaff_s2 + 0x28) = 2;
    _L0();
  }
  if (((unaff_s1 & 4) != 0) && ((unaff_s0 & 4) == 0)) {
    _L0();
  }
  if (((unaff_s1 & 8) != 0) && ((unaff_s0 & 8) == 0)) {
    _L0();
  }
  if (((unaff_s1 & 0x10) != 0) && ((unaff_s0 & 0x10) == 0)) {
    *(undefined4 *)(*unaff_s2 + 0x28) = 0x10;
  }
  if (((unaff_s1 & 0x20) != 0) && ((unaff_s0 & 0x20) == 0)) {
    *(undefined4 *)(*unaff_s2 + 0x28) = 0x20;
  }
  return;
}



void _L0(void)

{
  uint unaff_s0;
  uint unaff_s1;
  int *unaff_s2;
  
  _L0();
  if (((unaff_s1 & 4) != 0) && ((unaff_s0 & 4) == 0)) {
    _L0();
  }
  if (((unaff_s1 & 8) != 0) && ((unaff_s0 & 8) == 0)) {
    _L0();
  }
  if (((unaff_s1 & 0x10) != 0) && ((unaff_s0 & 0x10) == 0)) {
    *(undefined4 *)(*unaff_s2 + 0x28) = 0x10;
  }
  if (((unaff_s1 & 0x20) != 0) && ((unaff_s0 & 0x20) == 0)) {
    *(undefined4 *)(*unaff_s2 + 0x28) = 0x20;
  }
  return;
}



void _L0(void)

{
  uint unaff_s0;
  uint unaff_s1;
  int *unaff_s2;
  
  _L0();
  if (((unaff_s1 & 8) != 0) && ((unaff_s0 & 8) == 0)) {
    _L0();
  }
  if (((unaff_s1 & 0x10) != 0) && ((unaff_s0 & 0x10) == 0)) {
    *(undefined4 *)(*unaff_s2 + 0x28) = 0x10;
  }
  if (((unaff_s1 & 0x20) != 0) && ((unaff_s0 & 0x20) == 0)) {
    *(undefined4 *)(*unaff_s2 + 0x28) = 0x20;
  }
  return;
}



void _L0(void)

{
  uint unaff_s0;
  uint unaff_s1;
  int *unaff_s2;
  
  _L0();
  if (((unaff_s1 & 0x10) != 0) && ((unaff_s0 & 0x10) == 0)) {
    *(undefined4 *)(*unaff_s2 + 0x28) = 0x10;
  }
  if (((unaff_s1 & 0x20) != 0) && ((unaff_s0 & 0x20) == 0)) {
    *(undefined4 *)(*unaff_s2 + 0x28) = 0x20;
  }
  return;
}


