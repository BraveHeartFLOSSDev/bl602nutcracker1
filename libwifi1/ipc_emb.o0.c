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

typedef struct ipc_shared_env_tag ipc_shared_env_tag, *Pipc_shared_env_tag;

typedef struct ipc_a2e_msg ipc_a2e_msg, *Pipc_a2e_msg;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

typedef struct txdesc_host txdesc_host, *Ptxdesc_host;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

struct ipc_a2e_msg { // DWARF DIE: 27b7
    uint32_t dummy_word;
    uint32_t msg[127];
};

struct mac_addr { // DWARF DIE: a4a
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 1911
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

struct txdesc_host { // DWARF DIE: 1c13
    uint32_t ready;
    struct hostdesc host;
    uint32_t pad_txdesc[55];
    uint32_t pad_buf[128];
};

struct ipc_shared_env_tag { // DWARF DIE: 27f5
    struct ipc_a2e_msg msg_a2e_buf;
    uint32_t pattern_addr;
    struct txdesc_host txdesc0[4];
};

typedef struct tskTaskControlBlock tskTaskControlBlock, *PtskTaskControlBlock;

typedef struct tskTaskControlBlock * TaskHandle_t;

struct tskTaskControlBlock { // DWARF DIE: 2948
};

typedef union anon_union.conflicte9 anon_union.conflicte9, *Panon_union.conflicte9;

typedef uint wint_t;

union anon_union.conflicte9 { // DWARF DIE: e9
    wint_t __wch;
    uchar __wchb[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte9_for___value anon_union.conflicte9_for___value, *Panon_union.conflicte9_for___value;

union anon_union.conflicte9_for___value { // DWARF DIE: e9
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 11b
    int __count;
    union anon_union.conflicte9_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 120d
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

typedef char __int8_t;

typedef __int8_t int8_t;

typedef union anon_union.conflict26e3_for_field_0 anon_union.conflict26e3_for_field_0, *Panon_union.conflict26e3_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1319_for_field_3 anon_union.conflict1319_for_field_3, *Panon_union.conflict1319_for_field_3;

typedef union anon_union.conflict133e_for_field_4 anon_union.conflict133e_for_field_4, *Panon_union.conflict133e_for_field_4;

typedef union anon_union.conflict1363_for_field_5 anon_union.conflict1363_for_field_5, *Panon_union.conflict1363_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: d7b
    struct co_list_hdr * next;
};

union anon_union.conflict1319_for_field_3 { // DWARF DIE: 1319
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_cfm_tag { // DWARF DIE: 1776
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct umacdesc { // DWARF DIE: 19ed
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

struct lmacdesc { // DWARF DIE: 1a7d
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

union anon_union.conflict1363_for_field_5 { // DWARF DIE: 1363
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict133e_for_field_4 { // DWARF DIE: 133e
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_hd { // DWARF DIE: 1388
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1319_for_field_3 field_3;
    union anon_union.conflict133e_for_field_4 field_4;
    union anon_union.conflict1363_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 17f5
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct txdesc { // DWARF DIE: 1b99
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 12ee
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct tx_policy_tbl { // DWARF DIE: 127d
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict26e3_for_field_0 { // DWARF DIE: 26e3
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 1a49
    union anon_union.conflict26e3_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct dma_desc { // DWARF DIE: 1154
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd { // DWARF DIE: 1451
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_tag { // DWARF DIE: 1ab8
    uint32_t length;
    uint32_t lenheader;
    uint32_t lenpad;
    uint32_t flags;
    struct txl_buffer_tag * next;
    struct txdesc * txdesc;
    struct dma_desc dma_desc[1];
    struct dma_desc dma_desc_pat;
    struct tx_pbd tbd;
    struct tx_pbd tbd_body[8];
    uint8_t user_idx;
    undefined field_0xed;
    undefined field_0xee;
    undefined field_0xef;
    struct txl_buffer_control buffer_control;
    struct tx_pbd tkip_mic_icv_pbd;
    uint8_t tkip_mic_icv[12];
    uint32_t[0] payload;
};

struct tx_agg_desc { // DWARF DIE: 1826
    uint8_t reserved;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 11a8
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: d9c
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag { // DWARF DIE: 1e18
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 15b1
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

struct phy_channel_info { // DWARF DIE: 11e5
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 1646
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 14a6
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

struct rx_payloaddesc { // DWARF DIE: 1719
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 16a9
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 1245
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

typedef struct rxl_cntrl_env_tag rxl_cntrl_env_tag, *Prxl_cntrl_env_tag;

struct rxl_cntrl_env_tag { // DWARF DIE: 1ccd
    struct co_list ready;
    struct rx_dmadesc * first;
    struct rx_dmadesc * last;
    struct rx_dmadesc * free;
    uint32_t packet_stack_cnt;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: fc5
};

struct ke_env_tag { // DWARF DIE: f76
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef uint16_t ke_msg_id_t;

typedef struct ke_msg ke_msg, *Pke_msg;

typedef uint16_t ke_task_id_t;

struct ke_msg { // DWARF DIE: df2
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t[0] param;
};

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list { // DWARF DIE: 2541
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 2589
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 2095
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

struct bam_env_tag { // DWARF DIE: 2108
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

struct sta_mgmt_ba_info { // DWARF DIE: 22c2
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

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

typedef struct sta_pol_tbl_cntl sta_pol_tbl_cntl, *Psta_pol_tbl_cntl;

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictb22_for_u anon_union.conflictb22_for_u, *Panon_union.conflictb22_for_u;

typedef struct anon_struct.conflictac2 anon_struct.conflictac2, *Panon_struct.conflictac2;

typedef struct anon_struct.conflictaf9 anon_struct.conflictaf9, *Panon_struct.conflictaf9;

struct rc_sta_stats { // DWARF DIE: 22b7
};

struct anon_struct.conflictac2 { // DWARF DIE: ac2
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictaf9 { // DWARF DIE: af9
    uint32_t key[4];
};

union anon_union.conflictb22_for_u { // DWARF DIE: b22
    struct anon_struct.conflictac2 mic;
    struct anon_struct.conflictaf9 mfp;
};

struct sta_pol_tbl_cntl { // DWARF DIE: 2268
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct mac_rateset { // DWARF DIE: a7a
    uint8_t length;
    uint8_t array[12];
};

struct mac_htcapability { // DWARF DIE: bcd
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

struct mac_vhtcapability { // DWARF DIE: c40
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

struct mac_sta_info { // DWARF DIE: c95
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

struct key_info_tag { // DWARF DIE: b47
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb22_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

struct sta_mgmt_sec_info { // DWARF DIE: 222d
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 2311
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

typedef struct sta_info_env_tag sta_info_env_tag, *Psta_info_env_tag;

struct sta_info_env_tag { // DWARF DIE: 24fa
    struct co_list free_sta_list;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 8f8
};

typedef long __int32_t;

typedef union anon_union.conflictb22 anon_union.conflictb22, *Panon_union.conflictb22;

union anon_union.conflictb22 { // DWARF DIE: b22
    struct anon_struct.conflictac2 mic;
    struct anon_struct.conflictaf9 mfp;
};

typedef enum anon_enum_8.conflict9d2 {
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
    IPC_DMA_LLI_CFM_TX=8,
    IPC_DMA_LLI_DATA_AC0_TX=0,
    IPC_DMA_LLI_DATA_AC1_TX=1,
    IPC_DMA_LLI_DATA_AC2_TX=2,
    IPC_DMA_LLI_DATA_AC3_TX=3,
    IPC_DMA_LLI_DATA_BCN_TX=4,
    IPC_DMA_LLI_DATA_RX0=5,
    IPC_DMA_LLI_DBG=7,
    IPC_DMA_LLI_DBG_DUMP=10,
    IPC_DMA_LLI_GP_DL=9,
    IPC_DMA_LLI_GP_UL=11,
    IPC_DMA_LLI_MAX=12,
    IPC_DMA_LLI_MSG=6,
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
    TID_MGT=8,
    eIncrement=2,
    eNoAction=0,
    eSetBits=1,
    eSetValueWithOverwrite=3,
    eSetValueWithoutOverwrite=4
} anon_enum_8.conflict9d2;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: f06
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: f32
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 2632
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef union anon_union.conflict26e3 anon_union.conflict26e3, *Panon_union.conflict26e3;

union anon_union.conflict26e3 { // DWARF DIE: 26e3
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 260a
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 265a
    uint32_t used_area;
    uint32_t free;
    uint32_t free_size;
    uint32_t last;
    uint32_t next_needed;
    uint32_t buf_size;
    uint32_t * pool;
    struct txl_buffer_hw_desc_tag * desc;
    uint8_t count;
    undefined field_0x21;
    undefined field_0x22;
    undefined field_0x23;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag { // DWARF DIE: 2705
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict133e anon_union.conflict133e, *Panon_union.conflict133e;

union anon_union.conflict133e { // DWARF DIE: 133e
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict1363 anon_union.conflict1363, *Panon_union.conflict1363;

union anon_union.conflict1363 { // DWARF DIE: 1363
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1319 anon_union.conflict1319, *Panon_union.conflict1319;

union anon_union.conflict1319 { // DWARF DIE: 1319
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct ipc_emb_env_tag ipc_emb_env_tag, *Pipc_emb_env_tag;

struct ipc_emb_env_tag { // DWARF DIE: 284f
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

struct __tm { // DWARF DIE: 1e1
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

struct _rand48 { // DWARF DIE: 6ee
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict737 { // DWARF DIE: 737
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

struct anon_struct.conflict87c { // DWARF DIE: 87c
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _Bigint { // DWARF DIE: 171
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 6a9
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

union anon_union.conflict8c3_for__new { // DWARF DIE: 8c3
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
};

struct __sbuf { // DWARF DIE: 319
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 347
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

struct _on_exit_args { // DWARF DIE: 264
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2b9
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4b3
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

typedef union anon_union.conflict8c3 anon_union.conflict8c3, *Panon_union.conflict8c3;

union anon_union.conflict8c3 { // DWARF DIE: 8c3
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
};

typedef uint32_t TickType_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

struct rx_cntrl_ipcdesc { // DWARF DIE: 1f3a
    uint32_t host_id;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 1f82
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 1f57
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_rx_status { // DWARF DIE: 1e3f
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

struct rxu_cntrl_env_tag { // DWARF DIE: 1fbb
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




// DWARF DIE: 33e5

void ipc_emb_notify(void)

{
  int iStack20;
  BaseType_t xHigherPriorityTaskWoken;
  
  if (iRam00000000 == 0) {
    FUN_00010028();
  }
  if (iRam00000000 == 0) {
    FUN_00010060();
  }
  else {
    FUN_0001003e();
    if (iStack20 != 0) {
      _L0();
    }
  }
  return;
}



void FUN_00010028(void)

{
  int in_stack_0000000c;
  
  FUN_00010028();
  if (iRam00000000 == 0) {
    FUN_00010060();
  }
  else {
    FUN_0001003e();
    if (in_stack_0000000c != 0) {
      _L0();
    }
  }
  return;
}



void FUN_0001003e(void)

{
  int in_stack_0000000c;
  
  FUN_0001003e();
  if (in_stack_0000000c != 0) {
    _L0();
  }
  return;
}



void _L0(void)

{
  _L0();
  return;
}



void FUN_00010060(void)

{
  FUN_00010060();
  return;
}



// DWARF DIE: 33ac

void ipc_emb_wait(void)

{
  _L0();
  iRam00000000 = iRam00000000 + 1;
  return;
}



void _L0(void)

{
  _L0();
  iRam00000000 = iRam00000000 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 31b2

void ipc_emb_init(void)

{
  undefined4 in_a0;
  
  _L0(_DAT_0000001c);
  uRam00000000 = in_a0;
  FUN_000100b2();
  _DAT_0000001c = 0x204;
  if (_DAT_44800140 != 0x49504332) {
    FUN_000100f0();
  }
  _DAT_4480010c = 0x1f03;
  _DAT_44800114 = 0x3ff2a04;
  _DAT_44800118 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 uRam0000001c)

{
  undefined4 in_a0;
  
  _L0(uRam0000001c);
  uRam00000000 = in_a0;
  FUN_000100b2();
  uRam0000001c = 0x204;
  if (_DAT_44800140 != 0x49504332) {
    FUN_000100f0();
  }
  _DAT_4480010c = 0x1f03;
  _DAT_44800114 = 0x3ff2a04;
  _DAT_44800118 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100b2(void)

{
  int unaff_s0;
  
  FUN_000100b2();
  *(undefined4 *)(unaff_s0 + 0x1c) = 0x204;
  if (_DAT_44800140 != 0x49504332) {
    FUN_000100f0();
  }
  _DAT_4480010c = 0x1f03;
  _DAT_44800114 = 0x3ff2a04;
  _DAT_44800118 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100f0(void)

{
  FUN_000100f0();
  _DAT_4480010c = 0x1f03;
  _DAT_44800114 = 0x3ff2a04;
  _DAT_44800118 = 0;
  return;
}



// DWARF DIE: 316c

void ipc_emb_tx_flow_off(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 313b

void ipc_emb_tx_flow_on(void)

{
  _DAT_4480010c = 0x1f00;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3096

void ipc_emb_tx_irq(void)

{
  uint uVar1;
  
  uVar1 = _DAT_4480011c & 0x1f00;
  if (uVar1 != 0) {
    FUN_0001021e();
    _DAT_44800108 = uVar1;
    _DAT_44800110 = uVar1;
  }
  return;
}



void FUN_0001021e(void)

{
  undefined4 unaff_s0;
  int unaff_s1;
  
  FUN_0001021e();
  *(undefined4 *)(unaff_s1 + 0x110) = unaff_s0;
  *(undefined4 *)(unaff_s1 + 0x108) = unaff_s0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2ed8

void ipc_emb_tx_evt(int queue_idx)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
  uVar5 = *(uint *)(queue_idx * 4);
  _L0();
  iVar1 = _DAT_0000001c;
  while( true ) {
    piVar2 = (int *)((_DAT_00000018 & 3) * 0x330 + iVar1);
    if (*piVar2 != -1) {
      _DAT_4480010c = 0x100;
      return;
    }
    if (((uVar5 & 0x800) == 0) && ((uRam00000000 & 0x440800) != 0)) break;
    piVar6 = piVar2 + 0x15;
    _DAT_44800108 = 0x100;
    FUN_00010314(piVar6,0,0x2cc);
    piVar2[0x31] = (int)(piVar2 + 0x43);
    piVar2[0x30] = (int)(piVar2 + 0x31);
    piVar3 = piVar2 + 1;
    do {
      piVar4 = piVar3 + 1;
      piVar3[0x15] = *piVar3;
      piVar3 = piVar4;
    } while (piVar6 != piVar4);
    piVar2[0x2e] = 0;
    *(undefined4 *)(*(int *)piVar2[0x30] + 0x10) = 0;
    piVar2[0x3c] = 0;
    piVar2[0x3d] = 0;
    piVar2[0x3e] = 0;
    piVar2[0x2a] = 0;
    _L0(piVar6,0);
    *piVar2 = 1;
    _DAT_00000018 += 1;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint unaff_s2;
  int iVar5;
  int unaff_s8;
  int *piVar6;
  
  _L0();
  uVar1 = *(uint *)(unaff_s8 + 0x18);
  iVar5 = *(int *)(unaff_s8 + 0x1c);
  while( true ) {
    piVar2 = (int *)((uVar1 & 3) * 0x330 + iVar5);
    if (*piVar2 != -1) {
      _DAT_4480010c = 0x100;
      return;
    }
    if (((unaff_s2 & 0x800) == 0) && ((uRam00000000 & 0x440800) != 0)) break;
    piVar6 = piVar2 + 0x15;
    _DAT_44800108 = 0x100;
    FUN_00010314(piVar6,0,0x2cc);
    piVar2[0x31] = (int)(piVar2 + 0x43);
    piVar2[0x30] = (int)(piVar2 + 0x31);
    piVar3 = piVar2 + 1;
    do {
      piVar4 = piVar3 + 1;
      piVar3[0x15] = *piVar3;
      piVar3 = piVar4;
    } while (piVar6 != piVar4);
    piVar2[0x2e] = 0;
    *(undefined4 *)(*(int *)piVar2[0x30] + 0x10) = 0;
    piVar2[0x3c] = 0;
    piVar2[0x3d] = 0;
    piVar2[0x3e] = 0;
    piVar2[0x2a] = 0;
    _L0(piVar6,0);
    *piVar2 = 1;
    uVar1 = *(int *)(unaff_s8 + 0x18) + 1;
    *(uint *)(unaff_s8 + 0x18) = uVar1;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010314(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_s0;
  uint uVar1;
  int unaff_s1;
  int *piVar2;
  int *piVar3;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint *unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int *unaff_s9;
  
  while( true ) {
    FUN_00010314(param_1,param_2,param_3);
    unaff_s0[0x31] = (int)(unaff_s0 + 0x43);
    unaff_s0[0x30] = (int)(unaff_s0 + 0x31);
    piVar2 = unaff_s0 + 1;
    do {
      piVar3 = piVar2 + 1;
      piVar2[0x15] = *piVar2;
      piVar2 = piVar3;
    } while (unaff_s9 != piVar3);
    unaff_s0[0x2e] = 0;
    *(undefined4 *)(*(int *)unaff_s0[0x30] + 0x10) = 0;
    unaff_s0[0x3c] = 0;
    unaff_s0[0x3d] = 0;
    unaff_s0[0x3e] = 0;
    unaff_s0[0x2a] = 0;
    _L0(unaff_s9,0);
    *unaff_s0 = 1;
    uVar1 = *(int *)(unaff_s8 + 0x18) + 1;
    *(uint *)(unaff_s8 + 0x18) = uVar1;
    unaff_s0 = (int *)((uVar1 & 3) * 0x330 + unaff_s4);
    if (*unaff_s0 != unaff_s5) break;
    if ((unaff_s1 == 0) && ((*unaff_s6 & unaff_s3) != 0)) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    param_1 = unaff_s0 + 0x15;
    *(undefined4 *)(unaff_s7 + 0x108) = 0x100;
    param_3 = 0x2cc;
    param_2 = 0;
    unaff_s9 = param_1;
  }
  _DAT_4480010c = 0x100;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(int *param_1,undefined4 param_2)

{
  int *unaff_s0;
  uint uVar1;
  int unaff_s1;
  int *piVar2;
  int *piVar3;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint *unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  while( true ) {
    _L0(param_1,param_2);
    *unaff_s0 = 1;
    uVar1 = *(int *)(unaff_s8 + 0x18) + 1;
    *(uint *)(unaff_s8 + 0x18) = uVar1;
    unaff_s0 = (int *)((uVar1 & 3) * 0x330 + unaff_s4);
    if (*unaff_s0 != unaff_s5) {
      _DAT_4480010c = 0x100;
      return;
    }
    if ((unaff_s1 == 0) && ((*unaff_s6 & unaff_s3) != 0)) break;
    param_1 = unaff_s0 + 0x15;
    *(undefined4 *)(unaff_s7 + 0x108) = 0x100;
    FUN_00010314(param_1,0,0x2cc);
    unaff_s0[0x31] = (int)(unaff_s0 + 0x43);
    unaff_s0[0x30] = (int)(unaff_s0 + 0x31);
    piVar2 = unaff_s0 + 1;
    do {
      piVar3 = piVar2 + 1;
      piVar2[0x15] = *piVar2;
      piVar2 = piVar3;
    } while (param_1 != piVar3);
    unaff_s0[0x2e] = 0;
    param_2 = 0;
    *(undefined4 *)(*(int *)unaff_s0[0x30] + 0x10) = 0;
    unaff_s0[0x3c] = 0;
    unaff_s0[0x3d] = 0;
    unaff_s0[0x3e] = 0;
    unaff_s0[0x2a] = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2dfc

void ipc_emb_cfmback_irq(void)

{
  uint uVar1;
  
  uVar1 = _DAT_4480011c;
  if ((_DAT_4480011c & 0x20) != 0) {
    _DAT_44800110 = 0x20;
    _DAT_44800108 = 0x20;
    FUN_000103a4();
  }
  if ((uVar1 & 0x10) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000103a4(void)

{
  uint unaff_s0;
  
  FUN_000103a4();
  if ((unaff_s0 & 0x10) == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 2de5

_Bool ipc_emb_hostrxdesc_check(void)

{
  return true;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2db2

void ipc_emb_radar_event_ind(void)

{
  _DAT_44800100 = 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2d6e

void ipc_emb_txcfm_ind(uint32_t queue_bits)

{
  _DAT_44800100 = queue_bits << 7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2d3b

void ipc_emb_prim_tbtt_ind(void)

{
  _DAT_44800100 = 0x10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2d08

void ipc_emb_sec_tbtt_ind(void)

{
  _DAT_44800100 = 0x20;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2c5b

void ipc_emb_msg_irq(void)

{
  if ((_DAT_4480011c & 2) != 0) {
    FUN_00010426();
    _DAT_44800110 = 2;
  }
  return;
}



void FUN_00010426(void)

{
  int unaff_s0;
  
  FUN_00010426();
  *(undefined4 *)(unaff_s0 + 0x110) = 2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2a7a

void ipc_emb_msg_evt(int dummy)

{
  undefined4 *extraout_a0;
  byte bVar1;
  undefined4 *puVar2;
  
  do {
    if ((_DAT_44800104 & 2) == 0) {
      FUN_00010480();
      _DAT_4480010c = 2;
      return;
    }
    _DAT_44800108 = 2;
    FUN_000104b8(_DAT_0000000a + 0xc);
    if (extraout_a0 == (undefined4 *)0x0) {
      FUN_000104d0(0x1d9);
    }
    *extraout_a0 = 0;
    *(undefined2 *)(extraout_a0 + 1) = _DAT_00000004;
    *(undefined2 *)((int)extraout_a0 + 6) = _DAT_00000006;
    *(undefined2 *)(extraout_a0 + 2) = 0xd;
    *(ushort *)((int)extraout_a0 + 10) = _DAT_0000000a;
    for (puVar2 = (undefined4 *)&DAT_0000000c;
        (int)(puVar2 + -3) < (int)(uint)*(ushort *)((int)extraout_a0 + 10); puVar2 = puVar2 + 1) {
      *(undefined4 *)((int)extraout_a0 + (int)puVar2) = *puVar2;
    }
    bVar1 = DAT_00000015 + 1;
    _DAT_00000008 = (ushort)DAT_00000015;
    DAT_00000015 = bVar1;
    if (*(ushort *)((int)extraout_a0 + 6) < 0xf) {
      if (0xc < *(ushort *)((int)extraout_a0 + 6)) goto _L0;
    }
    else {
      FUN_0001052e(0xb6);
_L0:
      FUN_00010542(0x1ed);
    }
    _DAT_44800100 = 4;
    FUN_00010570(extraout_a0 + 3);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010480(void)

{
  FUN_00010480();
  _DAT_4480010c = 2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000104b8(int param_1)

{
  byte bVar1;
  int unaff_s1;
  undefined4 *extraout_a0;
  int iVar2;
  int unaff_s2;
  
  do {
    FUN_000104b8(param_1);
    if (extraout_a0 == (undefined4 *)0x0) {
      FUN_000104d0(0x1d9);
    }
    *extraout_a0 = 0;
    *(undefined2 *)(extraout_a0 + 1) = *(undefined2 *)(unaff_s1 + 4);
    *(undefined2 *)((int)extraout_a0 + 6) = *(undefined2 *)(unaff_s1 + 6);
    *(undefined2 *)(extraout_a0 + 2) = 0xd;
    *(undefined2 *)((int)extraout_a0 + 10) = *(undefined2 *)(unaff_s1 + 10);
    for (iVar2 = 0xc; iVar2 + -0xc < (int)(uint)*(ushort *)((int)extraout_a0 + 10); iVar2 += 4) {
      *(undefined4 *)((int)extraout_a0 + iVar2) = *(undefined4 *)(unaff_s1 + iVar2);
    }
    bVar1 = *(byte *)(unaff_s2 + 0x15);
    *(byte *)(unaff_s2 + 0x15) = bVar1 + 1;
    *(ushort *)(unaff_s1 + 8) = (ushort)bVar1;
    if (*(ushort *)((int)extraout_a0 + 6) < 0xf) {
      if (0xc < *(ushort *)((int)extraout_a0 + 6)) goto _L0;
    }
    else {
      FUN_0001052e(0xb6);
_L0:
      FUN_00010542(0x1ed);
    }
    _DAT_44800100 = 4;
    FUN_00010570(extraout_a0 + 3);
    if ((_DAT_44800104 & 2) == 0) {
      FUN_00010480();
      _DAT_4480010c = 2;
      return;
    }
    _DAT_44800108 = 2;
    param_1 = *(ushort *)(unaff_s1 + 10) + 0xc;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000104d0(undefined4 param_1)

{
  byte bVar1;
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 *extraout_a0;
  int iVar2;
  int unaff_s2;
  
  do {
    FUN_000104d0(param_1);
    do {
      *unaff_s0 = 0;
      *(undefined2 *)(unaff_s0 + 1) = *(undefined2 *)(unaff_s1 + 4);
      *(undefined2 *)((int)unaff_s0 + 6) = *(undefined2 *)(unaff_s1 + 6);
      *(undefined2 *)(unaff_s0 + 2) = 0xd;
      *(undefined2 *)((int)unaff_s0 + 10) = *(undefined2 *)(unaff_s1 + 10);
      for (iVar2 = 0xc; iVar2 + -0xc < (int)(uint)*(ushort *)((int)unaff_s0 + 10); iVar2 += 4) {
        *(undefined4 *)((int)unaff_s0 + iVar2) = *(undefined4 *)(unaff_s1 + iVar2);
      }
      bVar1 = *(byte *)(unaff_s2 + 0x15);
      *(byte *)(unaff_s2 + 0x15) = bVar1 + 1;
      *(ushort *)(unaff_s1 + 8) = (ushort)bVar1;
      if (*(ushort *)((int)unaff_s0 + 6) < 0xf) {
        if (0xc < *(ushort *)((int)unaff_s0 + 6)) goto _L0;
      }
      else {
        FUN_0001052e(0xb6);
_L0:
        FUN_00010542(0x1ed);
      }
      _DAT_44800100 = 4;
      FUN_00010570(unaff_s0 + 3);
      if ((_DAT_44800104 & 2) == 0) {
        FUN_00010480();
        _DAT_4480010c = 2;
        return;
      }
      _DAT_44800108 = 2;
      FUN_000104b8(*(ushort *)(unaff_s1 + 10) + 0xc);
      unaff_s0 = extraout_a0;
    } while (extraout_a0 != (undefined4 *)0x0);
    param_1 = 0x1d9;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001052e(undefined4 param_1)

{
  byte bVar1;
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 *extraout_a0;
  int iVar2;
  int unaff_s2;
  
code_r0x0001052e:
  FUN_0001052e(param_1);
  do {
    FUN_00010542(0x1ed);
    do {
      _DAT_44800100 = 4;
      FUN_00010570(unaff_s0 + 3);
      if ((_DAT_44800104 & 2) == 0) {
        FUN_00010480();
        _DAT_4480010c = 2;
        return;
      }
      _DAT_44800108 = 2;
      FUN_000104b8(*(ushort *)(unaff_s1 + 10) + 0xc);
      if (extraout_a0 == (undefined4 *)0x0) {
        FUN_000104d0(0x1d9);
      }
      *extraout_a0 = 0;
      *(undefined2 *)(extraout_a0 + 1) = *(undefined2 *)(unaff_s1 + 4);
      *(undefined2 *)((int)extraout_a0 + 6) = *(undefined2 *)(unaff_s1 + 6);
      *(undefined2 *)(extraout_a0 + 2) = 0xd;
      *(undefined2 *)((int)extraout_a0 + 10) = *(undefined2 *)(unaff_s1 + 10);
      for (iVar2 = 0xc; iVar2 + -0xc < (int)(uint)*(ushort *)((int)extraout_a0 + 10); iVar2 += 4) {
        *(undefined4 *)((int)extraout_a0 + iVar2) = *(undefined4 *)(unaff_s1 + iVar2);
      }
      bVar1 = *(byte *)(unaff_s2 + 0x15);
      *(byte *)(unaff_s2 + 0x15) = bVar1 + 1;
      *(ushort *)(unaff_s1 + 8) = (ushort)bVar1;
      unaff_s0 = extraout_a0;
      if (0xe < *(ushort *)((int)extraout_a0 + 6)) {
        param_1 = 0xb6;
        goto code_r0x0001052e;
      }
    } while (*(ushort *)((int)extraout_a0 + 6) < 0xd);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010542(undefined4 param_1)

{
  byte bVar1;
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 *extraout_a0;
  int iVar2;
  int unaff_s2;
  
  do {
    FUN_00010542(param_1);
    do {
      _DAT_44800100 = 4;
      FUN_00010570(unaff_s0 + 3);
      if ((_DAT_44800104 & 2) == 0) {
        FUN_00010480();
        _DAT_4480010c = 2;
        return;
      }
      _DAT_44800108 = 2;
      FUN_000104b8(*(ushort *)(unaff_s1 + 10) + 0xc);
      if (extraout_a0 == (undefined4 *)0x0) {
        FUN_000104d0(0x1d9);
      }
      *extraout_a0 = 0;
      *(undefined2 *)(extraout_a0 + 1) = *(undefined2 *)(unaff_s1 + 4);
      *(undefined2 *)((int)extraout_a0 + 6) = *(undefined2 *)(unaff_s1 + 6);
      *(undefined2 *)(extraout_a0 + 2) = 0xd;
      *(undefined2 *)((int)extraout_a0 + 10) = *(undefined2 *)(unaff_s1 + 10);
      for (iVar2 = 0xc; iVar2 + -0xc < (int)(uint)*(ushort *)((int)extraout_a0 + 10); iVar2 += 4) {
        *(undefined4 *)((int)extraout_a0 + iVar2) = *(undefined4 *)(unaff_s1 + iVar2);
      }
      bVar1 = *(byte *)(unaff_s2 + 0x15);
      *(byte *)(unaff_s2 + 0x15) = bVar1 + 1;
      *(ushort *)(unaff_s1 + 8) = (ushort)bVar1;
      unaff_s0 = extraout_a0;
      if (0xe < *(ushort *)((int)extraout_a0 + 6)) {
        FUN_0001052e(0xb6);
        break;
      }
    } while (*(ushort *)((int)extraout_a0 + 6) < 0xd);
    param_1 = 0x1ed;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010570(undefined4 *param_1)

{
  byte bVar1;
  int unaff_s1;
  undefined4 *extraout_a0;
  int iVar2;
  int unaff_s2;
  int unaff_s7;
  
  do {
    FUN_00010570(param_1);
    if ((*(uint *)(unaff_s7 + 0x104) & 2) == 0) {
      FUN_00010480();
      _DAT_4480010c = 2;
      return;
    }
    _DAT_44800108 = 2;
    FUN_000104b8(*(ushort *)(unaff_s1 + 10) + 0xc);
    if (extraout_a0 == (undefined4 *)0x0) {
      FUN_000104d0(0x1d9);
    }
    *extraout_a0 = 0;
    *(undefined2 *)(extraout_a0 + 1) = *(undefined2 *)(unaff_s1 + 4);
    *(undefined2 *)((int)extraout_a0 + 6) = *(undefined2 *)(unaff_s1 + 6);
    *(undefined2 *)(extraout_a0 + 2) = 0xd;
    *(undefined2 *)((int)extraout_a0 + 10) = *(undefined2 *)(unaff_s1 + 10);
    for (iVar2 = 0xc; iVar2 + -0xc < (int)(uint)*(ushort *)((int)extraout_a0 + 10); iVar2 += 4) {
      *(undefined4 *)((int)extraout_a0 + iVar2) = *(undefined4 *)(unaff_s1 + iVar2);
    }
    bVar1 = *(byte *)(unaff_s2 + 0x15);
    *(byte *)(unaff_s2 + 0x15) = bVar1 + 1;
    *(ushort *)(unaff_s1 + 8) = (ushort)bVar1;
    if (*(ushort *)((int)extraout_a0 + 6) < 0xf) {
      if (0xc < *(ushort *)((int)extraout_a0 + 6)) goto _L0;
    }
    else {
      FUN_0001052e(0xb6);
_L0:
      FUN_00010542(0x1ed);
    }
    unaff_s7 = 0x44800000;
    _DAT_44800100 = 4;
    param_1 = extraout_a0 + 3;
  } while( true );
}



// DWARF DIE: 374f

void ipc_emb_msg_dma_int_handler(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2a1e

void ipc_emb_dbg_dma_int_handler(void)

{
  _DAT_44800100 = 1;
  _DAT_44a00020 = 0x80;
  return;
}



void ipc_emb_dump(void)

{
  return;
}


