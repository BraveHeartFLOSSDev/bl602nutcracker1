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

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictf3_for___value anon_union.conflictf3_for___value, *Panon_union.conflictf3_for___value;

typedef uint wint_t;

union anon_union.conflictf3_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictf3_for___value __value;
};

typedef union anon_union.conflictf3 anon_union.conflictf3, *Panon_union.conflictf3;

union anon_union.conflictf3 {
    wint_t __wch;
    uchar __wchb[4];
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

typedef union anon_union.conflict2bbf_for_field_0 anon_union.conflict2bbf_for_field_0, *Panon_union.conflict2bbf_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1273_for_field_3 anon_union.conflict1273_for_field_3, *Panon_union.conflict1273_for_field_3;

typedef union anon_union.conflict1298_for_field_4 anon_union.conflict1298_for_field_4, *Panon_union.conflict1298_for_field_4;

typedef union anon_union.conflict12bd_for_field_5 anon_union.conflict12bd_for_field_5, *Panon_union.conflict12bd_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr {
    struct co_list_hdr * next;
};

union anon_union.conflict12bd_for_field_5 {
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

union anon_union.conflict1273_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflict1298_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1273_for_field_3 field_3;
    union anon_union.conflict1298_for_field_4 field_4;
    union anon_union.conflict12bd_for_field_5 field_5;
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

union anon_union.conflict2bbf_for_field_0 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control {
    union anon_union.conflict2bbf_for_field_0 field_0;
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

typedef uchar UINT8;

typedef ushort UINT16;

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

typedef uint16_t ke_task_id_t;

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

typedef struct anon_struct.conflict3546 anon_struct.conflict3546, *Panon_struct.conflict3546;

struct anon_struct.conflict3546 {
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

typedef union anon_union.conflict370e_for_u anon_union.conflict370e_for_u, *Panon_union.conflict370e_for_u;

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef struct anon_struct.conflict3613 anon_struct.conflict3613, *Panon_struct.conflict3613;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct mac_edca_param_set mac_edca_param_set, *Pmac_edca_param_set;

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

typedef struct SecurityMode_t SecurityMode_t, *PSecurityMode_t;

typedef struct Cipher_t Cipher_t, *PCipher_t;

typedef union anon_union.conflictb2f_for_u anon_union.conflictb2f_for_u, *Panon_union.conflictb2f_for_u;

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct anon_struct.conflictacf anon_struct.conflictacf, *Panon_struct.conflictacf;

typedef struct anon_struct.conflictb06 anon_struct.conflictb06, *Panon_struct.conflictb06;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

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

struct anon_struct.conflictacf {
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictb06 {
    uint32_t key[4];
};

union anon_union.conflictb2f_for_u {
    struct anon_struct.conflictacf mic;
    struct anon_struct.conflictb06 mfp;
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

struct key_info_tag {
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb2f_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

struct anon_struct.conflict3613 {
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

union anon_union.conflict370e_for_u {
    struct anon_struct.conflict3546 sta;
    struct anon_struct.conflict3613 ap;
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
    union anon_union.conflict370e_for_u u;
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

typedef union anon_union.conflict370e anon_union.conflict370e, *Panon_union.conflict370e;

union anon_union.conflict370e {
    struct anon_struct.conflict3546 sta;
    struct anon_struct.conflict3613 ap;
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

typedef union anon_union.conflict25c8_for_rate_map anon_union.conflict25c8_for_rate_map, *Panon_union.conflict25c8_for_rate_map;

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

union anon_union.conflict25c8_for_rate_map {
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
    union anon_union.conflict25c8_for_rate_map rate_map;
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

typedef union anon_union.conflict25c8 anon_union.conflict25c8, *Panon_union.conflict25c8;

union anon_union.conflict25c8 {
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

typedef union anon_union.conflictb2f anon_union.conflictb2f, *Panon_union.conflictb2f;

union anon_union.conflictb2f {
    struct anon_struct.conflictacf mic;
    struct anon_struct.conflictb06 mfp;
};

typedef enum anon_enum_8.conflict98a {
    HAL_MM_TIMER=7,
    TASK_APM=7,
    TASK_SCANU=4,
    TASK_API=13,
    TASK_DBG=1,
    HW_RATE_24MBPS=8,
    IPC_DMA_CHANNEL_MAX=4,
    TASK_LAST_EMB=12,
    DMA_MAX=2,
    TASK_NONE=-1,
    PHY_BAND_MAX=2,
    STA_OPMOD_NOTIF=16,
    HAL_AC2_TIMER=2,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    TID_2=2,
    TID_5=5,
    TID_4=4,
    TID_7=7,
    TID_6=6,
    HW_RATE_18MBPS=7,
    DMA_DL=0,
    STA_MFP_CAPA=8,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    TID_MGT=8,
    HAL_TIMER_MAX=9,
    STA_VHT_CAPA=4,
    BROADCAST_STA_IDX_MIN=10,
    HW_RATE_48MBPS=10,
    HAL_AC1_TIMER=1,
    TASK_MM=0,
    AC_BE=1,
    AC_BK=0,
    PHY_BAND_5G=1,
    HW_RATE_6MBPS=4,
    TASK_ME=5,
    STA_MAX=12,
    DMA_UL=1,
    HW_RATE_36MBPS=9,
    IPC_DMA_CHANNEL_DATA_RX=1,
    AC_VI=2,
    STA_HT_CAPA=2,
    HW_RATE_11MBPS=3,
    HW_RATE_54MBPS=11,
    AC_VO=3,
    TASK_MESH=9,
    HW_RATE_5_5MBPS=2,
    TASK_CFG=12,
    TASK_MAX=14,
    HAL_AC3_TIMER=3,
    STA_QOS_CAPA=1,
    SCANU_IDLE=0,
    TASK_TDLS=3,
    TASK_RXU=11,
    HAL_KE_TIMER=8,
    TASK_SCAN=2,
    BROADCAST_STA_IDX_MAX=11,
    PHY_BAND_2G4=0,
    HW_RATE_12MBPS=6,
    HAL_AC0_TIMER=0,
    AC_MAX=4,
    HAL_IDLE_TIMER=5,
    INVALID_STA_IDX=-1,
    HAL_RX_TIMER=6,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    HW_RATE_9MBPS=5,
    TID_MAX=9,
    TASK_BAM=8,
    SCANU_STATE_MAX=2,
    HW_RATE_2MBPS=1,
    HAL_BCN_TIMER=4,
    IPC_DMA_CHANNEL_DATA_TX=3,
    SCANU_SCANNING=1,
    HW_RATE_1MBPS=0,
    TASK_SM=6,
    TASK_HOSTAPD_U=10
} anon_enum_8.conflict98a;

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

typedef union anon_union.conflict2bbf anon_union.conflict2bbf, *Panon_union.conflict2bbf;

union anon_union.conflict2bbf {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag {
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict12bd anon_union.conflict12bd, *Panon_union.conflict12bd;

union anon_union.conflict12bd {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1298 anon_union.conflict1298, *Panon_union.conflict1298;

union anon_union.conflict1298 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict1273 anon_union.conflict1273, *Panon_union.conflict1273;

union anon_union.conflict1273 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
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




uint8_t rc_get_nss(uint16_t rate_config)

{
  undefined2 in_register_0000202a;
  
  if ((CONCAT22(in_register_0000202a,rate_config) >> 0xb & 7U) - 2 < 2) {
    return (uint8_t)((byte)(CONCAT22(in_register_0000202a,rate_config) >> 3) & 3);
  }
  return '\0';
}



uint8_t rc_get_mcs_index(uint16_t rate_config)

{
  undefined2 in_register_0000202a;
  byte bVar1;
  uint uVar2;
  
  uVar2 = CONCAT22(in_register_0000202a,rate_config) >> 0xb & 7;
  if (uVar2 < 2) {
    bVar1 = (byte)rate_config & 0x7f;
  }
  else {
    bVar1 = 0;
    if (uVar2 < 4) {
      bVar1 = (byte)rate_config & 7;
    }
  }
  return (uint8_t)bVar1;
}



uint16_t rc_set_previous_mcs_index(rc_sta_stats *rc_ss,uint16_t rate_config)

{
  uint uVar1;
  uint uVar2;
  undefined2 in_register_0000202e;
  uint uVar3;
  
  uVar3 = CONCAT22(in_register_0000202e,rate_config);
  uVar2 = _L0(uVar3);
  uVar1 = (int)uVar3 >> 0xb & 7;
  if (uVar1 < 2) {
    if (rc_ss->r_idx_min < uVar2) {
      uVar3 = (uVar3 & 0xffffff80 | uVar2 - 1) & 0xffff;
    }
  }
  else {
    if (((uVar1 < 4) && (uVar2 != 0)) &&
       (uVar3 = (uVar3 & 0xfffffff8 | uVar2 - 1) & 0xffff, rc_ss->short_gi != '\0')) {
      uVar3 = uVar3 | 0x200;
    }
  }
  return (uint16_t)uVar3;
}



uint _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint in_stack_0000000c;
  
  uVar1 = _L0();
  if ((unaff_s0 & 7) < 2) {
    if (*(byte *)(unaff_s1 + 0xb9) < uVar1) {
      in_stack_0000000c = (in_stack_0000000c & 0xffffff80 | uVar1 - 1) & 0xffff;
    }
  }
  else {
    if ((((unaff_s0 & 7) < 4) && (uVar1 != 0)) &&
       (in_stack_0000000c = (in_stack_0000000c & 0xfffffff8 | uVar1 - 1) & 0xffff,
       *(char *)(unaff_s1 + 0xbd) != '\0')) {
      in_stack_0000000c = in_stack_0000000c | 0x200;
    }
  }
  return in_stack_0000000c;
}



uint16_t rc_set_next_mcs_index(rc_sta_stats *rc_ss,uint16_t rate_config)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 in_register_0000202e;
  uint uVar4;
  
  uVar1 = CONCAT22(in_register_0000202e,rate_config);
  uVar2 = _L0(uVar1);
  uVar4 = (int)uVar1 >> 0xb & 7;
  if (uVar4 < 2) {
    if ((uVar2 < rc_ss->r_idx_max) && ((rc_ss->rate_map_l >> (uVar2 + 1 & 0x1f) & 1) != 0)) {
      uVar1 = (uVar1 & 0xffffff80 | uVar2 + 1) & 0xffff;
    }
  }
  else {
    if ((uVar4 < 4) && (uVar2 < rc_ss->mcs_max)) {
      iVar3 = _LVL29(uVar1);
      if (((*(byte *)(&rc_ss->retry[6].field_0x6 + iVar3) >> (uVar2 + 1 & 0x1f) & 1) != 0) &&
         (uVar1 = (uVar1 & 0xfffffff8 | uVar2 + 1) & 0xffff, rc_ss->short_gi != '\0')) {
        uVar1 = uVar1 | 0x200;
      }
    }
  }
  return (uint16_t)uVar1;
}



uint _L0(void)

{
  uint unaff_s0;
  uint uVar1;
  int iVar2;
  int unaff_s2;
  uint unaff_s3;
  
  uVar1 = _L0();
  if ((unaff_s3 & 7) < 2) {
    if ((uVar1 < *(byte *)(unaff_s2 + 0xba)) &&
       ((*(ushort *)(unaff_s2 + 0xb6) >> (uVar1 + 1 & 0x1f) & 1) != 0)) {
      unaff_s0 = (unaff_s0 & 0xffffff80 | uVar1 + 1) & 0xffff;
    }
  }
  else {
    if (((unaff_s3 & 7) < 4) && (uVar1 < *(byte *)(unaff_s2 + 0xb8))) {
      iVar2 = _LVL29();
      if (((*(byte *)(iVar2 + unaff_s2 + 0xb2) >> (uVar1 + 1 & 0x1f) & 1) != 0) &&
         (unaff_s0 = (unaff_s0 & 0xfffffff8 | uVar1 + 1) & 0xffff,
         *(char *)(unaff_s2 + 0xbd) != '\0')) {
        unaff_s0 = unaff_s0 | 0x200;
      }
    }
  }
  return unaff_s0;
}



uint _LVL29(void)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  
  iVar1 = _LVL29();
  if (((*(byte *)(iVar1 + unaff_s2 + 0xb2) >> (unaff_s1 + 1U & 0x1f) & 1) != 0) &&
     (unaff_s0 = (unaff_s0 & 0xfffffff8 | unaff_s1 + 1U) & 0xffff,
     *(char *)(unaff_s2 + 0xbd) != '\0')) {
    unaff_s0 = unaff_s0 | 0x200;
  }
  return unaff_s0;
}



_Bool is_cck_group(uint16_t rate_config)

{
  uint uVar1;
  
  if ((rate_config & 0x3000) == 0) {
    uVar1 = _L0();
    return (_Bool)(uVar1 < 4);
  }
  return false;
}



bool _L0(void)

{
  uint uVar1;
  
  uVar1 = _L0();
  return uVar1 < 4;
}



void rc_update_retry_chain(rc_sta_stats *rc_ss,uint32_t *cur_tp)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  uint32_t uVar8;
  uint uVar9;
  uint uVar10;
  uint8_t *puVar11;
  uint uVar12;
  uint uVar13;
  uint8_t *puVar14;
  
  uVar4 = rc_ss->no_samples;
  uVar13 = (uint)uVar4;
  if (((rc_ss->info & 4) == 0) && (cur_tp[uVar13 - 1] < *cur_tp)) {
    rc_ss->retry[0].idx = 0;
    rc_ss->retry[0].tp = 0;
    uVar3 = 1;
  }
  else {
    rc_ss->retry[0].idx = uVar4 - 1;
    uVar3 = 2;
    rc_ss->retry[0].tp = cur_tp[uVar13 - 1];
  }
  uVar1 = rc_ss->retry[0].idx;
  puVar11 = &rc_ss->rate_stats[uVar1 - 1].sample_skipped;
  iVar5 = _LVL46(*(undefined2 *)(puVar11 + 10));
  if (iVar5 == 0) {
    uVar12 = 0;
    while ((int)uVar12 < (int)(uVar13 - 1)) {
      puVar14 = &rc_ss->rate_stats[uVar12 - 1].sample_skipped;
      iVar5 = FUN_00010292(*(undefined2 *)(puVar14 + 10));
      if (iVar5 != 0) {
        puVar14[0xf] = '\0';
      }
      uVar12 = uVar12 + 1 & 0xffff;
    }
    puVar11[0xf] = '\x01';
  }
  uVar8 = rc_ss->retry[0].tp;
  rc_ss->retry[1].idx = uVar1;
  rc_ss->retry[1].tp = uVar8;
  iVar5 = uVar13 - uVar3;
  do {
    iVar7 = iVar5;
    uVar12 = uVar3;
    uVar3 = uVar12 + 1 & 0xffff;
    if (uVar13 <= uVar12) goto _L0;
    iVar5 = iVar7 + -1;
  } while (rc_ss->rate_stats[iVar7].rate_allowed == false);
  rc_ss->retry[1].idx = uVar4 - (short)uVar12;
  rc_ss->retry[1].tp = cur_tp[iVar7];
_L0:
  uVar12 = (uint)rc_ss->retry[1].idx;
  uVar3 = uVar13 - uVar3;
  do {
    uVar9 = uVar3;
    uVar10 = uVar12;
    if (uVar13 <= (uVar13 - uVar9 & 0xffff)) break;
    uVar3 = uVar9 - 1;
    uVar10 = uVar9;
  } while (rc_ss->rate_stats[uVar9].rate_allowed == false);
  uVar13 = cur_tp[uVar10];
  puVar6 = &rc_ss->rate_stats[0].probability;
  uVar4 = rc_ss->rate_stats[uVar10].probability;
  uVar3 = 0;
  do {
    if (uVar12 <= (uVar3 & 0xffff)) {
      rc_ss->retry[2].idx = (uint16_t)uVar10;
      uVar8 = cur_tp[uVar10];
      rc_ss->retry[3].idx = 0;
      rc_ss->retry[2].tp = uVar8;
      rc_ss->retry[3].tp = *cur_tp;
      return;
    }
    if ((*(char *)((int)puVar6 + 7) != '\0') && ((uVar3 & 0xffff) != (uint)uVar1)) {
      uVar2 = *puVar6;
      if (uVar2 < 0xf333) {
        if (uVar4 <= uVar2) {
          uVar8 = cur_tp[uVar3];
          goto _L0;
        }
      }
      else {
        uVar8 = cur_tp[uVar3];
        if (uVar13 <= uVar8) {
_L0:
          uVar13 = uVar8;
          uVar10 = uVar3;
          uVar4 = uVar2;
        }
      }
    }
    uVar3 = uVar3 + 1;
    puVar6 = puVar6 + 6;
  } while( true );
}



void _LVL46(void)

{
  ushort uVar1;
  int unaff_s0;
  uint unaff_s1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_s2;
  uint uVar9;
  uint unaff_s4;
  undefined4 *unaff_s5;
  int iVar10;
  uint unaff_s7;
  
  iVar3 = _LVL46();
  if (iVar3 == 0) {
    uVar9 = 0;
    while ((int)uVar9 < (int)(unaff_s4 - 1)) {
      iVar10 = uVar9 * 0xc + unaff_s0;
      iVar3 = FUN_00010292(*(undefined2 *)(iVar10 + 10));
      if (iVar3 != 0) {
        *(undefined *)(iVar10 + 0xf) = 0;
      }
      uVar9 = uVar9 + 1 & 0xffff;
    }
    *(undefined *)(unaff_s2 + 0xf) = 1;
  }
  *(short *)(unaff_s0 + 0x88) = (short)unaff_s7;
  *(undefined4 *)(unaff_s0 + 0x84) = *(undefined4 *)(unaff_s0 + 0x7c);
  iVar3 = unaff_s4 - unaff_s1;
  do {
    iVar10 = iVar3;
    uVar9 = unaff_s1;
    unaff_s1 = uVar9 + 1 & 0xffff;
    if (unaff_s4 <= uVar9) goto _L0;
    iVar3 = iVar10 + -1;
  } while (*(char *)(iVar3 * 0xc + unaff_s0 + 0x1b) == '\0');
  *(short *)(unaff_s0 + 0x88) = (short)unaff_s4 - (short)uVar9;
  *(undefined4 *)(unaff_s0 + 0x84) = unaff_s5[iVar10];
_L0:
  uVar9 = unaff_s4 - unaff_s1;
  do {
    uVar5 = uVar9;
    uVar7 = (uint)*(ushort *)(unaff_s0 + 0x88);
    if (unaff_s4 <= (unaff_s4 - uVar5 & 0xffff)) break;
    uVar9 = uVar5 - 1;
    uVar7 = uVar5;
  } while (*(char *)((uVar5 - 1) * 0xc + unaff_s0 + 0x1b) == '\0');
  uVar9 = unaff_s5[uVar7];
  puVar4 = (ushort *)(unaff_s0 + 8);
  uVar2 = *(ushort *)(uVar7 * 0xc + unaff_s0 + 8);
  uVar5 = 0;
  do {
    if ((uint)*(ushort *)(unaff_s0 + 0x88) <= (uVar5 & 0xffff)) {
      *(short *)(unaff_s0 + 0x90) = (short)uVar7;
      uVar6 = unaff_s5[uVar7];
      *(undefined2 *)(unaff_s0 + 0x98) = 0;
      *(undefined4 *)(unaff_s0 + 0x8c) = uVar6;
      *(undefined4 *)(unaff_s0 + 0x94) = *unaff_s5;
      return;
    }
    if ((*(char *)((int)puVar4 + 7) != '\0') && ((uVar5 & 0xffff) != unaff_s7)) {
      uVar1 = *puVar4;
      if (uVar1 < 0xf333) {
        if (uVar2 <= uVar1) {
          uVar8 = unaff_s5[uVar5];
          goto _L0;
        }
      }
      else {
        uVar8 = unaff_s5[uVar5];
        if (uVar9 <= uVar8) {
_L0:
          uVar9 = uVar8;
          uVar7 = uVar5;
          uVar2 = uVar1;
        }
      }
    }
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 6;
  } while( true );
}



void FUN_00010292(uint param_1)

{
  ushort uVar1;
  int unaff_s0;
  uint unaff_s1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  undefined4 *unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  while( true ) {
    iVar3 = FUN_00010292(param_1);
    if (iVar3 != 0) {
      *(undefined *)(unaff_s6 + 0xf) = 0;
    }
    unaff_s3 = unaff_s3 + 1 & 0xffff;
    if (unaff_s8 <= (int)unaff_s3) break;
    unaff_s6 = unaff_s3 * unaff_s9 + unaff_s0;
    param_1 = (uint)*(ushort *)(unaff_s6 + 10);
  }
  *(undefined *)(unaff_s2 + 0xf) = 1;
  *(short *)(unaff_s0 + 0x88) = (short)unaff_s7;
  *(undefined4 *)(unaff_s0 + 0x84) = *(undefined4 *)(unaff_s0 + 0x7c);
  iVar3 = unaff_s4 - unaff_s1;
  do {
    iVar6 = iVar3;
    uVar4 = unaff_s1;
    unaff_s1 = uVar4 + 1 & 0xffff;
    if (unaff_s4 <= uVar4) goto _L0;
    iVar3 = iVar6 + -1;
  } while (*(char *)(iVar3 * 0xc + unaff_s0 + 0x1b) == '\0');
  *(short *)(unaff_s0 + 0x88) = (short)unaff_s4 - (short)uVar4;
  *(undefined4 *)(unaff_s0 + 0x84) = unaff_s5[iVar6];
_L0:
  uVar4 = unaff_s4 - unaff_s1;
  do {
    uVar7 = uVar4;
    uVar9 = (uint)*(ushort *)(unaff_s0 + 0x88);
    if (unaff_s4 <= (unaff_s4 - uVar7 & 0xffff)) break;
    uVar4 = uVar7 - 1;
    uVar9 = uVar7;
  } while (*(char *)((uVar7 - 1) * 0xc + unaff_s0 + 0x1b) == '\0');
  uVar4 = unaff_s5[uVar9];
  puVar5 = (ushort *)(unaff_s0 + 8);
  uVar2 = *(ushort *)(uVar9 * 0xc + unaff_s0 + 8);
  uVar7 = 0;
  do {
    if ((uint)*(ushort *)(unaff_s0 + 0x88) <= (uVar7 & 0xffff)) {
      *(short *)(unaff_s0 + 0x90) = (short)uVar9;
      uVar8 = unaff_s5[uVar9];
      *(undefined2 *)(unaff_s0 + 0x98) = 0;
      *(undefined4 *)(unaff_s0 + 0x8c) = uVar8;
      *(undefined4 *)(unaff_s0 + 0x94) = *unaff_s5;
      return;
    }
    if ((*(char *)((int)puVar5 + 7) != '\0') && ((uVar7 & 0xffff) != unaff_s7)) {
      uVar1 = *puVar5;
      if (uVar1 < 0xf333) {
        if (uVar2 <= uVar1) {
          uVar10 = unaff_s5[uVar7];
          goto _L0;
        }
      }
      else {
        uVar10 = unaff_s5[uVar7];
        if (uVar4 <= uVar10) {
_L0:
          uVar4 = uVar10;
          uVar9 = uVar7;
          uVar2 = uVar1;
        }
      }
    }
    uVar7 = uVar7 + 1;
    puVar5 = puVar5 + 6;
  } while( true );
}



uint16_t rc_get_lowest_rate_config(rc_sta_stats *rc_ss)

{
  byte bVar1;
  uint16_t uVar2;
  
  bVar1 = rc_ss->format_mod;
  if (bVar1 < 2) {
    uVar2 = (uint16_t)rc_ss->r_idx_min;
    if (rc_ss->r_idx_min == 0) {
      return 0x400;
    }
  }
  else {
    if (3 < bVar1) {
      return 0;
    }
    if (rc_ss->r_idx_min == '\0') {
      return 0x400;
    }
    uVar2 = (ushort)bVar1 << 0xb;
  }
  return uVar2;
}



// WARNING: Variable defined which should be unmapped: rc_ss_tmp

void rc_sort_samples_tp(rc_sta_stats *rc_ss,uint32_t *cur_tp)

{
  ushort uVar1;
  uint32_t *puVar2;
  ushort uVar3;
  uint32_t uVar4;
  ushort uVar5;
  rc_rate_stats *prVar6;
  ushort uVar7;
  rc_rate_stats *prVar8;
  undefined auStack44 [4];
  rc_rate_stats rc_ss_tmp;
  
  uVar5 = rc_ss->no_samples;
  uVar1 = uVar5 - 1;
  while (uVar7 = uVar1, uVar5 != 0) {
    puVar2 = cur_tp + 1;
    uVar5 = 0;
    uVar3 = 1;
    prVar6 = rc_ss->rate_stats + 1;
    while (uVar1 = uVar5, uVar3 < uVar7) {
      prVar8 = prVar6 + 1;
      if (puVar2[1] < *puVar2) {
        FUN_00010380(auStack44,prVar6,0xc);
        FUN_0001038e(prVar6,prVar8,0xc);
        FUN_0001039c(prVar8,auStack44,0xc);
        uVar4 = puVar2[1];
        puVar2[1] = *puVar2;
        *puVar2 = uVar4;
        uVar5 = uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
      prVar6 = prVar8;
    }
  }
  return;
}



void FUN_00010380(undefined *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  do {
    FUN_00010380(param_1,param_2,param_3);
    FUN_0001038e(unaff_s2,unaff_s5,0xc);
    FUN_0001039c(unaff_s5,&stack0x00000004,0xc);
    uVar2 = unaff_s0[1];
    unaff_s0[1] = *unaff_s0;
    *unaff_s0 = uVar2;
    uVar2 = unaff_s1;
    do {
      unaff_s1 = unaff_s1 + 1 & 0xffff;
      unaff_s0 = unaff_s0 + 1;
      uVar1 = uVar2;
      param_2 = unaff_s5;
      while (uVar2 = uVar1, unaff_s4 <= unaff_s1) {
        if (uVar2 == 0) {
          return;
        }
        unaff_s0 = (uint *)(unaff_s6 + 4);
        unaff_s1 = 1;
        uVar1 = 0;
        param_2 = unaff_s3;
        unaff_s4 = uVar2;
      }
      unaff_s5 = param_2 + 0xc;
    } while (*unaff_s0 <= unaff_s0[1]);
    param_3 = 0xc;
    param_1 = &stack0x00000004;
    unaff_s2 = param_2;
  } while( true );
}



void FUN_0001038e(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  do {
    FUN_0001038e(param_1,param_2,param_3);
    FUN_0001039c(unaff_s5,&stack0x00000004,0xc);
    uVar2 = unaff_s0[1];
    unaff_s0[1] = *unaff_s0;
    *unaff_s0 = uVar2;
    uVar2 = unaff_s1;
    param_2 = unaff_s5;
    do {
      unaff_s1 = unaff_s1 + 1 & 0xffff;
      unaff_s0 = unaff_s0 + 1;
      uVar1 = uVar2;
      param_1 = param_2;
      while (uVar2 = uVar1, unaff_s4 <= unaff_s1) {
        if (uVar2 == 0) {
          return;
        }
        unaff_s0 = (uint *)(unaff_s6 + 4);
        unaff_s1 = 1;
        uVar1 = 0;
        param_1 = unaff_s3;
        unaff_s4 = uVar2;
      }
      param_2 = param_1 + 0xc;
    } while (*unaff_s0 <= unaff_s0[1]);
    FUN_00010380(&stack0x00000004,param_1,0xc);
    param_3 = 0xc;
    unaff_s5 = param_2;
  } while( true );
}



void FUN_0001039c(int param_1,undefined *param_2,undefined4 param_3)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  int iVar3;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  do {
    FUN_0001039c(param_1,param_2,param_3);
    uVar2 = unaff_s0[1];
    unaff_s0[1] = *unaff_s0;
    *unaff_s0 = uVar2;
    uVar2 = unaff_s1;
    param_1 = unaff_s5;
    do {
      unaff_s1 = unaff_s1 + 1 & 0xffff;
      unaff_s0 = unaff_s0 + 1;
      uVar1 = uVar2;
      iVar3 = param_1;
      while (uVar2 = uVar1, unaff_s4 <= unaff_s1) {
        if (uVar2 == 0) {
          return;
        }
        unaff_s0 = (uint *)(unaff_s6 + 4);
        unaff_s1 = 1;
        uVar1 = 0;
        iVar3 = unaff_s3;
        unaff_s4 = uVar2;
      }
      param_1 = iVar3 + 0xc;
    } while (*unaff_s0 <= unaff_s0[1]);
    FUN_00010380(&stack0x00000004,iVar3,0xc);
    FUN_0001038e(iVar3,param_1,0xc);
    param_3 = 0xc;
    param_2 = &stack0x00000004;
    unaff_s5 = param_1;
  } while( true );
}



uint16_t rc_get_initial_rate_config(rc_sta_stats *rc_ss)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  
  bVar1 = rc_ss->format_mod;
  if (bVar1 < 2) {
    uVar4 = (ushort)rc_ss->r_idx_max;
    uVar5 = (ushort)bVar1 << 0xb | (ushort)rc_ss->p_type << 10;
  }
  else {
    if (3 < bVar1) {
      return 0;
    }
    bVar2 = rc_ss->no_ss;
    sVar3 = _L0(*(undefined *)(&rc_ss->retry[6].field_0x6 + (uint)bVar2));
    uVar5 = (ushort)rc_ss->short_gi << 9 | (ushort)bVar1 << 0xb | (ushort)rc_ss->bw_max << 7 |
            (ushort)bVar2 << 3;
    uVar4 = 0x1fU - sVar3 & 0xff;
  }
  return (uint16_t)(uVar5 | uVar4);
}



uint _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  uint unaff_s2;
  
  iVar1 = _L0();
  return ((uint)*(byte *)(unaff_s0 + 0xbd) << 9 | unaff_s1 | (uint)*(byte *)(unaff_s0 + 0xbb) << 7 |
         unaff_s2) & 0xffff | 0x1fU - iVar1 & 0xff;
}



void rc_calc_prob_ewma(rc_rate_stats *rc_rs)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)rc_rs->attempts;
  if (uVar1 != 0) {
    rc_rs->sample_skipped = '\0';
    uVar3 = (uint)rc_rs->success << 0x10;
    uVar2 = uVar3 / uVar1;
    if (rc_rs->old_prob_available == false) {
      if (uVar3 < uVar1) {
        rc_rs->probability = 0;
      }
      else {
        rc_rs->probability = (short)uVar2 - 1;
      }
    }
    else {
      rc_rs->probability = (uint16_t)((uint)rc_rs->probability * 0x60 + uVar2 * 0x20 >> 7);
    }
    rc_rs->old_prob_available = true;
    return;
  }
  if (rc_rs->sample_skipped != -1) {
    rc_rs->sample_skipped = rc_rs->sample_skipped + '\x01';
  }
  return;
}



_Bool rc_check_valid_rate(rc_sta_stats *rc_ss,uint16_t rate_config)

{
  int iVar1;
  undefined2 in_register_0000202e;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = CONCAT22(in_register_0000202e,rate_config);
  uVar3 = iVar2 >> 0xb & 7;
  if (uVar3 < 2) {
    uVar3 = FUN_000104ee(iVar2);
    uVar4 = (uint)rc_ss->rate_map_l;
  }
  else {
    if (3 < uVar3) {
      return true;
    }
    iVar1 = FUN_000104ce(iVar2);
    uVar3 = FUN_000104de(iVar2);
    uVar4 = (uint)*(byte *)(&rc_ss->retry[6].field_0x6 + iVar1);
  }
  return (_Bool)((byte)(uVar4 >> (uVar3 & 0x1f)) & 1);
}



byte FUN_000104ce(void)

{
  int unaff_s0;
  int iVar1;
  uint uVar2;
  undefined4 in_stack_0000000c;
  
  iVar1 = FUN_000104ce();
  uVar2 = FUN_000104de(in_stack_0000000c);
  return *(byte *)(unaff_s0 + iVar1 + 0xb2) >> (uVar2 & 0x1f) & 1;
}



byte FUN_000104de(void)

{
  int unaff_s0;
  uint uVar1;
  
  uVar1 = FUN_000104de();
  return *(byte *)(unaff_s0 + 0xb2) >> (uVar1 & 0x1f) & 1;
}



ushort FUN_000104ee(void)

{
  int unaff_s0;
  uint uVar1;
  
  uVar1 = FUN_000104ee();
  return *(ushort *)(unaff_s0 + 0xb6) >> (uVar1 & 0x1f) & 1;
}



uint16_t rc_new_random_rate(rc_sta_stats *rc_ss)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint16_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = (uint)rc_ss->bw_max;
  uVar8 = 0;
  uRam00000000 = uRam00000000 * 0x41c64e6d + 0x3039;
  uVar3 = (uint)rc_ss->format_mod;
  uVar6 = uRam00000000 >> 0x10;
  uVar5 = (uint16_t)((uVar3 << 0x1b) >> 0x10);
  if (uVar2 != 0) {
    uVar8 = uVar2 - 1 & 0xff;
  }
  uVar1 = (ushort)(uRam00000000 >> 0x10);
  if (uVar3 < 2) {
    uVar3 = (int)(uVar6 & 0x7f) % (int)(((uint)rc_ss->r_idx_max - (uint)rc_ss->r_idx_min) + 1) +
            (uint)rc_ss->r_idx_min;
    uVar2 = uVar3 & 0xff;
    if ((rc_ss->rate_map_l >> (uVar3 & 0x1f) & 1) == 0) {
      uVar2 = (uint)rc_ss->r_idx_max;
    }
    uVar5 = uVar5 | (ushort)uVar2;
    if (uVar2 == 0) {
      uVar5 = uVar5 | 0x400;
    }
    else {
      if ((uVar2 - 1 & 0xff) < 3) {
        uVar5 = uVar5 | uVar1 & 0x400 | (ushort)rc_ss->p_type << 10;
      }
    }
  }
  else {
    if (uVar3 < 4) {
      uVar3 = (uint)rc_ss->r_idx_min;
      if ((uVar3 < 4) && ((int)(uVar6 << 0x14) < 0)) {
        uVar3 = (int)(uVar6 & 0x7f) % (int)((rc_ss->r_idx_max - uVar3) + 1) + uVar3;
        uVar2 = uVar3 & 0xff;
        if ((rc_ss->rate_map_l >> (uVar3 & 0x1f) & 1) == 0) {
          uVar2 = (uint)rc_ss->r_idx_max;
        }
        uVar5 = 0x400;
        if (uVar2 != 0) {
          uVar5 = (ushort)rc_ss->p_type << 10 | uVar1 & 0x400 | (ushort)uVar2;
        }
      }
      else {
        uVar7 = (uint)rc_ss->mcs_max;
        uVar4 = ((int)uVar6 >> 3 & 3U) % (rc_ss->no_ss + 1);
        uVar3 = (uVar6 & 7) % (uVar7 + 1);
        if ((*(byte *)(&rc_ss->retry[6].field_0x6 + uVar4) >> (uVar3 & 0x1f) & 1) != 0) {
          uVar7 = uVar3 & 0xff;
        }
        uVar5 = uVar5 | (ushort)(((int)uVar6 >> 9 & 1U) % (rc_ss->short_gi + 1) << 9) |
                        (ushort)(uVar4 << 3) |
                ((short)((int)((int)uVar6 >> 7 & 3U) % (int)((uVar2 - uVar8) + 1)) + (short)uVar8) *
                0x80 | (ushort)uVar7;
      }
    }
  }
  return uVar5;
}



void rc_update_counters(uint8_t sta_idx,uint32_t attempts,uint32_t failures,_Bool tx_ampdu,
                       _Bool retry_required)

{
  short sVar1;
  int iVar2;
  undefined3 in_register_00002029;
  uint uVar3;
  undefined uVar4;
  int iVar5;
  ushort *puVar6;
  
  uVar3 = CONCAT31(in_register_00002029,sta_idx);
  if (9 < uVar3) {
    return;
  }
  if (*(char *)(uVar3 * 0x1b0 + 0x1a) != -1) {
    iVar2 = *(int *)(uVar3 * 0x1b0 + 0x110);
    if (iVar2 == 0) {
      FUN_000106c4(0,0,0x7ce);
    }
    puVar6 = (ushort *)(iVar2 + 0x80);
    *(short *)(iVar2 + 0xa6) = *(short *)(iVar2 + 0xa6) + 1;
    *(short *)(iVar2 + 0xa4) = *(short *)(iVar2 + 0xa4) + 1;
    do {
      if (attempts == 0) break;
      iVar5 = (uint)*puVar6 * 0xc + iVar2;
      if (failures < 4) {
        *(short *)(iVar5 + 4) = *(short *)(iVar5 + 4) + (short)attempts;
        sVar1 = (short)failures;
        failures = 0;
        *(short *)(iVar5 + 6) = ((short)attempts - sVar1) + *(short *)(iVar5 + 6);
        attempts = 0;
      }
      else {
        *(short *)(iVar5 + 4) = *(short *)(iVar5 + 4) + 4;
        attempts = attempts - 4;
        failures = failures - 4;
      }
      if (*(ushort *)(iVar5 + 4) < *(ushort *)(iVar5 + 6)) {
        FUN_0001072a(0,0,0x7fa);
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != (ushort *)(iVar2 + 0xa0));
    if (*(char *)(iVar2 + 0xae) == '\0') {
      if (*(char *)(iVar2 + 0xac) != '\0') {
        *(char *)(iVar2 + 0xac) = *(char *)(iVar2 + 0xac) + -1;
        return;
      }
      uVar4 = 1;
    }
    else {
      if (*(char *)(iVar2 + 0xae) != '\x02') {
        return;
      }
      if ((*(byte *)(uVar3 * 0x1b0 + 0x11a) & 1) != 0) {
        return;
      }
      uVar4 = 3;
    }
    *(undefined *)(iVar2 + 0xae) = uVar4;
  }
  return;
}



void FUN_000106c4(void)

{
  short sVar1;
  int unaff_s0;
  int unaff_s1;
  undefined uVar2;
  int iVar3;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  ushort *puVar4;
  
  FUN_000106c4();
  puVar4 = (ushort *)(unaff_s0 + 0x80);
  *(short *)(unaff_s0 + 0xa6) = *(short *)(unaff_s0 + 0xa6) + 1;
  *(short *)(unaff_s0 + 0xa4) = *(short *)(unaff_s0 + 0xa4) + 1;
  do {
    if (unaff_s1 == 0) break;
    iVar3 = (uint)*puVar4 * 0xc + unaff_s0;
    if (unaff_s4 < 4) {
      *(short *)(iVar3 + 4) = *(short *)(iVar3 + 4) + (short)unaff_s1;
      sVar1 = (short)unaff_s4;
      unaff_s4 = 0;
      *(short *)(iVar3 + 6) = ((short)unaff_s1 - sVar1) + *(short *)(iVar3 + 6);
      unaff_s1 = 0;
    }
    else {
      *(short *)(iVar3 + 4) = *(short *)(iVar3 + 4) + 4;
      unaff_s1 = unaff_s1 + -4;
      unaff_s4 = unaff_s4 - 4;
    }
    if (*(ushort *)(iVar3 + 4) < *(ushort *)(iVar3 + 6)) {
      FUN_0001072a(0,0,0x7fa);
    }
    puVar4 = puVar4 + 4;
  } while (puVar4 != (ushort *)(unaff_s0 + 0xa0));
  if (*(char *)(unaff_s0 + 0xae) == '\0') {
    if (*(char *)(unaff_s0 + 0xac) != '\0') {
      *(char *)(unaff_s0 + 0xac) = *(char *)(unaff_s0 + 0xac) + -1;
      return;
    }
    uVar2 = 1;
  }
  else {
    if (*(char *)(unaff_s0 + 0xae) != '\x02') {
      return;
    }
    if ((*(byte *)(unaff_s3 * 0x1b0 + unaff_s2 + 0x11a) & 1) != 0) {
      return;
    }
    uVar2 = 3;
  }
  *(undefined *)(unaff_s0 + 0xae) = uVar2;
  return;
}



void FUN_0001072a(undefined4 param_1)

{
  short sVar1;
  int unaff_s0;
  int unaff_s1;
  undefined uVar2;
  int iVar3;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  ushort *unaff_s6;
  int unaff_s7;
  uint unaff_s8;
  
  do {
    FUN_0001072a(param_1);
    do {
      unaff_s5 = unaff_s5 + 4;
      if ((unaff_s5 == unaff_s6) || (unaff_s1 == 0)) {
        if (*(char *)(unaff_s0 + 0xae) == '\0') {
          if (*(char *)(unaff_s0 + 0xac) != '\0') {
            *(char *)(unaff_s0 + 0xac) = *(char *)(unaff_s0 + 0xac) + -1;
            return;
          }
          uVar2 = 1;
        }
        else {
          if (*(char *)(unaff_s0 + 0xae) != '\x02') {
            return;
          }
          if ((*(byte *)(unaff_s3 * 0x1b0 + unaff_s2 + 0x11a) & 1) != 0) {
            return;
          }
          uVar2 = 3;
        }
        *(undefined *)(unaff_s0 + 0xae) = uVar2;
        return;
      }
      iVar3 = (uint)*unaff_s5 * unaff_s7 + unaff_s0;
      if (unaff_s8 < unaff_s4) {
        *(short *)(iVar3 + 4) = *(short *)(iVar3 + 4) + 4;
        unaff_s1 = unaff_s1 + -4;
        unaff_s4 = unaff_s4 - 4;
      }
      else {
        *(short *)(iVar3 + 4) = *(short *)(iVar3 + 4) + (short)unaff_s1;
        sVar1 = (short)unaff_s4;
        unaff_s4 = 0;
        *(short *)(iVar3 + 6) = ((short)unaff_s1 - sVar1) + *(short *)(iVar3 + 6);
        unaff_s1 = 0;
      }
    } while (*(ushort *)(iVar3 + 6) <= *(ushort *)(iVar3 + 4));
    param_1 = 0x7fa;
  } while( true );
}



uint32_t rc_get_duration(uint16_t rate_config)

{
  undefined2 in_register_0000202a;
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = CONCAT22(in_register_0000202a,rate_config);
  uVar1 = _L0();
  uVar4 = iVar3 >> 0xb & 7;
  if (uVar4 < 2) {
    if (uVar1 < 4) {
      uVar2 = *(uint32_t *)((iVar3 >> 10 & 1U | uVar1 << 1) * 4);
    }
    else {
      uVar2 = *(uint32_t *)((uVar1 - 4) * 4);
    }
  }
  else {
    uVar2 = 0;
    if (uVar4 < 4) {
      iVar3 = FUN_000107d8(iVar3);
      uVar2 = *(uint *)((uVar1 << 3 | (rate_config & 0x200) >> 9 | (rate_config & 0x180) >> 6) * 4)
              / (iVar3 + 1U);
    }
  }
  return uVar2;
}



uint _L0(void)

{
  uint unaff_s0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_s2;
  
  uVar1 = _L0();
  if ((unaff_s2 & 7) < 2) {
    if (uVar1 < 4) {
      uVar2 = *(uint *)(((int)unaff_s0 >> 10 & 1U | uVar1 << 1) * 4);
    }
    else {
      uVar2 = *(uint *)((uVar1 - 4) * 4);
    }
  }
  else {
    uVar2 = 0;
    if ((unaff_s2 & 7) < 4) {
      iVar3 = FUN_000107d8();
      uVar2 = *(uint *)((uVar1 << 3 | unaff_s0 >> 9 & 1 | unaff_s0 >> 6 & 6) * 4) / (iVar3 + 1U);
    }
  }
  return uVar2;
}



uint FUN_000107d8(void)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  
  iVar1 = FUN_000107d8();
  return *(uint *)((unaff_s1 << 3 | unaff_s0 >> 9 & 1 | unaff_s0 >> 6 & 6) * 4) / (iVar1 + 1U);
}



void rc_update_bw_nss_max(uint8_t sta_idx,uint8_t bw_max,uint8_t nss_max)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined3 in_register_00002029;
  uint uVar5;
  undefined3 in_register_0000202d;
  undefined3 in_register_00002031;
  undefined4 *puVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack72;
  uint32_t cur_tp [10];
  
  iVar2 = *(int *)(CONCAT31(in_register_00002029,sta_idx) * 0x1b0 + 0x110);
  if (iVar2 == 0) {
    FUN_0001088c(0,0,0x969);
  }
  if (((uint)*(byte *)(iVar2 + 0xbb) != CONCAT31(in_register_0000202d,bw_max)) ||
     ((uint)*(byte *)(iVar2 + 0xbc) != CONCAT31(in_register_00002031,nss_max))) {
    *(uint8_t *)(iVar2 + 0xbb) = bw_max;
    if (3 < CONCAT31(in_register_0000202d,bw_max)) {
      FUN_000108c4(0,0,0x96f);
    }
    *(uint8_t *)(iVar2 + 0xbc) = nss_max;
    if (7 < CONCAT31(in_register_00002031,nss_max)) {
      FUN_000108ec(0,0,0x971);
    }
    if (*(short *)(iVar2 + 0xc6) == -1) {
      uVar4 = FUN_00010902(iVar2);
      *(undefined2 *)(iVar2 + 10) = uVar4;
      uVar4 = FUN_00010910(iVar2);
      uVar3 = 1;
      *(undefined2 *)((*(ushort *)(iVar2 + 0xc0) - 1) * 0xc + iVar2 + 10) = uVar4;
_L0:
      uVar1 = *(ushort *)(iVar2 + 0xc0);
      if ((int)uVar3 < (int)(uVar1 - 1)) {
        do {
          uVar5 = FUN_0001098a(iVar2);
          uVar9 = 0;
          puVar7 = (ushort *)(iVar2 + 10);
          while( true ) {
            if (*(ushort *)(iVar2 + 0xc0) <= uVar9) {
              iVar10 = uVar3 * 0xc;
              uVar3 = uVar3 + 1 & 0xffff;
              *(short *)(iVar10 + iVar2 + 10) = (short)uVar5;
              goto _L0;
            }
            if (*puVar7 == uVar5) break;
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 6;
          }
        } while( true );
      }
      puVar8 = (undefined2 *)(iVar2 + 8);
      uVar3 = 0;
      puVar6 = &uStack72;
      while (uVar1 != uVar3) {
        *(undefined *)(puVar8 + 3) = 0;
        *(undefined *)((int)puVar8 + 7) = 1;
        *puVar8 = 0;
        *(undefined *)((int)puVar8 + 5) = 0;
        *puVar6 = 0;
        uVar3 = uVar3 + 1 & 0xffff;
        puVar8 = puVar8 + 6;
        puVar6 = puVar6 + 1;
      }
      FUN_0001094e(iVar2,&uStack72);
      FUN_0001095a(iVar2,&uStack72);
      iVar2 = CONCAT31(in_register_00002029,sta_idx) * 0x1b0;
      *(byte *)(iVar2 + 0x11a) = *(byte *)(iVar2 + 0x11a) | 1;
    }
  }
  return;
}



void FUN_0001088c(void)

{
  ushort uVar1;
  int unaff_s0;
  uint unaff_s1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  
  FUN_0001088c();
  if ((*(byte *)(unaff_s0 + 0xbb) != unaff_s4) || (*(byte *)(unaff_s0 + 0xbc) != unaff_s1)) {
    *(char *)(unaff_s0 + 0xbb) = (char)unaff_s4;
    if (3 < unaff_s4) {
      FUN_000108c4(0,0,0x96f);
    }
    *(char *)(unaff_s0 + 0xbc) = (char)unaff_s1;
    if (7 < unaff_s1) {
      FUN_000108ec(0,0,0x971);
    }
    if (*(short *)(unaff_s0 + 0xc6) == -1) {
      uVar3 = FUN_00010902();
      *(undefined2 *)(unaff_s0 + 10) = uVar3;
      uVar3 = FUN_00010910();
      uVar2 = 1;
      *(undefined2 *)((*(ushort *)(unaff_s0 + 0xc0) - 1) * 0xc + unaff_s0 + 10) = uVar3;
_L0:
      uVar1 = *(ushort *)(unaff_s0 + 0xc0);
      if ((int)uVar2 < (int)(uVar1 - 1)) {
        do {
          uVar5 = FUN_0001098a();
          uVar9 = 0;
          puVar7 = (ushort *)(unaff_s0 + 10);
          while( true ) {
            if (*(ushort *)(unaff_s0 + 0xc0) <= uVar9) {
              iVar4 = uVar2 * 0xc;
              uVar2 = uVar2 + 1 & 0xffff;
              *(short *)(iVar4 + unaff_s0 + 10) = (short)uVar5;
              goto _L0;
            }
            if (*puVar7 == uVar5) break;
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 6;
          }
        } while( true );
      }
      puVar8 = (undefined2 *)(unaff_s0 + 8);
      uVar2 = 0;
      puVar6 = (undefined4 *)&stack0x00000008;
      while (uVar1 != uVar2) {
        *(undefined *)(puVar8 + 3) = 0;
        *(undefined *)((int)puVar8 + 7) = 1;
        *puVar8 = 0;
        *(undefined *)((int)puVar8 + 5) = 0;
        *puVar6 = 0;
        uVar2 = uVar2 + 1 & 0xffff;
        puVar8 = puVar8 + 6;
        puVar6 = puVar6 + 1;
      }
      FUN_0001094e(&stack0x00000008);
      FUN_0001095a(&stack0x00000008);
      iVar4 = unaff_s3 * 0x1b0 + unaff_s2;
      *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 1;
    }
  }
  return;
}



void FUN_000108c4(void)

{
  ushort uVar1;
  int unaff_s0;
  uint unaff_s1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s3;
  
  FUN_000108c4();
  *(char *)(unaff_s0 + 0xbc) = (char)unaff_s1;
  if (7 < unaff_s1) {
    FUN_000108ec(0,0,0x971);
  }
  if (*(short *)(unaff_s0 + 0xc6) == -1) {
    uVar3 = FUN_00010902();
    *(undefined2 *)(unaff_s0 + 10) = uVar3;
    uVar3 = FUN_00010910();
    uVar2 = 1;
    *(undefined2 *)((*(ushort *)(unaff_s0 + 0xc0) - 1) * 0xc + unaff_s0 + 10) = uVar3;
_L0:
    uVar1 = *(ushort *)(unaff_s0 + 0xc0);
    if ((int)uVar2 < (int)(uVar1 - 1)) {
      do {
        uVar5 = FUN_0001098a();
        uVar9 = 0;
        puVar7 = (ushort *)(unaff_s0 + 10);
        while( true ) {
          if (*(ushort *)(unaff_s0 + 0xc0) <= uVar9) {
            iVar4 = uVar2 * 0xc;
            uVar2 = uVar2 + 1 & 0xffff;
            *(short *)(iVar4 + unaff_s0 + 10) = (short)uVar5;
            goto _L0;
          }
          if (*puVar7 == uVar5) break;
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 6;
        }
      } while( true );
    }
    puVar8 = (undefined2 *)(unaff_s0 + 8);
    uVar2 = 0;
    puVar6 = (undefined4 *)&stack0x00000008;
    while (uVar1 != uVar2) {
      *(undefined *)(puVar8 + 3) = 0;
      *(undefined *)((int)puVar8 + 7) = 1;
      *puVar8 = 0;
      *(undefined *)((int)puVar8 + 5) = 0;
      *puVar6 = 0;
      uVar2 = uVar2 + 1 & 0xffff;
      puVar8 = puVar8 + 6;
      puVar6 = puVar6 + 1;
    }
    FUN_0001094e(&stack0x00000008);
    FUN_0001095a(&stack0x00000008);
    iVar4 = unaff_s3 * 0x1b0 + unaff_s2;
    *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 1;
  }
  return;
}



void FUN_000108ec(void)

{
  ushort uVar1;
  int unaff_s0;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s3;
  
  FUN_000108ec();
  if (*(short *)(unaff_s0 + 0xc6) == -1) {
    uVar3 = FUN_00010902();
    *(undefined2 *)(unaff_s0 + 10) = uVar3;
    uVar3 = FUN_00010910();
    uVar2 = 1;
    *(undefined2 *)((*(ushort *)(unaff_s0 + 0xc0) - 1) * 0xc + unaff_s0 + 10) = uVar3;
_L0:
    uVar1 = *(ushort *)(unaff_s0 + 0xc0);
    if ((int)uVar2 < (int)(uVar1 - 1)) {
      do {
        uVar5 = FUN_0001098a();
        uVar9 = 0;
        puVar7 = (ushort *)(unaff_s0 + 10);
        while( true ) {
          if (*(ushort *)(unaff_s0 + 0xc0) <= uVar9) {
            iVar4 = uVar2 * 0xc;
            uVar2 = uVar2 + 1 & 0xffff;
            *(short *)(iVar4 + unaff_s0 + 10) = (short)uVar5;
            goto _L0;
          }
          if (*puVar7 == uVar5) break;
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 6;
        }
      } while( true );
    }
    puVar8 = (undefined2 *)(unaff_s0 + 8);
    uVar2 = 0;
    puVar6 = (undefined4 *)&stack0x00000008;
    while (uVar1 != uVar2) {
      *(undefined *)(puVar8 + 3) = 0;
      *(undefined *)((int)puVar8 + 7) = 1;
      *puVar8 = 0;
      *(undefined *)((int)puVar8 + 5) = 0;
      *puVar6 = 0;
      uVar2 = uVar2 + 1 & 0xffff;
      puVar8 = puVar8 + 6;
      puVar6 = puVar6 + 1;
    }
    FUN_0001094e(&stack0x00000008);
    FUN_0001095a(&stack0x00000008);
    iVar4 = unaff_s3 * 0x1b0 + unaff_s2;
    *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 1;
  }
  return;
}



void FUN_00010902(void)

{
  ushort uVar1;
  int unaff_s0;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s3;
  
  uVar3 = FUN_00010902();
  *(undefined2 *)(unaff_s0 + 10) = uVar3;
  uVar3 = FUN_00010910();
  uVar2 = 1;
  *(undefined2 *)((*(ushort *)(unaff_s0 + 0xc0) - 1) * 0xc + unaff_s0 + 10) = uVar3;
_L0:
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  if ((int)(uVar1 - 1) <= (int)uVar2) {
    puVar8 = (undefined2 *)(unaff_s0 + 8);
    uVar2 = 0;
    puVar6 = (undefined4 *)&stack0x00000008;
    while (uVar1 != uVar2) {
      *(undefined *)(puVar8 + 3) = 0;
      *(undefined *)((int)puVar8 + 7) = 1;
      *puVar8 = 0;
      *(undefined *)((int)puVar8 + 5) = 0;
      *puVar6 = 0;
      uVar2 = uVar2 + 1 & 0xffff;
      puVar8 = puVar8 + 6;
      puVar6 = puVar6 + 1;
    }
    FUN_0001094e(&stack0x00000008);
    FUN_0001095a(&stack0x00000008);
    iVar4 = unaff_s3 * 0x1b0 + unaff_s2;
    *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 1;
    return;
  }
  do {
    uVar5 = FUN_0001098a();
    uVar9 = 0;
    puVar7 = (ushort *)(unaff_s0 + 10);
    while( true ) {
      if (*(ushort *)(unaff_s0 + 0xc0) <= uVar9) {
        iVar4 = uVar2 * 0xc;
        uVar2 = uVar2 + 1 & 0xffff;
        *(short *)(iVar4 + unaff_s0 + 10) = (short)uVar5;
        goto _L0;
      }
      if (*puVar7 == uVar5) break;
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 6;
    }
  } while( true );
}



void FUN_00010910(void)

{
  ushort uVar1;
  int unaff_s0;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s3;
  
  uVar3 = FUN_00010910();
  uVar2 = 1;
  *(undefined2 *)((*(ushort *)(unaff_s0 + 0xc0) - 1) * 0xc + unaff_s0 + 10) = uVar3;
_L0:
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  if ((int)(uVar1 - 1) <= (int)uVar2) {
    puVar8 = (undefined2 *)(unaff_s0 + 8);
    uVar2 = 0;
    puVar6 = (undefined4 *)&stack0x00000008;
    while (uVar1 != uVar2) {
      *(undefined *)(puVar8 + 3) = 0;
      *(undefined *)((int)puVar8 + 7) = 1;
      *puVar8 = 0;
      *(undefined *)((int)puVar8 + 5) = 0;
      *puVar6 = 0;
      uVar2 = uVar2 + 1 & 0xffff;
      puVar8 = puVar8 + 6;
      puVar6 = puVar6 + 1;
    }
    FUN_0001094e(&stack0x00000008);
    FUN_0001095a(&stack0x00000008);
    iVar4 = unaff_s3 * 0x1b0 + unaff_s2;
    *(byte *)(iVar4 + 0x11a) = *(byte *)(iVar4 + 0x11a) | 1;
    return;
  }
  do {
    uVar5 = FUN_0001098a();
    uVar9 = 0;
    puVar7 = (ushort *)(unaff_s0 + 10);
    while( true ) {
      if (*(ushort *)(unaff_s0 + 0xc0) <= uVar9) {
        iVar4 = uVar2 * 0xc;
        uVar2 = uVar2 + 1 & 0xffff;
        *(short *)(iVar4 + unaff_s0 + 10) = (short)uVar5;
        goto _L0;
      }
      if (*puVar7 == uVar5) break;
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 6;
    }
  } while( true );
}



void FUN_0001094e(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_0001094e();
  FUN_0001095a();
  iVar1 = unaff_s3 * 0x1b0 + unaff_s2;
  *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 1;
  return;
}



void FUN_0001095a(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_0001095a();
  iVar1 = unaff_s3 * 0x1b0 + unaff_s2;
  *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 1;
  return;
}



void FUN_0001098a(void)

{
  ushort uVar1;
  int unaff_s0;
  uint unaff_s1;
  uint uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
code_r0x0001098a:
  do {
    uVar2 = FUN_0001098a();
    uVar6 = 0;
    puVar4 = (ushort *)(unaff_s0 + 10);
    while (uVar6 < *(ushort *)(unaff_s0 + 0xc0)) {
      if (*puVar4 == uVar2) goto code_r0x0001098a;
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 6;
    }
    iVar7 = unaff_s1 * unaff_s4;
    unaff_s1 = unaff_s1 + 1 & 0xffff;
    *(short *)(iVar7 + unaff_s0 + 10) = (short)uVar2;
    uVar1 = *(ushort *)(unaff_s0 + 0xc0);
    if ((int)(uVar1 - 1) <= (int)unaff_s1) {
      puVar5 = (undefined2 *)(unaff_s0 + 8);
      uVar2 = 0;
      puVar3 = (undefined4 *)&stack0x00000008;
      while (uVar1 != uVar2) {
        *(undefined *)(puVar5 + 3) = 0;
        *(undefined *)((int)puVar5 + 7) = 1;
        *puVar5 = 0;
        *(undefined *)((int)puVar5 + 5) = 0;
        *puVar3 = 0;
        uVar2 = uVar2 + 1 & 0xffff;
        puVar5 = puVar5 + 6;
        puVar3 = puVar3 + 1;
      }
      FUN_0001094e(&stack0x00000008);
      FUN_0001095a(&stack0x00000008);
      iVar7 = unaff_s3 * 0x1b0 + unaff_s2;
      *(byte *)(iVar7 + 0x11a) = *(byte *)(iVar7 + 0x11a) | 1;
      return;
    }
  } while( true );
}



void rc_update_preamble_type(uint8_t sta_idx,uint8_t preamble_type)

{
  int iVar1;
  int iVar2;
  undefined3 in_register_00002029;
  int iVar3;
  undefined3 in_register_0000202d;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uStack88;
  uint32_t cur_tp [10];
  
  iVar1 = *(int *)(CONCAT31(in_register_00002029,sta_idx) * 0x1b0 + 0x110);
  if (iVar1 == 0) {
    FUN_00010a2a(0,0,0x9ae);
  }
  if ((uint)*(byte *)(iVar1 + 0xbe) != CONCAT31(in_register_0000202d,preamble_type)) {
    *(uint8_t *)(iVar1 + 0xbe) = preamble_type;
    if ((*(short *)(iVar1 + 0xc6) == -1) && (CONCAT31(in_register_0000202d,preamble_type) != 0)) {
      uVar6 = 0;
      while (uVar6 < *(ushort *)(iVar1 + 0xc0)) {
        iVar2 = uVar6 * 0xc + iVar1;
        uVar7 = (uint)*(ushort *)(iVar2 + 10);
        iVar3 = FUN_00010aaa(uVar7);
        if (iVar3 != 0) {
          uVar7 = uVar7 | 0x400;
          do {
            uVar5 = 0;
            puVar4 = (ushort *)(iVar1 + 10);
            while( true ) {
              if (*(ushort *)(iVar1 + 0xc0) <= uVar5) goto _L0;
              if (*puVar4 == uVar7) break;
              uVar5 = uVar5 + 1;
              puVar4 = puVar4 + 6;
            }
            uVar7 = FUN_00010b00(iVar1);
          } while( true );
        }
_L0:
        *(undefined *)(iVar2 + 0xe) = 0;
        *(undefined *)(iVar2 + 0xf) = 1;
        *(short *)(iVar2 + 10) = (short)uVar7;
        *(undefined2 *)(iVar2 + 8) = 0;
        *(undefined *)(iVar2 + 0xd) = 0;
        (&uStack88)[uVar6] = 0;
        uVar6 = uVar6 + 1 & 0xffff;
      }
      FUN_00010a5e(iVar1,&uStack88);
      FUN_00010a6a(iVar1,&uStack88);
      iVar1 = CONCAT31(in_register_00002029,sta_idx) * 0x1b0;
      *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 1;
    }
  }
  return;
}



void FUN_00010a2a(void)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_s4;
  int unaff_s5;
  
  FUN_00010a2a();
  if (*(byte *)(unaff_s0 + 0xbe) != unaff_s1) {
    *(char *)(unaff_s0 + 0xbe) = (char)unaff_s1;
    if ((*(short *)(unaff_s0 + 0xc6) == -1) && (unaff_s1 != 0)) {
      uVar5 = 0;
      while (uVar5 < *(ushort *)(unaff_s0 + 0xc0)) {
        iVar1 = uVar5 * 0xc + unaff_s0;
        uVar6 = (uint)*(ushort *)(iVar1 + 10);
        iVar2 = FUN_00010aaa(uVar6);
        if (iVar2 != 0) {
          uVar6 = uVar6 | 0x400;
          do {
            uVar4 = 0;
            puVar3 = (ushort *)(unaff_s0 + 10);
            while( true ) {
              if (*(ushort *)(unaff_s0 + 0xc0) <= uVar4) goto _L0;
              if (*puVar3 == uVar6) break;
              uVar4 = uVar4 + 1;
              puVar3 = puVar3 + 6;
            }
            uVar6 = FUN_00010b00();
          } while( true );
        }
_L0:
        *(undefined *)(iVar1 + 0xe) = 0;
        *(undefined *)(iVar1 + 0xf) = 1;
        *(short *)(iVar1 + 10) = (short)uVar6;
        *(undefined2 *)(iVar1 + 8) = 0;
        *(undefined *)(iVar1 + 0xd) = 0;
        *(undefined4 *)(&stack0x00000008 + uVar5 * 4) = 0;
        uVar5 = uVar5 + 1 & 0xffff;
      }
      FUN_00010a5e(&stack0x00000008);
      FUN_00010a6a(&stack0x00000008);
      iVar1 = unaff_s5 * 0x1b0 + unaff_s4;
      *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 1;
    }
  }
  return;
}



void FUN_00010a5e(void)

{
  int iVar1;
  int unaff_s4;
  int unaff_s5;
  
  FUN_00010a5e();
  FUN_00010a6a(&stack0x00000008);
  iVar1 = unaff_s5 * 0x1b0 + unaff_s4;
  *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 1;
  return;
}



void FUN_00010a6a(void)

{
  int iVar1;
  int unaff_s4;
  int unaff_s5;
  
  FUN_00010a6a();
  iVar1 = unaff_s5 * 0x1b0 + unaff_s4;
  *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 1;
  return;
}



void FUN_00010aaa(uint param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  uint unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  undefined unaff_s7;
  
  while (iVar1 = FUN_00010aaa(param_1), iVar1 == 0) {
_L0:
    *(undefined *)(unaff_s1 + 0xe) = 0;
    *(undefined *)(unaff_s1 + 0xf) = unaff_s7;
    *(short *)(unaff_s1 + 10) = (short)unaff_s3;
    *(undefined2 *)(unaff_s1 + 8) = 0;
    *(undefined *)(unaff_s1 + 0xd) = 0;
    *(undefined4 *)(&stack0x00000008 + unaff_s2 * 4) = 0;
    unaff_s2 = unaff_s2 + 1 & 0xffff;
    if (*(ushort *)(unaff_s0 + 0xc0) <= unaff_s2) {
      FUN_00010a5e(&stack0x00000008);
      FUN_00010a6a(&stack0x00000008);
      iVar1 = unaff_s5 * 0x1b0 + unaff_s4;
      *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 1;
      return;
    }
    unaff_s1 = unaff_s2 * unaff_s6 + unaff_s0;
    param_1 = (uint)*(ushort *)(unaff_s1 + 10);
    unaff_s3 = param_1;
  }
  unaff_s3 = unaff_s3 | 0x400;
  do {
    uVar3 = 0;
    puVar2 = (ushort *)(unaff_s0 + 10);
    while( true ) {
      if (*(ushort *)(unaff_s0 + 0xc0) <= uVar3) goto _L0;
      if (*puVar2 == unaff_s3) break;
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 6;
    }
    unaff_s3 = FUN_00010b00();
  } while( true );
}



void FUN_00010b00(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  undefined unaff_s7;
  
code_r0x00010b00:
  uVar2 = FUN_00010b00();
  do {
    uVar4 = 0;
    puVar3 = (ushort *)(unaff_s0 + 10);
    while (uVar4 < *(ushort *)(unaff_s0 + 0xc0)) {
      if (*puVar3 == uVar2) goto code_r0x00010b00;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 6;
    }
    do {
      *(undefined *)(unaff_s1 + 0xe) = 0;
      *(undefined *)(unaff_s1 + 0xf) = unaff_s7;
      *(short *)(unaff_s1 + 10) = (short)uVar2;
      *(undefined2 *)(unaff_s1 + 8) = 0;
      *(undefined *)(unaff_s1 + 0xd) = 0;
      *(undefined4 *)(&stack0x00000008 + unaff_s2 * 4) = 0;
      unaff_s2 = unaff_s2 + 1 & 0xffff;
      if (*(ushort *)(unaff_s0 + 0xc0) <= unaff_s2) {
        FUN_00010a5e(&stack0x00000008);
        FUN_00010a6a(&stack0x00000008);
        iVar1 = unaff_s5 * 0x1b0 + unaff_s4;
        *(byte *)(iVar1 + 0x11a) = *(byte *)(iVar1 + 0x11a) | 1;
        return;
      }
      unaff_s1 = unaff_s2 * unaff_s6 + unaff_s0;
      uVar2 = (uint)*(ushort *)(unaff_s1 + 10);
      iVar1 = FUN_00010aaa(uVar2);
    } while (iVar1 == 0);
    uVar2 = uVar2 | 0x400;
  } while( true );
}



void rc_init_bcmc_rate(sta_info_tag *sta_entry,uint8_t basic_rate_idx)

{
  undefined3 in_register_0000202d;
  txl_buffer_control *ptVar1;
  uint uVar2;
  
  ptVar1 = (sta_entry->pol_tbl).buf_ctrl;
  uVar2 = 0;
  if (CONCAT31(in_register_0000202d,basic_rate_idx) < 4) {
    uVar2 = SEXT24((short)((sta_entry->pol_tbl).ppdu_tx_cfg & 0x400));
  }
  uVar2 = CONCAT31(in_register_0000202d,basic_rate_idx) | uVar2 | 0x20000000;
  *(uint *)&(ptVar1->field_0).field_0x14 = uVar2;
  *(uint *)&(ptVar1->field_0).field_0x18 = uVar2;
  *(uint *)&(ptVar1->field_0).field_0x1c = uVar2;
  *(uint *)&(ptVar1->field_0).field_0x20 = uVar2;
  return;
}



_Bool rc_check_fixed_rate_config(rc_sta_stats *rc_ss,uint16_t fixed_rate_config)

{
  undefined2 in_register_0000202e;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = CONCAT22(in_register_0000202e,fixed_rate_config);
  uVar3 = (uint)rc_ss->format_mod;
  uVar2 = (fixed_rate_config & 0x3800) >> 0xb;
  if (uVar3 < uVar2) {
    return false;
  }
  if (uVar3 == 4) {
    if (uVar2 != 4) {
      return false;
    }
_L0:
    if ((fixed_rate_config & 0x3000) == 0) {
_L0:
      if (((iVar1 >> 10 & 1U) == 0) && (rc_ss->p_type == '\x01')) {
        return false;
      }
      goto _L0;
    }
  }
  else {
    if (1 < (uVar3 - 2 & 0xff)) goto _L0;
    if ((fixed_rate_config & 0x3000) == 0) {
      if (3 < rc_ss->r_idx_min) {
        return false;
      }
      goto _L0;
    }
  }
  if (((((fixed_rate_config & 0x200) != 0) && (rc_ss->short_gi == '\0')) ||
      ((uint)rc_ss->bw_max < (iVar1 >> 7 & 3U))) ||
     (uVar2 = FUN_00010b7c(iVar1), rc_ss->no_ss < uVar2)) {
    return false;
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_00010b7c(void)

{
  int unaff_s0;
  uint uVar1;
  
  uVar1 = FUN_00010b7c();
  if (*(byte *)(unaff_s0 + 0xbc) < uVar1) {
    return 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



uint32_t rc_calc_tp(rc_sta_stats *rc_ss,uint8_t sample_idx)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint32_t uVar5;
  undefined3 in_register_0000202d;
  uint8_t *puVar6;
  
  puVar6 = &rc_ss->rate_stats[CONCAT31(in_register_0000202d,sample_idx) + -1].sample_skipped;
  uVar2 = (uint)*(ushort *)(puVar6 + 8);
  if (uVar2 < 0x1999) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(puVar6 + 10);
    uVar3 = 0;
    iVar4 = _LVL303(uVar1);
    if (iVar4 == 0) {
      uVar3 = 0x35390 / *(ushort *)((int)&rc_ss->avg_ampdu_len + 2);
    }
    iVar4 = FUN_00010c20(uVar1);
    uVar5 = ((uVar2 * 1000) / (iVar4 + uVar3)) * 1000000 >> 0x10;
  }
  return uVar5;
}



uint _LVL303(void)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  int unaff_s2;
  
  iVar1 = _LVL303();
  if (iVar1 == 0) {
    unaff_s1 = 0x35390 / *(ushort *)(unaff_s2 + 0xaa);
  }
  iVar1 = FUN_00010c20();
  return ((uint)(unaff_s0 * 1000) / (iVar1 + unaff_s1)) * 1000000 >> 0x10;
}



uint FUN_00010c20(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00010c20();
  return ((uint)(unaff_s0 * 1000) / (uint)(iVar1 + unaff_s1)) * 1000000 >> 0x10;
}



_Bool rc_update_stats(rc_sta_stats *rc_ss,_Bool init)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined3 in_register_0000202d;
  rc_rate_stats *prVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  ushort uVar11;
  uint16_t uVar12;
  uint8_t *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  uint16_t *puVar14;
  uint16_t *puVar15;
  uint uVar16;
  char cVar17;
  uint16_t auStack148 [2];
  uint16_t new_rate_cfg_array [6];
  step old_retry [4];
  uint32_t cur_tp [10];
  
  iVar3 = CONCAT31(in_register_0000202d,init);
  _L0(new_rate_cfg_array + 4,rc_ss->retry,0x20);
  if (rc_ss->ampdu_packets != 0) {
    uVar2 = rc_ss->ampdu_len;
    *(undefined4 *)&rc_ss->ampdu_len = 0;
    rc_ss->avg_ampdu_len =
         ((int)((uint)uVar2 << 0x10) / (int)(uint)rc_ss->ampdu_packets) * 0x20 +
         rc_ss->avg_ampdu_len * 0x60 >> 7;
  }
  uVar2 = rc_ss->no_samples;
  puVar8 = (undefined4 *)&old_retry[3].idx;
  rc_ss->sample_slow = '\0';
  puVar13 = &rc_ss->rate_stats[0].n_retry;
  uVar10 = 0;
  puVar9 = puVar8;
  while (uVar2 != uVar10) {
    *puVar9 = 0;
    *puVar13 = '\0';
    puVar13[1] = '\x01';
    uVar10 = uVar10 + 1 & 0xffff;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 0xc;
  }
  uVar12 = rc_ss->fixed_rate_cfg;
  uVar16 = 0;
  if (uVar12 == 0xffff) {
    while (uVar16 < rc_ss->no_samples) {
      FUN_00010d32(rc_ss->rate_stats + uVar16);
      uVar5 = FUN_00010d40(rc_ss,uVar16 & 0xff);
      *(undefined4 *)(&old_retry[3].idx + uVar16 * 2) = uVar5;
      uVar16 = uVar16 + 1 & 0xffff;
    }
    FUN_00010d68(rc_ss,puVar8);
    FUN_00010d74(rc_ss,puVar8);
    if (iVar3 == 0) {
      uVar2 = rc_ss->no_samples;
      if (9 < uVar2) {
        cVar17 = '\0';
        _L0(auStack148,0xffffffff,0xc);
        do {
          if ((byte)(cVar17 - 1) < 5) {
            UNRECOVERED_JUMPTABLE = *(code **)((uint)(byte)(cVar17 - 1) * 4);
                    // WARNING: Could not emulate address calculation at 0x00010e06
                    // WARNING: Treating indirect jump as call
            uVar4 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
            return (_Bool)uVar4;
          }
          auStack148[0] = FUN_00010e0c(rc_ss);
          cVar17 = cVar17 + '\x01';
        } while (cVar17 != '\x06');
        uVar2 = rc_ss->no_samples;
        uVar16 = 1;
        uVar10 = 0;
        while (uVar16 < uVar2) {
          puVar13 = &rc_ss->rate_stats[uVar16 - 1].sample_skipped;
          if ((((*(short *)(puVar13 + 8) < 0) && (puVar13[0xc] < 0xb)) ||
              (rc_ss->retry[0].idx == uVar16)) ||
             (((rc_ss->retry[1].idx == uVar16 || (rc_ss->retry[2].idx == uVar16)) || (5 < uVar10))))
          {
            uVar16 = uVar16 + 1 & 0xffff;
          }
          else {
            uVar12 = auStack148[uVar10];
            if (uVar12 != 0xffff) {
              uVar6 = 0;
              puVar15 = &rc_ss->rate_stats[0].rate_config;
              while (uVar6 < uVar2) {
                if (*puVar15 == uVar12) goto _L0;
                uVar6 = uVar6 + 1;
                puVar15 = puVar15 + 6;
              }
              *(uint16_t *)(puVar13 + 10) = uVar12;
              *(undefined2 *)(puVar13 + 8) = 0;
              puVar13[0xd] = '\0';
              uVar16 = uVar16 + 1 & 0xffff;
            }
_L0:
            uVar10 = uVar10 + 1;
          }
          *(undefined2 *)(puVar13 + 4) = 0;
          *(undefined2 *)(puVar13 + 6) = 0;
        }
        *(undefined4 *)rc_ss->rate_stats = 0;
        goto _L0;
      }
      prVar7 = rc_ss->rate_stats;
      uVar11 = 0;
      while (uVar2 != uVar11) {
        uVar11 = uVar11 + 1;
        prVar7->attempts = 0;
        prVar7->success = 0;
        prVar7 = prVar7 + 1;
      }
    }
  }
  else {
    bVar1 = rc_ss->info;
    uVar16 = 0;
    if ((bVar1 & 0x20) != 0) {
      while (uVar16 < uVar10) {
        if (rc_ss->rate_stats[uVar16].rate_config == uVar12) goto _L0;
        uVar16 = uVar16 + 1 & 0xff;
      }
      if (uVar10 == uVar16) {
        uVar16 = uVar16 - 1 & 0xff;
        puVar13 = &rc_ss->rate_stats[uVar16 - 1].sample_skipped;
        *(uint16_t *)(puVar13 + 10) = uVar12;
        *(undefined2 *)(puVar13 + 8) = 0;
      }
_L0:
      uVar12 = (uint16_t)uVar16;
      rc_ss->retry[0].idx = uVar12;
      rc_ss->retry[1].idx = uVar12;
      rc_ss->retry[2].idx = uVar12;
      rc_ss->retry[0].tp = 0;
      rc_ss->retry[1].tp = 0;
      rc_ss->retry[2].tp = 0;
      prVar7 = rc_ss->rate_stats;
      uVar16 = 0;
      while (uVar10 != uVar16) {
        prVar7->attempts = 0;
        prVar7->success = 0;
        uVar16 = uVar16 + 1 & 0xffff;
        prVar7 = prVar7 + 1;
      }
      rc_ss->info = bVar1 & 0x9f | 0x40;
      iVar3 = 1;
      goto _L0;
    }
    uVar10 = (uint)*(byte *)&rc_ss->retry[0].idx;
    puVar13 = &rc_ss->rate_stats[uVar10 - 1].sample_skipped;
    _LVL322(rc_ss->rate_stats + uVar10);
    *(undefined2 *)(puVar13 + 4) = 0;
    *(undefined2 *)(puVar13 + 6) = 0;
    *(undefined4 *)rc_ss->rate_stats = 0;
  }
  iVar3 = 0;
_L0:
  puVar14 = &rc_ss->retry[0].idx;
  puVar15 = new_rate_cfg_array;
  do {
    if (puVar15[6] != *puVar14) {
      return true;
    }
    puVar14 = puVar14 + 4;
    puVar15 = puVar15 + 4;
  } while (puVar14 != &(rc_ss->max_tp_2_trial).idx);
  return (_Bool)(char)iVar3;
}



int _L0(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int unaff_s0;
  int unaff_s1;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  ushort uVar11;
  undefined2 uVar12;
  undefined *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  short *psVar14;
  uint uVar15;
  char cVar16;
  undefined2 in_stack_0000001c;
  
  _L0();
  if (*(ushort *)(unaff_s0 + 0xa6) != 0) {
    uVar2 = *(ushort *)(unaff_s0 + 0xa4);
    *(undefined4 *)(unaff_s0 + 0xa4) = 0;
    *(uint *)(unaff_s0 + 0xa8) =
         (uint)(((int)((uint)uVar2 << 0x10) / (int)(uint)*(ushort *)(unaff_s0 + 0xa6)) * 0x20 +
               *(int *)(unaff_s0 + 0xa8) * 0x60) >> 7;
  }
  uVar2 = *(ushort *)(unaff_s0 + 0xc0);
  *(undefined *)(unaff_s0 + 0xad) = 0;
  puVar13 = (undefined *)(unaff_s0 + 0xe);
  uVar10 = 0;
  puVar9 = (undefined4 *)&stack0x00000048;
  while (uVar2 != uVar10) {
    *puVar9 = 0;
    *puVar13 = 0;
    puVar13[1] = 1;
    uVar10 = uVar10 + 1 & 0xffff;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 0xc;
  }
  sVar3 = *(short *)(unaff_s0 + 0xc6);
  uVar15 = 0;
  if (sVar3 == -1) {
    while (uVar15 < *(ushort *)(unaff_s0 + 0xc0)) {
      FUN_00010d32(uVar15 * 0xc + 4 + unaff_s0);
      uVar6 = FUN_00010d40(uVar15 & 0xff);
      *(undefined4 *)(&stack0x00000048 + uVar15 * 4) = uVar6;
      uVar15 = uVar15 + 1 & 0xffff;
    }
    FUN_00010d68(&stack0x00000048);
    FUN_00010d74(&stack0x00000048);
    if (unaff_s1 == 0) {
      uVar2 = *(ushort *)(unaff_s0 + 0xc0);
      if (9 < uVar2) {
        cVar16 = '\0';
        _L0(&stack0x0000001c,0xffffffff,0xc);
        do {
          if ((byte)(cVar16 - 1) < 5) {
            UNRECOVERED_JUMPTABLE = *(code **)((uint)(byte)(cVar16 - 1) * 4);
                    // WARNING: Could not emulate address calculation at 0x00010e06
                    // WARNING: Treating indirect jump as call
            iVar4 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
            return iVar4;
          }
          in_stack_0000001c = FUN_00010e0c();
          cVar16 = cVar16 + '\x01';
        } while (cVar16 != '\x06');
        uVar2 = *(ushort *)(unaff_s0 + 0xc0);
        uVar15 = 1;
        uVar10 = 0;
        while (uVar15 < uVar2) {
          iVar4 = uVar15 * 0xc + unaff_s0;
          if ((((*(short *)(iVar4 + 8) < 0) && (*(byte *)(iVar4 + 0xc) < 0xb)) ||
              (*(ushort *)(unaff_s0 + 0x80) == uVar15)) ||
             (((*(ushort *)(unaff_s0 + 0x88) == uVar15 || (*(ushort *)(unaff_s0 + 0x90) == uVar15))
              || (5 < uVar10)))) {
            uVar15 = uVar15 + 1 & 0xffff;
          }
          else {
            sVar3 = *(short *)((int)&stack0x0000001c + uVar10 * 2);
            if (sVar3 != -1) {
              uVar7 = 0;
              psVar14 = (short *)(unaff_s0 + 10);
              while (uVar7 < uVar2) {
                if (*psVar14 == sVar3) goto _L0;
                uVar7 = uVar7 + 1;
                psVar14 = psVar14 + 6;
              }
              *(short *)(iVar4 + 10) = sVar3;
              *(undefined2 *)(iVar4 + 8) = 0;
              *(undefined *)(iVar4 + 0xd) = 0;
              uVar15 = uVar15 + 1 & 0xffff;
            }
_L0:
            uVar10 = uVar10 + 1;
          }
          *(undefined2 *)(iVar4 + 4) = 0;
          *(undefined2 *)(iVar4 + 6) = 0;
        }
        *(undefined4 *)(unaff_s0 + 4) = 0;
        goto _L0;
      }
      puVar8 = (undefined2 *)(unaff_s0 + 4);
      uVar11 = 0;
      while (uVar2 != uVar11) {
        uVar11 = uVar11 + 1;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 6;
      }
    }
  }
  else {
    bVar1 = *(byte *)(unaff_s0 + 0xaf);
    uVar15 = 0;
    if ((bVar1 & 0x20) != 0) {
      while (uVar15 < uVar10) {
        if (*(short *)(uVar15 * 0xc + unaff_s0 + 10) == sVar3) goto _L0;
        uVar15 = uVar15 + 1 & 0xff;
      }
      if (uVar10 == uVar15) {
        uVar15 = uVar15 - 1 & 0xff;
        iVar4 = uVar15 * 0xc + unaff_s0;
        *(short *)(iVar4 + 10) = sVar3;
        *(undefined2 *)(iVar4 + 8) = 0;
      }
_L0:
      uVar12 = (undefined2)uVar15;
      *(undefined2 *)(unaff_s0 + 0x80) = uVar12;
      *(undefined2 *)(unaff_s0 + 0x88) = uVar12;
      *(undefined2 *)(unaff_s0 + 0x90) = uVar12;
      *(undefined4 *)(unaff_s0 + 0x7c) = 0;
      *(undefined4 *)(unaff_s0 + 0x84) = 0;
      *(undefined4 *)(unaff_s0 + 0x8c) = 0;
      puVar8 = (undefined2 *)(unaff_s0 + 4);
      uVar15 = 0;
      while (uVar10 != uVar15) {
        *puVar8 = 0;
        puVar8[1] = 0;
        uVar15 = uVar15 + 1 & 0xffff;
        puVar8 = puVar8 + 6;
      }
      *(byte *)(unaff_s0 + 0xaf) = bVar1 & 0x9f | 0x40;
      unaff_s1 = 1;
      goto _L0;
    }
    iVar4 = (uint)*(byte *)(unaff_s0 + 0x80) * 0xc;
    iVar5 = iVar4 + unaff_s0;
    _LVL322(iVar4 + 4 + unaff_s0);
    *(undefined2 *)(iVar5 + 4) = 0;
    *(undefined2 *)(iVar5 + 6) = 0;
    *(undefined4 *)(unaff_s0 + 4) = 0;
  }
  unaff_s1 = 0;
_L0:
  psVar14 = (short *)(unaff_s0 + 0x80);
  puVar13 = &stack0x00000028;
  do {
    if (*(short *)(puVar13 + 4) != *psVar14) {
      return 1;
    }
    psVar14 = psVar14 + 4;
    puVar13 = puVar13 + 8;
  } while (psVar14 != (short *)(unaff_s0 + 0xa0));
  return unaff_s1;
}



undefined4 _LVL322(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  short *psVar2;
  
  _LVL322();
  *(undefined2 *)(unaff_s1 + 4) = 0;
  *(undefined2 *)(unaff_s1 + 6) = 0;
  *(undefined4 *)(unaff_s0 + 4) = 0;
  psVar2 = (short *)(unaff_s0 + 0x80);
  puVar1 = &stack0x00000028;
  do {
    if (*(short *)(puVar1 + 4) != *psVar2) {
      return 1;
    }
    psVar2 = psVar2 + 4;
    puVar1 = puVar1 + 8;
  } while (psVar2 != (short *)(unaff_s0 + 0xa0));
  return 0;
}



int FUN_00010d32(int param_1)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined *puVar8;
  ushort uVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar10;
  short *psVar11;
  uint unaff_s2;
  char cVar12;
  int unaff_s4;
  undefined2 in_stack_0000001c;
  
  while( true ) {
    FUN_00010d32(param_1);
    uVar3 = FUN_00010d40(unaff_s2 & 0xff);
    *(undefined4 *)(&stack0x00000048 + unaff_s2 * 4) = uVar3;
    unaff_s2 = unaff_s2 + 1 & 0xffff;
    if (*(ushort *)(unaff_s0 + 0xc0) <= unaff_s2) break;
    param_1 = unaff_s2 * unaff_s4 + 4 + unaff_s0;
  }
  FUN_00010d68();
  FUN_00010d74();
  if (unaff_s1 == 0) {
    uVar1 = *(ushort *)(unaff_s0 + 0xc0);
    if (9 < uVar1) {
      cVar12 = '\0';
      _L0(&stack0x0000001c,0xffffffff,0xc);
      do {
        if ((byte)(cVar12 - 1) < 5) {
          UNRECOVERED_JUMPTABLE = *(code **)((uint)(byte)(cVar12 - 1) * 4);
                    // WARNING: Could not emulate address calculation at 0x00010e06
                    // WARNING: Treating indirect jump as call
          iVar4 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return iVar4;
        }
        in_stack_0000001c = FUN_00010e0c();
        cVar12 = cVar12 + '\x01';
      } while (cVar12 != '\x06');
      uVar1 = *(ushort *)(unaff_s0 + 0xc0);
      uVar10 = 1;
      uVar6 = 0;
      while (uVar10 < uVar1) {
        iVar4 = uVar10 * 0xc + unaff_s0;
        if ((((*(short *)(iVar4 + 8) < 0) && (*(byte *)(iVar4 + 0xc) < 0xb)) ||
            (*(ushort *)(unaff_s0 + 0x80) == uVar10)) ||
           (((*(ushort *)(unaff_s0 + 0x88) == uVar10 || (*(ushort *)(unaff_s0 + 0x90) == uVar10)) ||
            (5 < uVar6)))) {
          uVar10 = uVar10 + 1 & 0xffff;
        }
        else {
          sVar2 = *(short *)((int)&stack0x0000001c + uVar6 * 2);
          if (sVar2 != -1) {
            uVar5 = 0;
            psVar11 = (short *)(unaff_s0 + 10);
            while (uVar5 < uVar1) {
              if (*psVar11 == sVar2) goto _L0;
              uVar5 = uVar5 + 1;
              psVar11 = psVar11 + 6;
            }
            *(short *)(iVar4 + 10) = sVar2;
            *(undefined2 *)(iVar4 + 8) = 0;
            *(undefined *)(iVar4 + 0xd) = 0;
            uVar10 = uVar10 + 1 & 0xffff;
          }
_L0:
          uVar6 = uVar6 + 1;
        }
        *(undefined2 *)(iVar4 + 4) = 0;
        *(undefined2 *)(iVar4 + 6) = 0;
      }
      *(undefined4 *)(unaff_s0 + 4) = 0;
      goto _L0;
    }
    puVar7 = (undefined2 *)(unaff_s0 + 4);
    uVar9 = 0;
    while (uVar1 != uVar9) {
      uVar9 = uVar9 + 1;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 6;
    }
  }
  unaff_s1 = 0;
_L0:
  psVar11 = (short *)(unaff_s0 + 0x80);
  puVar8 = &stack0x00000028;
  do {
    if (*(short *)(puVar8 + 4) != *psVar11) {
      return 1;
    }
    psVar11 = psVar11 + 4;
    puVar8 = puVar8 + 8;
  } while (psVar11 != (short *)(unaff_s0 + 0xa0));
  return unaff_s1;
}



int FUN_00010d40(uint param_1)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined *puVar8;
  ushort uVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar10;
  short *psVar11;
  uint unaff_s2;
  char cVar12;
  int unaff_s4;
  undefined2 in_stack_0000001c;
  
  while( true ) {
    uVar3 = FUN_00010d40(param_1);
    param_1 = unaff_s2 + 1;
    *(undefined4 *)(&stack0x00000048 + unaff_s2 * 4) = uVar3;
    unaff_s2 = param_1 & 0xffff;
    if (*(ushort *)(unaff_s0 + 0xc0) <= unaff_s2) break;
    FUN_00010d32(unaff_s2 * unaff_s4 + 4 + unaff_s0);
    param_1 = param_1 & 0xff;
  }
  FUN_00010d68();
  FUN_00010d74();
  if (unaff_s1 == 0) {
    uVar1 = *(ushort *)(unaff_s0 + 0xc0);
    if (9 < uVar1) {
      cVar12 = '\0';
      _L0(&stack0x0000001c,0xffffffff,0xc);
      do {
        if ((byte)(cVar12 - 1) < 5) {
          UNRECOVERED_JUMPTABLE = *(code **)((uint)(byte)(cVar12 - 1) * 4);
                    // WARNING: Could not emulate address calculation at 0x00010e06
                    // WARNING: Treating indirect jump as call
          iVar4 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return iVar4;
        }
        in_stack_0000001c = FUN_00010e0c();
        cVar12 = cVar12 + '\x01';
      } while (cVar12 != '\x06');
      uVar1 = *(ushort *)(unaff_s0 + 0xc0);
      uVar10 = 1;
      uVar6 = 0;
      while (uVar10 < uVar1) {
        iVar4 = uVar10 * 0xc + unaff_s0;
        if ((((*(short *)(iVar4 + 8) < 0) && (*(byte *)(iVar4 + 0xc) < 0xb)) ||
            (*(ushort *)(unaff_s0 + 0x80) == uVar10)) ||
           (((*(ushort *)(unaff_s0 + 0x88) == uVar10 || (*(ushort *)(unaff_s0 + 0x90) == uVar10)) ||
            (5 < uVar6)))) {
          uVar10 = uVar10 + 1 & 0xffff;
        }
        else {
          sVar2 = *(short *)((int)&stack0x0000001c + uVar6 * 2);
          if (sVar2 != -1) {
            uVar5 = 0;
            psVar11 = (short *)(unaff_s0 + 10);
            while (uVar5 < uVar1) {
              if (*psVar11 == sVar2) goto _L0;
              uVar5 = uVar5 + 1;
              psVar11 = psVar11 + 6;
            }
            *(short *)(iVar4 + 10) = sVar2;
            *(undefined2 *)(iVar4 + 8) = 0;
            *(undefined *)(iVar4 + 0xd) = 0;
            uVar10 = uVar10 + 1 & 0xffff;
          }
_L0:
          uVar6 = uVar6 + 1;
        }
        *(undefined2 *)(iVar4 + 4) = 0;
        *(undefined2 *)(iVar4 + 6) = 0;
      }
      *(undefined4 *)(unaff_s0 + 4) = 0;
      goto _L0;
    }
    puVar7 = (undefined2 *)(unaff_s0 + 4);
    uVar9 = 0;
    while (uVar1 != uVar9) {
      uVar9 = uVar9 + 1;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 6;
    }
  }
  unaff_s1 = 0;
_L0:
  psVar11 = (short *)(unaff_s0 + 0x80);
  puVar8 = &stack0x00000028;
  do {
    if (*(short *)(puVar8 + 4) != *psVar11) {
      return 1;
    }
    psVar11 = psVar11 + 4;
    puVar8 = puVar8 + 8;
  } while (psVar11 != (short *)(unaff_s0 + 0xa0));
  return unaff_s1;
}



int FUN_00010d68(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  ushort uVar8;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar9;
  short *psVar10;
  char cVar11;
  undefined2 in_stack_0000001c;
  
  FUN_00010d68();
  FUN_00010d74();
  if (unaff_s1 == 0) {
    uVar1 = *(ushort *)(unaff_s0 + 0xc0);
    if (9 < uVar1) {
      cVar11 = '\0';
      _L0(&stack0x0000001c,0xffffffff,0xc);
      do {
        if ((byte)(cVar11 - 1) < 5) {
          UNRECOVERED_JUMPTABLE = *(code **)((uint)(byte)(cVar11 - 1) * 4);
                    // WARNING: Could not emulate address calculation at 0x00010e06
                    // WARNING: Treating indirect jump as call
          iVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return iVar3;
        }
        in_stack_0000001c = FUN_00010e0c();
        cVar11 = cVar11 + '\x01';
      } while (cVar11 != '\x06');
      uVar1 = *(ushort *)(unaff_s0 + 0xc0);
      uVar9 = 1;
      uVar5 = 0;
      while (uVar9 < uVar1) {
        iVar3 = uVar9 * 0xc + unaff_s0;
        if ((((*(short *)(iVar3 + 8) < 0) && (*(byte *)(iVar3 + 0xc) < 0xb)) ||
            (*(ushort *)(unaff_s0 + 0x80) == uVar9)) ||
           (((*(ushort *)(unaff_s0 + 0x88) == uVar9 || (*(ushort *)(unaff_s0 + 0x90) == uVar9)) ||
            (5 < uVar5)))) {
          uVar9 = uVar9 + 1 & 0xffff;
        }
        else {
          sVar2 = *(short *)((int)&stack0x0000001c + uVar5 * 2);
          if (sVar2 != -1) {
            uVar4 = 0;
            psVar10 = (short *)(unaff_s0 + 10);
            while (uVar4 < uVar1) {
              if (*psVar10 == sVar2) goto _L0;
              uVar4 = uVar4 + 1;
              psVar10 = psVar10 + 6;
            }
            *(short *)(iVar3 + 10) = sVar2;
            *(undefined2 *)(iVar3 + 8) = 0;
            *(undefined *)(iVar3 + 0xd) = 0;
            uVar9 = uVar9 + 1 & 0xffff;
          }
_L0:
          uVar5 = uVar5 + 1;
        }
        *(undefined2 *)(iVar3 + 4) = 0;
        *(undefined2 *)(iVar3 + 6) = 0;
      }
      *(undefined4 *)(unaff_s0 + 4) = 0;
      goto _L0;
    }
    puVar6 = (undefined2 *)(unaff_s0 + 4);
    uVar8 = 0;
    while (uVar1 != uVar8) {
      uVar8 = uVar8 + 1;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 6;
    }
  }
  unaff_s1 = 0;
_L0:
  psVar10 = (short *)(unaff_s0 + 0x80);
  puVar7 = &stack0x00000028;
  do {
    if (*(short *)(puVar7 + 4) != *psVar10) {
      return 1;
    }
    psVar10 = psVar10 + 4;
    puVar7 = puVar7 + 8;
  } while (psVar10 != (short *)(unaff_s0 + 0xa0));
  return unaff_s1;
}



int FUN_00010d74(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  ushort uVar8;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar9;
  short *psVar10;
  char cVar11;
  undefined2 in_stack_0000001c;
  
  FUN_00010d74();
  if (unaff_s1 == 0) {
    uVar1 = *(ushort *)(unaff_s0 + 0xc0);
    if (9 < uVar1) {
      cVar11 = '\0';
      _L0(&stack0x0000001c,0xffffffff,0xc);
      do {
        if ((byte)(cVar11 - 1) < 5) {
          UNRECOVERED_JUMPTABLE = *(code **)((uint)(byte)(cVar11 - 1) * 4);
                    // WARNING: Could not emulate address calculation at 0x00010e06
                    // WARNING: Treating indirect jump as call
          iVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return iVar3;
        }
        in_stack_0000001c = FUN_00010e0c();
        cVar11 = cVar11 + '\x01';
      } while (cVar11 != '\x06');
      uVar1 = *(ushort *)(unaff_s0 + 0xc0);
      uVar9 = 1;
      uVar5 = 0;
      while (uVar9 < uVar1) {
        iVar3 = uVar9 * 0xc + unaff_s0;
        if ((((*(short *)(iVar3 + 8) < 0) && (*(byte *)(iVar3 + 0xc) < 0xb)) ||
            (*(ushort *)(unaff_s0 + 0x80) == uVar9)) ||
           (((*(ushort *)(unaff_s0 + 0x88) == uVar9 || (*(ushort *)(unaff_s0 + 0x90) == uVar9)) ||
            (5 < uVar5)))) {
          uVar9 = uVar9 + 1 & 0xffff;
        }
        else {
          sVar2 = *(short *)((int)&stack0x0000001c + uVar5 * 2);
          if (sVar2 != -1) {
            uVar4 = 0;
            psVar10 = (short *)(unaff_s0 + 10);
            while (uVar4 < uVar1) {
              if (*psVar10 == sVar2) goto _L0;
              uVar4 = uVar4 + 1;
              psVar10 = psVar10 + 6;
            }
            *(short *)(iVar3 + 10) = sVar2;
            *(undefined2 *)(iVar3 + 8) = 0;
            *(undefined *)(iVar3 + 0xd) = 0;
            uVar9 = uVar9 + 1 & 0xffff;
          }
_L0:
          uVar5 = uVar5 + 1;
        }
        *(undefined2 *)(iVar3 + 4) = 0;
        *(undefined2 *)(iVar3 + 6) = 0;
      }
      *(undefined4 *)(unaff_s0 + 4) = 0;
      goto _L0;
    }
    puVar6 = (undefined2 *)(unaff_s0 + 4);
    uVar8 = 0;
    while (uVar1 != uVar8) {
      uVar8 = uVar8 + 1;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 6;
    }
  }
  unaff_s1 = 0;
_L0:
  psVar10 = (short *)(unaff_s0 + 0x80);
  puVar7 = &stack0x00000028;
  do {
    if (*(short *)(puVar7 + 4) != *psVar10) {
      return 1;
    }
    psVar10 = psVar10 + 4;
    puVar7 = puVar7 + 8;
  } while (psVar10 != (short *)(unaff_s0 + 0xa0));
  return unaff_s1;
}



undefined4 _L0(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar8;
  short *psVar9;
  char unaff_s3;
  int unaff_s6;
  uint unaff_s7;
  undefined2 in_stack_0000001c;
  
  _L0();
  do {
    if ((byte)(unaff_s3 - 1) <= unaff_s7) {
      UNRECOVERED_JUMPTABLE = *(code **)((uint)(byte)(unaff_s3 - 1) * 4 + unaff_s6);
                    // WARNING: Could not recover jumptable at 0x00010e08. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
    in_stack_0000001c = FUN_00010e0c();
    unaff_s3 = unaff_s3 + '\x01';
  } while (unaff_s3 != '\x06');
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  uVar8 = 1;
  uVar5 = 0;
  do {
    if (uVar1 <= uVar8) {
      *(undefined4 *)(unaff_s0 + 4) = 0;
      psVar9 = (short *)(unaff_s0 + 0x80);
      puVar6 = &stack0x00000028;
      do {
        if (*(short *)(puVar6 + 4) != *psVar9) {
          return 1;
        }
        psVar9 = psVar9 + 4;
        puVar6 = puVar6 + 8;
      } while (psVar9 != (short *)(unaff_s0 + 0xa0));
      return unaff_s1;
    }
    iVar7 = uVar8 * 0xc + unaff_s0;
    if ((((*(short *)(iVar7 + 8) < 0) && (*(byte *)(iVar7 + 0xc) < 0xb)) ||
        (*(ushort *)(unaff_s0 + 0x80) == uVar8)) ||
       (((*(ushort *)(unaff_s0 + 0x88) == uVar8 || (*(ushort *)(unaff_s0 + 0x90) == uVar8)) ||
        (5 < uVar5)))) {
      uVar8 = uVar8 + 1 & 0xffff;
    }
    else {
      sVar2 = *(short *)((int)&stack0x0000001c + uVar5 * 2);
      if (sVar2 != -1) {
        uVar4 = 0;
        psVar9 = (short *)(unaff_s0 + 10);
        while (uVar4 < uVar1) {
          if (*psVar9 == sVar2) goto _L0;
          uVar4 = uVar4 + 1;
          psVar9 = psVar9 + 6;
        }
        *(short *)(iVar7 + 10) = sVar2;
        *(undefined2 *)(iVar7 + 8) = 0;
        *(undefined *)(iVar7 + 0xd) = 0;
        uVar8 = uVar8 + 1 & 0xffff;
      }
_L0:
      uVar5 = uVar5 + 1;
    }
    *(undefined2 *)(iVar7 + 4) = 0;
    *(undefined2 *)(iVar7 + 6) = 0;
  } while( true );
}



undefined4 FUN_00010e0c(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar8;
  short *psVar9;
  byte unaff_s3;
  int unaff_s6;
  uint unaff_s7;
  undefined2 in_stack_0000001c;
  
  while( true ) {
    in_stack_0000001c = FUN_00010e0c();
    if ((byte)(unaff_s3 + 1) == 6) break;
    uVar5 = (uint)unaff_s3;
    unaff_s3 = unaff_s3 + 1;
    if (uVar5 <= unaff_s7) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar5 * 4 + unaff_s6);
                    // WARNING: Could not recover jumptable at 0x00010e08. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
  }
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  uVar8 = 1;
  uVar5 = 0;
  do {
    if (uVar1 <= uVar8) {
      *(undefined4 *)(unaff_s0 + 4) = 0;
      psVar9 = (short *)(unaff_s0 + 0x80);
      puVar6 = &stack0x00000028;
      do {
        if (*(short *)(puVar6 + 4) != *psVar9) {
          return 1;
        }
        psVar9 = psVar9 + 4;
        puVar6 = puVar6 + 8;
      } while (psVar9 != (short *)(unaff_s0 + 0xa0));
      return unaff_s1;
    }
    iVar7 = uVar8 * 0xc + unaff_s0;
    if ((((*(short *)(iVar7 + 8) < 0) && (*(byte *)(iVar7 + 0xc) < 0xb)) ||
        (*(ushort *)(unaff_s0 + 0x80) == uVar8)) ||
       (((*(ushort *)(unaff_s0 + 0x88) == uVar8 || (*(ushort *)(unaff_s0 + 0x90) == uVar8)) ||
        (5 < uVar5)))) {
      uVar8 = uVar8 + 1 & 0xffff;
    }
    else {
      sVar2 = *(short *)((int)&stack0x0000001c + uVar5 * 2);
      if (sVar2 != -1) {
        uVar4 = 0;
        psVar9 = (short *)(unaff_s0 + 10);
        while (uVar4 < uVar1) {
          if (*psVar9 == sVar2) goto _L0;
          uVar4 = uVar4 + 1;
          psVar9 = psVar9 + 6;
        }
        *(short *)(iVar7 + 10) = sVar2;
        *(undefined2 *)(iVar7 + 8) = 0;
        *(undefined *)(iVar7 + 0xd) = 0;
        uVar8 = uVar8 + 1 & 0xffff;
      }
_L0:
      uVar5 = uVar5 + 1;
    }
    *(undefined2 *)(iVar7 + 4) = 0;
    *(undefined2 *)(iVar7 + 6) = 0;
  } while( true );
}



undefined4 FUN_00010e9c(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar9;
  short *psVar10;
  int unaff_s2;
  byte unaff_s3;
  int unaff_s6;
  uint unaff_s7;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_00000020;
  
  iVar4 = FUN_00010e9c();
  if ((unaff_s2 != iVar4) && (iVar5 = _LVL358(iVar4), iVar5 != 0)) {
    in_stack_00000020 = (short)iVar4;
  }
  while ((byte)(unaff_s3 + 1) != 6) {
    if (unaff_s3 <= unaff_s7) {
      UNRECOVERED_JUMPTABLE = *(code **)((uint)unaff_s3 * 4 + unaff_s6);
                    // WARNING: Could not recover jumptable at 0x00010e08. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
    in_stack_0000001c = FUN_00010e0c();
    unaff_s3 = unaff_s3 + 1;
  }
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  uVar9 = 1;
  uVar7 = 0;
  do {
    if (uVar1 <= uVar9) {
      *(undefined4 *)(unaff_s0 + 4) = 0;
      psVar10 = (short *)(unaff_s0 + 0x80);
      puVar8 = &stack0x00000028;
      do {
        if (*(short *)(puVar8 + 4) != *psVar10) {
          return 1;
        }
        psVar10 = psVar10 + 4;
        puVar8 = puVar8 + 8;
      } while (psVar10 != (short *)(unaff_s0 + 0xa0));
      return unaff_s1;
    }
    iVar4 = uVar9 * 0xc + unaff_s0;
    if ((((*(short *)(iVar4 + 8) < 0) && (*(byte *)(iVar4 + 0xc) < 0xb)) ||
        (*(ushort *)(unaff_s0 + 0x80) == uVar9)) ||
       (((*(ushort *)(unaff_s0 + 0x88) == uVar9 || (*(ushort *)(unaff_s0 + 0x90) == uVar9)) ||
        (5 < uVar7)))) {
      uVar9 = uVar9 + 1 & 0xffff;
    }
    else {
      sVar2 = *(short *)((int)&stack0x0000001c + uVar7 * 2);
      if (sVar2 != -1) {
        uVar6 = 0;
        psVar10 = (short *)(unaff_s0 + 10);
        while (uVar6 < uVar1) {
          if (*psVar10 == sVar2) goto _L0;
          uVar6 = uVar6 + 1;
          psVar10 = psVar10 + 6;
        }
        *(short *)(iVar4 + 10) = sVar2;
        *(undefined2 *)(iVar4 + 8) = 0;
        *(undefined *)(iVar4 + 0xd) = 0;
        uVar9 = uVar9 + 1 & 0xffff;
      }
_L0:
      uVar7 = uVar7 + 1;
    }
    *(undefined2 *)(iVar4 + 4) = 0;
    *(undefined2 *)(iVar4 + 6) = 0;
  } while( true );
}



undefined4 _LVL358(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar8;
  short *psVar9;
  byte unaff_s3;
  int unaff_s6;
  uint unaff_s7;
  undefined2 in_stack_0000001c;
  
  _LVL358();
  while ((byte)(unaff_s3 + 1) != 6) {
    if (unaff_s3 <= unaff_s7) {
      UNRECOVERED_JUMPTABLE = *(code **)((uint)unaff_s3 * 4 + unaff_s6);
                    // WARNING: Could not recover jumptable at 0x00010e08. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
    in_stack_0000001c = FUN_00010e0c();
    unaff_s3 = unaff_s3 + 1;
  }
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  uVar8 = 1;
  uVar5 = 0;
  do {
    if (uVar1 <= uVar8) {
      *(undefined4 *)(unaff_s0 + 4) = 0;
      psVar9 = (short *)(unaff_s0 + 0x80);
      puVar6 = &stack0x00000028;
      do {
        if (*(short *)(puVar6 + 4) != *psVar9) {
          return 1;
        }
        psVar9 = psVar9 + 4;
        puVar6 = puVar6 + 8;
      } while (psVar9 != (short *)(unaff_s0 + 0xa0));
      return unaff_s1;
    }
    iVar7 = uVar8 * 0xc + unaff_s0;
    if ((((*(short *)(iVar7 + 8) < 0) && (*(byte *)(iVar7 + 0xc) < 0xb)) ||
        (*(ushort *)(unaff_s0 + 0x80) == uVar8)) ||
       (((*(ushort *)(unaff_s0 + 0x88) == uVar8 || (*(ushort *)(unaff_s0 + 0x90) == uVar8)) ||
        (5 < uVar5)))) {
      uVar8 = uVar8 + 1 & 0xffff;
    }
    else {
      sVar2 = *(short *)((int)&stack0x0000001c + uVar5 * 2);
      if (sVar2 != -1) {
        uVar4 = 0;
        psVar9 = (short *)(unaff_s0 + 10);
        while (uVar4 < uVar1) {
          if (*psVar9 == sVar2) goto _L0;
          uVar4 = uVar4 + 1;
          psVar9 = psVar9 + 6;
        }
        *(short *)(iVar7 + 10) = sVar2;
        *(undefined2 *)(iVar7 + 8) = 0;
        *(undefined *)(iVar7 + 0xd) = 0;
        uVar8 = uVar8 + 1 & 0xffff;
      }
_L0:
      uVar5 = uVar5 + 1;
    }
    *(undefined2 *)(iVar7 + 4) = 0;
    *(undefined2 *)(iVar7 + 6) = 0;
  } while( true );
}



undefined4 FUN_00010ec4(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar9;
  short *psVar10;
  int unaff_s2;
  byte unaff_s3;
  int unaff_s6;
  uint unaff_s7;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_00000022;
  
  iVar4 = FUN_00010ec4();
  if ((unaff_s2 != iVar4) && (iVar5 = _LVL361(iVar4), iVar5 != 0)) {
    in_stack_00000022 = (short)iVar4;
  }
  while ((byte)(unaff_s3 + 1) != 6) {
    if (unaff_s3 <= unaff_s7) {
      UNRECOVERED_JUMPTABLE = *(code **)((uint)unaff_s3 * 4 + unaff_s6);
                    // WARNING: Could not recover jumptable at 0x00010e08. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
    in_stack_0000001c = FUN_00010e0c();
    unaff_s3 = unaff_s3 + 1;
  }
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  uVar9 = 1;
  uVar7 = 0;
  do {
    if (uVar1 <= uVar9) {
      *(undefined4 *)(unaff_s0 + 4) = 0;
      psVar10 = (short *)(unaff_s0 + 0x80);
      puVar8 = &stack0x00000028;
      do {
        if (*(short *)(puVar8 + 4) != *psVar10) {
          return 1;
        }
        psVar10 = psVar10 + 4;
        puVar8 = puVar8 + 8;
      } while (psVar10 != (short *)(unaff_s0 + 0xa0));
      return unaff_s1;
    }
    iVar4 = uVar9 * 0xc + unaff_s0;
    if ((((*(short *)(iVar4 + 8) < 0) && (*(byte *)(iVar4 + 0xc) < 0xb)) ||
        (*(ushort *)(unaff_s0 + 0x80) == uVar9)) ||
       (((*(ushort *)(unaff_s0 + 0x88) == uVar9 || (*(ushort *)(unaff_s0 + 0x90) == uVar9)) ||
        (5 < uVar7)))) {
      uVar9 = uVar9 + 1 & 0xffff;
    }
    else {
      sVar2 = *(short *)((int)&stack0x0000001c + uVar7 * 2);
      if (sVar2 != -1) {
        uVar6 = 0;
        psVar10 = (short *)(unaff_s0 + 10);
        while (uVar6 < uVar1) {
          if (*psVar10 == sVar2) goto _L0;
          uVar6 = uVar6 + 1;
          psVar10 = psVar10 + 6;
        }
        *(short *)(iVar4 + 10) = sVar2;
        *(undefined2 *)(iVar4 + 8) = 0;
        *(undefined *)(iVar4 + 0xd) = 0;
        uVar9 = uVar9 + 1 & 0xffff;
      }
_L0:
      uVar7 = uVar7 + 1;
    }
    *(undefined2 *)(iVar4 + 4) = 0;
    *(undefined2 *)(iVar4 + 6) = 0;
  } while( true );
}



undefined4 _LVL361(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar8;
  short *psVar9;
  byte unaff_s3;
  int unaff_s6;
  uint unaff_s7;
  undefined2 in_stack_0000001c;
  
  _LVL361();
  while ((byte)(unaff_s3 + 1) != 6) {
    if (unaff_s3 <= unaff_s7) {
      UNRECOVERED_JUMPTABLE = *(code **)((uint)unaff_s3 * 4 + unaff_s6);
                    // WARNING: Could not recover jumptable at 0x00010e08. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
    in_stack_0000001c = FUN_00010e0c();
    unaff_s3 = unaff_s3 + 1;
  }
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  uVar8 = 1;
  uVar5 = 0;
  do {
    if (uVar1 <= uVar8) {
      *(undefined4 *)(unaff_s0 + 4) = 0;
      psVar9 = (short *)(unaff_s0 + 0x80);
      puVar6 = &stack0x00000028;
      do {
        if (*(short *)(puVar6 + 4) != *psVar9) {
          return 1;
        }
        psVar9 = psVar9 + 4;
        puVar6 = puVar6 + 8;
      } while (psVar9 != (short *)(unaff_s0 + 0xa0));
      return unaff_s1;
    }
    iVar7 = uVar8 * 0xc + unaff_s0;
    if ((((*(short *)(iVar7 + 8) < 0) && (*(byte *)(iVar7 + 0xc) < 0xb)) ||
        (*(ushort *)(unaff_s0 + 0x80) == uVar8)) ||
       (((*(ushort *)(unaff_s0 + 0x88) == uVar8 || (*(ushort *)(unaff_s0 + 0x90) == uVar8)) ||
        (5 < uVar5)))) {
      uVar8 = uVar8 + 1 & 0xffff;
    }
    else {
      sVar2 = *(short *)((int)&stack0x0000001c + uVar5 * 2);
      if (sVar2 != -1) {
        uVar4 = 0;
        psVar9 = (short *)(unaff_s0 + 10);
        while (uVar4 < uVar1) {
          if (*psVar9 == sVar2) goto _L0;
          uVar4 = uVar4 + 1;
          psVar9 = psVar9 + 6;
        }
        *(short *)(iVar7 + 10) = sVar2;
        *(undefined2 *)(iVar7 + 8) = 0;
        *(undefined *)(iVar7 + 0xd) = 0;
        uVar8 = uVar8 + 1 & 0xffff;
      }
_L0:
      uVar5 = uVar5 + 1;
    }
    *(undefined2 *)(iVar7 + 4) = 0;
    *(undefined2 *)(iVar7 + 6) = 0;
  } while( true );
}



undefined4 FUN_00010eec(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar9;
  short *psVar10;
  byte unaff_s3;
  int unaff_s4;
  int unaff_s6;
  uint unaff_s7;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_00000024;
  
  iVar4 = FUN_00010eec();
  if ((unaff_s4 != iVar4) && (iVar5 = _LVL364(iVar4), iVar5 != 0)) {
    in_stack_00000024 = (short)iVar4;
  }
  while ((byte)(unaff_s3 + 1) != 6) {
    if (unaff_s3 <= unaff_s7) {
      UNRECOVERED_JUMPTABLE = *(code **)((uint)unaff_s3 * 4 + unaff_s6);
                    // WARNING: Could not recover jumptable at 0x00010e08. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
    in_stack_0000001c = FUN_00010e0c();
    unaff_s3 = unaff_s3 + 1;
  }
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  uVar9 = 1;
  uVar7 = 0;
  do {
    if (uVar1 <= uVar9) {
      *(undefined4 *)(unaff_s0 + 4) = 0;
      psVar10 = (short *)(unaff_s0 + 0x80);
      puVar8 = &stack0x00000028;
      do {
        if (*(short *)(puVar8 + 4) != *psVar10) {
          return 1;
        }
        psVar10 = psVar10 + 4;
        puVar8 = puVar8 + 8;
      } while (psVar10 != (short *)(unaff_s0 + 0xa0));
      return unaff_s1;
    }
    iVar4 = uVar9 * 0xc + unaff_s0;
    if ((((*(short *)(iVar4 + 8) < 0) && (*(byte *)(iVar4 + 0xc) < 0xb)) ||
        (*(ushort *)(unaff_s0 + 0x80) == uVar9)) ||
       (((*(ushort *)(unaff_s0 + 0x88) == uVar9 || (*(ushort *)(unaff_s0 + 0x90) == uVar9)) ||
        (5 < uVar7)))) {
      uVar9 = uVar9 + 1 & 0xffff;
    }
    else {
      sVar2 = *(short *)((int)&stack0x0000001c + uVar7 * 2);
      if (sVar2 != -1) {
        uVar6 = 0;
        psVar10 = (short *)(unaff_s0 + 10);
        while (uVar6 < uVar1) {
          if (*psVar10 == sVar2) goto _L0;
          uVar6 = uVar6 + 1;
          psVar10 = psVar10 + 6;
        }
        *(short *)(iVar4 + 10) = sVar2;
        *(undefined2 *)(iVar4 + 8) = 0;
        *(undefined *)(iVar4 + 0xd) = 0;
        uVar9 = uVar9 + 1 & 0xffff;
      }
_L0:
      uVar7 = uVar7 + 1;
    }
    *(undefined2 *)(iVar4 + 4) = 0;
    *(undefined2 *)(iVar4 + 6) = 0;
  } while( true );
}



undefined4 _LVL364(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar8;
  short *psVar9;
  byte unaff_s3;
  int unaff_s6;
  uint unaff_s7;
  undefined2 in_stack_0000001c;
  
  _LVL364();
  while ((byte)(unaff_s3 + 1) != 6) {
    if (unaff_s3 <= unaff_s7) {
      UNRECOVERED_JUMPTABLE = *(code **)((uint)unaff_s3 * 4 + unaff_s6);
                    // WARNING: Could not recover jumptable at 0x00010e08. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
    in_stack_0000001c = FUN_00010e0c();
    unaff_s3 = unaff_s3 + 1;
  }
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  uVar8 = 1;
  uVar5 = 0;
  do {
    if (uVar1 <= uVar8) {
      *(undefined4 *)(unaff_s0 + 4) = 0;
      psVar9 = (short *)(unaff_s0 + 0x80);
      puVar6 = &stack0x00000028;
      do {
        if (*(short *)(puVar6 + 4) != *psVar9) {
          return 1;
        }
        psVar9 = psVar9 + 4;
        puVar6 = puVar6 + 8;
      } while (psVar9 != (short *)(unaff_s0 + 0xa0));
      return unaff_s1;
    }
    iVar7 = uVar8 * 0xc + unaff_s0;
    if ((((*(short *)(iVar7 + 8) < 0) && (*(byte *)(iVar7 + 0xc) < 0xb)) ||
        (*(ushort *)(unaff_s0 + 0x80) == uVar8)) ||
       (((*(ushort *)(unaff_s0 + 0x88) == uVar8 || (*(ushort *)(unaff_s0 + 0x90) == uVar8)) ||
        (5 < uVar5)))) {
      uVar8 = uVar8 + 1 & 0xffff;
    }
    else {
      sVar2 = *(short *)((int)&stack0x0000001c + uVar5 * 2);
      if (sVar2 != -1) {
        uVar4 = 0;
        psVar9 = (short *)(unaff_s0 + 10);
        while (uVar4 < uVar1) {
          if (*psVar9 == sVar2) goto _L0;
          uVar4 = uVar4 + 1;
          psVar9 = psVar9 + 6;
        }
        *(short *)(iVar7 + 10) = sVar2;
        *(undefined2 *)(iVar7 + 8) = 0;
        *(undefined *)(iVar7 + 0xd) = 0;
        uVar8 = uVar8 + 1 & 0xffff;
      }
_L0:
      uVar5 = uVar5 + 1;
    }
    *(undefined2 *)(iVar7 + 4) = 0;
    *(undefined2 *)(iVar7 + 6) = 0;
  } while( true );
}



undefined4 FUN_00010f14(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar9;
  short *psVar10;
  byte unaff_s3;
  int unaff_s4;
  int unaff_s6;
  uint unaff_s7;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_00000026;
  
  iVar4 = FUN_00010f14();
  if ((unaff_s4 != iVar4) && (iVar5 = _LVL367(iVar4), iVar5 != 0)) {
    in_stack_00000026 = (short)iVar4;
  }
  while ((byte)(unaff_s3 + 1) != 6) {
    if (unaff_s3 <= unaff_s7) {
      UNRECOVERED_JUMPTABLE = *(code **)((uint)unaff_s3 * 4 + unaff_s6);
                    // WARNING: Could not recover jumptable at 0x00010e08. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
    in_stack_0000001c = FUN_00010e0c();
    unaff_s3 = unaff_s3 + 1;
  }
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  uVar9 = 1;
  uVar7 = 0;
  do {
    if (uVar1 <= uVar9) {
      *(undefined4 *)(unaff_s0 + 4) = 0;
      psVar10 = (short *)(unaff_s0 + 0x80);
      puVar8 = &stack0x00000028;
      do {
        if (*(short *)(puVar8 + 4) != *psVar10) {
          return 1;
        }
        psVar10 = psVar10 + 4;
        puVar8 = puVar8 + 8;
      } while (psVar10 != (short *)(unaff_s0 + 0xa0));
      return unaff_s1;
    }
    iVar4 = uVar9 * 0xc + unaff_s0;
    if ((((*(short *)(iVar4 + 8) < 0) && (*(byte *)(iVar4 + 0xc) < 0xb)) ||
        (*(ushort *)(unaff_s0 + 0x80) == uVar9)) ||
       (((*(ushort *)(unaff_s0 + 0x88) == uVar9 || (*(ushort *)(unaff_s0 + 0x90) == uVar9)) ||
        (5 < uVar7)))) {
      uVar9 = uVar9 + 1 & 0xffff;
    }
    else {
      sVar2 = *(short *)((int)&stack0x0000001c + uVar7 * 2);
      if (sVar2 != -1) {
        uVar6 = 0;
        psVar10 = (short *)(unaff_s0 + 10);
        while (uVar6 < uVar1) {
          if (*psVar10 == sVar2) goto _L0;
          uVar6 = uVar6 + 1;
          psVar10 = psVar10 + 6;
        }
        *(short *)(iVar4 + 10) = sVar2;
        *(undefined2 *)(iVar4 + 8) = 0;
        *(undefined *)(iVar4 + 0xd) = 0;
        uVar9 = uVar9 + 1 & 0xffff;
      }
_L0:
      uVar7 = uVar7 + 1;
    }
    *(undefined2 *)(iVar4 + 4) = 0;
    *(undefined2 *)(iVar4 + 6) = 0;
  } while( true );
}



undefined4 _LVL367(void)

{
  ushort uVar1;
  short sVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar8;
  short *psVar9;
  byte unaff_s3;
  int unaff_s6;
  uint unaff_s7;
  undefined2 in_stack_0000001c;
  
  _LVL367();
  while ((byte)(unaff_s3 + 1) != 6) {
    if (unaff_s3 <= unaff_s7) {
      UNRECOVERED_JUMPTABLE = *(code **)((uint)unaff_s3 * 4 + unaff_s6);
                    // WARNING: Could not recover jumptable at 0x00010e08. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
    in_stack_0000001c = FUN_00010e0c();
    unaff_s3 = unaff_s3 + 1;
  }
  uVar1 = *(ushort *)(unaff_s0 + 0xc0);
  uVar8 = 1;
  uVar5 = 0;
  do {
    if (uVar1 <= uVar8) {
      *(undefined4 *)(unaff_s0 + 4) = 0;
      psVar9 = (short *)(unaff_s0 + 0x80);
      puVar6 = &stack0x00000028;
      do {
        if (*(short *)(puVar6 + 4) != *psVar9) {
          return 1;
        }
        psVar9 = psVar9 + 4;
        puVar6 = puVar6 + 8;
      } while (psVar9 != (short *)(unaff_s0 + 0xa0));
      return unaff_s1;
    }
    iVar7 = uVar8 * 0xc + unaff_s0;
    if ((((*(short *)(iVar7 + 8) < 0) && (*(byte *)(iVar7 + 0xc) < 0xb)) ||
        (*(ushort *)(unaff_s0 + 0x80) == uVar8)) ||
       (((*(ushort *)(unaff_s0 + 0x88) == uVar8 || (*(ushort *)(unaff_s0 + 0x90) == uVar8)) ||
        (5 < uVar5)))) {
      uVar8 = uVar8 + 1 & 0xffff;
    }
    else {
      sVar2 = *(short *)((int)&stack0x0000001c + uVar5 * 2);
      if (sVar2 != -1) {
        uVar4 = 0;
        psVar9 = (short *)(unaff_s0 + 10);
        while (uVar4 < uVar1) {
          if (*psVar9 == sVar2) goto _L0;
          uVar4 = uVar4 + 1;
          psVar9 = psVar9 + 6;
        }
        *(short *)(iVar7 + 10) = sVar2;
        *(undefined2 *)(iVar7 + 8) = 0;
        *(undefined *)(iVar7 + 0xd) = 0;
        uVar8 = uVar8 + 1 & 0xffff;
      }
_L0:
      uVar5 = uVar5 + 1;
    }
    *(undefined2 *)(iVar7 + 4) = 0;
    *(undefined2 *)(iVar7 + 6) = 0;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rc_init(sta_info_tag *sta_entry)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  step *psVar5;
  uint16_t uVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint8_t uVar11;
  short sVar12;
  uint *puVar13;
  uint *puVar14;
  ushort *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  txl_buffer_control *ptVar19;
  uint uVar20;
  rc_sta_stats *prVar21;
  uint8_t *puVar22;
  
  bVar1 = sta_entry->staid;
  ptVar19 = (sta_entry->pol_tbl).buf_ctrl;
  if (9 < bVar1) {
    FUN_0001109c(0,0,0x85f);
  }
  uVar18 = (uint)sta_entry->staid;
  prVar21 = (rc_sta_stats *)(uVar18 * 200);
  (sta_entry->pol_tbl).sta_stats = prVar21;
  iVar8 = _L0();
  uVar20 = iVar8 << 0xe;
  FUN_000110d6(prVar21,0,200);
  if (((sta_entry->info).capa_flags & 2) == 0) {
    uVar6 = _L0(&sta_entry->info,0);
    prVar21->rate_map_l = uVar6;
    uVar9 = _L0();
    prVar21->r_idx_min = (uint8_t)uVar9;
    if (0xb < uVar9) {
      FUN_0001134a(0,0,0x8f4);
    }
    uVar9 = FUN_00011360(*(undefined2 *)(uVar18 * 200 + 0xb6));
    *(char *)(uVar18 * 200 + 0xba) = (char)uVar9;
    if (0xb < uVar9) {
      FUN_00011388(0,0,0x8f6);
    }
    *(undefined *)(uVar18 * 200 + 0xb8) = 0xff;
    uVar11 = (sta_entry->info).bw_cur;
    *(uint8_t *)(uVar18 * 200 + 0xbb) = uVar11;
    if (uVar11 != '\0') {
      FUN_000113c0(0,0,0x8f9);
    }
    *(byte *)(uVar18 * 200 + 0xbe) = (byte)((int)(uint)(sta_entry->pol_tbl).ppdu_tx_cfg >> 10) & 1;
  }
  else {
    uVar6 = _L0();
    puVar22 = (sta_entry->info).ht_cap.mcs_rate;
    prVar21->format_mod = '\x02';
    prVar21->rate_map_l = uVar6;
    uVar9 = FUN_00011106(puVar22);
    uVar10 = FUN_00011118(0xf);
    if (uVar10 < uVar9) {
      uVar9 = uVar10;
    }
    *(char *)(uVar18 * 200 + 0xbc) = (char)uVar9;
    if (3 < uVar9) {
      FUN_00011152(0,0,0x8a6);
    }
    iVar8 = uVar18 * 200;
    FUN_0001116c(&prVar21->rate_map,puVar22,4);
    *(undefined *)(iVar8 + 0xb2) = 0xff;
    *(undefined *)(iVar8 + 0xb8) = 7;
    uVar9 = _L0(*(undefined2 *)(iVar8 + 0xb6));
    *(char *)(iVar8 + 0xb9) = (char)uVar9;
    if (0xc < uVar9) {
      FUN_000111ae(0,0,0x8b8);
    }
    uVar9 = FUN_000111c4(*(undefined2 *)(uVar18 * 200 + 0xb6));
    *(char *)(uVar18 * 200 + 0xba) = (char)uVar9;
    if (0xc < uVar9) {
      FUN_000111ec(0,0,0x8be);
    }
    *(byte *)(uVar18 * 200 + 0xbe) = (byte)((int)(uint)(sta_entry->pol_tbl).ppdu_tx_cfg >> 10) & 1;
    iVar8 = _L0();
    uVar3 = (sta_entry->info).ht_cap.ht_capa_info;
    if ((iVar8 != 0) && ((uVar3 & 1) != 0)) {
      uVar20 = uVar20 | 0x40;
    }
    if ((int)((uint)uVar3 << 0x14) < 0) {
      sVar12 = 0x2000;
    }
    else {
      sVar12 = 0x1000;
    }
    *(short *)(uVar18 * 200 + 0xc2) = sVar12 + -0x101;
    bVar2 = (sta_entry->info).bw_cur;
    *(byte *)(uVar18 * 200 + 0xbb) = bVar2;
    if (3 < bVar2) {
      FUN_00011262(0,0,0x8d5);
    }
    uVar11 = (sta_entry->info).bw_cur;
    if (uVar11 == '\0') {
      if (((sta_entry->info).ht_cap.ht_capa_info & 0x20) != 0) {
        uVar11 = '\x01';
        goto _L0;
      }
    }
    else {
      if ((uVar11 == '\x01') && (((sta_entry->info).ht_cap.ht_capa_info & 0x40) != 0)) {
_L0:
        *(uint8_t *)(uVar18 * 200 + 0xbd) = uVar11;
      }
    }
  }
  iVar8 = uVar18 * 200;
  if (*(byte *)(iVar8 + 0xb1) < 2) {
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    uVar10 = 1 - *(byte *)(iVar8 + 0xbe);
    uVar16 = (((int)uVar9 >> 1 & 1U) + ((int)uVar9 >> 2 & 1U) << (uVar10 & 0x1f)) + (uVar9 & 1) +
             (((int)uVar9 >> 3 & 1U) << (uVar10 & 0x1f)) & 0xffff;
    uVar10 = 4;
    do {
      uVar4 = uVar10 & 0x1f;
      uVar10 = uVar10 + 1;
      uVar16 = uVar16 + ((int)uVar9 >> uVar4 & 1U) & 0xffff;
    } while (uVar10 != 0xc);
_L0:
    if (10 < uVar16) {
      *(undefined2 *)(uVar18 * 200 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(uVar18 * 200 + 0xc0) = (short)uVar16;
    if (uVar16 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar8 + 0xb1) < 4) {
      uVar9 = (uint)*(byte *)(iVar8 + 0xb2);
      iVar17 = 8;
      uVar10 = 0;
      do {
        uVar16 = uVar9 & 1;
        iVar17 = iVar17 + -1;
        uVar9 = uVar9 >> 1;
        uVar10 = uVar10 + (1 << (*(byte *)(iVar8 + 0xbd) & 0x1f)) * uVar16 & 0xffff;
      } while (iVar17 != 0);
      uVar16 = (uint)*(ushort *)(uVar18 * 200 + 0xb6);
      uVar9 = 1 - *(byte *)(uVar18 * 200 + 0xbe);
      uVar16 = uVar10 + (((int)uVar16 >> 1 & 1U) + ((int)uVar16 >> 2 & 1U) << (uVar9 & 0x1f)) +
                        (uVar16 & 1) + (((int)uVar16 >> 3 & 1U) << (uVar9 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar8 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(uVar18 * 200 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar8 = *(int *)((uint)sta_entry->staid * 0x1b0 + 0x110);
  if (iVar8 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar8 + 0xc0);
  uVar9 = 0;
  puVar15 = (ushort *)(iVar8 + 10);
  while (uVar9 != uVar3) {
    *puVar15 = 0xffff;
    uVar9 = uVar9 + 1 & 0xffff;
    puVar15 = puVar15 + 6;
  }
  uVar7 = FUN_0001148e(iVar8);
  *(undefined2 *)(iVar8 + 10) = uVar7;
  uVar7 = FUN_0001149c(iVar8);
  *(undefined2 *)((uVar9 - 1) * 0xc + iVar8 + 10) = uVar7;
  uVar9 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar8 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar9) {
      *(short *)(iVar8 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar8 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar8 + 0xa8) = 0x10000;
      *(ushort *)(iVar8 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar8 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar8 + 0x7c) = 0;
      *(undefined4 *)(iVar8 + 0x84) = 0;
      *(undefined4 *)(iVar8 + 0x8c) = 0;
      *(undefined2 *)(iVar8 + 0x98) = 0;
      *(undefined4 *)(iVar8 + 0x94) = 0;
      *(undefined *)(iVar8 + 0xaf) = 0;
      FUN_000114fc(iVar8,1);
      *(undefined *)(iVar8 + 0xac) = 5;
      puVar13 = (uint *)&(ptVar19->field_0).field_0x14;
      do {
        psVar5 = prVar21->retry;
        puVar14 = puVar13 + 1;
        prVar21 = (rc_sta_stats *)&prVar21->rate_stats[0].probability;
        *puVar13 = *(ushort *)
                    ((int)(undefined4 *)(uVar18 * 200) + (uint)*(byte *)&psVar5->idx * 0xc + 10) |
                   0x80000000;
        puVar13 = puVar14;
      } while (puVar14 != (uint *)&(ptVar19->field_0).field_0x24);
      *(undefined4 *)(uVar18 * 200) = _DAT_44b00120;
      *(undefined4 *)&ptVar19->field_0 = 0xbadcab1e;
      *(uint *)&(ptVar19->field_0).field_0xc = (uint)(byte)(bVar1 + 8) << 10;
      *(undefined4 *)&(ptVar19->field_0).field_0x10 = 0xffff0704;
      *(uint *)&(ptVar19->field_0).field_0x4 = uVar20;
      iVar8 = _L0();
      *(int *)&(ptVar19->field_0).field_0x8 = (1 << (iVar8 + 1U & 0x1f)) + -1;
      ((sta_entry->pol_tbl).buf_ctrl)->mac_control_info = 0x2200;
      ((sta_entry->pol_tbl).buf_ctrl)->phy_control_info = sta_entry->paid_gid;
      (sta_entry->pol_tbl).upd_field = (sta_entry->pol_tbl).upd_field | 0x11;
      return;
    }
    uVar10 = FUN_0001164a(iVar8);
    uVar16 = 0;
    puVar15 = (ushort *)(iVar8 + 10);
    while (uVar16 < *(ushort *)(iVar8 + 0xc0)) {
      if (*puVar15 == uVar10) goto _L0;
      uVar16 = uVar16 + 1;
      puVar15 = puVar15 + 6;
    }
    iVar17 = uVar9 * 0xc;
    uVar9 = uVar9 + 1 & 0xffff;
    *(short *)(iVar17 + iVar8 + 10) = (short)uVar10;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001109c(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  short sVar10;
  uint *puVar11;
  uint *puVar12;
  ushort *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint uVar17;
  int iVar18;
  
  FUN_0001109c();
  uVar16 = (uint)*(byte *)(unaff_s0 + 0x1b);
  iVar18 = uVar16 * 200;
  *(int *)(unaff_s0 + 0x110) = iVar18;
  iVar6 = _L0();
  uVar17 = iVar6 << 0xe;
  FUN_000110d6(iVar18,0,200);
  if ((*(uint *)(unaff_s0 + 0xec) & 2) == 0) {
    uVar5 = _L0(unaff_s0 + 0xb0,0);
    *(undefined2 *)(iVar18 + 0xb6) = uVar5;
    uVar7 = _L0();
    *(char *)(iVar18 + 0xb9) = (char)uVar7;
    if (0xb < uVar7) {
      FUN_0001134a(0,0,0x8f4);
    }
    uVar7 = FUN_00011360(*(undefined2 *)(uVar16 * 200 + 0xb6));
    *(char *)(uVar16 * 200 + 0xba) = (char)uVar7;
    if (0xb < uVar7) {
      FUN_00011388(0,0,0x8f6);
    }
    *(undefined *)(uVar16 * 200 + 0xb8) = 0xff;
    cVar9 = *(char *)(unaff_s0 + 0xf1);
    *(char *)(uVar16 * 200 + 0xbb) = cVar9;
    if (cVar9 != '\0') {
      FUN_000113c0(0,0,0x8f9);
    }
    *(byte *)(uVar16 * 200 + 0xbe) = (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  }
  else {
    uVar5 = _L0();
    *(undefined *)(iVar18 + 0xb1) = 2;
    *(undefined2 *)(iVar18 + 0xb6) = uVar5;
    uVar7 = FUN_00011106(unaff_s0 + 0xc3);
    uVar8 = FUN_00011118(0xf);
    if (uVar8 < uVar7) {
      uVar7 = uVar8;
    }
    *(char *)(uVar16 * 200 + 0xbc) = (char)uVar7;
    if (3 < uVar7) {
      FUN_00011152(0,0,0x8a6);
    }
    iVar6 = uVar16 * 200;
    FUN_0001116c(iVar18 + 0xb2,unaff_s0 + 0xc3,4);
    *(undefined *)(iVar6 + 0xb2) = 0xff;
    *(undefined *)(iVar6 + 0xb8) = 7;
    uVar7 = _L0(*(undefined2 *)(iVar6 + 0xb6));
    *(char *)(iVar6 + 0xb9) = (char)uVar7;
    if (0xc < uVar7) {
      FUN_000111ae(0,0,0x8b8);
    }
    uVar7 = FUN_000111c4(*(undefined2 *)(uVar16 * 200 + 0xb6));
    *(char *)(uVar16 * 200 + 0xba) = (char)uVar7;
    if (0xc < uVar7) {
      FUN_000111ec(0,0,0x8be);
    }
    *(byte *)(uVar16 * 200 + 0xbe) = (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
    iVar6 = _L0();
    if ((iVar6 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
      uVar17 = uVar17 | 0x40;
    }
    if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
      sVar10 = 0x2000;
    }
    else {
      sVar10 = 0x1000;
    }
    *(short *)(uVar16 * 200 + 0xc2) = sVar10 + -0x101;
    bVar2 = *(byte *)(unaff_s0 + 0xf1);
    *(byte *)(uVar16 * 200 + 0xbb) = bVar2;
    if (3 < bVar2) {
      FUN_00011262(0,0,0x8d5);
    }
    cVar9 = *(char *)(unaff_s0 + 0xf1);
    if (cVar9 == '\0') {
      if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
        cVar9 = '\x01';
        goto _L0;
      }
    }
    else {
      if ((cVar9 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
        *(char *)(uVar16 * 200 + 0xbd) = cVar9;
      }
    }
  }
  iVar6 = uVar16 * 200;
  if (*(byte *)(iVar6 + 0xb1) < 2) {
    uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
    uVar8 = 1 - *(byte *)(iVar6 + 0xbe);
    uVar14 = (((int)uVar7 >> 1 & 1U) + ((int)uVar7 >> 2 & 1U) << (uVar8 & 0x1f)) + (uVar7 & 1) +
             (((int)uVar7 >> 3 & 1U) << (uVar8 & 0x1f)) & 0xffff;
    uVar8 = 4;
    do {
      uVar4 = uVar8 & 0x1f;
      uVar8 = uVar8 + 1;
      uVar14 = uVar14 + ((int)uVar7 >> uVar4 & 1U) & 0xffff;
    } while (uVar8 != 0xc);
_L0:
    if (10 < uVar14) {
      *(undefined2 *)(uVar16 * 200 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(uVar16 * 200 + 0xc0) = (short)uVar14;
    if (uVar14 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar6 + 0xb1) < 4) {
      uVar7 = (uint)*(byte *)(iVar6 + 0xb2);
      iVar15 = 8;
      uVar8 = 0;
      do {
        uVar14 = uVar7 & 1;
        iVar15 = iVar15 + -1;
        uVar7 = uVar7 >> 1;
        uVar8 = uVar8 + (1 << (*(byte *)(iVar6 + 0xbd) & 0x1f)) * uVar14 & 0xffff;
      } while (iVar15 != 0);
      uVar14 = (uint)*(ushort *)(uVar16 * 200 + 0xb6);
      uVar7 = 1 - *(byte *)(uVar16 * 200 + 0xbe);
      uVar14 = uVar8 + (((int)uVar14 >> 1 & 1U) + ((int)uVar14 >> 2 & 1U) << (uVar7 & 0x1f)) +
                       (uVar14 & 1) + (((int)uVar14 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar6 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(uVar16 * 200 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar6 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar6 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar6 + 0xc0);
  uVar7 = 0;
  puVar13 = (ushort *)(iVar6 + 10);
  while (uVar7 != uVar3) {
    *puVar13 = 0xffff;
    uVar7 = uVar7 + 1 & 0xffff;
    puVar13 = puVar13 + 6;
  }
  uVar5 = FUN_0001148e(iVar6);
  *(undefined2 *)(iVar6 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar6);
  *(undefined2 *)((uVar7 - 1) * 0xc + iVar6 + 10) = uVar5;
  uVar7 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar6 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar7) {
      *(short *)(iVar6 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar6 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar6 + 0xa8) = 0x10000;
      *(ushort *)(iVar6 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar6 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar6 + 0x7c) = 0;
      *(undefined4 *)(iVar6 + 0x84) = 0;
      *(undefined4 *)(iVar6 + 0x8c) = 0;
      *(undefined2 *)(iVar6 + 0x98) = 0;
      *(undefined4 *)(iVar6 + 0x94) = 0;
      *(undefined *)(iVar6 + 0xaf) = 0;
      FUN_000114fc(iVar6,1);
      *(undefined *)(iVar6 + 0xac) = 5;
      puVar11 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(iVar18 + 0x80);
        puVar12 = puVar11 + 1;
        iVar18 = iVar18 + 8;
        *puVar11 = *(ushort *)((int)(undefined4 *)(uVar16 * 200) + (uint)*pbVar1 * 0xc + 10) |
                   0x80000000;
        puVar11 = puVar12;
      } while (puVar12 != unaff_s4 + 9);
      *(undefined4 *)(uVar16 * 200) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = uVar17;
      iVar6 = _L0();
      unaff_s4[2] = (1 << (iVar6 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar8 = FUN_0001164a(iVar6);
    uVar14 = 0;
    puVar13 = (ushort *)(iVar6 + 10);
    while (uVar14 < *(ushort *)(iVar6 + 0xc0)) {
      if (*puVar13 == uVar8) goto _L0;
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + 6;
    }
    iVar15 = uVar7 * 0xc;
    uVar7 = uVar7 + 1 & 0xffff;
    *(short *)(iVar15 + iVar6 + 10) = (short)uVar8;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  short sVar10;
  uint *puVar11;
  uint *puVar12;
  ushort *puVar13;
  uint uVar14;
  int iVar15;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint uVar16;
  int unaff_s7;
  
  iVar6 = _L0();
  uVar16 = iVar6 << 0xe;
  FUN_000110d6(0,200);
  if ((*(uint *)(unaff_s0 + 0xec) & 2) == 0) {
    uVar5 = _L0(unaff_s0 + 0xb0,0);
    *(undefined2 *)(unaff_s3 + 0xb6) = uVar5;
    uVar7 = _L0();
    *(char *)(unaff_s3 + 0xb9) = (char)uVar7;
    if (0xb < uVar7) {
      FUN_0001134a(0,0,0x8f4);
    }
    iVar6 = unaff_s2 * 200 + unaff_s1;
    uVar7 = FUN_00011360(*(undefined2 *)(iVar6 + 0xb6));
    *(char *)(iVar6 + 0xba) = (char)uVar7;
    if (0xb < uVar7) {
      FUN_00011388(0,0,0x8f6);
    }
    iVar6 = unaff_s2 * 200 + unaff_s1;
    *(undefined *)(iVar6 + 0xb8) = 0xff;
    cVar9 = *(char *)(unaff_s0 + 0xf1);
    *(char *)(iVar6 + 0xbb) = cVar9;
    if (cVar9 != '\0') {
      FUN_000113c0(0,0,0x8f9);
    }
    *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
         (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  }
  else {
    uVar5 = _L0();
    *(undefined *)(unaff_s3 + 0xb1) = 2;
    *(undefined2 *)(unaff_s3 + 0xb6) = uVar5;
    uVar7 = FUN_00011106(unaff_s0 + 0xc3);
    uVar8 = FUN_00011118(0xf);
    if (uVar8 < uVar7) {
      uVar7 = uVar8;
    }
    *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbc) = (char)uVar7;
    if (3 < uVar7) {
      FUN_00011152(0,0,0x8a6);
    }
    FUN_0001116c(unaff_s7 + 0xb2 + unaff_s1,unaff_s0 + 0xc3,4);
    iVar6 = unaff_s2 * 200 + unaff_s1;
    *(undefined *)(iVar6 + 0xb2) = 0xff;
    *(undefined *)(iVar6 + 0xb8) = 7;
    uVar7 = _L0(*(undefined2 *)(iVar6 + 0xb6));
    *(char *)(iVar6 + 0xb9) = (char)uVar7;
    if (0xc < uVar7) {
      FUN_000111ae(0,0,0x8b8);
    }
    iVar6 = unaff_s2 * 200 + unaff_s1;
    uVar7 = FUN_000111c4(*(undefined2 *)(iVar6 + 0xb6));
    *(char *)(iVar6 + 0xba) = (char)uVar7;
    if (0xc < uVar7) {
      FUN_000111ec(0,0,0x8be);
    }
    *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
         (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
    iVar6 = _L0();
    if ((iVar6 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
      uVar16 = uVar16 | 0x40;
    }
    if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
      sVar10 = 0x2000;
    }
    else {
      sVar10 = 0x1000;
    }
    iVar6 = unaff_s2 * 200 + unaff_s1;
    *(short *)(iVar6 + 0xc2) = sVar10 + -0x101;
    bVar2 = *(byte *)(unaff_s0 + 0xf1);
    *(byte *)(iVar6 + 0xbb) = bVar2;
    if (3 < bVar2) {
      FUN_00011262(0,0,0x8d5);
    }
    cVar9 = *(char *)(unaff_s0 + 0xf1);
    if (cVar9 == '\0') {
      if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
        cVar9 = '\x01';
        goto _L0;
      }
    }
    else {
      if ((cVar9 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
        *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar9;
      }
    }
  }
  iVar6 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar6 + 0xb1) < 2) {
    uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
    uVar8 = 1 - *(byte *)(iVar6 + 0xbe);
    uVar14 = (((int)uVar7 >> 1 & 1U) + ((int)uVar7 >> 2 & 1U) << (uVar8 & 0x1f)) + (uVar7 & 1) +
             (((int)uVar7 >> 3 & 1U) << (uVar8 & 0x1f)) & 0xffff;
    uVar8 = 4;
    do {
      uVar4 = uVar8 & 0x1f;
      uVar8 = uVar8 + 1;
      uVar14 = uVar14 + ((int)uVar7 >> uVar4 & 1U) & 0xffff;
    } while (uVar8 != 0xc);
_L0:
    if (10 < uVar14) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar14;
    if (uVar14 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar6 + 0xb1) < 4) {
      uVar7 = (uint)*(byte *)(iVar6 + 0xb2);
      iVar15 = 8;
      uVar8 = 0;
      do {
        uVar14 = uVar7 & 1;
        iVar15 = iVar15 + -1;
        uVar7 = uVar7 >> 1;
        uVar8 = uVar8 + (1 << (*(byte *)(iVar6 + 0xbd) & 0x1f)) * uVar14 & 0xffff;
      } while (iVar15 != 0);
      iVar6 = unaff_s2 * 200 + unaff_s1;
      uVar14 = (uint)*(ushort *)(iVar6 + 0xb6);
      uVar7 = 1 - *(byte *)(iVar6 + 0xbe);
      uVar14 = uVar8 + (((int)uVar14 >> 1 & 1U) + ((int)uVar14 >> 2 & 1U) << (uVar7 & 0x1f)) +
                       (uVar14 & 1) + (((int)uVar14 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar6 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar6 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar6 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar6 + 0xc0);
  uVar7 = 0;
  puVar13 = (ushort *)(iVar6 + 10);
  while (uVar7 != uVar3) {
    *puVar13 = 0xffff;
    uVar7 = uVar7 + 1 & 0xffff;
    puVar13 = puVar13 + 6;
  }
  uVar5 = FUN_0001148e(iVar6);
  *(undefined2 *)(iVar6 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar6);
  *(undefined2 *)((uVar7 - 1) * 0xc + iVar6 + 10) = uVar5;
  uVar7 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar6 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar7) {
      *(short *)(iVar6 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar6 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar6 + 0xa8) = 0x10000;
      *(ushort *)(iVar6 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar6 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar6 + 0x7c) = 0;
      *(undefined4 *)(iVar6 + 0x84) = 0;
      *(undefined4 *)(iVar6 + 0x8c) = 0;
      *(undefined2 *)(iVar6 + 0x98) = 0;
      *(undefined4 *)(iVar6 + 0x94) = 0;
      *(undefined *)(iVar6 + 0xaf) = 0;
      FUN_000114fc(iVar6,1);
      *(undefined *)(iVar6 + 0xac) = 5;
      puVar11 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar12 = puVar11 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar11 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar11 = puVar12;
      } while (puVar12 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = uVar16;
      iVar6 = _L0();
      unaff_s4[2] = (1 << (iVar6 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar8 = FUN_0001164a(iVar6);
    uVar14 = 0;
    puVar13 = (ushort *)(iVar6 + 10);
    while (uVar14 < *(ushort *)(iVar6 + 0xc0)) {
      if (*puVar13 == uVar8) goto _L0;
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + 6;
    }
    iVar15 = uVar7 * 0xc;
    uVar7 = uVar7 + 1 & 0xffff;
    *(short *)(iVar15 + iVar6 + 10) = (short)uVar8;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000110d6(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int iVar15;
  
  FUN_000110d6();
  if ((*(uint *)(unaff_s0 + 0xec) & 2) == 0) {
    uVar5 = _L0(unaff_s0 + 0xb0,0);
    *(undefined2 *)(unaff_s3 + 0xb6) = uVar5;
    uVar6 = _L0();
    *(char *)(unaff_s3 + 0xb9) = (char)uVar6;
    if (0xb < uVar6) {
      FUN_0001134a(0,0,0x8f4);
    }
    iVar15 = unaff_s2 * 200 + unaff_s1;
    uVar6 = FUN_00011360(*(undefined2 *)(iVar15 + 0xb6));
    *(char *)(iVar15 + 0xba) = (char)uVar6;
    if (0xb < uVar6) {
      FUN_00011388(0,0,0x8f6);
    }
    iVar15 = unaff_s2 * 200 + unaff_s1;
    *(undefined *)(iVar15 + 0xb8) = 0xff;
    cVar8 = *(char *)(unaff_s0 + 0xf1);
    *(char *)(iVar15 + 0xbb) = cVar8;
    if (cVar8 != '\0') {
      FUN_000113c0(0,0,0x8f9);
    }
    *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
         (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  }
  else {
    uVar5 = _L0();
    *(undefined *)(unaff_s3 + 0xb1) = 2;
    *(undefined2 *)(unaff_s3 + 0xb6) = uVar5;
    uVar6 = FUN_00011106(unaff_s0 + 0xc3);
    uVar7 = FUN_00011118(0xf);
    if (uVar7 < uVar6) {
      uVar6 = uVar7;
    }
    *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbc) = (char)uVar6;
    if (3 < uVar6) {
      FUN_00011152(0,0,0x8a6);
    }
    FUN_0001116c(unaff_s7 + 0xb2 + unaff_s1,unaff_s0 + 0xc3,4);
    iVar15 = unaff_s2 * 200 + unaff_s1;
    *(undefined *)(iVar15 + 0xb2) = 0xff;
    *(undefined *)(iVar15 + 0xb8) = 7;
    uVar6 = _L0(*(undefined2 *)(iVar15 + 0xb6));
    *(char *)(iVar15 + 0xb9) = (char)uVar6;
    if (0xc < uVar6) {
      FUN_000111ae(0,0,0x8b8);
    }
    iVar15 = unaff_s2 * 200 + unaff_s1;
    uVar6 = FUN_000111c4(*(undefined2 *)(iVar15 + 0xb6));
    *(char *)(iVar15 + 0xba) = (char)uVar6;
    if (0xc < uVar6) {
      FUN_000111ec(0,0,0x8be);
    }
    *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
         (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
    iVar15 = _L0();
    if ((iVar15 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
      unaff_s6 = unaff_s6 | 0x40;
    }
    if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
      sVar9 = 0x2000;
    }
    else {
      sVar9 = 0x1000;
    }
    iVar15 = unaff_s2 * 200 + unaff_s1;
    *(short *)(iVar15 + 0xc2) = sVar9 + -0x101;
    bVar2 = *(byte *)(unaff_s0 + 0xf1);
    *(byte *)(iVar15 + 0xbb) = bVar2;
    if (3 < bVar2) {
      FUN_00011262(0,0,0x8d5);
    }
    cVar8 = *(char *)(unaff_s0 + 0xf1);
    if (cVar8 == '\0') {
      if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
        cVar8 = '\x01';
        goto _L0;
      }
    }
    else {
      if ((cVar8 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
        *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar8;
      }
    }
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar15 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar15 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar15 + 0xbe);
    uVar13 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar13) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar13;
    if (uVar13 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar15 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar15 + 0xb2);
      iVar14 = 8;
      uVar7 = 0;
      do {
        uVar13 = uVar6 & 1;
        iVar14 = iVar14 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar15 + 0xbd) & 0x1f)) * uVar13 & 0xffff;
      } while (iVar14 != 0);
      iVar15 = unaff_s2 * 200 + unaff_s1;
      uVar13 = (uint)*(ushort *)(iVar15 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar15 + 0xbe);
      uVar13 = uVar7 + (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar13 & 1) + (((int)uVar13 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar15 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar15 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar15 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar15 + 0xc0);
  uVar6 = 0;
  puVar12 = (ushort *)(iVar15 + 10);
  while (uVar6 != uVar3) {
    *puVar12 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar12 = puVar12 + 6;
  }
  uVar5 = FUN_0001148e(iVar15);
  *(undefined2 *)(iVar15 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar15);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar15 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar15 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar15 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar15 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar15 + 0xa8) = 0x10000;
      *(ushort *)(iVar15 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar15 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar15 + 0x7c) = 0;
      *(undefined4 *)(iVar15 + 0x84) = 0;
      *(undefined4 *)(iVar15 + 0x8c) = 0;
      *(undefined2 *)(iVar15 + 0x98) = 0;
      *(undefined4 *)(iVar15 + 0x94) = 0;
      *(undefined *)(iVar15 + 0xaf) = 0;
      FUN_000114fc(iVar15,1);
      *(undefined *)(iVar15 + 0xac) = 5;
      puVar10 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar11 = puVar10 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar10 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar10 = puVar11;
      } while (puVar11 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar15 = _L0();
      unaff_s4[2] = (1 << (iVar15 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar15);
    uVar13 = 0;
    puVar12 = (ushort *)(iVar15 + 10);
    while (uVar13 < *(ushort *)(iVar15 + 0xc0)) {
      if (*puVar12 == uVar7) goto _L0;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 6;
    }
    iVar14 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar14 + iVar15 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int iVar15;
  
  uVar5 = _L0();
  *(undefined *)(unaff_s3 + 0xb1) = 2;
  *(undefined2 *)(unaff_s3 + 0xb6) = uVar5;
  uVar6 = FUN_00011106(unaff_s0 + 0xc3);
  uVar7 = FUN_00011118(0xf);
  if (uVar7 < uVar6) {
    uVar6 = uVar7;
  }
  *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbc) = (char)uVar6;
  if (3 < uVar6) {
    FUN_00011152(0,0,0x8a6);
  }
  FUN_0001116c(unaff_s7 + 0xb2 + unaff_s1,unaff_s0 + 0xc3,4);
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(undefined *)(iVar15 + 0xb2) = 0xff;
  *(undefined *)(iVar15 + 0xb8) = 7;
  uVar6 = _L0(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xb9) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ae(0,0,0x8b8);
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  uVar6 = FUN_000111c4(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xba) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ec(0,0,0x8be);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar15 = _L0();
  if ((iVar15 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
    unaff_s6 = unaff_s6 | 0x40;
  }
  if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
    sVar9 = 0x2000;
  }
  else {
    sVar9 = 0x1000;
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(short *)(iVar15 + 0xc2) = sVar9 + -0x101;
  bVar2 = *(byte *)(unaff_s0 + 0xf1);
  *(byte *)(iVar15 + 0xbb) = bVar2;
  if (3 < bVar2) {
    FUN_00011262(0,0,0x8d5);
  }
  cVar8 = *(char *)(unaff_s0 + 0xf1);
  if (cVar8 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar8 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar8 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar8;
    }
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar15 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar15 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar15 + 0xbe);
    uVar13 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar13) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar13;
    if (uVar13 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar15 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar15 + 0xb2);
      iVar14 = 8;
      uVar7 = 0;
      do {
        uVar13 = uVar6 & 1;
        iVar14 = iVar14 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar15 + 0xbd) & 0x1f)) * uVar13 & 0xffff;
      } while (iVar14 != 0);
      iVar15 = unaff_s2 * 200 + unaff_s1;
      uVar13 = (uint)*(ushort *)(iVar15 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar15 + 0xbe);
      uVar13 = uVar7 + (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar13 & 1) + (((int)uVar13 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar15 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar15 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar15 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar15 + 0xc0);
  uVar6 = 0;
  puVar12 = (ushort *)(iVar15 + 10);
  while (uVar6 != uVar3) {
    *puVar12 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar12 = puVar12 + 6;
  }
  uVar5 = FUN_0001148e(iVar15);
  *(undefined2 *)(iVar15 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar15);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar15 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar15 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar15 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar15 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar15 + 0xa8) = 0x10000;
      *(ushort *)(iVar15 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar15 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar15 + 0x7c) = 0;
      *(undefined4 *)(iVar15 + 0x84) = 0;
      *(undefined4 *)(iVar15 + 0x8c) = 0;
      *(undefined2 *)(iVar15 + 0x98) = 0;
      *(undefined4 *)(iVar15 + 0x94) = 0;
      *(undefined *)(iVar15 + 0xaf) = 0;
      FUN_000114fc(iVar15,1);
      *(undefined *)(iVar15 + 0xac) = 5;
      puVar10 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar11 = puVar10 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar10 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar10 = puVar11;
      } while (puVar11 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar15 = _L0();
      unaff_s4[2] = (1 << (iVar15 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar15);
    uVar13 = 0;
    puVar12 = (ushort *)(iVar15 + 10);
    while (uVar13 < *(ushort *)(iVar15 + 0xc0)) {
      if (*puVar12 == uVar7) goto _L0;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 6;
    }
    iVar14 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar14 + iVar15 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011106(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int iVar15;
  
  uVar6 = FUN_00011106();
  uVar7 = FUN_00011118(0xf);
  if (uVar7 < uVar6) {
    uVar6 = uVar7;
  }
  *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbc) = (char)uVar6;
  if (3 < uVar6) {
    FUN_00011152(0,0,0x8a6);
  }
  FUN_0001116c(unaff_s7 + 0xb2 + unaff_s1,4);
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(undefined *)(iVar15 + 0xb2) = 0xff;
  *(undefined *)(iVar15 + 0xb8) = 7;
  uVar6 = _L0(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xb9) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ae(0,0,0x8b8);
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  uVar6 = FUN_000111c4(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xba) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ec(0,0,0x8be);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar15 = _L0();
  if ((iVar15 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
    unaff_s6 = unaff_s6 | 0x40;
  }
  if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
    sVar9 = 0x2000;
  }
  else {
    sVar9 = 0x1000;
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(short *)(iVar15 + 0xc2) = sVar9 + -0x101;
  bVar2 = *(byte *)(unaff_s0 + 0xf1);
  *(byte *)(iVar15 + 0xbb) = bVar2;
  if (3 < bVar2) {
    FUN_00011262(0,0,0x8d5);
  }
  cVar8 = *(char *)(unaff_s0 + 0xf1);
  if (cVar8 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar8 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar8 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar8;
    }
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar15 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar15 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar15 + 0xbe);
    uVar13 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar13) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar13;
    if (uVar13 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar15 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar15 + 0xb2);
      iVar14 = 8;
      uVar7 = 0;
      do {
        uVar13 = uVar6 & 1;
        iVar14 = iVar14 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar15 + 0xbd) & 0x1f)) * uVar13 & 0xffff;
      } while (iVar14 != 0);
      iVar15 = unaff_s2 * 200 + unaff_s1;
      uVar13 = (uint)*(ushort *)(iVar15 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar15 + 0xbe);
      uVar13 = uVar7 + (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar13 & 1) + (((int)uVar13 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar15 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar15 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar15 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar15 + 0xc0);
  uVar6 = 0;
  puVar12 = (ushort *)(iVar15 + 10);
  while (uVar6 != uVar3) {
    *puVar12 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar12 = puVar12 + 6;
  }
  uVar5 = FUN_0001148e(iVar15);
  *(undefined2 *)(iVar15 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar15);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar15 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar15 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar15 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar15 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar15 + 0xa8) = 0x10000;
      *(ushort *)(iVar15 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar15 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar15 + 0x7c) = 0;
      *(undefined4 *)(iVar15 + 0x84) = 0;
      *(undefined4 *)(iVar15 + 0x8c) = 0;
      *(undefined2 *)(iVar15 + 0x98) = 0;
      *(undefined4 *)(iVar15 + 0x94) = 0;
      *(undefined *)(iVar15 + 0xaf) = 0;
      FUN_000114fc(iVar15,1);
      *(undefined *)(iVar15 + 0xac) = 5;
      puVar10 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar11 = puVar10 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar10 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar10 = puVar11;
      } while (puVar11 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar15 = _L0();
      unaff_s4[2] = (1 << (iVar15 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar15);
    uVar13 = 0;
    puVar12 = (ushort *)(iVar15 + 10);
    while (uVar13 < *(ushort *)(iVar15 + 0xc0)) {
      if (*puVar12 == uVar7) goto _L0;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 6;
    }
    iVar14 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar14 + iVar15 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011118(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int iVar15;
  uint unaff_s8;
  
  uVar6 = FUN_00011118();
  if (uVar6 < unaff_s8) {
    unaff_s8 = uVar6;
  }
  *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbc) = (char)unaff_s8;
  if (3 < unaff_s8) {
    FUN_00011152(0,0,0x8a6);
  }
  FUN_0001116c(unaff_s7 + 0xb2 + unaff_s1,4);
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(undefined *)(iVar15 + 0xb2) = 0xff;
  *(undefined *)(iVar15 + 0xb8) = 7;
  uVar6 = _L0(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xb9) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ae(0,0,0x8b8);
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  uVar6 = FUN_000111c4(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xba) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ec(0,0,0x8be);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar15 = _L0();
  if ((iVar15 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
    unaff_s6 = unaff_s6 | 0x40;
  }
  if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
    sVar9 = 0x2000;
  }
  else {
    sVar9 = 0x1000;
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(short *)(iVar15 + 0xc2) = sVar9 + -0x101;
  bVar2 = *(byte *)(unaff_s0 + 0xf1);
  *(byte *)(iVar15 + 0xbb) = bVar2;
  if (3 < bVar2) {
    FUN_00011262(0,0,0x8d5);
  }
  cVar8 = *(char *)(unaff_s0 + 0xf1);
  if (cVar8 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar8 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar8 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar8;
    }
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar15 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar15 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar15 + 0xbe);
    uVar13 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar13) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar13;
    if (uVar13 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar15 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar15 + 0xb2);
      iVar14 = 8;
      uVar7 = 0;
      do {
        uVar13 = uVar6 & 1;
        iVar14 = iVar14 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar15 + 0xbd) & 0x1f)) * uVar13 & 0xffff;
      } while (iVar14 != 0);
      iVar15 = unaff_s2 * 200 + unaff_s1;
      uVar13 = (uint)*(ushort *)(iVar15 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar15 + 0xbe);
      uVar13 = uVar7 + (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar13 & 1) + (((int)uVar13 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar15 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar15 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar15 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar15 + 0xc0);
  uVar6 = 0;
  puVar12 = (ushort *)(iVar15 + 10);
  while (uVar6 != uVar3) {
    *puVar12 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar12 = puVar12 + 6;
  }
  uVar5 = FUN_0001148e(iVar15);
  *(undefined2 *)(iVar15 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar15);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar15 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar15 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar15 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar15 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar15 + 0xa8) = 0x10000;
      *(ushort *)(iVar15 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar15 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar15 + 0x7c) = 0;
      *(undefined4 *)(iVar15 + 0x84) = 0;
      *(undefined4 *)(iVar15 + 0x8c) = 0;
      *(undefined2 *)(iVar15 + 0x98) = 0;
      *(undefined4 *)(iVar15 + 0x94) = 0;
      *(undefined *)(iVar15 + 0xaf) = 0;
      FUN_000114fc(iVar15,1);
      *(undefined *)(iVar15 + 0xac) = 5;
      puVar10 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar11 = puVar10 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar10 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar10 = puVar11;
      } while (puVar11 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar15 = _L0();
      unaff_s4[2] = (1 << (iVar15 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar15);
    uVar13 = 0;
    puVar12 = (ushort *)(iVar15 + 10);
    while (uVar13 < *(ushort *)(iVar15 + 0xc0)) {
      if (*puVar12 == uVar7) goto _L0;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 6;
    }
    iVar14 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar14 + iVar15 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011152(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int iVar15;
  
  FUN_00011152();
  FUN_0001116c(unaff_s7 + 0xb2 + unaff_s1,4);
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(undefined *)(iVar15 + 0xb2) = 0xff;
  *(undefined *)(iVar15 + 0xb8) = 7;
  uVar6 = _L0(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xb9) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ae(0,0,0x8b8);
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  uVar6 = FUN_000111c4(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xba) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ec(0,0,0x8be);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar15 = _L0();
  if ((iVar15 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
    unaff_s6 = unaff_s6 | 0x40;
  }
  if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
    sVar9 = 0x2000;
  }
  else {
    sVar9 = 0x1000;
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(short *)(iVar15 + 0xc2) = sVar9 + -0x101;
  bVar2 = *(byte *)(unaff_s0 + 0xf1);
  *(byte *)(iVar15 + 0xbb) = bVar2;
  if (3 < bVar2) {
    FUN_00011262(0,0,0x8d5);
  }
  cVar8 = *(char *)(unaff_s0 + 0xf1);
  if (cVar8 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar8 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar8 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar8;
    }
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar15 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar15 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar15 + 0xbe);
    uVar13 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar13) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar13;
    if (uVar13 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar15 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar15 + 0xb2);
      iVar14 = 8;
      uVar7 = 0;
      do {
        uVar13 = uVar6 & 1;
        iVar14 = iVar14 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar15 + 0xbd) & 0x1f)) * uVar13 & 0xffff;
      } while (iVar14 != 0);
      iVar15 = unaff_s2 * 200 + unaff_s1;
      uVar13 = (uint)*(ushort *)(iVar15 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar15 + 0xbe);
      uVar13 = uVar7 + (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar13 & 1) + (((int)uVar13 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar15 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar15 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar15 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar15 + 0xc0);
  uVar6 = 0;
  puVar12 = (ushort *)(iVar15 + 10);
  while (uVar6 != uVar3) {
    *puVar12 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar12 = puVar12 + 6;
  }
  uVar5 = FUN_0001148e(iVar15);
  *(undefined2 *)(iVar15 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar15);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar15 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar15 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar15 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar15 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar15 + 0xa8) = 0x10000;
      *(ushort *)(iVar15 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar15 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar15 + 0x7c) = 0;
      *(undefined4 *)(iVar15 + 0x84) = 0;
      *(undefined4 *)(iVar15 + 0x8c) = 0;
      *(undefined2 *)(iVar15 + 0x98) = 0;
      *(undefined4 *)(iVar15 + 0x94) = 0;
      *(undefined *)(iVar15 + 0xaf) = 0;
      FUN_000114fc(iVar15,1);
      *(undefined *)(iVar15 + 0xac) = 5;
      puVar10 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar11 = puVar10 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar10 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar10 = puVar11;
      } while (puVar11 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar15 = _L0();
      unaff_s4[2] = (1 << (iVar15 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar15);
    uVar13 = 0;
    puVar12 = (ushort *)(iVar15 + 10);
    while (uVar13 < *(ushort *)(iVar15 + 0xc0)) {
      if (*puVar12 == uVar7) goto _L0;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 6;
    }
    iVar14 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar14 + iVar15 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001116c(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int iVar15;
  
  FUN_0001116c();
  iVar15 = unaff_s7 + unaff_s1;
  *(undefined *)(iVar15 + 0xb2) = 0xff;
  *(undefined *)(iVar15 + 0xb8) = 7;
  uVar6 = _L0(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xb9) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ae(0,0,0x8b8);
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  uVar6 = FUN_000111c4(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xba) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ec(0,0,0x8be);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar15 = _L0();
  if ((iVar15 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
    unaff_s6 = unaff_s6 | 0x40;
  }
  if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
    sVar9 = 0x2000;
  }
  else {
    sVar9 = 0x1000;
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(short *)(iVar15 + 0xc2) = sVar9 + -0x101;
  bVar2 = *(byte *)(unaff_s0 + 0xf1);
  *(byte *)(iVar15 + 0xbb) = bVar2;
  if (3 < bVar2) {
    FUN_00011262(0,0,0x8d5);
  }
  cVar8 = *(char *)(unaff_s0 + 0xf1);
  if (cVar8 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar8 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar8 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar8;
    }
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar15 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar15 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar15 + 0xbe);
    uVar13 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar13) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar13;
    if (uVar13 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar15 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar15 + 0xb2);
      iVar14 = 8;
      uVar7 = 0;
      do {
        uVar13 = uVar6 & 1;
        iVar14 = iVar14 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar15 + 0xbd) & 0x1f)) * uVar13 & 0xffff;
      } while (iVar14 != 0);
      iVar15 = unaff_s2 * 200 + unaff_s1;
      uVar13 = (uint)*(ushort *)(iVar15 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar15 + 0xbe);
      uVar13 = uVar7 + (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar13 & 1) + (((int)uVar13 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar15 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar15 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar15 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar15 + 0xc0);
  uVar6 = 0;
  puVar12 = (ushort *)(iVar15 + 10);
  while (uVar6 != uVar3) {
    *puVar12 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar12 = puVar12 + 6;
  }
  uVar5 = FUN_0001148e(iVar15);
  *(undefined2 *)(iVar15 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar15);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar15 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar15 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar15 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar15 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar15 + 0xa8) = 0x10000;
      *(ushort *)(iVar15 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar15 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar15 + 0x7c) = 0;
      *(undefined4 *)(iVar15 + 0x84) = 0;
      *(undefined4 *)(iVar15 + 0x8c) = 0;
      *(undefined2 *)(iVar15 + 0x98) = 0;
      *(undefined4 *)(iVar15 + 0x94) = 0;
      *(undefined *)(iVar15 + 0xaf) = 0;
      FUN_000114fc(iVar15,1);
      *(undefined *)(iVar15 + 0xac) = 5;
      puVar10 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar11 = puVar10 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar10 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar10 = puVar11;
      } while (puVar11 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar15 = _L0();
      unaff_s4[2] = (1 << (iVar15 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar15);
    uVar13 = 0;
    puVar12 = (ushort *)(iVar15 + 10);
    while (uVar13 < *(ushort *)(iVar15 + 0xc0)) {
      if (*puVar12 == uVar7) goto _L0;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 6;
    }
    iVar14 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar14 + iVar15 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int iVar15;
  
  uVar6 = _L0();
  *(char *)(unaff_s7 + 0xb9) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ae(0,0,0x8b8);
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  uVar6 = FUN_000111c4(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xba) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ec(0,0,0x8be);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar15 = _L0();
  if ((iVar15 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
    unaff_s6 = unaff_s6 | 0x40;
  }
  if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
    sVar9 = 0x2000;
  }
  else {
    sVar9 = 0x1000;
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(short *)(iVar15 + 0xc2) = sVar9 + -0x101;
  bVar2 = *(byte *)(unaff_s0 + 0xf1);
  *(byte *)(iVar15 + 0xbb) = bVar2;
  if (3 < bVar2) {
    FUN_00011262(0,0,0x8d5);
  }
  cVar8 = *(char *)(unaff_s0 + 0xf1);
  if (cVar8 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar8 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar8 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar8;
    }
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar15 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar15 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar15 + 0xbe);
    uVar13 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar13) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar13;
    if (uVar13 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar15 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar15 + 0xb2);
      iVar14 = 8;
      uVar7 = 0;
      do {
        uVar13 = uVar6 & 1;
        iVar14 = iVar14 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar15 + 0xbd) & 0x1f)) * uVar13 & 0xffff;
      } while (iVar14 != 0);
      iVar15 = unaff_s2 * 200 + unaff_s1;
      uVar13 = (uint)*(ushort *)(iVar15 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar15 + 0xbe);
      uVar13 = uVar7 + (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar13 & 1) + (((int)uVar13 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar15 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar15 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar15 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar15 + 0xc0);
  uVar6 = 0;
  puVar12 = (ushort *)(iVar15 + 10);
  while (uVar6 != uVar3) {
    *puVar12 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar12 = puVar12 + 6;
  }
  uVar5 = FUN_0001148e(iVar15);
  *(undefined2 *)(iVar15 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar15);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar15 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar15 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar15 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar15 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar15 + 0xa8) = 0x10000;
      *(ushort *)(iVar15 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar15 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar15 + 0x7c) = 0;
      *(undefined4 *)(iVar15 + 0x84) = 0;
      *(undefined4 *)(iVar15 + 0x8c) = 0;
      *(undefined2 *)(iVar15 + 0x98) = 0;
      *(undefined4 *)(iVar15 + 0x94) = 0;
      *(undefined *)(iVar15 + 0xaf) = 0;
      FUN_000114fc(iVar15,1);
      *(undefined *)(iVar15 + 0xac) = 5;
      puVar10 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar11 = puVar10 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar10 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar10 = puVar11;
      } while (puVar11 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar15 = _L0();
      unaff_s4[2] = (1 << (iVar15 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar15);
    uVar13 = 0;
    puVar12 = (ushort *)(iVar15 + 10);
    while (uVar13 < *(ushort *)(iVar15 + 0xc0)) {
      if (*puVar12 == uVar7) goto _L0;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 6;
    }
    iVar14 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar14 + iVar15 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000111ae(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int iVar15;
  
  FUN_000111ae();
  iVar15 = unaff_s2 * 200 + unaff_s1;
  uVar6 = FUN_000111c4(*(undefined2 *)(iVar15 + 0xb6));
  *(char *)(iVar15 + 0xba) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ec(0,0,0x8be);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar15 = _L0();
  if ((iVar15 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
    unaff_s6 = unaff_s6 | 0x40;
  }
  if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
    sVar9 = 0x2000;
  }
  else {
    sVar9 = 0x1000;
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  *(short *)(iVar15 + 0xc2) = sVar9 + -0x101;
  bVar2 = *(byte *)(unaff_s0 + 0xf1);
  *(byte *)(iVar15 + 0xbb) = bVar2;
  if (3 < bVar2) {
    FUN_00011262(0,0,0x8d5);
  }
  cVar8 = *(char *)(unaff_s0 + 0xf1);
  if (cVar8 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar8 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar8 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar8;
    }
  }
  iVar15 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar15 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar15 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar15 + 0xbe);
    uVar13 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar13) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar13;
    if (uVar13 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar15 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar15 + 0xb2);
      iVar14 = 8;
      uVar7 = 0;
      do {
        uVar13 = uVar6 & 1;
        iVar14 = iVar14 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar15 + 0xbd) & 0x1f)) * uVar13 & 0xffff;
      } while (iVar14 != 0);
      iVar15 = unaff_s2 * 200 + unaff_s1;
      uVar13 = (uint)*(ushort *)(iVar15 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar15 + 0xbe);
      uVar13 = uVar7 + (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar13 & 1) + (((int)uVar13 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar15 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar15 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar15 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar15 + 0xc0);
  uVar6 = 0;
  puVar12 = (ushort *)(iVar15 + 10);
  while (uVar6 != uVar3) {
    *puVar12 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar12 = puVar12 + 6;
  }
  uVar5 = FUN_0001148e(iVar15);
  *(undefined2 *)(iVar15 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar15);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar15 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar15 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar15 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar15 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar15 + 0xa8) = 0x10000;
      *(ushort *)(iVar15 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar15 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar15 + 0x7c) = 0;
      *(undefined4 *)(iVar15 + 0x84) = 0;
      *(undefined4 *)(iVar15 + 0x8c) = 0;
      *(undefined2 *)(iVar15 + 0x98) = 0;
      *(undefined4 *)(iVar15 + 0x94) = 0;
      *(undefined *)(iVar15 + 0xaf) = 0;
      FUN_000114fc(iVar15,1);
      *(undefined *)(iVar15 + 0xac) = 5;
      puVar10 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar11 = puVar10 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar10 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar10 = puVar11;
      } while (puVar11 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar15 = _L0();
      unaff_s4[2] = (1 << (iVar15 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar15);
    uVar13 = 0;
    puVar12 = (ushort *)(iVar15 + 10);
    while (uVar13 < *(ushort *)(iVar15 + 0xc0)) {
      if (*puVar12 == uVar7) goto _L0;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 6;
    }
    iVar14 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar14 + iVar15 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000111c4(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  short sVar10;
  uint *puVar11;
  uint *puVar12;
  ushort *puVar13;
  uint uVar14;
  int iVar15;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  
  uVar6 = FUN_000111c4();
  *(char *)(unaff_s7 + 0xba) = (char)uVar6;
  if (0xc < uVar6) {
    FUN_000111ec(0,0,0x8be);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar7 = _L0();
  if ((iVar7 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
    unaff_s6 = unaff_s6 | 0x40;
  }
  if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
    sVar10 = 0x2000;
  }
  else {
    sVar10 = 0x1000;
  }
  iVar7 = unaff_s2 * 200 + unaff_s1;
  *(short *)(iVar7 + 0xc2) = sVar10 + -0x101;
  bVar2 = *(byte *)(unaff_s0 + 0xf1);
  *(byte *)(iVar7 + 0xbb) = bVar2;
  if (3 < bVar2) {
    FUN_00011262(0,0,0x8d5);
  }
  cVar9 = *(char *)(unaff_s0 + 0xf1);
  if (cVar9 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar9 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar9 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar9;
    }
  }
  iVar7 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar7 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
    uVar8 = 1 - *(byte *)(iVar7 + 0xbe);
    uVar14 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar8 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar8 & 0x1f)) & 0xffff;
    uVar8 = 4;
    do {
      uVar4 = uVar8 & 0x1f;
      uVar8 = uVar8 + 1;
      uVar14 = uVar14 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar8 != 0xc);
_L0:
    if (10 < uVar14) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar14;
    if (uVar14 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar7 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar7 + 0xb2);
      iVar15 = 8;
      uVar8 = 0;
      do {
        uVar14 = uVar6 & 1;
        iVar15 = iVar15 + -1;
        uVar6 = uVar6 >> 1;
        uVar8 = uVar8 + (1 << (*(byte *)(iVar7 + 0xbd) & 0x1f)) * uVar14 & 0xffff;
      } while (iVar15 != 0);
      iVar7 = unaff_s2 * 200 + unaff_s1;
      uVar14 = (uint)*(ushort *)(iVar7 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar7 + 0xbe);
      uVar14 = uVar8 + (((int)uVar14 >> 1 & 1U) + ((int)uVar14 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar14 & 1) + (((int)uVar14 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar7 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar7 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar7 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar7 + 0xc0);
  uVar6 = 0;
  puVar13 = (ushort *)(iVar7 + 10);
  while (uVar6 != uVar3) {
    *puVar13 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar13 = puVar13 + 6;
  }
  uVar5 = FUN_0001148e(iVar7);
  *(undefined2 *)(iVar7 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar7);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar7 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar7 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar7 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar7 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar7 + 0xa8) = 0x10000;
      *(ushort *)(iVar7 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar7 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar7 + 0x7c) = 0;
      *(undefined4 *)(iVar7 + 0x84) = 0;
      *(undefined4 *)(iVar7 + 0x8c) = 0;
      *(undefined2 *)(iVar7 + 0x98) = 0;
      *(undefined4 *)(iVar7 + 0x94) = 0;
      *(undefined *)(iVar7 + 0xaf) = 0;
      FUN_000114fc(iVar7,1);
      *(undefined *)(iVar7 + 0xac) = 5;
      puVar11 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar12 = puVar11 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar11 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar11 = puVar12;
      } while (puVar12 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar7 = _L0();
      unaff_s4[2] = (1 << (iVar7 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar8 = FUN_0001164a(iVar7);
    uVar14 = 0;
    puVar13 = (ushort *)(iVar7 + 10);
    while (uVar14 < *(ushort *)(iVar7 + 0xc0)) {
      if (*puVar13 == uVar8) goto _L0;
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + 6;
    }
    iVar15 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar15 + iVar7 + 10) = (short)uVar8;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000111ec(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  uint uVar15;
  
  FUN_000111ec();
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar6 = _L0();
  if ((iVar6 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
    unaff_s6 = unaff_s6 | 0x40;
  }
  if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
    sVar9 = 0x2000;
  }
  else {
    sVar9 = 0x1000;
  }
  iVar6 = unaff_s2 * 200 + unaff_s1;
  *(short *)(iVar6 + 0xc2) = sVar9 + -0x101;
  bVar2 = *(byte *)(unaff_s0 + 0xf1);
  *(byte *)(iVar6 + 0xbb) = bVar2;
  if (3 < bVar2) {
    FUN_00011262(0,0,0x8d5);
  }
  cVar8 = *(char *)(unaff_s0 + 0xf1);
  if (cVar8 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar8 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar8 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar8;
    }
  }
  iVar6 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar6 + 0xb1) < 2) {
    uVar15 = (uint)*(ushort *)(iVar6 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar6 + 0xbe);
    uVar13 = (((int)uVar15 >> 1 & 1U) + ((int)uVar15 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar15 & 1) +
             (((int)uVar15 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + ((int)uVar15 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar13) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar13;
    if (uVar13 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar6 + 0xb1) < 4) {
      uVar15 = (uint)*(byte *)(iVar6 + 0xb2);
      iVar14 = 8;
      uVar7 = 0;
      do {
        uVar13 = uVar15 & 1;
        iVar14 = iVar14 + -1;
        uVar15 = uVar15 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar6 + 0xbd) & 0x1f)) * uVar13 & 0xffff;
      } while (iVar14 != 0);
      iVar6 = unaff_s2 * 200 + unaff_s1;
      uVar13 = (uint)*(ushort *)(iVar6 + 0xb6);
      uVar15 = 1 - *(byte *)(iVar6 + 0xbe);
      uVar13 = uVar7 + (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar15 & 0x1f)) +
                       (uVar13 & 1) + (((int)uVar13 >> 3 & 1U) << (uVar15 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar6 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar6 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar6 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar6 + 0xc0);
  uVar15 = 0;
  puVar12 = (ushort *)(iVar6 + 10);
  while (uVar15 != uVar3) {
    *puVar12 = 0xffff;
    uVar15 = uVar15 + 1 & 0xffff;
    puVar12 = puVar12 + 6;
  }
  uVar5 = FUN_0001148e(iVar6);
  *(undefined2 *)(iVar6 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar6);
  *(undefined2 *)((uVar15 - 1) * 0xc + iVar6 + 10) = uVar5;
  uVar15 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar6 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar15) {
      *(short *)(iVar6 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar6 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar6 + 0xa8) = 0x10000;
      *(ushort *)(iVar6 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar6 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar6 + 0x7c) = 0;
      *(undefined4 *)(iVar6 + 0x84) = 0;
      *(undefined4 *)(iVar6 + 0x8c) = 0;
      *(undefined2 *)(iVar6 + 0x98) = 0;
      *(undefined4 *)(iVar6 + 0x94) = 0;
      *(undefined *)(iVar6 + 0xaf) = 0;
      FUN_000114fc(iVar6,1);
      *(undefined *)(iVar6 + 0xac) = 5;
      puVar10 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar11 = puVar10 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar10 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar10 = puVar11;
      } while (puVar11 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar6 = _L0();
      unaff_s4[2] = (1 << (iVar6 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar6);
    uVar13 = 0;
    puVar12 = (ushort *)(iVar6 + 10);
    while (uVar13 < *(ushort *)(iVar6 + 0xc0)) {
      if (*puVar12 == uVar7) goto _L0;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 6;
    }
    iVar14 = uVar15 * 0xc;
    uVar15 = uVar15 + 1 & 0xffff;
    *(short *)(iVar14 + iVar6 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  uint uVar15;
  
  iVar6 = _L0();
  if ((iVar6 != 0) && ((*(ushort *)(unaff_s0 + 0xc0) & 1) != 0)) {
    unaff_s6 = unaff_s6 | 0x40;
  }
  if ((int)((uint)*(ushort *)(unaff_s0 + 0xc0) << 0x14) < 0) {
    sVar9 = 0x2000;
  }
  else {
    sVar9 = 0x1000;
  }
  iVar6 = unaff_s2 * 200 + unaff_s1;
  *(short *)(iVar6 + 0xc2) = sVar9 + -0x101;
  bVar2 = *(byte *)(unaff_s0 + 0xf1);
  *(byte *)(iVar6 + 0xbb) = bVar2;
  if (3 < bVar2) {
    FUN_00011262(0,0,0x8d5);
  }
  cVar8 = *(char *)(unaff_s0 + 0xf1);
  if (cVar8 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar8 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar8 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar8;
    }
  }
  iVar6 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar6 + 0xb1) < 2) {
    uVar15 = (uint)*(ushort *)(iVar6 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar6 + 0xbe);
    uVar13 = (((int)uVar15 >> 1 & 1U) + ((int)uVar15 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar15 & 1) +
             (((int)uVar15 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar13 = uVar13 + ((int)uVar15 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar13) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar13;
    if (uVar13 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar6 + 0xb1) < 4) {
      uVar15 = (uint)*(byte *)(iVar6 + 0xb2);
      iVar14 = 8;
      uVar7 = 0;
      do {
        uVar13 = uVar15 & 1;
        iVar14 = iVar14 + -1;
        uVar15 = uVar15 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar6 + 0xbd) & 0x1f)) * uVar13 & 0xffff;
      } while (iVar14 != 0);
      iVar6 = unaff_s2 * 200 + unaff_s1;
      uVar13 = (uint)*(ushort *)(iVar6 + 0xb6);
      uVar15 = 1 - *(byte *)(iVar6 + 0xbe);
      uVar13 = uVar7 + (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar15 & 0x1f)) +
                       (uVar13 & 1) + (((int)uVar13 >> 3 & 1U) << (uVar15 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar6 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar6 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar6 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar6 + 0xc0);
  uVar15 = 0;
  puVar12 = (ushort *)(iVar6 + 10);
  while (uVar15 != uVar3) {
    *puVar12 = 0xffff;
    uVar15 = uVar15 + 1 & 0xffff;
    puVar12 = puVar12 + 6;
  }
  uVar5 = FUN_0001148e(iVar6);
  *(undefined2 *)(iVar6 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar6);
  *(undefined2 *)((uVar15 - 1) * 0xc + iVar6 + 10) = uVar5;
  uVar15 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar6 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar15) {
      *(short *)(iVar6 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar6 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar6 + 0xa8) = 0x10000;
      *(ushort *)(iVar6 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar6 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar6 + 0x7c) = 0;
      *(undefined4 *)(iVar6 + 0x84) = 0;
      *(undefined4 *)(iVar6 + 0x8c) = 0;
      *(undefined2 *)(iVar6 + 0x98) = 0;
      *(undefined4 *)(iVar6 + 0x94) = 0;
      *(undefined *)(iVar6 + 0xaf) = 0;
      FUN_000114fc(iVar6,1);
      *(undefined *)(iVar6 + 0xac) = 5;
      puVar10 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar11 = puVar10 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar10 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar10 = puVar11;
      } while (puVar11 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar6 = _L0();
      unaff_s4[2] = (1 << (iVar6 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar6);
    uVar13 = 0;
    puVar12 = (ushort *)(iVar6 + 10);
    while (uVar13 < *(ushort *)(iVar6 + 0xc0)) {
      if (*puVar12 == uVar7) goto _L0;
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 6;
    }
    iVar14 = uVar15 * 0xc;
    uVar15 = uVar15 + 1 & 0xffff;
    *(short *)(iVar14 + iVar6 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011262(void)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  uint uVar13;
  
  FUN_00011262();
  cVar6 = *(char *)(unaff_s0 + 0xf1);
  if (cVar6 == '\0') {
    if ((*(ushort *)(unaff_s0 + 0xc0) & 0x20) != 0) {
      cVar6 = '\x01';
      goto _L0;
    }
  }
  else {
    if ((cVar6 == '\x01') && ((*(ushort *)(unaff_s0 + 0xc0) & 0x40) != 0)) {
_L0:
      *(char *)(unaff_s2 * 200 + unaff_s1 + 0xbd) = cVar6;
    }
  }
  iVar7 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar7 + 0xb1) < 2) {
    uVar13 = (uint)*(ushort *)(iVar7 + 0xb6);
    uVar5 = 1 - *(byte *)(iVar7 + 0xbe);
    uVar11 = (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar5 & 0x1f)) + (uVar13 & 1) +
             (((int)uVar13 >> 3 & 1U) << (uVar5 & 0x1f)) & 0xffff;
    uVar5 = 4;
    do {
      uVar3 = uVar5 & 0x1f;
      uVar5 = uVar5 + 1;
      uVar11 = uVar11 + ((int)uVar13 >> uVar3 & 1U) & 0xffff;
    } while (uVar5 != 0xc);
_L0:
    if (10 < uVar11) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar11;
    if (uVar11 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar7 + 0xb1) < 4) {
      uVar13 = (uint)*(byte *)(iVar7 + 0xb2);
      iVar12 = 8;
      uVar5 = 0;
      do {
        uVar11 = uVar13 & 1;
        iVar12 = iVar12 + -1;
        uVar13 = uVar13 >> 1;
        uVar5 = uVar5 + (1 << (*(byte *)(iVar7 + 0xbd) & 0x1f)) * uVar11 & 0xffff;
      } while (iVar12 != 0);
      iVar7 = unaff_s2 * 200 + unaff_s1;
      uVar11 = (uint)*(ushort *)(iVar7 + 0xb6);
      uVar13 = 1 - *(byte *)(iVar7 + 0xbe);
      uVar11 = uVar5 + (((int)uVar11 >> 1 & 1U) + ((int)uVar11 >> 2 & 1U) << (uVar13 & 0x1f)) +
                       (uVar11 & 1) + (((int)uVar11 >> 3 & 1U) << (uVar13 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar7 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar7 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar7 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar2 = *(ushort *)(iVar7 + 0xc0);
  uVar13 = 0;
  puVar10 = (ushort *)(iVar7 + 10);
  while (uVar13 != uVar2) {
    *puVar10 = 0xffff;
    uVar13 = uVar13 + 1 & 0xffff;
    puVar10 = puVar10 + 6;
  }
  uVar4 = FUN_0001148e(iVar7);
  *(undefined2 *)(iVar7 + 10) = uVar4;
  uVar4 = FUN_0001149c(iVar7);
  *(undefined2 *)((uVar13 - 1) * 0xc + iVar7 + 10) = uVar4;
  uVar13 = 1;
_L0:
  do {
    uVar2 = *(ushort *)(iVar7 + 0xc0);
    if ((int)(uVar2 - 1) <= (int)uVar13) {
      *(short *)(iVar7 + 0x80) = (short)(uVar2 - 1);
      *(ushort *)(iVar7 + 0x90) = uVar2 - 3;
      *(undefined4 *)(iVar7 + 0xa8) = 0x10000;
      *(ushort *)(iVar7 + 0x88) = uVar2 - 2;
      *(undefined2 *)(iVar7 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar7 + 0x7c) = 0;
      *(undefined4 *)(iVar7 + 0x84) = 0;
      *(undefined4 *)(iVar7 + 0x8c) = 0;
      *(undefined2 *)(iVar7 + 0x98) = 0;
      *(undefined4 *)(iVar7 + 0x94) = 0;
      *(undefined *)(iVar7 + 0xaf) = 0;
      FUN_000114fc(iVar7,1);
      *(undefined *)(iVar7 + 0xac) = 5;
      puVar8 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar9 = puVar8 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar8 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar8 = puVar9;
      } while (puVar9 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar7 = _L0();
      unaff_s4[2] = (1 << (iVar7 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar5 = FUN_0001164a(iVar7);
    uVar11 = 0;
    puVar10 = (ushort *)(iVar7 + 10);
    while (uVar11 < *(ushort *)(iVar7 + 0xc0)) {
      if (*puVar10 == uVar5) goto _L0;
      uVar11 = uVar11 + 1;
      puVar10 = puVar10 + 6;
    }
    iVar12 = uVar13 * 0xc;
    uVar13 = uVar13 + 1 & 0xffff;
    *(short *)(iVar12 + iVar7 + 10) = (short)uVar5;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000112aa(void)

{
  byte *pbVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int iVar10;
  int unaff_s8;
  uint uVar11;
  
  FUN_000112aa();
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,unaff_s8 + -0x700);
  }
  iVar10 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar10 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar2 = *(ushort *)(iVar10 + 0xc0);
  uVar11 = 0;
  puVar7 = (ushort *)(iVar10 + 10);
  while (uVar11 != uVar2) {
    *puVar7 = 0xffff;
    uVar11 = uVar11 + 1 & 0xffff;
    puVar7 = puVar7 + 6;
  }
  uVar3 = FUN_0001148e(iVar10);
  *(undefined2 *)(iVar10 + 10) = uVar3;
  uVar3 = FUN_0001149c(iVar10);
  *(undefined2 *)((uVar11 - 1) * 0xc + iVar10 + 10) = uVar3;
  uVar11 = 1;
_L0:
  do {
    uVar2 = *(ushort *)(iVar10 + 0xc0);
    if ((int)(uVar2 - 1) <= (int)uVar11) {
      *(short *)(iVar10 + 0x80) = (short)(uVar2 - 1);
      *(ushort *)(iVar10 + 0x90) = uVar2 - 3;
      *(undefined4 *)(iVar10 + 0xa8) = 0x10000;
      *(ushort *)(iVar10 + 0x88) = uVar2 - 2;
      *(undefined2 *)(iVar10 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar10 + 0x7c) = 0;
      *(undefined4 *)(iVar10 + 0x84) = 0;
      *(undefined4 *)(iVar10 + 0x8c) = 0;
      *(undefined2 *)(iVar10 + 0x98) = 0;
      *(undefined4 *)(iVar10 + 0x94) = 0;
      *(undefined *)(iVar10 + 0xaf) = 0;
      FUN_000114fc(iVar10,1);
      *(undefined *)(iVar10 + 0xac) = 5;
      puVar5 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar6 = puVar5 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar5 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar5 = puVar6;
      } while (puVar6 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar10 = _L0();
      unaff_s4[2] = (1 << (iVar10 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar4 = FUN_0001164a(iVar10);
    uVar8 = 0;
    puVar7 = (ushort *)(iVar10 + 10);
    while (uVar8 < *(ushort *)(iVar10 + 0xc0)) {
      if (*puVar7 == uVar4) goto _L0;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 6;
    }
    iVar9 = uVar11 * 0xc;
    uVar11 = uVar11 + 1 & 0xffff;
    *(short *)(iVar9 + iVar10 + 10) = (short)uVar4;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000112d6(void)

{
  byte *pbVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int iVar10;
  uint uVar11;
  
  FUN_000112d6();
  iVar10 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar10 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar2 = *(ushort *)(iVar10 + 0xc0);
  uVar11 = 0;
  puVar7 = (ushort *)(iVar10 + 10);
  while (uVar11 != uVar2) {
    *puVar7 = 0xffff;
    uVar11 = uVar11 + 1 & 0xffff;
    puVar7 = puVar7 + 6;
  }
  uVar3 = FUN_0001148e(iVar10);
  *(undefined2 *)(iVar10 + 10) = uVar3;
  uVar3 = FUN_0001149c(iVar10);
  *(undefined2 *)((uVar11 - 1) * 0xc + iVar10 + 10) = uVar3;
  uVar11 = 1;
_L0:
  do {
    uVar2 = *(ushort *)(iVar10 + 0xc0);
    if ((int)(uVar2 - 1) <= (int)uVar11) {
      *(short *)(iVar10 + 0x80) = (short)(uVar2 - 1);
      *(ushort *)(iVar10 + 0x90) = uVar2 - 3;
      *(undefined4 *)(iVar10 + 0xa8) = 0x10000;
      *(ushort *)(iVar10 + 0x88) = uVar2 - 2;
      *(undefined2 *)(iVar10 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar10 + 0x7c) = 0;
      *(undefined4 *)(iVar10 + 0x84) = 0;
      *(undefined4 *)(iVar10 + 0x8c) = 0;
      *(undefined2 *)(iVar10 + 0x98) = 0;
      *(undefined4 *)(iVar10 + 0x94) = 0;
      *(undefined *)(iVar10 + 0xaf) = 0;
      FUN_000114fc(iVar10,1);
      *(undefined *)(iVar10 + 0xac) = 5;
      puVar5 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar6 = puVar5 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar5 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar5 = puVar6;
      } while (puVar6 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar10 = _L0();
      unaff_s4[2] = (1 << (iVar10 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar4 = FUN_0001164a(iVar10);
    uVar8 = 0;
    puVar7 = (ushort *)(iVar10 + 10);
    while (uVar8 < *(ushort *)(iVar10 + 0xc0)) {
      if (*puVar7 == uVar4) goto _L0;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 6;
    }
    iVar9 = uVar11 * 0xc;
    uVar11 = uVar11 + 1 & 0xffff;
    *(short *)(iVar9 + iVar10 + 10) = (short)uVar4;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int iVar13;
  
  uVar5 = _L0();
  *(undefined2 *)(unaff_s3 + 0xb6) = uVar5;
  uVar6 = _L0();
  *(char *)(unaff_s3 + 0xb9) = (char)uVar6;
  if (0xb < uVar6) {
    FUN_0001134a(0,0,0x8f4);
  }
  iVar13 = unaff_s2 * 200 + unaff_s1;
  uVar6 = FUN_00011360(*(undefined2 *)(iVar13 + 0xb6));
  *(char *)(iVar13 + 0xba) = (char)uVar6;
  if (0xb < uVar6) {
    FUN_00011388(0,0,0x8f6);
  }
  iVar13 = unaff_s2 * 200 + unaff_s1;
  *(undefined *)(iVar13 + 0xb8) = 0xff;
  cVar2 = *(char *)(unaff_s0 + 0xf1);
  *(char *)(iVar13 + 0xbb) = cVar2;
  if (cVar2 != '\0') {
    FUN_000113c0(0,0,0x8f9);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar13 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar13 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar13 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar13 + 0xbe);
    uVar11 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar11 = uVar11 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar11) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar11;
    if (uVar11 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar13 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar13 + 0xb2);
      iVar12 = 8;
      uVar7 = 0;
      do {
        uVar11 = uVar6 & 1;
        iVar12 = iVar12 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar13 + 0xbd) & 0x1f)) * uVar11 & 0xffff;
      } while (iVar12 != 0);
      iVar13 = unaff_s2 * 200 + unaff_s1;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar13 + 0xbe);
      uVar11 = uVar7 + (((int)uVar11 >> 1 & 1U) + ((int)uVar11 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar11 & 1) + (((int)uVar11 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar13 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar13 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar13 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar13 + 0xc0);
  uVar6 = 0;
  puVar10 = (ushort *)(iVar13 + 10);
  while (uVar6 != uVar3) {
    *puVar10 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar10 = puVar10 + 6;
  }
  uVar5 = FUN_0001148e(iVar13);
  *(undefined2 *)(iVar13 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar13);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar13 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar13 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar13 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar13 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar13 + 0xa8) = 0x10000;
      *(ushort *)(iVar13 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar13 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar13 + 0x7c) = 0;
      *(undefined4 *)(iVar13 + 0x84) = 0;
      *(undefined4 *)(iVar13 + 0x8c) = 0;
      *(undefined2 *)(iVar13 + 0x98) = 0;
      *(undefined4 *)(iVar13 + 0x94) = 0;
      *(undefined *)(iVar13 + 0xaf) = 0;
      FUN_000114fc(iVar13,1);
      *(undefined *)(iVar13 + 0xac) = 5;
      puVar8 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar9 = puVar8 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar8 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar8 = puVar9;
      } while (puVar9 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar13 = _L0();
      unaff_s4[2] = (1 << (iVar13 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar13);
    uVar11 = 0;
    puVar10 = (ushort *)(iVar13 + 10);
    while (uVar11 < *(ushort *)(iVar13 + 0xc0)) {
      if (*puVar10 == uVar7) goto _L0;
      uVar11 = uVar11 + 1;
      puVar10 = puVar10 + 6;
    }
    iVar12 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar12 + iVar13 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int iVar13;
  
  uVar6 = _L0();
  *(char *)(unaff_s3 + 0xb9) = (char)uVar6;
  if (0xb < uVar6) {
    FUN_0001134a(0,0,0x8f4);
  }
  iVar13 = unaff_s2 * 200 + unaff_s1;
  uVar6 = FUN_00011360(*(undefined2 *)(iVar13 + 0xb6));
  *(char *)(iVar13 + 0xba) = (char)uVar6;
  if (0xb < uVar6) {
    FUN_00011388(0,0,0x8f6);
  }
  iVar13 = unaff_s2 * 200 + unaff_s1;
  *(undefined *)(iVar13 + 0xb8) = 0xff;
  cVar2 = *(char *)(unaff_s0 + 0xf1);
  *(char *)(iVar13 + 0xbb) = cVar2;
  if (cVar2 != '\0') {
    FUN_000113c0(0,0,0x8f9);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar13 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar13 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar13 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar13 + 0xbe);
    uVar11 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar11 = uVar11 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar11) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar11;
    if (uVar11 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar13 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar13 + 0xb2);
      iVar12 = 8;
      uVar7 = 0;
      do {
        uVar11 = uVar6 & 1;
        iVar12 = iVar12 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar13 + 0xbd) & 0x1f)) * uVar11 & 0xffff;
      } while (iVar12 != 0);
      iVar13 = unaff_s2 * 200 + unaff_s1;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar13 + 0xbe);
      uVar11 = uVar7 + (((int)uVar11 >> 1 & 1U) + ((int)uVar11 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar11 & 1) + (((int)uVar11 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar13 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar13 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar13 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar13 + 0xc0);
  uVar6 = 0;
  puVar10 = (ushort *)(iVar13 + 10);
  while (uVar6 != uVar3) {
    *puVar10 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar10 = puVar10 + 6;
  }
  uVar5 = FUN_0001148e(iVar13);
  *(undefined2 *)(iVar13 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar13);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar13 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar13 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar13 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar13 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar13 + 0xa8) = 0x10000;
      *(ushort *)(iVar13 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar13 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar13 + 0x7c) = 0;
      *(undefined4 *)(iVar13 + 0x84) = 0;
      *(undefined4 *)(iVar13 + 0x8c) = 0;
      *(undefined2 *)(iVar13 + 0x98) = 0;
      *(undefined4 *)(iVar13 + 0x94) = 0;
      *(undefined *)(iVar13 + 0xaf) = 0;
      FUN_000114fc(iVar13,1);
      *(undefined *)(iVar13 + 0xac) = 5;
      puVar8 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar9 = puVar8 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar8 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar8 = puVar9;
      } while (puVar9 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar13 = _L0();
      unaff_s4[2] = (1 << (iVar13 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar13);
    uVar11 = 0;
    puVar10 = (ushort *)(iVar13 + 10);
    while (uVar11 < *(ushort *)(iVar13 + 0xc0)) {
      if (*puVar10 == uVar7) goto _L0;
      uVar11 = uVar11 + 1;
      puVar10 = puVar10 + 6;
    }
    iVar12 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar12 + iVar13 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001134a(void)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int iVar13;
  
  FUN_0001134a();
  iVar13 = unaff_s2 * 200 + unaff_s1;
  uVar6 = FUN_00011360(*(undefined2 *)(iVar13 + 0xb6));
  *(char *)(iVar13 + 0xba) = (char)uVar6;
  if (0xb < uVar6) {
    FUN_00011388(0,0,0x8f6);
  }
  iVar13 = unaff_s2 * 200 + unaff_s1;
  *(undefined *)(iVar13 + 0xb8) = 0xff;
  cVar2 = *(char *)(unaff_s0 + 0xf1);
  *(char *)(iVar13 + 0xbb) = cVar2;
  if (cVar2 != '\0') {
    FUN_000113c0(0,0,0x8f9);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar13 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar13 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar13 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar13 + 0xbe);
    uVar11 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar11 = uVar11 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar11) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar11;
    if (uVar11 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar13 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar13 + 0xb2);
      iVar12 = 8;
      uVar7 = 0;
      do {
        uVar11 = uVar6 & 1;
        iVar12 = iVar12 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar13 + 0xbd) & 0x1f)) * uVar11 & 0xffff;
      } while (iVar12 != 0);
      iVar13 = unaff_s2 * 200 + unaff_s1;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar13 + 0xbe);
      uVar11 = uVar7 + (((int)uVar11 >> 1 & 1U) + ((int)uVar11 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar11 & 1) + (((int)uVar11 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar13 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar13 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar13 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar13 + 0xc0);
  uVar6 = 0;
  puVar10 = (ushort *)(iVar13 + 10);
  while (uVar6 != uVar3) {
    *puVar10 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar10 = puVar10 + 6;
  }
  uVar5 = FUN_0001148e(iVar13);
  *(undefined2 *)(iVar13 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar13);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar13 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar13 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar13 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar13 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar13 + 0xa8) = 0x10000;
      *(ushort *)(iVar13 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar13 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar13 + 0x7c) = 0;
      *(undefined4 *)(iVar13 + 0x84) = 0;
      *(undefined4 *)(iVar13 + 0x8c) = 0;
      *(undefined2 *)(iVar13 + 0x98) = 0;
      *(undefined4 *)(iVar13 + 0x94) = 0;
      *(undefined *)(iVar13 + 0xaf) = 0;
      FUN_000114fc(iVar13,1);
      *(undefined *)(iVar13 + 0xac) = 5;
      puVar8 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar9 = puVar8 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar8 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar8 = puVar9;
      } while (puVar9 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar13 = _L0();
      unaff_s4[2] = (1 << (iVar13 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar13);
    uVar11 = 0;
    puVar10 = (ushort *)(iVar13 + 10);
    while (uVar11 < *(ushort *)(iVar13 + 0xc0)) {
      if (*puVar10 == uVar7) goto _L0;
      uVar11 = uVar11 + 1;
      puVar10 = puVar10 + 6;
    }
    iVar12 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar12 + iVar13 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011360(void)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int unaff_s7;
  
  uVar6 = FUN_00011360();
  *(char *)(unaff_s7 + 0xba) = (char)uVar6;
  if (0xb < uVar6) {
    FUN_00011388(0,0,0x8f6);
  }
  iVar11 = unaff_s2 * 200 + unaff_s1;
  *(undefined *)(iVar11 + 0xb8) = 0xff;
  cVar2 = *(char *)(unaff_s0 + 0xf1);
  *(char *)(iVar11 + 0xbb) = cVar2;
  if (cVar2 != '\0') {
    FUN_000113c0(0,0,0x8f9);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar11 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar11 + 0xb1) < 2) {
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    uVar7 = 1 - *(byte *)(iVar11 + 0xbe);
    uVar12 = (((int)uVar6 >> 1 & 1U) + ((int)uVar6 >> 2 & 1U) << (uVar7 & 0x1f)) + (uVar6 & 1) +
             (((int)uVar6 >> 3 & 1U) << (uVar7 & 0x1f)) & 0xffff;
    uVar7 = 4;
    do {
      uVar4 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar12 = uVar12 + ((int)uVar6 >> uVar4 & 1U) & 0xffff;
    } while (uVar7 != 0xc);
_L0:
    if (10 < uVar12) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar12;
    if (uVar12 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar11 + 0xb1) < 4) {
      uVar6 = (uint)*(byte *)(iVar11 + 0xb2);
      iVar13 = 8;
      uVar7 = 0;
      do {
        uVar12 = uVar6 & 1;
        iVar13 = iVar13 + -1;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + (1 << (*(byte *)(iVar11 + 0xbd) & 0x1f)) * uVar12 & 0xffff;
      } while (iVar13 != 0);
      iVar11 = unaff_s2 * 200 + unaff_s1;
      uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
      uVar6 = 1 - *(byte *)(iVar11 + 0xbe);
      uVar12 = uVar7 + (((int)uVar12 >> 1 & 1U) + ((int)uVar12 >> 2 & 1U) << (uVar6 & 0x1f)) +
                       (uVar12 & 1) + (((int)uVar12 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar11 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar11 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar11 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar11 + 0xc0);
  uVar6 = 0;
  puVar10 = (ushort *)(iVar11 + 10);
  while (uVar6 != uVar3) {
    *puVar10 = 0xffff;
    uVar6 = uVar6 + 1 & 0xffff;
    puVar10 = puVar10 + 6;
  }
  uVar5 = FUN_0001148e(iVar11);
  *(undefined2 *)(iVar11 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar11);
  *(undefined2 *)((uVar6 - 1) * 0xc + iVar11 + 10) = uVar5;
  uVar6 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar11 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar6) {
      *(short *)(iVar11 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar11 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar11 + 0xa8) = 0x10000;
      *(ushort *)(iVar11 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar11 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar11 + 0x7c) = 0;
      *(undefined4 *)(iVar11 + 0x84) = 0;
      *(undefined4 *)(iVar11 + 0x8c) = 0;
      *(undefined2 *)(iVar11 + 0x98) = 0;
      *(undefined4 *)(iVar11 + 0x94) = 0;
      *(undefined *)(iVar11 + 0xaf) = 0;
      FUN_000114fc(iVar11,1);
      *(undefined *)(iVar11 + 0xac) = 5;
      puVar8 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar9 = puVar8 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar8 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar8 = puVar9;
      } while (puVar9 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar11 = _L0();
      unaff_s4[2] = (1 << (iVar11 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar7 = FUN_0001164a(iVar11);
    uVar12 = 0;
    puVar10 = (ushort *)(iVar11 + 10);
    while (uVar12 < *(ushort *)(iVar11 + 0xc0)) {
      if (*puVar10 == uVar7) goto _L0;
      uVar12 = uVar12 + 1;
      puVar10 = puVar10 + 6;
    }
    iVar13 = uVar6 * 0xc;
    uVar6 = uVar6 + 1 & 0xffff;
    *(short *)(iVar13 + iVar11 + 10) = (short)uVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011388(void)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  uint uVar13;
  
  FUN_00011388();
  iVar10 = unaff_s2 * 200 + unaff_s1;
  *(undefined *)(iVar10 + 0xb8) = 0xff;
  cVar2 = *(char *)(unaff_s0 + 0xf1);
  *(char *)(iVar10 + 0xbb) = cVar2;
  if (cVar2 != '\0') {
    FUN_000113c0(0,0,0x8f9);
  }
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar10 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar10 + 0xb1) < 2) {
    uVar13 = (uint)*(ushort *)(iVar10 + 0xb6);
    uVar6 = 1 - *(byte *)(iVar10 + 0xbe);
    uVar11 = (((int)uVar13 >> 1 & 1U) + ((int)uVar13 >> 2 & 1U) << (uVar6 & 0x1f)) + (uVar13 & 1) +
             (((int)uVar13 >> 3 & 1U) << (uVar6 & 0x1f)) & 0xffff;
    uVar6 = 4;
    do {
      uVar4 = uVar6 & 0x1f;
      uVar6 = uVar6 + 1;
      uVar11 = uVar11 + ((int)uVar13 >> uVar4 & 1U) & 0xffff;
    } while (uVar6 != 0xc);
_L0:
    if (10 < uVar11) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar11;
    if (uVar11 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar10 + 0xb1) < 4) {
      uVar13 = (uint)*(byte *)(iVar10 + 0xb2);
      iVar12 = 8;
      uVar6 = 0;
      do {
        uVar11 = uVar13 & 1;
        iVar12 = iVar12 + -1;
        uVar13 = uVar13 >> 1;
        uVar6 = uVar6 + (1 << (*(byte *)(iVar10 + 0xbd) & 0x1f)) * uVar11 & 0xffff;
      } while (iVar12 != 0);
      iVar10 = unaff_s2 * 200 + unaff_s1;
      uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
      uVar13 = 1 - *(byte *)(iVar10 + 0xbe);
      uVar11 = uVar6 + (((int)uVar11 >> 1 & 1U) + ((int)uVar11 >> 2 & 1U) << (uVar13 & 0x1f)) +
                       (uVar11 & 1) + (((int)uVar11 >> 3 & 1U) << (uVar13 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar10 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar10 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar10 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar3 = *(ushort *)(iVar10 + 0xc0);
  uVar13 = 0;
  puVar9 = (ushort *)(iVar10 + 10);
  while (uVar13 != uVar3) {
    *puVar9 = 0xffff;
    uVar13 = uVar13 + 1 & 0xffff;
    puVar9 = puVar9 + 6;
  }
  uVar5 = FUN_0001148e(iVar10);
  *(undefined2 *)(iVar10 + 10) = uVar5;
  uVar5 = FUN_0001149c(iVar10);
  *(undefined2 *)((uVar13 - 1) * 0xc + iVar10 + 10) = uVar5;
  uVar13 = 1;
_L0:
  do {
    uVar3 = *(ushort *)(iVar10 + 0xc0);
    if ((int)(uVar3 - 1) <= (int)uVar13) {
      *(short *)(iVar10 + 0x80) = (short)(uVar3 - 1);
      *(ushort *)(iVar10 + 0x90) = uVar3 - 3;
      *(undefined4 *)(iVar10 + 0xa8) = 0x10000;
      *(ushort *)(iVar10 + 0x88) = uVar3 - 2;
      *(undefined2 *)(iVar10 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar10 + 0x7c) = 0;
      *(undefined4 *)(iVar10 + 0x84) = 0;
      *(undefined4 *)(iVar10 + 0x8c) = 0;
      *(undefined2 *)(iVar10 + 0x98) = 0;
      *(undefined4 *)(iVar10 + 0x94) = 0;
      *(undefined *)(iVar10 + 0xaf) = 0;
      FUN_000114fc(iVar10,1);
      *(undefined *)(iVar10 + 0xac) = 5;
      puVar7 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar8 = puVar7 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar7 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar7 = puVar8;
      } while (puVar8 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar10 = _L0();
      unaff_s4[2] = (1 << (iVar10 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar6 = FUN_0001164a(iVar10);
    uVar11 = 0;
    puVar9 = (ushort *)(iVar10 + 10);
    while (uVar11 < *(ushort *)(iVar10 + 0xc0)) {
      if (*puVar9 == uVar6) goto _L0;
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 6;
    }
    iVar12 = uVar13 * 0xc;
    uVar13 = uVar13 + 1 & 0xffff;
    *(short *)(iVar12 + iVar10 + 10) = (short)uVar6;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000113c0(void)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  uint uVar12;
  
  FUN_000113c0();
  *(byte *)(unaff_s2 * 200 + unaff_s1 + 0xbe) =
       (byte)((int)(uint)*(ushort *)(unaff_s0 + 0x118) >> 10) & 1;
  iVar6 = unaff_s2 * 200 + unaff_s1;
  if (*(byte *)(iVar6 + 0xb1) < 2) {
    uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
    uVar5 = 1 - *(byte *)(iVar6 + 0xbe);
    uVar10 = (((int)uVar12 >> 1 & 1U) + ((int)uVar12 >> 2 & 1U) << (uVar5 & 0x1f)) + (uVar12 & 1) +
             (((int)uVar12 >> 3 & 1U) << (uVar5 & 0x1f)) & 0xffff;
    uVar5 = 4;
    do {
      uVar3 = uVar5 & 0x1f;
      uVar5 = uVar5 + 1;
      uVar10 = uVar10 + ((int)uVar12 >> uVar3 & 1U) & 0xffff;
    } while (uVar5 != 0xc);
_L0:
    if (10 < uVar10) {
      *(undefined2 *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = 10;
      goto _L0;
    }
    *(short *)(unaff_s2 * 200 + unaff_s1 + 0xc0) = (short)uVar10;
    if (uVar10 != 0) goto _L0;
  }
  else {
    if (*(byte *)(iVar6 + 0xb1) < 4) {
      uVar12 = (uint)*(byte *)(iVar6 + 0xb2);
      iVar11 = 8;
      uVar5 = 0;
      do {
        uVar10 = uVar12 & 1;
        iVar11 = iVar11 + -1;
        uVar12 = uVar12 >> 1;
        uVar5 = uVar5 + (1 << (*(byte *)(iVar6 + 0xbd) & 0x1f)) * uVar10 & 0xffff;
      } while (iVar11 != 0);
      iVar6 = unaff_s2 * 200 + unaff_s1;
      uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
      uVar12 = 1 - *(byte *)(iVar6 + 0xbe);
      uVar10 = uVar5 + (((int)uVar10 >> 1 & 1U) + ((int)uVar10 >> 2 & 1U) << (uVar12 & 0x1f)) +
                       (uVar10 & 1) + (((int)uVar10 >> 3 & 1U) << (uVar12 & 0x1f)) & 0xffff;
      goto _L0;
    }
    *(undefined2 *)(iVar6 + 0xc0) = 0;
  }
  FUN_000112aa(0,0,0x8ff);
  if (10 < *(ushort *)(unaff_s2 * 200 + unaff_s1 + 0xc0)) {
    FUN_000112d6(0,0,0x900);
  }
_L0:
  iVar6 = *(int *)((uint)*(byte *)(unaff_s0 + 0x1b) * 0x1b0 + 0x110);
  if (iVar6 == 0) {
    FUN_00011472(0,0,0x6e4);
  }
  uVar2 = *(ushort *)(iVar6 + 0xc0);
  uVar12 = 0;
  puVar9 = (ushort *)(iVar6 + 10);
  while (uVar12 != uVar2) {
    *puVar9 = 0xffff;
    uVar12 = uVar12 + 1 & 0xffff;
    puVar9 = puVar9 + 6;
  }
  uVar4 = FUN_0001148e(iVar6);
  *(undefined2 *)(iVar6 + 10) = uVar4;
  uVar4 = FUN_0001149c(iVar6);
  *(undefined2 *)((uVar12 - 1) * 0xc + iVar6 + 10) = uVar4;
  uVar12 = 1;
_L0:
  do {
    uVar2 = *(ushort *)(iVar6 + 0xc0);
    if ((int)(uVar2 - 1) <= (int)uVar12) {
      *(short *)(iVar6 + 0x80) = (short)(uVar2 - 1);
      *(ushort *)(iVar6 + 0x90) = uVar2 - 3;
      *(undefined4 *)(iVar6 + 0xa8) = 0x10000;
      *(ushort *)(iVar6 + 0x88) = uVar2 - 2;
      *(undefined2 *)(iVar6 + 0xc6) = 0xffff;
      *(undefined4 *)(iVar6 + 0x7c) = 0;
      *(undefined4 *)(iVar6 + 0x84) = 0;
      *(undefined4 *)(iVar6 + 0x8c) = 0;
      *(undefined2 *)(iVar6 + 0x98) = 0;
      *(undefined4 *)(iVar6 + 0x94) = 0;
      *(undefined *)(iVar6 + 0xaf) = 0;
      FUN_000114fc(iVar6,1);
      *(undefined *)(iVar6 + 0xac) = 5;
      puVar7 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar8 = puVar7 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar7 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar7 = puVar8;
      } while (puVar8 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar6 = _L0();
      unaff_s4[2] = (1 << (iVar6 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar5 = FUN_0001164a(iVar6);
    uVar10 = 0;
    puVar9 = (ushort *)(iVar6 + 10);
    while (uVar10 < *(ushort *)(iVar6 + 0xc0)) {
      if (*puVar9 == uVar5) goto _L0;
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 6;
    }
    iVar11 = uVar12 * 0xc;
    uVar12 = uVar12 + 1 & 0xffff;
    *(short *)(iVar11 + iVar6 + 10) = (short)uVar5;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011472(void)

{
  byte *pbVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  ushort *puVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int unaff_s7;
  uint uVar10;
  
  FUN_00011472();
  uVar2 = *(ushort *)(unaff_s7 + 0xc0);
  uVar10 = 0;
  puVar8 = (ushort *)(unaff_s7 + 10);
  while (uVar10 != uVar2) {
    *puVar8 = 0xffff;
    uVar10 = uVar10 + 1 & 0xffff;
    puVar8 = puVar8 + 6;
  }
  uVar3 = FUN_0001148e();
  *(undefined2 *)(unaff_s7 + 10) = uVar3;
  uVar3 = FUN_0001149c();
  *(undefined2 *)((uVar10 - 1) * 0xc + unaff_s7 + 10) = uVar3;
  uVar10 = 1;
_L0:
  do {
    uVar2 = *(ushort *)(unaff_s7 + 0xc0);
    if ((int)(uVar2 - 1) <= (int)uVar10) {
      *(short *)(unaff_s7 + 0x80) = (short)(uVar2 - 1);
      *(ushort *)(unaff_s7 + 0x90) = uVar2 - 3;
      *(undefined4 *)(unaff_s7 + 0xa8) = 0x10000;
      *(ushort *)(unaff_s7 + 0x88) = uVar2 - 2;
      *(undefined2 *)(unaff_s7 + 0xc6) = 0xffff;
      *(undefined4 *)(unaff_s7 + 0x7c) = 0;
      *(undefined4 *)(unaff_s7 + 0x84) = 0;
      *(undefined4 *)(unaff_s7 + 0x8c) = 0;
      *(undefined2 *)(unaff_s7 + 0x98) = 0;
      *(undefined4 *)(unaff_s7 + 0x94) = 0;
      *(undefined *)(unaff_s7 + 0xaf) = 0;
      FUN_000114fc(1);
      *(undefined *)(unaff_s7 + 0xac) = 5;
      puVar6 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar7 = puVar6 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar6 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar6 = puVar7;
      } while (puVar7 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar4 = _L0();
      unaff_s4[2] = (1 << (iVar4 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar5 = FUN_0001164a();
    uVar9 = 0;
    puVar8 = (ushort *)(unaff_s7 + 10);
    while (uVar9 < *(ushort *)(unaff_s7 + 0xc0)) {
      if (*puVar8 == uVar5) goto _L0;
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 6;
    }
    iVar4 = uVar10 * 0xc;
    uVar10 = uVar10 + 1 & 0xffff;
    *(short *)(iVar4 + unaff_s7 + 10) = (short)uVar5;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001148e(void)

{
  byte *pbVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  ushort *puVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int unaff_s7;
  int unaff_s8;
  uint uVar10;
  ushort *unaff_s9;
  
  uVar3 = FUN_0001148e();
  *(undefined2 *)(unaff_s7 + 10) = uVar3;
  uVar3 = FUN_0001149c();
  *(undefined2 *)((unaff_s8 + -1) * 0xc + unaff_s7 + 10) = uVar3;
  uVar10 = 1;
_L0:
  do {
    uVar2 = *(ushort *)(unaff_s7 + 0xc0);
    if ((int)(uVar2 - 1) <= (int)uVar10) {
      *(short *)(unaff_s7 + 0x80) = (short)(uVar2 - 1);
      *(ushort *)(unaff_s7 + 0x90) = uVar2 - 3;
      *(undefined4 *)(unaff_s7 + 0xa8) = 0x10000;
      *(ushort *)(unaff_s7 + 0x88) = uVar2 - 2;
      *(undefined2 *)(unaff_s7 + 0xc6) = 0xffff;
      *(undefined4 *)(unaff_s7 + 0x7c) = 0;
      *(undefined4 *)(unaff_s7 + 0x84) = 0;
      *(undefined4 *)(unaff_s7 + 0x8c) = 0;
      *(undefined2 *)(unaff_s7 + 0x98) = 0;
      *(undefined4 *)(unaff_s7 + 0x94) = 0;
      *(undefined *)(unaff_s7 + 0xaf) = 0;
      FUN_000114fc(1);
      *(undefined *)(unaff_s7 + 0xac) = 5;
      puVar6 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar7 = puVar6 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar6 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar6 = puVar7;
      } while (puVar7 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar4 = _L0();
      unaff_s4[2] = (1 << (iVar4 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar5 = FUN_0001164a();
    uVar9 = 0;
    puVar8 = unaff_s9;
    while (uVar9 < *(ushort *)(unaff_s7 + 0xc0)) {
      if (*puVar8 == uVar5) goto _L0;
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 6;
    }
    iVar4 = uVar10 * 0xc;
    uVar10 = uVar10 + 1 & 0xffff;
    *(short *)(iVar4 + unaff_s7 + 10) = (short)uVar5;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001149c(void)

{
  byte *pbVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  ushort *puVar8;
  uint uVar9;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int unaff_s7;
  int unaff_s8;
  uint uVar10;
  ushort *unaff_s9;
  
  uVar3 = FUN_0001149c();
  *(undefined2 *)((unaff_s8 + -1) * 0xc + unaff_s7 + 10) = uVar3;
  uVar10 = 1;
_L0:
  do {
    uVar2 = *(ushort *)(unaff_s7 + 0xc0);
    if ((int)(uVar2 - 1) <= (int)uVar10) {
      *(short *)(unaff_s7 + 0x80) = (short)(uVar2 - 1);
      *(ushort *)(unaff_s7 + 0x90) = uVar2 - 3;
      *(undefined4 *)(unaff_s7 + 0xa8) = 0x10000;
      *(ushort *)(unaff_s7 + 0x88) = uVar2 - 2;
      *(undefined2 *)(unaff_s7 + 0xc6) = 0xffff;
      *(undefined4 *)(unaff_s7 + 0x7c) = 0;
      *(undefined4 *)(unaff_s7 + 0x84) = 0;
      *(undefined4 *)(unaff_s7 + 0x8c) = 0;
      *(undefined2 *)(unaff_s7 + 0x98) = 0;
      *(undefined4 *)(unaff_s7 + 0x94) = 0;
      *(undefined *)(unaff_s7 + 0xaf) = 0;
      FUN_000114fc(1);
      *(undefined *)(unaff_s7 + 0xac) = 5;
      puVar6 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar7 = puVar6 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar6 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar6 = puVar7;
      } while (puVar7 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar4 = _L0();
      unaff_s4[2] = (1 << (iVar4 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
    uVar5 = FUN_0001164a();
    uVar9 = 0;
    puVar8 = unaff_s9;
    while (uVar9 < *(ushort *)(unaff_s7 + 0xc0)) {
      if (*puVar8 == uVar5) goto _L0;
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 6;
    }
    iVar4 = uVar10 * 0xc;
    uVar10 = uVar10 + 1 & 0xffff;
    *(short *)(iVar4 + unaff_s7 + 10) = (short)uVar5;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000114fc(void)

{
  byte *pbVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int unaff_s7;
  
  FUN_000114fc();
  *(undefined *)(unaff_s7 + 0xac) = 5;
  puVar3 = unaff_s4 + 5;
  do {
    pbVar1 = (byte *)(unaff_s3 + 0x80);
    puVar4 = puVar3 + 1;
    unaff_s3 = unaff_s3 + 8;
    *puVar3 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
    puVar3 = puVar4;
  } while (puVar4 != unaff_s4 + 9);
  *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
  *unaff_s4 = 0xbadcab1e;
  unaff_s4[3] = unaff_s5 << 10;
  unaff_s4[4] = 0xffff0704;
  unaff_s4[1] = unaff_s6;
  iVar2 = _L0();
  unaff_s4[2] = (1 << (iVar2 + 1U & 0x1f)) + -1;
  *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
  *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
  *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s4;
  
  iVar1 = _L0();
  *(int *)(unaff_s4 + 8) = (1 << (iVar1 + 1U & 0x1f)) + -1;
  *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
  *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
  *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001164a(void)

{
  byte *pbVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  int unaff_s7;
  uint unaff_s8;
  ushort *unaff_s9;
  int unaff_s10;
  
  do {
    uVar3 = FUN_0001164a();
    uVar7 = 0;
    puVar6 = unaff_s9;
    while (uVar7 < *(ushort *)(unaff_s7 + 0xc0)) {
      if (*puVar6 == uVar3) goto _L0;
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 6;
    }
    iVar8 = unaff_s8 * unaff_s10;
    unaff_s8 = unaff_s8 + 1 & 0xffff;
    *(short *)(iVar8 + unaff_s7 + 10) = (short)uVar3;
_L0:
    uVar2 = *(ushort *)(unaff_s7 + 0xc0);
    if ((int)(uVar2 - 1) <= (int)unaff_s8) {
      *(short *)(unaff_s7 + 0x80) = (short)(uVar2 - 1);
      *(ushort *)(unaff_s7 + 0x90) = uVar2 - 3;
      *(undefined4 *)(unaff_s7 + 0xa8) = 0x10000;
      *(ushort *)(unaff_s7 + 0x88) = uVar2 - 2;
      *(undefined2 *)(unaff_s7 + 0xc6) = 0xffff;
      *(undefined4 *)(unaff_s7 + 0x7c) = 0;
      *(undefined4 *)(unaff_s7 + 0x84) = 0;
      *(undefined4 *)(unaff_s7 + 0x8c) = 0;
      *(undefined2 *)(unaff_s7 + 0x98) = 0;
      *(undefined4 *)(unaff_s7 + 0x94) = 0;
      *(undefined *)(unaff_s7 + 0xaf) = 0;
      FUN_000114fc(1);
      *(undefined *)(unaff_s7 + 0xac) = 5;
      puVar4 = unaff_s4 + 5;
      do {
        pbVar1 = (byte *)(unaff_s3 + 0x80);
        puVar5 = puVar4 + 1;
        unaff_s3 = unaff_s3 + 8;
        *puVar4 = *(ushort *)((uint)*pbVar1 * 0xc + unaff_s2 * 200 + unaff_s1 + 10) | 0x80000000;
        puVar4 = puVar5;
      } while (puVar5 != unaff_s4 + 9);
      *(undefined4 *)(unaff_s2 * 200 + unaff_s1) = _DAT_44b00120;
      *unaff_s4 = 0xbadcab1e;
      unaff_s4[3] = unaff_s5 << 10;
      unaff_s4[4] = 0xffff0704;
      unaff_s4[1] = unaff_s6;
      iVar8 = _L0();
      unaff_s4[2] = (1 << (iVar8 + 1U & 0x1f)) + -1;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x34) = 0x2200;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10c) + 0x38) = *(undefined4 *)(unaff_s0 + 0x10);
      *(byte *)(unaff_s0 + 0x11a) = *(byte *)(unaff_s0 + 0x11a) | 0x11;
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rc_check(uint8_t sta_idx,_Bool *tx_ampdu)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  bool bVar6;
  int *piVar7;
  uint uVar8;
  undefined3 in_register_00002029;
  uint uVar9;
  uint uVar10;
  int iVar11;
  _Bool *extraout_a1;
  char cVar12;
  byte bVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  ushort uVar17;
  
  uVar9 = CONCAT31(in_register_00002029,sta_idx);
  if (9 < uVar9) {
    return;
  }
  piVar7 = *(int **)(uVar9 * 0x1b0 + 0x110);
  if (piVar7 == (int *)0x0) {
    tx_ampdu = (_Bool *)FUN_000116d6(0,0,0x826);
  }
  iVar16 = 0;
  if ((100000 - _DAT_44b00120) + *piVar7 < 0) {
    iVar16 = FUN_000116fc(piVar7,0);
    *(undefined *)((int)piVar7 + 0xae) = 0;
    *(undefined *)(piVar7 + 0x2c) = 0;
    *(byte *)((int)piVar7 + 0xaf) = *(byte *)((int)piVar7 + 0xaf) & 0xef;
    *piVar7 = _DAT_44b00120;
    tx_ampdu = extraout_a1;
  }
  if (*(char *)((int)piVar7 + 0xae) == '\x01') {
    if ((*(byte *)((int)piVar7 + 0xaf) & 0x40) == 0) {
      bVar13 = *(byte *)((int)piVar7 + 0xb1);
      uVar1 = *(ushort *)(piVar7 + 0x20);
      uVar15 = (uint)uVar1;
      if (bVar13 < 2) {
        if ((ushort)(*(short *)(piVar7 + uVar15 * 3 + 2) + 0xe667U) < 0xd99b) {
          cVar12 = '\n';
        }
        else {
          cVar12 = '\x05';
        }
      }
      else {
        cVar12 = ((char)*(undefined2 *)((int)piVar7 + 0xaa) + '\b') * '\x02';
      }
      *(char *)(piVar7 + 0x2b) = cVar12;
      uRam00000000 = uRam00000000 * 0x41c64e6d + 0x3039;
      uVar8 = (uRam00000000 >> 0x10) % (uint)*(ushort *)(piVar7 + 0x30);
      if (uVar8 != uVar15) {
        uVar2 = *(ushort *)(piVar7 + 0x22);
        if (((uVar8 != uVar2) && (uVar3 = *(ushort *)(piVar7 + 0x24), uVar8 != uVar3)) &&
           (piVar14 = piVar7 + uVar8 * 3, *(ushort *)(piVar14 + 2) < 0xf334)) {
          uVar4 = *(undefined2 *)((int)piVar14 + 10);
          uVar10 = FUN_000117c4(uVar4,tx_ampdu);
          uVar5 = *(undefined2 *)((int)piVar7 + uVar15 * 0xc + 10);
          if (bVar13 < 2) {
            uVar15 = _LVL516(uVar5);
            if (uVar15 < uVar10) {
              iVar16 = 0;
              bVar6 = 0x13 < *(byte *)(piVar14 + 3);
            }
            else {
              iVar16 = 0;
              bVar6 = true;
            }
          }
          else {
            uVar17 = 0x20;
            uVar15 = _L0(*(undefined2 *)((int)piVar7 + (uint)uVar2 * 0xc + 10));
            if (*(char *)((int)piVar14 + 0xd) == '\0') {
              uVar17 = *(ushort *)((int)piVar7 + 0xaa);
            }
            if (uVar15 <= uVar10) {
              iVar11 = _LVL531(uVar5);
              uVar15 = FUN_00011888(uVar4);
              if ((iVar11 - 1U < uVar15) ||
                 (uVar15 = FUN_000118a4(*(undefined2 *)((int)piVar7 + (uint)uVar3 * 0xc + 10)),
                 uVar15 <= uVar10)) {
                if (uVar17 <= *(byte *)(piVar14 + 3)) {
                  bVar13 = *(char *)((int)piVar7 + 0xad) + 1;
                  *(byte *)((int)piVar7 + 0xad) = bVar13;
                  if (bVar13 < 3) goto _L0;
                  if (0xf < bVar13) {
                    *(undefined *)((int)piVar7 + 0xad) = 0xf;
                  }
                }
                goto _L0;
              }
            }
_L0:
            iVar16 = FUN_00011902(piVar7,uVar8 & 0xff);
            bVar6 = true;
            if ((*(byte *)((int)piVar14 + 0xe) & 0xf) < 10) {
              bVar6 = uVar17 <= *(byte *)(piVar14 + 3);
            }
          }
          *(ushort *)(piVar7 + 0x28) = uVar2;
          piVar7[0x27] = piVar7[0x21];
          if (bVar6) {
            *(byte *)((int)piVar7 + 0xaf) = *(byte *)((int)piVar7 + 0xaf) & 0xfd;
            piVar7[0x21] = piVar7[0x1f];
            *(ushort *)(piVar7 + 0x22) = uVar1;
            piVar7[0x1f] = iVar16;
            *(short *)(piVar7 + 0x20) = (short)uVar8;
          }
          else {
            *(byte *)((int)piVar7 + 0xaf) = *(byte *)((int)piVar7 + 0xaf) | 2;
            piVar7[0x21] = iVar16;
            *(short *)(piVar7 + 0x22) = (short)uVar8;
          }
          *(undefined *)((int)piVar7 + 0xae) = 2;
          goto _L0;
        }
      }
    }
_L0:
    *(undefined *)((int)piVar7 + 0xae) = 0;
  }
  else {
    if (*(char *)((int)piVar7 + 0xae) == '\x03') {
      if ((*(byte *)((int)piVar7 + 0xaf) & 2) == 0) {
        *(undefined2 *)(piVar7 + 0x20) = *(undefined2 *)(piVar7 + 0x22);
        piVar7[0x1f] = piVar7[0x21];
      }
      *(undefined *)((int)piVar7 + 0xae) = 0;
      *(undefined2 *)(piVar7 + 0x22) = *(undefined2 *)(piVar7 + 0x28);
      iVar16 = piVar7[0x27];
      piVar7[0x27] = 0;
      piVar7[0x21] = iVar16;
      *(undefined2 *)(piVar7 + 0x28) = 0xff;
      goto _L0;
    }
  }
  if (iVar16 == 0) {
    return;
  }
_L0:
  *(byte *)(uVar9 * 0x1b0 + 0x11a) = *(byte *)(uVar9 * 0x1b0 + 0x11a) | 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000116d6(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  int *unaff_s0;
  uint uVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  int *piVar10;
  int unaff_s3;
  int unaff_s4;
  uint uVar11;
  int iVar12;
  ushort uVar13;
  uint uStack0000000c;
  
  FUN_000116d6();
  iVar12 = 0;
  if ((100000 - _DAT_44b00120) + *unaff_s0 < 0) {
    iVar12 = FUN_000116fc(0);
    *(undefined *)((int)unaff_s0 + 0xae) = 0;
    *(undefined *)(unaff_s0 + 0x2c) = 0;
    *(byte *)((int)unaff_s0 + 0xaf) = *(byte *)((int)unaff_s0 + 0xaf) & 0xef;
    *unaff_s0 = _DAT_44b00120;
  }
  if (*(char *)((int)unaff_s0 + 0xae) == '\x01') {
    if ((*(byte *)((int)unaff_s0 + 0xaf) & 0x40) == 0) {
      uStack0000000c = (uint)*(byte *)((int)unaff_s0 + 0xb1);
      uVar1 = *(ushort *)(unaff_s0 + 0x20);
      uVar11 = (uint)uVar1;
      if (uStack0000000c < 2) {
        if ((ushort)(*(short *)(unaff_s0 + uVar11 * 3 + 2) + 0xe667U) < 0xd99b) {
          cVar8 = '\n';
        }
        else {
          cVar8 = '\x05';
        }
      }
      else {
        cVar8 = ((char)*(undefined2 *)((int)unaff_s0 + 0xaa) + '\b') * '\x02';
      }
      *(char *)(unaff_s0 + 0x2b) = cVar8;
      uRam00000000 = uRam00000000 * 0x41c64e6d + 0x3039;
      uVar6 = (uRam00000000 >> 0x10) % (uint)*(ushort *)(unaff_s0 + 0x30);
      if (uVar6 != uVar11) {
        uVar2 = *(ushort *)(unaff_s0 + 0x22);
        if (((uVar6 != uVar2) && (uVar3 = *(ushort *)(unaff_s0 + 0x24), uVar6 != uVar3)) &&
           (piVar10 = unaff_s0 + uVar6 * 3, *(ushort *)(piVar10 + 2) < 0xf334)) {
          uVar4 = *(undefined2 *)((int)piVar10 + 10);
          uVar7 = FUN_000117c4(uVar4);
          uVar11 = (uint)*(ushort *)((int)unaff_s0 + uVar11 * 0xc + 10);
          if (uStack0000000c < 2) {
            uVar11 = _LVL516(uVar11);
            if (uVar11 < uVar7) {
              iVar12 = 0;
              bVar5 = 0x13 < *(byte *)(piVar10 + 3);
            }
            else {
              iVar12 = 0;
              bVar5 = true;
            }
          }
          else {
            uVar13 = 0x20;
            uStack0000000c = uVar11;
            uVar11 = _L0(*(undefined2 *)((int)unaff_s0 + (uint)uVar2 * 0xc + 10));
            if (*(char *)((int)piVar10 + 0xd) == '\0') {
              uVar13 = *(ushort *)((int)unaff_s0 + 0xaa);
            }
            if (uVar11 <= uVar7) {
              uStack0000000c = _LVL531(uStack0000000c);
              uVar11 = FUN_00011888(uVar4);
              if ((uStack0000000c - 1 < uVar11) ||
                 (uVar11 = FUN_000118a4(*(undefined2 *)((int)unaff_s0 + (uint)uVar3 * 0xc + 10)),
                 uVar11 <= uVar7)) {
                if (uVar13 <= *(byte *)(piVar10 + 3)) {
                  bVar9 = *(char *)((int)unaff_s0 + 0xad) + 1;
                  *(byte *)((int)unaff_s0 + 0xad) = bVar9;
                  if (bVar9 < 3) goto _L0;
                  if (0xf < bVar9) {
                    *(undefined *)((int)unaff_s0 + 0xad) = 0xf;
                  }
                }
                goto _L0;
              }
            }
_L0:
            iVar12 = FUN_00011902(uVar6 & 0xff);
            bVar5 = true;
            if ((*(byte *)((int)piVar10 + 0xe) & 0xf) < 10) {
              bVar5 = uVar13 <= *(byte *)(piVar10 + 3);
            }
          }
          *(ushort *)(unaff_s0 + 0x28) = uVar2;
          unaff_s0[0x27] = unaff_s0[0x21];
          if (bVar5) {
            *(byte *)((int)unaff_s0 + 0xaf) = *(byte *)((int)unaff_s0 + 0xaf) & 0xfd;
            unaff_s0[0x21] = unaff_s0[0x1f];
            *(ushort *)(unaff_s0 + 0x22) = uVar1;
            unaff_s0[0x1f] = iVar12;
            *(short *)(unaff_s0 + 0x20) = (short)uVar6;
          }
          else {
            *(byte *)((int)unaff_s0 + 0xaf) = *(byte *)((int)unaff_s0 + 0xaf) | 2;
            unaff_s0[0x21] = iVar12;
            *(short *)(unaff_s0 + 0x22) = (short)uVar6;
          }
          *(undefined *)((int)unaff_s0 + 0xae) = 2;
          goto _L0;
        }
      }
    }
_L0:
    *(undefined *)((int)unaff_s0 + 0xae) = 0;
  }
  else {
    if (*(char *)((int)unaff_s0 + 0xae) == '\x03') {
      if ((*(byte *)((int)unaff_s0 + 0xaf) & 2) == 0) {
        *(undefined2 *)(unaff_s0 + 0x20) = *(undefined2 *)(unaff_s0 + 0x22);
        unaff_s0[0x1f] = unaff_s0[0x21];
      }
      *(undefined *)((int)unaff_s0 + 0xae) = 0;
      *(undefined2 *)(unaff_s0 + 0x22) = *(undefined2 *)(unaff_s0 + 0x28);
      iVar12 = unaff_s0[0x27];
      unaff_s0[0x27] = 0;
      unaff_s0[0x21] = iVar12;
      *(undefined2 *)(unaff_s0 + 0x28) = 0xff;
      goto _L0;
    }
  }
  if (iVar12 == 0) {
    return;
  }
_L0:
  iVar12 = unaff_s3 + unaff_s4 * 0x1b0;
  *(byte *)(iVar12 + 0x11a) = *(byte *)(iVar12 + 0x11a) | 1;
  return;
}



void FUN_000116fc(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined4 *unaff_s0;
  int unaff_s1;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  undefined4 *puVar12;
  int unaff_s3;
  int unaff_s4;
  uint uVar13;
  ushort uVar14;
  uint uStack0000000c;
  
  iVar7 = FUN_000116fc();
  *(undefined *)((int)unaff_s0 + 0xae) = 0;
  *(undefined *)(unaff_s0 + 0x2c) = 0;
  *(byte *)((int)unaff_s0 + 0xaf) = *(byte *)((int)unaff_s0 + 0xaf) & 0xef;
  *unaff_s0 = *(undefined4 *)(unaff_s1 + 0x120);
  if (*(char *)((int)unaff_s0 + 0xae) == '\x01') {
    if ((*(byte *)((int)unaff_s0 + 0xaf) & 0x40) == 0) {
      uStack0000000c = (uint)*(byte *)((int)unaff_s0 + 0xb1);
      uVar1 = *(ushort *)(unaff_s0 + 0x20);
      uVar13 = (uint)uVar1;
      if (uStack0000000c < 2) {
        if ((ushort)(*(short *)(unaff_s0 + uVar13 * 3 + 2) + 0xe667U) < 0xd99b) {
          cVar10 = '\n';
        }
        else {
          cVar10 = '\x05';
        }
      }
      else {
        cVar10 = ((char)*(undefined2 *)((int)unaff_s0 + 0xaa) + '\b') * '\x02';
      }
      *(char *)(unaff_s0 + 0x2b) = cVar10;
      uRam00000000 = uRam00000000 * 0x41c64e6d + 0x3039;
      uVar6 = (uRam00000000 >> 0x10) % (uint)*(ushort *)(unaff_s0 + 0x30);
      if (uVar6 != uVar13) {
        uVar2 = *(ushort *)(unaff_s0 + 0x22);
        if (((uVar6 != uVar2) && (uVar3 = *(ushort *)(unaff_s0 + 0x24), uVar6 != uVar3)) &&
           (puVar12 = unaff_s0 + uVar6 * 3, *(ushort *)(puVar12 + 2) < 0xf334)) {
          uVar4 = *(undefined2 *)((int)puVar12 + 10);
          uVar8 = FUN_000117c4(uVar4);
          uVar13 = (uint)*(ushort *)((int)unaff_s0 + uVar13 * 0xc + 10);
          if (uStack0000000c < 2) {
            uVar13 = _LVL516(uVar13);
            if (uVar13 < uVar8) {
              uVar9 = 0;
              bVar5 = 0x13 < *(byte *)(puVar12 + 3);
            }
            else {
              uVar9 = 0;
              bVar5 = true;
            }
          }
          else {
            uVar14 = 0x20;
            uStack0000000c = uVar13;
            uVar13 = _L0(*(undefined2 *)((int)unaff_s0 + (uint)uVar2 * 0xc + 10));
            if (*(char *)((int)puVar12 + 0xd) == '\0') {
              uVar14 = *(ushort *)((int)unaff_s0 + 0xaa);
            }
            if (uVar13 <= uVar8) {
              uStack0000000c = _LVL531(uStack0000000c);
              uVar13 = FUN_00011888(uVar4);
              if ((uStack0000000c - 1 < uVar13) ||
                 (uVar13 = FUN_000118a4(*(undefined2 *)((int)unaff_s0 + (uint)uVar3 * 0xc + 10)),
                 uVar13 <= uVar8)) {
                if (uVar14 <= *(byte *)(puVar12 + 3)) {
                  bVar11 = *(char *)((int)unaff_s0 + 0xad) + 1;
                  *(byte *)((int)unaff_s0 + 0xad) = bVar11;
                  if (bVar11 < 3) goto _L0;
                  if (0xf < bVar11) {
                    *(undefined *)((int)unaff_s0 + 0xad) = 0xf;
                  }
                }
                goto _L0;
              }
            }
_L0:
            uVar9 = FUN_00011902(uVar6 & 0xff);
            bVar5 = true;
            if ((*(byte *)((int)puVar12 + 0xe) & 0xf) < 10) {
              bVar5 = uVar14 <= *(byte *)(puVar12 + 3);
            }
          }
          *(ushort *)(unaff_s0 + 0x28) = uVar2;
          unaff_s0[0x27] = unaff_s0[0x21];
          if (bVar5) {
            *(byte *)((int)unaff_s0 + 0xaf) = *(byte *)((int)unaff_s0 + 0xaf) & 0xfd;
            unaff_s0[0x21] = unaff_s0[0x1f];
            *(ushort *)(unaff_s0 + 0x22) = uVar1;
            unaff_s0[0x1f] = uVar9;
            *(short *)(unaff_s0 + 0x20) = (short)uVar6;
          }
          else {
            *(byte *)((int)unaff_s0 + 0xaf) = *(byte *)((int)unaff_s0 + 0xaf) | 2;
            unaff_s0[0x21] = uVar9;
            *(short *)(unaff_s0 + 0x22) = (short)uVar6;
          }
          *(undefined *)((int)unaff_s0 + 0xae) = 2;
          goto _L0;
        }
      }
    }
_L0:
    *(undefined *)((int)unaff_s0 + 0xae) = 0;
  }
  else {
    if (*(char *)((int)unaff_s0 + 0xae) == '\x03') {
      if ((*(byte *)((int)unaff_s0 + 0xaf) & 2) == 0) {
        *(undefined2 *)(unaff_s0 + 0x20) = *(undefined2 *)(unaff_s0 + 0x22);
        unaff_s0[0x1f] = unaff_s0[0x21];
      }
      *(undefined *)((int)unaff_s0 + 0xae) = 0;
      *(undefined2 *)(unaff_s0 + 0x22) = *(undefined2 *)(unaff_s0 + 0x28);
      uVar9 = unaff_s0[0x27];
      unaff_s0[0x27] = 0;
      unaff_s0[0x21] = uVar9;
      *(undefined2 *)(unaff_s0 + 0x28) = 0xff;
      goto _L0;
    }
  }
  if (iVar7 == 0) {
    return;
  }
_L0:
  iVar7 = unaff_s3 + unaff_s4 * 0x1b0;
  *(byte *)(iVar7 + 0x11a) = *(byte *)(iVar7 + 0x11a) | 1;
  return;
}



void FUN_000117c4(void)

{
  undefined2 uVar1;
  bool bVar2;
  int unaff_s0;
  ushort unaff_s1;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  int unaff_s2;
  int unaff_s3;
  int iVar7;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  ushort uVar8;
  int unaff_s8;
  int unaff_s9;
  uint in_stack_0000000c;
  
  uVar3 = FUN_000117c4();
  uVar1 = *(undefined2 *)(unaff_s5 * unaff_s8 + unaff_s0 + 10);
  if (in_stack_0000000c < 2) {
    uVar4 = _LVL516(uVar1);
    if (uVar4 < uVar3) {
      uVar5 = 0;
      bVar2 = 0x13 < *(byte *)(unaff_s2 + 0xc);
    }
    else {
      uVar5 = 0;
      bVar2 = true;
    }
  }
  else {
    uVar8 = 0x20;
    uVar4 = _L0(*(undefined2 *)(unaff_s7 * unaff_s8 + unaff_s0 + 10));
    if (*(char *)(unaff_s2 + 0xd) == '\0') {
      uVar8 = *(ushort *)(unaff_s0 + 0xaa);
    }
    if (uVar4 <= uVar3) {
      iVar7 = _LVL531(uVar1);
      uVar4 = FUN_00011888();
      if ((iVar7 - 1U < uVar4) ||
         (uVar4 = FUN_000118a4(*(undefined2 *)(unaff_s9 * 0xc + unaff_s0 + 10)), uVar4 <= uVar3)) {
        if (uVar8 <= *(byte *)(unaff_s2 + 0xc)) {
          bVar6 = *(char *)(unaff_s0 + 0xad) + 1;
          *(byte *)(unaff_s0 + 0xad) = bVar6;
          if (bVar6 < 3) goto _L0;
          if (0xf < bVar6) {
            *(undefined *)(unaff_s0 + 0xad) = 0xf;
          }
        }
        *(undefined *)(unaff_s0 + 0xae) = 0;
        if (unaff_s6 == 0) {
          return;
        }
        goto _L0;
      }
    }
_L0:
    uVar5 = FUN_00011902(unaff_s1 & 0xff);
    bVar2 = true;
    if ((*(byte *)(unaff_s2 + 0xe) & 0xf) < 10) {
      bVar2 = uVar8 <= *(byte *)(unaff_s2 + 0xc);
    }
  }
  *(short *)(unaff_s0 + 0xa0) = (short)unaff_s7;
  *(undefined4 *)(unaff_s0 + 0x9c) = *(undefined4 *)(unaff_s0 + 0x84);
  if (bVar2) {
    *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) & 0xfd;
    *(undefined4 *)(unaff_s0 + 0x84) = *(undefined4 *)(unaff_s0 + 0x7c);
    *(short *)(unaff_s0 + 0x88) = (short)unaff_s5;
    *(undefined4 *)(unaff_s0 + 0x7c) = uVar5;
    *(ushort *)(unaff_s0 + 0x80) = unaff_s1;
  }
  else {
    *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) | 2;
    *(undefined4 *)(unaff_s0 + 0x84) = uVar5;
    *(ushort *)(unaff_s0 + 0x88) = unaff_s1;
  }
  *(undefined *)(unaff_s0 + 0xae) = 2;
_L0:
  iVar7 = unaff_s3 + unaff_s4 * 0x1b0;
  *(byte *)(iVar7 + 0x11a) = *(byte *)(iVar7 + 0x11a) | 1;
  return;
}



void _LVL516(void)

{
  bool bVar1;
  int unaff_s0;
  undefined2 unaff_s1;
  uint uVar2;
  int unaff_s2;
  int unaff_s3;
  int iVar3;
  int unaff_s4;
  undefined2 unaff_s5;
  undefined2 unaff_s7;
  uint unaff_s10;
  
  uVar2 = _LVL516();
  if (uVar2 < unaff_s10) {
    bVar1 = 0x13 < *(byte *)(unaff_s2 + 0xc);
  }
  else {
    bVar1 = true;
  }
  *(undefined2 *)(unaff_s0 + 0xa0) = unaff_s7;
  *(undefined4 *)(unaff_s0 + 0x9c) = *(undefined4 *)(unaff_s0 + 0x84);
  if (bVar1) {
    *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) & 0xfd;
    *(undefined4 *)(unaff_s0 + 0x84) = *(undefined4 *)(unaff_s0 + 0x7c);
    *(undefined2 *)(unaff_s0 + 0x88) = unaff_s5;
    *(undefined4 *)(unaff_s0 + 0x7c) = 0;
    *(undefined2 *)(unaff_s0 + 0x80) = unaff_s1;
  }
  else {
    *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) | 2;
    *(undefined4 *)(unaff_s0 + 0x84) = 0;
    *(undefined2 *)(unaff_s0 + 0x88) = unaff_s1;
  }
  *(undefined *)(unaff_s0 + 0xae) = 2;
  iVar3 = unaff_s3 + unaff_s4 * 0x1b0;
  *(byte *)(iVar3 + 0x11a) = *(byte *)(iVar3 + 0x11a) | 1;
  return;
}



void _L0(void)

{
  bool bVar1;
  int unaff_s0;
  ushort unaff_s1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  int unaff_s6;
  undefined2 unaff_s7;
  uint unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  undefined4 in_stack_0000000c;
  
  uVar2 = _L0();
  if (*(char *)(unaff_s2 + 0xd) == '\0') {
    unaff_s8 = (uint)*(ushort *)(unaff_s0 + 0xaa);
  }
  if (uVar2 <= unaff_s10) {
    iVar3 = _LVL531(in_stack_0000000c);
    uVar2 = FUN_00011888();
    if ((iVar3 - 1U < uVar2) ||
       (uVar2 = FUN_000118a4(*(undefined2 *)(unaff_s9 * 0xc + unaff_s0 + 10)), uVar2 <= unaff_s10))
    {
      if (unaff_s8 <= *(byte *)(unaff_s2 + 0xc)) {
        bVar5 = *(char *)(unaff_s0 + 0xad) + 1;
        *(byte *)(unaff_s0 + 0xad) = bVar5;
        if (bVar5 < 3) goto _L0;
        if (0xf < bVar5) {
          *(undefined *)(unaff_s0 + 0xad) = 0xf;
        }
      }
      *(undefined *)(unaff_s0 + 0xae) = 0;
      if (unaff_s6 == 0) {
        return;
      }
      goto _L0;
    }
  }
_L0:
  uVar4 = FUN_00011902(unaff_s1 & 0xff);
  bVar1 = true;
  if ((*(byte *)(unaff_s2 + 0xe) & 0xf) < 10) {
    bVar1 = unaff_s8 <= *(byte *)(unaff_s2 + 0xc);
  }
  *(undefined2 *)(unaff_s0 + 0xa0) = unaff_s7;
  *(undefined4 *)(unaff_s0 + 0x9c) = *(undefined4 *)(unaff_s0 + 0x84);
  if (bVar1) {
    *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) & 0xfd;
    *(undefined4 *)(unaff_s0 + 0x84) = *(undefined4 *)(unaff_s0 + 0x7c);
    *(undefined2 *)(unaff_s0 + 0x88) = unaff_s5;
    *(undefined4 *)(unaff_s0 + 0x7c) = uVar4;
    *(ushort *)(unaff_s0 + 0x80) = unaff_s1;
  }
  else {
    *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) | 2;
    *(undefined4 *)(unaff_s0 + 0x84) = uVar4;
    *(ushort *)(unaff_s0 + 0x88) = unaff_s1;
  }
  *(undefined *)(unaff_s0 + 0xae) = 2;
_L0:
  iVar3 = unaff_s3 + unaff_s4 * 0x1b0;
  *(byte *)(iVar3 + 0x11a) = *(byte *)(iVar3 + 0x11a) | 1;
  return;
}



void _LVL531(void)

{
  bool bVar1;
  int unaff_s0;
  ushort unaff_s1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  int unaff_s2;
  int iVar5;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  int unaff_s6;
  undefined2 unaff_s7;
  uint unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  int iStack0000000c;
  
  iStack0000000c = _LVL531();
  uVar2 = FUN_00011888();
  if ((iStack0000000c - 1U < uVar2) ||
     (uVar2 = FUN_000118a4(*(undefined2 *)(unaff_s9 * 0xc + unaff_s0 + 10)), uVar2 <= unaff_s10)) {
    if (unaff_s8 <= *(byte *)(unaff_s2 + 0xc)) {
      bVar4 = *(char *)(unaff_s0 + 0xad) + 1;
      *(byte *)(unaff_s0 + 0xad) = bVar4;
      if (bVar4 < 3) goto _L0;
      if (0xf < bVar4) {
        *(undefined *)(unaff_s0 + 0xad) = 0xf;
      }
    }
    *(undefined *)(unaff_s0 + 0xae) = 0;
    if (unaff_s6 == 0) {
      return;
    }
  }
  else {
_L0:
    uVar3 = FUN_00011902(unaff_s1 & 0xff);
    bVar1 = true;
    if ((*(byte *)(unaff_s2 + 0xe) & 0xf) < 10) {
      bVar1 = unaff_s8 <= *(byte *)(unaff_s2 + 0xc);
    }
    *(undefined2 *)(unaff_s0 + 0xa0) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x9c) = *(undefined4 *)(unaff_s0 + 0x84);
    if (bVar1) {
      *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) & 0xfd;
      *(undefined4 *)(unaff_s0 + 0x84) = *(undefined4 *)(unaff_s0 + 0x7c);
      *(undefined2 *)(unaff_s0 + 0x88) = unaff_s5;
      *(undefined4 *)(unaff_s0 + 0x7c) = uVar3;
      *(ushort *)(unaff_s0 + 0x80) = unaff_s1;
    }
    else {
      *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) | 2;
      *(undefined4 *)(unaff_s0 + 0x84) = uVar3;
      *(ushort *)(unaff_s0 + 0x88) = unaff_s1;
    }
    *(undefined *)(unaff_s0 + 0xae) = 2;
  }
  iVar5 = unaff_s3 + unaff_s4 * 0x1b0;
  *(byte *)(iVar5 + 0x11a) = *(byte *)(iVar5 + 0x11a) | 1;
  return;
}



void FUN_00011888(void)

{
  bool bVar1;
  int unaff_s0;
  ushort unaff_s1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  int unaff_s2;
  int iVar5;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  int unaff_s6;
  undefined2 unaff_s7;
  uint unaff_s8;
  int unaff_s9;
  uint unaff_s10;
  int in_stack_0000000c;
  
  uVar2 = FUN_00011888();
  if ((in_stack_0000000c - 1U < uVar2) ||
     (uVar2 = FUN_000118a4(*(undefined2 *)(unaff_s9 * 0xc + unaff_s0 + 10)), uVar2 <= unaff_s10)) {
    if (unaff_s8 <= *(byte *)(unaff_s2 + 0xc)) {
      bVar4 = *(char *)(unaff_s0 + 0xad) + 1;
      *(byte *)(unaff_s0 + 0xad) = bVar4;
      if (bVar4 < 3) goto _L0;
      if (0xf < bVar4) {
        *(undefined *)(unaff_s0 + 0xad) = 0xf;
      }
    }
    *(undefined *)(unaff_s0 + 0xae) = 0;
    if (unaff_s6 == 0) {
      return;
    }
  }
  else {
_L0:
    uVar3 = FUN_00011902(unaff_s1 & 0xff);
    bVar1 = true;
    if ((*(byte *)(unaff_s2 + 0xe) & 0xf) < 10) {
      bVar1 = unaff_s8 <= *(byte *)(unaff_s2 + 0xc);
    }
    *(undefined2 *)(unaff_s0 + 0xa0) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x9c) = *(undefined4 *)(unaff_s0 + 0x84);
    if (bVar1) {
      *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) & 0xfd;
      *(undefined4 *)(unaff_s0 + 0x84) = *(undefined4 *)(unaff_s0 + 0x7c);
      *(undefined2 *)(unaff_s0 + 0x88) = unaff_s5;
      *(undefined4 *)(unaff_s0 + 0x7c) = uVar3;
      *(ushort *)(unaff_s0 + 0x80) = unaff_s1;
    }
    else {
      *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) | 2;
      *(undefined4 *)(unaff_s0 + 0x84) = uVar3;
      *(ushort *)(unaff_s0 + 0x88) = unaff_s1;
    }
    *(undefined *)(unaff_s0 + 0xae) = 2;
  }
  iVar5 = unaff_s3 + unaff_s4 * 0x1b0;
  *(byte *)(iVar5 + 0x11a) = *(byte *)(iVar5 + 0x11a) | 1;
  return;
}



void FUN_000118a4(void)

{
  bool bVar1;
  int unaff_s0;
  ushort unaff_s1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  int unaff_s2;
  int iVar5;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  int unaff_s6;
  undefined2 unaff_s7;
  uint unaff_s8;
  uint unaff_s10;
  
  uVar2 = FUN_000118a4();
  if (unaff_s10 < uVar2) {
_L0:
    uVar3 = FUN_00011902(unaff_s1 & 0xff);
    bVar1 = true;
    if ((*(byte *)(unaff_s2 + 0xe) & 0xf) < 10) {
      bVar1 = unaff_s8 <= *(byte *)(unaff_s2 + 0xc);
    }
    *(undefined2 *)(unaff_s0 + 0xa0) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x9c) = *(undefined4 *)(unaff_s0 + 0x84);
    if (bVar1) {
      *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) & 0xfd;
      *(undefined4 *)(unaff_s0 + 0x84) = *(undefined4 *)(unaff_s0 + 0x7c);
      *(undefined2 *)(unaff_s0 + 0x88) = unaff_s5;
      *(undefined4 *)(unaff_s0 + 0x7c) = uVar3;
      *(ushort *)(unaff_s0 + 0x80) = unaff_s1;
    }
    else {
      *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) | 2;
      *(undefined4 *)(unaff_s0 + 0x84) = uVar3;
      *(ushort *)(unaff_s0 + 0x88) = unaff_s1;
    }
    *(undefined *)(unaff_s0 + 0xae) = 2;
  }
  else {
    if (unaff_s8 <= *(byte *)(unaff_s2 + 0xc)) {
      bVar4 = *(char *)(unaff_s0 + 0xad) + 1;
      *(byte *)(unaff_s0 + 0xad) = bVar4;
      if (bVar4 < 3) goto _L0;
      if (0xf < bVar4) {
        *(undefined *)(unaff_s0 + 0xad) = 0xf;
      }
    }
    *(undefined *)(unaff_s0 + 0xae) = 0;
    if (unaff_s6 == 0) {
      return;
    }
  }
  iVar5 = unaff_s3 + unaff_s4 * 0x1b0;
  *(byte *)(iVar5 + 0x11a) = *(byte *)(iVar5 + 0x11a) | 1;
  return;
}



void FUN_00011902(void)

{
  bool bVar1;
  int unaff_s0;
  undefined2 unaff_s1;
  undefined4 uVar2;
  int unaff_s2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  undefined2 unaff_s7;
  uint unaff_s8;
  
  uVar2 = FUN_00011902();
  bVar1 = true;
  if ((*(byte *)(unaff_s2 + 0xe) & 0xf) < 10) {
    bVar1 = unaff_s8 <= *(byte *)(unaff_s2 + 0xc);
  }
  *(undefined2 *)(unaff_s0 + 0xa0) = unaff_s7;
  *(undefined4 *)(unaff_s0 + 0x9c) = *(undefined4 *)(unaff_s0 + 0x84);
  if (bVar1) {
    *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) & 0xfd;
    *(undefined4 *)(unaff_s0 + 0x84) = *(undefined4 *)(unaff_s0 + 0x7c);
    *(undefined2 *)(unaff_s0 + 0x88) = unaff_s5;
    *(undefined4 *)(unaff_s0 + 0x7c) = uVar2;
    *(undefined2 *)(unaff_s0 + 0x80) = unaff_s1;
  }
  else {
    *(byte *)(unaff_s0 + 0xaf) = *(byte *)(unaff_s0 + 0xaf) | 2;
    *(undefined4 *)(unaff_s0 + 0x84) = uVar2;
    *(undefined2 *)(unaff_s0 + 0x88) = unaff_s1;
  }
  *(undefined *)(unaff_s0 + 0xae) = 2;
  iVar3 = unaff_s3 + unaff_s4 * 0x1b0;
  *(byte *)(iVar3 + 0x11a) = *(byte *)(iVar3 + 0x11a) | 1;
  return;
}


