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
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

typedef ulong uint32_t;

struct phy_channel_info { // DWARF DIE: edf
    uint32_t info1;
    uint32_t info2;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictdd_for___value anon_union.conflictdd_for___value, *Panon_union.conflictdd_for___value;

typedef uint wint_t;

union anon_union.conflictdd_for___value { // DWARF DIE: dd
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 10f
    int __count;
    union anon_union.conflictdd_for___value __value;
};

typedef union anon_union.conflictdd anon_union.conflictdd, *Panon_union.conflictdd;

union anon_union.conflictdd { // DWARF DIE: dd
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 196d
    uint32_t word[4];
};

typedef struct anon_struct.conflicta96 anon_struct.conflicta96, *Panon_struct.conflicta96;

struct anon_struct.conflicta96 { // DWARF DIE: a96
    uint32_t key[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr { // DWARF DIE: 9e7
    uint16_t array[3];
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong uint64_t;

typedef union anon_union.conflictabf_for_u anon_union.conflictabf_for_u, *Panon_union.conflictabf_for_u;

typedef uchar uint8_t;

typedef struct anon_struct.conflicta5f anon_struct.conflicta5f, *Panon_struct.conflicta5f;

struct anon_struct.conflicta5f { // DWARF DIE: a5f
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

union anon_union.conflictabf_for_u { // DWARF DIE: abf
    struct anon_struct.conflicta5f mic;
    struct anon_struct.conflicta96 mfp;
};

struct key_info_tag { // DWARF DIE: ae4
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictabf_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef enum anon_enum_8.conflict96f {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_VI=2,
    AC_VO=3,
    BROADCAST_STA_IDX_MAX=11,
    BROADCAST_STA_IDX_MIN=10,
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
    INVALID_STA_IDX=-1,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_DATA_RX=1,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_MAX=4,
    STA_MAX=12,
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
    TASK_TDLS=3,
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
} anon_enum_8.conflict96f;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

struct mac_rateset { // DWARF DIE: a17
    uint8_t length;
    uint8_t array[12];
};

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

struct mac_htcapability { // DWARF DIE: b6a
    uint16_t ht_capa_info;
    uint8_t a_mpdu_param;
    uint8_t mcs_rate[16];
    undefined field_0x13;
    uint16_t ht_extended_capa;
    undefined field_0x16;
    undefined field_0x17;
    uint32_t tx_beamforming_capa;
    uint8_t asel_capa;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: bdd
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef union anon_union.conflictabf anon_union.conflictabf, *Panon_union.conflictabf;

union anon_union.conflictabf { // DWARF DIE: abf
    struct anon_struct.conflicta5f mic;
    struct anon_struct.conflicta96 mfp;
};

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: c32
    struct mac_rateset rate_set;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    struct mac_htcapability ht_cap;
    struct mac_vhtcapability vht_cap;
    uint32_t capa_flags;
    uint8_t phy_bw_max;
    uint8_t bw_cur;
    uint8_t uapsd_queues;
    uint8_t max_sp_len;
    uint8_t stbc_nss;
    undefined field_0x45;
    undefined field_0x46;
    undefined field_0x47;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

typedef uint16_t ke_msg_id_t;

typedef uint16_t ke_task_id_t;

struct ke_msg_handler { // DWARF DIE: e80
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: eac
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct dma_desc dma_desc, *Pdma_desc;

struct dma_desc { // DWARF DIE: 18dc
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 1930
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: d18
    struct co_list_hdr * next;
};

struct co_list { // DWARF DIE: d39
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag { // DWARF DIE: fa4
    struct co_list prog;
};

typedef char int8_t;

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

struct rx_swdesc { // DWARF DIE: fcb
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

struct rx_pbd { // DWARF DIE: 111d
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_payloaddesc { // DWARF DIE: 10d0
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_hd { // DWARF DIE: 1b15
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

struct rx_dmadesc { // DWARF DIE: 105a
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef union anon_union.conflict1a02 anon_union.conflict1a02, *Panon_union.conflict1a02;

union anon_union.conflict1a02 { // DWARF DIE: 1a02
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

struct tx_cfm_tag { // DWARF DIE: 1c3c
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef union anon_union.conflict19dd_for_field_3 anon_union.conflict19dd_for_field_3, *Panon_union.conflict19dd_for_field_3;

typedef union anon_union.conflict1a02_for_field_4 anon_union.conflict1a02_for_field_4, *Panon_union.conflict1a02_for_field_4;

typedef union anon_union.conflict1a27_for_field_5 anon_union.conflict1a27_for_field_5, *Panon_union.conflict1a27_for_field_5;

union anon_union.conflict1a02_for_field_4 { // DWARF DIE: 1a02
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict19dd_for_field_3 { // DWARF DIE: 19dd
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflict1a27_for_field_5 { // DWARF DIE: 1a27
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: 1a4c
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict19dd_for_field_3 field_3;
    union anon_union.conflict1a02_for_field_4 field_4;
    union anon_union.conflict1a27_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1cab
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

typedef union anon_union.conflict1a27 anon_union.conflict1a27, *Panon_union.conflict1a27;

union anon_union.conflict1a27 { // DWARF DIE: 1a27
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict19dd anon_union.conflict19dd, *Panon_union.conflict19dd;

union anon_union.conflict19dd { // DWARF DIE: 19dd
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 19a5
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8b7_for__new anon_union.conflict8b7_for__new, *Panon_union.conflict8b7_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict72b anon_struct.conflict72b, *Panon_struct.conflict72b;

typedef struct anon_struct.conflict870 anon_struct.conflict870, *Panon_struct.conflict870;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 6e2
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 1d5
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

struct anon_struct.conflict72b { // DWARF DIE: 72b
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

struct anon_struct.conflict870 { // DWARF DIE: 870
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8b7_for__new { // DWARF DIE: 8b7
    struct anon_struct.conflict72b _reent;
    struct anon_struct.conflict870 _unused;
};

struct _Bigint { // DWARF DIE: 165
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 69d
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 258
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2ad
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 30d
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 33b
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

struct _reent { // DWARF DIE: 4a7
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
    union anon_union.conflict8b7_for__new _new;
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

struct __locale_t { // DWARF DIE: 8ec
};

typedef union anon_union.conflict8b7 anon_union.conflict8b7, *Panon_union.conflict8b7;

union anon_union.conflict8b7 { // DWARF DIE: 8b7
    struct anon_struct.conflict72b _reent;
    struct anon_struct.conflict870 _unused;
};

typedef uint16_t ke_state_t;

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 13f8
    uint (* idx_compute)(struct bam_baw *, uint);
    uint16_t fsn;
    uint8_t states[64];
    uint8_t fsn_idx;
    uint8_t buf_size;
    uint8_t mask;
    undefined field_0x49;
    undefined field_0x4a;
    undefined field_0x4b;
};

typedef struct bam_env_tag bam_env_tag, *Pbam_env_tag;

struct bam_env_tag { // DWARF DIE: 146b
    uint32_t pkt_cnt;
    uint32_t last_activity_time;
    uint16_t ssn;
    uint16_t ba_timeout;
    uint8_t sta_idx;
    uint8_t dev_type;
    uint8_t ba_policy;
    uint8_t buffer_size;
    uint8_t tid;
    uint8_t dialog_token;
    uint8_t amsdu;
    uint8_t delba_count;
    struct bam_baw baw;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 1630
    uint32_t last_tx_time;
    uint32_t last_ba_add_time;
    uint8_t bam_idx_rx;
    uint8_t bam_idx_tx;
    int8_t credit_oft;
    undefined field_0xb;
};

typedef struct sta_info_tag sta_info_tag, *Psta_info_tag;

typedef enum sta_ps_traffic {
    PS_TRAFFIC=3,
    PS_TRAFFIC_HOST=1,
    PS_TRAFFIC_INT=2,
    UAPSD_TRAFFIC=12,
    UAPSD_TRAFFIC_HOST=4,
    UAPSD_TRAFFIC_INT=8
} sta_ps_traffic;

typedef int sta_ps_sp_t;

typedef struct sta_mgmt_sec_info sta_mgmt_sec_info, *Psta_mgmt_sec_info;

typedef struct sta_pol_tbl_cntl sta_pol_tbl_cntl, *Psta_pol_tbl_cntl;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

struct rc_sta_stats { // DWARF DIE: 1625
};

struct sta_pol_tbl_cntl { // DWARF DIE: 15cb
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 1590
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 167f
    struct co_list_hdr list_hdr;
    uint32_t bcn_int;
    uint32_t ampdu_size_max_vht;
    uint16_t ampdu_size_max_ht;
    undefined field_0xe;
    undefined field_0xf;
    uint32_t paid_gid;
    uint8_t ampdu_spacing_min;
    undefined field_0x15;
    uint16_t drift;
    uint16_t aid;
    uint8_t inst_nbr;
    uint8_t staid;
    uint8_t ps_state;
    _Bool valid;
    struct mac_addr mac_addr;
    int8_t rssi;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    uint32_t tsflo;
    uint32_t tsfhi;
    uint8_t data_rate;
    uint8_t ctrl_port_state;
    enum sta_ps_traffic traffic_avail;
    undefined field_0x33;
    sta_ps_sp_t ps_service_period;
    uint16_t ctrl_port_ethertype;
    undefined field_0x3a;
    undefined field_0x3b;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    struct sta_mgmt_sec_info sta_sec_info;
    struct mac_sta_info info;
    uint16_t seq_nbr[9];
    undefined field_0x10a;
    undefined field_0x10b;
    struct sta_pol_tbl_cntl pol_tbl;
    struct sta_mgmt_ba_info ba_info[9];
    uint16_t rx_nqos_last_seqcntl;
    uint16_t rx_qos_last_seqcntl[9];
    struct co_list tx_desc_post;
    void * suppData;
    uint32_t time_last_seen;
    undefined field_0x1ac;
    undefined field_0x1ad;
    undefined field_0x1ae;
    undefined field_0x1af;
};

struct txl_buffer_control { // DWARF DIE: 161a
};

typedef struct sta_info_env_tag sta_info_env_tag, *Psta_info_env_tag;

struct sta_info_env_tag { // DWARF DIE: 1868
    struct co_list free_sta_list;
};

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

struct rx_cntrl_ipcdesc { // DWARF DIE: 129d
    uint32_t host_id;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 12e5
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 12ba
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_rx_status { // DWARF DIE: 11a2
    uint16_t frame_cntl;
    uint16_t seq_cntl;
    uint16_t sn;
    uint8_t fn;
    uint8_t tid;
    uint8_t machdr_len;
    uint8_t sta_idx;
    uint8_t vif_idx;
    uint8_t dst_idx;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    uint64_t pn;
    uint32_t statinfo;
    uint32_t host_buf_addr;
    struct key_info_tag * key;
    struct mac_addr da;
    struct mac_addr sa;
    uint8_t frame_info;
    _Bool eth_len_present;
    uint8_t payl_offset;
    undefined field_0x33;
    undefined field_0x34;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
};

struct rxu_cntrl_env_tag { // DWARF DIE: 131e
    struct rx_cntrl_rx_status rx_status;
    struct co_list rxdesc_pending;
    struct co_list rxdesc_ready;
    struct rx_cntrl_ipcdesc rx_ipcdesc_stat;
    struct co_list rxu_defrag_free;
    struct co_list rxu_defrag_used;
    struct rx_cntrl_dupli rxu_dupli;
    struct mac_addr * mac_addr_ptr;
    struct rx_cntrl_pm_mon pm_mon;
    uint32_t ttr;
    undefined field_0x74;
    undefined field_0x75;
    undefined field_0x76;
    undefined field_0x77;
};

typedef struct dbg_mem_write_req dbg_mem_write_req, *Pdbg_mem_write_req;

struct dbg_mem_write_req { // DWARF DIE: 1eb0
    uint32_t memaddr;
    uint32_t memdata;
};

typedef struct dbg_set_sev_filter_req dbg_set_sev_filter_req, *Pdbg_set_sev_filter_req;

struct dbg_set_sev_filter_req { // DWARF DIE: 1f25
    uint32_t sev_filter;
};

typedef struct dbg_mem_write_cfm dbg_mem_write_cfm, *Pdbg_mem_write_cfm;

struct dbg_mem_write_cfm { // DWARF DIE: 1edd
    uint32_t memaddr;
    uint32_t memdata;
};

typedef struct dbg_get_sys_stat_cfm dbg_get_sys_stat_cfm, *Pdbg_get_sys_stat_cfm;

struct dbg_get_sys_stat_cfm { // DWARF DIE: 1f45
    uint32_t cpu_sleep_time;
    uint32_t doze_time;
    uint32_t stats_time;
};

typedef struct dbg_set_mod_filter_req dbg_set_mod_filter_req, *Pdbg_set_mod_filter_req;

struct dbg_set_mod_filter_req { // DWARF DIE: 1f05
    uint32_t mod_filter;
};

typedef struct dbg_mem_read_cfm dbg_mem_read_cfm, *Pdbg_mem_read_cfm;

struct dbg_mem_read_cfm { // DWARF DIE: 1e88
    uint32_t memaddr;
    uint32_t memdata;
};

typedef enum dbg_msg_tag {
    DBG_ERROR_IND=1032,
    DBG_GET_SYS_STAT_CFM=1034,
    DBG_GET_SYS_STAT_REQ=1033,
    DBG_MEM_READ_CFM=1025,
    DBG_MEM_READ_REQ=1024,
    DBG_MEM_WRITE_CFM=1027,
    DBG_MEM_WRITE_REQ=1026,
    DBG_SET_MOD_FILTER_CFM=1029,
    DBG_SET_MOD_FILTER_REQ=1028,
    DBG_SET_SEV_FILTER_CFM=1031,
    DBG_SET_SEV_FILTER_REQ=1030,
    DBG_SYS_STAT_TIMER=1035
} dbg_msg_tag;

typedef struct dbg_mem_read_req dbg_mem_read_req, *Pdbg_mem_read_req;

struct dbg_mem_read_req { // DWARF DIE: 1e68
    uint32_t memaddr;
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




// DWARF DIE: 1fbc

int dbg_get_sys_stat_req_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_L0();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_L0();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 2134

int dbg_mem_write_req_handler
              (ke_msg_id_t msgid,dbg_mem_write_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint32_t **ppuVar1;
  uint32_t **ppuVar2;
  
  ppuVar1 = (uint32_t **)_L0();
  *(uint32_t *)param->memaddr = param->memdata;
  ppuVar2 = (uint32_t **)param->memaddr;
  *ppuVar1 = (uint32_t *)ppuVar2;
  ppuVar1[1] = *ppuVar2;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)_L0();
  *(undefined4 *)*unaff_s0 = unaff_s0[1];
  puVar2 = (undefined4 *)*unaff_s0;
  *puVar1 = puVar2;
  puVar1[1] = *puVar2;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 21ce

int dbg_mem_read_req_handler
              (ke_msg_id_t msgid,dbg_mem_read_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)_L0();
  puVar1[1] = *(uint32_t *)param->memaddr;
  *puVar1 = param->memaddr;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_L0();
  puVar1[1] = *(undefined4 *)*unaff_s0;
  *puVar1 = *unaff_s0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2050

int dbg_set_sev_filter_req_handler
              (ke_msg_id_t msgid,dbg_set_sev_filter_req *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  _DAT_00000004 = param->sev_filter;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 20c2

int dbg_set_mod_filter_req_handler
              (ke_msg_id_t msgid,dbg_set_mod_filter_req *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uRam00000000 = param->mod_filter;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}


