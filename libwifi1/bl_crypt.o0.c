typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

typedef ulong uint32_t;

struct phy_channel_info { // DWARF DIE: ad8
    uint32_t info1;
    uint32_t info2;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict9c_for___value anon_union.conflict9c_for___value, *Panon_union.conflict9c_for___value;

typedef uint wint_t;

union anon_union.conflict9c_for___value { // DWARF DIE: 9c
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: ce
    int __count;
    union anon_union.conflict9c_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflict9c anon_union.conflict9c, *Panon_union.conflict9c;

union anon_union.conflict9c { // DWARF DIE: 9c
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: aa0
    uint32_t word[4];
};

typedef struct rijndael_ctx rijndael_ctx, *Prijndael_ctx;

typedef uint u32;

struct rijndael_ctx { // DWARF DIE: 1370
    int decrypt;
    int Nr;
    u32 key[60];
};

typedef enum anon_enum_8.conflict968 {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_VI=2,
    AC_VO=3,
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
    IPC_DMA_CHANNEL_CTRL_RX=0,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_DATA_RX=1,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_MAX=4,
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
} anon_enum_8.conflict968;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr { // DWARF DIE: 9e0
    uint16_t array[3];
};

typedef struct dma_desc dma_desc, *Pdma_desc;

struct dma_desc { // DWARF DIE: bd2
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: c26
    struct dma_desc * last_dma[4];
};

typedef uchar uint8_t;

typedef char int8_t;

typedef long int32_t;

typedef uchar UINT8;

typedef ulong UINT32;

typedef int BOOLEAN;

typedef char SINT8;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

struct tx_cfm_tag { // DWARF DIE: fe1
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

typedef union anon_union.conflictc88 anon_union.conflictc88, *Panon_union.conflictc88;

union anon_union.conflictc88 { // DWARF DIE: c88
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflictc63 anon_union.conflictc63, *Panon_union.conflictc63;

union anon_union.conflictc63 { // DWARF DIE: c63
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct rx_pbd rx_pbd, *Prx_pbd;

struct rx_pbd { // DWARF DIE: eb1
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

struct rx_swdesc { // DWARF DIE: ea6
};

struct rx_hd { // DWARF DIE: d9b
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

typedef union anon_union.conflictc63_for_field_3 anon_union.conflictc63_for_field_3, *Panon_union.conflictc63_for_field_3;

typedef union anon_union.conflictc88_for_field_4 anon_union.conflictc88_for_field_4, *Panon_union.conflictc88_for_field_4;

typedef union anon_union.conflictcad_for_field_5 anon_union.conflictcad_for_field_5, *Panon_union.conflictcad_for_field_5;

union anon_union.conflictc63_for_field_3 { // DWARF DIE: c63
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflictc88_for_field_4 { // DWARF DIE: c88
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflictcad_for_field_5 { // DWARF DIE: cad
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: cd2
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictc63_for_field_3 field_3;
    union anon_union.conflictc88_for_field_4 field_4;
    union anon_union.conflictcad_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1050
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

struct rx_payloaddesc { // DWARF DIE: f84
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

typedef union anon_union.conflictcad anon_union.conflictcad, *Panon_union.conflictcad;

union anon_union.conflictcad { // DWARF DIE: cad
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

struct rx_dmadesc { // DWARF DIE: f14
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: b00
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict876_for__new anon_union.conflict876_for__new, *Panon_union.conflict876_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict6ea anon_struct.conflict6ea, *Panon_struct.conflict6ea;

typedef struct anon_struct.conflict82f anon_struct.conflict82f, *Panon_struct.conflict82f;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 124
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 6a1
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 65c
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 217
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 26c
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 2cc
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 2fa
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

struct anon_struct.conflict82f { // DWARF DIE: 82f
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct __tm { // DWARF DIE: 194
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

struct anon_struct.conflict6ea { // DWARF DIE: 6ea
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

union anon_union.conflict876_for__new { // DWARF DIE: 876
    struct anon_struct.conflict6ea _reent;
    struct anon_struct.conflict82f _unused;
};

struct _reent { // DWARF DIE: 466
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
    union anon_union.conflict876_for__new _new;
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

struct __locale_t { // DWARF DIE: 8ab
};

typedef union anon_union.conflict876 anon_union.conflict876, *Panon_union.conflict876;

union anon_union.conflict876 { // DWARF DIE: 876
    struct anon_struct.conflict6ea _reent;
    struct anon_struct.conflict82f _unused;
};

typedef int32_t BaseType_t;

typedef struct BL_ENDECRYPT_t BL_ENDECRYPT_t, *PBL_ENDECRYPT_t;

struct BL_ENDECRYPT_t { // DWARF DIE: 11a6
    UINT8 enDeAction;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    UINT8 * pData;
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




// DWARF DIE: 196e

int BL_AES_MEMCMP(UINT8 *dst,UINT8 *src,int len)

{
  int iVar1;
  int iVar2;
  
  iVar1 = len;
  for (iVar2 = 0; len != iVar2; iVar2 += 1) {
    if (dst[iVar2] == src[iVar2]) {
      iVar1 += -1;
    }
  }
  return -(uint)(iVar1 != 0);
}



// DWARF DIE: 1929

void BL_AES_MEMSET(UINT8 *dst,UINT8 val,int size)

{
  UINT8 *pUVar1;
  
  pUVar1 = dst + size;
  for (; dst != pUVar1; dst = dst + 1) {
    *dst = val;
  }
  return;
}



// DWARF DIE: 19c9

void BL_AES_MEMCPY(UINT8 *dst,UINT8 *src,int size)

{
  int iVar1;
  
  if (dst < src) {
    for (iVar1 = 0; iVar1 != size; iVar1 += 1) {
      dst[iVar1] = src[iVar1];
    }
    return;
  }
  while (size += -1, size != -1) {
    dst[size] = src[size];
  }
  return;
}



// DWARF DIE: 1839

int BL_AesEncrypt(UINT8 *kek,UINT8 kekLen,UINT8 *data,UINT8 *ret)

{
  UINT8 pBuf [400];
  
  _L0();
  FUN_000100a0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000100a0();
  return 0;
}



undefined4 FUN_000100a0(void)

{
  FUN_000100a0();
  return 0;
}



// DWARF DIE: 165a

int BL_AesWrap(UINT8 *kek,UINT8 kekLen,UINT32 n,UINT8 *plain,UINT8 *keyIv,UINT8 *cipher)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined auStack72 [4];
  UINT8 a [8];
  UINT8 b [16];
  
  if (n != 0) {
    _L0();
    FUN_00010102();
    FUN_00010116();
    uVar2 = 0;
    iVar3 = 6;
    do {
      for (iVar1 = 1; iVar1 != n + 1; iVar1 += 1) {
        FUN_0001012e(a + 4,auStack72,8);
        FUN_0001013c(b + 4,(int)(cipher + iVar1 * 8),8);
        FUN_0001014c(a + 4);
        FUN_0001015a(auStack72,a + 4,8);
        a[3] = (char)uVar2 + (char)iVar1 ^ a[3];
        _L0((int)(cipher + iVar1 * 8),b + 4,8);
      }
      iVar3 += -1;
      uVar2 = uVar2 + (n & 0xff) & 0xff;
    } while (iVar3 != 0);
    FUN_0001019c();
    return 0;
  }
  return -1;
}



undefined4 _L0(void)

{
  uint unaff_s0;
  int iVar1;
  int unaff_s2;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte in_stack_0000000f;
  
  _L0();
  FUN_00010102();
  FUN_00010116();
  uVar2 = 0;
  iVar4 = 6;
  do {
    for (iVar1 = 1; iVar3 = iVar1 * 8 + unaff_s2, iVar1 != unaff_s0 + 1; iVar1 += 1) {
      FUN_0001012e(&stack0x00000010,&stack0x00000008,8);
      FUN_0001013c(&stack0x00000018,iVar3,8);
      FUN_0001014c(&stack0x00000010);
      FUN_0001015a(&stack0x00000008,&stack0x00000010,8);
      in_stack_0000000f = (char)uVar2 + (char)iVar1 ^ in_stack_0000000f;
      _L0(iVar3,&stack0x00000018,8);
    }
    iVar4 += -1;
    uVar2 = uVar2 + (unaff_s0 & 0xff) & 0xff;
  } while (iVar4 != 0);
  FUN_0001019c();
  return 0;
}



undefined4 FUN_00010102(void)

{
  uint unaff_s0;
  int iVar1;
  int unaff_s2;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte in_stack_0000000f;
  
  FUN_00010102();
  FUN_00010116();
  uVar2 = 0;
  iVar4 = 6;
  do {
    for (iVar1 = 1; iVar3 = iVar1 * 8 + unaff_s2, iVar1 != unaff_s0 + 1; iVar1 += 1) {
      FUN_0001012e(&stack0x00000010,&stack0x00000008,8);
      FUN_0001013c(&stack0x00000018,iVar3,8);
      FUN_0001014c(&stack0x00000010);
      FUN_0001015a(&stack0x00000008,&stack0x00000010,8);
      in_stack_0000000f = (char)uVar2 + (char)iVar1 ^ in_stack_0000000f;
      _L0(iVar3,&stack0x00000018,8);
    }
    iVar4 += -1;
    uVar2 = uVar2 + (unaff_s0 & 0xff) & 0xff;
  } while (iVar4 != 0);
  FUN_0001019c();
  return 0;
}



undefined4 FUN_00010116(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  char cVar2;
  int iVar3;
  int iVar4;
  char unaff_s8;
  byte in_stack_0000000f;
  
  FUN_00010116();
  cVar2 = '\0';
  iVar4 = 6;
  do {
    for (iVar1 = 1; iVar3 = iVar1 * 8 + unaff_s2, iVar1 != unaff_s0 + 1; iVar1 += 1) {
      FUN_0001012e(&stack0x00000010,&stack0x00000008,8);
      FUN_0001013c(&stack0x00000018,iVar3,8);
      FUN_0001014c(&stack0x00000010);
      FUN_0001015a(&stack0x00000008,&stack0x00000010,8);
      in_stack_0000000f = cVar2 + (char)iVar1 ^ in_stack_0000000f;
      _L0(iVar3,&stack0x00000018,8);
    }
    cVar2 += unaff_s8;
    iVar4 += -1;
  } while (iVar4 != 0);
  FUN_0001019c();
  return 0;
}



undefined4 FUN_0001012e(undefined *param_1,undefined *param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  char unaff_s3;
  int unaff_s4;
  int unaff_s5;
  char unaff_s8;
  byte in_stack_0000000f;
  
  do {
    FUN_0001012e(param_1,param_2,param_3);
    FUN_0001013c(&stack0x00000018,unaff_s4,8);
    FUN_0001014c(&stack0x00000010);
    FUN_0001015a(&stack0x00000008,&stack0x00000010,8);
    in_stack_0000000f = unaff_s3 + (char)unaff_s1 ^ in_stack_0000000f;
    _L0(unaff_s4,&stack0x00000018,8);
    unaff_s1 += 1;
    while (unaff_s4 = unaff_s1 * 8 + unaff_s2, unaff_s1 == unaff_s0) {
      unaff_s3 += unaff_s8;
      unaff_s5 += -1;
      if (unaff_s5 == 0) {
        FUN_0001019c();
        return 0;
      }
      unaff_s1 = 1;
    }
    param_3 = 8;
    param_2 = &stack0x00000008;
    param_1 = &stack0x00000010;
  } while( true );
}



undefined4 FUN_0001013c(undefined *param_1,int param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  char unaff_s3;
  int unaff_s4;
  int unaff_s5;
  char unaff_s8;
  byte in_stack_0000000f;
  
  do {
    FUN_0001013c(param_1,param_2,param_3);
    FUN_0001014c(&stack0x00000010);
    FUN_0001015a(&stack0x00000008,&stack0x00000010,8);
    in_stack_0000000f = unaff_s3 + (char)unaff_s1 ^ in_stack_0000000f;
    _L0(unaff_s4,&stack0x00000018,8);
    unaff_s1 += 1;
    while (param_2 = unaff_s1 * 8 + unaff_s2, unaff_s1 == unaff_s0) {
      unaff_s3 += unaff_s8;
      unaff_s5 += -1;
      if (unaff_s5 == 0) {
        FUN_0001019c();
        return 0;
      }
      unaff_s1 = 1;
    }
    FUN_0001012e(&stack0x00000010,&stack0x00000008,8);
    param_3 = 8;
    param_1 = &stack0x00000018;
    unaff_s4 = param_2;
  } while( true );
}



undefined4 FUN_0001014c(undefined *param_1)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  char unaff_s3;
  int unaff_s4;
  int unaff_s5;
  char unaff_s8;
  byte in_stack_0000000f;
  
  do {
    FUN_0001014c(param_1);
    FUN_0001015a(&stack0x00000008,&stack0x00000010,8);
    in_stack_0000000f = unaff_s3 + (char)unaff_s1 ^ in_stack_0000000f;
    _L0(unaff_s4,&stack0x00000018,8);
    unaff_s1 += 1;
    while (unaff_s4 = unaff_s1 * 8 + unaff_s2, unaff_s1 == unaff_s0) {
      unaff_s3 += unaff_s8;
      unaff_s5 += -1;
      if (unaff_s5 == 0) {
        FUN_0001019c();
        return 0;
      }
      unaff_s1 = 1;
    }
    FUN_0001012e(&stack0x00000010,&stack0x00000008,8);
    FUN_0001013c(&stack0x00000018,unaff_s4,8);
    param_1 = &stack0x00000010;
  } while( true );
}



undefined4 FUN_0001015a(undefined *param_1,undefined *param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  char unaff_s3;
  int unaff_s4;
  int unaff_s5;
  char unaff_s8;
  byte in_stack_0000000f;
  
  do {
    FUN_0001015a(param_1,param_2,param_3);
    in_stack_0000000f = unaff_s3 + (char)unaff_s1 ^ in_stack_0000000f;
    _L0(unaff_s4,&stack0x00000018,8);
    unaff_s1 += 1;
    while (unaff_s4 = unaff_s1 * 8 + unaff_s2, unaff_s1 == unaff_s0) {
      unaff_s3 += unaff_s8;
      unaff_s5 += -1;
      if (unaff_s5 == 0) {
        FUN_0001019c();
        return 0;
      }
      unaff_s1 = 1;
    }
    FUN_0001012e(&stack0x00000010,&stack0x00000008,8);
    FUN_0001013c(&stack0x00000018,unaff_s4,8);
    FUN_0001014c(&stack0x00000010);
    param_3 = 8;
    param_2 = &stack0x00000010;
    param_1 = &stack0x00000008;
  } while( true );
}



undefined4 _L0(int param_1,undefined *param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  char unaff_s3;
  int unaff_s5;
  char unaff_s8;
  byte in_stack_0000000f;
  
  do {
    _L0(param_1,param_2,param_3);
    while (param_1 = unaff_s1 * 8 + unaff_s2, unaff_s1 == unaff_s0) {
      unaff_s3 += unaff_s8;
      unaff_s5 += -1;
      if (unaff_s5 == 0) {
        FUN_0001019c();
        return 0;
      }
      unaff_s1 = 1;
    }
    FUN_0001012e(&stack0x00000010,&stack0x00000008,8);
    FUN_0001013c(&stack0x00000018,param_1,8);
    FUN_0001014c(&stack0x00000010);
    FUN_0001015a(&stack0x00000008,&stack0x00000010,8);
    param_3 = 8;
    in_stack_0000000f = unaff_s3 + (char)unaff_s1 ^ in_stack_0000000f;
    param_2 = &stack0x00000018;
    unaff_s1 += 1;
  } while( true );
}



undefined4 FUN_0001019c(void)

{
  FUN_0001019c();
  return 0;
}



// DWARF DIE: 13e3

int BL_AesUnWrap(UINT8 *kek,UINT8 kekLen,UINT32 n,UINT8 *cipher,UINT8 *keyIv,UINT8 *plain)

{
  uint uVar1;
  UINT32 UVar2;
  UINT8 *pUVar3;
  int iVar4;
  undefined auStack472 [4];
  UINT8 a [8];
  UINT8 b [16];
  UINT8 pBuf [400];
  
  if (n != 0) {
    _L0();
    FUN_0001020c();
    FUN_0001021a();
    uVar1 = (n & 0xff) * 5;
    FUN_0001023c();
    _LVL67();
    iVar4 = 6;
    do {
      pUVar3 = plain + n * 8 + -8;
      for (UVar2 = n; 0 < (int)UVar2; UVar2 -= 1) {
        FUN_000102c2(a + 4,auStack472,8);
        b[3] = (char)(uVar1 & 0xff) + (char)UVar2 ^ b[3];
        _L0(b + 4,(int)pUVar3,8);
        _LVL86(b + 0xc,a + 4);
        FUN_000102fa(auStack472,a + 4,8);
        FUN_00010308((int)pUVar3,b + 4,8);
        pUVar3 = pUVar3 + -8;
      }
      uVar1 = (uVar1 & 0xff) - (n & 0xff);
      iVar4 += -1;
    } while (iVar4 != 0);
    iVar4 = _L43();
    return -(uint)(iVar4 != 0);
  }
  return -1;
}



int _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s2;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte in_stack_00000017;
  
  _L0();
  FUN_0001020c();
  FUN_0001021a();
  uVar1 = (unaff_s2 & 0xff) * 5;
  FUN_0001023c();
  _LVL67();
  iVar4 = 6;
  do {
    iVar3 = unaff_s2 * 8 + -8 + unaff_s0;
    for (uVar2 = unaff_s2; 0 < (int)uVar2; uVar2 -= 1) {
      FUN_000102c2(&stack0x00000010,&stack0x00000008,8);
      in_stack_00000017 = (char)(uVar1 & 0xff) + (char)uVar2 ^ in_stack_00000017;
      _L0(&stack0x00000018,iVar3,8);
      _LVL86(&stack0x00000020,&stack0x00000010);
      FUN_000102fa(&stack0x00000008,&stack0x00000010,8);
      FUN_00010308(iVar3,&stack0x00000018,8);
      iVar3 += -8;
    }
    uVar1 = (uVar1 & 0xff) - (unaff_s2 & 0xff);
    iVar4 += -1;
  } while (iVar4 != 0);
  iVar4 = _L43();
  return -(uint)(iVar4 != 0);
}



int FUN_0001020c(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s2;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte in_stack_00000017;
  
  FUN_0001020c();
  FUN_0001021a();
  uVar1 = (unaff_s2 & 0xff) * 5;
  FUN_0001023c();
  _LVL67();
  iVar4 = 6;
  do {
    iVar3 = unaff_s2 * 8 + -8 + unaff_s0;
    for (uVar2 = unaff_s2; 0 < (int)uVar2; uVar2 -= 1) {
      FUN_000102c2(&stack0x00000010,&stack0x00000008,8);
      in_stack_00000017 = (char)(uVar1 & 0xff) + (char)uVar2 ^ in_stack_00000017;
      _L0(&stack0x00000018,iVar3,8);
      _LVL86(&stack0x00000020,&stack0x00000010);
      FUN_000102fa(&stack0x00000008,&stack0x00000010,8);
      FUN_00010308(iVar3,&stack0x00000018,8);
      iVar3 += -8;
    }
    uVar1 = (uVar1 & 0xff) - (unaff_s2 & 0xff);
    iVar4 += -1;
  } while (iVar4 != 0);
  iVar4 = _L43();
  return -(uint)(iVar4 != 0);
}



int FUN_0001021a(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s2;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte in_stack_00000017;
  
  FUN_0001021a();
  uVar1 = (unaff_s2 & 0xff) * 5;
  FUN_0001023c();
  _LVL67();
  iVar4 = 6;
  do {
    iVar3 = unaff_s2 * 8 + -8 + unaff_s0;
    for (uVar2 = unaff_s2; 0 < (int)uVar2; uVar2 -= 1) {
      FUN_000102c2(&stack0x00000010,&stack0x00000008,8);
      in_stack_00000017 = (char)(uVar1 & 0xff) + (char)uVar2 ^ in_stack_00000017;
      _L0(&stack0x00000018,iVar3,8);
      _LVL86(&stack0x00000020,&stack0x00000010);
      FUN_000102fa(&stack0x00000008,&stack0x00000010,8);
      FUN_00010308(iVar3,&stack0x00000018,8);
      iVar3 += -8;
    }
    uVar1 = (uVar1 & 0xff) - (unaff_s2 & 0xff);
    iVar4 += -1;
  } while (iVar4 != 0);
  iVar4 = _L43();
  return -(uint)(iVar4 != 0);
}



int FUN_0001023c(void)

{
  char unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int iVar2;
  int iVar3;
  char unaff_s7;
  byte in_stack_00000017;
  
  FUN_0001023c();
  _LVL67();
  iVar3 = 6;
  iVar1 = unaff_s2;
  iVar2 = unaff_s1;
  do {
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      FUN_000102c2(&stack0x00000010,&stack0x00000008,8);
      in_stack_00000017 = unaff_s0 + (char)iVar1 ^ in_stack_00000017;
      _L0(&stack0x00000018,iVar2,8);
      _LVL86(&stack0x00000020,&stack0x00000010);
      FUN_000102fa(&stack0x00000008,&stack0x00000010,8);
      FUN_00010308(iVar2,&stack0x00000018,8);
      iVar2 = iVar2 + -8;
    }
    unaff_s0 -= unaff_s7;
    iVar3 += -1;
    iVar1 = unaff_s2;
    iVar2 = unaff_s1;
  } while (iVar3 != 0);
  iVar1 = _L43();
  return -(uint)(iVar1 != 0);
}



int _LVL67(void)

{
  char unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int iVar2;
  int iVar3;
  char unaff_s7;
  byte in_stack_00000017;
  
  _LVL67();
  iVar3 = 6;
  iVar1 = unaff_s2;
  iVar2 = unaff_s1;
  do {
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      FUN_000102c2(&stack0x00000010,&stack0x00000008,8);
      in_stack_00000017 = unaff_s0 + (char)iVar1 ^ in_stack_00000017;
      _L0(&stack0x00000018,iVar2,8);
      _LVL86(&stack0x00000020,&stack0x00000010);
      FUN_000102fa(&stack0x00000008,&stack0x00000010,8);
      FUN_00010308(iVar2,&stack0x00000018,8);
      iVar2 = iVar2 + -8;
    }
    unaff_s0 -= unaff_s7;
    iVar3 += -1;
    iVar1 = unaff_s2;
    iVar2 = unaff_s1;
  } while (iVar3 != 0);
  iVar1 = _L43();
  return -(uint)(iVar1 != 0);
}



int _L43(void)

{
  int iVar1;
  
  iVar1 = _L43();
  return -(uint)(iVar1 != 0);
}



int FUN_000102c2(undefined *param_1,undefined *param_2,undefined4 param_3)

{
  char unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  char unaff_s7;
  byte in_stack_00000017;
  
  do {
    FUN_000102c2(param_1,param_2,param_3);
    in_stack_00000017 = unaff_s0 + (char)unaff_s4 ^ in_stack_00000017;
    _L0(&stack0x00000018,unaff_s5,8);
    _LVL86(&stack0x00000020,&stack0x00000010);
    FUN_000102fa(&stack0x00000008,&stack0x00000010,8);
    FUN_00010308(unaff_s5,&stack0x00000018,8);
    unaff_s4 = unaff_s4 + -1;
    unaff_s5 = unaff_s5 + -8;
    while (unaff_s4 < 1) {
      unaff_s0 -= unaff_s7;
      unaff_s6 += -1;
      unaff_s4 = unaff_s2;
      unaff_s5 = unaff_s1;
      if (unaff_s6 == 0) {
        iVar1 = _L43();
        return -(uint)(iVar1 != 0);
      }
    }
    param_3 = 8;
    param_2 = &stack0x00000008;
    param_1 = &stack0x00000010;
  } while( true );
}



int _L0(undefined *param_1,int param_2,undefined4 param_3)

{
  char unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  char unaff_s7;
  byte in_stack_00000017;
  
  do {
    _L0(param_1,param_2,param_3);
    _LVL86(&stack0x00000020,&stack0x00000010);
    FUN_000102fa(&stack0x00000008,&stack0x00000010,8);
    FUN_00010308(unaff_s5,&stack0x00000018,8);
    unaff_s4 = unaff_s4 + -1;
    param_2 = unaff_s5 + -8;
    while (unaff_s4 < 1) {
      unaff_s0 -= unaff_s7;
      unaff_s6 += -1;
      unaff_s4 = unaff_s2;
      param_2 = unaff_s1;
      if (unaff_s6 == 0) {
        iVar1 = _L43();
        return -(uint)(iVar1 != 0);
      }
    }
    FUN_000102c2(&stack0x00000010,&stack0x00000008,8);
    in_stack_00000017 = unaff_s0 + (char)unaff_s4 ^ in_stack_00000017;
    param_3 = 8;
    param_1 = &stack0x00000018;
    unaff_s5 = param_2;
  } while( true );
}



int _LVL86(undefined *param_1,undefined *param_2)

{
  char unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  char unaff_s7;
  byte in_stack_00000017;
  
  do {
    _LVL86(param_1,param_2);
    FUN_000102fa(&stack0x00000008,&stack0x00000010,8);
    FUN_00010308(unaff_s5,&stack0x00000018,8);
    unaff_s4 = unaff_s4 + -1;
    unaff_s5 = unaff_s5 + -8;
    while (unaff_s4 < 1) {
      unaff_s0 -= unaff_s7;
      unaff_s6 += -1;
      unaff_s4 = unaff_s2;
      unaff_s5 = unaff_s1;
      if (unaff_s6 == 0) {
        iVar1 = _L43();
        return -(uint)(iVar1 != 0);
      }
    }
    FUN_000102c2(&stack0x00000010,&stack0x00000008,8);
    in_stack_00000017 = unaff_s0 + (char)unaff_s4 ^ in_stack_00000017;
    _L0(&stack0x00000018,unaff_s5,8);
    param_2 = &stack0x00000010;
    param_1 = &stack0x00000020;
  } while( true );
}



int FUN_000102fa(undefined *param_1,undefined *param_2,undefined4 param_3)

{
  char unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  char unaff_s7;
  byte in_stack_00000017;
  
  do {
    FUN_000102fa(param_1,param_2,param_3);
    FUN_00010308(unaff_s5,&stack0x00000018,8);
    unaff_s4 = unaff_s4 + -1;
    unaff_s5 = unaff_s5 + -8;
    while (unaff_s4 < 1) {
      unaff_s0 -= unaff_s7;
      unaff_s6 += -1;
      unaff_s4 = unaff_s2;
      unaff_s5 = unaff_s1;
      if (unaff_s6 == 0) {
        iVar1 = _L43();
        return -(uint)(iVar1 != 0);
      }
    }
    FUN_000102c2(&stack0x00000010,&stack0x00000008,8);
    in_stack_00000017 = unaff_s0 + (char)unaff_s4 ^ in_stack_00000017;
    _L0(&stack0x00000018,unaff_s5,8);
    _LVL86(&stack0x00000020,&stack0x00000010);
    param_3 = 8;
    param_2 = &stack0x00000010;
    param_1 = &stack0x00000008;
  } while( true );
}



int FUN_00010308(int param_1,undefined *param_2,undefined4 param_3)

{
  char unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  char unaff_s7;
  byte in_stack_00000017;
  
  do {
    FUN_00010308(param_1,param_2,param_3);
    unaff_s4 = unaff_s4 + -1;
    param_1 = unaff_s5 + -8;
    while (unaff_s4 < 1) {
      unaff_s0 -= unaff_s7;
      unaff_s6 += -1;
      unaff_s4 = unaff_s2;
      param_1 = unaff_s1;
      if (unaff_s6 == 0) {
        iVar1 = _L43();
        return -(uint)(iVar1 != 0);
      }
    }
    FUN_000102c2(&stack0x00000010,&stack0x00000008,8);
    in_stack_00000017 = unaff_s0 + (char)unaff_s4 ^ in_stack_00000017;
    _L0(&stack0x00000018,param_1,8);
    _LVL86(&stack0x00000020,&stack0x00000010);
    FUN_000102fa(&stack0x00000008,&stack0x00000010,8);
    param_3 = 8;
    param_2 = &stack0x00000018;
    unaff_s5 = param_1;
  } while( true );
}


