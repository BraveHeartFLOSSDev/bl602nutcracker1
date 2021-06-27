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

typedef struct ipc_a2e_msg ipc_a2e_msg, *Pipc_a2e_msg;

typedef ulong uint32_t;

struct ipc_a2e_msg { // DWARF DIE: 146d
    uint32_t dummy_word;
    uint32_t msg[127];
};

typedef struct ipc_shared_env_tag ipc_shared_env_tag, *Pipc_shared_env_tag;

typedef struct txdesc_host txdesc_host, *Ptxdesc_host;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef ushort uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar uint8_t;

struct mac_addr { // DWARF DIE: 972
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 11d8
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

struct txdesc_host { // DWARF DIE: 13e1
    uint32_t ready;
    struct hostdesc host;
    uint32_t pad_txdesc[55];
    uint32_t pad_buf[128];
};

struct ipc_shared_env_tag { // DWARF DIE: 14ab
    struct ipc_a2e_msg msg_a2e_buf;
    uint32_t pattern_addr;
    struct txdesc_host txdesc0[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte0_for___value anon_union.conflicte0_for___value, *Panon_union.conflicte0_for___value;

typedef uint wint_t;

union anon_union.conflicte0_for___value { // DWARF DIE: e0
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 112
    int __count;
    union anon_union.conflicte0_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflicte0 anon_union.conflicte0, *Panon_union.conflicte0;

union anon_union.conflicte0 { // DWARF DIE: e0
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: b86
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

typedef union anon_union.conflictcbf_for_field_3 anon_union.conflictcbf_for_field_3, *Panon_union.conflictcbf_for_field_3;

typedef union anon_union.conflictce4_for_field_4 anon_union.conflictce4_for_field_4, *Panon_union.conflictce4_for_field_4;

typedef union anon_union.conflictd09_for_field_5 anon_union.conflictd09_for_field_5, *Panon_union.conflictd09_for_field_5;

struct co_list_hdr { // DWARF DIE: a32
    struct co_list_hdr * next;
};

union anon_union.conflictce4_for_field_4 { // DWARF DIE: ce4
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_cfm_tag { // DWARF DIE: 103d
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct umacdesc { // DWARF DIE: 12b4
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

union anon_union.conflictd09_for_field_5 { // DWARF DIE: d09
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflictcbf_for_field_3 { // DWARF DIE: cbf
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd { // DWARF DIE: d2e
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflictcbf_for_field_3 field_3;
    union anon_union.conflictce4_for_field_4 field_4;
    union anon_union.conflictd09_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 10bc
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct lmacdesc { // DWARF DIE: 131b
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct txdesc { // DWARF DIE: 1367
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct txl_buffer_tag { // DWARF DIE: 1356
};

struct txl_buffer_control { // DWARF DIE: 1310
};

struct tx_agg_desc { // DWARF DIE: 10ed
    uint8_t reserved;
};

typedef struct dma_desc dma_desc, *Pdma_desc;

struct dma_desc { // DWARF DIE: c2e
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: c82
    struct dma_desc * last_dma[4];
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: be6
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct co_list co_list, *Pco_list;

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 1565
};

struct co_list { // DWARF DIE: a58
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct ke_env_tag { // DWARF DIE: 1516
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_msg_id_t;

typedef struct ke_msg ke_msg, *Pke_msg;

typedef uint16_t ke_task_id_t;

struct ke_msg { // DWARF DIE: aa2
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t[0] param;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 8ef
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

struct rx_swdesc { // DWARF DIE: f02
};

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct phy_channel_info { // DWARF DIE: bbe
    uint32_t info1;
    uint32_t info2;
};

typedef enum anon_enum_8.conflictb11 {
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
} anon_enum_8.conflictb11;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

struct rx_pbd { // DWARF DIE: f0d
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

typedef struct rx_hd rx_hd, *Prx_hd;

struct rx_hd { // DWARF DIE: df7
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

typedef union anon_union.conflictd09 anon_union.conflictd09, *Panon_union.conflictd09;

union anon_union.conflictd09 { // DWARF DIE: d09
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflictce4 anon_union.conflictce4, *Panon_union.conflictce4;

union anon_union.conflictce4 { // DWARF DIE: ce4
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflictcbf anon_union.conflictcbf, *Panon_union.conflictcbf;

union anon_union.conflictcbf { // DWARF DIE: cbf
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

struct rx_payloaddesc { // DWARF DIE: fe0
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

struct rx_dmadesc { // DWARF DIE: f70
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct ipc_emb_env_tag ipc_emb_env_tag, *Pipc_emb_env_tag;

struct ipc_emb_env_tag { // DWARF DIE: 1633
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

typedef union anon_union.conflict8ba_for__new anon_union.conflict8ba_for__new, *Panon_union.conflict8ba_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict72e anon_struct.conflict72e, *Panon_struct.conflict72e;

typedef struct anon_struct.conflict873 anon_struct.conflict873, *Panon_struct.conflict873;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 168
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 6e5
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 6a0
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __tm { // DWARF DIE: 1d8
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

struct anon_struct.conflict72e { // DWARF DIE: 72e
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

struct anon_struct.conflict873 { // DWARF DIE: 873
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8ba_for__new { // DWARF DIE: 8ba
    struct anon_struct.conflict72e _reent;
    struct anon_struct.conflict873 _unused;
};

struct _on_exit_args { // DWARF DIE: 25b
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2b0
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 310
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 33e
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

struct _reent { // DWARF DIE: 4aa
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
    union anon_union.conflict8ba_for__new _new;
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

typedef union anon_union.conflict8ba anon_union.conflict8ba, *Panon_union.conflict8ba;

union anon_union.conflict8ba { // DWARF DIE: 8ba
    struct anon_struct.conflict72e _reent;
    struct anon_struct.conflict873 _unused;
};

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




// DWARF DIE: 18ab

void * ke_msg_alloc(ke_msg_id_t id,ke_task_id_t dest_id,ke_task_id_t src_id,uint16_t param_len)

{
  undefined4 *puVar1;
  
  puVar1 = _L0();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0001003a();
  }
  *(ke_msg_id_t *)(puVar1 + 1) = id;
  *(ke_task_id_t *)((int)puVar1 + 6) = dest_id;
  *(ke_task_id_t *)(puVar1 + 2) = src_id;
  *(uint16_t *)((int)puVar1 + 10) = param_len;
  *puVar1 = 0;
  FUN_0001005e();
  return puVar1 + 3;
}



undefined4 * _L0(void)

{
  undefined2 unaff_s1;
  undefined4 *puVar1;
  undefined2 unaff_s2;
  undefined2 unaff_s3;
  undefined2 unaff_s4;
  
  puVar1 = _L0();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0001003a();
  }
  *(undefined2 *)(puVar1 + 1) = unaff_s4;
  *(undefined2 *)((int)puVar1 + 6) = unaff_s3;
  *(undefined2 *)(puVar1 + 2) = unaff_s2;
  *(undefined2 *)((int)puVar1 + 10) = unaff_s1;
  *puVar1 = 0;
  FUN_0001005e();
  return puVar1 + 3;
}



undefined4 * FUN_0001003a(void)

{
  undefined4 *unaff_s0;
  undefined2 unaff_s1;
  undefined2 unaff_s2;
  undefined2 unaff_s3;
  undefined2 unaff_s4;
  
  FUN_0001003a();
  *(undefined2 *)(unaff_s0 + 1) = unaff_s4;
  *(undefined2 *)((int)unaff_s0 + 6) = unaff_s3;
  *(undefined2 *)(unaff_s0 + 2) = unaff_s2;
  *(undefined2 *)((int)unaff_s0 + 10) = unaff_s1;
  *unaff_s0 = 0;
  FUN_0001005e();
  return unaff_s0 + 3;
}



void FUN_0001005e(void)

{
  FUN_0001005e();
  return;
}



// DWARF DIE: 1a22

void ke_msg_send(void *param_ptr)

{
  if (*(byte *)((int)param_ptr + -6) < 0xf) {
    if (*(byte *)((int)param_ptr + -6) < 0xd) {
      FUN_000100da();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  else {
    FUN_000100a4();
  }
  FUN_000100b0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100a4(void)

{
  FUN_000100a4();
  FUN_000100b0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100b0(void)

{
  FUN_000100b0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100da(void)

{
  FUN_000100da();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 17f7

void ke_msg_send_basic(ke_msg_id_t id,ke_task_id_t dest_id,ke_task_id_t src_id)

{
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



// DWARF DIE: 178f

void ke_msg_forward(void *param_ptr,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  *(ke_task_id_t *)((int)param_ptr + -6) = dest_id;
  *(ke_task_id_t *)((int)param_ptr + -4) = src_id;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 1711

void ke_msg_forward_and_change_id
               (void *param_ptr,ke_msg_id_t msg_id,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  *(ke_msg_id_t *)((int)param_ptr + -8) = msg_id;
  *(ke_task_id_t *)((int)param_ptr + -6) = dest_id;
  *(ke_task_id_t *)((int)param_ptr + -4) = src_id;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 1b64

void ke_msg_free(ke_msg *msg)

{
  ke_msg_free(msg);
  return;
}


