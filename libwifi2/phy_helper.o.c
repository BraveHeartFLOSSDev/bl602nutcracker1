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

typedef union anon_union.conflictfc anon_union.conflictfc, *Panon_union.conflictfc;

typedef uint wint_t;

union anon_union.conflictfc { // DWARF DIE: fc
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictfc_for___value anon_union.conflictfc_for___value, *Panon_union.conflictfc_for___value;

union anon_union.conflictfc_for___value { // DWARF DIE: fc
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 12e
    int __count;
    union anon_union.conflictfc_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong uint32_t;

struct la_mem_format { // DWARF DIE: 11bd
    uint32_t word[4];
};

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef ushort uint16_t;

struct dma_desc { // DWARF DIE: 112c
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 1180
    struct dma_desc * last_dma[4];
};

typedef struct rfc_status_tag rfc_status_tag, *Prfc_status_tag;

struct rfc_status_tag { // DWARF DIE: d47
    uint32_t pkdet_out_raw:1;
    uint32_t dig_xtal_clk_dbg:1;
    uint32_t clk_ble_16m_dbg:1;
    uint32_t clk_rc_dbg0:1;
    uint32_t clk_adcpow_dbg:1;
    uint32_t clk_fetx_dbg:1;
    uint32_t clk_ferx_dbg:1;
    uint32_t clkpll_postdiv_outclk_dbg:1;
    uint32_t clk_soc_480m_dbg:1;
    uint32_t clk_soc_240m_dbg:1;
    uint32_t clk_soc_192m_dbg:1;
    uint32_t clk_soc_160m_dbg:1;
    uint32_t clk_soc_120m_dbg:1;
    uint32_t clk_soc_96m_dbg:1;
    uint32_t clk_soc_80m_dbg:1;
    uint32_t clk_soc_48m_dbg:1;
    uint32_t clk_soc_32m_dbg:1;
    uint32_t pad_pkdet_out:1;
    uint32_t pad_agc_ctrl:10;
    uint32_t rf_pkdet_rst_hw:1;
    uint32_t rf_cbw_wifi:2;
    uint32_t lo_unlocked:1;
    uint32_t fsm_pu_txbuf:1;
    uint32_t fsm_pu_rxbuf:1;
    uint32_t fsm_pu_tosdac:1;
    uint32_t fsm_pu_dac:1;
    uint32_t fsm_trsw_en:1;
    uint32_t fsm_pu_adc:1;
    uint32_t fsm_pu_pkdet:1;
    uint32_t fsm_pu_rbb:1;
    uint32_t fsm_pu_rmx:1;
    uint32_t fsm_pu_rmxgm:1;
    uint32_t fsm_pu_lna:1;
    uint32_t clk_rc_dbg2:1;
    uint32_t rf_lna_ind_hw:4;
    uint32_t rf_rbb_ind_hw:4;
    uint32_t rf_tx_pow_lvl_hw:4;
    uint32_t rf_rc_lo_rdy:1;
    uint32_t rf_fsm_state:3;
    uint32_t rf_rc_state:3;
    uint32_t clk_rc_dbg:1;
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 1088
    struct co_list_hdr * next;
};

struct co_list { // DWARF DIE: 10a9
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag { // DWARF DIE: 1a0d
    struct co_list prog;
};

typedef uchar uint8_t;

typedef ulonglong uint64_t;

typedef short int16_t;

typedef char int8_t;

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 1470
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

struct phy_channel_info { // DWARF DIE: 1039
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 1505
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_payloaddesc { // DWARF DIE: 15d8
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_hd { // DWARF DIE: 1365
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

struct rx_dmadesc { // DWARF DIE: 1568
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 11f5
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

typedef struct dump_data_t dump_data_t, *Pdump_data_t;

struct dump_data_t { // DWARF DIE: 234c
    uint32_t time;
    char * func_name;
    uint32_t rc_state;
    uint32_t rf_state;
    uint32_t mac_debugRegHWSM1;
    uint32_t mac_debugRegHWSM2;
    uint16_t mac_debugPortCoex;
    uint16_t mac_debugPortBackoff;
    uint16_t mac_debugPortMacPhyIf;
    uint16_t mac_debugPortMacPhyIf2;
    uint16_t phy_debugPortMainFSM;
    uint16_t phy_debugPortTDTX;
    uint16_t phy_debugPortDSSSCCK1;
    uint16_t phy_debugPortDSSSCCKTx;
};

typedef struct HWStateMachineReg HWStateMachineReg, *PHWStateMachineReg;

struct HWStateMachineReg { // DWARF DIE: 22ee
    uint32_t rxControl:6;
    uint32_t reserved_7_6:2;
    uint32_t txControl:9;
    uint32_t reserved_23_17:7;
    uint32_t macControl:8;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 22a3
};

struct ke_env_tag { // DWARF DIE: 2254
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef uint16_t ke_task_id_t;

typedef uint16_t ke_msg_id_t;

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 19ac
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 1cb8
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

struct bam_env_tag { // DWARF DIE: 1d2b
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

struct sta_mgmt_ba_info { // DWARF DIE: 1ef0
    uint32_t last_tx_time;
    uint32_t last_ba_add_time;
    uint8_t bam_idx_rx;
    uint8_t bam_idx_tx;
    int8_t credit_oft;
    undefined field_0xb;
};

typedef struct sta_info_tag sta_info_tag, *Psta_info_tag;

typedef struct mac_addr mac_addr, *Pmac_addr;

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

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

typedef struct sta_pol_tbl_cntl sta_pol_tbl_cntl, *Psta_pol_tbl_cntl;

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef union anon_union.conflictade_for_u anon_union.conflictade_for_u, *Panon_union.conflictade_for_u;

typedef struct anon_struct.conflicta7e anon_struct.conflicta7e, *Panon_struct.conflicta7e;

typedef struct anon_struct.conflictab5 anon_struct.conflictab5, *Panon_struct.conflictab5;

struct rc_sta_stats { // DWARF DIE: 1ee5
};

struct sta_pol_tbl_cntl { // DWARF DIE: 1e8b
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct mac_rateset { // DWARF DIE: a36
    uint8_t length;
    uint8_t array[12];
};

struct mac_htcapability { // DWARF DIE: b89
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

struct anon_struct.conflicta7e { // DWARF DIE: a7e
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictab5 { // DWARF DIE: ab5
    uint32_t key[4];
};

union anon_union.conflictade_for_u { // DWARF DIE: ade
    struct anon_struct.conflicta7e mic;
    struct anon_struct.conflictab5 mfp;
};

struct key_info_tag { // DWARF DIE: b03
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictade_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

struct sta_mgmt_sec_info { // DWARF DIE: 1e50
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct mac_addr { // DWARF DIE: a06
    uint16_t array[3];
};

struct mac_vhtcapability { // DWARF DIE: bfc
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

struct mac_sta_info { // DWARF DIE: c51
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

struct sta_info_tag { // DWARF DIE: 1f3f
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

struct txl_buffer_control { // DWARF DIE: 1eda
};

typedef struct sta_info_env_tag sta_info_env_tag, *Psta_info_env_tag;

struct sta_info_env_tag { // DWARF DIE: 2128
    struct co_list free_sta_list;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 90b
};

typedef union anon_union.conflictade anon_union.conflictade, *Panon_union.conflictade;

union anon_union.conflictade { // DWARF DIE: ade
    struct anon_struct.conflicta7e mic;
    struct anon_struct.conflictab5 mfp;
};

typedef enum anon_enum_8.conflict98e {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_VI=2,
    AC_VO=3,
    BROADCAST_STA_IDX_MAX=11,
    BROADCAST_STA_IDX_MIN=10,
    DMA_DL=0,
    DMA_MAX=2,
    DMA_UL=1,
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
    MACBYP_IDLE=0,
    MACBYP_OFF=0,
    MACBYP_ON=1,
    MACBYP_RX=1,
    MACBYP_TX_BURST=3,
    MACBYP_TX_CONT=4,
    MACBYP_TX_SINGLE=2,
    PHY_BAND_2G4=0,
    PHY_BAND_5G=1,
    PHY_BAND_MAX=2,
    PHY_CHNL_BW_160=3,
    PHY_CHNL_BW_20=0,
    PHY_CHNL_BW_40=1,
    PHY_CHNL_BW_80=2,
    PHY_CHNL_BW_80P80=4,
    PHY_CHNL_BW_OTHER=5,
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
} anon_enum_8.conflict98e;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 18af
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 18db
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 216f
    uint32_t rx_filter_umac;
    uint32_t rx_filter_lmac_enable;
    uint16_t ampdu_max_dur[5];
    uint8_t prev_mm_state;
    uint8_t prev_hw_state;
    uint32_t basic_rates[2];
    uint32_t uapsd_timeout;
    uint16_t lp_clk_accuracy;
    uint8_t host_idle;
    _Bool keep_alive_status_enabled;
    uint32_t keep_alive_packet_counter;
    uint32_t keep_alive_time_last_received;
};

typedef union anon_union.conflict122d anon_union.conflict122d, *Panon_union.conflict122d;

union anon_union.conflict122d { // DWARF DIE: 122d
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

struct tx_cfm_tag { // DWARF DIE: 1635
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

typedef union anon_union.conflict122d_for_field_3 anon_union.conflict122d_for_field_3, *Panon_union.conflict122d_for_field_3;

typedef union anon_union.conflict1252_for_field_4 anon_union.conflict1252_for_field_4, *Panon_union.conflict1252_for_field_4;

typedef union anon_union.conflict1277_for_field_5 anon_union.conflict1277_for_field_5, *Panon_union.conflict1277_for_field_5;

union anon_union.conflict1252_for_field_4 { // DWARF DIE: 1252
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict1277_for_field_5 { // DWARF DIE: 1277
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict122d_for_field_3 { // DWARF DIE: 122d
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd { // DWARF DIE: 129c
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict122d_for_field_3 field_3;
    union anon_union.conflict1252_for_field_4 field_4;
    union anon_union.conflict1277_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 16b4
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

typedef union anon_union.conflict1277 anon_union.conflict1277, *Panon_union.conflict1277;

union anon_union.conflict1277 { // DWARF DIE: 1277
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1252 anon_union.conflict1252, *Panon_union.conflict1252;

union anon_union.conflict1252 { // DWARF DIE: 1252
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8d6_for__new anon_union.conflict8d6_for__new, *Panon_union.conflict8d6_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict74a anon_struct.conflict74a, *Panon_struct.conflict74a;

typedef struct anon_struct.conflict88f anon_struct.conflict88f, *Panon_struct.conflict88f;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: 1f4
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

struct _rand48 { // DWARF DIE: 701
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict74a { // DWARF DIE: 74a
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

struct _Bigint { // DWARF DIE: 184
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct anon_struct.conflict88f { // DWARF DIE: 88f
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _glue { // DWARF DIE: 6bc
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

union anon_union.conflict8d6_for__new { // DWARF DIE: 8d6
    struct anon_struct.conflict74a _reent;
    struct anon_struct.conflict88f _unused;
};

struct __sbuf { // DWARF DIE: 32c
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 35a
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

struct _on_exit_args { // DWARF DIE: 277
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2cc
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4c6
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
    union anon_union.conflict8d6_for__new _new;
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

typedef union anon_union.conflict8d6 anon_union.conflict8d6, *Panon_union.conflict8d6;

union anon_union.conflict8d6 { // DWARF DIE: 8d6
    struct anon_struct.conflict74a _reent;
    struct anon_struct.conflict88f _unused;
};

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

struct rx_cntrl_ipcdesc { // DWARF DIE: 1b5d
    uint32_t host_id;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 1ba5
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 1b7a
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_rx_status { // DWARF DIE: 1a62
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

struct rxu_cntrl_env_tag { // DWARF DIE: 1bde
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

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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
// DWARF DIE: 27fd

void phy_macbyp_reset(void)

{
  _DAT_44c60000 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 284b

void phy_mdm_reset(void)

{
  bool bVar1;
  uint32_t n;
  int iStack4;
  
  iStack4 = 32000;
  do {
    bVar1 = iStack4 != 0;
    iStack4 = iStack4 + -1;
  } while (bVar1);
  _DAT_44c00888 = _DAT_44c00888 & 0xffffeefe;
  return;
}



// DWARF DIE: 2f92

void helper_record_reset(void)

{
  uRam00000000 = 0;
  return;
}



// DWARF DIE: 2f33

int bl60x_check_mac_status(int *is_ok)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  while( true ) {
    if ((int)(uint)bRam00000000 <= iVar1) {
      *is_ok = 0;
      return 0;
    }
    if (*(int *)(iVar2 + 0x14) != -0x77fe2000) break;
    iVar1 += 1;
    iVar2 = iVar2 + 0x28;
  }
  *is_ok = 1;
  return 0;
}



// DWARF DIE: 2e3f

void helper_record_dump(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)0x0;
  _L0();
  for (iVar4 = 0; iVar4 < (int)(uint)bRam00000000; iVar4 += 1) {
    FUN_0001013e(iVar4,*puVar3,puVar3[1]);
    FUN_0001015e(puVar3[5],puVar3[5] & 0x3f,(uint)puVar3[5] >> 8 & 0x1ff,
                 (uint)*(byte *)((int)puVar3 + 0x17));
    _L0((uint)*(ushort *)(puVar3 + 6),(uint)*(ushort *)((int)puVar3 + 0x1a),
        (uint)*(ushort *)(puVar3 + 7),(uint)*(ushort *)((int)puVar3 + 0x1e));
    FUN_0001019c(0,(uint)*(ushort *)(puVar3 + 8),(uint)*(ushort *)((int)puVar3 + 0x22),
                 (uint)*(ushort *)(puVar3 + 9),(uint)*(ushort *)((int)puVar3 + 0x26));
    piVar1 = puVar3 + 3;
    piVar2 = puVar3 + 2;
    puVar3 = puVar3 + 10;
    _LVL26(0,*(undefined4 *)(*piVar2 * 4),*(undefined4 *)(*piVar1 * 4));
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *unaff_s0;
  int iVar3;
  int unaff_s2;
  int unaff_s3;
  
  _L0();
  for (iVar3 = 0; iVar3 < (int)(uint)bRam00000000; iVar3 += 1) {
    FUN_0001013e(iVar3,*unaff_s0,unaff_s0[1]);
    FUN_0001015e(unaff_s0[5],unaff_s0[5] & 0x3f,(uint)unaff_s0[5] >> 8 & 0x1ff,
                 (uint)*(byte *)((int)unaff_s0 + 0x17));
    _L0((uint)*(ushort *)(unaff_s0 + 6),(uint)*(ushort *)((int)unaff_s0 + 0x1a),
        (uint)*(ushort *)(unaff_s0 + 7),(uint)*(ushort *)((int)unaff_s0 + 0x1e));
    FUN_0001019c(0,(uint)*(ushort *)(unaff_s0 + 8),(uint)*(ushort *)((int)unaff_s0 + 0x22),
                 (uint)*(ushort *)(unaff_s0 + 9),(uint)*(ushort *)((int)unaff_s0 + 0x26));
    piVar1 = unaff_s0 + 3;
    piVar2 = unaff_s0 + 2;
    unaff_s0 = unaff_s0 + 10;
    _LVL26(0,*(undefined4 *)(*piVar2 * 4 + unaff_s3),*(undefined4 *)(*piVar1 * 4 + unaff_s2));
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001013e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte *unaff_s6;
  
  while( true ) {
    FUN_0001013e(param_1,param_2,param_3);
    FUN_0001015e(unaff_s0[5],unaff_s0[5] & 0x3f,(uint)unaff_s0[5] >> 8 & 0x1ff,
                 (uint)*(byte *)((int)unaff_s0 + 0x17));
    unaff_s1 += 1;
    _L0((uint)*(ushort *)(unaff_s0 + 6),(uint)*(ushort *)((int)unaff_s0 + 0x1a),
        (uint)*(ushort *)(unaff_s0 + 7),(uint)*(ushort *)((int)unaff_s0 + 0x1e));
    FUN_0001019c(0,(uint)*(ushort *)(unaff_s0 + 8),(uint)*(ushort *)((int)unaff_s0 + 0x22),
                 (uint)*(ushort *)(unaff_s0 + 9),(uint)*(ushort *)((int)unaff_s0 + 0x26));
    _LVL26(0,*(undefined4 *)(unaff_s0[2] * 4 + unaff_s3),*(undefined4 *)(unaff_s0[3] * 4 + unaff_s2)
          );
    if ((int)(uint)*unaff_s6 <= unaff_s1) break;
    param_3 = unaff_s0[0xb];
    param_2 = unaff_s0[10];
    unaff_s0 = unaff_s0 + 10;
    param_1 = unaff_s1;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001015e(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte *unaff_s6;
  
  while( true ) {
    FUN_0001015e(param_1,param_2,param_3,param_4);
    unaff_s1 += 1;
    _L0((uint)*(ushort *)(unaff_s0 + 6),(uint)*(ushort *)((int)unaff_s0 + 0x1a),
        (uint)*(ushort *)(unaff_s0 + 7),(uint)*(ushort *)((int)unaff_s0 + 0x1e));
    FUN_0001019c(0,(uint)*(ushort *)(unaff_s0 + 8),(uint)*(ushort *)((int)unaff_s0 + 0x22),
                 (uint)*(ushort *)(unaff_s0 + 9),(uint)*(ushort *)((int)unaff_s0 + 0x26));
    _LVL26(0,*(undefined4 *)(unaff_s0[2] * 4 + unaff_s3),*(undefined4 *)(unaff_s0[3] * 4 + unaff_s2)
          );
    if ((int)(uint)*unaff_s6 <= unaff_s1) break;
    FUN_0001013e(unaff_s1,unaff_s0[10],unaff_s0[0xb]);
    param_4 = (uint)*(byte *)((int)unaff_s0 + 0x3f);
    param_1 = unaff_s0[0xf];
    param_3 = (uint)unaff_s0[0xf] >> 8 & 0x1ff;
    param_2 = unaff_s0[0xf] & 0x3f;
    unaff_s0 = unaff_s0 + 10;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte *unaff_s6;
  
  while( true ) {
    _L0(param_1,param_2,param_3,param_4);
    FUN_0001019c(0,(uint)*(ushort *)(unaff_s0 + 8),(uint)*(ushort *)((int)unaff_s0 + 0x22),
                 (uint)*(ushort *)(unaff_s0 + 9),(uint)*(ushort *)((int)unaff_s0 + 0x26));
    _LVL26(0,*(undefined4 *)(unaff_s0[2] * 4 + unaff_s3),*(undefined4 *)(unaff_s0[3] * 4 + unaff_s2)
          );
    if ((int)(uint)*unaff_s6 <= unaff_s1) break;
    FUN_0001013e(unaff_s1,unaff_s0[10],unaff_s0[0xb]);
    FUN_0001015e(unaff_s0[0xf],unaff_s0[0xf] & 0x3f,(uint)unaff_s0[0xf] >> 8 & 0x1ff,
                 (uint)*(byte *)((int)unaff_s0 + 0x3f));
    param_4 = (uint)*(ushort *)((int)unaff_s0 + 0x46);
    param_3 = (uint)*(ushort *)(unaff_s0 + 0x11);
    param_2 = (uint)*(ushort *)((int)unaff_s0 + 0x42);
    param_1 = (uint)*(ushort *)(unaff_s0 + 0x10);
    unaff_s1 += 1;
    unaff_s0 = unaff_s0 + 10;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001019c(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte *unaff_s6;
  
  while( true ) {
    FUN_0001019c(param_1,param_2,param_3,param_4,param_5);
    _LVL26(0,*(undefined4 *)(unaff_s0[2] * 4 + unaff_s3),*(undefined4 *)(unaff_s0[3] * 4 + unaff_s2)
          );
    if ((int)(uint)*unaff_s6 <= unaff_s1) break;
    FUN_0001013e(unaff_s1,unaff_s0[10],unaff_s0[0xb]);
    FUN_0001015e(unaff_s0[0xf],unaff_s0[0xf] & 0x3f,(uint)unaff_s0[0xf] >> 8 & 0x1ff,
                 (uint)*(byte *)((int)unaff_s0 + 0x3f));
    unaff_s1 += 1;
    _L0((uint)*(ushort *)(unaff_s0 + 0x10),(uint)*(ushort *)((int)unaff_s0 + 0x42),
        (uint)*(ushort *)(unaff_s0 + 0x11),(uint)*(ushort *)((int)unaff_s0 + 0x46));
    param_5 = (uint)*(ushort *)((int)unaff_s0 + 0x4e);
    param_4 = (uint)*(ushort *)(unaff_s0 + 0x13);
    param_3 = (uint)*(ushort *)((int)unaff_s0 + 0x4a);
    param_2 = (uint)*(ushort *)(unaff_s0 + 0x12);
    param_1 = 0;
    unaff_s0 = unaff_s0 + 10;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL26(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte *unaff_s6;
  
  for (; _LVL26(param_1,param_2,param_3), unaff_s1 < (int)(uint)*unaff_s6; unaff_s1 += 1) {
    FUN_0001013e(unaff_s1,*unaff_s0,unaff_s0[1]);
    FUN_0001015e(unaff_s0[5],unaff_s0[5] & 0x3f,(uint)unaff_s0[5] >> 8 & 0x1ff,
                 (uint)*(byte *)((int)unaff_s0 + 0x17));
    _L0((uint)*(ushort *)(unaff_s0 + 6),(uint)*(ushort *)((int)unaff_s0 + 0x1a),
        (uint)*(ushort *)(unaff_s0 + 7),(uint)*(ushort *)((int)unaff_s0 + 0x1e));
    FUN_0001019c(0,(uint)*(ushort *)(unaff_s0 + 8),(uint)*(ushort *)((int)unaff_s0 + 0x22),
                 (uint)*(ushort *)(unaff_s0 + 9),(uint)*(ushort *)((int)unaff_s0 + 0x26));
    param_3 = *(undefined4 *)(unaff_s0[3] * 4 + unaff_s2);
    param_2 = *(undefined4 *)(unaff_s0[2] * 4 + unaff_s3);
    param_1 = 0;
    unaff_s0 = unaff_s0 + 10;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2d43

void helper_record_rc_rf_states(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  _DAT_40001220 = _DAT_40001220 & 0xfffffff | 0x20000000;
  uVar1 = _DAT_40001224 >> 0x19;
  *param_1 = _DAT_40001224 >> 0x1c & 7;
  *param_2 = uVar1 & 7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2a53

void helper_record_all_states(char *func_name)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = _DAT_44b00120;
  puVar4 = (undefined4 *)((uint)bRam00000000 * 0x28);
  puVar4[1] = func_name;
  *puVar4 = uVar1;
  FUN_00010250();
  puVar4[4] = _DAT_44b00500;
  puVar4[5] = _DAT_44b00504;
  _DAT_44b00510 &= 0xffff0000;
  puVar4[6] = _DAT_44b0050c;
  _DAT_44b00510 = _DAT_44b00510 & 0xffff0000 | 0x2f0b;
  puVar4[7] = _DAT_44b0050c;
  _DAT_44900068 = _DAT_44900068 & 0xffff0000 | 0x14;
  _DAT_400000d0 = 4;
  _DAT_400000d4 = 0x40000004;
  _DAT_400000d8 = 0x80000004;
  _DAT_400000dc = 0xc0000004;
  uVar2 = _DAT_400000e0 & 0xfffffffe;
  uVar3 = _DAT_400000e0 >> 1;
  _DAT_400000e0 = uVar2;
  *(short *)((int)puVar4 + 0x22) = (short)uVar3;
  *(ushort *)(puVar4 + 8) = (ushort)(uVar2 >> 0x11);
  _DAT_44900074 = 0xb09;
  uVar2 = _DAT_400000e0 & 0xfffffffe;
  uVar3 = _DAT_400000e0 >> 1;
  _DAT_400000e0 = uVar2;
  *(short *)(puVar4 + 9) = (short)uVar3;
  *(ushort *)((int)puVar4 + 0x26) = (ushort)(uVar2 >> 0x11);
  bRam00000000 = bRam00000000 + 1 & 0xf;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010250(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  byte *unaff_s2;
  
  FUN_00010250();
  *(undefined4 *)(unaff_s1 + 0x10) = *(undefined4 *)(unaff_s0 + 0x500);
  *(undefined4 *)(unaff_s1 + 0x14) = *(undefined4 *)(unaff_s0 + 0x504);
  *(uint *)(unaff_s0 + 0x510) = *(uint *)(unaff_s0 + 0x510) & 0xffffff00 | 0x31;
  *(uint *)(unaff_s0 + 0x510) = *(uint *)(unaff_s0 + 0x510) & 0xffff00ff;
  *(undefined4 *)(unaff_s1 + 0x18) = *(undefined4 *)(unaff_s0 + 0x50c);
  *(uint *)(unaff_s0 + 0x510) = *(uint *)(unaff_s0 + 0x510) & 0xffffff00 | 0xb;
  *(uint *)(unaff_s0 + 0x510) = *(uint *)(unaff_s0 + 0x510) & 0xffff00ff | 0x2f00;
  *(undefined4 *)(unaff_s1 + 0x1c) = *(undefined4 *)(unaff_s0 + 0x50c);
  _DAT_44900068 = _DAT_44900068 & 0xffff0000 | 0x14;
  _DAT_400000d0 = 4;
  _DAT_400000d4 = 0x40000004;
  _DAT_400000d8 = 0x80000004;
  _DAT_400000dc = 0xc0000004;
  uVar2 = _DAT_400000e0 & 0xfffffffe;
  uVar3 = _DAT_400000e0 >> 1;
  _DAT_400000e0 = uVar2;
  *(short *)(unaff_s1 + 0x22) = (short)uVar3;
  *(ushort *)(unaff_s1 + 0x20) = (ushort)(uVar2 >> 0x11);
  _DAT_44900074 = 0xb09;
  uVar2 = _DAT_400000e0 & 0xfffffffe;
  uVar3 = _DAT_400000e0 >> 1;
  _DAT_400000e0 = uVar2;
  *(short *)(unaff_s1 + 0x24) = (short)uVar3;
  bVar1 = *unaff_s2;
  *(ushort *)(unaff_s1 + 0x26) = (ushort)(uVar2 >> 0x11);
  *unaff_s2 = bVar1 + 1 & 0xf;
  return;
}



// DWARF DIE: 299e

float calc_ppm_ofdm(uint16_t rxv_freqoff)

{
  float extraout_a0;
  
  _L0();
  FUN_00010374();
  FUN_00010388();
  _L0();
  return extraout_a0;
}



void _L0(void)

{
  _L0();
  FUN_00010374();
  FUN_00010388();
  _L0();
  return;
}



void FUN_00010374(void)

{
  FUN_00010374();
  FUN_00010388();
  _L0();
  return;
}



void FUN_00010388(void)

{
  FUN_00010388();
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 326c

float calc_ppm_dsss(uint8_t rxv_freqoff)

{
  float extraout_a0;
  
  _L0();
  FUN_000103ba();
  _L0();
  return extraout_a0;
}



void _L0(void)

{
  _L0();
  FUN_000103ba();
  _L0();
  return;
}



void FUN_000103ba(void)

{
  FUN_000103ba();
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 24ab

void helper_channel_monitor
               (uint32_t chanfreq,timer_func_ptr *timer_func,int nrepeats,int mon_time_ms)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *extraout_a0;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 extraout_a0_00;
  int extraout_a1;
  int iVar7;
  int iVar8;
  undefined4 extraout_a1_00;
  
  iVar3 = 0;
  _L0();
  do {
    if (nrepeats <= iVar3) {
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _L0();
    _L0();
    _DAT_44c60000 = 0x101;
    iVar7 = extraout_a1;
    plVar4 = (*timer_func)(extraout_a0);
    plVar6 = plVar4;
    iVar8 = iVar7;
    do {
      plVar5 = (*timer_func)(plVar6);
      uVar2 = _DAT_44c60088;
      uVar1 = _DAT_44c60080;
      plVar6 = (longlong *)(uint)(plVar5 < (longlong *)((int)plVar5 - (int)plVar4));
      iVar8 = (iVar8 - iVar7) - (int)plVar6;
      if (mon_time_ms >> 0x1f < iVar8) break;
    } while ((iVar8 != mon_time_ms >> 0x1f) ||
            ((longlong *)((int)plVar5 - (int)plVar4) <= (uint)mon_time_ms));
    iVar3 += 1;
    _LVL119(_DAT_44c60090 >> 0x10,_DAT_44c60094);
    _L0();
    FUN_000104d2(uVar1,uVar2,extraout_a0_00,extraout_a1_00);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  undefined4 extraout_a0;
  int extraout_a1;
  int extraout_a1_00;
  int iVar5;
  undefined4 extraout_a1_01;
  code *unaff_s2;
  uint unaff_s3;
  int unaff_s5;
  
  _L0();
  do {
    if (unaff_s5 <= unaff_s1) {
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _L0();
    _L0();
    _DAT_44c60000 = 0x101;
    iVar3 = (*unaff_s2)();
    do {
      uVar4 = (*unaff_s2)();
      uVar2 = _DAT_44c60088;
      uVar1 = _DAT_44c60080;
      iVar5 = (extraout_a1_00 - extraout_a1) - (uint)(uVar4 < uVar4 - iVar3);
      if ((int)unaff_s3 >> 0x1f < iVar5) break;
    } while ((iVar5 != (int)unaff_s3 >> 0x1f) || (uVar4 - iVar3 <= unaff_s3));
    unaff_s1 += 1;
    _LVL119(_DAT_44c60090 >> 0x10,_DAT_44c60094);
    _L0();
    FUN_000104d2(uVar1,uVar2,extraout_a0,extraout_a1_01);
  } while( true );
}



void _L0(void)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  uint *unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 extraout_a0;
  int extraout_a1;
  int extraout_a1_00;
  int iVar2;
  undefined4 extraout_a1_01;
  uint uVar3;
  uint uVar4;
  code *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  
  do {
    _L0();
    _L0();
    uVar4 = *unaff_s0;
    uVar3 = uVar4 & 1;
    if (uVar3 == 0) {
      uVar4 |= 1;
    }
    *unaff_s0 = uVar4 | 0x10;
    *unaff_s0 = uVar4 & 0xffffffef;
    if (uVar3 == 0) {
      *unaff_s0 = uVar4 & 0xffffffee;
    }
    *unaff_s0 = unaff_s6;
    iVar1 = (*unaff_s2)();
    do {
      uVar3 = (*unaff_s2)();
      iVar2 = (extraout_a1_00 - extraout_a1) - (uint)(uVar3 < uVar3 - iVar1);
      if (unaff_s4 < iVar2) break;
    } while ((iVar2 != unaff_s4) || (uVar3 - iVar1 <= unaff_s3));
    uVar4 = unaff_s0[0x20];
    uVar3 = unaff_s0[0x22];
    unaff_s1 += 1;
    _LVL119(unaff_s0[0x24] >> 0x10,unaff_s0[0x25]);
    _L0();
    FUN_000104d2(uVar4,uVar3,extraout_a0,extraout_a1_01);
    if (unaff_s5 <= unaff_s1) {
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  } while( true );
}



void _L0(void)

{
  uint *unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 extraout_a0;
  int extraout_a1;
  int extraout_a1_00;
  int iVar2;
  undefined4 extraout_a1_01;
  uint uVar3;
  uint uVar4;
  code *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  
  do {
    _L0();
    uVar4 = *unaff_s0;
    uVar3 = uVar4 & 1;
    if (uVar3 == 0) {
      uVar4 |= 1;
    }
    *unaff_s0 = uVar4 | 0x10;
    *unaff_s0 = uVar4 & 0xffffffef;
    if (uVar3 == 0) {
      *unaff_s0 = uVar4 & 0xffffffee;
    }
    *unaff_s0 = unaff_s6;
    iVar1 = (*unaff_s2)();
    do {
      uVar3 = (*unaff_s2)();
      iVar2 = (extraout_a1_00 - extraout_a1) - (uint)(uVar3 < uVar3 - iVar1);
      if (unaff_s4 < iVar2) break;
    } while ((iVar2 != unaff_s4) || (uVar3 - iVar1 <= unaff_s3));
    uVar4 = unaff_s0[0x20];
    uVar3 = unaff_s0[0x22];
    unaff_s1 += 1;
    _LVL119(unaff_s0[0x24] >> 0x10,unaff_s0[0x25]);
    _L0();
    FUN_000104d2(uVar4,uVar3,extraout_a0,extraout_a1_01);
    if (unaff_s5 <= unaff_s1) {
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _L0();
  } while( true );
}



void _LVL119(uint param_1,uint param_2)

{
  uint *unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 extraout_a0;
  int extraout_a1;
  int extraout_a1_00;
  int iVar2;
  undefined4 extraout_a1_01;
  uint uVar3;
  uint uVar4;
  code *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  uint unaff_s8;
  uint in_stack_0000000c;
  
  do {
    _LVL119(param_1,param_2);
    _L0();
    FUN_000104d2(unaff_s8,in_stack_0000000c,extraout_a0,extraout_a1_01);
    if (unaff_s5 <= unaff_s1) {
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _L0();
    _L0();
    uVar4 = *unaff_s0;
    uVar3 = uVar4 & 1;
    if (uVar3 == 0) {
      uVar4 |= 1;
    }
    *unaff_s0 = uVar4 | 0x10;
    *unaff_s0 = uVar4 & 0xffffffef;
    if (uVar3 == 0) {
      *unaff_s0 = uVar4 & 0xffffffee;
    }
    *unaff_s0 = unaff_s6;
    iVar1 = (*unaff_s2)();
    do {
      uVar3 = (*unaff_s2)();
      iVar2 = (extraout_a1_00 - extraout_a1) - (uint)(uVar3 < uVar3 - iVar1);
      if (unaff_s4 < iVar2) break;
    } while ((iVar2 != unaff_s4) || (uVar3 - iVar1 <= unaff_s3));
    unaff_s8 = unaff_s0[0x20];
    in_stack_0000000c = unaff_s0[0x22];
    unaff_s1 += 1;
    param_2 = unaff_s0[0x25];
    param_1 = unaff_s0[0x24] >> 0x10;
  } while( true );
}



void _L0(void)

{
  uint *unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 extraout_a0;
  int extraout_a1;
  int extraout_a1_00;
  int iVar2;
  undefined4 extraout_a1_01;
  uint uVar3;
  uint uVar4;
  code *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  uint unaff_s8;
  uint in_stack_0000000c;
  
  do {
    _L0();
    FUN_000104d2(unaff_s8,in_stack_0000000c,extraout_a0,extraout_a1_01);
    if (unaff_s5 <= unaff_s1) {
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _L0();
    _L0();
    uVar4 = *unaff_s0;
    uVar3 = uVar4 & 1;
    if (uVar3 == 0) {
      uVar4 |= 1;
    }
    *unaff_s0 = uVar4 | 0x10;
    *unaff_s0 = uVar4 & 0xffffffef;
    if (uVar3 == 0) {
      *unaff_s0 = uVar4 & 0xffffffee;
    }
    *unaff_s0 = unaff_s6;
    iVar1 = (*unaff_s2)();
    do {
      uVar3 = (*unaff_s2)();
      iVar2 = (extraout_a1_00 - extraout_a1) - (uint)(uVar3 < uVar3 - iVar1);
      if (unaff_s4 < iVar2) break;
    } while ((iVar2 != unaff_s4) || (uVar3 - iVar1 <= unaff_s3));
    unaff_s8 = unaff_s0[0x20];
    in_stack_0000000c = unaff_s0[0x22];
    unaff_s1 += 1;
    _LVL119(unaff_s0[0x24] >> 0x10,unaff_s0[0x25]);
  } while( true );
}



void FUN_000104d2(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 extraout_a0;
  int extraout_a1;
  int extraout_a1_00;
  int iVar2;
  undefined4 extraout_a1_01;
  uint uVar3;
  uint uVar4;
  code *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  
  do {
    FUN_000104d2(param_1,param_2,param_3,param_4);
    if (unaff_s5 <= unaff_s1) {
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _L0();
    _L0();
    uVar4 = *unaff_s0;
    uVar3 = uVar4 & 1;
    if (uVar3 == 0) {
      uVar4 |= 1;
    }
    *unaff_s0 = uVar4 | 0x10;
    *unaff_s0 = uVar4 & 0xffffffef;
    if (uVar3 == 0) {
      *unaff_s0 = uVar4 & 0xffffffee;
    }
    *unaff_s0 = unaff_s6;
    iVar1 = (*unaff_s2)();
    do {
      uVar3 = (*unaff_s2)();
      iVar2 = (extraout_a1_00 - extraout_a1) - (uint)(uVar3 < uVar3 - iVar1);
      if (unaff_s4 < iVar2) break;
    } while ((iVar2 != unaff_s4) || (uVar3 - iVar1 <= unaff_s3));
    param_1 = unaff_s0[0x20];
    param_2 = unaff_s0[0x22];
    unaff_s1 += 1;
    _LVL119(unaff_s0[0x24] >> 0x10,unaff_s0[0x25]);
    _L0();
    param_3 = extraout_a0;
    param_4 = extraout_a1_01;
  } while( true );
}


