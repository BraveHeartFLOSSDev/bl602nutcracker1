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

typedef struct txdesc txdesc, *Ptxdesc;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef struct umacdesc umacdesc, *Pumacdesc;

typedef struct lmacdesc lmacdesc, *Plmacdesc;

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct tx_agg_desc tx_agg_desc, *Ptx_agg_desc;

typedef struct txl_buffer_tag txl_buffer_tag, *Ptxl_buffer_tag;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef char __int8_t;

typedef __int8_t int8_t;

typedef union anon_union.conflict2c4a_for_field_0 anon_union.conflict2c4a_for_field_0, *Panon_union.conflict2c4a_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict10fa_for_field_3 anon_union.conflict10fa_for_field_3, *Panon_union.conflict10fa_for_field_3;

typedef union anon_union.conflict111f_for_field_4 anon_union.conflict111f_for_field_4, *Panon_union.conflict111f_for_field_4;

typedef union anon_union.conflict1144_for_field_5 anon_union.conflict1144_for_field_5, *Panon_union.conflict1144_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr {
    struct co_list_hdr * next;
};

union anon_union.conflict1144_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
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

struct lmacdesc {
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

union anon_union.conflict111f_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict10fa_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict10fa_for_field_3 field_3;
    union anon_union.conflict111f_for_field_4 field_4;
    union anon_union.conflict1144_for_field_5 field_5;
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

struct tx_compressed_policy_tbl {
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct dma_desc {
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
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

union anon_union.conflict2c4a_for_field_0 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control {
    union anon_union.conflict2c4a_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
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

typedef struct txl_list txl_list, *Ptxl_list;

typedef struct co_list co_list, *Pco_list;

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

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

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

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

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag {
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

struct chan_tbtt_tag {
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

typedef uint16_t ke_task_id_t;

struct mm_chan_ctxt_add_req {
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
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

typedef struct chan_env_tag chan_env_tag, *Pchan_env_tag;

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag {
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

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

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free {
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req {
};

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

struct mobility_domain {
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

struct scan_chan_tag {
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct me_chan_config_req {
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
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

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct mac_edca_param_set mac_edca_param_set, *Pmac_edca_param_set;

typedef struct SecurityMode_t SecurityMode_t, *PSecurityMode_t;

typedef struct Cipher_t Cipher_t, *PCipher_t;

typedef ushort UINT16;

typedef uchar UINT8;

struct Cipher_t {
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
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

struct mac_ssid {
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
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

typedef union anon_union.conflictb56 anon_union.conflictb56, *Panon_union.conflictb56;

typedef struct anon_struct.conflictaf6 anon_struct.conflictaf6, *Panon_struct.conflictaf6;

typedef struct anon_struct.conflictb2d anon_struct.conflictb2d, *Panon_struct.conflictb2d;

struct anon_struct.conflictaf6 {
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictb2d {
    uint32_t key[4];
};

union anon_union.conflictb56 {
    struct anon_struct.conflictaf6 mic;
    struct anon_struct.conflictb2d mfp;
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictb56_for_u anon_union.conflictb56_for_u, *Panon_union.conflictb56_for_u;

union anon_union.conflictb56_for_u {
    struct anon_struct.conflictaf6 mic;
    struct anon_struct.conflictb2d mfp;
};

struct key_info_tag {
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb56_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability {
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

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

typedef enum anon_enum_8.conflict9cd {
    VIF_UNKNOWN=4,
    TASK_APM=7,
    TASK_SCANU=4,
    TASK_API=13,
    TASK_DBG=1,
    HW_RATE_24MBPS=8,
    PHY_CHNL_BW_80P80=4,
    TASK_LAST_EMB=12,
    PHY_BAND_MAX=2,
    TASK_NONE=-1,
    MAC_RATE_9MBPS=18,
    MAC_RATE_6MBPS=12,
    PHY_CHNL_BW_160=3,
    VIF_IBSS=1,
    MAC_RATE_24MBPS=48,
    MAC_RATE_5_5MBPS=11,
    VIF_AP=2,
    HW_RATE_18MBPS=7,
    MAC_RATE_12MBPS=24,
    HW_RATE_48MBPS=10,
    VIF_MESH_POINT=3,
    TASK_MM=0,
    PHY_CHNL_BW_20=0,
    PHY_BAND_5G=1,
    PHY_CHNL_BW_OTHER=5,
    HW_RATE_6MBPS=4,
    TASK_ME=5,
    HW_RATE_36MBPS=9,
    HW_RATE_11MBPS=3,
    HW_RATE_54MBPS=11,
    VIF_STA=0,
    TASK_MESH=9,
    HW_RATE_5_5MBPS=2,
    MAC_RATE_36MBPS=72,
    TASK_CFG=12,
    TASK_MAX=14,
    MAC_RATE_11MBPS=22,
    MAC_RATE_54MBPS=108,
    TASK_TDLS=3,
    TASK_RXU=11,
    MAC_RATE_2MBPS=4,
    TASK_SCAN=2,
    PHY_BAND_2G4=0,
    MAC_RATE_1MBPS=2,
    HW_RATE_12MBPS=6,
    HW_RATE_9MBPS=5,
    TASK_BAM=8,
    HW_RATE_2MBPS=1,
    PHY_CHNL_BW_40=1,
    MAC_RATE_18MBPS=36,
    PHY_CHNL_BW_80=2,
    HW_RATE_1MBPS=0,
    MAC_RATE_48MBPS=96,
    TASK_SM=6,
    TASK_HOSTAPD_U=10
} anon_enum_8.conflict9cd;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

typedef uint16_t ke_msg_id_t;

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

typedef uint wint_t;

typedef long __int32_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

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

struct rx_cntrl_ipcdesc {
    uint32_t host_id;
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

typedef union anon_union.conflicte9 anon_union.conflicte9, *Panon_union.conflicte9;

union anon_union.conflicte9 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte9_for___value anon_union.conflicte9_for___value, *Panon_union.conflicte9_for___value;

union anon_union.conflicte9_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflicte9_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format {
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag {
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag {
    struct co_list prog;
};

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

typedef struct mm_chan_ctxt_update_req mm_chan_ctxt_update_req, *Pmm_chan_ctxt_update_req;

struct mm_chan_ctxt_update_req {
    uint8_t chan_index;
    uint8_t band;
    uint8_t type;
    undefined field_0x3;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0xb;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag {
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef union anon_union.conflict3853 anon_union.conflict3853, *Panon_union.conflict3853;

typedef struct anon_struct.conflict368b anon_struct.conflict368b, *Panon_struct.conflict368b;

typedef struct anon_struct.conflict3758 anon_struct.conflict3758, *Panon_struct.conflict3758;

struct anon_struct.conflict368b {
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

struct anon_struct.conflict3758 {
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

union anon_union.conflict3853 {
    struct anon_struct.conflict368b sta;
    struct anon_struct.conflict3758 ap;
};

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict3853_for_u anon_union.conflict3853_for_u, *Panon_union.conflict3853_for_u;

union anon_union.conflict3853_for_u {
    struct anon_struct.conflict368b sta;
    struct anon_struct.conflict3758 ap;
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
    union anon_union.conflict3853_for_u u;
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

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag {
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
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

typedef struct sta_pol_tbl_cntl sta_pol_tbl_cntl, *Psta_pol_tbl_cntl;

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef struct rc_rate_stats rc_rate_stats, *Prc_rate_stats;

typedef struct step step, *Pstep;

typedef union anon_union.conflict31af_for_rate_map anon_union.conflict31af_for_rate_map, *Panon_union.conflict31af_for_rate_map;

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

union anon_union.conflict31af_for_rate_map {
    uint8_t ht[4];
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
    union anon_union.conflict31af_for_rate_map rate_map;
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

typedef enum sta_mgmt_pol_upd {
    STA_MGMT_POL_UPD_RATE=0,
    STA_MGMT_POL_UPD_PPDU_TX=2,
    STA_MGMT_POL_UPD_PROT=1,
    STA_MGMT_POL_UPD_BW=3,
    STA_MGMT_POL_UPD_MAX=5,
    STA_MGMT_POL_UPD_TX_POWER=4
} sta_mgmt_pol_upd;

typedef union anon_union.conflict31af anon_union.conflict31af, *Panon_union.conflict31af;

union anon_union.conflict31af {
    uint8_t ht[4];
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

typedef union anon_union.conflict2c4a anon_union.conflict2c4a, *Panon_union.conflict2c4a;

union anon_union.conflict2c4a {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag {
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict111f anon_union.conflict111f, *Panon_union.conflict111f;

union anon_union.conflict111f {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict1144 anon_union.conflict1144, *Panon_union.conflict1144;

union anon_union.conflict1144 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict10fa anon_union.conflict10fa, *Panon_union.conflict10fa;

union anon_union.conflict10fa {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
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

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict737 {
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

struct anon_struct.conflict87c {
    uchar * _nextf[30];
    uint _nmalloc[30];
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

union anon_union.conflict8c3_for__new {
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
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

union anon_union.conflict8c3 {
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
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




_Bool me_set_sta_ht_vht_param(sta_info_tag *sta,mac_bss_info *bss)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint8_t uVar4;
  byte bVar5;
  ushort uVar6;
  
  uVar1 = (sta->info).ht_cap.ht_capa_info;
  uVar3 = uVar1 >> 1 & 1;
  uVar2 = (int)(uint)uVar1 >> 8 & 3;
  if (DAT_0000012f < uVar3) {
    uVar3 = (ushort)DAT_0000012f;
  }
  (sta->info).phy_bw_max = (uint8_t)uVar3;
  uVar6 = (ushort)bss->phy_bw;
  if (uVar6 == 4) {
    uVar6 = 2;
  }
  uVar4 = (uint8_t)uVar6;
  if (uVar3 < uVar6) {
    uVar4 = (uint8_t)uVar3;
  }
  (sta->info).bw_cur = uVar4;
  bVar5 = DAT_0000012e;
  if (uVar2 < DAT_0000012e) {
    bVar5 = (byte)uVar2;
  }
  (sta->info).stbc_nss = bVar5;
  return (_Bool)((uVar1 & 0xc) != 0xc);
}



uint8_t me_11ac_mcs_max(uint16_t mcs_map)

{
  uint8_t uVar1;
  
  if ((mcs_map & 3) == 1) {
    uVar1 = '\b';
  }
  else {
    uVar1 = '\t';
    if ((mcs_map & 3) != 2) {
      return '\a';
    }
  }
  return uVar1;
}



uint8_t me_11ac_nss_max(uint16_t mcs_map)

{
  undefined2 in_register_0000202a;
  uint uVar1;
  uint8_t uVar2;
  
  uVar1 = 0xe;
  uVar2 = '\a';
  do {
    if ((CONCAT22(in_register_0000202a,mcs_map) >> (uVar1 & 0x1f) & 3U) != 3) {
      return uVar2;
    }
    uVar2 = uVar2 + -1;
    uVar1 = uVar1 - 2;
  } while (uVar2 != '\0');
  return '\0';
}



uint8_t me_11n_nss_max(uint8_t *mcs_set)

{
  uint8_t uVar1;
  
  if (mcs_set[3] == '\0') {
    uVar1 = '\x02';
    if ((mcs_set[2] == '\0') && (uVar1 = mcs_set[1], uVar1 != '\0')) {
      uVar1 = '\x01';
    }
  }
  else {
    uVar1 = '\x03';
  }
  return uVar1;
}



uint8_t me_legacy_ridx_min(uint16_t rate_map)

{
  undefined2 in_register_0000202a;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((CONCAT22(in_register_0000202a,rate_map) >> (uVar1 & 0x1f) & 1U) != 0) {
      return (uint8_t)uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0xc);
  return '\f';
}



uint8_t me_legacy_ridx_max(uint16_t rate_map)

{
  undefined2 in_register_0000202a;
  char cVar1;
  uint uVar2;
  
  if (CONCAT22(in_register_0000202a,rate_map) == 0) {
    return '\f';
  }
  uVar2 = 0xb;
  do {
    cVar1 = '\v' - (char)uVar2;
    if ((CONCAT22(in_register_0000202a,rate_map) >> (uVar2 & 0x1f) & 1U) != 0) goto _L0;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0xffffffff);
  cVar1 = '\f';
_L0:
  return '\v' - cVar1;
}



uint8_t me_rate_translate(uint8_t rate)

{
  uint8_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = rate & 0x7f;
  if (bVar3 == 0x16) {
    uVar1 = '\x03';
  }
  else {
    if (bVar3 < 0x17) {
      if (bVar3 == 0xb) {
        return '\x02';
      }
      if (bVar3 < 0xc) {
        if (bVar3 == 2) {
          return '\0';
        }
        bVar2 = 4;
        uVar1 = '\x01';
      }
      else {
        if (bVar3 == 0xc) {
          return '\x04';
        }
        bVar2 = 0x12;
        uVar1 = '\x05';
      }
    }
    else {
      if (bVar3 == 0x30) {
        return '\b';
      }
      if (bVar3 < 0x31) {
        if (bVar3 == 0x18) {
          return '\x06';
        }
        bVar2 = 0x24;
        uVar1 = '\a';
      }
      else {
        if (bVar3 == 0x60) {
          return '\n';
        }
        if (bVar3 == 0x6c) {
          return '\v';
        }
        bVar2 = 0x48;
        uVar1 = '\t';
      }
    }
    if (bVar3 != bVar2) {
      return -1;
    }
  }
  return uVar1;
}



void me_get_basic_rates(mac_rateset *rateset,mac_rateset *basic_ratest)

{
  byte bVar1;
  int iVar2;
  
  basic_ratest->length = '\0';
  iVar2 = 0;
  while (iVar2 < (int)(uint)rateset->length) {
    if ((char)rateset->array[iVar2] < '\0') {
      bVar1 = basic_ratest->length;
      basic_ratest->array[bVar1] = rateset->array[iVar2];
      basic_ratest->length = bVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  }
  return;
}



uint16_t me_legacy_rate_bitfield_build(mac_rateset *rateset,_Bool basic_only)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined3 in_register_0000202d;
  
  uVar1 = 0;
  iVar2 = 0;
  while (iVar2 < (int)(uint)rateset->length) {
    if ((CONCAT31(in_register_0000202d,basic_only) == 0) || ((char)rateset->array[iVar2] < '\0')) {
      uVar3 = _L0();
      if ((int)uVar3 < 0xc) {
        uVar1 = uVar1 | 1 << (uVar3 & 0x1f) & 0xffffU;
      }
      else {
        _LVL54(0,0,0x1c6);
      }
    }
    iVar2 = iVar2 + 1;
  }
  return (uint16_t)uVar1;
}



uint _L0(void)

{
  int iVar1;
  uint unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  byte *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  do {
    uVar3 = _L0();
    iVar2 = unaff_s1;
    if (unaff_s5 < (int)uVar3) {
      _LVL54(0x1c6);
    }
    else {
      unaff_s0 = (unaff_s0 | unaff_s3 << (uVar3 & 0x1f)) & 0xffff;
    }
    do {
      unaff_s1 = iVar2 + 1;
      if ((int)(uint)*unaff_s2 <= unaff_s1) {
        return unaff_s0;
      }
      iVar1 = iVar2 + 2;
    } while ((unaff_s4 != 0) && (iVar2 = unaff_s1, -1 < (char)unaff_s2[iVar1]));
  } while( true );
}



uint _LVL54(undefined4 param_1)

{
  int iVar1;
  uint unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  byte *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  do {
    _LVL54(param_1);
    iVar2 = unaff_s1;
    while( true ) {
      do {
        unaff_s1 = iVar2 + 1;
        if ((int)(uint)*unaff_s2 <= unaff_s1) {
          return unaff_s0;
        }
        iVar1 = iVar2 + 2;
        iVar2 = unaff_s1;
      } while ((unaff_s4 != 0) && (-1 < (char)unaff_s2[iVar1]));
      uVar3 = _L0();
      if (unaff_s5 < (int)uVar3) break;
      unaff_s0 = (unaff_s0 | unaff_s3 << (uVar3 & 0x1f)) & 0xffff;
    }
    param_1 = 0x1c6;
  } while( true );
}



uint16_t me_rate_bitfield_vht_build(uint16_t mcs_map_1,uint16_t mcs_map_2)

{
  uint uVar1;
  undefined2 in_register_0000202a;
  undefined2 in_register_0000202e;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar4 = 0xffff;
  while( true ) {
    uVar5 = CONCAT22(in_register_0000202a,mcs_map_1) >> (uVar3 & 0x1f) & 3;
    uVar2 = CONCAT22(in_register_0000202e,mcs_map_2) >> (uVar3 & 0x1f) & 3;
    if (uVar5 == 3) {
      return (uint16_t)uVar4;
    }
    if (uVar2 == 3) break;
    uVar1 = uVar3 & 0x1f;
    if (uVar2 < uVar5) {
      uVar5 = uVar2;
    }
    uVar2 = uVar3 & 0x1f;
    uVar3 = uVar3 + 2;
    uVar4 = uVar5 << uVar2 & 0xffff | ~(3 << uVar1) & uVar4;
    if (uVar3 == 0x10) {
      return (uint16_t)uVar4;
    }
  }
  return (uint16_t)uVar4;
}



uint16_t me_build_capability(uint8_t vif_idx)

{
  char cVar1;
  ushort uVar2;
  undefined3 in_register_00002029;
  ushort uVar3;
  int iVar4;
  
  iVar4 = CONCAT31(in_register_00002029,vif_idx) * 0x5d8;
  cVar1 = *(char *)(iVar4 + 0x56);
  uVar3 = 0x11;
  if (((cVar1 != '\0') && (uVar3 = 1, cVar1 == '\x02')) &&
     ((*(uint *)(iVar4 + 1000) & 0x12a00) != 0)) {
    uVar3 = 0x11;
  }
  uVar2 = uVar3 | 0x520;
  if (*(char *)(*(int *)(CONCAT31(in_register_00002029,vif_idx) * 0x5d8 + 0x3a4) + 2) != '\x01') {
    uVar2 = uVar3 | 0x420;
  }
  return (uint16_t)uVar2;
}



void me_init_bcmc_rate(sta_info_tag *sta_entry)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((sta_entry->info).rate_set.length == '\0') {
    FUN_000102f8(0,0,0x229);
  }
  iVar4 = 0;
  bVar2 = 0;
  while (iVar4 < (int)(uint)(sta_entry->info).rate_set.length) {
    bVar1 = (sta_entry->info).rate_set.array[iVar4];
    if (bVar2 < (bVar1 & 0x7f)) {
      bVar2 = bVar1 & 0x7f;
    }
    iVar4 = iVar4 + 1;
  }
  uVar3 = _L0();
  FUN_00010318(sta_entry,uVar3);
  (sta_entry->pol_tbl).upd_field = '\0';
  return;
}



void FUN_000102f8(void)

{
  byte bVar1;
  int unaff_s0;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_000102f8();
  iVar4 = 0;
  bVar2 = 0;
  while (iVar4 < (int)(uint)*(byte *)(unaff_s0 + 0xb0)) {
    bVar1 = *(byte *)(unaff_s0 + iVar4 + 0xb1);
    if (bVar2 < (bVar1 & 0x7f)) {
      bVar2 = bVar1 & 0x7f;
    }
    iVar4 = iVar4 + 1;
  }
  uVar3 = _L0();
  FUN_00010318(uVar3);
  *(undefined *)(unaff_s0 + 0x11a) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = _L0();
  FUN_00010318(uVar1);
  *(undefined *)(unaff_s0 + 0x11a) = 0;
  return;
}



void FUN_00010318(void)

{
  int unaff_s0;
  
  FUN_00010318();
  *(undefined *)(unaff_s0 + 0x11a) = 0;
  return;
}



void me_tx_cfm_singleton(txdesc *txdesc)

{
  if ((((txdesc->lmac).hw_desc)->cfm_ptr->status & 0x10000) != 0) {
    _L0();
  }
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



void me_tx_cfm_ampdu(uint8_t sta_idx,uint32_t txed,uint32_t txok,_Bool retry_required)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void me_check_rc(uint8_t sta_idx,_Bool *tx_ampdu)

{
  me_check_rc(sta_idx,tx_ampdu);
  return;
}



// WARNING: Variable defined which should be unmapped: pwr_info

txl_buffer_control * me_update_buffer_control(sta_info_tag *sta_info)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  rc_sta_stats *prVar15;
  uint uVar16;
  txl_buffer_control *ptVar17;
  uint32_t *puVar18;
  uint local_40;
  uint32_t rate_info [4];
  uint32_t pwr_info [4];
  
  puVar12 = &local_40;
  bVar1 = (sta_info->pol_tbl).upd_field;
  ptVar17 = (sta_info->pol_tbl).buf_ctrl;
  if (bVar1 != 0) {
    uVar16 = *(uint *)&(ptVar17->field_0).field_0x4;
    puVar6 = (undefined4 *)&(ptVar17->field_0).field_0x14;
    iVar13 = 0;
    puVar18 = rate_info + 3;
    puVar10 = puVar6;
    do {
      *(undefined4 *)((int)rate_info + iVar13 + -4) = *puVar10;
      puVar8 = (undefined4 *)((int)puVar18 + iVar13);
      iVar13 = iVar13 + 4;
      *puVar8 = puVar10[4];
      puVar10 = puVar10 + 1;
    } while (iVar13 != 0x10);
    if ((bVar1 & 1) != 0) {
      prVar15 = (sta_info->pol_tbl).sta_stats;
      bVar2 = (sta_info->info).stbc_nss;
      bVar3 = prVar15->sw_retry_step;
      bVar5 = false;
      uVar11 = 0;
      iVar13 = 0;
      puVar14 = &local_40;
      do {
        uVar4 = prVar15->rate_stats[prVar15->retry[(uint)bVar3 + iVar13 & 3].idx].rate_config;
        if ((uVar4 & 0x3000) != 0) {
          uVar9 = (uVar4 & 0x18) >> 3;
          if (iVar13 == 0) {
            if (uVar9 < bVar2) {
              bVar5 = true;
              uVar11 = uVar9;
            }
          }
          else {
            if (bVar5) {
              bVar5 = uVar9 == uVar11;
            }
          }
        }
        iVar13 = iVar13 + 1;
        *puVar14 = uVar4 & 0x3fff | 0x80000000 | *puVar14 & 0x1fffc000;
        puVar14 = puVar14 + 1;
      } while (iVar13 != 4);
      uVar16 = uVar16 & 0xfffffe7f;
      if (bVar5) {
        uVar16 = uVar16 | (uVar11 + 1) * 0x80;
      }
      (sta_info->pol_tbl).upd_field = bVar1 | 2;
    }
    bVar1 = (sta_info->pol_tbl).upd_field;
    if ((bVar1 & 2) != 0) {
      do {
        uVar11 = *puVar12;
        if ((uVar11 >> 0xb & 7 | uVar11 & 0x7c) != 0) {
          *puVar12 = uVar11 & 0xe0003fff | (sta_info->pol_tbl).prot_cfg;
        }
        puVar12 = puVar12 + 1;
      } while (puVar18 != puVar12);
    }
    if ((bVar1 & 0x10) != 0) {
      iVar13 = 0;
      do {
        uVar7 = FUN_000104d4(*(undefined4 *)((int)rate_info + iVar13 + -4));
        *(undefined4 *)((int)puVar18 + iVar13) = uVar7;
        iVar13 = iVar13 + 4;
      } while (iVar13 != 0x10);
    }
    iVar13 = 0;
    *(uint *)&(ptVar17->field_0).field_0x4 = uVar16;
    do {
      *puVar6 = *(undefined4 *)((int)rate_info + iVar13 + -4);
      puVar10 = (undefined4 *)((int)puVar18 + iVar13);
      iVar13 = iVar13 + 4;
      puVar6[4] = *puVar10;
      puVar6 = puVar6 + 1;
    } while (iVar13 != 0x10);
    (sta_info->pol_tbl).upd_field = '\0';
  }
  return ptVar17;
}



void FUN_000104d4(undefined4 param_1)

{
  int unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  while( true ) {
    uVar1 = FUN_000104d4(param_1);
    *(undefined4 *)(unaff_s4 + unaff_s5) = uVar1;
    if (unaff_s5 + 4 == unaff_s6) break;
    param_1 = *(undefined4 *)(&stack0x00000004 + unaff_s5);
    unaff_s5 = unaff_s5 + 4;
  }
  iVar3 = 0;
  *(undefined4 *)(unaff_s3 + 4) = unaff_s2;
  do {
    *unaff_s1 = *(undefined4 *)(&stack0x00000000 + iVar3);
    puVar2 = (undefined4 *)(unaff_s4 + iVar3);
    iVar3 = iVar3 + 4;
    unaff_s1[4] = *puVar2;
    unaff_s1 = unaff_s1 + 1;
  } while (iVar3 != 0x10);
  *(undefined *)(unaff_s0 + 0x11a) = 0;
  return;
}



void me_init_rate(sta_info_tag *sta_entry)

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



void me_bw_check(uint32_t ht_op_addr,uint32_t vht_op_addr,mac_bss_info *bss)

{
  short sVar1;
  uint16_t uVar2;
  byte bVar3;
  
  uVar2 = bss->chan->freq;
  bVar3 = 0;
  if (((ht_op_addr != 0) && (bVar3 = DAT_0000012f, DAT_0000012f != 0)) &&
     (bVar3 = *(byte *)(ht_op_addr + 3) & 3, (*(byte *)(ht_op_addr + 3) & 3) != 0)) {
    sVar1 = 10;
    if (bVar3 != 1) {
      sVar1 = -10;
    }
    uVar2 = uVar2 + sVar1;
    bVar3 = 1;
  }
  bss->bw = bVar3;
  bss->phy_bw = bVar3;
  bss->center_freq1 = uVar2;
  bss->center_freq2 = 0;
  return;
}



void me_beacon_check(uint8_t vif_idx,uint16_t length,uint32_t bcn_addr)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined3 in_register_00002029;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  ushort uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  char cStack51;
  char cStack50;
  undefined auStack49 [2];
  uint8_t csa_mode;
  int8_t pwr;
  uint8_t idx;
  
  iVar5 = CONCAT31(in_register_00002029,vif_idx);
  iVar12 = iVar5 * 0x5d8;
  *(undefined2 *)(iVar12 + 0x3d8) = 0;
  bVar1 = *(byte *)(iVar12 + 0x3db);
  cVar2 = *(char *)(iVar12 + 0x3dc);
  iVar11 = bcn_addr + 0x24;
  sVar10 = length - 0x24;
  if ((*(char *)(*(int *)(iVar12 + 0x3a4) + 2) == '\0') &&
     (iVar6 = _LVL154(iVar11,sVar10,0x2a), iVar6 != 0)) {
    bVar3 = *(byte *)(iVar6 + 2);
    uVar9 = *(ushort *)(iVar12 + 0x3d8) & 0xfff8;
    if ((bVar3 & 1) != 0) {
      uVar9 = uVar9 | 1;
    }
    *(ushort *)(iVar12 + 0x3d8) = uVar9;
    if ((bVar3 & 2) != 0) {
      *(ushort *)(iVar5 * 0x5d8 + 0x3d8) = *(ushort *)(iVar5 * 0x5d8 + 0x3d8) | 2;
    }
    if ((bVar3 & 4) != 0) {
      *(ushort *)(iVar5 * 0x5d8 + 0x3d8) = *(ushort *)(iVar5 * 0x5d8 + 0x3d8) | 4;
    }
  }
  uVar7 = 0;
  if (DAT_0000002e != '\0') {
    uVar7 = FUN_00010660(iVar11,sVar10,0x3d);
  }
  FUN_00010672(uVar7,0,iVar12 + 0x358);
  cVar4 = FUN_00010688(iVar11,sVar10,&cStack51,iVar12 + 0x5c8);
  if (cVar4 != '\0') {
    iVar6 = iVar5 * 0x5d8;
    if (*(char *)(iVar6 + 0x56) == '\0') {
      if ((*(char *)(iVar6 + 0x79) == '\0') && (cStack51 == '\x01')) {
        FUN_000106c0(*(undefined *)(iVar6 + 0x57),0);
      }
      *(char *)(iVar5 * 0x5d8 + 0x79) = cVar4;
    }
    else {
      if (*(char *)(iVar6 + 0x56) == '\x02') {
        *(char *)(iVar6 + 0x347) = cVar4;
      }
    }
  }
  FUN_000106dc(iVar11,sVar10,iVar12 + 0x358);
  cVar4 = *(char *)(iVar5 * 0x5d8 + 0x3dc);
  if (cVar4 != cVar2) {
    cStack50 = *(char *)(*(int *)(iVar5 * 0x5d8 + 0x3a4) + 4) - cVar4;
    _L0(iVar12,&cStack50,auStack49);
  }
  if (bVar1 < *(byte *)(iVar5 * 0x5d8 + 0x3db)) {
    puVar8 = (undefined *)FUN_00010732(0x3b,0,5,0xc);
    if (*(int *)(iVar5 * 0x5d8 + 0x40) == 0) {
      FUN_00010756(0,0,0x39);
    }
    *puVar8 = *(undefined *)(*(int *)(iVar5 * 0x5d8 + 0x40) + 0x17);
    puVar8[1] = *(undefined *)(*(int *)(iVar12 + 0x3a4) + 2);
    puVar8[2] = *(undefined *)(iVar12 + 0x3db);
    *(undefined2 *)(puVar8 + 4) = **(undefined2 **)(iVar12 + 0x3a4);
    *(undefined2 *)(puVar8 + 6) = *(undefined2 *)(iVar12 + 0x3a8);
    *(undefined2 *)(puVar8 + 8) = *(undefined2 *)(iVar12 + 0x3aa);
    puVar8[10] = *(undefined *)(*(int *)(iVar5 * 0x5d8 + 0x40) + 0xc);
    _L0(puVar8);
  }
  return;
}



void _LVL154(undefined3 param_1)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  int unaff_s2;
  uint unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  char in_stack_0000000d;
  char in_stack_0000000e;
  
  iVar3 = _LVL154();
  if (iVar3 != 0) {
    bVar1 = *(byte *)(iVar3 + 2);
    uVar6 = *(ushort *)(unaff_s1 + 0x3d8) & 0xfff8;
    if ((bVar1 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
    *(ushort *)(unaff_s1 + 0x3d8) = uVar6;
    if ((bVar1 & 2) != 0) {
      iVar3 = unaff_s2 * 0x5d8 + unaff_s0;
      *(ushort *)(iVar3 + 0x3d8) = *(ushort *)(iVar3 + 0x3d8) | 2;
    }
    if ((bVar1 & 4) != 0) {
      iVar3 = unaff_s2 * 0x5d8 + unaff_s0;
      *(ushort *)(iVar3 + 0x3d8) = *(ushort *)(iVar3 + 0x3d8) | 4;
    }
  }
  uVar4 = 0;
  if (DAT_0000002e != '\0') {
    uVar4 = FUN_00010660(0x3d);
  }
  iVar3 = unaff_s7 + 0x358 + unaff_s0;
  FUN_00010672(uVar4,0,iVar3);
  cVar2 = FUN_00010688(&stack0x0000000d,unaff_s7 + 0x5c8 + unaff_s0);
  if (cVar2 != '\0') {
    iVar7 = unaff_s2 * 0x5d8 + unaff_s0;
    if (*(char *)(iVar7 + 0x56) == '\0') {
      if ((*(char *)(iVar7 + 0x79) == '\0') && (in_stack_0000000d == '\x01')) {
        FUN_000106c0(*(undefined *)(iVar7 + 0x57),0);
      }
      *(char *)(unaff_s2 * 0x5d8 + unaff_s0 + 0x79) = cVar2;
    }
    else {
      if (*(char *)(iVar7 + 0x56) == '\x02') {
        *(char *)(iVar7 + 0x347) = cVar2;
      }
    }
  }
  FUN_000106dc(iVar3);
  iVar3 = unaff_s2 * 0x5d8 + unaff_s0;
  bVar1 = *(byte *)(iVar3 + 0x3dc);
  if (bVar1 != unaff_s6) {
    in_stack_0000000e = *(char *)(*(int *)(iVar3 + 0x3a4) + 4) - bVar1;
    _L0(&stack0x0000000e,&stack0x0000000f);
  }
  iVar3 = unaff_s2 * 0x5d8 + unaff_s0;
  if (unaff_s5 < *(byte *)(iVar3 + 0x3db)) {
    puVar5 = (undefined *)FUN_00010732(0x3b,0,5,0xc);
    if (*(int *)(iVar3 + 0x40) == 0) {
      FUN_00010756(0,0,0x39);
    }
    iVar3 = unaff_s0 + unaff_s2 * 0x5d8;
    *puVar5 = *(undefined *)(*(int *)(iVar3 + 0x40) + 0x17);
    puVar5[1] = *(undefined *)(*(int *)(unaff_s1 + 0x3a4) + 2);
    puVar5[2] = *(undefined *)(unaff_s1 + 0x3db);
    *(undefined2 *)(puVar5 + 4) = **(undefined2 **)(unaff_s1 + 0x3a4);
    *(undefined2 *)(puVar5 + 6) = *(undefined2 *)(unaff_s1 + 0x3a8);
    *(undefined2 *)(puVar5 + 8) = *(undefined2 *)(unaff_s1 + 0x3aa);
    puVar5[10] = *(undefined *)(*(int *)(iVar3 + 0x40) + 0xc);
    _L0(puVar5);
  }
  return;
}



void FUN_00010660(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int unaff_s2;
  uint unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int iVar5;
  char in_stack_0000000d;
  char in_stack_0000000e;
  
  FUN_00010660();
  iVar5 = unaff_s7 + 0x358 + unaff_s0;
  FUN_00010672(0,iVar5);
  cVar2 = FUN_00010688(&stack0x0000000d,unaff_s7 + 0x5c8 + unaff_s0);
  if (cVar2 != '\0') {
    iVar4 = unaff_s2 * 0x5d8 + unaff_s0;
    if (*(char *)(iVar4 + 0x56) == '\0') {
      if ((*(char *)(iVar4 + 0x79) == '\0') && (in_stack_0000000d == '\x01')) {
        FUN_000106c0(*(undefined *)(iVar4 + 0x57),0);
      }
      *(char *)(unaff_s2 * 0x5d8 + unaff_s0 + 0x79) = cVar2;
    }
    else {
      if (*(char *)(iVar4 + 0x56) == '\x02') {
        *(char *)(iVar4 + 0x347) = cVar2;
      }
    }
  }
  FUN_000106dc(iVar5);
  iVar5 = unaff_s2 * 0x5d8 + unaff_s0;
  bVar1 = *(byte *)(iVar5 + 0x3dc);
  if (bVar1 != unaff_s6) {
    in_stack_0000000e = *(char *)(*(int *)(iVar5 + 0x3a4) + 4) - bVar1;
    _L0(&stack0x0000000e,&stack0x0000000f);
  }
  iVar5 = unaff_s2 * 0x5d8 + unaff_s0;
  if (unaff_s5 < *(byte *)(iVar5 + 0x3db)) {
    puVar3 = (undefined *)FUN_00010732(0x3b,0,5,0xc);
    if (*(int *)(iVar5 + 0x40) == 0) {
      FUN_00010756(0,0,0x39);
    }
    iVar5 = unaff_s0 + unaff_s2 * 0x5d8;
    *puVar3 = *(undefined *)(*(int *)(iVar5 + 0x40) + 0x17);
    puVar3[1] = *(undefined *)(*(int *)(unaff_s1 + 0x3a4) + 2);
    puVar3[2] = *(undefined *)(unaff_s1 + 0x3db);
    *(undefined2 *)(puVar3 + 4) = **(undefined2 **)(unaff_s1 + 0x3a4);
    *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(unaff_s1 + 0x3a8);
    *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(unaff_s1 + 0x3aa);
    puVar3[10] = *(undefined *)(*(int *)(iVar5 + 0x40) + 0xc);
    _L0(puVar3);
  }
  return;
}



void FUN_00010672(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int unaff_s2;
  uint unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  char in_stack_0000000d;
  char in_stack_0000000e;
  
  FUN_00010672();
  cVar2 = FUN_00010688(&stack0x0000000d,unaff_s7 + 0x5c8 + unaff_s0);
  if (cVar2 != '\0') {
    iVar4 = unaff_s2 * 0x5d8 + unaff_s0;
    if (*(char *)(iVar4 + 0x56) == '\0') {
      if ((*(char *)(iVar4 + 0x79) == '\0') && (in_stack_0000000d == '\x01')) {
        FUN_000106c0(*(undefined *)(iVar4 + 0x57),0);
      }
      *(char *)(unaff_s2 * 0x5d8 + unaff_s0 + 0x79) = cVar2;
    }
    else {
      if (*(char *)(iVar4 + 0x56) == '\x02') {
        *(char *)(iVar4 + 0x347) = cVar2;
      }
    }
  }
  FUN_000106dc();
  iVar4 = unaff_s2 * 0x5d8 + unaff_s0;
  bVar1 = *(byte *)(iVar4 + 0x3dc);
  if (bVar1 != unaff_s6) {
    in_stack_0000000e = *(char *)(*(int *)(iVar4 + 0x3a4) + 4) - bVar1;
    _L0(&stack0x0000000e,&stack0x0000000f);
  }
  iVar4 = unaff_s2 * 0x5d8 + unaff_s0;
  if (unaff_s5 < *(byte *)(iVar4 + 0x3db)) {
    puVar3 = (undefined *)FUN_00010732(0x3b,0,5,0xc);
    if (*(int *)(iVar4 + 0x40) == 0) {
      FUN_00010756(0,0,0x39);
    }
    iVar4 = unaff_s0 + unaff_s2 * 0x5d8;
    *puVar3 = *(undefined *)(*(int *)(iVar4 + 0x40) + 0x17);
    puVar3[1] = *(undefined *)(*(int *)(unaff_s1 + 0x3a4) + 2);
    puVar3[2] = *(undefined *)(unaff_s1 + 0x3db);
    *(undefined2 *)(puVar3 + 4) = **(undefined2 **)(unaff_s1 + 0x3a4);
    *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(unaff_s1 + 0x3a8);
    *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(unaff_s1 + 0x3aa);
    puVar3[10] = *(undefined *)(*(int *)(iVar4 + 0x40) + 0xc);
    _L0(puVar3);
  }
  return;
}



void FUN_00010688(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int unaff_s2;
  uint unaff_s5;
  uint unaff_s6;
  char in_stack_0000000d;
  char in_stack_0000000e;
  
  cVar2 = FUN_00010688();
  if (cVar2 != '\0') {
    iVar4 = unaff_s2 * 0x5d8 + unaff_s0;
    if (*(char *)(iVar4 + 0x56) == '\0') {
      if ((*(char *)(iVar4 + 0x79) == '\0') && (in_stack_0000000d == '\x01')) {
        FUN_000106c0(*(undefined *)(iVar4 + 0x57),0);
      }
      *(char *)(unaff_s2 * 0x5d8 + unaff_s0 + 0x79) = cVar2;
    }
    else {
      if (*(char *)(iVar4 + 0x56) == '\x02') {
        *(char *)(iVar4 + 0x347) = cVar2;
      }
    }
  }
  FUN_000106dc();
  iVar4 = unaff_s2 * 0x5d8 + unaff_s0;
  bVar1 = *(byte *)(iVar4 + 0x3dc);
  if (bVar1 != unaff_s6) {
    in_stack_0000000e = *(char *)(*(int *)(iVar4 + 0x3a4) + 4) - bVar1;
    _L0(&stack0x0000000e,&stack0x0000000f);
  }
  iVar4 = unaff_s2 * 0x5d8 + unaff_s0;
  if (unaff_s5 < *(byte *)(iVar4 + 0x3db)) {
    puVar3 = (undefined *)FUN_00010732(0x3b,0,5,0xc);
    if (*(int *)(iVar4 + 0x40) == 0) {
      FUN_00010756(0,0,0x39);
    }
    iVar4 = unaff_s0 + unaff_s2 * 0x5d8;
    *puVar3 = *(undefined *)(*(int *)(iVar4 + 0x40) + 0x17);
    puVar3[1] = *(undefined *)(*(int *)(unaff_s1 + 0x3a4) + 2);
    puVar3[2] = *(undefined *)(unaff_s1 + 0x3db);
    *(undefined2 *)(puVar3 + 4) = **(undefined2 **)(unaff_s1 + 0x3a4);
    *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(unaff_s1 + 0x3a8);
    *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(unaff_s1 + 0x3aa);
    puVar3[10] = *(undefined *)(*(int *)(iVar4 + 0x40) + 0xc);
    _L0(puVar3);
  }
  return;
}



void FUN_000106c0(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  undefined *puVar2;
  int iVar3;
  int unaff_s2;
  uint unaff_s5;
  uint unaff_s6;
  undefined unaff_s7;
  char in_stack_0000000e;
  
  FUN_000106c0();
  *(undefined *)(unaff_s2 * 0x5d8 + unaff_s0 + 0x79) = unaff_s7;
  FUN_000106dc();
  iVar3 = unaff_s2 * 0x5d8 + unaff_s0;
  bVar1 = *(byte *)(iVar3 + 0x3dc);
  if (bVar1 != unaff_s6) {
    in_stack_0000000e = *(char *)(*(int *)(iVar3 + 0x3a4) + 4) - bVar1;
    _L0(&stack0x0000000e,&stack0x0000000f);
  }
  iVar3 = unaff_s2 * 0x5d8 + unaff_s0;
  if (unaff_s5 < *(byte *)(iVar3 + 0x3db)) {
    puVar2 = (undefined *)FUN_00010732(0x3b,0,5,0xc);
    if (*(int *)(iVar3 + 0x40) == 0) {
      FUN_00010756(0,0,0x39);
    }
    iVar3 = unaff_s0 + unaff_s2 * 0x5d8;
    *puVar2 = *(undefined *)(*(int *)(iVar3 + 0x40) + 0x17);
    puVar2[1] = *(undefined *)(*(int *)(unaff_s1 + 0x3a4) + 2);
    puVar2[2] = *(undefined *)(unaff_s1 + 0x3db);
    *(undefined2 *)(puVar2 + 4) = **(undefined2 **)(unaff_s1 + 0x3a4);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s1 + 0x3a8);
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s1 + 0x3aa);
    puVar2[10] = *(undefined *)(*(int *)(iVar3 + 0x40) + 0xc);
    _L0(puVar2);
  }
  return;
}



void FUN_000106dc(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  undefined *puVar2;
  int iVar3;
  int unaff_s2;
  uint unaff_s5;
  uint unaff_s6;
  char in_stack_0000000e;
  
  FUN_000106dc();
  iVar3 = unaff_s2 * 0x5d8 + unaff_s0;
  bVar1 = *(byte *)(iVar3 + 0x3dc);
  if (bVar1 != unaff_s6) {
    in_stack_0000000e = *(char *)(*(int *)(iVar3 + 0x3a4) + 4) - bVar1;
    _L0(&stack0x0000000e,&stack0x0000000f);
  }
  iVar3 = unaff_s2 * 0x5d8 + unaff_s0;
  if (unaff_s5 < *(byte *)(iVar3 + 0x3db)) {
    puVar2 = (undefined *)FUN_00010732(0x3b,0,5,0xc);
    if (*(int *)(iVar3 + 0x40) == 0) {
      FUN_00010756(0,0,0x39);
    }
    iVar3 = unaff_s0 + unaff_s2 * 0x5d8;
    *puVar2 = *(undefined *)(*(int *)(iVar3 + 0x40) + 0x17);
    puVar2[1] = *(undefined *)(*(int *)(unaff_s1 + 0x3a4) + 2);
    puVar2[2] = *(undefined *)(unaff_s1 + 0x3db);
    *(undefined2 *)(puVar2 + 4) = **(undefined2 **)(unaff_s1 + 0x3a4);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s1 + 0x3a8);
    *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s1 + 0x3aa);
    puVar2[10] = *(undefined *)(*(int *)(iVar3 + 0x40) + 0xc);
    _L0(puVar2);
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  int unaff_s2;
  int iVar2;
  uint unaff_s5;
  
  _L0();
  iVar2 = unaff_s2 * 0x5d8 + unaff_s0;
  if (unaff_s5 < *(byte *)(iVar2 + 0x3db)) {
    puVar1 = (undefined *)FUN_00010732(0x3b,0,5,0xc);
    if (*(int *)(iVar2 + 0x40) == 0) {
      FUN_00010756(0,0,0x39);
    }
    iVar2 = unaff_s0 + unaff_s2 * 0x5d8;
    *puVar1 = *(undefined *)(*(int *)(iVar2 + 0x40) + 0x17);
    puVar1[1] = *(undefined *)(*(int *)(unaff_s1 + 0x3a4) + 2);
    puVar1[2] = *(undefined *)(unaff_s1 + 0x3db);
    *(undefined2 *)(puVar1 + 4) = **(undefined2 **)(unaff_s1 + 0x3a4);
    *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(unaff_s1 + 0x3a8);
    *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(unaff_s1 + 0x3aa);
    puVar1[10] = *(undefined *)(*(int *)(iVar2 + 0x40) + 0xc);
    _L0(puVar1);
  }
  return;
}



void FUN_00010732(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined *puVar2;
  int unaff_s2;
  int unaff_s4;
  
  puVar2 = (undefined *)FUN_00010732();
  if (*(int *)(unaff_s4 + 0x40) == 0) {
    FUN_00010756(0,0,0x39);
  }
  iVar1 = unaff_s0 + unaff_s2 * 0x5d8;
  *puVar2 = *(undefined *)(*(int *)(iVar1 + 0x40) + 0x17);
  puVar2[1] = *(undefined *)(*(int *)(unaff_s1 + 0x3a4) + 2);
  puVar2[2] = *(undefined *)(unaff_s1 + 0x3db);
  *(undefined2 *)(puVar2 + 4) = **(undefined2 **)(unaff_s1 + 0x3a4);
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(unaff_s1 + 0x3a8);
  *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(unaff_s1 + 0x3aa);
  puVar2[10] = *(undefined *)(*(int *)(iVar1 + 0x40) + 0xc);
  _L0(puVar2);
  return;
}



void FUN_00010756(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  undefined *unaff_s3;
  
  FUN_00010756();
  iVar1 = unaff_s0 + unaff_s2 * 0x5d8;
  *unaff_s3 = *(undefined *)(*(int *)(iVar1 + 0x40) + 0x17);
  unaff_s3[1] = *(undefined *)(*(int *)(unaff_s1 + 0x3a4) + 2);
  unaff_s3[2] = *(undefined *)(unaff_s1 + 0x3db);
  *(undefined2 *)(unaff_s3 + 4) = **(undefined2 **)(unaff_s1 + 0x3a4);
  *(undefined2 *)(unaff_s3 + 6) = *(undefined2 *)(unaff_s1 + 0x3a8);
  *(undefined2 *)(unaff_s3 + 8) = *(undefined2 *)(unaff_s1 + 0x3aa);
  unaff_s3[10] = *(undefined *)(*(int *)(iVar1 + 0x40) + 0xc);
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



void me_sta_bw_nss_max_upd(uint8_t sta_idx,uint8_t bw,uint8_t nss)

{
  byte bVar1;
  int iVar2;
  undefined3 in_register_00002029;
  uint uVar3;
  uint uVar4;
  undefined3 in_register_0000202d;
  uint uVar5;
  undefined3 in_register_00002031;
  
  iVar2 = CONCAT31(in_register_00002029,sta_idx);
  bVar1 = *(byte *)(iVar2 * 0x1b0 + 0x1a);
  if (DAT_0000002e == '\0') {
    FUN_0001082e(0,0,0x429);
  }
  uVar3 = FUN_00010844(iVar2 * 0x1b0 + 0xc3);
  uVar4 = FUN_00010856(0xf);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  if (CONCAT31(in_register_00002031,nss) < uVar4) {
    uVar4 = CONCAT31(in_register_00002031,nss);
  }
  uVar3 = (uint)*(byte *)(iVar2 * 0x1b0 + 0xf0);
  if (uVar3 == 4) {
    uVar3 = 3;
  }
  uVar5 = (uint)*(byte *)((uint)bVar1 * 0x5d8 + 0x3da);
  if (CONCAT31(in_register_0000202d,bw) < uVar5) {
    uVar5 = CONCAT31(in_register_0000202d,bw);
  }
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  iVar2 = iVar2 * 0x1b0;
  *(char *)(iVar2 + 0xf1) = (char)uVar5;
  _L0(*(undefined *)(iVar2 + 0x1b),uVar4 & 0xff);
  *(byte *)(iVar2 + 0x11a) = *(byte *)(iVar2 + 0x11a) | 8;
  return;
}



void FUN_0001082e(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  
  FUN_0001082e();
  uVar2 = FUN_00010844(unaff_s1 * 0x1b0 + 0xc3 + unaff_s0);
  uVar3 = FUN_00010856(0xf);
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  if (unaff_s4 < uVar3) {
    uVar3 = unaff_s4;
  }
  uVar2 = (uint)*(byte *)(unaff_s1 * 0x1b0 + unaff_s0 + 0xf0);
  if (uVar2 == 4) {
    uVar2 = 3;
  }
  uVar4 = (uint)*(byte *)(unaff_s3 * 0x5d8 + 0x3da);
  if (unaff_s2 < uVar4) {
    uVar4 = unaff_s2;
  }
  if (uVar2 < uVar4) {
    uVar4 = uVar2;
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x1b0;
  *(char *)(iVar1 + 0xf1) = (char)uVar4;
  _L0(*(undefined *)(iVar1 + 0x1b),uVar3 & 0xff);
  *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 8;
  return;
}



void FUN_00010844(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  
  uVar2 = FUN_00010844();
  uVar3 = FUN_00010856(0xf);
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  if (unaff_s4 < uVar3) {
    uVar3 = unaff_s4;
  }
  uVar2 = (uint)*(byte *)(unaff_s1 * 0x1b0 + unaff_s0 + 0xf0);
  if (uVar2 == 4) {
    uVar2 = 3;
  }
  uVar4 = (uint)*(byte *)(unaff_s3 * 0x5d8 + 0x3da);
  if (unaff_s2 < uVar4) {
    uVar4 = unaff_s2;
  }
  if (uVar2 < uVar4) {
    uVar4 = uVar2;
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x1b0;
  *(char *)(iVar1 + 0xf1) = (char)uVar4;
  _L0(*(undefined *)(iVar1 + 0x1b),uVar3 & 0xff);
  *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 8;
  return;
}



void FUN_00010856(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  
  uVar2 = FUN_00010856();
  if (unaff_s5 < uVar2) {
    uVar2 = unaff_s5;
  }
  if (unaff_s4 < uVar2) {
    uVar2 = unaff_s4;
  }
  uVar4 = (uint)*(byte *)(unaff_s1 * 0x1b0 + unaff_s0 + 0xf0);
  if (uVar4 == 4) {
    uVar4 = 3;
  }
  uVar3 = (uint)*(byte *)(unaff_s3 * 0x5d8 + 0x3da);
  if (unaff_s2 < uVar3) {
    uVar3 = unaff_s2;
  }
  if (uVar4 < uVar3) {
    uVar3 = uVar4;
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x1b0;
  *(char *)(iVar1 + 0xf1) = (char)uVar3;
  _L0(*(undefined *)(iVar1 + 0x1b),uVar2 & 0xff);
  *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 8;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 8;
  return;
}



uint16_t me_tx_cfm_amsdu(txdesc *txdesc)

{
  int iVar1;
  
  if (((txdesc->host).tid != -1) &&
     (iVar1 = (uint)(txdesc->host).staid * 0x1b0, *(char *)(iVar1 + 0x1a) != -1)) {
    return *(uint16_t *)(*(int *)(iVar1 + 0x110) + 0xc4);
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

uint8_t me_add_chan_ctx(uint8_t *p_chan_idx,scan_chan_tag *p_chan,uint32_t center_freq1,
                       uint32_t center_freq2,uint8_t ch_width)

{
  uint8_t uVar1;
  uint8_t uStack28;
  uint8_t uStack27;
  uint16_t uStack26;
  mm_chan_ctxt_add_req req;
  
  uStack28 = p_chan->band;
  req._0_2_ = (undefined2)center_freq1;
  uStack26 = p_chan->freq;
  req.prim20_freq = (uint16_t)center_freq2;
  req.center1_freq._0_1_ = p_chan->tx_power;
  uStack27 = ch_width;
  uVar1 = _L0(&uStack28,p_chan_idx);
  return uVar1;
}



void _L0(void)

{
  _L0();
  return;
}


