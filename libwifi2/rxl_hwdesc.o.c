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

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

struct phy_channel_info { // DWARF DIE: c1b
    uint32_t info1;
    uint32_t info2;
};

typedef ushort __uint16_t;

typedef long __int32_t;

typedef uchar __uint8_t;

typedef char __int8_t;

typedef int _ssize_t;

typedef union anon_union.conflictd8 anon_union.conflictd8, *Panon_union.conflictd8;

typedef uint wint_t;

union anon_union.conflictd8 { // DWARF DIE: d8
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictd8_for___value anon_union.conflictd8_for___value, *Panon_union.conflictd8_for___value;

union anon_union.conflictd8_for___value { // DWARF DIE: d8
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 10a
    int __count;
    union anon_union.conflictd8_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: c43
    uint32_t word[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef __uint16_t uint16_t;

struct mac_addr { // DWARF DIE: a44
    uint16_t array[3];
};

typedef enum anon_enum_8.conflict9cc {
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
} anon_enum_8.conflict9cc;

typedef struct dma_desc dma_desc, *Pdma_desc;

struct dma_desc { // DWARF DIE: b41
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: b95
    struct dma_desc * last_dma[4];
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef __uint8_t uint8_t;

typedef struct rx_hd rx_hd, *Prx_hd;

struct co_list_hdr { // DWARF DIE: bd2
    struct co_list_hdr * next;
};

struct rx_swdesc { // DWARF DIE: ef6
    struct co_list_hdr list_hdr;
    struct rx_dmadesc * dma_hdrdesc;
    struct rx_payloaddesc * pd;
    struct rx_pbd * last_pbd;
    struct rx_pbd * spare_pbd;
    uint32_t host_id;
    uint32_t frame_len;
    uint8_t status;
    uint8_t pbd_count;
    uint8_t use_in_tcpip;
    undefined field_0x1f;
};

struct rx_pbd { // DWARF DIE: f8b
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_payloaddesc { // DWARF DIE: 105e
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_hd { // DWARF DIE: deb
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

struct rx_dmadesc { // DWARF DIE: fee
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct rxl_hwdesc_env_tag rxl_hwdesc_env_tag, *Prxl_hwdesc_env_tag;

struct rxl_hwdesc_env_tag { // DWARF DIE: 1229
    struct rx_pbd * last;
    struct rx_pbd * free;
};

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef __int8_t int8_t;

struct tx_cfm_tag { // DWARF DIE: 10bb
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

typedef union anon_union.conflictcfd anon_union.conflictcfd, *Panon_union.conflictcfd;

union anon_union.conflictcfd { // DWARF DIE: cfd
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflictcd8 anon_union.conflictcd8, *Panon_union.conflictcd8;

union anon_union.conflictcd8 { // DWARF DIE: cd8
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflictcb3 anon_union.conflictcb3, *Panon_union.conflictcb3;

union anon_union.conflictcb3 { // DWARF DIE: cb3
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef union anon_union.conflictcb3_for_field_3 anon_union.conflictcb3_for_field_3, *Panon_union.conflictcb3_for_field_3;

typedef union anon_union.conflictcd8_for_field_4 anon_union.conflictcd8_for_field_4, *Panon_union.conflictcd8_for_field_4;

typedef union anon_union.conflictcfd_for_field_5 anon_union.conflictcfd_for_field_5, *Panon_union.conflictcfd_for_field_5;

union anon_union.conflictcb3_for_field_3 { // DWARF DIE: cb3
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflictcd8_for_field_4 { // DWARF DIE: cd8
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflictcfd_for_field_5 { // DWARF DIE: cfd
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: d22
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictcb3_for_field_3 field_3;
    union anon_union.conflictcd8_for_field_4 field_4;
    union anon_union.conflictcfd_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 112a
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: c7b
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct rxl_cntrl_env_tag rxl_cntrl_env_tag, *Prxl_cntrl_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: bf3
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct rxl_cntrl_env_tag { // DWARF DIE: 128b
    struct co_list ready;
    struct rx_dmadesc * first;
    struct rx_dmadesc * last;
    struct rx_dmadesc * free;
    uint32_t packet_stack_cnt;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

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

struct __tm { // DWARF DIE: 1d0
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

struct _rand48 { // DWARF DIE: 6dd
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict726 { // DWARF DIE: 726
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

struct anon_struct.conflict86b { // DWARF DIE: 86b
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _Bigint { // DWARF DIE: 160
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 698
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 308
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 336
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

struct _on_exit_args { // DWARF DIE: 253
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2a8
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

union anon_union.conflict8b2_for__new { // DWARF DIE: 8b2
    struct anon_struct.conflict726 _reent;
    struct anon_struct.conflict86b _unused;
};

struct _reent { // DWARF DIE: 4a2
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

struct __locale_t { // DWARF DIE: 8e7
};

typedef union anon_union.conflict8b2 anon_union.conflict8b2, *Panon_union.conflict8b2;

union anon_union.conflict8b2 { // DWARF DIE: 8b2
    struct anon_struct.conflict726 _reent;
    struct anon_struct.conflict86b _unused;
};

typedef __int32_t int32_t;

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




// DWARF DIE: 15f9

void rxl_hwdesc_dump(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  _L0();
  FUN_0001002e();
  iVar2 = 0;
  puVar1 = (undefined4 *)0x0;
  do {
    FUN_0001005c(iVar2,puVar1,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    iVar2 += 1;
    _L0(puVar1[4],puVar1[5],puVar1[6],(uint)*(ushort *)(puVar1 + 7),
        (uint)*(ushort *)((int)puVar1 + 0x1e));
    FUN_000100a8(puVar1[8],puVar1[9],puVar1[0xb],puVar1[0xc],puVar1[0xd],puVar1[0xe],puVar1[0xf]);
    puVar1 = puVar1 + 0x19;
  } while (iVar2 != 0xd);
  FUN_000100c2();
  puVar1 = (undefined4 *)0x0;
  iVar2 = 0;
  do {
    iVar4 = 0;
    if (puVar1[3] != 0) {
      iVar4 = (puVar1[3] + 1) - puVar1[2];
    }
    iVar3 = iVar2 + 1;
    FUN_0001010a(iVar2,puVar1,iVar4,*puVar1,puVar1[1]);
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar3;
  } while (iVar3 != 0xd);
  return;
}



void _L0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack00000004;
  
  _L0();
  FUN_0001002e();
  iVar2 = 0;
  puVar1 = (undefined4 *)0x0;
  do {
    FUN_0001005c(iVar2,puVar1,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    iVar2 += 1;
    _L0(puVar1[4],puVar1[5],puVar1[6],(uint)*(ushort *)(puVar1 + 7),
        (uint)*(ushort *)((int)puVar1 + 0x1e));
    FUN_000100a8(puVar1[8],puVar1[9],puVar1[0xb],puVar1[0xc],puVar1[0xd],puVar1[0xe],puVar1[0xf]);
    puVar1 = puVar1 + 0x19;
  } while (iVar2 != 0xd);
  FUN_000100c2();
  puVar1 = (undefined4 *)0x0;
  iVar2 = 0;
  do {
    iVar4 = 0;
    if (puVar1[3] != 0) {
      iVar4 = (puVar1[3] + 1) - puVar1[2];
    }
    uStack00000004 = (uint)*(ushort *)((int)puVar1 + 0x12);
    iVar3 = iVar2 + 1;
    FUN_0001010a(iVar2,puVar1,iVar4,*puVar1,puVar1[1]);
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar3;
  } while (iVar3 != 0xd);
  return;
}



void FUN_0001002e(void)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack00000004;
  
  FUN_0001002e();
  iVar2 = 0;
  do {
    FUN_0001005c(iVar2,unaff_s0,*unaff_s0,unaff_s0[1],unaff_s0[2],unaff_s0[3]);
    iVar2 += 1;
    _L0(unaff_s0[4],unaff_s0[5],unaff_s0[6],(uint)*(ushort *)(unaff_s0 + 7),
        (uint)*(ushort *)((int)unaff_s0 + 0x1e));
    FUN_000100a8(unaff_s0[8],unaff_s0[9],unaff_s0[0xb],unaff_s0[0xc],unaff_s0[0xd],unaff_s0[0xe],
                 unaff_s0[0xf]);
    unaff_s0 = unaff_s0 + 0x19;
  } while (iVar2 != 0xd);
  FUN_000100c2();
  puVar1 = (undefined4 *)0x0;
  iVar2 = 0;
  do {
    iVar4 = 0;
    if (puVar1[3] != 0) {
      iVar4 = (puVar1[3] + 1) - puVar1[2];
    }
    uStack00000004 = (uint)*(ushort *)((int)puVar1 + 0x12);
    iVar3 = iVar2 + 1;
    FUN_0001010a(iVar2,puVar1,iVar4,*puVar1,puVar1[1]);
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar3;
  } while (iVar3 != 0xd);
  return;
}



void FUN_0001005c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  int unaff_s1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_s2;
  uint uStack00000004;
  
  while( true ) {
    FUN_0001005c(param_1,param_2,param_3,param_4,param_5,param_6);
    unaff_s1 += 1;
    _L0(unaff_s0[4],unaff_s0[5],unaff_s0[6],(uint)*(ushort *)(unaff_s0 + 7),
        (uint)*(ushort *)((int)unaff_s0 + 0x1e));
    param_2 = unaff_s0 + 0x19;
    FUN_000100a8(unaff_s0[8],unaff_s0[9],unaff_s0[0xb],unaff_s0[0xc],unaff_s0[0xd],unaff_s0[0xe],
                 unaff_s0[0xf]);
    if (unaff_s1 == unaff_s2) break;
    param_6 = unaff_s0[0x1c];
    param_5 = unaff_s0[0x1b];
    param_4 = unaff_s0[0x1a];
    param_3 = *param_2;
    unaff_s0 = param_2;
    param_1 = unaff_s1;
  }
  FUN_000100c2();
  puVar1 = (undefined4 *)0x0;
  iVar2 = 0;
  do {
    iVar4 = 0;
    if (puVar1[3] != 0) {
      iVar4 = (puVar1[3] + 1) - puVar1[2];
    }
    uStack00000004 = (uint)*(ushort *)((int)puVar1 + 0x12);
    iVar3 = iVar2 + 1;
    FUN_0001010a(iVar2,puVar1,iVar4,*puVar1,puVar1[1]);
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar3;
  } while (iVar3 != 0xd);
  return;
}



void _L0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  int unaff_s1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_s2;
  uint uStack00000004;
  
  while( true ) {
    _L0(param_1,param_2,param_3,param_4,param_5);
    puVar1 = unaff_s0 + 0x19;
    FUN_000100a8(unaff_s0[8],unaff_s0[9],unaff_s0[0xb],unaff_s0[0xc],unaff_s0[0xd],unaff_s0[0xe],
                 unaff_s0[0xf]);
    if (unaff_s1 == unaff_s2) break;
    FUN_0001005c(unaff_s1,puVar1,*puVar1,unaff_s0[0x1a],unaff_s0[0x1b],unaff_s0[0x1c]);
    param_5 = (uint)*(ushort *)((int)unaff_s0 + 0x82);
    param_4 = (uint)*(ushort *)(unaff_s0 + 0x20);
    param_3 = unaff_s0[0x1f];
    param_2 = unaff_s0[0x1e];
    param_1 = unaff_s0[0x1d];
    unaff_s1 += 1;
    unaff_s0 = puVar1;
  }
  FUN_000100c2();
  puVar1 = (undefined4 *)0x0;
  iVar2 = 0;
  do {
    iVar4 = 0;
    if (puVar1[3] != 0) {
      iVar4 = (puVar1[3] + 1) - puVar1[2];
    }
    uStack00000004 = (uint)*(ushort *)((int)puVar1 + 0x12);
    iVar3 = iVar2 + 1;
    FUN_0001010a(iVar2,puVar1,iVar4,*puVar1,puVar1[1]);
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar3;
  } while (iVar3 != 0xd);
  return;
}



void FUN_000100a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  int unaff_s1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_s2;
  uint uStack00000004;
  
  for (; FUN_000100a8(param_1,param_2,param_3,param_4,param_5,param_6,param_7), unaff_s1 != unaff_s2
      ; unaff_s1 += 1) {
    FUN_0001005c(unaff_s1,unaff_s0,*unaff_s0,unaff_s0[1],unaff_s0[2],unaff_s0[3]);
    _L0(unaff_s0[4],unaff_s0[5],unaff_s0[6],(uint)*(ushort *)(unaff_s0 + 7),
        (uint)*(ushort *)((int)unaff_s0 + 0x1e));
    param_7 = unaff_s0[0xf];
    param_6 = unaff_s0[0xe];
    param_5 = unaff_s0[0xd];
    param_4 = unaff_s0[0xc];
    param_3 = unaff_s0[0xb];
    param_2 = unaff_s0[9];
    param_1 = unaff_s0[8];
    unaff_s0 = unaff_s0 + 0x19;
  }
  FUN_000100c2();
  puVar1 = (undefined4 *)0x0;
  iVar2 = 0;
  do {
    iVar4 = 0;
    if (puVar1[3] != 0) {
      iVar4 = (puVar1[3] + 1) - puVar1[2];
    }
    uStack00000004 = (uint)*(ushort *)((int)puVar1 + 0x12);
    iVar3 = iVar2 + 1;
    FUN_0001010a(iVar2,puVar1,iVar4,*puVar1,puVar1[1]);
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar3;
  } while (iVar3 != 0xd);
  return;
}



void FUN_000100c2(void)

{
  undefined4 *unaff_s0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uStack00000000;
  uint uStack00000004;
  
  FUN_000100c2();
  iVar1 = 0;
  do {
    iVar3 = 0;
    if (unaff_s0[3] != 0) {
      iVar3 = (unaff_s0[3] + 1) - unaff_s0[2];
    }
    uStack00000004 = (uint)*(ushort *)((int)unaff_s0 + 0x12);
    uStack00000000 = (uint)*(ushort *)(unaff_s0 + 4);
    iVar2 = iVar1 + 1;
    FUN_0001010a(iVar1,unaff_s0,iVar3,*unaff_s0,unaff_s0[1]);
    unaff_s0 = unaff_s0 + 0xd;
    iVar1 = iVar2;
  } while (iVar2 != 0xd);
  return;
}



void FUN_0001010a(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  
  while (iVar2 = unaff_s1, puVar1 = unaff_s0, FUN_0001010a(param_1,param_2,param_3,param_4,param_5),
        iVar2 != unaff_s2) {
    param_3 = 0;
    if (puVar1[3] != 0) {
      param_3 = (puVar1[3] + 1) - puVar1[2];
    }
    param_5 = puVar1[1];
    param_4 = *puVar1;
    unaff_s0 = puVar1 + 0xd;
    param_1 = iVar2;
    param_2 = puVar1;
    unaff_s1 = iVar2 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1437

void rxl_hwdesc_init(int init)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  _L0(_DAT_00000010);
  puVar9 = (undefined4 *)0x0;
  iVar4 = 0;
  iVar5 = 0;
  puVar1 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)0x0;
  do {
    puVar2 = puVar7;
    puVar7 = puVar2 + 0x19;
    puVar8 = puVar6;
    if ((init == 0) && (puVar2[0x18] == 1)) {
      puVar2 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0;
      }
    }
    else {
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = puVar2;
      }
      puVar2[4] = 0;
      puVar2[5] = 0;
      *puVar2 = 0xbaadf00d;
      puVar2[0x10] = 0;
      puVar2[6] = 0;
      puVar2[1] = puVar7;
      puVar2[2] = 0;
      puVar2[3] = iVar5 * 0x20;
      *(undefined2 *)(puVar2 + 7) = 0;
      puVar8 = puVar2;
      if ((iVar4 != 0) && (puVar8 = puVar6, iVar4 == 1)) {
        puVar9 = puVar2;
      }
      iVar4 += 1;
    }
    iVar5 += 1;
    puVar1 = puVar2;
    puVar6 = puVar8;
  } while (iVar5 != 0xd);
  if (iVar4 < 4) {
    FUN_00010192(_DAT_00000010);
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
  }
  _DAT_44b08180 = 0x4000000;
  iVar5 = 0;
  puVar6 = (undefined4 *)0x0;
  iVar4 = 0;
  puVar1 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  puVar10 = (undefined4 *)0x0;
  _DAT_44b081b8 = puVar9;
  do {
    puVar3 = puVar7;
    puVar7 = puVar3 + 0xd;
    puVar11 = puVar10;
    if ((init == 0) && (puVar3[5] == 1)) {
      puVar3 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0;
      }
    }
    else {
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = puVar3;
      }
      puVar3[1] = puVar7;
      *puVar3 = 0xc0dedbad;
      *(undefined2 *)(puVar3 + 4) = 0;
      puVar3[2] = iVar5;
      puVar3[3] = iVar5 + 0x34f;
      puVar3[6] = iVar5;
      puVar11 = puVar3;
      if ((iVar4 != 0) && (puVar11 = puVar10, iVar4 == 1)) {
        puVar6 = puVar3;
      }
      iVar4 += 1;
    }
    iVar5 += 0x350;
    puVar1 = puVar3;
    puVar10 = puVar11;
  } while (puVar7 != (undefined4 *)0x2a4);
  if (iVar4 < 4) {
    _L0(_DAT_00000010);
  }
  puVar3[1] = 0;
  _DAT_44b08180 = 0x8000000;
  if ((((puVar8 == (undefined4 *)0x0) || (puVar9 == (undefined4 *)0x0)) ||
      (puVar2 == (undefined4 *)0x0)) ||
     ((puVar11 == (undefined4 *)0x0 || (puVar6 == (undefined4 *)0x0)))) {
    _DAT_44b081bc = puVar6;
    FUN_00010248(_DAT_00000010);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 uRam00000010)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int unaff_s3;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  _L0(uRam00000010);
  puVar9 = (undefined4 *)0x0;
  iVar4 = 0;
  iVar5 = 0;
  puVar1 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)0x0;
  do {
    puVar2 = puVar7;
    puVar7 = puVar2 + 0x19;
    puVar8 = puVar6;
    if ((unaff_s3 == 0) && (puVar2[0x18] == 1)) {
      puVar2 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0;
      }
    }
    else {
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = puVar2;
      }
      puVar2[4] = 0;
      puVar2[5] = 0;
      *puVar2 = 0xbaadf00d;
      puVar2[0x10] = 0;
      puVar2[6] = 0;
      puVar2[1] = puVar7;
      puVar2[2] = 0;
      puVar2[3] = iVar5 * 0x20;
      *(undefined2 *)(puVar2 + 7) = 0;
      puVar8 = puVar2;
      if ((iVar4 != 0) && (puVar8 = puVar6, iVar4 == 1)) {
        puVar9 = puVar2;
      }
      iVar4 += 1;
    }
    iVar5 += 1;
    puVar1 = puVar2;
    puVar6 = puVar8;
  } while (iVar5 != 0xd);
  if (iVar4 < 4) {
    FUN_00010192(uRam00000010);
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
  }
  _DAT_44b08180 = 0x4000000;
  iVar5 = 0;
  puVar6 = (undefined4 *)0x0;
  iVar4 = 0;
  puVar1 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  puVar10 = (undefined4 *)0x0;
  _DAT_44b081b8 = puVar9;
  do {
    puVar3 = puVar7;
    puVar7 = puVar3 + 0xd;
    puVar11 = puVar10;
    if ((unaff_s3 == 0) && (puVar3[5] == 1)) {
      puVar3 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0;
      }
    }
    else {
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = puVar3;
      }
      puVar3[1] = puVar7;
      *puVar3 = 0xc0dedbad;
      *(undefined2 *)(puVar3 + 4) = 0;
      puVar3[2] = iVar5;
      puVar3[3] = iVar5 + 0x34f;
      puVar3[6] = iVar5;
      puVar11 = puVar3;
      if ((iVar4 != 0) && (puVar11 = puVar10, iVar4 == 1)) {
        puVar6 = puVar3;
      }
      iVar4 += 1;
    }
    iVar5 += 0x350;
    puVar1 = puVar3;
    puVar10 = puVar11;
  } while (puVar7 != (undefined4 *)0x2a4);
  if (iVar4 < 4) {
    _L0(uRam00000010);
  }
  puVar3[1] = 0;
  _DAT_44b08180 = 0x8000000;
  if ((((puVar8 == (undefined4 *)0x0) || (puVar9 == (undefined4 *)0x0)) ||
      (puVar2 == (undefined4 *)0x0)) ||
     ((puVar11 == (undefined4 *)0x0 || (puVar6 == (undefined4 *)0x0)))) {
    _DAT_44b081bc = puVar6;
    FUN_00010248(uRam00000010);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010192(undefined4 uRam00000010)

{
  int unaff_s0;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  FUN_00010192(uRam00000010);
  if (unaff_s0 != 0) {
    *(undefined4 *)(unaff_s0 + 4) = 0;
  }
  _DAT_44b08180 = 0x4000000;
  iVar5 = 0;
  puVar6 = (undefined4 *)0x0;
  iVar4 = 0;
  puVar1 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  do {
    puVar2 = puVar3;
    puVar3 = puVar2 + 0xd;
    puVar8 = puVar7;
    if ((unaff_s3 == 0) && (puVar2[5] == 1)) {
      puVar2 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0;
      }
    }
    else {
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = puVar2;
      }
      puVar2[1] = puVar3;
      *puVar2 = 0xc0dedbad;
      *(undefined2 *)(puVar2 + 4) = 0;
      puVar2[2] = iVar5;
      puVar2[3] = iVar5 + 0x34f;
      puVar2[6] = iVar5;
      puVar8 = puVar2;
      if ((iVar4 != 0) && (puVar8 = puVar7, iVar4 == 1)) {
        puVar6 = puVar2;
      }
      iVar4 += 1;
    }
    iVar5 += 0x350;
    puVar1 = puVar2;
    puVar7 = puVar8;
  } while (puVar3 != (undefined4 *)0x2a4);
  if (iVar4 < 4) {
    _L0(uRam00000010);
  }
  puVar2[1] = 0;
  _DAT_44b08180 = 0x8000000;
  if ((((unaff_s2 == 0) || (unaff_s4 == 0)) || (unaff_s0 == 0)) ||
     ((puVar8 == (undefined4 *)0x0 || (puVar6 == (undefined4 *)0x0)))) {
    _DAT_44b081bc = puVar6;
    FUN_00010248(uRam00000010);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 uRam00000010)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int in_stack_0000000c;
  
  _L0(uRam00000010);
  *(undefined4 *)(unaff_s1 + 4) = 0;
  _DAT_44b081bc = in_stack_0000000c;
  _DAT_44b08180 = 0x8000000;
  if ((((unaff_s2 == 0) || (unaff_s4 == 0)) || (unaff_s0 == 0)) ||
     ((unaff_s5 == 0 || (in_stack_0000000c == 0)))) {
    FUN_00010248(uRam00000010);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010248(undefined4 uRam00000010)

{
  FUN_00010248(uRam00000010);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 13af

void rxl_hd_append(rx_dmadesc *desc)

{
  rx_dmadesc *prVar1;
  
  if (desc == (rx_dmadesc *)0x0) {
    FUN_0001030c((int)_DAT_00000010);
  }
  prVar1 = desc;
  if (_DAT_00000010 != _DAT_44b08548) {
    prVar1 = _DAT_00000010;
    _DAT_00000010 = desc;
  }
  (prVar1->hd).next = 0;
  (prVar1->hd).first_pbd_ptr = 0;
  (prVar1->hd).statinfo = 0;
  (prVar1->hd).frmlen = 0;
  *(rx_dmadesc **)((int)_DAT_0000000c + 4) = prVar1;
  if (_DAT_00000008 == (rx_dmadesc *)0x0) {
    _DAT_00000008 = prVar1;
  }
  _DAT_0000000c = prVar1;
  _DAT_44b08180 = 0x1000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001030c(int iRam00000010)

{
  int unaff_s0;
  int iVar1;
  
  FUN_0001030c(iRam00000010);
  iVar1 = unaff_s0;
  if (iRam00000010 != _DAT_44b08548) {
    iVar1 = iRam00000010;
    iRam00000010 = unaff_s0;
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined2 *)(iVar1 + 0x1c) = 0;
  *(int *)(_DAT_0000000c + 4) = iVar1;
  if (_DAT_00000008 == 0) {
    _DAT_00000008 = iVar1;
  }
  _DAT_0000000c = iVar1;
  _DAT_44b08180 = 0x1000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 12f4

void rxl_pd_append(rx_pbd *first,rx_pbd *last,rx_pbd *spare)

{
  rx_pbd **pprVar1;
  rx_pbd *prVar2;
  rx_pbd *prVar3;
  rx_pbd *prVar4;
  
  if (spare == (rx_pbd *)0x0) {
    FUN_00010388();
  }
  prVar4 = _DAT_00000004;
  if (_DAT_00000004 == _DAT_44b0854c) {
    prVar4 = first;
    if (last == (rx_pbd *)0x0) {
      prVar4 = spare;
    }
    spare->bufstatinfo = 0;
  }
  else {
    prVar2 = _DAT_00000004;
    prVar3 = spare;
    if (last != (rx_pbd *)0x0) {
      pprVar1 = (rx_pbd **)&_DAT_00000004->next;
      _DAT_00000004 = spare;
      *pprVar1 = first;
      prVar2 = last;
      prVar3 = _DAT_00000004;
    }
    _DAT_00000004 = prVar3;
    spare = prVar2;
    prVar4->bufstatinfo = 0;
  }
  spare->next = 0;
  *(rx_pbd **)((int)prRam00000000 + 4) = prVar4;
  prRam00000000 = spare;
  _DAT_44b08180 = 0x2000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010388(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_s0;
  int unaff_s1;
  int iVar4;
  int unaff_s2;
  
  FUN_00010388();
  iVar4 = _DAT_00000004;
  if (_DAT_00000004 == _DAT_44b0854c) {
    iVar4 = unaff_s2;
    if (unaff_s1 == 0) {
      iVar4 = unaff_s0;
    }
    *(undefined2 *)(unaff_s0 + 0x10) = 0;
  }
  else {
    iVar2 = _DAT_00000004;
    iVar3 = unaff_s0;
    if (unaff_s1 != 0) {
      piVar1 = (int *)(_DAT_00000004 + 4);
      _DAT_00000004 = unaff_s0;
      *piVar1 = unaff_s2;
      iVar2 = unaff_s1;
      iVar3 = _DAT_00000004;
    }
    _DAT_00000004 = iVar3;
    unaff_s0 = iVar2;
    *(undefined2 *)(iVar4 + 0x10) = 0;
  }
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(int *)(iRam00000000 + 4) = iVar4;
  iRam00000000 = unaff_s0;
  _DAT_44b08180 = 0x2000000;
  return;
}


