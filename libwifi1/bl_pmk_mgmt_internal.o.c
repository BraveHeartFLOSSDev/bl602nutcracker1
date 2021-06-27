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

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

typedef ulong uint32_t;

struct phy_channel_info { // DWARF DIE: ad8
    uint32_t info1;
    uint32_t info2;
};

typedef struct pmkElement_t pmkElement_t, *PpmkElement_t;

typedef union anon_union.conflict1227_for_key anon_union.conflict1227_for_key, *Panon_union.conflict1227_for_key;

typedef uchar UINT8;

typedef char SINT8;

typedef UINT8 IEEEtypes_Addr_t;

typedef IEEEtypes_Addr_t IEEEtypes_MacAddr_t[6];

union anon_union.conflict1227_for_key { // DWARF DIE: 1227
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

struct pmkElement_t { // DWARF DIE: 1259
    union anon_union.conflict1227_for_key key;
    UINT8 PMK[32];
    UINT8 length;
    UINT8 psk_length;
    SINT8 replacementRank;
};

typedef union anon_union.conflict1227 anon_union.conflict1227, *Panon_union.conflict1227;

union anon_union.conflict1227 { // DWARF DIE: 1227
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
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
    MOD_CLASS_DSSS_OFDM=5,
    MOD_CLASS_ERP_OFDM=6,
    MOD_CLASS_ERP_PBCC=4,
    MOD_CLASS_FHSS=2,
    MOD_CLASS_HR_DSSS=3,
    MOD_CLASS_HT=8,
    MOD_CLASS_INFRA=1,
    MOD_CLASS_OFDM=7,
    MOD_CLASS_VHT=9,
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

struct dma_desc { // DWARF DIE: bcd
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: c21
    struct dma_desc * last_dma[4];
};

typedef uchar uint8_t;

typedef char int8_t;

typedef long int32_t;

typedef long SINT32;

typedef int BOOLEAN;

typedef union anon_union.conflictc83 anon_union.conflictc83, *Panon_union.conflictc83;

union anon_union.conflictc83 { // DWARF DIE: c83
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

struct tx_cfm_tag { // DWARF DIE: fdc
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

typedef struct rx_pbd rx_pbd, *Prx_pbd;

struct rx_pbd { // DWARF DIE: eac
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

struct rx_swdesc { // DWARF DIE: ea1
};

struct rx_hd { // DWARF DIE: d96
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

typedef union anon_union.conflictc5e_for_field_3 anon_union.conflictc5e_for_field_3, *Panon_union.conflictc5e_for_field_3;

typedef union anon_union.conflictc83_for_field_4 anon_union.conflictc83_for_field_4, *Panon_union.conflictc83_for_field_4;

typedef union anon_union.conflictca8_for_field_5 anon_union.conflictca8_for_field_5, *Panon_union.conflictca8_for_field_5;

union anon_union.conflictca8_for_field_5 { // DWARF DIE: ca8
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflictc5e_for_field_3 { // DWARF DIE: c5e
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflictc83_for_field_4 { // DWARF DIE: c83
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_hd { // DWARF DIE: ccd
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictc5e_for_field_3 field_3;
    union anon_union.conflictc83_for_field_4 field_4;
    union anon_union.conflictca8_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 104b
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

typedef union anon_union.conflictca8 anon_union.conflictca8, *Panon_union.conflictca8;

union anon_union.conflictca8 { // DWARF DIE: ca8
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflictc5e anon_union.conflictc5e, *Panon_union.conflictc5e;

union anon_union.conflictc5e { // DWARF DIE: c5e
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

struct rx_payloaddesc { // DWARF DIE: f7f
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

struct rx_dmadesc { // DWARF DIE: f0f
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




// DWARF DIE: 1a98

pmkElement_t * pmkCacheNewElement(void)

{
  uint uVar1;
  pmkElement_t *ppVar2;
  int iVar3;
  pmkElement_t *ppVar4;
  
  ppVar4 = (pmkElement_t *)0x0;
  _L0();
  for (uVar1 = 0; (int)uVar1 < (int)uRam00000000; uVar1 = uVar1 + 1 & 0xff) {
    if ((int)(char)uRam00000000 == uRam00000000) {
      iVar3 = uVar1 * 0x43 + uRam00000000;
      *(char *)(iVar3 + 0x42) = *(char *)(iVar3 + 0x42) + -1;
    }
    if (ppVar4 == (pmkElement_t *)0x0) {
      ppVar2 = (pmkElement_t *)(uRam00000000 + uVar1 * 0x43);
      if (ppVar2->replacementRank == '\0') {
        FUN_000100d0((int)ppVar2,0,0x43);
        if ((int)(char)uRam00000000 < (int)uRam00000000) {
          uRam00000000 = uRam00000000 & 0xffffff00 | (uint)(byte)((char)uRam00000000 + 1);
        }
        *(char *)(uRam00000000 + uVar1 * 0x43 + 0x42) = (char)uRam00000000;
        ppVar4 = ppVar2;
      }
    }
  }
  FUN_00010076();
  return ppVar4;
}



int _L0(void)

{
  uint unaff_s0;
  int iVar1;
  char *unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int *unaff_s5;
  int unaff_s6;
  
  _L0();
  for (; (int)unaff_s0 < *unaff_s5; unaff_s0 = unaff_s0 + 1 & 0xff) {
    if ((int)*unaff_s2 == *unaff_s5) {
      iVar1 = unaff_s0 * unaff_s6 + *unaff_s4;
      *(char *)(iVar1 + 0x42) = *(char *)(iVar1 + 0x42) + -1;
    }
    if (unaff_s3 == 0) {
      iVar1 = *unaff_s4 + unaff_s0 * unaff_s6;
      if (*(char *)(iVar1 + 0x42) == '\0') {
        FUN_000100d0(iVar1,0,0x43);
        if ((int)*unaff_s2 < *unaff_s5) {
          *unaff_s2 = *unaff_s2 + '\x01';
        }
        *(char *)(*unaff_s4 + unaff_s0 * unaff_s6 + 0x42) = *unaff_s2;
        unaff_s3 = iVar1;
      }
    }
  }
  FUN_00010076();
  return unaff_s3;
}



void FUN_00010076(void)

{
  FUN_00010076();
  return;
}



int FUN_000100d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  char *unaff_s2;
  int *unaff_s4;
  int *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  
  do {
    FUN_000100d0(param_1,param_2,param_3);
    if ((int)*unaff_s2 < *unaff_s5) {
      *unaff_s2 = *unaff_s2 + '\x01';
    }
    *(char *)(*unaff_s4 + unaff_s7 + 0x42) = *unaff_s2;
    do {
      do {
        unaff_s0 = unaff_s0 + 1 & 0xff;
        if (*unaff_s5 <= (int)unaff_s0) {
          FUN_00010076();
          return unaff_s1;
        }
        if ((int)*unaff_s2 == *unaff_s5) {
          iVar1 = unaff_s0 * unaff_s6 + *unaff_s4;
          *(char *)(iVar1 + 0x42) = *(char *)(iVar1 + 0x42) + -1;
        }
      } while (unaff_s1 != 0);
      unaff_s7 = unaff_s0 * unaff_s6;
      param_1 = *unaff_s4 + unaff_s7;
    } while (*(char *)(param_1 + 0x42) != '\0');
    param_3 = 0x43;
    param_2 = 0;
    unaff_s1 = param_1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 19b7

void pmkCacheUpdateReplacementRank(pmkElement_t *pPMKElement)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  FUN_0001012c();
  if ((pPMKElement != (pmkElement_t *)0x0) && (pPMKElement->replacementRank != (char)iRam00000000))
  {
    for (uVar3 = 0; (int)uVar3 < iRam00000000; uVar3 = uVar3 + 1 & 0xff) {
      iVar2 = uVar3 * 0x43 + iRam00000000;
      cVar1 = *(char *)(iVar2 + 0x42);
      if (pPMKElement->replacementRank < cVar1) {
        *(char *)(iVar2 + 0x42) = cVar1 + -1;
      }
    }
    pPMKElement->replacementRank = (char)iRam00000000;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001012c(void)

{
  char cVar1;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  
  FUN_0001012c();
  if ((unaff_s1 != 0) && (*(char *)(unaff_s1 + 0x42) != (char)iRam00000000)) {
    for (uVar3 = 0; (int)uVar3 < iRam00000000; uVar3 = uVar3 + 1 & 0xff) {
      iVar2 = uVar3 * 0x43 + iRam00000000;
      cVar1 = *(char *)(iVar2 + 0x42);
      if (*(char *)(unaff_s1 + 0x42) < cVar1) {
        *(char *)(iVar2 + 0x42) = cVar1 + -1;
      }
    }
    *(char *)(unaff_s1 + 0x42) = (char)iRam00000000;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 1884

pmkElement_t * pmkCacheFindPSKElement(UINT8 *pSsid,UINT8 ssidLen)

{
  uint uVar1;
  pmkElement_t *ppVar2;
  int iVar3;
  undefined3 in_register_0000202d;
  
  ppVar2 = (pmkElement_t *)0x0;
  _L0();
  for (uVar1 = 0; (int)uVar1 < iRam00000000; uVar1 = uVar1 + 1 & 0xff) {
    iVar3 = iRam00000000 + uVar1 * 0x43;
    if (((*(char *)(iVar3 + 0x42) != '\0') &&
        ((uint)*(byte *)(iVar3 + 0x40) == CONCAT31(in_register_0000202d,ssidLen))) &&
       (iVar3 = FUN_0001026e(), iVar3 == 0)) {
      ppVar2 = (pmkElement_t *)(iRam00000000 + uVar1 * 0x43);
    }
  }
  FUN_0001020c();
  FUN_00010230();
  return ppVar2;
}



int _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  uint unaff_s2;
  int *unaff_s3;
  int *unaff_s7;
  int unaff_s8;
  
  _L0();
  for (; (int)unaff_s0 < *unaff_s7; unaff_s0 = unaff_s0 + 1 & 0xff) {
    iVar1 = *unaff_s3 + unaff_s0 * unaff_s8;
    if (((*(char *)(iVar1 + 0x42) != '\0') && (*(byte *)(iVar1 + 0x40) == unaff_s2)) &&
       (iVar1 = FUN_0001026e(), iVar1 == 0)) {
      unaff_s1 = *unaff_s3 + unaff_s0 * unaff_s8;
    }
  }
  FUN_0001020c();
  FUN_00010230();
  return unaff_s1;
}



void FUN_0001020c(void)

{
  FUN_0001020c();
  FUN_00010230();
  return;
}



void FUN_00010230(void)

{
  FUN_00010230();
  return;
}



int FUN_0001026e(void)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  uint unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int *unaff_s7;
  int unaff_s8;
  
  do {
    iVar1 = FUN_0001026e();
    if (iVar1 == 0) {
      unaff_s1 = *unaff_s3 + unaff_s4;
    }
    do {
      unaff_s0 = unaff_s0 + 1 & 0xff;
      if (*unaff_s7 <= (int)unaff_s0) {
        FUN_0001020c();
        FUN_00010230();
        return unaff_s1;
      }
      unaff_s4 = unaff_s0 * unaff_s8;
    } while ((*(char *)(*unaff_s3 + unaff_s4 + 0x42) == '\0') ||
            (*(byte *)(*unaff_s3 + unaff_s4 + 0x40) != unaff_s2));
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1708

void pmkCacheAddPSK(UINT8 *pSsid,UINT8 ssidLen,UINT8 *pPSK,UINT8 pPSKLen)

{
  int iVar1;
  int extraout_a0;
  int extraout_a0_00;
  
  _L0();
  FUN_000102ca();
  iVar1 = extraout_a0;
  if (extraout_a0 == 0) {
    _L0();
    FUN_000102e4();
    *(UINT8 *)(extraout_a0_00 + 0x40) = ssidLen;
    iVar1 = extraout_a0_00;
  }
  if (pPSK != (UINT8 *)0x0) {
    FUN_000102fe();
    *(UINT8 *)(iVar1 + 0x41) = pPSKLen;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int iVar1;
  int extraout_a0;
  int extraout_a0_00;
  undefined unaff_s2;
  int unaff_s3;
  undefined unaff_s5;
  
  _L0();
  FUN_000102ca();
  iVar1 = extraout_a0;
  if (extraout_a0 == 0) {
    _L0();
    FUN_000102e4();
    *(undefined *)(extraout_a0_00 + 0x40) = unaff_s2;
    iVar1 = extraout_a0_00;
  }
  if (unaff_s3 != 0) {
    FUN_000102fe();
    *(undefined *)(iVar1 + 0x41) = unaff_s5;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000102ca(void)

{
  int iVar1;
  int extraout_a0;
  int extraout_a0_00;
  undefined unaff_s2;
  int unaff_s3;
  undefined unaff_s5;
  
  FUN_000102ca();
  iVar1 = extraout_a0;
  if (extraout_a0 == 0) {
    _L0();
    FUN_000102e4();
    *(undefined *)(extraout_a0_00 + 0x40) = unaff_s2;
    iVar1 = extraout_a0_00;
  }
  if (unaff_s3 != 0) {
    FUN_000102fe();
    *(undefined *)(iVar1 + 0x41) = unaff_s5;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int extraout_a0;
  undefined unaff_s2;
  int unaff_s3;
  undefined unaff_s5;
  
  _L0();
  FUN_000102e4();
  *(undefined *)(extraout_a0 + 0x40) = unaff_s2;
  if (unaff_s3 != 0) {
    FUN_000102fe();
    *(undefined *)(extraout_a0 + 0x41) = unaff_s5;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000102e4(void)

{
  int unaff_s0;
  undefined unaff_s2;
  int unaff_s3;
  undefined unaff_s5;
  
  FUN_000102e4();
  *(undefined *)(unaff_s0 + 0x40) = unaff_s2;
  if (unaff_s3 != 0) {
    FUN_000102fe();
    *(undefined *)(unaff_s0 + 0x41) = unaff_s5;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000102fe(void)

{
  int unaff_s0;
  undefined unaff_s5;
  
  FUN_000102fe();
  *(undefined *)(unaff_s0 + 0x41) = unaff_s5;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 15dd

void pmkCacheDeletePSK(UINT8 *pSsid,UINT8 ssidLen)

{
  int extraout_a0;
  
  _L0();
  FUN_00010370();
  if (extraout_a0 != 0) {
    FUN_00010382();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int extraout_a0;
  
  _L0();
  FUN_00010370();
  if (extraout_a0 != 0) {
    FUN_00010382();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010370(void)

{
  int unaff_s1;
  
  FUN_00010370();
  if (unaff_s1 != 0) {
    FUN_00010382();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010382(void)

{
  FUN_00010382();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 1bb7

UINT8 pmkCacheGetHexNibble(UINT8 nibble)

{
  UINT8 UVar1;
  undefined3 in_register_00002029;
  
  FUN_000103f2();
  if (CONCAT31(in_register_00002029,nibble) < 0x61) {
    if (CONCAT31(in_register_00002029,nibble) < 0x41) {
      UVar1 = nibble + -0x30;
      _L0();
    }
    else {
      UVar1 = nibble + -0x37;
    }
  }
  else {
    UVar1 = nibble + -0x57;
  }
  return UVar1;
}



uint FUN_000103f2(void)

{
  uint unaff_s0;
  uint uVar1;
  
  FUN_000103f2();
  if (unaff_s0 < 0x61) {
    if (unaff_s0 < 0x41) {
      uVar1 = unaff_s0 - 0x30;
      _L0();
    }
    else {
      uVar1 = unaff_s0 - 0x37;
    }
  }
  else {
    uVar1 = unaff_s0 - 0x57;
  }
  return uVar1 & 0xff;
}



undefined _L0(void)

{
  undefined unaff_s0;
  
  _L0();
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1435

void pmkCacheGeneratePSK(UINT8 *pSsid,UINT8 ssidLen,UINT8 *pPassphrase,UINT8 PassphraseLen,
                        UINT8 *pPSK)

{
  byte extraout_a0;
  int extraout_a0_00;
  undefined3 in_register_00002035;
  int iVar1;
  
  FUN_00010482();
  if ((pPSK != (UINT8 *)0x0) && (pPassphrase != (UINT8 *)0x0)) {
    if (CONCAT31(in_register_00002035,PassphraseLen) - 8U < 0x38) {
      FUN_000104a6();
    }
    else {
      if (CONCAT31(in_register_00002035,PassphraseLen) == 0x40) {
        iVar1 = 0;
        do {
          FUN_000104f6((uint)*pPassphrase);
          FUN_00010504((uint)pPassphrase[1]);
          pPSK[iVar1 >> 1] = extraout_a0 | (byte)(extraout_a0_00 << 4);
          iVar1 += 2;
          pPassphrase = pPassphrase + 2;
        } while (iVar1 != 0x40);
      }
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010482(void)

{
  byte *unaff_s0;
  byte extraout_a0;
  int extraout_a0_00;
  int iVar1;
  int unaff_s4;
  int in_stack_0000000c;
  
  FUN_00010482();
  if ((unaff_s4 != 0) && (unaff_s0 != (byte *)0x0)) {
    if (in_stack_0000000c - 8U < 0x38) {
      FUN_000104a6();
    }
    else {
      if (in_stack_0000000c == 0x40) {
        iVar1 = 0;
        do {
          FUN_000104f6((uint)*unaff_s0);
          FUN_00010504((uint)unaff_s0[1]);
          *(byte *)((iVar1 >> 1) + unaff_s4) = extraout_a0 | (byte)(extraout_a0_00 << 4);
          iVar1 += 2;
          unaff_s0 = unaff_s0 + 2;
        } while (iVar1 != 0x40);
      }
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000104a6(void)

{
  FUN_000104a6();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000104f6(uint param_1)

{
  byte *unaff_s0;
  byte extraout_a0;
  int extraout_a0_00;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  while( true ) {
    FUN_000104f6(param_1);
    FUN_00010504((uint)unaff_s0[-1]);
    *(byte *)((unaff_s3 >> 1) + unaff_s4) = extraout_a0 | (byte)(extraout_a0_00 << 4);
    unaff_s3 += 2;
    if (unaff_s3 == unaff_s5) break;
    param_1 = (uint)*unaff_s0;
    unaff_s0 = unaff_s0 + 2;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010504(uint param_1)

{
  byte *unaff_s0;
  int unaff_s1;
  byte extraout_a0;
  int extraout_a0_00;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  while( true ) {
    FUN_00010504(param_1);
    *(byte *)((unaff_s3 >> 1) + unaff_s4) = extraout_a0 | (byte)(unaff_s1 << 4);
    unaff_s3 += 2;
    if (unaff_s3 == unaff_s5) break;
    FUN_000104f6((uint)*unaff_s0);
    param_1 = (uint)unaff_s0[1];
    unaff_s0 = unaff_s0 + 2;
    unaff_s1 = extraout_a0_00;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


