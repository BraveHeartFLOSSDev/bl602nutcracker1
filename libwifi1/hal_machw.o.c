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

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

struct ipc_a2e_msg {
    uint32_t dummy_word;
    uint32_t msg[127];
};

typedef struct ipc_shared_env_tag ipc_shared_env_tag, *Pipc_shared_env_tag;

typedef struct txdesc_host txdesc_host, *Ptxdesc_host;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

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

typedef char __int8_t;

typedef __int8_t int8_t;

typedef union anon_union.conflict2d6d_for_field_0 anon_union.conflict2d6d_for_field_0, *Panon_union.conflict2d6d_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1121_for_field_3 anon_union.conflict1121_for_field_3, *Panon_union.conflict1121_for_field_3;

typedef union anon_union.conflict1146_for_field_4 anon_union.conflict1146_for_field_4, *Panon_union.conflict1146_for_field_4;

typedef union anon_union.conflict116b_for_field_5 anon_union.conflict116b_for_field_5, *Panon_union.conflict116b_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr {
    struct co_list_hdr * next;
};

union anon_union.conflict1146_for_field_4 {
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

union anon_union.conflict116b_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict1121_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1121_for_field_3 field_3;
    union anon_union.conflict1146_for_field_4 field_4;
    union anon_union.conflict116b_for_field_5 field_5;
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

union anon_union.conflict2d6d_for_field_0 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control {
    union anon_union.conflict2d6d_for_field_0 field_0;
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

typedef union anon_union.conflictb77 anon_union.conflictb77, *Panon_union.conflictb77;

typedef struct anon_struct.conflictb17 anon_struct.conflictb17, *Panon_struct.conflictb17;

typedef struct anon_struct.conflictb4e anon_struct.conflictb4e, *Panon_struct.conflictb4e;

struct anon_struct.conflictb4e {
    uint32_t key[4];
};

struct anon_struct.conflictb17 {
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

union anon_union.conflictb77 {
    struct anon_struct.conflictb17 mic;
    struct anon_struct.conflictb4e mfp;
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictb77_for_u anon_union.conflictb77_for_u, *Panon_union.conflictb77_for_u;

union anon_union.conflictb77_for_u {
    struct anon_struct.conflictb17 mic;
    struct anon_struct.conflictb4e mfp;
};

struct key_info_tag {
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb77_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef enum anon_enum_8.conflict9d2 {
    HAL_MM_TIMER=7,
    KE_EVT_RXUREADY=12,
    TASK_APM=7,
    KE_EVT_RXREADY=13,
    KE_EVT_KE_TIMER=5,
    TASK_API=13,
    IPC_DMA_CHANNEL_MAX=4,
    TASK_LAST_EMB=12,
    DMA_MAX=2,
    PHY_BAND_MAX=2,
    TASK_NONE=-1,
    KE_EVT_SECONDARY_TBTT=10,
    HW_RESERVED=1,
    DMA_DL=0,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    TID_MGT=8,
    HAL_TIMER_MAX=9,
    BROADCAST_STA_IDX_MIN=10,
    HAL_AC1_TIMER=1,
    KE_EVT_KE_MESSAGE=7,
    AC_BE=1,
    AC_BK=0,
    PHY_BAND_5G=1,
    KE_EVT_IPC_EMB_TXDESC_BCN=20,
    STA_MAX=12,
    DMA_UL=1,
    KE_EVT_MM_TIMER=4,
    KE_EVT_HW_IDLE=8,
    AC_VI=2,
    KE_EVT_TXCFM_AC1=18,
    AC_VO=3,
    KE_EVT_TXCFM_AC0=19,
    KE_EVT_TXCFM_AC3=16,
    KE_EVT_RXUPLOADED=11,
    KE_EVT_TXCFM_AC2=17,
    SCANU_IDLE=0,
    TASK_RXU=11,
    HAL_KE_TIMER=8,
    TASK_SCAN=2,
    KE_EVT_DUMP_STATISTIC=26,
    BROADCAST_STA_IDX_MAX=11,
    HAL_AC0_TIMER=0,
    KE_EVT_RESET=0,
    AC_MAX=4,
    KE_EVT_GP_DMA_DL=25,
    KE_EVT_TXCFM_BCN=15,
    HAL_IDLE_TIMER=5,
    HAL_RX_TIMER=6,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    TID_MAX=9,
    TASK_BAM=8,
    HAL_BCN_TIMER=4,
    KE_EVT_GP_DMA_UL=3,
    IPC_DMA_CHANNEL_DATA_TX=3,
    TASK_SM=6,
    KE_EVT_IPC_EMB_MSG=6,
    MODE_802_11AC_5=6,
    TASK_SCANU=4,
    TASK_DBG=1,
    HAL_AC2_TIMER=2,
    HW_IDLE=0,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    TID_2=2,
    TID_5=5,
    TID_4=4,
    TID_7=7,
    TID_6=6,
    MODE_RESERVED=5,
    MODE_802_11N_2_4=3,
    MODE_802_11G=2,
    TASK_MM=0,
    MODE_802_11B=0,
    HW_DOZE=2,
    MODE_802_11A=1,
    TASK_ME=5,
    IPC_DMA_CHANNEL_DATA_RX=1,
    HW_ACTIVE=3,
    KE_EVT_MAX=27,
    KE_EVT_PRIMARY_TBTT=9,
    TASK_MESH=9,
    MODE_802_11N_5=4,
    KE_EVT_IPC_EMB_TXDESC_AC3=21,
    HAL_AC3_TIMER=3,
    TASK_CFG=12,
    TASK_MAX=14,
    TASK_TDLS=3,
    KE_EVT_IPC_EMB_TXDESC_AC2=22,
    KE_EVT_IPC_EMB_TXDESC_AC1=23,
    KE_EVT_IPC_EMB_TXDESC_AC0=24,
    PHY_BAND_2G4=0,
    KE_EVT_TXFRAME_CFM=14,
    KE_EVT_IRQ_USR=2,
    INVALID_STA_IDX=-1,
    SCANU_STATE_MAX=2,
    KE_EVT_IRQ_UP_BH=1,
    SCANU_SCANNING=1,
    TASK_HOSTAPD_U=10
} anon_enum_8.conflict9d2;

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

typedef enum anon_enum_16.conflict17c4 {
    HAL_AC2_TIMER_BIT=4,
    HAL_AC1_TIMER_BIT=2,
    HAL_AC3_TIMER_BIT=8,
    HAL_MM_TIMER_BIT=-128,
    HAL_KE_TIMER_BIT=256,
    HAL_RX_TIMER_BIT=64,
    HAL_AC0_TIMER_BIT=1,
    HAL_BCN_TIMER_BIT=16,
    HAL_IDLE_TIMER_BIT=32
} anon_enum_16.conflict17c4;

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

typedef struct anon_struct.conflict36d2 anon_struct.conflict36d2, *Panon_struct.conflict36d2;

struct anon_struct.conflict36d2 {
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

typedef struct anon_struct.conflict379f anon_struct.conflict379f, *Panon_struct.conflict379f;

struct anon_struct.conflict379f {
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

typedef union anon_union.conflict389a anon_union.conflict389a, *Panon_union.conflict389a;

union anon_union.conflict389a {
    struct anon_struct.conflict36d2 sta;
    struct anon_struct.conflict379f ap;
};

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict389a_for_u anon_union.conflict389a_for_u, *Panon_union.conflict389a_for_u;

union anon_union.conflict389a_for_u {
    struct anon_struct.conflict36d2 sta;
    struct anon_struct.conflict379f ap;
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
    union anon_union.conflict389a_for_u u;
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

typedef union anon_union.conflict3229_for_rate_map anon_union.conflict3229_for_rate_map, *Panon_union.conflict3229_for_rate_map;

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

union anon_union.conflict3229_for_rate_map {
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
    union anon_union.conflict3229_for_rate_map rate_map;
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

typedef union anon_union.conflict3229 anon_union.conflict3229, *Panon_union.conflict3229;

union anon_union.conflict3229 {
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

typedef union anon_union.conflict2d6d anon_union.conflict2d6d, *Panon_union.conflict2d6d;

union anon_union.conflict2d6d {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag {
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict1146 anon_union.conflict1146, *Panon_union.conflict1146;

union anon_union.conflict1146 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict1121 anon_union.conflict1121, *Panon_union.conflict1121;

union anon_union.conflict1121 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict116b anon_union.conflict116b, *Panon_union.conflict116b;

union anon_union.conflict116b {
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint8_t blmac_soft_reset_getf(void)

{
  uint uVar1;
  
  uVar1 = _DAT_44b08050;
  if ((_DAT_44b08050 & 0xfffffffe) != 0) {
    FUN_00010026(0,0,0x11d);
  }
  return (uint8_t)uVar1;
}



undefined FUN_00010026(void)

{
  undefined unaff_s0;
  
  FUN_00010026();
  return unaff_s0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void blmac_wt_2_crypt_clk_ratio_setf(uint8_t wt2cryptclkratio)

{
  undefined3 in_register_00002029;
  
  _DAT_44b000f0 = CONCAT31(in_register_00002029,wt2cryptclkratio) | _DAT_44b000f0 & 0xfffffffc;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void blmac_rx_flow_cntrl_en_setf(void)

{
  _DAT_44b00054 = _DAT_44b00054 & 0xfffeffff | 0x10000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void blmac_key_sto_ram_reset_setf(void)

{
  _DAT_44b0004c = _DAT_44b0004c & 0xffffdfff | 0x2000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void hal_machw_idle_req(void)

{
  if ((_DAT_44b00038 & 0xf) == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _DAT_00000004 = _DAT_00000004 | 4;
  _DAT_44b00038 = 0;
  _DAT_44b0013c = _DAT_44b00120 + 50000;
  _DAT_44b08088 = 0x20;
  _DAT_44b0808c = _DAT_44b0808c | 0x20;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void hal_machw_stop(void)

{
  int iVar1;
  
  _DAT_44b08050 = 1;
  do {
    iVar1 = _L0();
  } while (iVar1 != 0);
  return;
}



void _L0(void)

{
  int iVar1;
  
  do {
    iVar1 = _L0();
  } while (iVar1 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void hal_machw_init(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  _DAT_44b08050 = 1;
  do {
    iVar2 = _L0();
  } while (iVar2 != 0);
  _DAT_44b00404 = 0x24f637;
  _DAT_44b00400 = 0x49;
  _DAT_44920004 = 0x5010001f;
  uVar3 = _L0();
  uVar1 = _DAT_44b000e4 & 0xff;
  uVar5 = _DAT_44b000e4 & 0xffffff00 | 0x28;
  uVar6 = (((_DAT_44b000e4 & 0x3ff00) >> 8) * uVar3) / uVar1 << 8;
  _DAT_44b000e4 = uVar5;
  if ((uVar6 & 0xfc0000) != 0) {
    FUN_000101b2(0,0,0x1d59);
  }
  _DAT_44b000e4 = (_DAT_44b000e4 & 0xfffc00ff | uVar6 & 0xffff00) & 0xf003ffff | 0x2200000;
  _DAT_44b000e8 =
       (((_DAT_44b000e8 >> 8 & 0xffff) * uVar3) / uVar1 & 0xffff) << 8 | _DAT_44b000e8 & 0xff0000ff;
  uVar5 = _DAT_44b000ec & 0xc00fffff | 0x2700000;
  uVar6 = (((_DAT_44b000ec & 0xffc00) >> 10) * uVar3) / uVar1 << 10;
  _DAT_44b000ec = uVar5;
  if ((uVar6 & 0x3f00000) != 0) {
    FUN_00010270(0,0,0x1ea2);
  }
  uVar4 = 3;
  _DAT_44b000ec = _DAT_44b000ec & 0xfff00000 | uVar6 & 0x3fffc00 | 0xb4;
  if (0x1d < uVar3) {
    uVar4 = 2;
    if (0x3b < uVar3) {
      uVar4 = 1;
    }
  }
  _L48(uVar4);
  _DAT_44b000f4 =
       (((_DAT_44b000f4 >> 8 & 0xffff) * uVar3) / uVar1 & 0xffff) << 8 | _DAT_44b000f4 & 0xff0000ff;
  _DAT_44b000f8 =
       (((_DAT_44b000f8 >> 8 & 0xffff) * uVar3) / uVar1 & 0xffff) << 8 | _DAT_44b000f8 & 0xff0000ff;
  uVar5 = ((_DAT_44b00104 >> 0x14 & 0x3ff) * uVar3) / uVar1 << 0x14;
  if ((uVar5 & 0xc0000000) != 0) {
    FUN_00010350(0,0,0x228a);
  }
  uVar5 = _DAT_44b00104 & 0xc00fffff | uVar5;
  uVar6 = (((_DAT_44b00104 & 0xffc00) >> 10) * uVar3) / uVar1 << 10;
  _DAT_44b00104 = uVar5;
  if ((uVar6 & 0x3f00000) != 0) {
    FUN_000103ae(0,0,0x22a4);
  }
  uVar5 = _DAT_44b00104 & 0xfff003ff | uVar6 & 0x3fffc00;
  uVar1 = ((_DAT_44b00104 & 0x3ff) * uVar3) / uVar1;
  _DAT_44b00104 = uVar5;
  if ((uVar1 & 0xfc00) != 0) {
    FUN_00010408(0,0,0x22be);
  }
  _DAT_44b00104 = _DAT_44b00104 & 0xfffffc00 | uVar1 & 0xffff;
  _DAT_44b08074 = 0x8373f14c;
  _DAT_44b0004c = _DAT_44b0004c & 0xfffff7ff;
  if (_DAT_44b000d8 >> 0x18 < 0x11) {
    FUN_0001045e(0,0,0x124);
  }
  FUN_00010474(0,2,0x11,8);
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar2 = _L0();
  uVar1 = (iVar2 + 1) * 0x4000000;
  if ((uVar1 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  do {
    iVar2 = _L0();
  } while (iVar2 != 0);
  _DAT_44b00404 = 0x24f637;
  _DAT_44b00400 = 0x49;
  _DAT_44920004 = 0x5010001f;
  uVar3 = _L0();
  uVar1 = _DAT_44b000e4 & 0xff;
  uVar5 = _DAT_44b000e4 & 0xffffff00 | 0x28;
  uVar6 = (((_DAT_44b000e4 & 0x3ff00) >> 8) * uVar3) / uVar1 << 8;
  _DAT_44b000e4 = uVar5;
  if ((uVar6 & 0xfc0000) != 0) {
    FUN_000101b2(0,0,0x1d59);
  }
  _DAT_44b000e4 = (_DAT_44b000e4 & 0xfffc00ff | uVar6 & 0xffff00) & 0xf003ffff | 0x2200000;
  _DAT_44b000e8 =
       (((_DAT_44b000e8 >> 8 & 0xffff) * uVar3) / uVar1 & 0xffff) << 8 | _DAT_44b000e8 & 0xff0000ff;
  uVar5 = _DAT_44b000ec & 0xc00fffff | 0x2700000;
  uVar6 = (((_DAT_44b000ec & 0xffc00) >> 10) * uVar3) / uVar1 << 10;
  _DAT_44b000ec = uVar5;
  if ((uVar6 & 0x3f00000) != 0) {
    FUN_00010270(0,0,0x1ea2);
  }
  uVar4 = 3;
  _DAT_44b000ec = _DAT_44b000ec & 0xfff00000 | uVar6 & 0x3fffc00 | 0xb4;
  if (0x1d < uVar3) {
    uVar4 = 2;
    if (0x3b < uVar3) {
      uVar4 = 1;
    }
  }
  _L48(uVar4);
  _DAT_44b000f4 =
       (((_DAT_44b000f4 >> 8 & 0xffff) * uVar3) / uVar1 & 0xffff) << 8 | _DAT_44b000f4 & 0xff0000ff;
  _DAT_44b000f8 =
       (((_DAT_44b000f8 >> 8 & 0xffff) * uVar3) / uVar1 & 0xffff) << 8 | _DAT_44b000f8 & 0xff0000ff;
  uVar5 = ((_DAT_44b00104 >> 0x14 & 0x3ff) * uVar3) / uVar1 << 0x14;
  if ((uVar5 & 0xc0000000) != 0) {
    FUN_00010350(0,0,0x228a);
  }
  uVar5 = _DAT_44b00104 & 0xc00fffff | uVar5;
  uVar6 = (((_DAT_44b00104 & 0xffc00) >> 10) * uVar3) / uVar1 << 10;
  _DAT_44b00104 = uVar5;
  if ((uVar6 & 0x3f00000) != 0) {
    FUN_000103ae(0,0,0x22a4);
  }
  uVar5 = _DAT_44b00104 & 0xfff003ff | uVar6 & 0x3fffc00;
  uVar1 = ((_DAT_44b00104 & 0x3ff) * uVar3) / uVar1;
  _DAT_44b00104 = uVar5;
  if ((uVar1 & 0xfc00) != 0) {
    FUN_00010408(0,0,0x22be);
  }
  _DAT_44b00104 = _DAT_44b00104 & 0xfffffc00 | uVar1 & 0xffff;
  _DAT_44b08074 = 0x8373f14c;
  _DAT_44b0004c = _DAT_44b0004c & 0xfffff7ff;
  if (_DAT_44b000d8 >> 0x18 < 0x11) {
    FUN_0001045e(0,0,0x124);
  }
  FUN_00010474(0,2,0x11,8);
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar2 = _L0();
  uVar1 = (iVar2 + 1) * 0x4000000;
  if ((uVar1 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_s2;
  
  uVar2 = _L0();
  uVar1 = *(uint *)(unaff_s2 + 0xe4) & 0xff;
  *(uint *)(unaff_s2 + 0xe4) = *(uint *)(unaff_s2 + 0xe4) & 0xffffff00 | 0x28;
  uVar5 = ((*(uint *)(unaff_s2 + 0xe4) >> 8 & 0x3ff) * uVar2) / uVar1 << 8;
  if ((uVar5 & 0xfc0000) != 0) {
    FUN_000101b2(0,0,0x1d59);
  }
  _DAT_44b000e4 = (_DAT_44b000e4 & 0xfffc00ff | uVar5 & 0xffff00) & 0xf003ffff | 0x2200000;
  _DAT_44b000e8 =
       (((_DAT_44b000e8 >> 8 & 0xffff) * uVar2) / uVar1 & 0xffff) << 8 | _DAT_44b000e8 & 0xff0000ff;
  uVar5 = _DAT_44b000ec & 0xc00fffff | 0x2700000;
  uVar6 = (((_DAT_44b000ec & 0xffc00) >> 10) * uVar2) / uVar1 << 10;
  _DAT_44b000ec = uVar5;
  if ((uVar6 & 0x3f00000) != 0) {
    FUN_00010270(0,0,0x1ea2);
  }
  uVar3 = 3;
  _DAT_44b000ec = _DAT_44b000ec & 0xfff00000 | uVar6 & 0x3fffc00 | 0xb4;
  if (0x1d < uVar2) {
    uVar3 = 2;
    if (0x3b < uVar2) {
      uVar3 = 1;
    }
  }
  _L48(uVar3);
  _DAT_44b000f4 =
       (((_DAT_44b000f4 >> 8 & 0xffff) * uVar2) / uVar1 & 0xffff) << 8 | _DAT_44b000f4 & 0xff0000ff;
  _DAT_44b000f8 =
       (((_DAT_44b000f8 >> 8 & 0xffff) * uVar2) / uVar1 & 0xffff) << 8 | _DAT_44b000f8 & 0xff0000ff;
  uVar5 = ((_DAT_44b00104 >> 0x14 & 0x3ff) * uVar2) / uVar1 << 0x14;
  if ((uVar5 & 0xc0000000) != 0) {
    FUN_00010350(0,0,0x228a);
  }
  uVar5 = _DAT_44b00104 & 0xc00fffff | uVar5;
  uVar6 = (((_DAT_44b00104 & 0xffc00) >> 10) * uVar2) / uVar1 << 10;
  _DAT_44b00104 = uVar5;
  if ((uVar6 & 0x3f00000) != 0) {
    FUN_000103ae(0,0,0x22a4);
  }
  uVar5 = _DAT_44b00104 & 0xfff003ff | uVar6 & 0x3fffc00;
  uVar1 = ((_DAT_44b00104 & 0x3ff) * uVar2) / uVar1;
  _DAT_44b00104 = uVar5;
  if ((uVar1 & 0xfc00) != 0) {
    FUN_00010408(0,0,0x22be);
  }
  _DAT_44b00104 = _DAT_44b00104 & 0xfffffc00 | uVar1 & 0xffff;
  _DAT_44b08074 = 0x8373f14c;
  _DAT_44b0004c = _DAT_44b0004c & 0xfffff7ff;
  if (_DAT_44b000d8 >> 0x18 < 0x11) {
    FUN_0001045e(0,0,0x124);
  }
  FUN_00010474(0,2,0x11,8);
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar4 = _L0();
  uVar1 = (iVar4 + 1) * 0x4000000;
  if ((uVar1 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000101b2(void)

{
  uint unaff_s0;
  uint unaff_s1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s2;
  
  FUN_000101b2();
  _DAT_44b000e4 = (_DAT_44b000e4 & 0xfffc00ff | unaff_s2) & 0xf003ffff | 0x2200000;
  _DAT_44b000e8 =
       (((_DAT_44b000e8 >> 8 & 0xffff) * unaff_s1) / unaff_s0 & 0xffff) << 8 |
       _DAT_44b000e8 & 0xff0000ff;
  uVar3 = _DAT_44b000ec & 0xc00fffff | 0x2700000;
  uVar4 = (((_DAT_44b000ec & 0xffc00) >> 10) * unaff_s1) / unaff_s0 << 10;
  _DAT_44b000ec = uVar3;
  if ((uVar4 & 0x3f00000) != 0) {
    FUN_00010270(0,0,0x1ea2);
  }
  uVar1 = 3;
  _DAT_44b000ec = _DAT_44b000ec & 0xfff00000 | uVar4 & 0x3fffc00 | 0xb4;
  if (0x1d < unaff_s1) {
    uVar1 = 2;
    if (0x3b < unaff_s1) {
      uVar1 = 1;
    }
  }
  _L48(uVar1);
  _DAT_44b000f4 =
       (((_DAT_44b000f4 >> 8 & 0xffff) * unaff_s1) / unaff_s0 & 0xffff) << 8 |
       _DAT_44b000f4 & 0xff0000ff;
  _DAT_44b000f8 =
       (((_DAT_44b000f8 >> 8 & 0xffff) * unaff_s1) / unaff_s0 & 0xffff) << 8 |
       _DAT_44b000f8 & 0xff0000ff;
  uVar3 = ((_DAT_44b00104 >> 0x14 & 0x3ff) * unaff_s1) / unaff_s0 << 0x14;
  if ((uVar3 & 0xc0000000) != 0) {
    FUN_00010350(0,0,0x228a);
  }
  uVar3 = _DAT_44b00104 & 0xc00fffff | uVar3;
  uVar4 = (((_DAT_44b00104 & 0xffc00) >> 10) * unaff_s1) / unaff_s0 << 10;
  _DAT_44b00104 = uVar3;
  if ((uVar4 & 0x3f00000) != 0) {
    FUN_000103ae(0,0,0x22a4);
  }
  uVar4 = _DAT_44b00104 & 0xfff003ff | uVar4 & 0x3fffc00;
  uVar3 = ((_DAT_44b00104 & 0x3ff) * unaff_s1) / unaff_s0;
  _DAT_44b00104 = uVar4;
  if ((uVar3 & 0xfc00) != 0) {
    FUN_00010408(0,0,0x22be);
  }
  _DAT_44b00104 = _DAT_44b00104 & 0xfffffc00 | uVar3 & 0xffff;
  _DAT_44b08074 = 0x8373f14c;
  _DAT_44b0004c = _DAT_44b0004c & 0xfffff7ff;
  if (_DAT_44b000d8 >> 0x18 < 0x11) {
    FUN_0001045e(0,0,0x124);
  }
  FUN_00010474(0,2,0x11,8);
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar2 = _L0();
  uVar3 = (iVar2 + 1) * 0x4000000;
  if ((uVar3 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010270(void)

{
  uint unaff_s0;
  uint unaff_s1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_s2;
  uint uVar4;
  
  FUN_00010270();
  uVar1 = 3;
  _DAT_44b000ec = (_DAT_44b000ec & 0xfff003ff | unaff_s2) & 0xfffffc00 | 0xb4;
  if (0x1d < unaff_s1) {
    uVar1 = 2;
    if (0x3b < unaff_s1) {
      uVar1 = 1;
    }
  }
  _L48(uVar1);
  _DAT_44b000f4 =
       (((_DAT_44b000f4 >> 8 & 0xffff) * unaff_s1) / unaff_s0 & 0xffff) << 8 |
       _DAT_44b000f4 & 0xff0000ff;
  _DAT_44b000f8 =
       (((_DAT_44b000f8 >> 8 & 0xffff) * unaff_s1) / unaff_s0 & 0xffff) << 8 |
       _DAT_44b000f8 & 0xff0000ff;
  uVar4 = ((_DAT_44b00104 >> 0x14 & 0x3ff) * unaff_s1) / unaff_s0 << 0x14;
  if ((uVar4 & 0xc0000000) != 0) {
    FUN_00010350(0,0,0x228a);
  }
  uVar4 = _DAT_44b00104 & 0xc00fffff | uVar4;
  uVar3 = (((_DAT_44b00104 & 0xffc00) >> 10) * unaff_s1) / unaff_s0 << 10;
  _DAT_44b00104 = uVar4;
  if ((uVar3 & 0x3f00000) != 0) {
    FUN_000103ae(0,0,0x22a4);
  }
  uVar3 = _DAT_44b00104 & 0xfff003ff | uVar3 & 0x3fffc00;
  uVar4 = ((_DAT_44b00104 & 0x3ff) * unaff_s1) / unaff_s0;
  _DAT_44b00104 = uVar3;
  if ((uVar4 & 0xfc00) != 0) {
    FUN_00010408(0,0,0x22be);
  }
  _DAT_44b00104 = _DAT_44b00104 & 0xfffffc00 | uVar4 & 0xffff;
  _DAT_44b08074 = 0x8373f14c;
  _DAT_44b0004c = _DAT_44b0004c & 0xfffff7ff;
  if (_DAT_44b000d8 >> 0x18 < 0x11) {
    FUN_0001045e(0,0,0x124);
  }
  FUN_00010474(0,2,0x11,8);
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar2 = _L0();
  uVar4 = (iVar2 + 1) * 0x4000000;
  if ((uVar4 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L48(void)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  _L48();
  _DAT_44b000f4 =
       (((_DAT_44b000f4 >> 8 & 0xffff) * unaff_s1) / unaff_s0 & 0xffff) << 8 |
       _DAT_44b000f4 & 0xff0000ff;
  _DAT_44b000f8 =
       (((_DAT_44b000f8 >> 8 & 0xffff) * unaff_s1) / unaff_s0 & 0xffff) << 8 |
       _DAT_44b000f8 & 0xff0000ff;
  uVar3 = ((_DAT_44b00104 >> 0x14 & 0x3ff) * unaff_s1) / unaff_s0 << 0x14;
  if ((uVar3 & 0xc0000000) != 0) {
    FUN_00010350(0,0,0x228a);
  }
  uVar3 = _DAT_44b00104 & 0xc00fffff | uVar3;
  uVar2 = (((_DAT_44b00104 & 0xffc00) >> 10) * unaff_s1) / unaff_s0 << 10;
  _DAT_44b00104 = uVar3;
  if ((uVar2 & 0x3f00000) != 0) {
    FUN_000103ae(0,0,0x22a4);
  }
  uVar2 = _DAT_44b00104 & 0xfff003ff | uVar2 & 0x3fffc00;
  uVar3 = ((_DAT_44b00104 & 0x3ff) * unaff_s1) / unaff_s0;
  _DAT_44b00104 = uVar2;
  if ((uVar3 & 0xfc00) != 0) {
    FUN_00010408(0,0,0x22be);
  }
  _DAT_44b00104 = _DAT_44b00104 & 0xfffffc00 | uVar3 & 0xffff;
  _DAT_44b08074 = 0x8373f14c;
  _DAT_44b0004c = _DAT_44b0004c & 0xfffff7ff;
  if (_DAT_44b000d8 >> 0x18 < 0x11) {
    FUN_0001045e(0,0,0x124);
  }
  FUN_00010474(0,2,0x11,8);
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar1 = _L0();
  uVar3 = (iVar1 + 1) * 0x4000000;
  if ((uVar3 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010350(void)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_s2;
  
  FUN_00010350();
  _DAT_44b00104 = _DAT_44b00104 & 0xc00fffff | unaff_s2;
  uVar2 = ((_DAT_44b00104 >> 10 & 0x3ff) * unaff_s1) / unaff_s0 << 10;
  if ((uVar2 & 0x3f00000) != 0) {
    FUN_000103ae(0,0,0x22a4);
  }
  uVar3 = _DAT_44b00104 & 0xfff003ff | uVar2 & 0x3fffc00;
  uVar2 = ((_DAT_44b00104 & 0x3ff) * unaff_s1) / unaff_s0;
  _DAT_44b00104 = uVar3;
  if ((uVar2 & 0xfc00) != 0) {
    FUN_00010408(0,0,0x22be);
  }
  _DAT_44b00104 = _DAT_44b00104 & 0xfffffc00 | uVar2 & 0xffff;
  _DAT_44b08074 = 0x8373f14c;
  _DAT_44b0004c = _DAT_44b0004c & 0xfffff7ff;
  if (_DAT_44b000d8 >> 0x18 < 0x11) {
    FUN_0001045e(0,0,0x124);
  }
  FUN_00010474(0,2,0x11,8);
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar1 = _L0();
  uVar2 = (iVar1 + 1) * 0x4000000;
  if ((uVar2 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000103ae(void)

{
  uint unaff_s0;
  uint uVar1;
  int unaff_s1;
  int iVar2;
  uint unaff_s2;
  
  FUN_000103ae();
  _DAT_44b00104 = _DAT_44b00104 & 0xfff003ff | unaff_s2;
  uVar1 = ((_DAT_44b00104 & 0x3ff) * unaff_s1) / unaff_s0;
  if ((uVar1 & 0xfc00) != 0) {
    FUN_00010408(0,0,0x22be);
  }
  _DAT_44b00104 = _DAT_44b00104 & 0xfffffc00 | uVar1 & 0xffff;
  _DAT_44b08074 = 0x8373f14c;
  _DAT_44b0004c = _DAT_44b0004c & 0xfffff7ff;
  if (_DAT_44b000d8 >> 0x18 < 0x11) {
    FUN_0001045e(0,0,0x124);
  }
  FUN_00010474(0,2,0x11,8);
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar2 = _L0();
  uVar1 = (iVar2 + 1) * 0x4000000;
  if ((uVar1 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010408(void)

{
  uint uVar1;
  int iVar2;
  uint unaff_s2;
  
  FUN_00010408();
  _DAT_44b00104 = _DAT_44b00104 & 0xfffffc00 | unaff_s2;
  _DAT_44b08074 = 0x8373f14c;
  _DAT_44b0004c = _DAT_44b0004c & 0xfffff7ff;
  if (_DAT_44b000d8 >> 0x18 < 0x11) {
    FUN_0001045e(0,0,0x124);
  }
  FUN_00010474(0,2,0x11,8);
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar2 = _L0();
  uVar1 = (iVar2 + 1) * 0x4000000;
  if ((uVar1 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001045e(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_0001045e();
  FUN_00010474(0,2,0x11,8);
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar2 = _L0();
  uVar1 = (iVar2 + 1) * 0x4000000;
  if ((uVar1 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010474(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_00010474();
  _DAT_44b000d8 = 0x21108;
  _DAT_44b08080 = 0x800a07c0;
  _DAT_44b0004c = _DAT_44b0004c | 0x4000780;
  _L0();
  _DAT_44b00060 = 0x7fffffde;
  _DAT_44b00114 = 0x3010a;
  _DAT_44b00064 = 0xff900064;
  _DAT_44b00150 = 0x1000;
  _DAT_44b00224 = 0;
  _DAT_44b000a0 = 0x2020;
  _DAT_44b0004c = _DAT_44b0004c & 0xffffefff | 0x1000;
  _L0();
  _DAT_44b00510 = 0x1c25;
  _DAT_44b00310 = _DAT_44b00310 | 0x80;
  iVar2 = _L0();
  uVar1 = (iVar2 + 1) * 0x4000000;
  if ((uVar1 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x60) = 0x7fffffde;
  *(undefined4 *)(unaff_s0 + 0x114) = 0x3010a;
  *(undefined4 *)(unaff_s0 + 100) = 0xff900064;
  *(undefined4 *)(unaff_s0 + 0x150) = 0x1000;
  *(undefined4 *)(unaff_s0 + 0x224) = 0;
  *(undefined4 *)(unaff_s0 + 0xa0) = 0x2020;
  *(uint *)(unaff_s0 + 0x4c) = *(uint *)(unaff_s0 + 0x4c) & 0xffffefff | 0x1000;
  _L0();
  *(undefined4 *)(unaff_s0 + 0x510) = 0x1c25;
  *(uint *)(unaff_s0 + 0x310) = *(uint *)(unaff_s0 + 0x310) | 0x80;
  iVar2 = _L0();
  uVar1 = (iVar2 + 1) * 0x4000000;
  if ((uVar1 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,0x1539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  undefined4 unaff_s1;
  int iVar2;
  int unaff_s2;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x510) = unaff_s1;
  *(uint *)(unaff_s0 + 0x310) = *(uint *)(unaff_s0 + 0x310) | 0x80;
  iVar2 = _L0();
  uVar1 = (iVar2 + 1) * 0x4000000;
  if ((uVar1 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,unaff_s2 + 0x539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint uVar1;
  int iVar2;
  int unaff_s2;
  
  iVar2 = _L0();
  uVar1 = (iVar2 + 1) * 0x4000000;
  if ((uVar1 & 0xe0000000) != 0) {
    FUN_0001053a(0,0,unaff_s2 + 0x539);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001053a(void)

{
  uint unaff_s0;
  
  FUN_0001053a();
  _DAT_44b0004c = _DAT_44b0004c & 0xfdffffff | 0x2000000;
  _DAT_44b0009c = _DAT_44b0009c & 0xe3ffffff | unaff_s0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void hal_machw_disable_int(void)

{
  _DAT_44b08074 = _DAT_44b08074 & 0x7fffffff;
  _DAT_44b08080 = _DAT_44b08080 & 0x7fffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void hal_machw_reset(void)

{
  if ((_DAT_44b00038 & 0xf) != 0) {
    FUN_000105ac(0);
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xffffff7f;
  _DAT_44b00038 = 0;
  _DAT_44b00054 = 0x7c;
  _DAT_00000004 = _DAT_00000004 & 0xfffffffb;
  _L0();
  _DAT_44b0004c = _DAT_44b0004c | 0x80;
  _DAT_44b08070 = 0x37ff187;
  _DAT_44b08074 = _DAT_44b08074 & 0x7fffffff | 0x80000000;
  _DAT_44b0807c = 0xffffffff;
  _DAT_44b08080 = _DAT_44b08080 & 0x7fffffff | 0x80000000;
  _DAT_44b0808c = _DAT_44b0808c & 0xffffffc0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000105ac(void)

{
  FUN_000105ac();
  _DAT_44b0004c = _DAT_44b0004c & 0xffffff7f;
  _DAT_44b00038 = 0;
  _DAT_44b00054 = 0x7c;
  _DAT_00000004 = _DAT_00000004 & 0xfffffffb;
  _L0();
  _DAT_44b0004c = _DAT_44b0004c | 0x80;
  _DAT_44b08070 = 0x37ff187;
  _DAT_44b08074 = _DAT_44b08074 & 0x7fffffff | 0x80000000;
  _DAT_44b0807c = 0xffffffff;
  _DAT_44b08080 = _DAT_44b08080 & 0x7fffffff | 0x80000000;
  _DAT_44b0808c = _DAT_44b0808c & 0xffffffc0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  
  _L0();
  _DAT_44b0808c = _DAT_44b0808c & 0xffffffc0;
  _DAT_44b0807c = 0xffffffff;
  _DAT_44b08070 = 0x37ff187;
  _DAT_44b08074 = _DAT_44b08074 & 0x7fffffff | 0x80000000;
  _DAT_44b08080 = _DAT_44b08080 & 0x7fffffff | 0x80000000;
  *(uint *)(unaff_s0 + 0x4c) = *(uint *)(unaff_s0 + 0x4c) | 0x80;
  return;
}



// WARNING: Removing unreachable block (ram,0x0001067c)
// WARNING: Removing unreachable block (ram,0x00010688)
// WARNING: Removing unreachable block (ram,0x00010692)

uint8_t hal_machw_search_addr(mac_addr *addr)

{
                    // WARNING: Do nothing block with infinite loop
  do {
  } while( true );
}



void hal_machw_monitor_mode(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool hal_machw_sleep_check(void)

{
  uint uVar1;
  
  uVar1 = 0;
  while (((1 << (uVar1 & 0x1f) & _DAT_44b0808c) == 0 ||
         (-1 < (-2000 - _DAT_44b00120) + *(int *)(&DAT_44b00128 + uVar1 * 4)))) {
    uVar1 = uVar1 + 1;
    if (uVar1 == 9) {
      return true;
    }
  }
  if (-1 < (5000 - _DAT_44b00120) + *(int *)(&DAT_44b00128 + uVar1 * 4)) {
    return false;
  }
  FUN_00010748(0,0,0x208);
  return false;
}



void FUN_00010748(void)

{
  FUN_00010748();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void hal_machw_gen_handler(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = _DAT_44b08074 & _DAT_44b0806c;
  _DAT_44b08070 = uVar2;
  if ((uVar2 & 0x40001) != 0) {
    FUN_00010786(0x400000);
  }
  if ((uVar2 & 0x80002) != 0) {
    FUN_0001079c(0x200000);
  }
  if ((uVar2 & 4) != 0) {
    if ((_DAT_44b00038 & 0xf) == 0) {
      _DAT_44b0808c = _DAT_44b0808c & 0xffffffdf;
      _DAT_00000004 = _DAT_00000004 & 0xfffffffb;
      _L0(0x800000);
    }
    else {
      FUN_000107c8(0,0,0x8c);
    }
  }
  uVar1 = _DAT_44b08084;
  if ((uVar2 & 8) != 0) {
    _DAT_44b08088 = _DAT_44b08084;
    if ((_DAT_44b08084 & 0x100) != 0) {
      FUN_000107ec(0x4000000);
    }
    if ((uVar1 & 0x40) != 0) {
      _L0();
    }
    if ((uVar1 & 0x80) != 0) {
      FUN_0001080c(0x8000000);
    }
    if ((uVar1 & 1) != 0) {
      FUN_0001082e(0,0,0x22f);
    }
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) != 0) {
        _L0(0,0,0x233);
        return;
      }
      if ((uVar1 & 8) != 0) {
        _L0(0,0,0x234);
        return;
      }
      if ((uVar1 & 0x10) != 0) {
        _L0(0,0,0x235);
        return;
      }
      if ((uVar1 & 0x20) != 0) {
        _L0(0,0,0x236);
        return;
      }
    }
    else {
      _L0(0,0,0x232);
    }
  }
  if ((((((uVar2 & 0x80) == 0) && ((uVar2 & 0x100) == 0)) && (-1 < (int)(uVar2 << 0x13))) &&
      (((-1 < (int)(uVar2 << 0x12) && (-1 < (int)(uVar2 << 0x11))) &&
       ((-1 < (int)(uVar2 << 0x10) && ((-1 < (int)(uVar2 << 0xf) && (-1 < (int)(uVar2 << 0xe))))))))
      ) && ((-1 < (int)(uVar2 << 10) &&
            ((((-1 < (int)(uVar2 << 9) && (-1 < (int)(uVar2 << 7))) && (-1 < (int)(uVar2 << 6))) &&
             (-1 < (int)(uVar2 << 0xb))))))) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010786(void)

{
  uint uVar1;
  uint unaff_s0;
  
  FUN_00010786();
  if ((unaff_s0 & 0x80002) != 0) {
    FUN_0001079c(0x200000);
  }
  if ((unaff_s0 & 4) != 0) {
    if ((_DAT_44b00038 & 0xf) == 0) {
      _DAT_44b0808c = _DAT_44b0808c & 0xffffffdf;
      _DAT_00000004 = _DAT_00000004 & 0xfffffffb;
      _L0(0x800000);
    }
    else {
      FUN_000107c8(0,0,0x8c);
    }
  }
  uVar1 = _DAT_44b08084;
  if ((unaff_s0 & 8) != 0) {
    _DAT_44b08088 = _DAT_44b08084;
    if ((_DAT_44b08084 & 0x100) != 0) {
      FUN_000107ec(0x4000000);
    }
    if ((uVar1 & 0x40) != 0) {
      _L0();
    }
    if ((uVar1 & 0x80) != 0) {
      FUN_0001080c(0x8000000);
    }
    if ((uVar1 & 1) != 0) {
      FUN_0001082e(0,0,0x22f);
    }
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) != 0) {
        _L0(0,0,0x233);
        return;
      }
      if ((uVar1 & 8) != 0) {
        _L0(0,0,0x234);
        return;
      }
      if ((uVar1 & 0x10) != 0) {
        _L0(0,0,0x235);
        return;
      }
      if ((uVar1 & 0x20) != 0) {
        _L0(0,0,0x236);
        return;
      }
    }
    else {
      _L0(0,0,0x232);
    }
  }
  if ((((((unaff_s0 & 0x80) == 0) && ((unaff_s0 & 0x100) == 0)) && (-1 < (int)(unaff_s0 << 0x13)))
      && (((-1 < (int)(unaff_s0 << 0x12) && (-1 < (int)(unaff_s0 << 0x11))) &&
          ((-1 < (int)(unaff_s0 << 0x10) &&
           ((-1 < (int)(unaff_s0 << 0xf) && (-1 < (int)(unaff_s0 << 0xe))))))))) &&
     ((-1 < (int)(unaff_s0 << 10) &&
      ((((-1 < (int)(unaff_s0 << 9) && (-1 < (int)(unaff_s0 << 7))) && (-1 < (int)(unaff_s0 << 6)))
       && (-1 < (int)(unaff_s0 << 0xb))))))) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001079c(void)

{
  uint uVar1;
  uint unaff_s0;
  
  FUN_0001079c();
  if ((unaff_s0 & 4) != 0) {
    if ((_DAT_44b00038 & 0xf) == 0) {
      _DAT_44b0808c = _DAT_44b0808c & 0xffffffdf;
      _DAT_00000004 = _DAT_00000004 & 0xfffffffb;
      _L0(0x800000);
    }
    else {
      FUN_000107c8(0,0,0x8c);
    }
  }
  uVar1 = _DAT_44b08084;
  if ((unaff_s0 & 8) != 0) {
    _DAT_44b08088 = _DAT_44b08084;
    if ((_DAT_44b08084 & 0x100) != 0) {
      FUN_000107ec(0x4000000);
    }
    if ((uVar1 & 0x40) != 0) {
      _L0();
    }
    if ((uVar1 & 0x80) != 0) {
      FUN_0001080c(0x8000000);
    }
    if ((uVar1 & 1) != 0) {
      FUN_0001082e(0,0,0x22f);
    }
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) != 0) {
        _L0(0,0,0x233);
        return;
      }
      if ((uVar1 & 8) != 0) {
        _L0(0,0,0x234);
        return;
      }
      if ((uVar1 & 0x10) != 0) {
        _L0(0,0,0x235);
        return;
      }
      if ((uVar1 & 0x20) != 0) {
        _L0(0,0,0x236);
        return;
      }
    }
    else {
      _L0(0,0,0x232);
    }
  }
  if ((((((unaff_s0 & 0x80) == 0) && ((unaff_s0 & 0x100) == 0)) && (-1 < (int)(unaff_s0 << 0x13)))
      && (((-1 < (int)(unaff_s0 << 0x12) && (-1 < (int)(unaff_s0 << 0x11))) &&
          ((-1 < (int)(unaff_s0 << 0x10) &&
           ((-1 < (int)(unaff_s0 << 0xf) && (-1 < (int)(unaff_s0 << 0xe))))))))) &&
     ((-1 < (int)(unaff_s0 << 10) &&
      ((((-1 < (int)(unaff_s0 << 9) && (-1 < (int)(unaff_s0 << 7))) && (-1 < (int)(unaff_s0 << 6)))
       && (-1 < (int)(unaff_s0 << 0xb))))))) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000107c8(void)

{
  uint uVar1;
  uint unaff_s0;
  
  FUN_000107c8();
  uVar1 = _DAT_44b08084;
  if ((unaff_s0 & 8) != 0) {
    _DAT_44b08088 = _DAT_44b08084;
    if ((_DAT_44b08084 & 0x100) != 0) {
      FUN_000107ec(0x4000000);
    }
    if ((uVar1 & 0x40) != 0) {
      _L0();
    }
    if ((uVar1 & 0x80) != 0) {
      FUN_0001080c(0x8000000);
    }
    if ((uVar1 & 1) != 0) {
      FUN_0001082e(0,0,0x22f);
    }
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) != 0) {
        _L0(0,0,0x233);
        return;
      }
      if ((uVar1 & 8) != 0) {
        _L0(0,0,0x234);
        return;
      }
      if ((uVar1 & 0x10) != 0) {
        _L0(0,0,0x235);
        return;
      }
      if ((uVar1 & 0x20) != 0) {
        _L0(0,0,0x236);
        return;
      }
    }
    else {
      _L0(0,0,0x232);
    }
  }
  if ((((((unaff_s0 & 0x80) == 0) && ((unaff_s0 & 0x100) == 0)) && (-1 < (int)(unaff_s0 << 0x13)))
      && (((-1 < (int)(unaff_s0 << 0x12) && (-1 < (int)(unaff_s0 << 0x11))) &&
          ((-1 < (int)(unaff_s0 << 0x10) &&
           ((-1 < (int)(unaff_s0 << 0xf) && (-1 < (int)(unaff_s0 << 0xe))))))))) &&
     ((-1 < (int)(unaff_s0 << 10) &&
      ((((-1 < (int)(unaff_s0 << 9) && (-1 < (int)(unaff_s0 << 7))) && (-1 < (int)(unaff_s0 << 6)))
       && (-1 < (int)(unaff_s0 << 0xb))))))) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000107ec(void)

{
  uint unaff_s0;
  uint unaff_s1;
  
  FUN_000107ec();
  if ((unaff_s1 & 0x40) != 0) {
    _L0();
  }
  if ((unaff_s1 & 0x80) != 0) {
    FUN_0001080c(0x8000000);
  }
  if ((unaff_s1 & 1) != 0) {
    FUN_0001082e(0,0,0x22f);
  }
  if ((unaff_s1 & 2) == 0) {
    if ((unaff_s1 & 4) != 0) {
      _L0(0,0,0x233);
      return;
    }
    if ((unaff_s1 & 8) != 0) {
      _L0(0,0,0x234);
      return;
    }
    if ((unaff_s1 & 0x10) != 0) {
      _L0(0,0,0x235);
      return;
    }
    if ((unaff_s1 & 0x20) != 0) {
      _L0(0,0,0x236);
      return;
    }
  }
  else {
    _L0(0,0,0x232);
  }
  if ((((((unaff_s0 & 0x80) == 0) && ((unaff_s0 & 0x100) == 0)) && (-1 < (int)(unaff_s0 << 0x13)))
      && (((-1 < (int)(unaff_s0 << 0x12) && (-1 < (int)(unaff_s0 << 0x11))) &&
          ((-1 < (int)(unaff_s0 << 0x10) &&
           ((-1 < (int)(unaff_s0 << 0xf) && (-1 < (int)(unaff_s0 << 0xe))))))))) &&
     ((-1 < (int)(unaff_s0 << 10) &&
      ((((-1 < (int)(unaff_s0 << 9) && (-1 < (int)(unaff_s0 << 7))) && (-1 < (int)(unaff_s0 << 6)))
       && (-1 < (int)(unaff_s0 << 0xb))))))) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  uint unaff_s0;
  uint unaff_s1;
  
  _L0();
  if ((unaff_s1 & 0x80) != 0) {
    FUN_0001080c(0x8000000);
  }
  if ((unaff_s1 & 1) != 0) {
    FUN_0001082e(0,0,0x22f);
  }
  if ((unaff_s1 & 2) == 0) {
    if ((unaff_s1 & 4) != 0) {
      _L0(0,0,0x233);
      return;
    }
    if ((unaff_s1 & 8) != 0) {
      _L0(0,0,0x234);
      return;
    }
    if ((unaff_s1 & 0x10) != 0) {
      _L0(0,0,0x235);
      return;
    }
    if ((unaff_s1 & 0x20) != 0) {
      _L0(0,0,0x236);
      return;
    }
  }
  else {
    _L0(0,0,0x232);
  }
  if ((((((unaff_s0 & 0x80) == 0) && ((unaff_s0 & 0x100) == 0)) && (-1 < (int)(unaff_s0 << 0x13)))
      && (((-1 < (int)(unaff_s0 << 0x12) && (-1 < (int)(unaff_s0 << 0x11))) &&
          ((-1 < (int)(unaff_s0 << 0x10) &&
           ((-1 < (int)(unaff_s0 << 0xf) && (-1 < (int)(unaff_s0 << 0xe))))))))) &&
     ((-1 < (int)(unaff_s0 << 10) &&
      ((((-1 < (int)(unaff_s0 << 9) && (-1 < (int)(unaff_s0 << 7))) && (-1 < (int)(unaff_s0 << 6)))
       && (-1 < (int)(unaff_s0 << 0xb))))))) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001080c(void)

{
  uint unaff_s0;
  uint unaff_s1;
  
  FUN_0001080c();
  if ((unaff_s1 & 1) != 0) {
    FUN_0001082e(0,0,0x22f);
  }
  if ((unaff_s1 & 2) == 0) {
    if ((unaff_s1 & 4) != 0) {
      _L0(0,0,0x233);
      return;
    }
    if ((unaff_s1 & 8) != 0) {
      _L0(0,0,0x234);
      return;
    }
    if ((unaff_s1 & 0x10) != 0) {
      _L0(0,0,0x235);
      return;
    }
    if ((unaff_s1 & 0x20) != 0) {
      _L0(0,0,0x236);
      return;
    }
  }
  else {
    _L0(0,0,0x232);
  }
  if ((((((unaff_s0 & 0x80) == 0) && ((unaff_s0 & 0x100) == 0)) && (-1 < (int)(unaff_s0 << 0x13)))
      && (((-1 < (int)(unaff_s0 << 0x12) && (-1 < (int)(unaff_s0 << 0x11))) &&
          ((-1 < (int)(unaff_s0 << 0x10) &&
           ((-1 < (int)(unaff_s0 << 0xf) && (-1 < (int)(unaff_s0 << 0xe))))))))) &&
     ((-1 < (int)(unaff_s0 << 10) &&
      ((((-1 < (int)(unaff_s0 << 9) && (-1 < (int)(unaff_s0 << 7))) && (-1 < (int)(unaff_s0 << 6)))
       && (-1 < (int)(unaff_s0 << 0xb))))))) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001082e(void)

{
  uint unaff_s0;
  uint unaff_s1;
  
  FUN_0001082e();
  if ((unaff_s1 & 2) == 0) {
    if ((unaff_s1 & 4) != 0) {
      _L0(0,0,0x233);
      return;
    }
    if ((unaff_s1 & 8) != 0) {
      _L0(0,0,0x234);
      return;
    }
    if ((unaff_s1 & 0x10) != 0) {
      _L0(0,0,0x235);
      return;
    }
    if ((unaff_s1 & 0x20) != 0) {
      _L0(0,0,0x236);
      return;
    }
  }
  else {
    _L0(0,0,0x232);
  }
  if ((((((unaff_s0 & 0x80) == 0) && ((unaff_s0 & 0x100) == 0)) && (-1 < (int)(unaff_s0 << 0x13)))
      && (((-1 < (int)(unaff_s0 << 0x12) && (-1 < (int)(unaff_s0 << 0x11))) &&
          ((-1 < (int)(unaff_s0 << 0x10) &&
           ((-1 < (int)(unaff_s0 << 0xf) && (-1 < (int)(unaff_s0 << 0xe))))))))) &&
     ((-1 < (int)(unaff_s0 << 10) &&
      ((((-1 < (int)(unaff_s0 << 9) && (-1 < (int)(unaff_s0 << 7))) && (-1 < (int)(unaff_s0 << 6)))
       && (-1 < (int)(unaff_s0 << 0xb))))))) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  uint unaff_s0;
  
  _L0();
  if ((((((unaff_s0 & 0x80) == 0) && ((unaff_s0 & 0x100) == 0)) && (-1 < (int)(unaff_s0 << 0x13)))
      && (((-1 < (int)(unaff_s0 << 0x12) && (-1 < (int)(unaff_s0 << 0x11))) &&
          ((-1 < (int)(unaff_s0 << 0x10) &&
           ((-1 < (int)(unaff_s0 << 0xf) && (-1 < (int)(unaff_s0 << 0xe))))))))) &&
     ((-1 < (int)(unaff_s0 << 10) &&
      ((((-1 < (int)(unaff_s0 << 9) && (-1 < (int)(unaff_s0 << 7))) && (-1 < (int)(unaff_s0 << 6)))
       && (-1 < (int)(unaff_s0 << 0xb))))))) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint uVar1;
  uint unaff_s0;
  
  _L0();
  uVar1 = _DAT_44b08084;
  if ((unaff_s0 & 8) != 0) {
    _DAT_44b08088 = _DAT_44b08084;
    if ((_DAT_44b08084 & 0x100) != 0) {
      FUN_000107ec(0x4000000);
    }
    if ((uVar1 & 0x40) != 0) {
      _L0();
    }
    if ((uVar1 & 0x80) != 0) {
      FUN_0001080c(0x8000000);
    }
    if ((uVar1 & 1) != 0) {
      FUN_0001082e(0,0,0x22f);
    }
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) != 0) {
        _L0(0,0,0x233);
        return;
      }
      if ((uVar1 & 8) != 0) {
        _L0(0,0,0x234);
        return;
      }
      if ((uVar1 & 0x10) != 0) {
        _L0(0,0,0x235);
        return;
      }
      if ((uVar1 & 0x20) != 0) {
        _L0(0,0,0x236);
        return;
      }
    }
    else {
      _L0(0,0,0x232);
    }
  }
  if ((((((unaff_s0 & 0x80) == 0) && ((unaff_s0 & 0x100) == 0)) && (-1 < (int)(unaff_s0 << 0x13)))
      && (((-1 < (int)(unaff_s0 << 0x12) && (-1 < (int)(unaff_s0 << 0x11))) &&
          ((-1 < (int)(unaff_s0 << 0x10) &&
           ((-1 < (int)(unaff_s0 << 0xf) && (-1 < (int)(unaff_s0 << 0xe))))))))) &&
     ((-1 < (int)(unaff_s0 << 10) &&
      ((((-1 < (int)(unaff_s0 << 9) && (-1 < (int)(unaff_s0 << 7))) && (-1 < (int)(unaff_s0 << 6)))
       && (-1 < (int)(unaff_s0 << 0xb))))))) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


