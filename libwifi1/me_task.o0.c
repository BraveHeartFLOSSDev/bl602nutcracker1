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
typedef unsigned int    undefined3;
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

struct scan_chan_tag { // DWARF DIE: cd6
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

struct scan_start_req { // DWARF DIE: 1f71
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

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictf3_for___value anon_union.conflictf3_for___value, *Panon_union.conflictf3_for___value;

typedef uint wint_t;

union anon_union.conflictf3_for___value { // DWARF DIE: f3
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 125
    int __count;
    union anon_union.conflictf3_for___value __value;
};

typedef union anon_union.conflictf3 anon_union.conflictf3, *Panon_union.conflictf3;

union anon_union.conflictf3 { // DWARF DIE: f3
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 11db
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

typedef union anon_union.conflict34d2_for_field_0 anon_union.conflict34d2_for_field_0, *Panon_union.conflict34d2_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict12e7_for_field_3 anon_union.conflict12e7_for_field_3, *Panon_union.conflict12e7_for_field_3;

typedef union anon_union.conflict130c_for_field_4 anon_union.conflict130c_for_field_4, *Panon_union.conflict130c_for_field_4;

typedef union anon_union.conflict1331_for_field_5 anon_union.conflict1331_for_field_5, *Panon_union.conflict1331_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: e60
    struct co_list_hdr * next;
};

union anon_union.conflict12e7_for_field_3 { // DWARF DIE: 12e7
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct hostdesc { // DWARF DIE: 2f9c
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

struct tx_cfm_tag { // DWARF DIE: 1744
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct umacdesc { // DWARF DIE: 3078
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

struct lmacdesc { // DWARF DIE: 30d4
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

union anon_union.conflict1331_for_field_5 { // DWARF DIE: 1331
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict130c_for_field_4 { // DWARF DIE: 130c
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_hd { // DWARF DIE: 1356
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict12e7_for_field_3 field_3;
    union anon_union.conflict130c_for_field_4 field_4;
    union anon_union.conflict1331_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 17c3
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct txdesc { // DWARF DIE: 31f0
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 12bc
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct tx_policy_tbl { // DWARF DIE: 124b
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict34d2_for_field_0 { // DWARF DIE: 34d2
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 25a2
    union anon_union.conflict34d2_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct dma_desc { // DWARF DIE: 10be
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd { // DWARF DIE: 141f
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_tag { // DWARF DIE: 310f
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

struct tx_agg_desc { // DWARF DIE: 17f4
    uint8_t reserved;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 1112
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: e81
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag { // DWARF DIE: 207d
    struct co_list prog;
};

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag { // DWARF DIE: 203c
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

struct rx_swdesc { // DWARF DIE: 157f
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

struct phy_channel_info { // DWARF DIE: 11a3
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 1614
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 1474
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

struct rx_payloaddesc { // DWARF DIE: 16e7
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 1677
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

struct ps_env_tag { // DWARF DIE: 4264
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

typedef struct mm_sta_del_req mm_sta_del_req, *Pmm_sta_del_req;

struct mm_sta_del_req { // DWARF DIE: 1c7b
    uint8_t sta_idx;
};

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct mm_chan_ctxt_add_req { // DWARF DIE: 1cd2
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

typedef enum mm_msg_tag {
    MM_ADD_IF_CFM=7,
    MM_ADD_IF_REQ=6,
    MM_BA_ADD_CFM=41,
    MM_BA_ADD_REQ=40,
    MM_BA_DEL_CFM=43,
    MM_BA_DEL_REQ=42,
    MM_BCN_CHANGE_CFM=64,
    MM_BCN_CHANGE_REQ=63,
    MM_BFMER_ENABLE_REQ=80,
    MM_CFG_RSSI_REQ=86,
    MM_CHANNEL_PRE_SWITCH_IND=69,
    MM_CHANNEL_SURVEY_IND=79,
    MM_CHANNEL_SWITCH_IND=68,
    MM_CHAN_CTXT_ADD_CFM=52,
    MM_CHAN_CTXT_ADD_REQ=51,
    MM_CHAN_CTXT_DEL_CFM=54,
    MM_CHAN_CTXT_DEL_REQ=53,
    MM_CHAN_CTXT_LINK_CFM=56,
    MM_CHAN_CTXT_LINK_REQ=55,
    MM_CHAN_CTXT_SCHED_CFM=62,
    MM_CHAN_CTXT_SCHED_REQ=61,
    MM_CHAN_CTXT_UNLINK_CFM=58,
    MM_CHAN_CTXT_UNLINK_REQ=57,
    MM_CHAN_CTXT_UPDATE_CFM=60,
    MM_CHAN_CTXT_UPDATE_REQ=59,
    MM_CONNECTION_LOSS_IND=67,
    MM_CSA_COUNTER_IND=78,
    MM_CSA_FINISH_IND=88,
    MM_CSA_TRAFFIC_IND=89,
    MM_DENOISE_REQ=48,
    MM_FORCE_IDLE_REQ=96,
    MM_KEY_ADD_CFM=37,
    MM_KEY_ADD_REQ=36,
    MM_KEY_DEL_CFM=39,
    MM_KEY_DEL_REQ=38,
    MM_MAX=99,
    MM_MONITOR_CFM=93,
    MM_MONITOR_CHANNEL_CFM=95,
    MM_MONITOR_CHANNEL_REQ=94,
    MM_MONITOR_REQ=92,
    MM_MU_GROUP_UPDATE_CFM=91,
    MM_MU_GROUP_UPDATE_REQ=90,
    MM_P2P_NOA_UPD_IND=85,
    MM_P2P_VIF_PS_CHANGE_IND=77,
    MM_PRIMARY_TBTT_IND=44,
    MM_PS_CHANGE_IND=73,
    MM_REMAIN_ON_CHANNEL_CFM=71,
    MM_REMAIN_ON_CHANNEL_EXP_IND=72,
    MM_REMAIN_ON_CHANNEL_REQ=70,
    MM_REMOVE_IF_CFM=9,
    MM_REMOVE_IF_REQ=8,
    MM_RESET_CFM=1,
    MM_RESET_REQ=0,
    MM_RSSI_STATUS_IND=87,
    MM_SCAN_CHANNEL_END_IND=98,
    MM_SCAN_CHANNEL_START_IND=97,
    MM_SECONDARY_TBTT_IND=45,
    MM_SET_BASIC_RATES_CFM=23,
    MM_SET_BASIC_RATES_REQ=22,
    MM_SET_BEACON_INT_CFM=21,
    MM_SET_BEACON_INT_REQ=20,
    MM_SET_BSSID_CFM=25,
    MM_SET_BSSID_REQ=24,
    MM_SET_CHANNEL_CFM=17,
    MM_SET_CHANNEL_REQ=16,
    MM_SET_DTIM_CFM=19,
    MM_SET_DTIM_REQ=18,
    MM_SET_EDCA_CFM=27,
    MM_SET_EDCA_REQ=26,
    MM_SET_FILTER_CFM=15,
    MM_SET_FILTER_REQ=14,
    MM_SET_IDLE_CFM=35,
    MM_SET_IDLE_REQ=34,
    MM_SET_MODE_CFM=29,
    MM_SET_MODE_REQ=28,
    MM_SET_P2P_NOA_CFM=83,
    MM_SET_P2P_NOA_REQ=81,
    MM_SET_P2P_OPPPS_CFM=84,
    MM_SET_P2P_OPPPS_REQ=82,
    MM_SET_POWER_CFM=47,
    MM_SET_POWER_REQ=46,
    MM_SET_PS_MODE_CFM=50,
    MM_SET_PS_MODE_REQ=49,
    MM_SET_PS_OPTIONS_CFM=76,
    MM_SET_PS_OPTIONS_REQ=75,
    MM_SET_SLOTTIME_CFM=33,
    MM_SET_SLOTTIME_REQ=32,
    MM_SET_VIF_STATE_CFM=31,
    MM_SET_VIF_STATE_REQ=30,
    MM_START_CFM=3,
    MM_START_REQ=2,
    MM_STA_ADD_CFM=11,
    MM_STA_ADD_REQ=10,
    MM_STA_DEL_CFM=13,
    MM_STA_DEL_REQ=12,
    MM_TIM_UPDATE_CFM=66,
    MM_TIM_UPDATE_REQ=65,
    MM_TRAFFIC_REQ_IND=74,
    MM_VERSION_CFM=5,
    MM_VERSION_REQ=4
} mm_msg_tag;

typedef struct mm_ps_change_ind mm_ps_change_ind, *Pmm_ps_change_ind;

struct mm_ps_change_ind { // DWARF DIE: 1d6e
    uint8_t sta_idx;
    uint8_t ps_state;
};

typedef struct mm_set_idle_req mm_set_idle_req, *Pmm_set_idle_req;

struct mm_set_idle_req { // DWARF DIE: 1c98
    uint8_t hw_idle;
};

typedef struct mm_set_ps_mode_req mm_set_ps_mode_req, *Pmm_set_ps_mode_req;

struct mm_set_ps_mode_req { // DWARF DIE: 1cb5
    uint8_t new_state;
};

typedef struct mm_tim_update_req mm_tim_update_req, *Pmm_tim_update_req;

struct mm_tim_update_req { // DWARF DIE: 1d35
    uint16_t aid;
    uint8_t tx_avail;
    uint8_t inst_nbr;
};

typedef struct mm_sta_add_req mm_sta_add_req, *Pmm_sta_add_req;

struct mm_sta_add_req { // DWARF DIE: 1bd2
    uint32_t ampdu_size_max_vht;
    uint32_t paid_gid;
    uint16_t ampdu_size_max_ht;
    struct mac_addr mac_addr;
    uint8_t ampdu_spacing_min;
    uint8_t inst_nbr;
    _Bool tdls_sta;
    int8_t rssi;
    uint32_t tsflo;
    uint32_t tsfhi;
    uint8_t data_rate;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
};

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 1213
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 3319
};

struct ke_env_tag { // DWARF DIE: 32ca
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef uint16_t ke_msg_id_t;

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list { // DWARF DIE: 3330
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 3378
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

typedef union anon_union.conflict4066_for_u anon_union.conflict4066_for_u, *Panon_union.conflict4066_for_u;

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef struct anon_struct.conflict3e9e anon_struct.conflict3e9e, *Panon_struct.conflict3e9e;

typedef struct anon_struct.conflict3f6b anon_struct.conflict3f6b, *Panon_struct.conflict3f6b;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

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

struct anon_struct.conflictaca { // DWARF DIE: aca
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct Cipher_t { // DWARF DIE: 37fe
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct chan_tbtt_tag { // DWARF DIE: 3ca2
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

struct mac_edca_param_set { // DWARF DIE: c9d
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset { // DWARF DIE: a82
    uint8_t length;
    uint8_t array[12];
};

struct txl_frame_cfm_tag { // DWARF DIE: 35c8
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 35f0
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

struct anon_struct.conflictb01 { // DWARF DIE: b01
    uint32_t key[4];
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

struct anon_struct.conflict3f6b { // DWARF DIE: 3f6b
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

struct anon_struct.conflict3e9e { // DWARF DIE: 3e9e
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

union anon_union.conflict4066_for_u { // DWARF DIE: 4066
    struct anon_struct.conflict3e9e sta;
    struct anon_struct.conflict3f6b ap;
};

struct mobility_domain { // DWARF DIE: 39ae
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
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

struct SecurityMode_t { // DWARF DIE: 3864
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

struct mac_bss_info { // DWARF DIE: 39d6
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

struct vif_info_tag { // DWARF DIE: 4089
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
    union anon_union.conflict4066_for_u u;
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

struct chan_ctxt_tag { // DWARF DIE: 3cf1
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

typedef union anon_union.conflict4066 anon_union.conflict4066, *Panon_union.conflict4066;

union anon_union.conflict4066 { // DWARF DIE: 4066
    struct anon_struct.conflict3e9e sta;
    struct anon_struct.conflict3f6b ap;
};

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag { // DWARF DIE: 41c4
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 1e6f
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 1e28
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 3644
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 2328
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

struct bam_env_tag { // DWARF DIE: 239b
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

struct sta_mgmt_ba_info { // DWARF DIE: 273c
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

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef struct rc_rate_stats rc_rate_stats, *Prc_rate_stats;

typedef struct step step, *Pstep;

typedef union anon_union.conflict2a58_for_rate_map anon_union.conflict2a58_for_rate_map, *Panon_union.conflict2a58_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 29bb
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

union anon_union.conflict2a58_for_rate_map { // DWARF DIE: 2a58
    uint8_t ht[4];
};

struct step { // DWARF DIE: 2a31
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

struct rc_sta_stats { // DWARF DIE: 25d6
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
    union anon_union.conflict2a58_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 2553
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2518
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct mac_vhtcapability { // DWARF DIE: c48
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

struct mac_sta_info { // DWARF DIE: d7a
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

struct sta_info_tag { // DWARF DIE: 278b
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

struct sta_info_env_tag { // DWARF DIE: 2974
    struct co_list free_sta_list;
};

typedef enum sta_mgmt_pol_upd {
    STA_MGMT_POL_UPD_BW=3,
    STA_MGMT_POL_UPD_MAX=5,
    STA_MGMT_POL_UPD_PPDU_TX=2,
    STA_MGMT_POL_UPD_PROT=1,
    STA_MGMT_POL_UPD_RATE=0,
    STA_MGMT_POL_UPD_TX_POWER=4
} sta_mgmt_pol_upd;

typedef struct chan_env_tag chan_env_tag, *Pchan_env_tag;

struct chan_env_tag { // DWARF DIE: 3d81
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

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 902
};

typedef union anon_union.conflict2a58 anon_union.conflict2a58, *Panon_union.conflict2a58;

union anon_union.conflict2a58 { // DWARF DIE: 2a58
    uint8_t ht[4];
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

struct me_chan_config_req { // DWARF DIE: 2bc1
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct me_env_tag { // DWARF DIE: 391a
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

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: fb0
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: fdc
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
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
    CONTROL_PORT_HOST=1,
    CONTROL_PORT_NO_ENC=2,
    CO_BAD_PARAM=4,
    CO_BUSY=8,
    CO_EMPTY=2,
    CO_FAIL=1,
    CO_FULL=3,
    CO_NOT_FOUND=5,
    CO_NO_ELT_IN_USE=7,
    CO_NO_MORE_ELT_AVAILABLE=6,
    CO_OK=0,
    CO_OP_IN_PROGRESS=9,
    DISABLE_HT=4,
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
    ME_BUSY=1,
    ME_IDLE=0,
    ME_STATE_MAX=2,
    MFP_IN_USE=16,
    PHY_BAND_2G4=0,
    PHY_BAND_5G=1,
    PHY_BAND_MAX=2,
    PHY_CHNL_BW_160=3,
    PHY_CHNL_BW_20=0,
    PHY_CHNL_BW_40=1,
    PHY_CHNL_BW_80=2,
    PHY_CHNL_BW_80P80=4,
    PHY_CHNL_BW_OTHER=5,
    PORT_CLOSED=0,
    PORT_CONTROLED=1,
    PORT_OPEN=2,
    PS_MODE_OFF=0,
    PS_MODE_ON=1,
    PS_MODE_ON_DYN=2,
    SCANU_IDLE=0,
    SCANU_SCANNING=1,
    SCANU_STATE_MAX=2,
    STA_HT_CAPA=2,
    STA_MAX=12,
    STA_MFP_CAPA=8,
    STA_OPMOD_NOTIF=16,
    STA_QOS_CAPA=1,
    STA_VHT_CAPA=4,
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
    VIF_AP=2,
    VIF_IBSS=1,
    VIF_MESH_POINT=3,
    VIF_STA=0,
    VIF_UNKNOWN=4,
    WPA_WPA2_IN_USE=8
} anon_enum_8.conflict985;

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 3bb6
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

struct scan_env_tag { // DWARF DIE: 1f15
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 1ed0
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 3421
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef union anon_union.conflict34d2 anon_union.conflict34d2, *Panon_union.conflict34d2;

union anon_union.conflict34d2 { // DWARF DIE: 34d2
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 33f9
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 3449
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

struct txl_buffer_env_tag { // DWARF DIE: 34f4
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict12e7 anon_union.conflict12e7, *Panon_union.conflict12e7;

union anon_union.conflict12e7 { // DWARF DIE: 12e7
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict130c anon_union.conflict130c, *Panon_union.conflict130c;

union anon_union.conflict130c { // DWARF DIE: 130c
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict1331 anon_union.conflict1331, *Panon_union.conflict1331;

union anon_union.conflict1331 { // DWARF DIE: 1331
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct me_set_ps_disable_req me_set_ps_disable_req, *Pme_set_ps_disable_req;

struct me_set_ps_disable_req { // DWARF DIE: 2dba
    _Bool ps_disable;
    uint8_t vif_idx;
};

typedef struct me_rc_stats_cfm me_rc_stats_cfm, *Pme_rc_stats_cfm;

struct me_rc_stats_cfm { // DWARF DIE: 2e41
    uint8_t sta_idx;
    undefined field_0x1;
    uint16_t no_samples;
    uint16_t ampdu_len;
    uint16_t ampdu_packets;
    uint32_t avg_ampdu_len;
    uint8_t sw_retry_step;
    uint8_t sample_wait;
    undefined field_0xe;
    undefined field_0xf;
    struct step retry[4];
    struct rc_rate_stats rate_stats[10];
    uint32_t tp[10];
};

typedef struct me_set_control_port_req me_set_control_port_req, *Pme_set_control_port_req;

struct me_set_control_port_req { // DWARF DIE: 2c28
    uint8_t sta_idx;
    _Bool control_port_open;
};

typedef struct me_sta_del_req me_sta_del_req, *Pme_sta_del_req;

struct me_sta_del_req { // DWARF DIE: 2d60
    uint8_t sta_idx;
    _Bool tdls_sta;
};

typedef struct me_traffic_ind_req me_traffic_ind_req, *Pme_traffic_ind_req;

struct me_traffic_ind_req { // DWARF DIE: 2de7
    uint8_t sta_idx;
    uint8_t tx_avail;
    _Bool uapsd;
};

typedef struct me_set_active_req me_set_active_req, *Pme_set_active_req;

struct me_set_active_req { // DWARF DIE: 2d8d
    _Bool active;
    uint8_t vif_idx;
};

typedef struct me_sta_add_cfm me_sta_add_cfm, *Pme_sta_add_cfm;

struct me_sta_add_cfm { // DWARF DIE: 2d2b
    uint8_t sta_idx;
    uint8_t status;
    uint8_t pm_state;
};

typedef struct me_rc_stats_req me_rc_stats_req, *Pme_rc_stats_req;

struct me_rc_stats_req { // DWARF DIE: 2e21
    uint8_t sta_idx;
};

typedef struct me_rc_set_rate_req me_rc_set_rate_req, *Pme_rc_set_rate_req;

struct me_rc_set_rate_req { // DWARF DIE: 2ed8
    uint8_t sta_idx;
    undefined field_0x1;
    uint16_t fixed_rate_cfg;
};

typedef struct me_sta_add_req me_sta_add_req, *Pme_sta_add_req;

struct me_sta_add_req { // DWARF DIE: 2c55
    struct mac_addr mac_addr;
    struct mac_rateset rate_set;
    undefined field_0x13;
    struct mac_htcapability ht_cap;
    struct mac_vhtcapability vht_cap;
    uint32_t flags;
    uint16_t aid;
    uint8_t uapsd_queues;
    uint8_t max_sp_len;
    uint8_t opmode;
    uint8_t vif_idx;
    _Bool tdls_sta;
    undefined field_0x4b;
    uint32_t tsflo;
    uint32_t tsfhi;
    int8_t rssi;
    uint8_t data_rate;
    undefined field_0x56;
    undefined field_0x57;
};

typedef struct me_config_req me_config_req, *Pme_config_req;

struct me_config_req { // DWARF DIE: 2b60
    struct mac_htcapability ht_cap;
    struct mac_vhtcapability vht_cap;
    uint16_t tx_lft;
    _Bool ht_supp;
    _Bool vht_supp;
    _Bool ps_on;
    undefined field_0x31;
    undefined field_0x32;
    undefined field_0x33;
};

typedef enum anon_enum_16.conflict2abe {
    ME_CHAN_CONFIG_CFM=5123,
    ME_CHAN_CONFIG_REQ=5122,
    ME_CONFIG_CFM=5121,
    ME_CONFIG_REQ=5120,
    ME_RC_SET_RATE_REQ=5136,
    ME_RC_STATS_CFM=5135,
    ME_RC_STATS_REQ=5134,
    ME_SET_ACTIVE_CFM=5138,
    ME_SET_ACTIVE_REQ=5137,
    ME_SET_CONTROL_PORT_CFM=5125,
    ME_SET_CONTROL_PORT_REQ=5124,
    ME_SET_PS_DISABLE_CFM=5140,
    ME_SET_PS_DISABLE_REQ=5139,
    ME_STA_ADD_CFM=5128,
    ME_STA_ADD_REQ=5127,
    ME_STA_DEL_CFM=5130,
    ME_STA_DEL_REQ=5129,
    ME_TKIP_MIC_FAILURE_IND=5126,
    ME_TRAFFIC_IND_CFM=5133,
    ME_TRAFFIC_IND_REQ=5132,
    ME_TX_CREDITS_UPDATE_IND=5131
} anon_enum_16.conflict2abe;

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

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 2215
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

struct rx_cntrl_dupli { // DWARF DIE: 21ea
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 21cd
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 20d2
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

struct rxu_cntrl_env_tag { // DWARF DIE: 224e
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




// DWARF DIE: 4346

int me_rc_set_rate_req_handler
              (ke_msg_id_t msgid,me_rc_set_rate_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint16_t uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((uint)param->sta_idx * 0x1b0 + 0x110);
  if (iVar2 == 0) {
    FUN_00010042();
  }
  uVar1 = param->fixed_rate_cfg;
  if (uVar1 == 0xffff) {
    *(undefined2 *)(iVar2 + 0xc6) = 0xffff;
    *(byte *)(iVar2 + 0xaf) = *(byte *)(iVar2 + 0xaf) & 0x9f;
    FUN_000100b0();
  }
  else {
    iVar3 = FUN_0001005a();
    if (iVar3 != 0) {
      *(uint16_t *)(iVar2 + 0xc6) = uVar1;
      *(byte *)(iVar2 + 0xaf) = *(byte *)(iVar2 + 0xaf) & 0x9f | 0x20;
    }
  }
  return 0;
}



undefined4 FUN_00010042(void)

{
  short sVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s3;
  
  FUN_00010042();
  sVar1 = *(short *)(unaff_s3 + 2);
  if (sVar1 == -1) {
    *(undefined2 *)(unaff_s0 + 0xc6) = 0xffff;
    *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) & 0x9f;
    FUN_000100b0();
  }
  else {
    iVar2 = FUN_0001005a();
    if (iVar2 != 0) {
      *(short *)(unaff_s0 + 0xc6) = sVar1;
      *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) & 0x9f | 0x20;
    }
  }
  return 0;
}



undefined4 FUN_0001005a(void)

{
  int unaff_s0;
  int iVar1;
  undefined2 unaff_s3;
  
  iVar1 = FUN_0001005a();
  if (iVar1 != 0) {
    *(undefined2 *)(unaff_s0 + 0xc6) = unaff_s3;
    *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) & 0x9f | 0x20;
  }
  return 0;
}



undefined4 FUN_000100b0(void)

{
  FUN_000100b0();
  return 0;
}



// DWARF DIE: 443d

int me_rc_stats_req_handler
              (ke_msg_id_t msgid,me_rc_stats_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  
  pbVar2 = (byte *)_L0();
  iVar1 = *(int *)((uint)param->sta_idx * 0x1b0 + 0x110);
  *pbVar2 = param->sta_idx;
  if (iVar1 == 0) {
    *(undefined2 *)(pbVar2 + 2) = 0;
  }
  else {
    *(undefined2 *)(pbVar2 + 2) = *(undefined2 *)(iVar1 + 0xc0);
    *(undefined2 *)(pbVar2 + 4) = *(undefined2 *)(iVar1 + 0xa4);
    *(undefined2 *)(pbVar2 + 6) = *(undefined2 *)(iVar1 + 0xa6);
    *(undefined4 *)(pbVar2 + 8) = *(undefined4 *)(iVar1 + 0xa8);
    pbVar2[0xc] = *(byte *)(iVar1 + 0xb0);
    pbVar2[0xd] = *(byte *)(iVar1 + 0xac);
    _L0();
    FUN_0001014c();
    for (uVar4 = 0; uVar4 < *(ushort *)(iVar1 + 0xc0); uVar4 = uVar4 + 1 & 0xffff) {
      uVar3 = FUN_0001017a(uVar4 & 0xff);
      *(undefined4 *)(pbVar2 + (uVar4 + 0x28) * 4 + 8) = uVar3;
    }
  }
  FUN_0001015e();
  return 0;
}



undefined4 _L0(void)

{
  byte *unaff_s1;
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  
  pbVar2 = (byte *)_L0();
  iVar1 = *(int *)((uint)*unaff_s1 * 0x1b0 + 0x110);
  *pbVar2 = *unaff_s1;
  if (iVar1 == 0) {
    *(undefined2 *)(pbVar2 + 2) = 0;
  }
  else {
    *(undefined2 *)(pbVar2 + 2) = *(undefined2 *)(iVar1 + 0xc0);
    *(undefined2 *)(pbVar2 + 4) = *(undefined2 *)(iVar1 + 0xa4);
    *(undefined2 *)(pbVar2 + 6) = *(undefined2 *)(iVar1 + 0xa6);
    *(undefined4 *)(pbVar2 + 8) = *(undefined4 *)(iVar1 + 0xa8);
    pbVar2[0xc] = *(byte *)(iVar1 + 0xb0);
    pbVar2[0xd] = *(byte *)(iVar1 + 0xac);
    _L0();
    FUN_0001014c();
    for (uVar4 = 0; uVar4 < *(ushort *)(iVar1 + 0xc0); uVar4 = uVar4 + 1 & 0xffff) {
      uVar3 = FUN_0001017a(uVar4 & 0xff);
      *(undefined4 *)(pbVar2 + (uVar4 + 0x28) * 4 + 8) = uVar3;
    }
  }
  FUN_0001015e();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  uint unaff_s2;
  
  _L0();
  FUN_0001014c();
  for (; unaff_s2 < *(ushort *)(unaff_s1 + 0xc0); unaff_s2 = unaff_s2 + 1 & 0xffff) {
    uVar1 = FUN_0001017a(unaff_s2 & 0xff);
    *(undefined4 *)((unaff_s2 + 0x28) * 4 + unaff_s0 + 8) = uVar1;
  }
  FUN_0001015e();
  return 0;
}



undefined4 FUN_0001014c(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  uint unaff_s2;
  
  FUN_0001014c();
  for (; unaff_s2 < *(ushort *)(unaff_s1 + 0xc0); unaff_s2 = unaff_s2 + 1 & 0xffff) {
    uVar1 = FUN_0001017a(unaff_s2 & 0xff);
    *(undefined4 *)((unaff_s2 + 0x28) * 4 + unaff_s0 + 8) = uVar1;
  }
  FUN_0001015e();
  return 0;
}



undefined4 FUN_0001015e(void)

{
  FUN_0001015e();
  return 0;
}



undefined4 FUN_0001017a(uint param_1)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  uint unaff_s2;
  uint uVar2;
  
  while( true ) {
    uVar1 = FUN_0001017a(param_1);
    uVar2 = unaff_s2 + 1;
    *(undefined4 *)((unaff_s2 + 0x28) * 4 + unaff_s0 + 8) = uVar1;
    unaff_s2 = uVar2 & 0xffff;
    if (*(ushort *)(unaff_s1 + 0xc0) <= unaff_s2) break;
    param_1 = uVar2 & 0xff;
  }
  FUN_0001015e();
  return 0;
}



// DWARF DIE: 47d2

int me_traffic_ind_req_handler
              (ke_msg_id_t msgid,me_traffic_ind_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte bVar4;
  
  uVar1 = (uint)param->sta_idx;
  bVar4 = *(byte *)(uVar1 * 0x1b0 + 0x32);
  if (param->uapsd == false) {
    if (param->tx_avail == '\0') {
      bVar4 &= 0xfe;
    }
    else {
      bVar4 |= 1;
    }
    *(byte *)(uVar1 * 0x1b0 + 0x32) = bVar4;
  }
  else {
    bVar3 = bVar4 & 0xfb;
    if (param->tx_avail != '\0') {
      bVar3 = bVar4 | 4;
    }
    *(byte *)(uVar1 * 0x1b0 + 0x32) = bVar3;
    if (*(char *)(uVar1 * 0x1b0 + 0xf2) != '\x0f') goto _L0;
  }
  puVar2 = (undefined2 *)_LVL38();
  *puVar2 = *(undefined2 *)(uVar1 * 0x1b0 + 0x18);
  *(undefined *)((int)puVar2 + 3) = *(undefined *)(uVar1 * 0x1b0 + 0x1a);
  *(uint8_t *)(puVar2 + 1) = param->tx_avail;
  _L0();
_L0:
  FUN_00010240();
  return 0;
}



undefined4 _LVL38(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined2 *puVar2;
  int unaff_s2;
  
  puVar2 = (undefined2 *)_LVL38();
  iVar1 = unaff_s0 + unaff_s1 * 0x1b0;
  *puVar2 = *(undefined2 *)(iVar1 + 0x18);
  *(undefined *)((int)puVar2 + 3) = *(undefined *)(iVar1 + 0x1a);
  *(undefined *)(puVar2 + 1) = *(undefined *)(unaff_s2 + 1);
  _L0();
  FUN_00010240();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010240();
  return 0;
}



undefined4 FUN_00010240(void)

{
  FUN_00010240();
  return 0;
}



// DWARF DIE: 48c1

int me_sta_del_req_handler
              (ke_msg_id_t msgid,me_sta_del_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint8_t *puVar1;
  undefined *puVar2;
  
  puVar1 = (uint8_t *)_L0();
  *puVar1 = param->sta_idx;
  _L0();
  if (param->tdls_sta != false) {
    puVar2 = (undefined *)FUN_000102ac();
    *puVar2 = 0;
    puVar2[1] = *(undefined *)((uint)param->sta_idx * 0x1b0 + 0x1a);
    _L0();
  }
  FUN_000102e8();
  return 0;
}



undefined4 _L0(void)

{
  byte *unaff_s0;
  byte *pbVar1;
  undefined *puVar2;
  
  pbVar1 = (byte *)_L0();
  *pbVar1 = *unaff_s0;
  _L0();
  if (unaff_s0[1] != 0) {
    puVar2 = (undefined *)FUN_000102ac();
    *puVar2 = 0;
    puVar2[1] = *(undefined *)((uint)*unaff_s0 * 0x1b0 + 0x1a);
    _L0();
  }
  FUN_000102e8();
  return 0;
}



undefined4 _L0(void)

{
  byte *unaff_s0;
  undefined *puVar1;
  
  _L0();
  if (unaff_s0[1] != 0) {
    puVar1 = (undefined *)FUN_000102ac();
    *puVar1 = 0;
    puVar1[1] = *(undefined *)((uint)*unaff_s0 * 0x1b0 + 0x1a);
    _L0();
  }
  FUN_000102e8();
  return 0;
}



undefined4 FUN_000102ac(void)

{
  byte *unaff_s0;
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_000102ac();
  *puVar1 = 0;
  puVar1[1] = *(undefined *)((uint)*unaff_s0 * 0x1b0 + 0x1a);
  _L0();
  FUN_000102e8();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000102e8();
  return 0;
}



undefined4 FUN_000102e8(void)

{
  FUN_000102e8();
  return 0;
}



// DWARF DIE: 4d5d

int me_set_control_port_req_handler
              (ke_msg_id_t msgid,me_set_control_port_req *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = (uint)param->sta_idx * 0x1b0;
  cVar2 = (param->control_port_open != false) + '\x01';
  *(char *)(iVar3 + 0x31) = cVar2;
  if ((*(char *)((uint)*(byte *)(iVar3 + 0x1a) * 0x5d8 + 0x56) == '\0') && (cVar2 == '\x02')) {
    puVar1 = (undefined *)FUN_0001035e();
    *puVar1 = 0;
    puVar1[1] = *(undefined *)(iVar3 + 0x1a);
    _L0();
  }
  FUN_00010384();
  return 0;
}



undefined4 FUN_0001035e(void)

{
  int unaff_s0;
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_0001035e();
  *puVar1 = 0;
  puVar1[1] = *(undefined *)(unaff_s0 + 0x1a);
  _L0();
  FUN_00010384();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010384();
  return 0;
}



undefined4 FUN_00010384(void)

{
  FUN_00010384();
  return 0;
}



// DWARF DIE: 4e3d

int me_chan_config_req_handler
              (ke_msg_id_t msgid,me_chan_config_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  _L0();
  FUN_000103c4();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000103c4();
  return 0;
}



undefined4 FUN_000103c4(void)

{
  FUN_000103c4();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4579

int mm_set_ps_mode_cfm_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 1) {
    FUN_00010402();
  }
  if (_DAT_00000008 != 0xff) {
    FUN_00010422();
  }
  FUN_0001042e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 1) {
    FUN_00010402();
  }
  if (_DAT_00000008 != 0xff) {
    FUN_00010422();
  }
  FUN_0001042e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010402(void)

{
  FUN_00010402();
  if (_DAT_00000008 != 0xff) {
    FUN_00010422();
  }
  FUN_0001042e();
  return 0;
}



undefined4 FUN_00010422(void)

{
  FUN_00010422();
  FUN_0001042e();
  return 0;
}



undefined4 FUN_0001042e(void)

{
  FUN_0001042e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 46a5

int mm_set_idle_cfm_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 1) {
    FUN_0001046c();
  }
  if (_DAT_00000008 != 0xff) {
    FUN_0001048c();
  }
  FUN_00010498();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 1) {
    FUN_0001046c();
  }
  if (_DAT_00000008 != 0xff) {
    FUN_0001048c();
  }
  FUN_00010498();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001046c(void)

{
  FUN_0001046c();
  if (_DAT_00000008 != 0xff) {
    FUN_0001048c();
  }
  FUN_00010498();
  return 0;
}



undefined4 FUN_0001048c(void)

{
  FUN_0001048c();
  FUN_00010498();
  return 0;
}



undefined4 FUN_00010498(void)

{
  FUN_00010498();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4ed8

int me_config_req_handler
              (ke_msg_id_t msgid,me_config_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (undefined *)_L0(_DAT_0000002c,uRam0000012c,DAT_00000130);
  _DAT_0000002c = _DAT_0000002c & 0xffff | (uint3)param->ht_supp << 0x10;
  _L0();
  FUN_00010500();
  if (DAT_0000002e == '\0') {
    uRam0000012c &= 0xffff;
  }
  else {
    iVar2 = _L0();
    uRam0000012c._0_3_ = CONCAT12((char)(iVar2 + 1 >> 1),(undefined2)uRam0000012c);
    uRam0000012c = CONCAT13((char)(_DAT_0000000c >> 1),(undefined3)uRam0000012c) & 0x1ffffff;
  }
  _DAT_0000002c = _DAT_0000002c & 0xff0000 | (uint3)param->tx_lft;
  DAT_00000130 = param->ps_on;
  if ((_Bool)DAT_00000130 != false) {
    _DAT_00000008 = 0xff;
    *puVar1 = 2;
    _L0();
    FUN_0001055c();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(uint3 param_1,uint uRam0000012c,char param_3)

{
  int unaff_s1;
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (undefined *)_L0(param_1,uRam0000012c,param_3);
  param_1 = param_1 & 0xffff | (uint3)*(byte *)(unaff_s1 + 0x2e) << 0x10;
  _L0();
  FUN_00010500();
  if (param_1._2_1_ == '\0') {
    uRam0000012c &= 0xffff;
  }
  else {
    iVar2 = _L0();
    uRam0000012c._0_3_ = CONCAT12((char)(iVar2 + 1 >> 1),(undefined2)uRam0000012c);
    uRam0000012c = CONCAT13((char)(_DAT_0000000c >> 1),(undefined3)uRam0000012c) & 0x1ffffff;
  }
  param_1 = param_1 & 0xff0000 | (uint3)*(ushort *)(unaff_s1 + 0x2c);
  param_3 = *(char *)(unaff_s1 + 0x30);
  if (param_3 != '\0') {
    _DAT_00000008 = 0xff;
    *puVar1 = 2;
    _L0();
    FUN_0001055c();
  }
  return 0;
}



undefined4 _L0(void)

{
  char cVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  undefined *unaff_s3;
  
  _L0();
  FUN_00010500();
  if (*(char *)(unaff_s2 + 0x2e) == '\0') {
    *(undefined2 *)(unaff_s0 + 0x12e) = 0;
  }
  else {
    iVar2 = _L0();
    *(char *)(unaff_s0 + 0x12e) = (char)(iVar2 + 1 >> 1);
    *(byte *)(unaff_s0 + 0x12f) = (byte)(*(ushort *)(unaff_s0 + 0xc) >> 1) & 1;
  }
  *(undefined2 *)(unaff_s0 + 0x2c) = *(undefined2 *)(unaff_s1 + 0x2c);
  cVar1 = *(char *)(unaff_s1 + 0x30);
  *(char *)(unaff_s0 + 0x130) = cVar1;
  if (cVar1 != '\0') {
    *(undefined2 *)(unaff_s0 + 8) = 0xff;
    *unaff_s3 = 2;
    _L0();
    FUN_0001055c();
  }
  return 0;
}



undefined4 FUN_00010500(void)

{
  char cVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  undefined *unaff_s3;
  
  FUN_00010500();
  if (*(char *)(unaff_s2 + 0x2e) == '\0') {
    *(undefined2 *)(unaff_s0 + 0x12e) = 0;
  }
  else {
    iVar2 = _L0();
    *(char *)(unaff_s0 + 0x12e) = (char)(iVar2 + 1 >> 1);
    *(byte *)(unaff_s0 + 0x12f) = (byte)(*(ushort *)(unaff_s0 + 0xc) >> 1) & 1;
  }
  *(undefined2 *)(unaff_s0 + 0x2c) = *(undefined2 *)(unaff_s1 + 0x2c);
  cVar1 = *(char *)(unaff_s1 + 0x30);
  *(char *)(unaff_s0 + 0x130) = cVar1;
  if (cVar1 != '\0') {
    *(undefined2 *)(unaff_s0 + 8) = 0xff;
    *unaff_s3 = 2;
    _L0();
    FUN_0001055c();
  }
  return 0;
}



undefined4 _L0(void)

{
  char cVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  undefined *unaff_s3;
  
  iVar2 = _L0();
  *(char *)(unaff_s0 + 0x12e) = (char)(iVar2 + 1 >> 1);
  *(byte *)(unaff_s0 + 0x12f) = (byte)(*(ushort *)(unaff_s0 + 0xc) >> 1) & 1;
  *(undefined2 *)(unaff_s0 + 0x2c) = *(undefined2 *)(unaff_s1 + 0x2c);
  cVar1 = *(char *)(unaff_s1 + 0x30);
  *(char *)(unaff_s0 + 0x130) = cVar1;
  if (cVar1 != '\0') {
    *(undefined2 *)(unaff_s0 + 8) = 0xff;
    *unaff_s3 = 2;
    _L0();
    FUN_0001055c();
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_0001055c();
  return 0;
}



undefined4 FUN_0001055c(void)

{
  FUN_0001055c();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 50c0

int me_set_ps_disable_req_handler
              (ke_msg_id_t msgid,me_set_ps_disable_req *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  int iVar1;
  char *pcVar2;
  
  if (DAT_00000130 != '\0') {
    iVar1 = _L0();
    if (iVar1 == 1) {
      return 2;
    }
    if (_DAT_00000004 == 0) {
      if (param->ps_disable != false) goto _L0;
    }
    else {
      if (param->ps_disable == false) {
_L0:
        pcVar2 = (char *)FUN_000105f2();
        if (param->ps_disable == false) {
          _DAT_00000004 = ~(1 << (param->vif_idx & 0x1f)) & _DAT_00000004;
        }
        else {
          _DAT_00000004 = 1 << (param->vif_idx & 0x1f) | _DAT_00000004;
        }
        _DAT_00000008 = src_id;
        *pcVar2 = (_DAT_00000004 == 0) << 1;
        _L0();
        FUN_0001062a();
        return 0;
      }
      _DAT_00000004 = 1 << (param->vif_idx & 0x1f) | _DAT_00000004;
    }
  }
  FUN_000105a8();
  return 0;
}



undefined4 FUN_000105a8(void)

{
  FUN_000105a8();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined2 unaff_s2;
  char *unaff_s3;
  int unaff_s4;
  
  iVar1 = _L0();
  if (iVar1 == 1) {
    return 2;
  }
  if (*(uint *)(unaff_s4 + 4) == 0) {
    if (*unaff_s3 == '\0') goto _L0;
  }
  else {
    if (*unaff_s3 != '\0') {
      *(uint *)(unaff_s4 + 4) = 1 << ((byte)unaff_s3[1] & 0x1f) | *(uint *)(unaff_s4 + 4);
_L0:
      FUN_000105a8();
      return 0;
    }
  }
  pcVar2 = (char *)FUN_000105f2();
  if (*unaff_s3 == '\0') {
    uVar3 = ~(1 << ((byte)unaff_s3[1] & 0x1f)) & *(uint *)(unaff_s0 + 4);
  }
  else {
    uVar3 = 1 << ((byte)unaff_s3[1] & 0x1f) | *(uint *)(unaff_s0 + 4);
  }
  *(uint *)(unaff_s0 + 4) = uVar3;
  *(undefined2 *)(unaff_s0 + 8) = unaff_s2;
  *pcVar2 = (uVar3 == 0) << 1;
  _L0();
  FUN_0001062a();
  return 0;
}



undefined4 FUN_000105f2(void)

{
  int unaff_s0;
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_s2;
  char *unaff_s3;
  
  pcVar1 = (char *)FUN_000105f2();
  if (*unaff_s3 == '\0') {
    uVar2 = ~(1 << ((byte)unaff_s3[1] & 0x1f)) & *(uint *)(unaff_s0 + 4);
  }
  else {
    uVar2 = 1 << ((byte)unaff_s3[1] & 0x1f) | *(uint *)(unaff_s0 + 4);
  }
  *(uint *)(unaff_s0 + 4) = uVar2;
  *(undefined2 *)(unaff_s0 + 8) = unaff_s2;
  *pcVar1 = (uVar2 == 0) << 1;
  _L0();
  FUN_0001062a();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_0001062a();
  return 0;
}



undefined4 FUN_0001062a(void)

{
  FUN_0001062a();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 51b2

int me_set_active_req_handler
              (ke_msg_id_t msgid,me_set_active_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _L0();
  if (iVar1 == 1) {
    return 2;
  }
  if (uRam00000000 == 0) {
    if (param->active != false) goto _L0;
  }
  else {
    if (param->active == false) {
_L0:
      uVar2 = FUN_0001069c();
      if (param->active == false) {
        uRam00000000 = ~(1 << (param->vif_idx & 0x1f)) & uRam00000000;
      }
      else {
        uRam00000000 = 1 << (param->vif_idx & 0x1f) | uRam00000000;
      }
      _DAT_00000008 = src_id;
      *(bool *)uVar2 = uRam00000000 == 0;
      _L0();
      FUN_000106d2();
      return 0;
    }
    uRam00000000 = 1 << (param->vif_idx & 0x1f) | uRam00000000;
  }
  FUN_000106e8();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 unaff_s2;
  char *unaff_s3;
  
  iVar1 = _L0();
  if (iVar1 == 1) {
    return 2;
  }
  if (uRam00000000 == 0) {
    if (*unaff_s3 != '\0') goto _L0;
  }
  else {
    if (*unaff_s3 == '\0') {
_L0:
      uVar2 = FUN_0001069c();
      if (*unaff_s3 == '\0') {
        uRam00000000 = ~(1 << ((byte)unaff_s3[1] & 0x1f)) & uRam00000000;
      }
      else {
        uRam00000000 = 1 << ((byte)unaff_s3[1] & 0x1f) | uRam00000000;
      }
      _DAT_00000008 = unaff_s2;
      *(bool *)uVar2 = uRam00000000 == 0;
      _L0();
      FUN_000106d2();
      return 0;
    }
    uRam00000000 = 1 << ((byte)unaff_s3[1] & 0x1f) | uRam00000000;
  }
  FUN_000106e8();
  return 0;
}



undefined4 FUN_0001069c(void)

{
  uint *unaff_s0;
  undefined4 uVar1;
  uint uVar2;
  undefined2 unaff_s2;
  char *unaff_s3;
  
  uVar1 = FUN_0001069c();
  if (*unaff_s3 == '\0') {
    uVar2 = ~(1 << ((byte)unaff_s3[1] & 0x1f)) & *unaff_s0;
  }
  else {
    uVar2 = 1 << ((byte)unaff_s3[1] & 0x1f) | *unaff_s0;
  }
  *unaff_s0 = uVar2;
  *(undefined2 *)(unaff_s0 + 2) = unaff_s2;
  *(bool *)uVar1 = uVar2 == 0;
  _L0();
  FUN_000106d2();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000106d2();
  return 0;
}



undefined4 FUN_000106d2(void)

{
  FUN_000106d2();
  return 0;
}



undefined4 FUN_000106e8(void)

{
  FUN_000106e8();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 49f6

int me_sta_add_req_handler
              (ke_msg_id_t msgid,me_sta_add_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint8_t hw_sta_idx;
  mm_sta_add_req sta_add_req;
  
  pbVar3 = (byte *)_L0(_DAT_0000002c);
  iVar4 = _L0(_DAT_0000002c);
  bVar1 = param->vif_idx;
  _L0(_DAT_0000002c);
  iVar5 = _L0(_DAT_0000002c);
  pbVar3[1] = (byte)iVar5;
  if (iVar5 != 0) goto _L0;
  uVar2 = (uint)*pbVar3;
  iVar5 = uVar2 * 0x1b0;
  FUN_0001080e(_DAT_0000002c);
  if ((param->flags & 1) == 0) {
_L0:
    iVar5 = 0;
  }
  else {
    uVar7 = *(uint *)(iVar5 + 0xec);
    *(uint *)(iVar5 + 0xec) = uVar7 | 1;
    if (((param->flags & 2) == 0) || (DAT_0000002e == '\0')) goto _L0;
    *(uint *)(iVar5 + 0xec) = uVar7 | 3;
    FUN_00010990();
    iVar5 = FUN_000109a8();
  }
  iVar8 = uVar2 * 0x1b0;
  *(uint8_t *)(iVar8 + 0xf2) = param->uapsd_queues;
  *(uint8_t *)(iVar8 + 0xf3) = param->max_sp_len;
  *(uint16_t *)(iVar8 + 0x18) = param->aid;
  _L0();
  if (((param->flags & 0x10) != 0) && (-1 < (char)param->opmode)) {
    _LVL155();
  }
  if (iVar5 != 0) {
    FUN_0001088a();
  }
  iVar8 = uVar2 * 0x1b0;
  *(byte *)(iVar8 + 0x11a) = *(byte *)(iVar8 + 0x11a) | 0x10;
  iVar5 = (uint)bVar1 * 0x5d8;
  *(char *)(iVar8 + 0x31) = ((*(uint *)(iVar5 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar8 + 0x38) = *(ushort *)(iVar5 + 0x34c) >> 8 | *(ushort *)(iVar5 + 0x34c) << 8;
  pbVar3[2] = (byte)iVar4;
  if (iVar4 != 0) {
    *(byte *)(iVar8 + 0x1c) = (byte)iVar4;
    if (*(char *)(iVar5 + 0x34a) == '\0') {
      uVar2 = *(byte *)(iVar5 + 0x57) + 10 & 0xff;
      puVar6 = (undefined *)FUN_000108fc();
      *(undefined *)(uVar2 * 0x1b0 + 0x1c) = 1;
      *puVar6 = (char)uVar2;
      puVar6[1] = 1;
      _L0();
    }
    iVar4 = (uint)bVar1 * 0x5d8;
    *(char *)(iVar4 + 0x34a) = *(char *)(iVar4 + 0x34a) + '\x01';
  }
_L0:
  FUN_00010932();
  return 0;
}



undefined4 _L0(undefined3 uRam0000002c)

{
  int unaff_s0;
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  short sStack00000018;
  undefined uStack00000020;
  byte bStack00000021;
  undefined uStack00000023;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined uStack0000002c;
  
  pbVar1 = (byte *)_L0(uRam0000002c);
  iVar2 = _L0(uRam0000002c);
  bStack00000021 = *(byte *)(unaff_s0 + 0x49);
  uVar7 = (uint)bStack00000021;
  if ((*(uint *)(unaff_s0 + 0x40) & 2) == 0) {
    uStack00000020 = 0;
    sStack00000018 = 0;
  }
  else {
    uStack00000020 = 1;
    uVar5 = (int)(uint)*(byte *)(unaff_s0 + 0x16) >> 2 & 7;
    if (2 < uVar5) {
      uStack00000020 = (undefined)(1 << (uVar5 - 3 & 0x1f));
    }
    sStack00000018 = (short)(1 << (*(byte *)(unaff_s0 + 0x16) & 3) + 0xd) + -1;
  }
  uStack00000014 = 0;
  _L0(uRam0000002c);
  uStack00000023 = *(undefined *)(unaff_s0 + 0x54);
  uStack00000024 = *(undefined4 *)(unaff_s0 + 0x4c);
  uStack00000028 = *(undefined4 *)(unaff_s0 + 0x50);
  uStack00000010 = 0;
  uStack0000002c = *(undefined *)(unaff_s0 + 0x55);
  iVar3 = _L0(uRam0000002c);
  pbVar1[1] = (byte)iVar3;
  if (iVar3 != 0) goto _L0;
  uVar5 = (uint)*pbVar1;
  iVar3 = uVar5 * 0x1b0;
  FUN_0001080e(uRam0000002c);
  if ((*(uint *)(unaff_s0 + 0x40) & 1) == 0) {
_L0:
    iVar3 = 0;
  }
  else {
    uVar6 = *(uint *)(iVar3 + 0xec);
    *(uint *)(iVar3 + 0xec) = uVar6 | 1;
    if (((*(uint *)(unaff_s0 + 0x40) & 2) == 0) || (uRam0000002c._2_1_ == '\0')) goto _L0;
    *(uint *)(iVar3 + 0xec) = uVar6 | 3;
    FUN_00010990();
    iVar3 = FUN_000109a8();
  }
  iVar8 = uVar5 * 0x1b0;
  *(undefined *)(iVar8 + 0xf2) = *(undefined *)(unaff_s0 + 0x46);
  *(undefined *)(iVar8 + 0xf3) = *(undefined *)(unaff_s0 + 0x47);
  *(undefined2 *)(iVar8 + 0x18) = *(undefined2 *)(unaff_s0 + 0x44);
  _L0();
  if (((*(uint *)(unaff_s0 + 0x40) & 0x10) != 0) && (-1 < *(char *)(unaff_s0 + 0x48))) {
    _LVL155();
  }
  if (iVar3 != 0) {
    FUN_0001088a();
  }
  iVar8 = uVar5 * 0x1b0;
  *(byte *)(iVar8 + 0x11a) = *(byte *)(iVar8 + 0x11a) | 0x10;
  iVar3 = uVar7 * 0x5d8;
  *(char *)(iVar8 + 0x31) = ((*(uint *)(iVar3 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar8 + 0x38) = *(ushort *)(iVar3 + 0x34c) >> 8 | *(ushort *)(iVar3 + 0x34c) << 8;
  pbVar1[2] = (byte)iVar2;
  if (iVar2 != 0) {
    *(byte *)(iVar8 + 0x1c) = (byte)iVar2;
    if (*(char *)(iVar3 + 0x34a) == '\0') {
      uVar5 = *(byte *)(iVar3 + 0x57) + 10 & 0xff;
      puVar4 = (undefined *)FUN_000108fc();
      *(undefined *)(uVar5 * 0x1b0 + 0x1c) = 1;
      *puVar4 = (char)uVar5;
      puVar4[1] = 1;
      _L0();
    }
    iVar2 = uVar7 * 0x5d8;
    *(char *)(iVar2 + 0x34a) = *(char *)(iVar2 + 0x34a) + '\x01';
  }
_L0:
  FUN_00010932();
  return 0;
}



undefined4 _L0(undefined3 uRam0000002c)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *unaff_s5;
  int iVar7;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  short sStack00000018;
  undefined uStack00000020;
  byte bStack00000021;
  undefined uStack00000023;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined uStack0000002c;
  
  iVar1 = _L0(uRam0000002c);
  bStack00000021 = *(byte *)(unaff_s0 + 0x49);
  uVar6 = (uint)bStack00000021;
  if ((*(uint *)(unaff_s0 + 0x40) & 2) == 0) {
    uStack00000020 = 0;
    sStack00000018 = 0;
  }
  else {
    uStack00000020 = 1;
    uVar4 = (int)(uint)*(byte *)(unaff_s0 + 0x16) >> 2 & 7;
    if (2 < uVar4) {
      uStack00000020 = (undefined)(1 << (uVar4 - 3 & 0x1f));
    }
    sStack00000018 = (short)(1 << (*(byte *)(unaff_s0 + 0x16) & 3) + 0xd) + -1;
  }
  uStack00000014 = 0;
  _L0(uRam0000002c);
  uStack00000023 = *(undefined *)(unaff_s0 + 0x54);
  uStack00000024 = *(undefined4 *)(unaff_s0 + 0x4c);
  uStack00000028 = *(undefined4 *)(unaff_s0 + 0x50);
  uStack00000010 = 0;
  uStack0000002c = *(undefined *)(unaff_s0 + 0x55);
  iVar2 = _L0(uRam0000002c);
  unaff_s5[1] = (byte)iVar2;
  if (iVar2 != 0) goto _L0;
  uVar4 = (uint)*unaff_s5;
  iVar2 = uVar4 * 0x1b0;
  FUN_0001080e(uRam0000002c);
  if ((*(uint *)(unaff_s0 + 0x40) & 1) == 0) {
_L0:
    iVar2 = 0;
  }
  else {
    uVar5 = *(uint *)(iVar2 + 0xec);
    *(uint *)(iVar2 + 0xec) = uVar5 | 1;
    if (((*(uint *)(unaff_s0 + 0x40) & 2) == 0) || (uRam0000002c._2_1_ == '\0')) goto _L0;
    *(uint *)(iVar2 + 0xec) = uVar5 | 3;
    FUN_00010990();
    iVar2 = FUN_000109a8();
  }
  iVar7 = uVar4 * 0x1b0;
  *(undefined *)(iVar7 + 0xf2) = *(undefined *)(unaff_s0 + 0x46);
  *(undefined *)(iVar7 + 0xf3) = *(undefined *)(unaff_s0 + 0x47);
  *(undefined2 *)(iVar7 + 0x18) = *(undefined2 *)(unaff_s0 + 0x44);
  _L0();
  if (((*(uint *)(unaff_s0 + 0x40) & 0x10) != 0) && (-1 < *(char *)(unaff_s0 + 0x48))) {
    _LVL155();
  }
  if (iVar2 != 0) {
    FUN_0001088a();
  }
  iVar7 = uVar4 * 0x1b0;
  *(byte *)(iVar7 + 0x11a) = *(byte *)(iVar7 + 0x11a) | 0x10;
  iVar2 = uVar6 * 0x5d8;
  *(char *)(iVar7 + 0x31) = ((*(uint *)(iVar2 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar7 + 0x38) = *(ushort *)(iVar2 + 0x34c) >> 8 | *(ushort *)(iVar2 + 0x34c) << 8;
  unaff_s5[2] = (byte)iVar1;
  if (iVar1 != 0) {
    *(byte *)(iVar7 + 0x1c) = (byte)iVar1;
    if (*(char *)(iVar2 + 0x34a) == '\0') {
      uVar4 = *(byte *)(iVar2 + 0x57) + 10 & 0xff;
      puVar3 = (undefined *)FUN_000108fc();
      *(undefined *)(uVar4 * 0x1b0 + 0x1c) = 1;
      *puVar3 = (char)uVar4;
      puVar3[1] = 1;
      _L0();
    }
    iVar1 = uVar6 * 0x5d8;
    *(char *)(iVar1 + 0x34a) = *(char *)(iVar1 + 0x34a) + '\x01';
  }
_L0:
  FUN_00010932();
  return 0;
}



undefined4 _L0(undefined3 param_1)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int unaff_s4;
  byte *unaff_s5;
  int unaff_s6;
  int iVar5;
  undefined4 uStack00000010;
  undefined uStack00000021;
  undefined uStack00000023;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined uStack0000002c;
  
  _L0(param_1);
  uStack00000023 = *(undefined *)(unaff_s0 + 0x54);
  uStack00000024 = *(undefined4 *)(unaff_s0 + 0x4c);
  uStack00000028 = *(undefined4 *)(unaff_s0 + 0x50);
  uStack00000010 = 0;
  uStack0000002c = *(undefined *)(unaff_s0 + 0x55);
  uStack00000021 = (undefined)unaff_s4;
  iVar2 = _L0(param_1);
  unaff_s5[1] = (byte)iVar2;
  if (iVar2 != 0) goto _L0;
  uVar1 = (uint)*unaff_s5;
  iVar2 = uVar1 * 0x1b0;
  FUN_0001080e(param_1);
  if ((*(uint *)(unaff_s0 + 0x40) & 1) == 0) {
_L0:
    iVar2 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0xec);
    *(uint *)(iVar2 + 0xec) = uVar4 | 1;
    if (((*(uint *)(unaff_s0 + 0x40) & 2) == 0) || (param_1._2_1_ == '\0')) goto _L0;
    *(uint *)(iVar2 + 0xec) = uVar4 | 3;
    FUN_00010990();
    iVar2 = FUN_000109a8();
  }
  iVar5 = uVar1 * 0x1b0;
  *(undefined *)(iVar5 + 0xf2) = *(undefined *)(unaff_s0 + 0x46);
  *(undefined *)(iVar5 + 0xf3) = *(undefined *)(unaff_s0 + 0x47);
  *(undefined2 *)(iVar5 + 0x18) = *(undefined2 *)(unaff_s0 + 0x44);
  _L0();
  if (((*(uint *)(unaff_s0 + 0x40) & 0x10) != 0) && (-1 < *(char *)(unaff_s0 + 0x48))) {
    _LVL155();
  }
  if (iVar2 != 0) {
    FUN_0001088a();
  }
  iVar5 = uVar1 * 0x1b0;
  *(byte *)(iVar5 + 0x11a) = *(byte *)(iVar5 + 0x11a) | 0x10;
  iVar2 = unaff_s4 * 0x5d8;
  *(char *)(iVar5 + 0x31) = ((*(uint *)(iVar2 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar5 + 0x38) = *(ushort *)(iVar2 + 0x34c) >> 8 | *(ushort *)(iVar2 + 0x34c) << 8;
  unaff_s5[2] = (byte)unaff_s6;
  if (unaff_s6 != 0) {
    *(byte *)(iVar5 + 0x1c) = (byte)unaff_s6;
    if (*(char *)(iVar2 + 0x34a) == '\0') {
      uVar1 = *(byte *)(iVar2 + 0x57) + 10 & 0xff;
      puVar3 = (undefined *)FUN_000108fc();
      *(undefined *)(uVar1 * 0x1b0 + 0x1c) = 1;
      *puVar3 = (char)uVar1;
      puVar3[1] = 1;
      _L0();
    }
    *(char *)(unaff_s4 * 0x5d8 + 0x34a) = *(char *)(unaff_s4 * 0x5d8 + 0x34a) + '\x01';
  }
_L0:
  FUN_00010932();
  return 0;
}



undefined4 _L0(undefined3 uRam0000002c)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int unaff_s4;
  byte *unaff_s5;
  int unaff_s6;
  int iVar5;
  
  iVar2 = _L0(uRam0000002c);
  unaff_s5[1] = (byte)iVar2;
  if (iVar2 != 0) goto _L0;
  uVar1 = (uint)*unaff_s5;
  iVar2 = uVar1 * 0x1b0;
  FUN_0001080e(uRam0000002c);
  if ((*(uint *)(unaff_s0 + 0x40) & 1) == 0) {
_L0:
    iVar2 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0xec);
    *(uint *)(iVar2 + 0xec) = uVar4 | 1;
    if (((*(uint *)(unaff_s0 + 0x40) & 2) == 0) || (uRam0000002c._2_1_ == '\0')) goto _L0;
    *(uint *)(iVar2 + 0xec) = uVar4 | 3;
    FUN_00010990();
    iVar2 = FUN_000109a8();
  }
  iVar5 = uVar1 * 0x1b0;
  *(undefined *)(iVar5 + 0xf2) = *(undefined *)(unaff_s0 + 0x46);
  *(undefined *)(iVar5 + 0xf3) = *(undefined *)(unaff_s0 + 0x47);
  *(undefined2 *)(iVar5 + 0x18) = *(undefined2 *)(unaff_s0 + 0x44);
  _L0();
  if (((*(uint *)(unaff_s0 + 0x40) & 0x10) != 0) && (-1 < *(char *)(unaff_s0 + 0x48))) {
    _LVL155();
  }
  if (iVar2 != 0) {
    FUN_0001088a();
  }
  iVar5 = uVar1 * 0x1b0;
  *(byte *)(iVar5 + 0x11a) = *(byte *)(iVar5 + 0x11a) | 0x10;
  iVar2 = unaff_s4 * 0x5d8;
  *(char *)(iVar5 + 0x31) = ((*(uint *)(iVar2 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar5 + 0x38) = *(ushort *)(iVar2 + 0x34c) >> 8 | *(ushort *)(iVar2 + 0x34c) << 8;
  unaff_s5[2] = (byte)unaff_s6;
  if (unaff_s6 != 0) {
    *(byte *)(iVar5 + 0x1c) = (byte)unaff_s6;
    if (*(char *)(iVar2 + 0x34a) == '\0') {
      uVar1 = *(byte *)(iVar2 + 0x57) + 10 & 0xff;
      puVar3 = (undefined *)FUN_000108fc();
      *(undefined *)(uVar1 * 0x1b0 + 0x1c) = 1;
      *puVar3 = (char)uVar1;
      puVar3[1] = 1;
      _L0();
    }
    *(char *)(unaff_s4 * 0x5d8 + 0x34a) = *(char *)(unaff_s4 * 0x5d8 + 0x34a) + '\x01';
  }
_L0:
  FUN_00010932();
  return 0;
}



undefined4 FUN_0001080e(undefined3 param_1)

{
  int unaff_s0;
  uint uVar1;
  int unaff_s1;
  undefined *puVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int iVar3;
  int iVar4;
  
  FUN_0001080e(param_1);
  if ((*(uint *)(unaff_s0 + 0x40) & 1) != 0) {
    uVar1 = *(uint *)(unaff_s2 + 0xec);
    *(uint *)(unaff_s2 + 0xec) = uVar1 | 1;
    if (((*(uint *)(unaff_s0 + 0x40) & 2) != 0) && (param_1._2_1_ != '\0')) {
      *(uint *)(unaff_s2 + 0xec) = uVar1 | 3;
      FUN_00010990();
      iVar4 = FUN_000109a8();
      goto _L0;
    }
  }
  iVar4 = 0;
_L0:
  iVar3 = unaff_s1 * 0x1b0 + unaff_s3;
  *(undefined *)(iVar3 + 0xf2) = *(undefined *)(unaff_s0 + 0x46);
  *(undefined *)(iVar3 + 0xf3) = *(undefined *)(unaff_s0 + 0x47);
  *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(unaff_s0 + 0x44);
  _L0();
  if (((*(uint *)(unaff_s0 + 0x40) & 0x10) != 0) && (-1 < *(char *)(unaff_s0 + 0x48))) {
    _LVL155();
  }
  if (iVar4 != 0) {
    FUN_0001088a();
  }
  iVar3 = unaff_s1 * 0x1b0 + unaff_s3;
  *(byte *)(iVar3 + 0x11a) = *(byte *)(iVar3 + 0x11a) | 0x10;
  iVar4 = unaff_s4 * 0x5d8 + unaff_s7;
  *(char *)(iVar3 + 0x31) = ((*(uint *)(iVar4 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar3 + 0x38) = *(ushort *)(iVar4 + 0x34c) >> 8 | *(ushort *)(iVar4 + 0x34c) << 8;
  *(char *)(unaff_s5 + 2) = (char)unaff_s6;
  if (unaff_s6 != 0) {
    *(char *)(iVar3 + 0x1c) = (char)unaff_s6;
    if (*(char *)(iVar4 + 0x34a) == '\0') {
      uVar1 = *(byte *)(iVar4 + 0x57) + 10 & 0xff;
      puVar2 = (undefined *)FUN_000108fc();
      *(undefined *)(unaff_s3 + uVar1 * 0x1b0 + 0x1c) = 1;
      *puVar2 = (char)uVar1;
      puVar2[1] = 1;
      _L0();
    }
    iVar4 = unaff_s7 + unaff_s4 * 0x5d8;
    *(char *)(iVar4 + 0x34a) = *(char *)(iVar4 + 0x34a) + '\x01';
  }
  FUN_00010932();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  int unaff_s1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s9;
  
  _L0();
  if (((*(uint *)(unaff_s0 + 0x40) & 0x10) != 0) && (-1 < *(char *)(unaff_s0 + 0x48))) {
    _LVL155();
  }
  if (unaff_s9 != 0) {
    FUN_0001088a();
  }
  iVar4 = unaff_s1 * 0x1b0 + unaff_s3;
  *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 0x10;
  iVar3 = unaff_s4 * 0x5d8 + unaff_s7;
  *(char *)(iVar4 + 0x31) = ((*(uint *)(iVar3 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar4 + 0x38) = *(ushort *)(iVar3 + 0x34c) >> 8 | *(ushort *)(iVar3 + 0x34c) << 8;
  *(char *)(unaff_s5 + 2) = (char)unaff_s6;
  if (unaff_s6 != 0) {
    *(char *)(iVar4 + 0x1c) = (char)unaff_s6;
    if (*(char *)(iVar3 + 0x34a) == '\0') {
      uVar1 = *(byte *)(iVar3 + 0x57) + 10 & 0xff;
      puVar2 = (undefined *)FUN_000108fc();
      *(undefined *)(unaff_s3 + uVar1 * 0x1b0 + 0x1c) = 1;
      *puVar2 = (char)uVar1;
      puVar2[1] = 1;
      _L0();
    }
    iVar3 = unaff_s7 + unaff_s4 * 0x5d8;
    *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
  }
  FUN_00010932();
  return 0;
}



undefined4 _LVL155(void)

{
  uint uVar1;
  int unaff_s1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s9;
  
  _LVL155();
  if (unaff_s9 != 0) {
    FUN_0001088a();
  }
  iVar4 = unaff_s1 * 0x1b0 + unaff_s3;
  *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 0x10;
  iVar3 = unaff_s4 * 0x5d8 + unaff_s7;
  *(char *)(iVar4 + 0x31) = ((*(uint *)(iVar3 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar4 + 0x38) = *(ushort *)(iVar3 + 0x34c) >> 8 | *(ushort *)(iVar3 + 0x34c) << 8;
  *(char *)(unaff_s5 + 2) = (char)unaff_s6;
  if (unaff_s6 != 0) {
    *(char *)(iVar4 + 0x1c) = (char)unaff_s6;
    if (*(char *)(iVar3 + 0x34a) == '\0') {
      uVar1 = *(byte *)(iVar3 + 0x57) + 10 & 0xff;
      puVar2 = (undefined *)FUN_000108fc();
      *(undefined *)(unaff_s3 + uVar1 * 0x1b0 + 0x1c) = 1;
      *puVar2 = (char)uVar1;
      puVar2[1] = 1;
      _L0();
    }
    iVar3 = unaff_s7 + unaff_s4 * 0x5d8;
    *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
  }
  FUN_00010932();
  return 0;
}



undefined4 FUN_0001088a(void)

{
  uint uVar1;
  int unaff_s1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  
  FUN_0001088a();
  iVar4 = unaff_s1 * 0x1b0 + unaff_s3;
  *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 0x10;
  iVar3 = unaff_s4 * 0x5d8 + unaff_s7;
  *(char *)(iVar4 + 0x31) = ((*(uint *)(iVar3 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar4 + 0x38) = *(ushort *)(iVar3 + 0x34c) >> 8 | *(ushort *)(iVar3 + 0x34c) << 8;
  *(char *)(unaff_s5 + 2) = (char)unaff_s6;
  if (unaff_s6 != 0) {
    *(char *)(iVar4 + 0x1c) = (char)unaff_s6;
    if (*(char *)(iVar3 + 0x34a) == '\0') {
      uVar1 = *(byte *)(iVar3 + 0x57) + 10 & 0xff;
      puVar2 = (undefined *)FUN_000108fc();
      *(undefined *)(unaff_s3 + uVar1 * 0x1b0 + 0x1c) = 1;
      *puVar2 = (char)uVar1;
      puVar2[1] = 1;
      _L0();
    }
    iVar3 = unaff_s7 + unaff_s4 * 0x5d8;
    *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
  }
  FUN_00010932();
  return 0;
}



undefined4 FUN_000108fc(void)

{
  undefined unaff_s0;
  undefined *puVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s7;
  int iVar2;
  
  puVar1 = (undefined *)FUN_000108fc();
  *(undefined *)(unaff_s3 + unaff_s2 + 0x1c) = 1;
  *puVar1 = unaff_s0;
  puVar1[1] = 1;
  _L0();
  iVar2 = unaff_s7 + unaff_s4 * 0x5d8;
  *(char *)(iVar2 + 0x34a) = *(char *)(iVar2 + 0x34a) + '\x01';
  FUN_00010932();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s4;
  int unaff_s7;
  int iVar1;
  
  _L0();
  iVar1 = unaff_s7 + unaff_s4 * 0x5d8;
  *(char *)(iVar1 + 0x34a) = *(char *)(iVar1 + 0x34a) + '\x01';
  FUN_00010932();
  return 0;
}



undefined4 FUN_00010932(void)

{
  FUN_00010932();
  return 0;
}



undefined4 FUN_00010990(void)

{
  uint uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined *puVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int iVar4;
  
  FUN_00010990();
  iVar3 = FUN_000109a8();
  iVar4 = unaff_s1 * 0x1b0 + unaff_s3;
  *(undefined *)(iVar4 + 0xf2) = *(undefined *)(unaff_s0 + 0x46);
  *(undefined *)(iVar4 + 0xf3) = *(undefined *)(unaff_s0 + 0x47);
  *(undefined2 *)(iVar4 + 0x18) = *(undefined2 *)(unaff_s0 + 0x44);
  _L0();
  if (((*(uint *)(unaff_s0 + 0x40) & 0x10) != 0) && (-1 < *(char *)(unaff_s0 + 0x48))) {
    _LVL155();
  }
  if (iVar3 != 0) {
    FUN_0001088a();
  }
  iVar4 = unaff_s1 * 0x1b0 + unaff_s3;
  *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 0x10;
  iVar3 = unaff_s4 * 0x5d8 + unaff_s7;
  *(char *)(iVar4 + 0x31) = ((*(uint *)(iVar3 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar4 + 0x38) = *(ushort *)(iVar3 + 0x34c) >> 8 | *(ushort *)(iVar3 + 0x34c) << 8;
  *(char *)(unaff_s5 + 2) = (char)unaff_s6;
  if (unaff_s6 != 0) {
    *(char *)(iVar4 + 0x1c) = (char)unaff_s6;
    if (*(char *)(iVar3 + 0x34a) == '\0') {
      uVar1 = *(byte *)(iVar3 + 0x57) + 10 & 0xff;
      puVar2 = (undefined *)FUN_000108fc();
      *(undefined *)(unaff_s3 + uVar1 * 0x1b0 + 0x1c) = 1;
      *puVar2 = (char)uVar1;
      puVar2[1] = 1;
      _L0();
    }
    iVar3 = unaff_s7 + unaff_s4 * 0x5d8;
    *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
  }
  FUN_00010932();
  return 0;
}



undefined4 FUN_000109a8(void)

{
  uint uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined *puVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int iVar4;
  
  iVar3 = FUN_000109a8();
  iVar4 = unaff_s1 * 0x1b0 + unaff_s3;
  *(undefined *)(iVar4 + 0xf2) = *(undefined *)(unaff_s0 + 0x46);
  *(undefined *)(iVar4 + 0xf3) = *(undefined *)(unaff_s0 + 0x47);
  *(undefined2 *)(iVar4 + 0x18) = *(undefined2 *)(unaff_s0 + 0x44);
  _L0();
  if (((*(uint *)(unaff_s0 + 0x40) & 0x10) != 0) && (-1 < *(char *)(unaff_s0 + 0x48))) {
    _LVL155();
  }
  if (iVar3 != 0) {
    FUN_0001088a();
  }
  iVar4 = unaff_s1 * 0x1b0 + unaff_s3;
  *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 0x10;
  iVar3 = unaff_s4 * 0x5d8 + unaff_s7;
  *(char *)(iVar4 + 0x31) = ((*(uint *)(iVar3 + 0x5c4) & 1) == 0) + '\x01';
  *(ushort *)(iVar4 + 0x38) = *(ushort *)(iVar3 + 0x34c) >> 8 | *(ushort *)(iVar3 + 0x34c) << 8;
  *(char *)(unaff_s5 + 2) = (char)unaff_s6;
  if (unaff_s6 != 0) {
    *(char *)(iVar4 + 0x1c) = (char)unaff_s6;
    if (*(char *)(iVar3 + 0x34a) == '\0') {
      uVar1 = *(byte *)(iVar3 + 0x57) + 10 & 0xff;
      puVar2 = (undefined *)FUN_000108fc();
      *(undefined *)(unaff_s3 + uVar1 * 0x1b0 + 0x1c) = 1;
      *puVar2 = (char)uVar1;
      puVar2[1] = 1;
      _L0();
    }
    iVar3 = unaff_s7 + unaff_s4 * 0x5d8;
    *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
  }
  FUN_00010932();
  return 0;
}


