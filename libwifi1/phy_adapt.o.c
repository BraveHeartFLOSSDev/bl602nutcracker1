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

struct phy_channel_info {
    uint32_t info1;
    uint32_t info2;
};

typedef struct rvec_t rvec_t, *Prvec_t;

typedef long int32_t;

struct rvec_t {
    uint32_t leg_length:12;
    uint32_t leg_rate:4;
    uint32_t ht_length:16;
    uint32_t _ht_length:4;
    uint32_t short_gi:1;
    uint32_t stbc:2;
    uint32_t smoothing:1;
    uint32_t mcs:7;
    uint32_t pre_type:1;
    uint32_t format_mod:3;
    uint32_t ch_bw:2;
    uint32_t n_sts:3;
    uint32_t lsig_valid:1;
    uint32_t sounding:1;
    uint32_t num_extn_ss:2;
    uint32_t aggregation:1;
    uint32_t fec_coding:1;
    uint32_t dyn_bw:1;
    uint32_t doze_not_allowed:1;
    uint32_t antenna_set:8;
    uint32_t partial_aid:9;
    uint32_t group_id:6;
    uint32_t reserved_1c:1;
    int32_t rssi1:8;
    int32_t rssi2:8;
    int32_t agc_lna:4;
    int32_t agc_rbb1:5;
    int32_t agc_dg:7;
    uint32_t reserved_1d:8;
    uint32_t rcpi:8;
    uint32_t evm1:8;
    uint32_t evm2:8;
    uint32_t freqoff_lo:8;
    uint32_t freqoff_hi:8;
    uint32_t reserved2b_1:8;
    uint32_t reserved2b_2:8;
    uint32_t reserved2b_3:8;
};

typedef struct input_t input_t, *Pinput_t;

typedef char int8_t;

typedef uchar uint8_t;

struct input_t {
    int8_t rssi;
    int8_t lna;
    undefined field_0x2;
    undefined field_0x3;
    float ppm;
    uint8_t new;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
};

typedef struct pa_state_t pa_state_t, *Ppa_state_t;

struct pa_state_t {
    uint8_t used;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t vif_tag;
    struct input_t input_buffer[8];
    int8_t input_buffer_ptr;
    undefined field_0x69;
    undefined field_0x6a;
    undefined field_0x6b;
    uint32_t last_update;
    int8_t rss;
    int8_t rss_acq;
    int8_t rss_trk;
    int8_t rss_state;
    uint8_t rss_hit_count;
    undefined field_0x75;
    undefined field_0x76;
    undefined field_0x77;
    uint32_t rss_count;
    int8_t ris;
    undefined field_0x7d;
    undefined field_0x7e;
    undefined field_0x7f;
    float ce;
    int8_t ce_in;
    int8_t ce_acq;
    int8_t ce_trk;
    int8_t ce_state;
    int8_t ce_num_up_cmds;
    int8_t ce_num_dn_cmds;
    undefined field_0x8a;
    undefined field_0x8b;
};

typedef union anon_union.conflicte9 anon_union.conflicte9, *Panon_union.conflicte9;

typedef uint wint_t;

union anon_union.conflicte9 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte9_for___value anon_union.conflicte9_for___value, *Panon_union.conflicte9_for___value;

union anon_union.conflicte9_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflicte9_for___value __value;
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

typedef enum anon_enum_8.conflict974 {
    AC_MAX=4,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    AC_VI=2,
    TID_2=2,
    TID_5=5,
    AC_VO=3,
    TID_4=4,
    TID_7=7,
    TID_6=6,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    TID_MGT=8,
    IPC_DMA_CHANNEL_MAX=4,
    AC_BE=1,
    TID_MAX=9,
    AC_BK=0,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_DATA_RX=1
} anon_enum_8.conflict974;

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

typedef union anon_union.conflictc12_for_field_3 anon_union.conflictc12_for_field_3, *Panon_union.conflictc12_for_field_3;

typedef union anon_union.conflictc37_for_field_4 anon_union.conflictc37_for_field_4, *Panon_union.conflictc37_for_field_4;

typedef union anon_union.conflictc5c_for_field_5 anon_union.conflictc5c_for_field_5, *Panon_union.conflictc5c_for_field_5;

union anon_union.conflictc37_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflictc5c_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflictc12_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictc12_for_field_3 field_3;
    union anon_union.conflictc37_for_field_4 field_4;
    union anon_union.conflictc5c_for_field_5 field_5;
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

typedef union anon_union.conflictc5c anon_union.conflictc5c, *Panon_union.conflictc5c;

union anon_union.conflictc5c {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflictc37 anon_union.conflictc37, *Panon_union.conflictc37;

union anon_union.conflictc37 {
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

typedef union anon_union.conflictc12 anon_union.conflictc12, *Panon_union.conflictc12;

union anon_union.conflictc12 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
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

typedef union anon_union.conflict8c3_for__new anon_union.conflict8c3_for__new, *Panon_union.conflict8c3_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict737 anon_struct.conflict737, *Panon_struct.conflict737;

typedef struct anon_struct.conflict87c anon_struct.conflict87c, *Panon_struct.conflict87c;

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

struct anon_struct.conflict737 {
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

struct anon_struct.conflict87c {
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

union anon_union.conflict8c3_for__new {
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
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
    union anon_union.conflict8c3_for__new _new;
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

typedef union anon_union.conflict8c3 anon_union.conflict8c3, *Panon_union.conflict8c3;

union anon_union.conflict8c3 {
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
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




void pa_init(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    *(undefined *)(iVar3 + 0x73) = 0;
    *(undefined4 *)(iVar3 + 0x78) = 0;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    *(undefined *)(iVar3 + 0x68) = 0;
    *(undefined *)(iVar3 + 0x87) = 0;
    *(undefined4 *)(iVar3 + 0x80) = 0;
    *(undefined *)(iVar3 + 0x88) = 0;
    *(undefined *)(iVar3 + 0x89) = 0;
    iVar1 = 8;
    iVar2 = iVar3;
    do {
      *(undefined *)(iVar2 + 0x10) = 0;
      *(undefined *)(iVar2 + 8) = 0;
      *(undefined *)(iVar2 + 9) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 != 0);
    iVar3 = iVar3 + 0x8c;
  } while (iVar3 != 0x230);
  return;
}



int8_t pa_alloc(uint32_t vif_addr)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)0x0;
  iVar2 = 0;
  do {
    if (*pcVar1 == '\0') {
      *(uint32_t *)((undefined *)(iVar2 * 0x8c) + 4) = vif_addr;
      *(undefined *)(iVar2 * 0x8c) = 1;
      return (int8_t)iVar2;
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x8c;
  } while (iVar2 != 4);
  return -1;
}



void pa_free(uint8_t id)

{
  undefined3 in_register_00002029;
  undefined *puVar1;
  
  if (CONCAT31(in_register_00002029,id) < 4) {
    puVar1 = (undefined *)(CONCAT31(in_register_00002029,id) * 0x8c);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  return;
}



void pa_reset(uint8_t id)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pa_input(uint8_t id,rx_hd *rhd)

{
  undefined3 in_register_00002029;
  uint uVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar1 = CONCAT31(in_register_00002029,id);
  if (3 < uVar1) {
    return;
  }
  iVar2 = uVar1 * 0x8c;
  iVar4 = (int)*(char *)(iVar2 + 0x68);
  *(uint32_t *)(iVar2 + 0x6c) = rhd->tsflo;
  iVar2 = iVar4 * 0xc + iVar2;
  *(undefined *)(iVar2 + 0x10) = 1;
  *(undefined *)(iVar2 + 8) = *(undefined *)((int)&rhd->recvec1c + 3);
  *(char *)(iVar2 + 9) = (char)((int)(rhd->recvec1d << 0x14) >> 0x1c);
  if ((rhd->recvec1b & 0x70000) == 0) {
    if ((rhd->recvec1a >> 0xc & 0xf) < 4) {
      uVar5 = FUN_00010122((int)*(char *)((int)&rhd->recvec2a + 3));
      uVar5 = FUN_00010136(uRam00000000,_DAT_00000004,uVar5);
      uVar6 = _L0(uVar5);
      *(undefined8 *)(iVar4 * 0xc + uVar1 * 0x8c + 0xc) = uVar6;
      uVar3 = 0;
      if (iVar4 != 7) {
        uVar3 = (undefined)((uint)((iVar4 + 1) * 0x1000000) >> 0x18);
      }
      *(undefined *)(uVar1 * 0x8c + 0x68) = uVar3;
      return;
    }
  }
  uVar5 = FUN_00010198(-(int)*(short *)((int)&rhd->recvec2a + 3));
  uVar5 = FUN_000101ac(uRam00000000,_DAT_00000004,uVar5);
  uVar5 = FUN_000101c0(uRam00000000,_DAT_00000004,uVar5);
  _L0(uVar5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010122(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined uVar1;
  int unaff_s2;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00010122();
  uVar2 = FUN_00010136(uRam00000000,_DAT_00000004,uVar2);
  uVar3 = _L0(uVar2);
  *(undefined8 *)(unaff_s2 * 0xc + unaff_s0 * 0x8c + unaff_s1 + 0xc) = uVar3;
  uVar1 = 0;
  if (unaff_s2 != 7) {
    uVar1 = (undefined)((uint)((unaff_s2 + 1) * 0x1000000) >> 0x18);
  }
  *(undefined *)(unaff_s0 * 0x8c + unaff_s1 + 0x68) = uVar1;
  return;
}



void FUN_00010136(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined uVar1;
  int unaff_s2;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00010136();
  uVar3 = _L0(uVar2);
  *(undefined8 *)(unaff_s2 * 0xc + unaff_s0 * 0x8c + unaff_s1 + 0xc) = uVar3;
  uVar1 = 0;
  if (unaff_s2 != 7) {
    uVar1 = (undefined)((uint)((unaff_s2 + 1) * 0x1000000) >> 0x18);
  }
  *(undefined *)(unaff_s0 * 0x8c + unaff_s1 + 0x68) = uVar1;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined uVar1;
  int unaff_s2;
  undefined8 uVar2;
  
  uVar2 = _L0();
  *(undefined8 *)(unaff_s2 * 0xc + unaff_s0 * 0x8c + unaff_s1 + 0xc) = uVar2;
  uVar1 = 0;
  if (unaff_s2 != 7) {
    uVar1 = (undefined)((uint)((unaff_s2 + 1) * 0x1000000) >> 0x18);
  }
  *(undefined *)(unaff_s0 * 0x8c + unaff_s1 + 0x68) = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010198(void)

{
  FUN_00010198();
  FUN_000101ac(uRam00000000,_DAT_00000004);
  FUN_000101c0(uRam00000000,_DAT_00000004);
  _L0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000101ac(void)

{
  FUN_000101ac();
  FUN_000101c0(uRam00000000,_DAT_00000004);
  _L0();
  return;
}



void FUN_000101c0(void)

{
  FUN_000101c0();
  _L0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pa_adapt(uint8_t id)

{
  bool bVar1;
  int iVar2;
  undefined3 in_register_00002029;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_a1;
  undefined4 extraout_a1_00;
  undefined4 extraout_a1_01;
  undefined4 extraout_a1_02;
  float fVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 extraout_fa0;
  undefined4 uVar17;
  undefined4 extraout_fa0_00;
  undefined4 extraout_fa0_01;
  undefined4 extraout_fa0_02;
  undefined4 extraout_fa0_03;
  undefined4 extraout_fa0_04;
  undefined4 extraout_fa0_05;
  
  uVar3 = CONCAT31(in_register_00002029,id);
  if (3 < uVar3) {
    return;
  }
  fVar7 = (float)((int)fRam00000000 + 1);
  iVar10 = uVar3 * 0x8c;
  iVar16 = (int)*(char *)(iVar10 + 0x68);
  if (iVar16 == 0) {
    pcVar9 = (char *)(iVar10 + 0x5c);
  }
  else {
    pcVar9 = (char *)(iVar10 + 8 + (iVar16 + -1) * 0xc);
  }
  fRam00000000 = fVar7;
  if (pcVar9[8] != '\0') {
    iVar10 = uVar3 * 0x8c;
    iVar14 = (int)*pcVar9;
    if (*(char *)(iVar10 + 0x73) == '\0') {
      if (*(uint *)(iVar10 + 0x78) < 7) {
        *(uint *)(iVar10 + 0x78) = *(uint *)(iVar10 + 0x78) + 1;
      }
      else {
        *(undefined *)(iVar10 + 0x73) = 1;
        iVar12 = 1;
        iVar13 = 100;
        iVar2 = -100;
        iVar11 = 0;
        do {
          iVar8 = (int)*(char *)(((iVar16 - iVar12) % 8) * 0xc + iVar10 + 8);
          iVar11 = iVar11 + iVar8;
          if (iVar2 < iVar8) {
            iVar2 = iVar8;
          }
          if (iVar8 < iVar13) {
            iVar13 = iVar8;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != 7);
        *(char *)(uVar3 * 0x8c + 0x70) = (char)(((iVar11 - iVar2) - iVar13) / 4);
      }
    }
    else {
      if (*(byte *)(iVar10 + 0x74) < 5) {
        if (iVar14 + 100U < 0x65) {
          iVar16 = iVar14 - *(char *)(iVar10 + 0x70);
          if (iVar16 + 10U < 0x15) {
            *(undefined *)(iVar10 + 0x74) = 0;
            *(char *)(iVar10 + 0x70) = (char)(iVar16 >> 2) + *(char *)(iVar10 + 0x70);
          }
          else {
            *(byte *)(iVar10 + 0x74) = *(byte *)(iVar10 + 0x74) + 1;
          }
        }
      }
      else {
        *(undefined *)(iVar10 + 0x74) = 0;
        *(undefined *)(iVar10 + 0x73) = 0;
        *(undefined4 *)(iVar10 + 0x78) = 0;
      }
    }
    if (((uint)fVar7 & 0xf) == 0xf) {
      if ((iVar14 - *(char *)(uVar3 * 0x8c + 0x70)) + 10U < 0x15) {
        fVar7 = (float)*(undefined8 *)(pcVar9 + 4);
        if (fVar7 < 0.0) {
          bVar1 = fVar7 < fRam00000000;
        }
        else {
          bVar1 = fRam00000000 < fVar7;
        }
        if (bVar1) {
          uVar4 = _L0(fVar7);
          if (iVar14 < -0x55) {
            uVar5 = FUN_000102ae(*(undefined4 *)(uVar3 * 0x8c + 0x80));
            uVar15 = extraout_a1_00;
            uVar17 = extraout_fa0;
          }
          else {
            uVar5 = FUN_00010480(*(undefined4 *)(uVar3 * 0x8c + 0x80));
            uVar15 = extraout_a1_02;
            uVar17 = extraout_fa0_05;
          }
          uVar4 = FUN_000102ca(uVar4,extraout_a1,fRam00000000,_DAT_00000004,uVar17);
          uVar4 = FUN_000102da(uVar5,uVar15,uVar4,extraout_a1_01,extraout_fa0_00);
          uVar4 = FUN_000102e2(uVar4);
          *(undefined4 *)(uVar3 * 0x8c + 0x80) = uVar4;
        }
      }
      fVar7 = *(float *)(uVar3 * 0x8c + 0x80);
      if (fVar7 < 0.0) {
        bVar1 = fRam00000000 < fVar7;
      }
      else {
        bVar1 = fVar7 < fRam00000000;
      }
      if (!bVar1) {
        if ((0.0 < *(float *)(uVar3 * 0x8c + 0x80)) && (iVar10 = _L0(), iVar10 != 0)) {
          iVar10 = _L0(extraout_fa0_01);
          FUN_00010346(iVar10 + -1,extraout_fa0_02);
        }
        if ((*(float *)(uVar3 * 0x8c + 0x80) < 0.0) && (uVar6 = _L0(), uVar6 < 0x3f)) {
          iVar10 = _L0(extraout_fa0_03);
          FUN_00010380(iVar10 + 1,extraout_fa0_04);
        }
        *(undefined4 *)(uVar3 * 0x8c + 0x80) = 0;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  bool bVar1;
  float fVar2;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_a1;
  undefined4 extraout_a1_00;
  undefined4 extraout_a1_01;
  undefined4 extraout_a1_02;
  int unaff_s2;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_fa0;
  undefined4 uVar8;
  undefined4 extraout_fa0_00;
  undefined4 extraout_fa0_01;
  undefined4 extraout_fa0_02;
  undefined4 extraout_fa0_03;
  undefined4 extraout_fa0_04;
  undefined4 extraout_fa0_05;
  
  uVar3 = _L0();
  if (unaff_s2 < -0x55) {
    iVar6 = unaff_s1 * 0x8c + unaff_s0;
    uVar4 = FUN_000102ae(*(undefined4 *)(iVar6 + 0x80));
    uVar7 = extraout_a1_00;
    uVar8 = extraout_fa0;
  }
  else {
    iVar6 = unaff_s1 * 0x8c + unaff_s0;
    uVar4 = FUN_00010480(*(undefined4 *)(iVar6 + 0x80));
    uVar7 = extraout_a1_02;
    uVar8 = extraout_fa0_05;
  }
  uVar3 = FUN_000102ca(uVar3,extraout_a1,fRam00000000,_DAT_00000004,uVar8);
  uVar3 = FUN_000102da(uVar4,uVar7,uVar3,extraout_a1_01,extraout_fa0_00);
  uVar3 = FUN_000102e2(uVar3);
  *(undefined4 *)(iVar6 + 0x80) = uVar3;
  fVar2 = *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80);
  if (fVar2 < 0.0) {
    bVar1 = fRam00000000 < fVar2;
  }
  else {
    bVar1 = fVar2 < fRam00000000;
  }
  if (!bVar1) {
    if ((0.0 < *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80)) &&
       (iVar6 = _L0(uVar3), uVar3 = extraout_fa0_01, iVar6 != 0)) {
      iVar6 = _L0(extraout_fa0_01);
      uVar3 = FUN_00010346(iVar6 + -1,extraout_fa0_02);
    }
    if ((*(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80) < 0.0) && (uVar5 = _L0(uVar3), uVar5 < 0x3f))
    {
      iVar6 = _L0(extraout_fa0_03);
      FUN_00010380(iVar6 + 1,extraout_fa0_04);
    }
    *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000102ae(void)

{
  bool bVar1;
  float fVar2;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_a1;
  undefined4 extraout_a1_00;
  int unaff_s2;
  
  uVar3 = FUN_000102ae();
  uVar4 = FUN_000102ca(fRam00000000,_DAT_00000004);
  FUN_000102da(uVar3,extraout_a1,uVar4,extraout_a1_00);
  uVar3 = FUN_000102e2();
  *(undefined4 *)(unaff_s2 + 0x80) = uVar3;
  fVar2 = *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80);
  if (fVar2 < 0.0) {
    bVar1 = fRam00000000 < fVar2;
  }
  else {
    bVar1 = fVar2 < fRam00000000;
  }
  if (!bVar1) {
    if ((0.0 < *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80)) && (iVar5 = _L0(), iVar5 != 0)) {
      iVar5 = _L0();
      FUN_00010346(iVar5 + -1);
    }
    if ((*(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80) < 0.0) && (uVar6 = _L0(), uVar6 < 0x3f)) {
      iVar5 = _L0();
      FUN_00010380(iVar5 + 1);
    }
    *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  }
  return;
}



void FUN_000102ca(void)

{
  bool bVar1;
  float fVar2;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_a1;
  int unaff_s2;
  
  uVar3 = FUN_000102ca();
  FUN_000102da(uVar3,extraout_a1);
  uVar3 = FUN_000102e2();
  *(undefined4 *)(unaff_s2 + 0x80) = uVar3;
  fVar2 = *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80);
  if (fVar2 < 0.0) {
    bVar1 = fRam00000000 < fVar2;
  }
  else {
    bVar1 = fVar2 < fRam00000000;
  }
  if (!bVar1) {
    if ((0.0 < *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80)) && (iVar4 = _L0(), iVar4 != 0)) {
      iVar4 = _L0();
      FUN_00010346(iVar4 + -1);
    }
    if ((*(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80) < 0.0) && (uVar5 = _L0(), uVar5 < 0x3f)) {
      iVar4 = _L0();
      FUN_00010380(iVar4 + 1);
    }
    *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  }
  return;
}



void FUN_000102da(void)

{
  bool bVar1;
  float fVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  int unaff_s2;
  undefined4 uVar5;
  
  FUN_000102da();
  uVar5 = FUN_000102e2();
  *(undefined4 *)(unaff_s2 + 0x80) = uVar5;
  fVar2 = *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80);
  if (fVar2 < 0.0) {
    bVar1 = fRam00000000 < fVar2;
  }
  else {
    bVar1 = fVar2 < fRam00000000;
  }
  if (!bVar1) {
    if ((0.0 < *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80)) && (iVar3 = _L0(), iVar3 != 0)) {
      iVar3 = _L0();
      FUN_00010346(iVar3 + -1);
    }
    if ((*(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80) < 0.0) && (uVar4 = _L0(), uVar4 < 0x3f)) {
      iVar3 = _L0();
      FUN_00010380(iVar3 + 1);
    }
    *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  }
  return;
}



void FUN_000102e2(void)

{
  bool bVar1;
  float fVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  int unaff_s2;
  undefined4 uVar5;
  
  uVar5 = FUN_000102e2();
  *(undefined4 *)(unaff_s2 + 0x80) = uVar5;
  fVar2 = *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80);
  if (fVar2 < 0.0) {
    bVar1 = fRam00000000 < fVar2;
  }
  else {
    bVar1 = fVar2 < fRam00000000;
  }
  if (!bVar1) {
    if ((0.0 < *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80)) && (iVar3 = _L0(), iVar3 != 0)) {
      iVar3 = _L0();
      FUN_00010346(iVar3 + -1);
    }
    if ((*(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80) < 0.0) && (uVar4 = _L0(), uVar4 < 0x3f)) {
      iVar3 = _L0();
      FUN_00010380(iVar3 + 1);
    }
    *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    iVar1 = _L0();
    FUN_00010346(iVar1 + -1);
  }
  if ((*(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80) < 0.0) && (uVar2 = _L0(), uVar2 < 0x3f)) {
    iVar1 = _L0();
    FUN_00010380(iVar1 + 1);
  }
  *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  
  iVar1 = _L0();
  FUN_00010346(iVar1 + -1);
  if ((*(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80) < 0.0) && (uVar2 = _L0(), uVar2 < 0x3f)) {
    iVar1 = _L0();
    FUN_00010380(iVar1 + 1);
  }
  *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  return;
}



void FUN_00010346(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  
  FUN_00010346();
  if ((*(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80) < 0.0) && (uVar1 = _L0(), uVar1 < 0x3f)) {
    iVar2 = _L0();
    FUN_00010380(iVar2 + 1);
  }
  *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  
  uVar1 = _L0();
  if (uVar1 < 0x3f) {
    iVar2 = _L0();
    FUN_00010380(iVar2 + 1);
  }
  *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  iVar1 = _L0();
  FUN_00010380(iVar1 + 1);
  *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  return;
}



void FUN_00010380(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00010380();
  *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010480(void)

{
  bool bVar1;
  float fVar2;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_a1;
  undefined4 extraout_a1_00;
  int unaff_s2;
  
  uVar6 = FUN_00010480();
  uVar3 = FUN_000102ca(fRam00000000,_DAT_00000004);
  FUN_000102da(uVar6,extraout_a1_00,uVar3,extraout_a1);
  uVar3 = FUN_000102e2();
  *(undefined4 *)(unaff_s2 + 0x80) = uVar3;
  fVar2 = *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80);
  if (fVar2 < 0.0) {
    bVar1 = fRam00000000 < fVar2;
  }
  else {
    bVar1 = fVar2 < fRam00000000;
  }
  if (!bVar1) {
    if ((0.0 < *(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80)) && (iVar4 = _L0(), iVar4 != 0)) {
      iVar4 = _L0();
      FUN_00010346(iVar4 + -1);
    }
    if ((*(float *)(unaff_s1 * 0x8c + unaff_s0 + 0x80) < 0.0) && (uVar5 = _L0(), uVar5 < 0x3f)) {
      iVar4 = _L0();
      FUN_00010380(iVar4 + 1);
    }
    *(undefined4 *)(unaff_s0 + unaff_s1 * 0x8c + 0x80) = 0;
  }
  return;
}


