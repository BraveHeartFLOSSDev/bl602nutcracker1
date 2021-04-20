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
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct ipc_shared_env_tag ipc_shared_env_tag, *Pipc_shared_env_tag;

typedef struct ipc_a2e_msg ipc_a2e_msg, *Pipc_a2e_msg;

typedef ulong uint32_t;

typedef struct txdesc_host txdesc_host, *Ptxdesc_host;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef ushort uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar uint8_t;

struct ipc_a2e_msg {
    uint32_t dummy_word;
    uint32_t msg[127];
};

struct mac_addr {
    uint16_t array[3];
};

struct hostdesc {
    uint32_t pbuf_addr;
    uint32_t packet_addr;
    uint16_t packet_len;
    undefined field_0xa;
    undefined field_0xb;
    uint32_t status_addr;
    struct mac_addr eth_dest_addr;
    struct mac_addr eth_src_addr;
    uint16_t ethertype;
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    uint8_t tid;
    uint8_t vif_idx;
    uint8_t staid;
    undefined field_0x2d;
    uint16_t flags;
    uint32_t pbuf_chained_ptr[4];
    uint32_t pbuf_chained_len[4];
};

struct txdesc_host {
    uint32_t ready;
    struct hostdesc host;
    uint32_t pad_txdesc[55];
    uint32_t pad_buf[128];
};

struct ipc_shared_env_tag {
    struct ipc_a2e_msg msg_a2e_buf;
    uint32_t pattern_addr;
    struct txdesc_host txdesc0[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict129_for___value anon_union.conflict129_for___value, *Panon_union.conflict129_for___value;

typedef uint wint_t;

union anon_union.conflict129_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflict129_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflict129 anon_union.conflict129, *Panon_union.conflict129;

union anon_union.conflict129 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format {
    uint32_t word[4];
};

typedef struct txdesc txdesc, *Ptxdesc;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef struct umacdesc umacdesc, *Pumacdesc;

typedef struct lmacdesc lmacdesc, *Plmacdesc;

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct tx_agg_desc tx_agg_desc, *Ptx_agg_desc;

typedef struct txl_buffer_tag txl_buffer_tag, *Ptxl_buffer_tag;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef char int8_t;

typedef union anon_union.conflictcbb_for_field_3 anon_union.conflictcbb_for_field_3, *Panon_union.conflictcbb_for_field_3;

typedef union anon_union.conflictce0_for_field_4 anon_union.conflictce0_for_field_4, *Panon_union.conflictce0_for_field_4;

typedef union anon_union.conflictd05_for_field_5 anon_union.conflictd05_for_field_5, *Panon_union.conflictd05_for_field_5;

struct co_list_hdr {
    struct co_list_hdr * next;
};

union anon_union.conflictcbb_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_cfm_tag {
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

union anon_union.conflictd05_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflictce0_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictcbb_for_field_3 field_3;
    union anon_union.conflictce0_for_field_4 field_4;
    union anon_union.conflictd05_for_field_5 field_5;
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

struct lmacdesc {
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct umacdesc {
    struct txl_buffer_control * buf_control;
    uint32_t buff_offset;
    uint16_t payl_len;
    uint8_t head_len;
    uint8_t hdr_len_802_2;
    uint8_t tail_len;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

struct txdesc {
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct txl_buffer_tag {
};

struct txl_buffer_control {
};

struct tx_agg_desc {
    uint8_t reserved;
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

typedef long int32_t;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct co_list co_list, *Pco_list;

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free {
};

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
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

typedef enum anon_enum_8.conflict9d4 {
    HAL_MM_TIMER=7,
    KE_EVT_RXUREADY=12,
    KE_EVT_IPC_EMB_MSG=6,
    KE_EVT_RXREADY=13,
    KE_EVT_KE_TIMER=5,
    RFC_BBMODE_WLAN=0,
    IPC_DMA_CHANNEL_MAX=4,
    HAL_AC2_TIMER=2,
    RFC_BBMODE_BLE=1,
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
} anon_enum_8.conflict9d4;

typedef struct bl_env_tag bl_env_tag, *Pbl_env_tag;

struct bl_env_tag {
    uint8_t prev_hw_state;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    int hw_in_doze;
};

typedef union anon_union.conflictcbb anon_union.conflictcbb, *Panon_union.conflictcbb;

union anon_union.conflictcbb {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
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

typedef union anon_union.conflictce0 anon_union.conflictce0, *Panon_union.conflictce0;

union anon_union.conflictce0 {
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

typedef union anon_union.conflictd05 anon_union.conflictd05, *Panon_union.conflictd05;

union anon_union.conflictd05 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct ipc_emb_env_tag ipc_emb_env_tag, *Pipc_emb_env_tag;

struct ipc_emb_env_tag {
    struct co_list rx_queue;
    struct co_list cfm_queue;
    uint8_t ipc_rxdesc_idx;
    uint8_t ipc_rxbuf_idx;
    uint8_t ipc_radar_buf_idx;
    uint8_t ipc_msge2a_buf_idx;
    uint8_t ipc_dbg_buf_idx;
    uint8_t ipc_msgacke2a_cnt;
    undefined field_0x16;
    undefined field_0x17;
    uint32_t txdesc_idx;
    struct txdesc_host * txdesc;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8ef_for__new anon_union.conflict8ef_for__new, *Panon_union.conflict8ef_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict763 anon_struct.conflict763, *Panon_struct.conflict763;

typedef struct anon_struct.conflict8a8 anon_struct.conflict8a8, *Panon_struct.conflict8a8;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint {
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue {
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct anon_struct.conflict8a8 {
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

struct anon_struct.conflict763 {
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

union anon_union.conflict8ef_for__new {
    struct anon_struct.conflict763 _reent;
    struct anon_struct.conflict8a8 _unused;
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
    union anon_union.conflict8ef_for__new _new;
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

typedef union anon_union.conflict8ef anon_union.conflict8ef, *Panon_union.conflict8ef;

union anon_union.conflict8ef {
    struct anon_struct.conflict763 _reent;
    struct anon_struct.conflict8a8 _unused;
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




void assert_rec(char *condition,char *file,int line)

{
  if ((uRam00000000 & 0xff) != 1) {
    return;
  }
  if ((int)uRam00000000 < 0) {
    return;
  }
  _L0();
  FUN_0001002e(0x80000000);
  return;
}



void _L0(void)

{
  _L0();
  FUN_0001002e(0x80000000);
  return;
}



void FUN_0001002e(void)

{
  FUN_0001002e();
  return;
}



void assert_err(char *condition,char *file,int line)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void assert_warn(char *condition,char *file,int line)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void force_trigger(char *msg)

{
  _DAT_44900070 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void coex_dump_pta(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void coex_dump_wifi(void)

{
  return;
}



void coex_wifi_rf_forece_enable(int enable)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void coex_wifi_pti_forece_enable(int enable)

{
  if (enable == 0) {
    _DAT_44b00400 = _DAT_44b00400 & 0xffffffef;
  }
  else {
    _DAT_44b00400 = _DAT_44b00400 | 0xf0000010;
  }
  if ((int)(_DAT_44b00400 << 4) < 0) {
    _DAT_44b00400 = _DAT_44b00400 & 0xfbffffff;
  }
  else {
    _DAT_44b00400 = _DAT_44b00400 & 0xfbffffff | 0x4000000;
  }
  return;
}



void coex_wifi_pta_forece_enable(int enable)

{
  uint uVar1;
  
  if (iRam00000000 != enable) {
    if (iRam00000000 == 0) {
      _L0();
    }
    else {
      if (iRam00000000 == 1) {
        iRam00000000 = _L0();
        uVar1 = _L0();
        if (1000 < uVar1) {
          _L0();
          FUN_00010184(uVar1 / 1000);
          _L0();
        }
      }
    }
    iRam00000000 = enable;
    iRam00000000 = _L0();
  }
  return;
}



void _L0(void)

{
  int *unaff_s0;
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 unaff_s2;
  
  iVar1 = _L0();
  iRam00000000 = (iRam00000000 - *unaff_s0) + iVar1;
  *unaff_s1 = unaff_s2;
  iVar1 = _L0();
  *unaff_s0 = iVar1;
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  undefined4 uVar1;
  
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  return;
}



void _L0(void)

{
  int *unaff_s0;
  undefined4 *unaff_s1;
  int iVar1;
  uint uVar2;
  undefined4 unaff_s2;
  
  iVar1 = _L0();
  iRam00000000 = (iRam00000000 - *unaff_s0) + iVar1;
  uVar2 = _L0();
  if (1000 < uVar2) {
    _L0();
    FUN_00010184(uVar2 / 1000);
    _L0();
  }
  *unaff_s1 = unaff_s2;
  iVar1 = _L0();
  *unaff_s0 = iVar1;
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  uint uVar2;
  undefined4 unaff_s2;
  
  uVar2 = _L0();
  if (1000 < uVar2) {
    _L0();
    FUN_00010184(uVar2 / 1000);
    _L0();
  }
  *unaff_s1 = unaff_s2;
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  undefined4 unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  
  _L0();
  FUN_00010184(unaff_s4 / unaff_s3);
  _L0();
  *unaff_s1 = unaff_s2;
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  return;
}



void FUN_00010184(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  undefined4 unaff_s2;
  
  FUN_00010184();
  _L0();
  *unaff_s1 = unaff_s2;
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  undefined4 unaff_s2;
  
  _L0();
  *unaff_s1 = unaff_s2;
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wifi_main(void *param)

{
  int iVar1;
  uint uVar2;
  
  _L0(40000000);
  _DAT_44b00400 = _DAT_44b00400 | 1;
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _DAT_44b00404 = 0x24f037;
  _DAT_44b00400 = 0x49;
  _DAT_44920004 = 0x5010001f;
  while( true ) {
    if (_DAT_44b00120 << 0xc < 0) {
      _DAT_44900084 = _DAT_44900084 | 1;
    }
    else {
      _DAT_44900084 = _DAT_44900084 & 0xfffffffe;
    }
    if (uRam00000000 == 0) {
      _L0();
    }
    if ((uRam00000000 & 0xf) == 0) {
      uVar2 = _DAT_40007018 >> 0x18 & 7;
      if (uVar2 != 0) {
        if (uVar2 != 3) {
          _DAT_40000014 = _DAT_40000014 | 0x40000;
        }
        if ((uVar2 != 0) && (uVar2 != 3)) {
          _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
          _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
        }
      }
      if ((_DAT_40007018 >> 0x18 & 4) != 0) {
        _DAT_40000014 = _DAT_40000014 | 0x5c2000;
        _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
      }
    }
    uRam00000000 = uRam00000000 + 1;
    _L0();
    iVar1 = _L0();
    if (iVar1 == 0) break;
    _L0(0);
  }
  _L0(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  uint uVar2;
  
  _L0();
  *(uint *)(unaff_s0 + 0x400) = *(uint *)(unaff_s0 + 0x400) | 1;
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  *(undefined4 *)(unaff_s0 + 0x404) = 0x24f037;
  *(undefined4 *)(unaff_s0 + 0x400) = 1;
  *(undefined4 *)(unaff_s0 + 0x400) = 0;
  *(undefined4 *)(unaff_s0 + 0x400) = 0x69;
  *(uint *)(unaff_s0 + 0x400) = *(uint *)(unaff_s0 + 0x400) & 0xffffffdf;
  _DAT_44920004 = 0x5010001f;
  while( true ) {
    if (_DAT_44b00120 << 0xc < 0) {
      _DAT_44900084 = _DAT_44900084 | 1;
    }
    else {
      _DAT_44900084 = _DAT_44900084 & 0xfffffffe;
    }
    if (uRam00000000 == 0) {
      _L0();
    }
    if ((uRam00000000 & 0xf) == 0) {
      uVar2 = _DAT_40007018 >> 0x18 & 7;
      if (uVar2 != 0) {
        if (uVar2 != 3) {
          _DAT_40000014 = _DAT_40000014 | 0x40000;
        }
        if ((uVar2 != 0) && (uVar2 != 3)) {
          _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
          _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
        }
      }
      if ((_DAT_40007018 >> 0x18 & 4) != 0) {
        _DAT_40000014 = _DAT_40000014 | 0x5c2000;
        _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
      }
    }
    uRam00000000 = uRam00000000 + 1;
    _L0();
    iVar1 = _L0();
    if (iVar1 == 0) break;
    _L0(0);
  }
  _L0(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  uint uVar2;
  int unaff_s2;
  int *unaff_s3;
  
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  *(undefined4 *)(unaff_s0 + 0x404) = 0x24f037;
  *(undefined4 *)(unaff_s0 + 0x400) = 1;
  *(undefined4 *)(unaff_s0 + 0x400) = 0;
  *(undefined4 *)(unaff_s0 + 0x400) = 0x69;
  *(uint *)(unaff_s0 + 0x400) = *(uint *)(unaff_s0 + 0x400) & 0xffffffdf;
  _DAT_44920004 = 0x5010001f;
  while( true ) {
    if (*(int *)(unaff_s2 + 0x120) << 0xc < 0) {
      _DAT_44900084 = _DAT_44900084 | 1;
    }
    else {
      _DAT_44900084 = _DAT_44900084 & 0xfffffffe;
    }
    if (*unaff_s3 == 0) {
      _L0();
    }
    if ((uRam00000000 & 0xf) == 0) {
      uVar2 = _DAT_40007018 >> 0x18 & 7;
      if (uVar2 != 0) {
        if (uVar2 != 3) {
          _DAT_40000014 = _DAT_40000014 | 0x40000;
        }
        if ((uVar2 != 0) && (uVar2 != 3)) {
          _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
          _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
        }
      }
      if ((_DAT_40007018 >> 0x18 & 4) != 0) {
        _DAT_40000014 = _DAT_40000014 | 0x5c2000;
        _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
      }
    }
    uRam00000000 = uRam00000000 + 1;
    _L0();
    iVar1 = _L0();
    if (iVar1 == 0) break;
    _L0(0);
  }
  _L0(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  uint uVar2;
  int unaff_s2;
  int *unaff_s3;
  
  _L0();
  _L0();
  _L0();
  _L0();
  *(undefined4 *)(unaff_s0 + 0x404) = 0x24f037;
  *(undefined4 *)(unaff_s0 + 0x400) = 1;
  *(undefined4 *)(unaff_s0 + 0x400) = 0;
  *(undefined4 *)(unaff_s0 + 0x400) = 0x69;
  *(uint *)(unaff_s0 + 0x400) = *(uint *)(unaff_s0 + 0x400) & 0xffffffdf;
  _DAT_44920004 = 0x5010001f;
  while( true ) {
    if (*(int *)(unaff_s2 + 0x120) << 0xc < 0) {
      _DAT_44900084 = _DAT_44900084 | 1;
    }
    else {
      _DAT_44900084 = _DAT_44900084 & 0xfffffffe;
    }
    if (*unaff_s3 == 0) {
      _L0();
    }
    if ((uRam00000000 & 0xf) == 0) {
      uVar2 = _DAT_40007018 >> 0x18 & 7;
      if (uVar2 != 0) {
        if (uVar2 != 3) {
          _DAT_40000014 = _DAT_40000014 | 0x40000;
        }
        if ((uVar2 != 0) && (uVar2 != 3)) {
          _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
          _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
        }
      }
      if ((_DAT_40007018 >> 0x18 & 4) != 0) {
        _DAT_40000014 = _DAT_40000014 | 0x5c2000;
        _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
      }
    }
    uRam00000000 = uRam00000000 + 1;
    _L0();
    iVar1 = _L0();
    if (iVar1 == 0) break;
    _L0(0);
  }
  _L0(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  uint uVar2;
  int unaff_s2;
  int *unaff_s3;
  
  _L0();
  _L0();
  _L0();
  *(undefined4 *)(unaff_s0 + 0x404) = 0x24f037;
  *(undefined4 *)(unaff_s0 + 0x400) = 1;
  *(undefined4 *)(unaff_s0 + 0x400) = 0;
  *(undefined4 *)(unaff_s0 + 0x400) = 0x69;
  *(uint *)(unaff_s0 + 0x400) = *(uint *)(unaff_s0 + 0x400) & 0xffffffdf;
  _DAT_44920004 = 0x5010001f;
  while( true ) {
    if (*(int *)(unaff_s2 + 0x120) << 0xc < 0) {
      _DAT_44900084 = _DAT_44900084 | 1;
    }
    else {
      _DAT_44900084 = _DAT_44900084 & 0xfffffffe;
    }
    if (*unaff_s3 == 0) {
      _L0();
    }
    if ((uRam00000000 & 0xf) == 0) {
      uVar2 = _DAT_40007018 >> 0x18 & 7;
      if (uVar2 != 0) {
        if (uVar2 != 3) {
          _DAT_40000014 = _DAT_40000014 | 0x40000;
        }
        if ((uVar2 != 0) && (uVar2 != 3)) {
          _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
          _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
        }
      }
      if ((_DAT_40007018 >> 0x18 & 4) != 0) {
        _DAT_40000014 = _DAT_40000014 | 0x5c2000;
        _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
      }
    }
    uRam00000000 = uRam00000000 + 1;
    _L0();
    iVar1 = _L0();
    if (iVar1 == 0) break;
    _L0(0);
  }
  _L0(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  uint uVar2;
  int unaff_s2;
  int *unaff_s3;
  
  _L0();
  _L0();
  *(undefined4 *)(unaff_s0 + 0x404) = 0x24f037;
  *(undefined4 *)(unaff_s0 + 0x400) = 1;
  *(undefined4 *)(unaff_s0 + 0x400) = 0;
  *(undefined4 *)(unaff_s0 + 0x400) = 0x69;
  *(uint *)(unaff_s0 + 0x400) = *(uint *)(unaff_s0 + 0x400) & 0xffffffdf;
  _DAT_44920004 = 0x5010001f;
  while( true ) {
    if (*(int *)(unaff_s2 + 0x120) << 0xc < 0) {
      _DAT_44900084 = _DAT_44900084 | 1;
    }
    else {
      _DAT_44900084 = _DAT_44900084 & 0xfffffffe;
    }
    if (*unaff_s3 == 0) {
      _L0();
    }
    if ((uRam00000000 & 0xf) == 0) {
      uVar2 = _DAT_40007018 >> 0x18 & 7;
      if (uVar2 != 0) {
        if (uVar2 != 3) {
          _DAT_40000014 = _DAT_40000014 | 0x40000;
        }
        if ((uVar2 != 0) && (uVar2 != 3)) {
          _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
          _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
        }
      }
      if ((_DAT_40007018 >> 0x18 & 4) != 0) {
        _DAT_40000014 = _DAT_40000014 | 0x5c2000;
        _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
      }
    }
    uRam00000000 = uRam00000000 + 1;
    _L0();
    iVar1 = _L0();
    if (iVar1 == 0) break;
    _L0(0);
  }
  _L0(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  uint uVar2;
  int unaff_s2;
  int *unaff_s3;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x404) = 0x24f037;
  *(undefined4 *)(unaff_s0 + 0x400) = 1;
  *(undefined4 *)(unaff_s0 + 0x400) = 0;
  *(undefined4 *)(unaff_s0 + 0x400) = 0x69;
  *(uint *)(unaff_s0 + 0x400) = *(uint *)(unaff_s0 + 0x400) & 0xffffffdf;
  _DAT_44920004 = 0x5010001f;
  while( true ) {
    if (*(int *)(unaff_s2 + 0x120) << 0xc < 0) {
      _DAT_44900084 = _DAT_44900084 | 1;
    }
    else {
      _DAT_44900084 = _DAT_44900084 & 0xfffffffe;
    }
    if (*unaff_s3 == 0) {
      _L0();
    }
    if ((uRam00000000 & 0xf) == 0) {
      uVar2 = _DAT_40007018 >> 0x18 & 7;
      if (uVar2 != 0) {
        if (uVar2 != 3) {
          _DAT_40000014 = _DAT_40000014 | 0x40000;
        }
        if ((uVar2 != 0) && (uVar2 != 3)) {
          _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
          _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
        }
      }
      if ((_DAT_40007018 >> 0x18 & 4) != 0) {
        _DAT_40000014 = _DAT_40000014 | 0x5c2000;
        _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
      }
    }
    uRam00000000 = uRam00000000 + 1;
    _L0();
    iVar1 = _L0();
    if (iVar1 == 0) break;
    _L0(0);
  }
  _L0(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  int *unaff_s3;
  uint *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  
  do {
    _L0();
    do {
      uVar2 = *unaff_s4;
      *unaff_s4 = uVar2 + 1;
      if ((uVar2 & 0xf) == 0) {
        uVar3 = *(uint *)(unaff_s5 + 0x18) >> 0x18;
        uVar2 = uVar3 & 7;
        if (uVar2 != 0) {
          if (uVar2 != 3) {
            *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | 0x40000;
          }
          if ((uVar2 != 0) && (uVar2 != 3)) {
            _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
            _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
          }
        }
        if ((uVar3 & 4) != 0) {
          *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | unaff_s6;
          _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
        }
      }
      _L0();
      iVar1 = _L0();
      if (iVar1 == 0) {
        _L0(1);
        return;
      }
      _L0(0);
      if (*(int *)(unaff_s2 + 0x120) << 0xc < 0) {
        uVar2 = *(uint *)(unaff_s0 + 0x84) | 1;
      }
      else {
        uVar2 = *(uint *)(unaff_s0 + 0x84) & 0xfffffffe;
      }
      *(uint *)(unaff_s0 + 0x84) = uVar2;
    } while (*unaff_s3 != 0);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  int *unaff_s3;
  uint *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  
  while( true ) {
    _L0();
    iVar1 = _L0();
    if (iVar1 == 0) break;
    _L0(0);
    if (*(int *)(unaff_s2 + 0x120) << 0xc < 0) {
      uVar2 = *(uint *)(unaff_s0 + 0x84) | 1;
    }
    else {
      uVar2 = *(uint *)(unaff_s0 + 0x84) & 0xfffffffe;
    }
    *(uint *)(unaff_s0 + 0x84) = uVar2;
    if (*unaff_s3 == 0) {
      _L0();
    }
    uVar2 = *unaff_s4;
    *unaff_s4 = uVar2 + 1;
    if ((uVar2 & 0xf) == 0) {
      uVar3 = *(uint *)(unaff_s5 + 0x18) >> 0x18;
      uVar2 = uVar3 & 7;
      if (uVar2 != 0) {
        if (uVar2 != 3) {
          *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | 0x40000;
        }
        if ((uVar2 != 0) && (uVar2 != 3)) {
          _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
          _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
        }
      }
      if ((uVar3 & 4) != 0) {
        *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | unaff_s6;
        _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
      }
    }
  }
  _L0(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  int *unaff_s3;
  uint *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  
  while (iVar1 = _L0(), iVar1 != 0) {
    _L0(0);
    if (*(int *)(unaff_s2 + 0x120) << 0xc < 0) {
      uVar2 = *(uint *)(unaff_s0 + 0x84) | 1;
    }
    else {
      uVar2 = *(uint *)(unaff_s0 + 0x84) & 0xfffffffe;
    }
    *(uint *)(unaff_s0 + 0x84) = uVar2;
    if (*unaff_s3 == 0) {
      _L0();
    }
    uVar2 = *unaff_s4;
    *unaff_s4 = uVar2 + 1;
    if ((uVar2 & 0xf) == 0) {
      uVar3 = *(uint *)(unaff_s5 + 0x18) >> 0x18;
      uVar2 = uVar3 & 7;
      if (uVar2 != 0) {
        if (uVar2 != 3) {
          *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | 0x40000;
        }
        if ((uVar2 != 0) && (uVar2 != 3)) {
          _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
          _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
        }
      }
      if ((uVar3 & 4) != 0) {
        *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | unaff_s6;
        _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
      }
    }
    _L0();
  }
  _L0(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  int *unaff_s3;
  uint *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  
  while( true ) {
    _L0(param_1);
    if (*(int *)(unaff_s2 + 0x120) << 0xc < 0) {
      uVar2 = *(uint *)(unaff_s0 + 0x84) | 1;
    }
    else {
      uVar2 = *(uint *)(unaff_s0 + 0x84) & 0xfffffffe;
    }
    *(uint *)(unaff_s0 + 0x84) = uVar2;
    if (*unaff_s3 == 0) {
      _L0();
    }
    uVar2 = *unaff_s4;
    *unaff_s4 = uVar2 + 1;
    if ((uVar2 & 0xf) == 0) {
      uVar3 = *(uint *)(unaff_s5 + 0x18) >> 0x18;
      uVar2 = uVar3 & 7;
      if (uVar2 != 0) {
        if (uVar2 != 3) {
          *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | 0x40000;
        }
        if ((uVar2 != 0) && (uVar2 != 3)) {
          _DAT_40002040 = _DAT_40002040 & 0xfffffffc;
          _DAT_40002044 = _DAT_40002044 & 0xfffffffe;
        }
      }
      if ((uVar3 & 4) != 0) {
        *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | unaff_s6;
        _DAT_4000f90c = _DAT_4000f90c & 0xfffffffe | 4;
      }
    }
    _L0();
    iVar1 = _L0();
    if (iVar1 == 0) break;
    param_1 = 0;
  }
  _L0(1);
  return;
}


