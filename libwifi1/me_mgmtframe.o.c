typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned int    undefined3;
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

typedef union anon_union.conflict28dc_for_field_0 anon_union.conflict28dc_for_field_0, *Panon_union.conflict28dc_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict13e6_for_field_3 anon_union.conflict13e6_for_field_3, *Panon_union.conflict13e6_for_field_3;

typedef union anon_union.conflict140b_for_field_4 anon_union.conflict140b_for_field_4, *Panon_union.conflict140b_for_field_4;

typedef union anon_union.conflict1430_for_field_5 anon_union.conflict1430_for_field_5, *Panon_union.conflict1430_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr {
    struct co_list_hdr * next;
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

union anon_union.conflict140b_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict1430_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict13e6_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict13e6_for_field_3 field_3;
    union anon_union.conflict140b_for_field_4 field_4;
    union anon_union.conflict1430_for_field_5 field_5;
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

struct tx_policy_tbl {
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict28dc_for_field_0 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control {
    union anon_union.conflict28dc_for_field_0 field_0;
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

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag {
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

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

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictb27_for_u anon_union.conflictb27_for_u, *Panon_union.conflictb27_for_u;

typedef struct anon_struct.conflictac7 anon_struct.conflictac7, *Panon_struct.conflictac7;

typedef struct anon_struct.conflictafe anon_struct.conflictafe, *Panon_struct.conflictafe;

struct anon_struct.conflictafe {
    uint32_t key[4];
};

struct anon_struct.conflictac7 {
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

union anon_union.conflictb27_for_u {
    struct anon_struct.conflictac7 mic;
    struct anon_struct.conflictafe mfp;
};

struct key_info_tag {
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb27_for_u u;
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

typedef union anon_union.conflictb27 anon_union.conflictb27, *Panon_union.conflictb27;

union anon_union.conflictb27 {
    struct anon_struct.conflictac7 mic;
    struct anon_struct.conflictafe mfp;
};

typedef enum anon_enum_8.conflict9cd {
    BA_RESPONDER=0,
    AC_VI=2,
    STA_HT_CAPA=2,
    AC_VO=3,
    AP_ENC_OPEN=0,
    AP_ENC_WPA2_WPA=2,
    PHY_CHNL_BW_80P80=4,
    STA_QOS_CAPA=1,
    PHY_BAND_MAX=2,
    STA_OPMOD_NOTIF=16,
    PHY_CHNL_BW_160=3,
    PHY_BAND_2G4=0,
    BA_ORIGINATOR=1,
    AC_MAX=4,
    AP_ENC_WPA2=1,
    STA_MFP_CAPA=8,
    STA_VHT_CAPA=4,
    AC_BE=1,
    PHY_CHNL_BW_20=0,
    AC_BK=0,
    PHY_BAND_5G=1,
    PHY_CHNL_BW_40=1,
    PHY_CHNL_BW_OTHER=5,
    PHY_CHNL_BW_80=2,
    BA_DEV_NONE=2
} anon_enum_8.conflict9cd;

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

typedef struct me_sta_add_req me_sta_add_req, *Pme_sta_add_req;

struct me_sta_add_req {
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

typedef struct mac_hdr mac_hdr, *Pmac_hdr;

struct mac_hdr {
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
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

typedef struct sm_connect_req sm_connect_req, *Psm_connect_req;

struct sm_connect_req {
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

struct sm_connect_ind {
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

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct co_read16_struct co_read16_struct, *Pco_read16_struct;

struct co_read16_struct {
    uint16_t val;
};

typedef struct co_read32_struct co_read32_struct, *Pco_read32_struct;

struct co_read32_struct {
    uint32_t val;
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

typedef union anon_union.conflict3589 anon_union.conflict3589, *Panon_union.conflict3589;

typedef struct anon_struct.conflict33c1 anon_struct.conflict33c1, *Panon_struct.conflict33c1;

typedef struct anon_struct.conflict348e anon_struct.conflict348e, *Panon_struct.conflict348e;

struct anon_struct.conflict33c1 {
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

struct anon_struct.conflict348e {
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

union anon_union.conflict3589 {
    struct anon_struct.conflict33c1 sta;
    struct anon_struct.conflict348e ap;
};

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict3589_for_u anon_union.conflict3589_for_u, *Panon_union.conflict3589_for_u;

union anon_union.conflict3589_for_u {
    struct anon_struct.conflict33c1 sta;
    struct anon_struct.conflict348e ap;
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
    union anon_union.conflict3589_for_u u;
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

typedef union anon_union.conflict2e41_for_rate_map anon_union.conflict2e41_for_rate_map, *Panon_union.conflict2e41_for_rate_map;

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

union anon_union.conflict2e41_for_rate_map {
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
    union anon_union.conflict2e41_for_rate_map rate_map;
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

typedef union anon_union.conflict2e41 anon_union.conflict2e41, *Panon_union.conflict2e41;

union anon_union.conflict2e41 {
    uint8_t ht[4];
};

typedef struct sm_env_tag sm_env_tag, *Psm_env_tag;

struct sm_env_tag {
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

typedef union anon_union.conflict28dc anon_union.conflict28dc, *Panon_union.conflict28dc;

union anon_union.conflict28dc {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef union anon_union.conflict13e6 anon_union.conflict13e6, *Panon_union.conflict13e6;

union anon_union.conflict13e6 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict140b anon_union.conflict140b, *Panon_union.conflict140b;

union anon_union.conflict140b {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict1430 anon_union.conflict1430, *Panon_union.conflict1430;

union anon_union.conflict1430 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
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




void co_pack8p(uint32_t dst,uint8_t *src,uint32_t len)

{
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  while (len != uVar3) {
    puVar1 = src + uVar3;
    puVar2 = (uint8_t *)(dst + uVar3);
    uVar3 = uVar3 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



int phy_freq_to_channel(uint8_t band,uint16_t freq)

{
  undefined3 in_register_00002029;
  undefined2 in_register_0000202e;
  int iVar1;
  int iVar2;
  
  iVar1 = CONCAT22(in_register_0000202e,freq);
  if (CONCAT31(in_register_00002029,band) == 0) {
    if (0x48 < (iVar1 - 0x96cU & 0xffff)) {
      return 0;
    }
    if (iVar1 == 0x9b4) {
      return 0xe;
    }
    iVar2 = -0x967;
  }
  else {
    if (CONCAT31(in_register_00002029,band) != 1) {
      return 0;
    }
    if (0x334 < (iVar1 - 0x138dU & 0xffff)) {
      return 0;
    }
    iVar2 = -5000;
  }
  return (iVar1 + iVar2) / 5;
}



uint16_t phy_channel_to_freq(uint8_t band,int channel)

{
  undefined3 in_register_00002029;
  int iVar1;
  
  if (CONCAT31(in_register_00002029,band) == 0) {
    if (0xd < channel - 1U) {
      return 0xffff;
    }
    if (channel == 0xe) {
      return 0x9b4;
    }
    iVar1 = 0x967;
  }
  else {
    if (0xa4 < channel - 1U) {
      return 0xffff;
    }
    iVar1 = 5000;
  }
  return (uint16_t)((uint)((channel * 5 + iVar1) * 0x10000) >> 0x10);
}



uint32_t me_add_ie_ssid(uint32_t *frame_addr,uint8_t ssid_len,uint8_t *p_ssid)

{
  undefined3 in_register_0000202d;
  int iVar1;
  
  iVar1 = CONCAT31(in_register_0000202d,ssid_len);
  *(undefined *)*frame_addr = 0;
  *(uint8_t *)(*frame_addr + 1) = ssid_len;
  if (iVar1 != 0) {
    FUN_000100e2(*frame_addr + 2,p_ssid,iVar1);
  }
  *frame_addr = *frame_addr + iVar1 + 2U;
  return iVar1 + 2U;
}



void FUN_000100e2(void)

{
  int *unaff_s0;
  int unaff_s1;
  
  FUN_000100e2();
  *unaff_s0 = *unaff_s0 + unaff_s1;
  return;
}



uint32_t me_add_ie_supp_rates(uint32_t *frame_addr,mac_rateset *p_rateset)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = p_rateset->length;
  uVar3 = (uint)bVar2;
  uVar1 = 8;
  if (uVar3 < 9) {
    uVar1 = uVar3;
  }
  *(undefined *)*frame_addr = 1;
  if (8 < uVar3) {
    bVar2 = 8;
  }
  *(byte *)(*frame_addr + 1) = bVar2;
  FUN_00010136(*frame_addr + 2,p_rateset->array);
  *frame_addr = *frame_addr + uVar1 + 2;
  return uVar1 + 2;
}



void FUN_00010136(void)

{
  int *unaff_s0;
  int unaff_s1;
  
  FUN_00010136();
  *unaff_s0 = *unaff_s0 + unaff_s1;
  return;
}



uint32_t me_add_ie_ext_supp_rates(uint32_t *frame_addr,mac_rateset *p_rateset)

{
  byte bVar1;
  uint32_t uVar2;
  
  bVar1 = p_rateset->length;
  *(undefined *)*frame_addr = 0x32;
  uVar2 = bVar1 - 6;
  *(byte *)(*frame_addr + 1) = bVar1 - 8;
  FUN_0001017a(*frame_addr + 2,p_rateset->array + 8);
  *frame_addr = *frame_addr + uVar2;
  return uVar2;
}



void FUN_0001017a(void)

{
  int *unaff_s0;
  int unaff_s1;
  
  FUN_0001017a();
  *unaff_s0 = *unaff_s0 + unaff_s1;
  return;
}



uint32_t me_add_ie_ds(uint32_t *frame_addr,uint8_t channel)

{
  *(undefined *)*frame_addr = 3;
  *(undefined *)(*frame_addr + 1) = 1;
  *(uint8_t *)(*frame_addr + 2) = channel;
  *frame_addr = *frame_addr + 3;
  return 3;
}



uint32_t me_add_ie_erp(uint32_t *frame_addr,uint8_t erp_info)

{
  *(undefined *)*frame_addr = 0x2a;
  *(undefined *)(*frame_addr + 1) = 1;
  *(uint8_t *)(*frame_addr + 2) = erp_info;
  *frame_addr = *frame_addr + 3;
  return 3;
}



uint32_t me_add_ie_rsn(uint32_t *frame_addr,uint8_t enc_type)

{
  undefined3 in_register_0000202d;
  uint32_t uVar1;
  uint32_t uVar2;
  
  if (CONCAT31(in_register_0000202d,enc_type) == 1) {
    *(undefined *)*frame_addr = 0x30;
    *(undefined *)(*frame_addr + 1) = 0x14;
    uVar1 = *frame_addr;
    *(uint8_t *)(uVar1 + 2) = enc_type;
    *(undefined *)(uVar1 + 3) = 0;
    uVar1 = *frame_addr;
    *(undefined *)(uVar1 + 6) = 0xac;
    *(undefined *)(uVar1 + 7) = 4;
    *(undefined *)(uVar1 + 4) = 0;
    *(undefined *)(uVar1 + 5) = 0xf;
    uVar1 = *frame_addr;
    *(uint8_t *)(uVar1 + 8) = enc_type;
    *(undefined *)(uVar1 + 9) = 0;
    uVar1 = *frame_addr;
    *(undefined *)(uVar1 + 0xc) = 0xac;
    *(undefined *)(uVar1 + 0xd) = 4;
    *(undefined *)(uVar1 + 10) = 0;
    *(undefined *)(uVar1 + 0xb) = 0xf;
    uVar2 = *frame_addr;
    uVar1 = 0x16;
    *(uint8_t *)(uVar2 + 0xe) = enc_type;
    *(undefined *)(uVar2 + 0xf) = 0;
    uVar2 = *frame_addr;
    *(undefined *)(uVar2 + 0x12) = 0xac;
    *(undefined *)(uVar2 + 0x10) = 0;
    *(undefined *)(uVar2 + 0x11) = 0xf;
    *(undefined *)(uVar2 + 0x13) = 2;
    uVar2 = *frame_addr;
    *(undefined *)(uVar2 + 0x14) = 0;
    *(undefined *)(uVar2 + 0x15) = 0;
  }
  else {
    uVar1 = 0;
    if (CONCAT31(in_register_0000202d,enc_type) == 2) {
      *(undefined *)*frame_addr = 0x30;
      *(undefined *)(*frame_addr + 1) = 0x18;
      uVar1 = *frame_addr;
      *(undefined *)(uVar1 + 2) = 1;
      *(undefined *)(uVar1 + 3) = 0;
      uVar1 = *frame_addr;
      *(undefined *)(uVar1 + 4) = 0;
      *(undefined *)(uVar1 + 5) = 0xf;
      *(undefined *)(uVar1 + 6) = 0xac;
      *(uint8_t *)(uVar1 + 7) = enc_type;
      uVar1 = *frame_addr;
      *(uint8_t *)(uVar1 + 8) = enc_type;
      *(undefined *)(uVar1 + 9) = 0;
      uVar1 = *frame_addr;
      *(undefined *)(uVar1 + 10) = 0;
      *(undefined *)(uVar1 + 0xb) = 0xf;
      *(undefined *)(uVar1 + 0xc) = 0xac;
      *(uint8_t *)(uVar1 + 0xd) = enc_type;
      uVar1 = *frame_addr;
      *(undefined *)(uVar1 + 0x11) = 4;
      *(undefined *)(uVar1 + 0xe) = 0;
      *(undefined *)(uVar1 + 0xf) = 0xf;
      *(undefined *)(uVar1 + 0x10) = 0xac;
      uVar2 = *frame_addr;
      uVar1 = 0x1a;
      *(undefined *)(uVar2 + 0x12) = 1;
      *(undefined *)(uVar2 + 0x13) = 0;
      uVar2 = *frame_addr;
      *(undefined *)(uVar2 + 0x14) = 0;
      *(undefined *)(uVar2 + 0x15) = 0xf;
      *(undefined *)(uVar2 + 0x16) = 0xac;
      *(uint8_t *)(uVar2 + 0x17) = enc_type;
      uVar2 = *frame_addr;
      *(undefined *)(uVar2 + 0x18) = 0;
      *(undefined *)(uVar2 + 0x19) = 0;
    }
  }
  *frame_addr = *frame_addr + uVar1;
  return uVar1;
}



uint32_t me_add_ie_wpa(uint32_t *frame_addr,uint8_t enc_type)

{
  uint32_t uVar1;
  undefined3 in_register_0000202d;
  uint32_t uVar2;
  
  uVar1 = 0;
  if (CONCAT31(in_register_0000202d,enc_type) == 2) {
    *(undefined *)*frame_addr = 0xdd;
    *(undefined *)(*frame_addr + 1) = 0x1c;
    uVar1 = *frame_addr;
    *(undefined *)(uVar1 + 5) = 1;
    *(undefined *)(uVar1 + 2) = 0;
    *(undefined *)(uVar1 + 3) = 0x50;
    *(undefined *)(uVar1 + 4) = 0xf2;
    uVar1 = *frame_addr;
    *(undefined *)(uVar1 + 6) = 1;
    *(undefined *)(uVar1 + 7) = 0;
    uVar1 = *frame_addr;
    *(undefined *)(uVar1 + 8) = 0;
    *(undefined *)(uVar1 + 9) = 0x50;
    *(undefined *)(uVar1 + 10) = 0xf2;
    *(uint8_t *)(uVar1 + 0xb) = enc_type;
    uVar1 = *frame_addr;
    *(uint8_t *)(uVar1 + 0xc) = enc_type;
    *(undefined *)(uVar1 + 0xd) = 0;
    uVar1 = *frame_addr;
    *(undefined *)(uVar1 + 0xe) = 0;
    *(undefined *)(uVar1 + 0xf) = 0x50;
    *(undefined *)(uVar1 + 0x10) = 0xf2;
    *(uint8_t *)(uVar1 + 0x11) = enc_type;
    uVar1 = *frame_addr;
    *(undefined *)(uVar1 + 0x12) = 0;
    *(undefined *)(uVar1 + 0x13) = 0x50;
    *(undefined *)(uVar1 + 0x14) = 0xf2;
    *(undefined *)(uVar1 + 0x15) = 4;
    uVar1 = *frame_addr;
    *(undefined *)(uVar1 + 0x16) = 1;
    *(undefined *)(uVar1 + 0x17) = 0;
    uVar2 = *frame_addr;
    uVar1 = 0x1e;
    *(undefined *)(uVar2 + 0x18) = 0;
    *(undefined *)(uVar2 + 0x19) = 0x50;
    *(undefined *)(uVar2 + 0x1a) = 0xf2;
    *(uint8_t *)(uVar2 + 0x1b) = enc_type;
  }
  *frame_addr = *frame_addr + uVar1;
  return uVar1;
}



uint32_t me_add_ie_tim(uint32_t *frame_addr,uint8_t dtim_period)

{
  *(undefined *)*frame_addr = 5;
  *(undefined *)(*frame_addr + 1) = 4;
  *(uint8_t *)(*frame_addr + 3) = dtim_period;
  *frame_addr = *frame_addr + 6;
  return 6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t me_add_ie_ht_capa(uint32_t *frame_addr)

{
  undefined2 uVar1;
  uint32_t uVar2;
  uint uVar3;
  
  uVar3 = (uint)_DAT_0000000c;
  *(undefined *)*frame_addr = 0x2d;
  *(undefined *)(*frame_addr + 1) = 0x1a;
  uVar2 = *frame_addr;
  *(byte *)(uVar2 + 2) = (byte)(uVar3 & 0xfffffff3) | 0xc;
  *(char *)(uVar2 + 3) = (char)((uVar3 & 0xfffffff3) >> 8);
  *(undefined *)(*frame_addr + 4) = DAT_0000000e;
  FUN_00010410(*frame_addr + 5,0xf,0x10);
  uVar1 = _DAT_00000020;
  uVar2 = *frame_addr;
  *(char *)(uVar2 + 0x15) = (char)_DAT_00000020;
  *(char *)(uVar2 + 0x16) = (char)((ushort)uVar1 >> 8);
  FUN_00010436(*frame_addr + 0x17,0x24,4);
  *(undefined *)(*frame_addr + 0x1b) = DAT_00000028;
  *frame_addr = *frame_addr + 0x1c;
  return 0x1c;
}



undefined4 FUN_00010410(void)

{
  undefined2 uVar1;
  int *unaff_s0;
  int unaff_s1;
  int iVar2;
  
  FUN_00010410();
  uVar1 = *(undefined2 *)(unaff_s1 + 0x20);
  iVar2 = *unaff_s0;
  *(char *)(iVar2 + 0x15) = (char)uVar1;
  *(char *)(iVar2 + 0x16) = (char)((ushort)uVar1 >> 8);
  FUN_00010436(*unaff_s0 + 0x17,0x24,4);
  *(undefined *)(*unaff_s0 + 0x1b) = *(undefined *)(unaff_s1 + 0x28);
  *unaff_s0 = *unaff_s0 + 0x1c;
  return 0x1c;
}



undefined4 FUN_00010436(void)

{
  int *unaff_s0;
  int unaff_s1;
  
  FUN_00010436();
  *(undefined *)(*unaff_s0 + 0x1b) = *(undefined *)(unaff_s1 + 0x28);
  *unaff_s0 = *unaff_s0 + 0x1c;
  return 0x1c;
}



uint32_t me_add_ie_ht_oper(uint32_t *frame_addr,vif_info_tag *p_vif_entry)

{
  chan_ctxt_tag *pcVar1;
  undefined uVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  
  pcVar1 = p_vif_entry->chan_ctxt;
  *(undefined *)*frame_addr = 0x3d;
  *(undefined *)(*frame_addr + 1) = 0x16;
  uVar2 = _LVL150((pcVar1->channel).band,(pcVar1->channel).prim20_freq);
  *(undefined *)(*frame_addr + 2) = uVar2;
  uVar3 = (pcVar1->channel).type;
  if ((uVar3 != '\0') &&
     (uVar3 = '\a', (pcVar1->channel).prim20_freq <= (pcVar1->channel).center1_freq)) {
    uVar3 = '\x05';
  }
  *(uint8_t *)(*frame_addr + 3) = uVar3;
  uVar4 = *frame_addr;
  *(undefined *)(uVar4 + 4) = 3;
  *(undefined *)(uVar4 + 5) = 0;
  uVar4 = *frame_addr;
  *(undefined *)(uVar4 + 6) = 0;
  *(undefined *)(uVar4 + 7) = 0;
  *(undefined *)(*frame_addr + 8) = 0xff;
  *frame_addr = *frame_addr + 0x18;
  return 0x18;
}



undefined4 _LVL150(void)

{
  int *unaff_s0;
  int unaff_s1;
  undefined uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = _LVL150();
  *(undefined *)(*unaff_s0 + 2) = uVar1;
  cVar2 = *(char *)(unaff_s1 + 5);
  if ((cVar2 != '\0') && (cVar2 = '\a', *(ushort *)(unaff_s1 + 6) <= *(ushort *)(unaff_s1 + 8))) {
    cVar2 = '\x05';
  }
  *(char *)(*unaff_s0 + 3) = cVar2;
  iVar3 = *unaff_s0;
  *(undefined *)(iVar3 + 4) = 3;
  *(undefined *)(iVar3 + 5) = 0;
  iVar3 = *unaff_s0;
  *(undefined *)(iVar3 + 6) = 0;
  *(undefined *)(iVar3 + 7) = 0;
  *(undefined *)(*unaff_s0 + 8) = 0xff;
  *unaff_s0 = *unaff_s0 + 0x18;
  return 0x18;
}



uint16_t me_build_authenticate
                   (uint32_t frame,uint16_t algo_type,uint16_t seq_nbr,uint16_t status_code,
                   uint32_t *challenge_array_ptr)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  *(char *)frame = (char)algo_type;
  *(char *)(frame + 2) = (char)seq_nbr;
  *(char *)(frame + 4) = (char)status_code;
  *(char *)(frame + 1) = (char)(algo_type >> 8);
  *(char *)(frame + 3) = (char)(seq_nbr >> 8);
  *(char *)(frame + 5) = (char)(status_code >> 8);
  if (challenge_array_ptr != (uint32_t *)0x0) {
    *(undefined *)(frame + 6) = 0x10;
    *(undefined *)(frame + 7) = 0x80;
    iVar3 = 0;
    do {
      puVar1 = (undefined *)((int)challenge_array_ptr + iVar3);
      puVar2 = (undefined *)(frame + 8 + iVar3);
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar1;
    } while (iVar3 != 0x80);
    return 0x88;
  }
  return 6;
}



uint16_t me_build_deauthenticate(uint32_t frame,uint16_t reason_code)

{
  *(char *)frame = (char)reason_code;
  *(char *)(frame + 1) = (char)(reason_code >> 8);
  return 2;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint16_t me_build_associate_req
                   (uint32_t frame,mac_bss_info *bss,mac_addr *old_ap_addr_ptr,uint8_t vif_idx,
                   uint32_t *ie_addr,uint16_t *ie_len,sm_connect_req *con_par)

{
  byte bVar1;
  uint32_t *puVar2;
  uint8_t uVar3;
  char cVar4;
  ushort uVar5;
  mac_ssid *pmVar6;
  undefined *puVar7;
  uint16_t uVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  undefined3 in_register_00002035;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  undefined2 *puVar20;
  char cVar21;
  char cVar22;
  ushort uVar23;
  char cVar24;
  undefined *apuStack100 [4];
  undefined uStack81;
  undefined2 uStack80;
  undefined uStack78;
  int8_t min;
  int8_t max;
  undefined uStack73;
  uint8_t uStack72;
  
  uVar8 = con_par->listen_interval;
  uVar5 = con_par->ie_len;
  uVar3 = con_par->uapsd_queues;
  if (uVar8 == 0) {
    uVar8 = 5;
  }
  apuStack100[0] = (undefined *)frame;
  uVar12 = _L0(CONCAT31(in_register_00002035,vif_idx));
  *apuStack100[0] = (char)uVar12;
  apuStack100[0][1] = (char)(uVar12 >> 8);
  apuStack100[0][2] = (char)uVar8;
  apuStack100[0][3] = (char)(uVar8 >> 8);
  iVar9 = 4;
  if (old_ap_addr_ptr != (mac_addr *)0x0) {
    iVar9 = 10;
    *(uint16_t *)(apuStack100[0] + 4) = old_ap_addr_ptr->array[0];
    *(uint16_t *)(apuStack100[0] + 6) = old_ap_addr_ptr->array[1];
    *(uint16_t *)(apuStack100[0] + 8) = old_ap_addr_ptr->array[2];
  }
  apuStack100[0] = apuStack100[0] + iVar9;
  *ie_addr = (uint32_t)apuStack100[0];
  sVar10 = _L0(apuStack100,(bss->ssid).length,(bss->ssid).array);
  sVar11 = FUN_000105e8(apuStack100,&bss->rate_set);
  sVar10 = (short)iVar9 + sVar11 + sVar10;
  if (8 < (bss->rate_set).length) {
    sVar11 = FUN_00010606(apuStack100,&bss->rate_set);
    sVar10 = sVar10 + sVar11;
  }
  if ((uVar12 & 0x100) != 0) {
    puVar15 = apuStack100[0] + 1;
    *apuStack100[0] = 0x21;
    apuStack100[0] = apuStack100[0] + 2;
    *puVar15 = 2;
    _L0(&uStack80,&uStack81);
    bVar1 = bss->chan->tx_power;
    if ((char)bVar1 < (char)uStack80) {
      uStack80 = uStack80 & 0xff00 | (ushort)bVar1;
    }
    *apuStack100[0] = uStack81;
    apuStack100[0][1] = (char)uStack80;
    puVar15 = apuStack100[0] + 3;
    apuStack100[0][2] = 0x24;
    apuStack100[0] = apuStack100[0] + 4;
    if (bss->chan->band == '\0') {
      puVar20 = (undefined2 *)&DAT_00000030;
      iVar9 = 1;
      cVar4 = DAT_0000012c;
    }
    else {
      puVar20 = (undefined2 *)0x84;
      iVar9 = 4;
      cVar4 = DAT_0000012d;
    }
    uVar19 = 0;
    cVar21 = '\0';
    cVar24 = '\0';
    uVar12 = 0;
    uVar17 = 0;
    while( true ) {
      puVar7 = apuStack100[0];
      uVar23 = uVar19 + 2 & 0xff;
      pcVar14 = apuStack100[0] + 1;
      if (cVar24 == cVar4) break;
      uVar16 = uVar12;
      uVar18 = uVar17;
      if ((*(byte *)((int)puVar20 + 3) & 2) == 0) {
        uVar13 = _L0(*(undefined *)(puVar20 + 1),*puVar20);
        uVar16 = uVar13 & 0xff;
        uVar18 = uVar16;
        cVar22 = cVar21;
        if ((cVar21 != '\0') && (uVar18 = uVar17, (uVar13 & 0xff) - uVar12 != iVar9)) {
          cVar22 = cVar21 + '\x01';
          *puVar7 = (char)uVar17;
          apuStack100[0] = puVar7 + 2;
          *pcVar14 = cVar21;
          uVar19 = uVar23;
        }
        cVar21 = cVar22 + '\x01';
        puVar20 = puVar20 + 3;
      }
      cVar24 = cVar24 + '\x01';
      uVar12 = uVar16;
      uVar17 = uVar18;
    }
    *apuStack100[0] = (char)uVar17;
    sVar10 = sVar10 + 6 + uVar23;
    apuStack100[0] = apuStack100[0] + 2;
    *pcVar14 = cVar21;
    *puVar15 = (char)uVar23;
  }
  pmVar6 = &con_par->ssid;
  iVar9 = -(int)con_par;
  while ((sm_connect_req *)(pmVar6->array + (uVar5 - 1)) != con_par) {
    puVar2 = con_par->ie_buf;
    puVar15 = apuStack100[0] + iVar9 + (int)con_par;
    con_par = (sm_connect_req *)(con_par->ssid).array;
    *puVar15 = *(undefined *)puVar2;
  }
  uVar8 = sVar10 + uVar5;
  puVar15 = apuStack100[0] + uVar5;
  apuStack100[0] = puVar15;
  if ((bss->valid_flags & 1) != 0) {
    FUN_0001071a(&uStack78,0,0xe);
    uStack80 = 0x7dd;
    min = 'P';
    _max = 0x2f2;
    uStack73 = 1;
    if ((_DAT_00000020 != 0) && ((char)(bss->edca_param).qos_info < '\0')) {
      uStack72 = uVar3;
    }
    FUN_0001075c(puVar15,&uStack80,9);
    uVar8 = uVar8 + uStack80._1_1_ + 2;
    apuStack100[0] = apuStack100[0] + uStack80._1_1_ + 2;
  }
  if (((bss->valid_flags & 2) != 0) && (DAT_0000002e != '\0')) {
    sVar10 = FUN_0001078e(apuStack100);
    uVar8 = uVar8 + sVar10;
  }
  *ie_len = (short)apuStack100[0] - (short)*ie_addr;
  return uVar8;
}



uint _L0(undefined4 uRam00000020,undefined3 param_2,undefined2 param_3)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 unaff_s0;
  int iVar4;
  uint uVar5;
  int unaff_s1;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  int unaff_s3;
  char cVar17;
  char cVar18;
  int unaff_s5;
  undefined4 *unaff_s6;
  short *unaff_s7;
  uint uVar19;
  char cVar20;
  undefined2 *in_stack_00000000;
  undefined *in_stack_0000001c;
  undefined in_stack_0000002f;
  char cStack00000030;
  ushort in_stack_00000030;
  byte bStack00000031;
  undefined in_stack_00000033;
  undefined2 in_stack_00000034;
  undefined in_stack_00000037;
  
  uVar6 = _L0();
  *in_stack_0000001c = (char)uVar6;
  in_stack_0000001c[1] = (char)(uVar6 >> 8);
  in_stack_0000001c[2] = (char)unaff_s0;
  in_stack_0000001c[3] = (char)((uint)unaff_s0 >> 8);
  iVar4 = 4;
  if (in_stack_00000000 != (undefined2 *)0x0) {
    iVar4 = 10;
    *(undefined2 *)(in_stack_0000001c + 4) = *in_stack_00000000;
    *(undefined2 *)(in_stack_0000001c + 6) = in_stack_00000000[1];
    *(undefined2 *)(in_stack_0000001c + 8) = in_stack_00000000[2];
  }
  in_stack_0000001c = in_stack_0000001c + iVar4;
  *unaff_s6 = in_stack_0000001c;
  iVar7 = _L0(&stack0x0000001c,*(undefined *)(unaff_s3 + 0x26),unaff_s3 + 0x27);
  iVar8 = FUN_000105e8(&stack0x0000001c,unaff_s3 + 0x58);
  uVar5 = iVar4 + iVar8 + iVar7 & 0xffff;
  if (8 < *(byte *)(unaff_s3 + 0x58)) {
    iVar4 = FUN_00010606(&stack0x0000001c,unaff_s3 + 0x58);
    uVar5 = uVar5 + iVar4 & 0xffff;
  }
  if ((uVar6 & 0x100) != 0) {
    puVar11 = in_stack_0000001c + 1;
    *in_stack_0000001c = 0x21;
    in_stack_0000001c = in_stack_0000001c + 2;
    *puVar11 = 2;
    _L0(&stack0x00000030,&stack0x0000002f);
    bVar1 = *(byte *)(*(int *)(unaff_s3 + 0x4c) + 4);
    if ((char)bVar1 < cStack00000030) {
      in_stack_00000030 = in_stack_00000030 & 0xff00 | (ushort)bVar1;
    }
    *in_stack_0000001c = in_stack_0000002f;
    in_stack_0000001c[1] = cStack00000030;
    puVar11 = in_stack_0000001c + 3;
    in_stack_0000001c[2] = 0x24;
    in_stack_0000001c = in_stack_0000001c + 4;
    if (*(char *)(*(int *)(unaff_s3 + 0x4c) + 2) == '\0') {
      puVar16 = (undefined2 *)&DAT_00000030;
      iVar4 = 1;
      cVar2 = DAT_0000012c;
    }
    else {
      puVar16 = (undefined2 *)0x84;
      iVar4 = 4;
      cVar2 = DAT_0000012d;
    }
    uVar15 = 0;
    cVar17 = '\0';
    cVar20 = '\0';
    uVar6 = 0;
    uVar13 = 0;
    while( true ) {
      puVar3 = in_stack_0000001c;
      uVar19 = uVar15 + 2 & 0xff;
      pcVar10 = in_stack_0000001c + 1;
      if (cVar20 == cVar2) break;
      uVar12 = uVar6;
      uVar14 = uVar13;
      if ((*(byte *)((int)puVar16 + 3) & 2) == 0) {
        uVar9 = _L0(*(undefined *)(puVar16 + 1),*puVar16);
        uVar12 = uVar9 & 0xff;
        uVar14 = uVar12;
        cVar18 = cVar17;
        if ((cVar17 != '\0') && (uVar14 = uVar13, (uVar9 & 0xff) - uVar6 != iVar4)) {
          cVar18 = cVar17 + '\x01';
          *puVar3 = (char)uVar13;
          in_stack_0000001c = puVar3 + 2;
          *pcVar10 = cVar17;
          uVar15 = uVar19;
        }
        cVar17 = cVar18 + '\x01';
        puVar16 = puVar16 + 3;
      }
      cVar20 = cVar20 + '\x01';
      uVar6 = uVar12;
      uVar13 = uVar14;
    }
    *in_stack_0000001c = (char)uVar13;
    in_stack_0000001c = in_stack_0000001c + 2;
    *pcVar10 = cVar17;
    *puVar11 = (char)uVar19;
    uVar5 = uVar5 + 6 + uVar19 & 0xffff;
  }
  iVar4 = unaff_s1;
  while (unaff_s1 + unaff_s5 != iVar4) {
    puVar11 = (undefined *)(iVar4 + 0x40);
    iVar7 = iVar4 - unaff_s1;
    iVar4 = iVar4 + 1;
    in_stack_0000001c[iVar7] = *puVar11;
  }
  puVar11 = in_stack_0000001c + unaff_s5;
  uVar6 = uVar5 + unaff_s5 & 0xffff;
  in_stack_0000001c = puVar11;
  if ((*(uint *)(unaff_s3 + 0x88) & 1) != 0) {
    FUN_0001071a(&stack0x00000032,0,0xe);
    in_stack_00000030 = 0x7dd;
    in_stack_00000033 = 0x50;
    in_stack_00000034 = 0x2f2;
    in_stack_00000037 = 1;
    FUN_0001075c(puVar11,&stack0x00000030,9);
    in_stack_0000001c = in_stack_0000001c + bStack00000031 + 2;
    uVar6 = uVar6 + bStack00000031 + 2 & 0xffff;
  }
  if (((*(uint *)(unaff_s3 + 0x88) & 2) != 0) && (DAT_0000002e != '\0')) {
    iVar4 = FUN_0001078e(&stack0x0000001c);
    uVar6 = uVar6 + iVar4 & 0xffff;
  }
  *unaff_s7 = (short)in_stack_0000001c - (short)*unaff_s6;
  return uVar6;
}



uint _L0(undefined4 uRam00000020,undefined3 param_2,undefined2 param_3)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  int unaff_s0;
  uint uVar5;
  int unaff_s1;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint unaff_s2;
  undefined2 *puVar15;
  int unaff_s3;
  char cVar16;
  char cVar17;
  int unaff_s5;
  undefined4 *unaff_s6;
  short *unaff_s7;
  uint uVar18;
  char cVar19;
  undefined *in_stack_0000001c;
  undefined in_stack_0000002f;
  char cStack00000030;
  ushort in_stack_00000030;
  byte bStack00000031;
  undefined in_stack_00000033;
  undefined2 in_stack_00000034;
  undefined in_stack_00000037;
  
  iVar6 = _L0();
  iVar7 = FUN_000105e8(&stack0x0000001c);
  uVar5 = unaff_s0 + iVar7 + iVar6 & 0xffff;
  if (8 < *(byte *)(unaff_s3 + 0x58)) {
    iVar6 = FUN_00010606(&stack0x0000001c);
    uVar5 = uVar5 + iVar6 & 0xffff;
  }
  if ((unaff_s2 & 0x100) != 0) {
    puVar10 = in_stack_0000001c + 1;
    *in_stack_0000001c = 0x21;
    in_stack_0000001c = in_stack_0000001c + 2;
    *puVar10 = 2;
    _L0(&stack0x00000030,&stack0x0000002f);
    bVar1 = *(byte *)(*(int *)(unaff_s3 + 0x4c) + 4);
    if ((char)bVar1 < cStack00000030) {
      in_stack_00000030 = in_stack_00000030 & 0xff00 | (ushort)bVar1;
    }
    *in_stack_0000001c = in_stack_0000002f;
    in_stack_0000001c[1] = cStack00000030;
    puVar10 = in_stack_0000001c + 3;
    in_stack_0000001c[2] = 0x24;
    in_stack_0000001c = in_stack_0000001c + 4;
    if (*(char *)(*(int *)(unaff_s3 + 0x4c) + 2) == '\0') {
      puVar15 = (undefined2 *)&DAT_00000030;
      iVar6 = 1;
      cVar2 = DAT_0000012c;
    }
    else {
      puVar15 = (undefined2 *)0x84;
      iVar6 = 4;
      cVar2 = DAT_0000012d;
    }
    uVar14 = 0;
    cVar16 = '\0';
    cVar19 = '\0';
    uVar4 = 0;
    uVar12 = 0;
    while( true ) {
      puVar3 = in_stack_0000001c;
      uVar18 = uVar14 + 2 & 0xff;
      pcVar9 = in_stack_0000001c + 1;
      if (cVar19 == cVar2) break;
      uVar11 = uVar4;
      uVar13 = uVar12;
      if ((*(byte *)((int)puVar15 + 3) & 2) == 0) {
        uVar8 = _L0(*(undefined *)(puVar15 + 1),*puVar15);
        uVar11 = uVar8 & 0xff;
        uVar13 = uVar11;
        cVar17 = cVar16;
        if ((cVar16 != '\0') && (uVar13 = uVar12, (uVar8 & 0xff) - uVar4 != iVar6)) {
          cVar17 = cVar16 + '\x01';
          *puVar3 = (char)uVar12;
          in_stack_0000001c = puVar3 + 2;
          *pcVar9 = cVar16;
          uVar14 = uVar18;
        }
        cVar16 = cVar17 + '\x01';
        puVar15 = puVar15 + 3;
      }
      cVar19 = cVar19 + '\x01';
      uVar4 = uVar11;
      uVar12 = uVar13;
    }
    *in_stack_0000001c = (char)uVar12;
    in_stack_0000001c = in_stack_0000001c + 2;
    *pcVar9 = cVar16;
    *puVar10 = (char)uVar18;
    uVar5 = uVar5 + 6 + uVar18 & 0xffff;
  }
  iVar6 = unaff_s1;
  while (unaff_s1 + unaff_s5 != iVar6) {
    puVar10 = (undefined *)(iVar6 + 0x40);
    iVar7 = iVar6 - unaff_s1;
    iVar6 = iVar6 + 1;
    in_stack_0000001c[iVar7] = *puVar10;
  }
  puVar10 = in_stack_0000001c + unaff_s5;
  uVar5 = uVar5 + unaff_s5 & 0xffff;
  in_stack_0000001c = puVar10;
  if ((*(uint *)(unaff_s3 + 0x88) & 1) != 0) {
    FUN_0001071a(&stack0x00000032,0,0xe);
    in_stack_00000030 = 0x7dd;
    in_stack_00000033 = 0x50;
    in_stack_00000034 = 0x2f2;
    in_stack_00000037 = 1;
    FUN_0001075c(puVar10,&stack0x00000030,9);
    in_stack_0000001c = in_stack_0000001c + bStack00000031 + 2;
    uVar5 = uVar5 + bStack00000031 + 2 & 0xffff;
  }
  if (((*(uint *)(unaff_s3 + 0x88) & 2) != 0) && (DAT_0000002e != '\0')) {
    iVar6 = FUN_0001078e(&stack0x0000001c);
    uVar5 = uVar5 + iVar6 & 0xffff;
  }
  *unaff_s7 = (short)in_stack_0000001c - (short)*unaff_s6;
  return uVar5;
}



uint FUN_000105e8(undefined4 uRam00000020,undefined3 param_2,undefined2 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int unaff_s0;
  uint uVar6;
  int unaff_s1;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint unaff_s2;
  undefined2 *puVar15;
  int unaff_s3;
  char cVar16;
  char cVar17;
  int unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s6;
  short *unaff_s7;
  uint uVar18;
  char cVar19;
  undefined *in_stack_0000001c;
  undefined in_stack_0000002f;
  char cStack00000030;
  ushort in_stack_00000030;
  byte bStack00000031;
  undefined in_stack_00000033;
  undefined2 in_stack_00000034;
  undefined in_stack_00000037;
  
  iVar7 = FUN_000105e8();
  uVar6 = unaff_s0 + iVar7 + unaff_s4 & 0xffff;
  if (8 < *(byte *)(unaff_s3 + 0x58)) {
    iVar7 = FUN_00010606(&stack0x0000001c);
    uVar6 = uVar6 + iVar7 & 0xffff;
  }
  if ((unaff_s2 & 0x100) != 0) {
    puVar10 = in_stack_0000001c + 1;
    *in_stack_0000001c = 0x21;
    in_stack_0000001c = in_stack_0000001c + 2;
    *puVar10 = 2;
    _L0(&stack0x00000030,&stack0x0000002f);
    bVar1 = *(byte *)(*(int *)(unaff_s3 + 0x4c) + 4);
    if ((char)bVar1 < cStack00000030) {
      in_stack_00000030 = in_stack_00000030 & 0xff00 | (ushort)bVar1;
    }
    *in_stack_0000001c = in_stack_0000002f;
    in_stack_0000001c[1] = cStack00000030;
    puVar10 = in_stack_0000001c + 3;
    in_stack_0000001c[2] = 0x24;
    in_stack_0000001c = in_stack_0000001c + 4;
    if (*(char *)(*(int *)(unaff_s3 + 0x4c) + 2) == '\0') {
      puVar15 = (undefined2 *)&DAT_00000030;
      iVar7 = 1;
      cVar2 = DAT_0000012c;
    }
    else {
      puVar15 = (undefined2 *)0x84;
      iVar7 = 4;
      cVar2 = DAT_0000012d;
    }
    uVar14 = 0;
    cVar16 = '\0';
    cVar19 = '\0';
    uVar5 = 0;
    uVar12 = 0;
    while( true ) {
      puVar4 = in_stack_0000001c;
      uVar18 = uVar14 + 2 & 0xff;
      pcVar9 = in_stack_0000001c + 1;
      if (cVar19 == cVar2) break;
      uVar11 = uVar5;
      uVar13 = uVar12;
      if ((*(byte *)((int)puVar15 + 3) & 2) == 0) {
        uVar8 = _L0(*(undefined *)(puVar15 + 1),*puVar15);
        uVar11 = uVar8 & 0xff;
        uVar13 = uVar11;
        cVar17 = cVar16;
        if ((cVar16 != '\0') && (uVar13 = uVar12, (uVar8 & 0xff) - uVar5 != iVar7)) {
          cVar17 = cVar16 + '\x01';
          *puVar4 = (char)uVar12;
          in_stack_0000001c = puVar4 + 2;
          *pcVar9 = cVar16;
          uVar14 = uVar18;
        }
        cVar16 = cVar17 + '\x01';
        puVar15 = puVar15 + 3;
      }
      cVar19 = cVar19 + '\x01';
      uVar5 = uVar11;
      uVar12 = uVar13;
    }
    *in_stack_0000001c = (char)uVar12;
    in_stack_0000001c = in_stack_0000001c + 2;
    *pcVar9 = cVar16;
    *puVar10 = (char)uVar18;
    uVar6 = uVar6 + 6 + uVar18 & 0xffff;
  }
  iVar7 = unaff_s1;
  while (unaff_s1 + unaff_s5 != iVar7) {
    puVar10 = (undefined *)(iVar7 + 0x40);
    iVar3 = iVar7 - unaff_s1;
    iVar7 = iVar7 + 1;
    in_stack_0000001c[iVar3] = *puVar10;
  }
  puVar10 = in_stack_0000001c + unaff_s5;
  uVar6 = uVar6 + unaff_s5 & 0xffff;
  in_stack_0000001c = puVar10;
  if ((*(uint *)(unaff_s3 + 0x88) & 1) != 0) {
    FUN_0001071a(&stack0x00000032,0,0xe);
    in_stack_00000030 = 0x7dd;
    in_stack_00000033 = 0x50;
    in_stack_00000034 = 0x2f2;
    in_stack_00000037 = 1;
    FUN_0001075c(puVar10,&stack0x00000030,9);
    in_stack_0000001c = in_stack_0000001c + bStack00000031 + 2;
    uVar6 = uVar6 + bStack00000031 + 2 & 0xffff;
  }
  if (((*(uint *)(unaff_s3 + 0x88) & 2) != 0) && (DAT_0000002e != '\0')) {
    iVar7 = FUN_0001078e(&stack0x0000001c);
    uVar6 = uVar6 + iVar7 & 0xffff;
  }
  *unaff_s7 = (short)in_stack_0000001c - (short)*unaff_s6;
  return uVar6;
}



uint FUN_00010606(undefined4 uRam00000020,undefined3 param_2,undefined2 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int unaff_s0;
  uint uVar6;
  int unaff_s1;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint unaff_s2;
  undefined2 *puVar15;
  int unaff_s3;
  char cVar16;
  char cVar17;
  int unaff_s5;
  undefined4 *unaff_s6;
  short *unaff_s7;
  uint uVar18;
  char cVar19;
  undefined *in_stack_0000001c;
  undefined in_stack_0000002f;
  char cStack00000030;
  ushort in_stack_00000030;
  byte bStack00000031;
  undefined in_stack_00000033;
  undefined2 in_stack_00000034;
  undefined in_stack_00000037;
  
  iVar7 = FUN_00010606();
  uVar6 = unaff_s0 + iVar7 & 0xffff;
  if ((unaff_s2 & 0x100) != 0) {
    puVar10 = in_stack_0000001c + 1;
    *in_stack_0000001c = 0x21;
    in_stack_0000001c = in_stack_0000001c + 2;
    *puVar10 = 2;
    _L0(&stack0x00000030,&stack0x0000002f);
    bVar1 = *(byte *)(*(int *)(unaff_s3 + 0x4c) + 4);
    if ((char)bVar1 < cStack00000030) {
      in_stack_00000030 = in_stack_00000030 & 0xff00 | (ushort)bVar1;
    }
    *in_stack_0000001c = in_stack_0000002f;
    in_stack_0000001c[1] = cStack00000030;
    puVar10 = in_stack_0000001c + 3;
    in_stack_0000001c[2] = 0x24;
    in_stack_0000001c = in_stack_0000001c + 4;
    if (*(char *)(*(int *)(unaff_s3 + 0x4c) + 2) == '\0') {
      puVar15 = (undefined2 *)&DAT_00000030;
      iVar7 = 1;
      cVar2 = DAT_0000012c;
    }
    else {
      puVar15 = (undefined2 *)0x84;
      iVar7 = 4;
      cVar2 = DAT_0000012d;
    }
    uVar14 = 0;
    cVar16 = '\0';
    cVar19 = '\0';
    uVar5 = 0;
    uVar12 = 0;
    while( true ) {
      puVar4 = in_stack_0000001c;
      uVar18 = uVar14 + 2 & 0xff;
      pcVar9 = in_stack_0000001c + 1;
      if (cVar19 == cVar2) break;
      uVar11 = uVar5;
      uVar13 = uVar12;
      if ((*(byte *)((int)puVar15 + 3) & 2) == 0) {
        uVar8 = _L0(*(undefined *)(puVar15 + 1),*puVar15);
        uVar11 = uVar8 & 0xff;
        uVar13 = uVar11;
        cVar17 = cVar16;
        if ((cVar16 != '\0') && (uVar13 = uVar12, (uVar8 & 0xff) - uVar5 != iVar7)) {
          cVar17 = cVar16 + '\x01';
          *puVar4 = (char)uVar12;
          in_stack_0000001c = puVar4 + 2;
          *pcVar9 = cVar16;
          uVar14 = uVar18;
        }
        cVar16 = cVar17 + '\x01';
        puVar15 = puVar15 + 3;
      }
      cVar19 = cVar19 + '\x01';
      uVar5 = uVar11;
      uVar12 = uVar13;
    }
    *in_stack_0000001c = (char)uVar12;
    in_stack_0000001c = in_stack_0000001c + 2;
    *pcVar9 = cVar16;
    *puVar10 = (char)uVar18;
    uVar6 = uVar6 + 6 + uVar18 & 0xffff;
  }
  iVar7 = unaff_s1;
  while (unaff_s1 + unaff_s5 != iVar7) {
    puVar10 = (undefined *)(iVar7 + 0x40);
    iVar3 = iVar7 - unaff_s1;
    iVar7 = iVar7 + 1;
    in_stack_0000001c[iVar3] = *puVar10;
  }
  puVar10 = in_stack_0000001c + unaff_s5;
  uVar6 = uVar6 + unaff_s5 & 0xffff;
  in_stack_0000001c = puVar10;
  if ((*(uint *)(unaff_s3 + 0x88) & 1) != 0) {
    FUN_0001071a(&stack0x00000032,0,0xe);
    in_stack_00000030 = 0x7dd;
    in_stack_00000033 = 0x50;
    in_stack_00000034 = 0x2f2;
    in_stack_00000037 = 1;
    FUN_0001075c(puVar10,&stack0x00000030,9);
    in_stack_0000001c = in_stack_0000001c + bStack00000031 + 2;
    uVar6 = uVar6 + bStack00000031 + 2 & 0xffff;
  }
  if (((*(uint *)(unaff_s3 + 0x88) & 2) != 0) && (DAT_0000002e != '\0')) {
    iVar7 = FUN_0001078e(&stack0x0000001c);
    uVar6 = uVar6 + iVar7 & 0xffff;
  }
  *unaff_s7 = (short)in_stack_0000001c - (short)*unaff_s6;
  return uVar6;
}



uint _L0(undefined4 uRam00000020,undefined3 param_2,undefined2 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_s0;
  uint uVar5;
  int unaff_s1;
  uint uVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  int unaff_s3;
  char cVar14;
  char cVar15;
  int unaff_s5;
  undefined4 *unaff_s6;
  short *unaff_s7;
  uint uVar16;
  char cVar17;
  int iVar18;
  undefined *in_stack_0000001c;
  undefined in_stack_0000002f;
  char cStack00000030;
  ushort in_stack_00000030;
  byte bStack00000031;
  undefined in_stack_00000033;
  undefined2 in_stack_00000034;
  undefined in_stack_00000037;
  
  _L0();
  bVar1 = *(byte *)(*(int *)(unaff_s3 + 0x4c) + 4);
  if ((char)bVar1 < cStack00000030) {
    in_stack_00000030 = in_stack_00000030 & 0xff00 | (ushort)bVar1;
  }
  *in_stack_0000001c = in_stack_0000002f;
  in_stack_0000001c[1] = cStack00000030;
  puVar8 = in_stack_0000001c + 3;
  in_stack_0000001c[2] = 0x24;
  in_stack_0000001c = in_stack_0000001c + 4;
  if (*(char *)(*(int *)(unaff_s3 + 0x4c) + 2) == '\0') {
    puVar13 = (undefined2 *)&DAT_00000030;
    iVar18 = 1;
    cVar2 = DAT_0000012c;
  }
  else {
    puVar13 = (undefined2 *)0x84;
    iVar18 = 4;
    cVar2 = DAT_0000012d;
  }
  uVar12 = 0;
  cVar14 = '\0';
  cVar17 = '\0';
  uVar5 = 0;
  uVar10 = 0;
  while( true ) {
    puVar4 = in_stack_0000001c;
    uVar16 = uVar12 + 2 & 0xff;
    pcVar7 = in_stack_0000001c + 1;
    if (cVar17 == cVar2) break;
    uVar9 = uVar5;
    uVar11 = uVar10;
    if ((*(byte *)((int)puVar13 + 3) & 2) == 0) {
      uVar6 = _L0(*(undefined *)(puVar13 + 1),*puVar13);
      uVar9 = uVar6 & 0xff;
      uVar11 = uVar9;
      cVar15 = cVar14;
      if ((cVar14 != '\0') && (uVar11 = uVar10, (uVar6 & 0xff) - uVar5 != iVar18)) {
        cVar15 = cVar14 + '\x01';
        *puVar4 = (char)uVar10;
        in_stack_0000001c = puVar4 + 2;
        *pcVar7 = cVar14;
        uVar12 = uVar16;
      }
      cVar14 = cVar15 + '\x01';
      puVar13 = puVar13 + 3;
    }
    cVar17 = cVar17 + '\x01';
    uVar5 = uVar9;
    uVar10 = uVar11;
  }
  *in_stack_0000001c = (char)uVar10;
  *pcVar7 = cVar14;
  *puVar8 = (char)uVar16;
  iVar18 = unaff_s1;
  while (unaff_s1 + unaff_s5 != iVar18) {
    puVar8 = (undefined *)(iVar18 + 0x40);
    iVar3 = iVar18 - unaff_s1;
    iVar18 = iVar18 + 1;
    (in_stack_0000001c + 2)[iVar3] = *puVar8;
  }
  puVar8 = in_stack_0000001c + 2 + unaff_s5;
  uVar5 = (unaff_s0 + 6 + uVar16 & 0xffff) + unaff_s5 & 0xffff;
  in_stack_0000001c = puVar8;
  if ((*(uint *)(unaff_s3 + 0x88) & 1) != 0) {
    FUN_0001071a(&stack0x00000032,0,0xe);
    in_stack_00000030 = 0x7dd;
    in_stack_00000033 = 0x50;
    in_stack_00000034 = 0x2f2;
    in_stack_00000037 = 1;
    FUN_0001075c(puVar8,&stack0x00000030,9);
    in_stack_0000001c = in_stack_0000001c + bStack00000031 + 2;
    uVar5 = uVar5 + bStack00000031 + 2 & 0xffff;
  }
  if (((*(uint *)(unaff_s3 + 0x88) & 2) != 0) && (DAT_0000002e != '\0')) {
    iVar18 = FUN_0001078e(&stack0x0000001c);
    uVar5 = uVar5 + iVar18 & 0xffff;
  }
  *unaff_s7 = (short)in_stack_0000001c - (short)*unaff_s6;
  return uVar5;
}



uint FUN_0001071a(undefined4 uRam00000020,undefined3 param_2)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  int unaff_s3;
  undefined4 *unaff_s6;
  short *unaff_s7;
  int in_stack_0000001c;
  undefined2 uStack00000030;
  byte bStack00000031;
  undefined uStack00000033;
  undefined2 uStack00000034;
  undefined uStack00000037;
  
  FUN_0001071a();
  uStack00000030 = 0x7dd;
  uStack00000033 = 0x50;
  uStack00000034 = 0x2f2;
  uStack00000037 = 1;
  FUN_0001075c(&stack0x00000030,9);
  in_stack_0000001c = in_stack_0000001c + 2 + (uint)bStack00000031;
  uVar1 = unaff_s0 + bStack00000031 + 2 & 0xffff;
  if (((*(uint *)(unaff_s3 + 0x88) & 2) != 0) && (DAT_0000002e != '\0')) {
    iVar2 = FUN_0001078e(&stack0x0000001c);
    uVar1 = uVar1 + iVar2 & 0xffff;
  }
  *unaff_s7 = (short)in_stack_0000001c - (short)*unaff_s6;
  return uVar1;
}



uint FUN_0001075c(undefined3 param_1)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  int unaff_s3;
  undefined4 *unaff_s6;
  short *unaff_s7;
  int in_stack_0000001c;
  byte in_stack_00000031;
  
  FUN_0001075c();
  in_stack_0000001c = in_stack_0000001c + 2 + (uint)in_stack_00000031;
  uVar1 = unaff_s0 + in_stack_00000031 + 2 & 0xffff;
  if (((*(uint *)(unaff_s3 + 0x88) & 2) != 0) && (DAT_0000002e != '\0')) {
    iVar2 = FUN_0001078e(&stack0x0000001c);
    uVar1 = uVar1 + iVar2 & 0xffff;
  }
  *unaff_s7 = (short)in_stack_0000001c - (short)*unaff_s6;
  return uVar1;
}



short FUN_0001078e(void)

{
  short unaff_s0;
  short sVar1;
  undefined4 *unaff_s6;
  short *unaff_s7;
  short in_stack_0000001c;
  
  sVar1 = FUN_0001078e();
  *unaff_s7 = in_stack_0000001c - (short)*unaff_s6;
  return unaff_s0 + sVar1;
}



uint _L0(uint param_1,uint param_2,undefined4 uRam00000020,undefined3 param_4)

{
  int iVar1;
  uint uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  ushort *unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  undefined *puVar5;
  int unaff_s5;
  undefined4 *unaff_s6;
  short *unaff_s7;
  uint unaff_s9;
  uint unaff_s10;
  undefined *unaff_s11;
  undefined *in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  undefined *in_stack_00000018;
  undefined *in_stack_0000001c;
  byte bStack00000031;
  undefined2 in_stack_00000030;
  undefined in_stack_00000033;
  undefined2 in_stack_00000034;
  undefined in_stack_00000037;
  
  do {
    uVar4 = _L0(param_1,param_2);
    uVar2 = uVar4 & 0xff;
    if ((unaff_s4 != 0) &&
       (uVar2 = in_stack_00000004, (uVar4 & 0xff) - in_stack_00000008 != in_stack_0000000c)) {
      *unaff_s11 = (char)in_stack_00000004;
      in_stack_0000001c = in_stack_00000018 + 1;
      *in_stack_00000018 = (char)unaff_s4;
      unaff_s4 = unaff_s4 + 1 & 0xff;
      in_stack_00000010 = unaff_s9;
    }
    unaff_s4 = unaff_s4 + 1 & 0xff;
    do {
      unaff_s10 = unaff_s10 + 1 & 0xff;
      unaff_s9 = in_stack_00000010 + 2 & 0xff;
      in_stack_00000018 = in_stack_0000001c + 1;
      if (unaff_s10 == in_stack_00000014) {
        *in_stack_0000001c = (char)uVar2;
        *in_stack_00000018 = (char)unaff_s4;
        *in_stack_00000000 = (char)unaff_s9;
        iVar3 = unaff_s1;
        while (unaff_s1 + unaff_s5 != iVar3) {
          puVar5 = (undefined *)(iVar3 + 0x40);
          iVar1 = iVar3 - unaff_s1;
          iVar3 = iVar3 + 1;
          (in_stack_0000001c + 2)[iVar1] = *puVar5;
        }
        puVar5 = in_stack_0000001c + 2 + unaff_s5;
        uVar2 = (unaff_s0 + 6 + unaff_s9 & 0xffff) + unaff_s5 & 0xffff;
        in_stack_0000001c = puVar5;
        if ((*(uint *)(unaff_s3 + 0x88) & 1) != 0) {
          FUN_0001071a(&stack0x00000032,0,0xe);
          in_stack_00000030 = 0x7dd;
          in_stack_00000033 = 0x50;
          in_stack_00000034 = 0x2f2;
          in_stack_00000037 = 1;
          FUN_0001075c(puVar5,&stack0x00000030,9);
          in_stack_0000001c = in_stack_0000001c + bStack00000031 + 2;
          uVar2 = uVar2 + bStack00000031 + 2 & 0xffff;
        }
        if (((*(uint *)(unaff_s3 + 0x88) & 2) != 0) && (DAT_0000002e != '\0')) {
          iVar3 = FUN_0001078e(&stack0x0000001c);
          uVar2 = uVar2 + iVar3 & 0xffff;
        }
        *unaff_s7 = (short)in_stack_0000001c - (short)*unaff_s6;
        return uVar2;
      }
    } while ((*(byte *)((int)unaff_s2 + 9) & 2) != 0);
    param_2 = (uint)unaff_s2[3];
    param_1 = (uint)*(byte *)(unaff_s2 + 4);
    unaff_s2 = unaff_s2 + 3;
    unaff_s11 = in_stack_0000001c;
    in_stack_00000004 = uVar2;
    in_stack_00000008 = uVar4 & 0xff;
  } while( true );
}



uint16_t me_build_add_ba_req(uint32_t frame,bam_env_tag *bam_env)

{
  uint16_t uVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined *)frame = 3;
  *(undefined *)(frame + 1) = 0;
  *(uint8_t *)(frame + 2) = bam_env->dialog_token;
  uVar2 = (uint)bam_env->ba_policy << 1 | (uint)bam_env->tid << 2 | (uint)bam_env->buffer_size << 6;
  *(char *)(frame + 3) = (char)uVar2;
  *(char *)(frame + 4) = (char)(uVar2 >> 8);
  uVar1 = bam_env->ba_timeout;
  *(char *)(frame + 5) = (char)uVar1;
  *(char *)(frame + 6) = (char)(uVar1 >> 8);
  iVar3 = (uint)bam_env->ssn << 0x14;
  *(char *)(frame + 7) = (char)((uint)iVar3 >> 0x10);
  *(char *)(frame + 8) = (char)((uint)iVar3 >> 0x18);
  return 9;
}



uint16_t me_build_add_ba_rsp(uint32_t frame,bam_env_tag *bam_env,uint16_t param,uint8_t dialog_token
                            ,uint16_t status_code)

{
  undefined2 in_register_0000203a;
  
  *(undefined *)frame = 3;
  *(undefined *)(frame + 1) = 1;
  *(char *)(frame + 5) = (char)param;
  *(char *)(frame + 4) = (char)(status_code >> 8);
  *(uint8_t *)(frame + 2) = dialog_token;
  *(char *)(frame + 3) = (char)status_code;
  *(char *)(frame + 6) = (char)(param >> 8);
  if (CONCAT22(in_register_0000203a,status_code) == 0) {
    *(undefined *)(frame + 7) = 0xd0;
    *(undefined *)(frame + 8) = 7;
  }
  else {
    *(undefined *)(frame + 7) = 0;
    *(undefined *)(frame + 8) = 0;
  }
  return 9;
}



uint16_t me_build_del_ba(uint32_t frame,bam_env_tag *bam_env,uint16_t reason_code)

{
  byte bVar1;
  
  *(undefined *)frame = 3;
  *(undefined *)(frame + 1) = 2;
  bVar1 = (byte)(((uint)bam_env->tid << 0x1c) >> 0x18);
  if (bam_env->dev_type == '\x01') {
    bVar1 = bVar1 | 8;
  }
  *(undefined *)(frame + 2) = 0;
  *(byte *)(frame + 3) = bVar1;
  *(char *)(frame + 4) = (char)reason_code;
  *(char *)(frame + 5) = (char)(reason_code >> 8);
  return 6;
}



void me_extract_rate_set(uint32_t buffer,uint16_t buflen,mac_rateset *mac_rate_set_ptr)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined2 in_register_0000202e;
  uint uVar4;
  uint8_t *puVar5;
  uint uVar6;
  
  mac_rate_set_ptr->length = '\0';
  iVar3 = _L0(CONCAT22(in_register_0000202e,buflen),1);
  if (iVar3 != 0) {
    bVar1 = *(byte *)(iVar3 + 1);
    uVar4 = (uint)bVar1;
    if (uVar4 < 0xd) {
      puVar5 = mac_rate_set_ptr->array;
      while (uVar4 = uVar4 - 1, uVar4 != 0xffffffff) {
        *puVar5 = (puVar5 + 1)[iVar3 - (int)mac_rate_set_ptr];
        puVar5 = puVar5 + 1;
      }
      mac_rate_set_ptr->length = bVar1;
      iVar3 = _LVL321(buffer,CONCAT22(in_register_0000202e,buflen),0x32);
      if (iVar3 != 0) {
        bVar1 = *(byte *)(iVar3 + 1);
        uVar4 = (uint)bVar1;
        if (0xc < mac_rate_set_ptr->length + uVar4) {
          FUN_000109bc(0,0,0x396);
        }
        bVar2 = mac_rate_set_ptr->length;
        if (bVar2 + uVar4 < 0xd) {
          uVar6 = 0;
          while (uVar4 != uVar6) {
            mac_rate_set_ptr->array[bVar2 + uVar6] = *(uint8_t *)(iVar3 + 2 + uVar6);
            uVar6 = uVar6 + 1;
          }
          mac_rate_set_ptr->length = bVar1 + mac_rate_set_ptr->length;
        }
      }
    }
  }
  return;
}



void _L0(void)

{
  byte bVar1;
  byte bVar2;
  byte *unaff_s0;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  iVar3 = _L0();
  if (iVar3 != 0) {
    bVar1 = *(byte *)(iVar3 + 1);
    uVar4 = (uint)bVar1;
    if (uVar4 < 0xd) {
      pbVar5 = unaff_s0 + 1;
      while (uVar4 = uVar4 - 1, uVar4 != 0xffffffff) {
        *pbVar5 = (pbVar5 + 1)[iVar3 - (int)unaff_s0];
        pbVar5 = pbVar5 + 1;
      }
      *unaff_s0 = bVar1;
      iVar3 = _LVL321(0x32);
      if (iVar3 != 0) {
        bVar1 = *(byte *)(iVar3 + 1);
        uVar4 = (uint)bVar1;
        if (0xc < *unaff_s0 + uVar4) {
          FUN_000109bc(0,0,0x396);
        }
        bVar2 = *unaff_s0;
        if (bVar2 + uVar4 < 0xd) {
          uVar6 = 0;
          while (uVar4 != uVar6) {
            unaff_s0[bVar2 + 1 + uVar6] = *(byte *)(iVar3 + 2 + uVar6);
            uVar6 = uVar6 + 1;
          }
          *unaff_s0 = bVar1 + *unaff_s0;
        }
      }
    }
  }
  return;
}



void _LVL321(void)

{
  byte bVar1;
  byte bVar2;
  byte *unaff_s0;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = _LVL321();
  if (iVar4 != 0) {
    bVar1 = *(byte *)(iVar4 + 1);
    uVar3 = (uint)bVar1;
    if (0xc < *unaff_s0 + uVar3) {
      FUN_000109bc(0,0,0x396);
    }
    bVar2 = *unaff_s0;
    if (bVar2 + uVar3 < 0xd) {
      uVar5 = 0;
      while (uVar3 != uVar5) {
        unaff_s0[bVar2 + 1 + uVar5] = *(byte *)(iVar4 + 2 + uVar5);
        uVar5 = uVar5 + 1;
      }
      *unaff_s0 = bVar1 + *unaff_s0;
    }
  }
  return;
}



void FUN_000109bc(void)

{
  byte bVar1;
  byte *unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  
  FUN_000109bc();
  bVar1 = *unaff_s0;
  if ((int)((uint)bVar1 + unaff_s1) < 0xd) {
    iVar2 = 0;
    while (unaff_s1 != iVar2) {
      unaff_s0[bVar1 + 1 + iVar2] = *(byte *)(unaff_s2 + 2 + iVar2);
      iVar2 = iVar2 + 1;
    }
    *unaff_s0 = (char)unaff_s1 + *unaff_s0;
  }
  return;
}



void me_extract_power_constraint(uint32_t buffer,uint16_t buflen,mac_bss_info *bss)

{
  int iVar1;
  uint8_t uVar2;
  
  iVar1 = _L0(0x20);
  uVar2 = '\0';
  if (iVar1 != 0) {
    uVar2 = *(uint8_t *)(iVar1 + 2);
  }
  bss->power_constraint = uVar2;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  undefined uVar2;
  
  iVar1 = _L0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined *)(iVar1 + 2);
  }
  *(undefined *)(unaff_s0 + 0x84) = uVar2;
  return;
}



void me_extract_country_reg(uint32_t buffer,uint16_t buflen,mac_bss_info *bss)

{
  scan_chan_tag *psVar1;
  char cVar2;
  int iVar3;
  undefined2 in_register_0000202e;
  char *pcVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  
  iVar3 = _L0(CONCAT22(in_register_0000202e,buflen),7);
  if (iVar3 != 0) {
    psVar1 = bss->chan;
    cVar8 = '\x01';
    if (psVar1->band != '\0') {
      cVar8 = '\x04';
    }
    cVar2 = FUN_00010a6e(psVar1->freq);
    uVar7 = 5;
    while (uVar7 <= *(byte *)(iVar3 + 1) + 1) {
      pcVar4 = (char *)(uVar7 + iVar3);
      cVar5 = *pcVar4;
      cVar6 = '\0';
      while (cVar6 != pcVar4[1]) {
        if (cVar5 == cVar2) {
          psVar1->tx_power = pcVar4[2];
          return;
        }
        cVar5 = cVar5 + cVar8;
        cVar6 = cVar6 + '\x01';
      }
      uVar7 = uVar7 + 3 & 0xff;
    }
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  
  iVar3 = _L0();
  if (iVar3 != 0) {
    puVar1 = *(undefined2 **)(unaff_s0 + 0x4c);
    cVar8 = '\x01';
    if (*(char *)(puVar1 + 1) != '\0') {
      cVar8 = '\x04';
    }
    cVar2 = FUN_00010a6e(*puVar1);
    uVar7 = 5;
    while (uVar7 <= *(byte *)(iVar3 + 1) + 1) {
      pcVar4 = (char *)(uVar7 + iVar3);
      cVar5 = *pcVar4;
      cVar6 = '\0';
      while (cVar6 != pcVar4[1]) {
        if (cVar5 == cVar2) {
          *(char *)(puVar1 + 2) = pcVar4[2];
          return;
        }
        cVar5 = cVar5 + cVar8;
        cVar6 = cVar6 + '\x01';
      }
      uVar7 = uVar7 + 3 & 0xff;
    }
  }
  return;
}



void FUN_00010a6e(void)

{
  int unaff_s0;
  int unaff_s1;
  char cVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  char unaff_s2;
  
  cVar1 = FUN_00010a6e();
  uVar5 = 5;
  do {
    if (*(byte *)(unaff_s1 + 1) + 1 < uVar5) {
      return;
    }
    pcVar2 = (char *)(uVar5 + unaff_s1);
    cVar3 = *pcVar2;
    cVar4 = '\0';
    while (cVar4 != pcVar2[1]) {
      if (cVar3 == cVar1) {
        *(char *)(unaff_s0 + 4) = pcVar2[2];
        return;
      }
      cVar3 = cVar3 + unaff_s2;
      cVar4 = cVar4 + '\x01';
    }
    uVar5 = uVar5 + 3 & 0xff;
  } while( true );
}



void me_extract_mobility_domain(uint32_t buffer,uint16_t buflen,mac_bss_info *bss)

{
  int iVar1;
  
  iVar1 = _L0(0x36);
  if (iVar1 == 0) {
    (bss->mde).mdid = 0;
    (bss->mde).ft_capability_policy = '\0';
  }
  else {
    (bss->mde).mdid = *(uint16_t *)(iVar1 + 2);
    (bss->mde).ft_capability_policy = *(uint8_t *)(iVar1 + 4);
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_s0 + 0x8c) = 0;
    *(undefined *)(unaff_s0 + 0x8e) = 0;
  }
  else {
    *(undefined2 *)(unaff_s0 + 0x8c) = *(undefined2 *)(iVar1 + 2);
    *(undefined *)(unaff_s0 + 0x8e) = *(undefined *)(iVar1 + 4);
  }
  return;
}



int me_extract_csa(uint32_t buffer,uint16_t buflen,uint8_t *mode,mm_chan_ctxt_add_req *chan_desc)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  uint16_t uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined2 in_register_0000202e;
  undefined4 uVar13;
  uint8_t *puVar14;
  uint8_t uVar15;
  
  uVar13 = CONCAT22(in_register_0000202e,buflen);
  uVar9 = _L0(uVar13,0x25);
  uVar10 = _LVL381(buffer,uVar13,0x3c);
  if ((uVar9 | uVar10) == 0) {
    return 0;
  }
  iVar11 = _LVL383(buffer,uVar13,0x3e);
  iVar12 = FUN_00010b62(buffer,uVar13,0xc4);
  if (iVar12 != 0) {
    iVar12 = FUN_00010b78(iVar12 + 2,*(undefined *)(iVar12 + 1),0xc2);
  }
  if (uVar9 == 0) {
    bVar1 = *(byte *)(uVar10 + 5);
    *mode = *(uint8_t *)(uVar10 + 2);
    bVar2 = *(byte *)(uVar10 + 4);
  }
  else {
    bVar1 = *(byte *)(uVar9 + 4);
    *mode = *(uint8_t *)(uVar9 + 2);
    bVar2 = *(byte *)(uVar9 + 3);
  }
  uVar9 = (uint)bVar1;
  if (uVar9 == 0) {
    uVar9 = 2;
  }
  bVar4 = 0xe < bVar2;
  uVar6 = FUN_00010ba4(bVar4);
  if (iVar12 != 0) {
    puVar14 = (uint8_t *)(*(byte *)(iVar12 + 2) - 1 & 0xff);
    cVar3 = *(char *)(iVar12 + 4);
    uVar15 = '\x01';
    if (puVar14 < (uint8_t *)0x3) {
      uVar15 = *puVar14;
    }
    uVar7 = _LVL406(bVar4,*(undefined *)(iVar12 + 3));
    uVar8 = 0;
    if (cVar3 != '\0') {
      uVar8 = FUN_00010bee(bVar4,cVar3);
    }
    goto _L0;
  }
  if (iVar11 == 0) {
_L0:
    uVar8 = 0;
    uVar15 = '\0';
    uVar7 = uVar6;
  }
  else {
    sVar5 = 10;
    if (*(char *)(iVar11 + 2) != '\x01') {
      if (*(char *)(iVar11 + 2) != '\x03') goto _L0;
      sVar5 = -10;
    }
    uVar8 = 0;
    uVar15 = '\x01';
    uVar7 = uVar6 + sVar5;
  }
_L0:
  chan_desc->center2_freq = uVar8;
  chan_desc->band = bVar4;
  chan_desc->type = uVar15;
  chan_desc->prim20_freq = uVar6;
  chan_desc->center1_freq = uVar7;
  return uVar9;
}



char _L0(void)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined uVar13;
  int unaff_s4;
  undefined *unaff_s5;
  
  uVar8 = _L0();
  uVar9 = _LVL381(0x3c);
  if ((uVar8 | uVar9) == 0) {
    return '\0';
  }
  iVar10 = _LVL383(0x3e);
  iVar11 = FUN_00010b62(0xc4);
  if (iVar11 != 0) {
    iVar11 = FUN_00010b78(iVar11 + 2,*(undefined *)(iVar11 + 1),0xc2);
  }
  if (uVar8 == 0) {
    cVar4 = *(char *)(uVar9 + 5);
    *unaff_s5 = *(undefined *)(uVar9 + 2);
    bVar1 = *(byte *)(uVar9 + 4);
  }
  else {
    cVar4 = *(char *)(uVar8 + 4);
    *unaff_s5 = *(undefined *)(uVar8 + 2);
    bVar1 = *(byte *)(uVar8 + 3);
  }
  if (cVar4 == '\0') {
    cVar4 = '\x02';
  }
  bVar3 = 0xe < bVar1;
  sVar5 = FUN_00010ba4(bVar3);
  if (iVar11 != 0) {
    puVar12 = (undefined *)(*(byte *)(iVar11 + 2) - 1 & 0xff);
    cVar2 = *(char *)(iVar11 + 4);
    uVar13 = 1;
    if (puVar12 < (undefined *)0x3) {
      uVar13 = *puVar12;
    }
    sVar6 = _LVL406(bVar3,*(undefined *)(iVar11 + 3));
    uVar7 = 0;
    if (cVar2 != '\0') {
      uVar7 = FUN_00010bee(bVar3,cVar2);
    }
    goto _L0;
  }
  if (iVar10 == 0) {
_L0:
    uVar7 = 0;
    uVar13 = 0;
    sVar6 = sVar5;
  }
  else {
    sVar6 = 10;
    if (*(char *)(iVar10 + 2) != '\x01') {
      if (*(char *)(iVar10 + 2) != '\x03') goto _L0;
      sVar6 = -10;
    }
    uVar7 = 0;
    uVar13 = 1;
    sVar6 = sVar5 + sVar6;
  }
_L0:
  *(undefined2 *)(unaff_s4 + 6) = uVar7;
  *(bool *)unaff_s4 = bVar3;
  *(undefined *)(unaff_s4 + 1) = uVar13;
  *(short *)(unaff_s4 + 2) = sVar5;
  *(short *)(unaff_s4 + 4) = sVar6;
  return cVar4;
}



char _LVL381(void)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  undefined uVar12;
  uint unaff_s2;
  int unaff_s4;
  undefined *unaff_s5;
  
  uVar8 = _LVL381();
  if ((unaff_s2 | uVar8) == 0) {
    return '\0';
  }
  iVar9 = _LVL383(0x3e);
  iVar10 = FUN_00010b62(0xc4);
  if (iVar10 != 0) {
    iVar10 = FUN_00010b78(iVar10 + 2,*(undefined *)(iVar10 + 1),0xc2);
  }
  if (unaff_s2 == 0) {
    cVar4 = *(char *)(uVar8 + 5);
    *unaff_s5 = *(undefined *)(uVar8 + 2);
    bVar1 = *(byte *)(uVar8 + 4);
  }
  else {
    cVar4 = *(char *)(unaff_s2 + 4);
    *unaff_s5 = *(undefined *)(unaff_s2 + 2);
    bVar1 = *(byte *)(unaff_s2 + 3);
  }
  if (cVar4 == '\0') {
    cVar4 = '\x02';
  }
  bVar3 = 0xe < bVar1;
  sVar5 = FUN_00010ba4(bVar3);
  if (iVar10 != 0) {
    puVar11 = (undefined *)(*(byte *)(iVar10 + 2) - 1 & 0xff);
    cVar2 = *(char *)(iVar10 + 4);
    uVar12 = 1;
    if (puVar11 < (undefined *)0x3) {
      uVar12 = *puVar11;
    }
    sVar6 = _LVL406(bVar3,*(undefined *)(iVar10 + 3));
    uVar7 = 0;
    if (cVar2 != '\0') {
      uVar7 = FUN_00010bee(bVar3,cVar2);
    }
    goto _L0;
  }
  if (iVar9 == 0) {
_L0:
    uVar7 = 0;
    uVar12 = 0;
    sVar6 = sVar5;
  }
  else {
    sVar6 = 10;
    if (*(char *)(iVar9 + 2) != '\x01') {
      if (*(char *)(iVar9 + 2) != '\x03') goto _L0;
      sVar6 = -10;
    }
    uVar7 = 0;
    uVar12 = 1;
    sVar6 = sVar5 + sVar6;
  }
_L0:
  *(undefined2 *)(unaff_s4 + 6) = uVar7;
  *(bool *)unaff_s4 = bVar3;
  *(undefined *)(unaff_s4 + 1) = uVar12;
  *(short *)(unaff_s4 + 2) = sVar5;
  *(short *)(unaff_s4 + 4) = sVar6;
  return cVar4;
}



char _LVL383(void)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined uVar11;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined *unaff_s5;
  
  iVar8 = _LVL383();
  iVar9 = FUN_00010b62(0xc4);
  if (iVar9 != 0) {
    iVar9 = FUN_00010b78(iVar9 + 2,*(undefined *)(iVar9 + 1),0xc2);
  }
  if (unaff_s2 == 0) {
    cVar4 = *(char *)(unaff_s3 + 5);
    *unaff_s5 = *(undefined *)(unaff_s3 + 2);
    bVar1 = *(byte *)(unaff_s3 + 4);
  }
  else {
    cVar4 = *(char *)(unaff_s2 + 4);
    *unaff_s5 = *(undefined *)(unaff_s2 + 2);
    bVar1 = *(byte *)(unaff_s2 + 3);
  }
  if (cVar4 == '\0') {
    cVar4 = '\x02';
  }
  bVar3 = 0xe < bVar1;
  sVar5 = FUN_00010ba4(bVar3);
  if (iVar9 != 0) {
    puVar10 = (undefined *)(*(byte *)(iVar9 + 2) - 1 & 0xff);
    cVar2 = *(char *)(iVar9 + 4);
    uVar11 = 1;
    if (puVar10 < (undefined *)0x3) {
      uVar11 = *puVar10;
    }
    sVar6 = _LVL406(bVar3,*(undefined *)(iVar9 + 3));
    uVar7 = 0;
    if (cVar2 != '\0') {
      uVar7 = FUN_00010bee(bVar3,cVar2);
    }
    goto _L0;
  }
  if (iVar8 == 0) {
_L0:
    uVar7 = 0;
    uVar11 = 0;
    sVar6 = sVar5;
  }
  else {
    sVar6 = 10;
    if (*(char *)(iVar8 + 2) != '\x01') {
      if (*(char *)(iVar8 + 2) != '\x03') goto _L0;
      sVar6 = -10;
    }
    uVar7 = 0;
    uVar11 = 1;
    sVar6 = sVar5 + sVar6;
  }
_L0:
  *(undefined2 *)(unaff_s4 + 6) = uVar7;
  *(bool *)unaff_s4 = bVar3;
  *(undefined *)(unaff_s4 + 1) = uVar11;
  *(short *)(unaff_s4 + 2) = sVar5;
  *(short *)(unaff_s4 + 4) = sVar6;
  return cVar4;
}



char FUN_00010b62(void)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined *unaff_s5;
  int unaff_s6;
  
  iVar8 = FUN_00010b62();
  if (iVar8 != 0) {
    iVar8 = FUN_00010b78(iVar8 + 2,*(undefined *)(iVar8 + 1),0xc2);
  }
  if (unaff_s2 == 0) {
    cVar4 = *(char *)(unaff_s3 + 5);
    *unaff_s5 = *(undefined *)(unaff_s3 + 2);
    bVar1 = *(byte *)(unaff_s3 + 4);
  }
  else {
    cVar4 = *(char *)(unaff_s2 + 4);
    *unaff_s5 = *(undefined *)(unaff_s2 + 2);
    bVar1 = *(byte *)(unaff_s2 + 3);
  }
  if (cVar4 == '\0') {
    cVar4 = '\x02';
  }
  bVar3 = 0xe < bVar1;
  sVar5 = FUN_00010ba4(bVar3);
  if (iVar8 != 0) {
    puVar9 = (undefined *)(*(byte *)(iVar8 + 2) - 1 & 0xff);
    cVar2 = *(char *)(iVar8 + 4);
    uVar10 = 1;
    if (puVar9 < (undefined *)0x3) {
      uVar10 = *puVar9;
    }
    sVar6 = _LVL406(bVar3,*(undefined *)(iVar8 + 3));
    uVar7 = 0;
    if (cVar2 != '\0') {
      uVar7 = FUN_00010bee(bVar3,cVar2);
    }
    goto _L0;
  }
  if (unaff_s6 == 0) {
_L0:
    uVar7 = 0;
    uVar10 = 0;
    sVar6 = sVar5;
  }
  else {
    sVar6 = 10;
    if (*(char *)(unaff_s6 + 2) != '\x01') {
      if (*(char *)(unaff_s6 + 2) != '\x03') goto _L0;
      sVar6 = -10;
    }
    uVar7 = 0;
    uVar10 = 1;
    sVar6 = sVar5 + sVar6;
  }
_L0:
  *(undefined2 *)(unaff_s4 + 6) = uVar7;
  *(bool *)unaff_s4 = bVar3;
  *(undefined *)(unaff_s4 + 1) = uVar10;
  *(short *)(unaff_s4 + 2) = sVar5;
  *(short *)(unaff_s4 + 4) = sVar6;
  return cVar4;
}



char FUN_00010b78(void)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined *unaff_s5;
  int unaff_s6;
  
  iVar8 = FUN_00010b78();
  if (unaff_s2 == 0) {
    cVar4 = *(char *)(unaff_s3 + 5);
    *unaff_s5 = *(undefined *)(unaff_s3 + 2);
    bVar1 = *(byte *)(unaff_s3 + 4);
  }
  else {
    cVar4 = *(char *)(unaff_s2 + 4);
    *unaff_s5 = *(undefined *)(unaff_s2 + 2);
    bVar1 = *(byte *)(unaff_s2 + 3);
  }
  if (cVar4 == '\0') {
    cVar4 = '\x02';
  }
  bVar3 = 0xe < bVar1;
  sVar5 = FUN_00010ba4(bVar3);
  if (iVar8 != 0) {
    puVar9 = (undefined *)(*(byte *)(iVar8 + 2) - 1 & 0xff);
    cVar2 = *(char *)(iVar8 + 4);
    uVar10 = 1;
    if (puVar9 < (undefined *)0x3) {
      uVar10 = *puVar9;
    }
    sVar6 = _LVL406(bVar3,*(undefined *)(iVar8 + 3));
    uVar7 = 0;
    if (cVar2 != '\0') {
      uVar7 = FUN_00010bee(bVar3,cVar2);
    }
    goto _L0;
  }
  if (unaff_s6 == 0) {
_L0:
    uVar7 = 0;
    uVar10 = 0;
    sVar6 = sVar5;
  }
  else {
    sVar6 = 10;
    if (*(char *)(unaff_s6 + 2) != '\x01') {
      if (*(char *)(unaff_s6 + 2) != '\x03') goto _L0;
      sVar6 = -10;
    }
    uVar7 = 0;
    uVar10 = 1;
    sVar6 = sVar5 + sVar6;
  }
_L0:
  *(undefined2 *)(unaff_s4 + 6) = uVar7;
  *(bool *)unaff_s4 = bVar3;
  *(undefined *)(unaff_s4 + 1) = uVar10;
  *(short *)(unaff_s4 + 2) = sVar5;
  *(short *)(unaff_s4 + 4) = sVar6;
  return cVar4;
}



void FUN_00010ba4(void)

{
  char cVar1;
  int unaff_s0;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined uVar6;
  undefined unaff_s3;
  undefined *unaff_s4;
  int unaff_s6;
  
  sVar2 = FUN_00010ba4();
  if (unaff_s0 != 0) {
    puVar5 = (undefined *)(*(byte *)(unaff_s0 + 2) - 1 & 0xff);
    cVar1 = *(char *)(unaff_s0 + 4);
    uVar6 = 1;
    if (puVar5 < (undefined *)0x3) {
      uVar6 = *puVar5;
    }
    sVar3 = _LVL406(*(undefined *)(unaff_s0 + 3));
    uVar4 = 0;
    if (cVar1 != '\0') {
      uVar4 = FUN_00010bee(cVar1);
    }
    goto _L0;
  }
  if (unaff_s6 == 0) {
_L0:
    uVar4 = 0;
    uVar6 = 0;
    sVar3 = sVar2;
  }
  else {
    sVar3 = 10;
    if (*(char *)(unaff_s6 + 2) != '\x01') {
      if (*(char *)(unaff_s6 + 2) != '\x03') goto _L0;
      sVar3 = -10;
    }
    uVar4 = 0;
    uVar6 = 1;
    sVar3 = sVar2 + sVar3;
  }
_L0:
  *(undefined2 *)(unaff_s4 + 6) = uVar4;
  *unaff_s4 = unaff_s3;
  unaff_s4[1] = uVar6;
  *(short *)(unaff_s4 + 2) = sVar2;
  *(short *)(unaff_s4 + 4) = sVar3;
  return;
}



void _LVL406(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined unaff_s2;
  undefined unaff_s3;
  undefined *unaff_s4;
  undefined2 unaff_s5;
  int unaff_s6;
  
  uVar1 = _LVL406();
  uVar2 = 0;
  if (unaff_s6 != 0) {
    uVar2 = FUN_00010bee();
  }
  *(undefined2 *)(unaff_s4 + 6) = uVar2;
  *unaff_s4 = unaff_s3;
  unaff_s4[1] = unaff_s2;
  *(undefined2 *)(unaff_s4 + 2) = unaff_s5;
  *(undefined2 *)(unaff_s4 + 4) = uVar1;
  return;
}



void FUN_00010bee(void)

{
  undefined2 unaff_s0;
  undefined2 uVar1;
  undefined unaff_s2;
  undefined unaff_s3;
  undefined *unaff_s4;
  undefined2 unaff_s5;
  
  uVar1 = FUN_00010bee();
  *(undefined2 *)(unaff_s4 + 6) = uVar1;
  *unaff_s4 = unaff_s3;
  unaff_s4[1] = unaff_s2;
  *(undefined2 *)(unaff_s4 + 2) = unaff_s5;
  *(undefined2 *)(unaff_s4 + 4) = unaff_s0;
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint16_t me_build_beacon(uint32_t frame,uint8_t vif_idx,uint16_t *tim_oft,uint8_t *tim_len,
                        uint8_t hidden_ssid)

{
  char cVar1;
  undefined2 uVar2;
  uint16_t uVar3;
  int iVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined uVar9;
  undefined3 in_register_0000202d;
  undefined3 in_register_00002039;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  undefined4 uVar13;
  int iVar14;
  uint32_t uStack68;
  undefined2 uStack64;
  undefined uStack62;
  undefined uStack61;
  uint8_t wme_ie [16];
  
  iVar4 = CONCAT31(in_register_0000202d,vif_idx);
  iVar14 = iVar4 * 0x5d8;
  cVar1 = *(char *)(iVar14 + 0x418);
  *(undefined *)frame = 0x80;
  *(undefined *)(frame + 1) = 0;
  *(undefined *)(frame + 2) = 0;
  *(undefined *)(frame + 3) = 0;
  uStack68 = frame;
  _L0(frame + 4,0,6);
  FUN_00010cd0(frame + 10,iVar14 + 0x50,6);
  FUN_00010ce0(frame + 0x10,iVar14 + 0x50,6);
  uVar10 = (uint)_DAT_00000054;
  _DAT_00000054 = (ushort)((uVar10 + 1) * 0x10000 >> 0x10);
  iVar11 = (uVar10 + 1) * 0x100000;
  *(char *)(frame + 0x16) = (char)((uint)iVar11 >> 0x10);
  *(char *)(frame + 0x17) = (char)((uint)iVar11 >> 0x18);
  uVar2 = *(undefined2 *)(iVar14 + 0x412);
  *(char *)(uStack68 + 0x20) = (char)uVar2;
  *(char *)(uStack68 + 0x21) = (char)((ushort)uVar2 >> 8);
  uVar5 = _L0(iVar4);
  if (cVar1 != '\0') {
    uVar5 = uVar5 | 0x10;
  }
  iVar11 = iVar14 + 0x37f;
  *(char *)(uStack68 + 0x22) = (char)uVar5;
  *(char *)(uStack68 + 0x23) = (char)(uVar5 >> 8);
  uStack68 = uStack68 + 0x24;
  if (CONCAT31(in_register_00002039,hidden_ssid) == 0) {
    uVar9 = *(undefined *)(iVar4 * 0x5d8 + 0x37e);
  }
  else {
    FUN_00010d62(0,iVar11);
    iVar11 = 0;
    uVar9 = 0;
  }
  sVar6 = FUN_00010d70(&uStack68,uVar9,iVar11);
  sVar7 = FUN_00010d8a(&uStack68,iVar14 + 0x3b0);
  sVar7 = sVar6 + 0x24 + sVar7;
  if (8 < *(byte *)(iVar4 * 0x5d8 + 0x3b0)) {
    sVar6 = FUN_00010db2(&uStack68,iVar14 + 0x3b0);
    sVar7 = sVar7 + sVar6;
  }
  iVar11 = iVar4 * 0x5d8;
  sVar6 = FUN_00010de8(&uStack68,(int)(**(ushort **)(iVar11 + 0x3a4) - 0x96c) / 5 + 1U & 0xff);
  *tim_oft = sVar7 + sVar6;
  uVar5 = FUN_00010e00(&uStack68,*(undefined *)(iVar11 + 0x3ac));
  *tim_len = (uint8_t)(uVar5 & 0xff);
  uVar10 = FUN_00010e16(&uStack68,cVar1);
  FUN_00010e30(0,uStack68 - (uVar10 & 0xff));
  sVar8 = FUN_00010e3c(&uStack68,0);
  sVar7 = sVar7 + sVar6 + (uVar5 & 0xff) + sVar8 + ((ushort)uVar10 & 0xff);
  if ((*(uint *)(iVar11 + 0x3e0) & 2) != 0) {
    sVar6 = FUN_00010e5e(&uStack68);
    sVar8 = FUN_00010e6e(&uStack68,iVar14);
    sVar7 = sVar7 + sVar8 + sVar6;
  }
  sVar6 = FUN_00010e82(&uStack68,cVar1);
  iVar4 = iVar4 * 0x5d8;
  uVar3 = sVar7 + sVar6;
  if ((*(uint *)(iVar4 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&uStack62,0,0xe);
    uStack64 = 0x7dd;
    uStack61 = 0x50;
    wme_ie._0_2_ = 0x2f2;
    wme_ie[3] = '\x01';
    wme_ie[4] = *(uint8_t *)(iVar4 + 0x3c0);
    _L0(uStack68,&uStack64,9);
    *(char *)(uStack68 + 1) = *(char *)(uStack68 + 1) + '\x11';
    puVar12 = (undefined *)(uStack68 + 2 + (uint)uStack64._1_1_);
    *puVar12 = 0;
    uVar13 = *(undefined4 *)(iVar4 + 0xc);
    puVar12[1] = (char)uVar13;
    puVar12[2] = (char)((uint)uVar13 >> 8);
    puVar12[3] = (char)((uint)uVar13 >> 0x10);
    puVar12[4] = (char)((uint)uVar13 >> 0x18);
    uVar13 = *(undefined4 *)(iVar4 + 8);
    puVar12[5] = (char)uVar13;
    puVar12[6] = (char)((uint)uVar13 >> 8);
    puVar12[7] = (char)((uint)uVar13 >> 0x10);
    puVar12[8] = (char)((uint)uVar13 >> 0x18);
    uVar13 = *(undefined4 *)(iVar4 + 0x10);
    puVar12[9] = (char)uVar13;
    puVar12[10] = (char)((uint)uVar13 >> 8);
    puVar12[0xb] = (char)((uint)uVar13 >> 0x10);
    puVar12[0xc] = (char)((uint)uVar13 >> 0x18);
    uVar13 = *(undefined4 *)(iVar4 + 0x14);
    puVar12[0xd] = (char)uVar13;
    puVar12[0xe] = (char)((uint)uVar13 >> 8);
    puVar12[0xf] = (char)((uint)uVar13 >> 0x10);
    puVar12[0x10] = (char)((uint)uVar13 >> 0x18);
    uVar3 = uVar3 + uStack64._1_1_ + 0x13;
  }
  return uVar3;
}



uint _L0(ushort uRam00000054)

{
  undefined2 uVar1;
  int unaff_s0;
  int unaff_s1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined *unaff_s5;
  undefined2 *unaff_s6;
  int unaff_s7;
  int iVar11;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  _L0();
  FUN_00010cd0(unaff_s0 + 10,6);
  FUN_00010ce0(unaff_s0 + 0x10,6);
  uVar7 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar7 + 1) * 0x10000 >> 0x10);
  iVar8 = (uVar7 + 1) * 0x100000;
  *(char *)(unaff_s0 + 0x16) = (char)((uint)iVar8 >> 0x10);
  *(char *)(unaff_s0 + 0x17) = (char)((uint)iVar8 >> 0x18);
  uVar1 = *(undefined2 *)(unaff_s7 + 0x412);
  *(char *)(in_stack_0000000c + 0x20) = (char)uVar1;
  *(char *)(in_stack_0000000c + 0x21) = (char)((ushort)uVar1 >> 8);
  uVar2 = _L0();
  if (unaff_s3 != 0) {
    uVar2 = uVar2 | 0x10;
  }
  iVar8 = unaff_s4 + 0x37f + unaff_s2;
  *(char *)(in_stack_0000000c + 0x22) = (char)uVar2;
  *(char *)(in_stack_0000000c + 0x23) = (char)(uVar2 >> 8);
  in_stack_0000000c = in_stack_0000000c + 0x24;
  if (in_stack_00000008 == 0) {
    uVar6 = *(undefined *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x37e);
  }
  else {
    FUN_00010d62(0,iVar8);
    iVar8 = 0;
    uVar6 = 0;
  }
  iVar8 = FUN_00010d70(&stack0x0000000c,uVar6,iVar8);
  iVar11 = unaff_s4 + 0x3b0 + unaff_s2;
  iVar3 = FUN_00010d8a(&stack0x0000000c,iVar11);
  uVar7 = (iVar8 + 0x24U & 0xffff) + iVar3 & 0xffff;
  if (8 < *(byte *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x3b0)) {
    iVar8 = FUN_00010db2(&stack0x0000000c,iVar11);
    uVar7 = uVar7 + iVar8 & 0xffff;
  }
  iVar11 = unaff_s1 * 0x5d8 + unaff_s2;
  iVar8 = FUN_00010de8(&stack0x0000000c,(int)(**(ushort **)(iVar11 + 0x3a4) - 0x96c) / 5 + 1U & 0xff
                      );
  *unaff_s6 = (short)((uVar7 + iVar8) * 0x10000 >> 0x10);
  uVar4 = FUN_00010e00(&stack0x0000000c,*(undefined *)(iVar11 + 0x3ac));
  *unaff_s5 = (char)(uVar4 & 0xff);
  uVar5 = FUN_00010e16(&stack0x0000000c);
  FUN_00010e30(0,in_stack_0000000c - (uVar5 & 0xff));
  iVar3 = FUN_00010e3c(&stack0x0000000c,0);
  uVar7 = ((uVar7 + iVar8 & 0xffff) + (uVar4 & 0xff) & 0xffff) + iVar3 + (uVar5 & 0xff) & 0xffff;
  if ((*(uint *)(iVar11 + 0x3e0) & 2) != 0) {
    iVar8 = FUN_00010e5e(&stack0x0000000c);
    iVar3 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar7 = uVar7 + iVar3 + iVar8 & 0xffff;
  }
  iVar8 = FUN_00010e82(&stack0x0000000c);
  uVar7 = uVar7 + iVar8 & 0xffff;
  iVar8 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar8 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar8 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar9 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar9 = 0;
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    puVar9[1] = (char)uVar10;
    puVar9[2] = (char)((uint)uVar10 >> 8);
    puVar9[3] = (char)((uint)uVar10 >> 0x10);
    puVar9[4] = (char)((uint)uVar10 >> 0x18);
    uVar10 = *(undefined4 *)(iVar8 + 8);
    puVar9[5] = (char)uVar10;
    puVar9[6] = (char)((uint)uVar10 >> 8);
    puVar9[7] = (char)((uint)uVar10 >> 0x10);
    puVar9[8] = (char)((uint)uVar10 >> 0x18);
    uVar10 = *(undefined4 *)(iVar8 + 0x10);
    puVar9[9] = (char)uVar10;
    puVar9[10] = (char)((uint)uVar10 >> 8);
    puVar9[0xb] = (char)((uint)uVar10 >> 0x10);
    puVar9[0xc] = (char)((uint)uVar10 >> 0x18);
    uVar10 = *(undefined4 *)(iVar8 + 0x14);
    puVar9[0xd] = (char)uVar10;
    puVar9[0xe] = (char)((uint)uVar10 >> 8);
    puVar9[0xf] = (char)((uint)uVar10 >> 0x10);
    puVar9[0x10] = (char)((uint)uVar10 >> 0x18);
    uVar7 = uVar7 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar7;
}



uint FUN_00010cd0(ushort uRam00000054)

{
  undefined2 uVar1;
  int unaff_s0;
  int unaff_s1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined *unaff_s5;
  undefined2 *unaff_s6;
  int unaff_s7;
  int iVar11;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  FUN_00010cd0();
  FUN_00010ce0(unaff_s0 + 0x10,6);
  uVar7 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar7 + 1) * 0x10000 >> 0x10);
  iVar8 = (uVar7 + 1) * 0x100000;
  *(char *)(unaff_s0 + 0x16) = (char)((uint)iVar8 >> 0x10);
  *(char *)(unaff_s0 + 0x17) = (char)((uint)iVar8 >> 0x18);
  uVar1 = *(undefined2 *)(unaff_s7 + 0x412);
  *(char *)(in_stack_0000000c + 0x20) = (char)uVar1;
  *(char *)(in_stack_0000000c + 0x21) = (char)((ushort)uVar1 >> 8);
  uVar2 = _L0();
  if (unaff_s3 != 0) {
    uVar2 = uVar2 | 0x10;
  }
  iVar8 = unaff_s4 + 0x37f + unaff_s2;
  *(char *)(in_stack_0000000c + 0x22) = (char)uVar2;
  *(char *)(in_stack_0000000c + 0x23) = (char)(uVar2 >> 8);
  in_stack_0000000c = in_stack_0000000c + 0x24;
  if (in_stack_00000008 == 0) {
    uVar6 = *(undefined *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x37e);
  }
  else {
    FUN_00010d62(0,iVar8);
    iVar8 = 0;
    uVar6 = 0;
  }
  iVar8 = FUN_00010d70(&stack0x0000000c,uVar6,iVar8);
  iVar11 = unaff_s4 + 0x3b0 + unaff_s2;
  iVar3 = FUN_00010d8a(&stack0x0000000c,iVar11);
  uVar7 = (iVar8 + 0x24U & 0xffff) + iVar3 & 0xffff;
  if (8 < *(byte *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x3b0)) {
    iVar8 = FUN_00010db2(&stack0x0000000c,iVar11);
    uVar7 = uVar7 + iVar8 & 0xffff;
  }
  iVar11 = unaff_s1 * 0x5d8 + unaff_s2;
  iVar8 = FUN_00010de8(&stack0x0000000c,(int)(**(ushort **)(iVar11 + 0x3a4) - 0x96c) / 5 + 1U & 0xff
                      );
  *unaff_s6 = (short)((uVar7 + iVar8) * 0x10000 >> 0x10);
  uVar4 = FUN_00010e00(&stack0x0000000c,*(undefined *)(iVar11 + 0x3ac));
  *unaff_s5 = (char)(uVar4 & 0xff);
  uVar5 = FUN_00010e16(&stack0x0000000c);
  FUN_00010e30(0,in_stack_0000000c - (uVar5 & 0xff));
  iVar3 = FUN_00010e3c(&stack0x0000000c,0);
  uVar7 = ((uVar7 + iVar8 & 0xffff) + (uVar4 & 0xff) & 0xffff) + iVar3 + (uVar5 & 0xff) & 0xffff;
  if ((*(uint *)(iVar11 + 0x3e0) & 2) != 0) {
    iVar8 = FUN_00010e5e(&stack0x0000000c);
    iVar3 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar7 = uVar7 + iVar3 + iVar8 & 0xffff;
  }
  iVar8 = FUN_00010e82(&stack0x0000000c);
  uVar7 = uVar7 + iVar8 & 0xffff;
  iVar8 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar8 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar8 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar9 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar9 = 0;
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    puVar9[1] = (char)uVar10;
    puVar9[2] = (char)((uint)uVar10 >> 8);
    puVar9[3] = (char)((uint)uVar10 >> 0x10);
    puVar9[4] = (char)((uint)uVar10 >> 0x18);
    uVar10 = *(undefined4 *)(iVar8 + 8);
    puVar9[5] = (char)uVar10;
    puVar9[6] = (char)((uint)uVar10 >> 8);
    puVar9[7] = (char)((uint)uVar10 >> 0x10);
    puVar9[8] = (char)((uint)uVar10 >> 0x18);
    uVar10 = *(undefined4 *)(iVar8 + 0x10);
    puVar9[9] = (char)uVar10;
    puVar9[10] = (char)((uint)uVar10 >> 8);
    puVar9[0xb] = (char)((uint)uVar10 >> 0x10);
    puVar9[0xc] = (char)((uint)uVar10 >> 0x18);
    uVar10 = *(undefined4 *)(iVar8 + 0x14);
    puVar9[0xd] = (char)uVar10;
    puVar9[0xe] = (char)((uint)uVar10 >> 8);
    puVar9[0xf] = (char)((uint)uVar10 >> 0x10);
    puVar9[0x10] = (char)((uint)uVar10 >> 0x18);
    uVar7 = uVar7 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar7;
}



uint FUN_00010ce0(ushort uRam00000054)

{
  undefined2 uVar1;
  int unaff_s0;
  int unaff_s1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined *unaff_s5;
  undefined2 *unaff_s6;
  int unaff_s7;
  int iVar11;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  FUN_00010ce0();
  uVar7 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar7 + 1) * 0x10000 >> 0x10);
  iVar8 = (uVar7 + 1) * 0x100000;
  *(char *)(unaff_s0 + 0x16) = (char)((uint)iVar8 >> 0x10);
  *(char *)(unaff_s0 + 0x17) = (char)((uint)iVar8 >> 0x18);
  uVar1 = *(undefined2 *)(unaff_s7 + 0x412);
  *(char *)(in_stack_0000000c + 0x20) = (char)uVar1;
  *(char *)(in_stack_0000000c + 0x21) = (char)((ushort)uVar1 >> 8);
  uVar2 = _L0();
  if (unaff_s3 != 0) {
    uVar2 = uVar2 | 0x10;
  }
  iVar8 = unaff_s4 + 0x37f + unaff_s2;
  *(char *)(in_stack_0000000c + 0x22) = (char)uVar2;
  *(char *)(in_stack_0000000c + 0x23) = (char)(uVar2 >> 8);
  in_stack_0000000c = in_stack_0000000c + 0x24;
  if (in_stack_00000008 == 0) {
    uVar6 = *(undefined *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x37e);
  }
  else {
    FUN_00010d62(0,iVar8);
    iVar8 = 0;
    uVar6 = 0;
  }
  iVar8 = FUN_00010d70(&stack0x0000000c,uVar6,iVar8);
  iVar11 = unaff_s4 + 0x3b0 + unaff_s2;
  iVar3 = FUN_00010d8a(&stack0x0000000c,iVar11);
  uVar7 = (iVar8 + 0x24U & 0xffff) + iVar3 & 0xffff;
  if (8 < *(byte *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x3b0)) {
    iVar8 = FUN_00010db2(&stack0x0000000c,iVar11);
    uVar7 = uVar7 + iVar8 & 0xffff;
  }
  iVar11 = unaff_s1 * 0x5d8 + unaff_s2;
  iVar8 = FUN_00010de8(&stack0x0000000c,(int)(**(ushort **)(iVar11 + 0x3a4) - 0x96c) / 5 + 1U & 0xff
                      );
  *unaff_s6 = (short)((uVar7 + iVar8) * 0x10000 >> 0x10);
  uVar4 = FUN_00010e00(&stack0x0000000c,*(undefined *)(iVar11 + 0x3ac));
  *unaff_s5 = (char)(uVar4 & 0xff);
  uVar5 = FUN_00010e16(&stack0x0000000c);
  FUN_00010e30(0,in_stack_0000000c - (uVar5 & 0xff));
  iVar3 = FUN_00010e3c(&stack0x0000000c,0);
  uVar7 = ((uVar7 + iVar8 & 0xffff) + (uVar4 & 0xff) & 0xffff) + iVar3 + (uVar5 & 0xff) & 0xffff;
  if ((*(uint *)(iVar11 + 0x3e0) & 2) != 0) {
    iVar8 = FUN_00010e5e(&stack0x0000000c);
    iVar3 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar7 = uVar7 + iVar3 + iVar8 & 0xffff;
  }
  iVar8 = FUN_00010e82(&stack0x0000000c);
  uVar7 = uVar7 + iVar8 & 0xffff;
  iVar8 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar8 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar8 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar9 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar9 = 0;
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    puVar9[1] = (char)uVar10;
    puVar9[2] = (char)((uint)uVar10 >> 8);
    puVar9[3] = (char)((uint)uVar10 >> 0x10);
    puVar9[4] = (char)((uint)uVar10 >> 0x18);
    uVar10 = *(undefined4 *)(iVar8 + 8);
    puVar9[5] = (char)uVar10;
    puVar9[6] = (char)((uint)uVar10 >> 8);
    puVar9[7] = (char)((uint)uVar10 >> 0x10);
    puVar9[8] = (char)((uint)uVar10 >> 0x18);
    uVar10 = *(undefined4 *)(iVar8 + 0x10);
    puVar9[9] = (char)uVar10;
    puVar9[10] = (char)((uint)uVar10 >> 8);
    puVar9[0xb] = (char)((uint)uVar10 >> 0x10);
    puVar9[0xc] = (char)((uint)uVar10 >> 0x18);
    uVar10 = *(undefined4 *)(iVar8 + 0x14);
    puVar9[0xd] = (char)uVar10;
    puVar9[0xe] = (char)((uint)uVar10 >> 8);
    puVar9[0xf] = (char)((uint)uVar10 >> 0x10);
    puVar9[0x10] = (char)((uint)uVar10 >> 0x18);
    uVar7 = uVar7 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar7;
}



uint _L0(void)

{
  uint uVar1;
  int unaff_s1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined uVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined *unaff_s5;
  undefined2 *unaff_s6;
  int iVar10;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  uVar2 = _L0();
  if (unaff_s3 != 0) {
    uVar2 = uVar2 | 0x10;
  }
  iVar7 = unaff_s4 + 0x37f + unaff_s2;
  *(char *)(in_stack_0000000c + 0x22) = (char)uVar2;
  *(char *)(in_stack_0000000c + 0x23) = (char)(uVar2 >> 8);
  in_stack_0000000c = in_stack_0000000c + 0x24;
  if (in_stack_00000008 == 0) {
    uVar6 = *(undefined *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x37e);
  }
  else {
    FUN_00010d62(0,iVar7);
    iVar7 = 0;
    uVar6 = 0;
  }
  iVar7 = FUN_00010d70(&stack0x0000000c,uVar6,iVar7);
  iVar10 = unaff_s4 + 0x3b0 + unaff_s2;
  iVar3 = FUN_00010d8a(&stack0x0000000c,iVar10);
  uVar1 = (iVar7 + 0x24U & 0xffff) + iVar3 & 0xffff;
  if (8 < *(byte *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x3b0)) {
    iVar7 = FUN_00010db2(&stack0x0000000c,iVar10);
    uVar1 = uVar1 + iVar7 & 0xffff;
  }
  iVar10 = unaff_s1 * 0x5d8 + unaff_s2;
  iVar7 = FUN_00010de8(&stack0x0000000c,(int)(**(ushort **)(iVar10 + 0x3a4) - 0x96c) / 5 + 1U & 0xff
                      );
  *unaff_s6 = (short)((uVar1 + iVar7) * 0x10000 >> 0x10);
  uVar4 = FUN_00010e00(&stack0x0000000c,*(undefined *)(iVar10 + 0x3ac));
  *unaff_s5 = (char)(uVar4 & 0xff);
  uVar5 = FUN_00010e16(&stack0x0000000c);
  FUN_00010e30(0,in_stack_0000000c - (uVar5 & 0xff));
  iVar3 = FUN_00010e3c(&stack0x0000000c,0);
  uVar1 = ((uVar1 + iVar7 & 0xffff) + (uVar4 & 0xff) & 0xffff) + iVar3 + (uVar5 & 0xff) & 0xffff;
  if ((*(uint *)(iVar10 + 0x3e0) & 2) != 0) {
    iVar7 = FUN_00010e5e(&stack0x0000000c);
    iVar3 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar1 = uVar1 + iVar3 + iVar7 & 0xffff;
  }
  iVar7 = FUN_00010e82(&stack0x0000000c);
  uVar1 = uVar1 + iVar7 & 0xffff;
  iVar7 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar7 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar7 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar8 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar8 = 0;
    uVar9 = *(undefined4 *)(iVar7 + 0xc);
    puVar8[1] = (char)uVar9;
    puVar8[2] = (char)((uint)uVar9 >> 8);
    puVar8[3] = (char)((uint)uVar9 >> 0x10);
    puVar8[4] = (char)((uint)uVar9 >> 0x18);
    uVar9 = *(undefined4 *)(iVar7 + 8);
    puVar8[5] = (char)uVar9;
    puVar8[6] = (char)((uint)uVar9 >> 8);
    puVar8[7] = (char)((uint)uVar9 >> 0x10);
    puVar8[8] = (char)((uint)uVar9 >> 0x18);
    uVar9 = *(undefined4 *)(iVar7 + 0x10);
    puVar8[9] = (char)uVar9;
    puVar8[10] = (char)((uint)uVar9 >> 8);
    puVar8[0xb] = (char)((uint)uVar9 >> 0x10);
    puVar8[0xc] = (char)((uint)uVar9 >> 0x18);
    uVar9 = *(undefined4 *)(iVar7 + 0x14);
    puVar8[0xd] = (char)uVar9;
    puVar8[0xe] = (char)((uint)uVar9 >> 8);
    puVar8[0xf] = (char)((uint)uVar9 >> 0x10);
    puVar8[0x10] = (char)((uint)uVar9 >> 0x18);
    uVar1 = uVar1 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar1;
}



uint FUN_00010d62(void)

{
  uint uVar1;
  int unaff_s1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int unaff_s2;
  int unaff_s4;
  undefined *unaff_s5;
  undefined2 *unaff_s6;
  int iVar8;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  FUN_00010d62();
  iVar2 = FUN_00010d70(&stack0x0000000c,0,0);
  iVar8 = unaff_s4 + 0x3b0 + unaff_s2;
  iVar3 = FUN_00010d8a(&stack0x0000000c,iVar8);
  uVar1 = (iVar2 + 0x24U & 0xffff) + iVar3 & 0xffff;
  if (8 < *(byte *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x3b0)) {
    iVar2 = FUN_00010db2(&stack0x0000000c,iVar8);
    uVar1 = uVar1 + iVar2 & 0xffff;
  }
  iVar8 = unaff_s1 * 0x5d8 + unaff_s2;
  iVar2 = FUN_00010de8(&stack0x0000000c,(int)(**(ushort **)(iVar8 + 0x3a4) - 0x96c) / 5 + 1U & 0xff)
  ;
  *unaff_s6 = (short)((uVar1 + iVar2) * 0x10000 >> 0x10);
  uVar4 = FUN_00010e00(&stack0x0000000c,*(undefined *)(iVar8 + 0x3ac));
  *unaff_s5 = (char)(uVar4 & 0xff);
  uVar5 = FUN_00010e16(&stack0x0000000c);
  FUN_00010e30(0,in_stack_0000000c - (uVar5 & 0xff));
  iVar3 = FUN_00010e3c(&stack0x0000000c,0);
  uVar1 = ((uVar1 + iVar2 & 0xffff) + (uVar4 & 0xff) & 0xffff) + iVar3 + (uVar5 & 0xff) & 0xffff;
  if ((*(uint *)(iVar8 + 0x3e0) & 2) != 0) {
    iVar2 = FUN_00010e5e(&stack0x0000000c);
    iVar3 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar1 = uVar1 + iVar3 + iVar2 & 0xffff;
  }
  iVar2 = FUN_00010e82(&stack0x0000000c);
  uVar1 = uVar1 + iVar2 & 0xffff;
  iVar2 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar2 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar2 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar6 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar6 = 0;
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    puVar6[1] = (char)uVar7;
    puVar6[2] = (char)((uint)uVar7 >> 8);
    puVar6[3] = (char)((uint)uVar7 >> 0x10);
    puVar6[4] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 8);
    puVar6[5] = (char)uVar7;
    puVar6[6] = (char)((uint)uVar7 >> 8);
    puVar6[7] = (char)((uint)uVar7 >> 0x10);
    puVar6[8] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 0x10);
    puVar6[9] = (char)uVar7;
    puVar6[10] = (char)((uint)uVar7 >> 8);
    puVar6[0xb] = (char)((uint)uVar7 >> 0x10);
    puVar6[0xc] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 0x14);
    puVar6[0xd] = (char)uVar7;
    puVar6[0xe] = (char)((uint)uVar7 >> 8);
    puVar6[0xf] = (char)((uint)uVar7 >> 0x10);
    puVar6[0x10] = (char)((uint)uVar7 >> 0x18);
    uVar1 = uVar1 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar1;
}



uint FUN_00010d70(void)

{
  uint uVar1;
  int unaff_s1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int unaff_s2;
  int unaff_s4;
  undefined *unaff_s5;
  undefined2 *unaff_s6;
  int iVar8;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  iVar2 = FUN_00010d70();
  iVar8 = unaff_s4 + 0x3b0 + unaff_s2;
  iVar3 = FUN_00010d8a(&stack0x0000000c,iVar8);
  uVar1 = (iVar2 + 0x24U & 0xffff) + iVar3 & 0xffff;
  if (8 < *(byte *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x3b0)) {
    iVar2 = FUN_00010db2(&stack0x0000000c,iVar8);
    uVar1 = uVar1 + iVar2 & 0xffff;
  }
  iVar8 = unaff_s1 * 0x5d8 + unaff_s2;
  iVar2 = FUN_00010de8(&stack0x0000000c,(int)(**(ushort **)(iVar8 + 0x3a4) - 0x96c) / 5 + 1U & 0xff)
  ;
  *unaff_s6 = (short)((uVar1 + iVar2) * 0x10000 >> 0x10);
  uVar4 = FUN_00010e00(&stack0x0000000c,*(undefined *)(iVar8 + 0x3ac));
  *unaff_s5 = (char)(uVar4 & 0xff);
  uVar5 = FUN_00010e16(&stack0x0000000c);
  FUN_00010e30(0,in_stack_0000000c - (uVar5 & 0xff));
  iVar3 = FUN_00010e3c(&stack0x0000000c,0);
  uVar1 = ((uVar1 + iVar2 & 0xffff) + (uVar4 & 0xff) & 0xffff) + iVar3 + (uVar5 & 0xff) & 0xffff;
  if ((*(uint *)(iVar8 + 0x3e0) & 2) != 0) {
    iVar2 = FUN_00010e5e(&stack0x0000000c);
    iVar3 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar1 = uVar1 + iVar3 + iVar2 & 0xffff;
  }
  iVar2 = FUN_00010e82(&stack0x0000000c);
  uVar1 = uVar1 + iVar2 & 0xffff;
  iVar2 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar2 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar2 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar6 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar6 = 0;
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    puVar6[1] = (char)uVar7;
    puVar6[2] = (char)((uint)uVar7 >> 8);
    puVar6[3] = (char)((uint)uVar7 >> 0x10);
    puVar6[4] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 8);
    puVar6[5] = (char)uVar7;
    puVar6[6] = (char)((uint)uVar7 >> 8);
    puVar6[7] = (char)((uint)uVar7 >> 0x10);
    puVar6[8] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 0x10);
    puVar6[9] = (char)uVar7;
    puVar6[10] = (char)((uint)uVar7 >> 8);
    puVar6[0xb] = (char)((uint)uVar7 >> 0x10);
    puVar6[0xc] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 0x14);
    puVar6[0xd] = (char)uVar7;
    puVar6[0xe] = (char)((uint)uVar7 >> 8);
    puVar6[0xf] = (char)((uint)uVar7 >> 0x10);
    puVar6[0x10] = (char)((uint)uVar7 >> 0x18);
    uVar1 = uVar1 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar1;
}



uint FUN_00010d8a(void)

{
  uint unaff_s0;
  uint uVar1;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int unaff_s2;
  int unaff_s4;
  undefined *unaff_s5;
  undefined2 *unaff_s6;
  int iVar8;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  iVar2 = FUN_00010d8a();
  uVar1 = (unaff_s0 >> 0x10) + iVar2 & 0xffff;
  if (8 < *(byte *)(unaff_s1 * 0x5d8 + unaff_s2 + 0x3b0)) {
    iVar2 = FUN_00010db2(&stack0x0000000c);
    uVar1 = uVar1 + iVar2 & 0xffff;
  }
  iVar8 = unaff_s1 * 0x5d8 + unaff_s2;
  iVar2 = FUN_00010de8(&stack0x0000000c,(int)(**(ushort **)(iVar8 + 0x3a4) - 0x96c) / 5 + 1U & 0xff)
  ;
  *unaff_s6 = (short)((uVar1 + iVar2) * 0x10000 >> 0x10);
  uVar3 = FUN_00010e00(&stack0x0000000c,*(undefined *)(iVar8 + 0x3ac));
  *unaff_s5 = (char)(uVar3 & 0xff);
  uVar4 = FUN_00010e16(&stack0x0000000c);
  FUN_00010e30(0,in_stack_0000000c - (uVar4 & 0xff));
  iVar5 = FUN_00010e3c(&stack0x0000000c,0);
  uVar1 = ((uVar1 + iVar2 & 0xffff) + (uVar3 & 0xff) & 0xffff) + iVar5 + (uVar4 & 0xff) & 0xffff;
  if ((*(uint *)(iVar8 + 0x3e0) & 2) != 0) {
    iVar2 = FUN_00010e5e(&stack0x0000000c);
    iVar5 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar1 = uVar1 + iVar5 + iVar2 & 0xffff;
  }
  iVar2 = FUN_00010e82(&stack0x0000000c);
  uVar1 = uVar1 + iVar2 & 0xffff;
  iVar2 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar2 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar2 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar6 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar6 = 0;
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    puVar6[1] = (char)uVar7;
    puVar6[2] = (char)((uint)uVar7 >> 8);
    puVar6[3] = (char)((uint)uVar7 >> 0x10);
    puVar6[4] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 8);
    puVar6[5] = (char)uVar7;
    puVar6[6] = (char)((uint)uVar7 >> 8);
    puVar6[7] = (char)((uint)uVar7 >> 0x10);
    puVar6[8] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 0x10);
    puVar6[9] = (char)uVar7;
    puVar6[10] = (char)((uint)uVar7 >> 8);
    puVar6[0xb] = (char)((uint)uVar7 >> 0x10);
    puVar6[0xc] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 0x14);
    puVar6[0xd] = (char)uVar7;
    puVar6[0xe] = (char)((uint)uVar7 >> 8);
    puVar6[0xf] = (char)((uint)uVar7 >> 0x10);
    puVar6[0x10] = (char)((uint)uVar7 >> 0x18);
    uVar1 = uVar1 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar1;
}



uint FUN_00010db2(void)

{
  int unaff_s0;
  uint uVar1;
  int unaff_s1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int unaff_s2;
  int unaff_s4;
  undefined *unaff_s5;
  undefined2 *unaff_s6;
  int iVar8;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  iVar2 = FUN_00010db2();
  iVar8 = unaff_s1 * 0x5d8 + unaff_s2;
  iVar3 = FUN_00010de8(&stack0x0000000c,(int)(**(ushort **)(iVar8 + 0x3a4) - 0x96c) / 5 + 1U & 0xff)
  ;
  uVar1 = (unaff_s0 + iVar2 & 0xffffU) + iVar3;
  *unaff_s6 = (short)(uVar1 * 0x10000 >> 0x10);
  uVar4 = FUN_00010e00(&stack0x0000000c,*(undefined *)(iVar8 + 0x3ac));
  *unaff_s5 = (char)(uVar4 & 0xff);
  uVar5 = FUN_00010e16(&stack0x0000000c);
  FUN_00010e30(0,in_stack_0000000c - (uVar5 & 0xff));
  iVar2 = FUN_00010e3c(&stack0x0000000c,0);
  uVar1 = ((uVar1 & 0xffff) + (uVar4 & 0xff) & 0xffff) + iVar2 + (uVar5 & 0xff) & 0xffff;
  if ((*(uint *)(iVar8 + 0x3e0) & 2) != 0) {
    iVar2 = FUN_00010e5e(&stack0x0000000c);
    iVar3 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar1 = uVar1 + iVar3 + iVar2 & 0xffff;
  }
  iVar2 = FUN_00010e82(&stack0x0000000c);
  uVar1 = uVar1 + iVar2 & 0xffff;
  iVar2 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar2 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar2 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar6 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar6 = 0;
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    puVar6[1] = (char)uVar7;
    puVar6[2] = (char)((uint)uVar7 >> 8);
    puVar6[3] = (char)((uint)uVar7 >> 0x10);
    puVar6[4] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 8);
    puVar6[5] = (char)uVar7;
    puVar6[6] = (char)((uint)uVar7 >> 8);
    puVar6[7] = (char)((uint)uVar7 >> 0x10);
    puVar6[8] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 0x10);
    puVar6[9] = (char)uVar7;
    puVar6[10] = (char)((uint)uVar7 >> 8);
    puVar6[0xb] = (char)((uint)uVar7 >> 0x10);
    puVar6[0xc] = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 0x14);
    puVar6[0xd] = (char)uVar7;
    puVar6[0xe] = (char)((uint)uVar7 >> 8);
    puVar6[0xf] = (char)((uint)uVar7 >> 0x10);
    puVar6[0x10] = (char)((uint)uVar7 >> 0x18);
    uVar1 = uVar1 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar1;
}



uint FUN_00010de8(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int unaff_s2;
  int unaff_s4;
  undefined *unaff_s5;
  undefined2 *unaff_s6;
  int unaff_s7;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  iVar1 = FUN_00010de8();
  *unaff_s6 = (short)((uint)((unaff_s0 + iVar1) * 0x10000) >> 0x10);
  uVar2 = FUN_00010e00(&stack0x0000000c,*(undefined *)(unaff_s7 + 0x3ac));
  *unaff_s5 = (char)(uVar2 & 0xff);
  uVar3 = FUN_00010e16(&stack0x0000000c);
  FUN_00010e30(0,in_stack_0000000c - (uVar3 & 0xff));
  iVar4 = FUN_00010e3c(&stack0x0000000c,0);
  uVar2 = ((unaff_s0 + iVar1 & 0xffffU) + (uVar2 & 0xff) & 0xffff) + iVar4 + (uVar3 & 0xff) & 0xffff
  ;
  if ((*(uint *)(unaff_s7 + 0x3e0) & 2) != 0) {
    iVar1 = FUN_00010e5e(&stack0x0000000c);
    iVar4 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar2 = uVar2 + iVar4 + iVar1 & 0xffff;
  }
  iVar1 = FUN_00010e82(&stack0x0000000c);
  uVar2 = uVar2 + iVar1 & 0xffff;
  iVar1 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar1 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar1 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar5 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar5 = 0;
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    puVar5[1] = (char)uVar6;
    puVar5[2] = (char)((uint)uVar6 >> 8);
    puVar5[3] = (char)((uint)uVar6 >> 0x10);
    puVar5[4] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    puVar5[5] = (char)uVar6;
    puVar5[6] = (char)((uint)uVar6 >> 8);
    puVar5[7] = (char)((uint)uVar6 >> 0x10);
    puVar5[8] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar1 + 0x10);
    puVar5[9] = (char)uVar6;
    puVar5[10] = (char)((uint)uVar6 >> 8);
    puVar5[0xb] = (char)((uint)uVar6 >> 0x10);
    puVar5[0xc] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar1 + 0x14);
    puVar5[0xd] = (char)uVar6;
    puVar5[0xe] = (char)((uint)uVar6 >> 8);
    puVar5[0xf] = (char)((uint)uVar6 >> 0x10);
    puVar5[0x10] = (char)((uint)uVar6 >> 0x18);
    uVar2 = uVar2 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar2;
}



uint FUN_00010e00(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int unaff_s2;
  int unaff_s4;
  undefined *unaff_s5;
  int unaff_s7;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  uVar1 = FUN_00010e00();
  *unaff_s5 = (char)(uVar1 & 0xff);
  uVar2 = FUN_00010e16(&stack0x0000000c);
  FUN_00010e30(0,in_stack_0000000c - (uVar2 & 0xff));
  iVar3 = FUN_00010e3c(&stack0x0000000c,0);
  uVar1 = (unaff_s0 + (uVar1 & 0xff) & 0xffff) + iVar3 + (uVar2 & 0xff) & 0xffff;
  if ((*(uint *)(unaff_s7 + 0x3e0) & 2) != 0) {
    iVar3 = FUN_00010e5e(&stack0x0000000c);
    iVar4 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar1 = uVar1 + iVar4 + iVar3 & 0xffff;
  }
  iVar3 = FUN_00010e82(&stack0x0000000c);
  uVar1 = uVar1 + iVar3 & 0xffff;
  iVar3 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar3 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar3 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar5 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar5 = 0;
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    puVar5[1] = (char)uVar6;
    puVar5[2] = (char)((uint)uVar6 >> 8);
    puVar5[3] = (char)((uint)uVar6 >> 0x10);
    puVar5[4] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar3 + 8);
    puVar5[5] = (char)uVar6;
    puVar5[6] = (char)((uint)uVar6 >> 8);
    puVar5[7] = (char)((uint)uVar6 >> 0x10);
    puVar5[8] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar3 + 0x10);
    puVar5[9] = (char)uVar6;
    puVar5[10] = (char)((uint)uVar6 >> 8);
    puVar5[0xb] = (char)((uint)uVar6 >> 0x10);
    puVar5[0xc] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar3 + 0x14);
    puVar5[0xd] = (char)uVar6;
    puVar5[0xe] = (char)((uint)uVar6 >> 8);
    puVar5[0xf] = (char)((uint)uVar6 >> 0x10);
    puVar5[0x10] = (char)((uint)uVar6 >> 0x18);
    uVar1 = uVar1 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar1;
}



uint FUN_00010e16(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_s2;
  int unaff_s4;
  int unaff_s7;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  uVar1 = FUN_00010e16();
  FUN_00010e30(0,in_stack_0000000c - (uVar1 & 0xff));
  iVar2 = FUN_00010e3c(&stack0x0000000c,0);
  uVar1 = (unaff_s0 & 0xffff) + iVar2 + (uVar1 & 0xff) & 0xffff;
  if ((*(uint *)(unaff_s7 + 0x3e0) & 2) != 0) {
    iVar2 = FUN_00010e5e(&stack0x0000000c);
    iVar3 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    uVar1 = uVar1 + iVar3 + iVar2 & 0xffff;
  }
  iVar2 = FUN_00010e82(&stack0x0000000c);
  uVar1 = uVar1 + iVar2 & 0xffff;
  iVar2 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar2 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar2 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar4 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar4 = 0;
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    puVar4[1] = (char)uVar5;
    puVar4[2] = (char)((uint)uVar5 >> 8);
    puVar4[3] = (char)((uint)uVar5 >> 0x10);
    puVar4[4] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar2 + 8);
    puVar4[5] = (char)uVar5;
    puVar4[6] = (char)((uint)uVar5 >> 8);
    puVar4[7] = (char)((uint)uVar5 >> 0x10);
    puVar4[8] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar2 + 0x10);
    puVar4[9] = (char)uVar5;
    puVar4[10] = (char)((uint)uVar5 >> 8);
    puVar4[0xb] = (char)((uint)uVar5 >> 0x10);
    puVar4[0xc] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar2 + 0x14);
    puVar4[0xd] = (char)uVar5;
    puVar4[0xe] = (char)((uint)uVar5 >> 8);
    puVar4[0xf] = (char)((uint)uVar5 >> 0x10);
    puVar4[0x10] = (char)((uint)uVar5 >> 0x18);
    uVar1 = uVar1 + bStack00000011 + 0x13 & 0xffff;
  }
  return uVar1;
}



short FUN_00010e30(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_s2;
  int iVar6;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s7;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  FUN_00010e30();
  sVar1 = FUN_00010e3c(&stack0x0000000c,0);
  sVar1 = unaff_s0 + sVar1 + (unaff_s5 & 0xff);
  if ((*(uint *)(unaff_s7 + 0x3e0) & 2) != 0) {
    sVar2 = FUN_00010e5e(&stack0x0000000c);
    sVar3 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    sVar1 = sVar1 + sVar3 + sVar2;
  }
  sVar2 = FUN_00010e82(&stack0x0000000c);
  sVar1 = sVar1 + sVar2;
  iVar6 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar6 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar6 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar4 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar4 = 0;
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
    puVar4[1] = (char)uVar5;
    puVar4[2] = (char)((uint)uVar5 >> 8);
    puVar4[3] = (char)((uint)uVar5 >> 0x10);
    puVar4[4] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 8);
    puVar4[5] = (char)uVar5;
    puVar4[6] = (char)((uint)uVar5 >> 8);
    puVar4[7] = (char)((uint)uVar5 >> 0x10);
    puVar4[8] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x10);
    puVar4[9] = (char)uVar5;
    puVar4[10] = (char)((uint)uVar5 >> 8);
    puVar4[0xb] = (char)((uint)uVar5 >> 0x10);
    puVar4[0xc] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x14);
    puVar4[0xd] = (char)uVar5;
    puVar4[0xe] = (char)((uint)uVar5 >> 8);
    puVar4[0xf] = (char)((uint)uVar5 >> 0x10);
    puVar4[0x10] = (char)((uint)uVar5 >> 0x18);
    sVar1 = sVar1 + bStack00000011 + 0x13;
  }
  return sVar1;
}



short FUN_00010e3c(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_s2;
  int iVar6;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s7;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar1 = FUN_00010e3c();
  sVar1 = unaff_s0 + sVar1 + (unaff_s5 & 0xff);
  if ((*(uint *)(unaff_s7 + 0x3e0) & 2) != 0) {
    sVar2 = FUN_00010e5e(&stack0x0000000c);
    sVar3 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
    sVar1 = sVar1 + sVar3 + sVar2;
  }
  sVar2 = FUN_00010e82(&stack0x0000000c);
  sVar1 = sVar1 + sVar2;
  iVar6 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar6 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar6 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar4 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar4 = 0;
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
    puVar4[1] = (char)uVar5;
    puVar4[2] = (char)((uint)uVar5 >> 8);
    puVar4[3] = (char)((uint)uVar5 >> 0x10);
    puVar4[4] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 8);
    puVar4[5] = (char)uVar5;
    puVar4[6] = (char)((uint)uVar5 >> 8);
    puVar4[7] = (char)((uint)uVar5 >> 0x10);
    puVar4[8] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x10);
    puVar4[9] = (char)uVar5;
    puVar4[10] = (char)((uint)uVar5 >> 8);
    puVar4[0xb] = (char)((uint)uVar5 >> 0x10);
    puVar4[0xc] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x14);
    puVar4[0xd] = (char)uVar5;
    puVar4[0xe] = (char)((uint)uVar5 >> 8);
    puVar4[0xf] = (char)((uint)uVar5 >> 0x10);
    puVar4[0x10] = (char)((uint)uVar5 >> 0x18);
    sVar1 = sVar1 + bStack00000011 + 0x13;
  }
  return sVar1;
}



short FUN_00010e5e(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_s2;
  int iVar6;
  int unaff_s4;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar1 = FUN_00010e5e();
  sVar2 = FUN_00010e6e(&stack0x0000000c,unaff_s2 + unaff_s4);
  sVar3 = FUN_00010e82(&stack0x0000000c);
  sVar3 = unaff_s0 + sVar2 + sVar1 + sVar3;
  iVar6 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar6 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar6 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar4 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar4 = 0;
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
    puVar4[1] = (char)uVar5;
    puVar4[2] = (char)((uint)uVar5 >> 8);
    puVar4[3] = (char)((uint)uVar5 >> 0x10);
    puVar4[4] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 8);
    puVar4[5] = (char)uVar5;
    puVar4[6] = (char)((uint)uVar5 >> 8);
    puVar4[7] = (char)((uint)uVar5 >> 0x10);
    puVar4[8] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x10);
    puVar4[9] = (char)uVar5;
    puVar4[10] = (char)((uint)uVar5 >> 8);
    puVar4[0xb] = (char)((uint)uVar5 >> 0x10);
    puVar4[0xc] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x14);
    puVar4[0xd] = (char)uVar5;
    puVar4[0xe] = (char)((uint)uVar5 >> 8);
    puVar4[0xf] = (char)((uint)uVar5 >> 0x10);
    puVar4[0x10] = (char)((uint)uVar5 >> 0x18);
    sVar3 = sVar3 + bStack00000011 + 0x13;
  }
  return sVar3;
}



short FUN_00010e6e(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int unaff_s2;
  int iVar5;
  short unaff_s5;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar1 = FUN_00010e6e();
  sVar2 = FUN_00010e82(&stack0x0000000c);
  sVar2 = unaff_s0 + sVar1 + unaff_s5 + sVar2;
  iVar5 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar5 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar5 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar3 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar3 = 0;
    uVar4 = *(undefined4 *)(iVar5 + 0xc);
    puVar3[1] = (char)uVar4;
    puVar3[2] = (char)((uint)uVar4 >> 8);
    puVar3[3] = (char)((uint)uVar4 >> 0x10);
    puVar3[4] = (char)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)(iVar5 + 8);
    puVar3[5] = (char)uVar4;
    puVar3[6] = (char)((uint)uVar4 >> 8);
    puVar3[7] = (char)((uint)uVar4 >> 0x10);
    puVar3[8] = (char)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)(iVar5 + 0x10);
    puVar3[9] = (char)uVar4;
    puVar3[10] = (char)((uint)uVar4 >> 8);
    puVar3[0xb] = (char)((uint)uVar4 >> 0x10);
    puVar3[0xc] = (char)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)(iVar5 + 0x14);
    puVar3[0xd] = (char)uVar4;
    puVar3[0xe] = (char)((uint)uVar4 >> 8);
    puVar3[0xf] = (char)((uint)uVar4 >> 0x10);
    puVar3[0x10] = (char)((uint)uVar4 >> 0x18);
    sVar2 = sVar2 + bStack00000011 + 0x13;
  }
  return sVar2;
}



short FUN_00010e82(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int unaff_s2;
  int iVar4;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar1 = FUN_00010e82();
  sVar1 = unaff_s0 + sVar1;
  iVar4 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar4 + 0x3e0) & 1) != 0) {
    FUN_00010eac(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar4 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar2 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar2 = 0;
    uVar3 = *(undefined4 *)(iVar4 + 0xc);
    puVar2[1] = (char)uVar3;
    puVar2[2] = (char)((uint)uVar3 >> 8);
    puVar2[3] = (char)((uint)uVar3 >> 0x10);
    puVar2[4] = (char)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)(iVar4 + 8);
    puVar2[5] = (char)uVar3;
    puVar2[6] = (char)((uint)uVar3 >> 8);
    puVar2[7] = (char)((uint)uVar3 >> 0x10);
    puVar2[8] = (char)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)(iVar4 + 0x10);
    puVar2[9] = (char)uVar3;
    puVar2[10] = (char)((uint)uVar3 >> 8);
    puVar2[0xb] = (char)((uint)uVar3 >> 0x10);
    puVar2[0xc] = (char)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)(iVar4 + 0x14);
    puVar2[0xd] = (char)uVar3;
    puVar2[0xe] = (char)((uint)uVar3 >> 8);
    puVar2[0xf] = (char)((uint)uVar3 >> 0x10);
    puVar2[0x10] = (char)((uint)uVar3 >> 0x18);
    sVar1 = sVar1 + bStack00000011 + 0x13;
  }
  return sVar1;
}



short FUN_00010eac(void)

{
  short unaff_s0;
  undefined *puVar1;
  undefined4 uVar2;
  int unaff_s2;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  FUN_00010eac();
  uStack00000010 = 0x7dd;
  uStack00000013 = 0x50;
  uStack00000014 = 0x2f2;
  uStack00000017 = 1;
  uStack00000018 = *(undefined *)(unaff_s2 + 0x3c0);
  _L0(in_stack_0000000c,&stack0x00000010,9);
  *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
  puVar1 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
  *puVar1 = 0;
  uVar2 = *(undefined4 *)(unaff_s2 + 0xc);
  puVar1[1] = (char)uVar2;
  puVar1[2] = (char)((uint)uVar2 >> 8);
  puVar1[3] = (char)((uint)uVar2 >> 0x10);
  puVar1[4] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 8);
  puVar1[5] = (char)uVar2;
  puVar1[6] = (char)((uint)uVar2 >> 8);
  puVar1[7] = (char)((uint)uVar2 >> 0x10);
  puVar1[8] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 0x10);
  puVar1[9] = (char)uVar2;
  puVar1[10] = (char)((uint)uVar2 >> 8);
  puVar1[0xb] = (char)((uint)uVar2 >> 0x10);
  puVar1[0xc] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 0x14);
  puVar1[0xd] = (char)uVar2;
  puVar1[0xe] = (char)((uint)uVar2 >> 8);
  puVar1[0xf] = (char)((uint)uVar2 >> 0x10);
  puVar1[0x10] = (char)((uint)uVar2 >> 0x18);
  return unaff_s0 + bStack00000011 + 0x13;
}



short _L0(void)

{
  short unaff_s0;
  undefined *puVar1;
  undefined4 uVar2;
  int unaff_s2;
  int in_stack_0000000c;
  byte in_stack_00000011;
  
  _L0();
  *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
  puVar1 = (undefined *)(in_stack_0000000c + 2 + (uint)in_stack_00000011);
  *puVar1 = 0;
  uVar2 = *(undefined4 *)(unaff_s2 + 0xc);
  puVar1[1] = (char)uVar2;
  puVar1[2] = (char)((uint)uVar2 >> 8);
  puVar1[3] = (char)((uint)uVar2 >> 0x10);
  puVar1[4] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 8);
  puVar1[5] = (char)uVar2;
  puVar1[6] = (char)((uint)uVar2 >> 8);
  puVar1[7] = (char)((uint)uVar2 >> 0x10);
  puVar1[8] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 0x10);
  puVar1[9] = (char)uVar2;
  puVar1[10] = (char)((uint)uVar2 >> 8);
  puVar1[0xb] = (char)((uint)uVar2 >> 0x10);
  puVar1[0xc] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 0x14);
  puVar1[0xd] = (char)uVar2;
  puVar1[0xe] = (char)((uint)uVar2 >> 8);
  puVar1[0xf] = (char)((uint)uVar2 >> 0x10);
  puVar1[0x10] = (char)((uint)uVar2 >> 0x18);
  return unaff_s0 + in_stack_00000011 + 0x13;
}



// WARNING: Variable defined which should be unmapped: wme_ie
// WARNING: Could not reconcile some variable overlaps

uint16_t me_build_probe_rsp(uint32_t frame,uint8_t vif_idx)

{
  char cVar1;
  undefined2 uVar2;
  uint16_t uVar3;
  int iVar4;
  undefined uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined3 in_register_0000202d;
  undefined2 *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  int iVar14;
  uint32_t uStack52;
  undefined2 uStack48;
  undefined uStack46;
  undefined uStack45;
  uint8_t wme_ie [16];
  
  iVar4 = CONCAT31(in_register_0000202d,vif_idx);
  iVar14 = iVar4 * 0x5d8;
  cVar1 = *(char *)(iVar14 + 0x418);
  uVar2 = *(undefined2 *)(iVar14 + 0x412);
  *(char *)(frame + 8) = (char)uVar2;
  *(char *)(frame + 9) = (char)((ushort)uVar2 >> 8);
  uStack52 = frame;
  uVar6 = _LVL508(iVar4);
  if (cVar1 != '\0') {
    uVar6 = uVar6 | 0x10;
  }
  *(char *)(uStack52 + 10) = (char)uVar6;
  *(char *)(uStack52 + 0xb) = (char)(uVar6 >> 8);
  uStack52 = uStack52 + 0xc;
  sVar7 = _L0(&uStack52,*(undefined *)(iVar4 * 0x5d8 + 0x37e),iVar14 + 0x37f);
  sVar8 = FUN_0001105c(&uStack52,iVar14 + 0x3b0);
  sVar7 = sVar7 + sVar8 + 0xc;
  if (8 < *(byte *)(iVar4 * 0x5d8 + 0x3b0)) {
    sVar8 = FUN_0001107a(&uStack52,iVar14 + 0x3b0);
    sVar7 = sVar7 + sVar8;
  }
  puVar11 = *(undefined2 **)(iVar4 * 0x5d8 + 0x3a4);
  uVar5 = FUN_0001109e(*(undefined *)(puVar11 + 1),*puVar11);
  sVar9 = FUN_000110ac(&uStack52,uVar5);
  sVar10 = FUN_000110ba(&uStack52,cVar1);
  sVar8 = FUN_000110ca(&uStack52,0);
  sVar8 = sVar7 + sVar10 + sVar9 + sVar8;
  if ((*(uint *)(iVar4 * 0x5d8 + 0x3e0) & 2) != 0) {
    sVar7 = FUN_000110e6(&uStack52);
    sVar9 = FUN_000110f6(&uStack52,iVar14);
    sVar8 = sVar8 + sVar9 + sVar7;
  }
  sVar7 = FUN_0001110a(&uStack52,cVar1);
  iVar4 = iVar4 * 0x5d8;
  uVar3 = sVar8 + sVar7;
  if ((*(uint *)(iVar4 + 0x3e0) & 1) != 0) {
    FUN_00011134(&uStack46,0,0xe);
    uStack48 = 0x7dd;
    uStack45 = 0x50;
    wme_ie._0_2_ = 0x2f2;
    wme_ie[3] = '\x01';
    wme_ie[4] = *(uint8_t *)(iVar4 + 0x3c0);
    _L0(uStack52,&uStack48,9);
    *(char *)(uStack52 + 1) = *(char *)(uStack52 + 1) + '\x11';
    puVar12 = (undefined *)(uStack52 + 2 + (uint)uStack48._1_1_);
    *puVar12 = 0;
    uVar13 = *(undefined4 *)(iVar4 + 0xc);
    puVar12[1] = (char)uVar13;
    puVar12[2] = (char)((uint)uVar13 >> 8);
    puVar12[3] = (char)((uint)uVar13 >> 0x10);
    puVar12[4] = (char)((uint)uVar13 >> 0x18);
    uVar13 = *(undefined4 *)(iVar4 + 8);
    puVar12[5] = (char)uVar13;
    puVar12[6] = (char)((uint)uVar13 >> 8);
    puVar12[7] = (char)((uint)uVar13 >> 0x10);
    puVar12[8] = (char)((uint)uVar13 >> 0x18);
    uVar13 = *(undefined4 *)(iVar4 + 0x10);
    puVar12[9] = (char)uVar13;
    puVar12[10] = (char)((uint)uVar13 >> 8);
    puVar12[0xb] = (char)((uint)uVar13 >> 0x10);
    puVar12[0xc] = (char)((uint)uVar13 >> 0x18);
    uVar13 = *(undefined4 *)(iVar4 + 0x14);
    puVar12[0xd] = (char)uVar13;
    puVar12[0xe] = (char)((uint)uVar13 >> 8);
    puVar12[0xf] = (char)((uint)uVar13 >> 0x10);
    puVar12[0x10] = (char)((uint)uVar13 >> 0x18);
    uVar3 = uVar3 + uStack48._1_1_ + 0x13;
  }
  return uVar3;
}



short _LVL508(void)

{
  int unaff_s1;
  undefined uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined2 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int iVar10;
  int iVar11;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  uVar2 = _LVL508();
  if (unaff_s3 != 0) {
    uVar2 = uVar2 | 0x10;
  }
  *(char *)(in_stack_0000000c + 10) = (char)uVar2;
  *(char *)(in_stack_0000000c + 0xb) = (char)(uVar2 >> 8);
  iVar10 = unaff_s1 * 0x5d8 + unaff_s2;
  in_stack_0000000c = in_stack_0000000c + 0xc;
  iVar11 = unaff_s4 + 0x3b0 + unaff_s2;
  sVar3 = _L0(&stack0x0000000c,*(undefined *)(iVar10 + 0x37e),unaff_s4 + 0x37f + unaff_s2);
  sVar4 = FUN_0001105c(&stack0x0000000c,iVar11);
  sVar3 = sVar3 + sVar4 + 0xc;
  if (8 < *(byte *)(iVar10 + 0x3b0)) {
    sVar4 = FUN_0001107a(&stack0x0000000c,iVar11);
    sVar3 = sVar3 + sVar4;
  }
  iVar10 = unaff_s1 * 0x5d8 + unaff_s2;
  puVar7 = *(undefined2 **)(iVar10 + 0x3a4);
  uVar1 = FUN_0001109e(*(undefined *)(puVar7 + 1),*puVar7);
  sVar5 = FUN_000110ac(&stack0x0000000c,uVar1);
  sVar6 = FUN_000110ba(&stack0x0000000c);
  sVar4 = FUN_000110ca(&stack0x0000000c,0);
  sVar4 = sVar3 + sVar6 + sVar5 + sVar4;
  if ((*(uint *)(iVar10 + 0x3e0) & 2) != 0) {
    sVar3 = FUN_000110e6(&stack0x0000000c);
    sVar5 = FUN_000110f6(&stack0x0000000c,unaff_s2 + unaff_s4);
    sVar4 = sVar4 + sVar5 + sVar3;
  }
  sVar3 = FUN_0001110a(&stack0x0000000c);
  sVar4 = sVar4 + sVar3;
  iVar10 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar10 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar10 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar8 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar8 = 0;
    uVar9 = *(undefined4 *)(iVar10 + 0xc);
    puVar8[1] = (char)uVar9;
    puVar8[2] = (char)((uint)uVar9 >> 8);
    puVar8[3] = (char)((uint)uVar9 >> 0x10);
    puVar8[4] = (char)((uint)uVar9 >> 0x18);
    uVar9 = *(undefined4 *)(iVar10 + 8);
    puVar8[5] = (char)uVar9;
    puVar8[6] = (char)((uint)uVar9 >> 8);
    puVar8[7] = (char)((uint)uVar9 >> 0x10);
    puVar8[8] = (char)((uint)uVar9 >> 0x18);
    uVar9 = *(undefined4 *)(iVar10 + 0x10);
    puVar8[9] = (char)uVar9;
    puVar8[10] = (char)((uint)uVar9 >> 8);
    puVar8[0xb] = (char)((uint)uVar9 >> 0x10);
    puVar8[0xc] = (char)((uint)uVar9 >> 0x18);
    uVar9 = *(undefined4 *)(iVar10 + 0x14);
    puVar8[0xd] = (char)uVar9;
    puVar8[0xe] = (char)((uint)uVar9 >> 8);
    puVar8[0xf] = (char)((uint)uVar9 >> 0x10);
    puVar8[0x10] = (char)((uint)uVar9 >> 0x18);
    sVar4 = sVar4 + bStack00000011 + 0x13;
  }
  return sVar4;
}



short _L0(void)

{
  int unaff_s1;
  undefined uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int iVar9;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar2 = _L0();
  sVar3 = FUN_0001105c(&stack0x0000000c);
  sVar2 = sVar2 + sVar3 + 0xc;
  if (8 < *(byte *)(unaff_s5 + 0x3b0)) {
    sVar3 = FUN_0001107a(&stack0x0000000c);
    sVar2 = sVar2 + sVar3;
  }
  iVar9 = unaff_s1 * 0x5d8 + unaff_s2;
  puVar6 = *(undefined2 **)(iVar9 + 0x3a4);
  uVar1 = FUN_0001109e(*(undefined *)(puVar6 + 1),*puVar6);
  sVar4 = FUN_000110ac(&stack0x0000000c,uVar1);
  sVar5 = FUN_000110ba(&stack0x0000000c);
  sVar3 = FUN_000110ca(&stack0x0000000c,0);
  sVar3 = sVar2 + sVar5 + sVar4 + sVar3;
  if ((*(uint *)(iVar9 + 0x3e0) & 2) != 0) {
    sVar2 = FUN_000110e6(&stack0x0000000c);
    sVar4 = FUN_000110f6(&stack0x0000000c,unaff_s2 + unaff_s4);
    sVar3 = sVar3 + sVar4 + sVar2;
  }
  sVar2 = FUN_0001110a(&stack0x0000000c);
  sVar3 = sVar3 + sVar2;
  iVar9 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar9 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar9 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar7 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar7 = 0;
    uVar8 = *(undefined4 *)(iVar9 + 0xc);
    puVar7[1] = (char)uVar8;
    puVar7[2] = (char)((uint)uVar8 >> 8);
    puVar7[3] = (char)((uint)uVar8 >> 0x10);
    puVar7[4] = (char)((uint)uVar8 >> 0x18);
    uVar8 = *(undefined4 *)(iVar9 + 8);
    puVar7[5] = (char)uVar8;
    puVar7[6] = (char)((uint)uVar8 >> 8);
    puVar7[7] = (char)((uint)uVar8 >> 0x10);
    puVar7[8] = (char)((uint)uVar8 >> 0x18);
    uVar8 = *(undefined4 *)(iVar9 + 0x10);
    puVar7[9] = (char)uVar8;
    puVar7[10] = (char)((uint)uVar8 >> 8);
    puVar7[0xb] = (char)((uint)uVar8 >> 0x10);
    puVar7[0xc] = (char)((uint)uVar8 >> 0x18);
    uVar8 = *(undefined4 *)(iVar9 + 0x14);
    puVar7[0xd] = (char)uVar8;
    puVar7[0xe] = (char)((uint)uVar8 >> 8);
    puVar7[0xf] = (char)((uint)uVar8 >> 0x10);
    puVar7[0x10] = (char)((uint)uVar8 >> 0x18);
    sVar3 = sVar3 + bStack00000011 + 0x13;
  }
  return sVar3;
}



short FUN_0001105c(void)

{
  short unaff_s0;
  int unaff_s1;
  undefined uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int iVar9;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar2 = FUN_0001105c();
  sVar2 = unaff_s0 + sVar2 + 0xc;
  if (8 < *(byte *)(unaff_s5 + 0x3b0)) {
    sVar3 = FUN_0001107a(&stack0x0000000c);
    sVar2 = sVar2 + sVar3;
  }
  iVar9 = unaff_s1 * 0x5d8 + unaff_s2;
  puVar6 = *(undefined2 **)(iVar9 + 0x3a4);
  uVar1 = FUN_0001109e(*(undefined *)(puVar6 + 1),*puVar6);
  sVar4 = FUN_000110ac(&stack0x0000000c,uVar1);
  sVar5 = FUN_000110ba(&stack0x0000000c);
  sVar3 = FUN_000110ca(&stack0x0000000c,0);
  sVar3 = sVar2 + sVar5 + sVar4 + sVar3;
  if ((*(uint *)(iVar9 + 0x3e0) & 2) != 0) {
    sVar2 = FUN_000110e6(&stack0x0000000c);
    sVar4 = FUN_000110f6(&stack0x0000000c,unaff_s2 + unaff_s4);
    sVar3 = sVar3 + sVar4 + sVar2;
  }
  sVar2 = FUN_0001110a(&stack0x0000000c);
  sVar3 = sVar3 + sVar2;
  iVar9 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar9 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar9 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar7 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar7 = 0;
    uVar8 = *(undefined4 *)(iVar9 + 0xc);
    puVar7[1] = (char)uVar8;
    puVar7[2] = (char)((uint)uVar8 >> 8);
    puVar7[3] = (char)((uint)uVar8 >> 0x10);
    puVar7[4] = (char)((uint)uVar8 >> 0x18);
    uVar8 = *(undefined4 *)(iVar9 + 8);
    puVar7[5] = (char)uVar8;
    puVar7[6] = (char)((uint)uVar8 >> 8);
    puVar7[7] = (char)((uint)uVar8 >> 0x10);
    puVar7[8] = (char)((uint)uVar8 >> 0x18);
    uVar8 = *(undefined4 *)(iVar9 + 0x10);
    puVar7[9] = (char)uVar8;
    puVar7[10] = (char)((uint)uVar8 >> 8);
    puVar7[0xb] = (char)((uint)uVar8 >> 0x10);
    puVar7[0xc] = (char)((uint)uVar8 >> 0x18);
    uVar8 = *(undefined4 *)(iVar9 + 0x14);
    puVar7[0xd] = (char)uVar8;
    puVar7[0xe] = (char)((uint)uVar8 >> 8);
    puVar7[0xf] = (char)((uint)uVar8 >> 0x10);
    puVar7[0x10] = (char)((uint)uVar8 >> 0x18);
    sVar3 = sVar3 + bStack00000011 + 0x13;
  }
  return sVar3;
}



short FUN_0001107a(void)

{
  short unaff_s0;
  int unaff_s1;
  undefined uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int unaff_s2;
  int unaff_s4;
  int iVar9;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar2 = FUN_0001107a();
  iVar9 = unaff_s1 * 0x5d8 + unaff_s2;
  puVar6 = *(undefined2 **)(iVar9 + 0x3a4);
  uVar1 = FUN_0001109e(*(undefined *)(puVar6 + 1),*puVar6);
  sVar3 = FUN_000110ac(&stack0x0000000c,uVar1);
  sVar4 = FUN_000110ba(&stack0x0000000c);
  sVar5 = FUN_000110ca(&stack0x0000000c,0);
  sVar5 = unaff_s0 + sVar2 + sVar4 + sVar3 + sVar5;
  if ((*(uint *)(iVar9 + 0x3e0) & 2) != 0) {
    sVar2 = FUN_000110e6(&stack0x0000000c);
    sVar3 = FUN_000110f6(&stack0x0000000c,unaff_s2 + unaff_s4);
    sVar5 = sVar5 + sVar3 + sVar2;
  }
  sVar2 = FUN_0001110a(&stack0x0000000c);
  sVar5 = sVar5 + sVar2;
  iVar9 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar9 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar9 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar7 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar7 = 0;
    uVar8 = *(undefined4 *)(iVar9 + 0xc);
    puVar7[1] = (char)uVar8;
    puVar7[2] = (char)((uint)uVar8 >> 8);
    puVar7[3] = (char)((uint)uVar8 >> 0x10);
    puVar7[4] = (char)((uint)uVar8 >> 0x18);
    uVar8 = *(undefined4 *)(iVar9 + 8);
    puVar7[5] = (char)uVar8;
    puVar7[6] = (char)((uint)uVar8 >> 8);
    puVar7[7] = (char)((uint)uVar8 >> 0x10);
    puVar7[8] = (char)((uint)uVar8 >> 0x18);
    uVar8 = *(undefined4 *)(iVar9 + 0x10);
    puVar7[9] = (char)uVar8;
    puVar7[10] = (char)((uint)uVar8 >> 8);
    puVar7[0xb] = (char)((uint)uVar8 >> 0x10);
    puVar7[0xc] = (char)((uint)uVar8 >> 0x18);
    uVar8 = *(undefined4 *)(iVar9 + 0x14);
    puVar7[0xd] = (char)uVar8;
    puVar7[0xe] = (char)((uint)uVar8 >> 8);
    puVar7[0xf] = (char)((uint)uVar8 >> 0x10);
    puVar7[0x10] = (char)((uint)uVar8 >> 0x18);
    sVar5 = sVar5 + bStack00000011 + 0x13;
  }
  return sVar5;
}



short FUN_0001109e(void)

{
  short unaff_s0;
  int unaff_s1;
  undefined uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int unaff_s2;
  int iVar7;
  int unaff_s4;
  int unaff_s5;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  uVar1 = FUN_0001109e();
  sVar2 = FUN_000110ac(&stack0x0000000c,uVar1);
  sVar3 = FUN_000110ba(&stack0x0000000c);
  sVar4 = FUN_000110ca(&stack0x0000000c,0);
  sVar4 = unaff_s0 + sVar3 + sVar2 + sVar4;
  if ((*(uint *)(unaff_s5 + 0x3e0) & 2) != 0) {
    sVar2 = FUN_000110e6(&stack0x0000000c);
    sVar3 = FUN_000110f6(&stack0x0000000c,unaff_s2 + unaff_s4);
    sVar4 = sVar4 + sVar3 + sVar2;
  }
  sVar2 = FUN_0001110a(&stack0x0000000c);
  sVar4 = sVar4 + sVar2;
  iVar7 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar7 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar7 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar5 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar5 = 0;
    uVar6 = *(undefined4 *)(iVar7 + 0xc);
    puVar5[1] = (char)uVar6;
    puVar5[2] = (char)((uint)uVar6 >> 8);
    puVar5[3] = (char)((uint)uVar6 >> 0x10);
    puVar5[4] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar7 + 8);
    puVar5[5] = (char)uVar6;
    puVar5[6] = (char)((uint)uVar6 >> 8);
    puVar5[7] = (char)((uint)uVar6 >> 0x10);
    puVar5[8] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar7 + 0x10);
    puVar5[9] = (char)uVar6;
    puVar5[10] = (char)((uint)uVar6 >> 8);
    puVar5[0xb] = (char)((uint)uVar6 >> 0x10);
    puVar5[0xc] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar7 + 0x14);
    puVar5[0xd] = (char)uVar6;
    puVar5[0xe] = (char)((uint)uVar6 >> 8);
    puVar5[0xf] = (char)((uint)uVar6 >> 0x10);
    puVar5[0x10] = (char)((uint)uVar6 >> 0x18);
    sVar4 = sVar4 + bStack00000011 + 0x13;
  }
  return sVar4;
}



short FUN_000110ac(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_s2;
  int iVar6;
  int unaff_s4;
  int unaff_s5;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar1 = FUN_000110ac();
  sVar2 = FUN_000110ba(&stack0x0000000c);
  sVar3 = FUN_000110ca(&stack0x0000000c,0);
  sVar3 = unaff_s0 + sVar2 + sVar1 + sVar3;
  if ((*(uint *)(unaff_s5 + 0x3e0) & 2) != 0) {
    sVar1 = FUN_000110e6(&stack0x0000000c);
    sVar2 = FUN_000110f6(&stack0x0000000c,unaff_s2 + unaff_s4);
    sVar3 = sVar3 + sVar2 + sVar1;
  }
  sVar1 = FUN_0001110a(&stack0x0000000c);
  sVar3 = sVar3 + sVar1;
  iVar6 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar6 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar6 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar4 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar4 = 0;
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
    puVar4[1] = (char)uVar5;
    puVar4[2] = (char)((uint)uVar5 >> 8);
    puVar4[3] = (char)((uint)uVar5 >> 0x10);
    puVar4[4] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 8);
    puVar4[5] = (char)uVar5;
    puVar4[6] = (char)((uint)uVar5 >> 8);
    puVar4[7] = (char)((uint)uVar5 >> 0x10);
    puVar4[8] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x10);
    puVar4[9] = (char)uVar5;
    puVar4[10] = (char)((uint)uVar5 >> 8);
    puVar4[0xb] = (char)((uint)uVar5 >> 0x10);
    puVar4[0xc] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x14);
    puVar4[0xd] = (char)uVar5;
    puVar4[0xe] = (char)((uint)uVar5 >> 8);
    puVar4[0xf] = (char)((uint)uVar5 >> 0x10);
    puVar4[0x10] = (char)((uint)uVar5 >> 0x18);
    sVar3 = sVar3 + bStack00000011 + 0x13;
  }
  return sVar3;
}



short FUN_000110ba(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_s2;
  int iVar6;
  int unaff_s4;
  int unaff_s5;
  short unaff_s6;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar1 = FUN_000110ba();
  sVar2 = FUN_000110ca(&stack0x0000000c,0);
  sVar2 = unaff_s0 + sVar1 + unaff_s6 + sVar2;
  if ((*(uint *)(unaff_s5 + 0x3e0) & 2) != 0) {
    sVar1 = FUN_000110e6(&stack0x0000000c);
    sVar3 = FUN_000110f6(&stack0x0000000c,unaff_s2 + unaff_s4);
    sVar2 = sVar2 + sVar3 + sVar1;
  }
  sVar1 = FUN_0001110a(&stack0x0000000c);
  sVar2 = sVar2 + sVar1;
  iVar6 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar6 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar6 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar4 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar4 = 0;
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
    puVar4[1] = (char)uVar5;
    puVar4[2] = (char)((uint)uVar5 >> 8);
    puVar4[3] = (char)((uint)uVar5 >> 0x10);
    puVar4[4] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 8);
    puVar4[5] = (char)uVar5;
    puVar4[6] = (char)((uint)uVar5 >> 8);
    puVar4[7] = (char)((uint)uVar5 >> 0x10);
    puVar4[8] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x10);
    puVar4[9] = (char)uVar5;
    puVar4[10] = (char)((uint)uVar5 >> 8);
    puVar4[0xb] = (char)((uint)uVar5 >> 0x10);
    puVar4[0xc] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x14);
    puVar4[0xd] = (char)uVar5;
    puVar4[0xe] = (char)((uint)uVar5 >> 8);
    puVar4[0xf] = (char)((uint)uVar5 >> 0x10);
    puVar4[0x10] = (char)((uint)uVar5 >> 0x18);
    sVar2 = sVar2 + bStack00000011 + 0x13;
  }
  return sVar2;
}



short FUN_000110ca(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_s2;
  int iVar6;
  int unaff_s4;
  int unaff_s5;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar1 = FUN_000110ca();
  sVar1 = unaff_s0 + sVar1;
  if ((*(uint *)(unaff_s5 + 0x3e0) & 2) != 0) {
    sVar2 = FUN_000110e6(&stack0x0000000c);
    sVar3 = FUN_000110f6(&stack0x0000000c,unaff_s2 + unaff_s4);
    sVar1 = sVar1 + sVar3 + sVar2;
  }
  sVar2 = FUN_0001110a(&stack0x0000000c);
  sVar1 = sVar1 + sVar2;
  iVar6 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar6 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar6 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar4 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar4 = 0;
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
    puVar4[1] = (char)uVar5;
    puVar4[2] = (char)((uint)uVar5 >> 8);
    puVar4[3] = (char)((uint)uVar5 >> 0x10);
    puVar4[4] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 8);
    puVar4[5] = (char)uVar5;
    puVar4[6] = (char)((uint)uVar5 >> 8);
    puVar4[7] = (char)((uint)uVar5 >> 0x10);
    puVar4[8] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x10);
    puVar4[9] = (char)uVar5;
    puVar4[10] = (char)((uint)uVar5 >> 8);
    puVar4[0xb] = (char)((uint)uVar5 >> 0x10);
    puVar4[0xc] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x14);
    puVar4[0xd] = (char)uVar5;
    puVar4[0xe] = (char)((uint)uVar5 >> 8);
    puVar4[0xf] = (char)((uint)uVar5 >> 0x10);
    puVar4[0x10] = (char)((uint)uVar5 >> 0x18);
    sVar1 = sVar1 + bStack00000011 + 0x13;
  }
  return sVar1;
}



short FUN_000110e6(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_s2;
  int iVar6;
  int unaff_s4;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar1 = FUN_000110e6();
  sVar2 = FUN_000110f6(&stack0x0000000c,unaff_s2 + unaff_s4);
  sVar3 = FUN_0001110a(&stack0x0000000c);
  sVar3 = unaff_s0 + sVar2 + sVar1 + sVar3;
  iVar6 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar6 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar6 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar4 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar4 = 0;
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
    puVar4[1] = (char)uVar5;
    puVar4[2] = (char)((uint)uVar5 >> 8);
    puVar4[3] = (char)((uint)uVar5 >> 0x10);
    puVar4[4] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 8);
    puVar4[5] = (char)uVar5;
    puVar4[6] = (char)((uint)uVar5 >> 8);
    puVar4[7] = (char)((uint)uVar5 >> 0x10);
    puVar4[8] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x10);
    puVar4[9] = (char)uVar5;
    puVar4[10] = (char)((uint)uVar5 >> 8);
    puVar4[0xb] = (char)((uint)uVar5 >> 0x10);
    puVar4[0xc] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x14);
    puVar4[0xd] = (char)uVar5;
    puVar4[0xe] = (char)((uint)uVar5 >> 8);
    puVar4[0xf] = (char)((uint)uVar5 >> 0x10);
    puVar4[0x10] = (char)((uint)uVar5 >> 0x18);
    sVar3 = sVar3 + bStack00000011 + 0x13;
  }
  return sVar3;
}



short FUN_000110f6(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int unaff_s2;
  int iVar5;
  short unaff_s5;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar1 = FUN_000110f6();
  sVar2 = FUN_0001110a(&stack0x0000000c);
  sVar2 = unaff_s0 + sVar1 + unaff_s5 + sVar2;
  iVar5 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar5 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar5 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar3 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar3 = 0;
    uVar4 = *(undefined4 *)(iVar5 + 0xc);
    puVar3[1] = (char)uVar4;
    puVar3[2] = (char)((uint)uVar4 >> 8);
    puVar3[3] = (char)((uint)uVar4 >> 0x10);
    puVar3[4] = (char)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)(iVar5 + 8);
    puVar3[5] = (char)uVar4;
    puVar3[6] = (char)((uint)uVar4 >> 8);
    puVar3[7] = (char)((uint)uVar4 >> 0x10);
    puVar3[8] = (char)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)(iVar5 + 0x10);
    puVar3[9] = (char)uVar4;
    puVar3[10] = (char)((uint)uVar4 >> 8);
    puVar3[0xb] = (char)((uint)uVar4 >> 0x10);
    puVar3[0xc] = (char)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)(iVar5 + 0x14);
    puVar3[0xd] = (char)uVar4;
    puVar3[0xe] = (char)((uint)uVar4 >> 8);
    puVar3[0xf] = (char)((uint)uVar4 >> 0x10);
    puVar3[0x10] = (char)((uint)uVar4 >> 0x18);
    sVar2 = sVar2 + bStack00000011 + 0x13;
  }
  return sVar2;
}



short FUN_0001110a(void)

{
  short unaff_s0;
  int unaff_s1;
  short sVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int unaff_s2;
  int iVar4;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar1 = FUN_0001110a();
  sVar1 = unaff_s0 + sVar1;
  iVar4 = unaff_s2 + unaff_s1 * 0x5d8;
  if ((*(uint *)(iVar4 + 0x3e0) & 1) != 0) {
    FUN_00011134(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar4 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar2 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar2 = 0;
    uVar3 = *(undefined4 *)(iVar4 + 0xc);
    puVar2[1] = (char)uVar3;
    puVar2[2] = (char)((uint)uVar3 >> 8);
    puVar2[3] = (char)((uint)uVar3 >> 0x10);
    puVar2[4] = (char)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)(iVar4 + 8);
    puVar2[5] = (char)uVar3;
    puVar2[6] = (char)((uint)uVar3 >> 8);
    puVar2[7] = (char)((uint)uVar3 >> 0x10);
    puVar2[8] = (char)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)(iVar4 + 0x10);
    puVar2[9] = (char)uVar3;
    puVar2[10] = (char)((uint)uVar3 >> 8);
    puVar2[0xb] = (char)((uint)uVar3 >> 0x10);
    puVar2[0xc] = (char)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)(iVar4 + 0x14);
    puVar2[0xd] = (char)uVar3;
    puVar2[0xe] = (char)((uint)uVar3 >> 8);
    puVar2[0xf] = (char)((uint)uVar3 >> 0x10);
    puVar2[0x10] = (char)((uint)uVar3 >> 0x18);
    sVar1 = sVar1 + bStack00000011 + 0x13;
  }
  return sVar1;
}



short FUN_00011134(void)

{
  short unaff_s0;
  undefined *puVar1;
  undefined4 uVar2;
  int unaff_s2;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  FUN_00011134();
  uStack00000010 = 0x7dd;
  uStack00000013 = 0x50;
  uStack00000014 = 0x2f2;
  uStack00000017 = 1;
  uStack00000018 = *(undefined *)(unaff_s2 + 0x3c0);
  _L0(in_stack_0000000c,&stack0x00000010,9);
  *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
  puVar1 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
  *puVar1 = 0;
  uVar2 = *(undefined4 *)(unaff_s2 + 0xc);
  puVar1[1] = (char)uVar2;
  puVar1[2] = (char)((uint)uVar2 >> 8);
  puVar1[3] = (char)((uint)uVar2 >> 0x10);
  puVar1[4] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 8);
  puVar1[5] = (char)uVar2;
  puVar1[6] = (char)((uint)uVar2 >> 8);
  puVar1[7] = (char)((uint)uVar2 >> 0x10);
  puVar1[8] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 0x10);
  puVar1[9] = (char)uVar2;
  puVar1[10] = (char)((uint)uVar2 >> 8);
  puVar1[0xb] = (char)((uint)uVar2 >> 0x10);
  puVar1[0xc] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 0x14);
  puVar1[0xd] = (char)uVar2;
  puVar1[0xe] = (char)((uint)uVar2 >> 8);
  puVar1[0xf] = (char)((uint)uVar2 >> 0x10);
  puVar1[0x10] = (char)((uint)uVar2 >> 0x18);
  return unaff_s0 + bStack00000011 + 0x13;
}



short _L0(void)

{
  short unaff_s0;
  undefined *puVar1;
  undefined4 uVar2;
  int unaff_s2;
  int in_stack_0000000c;
  byte in_stack_00000011;
  
  _L0();
  *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
  puVar1 = (undefined *)(in_stack_0000000c + 2 + (uint)in_stack_00000011);
  *puVar1 = 0;
  uVar2 = *(undefined4 *)(unaff_s2 + 0xc);
  puVar1[1] = (char)uVar2;
  puVar1[2] = (char)((uint)uVar2 >> 8);
  puVar1[3] = (char)((uint)uVar2 >> 0x10);
  puVar1[4] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 8);
  puVar1[5] = (char)uVar2;
  puVar1[6] = (char)((uint)uVar2 >> 8);
  puVar1[7] = (char)((uint)uVar2 >> 0x10);
  puVar1[8] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 0x10);
  puVar1[9] = (char)uVar2;
  puVar1[10] = (char)((uint)uVar2 >> 8);
  puVar1[0xb] = (char)((uint)uVar2 >> 0x10);
  puVar1[0xc] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s2 + 0x14);
  puVar1[0xd] = (char)uVar2;
  puVar1[0xe] = (char)((uint)uVar2 >> 8);
  puVar1[0xf] = (char)((uint)uVar2 >> 0x10);
  puVar1[0x10] = (char)((uint)uVar2 >> 0x18);
  return unaff_s0 + in_stack_00000011 + 0x13;
}



// WARNING: Could not reconcile some variable overlaps

uint16_t me_build_associate_rsp
                   (uint32_t frame,uint8_t vif_idx,uint16_t status_code,me_sta_add_req *req)

{
  char cVar1;
  uint16_t uVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined3 in_register_0000202d;
  undefined2 in_register_00002032;
  undefined4 uVar7;
  undefined *puStack52;
  undefined2 uStack48;
  undefined uStack46;
  undefined uStack45;
  uint8_t wme_ie [16];
  
  iVar3 = CONCAT31(in_register_0000202d,vif_idx);
  cVar1 = *(char *)(iVar3 * 0x5d8 + 0x418);
  puStack52 = (undefined *)frame;
  uVar4 = _L0(iVar3);
  if (cVar1 != '\0') {
    uVar4 = uVar4 | 0x10;
  }
  *puStack52 = (char)uVar4;
  puStack52[1] = (char)(uVar4 >> 8);
  uVar2 = 6;
  puStack52[2] = (char)status_code;
  puStack52[3] = (char)(status_code >> 8);
  uVar4 = req->aid;
  puStack52[4] = (char)uVar4;
  puStack52[5] = (byte)((uint)uVar4 >> 8) | 0xc0;
  puStack52 = puStack52 + 6;
  if (CONCAT22(in_register_00002032,status_code) == 0) {
    sVar5 = FUN_000112c8(&puStack52,&req->rate_set);
    uVar2 = sVar5 + 6;
    if (8 < (req->rate_set).length) {
      sVar5 = FUN_000112e6(&puStack52,&req->rate_set);
      uVar2 = uVar2 + sVar5;
    }
    if ((req->flags & 2) != 0) {
      sVar5 = FUN_000112fe(&puStack52);
      sVar6 = FUN_00011314(&puStack52,iVar3 * 0x5d8);
      uVar2 = uVar2 + sVar6 + sVar5;
    }
    if ((req->flags & 1) != 0) {
      iVar3 = iVar3 * 0x5d8;
      FUN_0001133e(&uStack46,0,0xe);
      uStack48 = 0x7dd;
      uStack45 = 0x50;
      wme_ie._0_2_ = 0x2f2;
      wme_ie[3] = '\x01';
      wme_ie[4] = *(uint8_t *)(iVar3 + 0x3c0);
      _L0(puStack52,&uStack48,9);
      puStack52[1] = puStack52[1] + '\x11';
      puStack52 = puStack52 + uStack48._1_1_ + 2;
      *puStack52 = 0;
      uVar7 = *(undefined4 *)(iVar3 + 0xc);
      puStack52[1] = (char)uVar7;
      puStack52[2] = (char)((uint)uVar7 >> 8);
      puStack52[3] = (char)((uint)uVar7 >> 0x10);
      puStack52[4] = (char)((uint)uVar7 >> 0x18);
      uVar7 = *(undefined4 *)(iVar3 + 8);
      puStack52[5] = (char)uVar7;
      puStack52[6] = (char)((uint)uVar7 >> 8);
      puStack52[7] = (char)((uint)uVar7 >> 0x10);
      puStack52[8] = (char)((uint)uVar7 >> 0x18);
      uVar7 = *(undefined4 *)(iVar3 + 0x10);
      puStack52[9] = (char)uVar7;
      puStack52[10] = (char)((uint)uVar7 >> 8);
      puStack52[0xb] = (char)((uint)uVar7 >> 0x10);
      puStack52[0xc] = (char)((uint)uVar7 >> 0x18);
      uVar7 = *(undefined4 *)(iVar3 + 0x14);
      puStack52[0xd] = (char)uVar7;
      puStack52[0xe] = (char)((uint)uVar7 >> 8);
      puStack52[0xf] = (char)((uint)uVar7 >> 0x10);
      puStack52[0x10] = (char)((uint)uVar7 >> 0x18);
      uVar2 = uVar2 + uStack48._1_1_ + 0x13;
    }
  }
  return uVar2;
}



short _L0(void)

{
  int unaff_s0;
  int iVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int in_stack_00000008;
  undefined *in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  uVar2 = _L0();
  if (unaff_s0 != 0) {
    uVar2 = uVar2 | 0x10;
  }
  *in_stack_0000000c = (char)uVar2;
  in_stack_0000000c[1] = (char)(uVar2 >> 8);
  sVar3 = 6;
  in_stack_0000000c[2] = (char)in_stack_00000008;
  in_stack_0000000c[3] = (char)((uint)in_stack_00000008 >> 8);
  uVar2 = *(ushort *)(unaff_s4 + 0x44);
  in_stack_0000000c[4] = (char)uVar2;
  in_stack_0000000c[5] = (byte)((uint)uVar2 >> 8) | 0xc0;
  in_stack_0000000c = in_stack_0000000c + 6;
  if (in_stack_00000008 == 0) {
    sVar3 = FUN_000112c8(&stack0x0000000c,unaff_s4 + 6);
    sVar3 = sVar3 + 6;
    if (8 < *(byte *)(unaff_s4 + 6)) {
      sVar4 = FUN_000112e6(&stack0x0000000c,unaff_s4 + 6);
      sVar3 = sVar3 + sVar4;
    }
    if ((*(uint *)(unaff_s4 + 0x40) & 2) != 0) {
      sVar4 = FUN_000112fe(&stack0x0000000c);
      sVar5 = FUN_00011314(&stack0x0000000c,unaff_s2 * 0x5d8 + unaff_s3);
      sVar3 = sVar3 + sVar5 + sVar4;
    }
    if ((*(uint *)(unaff_s4 + 0x40) & 1) != 0) {
      FUN_0001133e(&stack0x00000012,0,0xe);
      uStack00000010 = 0x7dd;
      uStack00000013 = 0x50;
      iVar1 = unaff_s2 * 0x5d8 + unaff_s3;
      uStack00000014 = 0x2f2;
      uStack00000017 = 1;
      uStack00000018 = *(undefined *)(iVar1 + 0x3c0);
      _L0(in_stack_0000000c,&stack0x00000010,9);
      in_stack_0000000c[1] = in_stack_0000000c[1] + '\x11';
      in_stack_0000000c = in_stack_0000000c + bStack00000011 + 2;
      *in_stack_0000000c = 0;
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      in_stack_0000000c[1] = (char)uVar6;
      in_stack_0000000c[2] = (char)((uint)uVar6 >> 8);
      in_stack_0000000c[3] = (char)((uint)uVar6 >> 0x10);
      in_stack_0000000c[4] = (char)((uint)uVar6 >> 0x18);
      uVar6 = *(undefined4 *)(iVar1 + 8);
      in_stack_0000000c[5] = (char)uVar6;
      in_stack_0000000c[6] = (char)((uint)uVar6 >> 8);
      in_stack_0000000c[7] = (char)((uint)uVar6 >> 0x10);
      in_stack_0000000c[8] = (char)((uint)uVar6 >> 0x18);
      uVar6 = *(undefined4 *)(iVar1 + 0x10);
      in_stack_0000000c[9] = (char)uVar6;
      in_stack_0000000c[10] = (char)((uint)uVar6 >> 8);
      in_stack_0000000c[0xb] = (char)((uint)uVar6 >> 0x10);
      in_stack_0000000c[0xc] = (char)((uint)uVar6 >> 0x18);
      uVar6 = *(undefined4 *)(iVar1 + 0x14);
      in_stack_0000000c[0xd] = (char)uVar6;
      in_stack_0000000c[0xe] = (char)((uint)uVar6 >> 8);
      in_stack_0000000c[0xf] = (char)((uint)uVar6 >> 0x10);
      in_stack_0000000c[0x10] = (char)((uint)uVar6 >> 0x18);
      sVar3 = sVar3 + bStack00000011 + 0x13;
    }
  }
  return sVar3;
}



short FUN_000112c8(void)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar2 = FUN_000112c8();
  sVar2 = sVar2 + 6;
  if (8 < *(byte *)(unaff_s4 + 6)) {
    sVar3 = FUN_000112e6(&stack0x0000000c);
    sVar2 = sVar2 + sVar3;
  }
  if ((*(uint *)(unaff_s4 + 0x40) & 2) != 0) {
    sVar3 = FUN_000112fe(&stack0x0000000c);
    sVar4 = FUN_00011314(&stack0x0000000c,unaff_s2 * 0x5d8 + unaff_s3);
    sVar2 = sVar2 + sVar4 + sVar3;
  }
  if ((*(uint *)(unaff_s4 + 0x40) & 1) != 0) {
    FUN_0001133e(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    iVar1 = unaff_s2 * 0x5d8 + unaff_s3;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar1 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar5 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar5 = 0;
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    puVar5[1] = (char)uVar6;
    puVar5[2] = (char)((uint)uVar6 >> 8);
    puVar5[3] = (char)((uint)uVar6 >> 0x10);
    puVar5[4] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    puVar5[5] = (char)uVar6;
    puVar5[6] = (char)((uint)uVar6 >> 8);
    puVar5[7] = (char)((uint)uVar6 >> 0x10);
    puVar5[8] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar1 + 0x10);
    puVar5[9] = (char)uVar6;
    puVar5[10] = (char)((uint)uVar6 >> 8);
    puVar5[0xb] = (char)((uint)uVar6 >> 0x10);
    puVar5[0xc] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar1 + 0x14);
    puVar5[0xd] = (char)uVar6;
    puVar5[0xe] = (char)((uint)uVar6 >> 8);
    puVar5[0xf] = (char)((uint)uVar6 >> 0x10);
    puVar5[0x10] = (char)((uint)uVar6 >> 0x18);
    sVar2 = sVar2 + bStack00000011 + 0x13;
  }
  return sVar2;
}



short FUN_000112e6(void)

{
  short unaff_s0;
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar2 = FUN_000112e6();
  sVar2 = unaff_s0 + sVar2;
  if ((*(uint *)(unaff_s4 + 0x40) & 2) != 0) {
    sVar3 = FUN_000112fe(&stack0x0000000c);
    sVar4 = FUN_00011314(&stack0x0000000c,unaff_s2 * 0x5d8 + unaff_s3);
    sVar2 = sVar2 + sVar4 + sVar3;
  }
  if ((*(uint *)(unaff_s4 + 0x40) & 1) != 0) {
    FUN_0001133e(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    iVar1 = unaff_s2 * 0x5d8 + unaff_s3;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar1 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar5 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar5 = 0;
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    puVar5[1] = (char)uVar6;
    puVar5[2] = (char)((uint)uVar6 >> 8);
    puVar5[3] = (char)((uint)uVar6 >> 0x10);
    puVar5[4] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    puVar5[5] = (char)uVar6;
    puVar5[6] = (char)((uint)uVar6 >> 8);
    puVar5[7] = (char)((uint)uVar6 >> 0x10);
    puVar5[8] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar1 + 0x10);
    puVar5[9] = (char)uVar6;
    puVar5[10] = (char)((uint)uVar6 >> 8);
    puVar5[0xb] = (char)((uint)uVar6 >> 0x10);
    puVar5[0xc] = (char)((uint)uVar6 >> 0x18);
    uVar6 = *(undefined4 *)(iVar1 + 0x14);
    puVar5[0xd] = (char)uVar6;
    puVar5[0xe] = (char)((uint)uVar6 >> 8);
    puVar5[0xf] = (char)((uint)uVar6 >> 0x10);
    puVar5[0x10] = (char)((uint)uVar6 >> 0x18);
    sVar2 = sVar2 + bStack00000011 + 0x13;
  }
  return sVar2;
}



short FUN_000112fe(void)

{
  short unaff_s0;
  int iVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar2 = FUN_000112fe();
  sVar3 = FUN_00011314(&stack0x0000000c,unaff_s2 * 0x5d8 + unaff_s3);
  sVar2 = unaff_s0 + sVar3 + sVar2;
  if ((*(uint *)(unaff_s4 + 0x40) & 1) != 0) {
    FUN_0001133e(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    iVar1 = unaff_s2 * 0x5d8 + unaff_s3;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar1 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar4 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar4 = 0;
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    puVar4[1] = (char)uVar5;
    puVar4[2] = (char)((uint)uVar5 >> 8);
    puVar4[3] = (char)((uint)uVar5 >> 0x10);
    puVar4[4] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar1 + 8);
    puVar4[5] = (char)uVar5;
    puVar4[6] = (char)((uint)uVar5 >> 8);
    puVar4[7] = (char)((uint)uVar5 >> 0x10);
    puVar4[8] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar1 + 0x10);
    puVar4[9] = (char)uVar5;
    puVar4[10] = (char)((uint)uVar5 >> 8);
    puVar4[0xb] = (char)((uint)uVar5 >> 0x10);
    puVar4[0xc] = (char)((uint)uVar5 >> 0x18);
    uVar5 = *(undefined4 *)(iVar1 + 0x14);
    puVar4[0xd] = (char)uVar5;
    puVar4[0xe] = (char)((uint)uVar5 >> 8);
    puVar4[0xf] = (char)((uint)uVar5 >> 0x10);
    puVar4[0x10] = (char)((uint)uVar5 >> 0x18);
    sVar2 = sVar2 + bStack00000011 + 0x13;
  }
  return sVar2;
}



short FUN_00011314(void)

{
  short unaff_s0;
  short unaff_s1;
  int iVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  sVar2 = FUN_00011314();
  sVar2 = unaff_s0 + sVar2 + unaff_s1;
  if ((*(uint *)(unaff_s4 + 0x40) & 1) != 0) {
    FUN_0001133e(&stack0x00000012,0,0xe);
    uStack00000010 = 0x7dd;
    uStack00000013 = 0x50;
    iVar1 = unaff_s2 * 0x5d8 + unaff_s3;
    uStack00000014 = 0x2f2;
    uStack00000017 = 1;
    uStack00000018 = *(undefined *)(iVar1 + 0x3c0);
    _L0(in_stack_0000000c,&stack0x00000010,9);
    *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
    puVar3 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
    *puVar3 = 0;
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    puVar3[1] = (char)uVar4;
    puVar3[2] = (char)((uint)uVar4 >> 8);
    puVar3[3] = (char)((uint)uVar4 >> 0x10);
    puVar3[4] = (char)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 8);
    puVar3[5] = (char)uVar4;
    puVar3[6] = (char)((uint)uVar4 >> 8);
    puVar3[7] = (char)((uint)uVar4 >> 0x10);
    puVar3[8] = (char)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    puVar3[9] = (char)uVar4;
    puVar3[10] = (char)((uint)uVar4 >> 8);
    puVar3[0xb] = (char)((uint)uVar4 >> 0x10);
    puVar3[0xc] = (char)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
    puVar3[0xd] = (char)uVar4;
    puVar3[0xe] = (char)((uint)uVar4 >> 8);
    puVar3[0xf] = (char)((uint)uVar4 >> 0x10);
    puVar3[0x10] = (char)((uint)uVar4 >> 0x18);
    sVar2 = sVar2 + bStack00000011 + 0x13;
  }
  return sVar2;
}



short FUN_0001133e(void)

{
  short unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int unaff_s3;
  int in_stack_0000000c;
  undefined2 uStack00000010;
  byte bStack00000011;
  undefined uStack00000013;
  undefined2 uStack00000014;
  undefined uStack00000017;
  undefined uStack00000018;
  
  FUN_0001133e();
  uStack00000010 = 0x7dd;
  uStack00000013 = 0x50;
  iVar1 = unaff_s1 + unaff_s3;
  uStack00000014 = 0x2f2;
  uStack00000017 = 1;
  uStack00000018 = *(undefined *)(iVar1 + 0x3c0);
  _L0(in_stack_0000000c,&stack0x00000010,9);
  *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
  puVar2 = (undefined *)(in_stack_0000000c + 2 + (uint)bStack00000011);
  *puVar2 = 0;
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  puVar2[1] = (char)uVar3;
  puVar2[2] = (char)((uint)uVar3 >> 8);
  puVar2[3] = (char)((uint)uVar3 >> 0x10);
  puVar2[4] = (char)((uint)uVar3 >> 0x18);
  uVar3 = *(undefined4 *)(iVar1 + 8);
  puVar2[5] = (char)uVar3;
  puVar2[6] = (char)((uint)uVar3 >> 8);
  puVar2[7] = (char)((uint)uVar3 >> 0x10);
  puVar2[8] = (char)((uint)uVar3 >> 0x18);
  uVar3 = *(undefined4 *)(iVar1 + 0x10);
  puVar2[9] = (char)uVar3;
  puVar2[10] = (char)((uint)uVar3 >> 8);
  puVar2[0xb] = (char)((uint)uVar3 >> 0x10);
  puVar2[0xc] = (char)((uint)uVar3 >> 0x18);
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  puVar2[0xd] = (char)uVar3;
  puVar2[0xe] = (char)((uint)uVar3 >> 8);
  puVar2[0xf] = (char)((uint)uVar3 >> 0x10);
  puVar2[0x10] = (char)((uint)uVar3 >> 0x18);
  return unaff_s0 + bStack00000011 + 0x13;
}



short _L0(void)

{
  short unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  undefined4 uVar2;
  int in_stack_0000000c;
  byte in_stack_00000011;
  
  _L0();
  *(char *)(in_stack_0000000c + 1) = *(char *)(in_stack_0000000c + 1) + '\x11';
  puVar1 = (undefined *)(in_stack_0000000c + 2 + (uint)in_stack_00000011);
  *puVar1 = 0;
  uVar2 = *(undefined4 *)(unaff_s1 + 0xc);
  puVar1[1] = (char)uVar2;
  puVar1[2] = (char)((uint)uVar2 >> 8);
  puVar1[3] = (char)((uint)uVar2 >> 0x10);
  puVar1[4] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s1 + 8);
  puVar1[5] = (char)uVar2;
  puVar1[6] = (char)((uint)uVar2 >> 8);
  puVar1[7] = (char)((uint)uVar2 >> 0x10);
  puVar1[8] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s1 + 0x10);
  puVar1[9] = (char)uVar2;
  puVar1[10] = (char)((uint)uVar2 >> 8);
  puVar1[0xb] = (char)((uint)uVar2 >> 0x10);
  puVar1[0xc] = (char)((uint)uVar2 >> 0x18);
  uVar2 = *(undefined4 *)(unaff_s1 + 0x14);
  puVar1[0xd] = (char)uVar2;
  puVar1[0xe] = (char)((uint)uVar2 >> 8);
  puVar1[0xf] = (char)((uint)uVar2 >> 0x10);
  puVar1[0x10] = (char)((uint)uVar2 >> 0x18);
  return unaff_s0 + in_stack_00000011 + 0x13;
}


