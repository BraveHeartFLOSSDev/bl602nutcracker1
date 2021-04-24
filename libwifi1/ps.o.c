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

typedef union anon_union.conflictf3 anon_union.conflictf3, *Panon_union.conflictf3;

typedef uint wint_t;

union anon_union.conflictf3 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictf3_for___value anon_union.conflictf3_for___value, *Panon_union.conflictf3_for___value;

union anon_union.conflictf3_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictf3_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong uint32_t;

struct la_mem_format {
    uint32_t word[4];
};

typedef struct txdesc txdesc, *Ptxdesc;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef struct umacdesc umacdesc, *Pumacdesc;

typedef struct lmacdesc lmacdesc, *Plmacdesc;

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef ushort uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar uint8_t;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct tx_agg_desc tx_agg_desc, *Ptx_agg_desc;

typedef struct txl_buffer_tag txl_buffer_tag, *Ptxl_buffer_tag;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef char int8_t;

typedef union anon_union.conflict2dc5_for_field_0 anon_union.conflict2dc5_for_field_0, *Panon_union.conflict2dc5_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1363_for_field_3 anon_union.conflict1363_for_field_3, *Panon_union.conflict1363_for_field_3;

typedef union anon_union.conflict1388_for_field_4 anon_union.conflict1388_for_field_4, *Panon_union.conflict1388_for_field_4;

typedef union anon_union.conflict13ad_for_field_5 anon_union.conflict13ad_for_field_5, *Panon_union.conflict13ad_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr {
    struct co_list_hdr * next;
};

struct tx_compressed_policy_tbl {
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct tx_policy_tbl {
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict2dc5_for_field_0 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
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

struct tx_cfm_tag {
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
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

struct lmacdesc {
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

union anon_union.conflict1388_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict1363_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflict13ad_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1363_for_field_3 field_3;
    union anon_union.conflict1388_for_field_4 field_4;
    union anon_union.conflict13ad_for_field_5 field_5;
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

struct txdesc {
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct txl_buffer_control {
    union anon_union.conflict2dc5_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct dma_desc {
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd {
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_tag {
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

struct tx_agg_desc {
    uint8_t reserved;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag {
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag {
    struct co_list prog;
};

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag {
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

typedef ulonglong uint64_t;

typedef long int32_t;

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

struct rx_payloaddesc {
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
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

typedef enum ps_dpsm_state_bit_pos {
    PS_DPSM_STATE_RESUMING=2,
    PS_DPSM_STATE_SET_MODE_REQ=4,
    PS_DPSM_STATE_ON=0,
    PS_DPSM_STATE_PAUSING=1,
    PS_DPSM_STATE_PAUSE=3
} ps_dpsm_state_bit_pos;

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

struct ps_env_tag {
    _Bool ps_on;
    undefined field_0x1;
    ke_task_id_t taskid;
    uint32_t prevent_sleep;
    uint8_t cfm_cnt;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    struct mm_timer_tag uapsd_timer;
    _Bool uapsd_tmr_on;
    _Bool uapsd_on;
    undefined field_0x1e;
    undefined field_0x1f;
    uint32_t uapsd_timeout;
    uint8_t dpsm_state;
    uint8_t next_mode;
    undefined field_0x26;
    undefined field_0x27;
};

typedef uchar UINT8;

typedef ushort UINT16;

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

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct mm_chan_ctxt_add_req {
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free {
};

struct ke_env_tag {
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef uint16_t ke_msg_id_t;

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list {
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag {
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct anon_struct.conflict3875 anon_struct.conflict3875, *Panon_struct.conflict3875;

struct anon_struct.conflict3875 {
    uint16_t listen_interval;
    _Bool dont_wait_bcmc;
    uint8_t ps_retry;
    uint8_t ap_id;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    uint32_t uapsd_last_rxtx;
    uint8_t uapsd_queues;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    uint32_t mon_last_tx;
    uint32_t mon_last_crc;
    uint8_t beacon_loss_cnt;
    int8_t rssi;
    int8_t rssi_thold;
    uint8_t rssi_hyst;
    _Bool rssi_status;
    uint8_t csa_count;
    _Bool csa_occured;
    undefined field_0x1f;
};

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

typedef union anon_union.conflict3a3d_for_u anon_union.conflict3a3d_for_u, *Panon_union.conflict3a3d_for_u;

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef struct anon_struct.conflict3942 anon_struct.conflict3942, *Panon_struct.conflict3942;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct mac_edca_param_set mac_edca_param_set, *Pmac_edca_param_set;

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

typedef struct SecurityMode_t SecurityMode_t, *PSecurityMode_t;

typedef struct Cipher_t Cipher_t, *PCipher_t;

typedef union anon_union.conflictb2a_for_u anon_union.conflictb2a_for_u, *Panon_union.conflictb2a_for_u;

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct anon_struct.conflictaca anon_struct.conflictaca, *Panon_struct.conflictaca;

typedef struct anon_struct.conflictb01 anon_struct.conflictb01, *Panon_struct.conflictb01;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct anon_struct.conflictaca {
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct Cipher_t {
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct chan_tbtt_tag {
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

struct scan_chan_tag {
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct mac_edca_param_set {
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset {
    uint8_t length;
    uint8_t array[12];
};

struct txl_frame_cfm_tag {
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag {
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

struct anon_struct.conflictb01 {
    uint32_t key[4];
};

union anon_union.conflictb2a_for_u {
    struct anon_struct.conflictaca mic;
    struct anon_struct.conflictb01 mfp;
};

struct key_info_tag {
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

struct anon_struct.conflict3942 {
    uint32_t dummy;
    struct txl_frame_desc_tag bcn_desc;
    uint16_t bcn_len;
    uint16_t tim_len;
    uint16_t tim_bitmap_set;
    uint16_t bcn_int;
    uint8_t bcn_tbtt_ratio;
    uint8_t bcn_tbtt_cnt;
    _Bool bcn_configured;
    uint8_t dtim_count;
    uint8_t tim_n1;
    uint8_t tim_n2;
    uint8_t bc_mc_status;
    uint8_t csa_count;
    uint8_t csa_oft[2];
    uint8_t ps_sta_cnt;
    undefined field_0x2ef;
    uint16_t ctrl_port_ethertype;
    undefined field_0x2f2;
    undefined field_0x2f3;
};

union anon_union.conflict3a3d_for_u {
    struct anon_struct.conflict3875 sta;
    struct anon_struct.conflict3942 ap;
};

struct mac_ssid {
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
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

struct SecurityMode_t {
    UINT16 noRsn:1;
    UINT16 wepStatic:1;
    UINT16 wepDynamic:1;
    UINT16 wpa:1;
    UINT16 wpaNone:1;
    UINT16 wpa2:1;
    UINT16 cckm:1;
    UINT16 wapi:1;
    UINT16 wpa3:1;
    UINT16 rsvd:7;
};

struct mobility_domain {
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
};

struct mac_bss_info {
    struct mac_htcapability ht_cap;
    struct mac_addr bssid;
    struct mac_ssid ssid;
    uint16_t bsstype;
    undefined field_0x4a;
    undefined field_0x4b;
    struct scan_chan_tag * chan;
    uint16_t center_freq1;
    uint16_t center_freq2;
    uint16_t beacon_period;
    uint16_t cap_info;
    struct mac_rateset rate_set;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
    struct mac_edca_param_set edca_param;
    int8_t rssi;
    int8_t ppm_rel;
    int8_t ppm_abs;
    uint8_t high_11b_rate;
    uint16_t prot_status;
    uint8_t bw;
    uint8_t phy_bw;
    uint8_t power_constraint;
    undefined field_0x85;
    undefined field_0x86;
    undefined field_0x87;
    uint32_t valid_flags;
    struct mobility_domain mde;
    _Bool is_supplicant_enabled;
    struct SecurityMode_t wpa_wpa2_wep;
    struct Cipher_t wpa_mcstCipher;
    struct Cipher_t wpa_ucstCipher;
    struct Cipher_t rsn_mcstCipher;
    struct Cipher_t rsn_ucstCipher;
    _Bool is_pmf_required;
    _Bool is_wpa2_prefered;
    uint8_t rsn_wpa_ie[32];
    uint8_t rsn_wpa_ie_len;
    uint16_t beacon_interval;
    uint16_t aid_bitmap;
    uint16_t max_listen_interval;
    uint8_t sec_type;
    undefined field_0xc1;
    undefined field_0xc2;
    undefined field_0xc3;
};

struct vif_info_tag {
    struct co_list_hdr list_hdr;
    uint32_t prevent_sleep;
    uint32_t txq_params[4];
    struct mm_timer_tag tbtt_timer;
    struct mm_timer_tag tmr_bcn_to;
    struct mac_addr bssid;
    undefined field_0x3e;
    undefined field_0x3f;
    struct chan_ctxt_tag * chan_ctxt;
    struct chan_tbtt_tag tbtt_switch;
    struct mac_addr mac_addr;
    uint8_t type;
    uint8_t index;
    _Bool active;
    int8_t tx_power;
    int8_t user_tx_power;
    undefined field_0x5b;
    union anon_union.conflict3a3d_for_u u;
    struct co_list sta_list;
    struct mac_bss_info bss_info;
    undefined field_0x41c;
    undefined field_0x41d;
    undefined field_0x41e;
    undefined field_0x41f;
    struct key_info_tag key_info[4];
    struct key_info_tag * default_key;
    uint32_t flags;
    struct mm_chan_ctxt_add_req csa_channel;
    undefined field_0x5d2;
    undefined field_0x5d3;
    undefined field_0x5d4;
    undefined field_0x5d5;
    undefined field_0x5d6;
    undefined field_0x5d7;
};

struct chan_ctxt_tag {
    struct co_list_hdr list_hdr;
    struct mm_chan_ctxt_add_req channel;
    ke_task_id_t taskid;
    uint16_t nb_slots;
    uint16_t nb_rem_slots;
    uint16_t nb_res_slots;
    uint8_t status;
    uint8_t idx;
    uint8_t nb_linked_vif;
    uint8_t vif_index;
    undefined field_0x1a;
    undefined field_0x1b;
};

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag {
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef union anon_union.conflict3a3d anon_union.conflict3a3d, *Panon_union.conflict3a3d;

union anon_union.conflict3a3d {
    struct anon_struct.conflict3875 sta;
    struct anon_struct.conflict3942 ap;
};

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

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag {
    struct co_list desc_free;
    struct co_list desc_done;
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

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef struct rc_rate_stats rc_rate_stats, *Prc_rate_stats;

typedef struct step step, *Pstep;

typedef union anon_union.conflict3399_for_rate_map anon_union.conflict3399_for_rate_map, *Panon_union.conflict3399_for_rate_map;

union anon_union.conflict3399_for_rate_map {
    uint8_t ht[4];
};

struct rc_rate_stats {
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step {
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

struct rc_sta_stats {
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
    union anon_union.conflict3399_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl {
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
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

typedef struct sta_info_env_tag sta_info_env_tag, *Psta_info_env_tag;

struct sta_info_env_tag {
    struct co_list free_sta_list;
};

typedef struct chan_env_tag chan_env_tag, *Pchan_env_tag;

struct chan_env_tag {
    struct co_list list_free_ctxt;
    struct co_list list_sched_ctxt;
    struct co_list list_tbtt;
    struct co_list list_tbtt_delay;
    struct chan_ctxt_tag * current_channel;
    struct chan_ctxt_tag * chan_switch;
    struct mm_timer_tag tmr_tbtt_switch;
    struct mm_timer_tag tmr_cde;
    struct mm_timer_tag tmr_ctxt_op;
    struct mm_timer_tag tmr_conn_less;
    uint32_t cde_dur_us;
    uint32_t cde_time;
    uint8_t status;
    uint8_t cfm_cnt;
    uint8_t nb_sched_ctxt;
    uint8_t pm;
};

typedef enum td_status_bit {
    TD_STATUS_TX_PS=2,
    TD_STATUS_RX_PS=3,
    TD_STATUS_RX=1,
    TD_STATUS_TX=0
} td_status_bit;

typedef struct td_env_tag td_env_tag, *Ptd_env_tag;

struct td_env_tag {
    struct mm_timer_tag td_timer;
    uint32_t pck_cnt_tx;
    uint32_t pck_cnt_rx;
    uint32_t pck_cnt_tx_ps;
    uint32_t pck_cnt_rx_ps;
    uint8_t vif_index;
    uint8_t status;
    _Bool is_on;
    _Bool has_active_chan;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req {
};

typedef union anon_union.conflict8cd_for__new anon_union.conflict8cd_for__new, *Panon_union.conflict8cd_for__new;

typedef struct anon_struct.conflict741 anon_struct.conflict741, *Panon_struct.conflict741;

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

struct anon_struct.conflict741 {
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

union anon_union.conflict8cd_for__new {
    struct anon_struct.conflict741 _reent;
    struct anon_struct.conflict741 _unused;
};

typedef union anon_union.conflict3399 anon_union.conflict3399, *Panon_union.conflict3399;

union anon_union.conflict3399 {
    uint8_t ht[4];
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

struct me_chan_config_req {
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct me_env_tag {
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

union anon_union.conflictb2a {
    struct anon_struct.conflictaca mic;
    struct anon_struct.conflictb01 mfp;
};

typedef enum anon_enum_8.conflict985 {
    HAL_MM_TIMER=7,
    VIF_UNKNOWN=4,
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
    TX_DEFAULT_NDP=3,
    VIF_IBSS=1,
    PHY_PRIM=0,
    PS_MODE_OFF=0,
    CO_EMPTY=2,
    VIF_AP=2,
    PS_MODE_ON=1,
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
    VIF_MESH_POINT=3,
    CO_NO_ELT_IN_USE=7,
    HAL_AC1_TIMER=1,
    PHY_SEC=1,
    TASK_MM=0,
    AC_BE=1,
    AC_BK=0,
    PHY_BAND_5G=1,
    STA_MAX=12,
    TASK_ME=5,
    DMA_UL=1,
    IPC_DMA_CHANNEL_DATA_RX=1,
    AC_VI=2,
    VIF_STA=0,
    AC_VO=3,
    TASK_MESH=9,
    HAL_AC3_TIMER=3,
    TASK_CFG=12,
    TASK_MAX=14,
    SCANU_IDLE=0,
    TASK_TDLS=3,
    TASK_RXU=11,
    HAL_KE_TIMER=8,
    TASK_SCAN=2,
    BROADCAST_STA_IDX_MAX=11,
    PHY_BAND_2G4=0,
    CO_OK=0,
    HAL_AC0_TIMER=0,
    AC_MAX=4,
    TX_DEFAULT_5G=1,
    HAL_IDLE_TIMER=5,
    INVALID_STA_IDX=-1,
    HAL_RX_TIMER=6,
    PS_MODE_ON_DYN=2,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    TX_DEFAULT_NDPA_BRP=2,
    CO_BAD_PARAM=4,
    CO_FULL=3,
    TID_MAX=9,
    TASK_BAM=8,
    SCANU_STATE_MAX=2,
    TX_DEFAULT_24G=0,
    HAL_BCN_TIMER=4,
    CO_OP_IN_PROGRESS=9,
    IPC_DMA_CHANNEL_DATA_TX=3,
    TX_CUSTOM=4,
    CO_FAIL=1,
    SCANU_SCANNING=1,
    CO_NO_MORE_ELT_AVAILABLE=6,
    TASK_SM=6,
    TASK_HOSTAPD_U=10
} anon_enum_8.conflict985;

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

struct scan_probe_req_ie_tag {
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag {
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag {
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag {
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

struct txl_buffer_env_tag {
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict2dc5 anon_union.conflict2dc5, *Panon_union.conflict2dc5;

union anon_union.conflict2dc5 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef union anon_union.conflict1388 anon_union.conflict1388, *Panon_union.conflict1388;

union anon_union.conflict1388 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict1363 anon_union.conflict1363, *Panon_union.conflict1363;

union anon_union.conflict1363 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict13ad anon_union.conflict13ad, *Panon_union.conflict13ad;

union anon_union.conflict13ad {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict anon_union.conflict, *Panon_union.conflict;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict886 anon_struct.conflict886, *Panon_struct.conflict886;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

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

struct anon_struct.conflict886 {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict {
    struct anon_struct.conflict741 _reent;
    struct anon_struct.conflict886 _unused;
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
    union anon_union.conflict _new;
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

union anon_union.conflict8cd {
    struct anon_struct.conflict741 _reent;
    struct anon_struct.conflict886 _unused;
};

typedef int32_t BaseType_t;

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

typedef struct mac_hdr_long_qos mac_hdr_long_qos, *Pmac_hdr_long_qos;

struct mac_hdr_long_qos {
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
    struct mac_addr addr4;
    uint16_t qos;
};

typedef struct mac_hdr mac_hdr, *Pmac_hdr;

struct mac_hdr {
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
};

typedef struct mac_hdr_qos mac_hdr_qos, *Pmac_hdr_qos;

struct mac_hdr_qos {
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
    uint16_t qos;
};

typedef struct mac_hdr_ctrl mac_hdr_ctrl, *Pmac_hdr_ctrl;

struct mac_hdr_ctrl {
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
};

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

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

void ps_uapsd_timer_handle(void *env)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)_DAT_00000008;
  while (piVar1 != (int *)0x0) {
    if ((((*(char *)((int)piVar1 + 0x56) == '\0') && (*(char *)(piVar1 + 0x16) != '\0')) &&
        (*(char *)(piVar1 + 0x1a) != '\0')) &&
       ((iVar2 = FUN_0001006c(piVar1), iVar2 != 0 &&
        (iVar3 = iVar2, (int)(((_DAT_00000020 >> 1) - _DAT_44b00120) + piVar1[0x19]) < 0)))) {
      piVar1[1] = piVar1[1] | 8;
      FUN_0001009c(*(undefined *)(piVar1 + 0x18),7,0,0);
      piVar1[0x19] = _DAT_44b00120;
    }
    piVar1 = (int *)*piVar1;
  }
  if (iVar3 == 0) {
    DAT_0000001c = 0;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001006c(int *param_1,undefined param_2,undefined4 uRam00000020)

{
  int *unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    iVar1 = FUN_0001006c(param_1);
    if ((iVar1 != 0) &&
       (unaff_s2 = iVar1,
       (int)(((*(uint *)(unaff_s1 + 0x20) >> 1) - *(int *)(unaff_s3 + 0x120)) + unaff_s0[0x19]) < 0)
       ) {
      unaff_s0[1] = unaff_s0[1] | 8;
      FUN_0001009c(*(undefined *)(unaff_s0 + 0x18),7,0,0);
      unaff_s0[0x19] = *(int *)(unaff_s3 + 0x120);
    }
    do {
      unaff_s0 = (int *)*unaff_s0;
      if (unaff_s0 == (int *)0x0) {
        if (unaff_s2 == 0) {
          DAT_0000001c = 0;
          return;
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    } while (((*(char *)((int)unaff_s0 + 0x56) != '\0') || (*(char *)(unaff_s0 + 0x16) == '\0')) ||
            (param_1 = unaff_s0, *(char *)(unaff_s0 + 0x1a) == '\0'));
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001009c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined param_5,undefined4 uRam00000020)

{
  int *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int iVar1;
  int unaff_s3;
  
  do {
    FUN_0001009c(param_1,param_2,param_3,param_4);
    unaff_s0[0x19] = *(int *)(unaff_s3 + 0x120);
    iVar1 = unaff_s2;
    do {
      unaff_s0 = (int *)*unaff_s0;
      if (unaff_s0 == (int *)0x0) {
        if (iVar1 == 0) {
          DAT_0000001c = 0;
          return;
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    } while ((((*(char *)((int)unaff_s0 + 0x56) != '\0') || (*(char *)(unaff_s0 + 0x16) == '\0')) ||
             (*(char *)(unaff_s0 + 0x1a) == '\0')) ||
            ((unaff_s2 = FUN_0001006c(unaff_s0), unaff_s2 == 0 ||
             (iVar1 = unaff_s2,
             -1 < (int)(((*(uint *)(unaff_s1 + 0x20) >> 1) - *(int *)(unaff_s3 + 0x120)) +
                       unaff_s0[0x19])))));
    param_1 = (uint)*(byte *)(unaff_s0 + 0x18);
    param_4 = 0;
    unaff_s0[1] = unaff_s0[1] | 8;
    param_3 = 0;
    param_2 = 7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void blmac_pwr_mgt_setf(uint8_t pwrmgt)

{
  undefined3 in_register_00002029;
  
  _DAT_44b0004c = CONCAT31(in_register_00002029,pwrmgt) << 2 | _DAT_44b0004c & 0xfffffffb;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ps_dpsm_update(_Bool pause)

{
  uint **ppuVar1;
  undefined3 in_register_00002029;
  int iVar2;
  uint uVar3;
  
  if (CONCAT31(in_register_00002029,pause) == 0) {
    DAT_00000024 = DAT_00000024 | 4;
    _DAT_00000004 = _DAT_00000004 & 0xfffffff7;
  }
  else {
    DAT_00000024 = DAT_00000024 | 2;
    _DAT_00000004 = _DAT_00000004 | 8;
  }
  _LVL18(CONCAT31(in_register_00002029,pause) ^ 1);
  ppuVar1 = (uint **)_DAT_00000008;
  _DAT_00000008 = (uint *)((uint)_DAT_00000008 & 0xffffff00);
  while (ppuVar1 != (uint **)0x0) {
    if (((*(char *)((int)ppuVar1 + 0x56) == '\0') && (*(char *)(ppuVar1 + 0x16) != '\0')) &&
       (iVar2 = FUN_0001015c(ppuVar1), iVar2 != 0)) {
      uVar3 = (uint)_DAT_00000008 & 0xff;
      *(undefined *)((int)ppuVar1 + 0x5f) = 0;
      _DAT_00000008 = (uint *)((uint)_DAT_00000008 & 0xffffff00 | uVar3 + 1 & 0xff);
      _L0(*(undefined *)(ppuVar1 + 0x18),0,ppuVar1);
    }
    ppuVar1 = (uint **)*ppuVar1;
  }
  if (((uint)_DAT_00000008 & 0xff) == 0) {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x0)(0,0x800000);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL18(void)

{
  char cVar1;
  undefined uVar2;
  int unaff_s0;
  int *piVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  _LVL18();
  piVar3 = (int *)_DAT_00000008;
  *(undefined *)(unaff_s0 + 8) = 0;
  while (piVar3 != (int *)0x0) {
    if (((*(char *)((int)piVar3 + 0x56) == '\0') && (*(char *)(piVar3 + 0x16) != '\0')) &&
       (iVar4 = FUN_0001015c(piVar3), iVar4 != 0)) {
      cVar1 = *(char *)(unaff_s0 + 8);
      uVar2 = *(undefined *)(piVar3 + 0x18);
      *(undefined *)((int)piVar3 + 0x5f) = 0;
      *(char *)(unaff_s0 + 8) = cVar1 + '\x01';
      _L0(uVar2,piVar3);
    }
    piVar3 = (int *)*piVar3;
  }
  if (*(char *)(unaff_s0 + 8) == '\0') {
                    // WARNING: Could not recover jumptable at 0x00010136. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(0,0x800000);
    return;
  }
  return;
}



void FUN_0001015c(int *param_1)

{
  char cVar1;
  undefined uVar2;
  int unaff_s0;
  int *unaff_s1;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    iVar3 = FUN_0001015c(param_1);
    if (iVar3 != 0) {
      cVar1 = *(char *)(unaff_s0 + 8);
      uVar2 = *(undefined *)(unaff_s1 + 0x18);
      *(undefined *)((int)unaff_s1 + 0x5f) = 0;
      *(char *)(unaff_s0 + 8) = cVar1 + '\x01';
      _L0(uVar2,unaff_s1);
    }
    do {
      unaff_s1 = (int *)*unaff_s1;
      if (unaff_s1 == (int *)0x0) {
        if (*(char *)(unaff_s0 + 8) != '\0') {
          return;
        }
                    // WARNING: Could not recover jumptable at 0x00010136. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)(0,0x800000);
        return;
      }
    } while ((*(char *)((int)unaff_s1 + 0x56) != '\0') ||
            (param_1 = unaff_s1, *(char *)(unaff_s1 + 0x16) == '\0'));
  } while( true );
}



void _L0(uint param_1,int *param_2)

{
  char cVar1;
  int unaff_s0;
  int *unaff_s1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    _L0(param_1,param_2);
    do {
      unaff_s1 = (int *)*unaff_s1;
      if (unaff_s1 == (int *)0x0) {
        if (*(char *)(unaff_s0 + 8) == '\0') {
                    // WARNING: Could not recover jumptable at 0x00010136. Too many branches
                    // WARNING: Treating indirect jump as call
          (*UNRECOVERED_JUMPTABLE)(0,0x800000);
          return;
        }
        return;
      }
    } while (((*(char *)((int)unaff_s1 + 0x56) != '\0') || (*(char *)(unaff_s1 + 0x16) == '\0')) ||
            (iVar2 = FUN_0001015c(unaff_s1), iVar2 == 0));
    cVar1 = *(char *)(unaff_s0 + 8);
    param_1 = (uint)*(byte *)(unaff_s1 + 0x18);
    *(undefined *)((int)unaff_s1 + 0x5f) = 0;
    *(char *)(unaff_s0 + 8) = cVar1 + '\x01';
    param_2 = unaff_s1;
  } while( true );
}



uint8_t ps_send_pspoll(vif_info_tag *vif_entry)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char acStack40 [4];
  phy_channel_info phy_info;
  
  bVar1 = *(byte *)&(vif_entry->u).field_0x4;
  _LVL32(acStack40,0);
  iVar3 = FUN_000101be(acStack40[0] != '\0',0x10);
  if (iVar3 != 0) {
    _LVL35(vif_entry,iVar3);
    iVar4 = *(int *)(iVar3 + 0x68);
    *(undefined *)(iVar4 + 0x14c) = 0xa4;
    iVar5 = (uint)bVar1 * 0x1b0;
    *(undefined *)(iVar4 + 0x14d) = 0;
    uVar2 = *(ushort *)(iVar5 + 0x18);
    *(char *)(iVar4 + 0x14e) = (char)uVar2;
    *(byte *)(iVar4 + 0x14f) = (byte)((uint)uVar2 >> 8) | 0xc0;
    _L0(iVar4 + 0x150,iVar5 + 0x1e,6);
    FUN_00010226(iVar4 + 0x156,&vif_entry->mac_addr,6);
    *(uint *)(*(int *)(iVar3 + 0x6c) + 0x3c) = *(uint *)(*(int *)(iVar3 + 0x6c) + 0x3c) | 0x10000053
    ;
    *(undefined *)(iVar3 + 0x2f) = *(undefined *)(iVar5 + 0x1a);
    *(undefined *)(iVar3 + 0x30) = *(undefined *)(iVar5 + 0x1b);
    _L0(iVar3,3);
  }
  return (uint8_t)(iVar3 == 0);
}



bool _LVL32(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  int iVar4;
  char in_stack_00000008;
  
  _LVL32();
  iVar2 = FUN_000101be(in_stack_00000008 != '\0',0x10);
  if (iVar2 != 0) {
    _LVL35(iVar2);
    iVar3 = *(int *)(iVar2 + 0x68);
    *(undefined *)(iVar3 + 0x14c) = 0xa4;
    iVar4 = unaff_s4 * 0x1b0;
    *(undefined *)(iVar3 + 0x14d) = 0;
    uVar1 = *(ushort *)(iVar4 + 0x18);
    *(char *)(iVar3 + 0x14e) = (char)uVar1;
    *(byte *)(iVar3 + 0x14f) = (byte)((uint)uVar1 >> 8) | 0xc0;
    _L0(iVar3 + 0x150,iVar4 + 0x1e,6);
    FUN_00010226(iVar3 + 0x156,unaff_s3 + 0x50,6);
    *(uint *)(*(int *)(iVar2 + 0x6c) + 0x3c) = *(uint *)(*(int *)(iVar2 + 0x6c) + 0x3c) | 0x10000053
    ;
    *(undefined *)(iVar2 + 0x2f) = *(undefined *)(iVar4 + 0x1a);
    *(undefined *)(iVar2 + 0x30) = *(undefined *)(iVar4 + 0x1b);
    _L0(iVar2,3);
  }
  return iVar2 == 0;
}



bool FUN_000101be(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  int iVar4;
  
  iVar2 = FUN_000101be();
  if (iVar2 != 0) {
    _LVL35(iVar2);
    iVar3 = *(int *)(iVar2 + 0x68);
    *(undefined *)(iVar3 + 0x14c) = 0xa4;
    iVar4 = unaff_s4 * 0x1b0;
    *(undefined *)(iVar3 + 0x14d) = 0;
    uVar1 = *(ushort *)(iVar4 + 0x18);
    *(char *)(iVar3 + 0x14e) = (char)uVar1;
    *(byte *)(iVar3 + 0x14f) = (byte)((uint)uVar1 >> 8) | 0xc0;
    _L0(iVar3 + 0x150,iVar4 + 0x1e,6);
    FUN_00010226(iVar3 + 0x156,unaff_s3 + 0x50,6);
    *(uint *)(*(int *)(iVar2 + 0x6c) + 0x3c) = *(uint *)(*(int *)(iVar2 + 0x6c) + 0x3c) | 0x10000053
    ;
    *(undefined *)(iVar2 + 0x2f) = *(undefined *)(iVar4 + 0x1a);
    *(undefined *)(iVar2 + 0x30) = *(undefined *)(iVar4 + 0x1b);
    _L0(iVar2,3);
  }
  return iVar2 == 0;
}



undefined4 _LVL35(void)

{
  ushort uVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s3;
  int unaff_s4;
  int iVar3;
  
  _LVL35();
  iVar2 = *(int *)(unaff_s1 + 0x68);
  *(undefined *)(iVar2 + 0x14c) = 0xa4;
  iVar3 = unaff_s4 * 0x1b0;
  *(undefined *)(iVar2 + 0x14d) = 0;
  uVar1 = *(ushort *)(iVar3 + 0x18);
  *(char *)(iVar2 + 0x14e) = (char)uVar1;
  *(byte *)(iVar2 + 0x14f) = (byte)((uint)uVar1 >> 8) | 0xc0;
  _L0(iVar2 + 0x150,iVar3 + 0x1e,6);
  FUN_00010226(iVar2 + 0x156,unaff_s3 + 0x50,6);
  *(uint *)(*(int *)(unaff_s1 + 0x6c) + 0x3c) =
       *(uint *)(*(int *)(unaff_s1 + 0x6c) + 0x3c) | 0x10000053;
  *(undefined *)(unaff_s1 + 0x2f) = *(undefined *)(iVar3 + 0x1a);
  *(undefined *)(unaff_s1 + 0x30) = *(undefined *)(iVar3 + 0x1b);
  _L0(3);
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  _L0();
  FUN_00010226(unaff_s2 + 0x156,unaff_s3 + 0x50,6);
  *(uint *)(*(int *)(unaff_s1 + 0x6c) + 0x3c) =
       *(uint *)(*(int *)(unaff_s1 + 0x6c) + 0x3c) | 0x10000053;
  *(undefined *)(unaff_s1 + 0x2f) = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)(unaff_s1 + 0x30) = *(undefined *)(unaff_s0 + 0x1b);
  _L0(3);
  return 0;
}



undefined4 FUN_00010226(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00010226();
  *(uint *)(*(int *)(unaff_s1 + 0x6c) + 0x3c) =
       *(uint *)(*(int *)(unaff_s1 + 0x6c) + 0x3c) | 0x10000053;
  *(undefined *)(unaff_s1 + 0x2f) = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)(unaff_s1 + 0x30) = *(undefined *)(unaff_s0 + 0x1b);
  _L0(3);
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



void ps_init(undefined4 uRam00000010)

{
  _L0(0,0,0x28);
  uRam00000010 = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ps_set_mode(uint8_t mode,ke_task_id_t taskid)

{
  uint **ppuVar1;
  undefined3 in_register_00002029;
  int iVar2;
  
  kRam00000002 = taskid;
  if (((DAT_00000024 & 1) == 0) || ((DAT_00000024 & 6) == 0)) {
    if (CONCAT31(in_register_00002029,mode) == 0) {
      DAT_00000024 = 0;
      _L0();
    }
    else {
      if (CONCAT31(in_register_00002029,mode) == 2) {
        DAT_00000024 = DAT_00000024 | 1;
      }
      _L0(1);
    }
    ppuVar1 = (uint **)_DAT_00000008;
    _DAT_00000008 = (uint *)((uint)_DAT_00000008 & 0xffffff00);
    DAT_0000001d = 0;
    while (ppuVar1 != (uint **)0x0) {
      if (((*(char *)((int)ppuVar1 + 0x56) == '\0') && (*(char *)(ppuVar1 + 0x16) != '\0')) &&
         (iVar2 = FUN_0001035e(ppuVar1), iVar2 != 0)) {
        *(undefined *)((int)ppuVar1 + 0x5f) = 0;
        _DAT_00000008 = (uint *)((uint)_DAT_00000008 & 0xffffff00 | (uint)(byte)(DAT_00000008 + 1));
        if (*(char *)(ppuVar1 + 0x1a) != '\0') {
          DAT_0000001d = 1;
        }
        FUN_00010388(*(undefined *)(ppuVar1 + 0x18),0,ppuVar1);
      }
      ppuVar1 = (uint **)*ppuVar1;
    }
    if (((uint)_DAT_00000008 & 0xff) == 0) {
                    // WARNING: Treating indirect jump as call
      (*(code *)0x0)(0,0x800000);
      return;
    }
  }
  else {
    DAT_00000024 = DAT_00000024 | 0x10;
    DAT_00000025 = mode;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  char cVar1;
  int unaff_s0;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  _L0();
  piVar2 = (int *)_DAT_00000008;
  *(undefined *)(unaff_s0 + 8) = 0;
  *(undefined *)(unaff_s0 + 0x1d) = 0;
  while (piVar2 != (int *)0x0) {
    if (((*(char *)((int)piVar2 + 0x56) == '\0') && (*(char *)(piVar2 + 0x16) != '\0')) &&
       (iVar3 = FUN_0001035e(piVar2), iVar3 != 0)) {
      cVar1 = *(char *)(unaff_s0 + 8);
      *(undefined *)((int)piVar2 + 0x5f) = 0;
      *(char *)(unaff_s0 + 8) = cVar1 + '\x01';
      if (*(char *)(piVar2 + 0x1a) != '\0') {
        *(undefined *)(unaff_s0 + 0x1d) = 1;
      }
      FUN_00010388(*(undefined *)(piVar2 + 0x18),piVar2);
    }
    piVar2 = (int *)*piVar2;
  }
  if (*(char *)(unaff_s0 + 8) == '\0') {
                    // WARNING: Could not recover jumptable at 0x0001032c. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(0,0x800000);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  char cVar1;
  int unaff_s0;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  _L0();
  piVar2 = (int *)_DAT_00000008;
  *(undefined *)(unaff_s0 + 8) = 0;
  *(undefined *)(unaff_s0 + 0x1d) = 0;
  while (piVar2 != (int *)0x0) {
    if (((*(char *)((int)piVar2 + 0x56) == '\0') && (*(char *)(piVar2 + 0x16) != '\0')) &&
       (iVar3 = FUN_0001035e(piVar2), iVar3 != 0)) {
      cVar1 = *(char *)(unaff_s0 + 8);
      *(undefined *)((int)piVar2 + 0x5f) = 0;
      *(char *)(unaff_s0 + 8) = cVar1 + '\x01';
      if (*(char *)(piVar2 + 0x1a) != '\0') {
        *(undefined *)(unaff_s0 + 0x1d) = 1;
      }
      FUN_00010388(*(undefined *)(piVar2 + 0x18),piVar2);
    }
    piVar2 = (int *)*piVar2;
  }
  if (*(char *)(unaff_s0 + 8) == '\0') {
                    // WARNING: Could not recover jumptable at 0x0001032c. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(0,0x800000);
    return;
  }
  return;
}



void FUN_0001035e(int *param_1)

{
  char cVar1;
  int unaff_s0;
  int *unaff_s1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined unaff_s3;
  
  do {
    iVar2 = FUN_0001035e(param_1);
    if (iVar2 != 0) {
      cVar1 = *(char *)(unaff_s0 + 8);
      *(undefined *)((int)unaff_s1 + 0x5f) = 0;
      *(char *)(unaff_s0 + 8) = cVar1 + '\x01';
      if (*(char *)(unaff_s1 + 0x1a) != '\0') {
        *(undefined *)(unaff_s0 + 0x1d) = unaff_s3;
      }
      FUN_00010388(*(undefined *)(unaff_s1 + 0x18),unaff_s1);
    }
    do {
      unaff_s1 = (int *)*unaff_s1;
      if (unaff_s1 == (int *)0x0) {
        if (*(char *)(unaff_s0 + 8) != '\0') {
          return;
        }
                    // WARNING: Could not recover jumptable at 0x0001032c. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)(0,0x800000);
        return;
      }
    } while ((*(char *)((int)unaff_s1 + 0x56) != '\0') ||
            (param_1 = unaff_s1, *(char *)(unaff_s1 + 0x16) == '\0'));
  } while( true );
}



void FUN_00010388(uint param_1,int *param_2)

{
  char cVar1;
  int unaff_s0;
  int *unaff_s1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined unaff_s3;
  
  do {
    FUN_00010388(param_1,param_2);
    do {
      unaff_s1 = (int *)*unaff_s1;
      if (unaff_s1 == (int *)0x0) {
        if (*(char *)(unaff_s0 + 8) == '\0') {
                    // WARNING: Could not recover jumptable at 0x0001032c. Too many branches
                    // WARNING: Treating indirect jump as call
          (*UNRECOVERED_JUMPTABLE)(0,0x800000);
          return;
        }
        return;
      }
    } while (((*(char *)((int)unaff_s1 + 0x56) != '\0') || (*(char *)(unaff_s1 + 0x16) == '\0')) ||
            (iVar2 = FUN_0001035e(unaff_s1), iVar2 == 0));
    cVar1 = *(char *)(unaff_s0 + 8);
    *(undefined *)((int)unaff_s1 + 0x5f) = 0;
    *(char *)(unaff_s0 + 8) = cVar1 + '\x01';
    if (*(char *)(unaff_s1 + 0x1a) != '\0') {
      *(undefined *)(unaff_s0 + 0x1d) = unaff_s3;
    }
    param_1 = (uint)*(byte *)(unaff_s1 + 0x18);
    param_2 = unaff_s1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ps_enable_cfm(void *env,uint32_t status)

{
  uint **ppuVar1;
  char cVar2;
  uint uVar3;
  
  if (-1 < (int)(status << 8)) {
    cVar2 = *(char *)((int)env + 0x5f) + '\x01';
    *(char *)((int)env + 0x5f) = cVar2;
    if (cVar2 != '\x03') {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _L0(env);
  }
  if ((((uint)_DAT_00000008 & 0xff) == 0) ||
     (uVar3 = ((uint)_DAT_00000008 & 0xff) - 1 & 0xff,
     _DAT_00000008 = (uint *)((uint)_DAT_00000008 & 0xffffff00 | uVar3), uVar3 == 0)) {
    ppuVar1 = (uint **)_DAT_00000008;
    if (DAT_0000001d != '\0') {
      FUN_000103f6(0xc,_DAT_44b00120 + _DAT_00000020);
      DAT_0000001c = 1;
      while (ppuVar1 != (uint **)0x0) {
        if (((*(char *)((int)ppuVar1 + 0x56) == '\0') && (*(char *)(ppuVar1 + 0x16) != '\0')) &&
           (*(char *)(ppuVar1 + 0x1a) != '\0')) {
          ppuVar1[1] = (uint *)((uint)ppuVar1[1] & 0xfffffff7);
        }
        ppuVar1 = (uint **)*ppuVar1;
      }
    }
    if ((DAT_00000024 & 5) == 5) {
      DAT_00000024 = DAT_00000024 & 0xf3;
    }
    else {
      uRam00000000 = 1;
      _L0(0x32,uRam00000002,0);
    }
    if ((DAT_00000024 & 0x10) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined2 param_1,int iRam00000020,undefined2 param_3)

{
  uint **ppuVar1;
  uint uVar2;
  
  _L0();
  if ((((uint)_DAT_00000008 & 0xff) == 0) ||
     (uVar2 = ((uint)_DAT_00000008 & 0xff) - 1 & 0xff,
     _DAT_00000008 = (uint *)((uint)_DAT_00000008 & 0xffffff00 | uVar2), uVar2 == 0)) {
    ppuVar1 = (uint **)_DAT_00000008;
    if (DAT_0000001d != '\0') {
      FUN_000103f6(0xc,_DAT_44b00120 + iRam00000020);
      DAT_0000001c = 1;
      while (ppuVar1 != (uint **)0x0) {
        if (((*(char *)((int)ppuVar1 + 0x56) == '\0') && (*(char *)(ppuVar1 + 0x16) != '\0')) &&
           (*(char *)(ppuVar1 + 0x1a) != '\0')) {
          ppuVar1[1] = (uint *)((uint)ppuVar1[1] & 0xfffffff7);
        }
        ppuVar1 = (uint **)*ppuVar1;
      }
    }
    if ((DAT_00000024 & 5) == 5) {
      DAT_00000024 = DAT_00000024 & 0xf3;
    }
    else {
      uRam00000000 = 1;
      _L0(0x32,uRam00000002,0);
    }
    if ((DAT_00000024 & 0x10) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_000103f6(void)

{
  undefined *unaff_s0;
  int *unaff_s1;
  
  FUN_000103f6();
  unaff_s0[0x1c] = 1;
  while (unaff_s1 != (int *)0x0) {
    if (((*(char *)((int)unaff_s1 + 0x56) == '\0') && (*(char *)(unaff_s1 + 0x16) != '\0')) &&
       (*(char *)(unaff_s1 + 0x1a) != '\0')) {
      unaff_s1[1] = unaff_s1[1] & 0xfffffff7;
    }
    unaff_s1 = (int *)*unaff_s1;
  }
  if ((unaff_s0[0x24] & 5) == 5) {
    unaff_s0[0x24] = unaff_s0[0x24] & 0xf3;
  }
  else {
    *unaff_s0 = 1;
    _L0(0x32,*(undefined2 *)(unaff_s0 + 2),0);
  }
  if ((unaff_s0[0x24] & 0x10) == 0) {
    return;
  }
  unaff_s0[0x24] = unaff_s0[0x24] & 0xef;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  if ((*(byte *)(unaff_s0 + 0x24) & 0x10) == 0) {
    return;
  }
  *(byte *)(unaff_s0 + 0x24) = *(byte *)(unaff_s0 + 0x24) & 0xef;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void ps_disable_cfm(void *env,uint32_t status)

{
  char cVar1;
  
  if (-1 < (int)(status << 8)) {
    cVar1 = *(char *)((int)env + 0x5f) + '\x01';
    *(char *)((int)env + 0x5f) = cVar1;
    if (cVar1 != '\x03') {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    _L0(env);
  }
  if ((DAT_00000008 == '\0') || (DAT_00000008 = DAT_00000008 + -1, DAT_00000008 == '\0')) {
    FUN_000104f0(0xc);
    DAT_0000001c = 0;
    if ((DAT_00000024 & 3) == 3) {
      DAT_00000024 = DAT_00000024 & 0xfd | 8;
    }
    else {
      uRam00000000 = 0;
      _L0(0x32,uRam00000002,0);
    }
    if ((DAT_00000024 & 0x10) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void _L0(undefined param_1,undefined2 param_2)

{
  _L0();
  if ((DAT_00000008 == '\0') || (DAT_00000008 = DAT_00000008 + -1, DAT_00000008 == '\0')) {
    FUN_000104f0(0xc);
    DAT_0000001c = 0;
    if ((DAT_00000024 & 3) == 3) {
      DAT_00000024 = DAT_00000024 & 0xfd | 8;
    }
    else {
      uRam00000000 = 0;
      _L0(0x32,uRam00000002,0);
    }
    if ((DAT_00000024 & 0x10) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_000104f0(void)

{
  undefined *unaff_s0;
  
  FUN_000104f0();
  unaff_s0[0x1c] = 0;
  if ((unaff_s0[0x24] & 3) == 3) {
    unaff_s0[0x24] = unaff_s0[0x24] & 0xfd | 8;
  }
  else {
    *unaff_s0 = 0;
    _L0(0x32,*(undefined2 *)(unaff_s0 + 2),0);
  }
  if ((unaff_s0[0x24] & 0x10) == 0) {
    return;
  }
  unaff_s0[0x24] = unaff_s0[0x24] & 0xef;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  if ((*(byte *)(unaff_s0 + 0x24) & 0x10) == 0) {
    return;
  }
  *(byte *)(unaff_s0 + 0x24) = *(byte *)(unaff_s0 + 0x24) & 0xef;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void ps_polling_frame(vif_info_tag *vif_entry)

{
  ps_polling_frame(vif_entry);
  return;
}



void ps_check_beacon(uint32_t tim,uint16_t len,vif_info_tag *vif_entry)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  byte bVar7;
  uint uVar8;
  
  cVar2 = cRam00000000;
  uVar8 = (uint)*(byte *)&(vif_entry->u).field_0x4;
  uVar1 = *(ushort *)(uVar8 * 0x1b0 + 0x18);
  uVar5 = vif_entry->prevent_sleep;
  uVar4 = uVar5 & 0xfffffffe;
  vif_entry->prevent_sleep = uVar4;
  if (((cVar2 == '\0') || ((DAT_00000024 & 8) != 0)) || (tim == 0)) {
    return;
  }
  if (*(char *)&(vif_entry->u).field_0x2 == '\0') {
    if ((*(byte *)(tim + 4) & 1) == 0) {
      vif_entry->prevent_sleep = uVar5 & 0xfffffffc;
    }
    else {
      vif_entry->prevent_sleep = uVar4 | 2;
    }
  }
  uVar5 = (uint)(uVar1 >> 3);
  uVar4 = *(byte *)(tim + 4) & 0xfe;
  bVar7 = *(byte *)&(vif_entry->u).field_0xc & 0xf;
  if (((uVar4 <= uVar5) && (uVar5 <= (*(byte *)(tim + 1) - 4) + uVar4)) &&
     (((uint)*(byte *)(((uVar5 + tim) - uVar4) + 5) & 1 << (uVar1 & 7)) != 0)) {
    if (bVar7 == 0xf) {
      iVar3 = _LVL104(uVar8,7,0,0);
      if (iVar3 != 0) {
        return;
      }
      uVar6 = vif_entry->prevent_sleep | 8;
    }
    else {
      iVar3 = _LVL109(vif_entry);
      if (iVar3 != 0) {
        return;
      }
      uVar6 = vif_entry->prevent_sleep | 4;
    }
    vif_entry->prevent_sleep = uVar6;
    return;
  }
  if (bVar7 == 0xf) {
    uVar6 = vif_entry->prevent_sleep & 0xfffffff7;
  }
  else {
    uVar6 = vif_entry->prevent_sleep & 0xfffffffb;
  }
  vif_entry->prevent_sleep = uVar6;
  return;
}



void _LVL104(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = _LVL104();
  if (iVar1 == 0) {
    *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) | 8;
  }
  return;
}



void _LVL109(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = _LVL109();
  if (iVar1 == 0) {
    *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) | 4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ps_check_frame(uint8_t *frame,uint32_t statinfo,vif_info_tag *vif_entry)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  char cVar5;
  
  cVar5 = DAT_0000001d;
  if (cRam00000000 == '\0') {
    return;
  }
  uVar2 = (uint)*(ushort *)frame;
  if ((frame[4] & 1) != 0) {
    if (((int)(uVar2 << 0x12) < 0) && (*(char *)&(vif_entry->u).field_0x2 == '\0')) {
      return;
    }
    uVar4 = vif_entry->prevent_sleep & 0xfffffffd;
_L0:
    vif_entry->prevent_sleep = uVar4;
    return;
  }
  if ((statinfo & 0x200) != 0) {
    return;
  }
  if (DAT_0000001d != '\0') {
    if ((uVar2 & 0x88) == 0x88) {
      if ((uVar2 & 0x300) == 0x300) {
        bVar1 = frame[0x1e];
      }
      else {
        bVar1 = frame[0x18];
      }
      if ((*(byte *)&(vif_entry->u).field_0xc >> (*(byte *)(bVar1 & 7) & 0x1f) & 1) != 0) {
        *(undefined4 *)&(vif_entry->u).field_0x8 = _DAT_44b00120;
        if ((bVar1 & 0x10) == 0) {
          return;
        }
        uVar4 = vif_entry->prevent_sleep & 0xfffffff7;
        goto _L0;
      }
    }
    else {
      if (((*(ushort *)frame & 0xc) == 0) && ((*(byte *)&(vif_entry->u).field_0xc & 8) != 0)) {
        *(undefined4 *)&(vif_entry->u).field_0x8 = _DAT_44b00120;
        goto _L0;
      }
    }
    cVar5 = '\0';
  }
_L0:
  _L0(vif_entry->index,1);
  if ((cVar5 == '\0') &&
     ((-1 < (int)(uVar2 << 0x12) ||
      (((DAT_00000024 & 8) == 0 && (iVar3 = FUN_0001076c(vif_entry), iVar3 != 0)))))) {
    vif_entry->prevent_sleep = vif_entry->prevent_sleep & 0xfffffffb;
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  _L0();
  if ((unaff_s3 == 0) &&
     ((-1 < unaff_s1 << 0x12 ||
      (((*(byte *)(unaff_s2 + 0x24) & 8) == 0 && (iVar1 = FUN_0001076c(), iVar1 != 0)))))) {
    *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffffb;
  }
  return;
}



void FUN_0001076c(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = FUN_0001076c();
  if (iVar1 != 0) {
    *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffffb;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ps_check_tx_frame(uint8_t staid,uint8_t tid)

{
  undefined3 in_register_00002029;
  undefined3 in_register_0000202d;
  int iVar1;
  
  if ((((cRam00000000 != '\0') && (CONCAT31(in_register_00002029,staid) != 0xff)) &&
      ((byte *)CONCAT31(in_register_0000202d,tid) != (byte *)0xff)) &&
     ((iVar1 = (uint)*(byte *)(CONCAT31(in_register_00002029,staid) * 0x1b0 + 0x1a) * 0x5d8,
      *(char *)(iVar1 + 0x56) == '\0' && (*(char *)(iVar1 + 0x58) != '\0')))) {
    if ((*(byte *)(iVar1 + 0x68) >> (*(byte *)CONCAT31(in_register_0000202d,tid) & 0x1f) & 1) == 0)
    {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 8;
    *(undefined4 *)(iVar1 + 100) = _DAT_44b00120;
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ps_uapsd_set(vif_info_tag *vif_entry,uint8_t hw_queue,_Bool uapsd)

{
  byte bVar1;
  byte bVar2;
  undefined3 in_register_00002031;
  
  bVar1 = *(byte *)&(vif_entry->u).field_0xc;
  bVar2 = (byte)(1 << (hw_queue & 0x1f));
  if (CONCAT31(in_register_00002031,uapsd) == 0) {
    *(byte *)&(vif_entry->u).field_0xc = bVar1 & ~bVar2;
  }
  else {
    *(byte *)&(vif_entry->u).field_0xc = bVar1 | bVar2;
    if ((cRam00000000 != '\0') && (DAT_0000001c == '\0')) {
      DAT_0000001d = 1;
      FUN_00010854(0xc,_DAT_44b00120 + _DAT_00000020);
      DAT_0000001c = '\x01';
    }
  }
  return;
}



void FUN_00010854(void)

{
  int unaff_s0;
  undefined unaff_s1;
  
  FUN_00010854();
  *(undefined *)(unaff_s0 + 0x1c) = unaff_s1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ps_traffic_status_update(uint8_t vif_index,uint8_t new_status)

{
  undefined3 in_register_00002029;
  undefined3 in_register_0000202d;
  int *piVar1;
  
  if (((cRam00000000 != '\0') && ((DAT_00000024 & 1) != 0)) && ((DAT_00000024 & 6) == 0)) {
    piVar1 = _DAT_00000008;
    if (CONCAT31(in_register_0000202d,new_status) == 0) {
      while ((piVar1 != (int *)0x0 &&
             ((((uint)*(byte *)((int)piVar1 + 0x57) == CONCAT31(in_register_00002029,vif_index) ||
               (*(char *)(piVar1 + 0x16) == '\0')) ||
              ((*(char *)((int)piVar1 + 0x56) != '\0' ||
               ((*(byte *)((uint)*(byte *)((int)piVar1 + 0x57) * 0x24 + 0x21) & 0xc) == 0))))))) {
        piVar1 = (int *)*piVar1;
      }
    }
    if ((DAT_00000024 & 8) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}

