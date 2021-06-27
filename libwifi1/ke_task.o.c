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
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef enum scan_state_tag {
    SCAN_IDLE=0,
    SCAN_STATE_MAX=4,
    SCAN_WAIT_BEACON_PROBE_RSP=3,
    SCAN_WAIT_CHANNEL=2,
    SCAN_WAIT_IE_DWNLD=1
} scan_state_tag;

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ulong uint32_t;

typedef ushort uint16_t;

typedef uchar uint8_t;

typedef char int8_t;

struct scan_chan_tag { // DWARF DIE: c9d
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct mac_addr { // DWARF DIE: 9fd
    uint16_t array[3];
};

struct mac_ssid { // DWARF DIE: a2d
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct scan_start_req { // DWARF DIE: 1c22
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

typedef int _ssize_t;

typedef union anon_union.conflictf3 anon_union.conflictf3, *Panon_union.conflictf3;

typedef uint wint_t;

union anon_union.conflictf3 { // DWARF DIE: f3
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictf3_for___value anon_union.conflictf3_for___value, *Panon_union.conflictf3_for___value;

union anon_union.conflictf3_for___value { // DWARF DIE: f3
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 125
    int __count;
    union anon_union.conflictf3_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 1176
    uint32_t word[4];
};

typedef struct txdesc txdesc, *Ptxdesc;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef struct umacdesc umacdesc, *Pumacdesc;

typedef struct lmacdesc lmacdesc, *Plmacdesc;

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct tx_agg_desc tx_agg_desc, *Ptx_agg_desc;

typedef struct txl_buffer_tag txl_buffer_tag, *Ptxl_buffer_tag;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef union anon_union.conflict2f94_for_field_0 anon_union.conflict2f94_for_field_0, *Panon_union.conflict2f94_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1457_for_field_3 anon_union.conflict1457_for_field_3, *Panon_union.conflict1457_for_field_3;

typedef union anon_union.conflict147c_for_field_4 anon_union.conflict147c_for_field_4, *Panon_union.conflict147c_for_field_4;

typedef union anon_union.conflict14a1_for_field_5 anon_union.conflict14a1_for_field_5, *Panon_union.conflict14a1_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: dc5
    struct co_list_hdr * next;
};

struct hostdesc { // DWARF DIE: 2ad5
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

struct tx_cfm_tag { // DWARF DIE: 18b4
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct tx_policy_tbl { // DWARF DIE: 13bb
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 142c
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

union anon_union.conflict2f94_for_field_0 { // DWARF DIE: 2f94
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct lmacdesc { // DWARF DIE: 2c0d
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct umacdesc { // DWARF DIE: 2bb1
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

union anon_union.conflict147c_for_field_4 { // DWARF DIE: 147c
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict14a1_for_field_5 { // DWARF DIE: 14a1
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict1457_for_field_3 { // DWARF DIE: 1457
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd { // DWARF DIE: 14c6
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1457_for_field_3 field_3;
    union anon_union.conflict147c_for_field_4 field_4;
    union anon_union.conflict14a1_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1923
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct txdesc { // DWARF DIE: 2d29
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_pbd { // DWARF DIE: 158f
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct dma_desc { // DWARF DIE: 132a
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct txl_buffer_control { // DWARF DIE: 22e7
    union anon_union.conflict2f94_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct txl_buffer_tag { // DWARF DIE: 2c48
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

struct tx_agg_desc { // DWARF DIE: 1954
    uint8_t reserved;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 137e
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: df0
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag { // DWARF DIE: 1e1a
    struct co_list prog;
};

typedef enum cfg_state_tag {
    CFG_IDLE=0,
    CFG_STATE_MAX=1
} cfg_state_tag;

typedef struct anon_struct.conflict1d58 anon_struct.conflict1d58, *Panon_struct.conflict1d58;

struct anon_struct.conflict1d58 { // DWARF DIE: 1d58
    uint32_t task;
    uint32_t element;
    uint32_t length;
    uint32_t[0] buf;
};

typedef ulonglong uint64_t;

typedef long int32_t;

typedef enum sm_state_tag {
    SM_ACTIVATING=7,
    SM_ASSOCIATING=6,
    SM_AUTHENTICATING=5,
    SM_BSS_PARAM_SETTING=4,
    SM_DISCONNECTING=8,
    SM_IDLE=0,
    SM_JOINING=2,
    SM_SCANNING=1,
    SM_STATE_MAX=9,
    SM_STA_ADDING=3
} sm_state_tag;

typedef struct sm_connect_req sm_connect_req, *Psm_connect_req;

struct sm_connect_req { // DWARF DIE: 28e8
    struct mac_ssid ssid;
    struct mac_addr bssid;
    struct scan_chan_tag chan;
    undefined field_0x2e;
    undefined field_0x2f;
    uint32_t flags;
    uint16_t ctrl_port_ethertype;
    uint16_t ie_len;
    uint16_t listen_interval;
    _Bool dont_wait_bcmc;
    uint8_t auth_type;
    uint8_t uapsd_queues;
    uint8_t vif_idx;
    undefined field_0x3e;
    undefined field_0x3f;
    uint32_t ie_buf[64];
    _Bool is_supplicant_enabled;
    uint8_t phrase[64];
    uint8_t phrase_pmk[64];
    undefined field_0x1c1;
    undefined field_0x1c2;
    undefined field_0x1c3;
};

typedef struct sm_connect_ind sm_connect_ind, *Psm_connect_ind;

struct sm_connect_ind { // DWARF DIE: 29c3
    uint16_t status_code;
    struct mac_addr bssid;
    _Bool roamed;
    uint8_t vif_idx;
    uint8_t ap_idx;
    uint8_t ch_idx;
    _Bool qos;
    uint8_t acm;
    uint16_t assoc_req_ie_len;
    uint16_t assoc_rsp_ie_len;
    undefined field_0x12;
    undefined field_0x13;
    uint32_t assoc_ie_buf[200];
    uint16_t aid;
    uint8_t band;
    undefined field_0x337;
    uint16_t center_freq;
    uint8_t width;
    undefined field_0x33b;
    uint32_t center_freq1;
    uint32_t center_freq2;
    uint32_t ac_param[4];
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 16ef
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

struct phy_channel_info { // DWARF DIE: 11ae
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 1784
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 15e4
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

struct rx_payloaddesc { // DWARF DIE: 1857
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 17e7
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef enum bam_state_tag {
    BAM_ACTIVE=1,
    BAM_CHECK_ADMISSION=3,
    BAM_IDLE=0,
    BAM_RESET=4,
    BAM_STATE_MAX=5,
    BAM_WAIT_RSP=2
} bam_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 11e6
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

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 10a8
};

struct ke_env_tag { // DWARF DIE: 1059
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef enum hostapd_state_tag {
    HOSTAPD_STATE_IDLE=0,
    HOSTAPD_STATE_MAX=1
} hostapd_state_tag;

typedef struct apm_start_req apm_start_req, *Papm_start_req;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

struct mac_rateset { // DWARF DIE: a82
    uint8_t length;
    uint8_t array[12];
};

struct apm_start_req { // DWARF DIE: 342d
Missing member bcn_buf : uint8_t[1] at offset 0xa7 [Unsupported interior flex array: uint8_t[1]]
    struct mac_rateset basic_rates;
    undefined field_0xd;
    struct scan_chan_tag chan;
    uint32_t center_freq1;
    uint32_t center_freq2;
    uint8_t ch_width;
    uint8_t hidden_ssid;
    undefined field_0x1e;
    undefined field_0x1f;
    uint32_t bcn_addr;
    uint16_t bcn_len;
    uint16_t tim_oft;
    uint16_t bcn_int;
    undefined field_0x2a;
    undefined field_0x2b;
    uint32_t flags;
    uint16_t ctrl_port_ethertype;
    uint8_t tim_len;
    uint8_t vif_idx;
    _Bool apm_emb_enabled;
    struct mac_rateset rate_set;
    uint8_t beacon_period;
    uint8_t qos_supported;
    struct mac_ssid ssid;
    uint8_t ap_sec_type;
    uint8_t phrase[64];
    undefined field_0xa7;
};

typedef enum apm_state_tag {
    APM_BCN_SETTING=2,
    APM_BSS_PARAM_SETTING=1,
    APM_IDLE=0,
    APM_STATE_MAX=3
} apm_state_tag;

typedef uint16_t ke_state_t;

typedef uint16_t ke_msg_id_t;

typedef struct ke_msg ke_msg, *Pke_msg;

typedef uint16_t ke_task_id_t;

struct ke_msg { // DWARF DIE: e50
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t[0] param;
};

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

typedef struct anon_struct.conflict3386 anon_struct.conflict3386, *Panon_struct.conflict3386;

struct anon_struct.conflict3386 { // DWARF DIE: 3386
    uint8_t mac[6];
    uint8_t used;
};

typedef struct apm apm, *Papm;

struct apm { // DWARF DIE: 33aa
    struct apm_start_req * param;
    struct co_list bss_config;
    uint8_t aging_sta_idx;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    uint8_t * bcn_buf;
    _Bool apm_emb_enabled;
    uint8_t hidden_ssid;
    uint8_t assoc_sta_count;
    uint8_t max_sta_supported;
    struct anon_struct.conflict3386 aid_list[10];
    undefined field_0x5e;
    undefined field_0x5f;
};

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list { // DWARF DIE: 2df2
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 2e3a
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 1b20
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 1ad9
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 20c5
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

struct bam_env_tag { // DWARF DIE: 2138
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

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 3068
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 2481
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

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef union anon_union.conflictb2a_for_u anon_union.conflictb2a_for_u, *Panon_union.conflictb2a_for_u;

typedef struct rc_rate_stats rc_rate_stats, *Prc_rate_stats;

typedef struct step step, *Pstep;

typedef union anon_union.conflict279d_for_rate_map anon_union.conflict279d_for_rate_map, *Panon_union.conflict279d_for_rate_map;

typedef struct anon_struct.conflictaca anon_struct.conflictaca, *Panon_struct.conflictaca;

typedef struct anon_struct.conflictb01 anon_struct.conflictb01, *Panon_struct.conflictb01;

struct anon_struct.conflictaca { // DWARF DIE: aca
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct rc_rate_stats { // DWARF DIE: 2700
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step { // DWARF DIE: 2776
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

union anon_union.conflict279d_for_rate_map { // DWARF DIE: 279d
    uint8_t ht[4];
};

struct rc_sta_stats { // DWARF DIE: 231b
    uint32_t last_rc_time;
    struct rc_rate_stats rate_stats[10];
    struct step retry[4];
    struct step max_tp_2_trial;
    uint16_t ampdu_len;
    uint16_t ampdu_packets;
    uint32_t avg_ampdu_len;
    uint8_t sample_wait;
    uint8_t sample_slow;
    uint8_t trial_status;
    uint8_t info;
    uint8_t sw_retry_step;
    uint8_t format_mod;
    union anon_union.conflict279d_for_rate_map rate_map;
    uint16_t rate_map_l;
    uint8_t mcs_max;
    uint8_t r_idx_min;
    uint8_t r_idx_max;
    uint8_t bw_max;
    uint8_t no_ss;
    uint8_t short_gi;
    uint8_t p_type;
    undefined field_0xbf;
    uint16_t no_samples;
    uint16_t max_amsdu_len;
    uint16_t curr_amsdu_len;
    uint16_t fixed_rate_cfg;
};

struct sta_pol_tbl_cntl { // DWARF DIE: 2298
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct mac_htcapability { // DWARF DIE: bd5
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

struct anon_struct.conflictb01 { // DWARF DIE: b01
    uint32_t key[4];
};

struct mac_vhtcapability { // DWARF DIE: c48
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

struct mac_sta_info { // DWARF DIE: cdf
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

union anon_union.conflictb2a_for_u { // DWARF DIE: b2a
    struct anon_struct.conflictaca mic;
    struct anon_struct.conflictb01 mfp;
};

struct key_info_tag { // DWARF DIE: b4f
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb2a_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

struct sta_mgmt_sec_info { // DWARF DIE: 225d
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 24d0
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

struct sta_info_env_tag { // DWARF DIE: 26b9
    struct co_list free_sta_list;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 902
};

typedef union anon_union.conflict279d anon_union.conflict279d, *Panon_union.conflict279d;

union anon_union.conflict279d { // DWARF DIE: 279d
    uint8_t ht[4];
};

typedef struct sm_env_tag sm_env_tag, *Psm_env_tag;

struct sm_env_tag { // DWARF DIE: 287f
    struct sm_connect_req * connect_param;
    struct sm_connect_ind * connect_ind;
    struct co_list bss_config;
    _Bool join_passive;
    _Bool ft_over_ds;
    undefined field_0x12;
    undefined field_0x13;
    int exist_ssid_idx;
    struct mac_addr ft_old_bssid;
    undefined field_0x1e;
    undefined field_0x1f;
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

struct me_chan_config_req { // DWARF DIE: 2803
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct me_env_tag { // DWARF DIE: 3210
    uint32_t active_vifs;
    uint32_t ps_disable_vifs;
    ke_task_id_t requester_id;
    undefined field_0xa;
    undefined field_0xb;
    struct mac_htcapability ht_cap;
    uint16_t tx_lft;
    _Bool ht_supported;
    undefined field_0x2f;
    struct me_chan_config_req chan;
    uint8_t stbc_nss;
    uint8_t phy_bw_max;
    _Bool ps_on;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
};

typedef union anon_union.conflictb2a anon_union.conflictb2a, *Panon_union.conflictb2a;

union anon_union.conflictb2a { // DWARF DIE: b2a
    struct anon_struct.conflictaca mic;
    struct anon_struct.conflictb01 mfp;
};

typedef enum anon_enum_8.conflict985 {
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
    ME_BUSY=1,
    ME_IDLE=0,
    ME_STATE_MAX=2,
    SCANU_IDLE=0,
    SCANU_SCANNING=1,
    SCANU_STATE_MAX=2,
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
} anon_enum_8.conflict985;

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_state_handler { // DWARF DIE: fb5
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

struct ke_msg_handler { // DWARF DIE: f89
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_task_desc ke_task_desc, *Pke_task_desc;

struct ke_task_desc { // DWARF DIE: fe8
    struct ke_state_handler * state_handler;
    struct ke_state_handler * default_handler;
    ke_state_t * state;
    uint16_t state_max;
    uint16_t idx_max;
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 1bc6
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 1b81
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 2ee3
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef union anon_union.conflict2f94 anon_union.conflict2f94, *Panon_union.conflict2f94;

union anon_union.conflict2f94 { // DWARF DIE: 2f94
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 2ebb
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 2f0b
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

struct txl_buffer_env_tag { // DWARF DIE: 2fb6
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict147c anon_union.conflict147c, *Panon_union.conflict147c;

union anon_union.conflict147c { // DWARF DIE: 147c
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict14a1 anon_union.conflict14a1, *Panon_union.conflict14a1;

union anon_union.conflict14a1 { // DWARF DIE: 14a1
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1457 anon_union.conflict1457, *Panon_union.conflict1457;

union anon_union.conflict1457 { // DWARF DIE: 1457
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8cd_for__new anon_union.conflict8cd_for__new, *Panon_union.conflict8cd_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict741 anon_struct.conflict741, *Panon_struct.conflict741;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 17b
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 6f8
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 6b3
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __tm { // DWARF DIE: 1eb
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

struct anon_struct.conflict741 { // DWARF DIE: 741
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

union anon_union.conflict8cd_for__new { // DWARF DIE: 8cd
    struct anon_struct.conflict741 _reent;
    struct anon_struct.conflict741 _unused;
};

struct __sbuf { // DWARF DIE: 323
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 351
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

struct _on_exit_args { // DWARF DIE: 26e
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2c3
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4bd
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
    union anon_union.conflict8cd_for__new _new;
    undefined field_0x128;
    undefined field_0x129;
    undefined field_0x12a;
    undefined field_0x12b;
    undefined field_0x12c;
    undefined field_0x12d;
    undefined field_0x12e;
    undefined field_0x12f;
    undefined field_0x130;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
    undefined field_0x134;
    undefined field_0x135;
    undefined field_0x136;
    undefined field_0x137;
    undefined field_0x138;
    undefined field_0x139;
    undefined field_0x13a;
    undefined field_0x13b;
    undefined field_0x13c;
    undefined field_0x13d;
    undefined field_0x13e;
    undefined field_0x13f;
    undefined field_0x140;
    undefined field_0x141;
    undefined field_0x142;
    undefined field_0x143;
    undefined field_0x144;
    undefined field_0x145;
    undefined field_0x146;
    undefined field_0x147;
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

typedef union anon_union.conflict8cd anon_union.conflict8cd, *Panon_union.conflict8cd;

union anon_union.conflict8cd { // DWARF DIE: 8cd
    struct anon_struct.conflict741 _reent;
    struct anon_struct.conflict741 _unused;
    undefined1 field2[240]; // Automatically generated padding to match DWARF declared size
};

typedef int32_t BaseType_t;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

struct rx_cntrl_ipcdesc { // DWARF DIE: 1f6a
    uint32_t host_id;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 1fb2
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 1f87
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_rx_status { // DWARF DIE: 1e6f
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

struct rxu_cntrl_env_tag { // DWARF DIE: 1feb
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




// DWARF DIE: 3cf7

_Bool cmp_dest_id(co_list_hdr *msg,uint32_t dest_id)

{
  return (_Bool)(*(ushort *)((int)&msg[1].next + 2) == dest_id);
}



// DWARF DIE: 3d85

_Bool ke_task_local(ke_task_id_t id)

{
  undefined2 in_register_0000202a;
  
  if (0xe < CONCAT22(in_register_0000202a,id)) {
    FUN_0001002e();
  }
  return (_Bool)(CONCAT22(in_register_0000202a,id) < 0xd);
}



bool FUN_0001002e(void)

{
  uint unaff_s0;
  
  FUN_0001002e();
  return unaff_s0 < 0xd;
}



// DWARF DIE: 39db

ke_msg_func_t * ke_handler_search(ke_msg_id_t msg_id,ke_state_handler *state_handler)

{
  undefined2 in_register_0000202a;
  int iVar1;
  
  iVar1 = state_handler->msg_cnt - 1;
  if (iVar1 == -1) {
    return (ke_msg_func_t *)0x0;
  }
  do {
    if ((uint)state_handler->msg_table[iVar1].id == CONCAT22(in_register_0000202a,msg_id)) {
      if (state_handler->msg_table[iVar1].func == (ke_msg_func_t *)0x0) {
        FUN_0001008e();
      }
      return state_handler->msg_table[iVar1].func;
    }
    iVar1 += -1;
  } while (iVar1 != -1);
  return (ke_msg_func_t *)0x0;
}



undefined4 FUN_0001008e(void)

{
  int *unaff_s0;
  int unaff_s1;
  
  FUN_0001008e();
  return *(undefined4 *)(*unaff_s0 + unaff_s1 + 4);
}



// DWARF DIE: 3b18

void ke_state_set(ke_task_id_t id,ke_state_t state_id)

{
  ushort *puVar1;
  int iVar2;
  undefined2 in_register_0000202a;
  int extraout_a0;
  int extraout_a0_00;
  undefined2 in_register_0000202e;
  uint uVar3;
  
  uVar3 = CONCAT22(in_register_0000202a,id) >> 8;
  if (0xd < (id & 0xff)) {
    FUN_000100da();
  }
  FUN_000100e4();
  if (extraout_a0 == 0) {
    FUN_00010102();
  }
  iVar2 = (id & 0xff) * 0x10;
  if (*(ushort *)(iVar2 + 0xe) <= uVar3) {
    FUN_00010136();
  }
  puVar1 = (ushort *)(*(int *)(iVar2 + 8) + uVar3 * 2);
  if (puVar1 == (ushort *)0x0) {
    FUN_0001015e();
  }
  if ((uint)*puVar1 != CONCAT22(in_register_0000202e,state_id)) {
    *puVar1 = state_id;
    while (FUN_00010188(0xc), extraout_a0_00 != 0) {
      _LVL34(4,extraout_a0_00);
      FUN_000101ac(0x1000000);
    }
  }
  return;
}



void FUN_000100da(void)

{
  ushort *puVar1;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  uint unaff_s2;
  uint unaff_s4;
  
  FUN_000100da();
  FUN_000100e4();
  if (extraout_a0 == 0) {
    FUN_00010102();
  }
  if (*(ushort *)(unaff_s1 * 0x10 + 0xe) <= unaff_s2) {
    FUN_00010136();
  }
  puVar1 = (ushort *)(*(int *)(unaff_s1 * 0x10 + 8) + unaff_s2 * 2);
  if (puVar1 == (ushort *)0x0) {
    FUN_0001015e();
  }
  if (*puVar1 != unaff_s4) {
    *puVar1 = (ushort)unaff_s4;
    while (FUN_00010188(0xc), extraout_a0_00 != 0) {
      _LVL34(4,extraout_a0_00);
      FUN_000101ac(0x1000000);
    }
  }
  return;
}



void FUN_000100e4(void)

{
  ushort *puVar1;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  uint unaff_s2;
  uint unaff_s4;
  
  FUN_000100e4();
  if (extraout_a0 == 0) {
    FUN_00010102();
  }
  if (*(ushort *)(unaff_s1 * 0x10 + 0xe) <= unaff_s2) {
    FUN_00010136();
  }
  puVar1 = (ushort *)(*(int *)(unaff_s1 * 0x10 + 8) + unaff_s2 * 2);
  if (puVar1 == (ushort *)0x0) {
    FUN_0001015e();
  }
  if (*puVar1 != unaff_s4) {
    *puVar1 = (ushort)unaff_s4;
    while (FUN_00010188(0xc), extraout_a0_00 != 0) {
      _LVL34(4,extraout_a0_00);
      FUN_000101ac(0x1000000);
    }
  }
  return;
}



void FUN_00010102(void)

{
  ushort *puVar1;
  int unaff_s1;
  int extraout_a0;
  uint unaff_s2;
  uint unaff_s4;
  
  FUN_00010102();
  if (*(ushort *)(unaff_s1 * 0x10 + 0xe) <= unaff_s2) {
    FUN_00010136();
  }
  puVar1 = (ushort *)(*(int *)(unaff_s1 * 0x10 + 8) + unaff_s2 * 2);
  if (puVar1 == (ushort *)0x0) {
    FUN_0001015e();
  }
  if (*puVar1 != unaff_s4) {
    *puVar1 = (ushort)unaff_s4;
    while (FUN_00010188(0xc), extraout_a0 != 0) {
      _LVL34(4,extraout_a0);
      FUN_000101ac(0x1000000);
    }
  }
  return;
}



void FUN_00010136(void)

{
  int unaff_s0;
  ushort *puVar1;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  uint unaff_s4;
  
  FUN_00010136();
  puVar1 = (ushort *)(*(int *)(unaff_s0 + unaff_s1 + 8) + unaff_s2 * 2);
  if (puVar1 == (ushort *)0x0) {
    FUN_0001015e();
  }
  if (*puVar1 != unaff_s4) {
    *puVar1 = (ushort)unaff_s4;
    while (FUN_00010188(0xc), extraout_a0 != 0) {
      _LVL34(4,extraout_a0);
      FUN_000101ac(0x1000000);
    }
  }
  return;
}



void FUN_0001015e(void)

{
  ushort *unaff_s0;
  int extraout_a0;
  uint unaff_s4;
  
  FUN_0001015e();
  if (*unaff_s0 != unaff_s4) {
    *unaff_s0 = (ushort)unaff_s4;
    while (FUN_00010188(0xc), extraout_a0 != 0) {
      _LVL34(4,extraout_a0);
      FUN_000101ac(0x1000000);
    }
  }
  return;
}



void FUN_00010188(int param_1)

{
  int unaff_s0;
  int extraout_a0;
  int unaff_s2;
  
  while (FUN_00010188(param_1), extraout_a0 != 0) {
    _LVL34(unaff_s0 + 4,extraout_a0);
    FUN_000101ac(0x1000000);
    param_1 = unaff_s2 + 0xc;
  }
  return;
}



void _LVL34(int param_1,int param_2)

{
  int unaff_s0;
  int extraout_a0;
  int unaff_s2;
  
  while( true ) {
    _LVL34(param_1,param_2);
    FUN_000101ac(0x1000000);
    FUN_00010188(unaff_s2 + 0xc);
    if (extraout_a0 == 0) break;
    param_1 = unaff_s0 + 4;
    param_2 = extraout_a0;
  }
  return;
}



void FUN_000101ac(undefined4 param_1)

{
  int unaff_s0;
  int extraout_a0;
  int unaff_s2;
  
  while( true ) {
    FUN_000101ac(param_1);
    FUN_00010188(unaff_s2 + 0xc);
    if (extraout_a0 == 0) break;
    _LVL34(unaff_s0 + 4,extraout_a0);
    param_1 = 0x1000000;
  }
  return;
}



// DWARF DIE: 3a4c

ke_state_t ke_state_get(ke_task_id_t id)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 in_register_0000202a;
  undefined2 extraout_var;
  uint uVar3;
  
  uVar3 = CONCAT22(in_register_0000202a,id) >> 8;
  if (0xd < (id & 0xff)) {
    FUN_000101f2();
  }
  uVar2 = FUN_000101fc();
  if (CONCAT22(extraout_var,uVar2) == 0) {
    FUN_0001021a();
  }
  iVar1 = (id & 0xff) * 0x10;
  if (*(ushort *)(iVar1 + 0xe) <= uVar3) {
    FUN_0001024e();
  }
  return *(ke_state_t *)(uVar3 * 2 + *(int *)(iVar1 + 8));
}



undefined2 FUN_000101f2(void)

{
  int unaff_s0;
  undefined2 uVar1;
  undefined2 extraout_var;
  uint unaff_s2;
  
  FUN_000101f2();
  uVar1 = FUN_000101fc();
  if (CONCAT22(extraout_var,uVar1) == 0) {
    FUN_0001021a();
  }
  if (*(ushort *)(unaff_s0 * 0x10 + 0xe) <= unaff_s2) {
    FUN_0001024e();
  }
  return *(undefined2 *)(unaff_s2 * 2 + *(int *)(unaff_s0 * 0x10 + 8));
}



undefined2 FUN_000101fc(void)

{
  int unaff_s0;
  undefined2 uVar1;
  undefined2 extraout_var;
  uint unaff_s2;
  
  uVar1 = FUN_000101fc();
  if (CONCAT22(extraout_var,uVar1) == 0) {
    FUN_0001021a();
  }
  if (*(ushort *)(unaff_s0 * 0x10 + 0xe) <= unaff_s2) {
    FUN_0001024e();
  }
  return *(undefined2 *)(unaff_s2 * 2 + *(int *)(unaff_s0 * 0x10 + 8));
}



undefined2 FUN_0001021a(void)

{
  int unaff_s0;
  uint unaff_s2;
  
  FUN_0001021a();
  if (*(ushort *)(unaff_s0 * 0x10 + 0xe) <= unaff_s2) {
    FUN_0001024e();
  }
  return *(undefined2 *)(unaff_s2 * 2 + *(int *)(unaff_s0 * 0x10 + 8));
}



undefined2 FUN_0001024e(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  FUN_0001024e();
  return *(undefined2 *)(unaff_s2 * 2 + *(int *)(unaff_s0 + unaff_s1 + 8));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 36d5

void ke_task_schedule(int dummy)

{
  ushort uVar1;
  int extraout_a0;
  int extraout_a0_00;
  code *extraout_a0_01;
  int iVar2;
  code *extraout_a0_02;
  code *pcVar3;
  int *piVar4;
  
  FUN_00010288();
  if (extraout_a0 == 0) goto _L0;
  uVar1 = *(ushort *)(extraout_a0 + 6);
  if (0xd < (uVar1 & 0xff)) {
    FUN_000102c2();
  }
  FUN_000102cc();
  if (extraout_a0_00 == 0) {
    FUN_000102ea();
  }
  piVar4 = (int *)((uVar1 & 0xff) * 0x10);
  if (*(ushort *)((int)piVar4 + 0xe) <= uVar1 >> 8) {
    FUN_0001031e();
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_0001033e();
  }
  if (((*piVar4 != 0) && (FUN_00010396(), pcVar3 = extraout_a0_01, extraout_a0_01 != (code *)0x0))
     || ((piVar4[1] != 0 && (FUN_000103e2(), pcVar3 = extraout_a0_02, extraout_a0_02 != (code *)0x0)
         ))) {
    iVar2 = (*pcVar3)(*(undefined2 *)(extraout_a0 + 4),extraout_a0 + 0xc,
                      *(undefined2 *)(extraout_a0 + 6),*(undefined2 *)(extraout_a0 + 8),pcVar3);
    if (iVar2 == 1) goto _L0;
    if (iVar2 == 2) {
      FUN_000103fa();
      goto _L0;
    }
    if (iVar2 != 0) {
      FUN_000103d6();
      goto _L0;
    }
  }
  FUN_00010350();
_L0:
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010288(void)

{
  ushort uVar1;
  int extraout_a0;
  int extraout_a0_00;
  code *extraout_a0_01;
  int iVar2;
  code *extraout_a0_02;
  code *pcVar3;
  int *piVar4;
  
  FUN_00010288();
  if (extraout_a0 == 0) goto _L0;
  uVar1 = *(ushort *)(extraout_a0 + 6);
  if (0xd < (uVar1 & 0xff)) {
    FUN_000102c2();
  }
  FUN_000102cc();
  if (extraout_a0_00 == 0) {
    FUN_000102ea();
  }
  piVar4 = (int *)((uVar1 & 0xff) * 0x10);
  if (*(ushort *)((int)piVar4 + 0xe) <= uVar1 >> 8) {
    FUN_0001031e();
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_0001033e();
  }
  if (((*piVar4 != 0) && (FUN_00010396(), pcVar3 = extraout_a0_01, extraout_a0_01 != (code *)0x0))
     || ((piVar4[1] != 0 && (FUN_000103e2(), pcVar3 = extraout_a0_02, extraout_a0_02 != (code *)0x0)
         ))) {
    iVar2 = (*pcVar3)(*(undefined2 *)(extraout_a0 + 4),extraout_a0 + 0xc,
                      *(undefined2 *)(extraout_a0 + 6),*(undefined2 *)(extraout_a0 + 8),pcVar3);
    if (iVar2 == 1) goto _L0;
    if (iVar2 == 2) {
      FUN_000103fa();
      goto _L0;
    }
    if (iVar2 != 0) {
      FUN_000103d6();
      goto _L0;
    }
  }
  FUN_00010350();
_L0:
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000102c2(void)

{
  int unaff_s0;
  int extraout_a0;
  code *extraout_a0_00;
  int iVar1;
  code *extraout_a0_01;
  code *pcVar2;
  uint unaff_s2;
  int unaff_s3;
  int *piVar3;
  
  FUN_000102c2();
  FUN_000102cc();
  if (extraout_a0 == 0) {
    FUN_000102ea();
  }
  piVar3 = (int *)(unaff_s3 * 0x10);
  if (*(ushort *)((int)piVar3 + 0xe) <= unaff_s2) {
    FUN_0001031e();
  }
  if (piVar3 == (int *)0x0) {
    FUN_0001033e();
  }
  if (((*piVar3 != 0) && (FUN_00010396(), pcVar2 = extraout_a0_00, extraout_a0_00 != (code *)0x0))
     || ((piVar3[1] != 0 && (FUN_000103e2(), pcVar2 = extraout_a0_01, extraout_a0_01 != (code *)0x0)
         ))) {
    iVar1 = (*pcVar2)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,*(undefined2 *)(unaff_s0 + 6),
                      *(undefined2 *)(unaff_s0 + 8),pcVar2);
    if (iVar1 == 1) goto _L0;
    if (iVar1 == 2) {
      FUN_000103fa();
      goto _L0;
    }
    if (iVar1 != 0) {
      FUN_000103d6();
      goto _L0;
    }
  }
  FUN_00010350();
_L0:
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000102cc(void)

{
  int unaff_s0;
  int extraout_a0;
  code *extraout_a0_00;
  int iVar1;
  code *extraout_a0_01;
  code *pcVar2;
  uint unaff_s2;
  int unaff_s3;
  int *piVar3;
  
  FUN_000102cc();
  if (extraout_a0 == 0) {
    FUN_000102ea();
  }
  piVar3 = (int *)(unaff_s3 * 0x10);
  if (*(ushort *)((int)piVar3 + 0xe) <= unaff_s2) {
    FUN_0001031e();
  }
  if (piVar3 == (int *)0x0) {
    FUN_0001033e();
  }
  if (((*piVar3 != 0) && (FUN_00010396(), pcVar2 = extraout_a0_00, extraout_a0_00 != (code *)0x0))
     || ((piVar3[1] != 0 && (FUN_000103e2(), pcVar2 = extraout_a0_01, extraout_a0_01 != (code *)0x0)
         ))) {
    iVar1 = (*pcVar2)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,*(undefined2 *)(unaff_s0 + 6),
                      *(undefined2 *)(unaff_s0 + 8),pcVar2);
    if (iVar1 == 1) goto _L0;
    if (iVar1 == 2) {
      FUN_000103fa();
      goto _L0;
    }
    if (iVar1 != 0) {
      FUN_000103d6();
      goto _L0;
    }
  }
  FUN_00010350();
_L0:
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000102ea(void)

{
  int unaff_s0;
  code *extraout_a0;
  int iVar1;
  code *extraout_a0_00;
  code *pcVar2;
  uint unaff_s2;
  int unaff_s3;
  int *piVar3;
  
  FUN_000102ea();
  piVar3 = (int *)(unaff_s3 * 0x10);
  if (*(ushort *)((int)piVar3 + 0xe) <= unaff_s2) {
    FUN_0001031e();
  }
  if (piVar3 == (int *)0x0) {
    FUN_0001033e();
  }
  if (((*piVar3 != 0) && (FUN_00010396(), pcVar2 = extraout_a0, extraout_a0 != (code *)0x0)) ||
     ((piVar3[1] != 0 && (FUN_000103e2(), pcVar2 = extraout_a0_00, extraout_a0_00 != (code *)0x0))))
  {
    iVar1 = (*pcVar2)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,*(undefined2 *)(unaff_s0 + 6),
                      *(undefined2 *)(unaff_s0 + 8),pcVar2);
    if (iVar1 == 1) goto _L0;
    if (iVar1 == 2) {
      FUN_000103fa();
      goto _L0;
    }
    if (iVar1 != 0) {
      FUN_000103d6();
      goto _L0;
    }
  }
  FUN_00010350();
_L0:
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001031e(void)

{
  int unaff_s0;
  int unaff_s1;
  int *piVar1;
  code *extraout_a0;
  int iVar2;
  code *extraout_a0_00;
  code *pcVar3;
  int unaff_s3;
  
  FUN_0001031e();
  piVar1 = (int *)(unaff_s1 + unaff_s3);
  if (piVar1 == (int *)0x0) {
    FUN_0001033e();
  }
  if (((*piVar1 != 0) && (FUN_00010396(), pcVar3 = extraout_a0, extraout_a0 != (code *)0x0)) ||
     ((piVar1[1] != 0 && (FUN_000103e2(), pcVar3 = extraout_a0_00, extraout_a0_00 != (code *)0x0))))
  {
    iVar2 = (*pcVar3)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,*(undefined2 *)(unaff_s0 + 6),
                      *(undefined2 *)(unaff_s0 + 8),pcVar3);
    if (iVar2 == 1) goto _L0;
    if (iVar2 == 2) {
      FUN_000103fa();
      goto _L0;
    }
    if (iVar2 != 0) {
      FUN_000103d6();
      goto _L0;
    }
  }
  FUN_00010350();
_L0:
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001033e(void)

{
  int unaff_s0;
  int *unaff_s1;
  code *extraout_a0;
  int iVar1;
  code *extraout_a0_00;
  code *pcVar2;
  
  FUN_0001033e();
  if (((*unaff_s1 != 0) && (FUN_00010396(), pcVar2 = extraout_a0, extraout_a0 != (code *)0x0)) ||
     ((unaff_s1[1] != 0 && (FUN_000103e2(), pcVar2 = extraout_a0_00, extraout_a0_00 != (code *)0x0))
     )) {
    iVar1 = (*pcVar2)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,*(undefined2 *)(unaff_s0 + 6),
                      *(undefined2 *)(unaff_s0 + 8),pcVar2);
    if (iVar1 == 1) goto _L0;
    if (iVar1 == 2) {
      FUN_000103fa();
      goto _L0;
    }
    if (iVar1 != 0) {
      FUN_000103d6();
      goto _L0;
    }
  }
  FUN_00010350();
_L0:
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010350(void)

{
  FUN_00010350();
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



void FUN_0001036a(void)

{
  FUN_0001036a();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010396(void)

{
  int unaff_s0;
  int unaff_s1;
  code *extraout_a0;
  int iVar1;
  code *extraout_a0_00;
  code *pcVar2;
  
  FUN_00010396();
  pcVar2 = extraout_a0;
  if ((extraout_a0 != (code *)0x0) ||
     ((*(int *)(unaff_s1 + 4) != 0 &&
      (FUN_000103e2(), pcVar2 = extraout_a0_00, extraout_a0_00 != (code *)0x0)))) {
    iVar1 = (*pcVar2)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,*(undefined2 *)(unaff_s0 + 6),
                      *(undefined2 *)(unaff_s0 + 8),pcVar2);
    if (iVar1 == 1) goto _L0;
    if (iVar1 == 2) {
      FUN_000103fa();
      goto _L0;
    }
    if (iVar1 != 0) {
      FUN_000103d6();
      goto _L0;
    }
  }
  FUN_00010350();
_L0:
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000103d6(void)

{
  FUN_000103d6();
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000103e2(void)

{
  int unaff_s0;
  int iVar1;
  code *extraout_a0;
  
  FUN_000103e2();
  if (extraout_a0 != (code *)0x0) {
    iVar1 = (*extraout_a0)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,
                           *(undefined2 *)(unaff_s0 + 6),*(undefined2 *)(unaff_s0 + 8),extraout_a0);
    if (iVar1 == 1) goto _L0;
    if (iVar1 == 2) {
      FUN_000103fa();
      goto _L0;
    }
    if (iVar1 != 0) {
      FUN_000103d6();
      goto _L0;
    }
  }
  FUN_00010350();
_L0:
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000103fa(void)

{
  FUN_000103fa();
  if (_DAT_00000004 == 0) {
    FUN_0001036a();
  }
  return;
}



// DWARF DIE: 367b

int ke_msg_discard(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  return 0;
}



// DWARF DIE: 3621

int ke_msg_save(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  return 2;
}


