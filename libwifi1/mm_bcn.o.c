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

typedef struct ipc_a2e_msg ipc_a2e_msg, *Pipc_a2e_msg;

typedef ulong uint32_t;

struct ipc_a2e_msg {
    uint32_t dummy_word;
    uint32_t msg[127];
};

typedef struct ipc_shared_env_tag ipc_shared_env_tag, *Pipc_shared_env_tag;

typedef struct txdesc_host txdesc_host, *Ptxdesc_host;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef ushort uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar uint8_t;

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

struct txdesc_host {
    uint32_t ready;
    struct hostdesc host;
    uint32_t pad_txdesc[55];
    uint32_t pad_buf[128];
};

struct ipc_shared_env_tag {
    struct ipc_a2e_msg msg_a2e_buf;
    uint32_t pattern_addr;
    struct txdesc_host txdesc0[4];
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

typedef char int8_t;

typedef union anon_union.conflict2fa6_for_field_0 anon_union.conflict2fa6_for_field_0, *Panon_union.conflict2fa6_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1152_for_field_3 anon_union.conflict1152_for_field_3, *Panon_union.conflict1152_for_field_3;

typedef union anon_union.conflict1177_for_field_4 anon_union.conflict1177_for_field_4, *Panon_union.conflict1177_for_field_4;

typedef union anon_union.conflict119c_for_field_5 anon_union.conflict119c_for_field_5, *Panon_union.conflict119c_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr {
    struct co_list_hdr * next;
};

union anon_union.conflict1177_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
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

union anon_union.conflict1152_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
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

union anon_union.conflict119c_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1152_for_field_3 field_3;
    union anon_union.conflict1177_for_field_4 field_4;
    union anon_union.conflict119c_for_field_5 field_5;
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

struct lmacdesc {
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
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

union anon_union.conflict2fa6_for_field_0 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control {
    union anon_union.conflict2fa6_for_field_0 field_0;
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

struct dma_desc {
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
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

typedef struct rd_env_tag rd_env_tag, *Prd_env_tag;

struct rd_env_tag {
    struct co_list event_free_list;
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

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

struct mobility_domain {
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
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

typedef ulonglong uint64_t;

typedef union anon_union.conflictb2f_for_u anon_union.conflictb2f_for_u, *Panon_union.conflictb2f_for_u;

typedef struct anon_struct.conflictacf anon_struct.conflictacf, *Panon_struct.conflictacf;

typedef struct anon_struct.conflictb06 anon_struct.conflictb06, *Panon_struct.conflictb06;

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

typedef union anon_union.conflictb2f anon_union.conflictb2f, *Panon_union.conflictb2f;

union anon_union.conflictb2f {
    struct anon_struct.conflictacf mic;
    struct anon_struct.conflictb06 mfp;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability {
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef enum anon_enum_8.conflict98a {
    HAL_MM_TIMER=7,
    VIF_UNKNOWN=4,
    TASK_APM=7,
    TASK_SCANU=4,
    TASK_API=13,
    TASK_DBG=1,
    IPC_DMA_CHANNEL_MAX=4,
    TASK_LAST_EMB=12,
    DMA_MAX=2,
    PHY_BAND_MAX=2,
    TASK_NONE=-1,
    HAL_AC2_TIMER=2,
    VIF_IBSS=1,
    VIF_AP=2,
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
    HAL_AC0_TIMER=0,
    AC_MAX=4,
    HAL_IDLE_TIMER=5,
    INVALID_STA_IDX=-1,
    HAL_RX_TIMER=6,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    TID_MAX=9,
    TASK_BAM=8,
    SCANU_STATE_MAX=2,
    HAL_BCN_TIMER=4,
    IPC_DMA_CHANNEL_DATA_TX=3,
    SCANU_SCANNING=1,
    TASK_SM=6,
    TASK_HOSTAPD_U=10
} anon_enum_8.conflict98a;

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

typedef struct ipc_emb_env_tag ipc_emb_env_tag, *Pipc_emb_env_tag;

struct ipc_emb_env_tag {
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

typedef uint wint_t;

typedef long int32_t;

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

typedef struct mm_bcn_env_tag mm_bcn_env_tag, *Pmm_bcn_env_tag;

typedef struct mm_bcn_change_req mm_bcn_change_req, *Pmm_bcn_change_req;

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag {
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

struct mm_bcn_env_tag {
    struct mm_bcn_change_req * param;
    int tx_cfm;
    _Bool tx_pending;
    _Bool update_ongoing;
    _Bool update_pending;
    undefined field_0xb;
    struct hal_dma_desc_tag dma;
    struct co_list tim_list;
};

struct mm_bcn_change_req {
    uint32_t bcn_ptr;
    uint16_t bcn_len;
    uint16_t tim_oft;
    uint8_t tim_len;
    uint8_t inst_nbr;
    uint8_t csa_oft[2];
    uint8_t[0] bcn_buf;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictf8_for___value anon_union.conflictf8_for___value, *Panon_union.conflictf8_for___value;

union anon_union.conflictf8_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictf8_for___value __value;
};

typedef long _off_t;

typedef union anon_union.conflictf8 anon_union.conflictf8, *Panon_union.conflictf8;

union anon_union.conflictf8 {
    wint_t __wch;
    uchar __wchb[4];
};

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

typedef struct mm_traffic_req_ind mm_traffic_req_ind, *Pmm_traffic_req_ind;

struct mm_traffic_req_ind {
    uint8_t sta_idx;
    uint8_t pkt_cnt;
    _Bool uapsd;
};

typedef struct mm_csa_counter_ind mm_csa_counter_ind, *Pmm_csa_counter_ind;

struct mm_csa_counter_ind {
    uint8_t vif_index;
    uint8_t csa_count;
};

typedef struct mm_tim_update_req mm_tim_update_req, *Pmm_tim_update_req;

struct mm_tim_update_req {
    uint16_t aid;
    uint8_t tx_avail;
    uint8_t inst_nbr;
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

typedef struct rxl_cntrl_env_tag rxl_cntrl_env_tag, *Prxl_cntrl_env_tag;

struct rxl_cntrl_env_tag {
    struct co_list ready;
    struct rx_dmadesc * first;
    struct rx_dmadesc * last;
    struct rx_dmadesc * free;
    uint32_t packet_stack_cnt;
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

typedef struct ke_msg ke_msg, *Pke_msg;

struct ke_msg {
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t[0] param;
};

typedef union anon_union.conflict3b1f anon_union.conflict3b1f, *Panon_union.conflict3b1f;

typedef struct anon_struct.conflict3957 anon_struct.conflict3957, *Panon_struct.conflict3957;

typedef struct anon_struct.conflict3a24 anon_struct.conflict3a24, *Panon_struct.conflict3a24;

struct anon_struct.conflict3a24 {
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

struct anon_struct.conflict3957 {
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

union anon_union.conflict3b1f {
    struct anon_struct.conflict3957 sta;
    struct anon_struct.conflict3a24 ap;
};

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict3b1f_for_u anon_union.conflict3b1f_for_u, *Panon_union.conflict3b1f_for_u;

union anon_union.conflict3b1f_for_u {
    struct anon_struct.conflict3957 sta;
    struct anon_struct.conflict3a24 ap;
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
    union anon_union.conflict3b1f_for_u u;
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

typedef enum VIF_AP_BCMC_STATUS {
    VIF_AP_BCMC_MOREDATA=2,
    VIF_AP_BCMC_BUFFERED=1
} VIF_AP_BCMC_STATUS;

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

typedef union anon_union.conflict3462_for_rate_map anon_union.conflict3462_for_rate_map, *Panon_union.conflict3462_for_rate_map;

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

union anon_union.conflict3462_for_rate_map {
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
    union anon_union.conflict3462_for_rate_map rate_map;
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

typedef enum sta_ps_sp {
    ANY_SERVICE_PERIOD_INT=3,
    PS_SERVICE_PERIOD=1,
    UAPSD_SERVICE_PERIOD_HOST=4,
    BCN_SERVICE_PERIOD=8,
    UAPSD_SERVICE_PERIOD=6,
    UAPSD_SERVICE_PERIOD_INT=2,
    NO_SERVICE_PERIOD=0
} sta_ps_sp;

typedef union anon_union.conflict3462 anon_union.conflict3462, *Panon_union.conflict3462;

union anon_union.conflict3462 {
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

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag {
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict2fa6 anon_union.conflict2fa6, *Panon_union.conflict2fa6;

union anon_union.conflict2fa6 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef union anon_union.conflict119c anon_union.conflict119c, *Panon_union.conflict119c;

union anon_union.conflict119c {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1177 anon_union.conflict1177, *Panon_union.conflict1177;

union anon_union.conflict1177 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict1152 anon_union.conflict1152, *Panon_union.conflict1152;

union anon_union.conflict1152 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8d2_for__new anon_union.conflict8d2_for__new, *Panon_union.conflict8d2_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict746 anon_struct.conflict746, *Panon_struct.conflict746;

typedef struct anon_struct.conflict88b anon_struct.conflict88b, *Panon_struct.conflict88b;

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

struct anon_struct.conflict746 {
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

struct anon_struct.conflict88b {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8d2_for__new {
    struct anon_struct.conflict746 _reent;
    struct anon_struct.conflict88b _unused;
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
    union anon_union.conflict8d2_for__new _new;
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

typedef union anon_union.conflict8d2 anon_union.conflict8d2, *Panon_union.conflict8d2;

union anon_union.conflict8d2 {
    struct anon_struct.conflict746 _reent;
    struct anon_struct.conflict88b _unused;
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




void mm_tim_update_proceed(mm_tim_update_req *param)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  short sVar15;
  byte *pbVar16;
  
  uVar3 = param->aid;
  uVar10 = (uint)param->inst_nbr;
  if (uVar3 == 0) {
    if (param->tx_avail == '\0') {
      *(undefined *)(uVar10 * 0x5d8 + 0x346) = 0;
    }
    else {
      *(undefined *)(uVar10 * 0x5d8 + 0x346) = 1;
    }
  }
  else {
    iVar5 = uVar10 * 0xfc;
    iVar9 = uVar10 * 8;
    uVar12 = (uint)(uVar3 >> 3);
    uVar13 = uVar12 & 0xff;
    pbVar16 = (byte *)(uVar13 + iVar5);
    bVar1 = *pbVar16;
    uVar8 = 1 << (uVar3 & 7);
    uVar7 = uVar8 & 0xff;
    uVar4 = uVar7 & bVar1;
    if (param->tx_avail == '\0') {
      if (uVar4 != 0) {
        iVar6 = uVar10 * 0x5d8;
        *pbVar16 = ~(byte)uVar8 & bVar1;
        sVar15 = *(short *)(iVar6 + 0x33c) + -1;
        *(short *)(iVar6 + 0x33c) = sVar15;
        if (sVar15 == 0) {
          *(undefined2 *)(iVar6 + 0x33a) = 6;
          *(undefined2 *)(iVar6 + 0x344) = 0xff;
          iVar11 = uVar10 * 0x28;
          cVar2 = *(char *)(iVar6 + 0x33a);
          *(undefined *)(iVar9 + 4) = 0;
          *(char *)(iVar9 + 1) = cVar2 + -2;
          *(int *)(iVar11 + 0xc) = iVar9 + 5;
          *(uint *)(iVar11 + 4) = (uint)param->inst_nbr * 0x14;
          *(uint *)(iVar11 + 0x20) = iVar5 + (uint)*(byte *)(iVar6 + 0x345);
        }
        else {
          if ((uint)*(byte *)(iVar6 + 0x344) == (uVar12 & 0xfe)) {
            while( true ) {
              uVar4 = (uint)*(byte *)(iVar6 + 0x344);
              if ((uVar4 == 0xfb) || (*(char *)(uVar4 + iVar5) != '\0')) break;
              *(byte *)(iVar6 + 0x344) = *(byte *)(iVar6 + 0x344) + 1;
            }
            *(char *)(uVar10 * 0x5d8 + 0x344) = (char)(uVar4 & 0xfe);
            *(uint *)(uVar10 * 0x28 + 0x1c) = (uVar4 & 0xfe) + iVar5;
          }
          iVar6 = uVar10 * 0x5d8;
          if (*(byte *)(iVar6 + 0x345) == uVar13) {
            while( true ) {
              bVar1 = *(byte *)(iVar6 + 0x345);
              pcVar14 = (char *)((uint)bVar1 + iVar5);
              if ((bVar1 == 0) || (*pcVar14 != '\0')) break;
              *(byte *)(iVar6 + 0x345) = bVar1 - 1;
            }
            *(char **)(uVar10 * 0x28 + 0x20) = pcVar14;
          }
          iVar5 = uVar10 * 0x5d8;
          sVar15 = (*(byte *)(iVar5 + 0x345) + 6) - (ushort)*(byte *)(iVar5 + 0x344);
          *(short *)(iVar5 + 0x33a) = sVar15;
          *(char *)(iVar9 + 1) = (char)sVar15 + -2;
          *(undefined *)(iVar9 + 4) = *(undefined *)(iVar5 + 0x344);
        }
      }
    }
    else {
      if (uVar4 == 0) {
        iVar6 = uVar10 * 0x5d8;
        *pbVar16 = (byte)uVar7 | bVar1;
        *(short *)(iVar6 + 0x33c) = *(short *)(iVar6 + 0x33c) + 1;
        if (uVar13 < *(byte *)(iVar6 + 0x344)) {
          *(char *)(iVar6 + 0x344) = (char)(uVar12 & 0xfe);
          *(uint *)(uVar10 * 0x28 + 0x1c) = iVar5 + (uVar12 & 0xfe);
        }
        if (*(byte *)(uVar10 * 0x5d8 + 0x345) < uVar13) {
          *(char *)(uVar10 * 0x5d8 + 0x345) = (char)uVar13;
          *(byte **)(uVar10 * 0x28 + 0x20) = pbVar16;
        }
        iVar5 = uVar10 * 0x5d8;
        iVar6 = ((*(byte *)(iVar5 + 0x345) + 6) - (uint)*(byte *)(iVar5 + 0x344)) * 0x10000;
        *(short *)(iVar5 + 0x33a) = (short)((uint)iVar6 >> 0x10);
        *(char *)(iVar9 + 1) = (char)((uint)iVar6 >> 0x10) + -2;
        *(undefined *)(iVar9 + 4) = *(undefined *)(iVar5 + 0x344);
        iVar5 = uVar10 * 0x28;
        *(int *)(iVar5 + 0xc) = iVar9 + 4;
        *(int *)(iVar5 + 4) = iVar5 + 0x14;
      }
    }
  }
  FUN_0001003c(0x42,param[-1].aid,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001003c(void)

{
  FUN_0001003c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void mm_bcn_init(undefined4 uRam00000010,undefined4 uRam00000014)

{
  _L0(0,0,0x24);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void mm_bcn_init_vif(vif_info_tag *vif_entry)

{
  undefined uVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  
  uVar4 = (uint)vif_entry->index;
  FUN_0001034a(&(vif_entry->u).field_0x4,uVar4 * 0x34c,(int *)(uVar4 * 0x48),uVar4 * 0x3c);
  *(int *)(uVar4 * 0x48) = (uint)vif_entry->index * 0x14;
  uVar4 = (uint)vif_entry->index;
  puVar6 = (undefined *)(uVar4 * 8);
  *(undefined *)&(vif_entry->u).field_0x2e7 = 0;
  *(undefined2 *)&(vif_entry->u).field_0x2e0 = 0;
  *(undefined *)&(vif_entry->u).field_0x2ea = 0;
  puVar5 = (undefined4 *)(uVar4 * 0x28);
  *(undefined2 *)&(vif_entry->u).field_0x2de = 6;
  *(undefined2 *)&(vif_entry->u).field_0x2e8 = 0xff;
  puVar3 = (undefined4 *)(uVar4 * 0x14);
  puVar5[3] = puVar6 + 5;
  *puVar5 = 0xcafefade;
  puVar5[2] = puVar6;
  puVar5[4] = 0;
  puVar5[1] = puVar3;
  *puVar6 = 5;
  puVar6[1] = 4;
  uVar1 = *(undefined *)&(vif_entry->u).field_0x2e7;
  puVar6[4] = 0;
  puVar6[2] = uVar1;
  puVar6[3] = 1;
  puVar6[5] = 0xff;
  puVar5[5] = 0xcafefade;
  bVar2 = *(byte *)&(vif_entry->u).field_0x2e9;
  puVar5[6] = puVar3;
  puVar5[8] = (uint)bVar2 + uVar4 * 0xfc;
  _L0(0,0xfc);
  *puVar3 = 0xcafefade;
  puVar3[1] = 0;
  puVar3[4] = 0;
  iVar7 = *(int *)&(vif_entry->u).field_0x70;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined4 *)(iVar7 + 0x3c) = 0;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  *(undefined4 *)&(vif_entry->u).field_0x2d0 = 0;
  *(vif_info_tag **)&(vif_entry->u).field_0x2d4 = vif_entry;
  return;
}



void FUN_0001034a(void)

{
  undefined uVar1;
  byte bVar2;
  int unaff_s0;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  int *unaff_s2;
  
  FUN_0001034a();
  *unaff_s2 = (uint)*(byte *)(unaff_s0 + 0x57) * 0x14;
  uVar3 = (uint)*(byte *)(unaff_s0 + 0x57);
  puVar6 = (undefined *)(uVar3 * 8);
  *(undefined *)(unaff_s0 + 0x343) = 0;
  *(undefined2 *)(unaff_s0 + 0x33c) = 0;
  *(undefined *)(unaff_s0 + 0x346) = 0;
  puVar5 = (undefined4 *)(uVar3 * 0x28);
  *(undefined2 *)(unaff_s0 + 0x33a) = 6;
  *(undefined2 *)(unaff_s0 + 0x344) = 0xff;
  puVar4 = (undefined4 *)(uVar3 * 0x14);
  puVar5[3] = puVar6 + 5;
  *puVar5 = 0xcafefade;
  puVar5[2] = puVar6;
  puVar5[4] = 0;
  puVar5[1] = puVar4;
  *puVar6 = 5;
  puVar6[1] = 4;
  uVar1 = *(undefined *)(unaff_s0 + 0x343);
  puVar6[4] = 0;
  puVar6[2] = uVar1;
  puVar6[3] = 1;
  puVar6[5] = 0xff;
  puVar5[5] = 0xcafefade;
  bVar2 = *(byte *)(unaff_s0 + 0x345);
  puVar5[6] = puVar4;
  puVar5[8] = (uint)bVar2 + uVar3 * 0xfc;
  _L0(0,0xfc);
  *puVar4 = 0xcafefade;
  puVar4[1] = 0;
  puVar4[4] = 0;
  iVar7 = *(int *)(unaff_s0 + 0xcc);
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined4 *)(iVar7 + 0x3c) = 0;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  *(undefined4 *)(unaff_s0 + 0x32c) = 0;
  *(int *)(unaff_s0 + 0x330) = unaff_s0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 unaff_s2;
  
  _L0();
  *unaff_s1 = unaff_s2;
  unaff_s1[1] = 0;
  unaff_s1[4] = 0;
  iVar1 = *(int *)(unaff_s0 + 0xcc);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(unaff_s0 + 0x32c) = 0;
  *(int *)(unaff_s0 + 0x330) = unaff_s0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mm_tim_update(mm_tim_update_req *param)

{
  if (_DAT_00000004 == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mm_bcn_transmit(uint uRam00000018,int iRam0000001c,ushort uRam00000054)

{
  byte bVar1;
  undefined uVar2;
  int *piVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  
  piVar3 = (int *)_DAT_00000008;
  if (_DAT_00000004 != 0) {
    FUN_000104c2(0,0,0x339);
  }
  if (DAT_00000009 == '\0') {
    _DAT_00000008 = (uint)_DAT_00000009 << 8;
    while (piVar3 != (int *)0x0) {
      if (((*(char *)((int)piVar3 + 0x56) == '\x02') && (*(char *)((int)piVar3 + 0x342) != '\0')) &&
         (*(char *)((int)piVar3 + 0x341) == *(char *)(piVar3 + 0xd0))) {
        iVar6 = piVar3[0x33];
        iVar10 = (uint)*(byte *)((int)piVar3 + 0x57) * 8;
        bVar1 = *(byte *)(iVar10 + 4);
        *(uint *)(iVar6 + 0x1c) =
             (uint)*(ushort *)(piVar3 + 0xce) + (uint)*(ushort *)((int)piVar3 + 0x33a) + 4;
        uVar8 = (uint)uRam00000054;
        uRam00000054 = (ushort)((uVar8 + 1) * 0x10000 >> 0x10);
        *(short *)(*(int *)(iVar6 + 0x14) + 0x16) = (short)((uVar8 + 1 & 0xffff) << 4);
        cVar9 = *(char *)((int)piVar3 + 0x343);
        *(char *)(iVar10 + 2) = cVar9;
        if (cVar9 == '\0') {
          if ((*(char *)((int)piVar3 + 0x346) != '\0') ||
             (bVar7 = bVar1 & 0xfe,
             *(int *)((uRam00000018 & uRam00000000) * 0x330 + iRam0000001c) != 0)) {
            bVar7 = bVar1 | 1;
          }
          *(undefined *)((int)piVar3 + 0x343) = *(undefined *)(iVar10 + 3);
        }
        else {
          bVar7 = bVar1 & 0xfe;
          if ((*(byte *)((int)piVar3 + 0x346) & 2) != 0) {
            bVar7 = bVar1 | 1;
          }
        }
        *(byte *)(iVar10 + 4) = bVar7 | 1;
        *(char *)((int)piVar3 + 0x343) = *(char *)((int)piVar3 + 0x343) + -1;
        if (*(char *)((int)piVar3 + 0x347) != '\0') {
          cVar9 = *(char *)((int)piVar3 + 0x347) + -1;
          *(char *)((int)piVar3 + 0x347) = cVar9;
          if (*(byte *)(piVar3 + 0xd2) != 0) {
            *(char *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)(piVar3 + 0xd2)) = cVar9;
            if (*(byte *)((int)piVar3 + 0x349) != 0) {
              *(undefined *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)((int)piVar3 + 0x349)) =
                   *(undefined *)((int)piVar3 + 0x347);
            }
          }
          cVar9 = *(char *)((int)piVar3 + 0x347);
          if (cVar9 != '\0') {
            uVar2 = *(undefined *)((int)piVar3 + 0x57);
            puVar5 = (undefined *)FUN_000106bc(0x4e,0xd,0,2);
            *puVar5 = uVar2;
            puVar5[1] = cVar9;
            _L0();
            if (*(char *)((int)piVar3 + 0x347) != '\0') goto _L0;
          }
          *(undefined *)((int)piVar3 + 0x347) = 1;
        }
_L0:
        FUN_00010600(piVar3,piVar3 + 0x18);
        iVar6 = FUN_0001060a(piVar3);
        if (iVar6 != 0) {
          cVar9 = *(char *)((int)piVar3 + 0x57);
          pcVar4 = (char *)FUN_00010624(0x4a,0xd,0,3);
          *pcVar4 = cVar9 + '\n';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          _L0();
          *(undefined *)((int)piVar3 + 0x8f) = *(undefined *)((int)piVar3 + 0x57);
          *(undefined *)(piVar3 + 0x24) = 0xff;
          iVar6 = _L0(piVar3 + 0x18,4);
          if (iVar6 != 0) {
            _DAT_00000004 = _DAT_00000004 + 1;
          }
          iVar6 = (*(byte *)((int)piVar3 + 0x57) + 10) * 0x1b0;
          if ((*(byte *)(iVar6 + 0x32) & 2) != 0) {
            *(undefined4 *)(iVar6 + 0x34) = 9;
            FUN_0001068c(piVar3,iVar6,0);
            *(undefined4 *)(iVar6 + 0x34) = 0;
          }
        }
      }
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    _DAT_00000008 = CONCAT31(_DAT_00000009,1);
  }
  return;
}



void FUN_000104c2(uint uRam00000018,int iRam0000001c,ushort uRam00000054)

{
  byte bVar1;
  undefined uVar2;
  int *unaff_s0;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int unaff_s2;
  
  FUN_000104c2();
  if (*(char *)(unaff_s2 + 9) == '\0') {
    *(undefined *)(unaff_s2 + 8) = 0;
    while (unaff_s0 != (int *)0x0) {
      if (((*(char *)((int)unaff_s0 + 0x56) == '\x02') && (*(char *)((int)unaff_s0 + 0x342) != '\0')
          ) && (*(char *)((int)unaff_s0 + 0x341) == *(char *)(unaff_s0 + 0xd0))) {
        iVar5 = unaff_s0[0x33];
        iVar9 = (uint)*(byte *)((int)unaff_s0 + 0x57) * 8;
        bVar1 = *(byte *)(iVar9 + 4);
        *(uint *)(iVar5 + 0x1c) =
             (uint)*(ushort *)(unaff_s0 + 0xce) + (uint)*(ushort *)((int)unaff_s0 + 0x33a) + 4;
        uVar7 = (uint)uRam00000054;
        uRam00000054 = (ushort)((uVar7 + 1) * 0x10000 >> 0x10);
        *(short *)(*(int *)(iVar5 + 0x14) + 0x16) = (short)((uVar7 + 1 & 0xffff) << 4);
        cVar8 = *(char *)((int)unaff_s0 + 0x343);
        *(char *)(iVar9 + 2) = cVar8;
        if (cVar8 == '\0') {
          if ((*(char *)((int)unaff_s0 + 0x346) != '\0') ||
             (bVar6 = bVar1 & 0xfe,
             *(int *)((uRam00000018 & uRam00000000) * 0x330 + iRam0000001c) != 0)) {
            bVar6 = bVar1 | 1;
          }
          *(undefined *)((int)unaff_s0 + 0x343) = *(undefined *)(iVar9 + 3);
        }
        else {
          bVar6 = bVar1 & 0xfe;
          if ((*(byte *)((int)unaff_s0 + 0x346) & 2) != 0) {
            bVar6 = bVar1 | 1;
          }
        }
        *(byte *)(iVar9 + 4) = bVar6 | 1;
        *(char *)((int)unaff_s0 + 0x343) = *(char *)((int)unaff_s0 + 0x343) + -1;
        if (*(char *)((int)unaff_s0 + 0x347) != '\0') {
          cVar8 = *(char *)((int)unaff_s0 + 0x347) + -1;
          *(char *)((int)unaff_s0 + 0x347) = cVar8;
          if (*(byte *)(unaff_s0 + 0xd2) != 0) {
            *(char *)(*(int *)(iVar5 + 0x14) + (uint)*(byte *)(unaff_s0 + 0xd2)) = cVar8;
            if (*(byte *)((int)unaff_s0 + 0x349) != 0) {
              *(undefined *)(*(int *)(iVar5 + 0x14) + (uint)*(byte *)((int)unaff_s0 + 0x349)) =
                   *(undefined *)((int)unaff_s0 + 0x347);
            }
          }
          cVar8 = *(char *)((int)unaff_s0 + 0x347);
          if (cVar8 != '\0') {
            uVar2 = *(undefined *)((int)unaff_s0 + 0x57);
            puVar4 = (undefined *)FUN_000106bc(0x4e,0xd,0,2);
            *puVar4 = uVar2;
            puVar4[1] = cVar8;
            _L0();
            if (*(char *)((int)unaff_s0 + 0x347) != '\0') goto _L0;
          }
          *(undefined *)((int)unaff_s0 + 0x347) = 1;
        }
_L0:
        FUN_00010600(unaff_s0,unaff_s0 + 0x18);
        iVar5 = FUN_0001060a(unaff_s0);
        if (iVar5 != 0) {
          cVar8 = *(char *)((int)unaff_s0 + 0x57);
          pcVar3 = (char *)FUN_00010624(0x4a,0xd,0,3);
          *pcVar3 = cVar8 + '\n';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          _L0();
          *(undefined *)((int)unaff_s0 + 0x8f) = *(undefined *)((int)unaff_s0 + 0x57);
          *(undefined *)(unaff_s0 + 0x24) = 0xff;
          iVar5 = _L0(unaff_s0 + 0x18,4);
          if (iVar5 != 0) {
            *(int *)(unaff_s2 + 4) = *(int *)(unaff_s2 + 4) + 1;
          }
          iVar5 = (*(byte *)((int)unaff_s0 + 0x57) + 10) * 0x1b0;
          if ((*(byte *)(iVar5 + 0x32) & 2) != 0) {
            *(undefined4 *)(iVar5 + 0x34) = 9;
            FUN_0001068c(unaff_s0,iVar5,0);
            *(undefined4 *)(iVar5 + 0x34) = 0;
          }
        }
      }
      unaff_s0 = (int *)*unaff_s0;
    }
  }
  else {
    *(undefined *)(unaff_s2 + 8) = 1;
  }
  return;
}



void FUN_00010600(int *param_1,int param_2)

{
  byte bVar1;
  undefined uVar2;
  int *unaff_s0;
  int unaff_s1;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
code_r0x00010600:
  do {
    FUN_00010600(param_1,param_2);
    iVar3 = FUN_0001060a(unaff_s0);
    if (iVar3 != 0) {
      cVar9 = *(char *)((int)unaff_s0 + 0x57);
      pcVar4 = (char *)FUN_00010624(0x4a,0xd,0,3);
      *pcVar4 = cVar9 + '\n';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      _L0();
      *(undefined *)((int)unaff_s0 + 0x8f) = *(undefined *)((int)unaff_s0 + 0x57);
      *(undefined *)(unaff_s0 + 0x24) = 0xff;
      iVar3 = _L0(unaff_s1,4);
      if (iVar3 != 0) {
        *(int *)(unaff_s2 + 4) = *(int *)(unaff_s2 + 4) + 1;
      }
      iVar3 = (*(byte *)((int)unaff_s0 + 0x57) + 10) * 0x1b0 + unaff_s6;
      if ((*(byte *)(iVar3 + 0x32) & 2) != 0) {
        *(undefined4 *)(iVar3 + 0x34) = 9;
        FUN_0001068c(unaff_s0,iVar3,0);
        *(undefined4 *)(iVar3 + 0x34) = 0;
      }
    }
    do {
      unaff_s0 = (int *)*unaff_s0;
      if (unaff_s0 == (int *)0x0) {
        return;
      }
    } while (((*(char *)((int)unaff_s0 + 0x56) != '\x02') ||
             (*(char *)((int)unaff_s0 + 0x342) == '\0')) ||
            (*(char *)((int)unaff_s0 + 0x341) != *(char *)(unaff_s0 + 0xd0)));
    iVar6 = unaff_s0[0x33];
    iVar10 = (uint)*(byte *)((int)unaff_s0 + 0x57) * 8 + unaff_s5;
    bVar1 = *(byte *)(iVar10 + 4);
    *(uint *)(iVar6 + 0x1c) =
         (uint)*(ushort *)(unaff_s0 + 0xce) + (uint)*(ushort *)((int)unaff_s0 + 0x33a) + 4;
    iVar3 = *(int *)(iVar6 + 0x14);
    unaff_s1 = (int)(unaff_s0 + 0x18);
    uVar8 = *(ushort *)(unaff_s3 + 0x54) + 1;
    *(short *)(unaff_s3 + 0x54) = (short)(uVar8 * 0x10000 >> 0x10);
    *(short *)(iVar3 + 0x16) = (short)((uVar8 & 0xffff) << 4);
    cVar9 = *(char *)((int)unaff_s0 + 0x343);
    *(char *)(iVar10 + 2) = cVar9;
    if (cVar9 == '\0') {
      if ((*(char *)((int)unaff_s0 + 0x346) != '\0') ||
         (bVar7 = bVar1 & 0xfe,
         *(int *)((*(uint *)(unaff_s4 + 0x18) & uRam00000000) * 0x330 + *(int *)(unaff_s4 + 0x1c))
         != 0)) {
        bVar7 = bVar1 | 1;
      }
      *(undefined *)((int)unaff_s0 + 0x343) = *(undefined *)(iVar10 + 3);
    }
    else {
      bVar7 = bVar1 & 0xfe;
      if ((*(byte *)((int)unaff_s0 + 0x346) & 2) != 0) {
        bVar7 = bVar1 | 1;
      }
    }
    *(byte *)(iVar10 + 4) = bVar7 | 1;
    *(char *)((int)unaff_s0 + 0x343) = *(char *)((int)unaff_s0 + 0x343) + -1;
    param_1 = unaff_s0;
    param_2 = unaff_s1;
  } while (*(char *)((int)unaff_s0 + 0x347) == '\0');
  cVar9 = *(char *)((int)unaff_s0 + 0x347) + -1;
  *(char *)((int)unaff_s0 + 0x347) = cVar9;
  if (*(byte *)(unaff_s0 + 0xd2) != 0) {
    *(char *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)(unaff_s0 + 0xd2)) = cVar9;
    if (*(byte *)((int)unaff_s0 + 0x349) != 0) {
      *(undefined *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)((int)unaff_s0 + 0x349)) =
           *(undefined *)((int)unaff_s0 + 0x347);
    }
  }
  cVar9 = *(char *)((int)unaff_s0 + 0x347);
  if (cVar9 != '\0') goto _L0;
  goto _L0;
_L0:
  uVar2 = *(undefined *)((int)unaff_s0 + 0x57);
  puVar5 = (undefined *)FUN_000106bc(0x4e,0xd,0,2);
  *puVar5 = uVar2;
  puVar5[1] = cVar9;
  _L0();
  if (*(char *)((int)unaff_s0 + 0x347) == '\0') {
_L0:
    *(undefined *)((int)unaff_s0 + 0x347) = 1;
  }
  goto code_r0x00010600;
}



void FUN_0001060a(int *param_1)

{
  byte bVar1;
  undefined uVar2;
  int *unaff_s0;
  int unaff_s1;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  do {
    iVar3 = FUN_0001060a(param_1);
    if (iVar3 != 0) {
      cVar9 = *(char *)((int)unaff_s0 + 0x57);
      pcVar4 = (char *)FUN_00010624(0x4a,0xd,0,3);
      *pcVar4 = cVar9 + '\n';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      _L0();
      *(undefined *)((int)unaff_s0 + 0x8f) = *(undefined *)((int)unaff_s0 + 0x57);
      *(undefined *)(unaff_s0 + 0x24) = 0xff;
      iVar3 = _L0(unaff_s1,4);
      if (iVar3 != 0) {
        *(int *)(unaff_s2 + 4) = *(int *)(unaff_s2 + 4) + 1;
      }
      iVar3 = (*(byte *)((int)unaff_s0 + 0x57) + 10) * 0x1b0 + unaff_s6;
      if ((*(byte *)(iVar3 + 0x32) & 2) != 0) {
        *(undefined4 *)(iVar3 + 0x34) = 9;
        FUN_0001068c(unaff_s0,iVar3,0);
        *(undefined4 *)(iVar3 + 0x34) = 0;
      }
    }
    do {
      unaff_s0 = (int *)*unaff_s0;
      if (unaff_s0 == (int *)0x0) {
        return;
      }
    } while (((*(char *)((int)unaff_s0 + 0x56) != '\x02') ||
             (*(char *)((int)unaff_s0 + 0x342) == '\0')) ||
            (*(char *)((int)unaff_s0 + 0x341) != *(char *)(unaff_s0 + 0xd0)));
    iVar6 = unaff_s0[0x33];
    iVar10 = (uint)*(byte *)((int)unaff_s0 + 0x57) * 8 + unaff_s5;
    bVar1 = *(byte *)(iVar10 + 4);
    *(uint *)(iVar6 + 0x1c) =
         (uint)*(ushort *)(unaff_s0 + 0xce) + (uint)*(ushort *)((int)unaff_s0 + 0x33a) + 4;
    iVar3 = *(int *)(iVar6 + 0x14);
    unaff_s1 = (int)(unaff_s0 + 0x18);
    uVar8 = *(ushort *)(unaff_s3 + 0x54) + 1;
    *(short *)(unaff_s3 + 0x54) = (short)(uVar8 * 0x10000 >> 0x10);
    *(short *)(iVar3 + 0x16) = (short)((uVar8 & 0xffff) << 4);
    cVar9 = *(char *)((int)unaff_s0 + 0x343);
    *(char *)(iVar10 + 2) = cVar9;
    if (cVar9 == '\0') {
      if ((*(char *)((int)unaff_s0 + 0x346) != '\0') ||
         (bVar7 = bVar1 & 0xfe,
         *(int *)((*(uint *)(unaff_s4 + 0x18) & uRam00000000) * 0x330 + *(int *)(unaff_s4 + 0x1c))
         != 0)) {
        bVar7 = bVar1 | 1;
      }
      *(undefined *)((int)unaff_s0 + 0x343) = *(undefined *)(iVar10 + 3);
    }
    else {
      bVar7 = bVar1 & 0xfe;
      if ((*(byte *)((int)unaff_s0 + 0x346) & 2) != 0) {
        bVar7 = bVar1 | 1;
      }
    }
    *(byte *)(iVar10 + 4) = bVar7 | 1;
    *(char *)((int)unaff_s0 + 0x343) = *(char *)((int)unaff_s0 + 0x343) + -1;
    if (*(char *)((int)unaff_s0 + 0x347) != '\0') {
      cVar9 = *(char *)((int)unaff_s0 + 0x347) + -1;
      *(char *)((int)unaff_s0 + 0x347) = cVar9;
      if (*(byte *)(unaff_s0 + 0xd2) != 0) {
        *(char *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)(unaff_s0 + 0xd2)) = cVar9;
        if (*(byte *)((int)unaff_s0 + 0x349) != 0) {
          *(undefined *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)((int)unaff_s0 + 0x349)) =
               *(undefined *)((int)unaff_s0 + 0x347);
        }
      }
      cVar9 = *(char *)((int)unaff_s0 + 0x347);
      if (cVar9 != '\0') {
        uVar2 = *(undefined *)((int)unaff_s0 + 0x57);
        puVar5 = (undefined *)FUN_000106bc(0x4e,0xd,0,2);
        *puVar5 = uVar2;
        puVar5[1] = cVar9;
        _L0();
        if (*(char *)((int)unaff_s0 + 0x347) != '\0') goto _L0;
      }
      *(undefined *)((int)unaff_s0 + 0x347) = 1;
    }
_L0:
    FUN_00010600(unaff_s0,unaff_s1);
    param_1 = unaff_s0;
  } while( true );
}



void FUN_00010624(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined uVar2;
  int *unaff_s0;
  int unaff_s1;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  char unaff_s7;
  
  do {
    pcVar3 = (char *)FUN_00010624(param_1,param_2,param_3,param_4);
    *pcVar3 = unaff_s7;
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    _L0();
    *(undefined *)((int)unaff_s0 + 0x8f) = *(undefined *)((int)unaff_s0 + 0x57);
    *(undefined *)(unaff_s0 + 0x24) = 0xff;
    iVar4 = _L0(unaff_s1,4);
    if (iVar4 != 0) {
      *(int *)(unaff_s2 + 4) = *(int *)(unaff_s2 + 4) + 1;
    }
    iVar4 = (*(byte *)((int)unaff_s0 + 0x57) + 10) * 0x1b0 + unaff_s6;
    if ((*(byte *)(iVar4 + 0x32) & 2) != 0) {
      *(undefined4 *)(iVar4 + 0x34) = 9;
      FUN_0001068c(unaff_s0,iVar4,0);
      *(undefined4 *)(iVar4 + 0x34) = 0;
    }
    do {
      do {
        unaff_s0 = (int *)*unaff_s0;
        if (unaff_s0 == (int *)0x0) {
          return;
        }
      } while (((*(char *)((int)unaff_s0 + 0x56) != '\x02') ||
               (*(char *)((int)unaff_s0 + 0x342) == '\0')) ||
              (*(char *)((int)unaff_s0 + 0x341) != *(char *)(unaff_s0 + 0xd0)));
      iVar6 = unaff_s0[0x33];
      iVar10 = (uint)*(byte *)((int)unaff_s0 + 0x57) * 8 + unaff_s5;
      bVar1 = *(byte *)(iVar10 + 4);
      *(uint *)(iVar6 + 0x1c) =
           (uint)*(ushort *)(unaff_s0 + 0xce) + (uint)*(ushort *)((int)unaff_s0 + 0x33a) + 4;
      iVar4 = *(int *)(iVar6 + 0x14);
      unaff_s1 = (int)(unaff_s0 + 0x18);
      uVar8 = *(ushort *)(unaff_s3 + 0x54) + 1;
      *(short *)(unaff_s3 + 0x54) = (short)(uVar8 * 0x10000 >> 0x10);
      *(short *)(iVar4 + 0x16) = (short)((uVar8 & 0xffff) << 4);
      cVar9 = *(char *)((int)unaff_s0 + 0x343);
      *(char *)(iVar10 + 2) = cVar9;
      if (cVar9 == '\0') {
        if ((*(char *)((int)unaff_s0 + 0x346) != '\0') ||
           (bVar7 = bVar1 & 0xfe,
           *(int *)((*(uint *)(unaff_s4 + 0x18) & uRam00000000) * 0x330 + *(int *)(unaff_s4 + 0x1c))
           != 0)) {
          bVar7 = bVar1 | 1;
        }
        *(undefined *)((int)unaff_s0 + 0x343) = *(undefined *)(iVar10 + 3);
      }
      else {
        bVar7 = bVar1 & 0xfe;
        if ((*(byte *)((int)unaff_s0 + 0x346) & 2) != 0) {
          bVar7 = bVar1 | 1;
        }
      }
      *(byte *)(iVar10 + 4) = bVar7 | 1;
      *(char *)((int)unaff_s0 + 0x343) = *(char *)((int)unaff_s0 + 0x343) + -1;
      if (*(char *)((int)unaff_s0 + 0x347) != '\0') {
        cVar9 = *(char *)((int)unaff_s0 + 0x347) + -1;
        *(char *)((int)unaff_s0 + 0x347) = cVar9;
        if (*(byte *)(unaff_s0 + 0xd2) != 0) {
          *(char *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)(unaff_s0 + 0xd2)) = cVar9;
          if (*(byte *)((int)unaff_s0 + 0x349) != 0) {
            *(undefined *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)((int)unaff_s0 + 0x349)) =
                 *(undefined *)((int)unaff_s0 + 0x347);
          }
        }
        cVar9 = *(char *)((int)unaff_s0 + 0x347);
        if (cVar9 != '\0') {
          uVar2 = *(undefined *)((int)unaff_s0 + 0x57);
          puVar5 = (undefined *)FUN_000106bc(0x4e,0xd,0,2);
          *puVar5 = uVar2;
          puVar5[1] = cVar9;
          _L0();
          if (*(char *)((int)unaff_s0 + 0x347) != '\0') goto _L0;
        }
        *(undefined *)((int)unaff_s0 + 0x347) = 1;
      }
_L0:
      FUN_00010600(unaff_s0,unaff_s1);
      iVar4 = FUN_0001060a(unaff_s0);
    } while (iVar4 == 0);
    param_2 = 0xd;
    param_4 = 3;
    param_3 = 0;
    unaff_s7 = *(char *)((int)unaff_s0 + 0x57) + '\n';
    param_1 = 0x4a;
  } while( true );
}



void _L0(void)

{
  byte bVar1;
  undefined uVar2;
  int *unaff_s0;
  int unaff_s1;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  do {
    _L0();
    *(undefined *)((int)unaff_s0 + 0x8f) = *(undefined *)((int)unaff_s0 + 0x57);
    *(undefined *)(unaff_s0 + 0x24) = 0xff;
    iVar4 = _L0(unaff_s1,4);
    if (iVar4 != 0) {
      *(int *)(unaff_s2 + 4) = *(int *)(unaff_s2 + 4) + 1;
    }
    iVar4 = (*(byte *)((int)unaff_s0 + 0x57) + 10) * 0x1b0 + unaff_s6;
    if ((*(byte *)(iVar4 + 0x32) & 2) != 0) {
      *(undefined4 *)(iVar4 + 0x34) = 9;
      FUN_0001068c(unaff_s0,iVar4,0);
      *(undefined4 *)(iVar4 + 0x34) = 0;
    }
    do {
      do {
        unaff_s0 = (int *)*unaff_s0;
        if (unaff_s0 == (int *)0x0) {
          return;
        }
      } while (((*(char *)((int)unaff_s0 + 0x56) != '\x02') ||
               (*(char *)((int)unaff_s0 + 0x342) == '\0')) ||
              (*(char *)((int)unaff_s0 + 0x341) != *(char *)(unaff_s0 + 0xd0)));
      iVar6 = unaff_s0[0x33];
      iVar10 = (uint)*(byte *)((int)unaff_s0 + 0x57) * 8 + unaff_s5;
      bVar1 = *(byte *)(iVar10 + 4);
      *(uint *)(iVar6 + 0x1c) =
           (uint)*(ushort *)(unaff_s0 + 0xce) + (uint)*(ushort *)((int)unaff_s0 + 0x33a) + 4;
      iVar4 = *(int *)(iVar6 + 0x14);
      unaff_s1 = (int)(unaff_s0 + 0x18);
      uVar8 = *(ushort *)(unaff_s3 + 0x54) + 1;
      *(short *)(unaff_s3 + 0x54) = (short)(uVar8 * 0x10000 >> 0x10);
      *(short *)(iVar4 + 0x16) = (short)((uVar8 & 0xffff) << 4);
      cVar9 = *(char *)((int)unaff_s0 + 0x343);
      *(char *)(iVar10 + 2) = cVar9;
      if (cVar9 == '\0') {
        if ((*(char *)((int)unaff_s0 + 0x346) != '\0') ||
           (bVar7 = bVar1 & 0xfe,
           *(int *)((*(uint *)(unaff_s4 + 0x18) & uRam00000000) * 0x330 + *(int *)(unaff_s4 + 0x1c))
           != 0)) {
          bVar7 = bVar1 | 1;
        }
        *(undefined *)((int)unaff_s0 + 0x343) = *(undefined *)(iVar10 + 3);
      }
      else {
        bVar7 = bVar1 & 0xfe;
        if ((*(byte *)((int)unaff_s0 + 0x346) & 2) != 0) {
          bVar7 = bVar1 | 1;
        }
      }
      *(byte *)(iVar10 + 4) = bVar7 | 1;
      *(char *)((int)unaff_s0 + 0x343) = *(char *)((int)unaff_s0 + 0x343) + -1;
      if (*(char *)((int)unaff_s0 + 0x347) != '\0') {
        cVar9 = *(char *)((int)unaff_s0 + 0x347) + -1;
        *(char *)((int)unaff_s0 + 0x347) = cVar9;
        if (*(byte *)(unaff_s0 + 0xd2) != 0) {
          *(char *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)(unaff_s0 + 0xd2)) = cVar9;
          if (*(byte *)((int)unaff_s0 + 0x349) != 0) {
            *(undefined *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)((int)unaff_s0 + 0x349)) =
                 *(undefined *)((int)unaff_s0 + 0x347);
          }
        }
        cVar9 = *(char *)((int)unaff_s0 + 0x347);
        if (cVar9 != '\0') {
          uVar2 = *(undefined *)((int)unaff_s0 + 0x57);
          puVar5 = (undefined *)FUN_000106bc(0x4e,0xd,0,2);
          *puVar5 = uVar2;
          puVar5[1] = cVar9;
          _L0();
          if (*(char *)((int)unaff_s0 + 0x347) != '\0') goto _L0;
        }
        *(undefined *)((int)unaff_s0 + 0x347) = 1;
      }
_L0:
      FUN_00010600(unaff_s0,unaff_s1);
      iVar4 = FUN_0001060a(unaff_s0);
    } while (iVar4 == 0);
    cVar9 = *(char *)((int)unaff_s0 + 0x57);
    pcVar3 = (char *)FUN_00010624(0x4a,0xd,0,3);
    *pcVar3 = cVar9 + '\n';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
  } while( true );
}



void _L0(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined uVar2;
  int *unaff_s0;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  do {
    iVar4 = _L0(param_1,param_2);
    if (iVar4 != 0) {
      *(int *)(unaff_s2 + 4) = *(int *)(unaff_s2 + 4) + 1;
    }
    iVar4 = (*(byte *)((int)unaff_s0 + 0x57) + 10) * 0x1b0 + unaff_s6;
    if ((*(byte *)(iVar4 + 0x32) & 2) != 0) {
      *(undefined4 *)(iVar4 + 0x34) = 9;
      FUN_0001068c(unaff_s0,iVar4,0);
      *(undefined4 *)(iVar4 + 0x34) = 0;
    }
    do {
      do {
        unaff_s0 = (int *)*unaff_s0;
        if (unaff_s0 == (int *)0x0) {
          return;
        }
      } while (((*(char *)((int)unaff_s0 + 0x56) != '\x02') ||
               (*(char *)((int)unaff_s0 + 0x342) == '\0')) ||
              (*(char *)((int)unaff_s0 + 0x341) != *(char *)(unaff_s0 + 0xd0)));
      iVar6 = unaff_s0[0x33];
      iVar10 = (uint)*(byte *)((int)unaff_s0 + 0x57) * 8 + unaff_s5;
      bVar1 = *(byte *)(iVar10 + 4);
      *(uint *)(iVar6 + 0x1c) =
           (uint)*(ushort *)(unaff_s0 + 0xce) + (uint)*(ushort *)((int)unaff_s0 + 0x33a) + 4;
      iVar4 = *(int *)(iVar6 + 0x14);
      param_1 = (int)(unaff_s0 + 0x18);
      uVar8 = *(ushort *)(unaff_s3 + 0x54) + 1;
      *(short *)(unaff_s3 + 0x54) = (short)(uVar8 * 0x10000 >> 0x10);
      *(short *)(iVar4 + 0x16) = (short)((uVar8 & 0xffff) << 4);
      cVar9 = *(char *)((int)unaff_s0 + 0x343);
      *(char *)(iVar10 + 2) = cVar9;
      if (cVar9 == '\0') {
        if ((*(char *)((int)unaff_s0 + 0x346) != '\0') ||
           (bVar7 = bVar1 & 0xfe,
           *(int *)((*(uint *)(unaff_s4 + 0x18) & uRam00000000) * 0x330 + *(int *)(unaff_s4 + 0x1c))
           != 0)) {
          bVar7 = bVar1 | 1;
        }
        *(undefined *)((int)unaff_s0 + 0x343) = *(undefined *)(iVar10 + 3);
      }
      else {
        bVar7 = bVar1 & 0xfe;
        if ((*(byte *)((int)unaff_s0 + 0x346) & 2) != 0) {
          bVar7 = bVar1 | 1;
        }
      }
      *(byte *)(iVar10 + 4) = bVar7 | 1;
      *(char *)((int)unaff_s0 + 0x343) = *(char *)((int)unaff_s0 + 0x343) + -1;
      if (*(char *)((int)unaff_s0 + 0x347) != '\0') {
        cVar9 = *(char *)((int)unaff_s0 + 0x347) + -1;
        *(char *)((int)unaff_s0 + 0x347) = cVar9;
        if (*(byte *)(unaff_s0 + 0xd2) != 0) {
          *(char *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)(unaff_s0 + 0xd2)) = cVar9;
          if (*(byte *)((int)unaff_s0 + 0x349) != 0) {
            *(undefined *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)((int)unaff_s0 + 0x349)) =
                 *(undefined *)((int)unaff_s0 + 0x347);
          }
        }
        cVar9 = *(char *)((int)unaff_s0 + 0x347);
        if (cVar9 != '\0') {
          uVar2 = *(undefined *)((int)unaff_s0 + 0x57);
          puVar5 = (undefined *)FUN_000106bc(0x4e,0xd,0,2);
          *puVar5 = uVar2;
          puVar5[1] = cVar9;
          _L0();
          if (*(char *)((int)unaff_s0 + 0x347) != '\0') goto _L0;
        }
        *(undefined *)((int)unaff_s0 + 0x347) = 1;
      }
_L0:
      FUN_00010600(unaff_s0,param_1);
      iVar4 = FUN_0001060a(unaff_s0);
    } while (iVar4 == 0);
    cVar9 = *(char *)((int)unaff_s0 + 0x57);
    pcVar3 = (char *)FUN_00010624(0x4a,0xd,0,3);
    *pcVar3 = cVar9 + '\n';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    _L0();
    param_2 = 4;
    *(undefined *)((int)unaff_s0 + 0x8f) = *(undefined *)((int)unaff_s0 + 0x57);
    *(undefined *)(unaff_s0 + 0x24) = 0xff;
  } while( true );
}



void FUN_0001068c(int *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined uVar2;
  int *unaff_s0;
  int unaff_s1;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  do {
    FUN_0001068c(param_1,param_2,param_3);
    *(undefined4 *)(unaff_s1 + 0x34) = 0;
    do {
      do {
        do {
          unaff_s0 = (int *)*unaff_s0;
          if (unaff_s0 == (int *)0x0) {
            return;
          }
        } while (((*(char *)((int)unaff_s0 + 0x56) != '\x02') ||
                 (*(char *)((int)unaff_s0 + 0x342) == '\0')) ||
                (*(char *)((int)unaff_s0 + 0x341) != *(char *)(unaff_s0 + 0xd0)));
        iVar6 = unaff_s0[0x33];
        iVar10 = (uint)*(byte *)((int)unaff_s0 + 0x57) * 8 + unaff_s5;
        bVar1 = *(byte *)(iVar10 + 4);
        *(uint *)(iVar6 + 0x1c) =
             (uint)*(ushort *)(unaff_s0 + 0xce) + (uint)*(ushort *)((int)unaff_s0 + 0x33a) + 4;
        iVar5 = *(int *)(iVar6 + 0x14);
        uVar8 = *(ushort *)(unaff_s3 + 0x54) + 1;
        *(short *)(unaff_s3 + 0x54) = (short)(uVar8 * 0x10000 >> 0x10);
        *(short *)(iVar5 + 0x16) = (short)((uVar8 & 0xffff) << 4);
        cVar9 = *(char *)((int)unaff_s0 + 0x343);
        *(char *)(iVar10 + 2) = cVar9;
        if (cVar9 == '\0') {
          if ((*(char *)((int)unaff_s0 + 0x346) != '\0') ||
             (bVar7 = bVar1 & 0xfe,
             *(int *)((*(uint *)(unaff_s4 + 0x18) & uRam00000000) * 0x330 +
                     *(int *)(unaff_s4 + 0x1c)) != 0)) {
            bVar7 = bVar1 | 1;
          }
          *(undefined *)((int)unaff_s0 + 0x343) = *(undefined *)(iVar10 + 3);
        }
        else {
          bVar7 = bVar1 & 0xfe;
          if ((*(byte *)((int)unaff_s0 + 0x346) & 2) != 0) {
            bVar7 = bVar1 | 1;
          }
        }
        *(byte *)(iVar10 + 4) = bVar7 | 1;
        *(char *)((int)unaff_s0 + 0x343) = *(char *)((int)unaff_s0 + 0x343) + -1;
        if (*(char *)((int)unaff_s0 + 0x347) != '\0') {
          cVar9 = *(char *)((int)unaff_s0 + 0x347) + -1;
          *(char *)((int)unaff_s0 + 0x347) = cVar9;
          if (*(byte *)(unaff_s0 + 0xd2) != 0) {
            *(char *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)(unaff_s0 + 0xd2)) = cVar9;
            if (*(byte *)((int)unaff_s0 + 0x349) != 0) {
              *(undefined *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)((int)unaff_s0 + 0x349)) =
                   *(undefined *)((int)unaff_s0 + 0x347);
            }
          }
          cVar9 = *(char *)((int)unaff_s0 + 0x347);
          if (cVar9 != '\0') {
            uVar2 = *(undefined *)((int)unaff_s0 + 0x57);
            puVar4 = (undefined *)FUN_000106bc(0x4e,0xd,0,2);
            *puVar4 = uVar2;
            puVar4[1] = cVar9;
            _L0();
            if (*(char *)((int)unaff_s0 + 0x347) != '\0') goto _L0;
          }
          *(undefined *)((int)unaff_s0 + 0x347) = 1;
        }
_L0:
        FUN_00010600(unaff_s0,unaff_s0 + 0x18);
        iVar5 = FUN_0001060a(unaff_s0);
      } while (iVar5 == 0);
      cVar9 = *(char *)((int)unaff_s0 + 0x57);
      pcVar3 = (char *)FUN_00010624(0x4a,0xd,0,3);
      *pcVar3 = cVar9 + '\n';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      _L0();
      *(undefined *)((int)unaff_s0 + 0x8f) = *(undefined *)((int)unaff_s0 + 0x57);
      *(undefined *)(unaff_s0 + 0x24) = 0xff;
      iVar5 = _L0(unaff_s0 + 0x18,4);
      if (iVar5 != 0) {
        *(int *)(unaff_s2 + 4) = *(int *)(unaff_s2 + 4) + 1;
      }
      unaff_s1 = (*(byte *)((int)unaff_s0 + 0x57) + 10) * 0x1b0 + unaff_s6;
    } while ((*(byte *)(unaff_s1 + 0x32) & 2) == 0);
    *(undefined4 *)(unaff_s1 + 0x34) = 9;
    param_3 = 0;
    param_1 = unaff_s0;
    param_2 = unaff_s1;
  } while( true );
}



void FUN_000106bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int *unaff_s0;
  int unaff_s1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  char unaff_s7;
  undefined unaff_s8;
  
  do {
    puVar4 = (undefined *)FUN_000106bc(param_1,param_2,param_3,param_4);
    *puVar4 = unaff_s8;
    puVar4[1] = unaff_s7;
    _L0();
    if (*(char *)((int)unaff_s0 + 0x347) != '\0') goto _L0;
    do {
      *(undefined *)((int)unaff_s0 + 0x347) = 1;
_L0:
      do {
        FUN_00010600(unaff_s0,unaff_s1);
        iVar2 = FUN_0001060a(unaff_s0);
        if (iVar2 != 0) {
          cVar8 = *(char *)((int)unaff_s0 + 0x57);
          pcVar3 = (char *)FUN_00010624(0x4a,0xd,0,3);
          *pcVar3 = cVar8 + '\n';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          _L0();
          *(undefined *)((int)unaff_s0 + 0x8f) = *(undefined *)((int)unaff_s0 + 0x57);
          *(undefined *)(unaff_s0 + 0x24) = 0xff;
          iVar2 = _L0(unaff_s1,4);
          if (iVar2 != 0) {
            *(int *)(unaff_s2 + 4) = *(int *)(unaff_s2 + 4) + 1;
          }
          iVar2 = (*(byte *)((int)unaff_s0 + 0x57) + 10) * 0x1b0 + unaff_s6;
          if ((*(byte *)(iVar2 + 0x32) & 2) != 0) {
            *(undefined4 *)(iVar2 + 0x34) = 9;
            FUN_0001068c(unaff_s0,iVar2,0);
            *(undefined4 *)(iVar2 + 0x34) = 0;
          }
        }
        do {
          unaff_s0 = (int *)*unaff_s0;
          if (unaff_s0 == (int *)0x0) {
            return;
          }
        } while (((*(char *)((int)unaff_s0 + 0x56) != '\x02') ||
                 (*(char *)((int)unaff_s0 + 0x342) == '\0')) ||
                (*(char *)((int)unaff_s0 + 0x341) != *(char *)(unaff_s0 + 0xd0)));
        iVar5 = unaff_s0[0x33];
        iVar9 = (uint)*(byte *)((int)unaff_s0 + 0x57) * 8 + unaff_s5;
        bVar1 = *(byte *)(iVar9 + 4);
        *(uint *)(iVar5 + 0x1c) =
             (uint)*(ushort *)(unaff_s0 + 0xce) + (uint)*(ushort *)((int)unaff_s0 + 0x33a) + 4;
        iVar2 = *(int *)(iVar5 + 0x14);
        unaff_s1 = (int)(unaff_s0 + 0x18);
        uVar7 = *(ushort *)(unaff_s3 + 0x54) + 1;
        *(short *)(unaff_s3 + 0x54) = (short)(uVar7 * 0x10000 >> 0x10);
        *(short *)(iVar2 + 0x16) = (short)((uVar7 & 0xffff) << 4);
        cVar8 = *(char *)((int)unaff_s0 + 0x343);
        *(char *)(iVar9 + 2) = cVar8;
        if (cVar8 == '\0') {
          if ((*(char *)((int)unaff_s0 + 0x346) != '\0') ||
             (bVar6 = bVar1 & 0xfe,
             *(int *)((*(uint *)(unaff_s4 + 0x18) & uRam00000000) * 0x330 +
                     *(int *)(unaff_s4 + 0x1c)) != 0)) {
            bVar6 = bVar1 | 1;
          }
          *(undefined *)((int)unaff_s0 + 0x343) = *(undefined *)(iVar9 + 3);
        }
        else {
          bVar6 = bVar1 & 0xfe;
          if ((*(byte *)((int)unaff_s0 + 0x346) & 2) != 0) {
            bVar6 = bVar1 | 1;
          }
        }
        *(byte *)(iVar9 + 4) = bVar6 | 1;
        *(char *)((int)unaff_s0 + 0x343) = *(char *)((int)unaff_s0 + 0x343) + -1;
      } while (*(char *)((int)unaff_s0 + 0x347) == '\0');
      cVar8 = *(char *)((int)unaff_s0 + 0x347) + -1;
      *(char *)((int)unaff_s0 + 0x347) = cVar8;
      if (*(byte *)(unaff_s0 + 0xd2) != 0) {
        *(char *)(*(int *)(iVar5 + 0x14) + (uint)*(byte *)(unaff_s0 + 0xd2)) = cVar8;
        if (*(byte *)((int)unaff_s0 + 0x349) != 0) {
          *(undefined *)(*(int *)(iVar5 + 0x14) + (uint)*(byte *)((int)unaff_s0 + 0x349)) =
               *(undefined *)((int)unaff_s0 + 0x347);
        }
      }
      unaff_s7 = *(char *)((int)unaff_s0 + 0x347);
    } while (unaff_s7 == '\0');
    unaff_s8 = *(undefined *)((int)unaff_s0 + 0x57);
    param_4 = 2;
    param_3 = 0;
    param_2 = 0xd;
    param_1 = 0x4e;
  } while( true );
}



void _L0(void)

{
  byte bVar1;
  undefined uVar2;
  int *unaff_s0;
  int unaff_s1;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  do {
    _L0();
    if (*(char *)((int)unaff_s0 + 0x347) != '\0') goto _L0;
    do {
      *(undefined *)((int)unaff_s0 + 0x347) = 1;
_L0:
      do {
        FUN_00010600(unaff_s0,unaff_s1);
        iVar3 = FUN_0001060a(unaff_s0);
        if (iVar3 != 0) {
          cVar9 = *(char *)((int)unaff_s0 + 0x57);
          pcVar4 = (char *)FUN_00010624(0x4a,0xd,0,3);
          *pcVar4 = cVar9 + '\n';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          _L0();
          *(undefined *)((int)unaff_s0 + 0x8f) = *(undefined *)((int)unaff_s0 + 0x57);
          *(undefined *)(unaff_s0 + 0x24) = 0xff;
          iVar3 = _L0(unaff_s1,4);
          if (iVar3 != 0) {
            *(int *)(unaff_s2 + 4) = *(int *)(unaff_s2 + 4) + 1;
          }
          iVar3 = (*(byte *)((int)unaff_s0 + 0x57) + 10) * 0x1b0 + unaff_s6;
          if ((*(byte *)(iVar3 + 0x32) & 2) != 0) {
            *(undefined4 *)(iVar3 + 0x34) = 9;
            FUN_0001068c(unaff_s0,iVar3,0);
            *(undefined4 *)(iVar3 + 0x34) = 0;
          }
        }
        do {
          unaff_s0 = (int *)*unaff_s0;
          if (unaff_s0 == (int *)0x0) {
            return;
          }
        } while (((*(char *)((int)unaff_s0 + 0x56) != '\x02') ||
                 (*(char *)((int)unaff_s0 + 0x342) == '\0')) ||
                (*(char *)((int)unaff_s0 + 0x341) != *(char *)(unaff_s0 + 0xd0)));
        iVar6 = unaff_s0[0x33];
        iVar10 = (uint)*(byte *)((int)unaff_s0 + 0x57) * 8 + unaff_s5;
        bVar1 = *(byte *)(iVar10 + 4);
        *(uint *)(iVar6 + 0x1c) =
             (uint)*(ushort *)(unaff_s0 + 0xce) + (uint)*(ushort *)((int)unaff_s0 + 0x33a) + 4;
        iVar3 = *(int *)(iVar6 + 0x14);
        unaff_s1 = (int)(unaff_s0 + 0x18);
        uVar8 = *(ushort *)(unaff_s3 + 0x54) + 1;
        *(short *)(unaff_s3 + 0x54) = (short)(uVar8 * 0x10000 >> 0x10);
        *(short *)(iVar3 + 0x16) = (short)((uVar8 & 0xffff) << 4);
        cVar9 = *(char *)((int)unaff_s0 + 0x343);
        *(char *)(iVar10 + 2) = cVar9;
        if (cVar9 == '\0') {
          if ((*(char *)((int)unaff_s0 + 0x346) != '\0') ||
             (bVar7 = bVar1 & 0xfe,
             *(int *)((*(uint *)(unaff_s4 + 0x18) & uRam00000000) * 0x330 +
                     *(int *)(unaff_s4 + 0x1c)) != 0)) {
            bVar7 = bVar1 | 1;
          }
          *(undefined *)((int)unaff_s0 + 0x343) = *(undefined *)(iVar10 + 3);
        }
        else {
          bVar7 = bVar1 & 0xfe;
          if ((*(byte *)((int)unaff_s0 + 0x346) & 2) != 0) {
            bVar7 = bVar1 | 1;
          }
        }
        *(byte *)(iVar10 + 4) = bVar7 | 1;
        *(char *)((int)unaff_s0 + 0x343) = *(char *)((int)unaff_s0 + 0x343) + -1;
      } while (*(char *)((int)unaff_s0 + 0x347) == '\0');
      cVar9 = *(char *)((int)unaff_s0 + 0x347) + -1;
      *(char *)((int)unaff_s0 + 0x347) = cVar9;
      if (*(byte *)(unaff_s0 + 0xd2) != 0) {
        *(char *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)(unaff_s0 + 0xd2)) = cVar9;
        if (*(byte *)((int)unaff_s0 + 0x349) != 0) {
          *(undefined *)(*(int *)(iVar6 + 0x14) + (uint)*(byte *)((int)unaff_s0 + 0x349)) =
               *(undefined *)((int)unaff_s0 + 0x347);
        }
      }
      cVar9 = *(char *)((int)unaff_s0 + 0x347);
    } while (cVar9 == '\0');
    uVar2 = *(undefined *)((int)unaff_s0 + 0x57);
    puVar5 = (undefined *)FUN_000106bc(0x4e,0xd,0,2);
    *puVar5 = uVar2;
    puVar5[1] = cVar9;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mm_bcn_updated(void *env,int dma_queue)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  _L0(0x40,*(undefined2 *)(iRam00000000 + -4),0);
  iVar3 = iRam00000000;
  uVar7 = (uint)*(byte *)((int)env + 0x57);
  iVar4 = *(int *)((int)env + 0xcc);
  uVar1 = *(ushort *)(iRam00000000 + 6);
  iVar9 = (uint)*(ushort *)(iRam00000000 + 4) - (uint)*(byte *)(iRam00000000 + 8);
  iVar6 = *(int *)(iVar4 + 0x14);
  *(short *)((int)env + 0x338) = (short)iVar9;
  _L0(uVar7,*(undefined2 *)(iVar3 + 4),*(undefined4 *)(iVar4 + 0x14));
  iVar5 = *(int *)(iVar4 + 0x14) + (*(ushort *)(iVar3 + 6) - 1);
  *(int *)(iVar4 + 0x18) = iVar5;
  iVar5 = *(byte *)(iVar3 + 8) + 1 + iVar5;
  iVar8 = uVar7 * 0x14;
  *(int *)(iVar8 + 8) = iVar5;
  uVar2 = *(ushort *)(iVar3 + 6);
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(uint *)(iVar8 + 0xc) = ~(uint)uVar2 + iVar9 + iVar5;
  _DAT_00000024 = _DAT_44b000a0 & 0xff;
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  *(uint *)(iVar4 + 0x10) = (uint)*(byte *)((int)env + 0x57) * 0x28;
  *(undefined *)((int)env + 0x342) = 1;
  *(undefined *)(uVar7 * 8 + 3) = *(undefined *)(iVar6 + uVar1 + 3);
  iVar3 = iRam00000000;
  *(undefined *)((int)env + 0x347) = 0;
  *(undefined *)((int)env + 0x348) = *(undefined *)(iVar3 + 10);
  *(undefined *)((int)env + 0x349) = *(undefined *)(iVar3 + 0xb);
  if (*(byte *)(iVar3 + 10) != 0) {
    *(char *)((int)env + 0x347) =
         *(char *)(*(int *)(*(int *)((int)env + 0xcc) + 0x14) + (uint)*(byte *)(iVar3 + 10)) +
         '\x01';
  }
  DAT_00000009 = 0;
  if (DAT_00000008 != '\0') {
    _L0();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(uint uRam00000024)

{
  ushort uVar1;
  ushort uVar2;
  int unaff_s0;
  int *unaff_s1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *unaff_s8;
  int iVar9;
  
  _L0();
  uVar7 = (uint)*(byte *)(unaff_s0 + 0x57);
  iVar5 = *unaff_s1;
  iVar3 = *(int *)(unaff_s0 + 0xcc);
  uVar1 = *(ushort *)(iVar5 + 6);
  iVar9 = (uint)*(ushort *)(iVar5 + 4) - (uint)*(byte *)(iVar5 + 8);
  iVar6 = *(int *)(iVar3 + 0x14);
  *(short *)(unaff_s0 + 0x338) = (short)iVar9;
  _L0(uVar7,*(undefined2 *)(iVar5 + 4),*(undefined4 *)(iVar3 + 0x14));
  iVar4 = *(int *)(iVar3 + 0x14) + (*(ushort *)(iVar5 + 6) - 1);
  *(int *)(iVar3 + 0x18) = iVar4;
  iVar4 = *(byte *)(iVar5 + 8) + 1 + iVar4;
  iVar8 = uVar7 * 0x14;
  *(int *)(iVar8 + 8) = iVar4;
  uVar2 = *(ushort *)(iVar5 + 6);
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(uint *)(iVar8 + 0xc) = ~(uint)uVar2 + iVar9 + iVar4;
  uRam00000024 = _DAT_44b000a0 & 0xff;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(uint *)(iVar3 + 0x10) = (uint)*(byte *)(unaff_s0 + 0x57) * 0x28;
  *(undefined *)(unaff_s0 + 0x342) = 1;
  *(undefined *)(uVar7 * 8 + 3) = *(undefined *)(iVar6 + uVar1 + 3);
  iVar3 = *unaff_s8;
  *(undefined *)(unaff_s0 + 0x347) = 0;
  *(undefined *)(unaff_s0 + 0x348) = *(undefined *)(iVar3 + 10);
  *(undefined *)(unaff_s0 + 0x349) = *(undefined *)(iVar3 + 0xb);
  if (*(byte *)(iVar3 + 10) != 0) {
    *(char *)(unaff_s0 + 0x347) =
         *(char *)(*(int *)(*(int *)(unaff_s0 + 0xcc) + 0x14) + (uint)*(byte *)(iVar3 + 10)) +
         '\x01';
  }
  *(undefined *)((int)unaff_s8 + 9) = 0;
  if (*(char *)(unaff_s8 + 2) != '\0') {
    _L0();
  }
  *unaff_s8 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(uint uRam00000024)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int iVar3;
  int *unaff_s8;
  int unaff_s9;
  
  _L0();
  iVar2 = *(int *)(unaff_s1 + 0x14) + (*(ushort *)(unaff_s3 + 6) - 1);
  *(int *)(unaff_s1 + 0x18) = iVar2;
  iVar2 = *(byte *)(unaff_s3 + 8) + 1 + iVar2;
  iVar3 = unaff_s7 * 0x14;
  *(int *)(iVar3 + 8) = iVar2;
  uVar1 = *(ushort *)(unaff_s3 + 6);
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(uint *)(iVar3 + 0xc) = ~(uint)uVar1 + unaff_s9 + iVar2;
  uRam00000024 = _DAT_44b000a0 & 0xff;
  *(undefined4 *)(unaff_s1 + 0x28) = 0;
  *(undefined4 *)(unaff_s1 + 0x24) = 0;
  *(undefined4 *)(unaff_s1 + 0x3c) = 0;
  *(uint *)(unaff_s1 + 0x10) = (uint)*(byte *)(unaff_s0 + 0x57) * 0x28;
  *(undefined *)(unaff_s0 + 0x342) = 1;
  *(undefined *)(unaff_s4 + 3) = *(undefined *)(unaff_s5 + unaff_s6);
  iVar2 = *unaff_s8;
  *(undefined *)(unaff_s0 + 0x347) = 0;
  *(undefined *)(unaff_s0 + 0x348) = *(undefined *)(iVar2 + 10);
  *(undefined *)(unaff_s0 + 0x349) = *(undefined *)(iVar2 + 0xb);
  if (*(byte *)(iVar2 + 10) != 0) {
    *(char *)(unaff_s0 + 0x347) =
         *(char *)(*(int *)(*(int *)(unaff_s0 + 0xcc) + 0x14) + (uint)*(byte *)(iVar2 + 10)) +
         '\x01';
  }
  *(undefined *)((int)unaff_s8 + 9) = 0;
  if (*(char *)(unaff_s8 + 2) != '\0') {
    _L0();
  }
  *unaff_s8 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined4 *unaff_s8;
  
  _L0();
  *unaff_s8 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void mm_bcn_update(mm_bcn_change_req *param)

{
  _LVL160((uint)param->inst_nbr * 0x34c + 0x14c,param + 1,param->bcn_len);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL160(void)

{
  _LVL160();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mm_bcn_transmitted(void *env,uint32_t status)

{
  int iVar1;
  
  if (_DAT_00000004 == 0) {
    status = FUN_000108ec(0,0,0x244);
  }
  _DAT_00000004 = _DAT_00000004 + -1;
  if (_DAT_00000004 == 0) {
    if (DAT_0000000a != '\0') {
      FUN_00010904(uRam00000000,status);
    }
    while (_DAT_0000001c != 0) {
      iVar1 = FUN_00010936(0x1c);
      FUN_00010940(iVar1 + 0xc);
    }
    if (*(char *)((int)env + 0x347) == '\x01') {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_000108ec(void)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int iVar1;
  
  FUN_000108ec();
  iVar1 = unaff_s0[1];
  unaff_s0[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    if (*(char *)((int)unaff_s0 + 10) != '\0') {
      FUN_00010904(*unaff_s0);
    }
    while (unaff_s0[7] != 0) {
      iVar1 = FUN_00010936(0x1c);
      FUN_00010940(iVar1 + 0xc);
    }
    if (*(char *)(unaff_s1 + 0x347) == '\x01') {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_00010904(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  FUN_00010904();
  while (*(int *)(unaff_s0 + 0x1c) != 0) {
    iVar1 = FUN_00010936(0x1c);
    FUN_00010940(iVar1 + 0xc);
  }
  if (*(char *)(unaff_s1 + 0x347) != '\x01') {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010936(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  
  while( true ) {
    iVar1 = FUN_00010936(param_1);
    FUN_00010940(iVar1 + 0xc);
    if (*(int *)(unaff_s0 + 0x1c) == 0) break;
    param_1 = unaff_s2 + 0x1c;
  }
  if (*(char *)(unaff_s1 + 0x347) != '\x01') {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010940(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  while (FUN_00010940(param_1), *(int *)(unaff_s0 + 0x1c) != 0) {
    param_1 = FUN_00010936(unaff_s2 + 0x1c);
    param_1 = param_1 + 0xc;
  }
  if (*(char *)(unaff_s1 + 0x347) != '\x01') {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mm_bcn_change(mm_bcn_change_req *param)

{
  if (_DAT_00000004 == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  pmRam00000000 = param;
  DAT_0000000a = 1;
  return;
}


