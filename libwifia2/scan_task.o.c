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
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ulong uint32_t;

typedef ushort uint16_t;

typedef uchar uint8_t;

typedef char int8_t;

struct scan_chan_tag {
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct mac_addr {
    uint16_t array[3];
};

struct mac_ssid {
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct scan_start_req {
    struct scan_chan_tag chan[42];
    struct mac_ssid ssid[2];
    struct mac_addr bssid;
    undefined field_0x146;
    undefined field_0x147;
    uint32_t add_ies;
    uint16_t add_ie_len;
    uint8_t vif_idx;
    uint8_t chan_cnt;
    uint8_t ssid_cnt;
    _Bool no_cck;
    undefined field_0x152;
    undefined field_0x153;
};

typedef struct scan_start_cfm scan_start_cfm, *Pscan_start_cfm;

struct scan_start_cfm {
    uint8_t status;
};

typedef enum scan_state_tag {
    SCAN_STATE_MAX=4,
    SCAN_WAIT_BEACON_PROBE_RSP=3,
    SCAN_WAIT_IE_DWNLD=1,
    SCAN_IDLE=0,
    SCAN_WAIT_CHANNEL=2
} scan_state_tag;

typedef enum scan_msg_tag {
    SCAN_START_REQ=2048,
    SCAN_START_CFM=2049,
    SCAN_CANCEL_CFM=2052,
    SCAN_MAX=2054,
    SCAN_CANCEL_REQ=2051,
    SCAN_TIMER=2053,
    SCAN_DONE_IND=2050
} scan_msg_tag;

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictdd_for___value anon_union.conflictdd_for___value, *Panon_union.conflictdd_for___value;

typedef uint wint_t;

union anon_union.conflictdd_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictdd_for___value __value;
};

typedef union anon_union.conflictdd anon_union.conflictdd, *Panon_union.conflictdd;

union anon_union.conflictdd {
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format {
    uint32_t word[4];
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

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr {
    struct co_list_hdr * next;
};

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag {
    struct co_list prog;
};

typedef ulonglong uint64_t;

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc {
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

struct phy_channel_info {
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd {
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_payloaddesc {
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
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

struct rx_dmadesc {
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef enum mm_msg_tag {
    MM_BFMER_ENABLE_REQ=80,
    MM_SECONDARY_TBTT_IND=45,
    MM_DENOISE_REQ=48,
    MM_SET_EDCA_CFM=27,
    MM_SET_P2P_NOA_CFM=83,
    MM_SET_VIF_STATE_CFM=31,
    MM_RESET_CFM=1,
    MM_MU_GROUP_UPDATE_CFM=91,
    MM_REMAIN_ON_CHANNEL_CFM=71,
    MM_BA_DEL_CFM=43,
    MM_CHANNEL_SURVEY_IND=79,
    MM_SET_BEACON_INT_CFM=21,
    MM_SET_SLOTTIME_REQ=32,
    MM_REMOVE_IF_REQ=8,
    MM_RSSI_STATUS_IND=87,
    MM_SET_PS_MODE_CFM=50,
    MM_SET_BSSID_CFM=25,
    MM_CHAN_CTXT_ADD_REQ=51,
    MM_P2P_NOA_UPD_IND=85,
    MM_SET_IDLE_REQ=34,
    MM_KEY_ADD_REQ=36,
    MM_SET_P2P_OPPPS_CFM=84,
    MM_MONITOR_CFM=93,
    MM_BA_ADD_REQ=40,
    MM_MONITOR_REQ=92,
    MM_CSA_FINISH_IND=88,
    MM_SET_VIF_STATE_REQ=30,
    MM_CONNECTION_LOSS_IND=67,
    MM_SET_BASIC_RATES_REQ=22,
    MM_CHAN_CTXT_DEL_CFM=54,
    MM_CHAN_CTXT_UNLINK_REQ=57,
    MM_START_CFM=3,
    MM_TIM_UPDATE_CFM=66,
    MM_CHAN_CTXT_SCHED_REQ=61,
    MM_CHAN_CTXT_UNLINK_CFM=58,
    MM_P2P_VIF_PS_CHANGE_IND=77,
    MM_SET_POWER_REQ=46,
    MM_SET_DTIM_REQ=18,
    MM_TRAFFIC_REQ_IND=74,
    MM_BA_ADD_CFM=41,
    MM_CHAN_CTXT_UPDATE_REQ=59,
    MM_FORCE_IDLE_REQ=96,
    MM_KEY_DEL_REQ=38,
    MM_SET_PS_OPTIONS_CFM=76,
    MM_SET_BSSID_REQ=24,
    MM_SET_CHANNEL_CFM=17,
    MM_CHANNEL_PRE_SWITCH_IND=69,
    MM_TIM_UPDATE_REQ=65,
    MM_CHANNEL_SWITCH_IND=68,
    MM_MONITOR_CHANNEL_REQ=94,
    MM_SET_BASIC_RATES_CFM=23,
    MM_BCN_CHANGE_REQ=63,
    MM_REMAIN_ON_CHANNEL_EXP_IND=72,
    MM_CHAN_CTXT_DEL_REQ=53,
    MM_STA_ADD_CFM=11,
    MM_PS_CHANGE_IND=73,
    MM_CHAN_CTXT_LINK_CFM=56,
    MM_SET_PS_OPTIONS_REQ=75,
    MM_START_REQ=2,
    MM_SET_MODE_CFM=29,
    MM_VERSION_CFM=5,
    MM_CHAN_CTXT_UPDATE_CFM=60,
    MM_KEY_DEL_CFM=39,
    MM_SET_MODE_REQ=28,
    MM_CHAN_CTXT_SCHED_CFM=62,
    MM_SET_CHANNEL_REQ=16,
    MM_SET_FILTER_CFM=15,
    MM_MONITOR_CHANNEL_CFM=95,
    MM_PRIMARY_TBTT_IND=44,
    MM_SET_POWER_CFM=47,
    MM_STA_DEL_REQ=12,
    MM_ADD_IF_REQ=6,
    MM_CSA_COUNTER_IND=78,
    MM_SET_DTIM_CFM=19,
    MM_STA_ADD_REQ=10,
    MM_CHAN_CTXT_ADD_CFM=52,
    MM_ADD_IF_CFM=7,
    MM_CFG_RSSI_REQ=86,
    MM_RESET_REQ=0,
    MM_BCN_CHANGE_CFM=64,
    MM_SCAN_CHANNEL_START_IND=97,
    MM_REMOVE_IF_CFM=9,
    MM_SET_P2P_NOA_REQ=81,
    MM_REMAIN_ON_CHANNEL_REQ=70,
    MM_CSA_TRAFFIC_IND=89,
    MM_SCAN_CHANNEL_END_IND=98,
    MM_VERSION_REQ=4,
    MM_SET_FILTER_REQ=14,
    MM_STA_DEL_CFM=13,
    MM_SET_EDCA_REQ=26,
    MM_SET_PS_MODE_REQ=49,
    MM_SET_P2P_OPPPS_REQ=82,
    MM_MAX=99,
    MM_MU_GROUP_UPDATE_REQ=90,
    MM_SET_IDLE_CFM=35,
    MM_SET_BEACON_INT_REQ=20,
    MM_SET_SLOTTIME_CFM=33,
    MM_KEY_ADD_CFM=37,
    MM_CHAN_CTXT_LINK_REQ=55,
    MM_BA_DEL_REQ=42
} mm_msg_tag;

typedef enum mm_state_tag {
    MM_IDLE=0,
    MM_STATE_MAX=4,
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3
} mm_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef uint16_t ke_state_t;

typedef uint16_t ke_msg_id_t;

typedef struct ke_msg ke_msg, *Pke_msg;

typedef uint16_t ke_task_id_t;

struct ke_msg {
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t[0] param;
};

typedef enum ke_msg_status_tag {
    KE_MSG_SAVED=2,
    KE_MSG_NO_FREE=1,
    KE_MSG_CONSUMED=0
} ke_msg_status_tag;

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag {
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag {
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw {
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

struct bam_env_tag {
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

struct sta_mgmt_ba_info {
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
    UAPSD_TRAFFIC_HOST=4,
    UAPSD_TRAFFIC_INT=8,
    PS_TRAFFIC_HOST=1,
    PS_TRAFFIC_INT=2,
    UAPSD_TRAFFIC=12
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

typedef union anon_union.conflictb14_for_u anon_union.conflictb14_for_u, *Panon_union.conflictb14_for_u;

typedef struct anon_struct.conflictab4 anon_struct.conflictab4, *Panon_struct.conflictab4;

typedef struct anon_struct.conflictaeb anon_struct.conflictaeb, *Panon_struct.conflictaeb;

struct anon_struct.conflictaeb {
    uint32_t key[4];
};

struct rc_sta_stats {
};

struct sta_pol_tbl_cntl {
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct mac_rateset {
    uint8_t length;
    uint8_t array[12];
};

struct mac_htcapability {
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

struct anon_struct.conflictab4 {
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

union anon_union.conflictb14_for_u {
    struct anon_struct.conflictab4 mic;
    struct anon_struct.conflictaeb mfp;
};

struct key_info_tag {
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb14_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

struct sta_mgmt_sec_info {
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct mac_vhtcapability {
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

struct mac_sta_info {
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

struct sta_info_tag {
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

struct txl_buffer_control {
};

typedef struct sta_info_env_tag sta_info_env_tag, *Psta_info_env_tag;

struct sta_info_env_tag {
    struct co_list free_sta_list;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef enum anon_enum_8.conflict96f {
    HAL_MM_TIMER=7,
    TASK_APM=7,
    TASK_SCANU=4,
    CO_BUSY=8,
    TASK_API=13,
    TASK_DBG=1,
    IPC_DMA_CHANNEL_MAX=4,
    TASK_LAST_EMB=12,
    DMA_MAX=2,
    PHY_BAND_MAX=2,
    TASK_NONE=-1,
    CO_NOT_FOUND=5,
    HAL_AC2_TIMER=2,
    CO_EMPTY=2,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    TID_2=2,
    TID_5=5,
    TID_4=4,
    TID_7=7,
    TID_6=6,
    DMA_DL=0,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    TID_MGT=8,
    HAL_TIMER_MAX=9,
    BROADCAST_STA_IDX_MIN=10,
    CO_NO_ELT_IN_USE=7,
    HAL_AC1_TIMER=1,
    TASK_MM=0,
    AC_BE=1,
    AC_BK=0,
    PHY_BAND_5G=1,
    STA_MAX=12,
    TASK_ME=5,
    DMA_UL=1,
    IPC_DMA_CHANNEL_DATA_RX=1,
    AC_VI=2,
    AC_VO=3,
    TASK_MESH=9,
    HAL_AC3_TIMER=3,
    TASK_CFG=12,
    TASK_MAX=14,
    TASK_TDLS=3,
    TASK_RXU=11,
    HAL_KE_TIMER=8,
    TASK_SCAN=2,
    BROADCAST_STA_IDX_MAX=11,
    PHY_BAND_2G4=0,
    CO_OK=0,
    HAL_AC0_TIMER=0,
    AC_MAX=4,
    HAL_IDLE_TIMER=5,
    INVALID_STA_IDX=-1,
    HAL_RX_TIMER=6,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    CO_BAD_PARAM=4,
    CO_FULL=3,
    TID_MAX=9,
    TASK_BAM=8,
    HAL_BCN_TIMER=4,
    CO_OP_IN_PROGRESS=9,
    IPC_DMA_CHANNEL_DATA_TX=3,
    CO_FAIL=1,
    CO_NO_MORE_ELT_AVAILABLE=6,
    TASK_SM=6,
    TASK_HOSTAPD_U=10
} anon_enum_8.conflict96f;

typedef union anon_union.conflictb14 anon_union.conflictb14, *Panon_union.conflictb14;

union anon_union.conflictb14 {
    struct anon_struct.conflictab4 mic;
    struct anon_struct.conflictaeb mfp;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler {
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler {
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag {
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

struct tx_pbd {
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct scan_probe_req_ie_tag {
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag {
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

typedef union anon_union.conflict10d8 anon_union.conflict10d8, *Panon_union.conflict10d8;

union anon_union.conflict10d8 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

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

typedef union anon_union.conflict10b3 anon_union.conflict10b3, *Panon_union.conflict10b3;

union anon_union.conflict10b3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef union anon_union.conflict10b3_for_field_3 anon_union.conflict10b3_for_field_3, *Panon_union.conflict10b3_for_field_3;

typedef union anon_union.conflict10d8_for_field_4 anon_union.conflict10d8_for_field_4, *Panon_union.conflict10d8_for_field_4;

typedef union anon_union.conflict10fd_for_field_5 anon_union.conflict10fd_for_field_5, *Panon_union.conflict10fd_for_field_5;

union anon_union.conflict10d8_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict10b3_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflict10fd_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict10b3_for_field_3 field_3;
    union anon_union.conflict10d8_for_field_4 field_4;
    union anon_union.conflict10fd_for_field_5 field_5;
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

typedef union anon_union.conflict10fd anon_union.conflict10fd, *Panon_union.conflict10fd;

union anon_union.conflict10fd {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

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

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
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

struct anon_struct.conflict72b {
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

struct anon_struct.conflict870 {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8b7_for__new {
    struct anon_struct.conflict72b _reent;
    struct anon_struct.conflict870 _unused;
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

typedef union anon_union.conflict8b7 anon_union.conflict8b7, *Panon_union.conflict8b7;

union anon_union.conflict8b7 {
    struct anon_struct.conflict72b _reent;
    struct anon_struct.conflict870 _unused;
};

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

struct rx_cntrl_ipcdesc {
    uint32_t host_id;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon {
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli {
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_rx_status {
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

struct rxu_cntrl_env_tag {
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




int scan_cancel_req_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  undefined2 in_register_00002036;
  
  iVar1 = _L0(2);
  if (iVar1 == 0) {
    _LVL5(1,CONCAT22(in_register_00002036,src_id));
  }
  else {
    DAT_0000001b = 1;
  }
  return 0;
}



undefined4 _L0(undefined4 uRam00000018)

{
  int iVar1;
  undefined4 in_stack_0000000c;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    _LVL5(1,in_stack_0000000c);
  }
  else {
    DAT_0000001b = 1;
  }
  return 0;
}



undefined4 _LVL5(void)

{
  _LVL5();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int scan_start_req_handler
              (ke_msg_id_t msgid,scan_start_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  int iVar2;
  undefined2 in_register_00002032;
  undefined2 in_register_00002036;
  
  puVar1 = (undefined *)
           _L0(0x801,CONCAT22(in_register_00002036,src_id),CONCAT22(in_register_00002032,dest_id),1)
  ;
  iVar2 = FUN_00010058(2);
  if (iVar2 == 0) {
    if (param->chan_cnt == '\0') {
      FUN_0001007c(0,0,0x46);
    }
    *puVar1 = 0;
    DAT_0000001a = 0;
    iVar2 = 1;
    _DAT_00000010 = param;
    _DAT_00000018 = src_id;
    _L0(param);
  }
  else {
    *puVar1 = 8;
    iVar2 = 0;
  }
  FUN_000100a8(puVar1);
  return iVar2;
}



undefined4 _L0(int iRam00000010,undefined3 param_2)

{
  int unaff_s1;
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 unaff_s2;
  
  puVar2 = (undefined *)_L0();
  iVar3 = FUN_00010058(2);
  if (iVar3 == 0) {
    if (*(char *)(unaff_s1 + 0x14f) == '\0') {
      FUN_0001007c(0,0,0x46);
    }
    *puVar2 = 0;
    DAT_0000001a = 0;
    uVar1 = 1;
    iRam00000010 = unaff_s1;
    param_2._0_2_ = unaff_s2;
    _L0();
  }
  else {
    *puVar2 = 8;
    uVar1 = 0;
  }
  FUN_000100a8(puVar2);
  return uVar1;
}



undefined4 FUN_00010058(int iRam00000010,undefined3 param_2)

{
  undefined *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  undefined2 unaff_s2;
  
  iVar2 = FUN_00010058();
  if (iVar2 == 0) {
    if (*(char *)(unaff_s1 + 0x14f) == '\0') {
      FUN_0001007c(0,0,0x46);
    }
    *unaff_s0 = 0;
    DAT_0000001a = 0;
    uVar1 = 1;
    iRam00000010 = unaff_s1;
    param_2._0_2_ = unaff_s2;
    _L0();
  }
  else {
    *unaff_s0 = 8;
    uVar1 = 0;
  }
  FUN_000100a8();
  return uVar1;
}



undefined4 FUN_0001007c(undefined4 uRam00000010,undefined3 param_2)

{
  undefined *unaff_s0;
  undefined4 unaff_s1;
  undefined2 unaff_s2;
  
  FUN_0001007c();
  *unaff_s0 = 0;
  DAT_0000001a = 0;
  uRam00000010 = unaff_s1;
  param_2._0_2_ = unaff_s2;
  _L0();
  FUN_000100a8();
  return 1;
}



void _L0(void)

{
  _L0();
  FUN_000100a8();
  return;
}



void FUN_000100a8(void)

{
  FUN_000100a8();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int mm_scan_channel_end_ind_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  undefined2 in_register_00002032;
  undefined2 in_register_00002036;
  
  iVar1 = _L0(2,CONCAT22(in_register_00002032,dest_id),CONCAT22(in_register_00002036,src_id));
  if (iVar1 != 3) {
    FUN_000100f2(0,0,0xc4);
  }
  _DAT_00000004 = _DAT_00000004 & 0xffffddff;
  _DAT_44b00060 = _DAT_00000004 | uRam00000000;
  DAT_0000001a = DAT_0000001a + 1;
  if ((DAT_0000001a < *(byte *)(_DAT_00000010 + 0x14f)) && (DAT_0000001b == '\0')) {
    _L0();
  }
  else {
    FUN_00010156(_DAT_00000010 + -0xc);
    if (DAT_0000001b == '\0') {
      FUN_0001018c(0x802,_DAT_00000018,2);
    }
    else {
      FUN_0001016a(0);
      DAT_0000001b = '\0';
    }
    FUN_0001017a(2,0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(int iRam00000010,undefined3 param_2)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 3) {
    FUN_000100f2(0,0,0xc4);
  }
  _DAT_00000004 = _DAT_00000004 & 0xffffddff;
  _DAT_44b00060 = _DAT_00000004 | uRam00000000;
  DAT_0000001a = DAT_0000001a + 1;
  if ((DAT_0000001a < *(byte *)(iRam00000010 + 0x14f)) && (DAT_0000001b == '\0')) {
    _L0();
  }
  else {
    FUN_00010156(iRam00000010 + -0xc);
    if (DAT_0000001b == '\0') {
      FUN_0001018c(0x802,(undefined2)param_2,2);
    }
    else {
      FUN_0001016a(0);
      DAT_0000001b = '\0';
    }
    FUN_0001017a(2,0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000100f2(int iRam00000010,undefined3 param_2)

{
  FUN_000100f2();
  _DAT_00000004 = _DAT_00000004 & 0xffffddff;
  _DAT_44b00060 = _DAT_00000004 | uRam00000000;
  DAT_0000001a = DAT_0000001a + 1;
  if ((DAT_0000001a < *(byte *)(iRam00000010 + 0x14f)) && (DAT_0000001b == '\0')) {
    _L0();
  }
  else {
    FUN_00010156(iRam00000010 + -0xc);
    if (DAT_0000001b == '\0') {
      FUN_0001018c(0x802,(undefined2)param_2,2);
    }
    else {
      FUN_0001016a(0);
      DAT_0000001b = '\0';
    }
    FUN_0001017a(2,0);
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_00010156(void)

{
  int unaff_s0;
  
  FUN_00010156();
  if (*(char *)(unaff_s0 + 0x1b) == '\0') {
    FUN_0001018c(0x802,*(undefined2 *)(unaff_s0 + 0x18),2);
  }
  else {
    FUN_0001016a(0);
    *(undefined *)(unaff_s0 + 0x1b) = 0;
  }
  FUN_0001017a(2,0);
  return 0;
}



undefined4 FUN_0001016a(void)

{
  int unaff_s0;
  
  FUN_0001016a();
  *(undefined *)(unaff_s0 + 0x1b) = 0;
  FUN_0001017a(2,0);
  return 0;
}



undefined4 FUN_0001017a(void)

{
  FUN_0001017a();
  return 0;
}



undefined4 FUN_0001018c(void)

{
  FUN_0001018c();
  FUN_0001017a(2,0);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int mm_scan_channel_start_ind_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 in_register_00002032;
  undefined2 in_register_00002036;
  
  iVar1 = _DAT_00000010;
  uVar2 = (uint)DAT_0000001a;
  iVar3 = _L0(2,CONCAT22(in_register_00002032,dest_id),CONCAT22(in_register_00002036,src_id));
  if (iVar3 != 2) {
    FUN_000101d0(0,0,0x9d);
  }
  _DAT_00000004 = _DAT_00000004 | 0x2200;
  _DAT_44b00060 = _DAT_00000004 | uRam00000000;
  if ((*(byte *)(iVar1 + uVar2 * 6 + 3) & 1) == 0) {
    _L0();
  }
  FUN_00010212(2,3);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 2) {
    FUN_000101d0(0,0,0x9d);
  }
  _DAT_00000004 = _DAT_00000004 | 0x2200;
  _DAT_44b00060 = _DAT_00000004 | uRam00000000;
  if ((*(byte *)(unaff_s0 + unaff_s1 * 6 + 3) & 1) == 0) {
    _L0();
  }
  FUN_00010212(2,3);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000101d0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_000101d0();
  _DAT_00000004 = _DAT_00000004 | 0x2200;
  _DAT_44b00060 = _DAT_00000004 | uRam00000000;
  if ((*(byte *)(unaff_s0 + unaff_s1 * 6 + 3) & 1) == 0) {
    _L0();
  }
  FUN_00010212(2,3);
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010212(2,3);
  return 0;
}



undefined4 FUN_00010212(void)

{
  FUN_00010212();
  return 0;
}


