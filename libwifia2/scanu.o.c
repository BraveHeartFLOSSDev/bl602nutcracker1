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
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

typedef char __int8_t;

typedef __int8_t int8_t;

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

typedef enum scan_msg_tag {
    SCAN_START_REQ=2048,
    SCAN_START_CFM=2049,
    SCAN_CANCEL_CFM=2052,
    SCAN_MAX=2054,
    SCAN_CANCEL_REQ=2051,
    SCAN_TIMER=2053,
    SCAN_DONE_IND=2050
} scan_msg_tag;

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

typedef union anon_union.conflict311d_for_field_0 anon_union.conflict311d_for_field_0, *Panon_union.conflict311d_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict12df_for_field_3 anon_union.conflict12df_for_field_3, *Panon_union.conflict12df_for_field_3;

typedef union anon_union.conflict1304_for_field_4 anon_union.conflict1304_for_field_4, *Panon_union.conflict1304_for_field_4;

typedef union anon_union.conflict1329_for_field_5 anon_union.conflict1329_for_field_5, *Panon_union.conflict1329_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr {
    struct co_list_hdr * next;
};

union anon_union.conflict12df_for_field_3 {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
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

union anon_union.conflict1304_for_field_4 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict1329_for_field_5 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd {
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict12df_for_field_3 field_3;
    union anon_union.conflict1304_for_field_4 field_4;
    union anon_union.conflict1329_for_field_5 field_5;
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

union anon_union.conflict311d_for_field_0 {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control {
    union anon_union.conflict311d_for_field_0 field_0;
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

typedef struct scanu_raw_send_cfm scanu_raw_send_cfm, *Pscanu_raw_send_cfm;

struct scanu_raw_send_cfm {
    uint32_t status;
};

typedef struct scanu_start_req scanu_start_req, *Pscanu_start_req;

struct scanu_start_req {
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

typedef struct scanu_start_cfm scanu_start_cfm, *Pscanu_start_cfm;

struct scanu_start_cfm {
    uint8_t status;
};

typedef enum anon_enum_16.conflict1fe4 {
    SCANU_JOIN_REQ=4098,
    SCANU_RESULT_IND=4100,
    SCANU_START_CFM=4097,
    SCANU_RAW_SEND_REQ=4101,
    SCANU_JOIN_CFM=4099,
    SCANU_RAW_SEND_CFM=4102,
    SCANU_START_REQ=4096
} anon_enum_16.conflict1fe4;

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

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

struct mobility_domain {
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
};

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

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

typedef struct mac_scan_result mac_scan_result, *Pmac_scan_result;

struct mac_scan_result {
    struct mac_addr bssid;
    struct mac_ssid ssid;
    uint16_t bsstype;
    undefined field_0x2a;
    undefined field_0x2b;
    struct scan_chan_tag * chan;
    uint16_t beacon_period;
    uint16_t cap_info;
    _Bool valid_flag;
    int8_t rssi;
    int8_t ppm_rel;
    int8_t ppm_abs;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability {
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef enum anon_enum_8.conflict9cd {
    HAL_MM_TIMER=7,
    TASK_APM=7,
    TASK_SCANU=4,
    CO_BUSY=8,
    TASK_API=13,
    DISABLE_HT=4,
    TASK_DBG=1,
    HW_RATE_24MBPS=8,
    IPC_DMA_CHANNEL_MAX=4,
    TASK_LAST_EMB=12,
    DMA_MAX=2,
    INDEPENDENT_BSS_MODE=2,
    MFP_IN_USE=16,
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
    HW_RATE_18MBPS=7,
    DMA_DL=0,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    TID_MGT=8,
    HAL_TIMER_MAX=9,
    BROADCAST_STA_IDX_MIN=10,
    HW_RATE_48MBPS=10,
    CO_NO_ELT_IN_USE=7,
    HAL_AC1_TIMER=1,
    TASK_MM=0,
    AC_BE=1,
    AC_BK=0,
    PHY_BAND_5G=1,
    HW_RATE_6MBPS=4,
    STA_MAX=12,
    TASK_ME=5,
    DMA_UL=1,
    HW_RATE_36MBPS=9,
    IPC_DMA_CHANNEL_DATA_RX=1,
    AC_VI=2,
    HW_RATE_11MBPS=3,
    HW_RATE_54MBPS=11,
    AC_VO=3,
    TASK_MESH=9,
    HW_RATE_5_5MBPS=2,
    INFRASTRUCTURE_MODE=1,
    TASK_CFG=12,
    TASK_MAX=14,
    HAL_AC3_TIMER=3,
    SCANU_IDLE=0,
    TASK_TDLS=3,
    TASK_RXU=11,
    HAL_KE_TIMER=8,
    TASK_SCAN=2,
    BROADCAST_STA_IDX_MAX=11,
    PHY_BAND_2G4=0,
    ANY_BSS_MODE=3,
    WPA_WPA2_IN_USE=8,
    HW_RATE_12MBPS=6,
    CO_OK=0,
    HAL_AC0_TIMER=0,
    AC_MAX=4,
    HAL_IDLE_TIMER=5,
    INVALID_STA_IDX=-1,
    HAL_RX_TIMER=6,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    CO_BAD_PARAM=4,
    CO_FULL=3,
    HW_RATE_9MBPS=5,
    TID_MAX=9,
    TASK_BAM=8,
    SCANU_STATE_MAX=2,
    HW_RATE_2MBPS=1,
    HAL_BCN_TIMER=4,
    CO_OP_IN_PROGRESS=9,
    IPC_DMA_CHANNEL_DATA_TX=3,
    CO_FAIL=1,
    SCANU_SCANNING=1,
    HW_RATE_1MBPS=0,
    CONTROL_PORT_NO_ENC=2,
    CONTROL_PORT_HOST=1,
    TASK_SM=6,
    TASK_HOSTAPD_U=10,
    CO_NO_MORE_ELT_AVAILABLE=6
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

typedef struct rxu_mgt_ind rxu_mgt_ind, *Prxu_mgt_ind;

struct rxu_mgt_ind {
    uint16_t length;
    uint16_t framectrl;
    uint16_t center_freq;
    uint8_t band;
    uint8_t sta_idx;
    uint8_t inst_nbr;
    uint8_t sa[6];
    undefined field_0xf;
    uint32_t tsflo;
    uint32_t tsfhi;
    int8_t rssi;
    int8_t ppm_abs;
    int8_t ppm_rel;
    uint8_t data_rate;
    uint32_t[0] payload;
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

typedef struct bcn_frame bcn_frame, *Pbcn_frame;

typedef struct mac_hdr mac_hdr, *Pmac_hdr;

struct mac_hdr {
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
};

struct bcn_frame {
    struct mac_hdr h;
    uint64_t tsf;
    uint16_t bcnint;
    uint16_t capa;
    uint8_t[0] variable;
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

typedef uchar uint8;

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

typedef struct ke_msg ke_msg, *Pke_msg;

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

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict3b3e_for_u anon_union.conflict3b3e_for_u, *Panon_union.conflict3b3e_for_u;

typedef struct anon_struct.conflict3976 anon_struct.conflict3976, *Panon_struct.conflict3976;

typedef struct anon_struct.conflict3a43 anon_struct.conflict3a43, *Panon_struct.conflict3a43;

struct anon_struct.conflict3976 {
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

struct anon_struct.conflict3a43 {
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

union anon_union.conflict3b3e_for_u {
    struct anon_struct.conflict3976 sta;
    struct anon_struct.conflict3a43 ap;
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
    union anon_union.conflict3b3e_for_u u;
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

typedef union anon_union.conflict3b3e anon_union.conflict3b3e, *Panon_union.conflict3b3e;

union anon_union.conflict3b3e {
    struct anon_struct.conflict3976 sta;
    struct anon_struct.conflict3a43 ap;
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag {
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
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

typedef union anon_union.conflict34b6_for_rate_map anon_union.conflict34b6_for_rate_map, *Panon_union.conflict34b6_for_rate_map;

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

union anon_union.conflict34b6_for_rate_map {
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
    union anon_union.conflict34b6_for_rate_map rate_map;
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

typedef union anon_union.conflict34b6 anon_union.conflict34b6, *Panon_union.conflict34b6;

union anon_union.conflict34b6 {
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

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag {
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
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

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag {
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef union anon_union.conflict311d anon_union.conflict311d, *Panon_union.conflict311d;

union anon_union.conflict311d {
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
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

typedef union anon_union.conflict12df anon_union.conflict12df, *Panon_union.conflict12df;

union anon_union.conflict12df {
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict1329 anon_union.conflict1329, *Panon_union.conflict1329;

union anon_union.conflict1329 {
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1304 anon_union.conflict1304, *Panon_union.conflict1304;

union anon_union.conflict1304 {
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
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

typedef struct scanu_env_tag scanu_env_tag, *Pscanu_env_tag;

struct scanu_env_tag {
    struct scanu_start_req * param;
    struct hal_dma_desc_tag dma_desc;
    uint16_t result_cnt;
    undefined field_0x16;
    undefined field_0x17;
    struct mac_scan_result scan_result[6];
    ke_task_id_t src_id;
    _Bool joining;
    uint8_t band;
    struct mac_addr bssid;
    struct mac_ssid ssid;
};

typedef struct scanu_add_ie_tag scanu_add_ie_tag, *Pscanu_add_ie_tag;

struct scanu_add_ie_tag {
    struct dma_desc dma_desc;
    uint32_t buf[50];
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

void scanu_confirm(uint8_t status)

{
  uint8_t *puVar1;
  uint8_t *puVar2;
  
  if (DAT_0000016a == '\0') {
    puVar1 = (uint8_t *)FUN_00010096(0x1001,_DAT_00000168,4,1);
    puVar2 = (uint8_t *)0x0;
  }
  else {
    puVar1 = (uint8_t *)_LVL1(0x1003);
    puVar2 = (uint8_t *)FUN_00010042(0x1003,0xd,4,1);
  }
  *puVar1 = status;
  FUN_00010054(iRam00000000 + -0xc);
  iRam00000000 = 0;
  _L0(puVar1);
  if (puVar2 != (uint8_t *)0x0) {
    *puVar2 = status;
    FUN_00010072(puVar2);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL1(void)

{
  int *unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  undefined *puVar2;
  undefined unaff_s3;
  
  puVar1 = (undefined *)_LVL1();
  puVar2 = (undefined *)FUN_00010042(unaff_s1 + 3,0xd,4,1);
  *puVar1 = unaff_s3;
  FUN_00010054(*unaff_s0 + -0xc);
  *unaff_s0 = 0;
  _L0(puVar1);
  if (puVar2 != (undefined *)0x0) {
    *puVar2 = unaff_s3;
    FUN_00010072(puVar2);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010042(void)

{
  int *unaff_s0;
  undefined *puVar1;
  undefined *unaff_s2;
  undefined unaff_s3;
  
  puVar1 = (undefined *)FUN_00010042();
  *unaff_s2 = unaff_s3;
  FUN_00010054(*unaff_s0 + -0xc);
  *unaff_s0 = 0;
  _L0();
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = unaff_s3;
    FUN_00010072(puVar1);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010054(void)

{
  undefined4 *unaff_s0;
  undefined *unaff_s1;
  undefined unaff_s3;
  
  FUN_00010054();
  *unaff_s0 = 0;
  _L0();
  if (unaff_s1 != (undefined *)0x0) {
    *unaff_s1 = unaff_s3;
    FUN_00010072();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined *unaff_s1;
  undefined unaff_s3;
  
  _L0();
  if (unaff_s1 != (undefined *)0x0) {
    *unaff_s1 = unaff_s3;
    FUN_00010072();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010072(void)

{
  FUN_00010072();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001006c)

void FUN_00010096(void)

{
  int *unaff_s0;
  undefined *puVar1;
  undefined unaff_s3;
  
  puVar1 = (undefined *)FUN_00010096();
  *puVar1 = unaff_s3;
  FUN_00010054(*unaff_s0 + -0xc);
  *unaff_s0 = 0;
  _L0(puVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void scanu_raw_send_cfm(uint8_t status,ke_task_id_t dst_id)

{
  undefined3 in_register_00002029;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_L0(0x1006,4,4);
  *puVar1 = CONCAT31(in_register_00002029,status);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined4 unaff_s0;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_L0();
  *puVar1 = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scanu_init(undefined4 uRam00000010)

{
  _L0(4,0);
  FUN_000100ec(0,0,0x194);
  _DAT_00000004 = 0x10;
  _DAT_00000008 = 0;
  _DAT_0000000c = 0;
  uRam00000010 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 uRam00000010)

{
  _L0();
  FUN_000100ec(0,0,0x194);
  _DAT_00000004 = 0x10;
  _DAT_00000008 = 0;
  _DAT_0000000c = 0;
  uRam00000010 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100ec(void)

{
  int unaff_s0;
  
  FUN_000100ec();
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  *(undefined4 *)(unaff_s0 + 8) = 0;
  _DAT_00000004 = 0x10;
  return;
}



mac_scan_result * scanu_find_result(mac_addr *bssid_ptr,_Bool allocate)

{
  undefined3 in_register_0000202d;
  mac_scan_result *pmVar1;
  
  pmVar1 = (mac_scan_result *)&DAT_00000018;
  do {
    if (pmVar1->valid_flag == false) {
      if (CONCAT31(in_register_0000202d,allocate) != 0) {
        return pmVar1;
      }
    }
    else {
      if ((((*(char *)(pmVar1->bssid).array == *(char *)bssid_ptr->array) &&
           (*(char *)((int)(pmVar1->bssid).array + 1) == *(char *)((int)bssid_ptr->array + 1))) &&
          (*(char *)((pmVar1->bssid).array + 1) == *(char *)(bssid_ptr->array + 1))) &&
         (((*(char *)((int)(pmVar1->bssid).array + 3) == *(char *)((int)bssid_ptr->array + 3) &&
           (*(char *)((pmVar1->bssid).array + 2) == *(char *)(bssid_ptr->array + 2))) &&
          (*(char *)((int)(pmVar1->bssid).array + 5) == *(char *)((int)bssid_ptr->array + 5))))) {
        return pmVar1;
      }
    }
    pmVar1 = pmVar1 + 1;
    if (pmVar1 == (mac_scan_result *)&DAT_00000168) {
      return (mac_scan_result *)0x0;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

int scanu_frame_handler(rxu_mgt_ind *frame)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  short sVar16;
  char *pcVar17;
  uint uVar18;
  uint8_t *puVar19;
  int iVar20;
  int iVar21;
  undefined uStack100;
  undefined auStack99 [3];
  mac_ssid ssid_buf;
  
  iVar8 = iRam00000000;
  puVar19 = &frame[2].inst_nbr;
  uVar18 = (uint)*(byte *)(iRam00000000 + 0x14e);
  iVar4 = _L0(puVar19,frame->length - 0x24,0);
  if (iVar4 != 0) {
    uVar13 = (uint)*(byte *)(iVar4 + 1);
    if (uVar13 < 0x21) {
      if (uVar13 == 0) goto _L0;
    }
    else {
      uVar13 = 0x20;
    }
    puVar10 = (undefined *)(iVar4 + 2);
    if (*(char *)(iVar4 + 2) != '\0') {
      uStack100 = (undefined)uVar13;
      puVar11 = &uStack100;
      uVar14 = uVar13;
      while( true ) {
        uVar14 = uVar14 - 1;
        puVar11 = puVar11 + 1;
        if (uVar14 == 0xffffffff) break;
        uVar3 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar11 = uVar3;
      }
      auStack99[uVar13] = 0;
    }
  }
_L0:
  iVar4 = _LVL40(4);
  if (((iVar4 != 1) ||
      (puVar5 = (undefined4 *)FUN_0001022c(&frame[1].tsflo,1), puVar5 == (undefined4 *)0x0)) ||
     (((DAT_0000016c & 1) == 0 &&
      (((((*(byte *)&frame[1].tsflo != DAT_0000016c ||
          (*(char *)((int)&frame[1].tsflo + 1) != DAT_0000016d)) ||
         (*(char *)((int)&frame[1].tsflo + 2) != DAT_0000016e)) ||
        ((*(char *)((int)&frame[1].tsflo + 3) != DAT_0000016f ||
         (*(char *)&frame[1].tsfhi != DAT_00000170)))) ||
       (*(char *)((int)&frame[1].tsfhi + 1) != DAT_00000171)))))) goto _L0;
  *(undefined2 *)puVar5 = *(undefined2 *)&frame[1].tsflo;
  *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)((int)&frame[1].tsflo + 2);
  *(undefined2 *)(puVar5 + 1) = *(undefined2 *)&frame[1].tsfhi;
  *(uint16_t *)(puVar5 + 0xc) = frame[2].center_freq;
  uVar1 = *(ushort *)&frame[2].band;
  *(ushort *)((int)puVar5 + 0x32) = uVar1;
  uVar12 = uVar1 & 1;
  if ((uVar1 & 1) == 0) {
    uVar12 = 2;
  }
  *(ushort *)(puVar5 + 10) = uVar12;
  sVar16 = frame->length - 0x24;
  iVar4 = FUN_000102de(puVar19,sVar16,0);
  if (iVar4 == 0) {
    *(undefined *)((int)puVar5 + 6) = 0;
  }
  else {
    uVar13 = (uint)*(byte *)(iVar4 + 1);
    if (uVar13 < 0x21) {
      if (uVar13 == 0) goto _L0;
    }
    else {
      uVar13 = 0x20;
    }
    puVar10 = (undefined *)(iVar4 + 2);
    if (*(char *)(iVar4 + 2) != '\0') {
      *(char *)((int)puVar5 + 6) = (char)uVar13;
      puVar11 = (undefined *)((int)puVar5 + 7);
      while (uVar13 = uVar13 - 1, uVar13 != 0xffffffff) {
        uVar3 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar11 = uVar3;
        puVar11 = puVar11 + 1;
      }
    }
  }
_L0:
  *(int8_t *)((int)puVar5 + 0x36) = frame->ppm_rel;
  *(int8_t *)((int)puVar5 + 0x37) = frame->ppm_abs;
  if (*(char *)(iVar8 + 0x150) != '\0') {
    uVar13 = 0;
    pcVar17 = (char *)(iVar8 + 0xfc);
    while ((int)uVar13 < (int)(uint)*(byte *)(iVar8 + 0x150)) {
      if (*pcVar17 == '\0') goto _L0;
      if ((*(char *)((int)puVar5 + 6) == *pcVar17) &&
         (iVar4 = FUN_00010384(pcVar17 + 1,(int)puVar5 + 7), iVar4 == 0)) break;
      uVar13 = uVar13 + 1;
      pcVar17 = pcVar17 + 0x22;
    }
    if (*(byte *)(iVar8 + 0x150) == uVar13) goto _L0;
  }
_L0:
  iVar4 = FUN_0001039e(puVar19,sVar16,3);
  if (iVar4 == 0) {
    if (*(char *)((int)puVar5 + 0x35) < frame->rssi) {
      uVar6 = _LVL154(frame->band,frame->center_freq);
      puVar5[0xb] = uVar6;
      cVar2 = frame->rssi;
_L0:
      *(char *)((int)puVar5 + 0x35) = cVar2;
    }
  }
  else {
    uVar13 = (uint)*(byte *)(iVar4 + 2);
    if (frame->band != '\0') {
      if ((frame->band == '\x01') && (uVar13 - 1 < 0xa5)) {
        iVar8 = _L0(uVar13 * 5 + 5000);
        return iVar8;
      }
_L0:
      iVar8 = _L0(0xffff);
      return iVar8;
    }
    if (0xd < uVar13 - 1) goto _L0;
    if (uVar13 == 0xe) {
      iVar8 = _L0(0x9b4);
      return iVar8;
    }
    uVar6 = _L0(uVar13 * 5 + 0x967);
    puVar5[0xb] = uVar6;
    cVar2 = frame->rssi;
    if (*(char *)((int)puVar5 + 0x35) < cVar2) goto _L0;
  }
  if (DAT_0000016a != '\0') {
    iVar4 = uVar18 * 0x5d8;
    iVar21 = iVar4 + 0x358;
    *(undefined2 *)(iVar4 + 0x3a0) = *(undefined2 *)(puVar5 + 10);
    *(undefined4 *)(iVar4 + 0x378) = *puVar5;
    *(undefined2 *)(iVar4 + 0x37c) = *(undefined2 *)(puVar5 + 1);
    *(undefined2 *)(iVar4 + 0x3ae) = *(undefined2 *)((int)puVar5 + 0x32);
    *(undefined2 *)(iVar4 + 0x3ac) = *(undefined2 *)(puVar5 + 0xc);
    _L0(iVar4 + 0x37e,(undefined2 *)((int)puVar5 + 6),0x22);
    uVar6 = puVar5[0xb];
    *(undefined4 *)(iVar4 + 0x3e0) = 0;
    *(undefined4 *)(iVar4 + 0x3a4) = uVar6;
    *(undefined *)(iVar4 + 0x3d5) = *(undefined *)((int)puVar5 + 0x36);
    *(undefined *)(iVar4 + 0x3d6) = *(undefined *)((int)puVar5 + 0x37);
    _L0(puVar19,sVar16,iVar4 + 0x3b0);
    if (*(char *)(puVar5[0xb] + 2) == '\0') {
      uVar13 = FUN_00010498(iVar4 + 0x3b0,1);
      if ((uVar13 & 0xf) == 0) {
        *(undefined *)(iVar4 + 0x3d7) = 1;
      }
      else {
        cVar2 = _L0();
        *(char *)(iVar4 + 0x3d7) = '\x1f' - cVar2;
      }
    }
    iVar7 = FUN_000104c6(puVar19,sVar16,0,5);
    if (iVar7 == 0) {
      iVar7 = uVar18 * 0x5d8;
      *(undefined4 *)(iVar7 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3d0) = 0xa43;
    }
    else {
      iVar15 = uVar18 * 0x5d8;
      *(undefined *)(iVar15 + 0x3c0) = *(undefined *)(iVar7 + 8);
      *(ushort *)(iVar15 + 0x3ae) = *(ushort *)(iVar15 + 0x3ae) | 0x200;
      uVar13 = *(uint *)(iVar7 + 10);
      bVar9 = (byte)(uVar13 >> 3) & 2;
      *(byte *)(iVar15 + 0x3c1) = bVar9;
      *(uint *)(iVar15 + 0x3c8) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar7 + 0xe);
      bVar9 = (byte)(uVar13 >> 4) & 1 | bVar9;
      *(byte *)(iVar15 + 0x3c1) = bVar9;
      *(uint *)(iVar15 + 0x3c4) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar7 + 0x12);
      bVar9 = bVar9 | (byte)(uVar13 >> 2) & 4;
      *(byte *)(iVar15 + 0x3c1) = bVar9;
      *(uint *)(iVar15 + 0x3cc) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar7 + 0x16);
      *(byte *)(iVar15 + 0x3c1) = bVar9 | (byte)(uVar13 >> 1) & 8;
      *(uint *)(iVar15 + 0x3d0) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      *(uint *)(iVar15 + 0x3e0) = *(uint *)(iVar15 + 0x3e0) | 1;
    }
    uVar13 = 0;
    if (DAT_0000002e != '\0') {
      iVar7 = uVar18 * 0x5d8;
      uVar13 = *(uint *)(iVar7 + 0x3e0) & 1;
      if (uVar13 != 0) {
        iVar15 = _LVL105(puVar19,sVar16,0x2d);
        if (iVar15 != 0) {
          *(undefined2 *)(iVar7 + 0x358) = *(undefined2 *)(iVar15 + 2);
          *(undefined *)(iVar7 + 0x35a) = *(undefined *)(iVar15 + 4);
          iVar7 = 0;
          do {
            *(undefined *)(iVar7 + iVar4 + 0x35b) = *(undefined *)(iVar15 + 5 + iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0x10);
          iVar7 = uVar18 * 0x5d8;
          *(undefined2 *)(iVar7 + 0x36c) = *(undefined2 *)(iVar15 + 0x15);
          *(uint *)(iVar7 + 0x370) = (uint)*(ushort *)(iVar15 + 0x17);
          *(undefined *)(iVar7 + 0x374) = *(undefined *)(iVar15 + 0x1b);
          *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 2;
        }
        uVar13 = _LVL120(puVar19,sVar16,0x3d);
      }
    }
    iVar7 = uVar18 * 0x5d8;
    cVar2 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar7 + 1000) = cVar2;
    if ((cVar2 != '\0') && (-1 < *(int *)(iVar7 + 0x3e0))) {
      FUN_000106d0(iVar4 + 0x3e9,0,2);
      _L0(iVar4 + 0x3ed,0,1);
      FUN_000106fa(iVar4 + 0x3ee,0,1);
      _L0(iVar4 + 0x3eb,0,1);
      _L0(iVar4 + 0x3ec,0,1);
      *(undefined *)(iVar7 + 0x411) = 0;
      *(undefined *)(iVar7 + 0x3ef) = 0;
      *(undefined *)(iVar7 + 0x3f0) = 0;
      iVar15 = FUN_00010742(puVar19,sVar16,0x30);
      iVar20 = iVar4 + 0x3f1;
      if (iVar15 != 0) {
        *(char *)(iVar7 + 0x411) = *(char *)(iVar15 + 1) + '\x02';
        _L0(iVar20,iVar15);
        uVar3 = FUN_0001077e(iVar20,iVar4 + 0x3ed,iVar4 + 0x3ee,iVar4 + 0x3ef,iVar4 + 0x3e9,
                             *(undefined *)(iVar7 + 0x3f0));
        uVar14 = *(uint *)(iVar7 + 0x3ec);
        *(undefined *)(iVar7 + 0x411) = uVar3;
        FUN_000107ac(0,uVar14 >> 0x13 & 1,uVar14 >> 0x12 & 1,uVar14 >> 0x11 & 1,uVar14 >> 0x10 & 1);
        uVar14 = *(uint *)(iVar7 + 0x3ec);
        FUN_000107d6(0,uVar14 >> 0xb & 1,uVar14 >> 10 & 1,uVar14 >> 9 & 1,uVar14 >> 8 & 1);
        FUN_000107ea(0,*(undefined *)(iVar7 + 0x3ef));
      }
      iVar7 = FUN_00010800(puVar19,sVar16,0,4);
      if (iVar7 != 0) {
        iVar15 = uVar18 * 0x5d8;
        *(byte *)(iVar15 + 0x3e9) = *(byte *)(iVar15 + 0x3e9) | 8;
        if (*(char *)(iVar15 + 0x411) == '\0') {
          *(char *)(iVar15 + 0x411) = *(char *)(iVar7 + 1) + '\x02';
          _L0(iVar20,iVar7);
          uVar3 = FUN_00010846(iVar20,iVar4 + 0x3eb,iVar4 + 0x3ec);
          *(undefined *)(iVar15 + 0x411) = uVar3;
        }
      }
      iVar4 = iRam00000000;
      iVar7 = uVar18 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar7 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar7 + 0x3ae) & 0x10) == 0) {
          uVar6 = 2;
          goto _L0;
        }
        *(byte *)(iVar7 + 0x3e9) = *(byte *)(iVar7 + 0x3e9) | 2;
        *(undefined *)(iVar4 + 0x3b) = 1;
      }
      else {
        uVar6 = 9;
_L0:
        *(undefined4 *)(iVar4 + 0x30) = uVar6;
      }
      iVar7 = uVar18 * 0x5d8;
      FUN_00010928(iVar4 + 0x40,iVar20,*(undefined *)(iVar7 + 0x411));
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(iVar7 + 0x411);
      uVar14 = *(uint *)(iVar7 + 1000);
      FUN_0001095e(0,uVar14 >> 9 & 1,uVar14 >> 0xb & 1,uVar14 >> 0xd & 1,uVar14 >> 0x10 & 1);
    }
    FUN_0001096c(uVar13,0,iVar21);
    FUN_0001097a(puVar19,sVar16,iVar21);
    FUN_00010988(puVar19,sVar16,iVar21);
    FUN_00010996(puVar19,sVar16,iVar21);
    *(uint *)(uVar18 * 0x5d8 + 0x3e0) = *(uint *)(uVar18 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(puVar5 + 0xd) == '\0') {
    _DAT_00000014 = _DAT_00000014 + 1;
  }
  if (*(char *)(iVar8 + 0x150) != '\0') {
    *(undefined *)(puVar5 + 0xd) = 1;
  }
_L0:
  FUN_000109de(frame,0x1004,0xd,4);
  return 1;
}



undefined4 _L0(undefined3 param_1)

{
  ushort uVar1;
  short *unaff_s0;
  char cVar2;
  undefined uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  char *pcVar16;
  int unaff_s4;
  int unaff_s5;
  int iVar17;
  int iVar18;
  int in_stack_00000004;
  undefined in_stack_0000002c;
  
  iVar4 = _L0();
  if (iVar4 != 0) {
    uVar12 = (uint)*(byte *)(iVar4 + 1);
    if (uVar12 < 0x21) {
      if (uVar12 == 0) goto _L0;
    }
    else {
      uVar12 = 0x20;
    }
    puVar9 = (undefined *)(iVar4 + 2);
    if (*(char *)(iVar4 + 2) != '\0') {
      in_stack_0000002c = (undefined)uVar12;
      puVar10 = &stack0x0000002c;
      uVar13 = uVar12;
      while( true ) {
        uVar13 = uVar13 - 1;
        puVar10 = puVar10 + 1;
        if (uVar13 == 0xffffffff) break;
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar10 = uVar3;
      }
      (&stack0x0000002d)[uVar12] = 0;
    }
  }
_L0:
  iVar4 = _LVL40(4);
  if (((iVar4 != 1) ||
      (puVar5 = (undefined4 *)FUN_0001022c(unaff_s0 + 0x16,1), puVar5 == (undefined4 *)0x0)) ||
     (((*(byte *)(unaff_s4 + 0x16c) & 1) == 0 &&
      (((((*(byte *)(unaff_s0 + 0x16) != *(byte *)(unaff_s4 + 0x16c) ||
          (*(char *)((int)unaff_s0 + 0x2d) != *(char *)(unaff_s4 + 0x16d))) ||
         (*(char *)(unaff_s0 + 0x17) != *(char *)(unaff_s4 + 0x16e))) ||
        ((*(char *)((int)unaff_s0 + 0x2f) != *(char *)(unaff_s4 + 0x16f) ||
         (*(char *)(unaff_s0 + 0x18) != *(char *)(unaff_s4 + 0x170))))) ||
       (*(char *)((int)unaff_s0 + 0x31) != *(char *)(unaff_s4 + 0x171))))))) goto _L0;
  *(short *)puVar5 = unaff_s0[0x16];
  *(short *)((int)puVar5 + 2) = unaff_s0[0x17];
  *(short *)(puVar5 + 1) = unaff_s0[0x18];
  *(short *)(puVar5 + 0xc) = unaff_s0[0x1e];
  uVar1 = unaff_s0[0x1f];
  *(ushort *)((int)puVar5 + 0x32) = uVar1;
  uVar11 = uVar1 & 1;
  if ((uVar1 & 1) == 0) {
    uVar11 = 2;
  }
  *(ushort *)(puVar5 + 10) = uVar11;
  sVar15 = *unaff_s0 + -0x24;
  iVar4 = FUN_000102de(sVar15,0);
  if (iVar4 == 0) {
    *(undefined *)((int)puVar5 + 6) = 0;
  }
  else {
    uVar12 = (uint)*(byte *)(iVar4 + 1);
    if (uVar12 < 0x21) {
      if (uVar12 == 0) goto _L0;
    }
    else {
      uVar12 = 0x20;
    }
    puVar9 = (undefined *)(iVar4 + 2);
    if (*(char *)(iVar4 + 2) != '\0') {
      *(char *)((int)puVar5 + 6) = (char)uVar12;
      puVar10 = (undefined *)((int)puVar5 + 7);
      while (uVar12 = uVar12 - 1, uVar12 != 0xffffffff) {
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar10 = uVar3;
        puVar10 = puVar10 + 1;
      }
    }
  }
_L0:
  *(undefined *)((int)puVar5 + 0x36) = *(undefined *)(unaff_s0 + 0xd);
  *(undefined *)((int)puVar5 + 0x37) = *(undefined *)((int)unaff_s0 + 0x19);
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    uVar12 = 0;
    pcVar16 = (char *)(in_stack_00000004 + 0xfc);
    while ((int)uVar12 < (int)(uint)*(byte *)(in_stack_00000004 + 0x150)) {
      if (*pcVar16 == '\0') goto _L0;
      if ((*(char *)((int)puVar5 + 6) == *pcVar16) &&
         (iVar4 = FUN_00010384(pcVar16 + 1,(int)puVar5 + 7), iVar4 == 0)) break;
      uVar12 = uVar12 + 1;
      pcVar16 = pcVar16 + 0x22;
    }
    if (*(byte *)(in_stack_00000004 + 0x150) == uVar12) goto _L0;
  }
_L0:
  iVar4 = FUN_0001039e(sVar15,3);
  if (iVar4 == 0) {
    if (*(char *)((int)puVar5 + 0x35) < *(char *)(unaff_s0 + 0xc)) {
      uVar6 = _LVL154(*(undefined *)(unaff_s0 + 3),unaff_s0[2]);
      puVar5[0xb] = uVar6;
      cVar2 = *(char *)(unaff_s0 + 0xc);
_L0:
      *(char *)((int)puVar5 + 0x35) = cVar2;
    }
  }
  else {
    uVar12 = (uint)*(byte *)(iVar4 + 2);
    if (*(char *)(unaff_s0 + 3) != '\0') {
      if ((*(char *)(unaff_s0 + 3) == '\x01') && (uVar12 - 1 < 0xa5)) {
        uVar6 = _L0(uVar12 * 5 + 5000);
        return uVar6;
      }
_L0:
      uVar6 = _L0(0xffff);
      return uVar6;
    }
    if (0xd < uVar12 - 1) goto _L0;
    if (uVar12 == 0xe) {
      uVar6 = _L0(0x9b4);
      return uVar6;
    }
    uVar6 = _L0(uVar12 * 5 + 0x967);
    puVar5[0xb] = uVar6;
    cVar2 = *(char *)(unaff_s0 + 0xc);
    if (*(char *)((int)puVar5 + 0x35) < cVar2) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) != '\0') {
    iVar4 = unaff_s5 * 0x5d8;
    iVar18 = iVar4 + 0x358;
    *(short *)(iVar4 + 0x3a0) = *(short *)(puVar5 + 10);
    *(undefined4 *)(iVar4 + 0x378) = *puVar5;
    *(short *)(iVar4 + 0x37c) = *(short *)(puVar5 + 1);
    *(short *)(iVar4 + 0x3ae) = *(short *)((int)puVar5 + 0x32);
    *(short *)(iVar4 + 0x3ac) = *(short *)(puVar5 + 0xc);
    _L0(iVar4 + 0x37e,(short *)((int)puVar5 + 6),0x22);
    uVar6 = puVar5[0xb];
    *(undefined4 *)(iVar4 + 0x3e0) = 0;
    *(undefined4 *)(iVar4 + 0x3a4) = uVar6;
    *(undefined *)(iVar4 + 0x3d5) = *(undefined *)((int)puVar5 + 0x36);
    *(undefined *)(iVar4 + 0x3d6) = *(undefined *)((int)puVar5 + 0x37);
    _L0(sVar15,iVar4 + 0x3b0);
    if (*(char *)(puVar5[0xb] + 2) == '\0') {
      uVar12 = FUN_00010498(iVar4 + 0x3b0,1);
      if ((uVar12 & 0xf) == 0) {
        *(undefined *)(iVar4 + 0x3d7) = 1;
      }
      else {
        cVar2 = _L0();
        *(char *)(iVar4 + 0x3d7) = '\x1f' - cVar2;
      }
    }
    iVar7 = FUN_000104c6(sVar15,0,5);
    if (iVar7 == 0) {
      iVar7 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iVar7 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3d0) = 0xa43;
    }
    else {
      iVar14 = unaff_s5 * 0x5d8;
      *(undefined *)(iVar14 + 0x3c0) = *(undefined *)(iVar7 + 8);
      *(ushort *)(iVar14 + 0x3ae) = *(ushort *)(iVar14 + 0x3ae) | 0x200;
      uVar12 = *(uint *)(iVar7 + 10);
      bVar8 = (byte)(uVar12 >> 3) & 2;
      *(byte *)(iVar14 + 0x3c1) = bVar8;
      *(uint *)(iVar14 + 0x3c8) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar7 + 0xe);
      bVar8 = (byte)(uVar12 >> 4) & 1 | bVar8;
      *(byte *)(iVar14 + 0x3c1) = bVar8;
      *(uint *)(iVar14 + 0x3c4) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar7 + 0x12);
      bVar8 = bVar8 | (byte)(uVar12 >> 2) & 4;
      *(byte *)(iVar14 + 0x3c1) = bVar8;
      *(uint *)(iVar14 + 0x3cc) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar7 + 0x16);
      *(byte *)(iVar14 + 0x3c1) = bVar8 | (byte)(uVar12 >> 1) & 8;
      *(uint *)(iVar14 + 0x3d0) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      *(uint *)(iVar14 + 0x3e0) = *(uint *)(iVar14 + 0x3e0) | 1;
    }
    uVar12 = 0;
    if (DAT_0000002e != '\0') {
      iVar7 = unaff_s5 * 0x5d8;
      uVar12 = *(uint *)(iVar7 + 0x3e0) & 1;
      if (uVar12 != 0) {
        iVar14 = _LVL105(sVar15,0x2d);
        if (iVar14 != 0) {
          *(undefined2 *)(iVar7 + 0x358) = *(undefined2 *)(iVar14 + 2);
          *(undefined *)(iVar7 + 0x35a) = *(undefined *)(iVar14 + 4);
          iVar7 = 0;
          do {
            *(undefined *)(iVar7 + iVar4 + 0x35b) = *(undefined *)(iVar14 + 5 + iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0x10);
          iVar7 = unaff_s5 * 0x5d8;
          *(undefined2 *)(iVar7 + 0x36c) = *(undefined2 *)(iVar14 + 0x15);
          *(uint *)(iVar7 + 0x370) = (uint)*(ushort *)(iVar14 + 0x17);
          *(undefined *)(iVar7 + 0x374) = *(undefined *)(iVar14 + 0x1b);
          *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 2;
        }
        uVar12 = _LVL120(sVar15,0x3d);
      }
    }
    iVar7 = unaff_s5 * 0x5d8;
    cVar2 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar7 + 1000) = cVar2;
    if ((cVar2 != '\0') && (-1 < *(int *)(iVar7 + 0x3e0))) {
      FUN_000106d0(iVar4 + 0x3e9,0,2);
      _L0(iVar4 + 0x3ed,0,1);
      FUN_000106fa(iVar4 + 0x3ee,0,1);
      _L0(iVar4 + 0x3eb,0,1);
      _L0(iVar4 + 0x3ec,0,1);
      *(undefined *)(iVar7 + 0x411) = 0;
      *(undefined *)(iVar7 + 0x3ef) = 0;
      *(undefined *)(iVar7 + 0x3f0) = 0;
      iVar14 = FUN_00010742(sVar15,0x30);
      iVar17 = iVar4 + 0x3f1;
      if (iVar14 != 0) {
        *(char *)(iVar7 + 0x411) = *(char *)(iVar14 + 1) + '\x02';
        _L0(iVar17,iVar14);
        uVar3 = FUN_0001077e(iVar17,iVar4 + 0x3ed,iVar4 + 0x3ee,iVar4 + 0x3ef,iVar4 + 0x3e9,
                             *(undefined *)(iVar7 + 0x3f0));
        uVar13 = *(uint *)(iVar7 + 0x3ec);
        *(undefined *)(iVar7 + 0x411) = uVar3;
        FUN_000107ac(0,uVar13 >> 0x13 & 1,uVar13 >> 0x12 & 1,uVar13 >> 0x11 & 1,uVar13 >> 0x10 & 1);
        uVar13 = *(uint *)(iVar7 + 0x3ec);
        FUN_000107d6(0,uVar13 >> 0xb & 1,uVar13 >> 10 & 1,uVar13 >> 9 & 1,uVar13 >> 8 & 1);
        FUN_000107ea(0,*(undefined *)(iVar7 + 0x3ef));
      }
      iVar7 = FUN_00010800(sVar15,0,4);
      if (iVar7 != 0) {
        iVar14 = unaff_s5 * 0x5d8;
        *(byte *)(iVar14 + 0x3e9) = *(byte *)(iVar14 + 0x3e9) | 8;
        if (*(char *)(iVar14 + 0x411) == '\0') {
          *(char *)(iVar14 + 0x411) = *(char *)(iVar7 + 1) + '\x02';
          _L0(iVar17,iVar7);
          uVar3 = FUN_00010846(iVar17,iVar4 + 0x3eb,iVar4 + 0x3ec);
          *(undefined *)(iVar14 + 0x411) = uVar3;
        }
      }
      iVar4 = iRam00000000;
      iVar7 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar7 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar7 + 0x3ae) & 0x10) == 0) {
          uVar6 = 2;
          goto _L0;
        }
        *(byte *)(iVar7 + 0x3e9) = *(byte *)(iVar7 + 0x3e9) | 2;
        *(undefined *)(iVar4 + 0x3b) = 1;
      }
      else {
        uVar6 = 9;
_L0:
        *(undefined4 *)(iVar4 + 0x30) = uVar6;
      }
      iVar7 = unaff_s5 * 0x5d8;
      FUN_00010928(iVar4 + 0x40,iVar17,*(undefined *)(iVar7 + 0x411));
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(iVar7 + 0x411);
      uVar13 = *(uint *)(iVar7 + 1000);
      FUN_0001095e(0,uVar13 >> 9 & 1,uVar13 >> 0xb & 1,uVar13 >> 0xd & 1,uVar13 >> 0x10 & 1);
    }
    FUN_0001096c(uVar12,0,iVar18);
    FUN_0001097a(sVar15,iVar18);
    FUN_00010988(sVar15,iVar18);
    FUN_00010996(sVar15,iVar18);
    *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(puVar5 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(puVar5 + 0xd) = 1;
  }
_L0:
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _LVL40(undefined3 param_1)

{
  ushort uVar1;
  short *unaff_s0;
  char cVar2;
  undefined uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  char *pcVar16;
  int unaff_s4;
  int unaff_s5;
  int iVar17;
  int iVar18;
  int in_stack_00000004;
  
  iVar4 = _LVL40();
  if (((iVar4 != 1) ||
      (puVar5 = (undefined4 *)FUN_0001022c(unaff_s0 + 0x16,1), puVar5 == (undefined4 *)0x0)) ||
     (((*(byte *)(unaff_s4 + 0x16c) & 1) == 0 &&
      (((((*(byte *)(unaff_s0 + 0x16) != *(byte *)(unaff_s4 + 0x16c) ||
          (*(char *)((int)unaff_s0 + 0x2d) != *(char *)(unaff_s4 + 0x16d))) ||
         (*(char *)(unaff_s0 + 0x17) != *(char *)(unaff_s4 + 0x16e))) ||
        ((*(char *)((int)unaff_s0 + 0x2f) != *(char *)(unaff_s4 + 0x16f) ||
         (*(char *)(unaff_s0 + 0x18) != *(char *)(unaff_s4 + 0x170))))) ||
       (*(char *)((int)unaff_s0 + 0x31) != *(char *)(unaff_s4 + 0x171))))))) goto _L0;
  *(short *)puVar5 = unaff_s0[0x16];
  *(short *)((int)puVar5 + 2) = unaff_s0[0x17];
  *(short *)(puVar5 + 1) = unaff_s0[0x18];
  *(short *)(puVar5 + 0xc) = unaff_s0[0x1e];
  uVar1 = unaff_s0[0x1f];
  *(ushort *)((int)puVar5 + 0x32) = uVar1;
  uVar12 = uVar1 & 1;
  if ((uVar1 & 1) == 0) {
    uVar12 = 2;
  }
  *(ushort *)(puVar5 + 10) = uVar12;
  sVar15 = *unaff_s0 + -0x24;
  iVar4 = FUN_000102de(sVar15,0);
  if (iVar4 == 0) {
    *(undefined *)((int)puVar5 + 6) = 0;
  }
  else {
    uVar13 = (uint)*(byte *)(iVar4 + 1);
    if (uVar13 < 0x21) {
      if (uVar13 == 0) goto _L0;
    }
    else {
      uVar13 = 0x20;
    }
    puVar11 = (undefined *)(iVar4 + 2);
    if (*(char *)(iVar4 + 2) != '\0') {
      *(char *)((int)puVar5 + 6) = (char)uVar13;
      puVar10 = (undefined *)((int)puVar5 + 7);
      while (uVar13 = uVar13 - 1, uVar13 != 0xffffffff) {
        uVar3 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar10 = uVar3;
        puVar10 = puVar10 + 1;
      }
    }
  }
_L0:
  *(undefined *)((int)puVar5 + 0x36) = *(undefined *)(unaff_s0 + 0xd);
  *(undefined *)((int)puVar5 + 0x37) = *(undefined *)((int)unaff_s0 + 0x19);
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    uVar13 = 0;
    pcVar16 = (char *)(in_stack_00000004 + 0xfc);
    while ((int)uVar13 < (int)(uint)*(byte *)(in_stack_00000004 + 0x150)) {
      if (*pcVar16 == '\0') goto _L0;
      if ((*(char *)((int)puVar5 + 6) == *pcVar16) &&
         (iVar4 = FUN_00010384(pcVar16 + 1,(int)puVar5 + 7), iVar4 == 0)) break;
      uVar13 = uVar13 + 1;
      pcVar16 = pcVar16 + 0x22;
    }
    if (*(byte *)(in_stack_00000004 + 0x150) == uVar13) goto _L0;
  }
_L0:
  iVar4 = FUN_0001039e(sVar15,3);
  if (iVar4 == 0) {
    if (*(char *)((int)puVar5 + 0x35) < *(char *)(unaff_s0 + 0xc)) {
      uVar6 = _LVL154(*(undefined *)(unaff_s0 + 3),unaff_s0[2]);
      puVar5[0xb] = uVar6;
      cVar2 = *(char *)(unaff_s0 + 0xc);
_L0:
      *(char *)((int)puVar5 + 0x35) = cVar2;
    }
  }
  else {
    uVar13 = (uint)*(byte *)(iVar4 + 2);
    if (*(char *)(unaff_s0 + 3) != '\0') {
      if ((*(char *)(unaff_s0 + 3) == '\x01') && (uVar13 - 1 < 0xa5)) {
        uVar6 = _L0(uVar13 * 5 + 5000);
        return uVar6;
      }
_L0:
      uVar6 = _L0(0xffff);
      return uVar6;
    }
    if (0xd < uVar13 - 1) goto _L0;
    if (uVar13 == 0xe) {
      uVar6 = _L0(0x9b4);
      return uVar6;
    }
    uVar6 = _L0(uVar13 * 5 + 0x967);
    puVar5[0xb] = uVar6;
    cVar2 = *(char *)(unaff_s0 + 0xc);
    if (*(char *)((int)puVar5 + 0x35) < cVar2) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) != '\0') {
    iVar4 = unaff_s5 * 0x5d8;
    iVar18 = iVar4 + 0x358;
    *(short *)(iVar4 + 0x3a0) = *(short *)(puVar5 + 10);
    *(undefined4 *)(iVar4 + 0x378) = *puVar5;
    *(short *)(iVar4 + 0x37c) = *(short *)(puVar5 + 1);
    *(short *)(iVar4 + 0x3ae) = *(short *)((int)puVar5 + 0x32);
    *(short *)(iVar4 + 0x3ac) = *(short *)(puVar5 + 0xc);
    _L0(iVar4 + 0x37e,(short *)((int)puVar5 + 6),0x22);
    uVar6 = puVar5[0xb];
    *(undefined4 *)(iVar4 + 0x3e0) = 0;
    *(undefined4 *)(iVar4 + 0x3a4) = uVar6;
    *(undefined *)(iVar4 + 0x3d5) = *(undefined *)((int)puVar5 + 0x36);
    *(undefined *)(iVar4 + 0x3d6) = *(undefined *)((int)puVar5 + 0x37);
    _L0(sVar15,iVar4 + 0x3b0);
    if (*(char *)(puVar5[0xb] + 2) == '\0') {
      uVar13 = FUN_00010498(iVar4 + 0x3b0,1);
      if ((uVar13 & 0xf) == 0) {
        *(undefined *)(iVar4 + 0x3d7) = 1;
      }
      else {
        cVar2 = _L0();
        *(char *)(iVar4 + 0x3d7) = '\x1f' - cVar2;
      }
    }
    iVar7 = FUN_000104c6(sVar15,0,5);
    if (iVar7 == 0) {
      iVar7 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iVar7 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3d0) = 0xa43;
    }
    else {
      iVar14 = unaff_s5 * 0x5d8;
      *(undefined *)(iVar14 + 0x3c0) = *(undefined *)(iVar7 + 8);
      *(ushort *)(iVar14 + 0x3ae) = *(ushort *)(iVar14 + 0x3ae) | 0x200;
      uVar13 = *(uint *)(iVar7 + 10);
      bVar8 = (byte)(uVar13 >> 3) & 2;
      *(byte *)(iVar14 + 0x3c1) = bVar8;
      *(uint *)(iVar14 + 0x3c8) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar7 + 0xe);
      bVar8 = (byte)(uVar13 >> 4) & 1 | bVar8;
      *(byte *)(iVar14 + 0x3c1) = bVar8;
      *(uint *)(iVar14 + 0x3c4) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar7 + 0x12);
      bVar8 = bVar8 | (byte)(uVar13 >> 2) & 4;
      *(byte *)(iVar14 + 0x3c1) = bVar8;
      *(uint *)(iVar14 + 0x3cc) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar7 + 0x16);
      *(byte *)(iVar14 + 0x3c1) = bVar8 | (byte)(uVar13 >> 1) & 8;
      *(uint *)(iVar14 + 0x3d0) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      *(uint *)(iVar14 + 0x3e0) = *(uint *)(iVar14 + 0x3e0) | 1;
    }
    uVar13 = 0;
    if (DAT_0000002e != '\0') {
      iVar7 = unaff_s5 * 0x5d8;
      uVar13 = *(uint *)(iVar7 + 0x3e0) & 1;
      if (uVar13 != 0) {
        iVar14 = _LVL105(sVar15,0x2d);
        if (iVar14 != 0) {
          *(undefined2 *)(iVar7 + 0x358) = *(undefined2 *)(iVar14 + 2);
          *(undefined *)(iVar7 + 0x35a) = *(undefined *)(iVar14 + 4);
          iVar7 = 0;
          do {
            *(undefined *)(iVar7 + iVar4 + 0x35b) = *(undefined *)(iVar14 + 5 + iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0x10);
          iVar7 = unaff_s5 * 0x5d8;
          *(undefined2 *)(iVar7 + 0x36c) = *(undefined2 *)(iVar14 + 0x15);
          *(uint *)(iVar7 + 0x370) = (uint)*(ushort *)(iVar14 + 0x17);
          *(undefined *)(iVar7 + 0x374) = *(undefined *)(iVar14 + 0x1b);
          *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 2;
        }
        uVar13 = _LVL120(sVar15,0x3d);
      }
    }
    iVar7 = unaff_s5 * 0x5d8;
    cVar2 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar7 + 1000) = cVar2;
    if ((cVar2 != '\0') && (-1 < *(int *)(iVar7 + 0x3e0))) {
      FUN_000106d0(iVar4 + 0x3e9,0,2);
      _L0(iVar4 + 0x3ed,0,1);
      FUN_000106fa(iVar4 + 0x3ee,0,1);
      _L0(iVar4 + 0x3eb,0,1);
      _L0(iVar4 + 0x3ec,0,1);
      *(undefined *)(iVar7 + 0x411) = 0;
      *(undefined *)(iVar7 + 0x3ef) = 0;
      *(undefined *)(iVar7 + 0x3f0) = 0;
      iVar14 = FUN_00010742(sVar15,0x30);
      iVar17 = iVar4 + 0x3f1;
      if (iVar14 != 0) {
        *(char *)(iVar7 + 0x411) = *(char *)(iVar14 + 1) + '\x02';
        _L0(iVar17,iVar14);
        uVar3 = FUN_0001077e(iVar17,iVar4 + 0x3ed,iVar4 + 0x3ee,iVar4 + 0x3ef,iVar4 + 0x3e9,
                             *(undefined *)(iVar7 + 0x3f0));
        uVar9 = *(uint *)(iVar7 + 0x3ec);
        *(undefined *)(iVar7 + 0x411) = uVar3;
        FUN_000107ac(0,uVar9 >> 0x13 & 1,uVar9 >> 0x12 & 1,uVar9 >> 0x11 & 1,uVar9 >> 0x10 & 1);
        uVar9 = *(uint *)(iVar7 + 0x3ec);
        FUN_000107d6(0,uVar9 >> 0xb & 1,uVar9 >> 10 & 1,uVar9 >> 9 & 1,uVar9 >> 8 & 1);
        FUN_000107ea(0,*(undefined *)(iVar7 + 0x3ef));
      }
      iVar7 = FUN_00010800(sVar15,0,4);
      if (iVar7 != 0) {
        iVar14 = unaff_s5 * 0x5d8;
        *(byte *)(iVar14 + 0x3e9) = *(byte *)(iVar14 + 0x3e9) | 8;
        if (*(char *)(iVar14 + 0x411) == '\0') {
          *(char *)(iVar14 + 0x411) = *(char *)(iVar7 + 1) + '\x02';
          _L0(iVar17,iVar7);
          uVar3 = FUN_00010846(iVar17,iVar4 + 0x3eb,iVar4 + 0x3ec);
          *(undefined *)(iVar14 + 0x411) = uVar3;
        }
      }
      iVar4 = iRam00000000;
      iVar7 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar7 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar7 + 0x3ae) & 0x10) == 0) {
          uVar6 = 2;
          goto _L0;
        }
        *(byte *)(iVar7 + 0x3e9) = *(byte *)(iVar7 + 0x3e9) | 2;
        *(undefined *)(iVar4 + 0x3b) = 1;
      }
      else {
        uVar6 = 9;
_L0:
        *(undefined4 *)(iVar4 + 0x30) = uVar6;
      }
      iVar7 = unaff_s5 * 0x5d8;
      FUN_00010928(iVar4 + 0x40,iVar17,*(undefined *)(iVar7 + 0x411));
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(iVar7 + 0x411);
      uVar9 = *(uint *)(iVar7 + 1000);
      FUN_0001095e(0,uVar9 >> 9 & 1,uVar9 >> 0xb & 1,uVar9 >> 0xd & 1,uVar9 >> 0x10 & 1);
    }
    FUN_0001096c(uVar13,0,iVar18);
    FUN_0001097a(sVar15,iVar18);
    FUN_00010988(sVar15,iVar18);
    FUN_00010996(sVar15,iVar18);
    *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(puVar5 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(puVar5 + 0xd) = 1;
  }
_L0:
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_0001022c(undefined3 param_1)

{
  ushort uVar1;
  short *unaff_s0;
  char cVar2;
  undefined uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  char *pcVar16;
  int unaff_s4;
  int unaff_s5;
  int iVar17;
  int iVar18;
  int in_stack_00000004;
  
  puVar4 = (undefined4 *)FUN_0001022c();
  if ((puVar4 == (undefined4 *)0x0) ||
     (((*(byte *)(unaff_s4 + 0x16c) & 1) == 0 &&
      (((((*(byte *)(unaff_s0 + 0x16) != *(byte *)(unaff_s4 + 0x16c) ||
          (*(char *)((int)unaff_s0 + 0x2d) != *(char *)(unaff_s4 + 0x16d))) ||
         (*(char *)(unaff_s0 + 0x17) != *(char *)(unaff_s4 + 0x16e))) ||
        ((*(char *)((int)unaff_s0 + 0x2f) != *(char *)(unaff_s4 + 0x16f) ||
         (*(char *)(unaff_s0 + 0x18) != *(char *)(unaff_s4 + 0x170))))) ||
       (*(char *)((int)unaff_s0 + 0x31) != *(char *)(unaff_s4 + 0x171))))))) goto _L0;
  *(short *)puVar4 = unaff_s0[0x16];
  *(short *)((int)puVar4 + 2) = unaff_s0[0x17];
  *(short *)(puVar4 + 1) = unaff_s0[0x18];
  *(short *)(puVar4 + 0xc) = unaff_s0[0x1e];
  uVar1 = unaff_s0[0x1f];
  *(ushort *)((int)puVar4 + 0x32) = uVar1;
  uVar12 = uVar1 & 1;
  if ((uVar1 & 1) == 0) {
    uVar12 = 2;
  }
  *(ushort *)(puVar4 + 10) = uVar12;
  sVar15 = *unaff_s0 + -0x24;
  iVar5 = FUN_000102de(sVar15,0);
  if (iVar5 == 0) {
    *(undefined *)((int)puVar4 + 6) = 0;
  }
  else {
    uVar13 = (uint)*(byte *)(iVar5 + 1);
    if (uVar13 < 0x21) {
      if (uVar13 == 0) goto _L0;
    }
    else {
      uVar13 = 0x20;
    }
    puVar11 = (undefined *)(iVar5 + 2);
    if (*(char *)(iVar5 + 2) != '\0') {
      *(char *)((int)puVar4 + 6) = (char)uVar13;
      puVar10 = (undefined *)((int)puVar4 + 7);
      while (uVar13 = uVar13 - 1, uVar13 != 0xffffffff) {
        uVar3 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar10 = uVar3;
        puVar10 = puVar10 + 1;
      }
    }
  }
_L0:
  *(undefined *)((int)puVar4 + 0x36) = *(undefined *)(unaff_s0 + 0xd);
  *(undefined *)((int)puVar4 + 0x37) = *(undefined *)((int)unaff_s0 + 0x19);
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    uVar13 = 0;
    pcVar16 = (char *)(in_stack_00000004 + 0xfc);
    while ((int)uVar13 < (int)(uint)*(byte *)(in_stack_00000004 + 0x150)) {
      if (*pcVar16 == '\0') goto _L0;
      if ((*(char *)((int)puVar4 + 6) == *pcVar16) &&
         (iVar5 = FUN_00010384(pcVar16 + 1,(int)puVar4 + 7), iVar5 == 0)) break;
      uVar13 = uVar13 + 1;
      pcVar16 = pcVar16 + 0x22;
    }
    if (*(byte *)(in_stack_00000004 + 0x150) == uVar13) goto _L0;
  }
_L0:
  iVar5 = FUN_0001039e(sVar15,3);
  if (iVar5 == 0) {
    if (*(char *)((int)puVar4 + 0x35) < *(char *)(unaff_s0 + 0xc)) {
      uVar6 = _LVL154(*(undefined *)(unaff_s0 + 3),unaff_s0[2]);
      puVar4[0xb] = uVar6;
      cVar2 = *(char *)(unaff_s0 + 0xc);
_L0:
      *(char *)((int)puVar4 + 0x35) = cVar2;
    }
  }
  else {
    uVar13 = (uint)*(byte *)(iVar5 + 2);
    if (*(char *)(unaff_s0 + 3) != '\0') {
      if ((*(char *)(unaff_s0 + 3) == '\x01') && (uVar13 - 1 < 0xa5)) {
        uVar6 = _L0(uVar13 * 5 + 5000);
        return uVar6;
      }
_L0:
      uVar6 = _L0(0xffff);
      return uVar6;
    }
    if (0xd < uVar13 - 1) goto _L0;
    if (uVar13 == 0xe) {
      uVar6 = _L0(0x9b4);
      return uVar6;
    }
    uVar6 = _L0(uVar13 * 5 + 0x967);
    puVar4[0xb] = uVar6;
    cVar2 = *(char *)(unaff_s0 + 0xc);
    if (*(char *)((int)puVar4 + 0x35) < cVar2) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) != '\0') {
    iVar5 = unaff_s5 * 0x5d8;
    iVar18 = iVar5 + 0x358;
    *(short *)(iVar5 + 0x3a0) = *(short *)(puVar4 + 10);
    *(undefined4 *)(iVar5 + 0x378) = *puVar4;
    *(short *)(iVar5 + 0x37c) = *(short *)(puVar4 + 1);
    *(short *)(iVar5 + 0x3ae) = *(short *)((int)puVar4 + 0x32);
    *(short *)(iVar5 + 0x3ac) = *(short *)(puVar4 + 0xc);
    _L0(iVar5 + 0x37e,(short *)((int)puVar4 + 6),0x22);
    uVar6 = puVar4[0xb];
    *(undefined4 *)(iVar5 + 0x3e0) = 0;
    *(undefined4 *)(iVar5 + 0x3a4) = uVar6;
    *(undefined *)(iVar5 + 0x3d5) = *(undefined *)((int)puVar4 + 0x36);
    *(undefined *)(iVar5 + 0x3d6) = *(undefined *)((int)puVar4 + 0x37);
    _L0(sVar15,iVar5 + 0x3b0);
    if (*(char *)(puVar4[0xb] + 2) == '\0') {
      uVar13 = FUN_00010498(iVar5 + 0x3b0,1);
      if ((uVar13 & 0xf) == 0) {
        *(undefined *)(iVar5 + 0x3d7) = 1;
      }
      else {
        cVar2 = _L0();
        *(char *)(iVar5 + 0x3d7) = '\x1f' - cVar2;
      }
    }
    iVar7 = FUN_000104c6(sVar15,0,5);
    if (iVar7 == 0) {
      iVar7 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iVar7 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar7 + 0x3d0) = 0xa43;
    }
    else {
      iVar14 = unaff_s5 * 0x5d8;
      *(undefined *)(iVar14 + 0x3c0) = *(undefined *)(iVar7 + 8);
      *(ushort *)(iVar14 + 0x3ae) = *(ushort *)(iVar14 + 0x3ae) | 0x200;
      uVar13 = *(uint *)(iVar7 + 10);
      bVar8 = (byte)(uVar13 >> 3) & 2;
      *(byte *)(iVar14 + 0x3c1) = bVar8;
      *(uint *)(iVar14 + 0x3c8) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar7 + 0xe);
      bVar8 = (byte)(uVar13 >> 4) & 1 | bVar8;
      *(byte *)(iVar14 + 0x3c1) = bVar8;
      *(uint *)(iVar14 + 0x3c4) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar7 + 0x12);
      bVar8 = bVar8 | (byte)(uVar13 >> 2) & 4;
      *(byte *)(iVar14 + 0x3c1) = bVar8;
      *(uint *)(iVar14 + 0x3cc) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar7 + 0x16);
      *(byte *)(iVar14 + 0x3c1) = bVar8 | (byte)(uVar13 >> 1) & 8;
      *(uint *)(iVar14 + 0x3d0) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      *(uint *)(iVar14 + 0x3e0) = *(uint *)(iVar14 + 0x3e0) | 1;
    }
    uVar13 = 0;
    if (DAT_0000002e != '\0') {
      iVar7 = unaff_s5 * 0x5d8;
      uVar13 = *(uint *)(iVar7 + 0x3e0) & 1;
      if (uVar13 != 0) {
        iVar14 = _LVL105(sVar15,0x2d);
        if (iVar14 != 0) {
          *(undefined2 *)(iVar7 + 0x358) = *(undefined2 *)(iVar14 + 2);
          *(undefined *)(iVar7 + 0x35a) = *(undefined *)(iVar14 + 4);
          iVar7 = 0;
          do {
            *(undefined *)(iVar7 + iVar5 + 0x35b) = *(undefined *)(iVar14 + 5 + iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0x10);
          iVar7 = unaff_s5 * 0x5d8;
          *(undefined2 *)(iVar7 + 0x36c) = *(undefined2 *)(iVar14 + 0x15);
          *(uint *)(iVar7 + 0x370) = (uint)*(ushort *)(iVar14 + 0x17);
          *(undefined *)(iVar7 + 0x374) = *(undefined *)(iVar14 + 0x1b);
          *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 2;
        }
        uVar13 = _LVL120(sVar15,0x3d);
      }
    }
    iVar7 = unaff_s5 * 0x5d8;
    cVar2 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar7 + 1000) = cVar2;
    if ((cVar2 != '\0') && (-1 < *(int *)(iVar7 + 0x3e0))) {
      FUN_000106d0(iVar5 + 0x3e9,0,2);
      _L0(iVar5 + 0x3ed,0,1);
      FUN_000106fa(iVar5 + 0x3ee,0,1);
      _L0(iVar5 + 0x3eb,0,1);
      _L0(iVar5 + 0x3ec,0,1);
      *(undefined *)(iVar7 + 0x411) = 0;
      *(undefined *)(iVar7 + 0x3ef) = 0;
      *(undefined *)(iVar7 + 0x3f0) = 0;
      iVar14 = FUN_00010742(sVar15,0x30);
      iVar17 = iVar5 + 0x3f1;
      if (iVar14 != 0) {
        *(char *)(iVar7 + 0x411) = *(char *)(iVar14 + 1) + '\x02';
        _L0(iVar17,iVar14);
        uVar3 = FUN_0001077e(iVar17,iVar5 + 0x3ed,iVar5 + 0x3ee,iVar5 + 0x3ef,iVar5 + 0x3e9,
                             *(undefined *)(iVar7 + 0x3f0));
        uVar9 = *(uint *)(iVar7 + 0x3ec);
        *(undefined *)(iVar7 + 0x411) = uVar3;
        FUN_000107ac(0,uVar9 >> 0x13 & 1,uVar9 >> 0x12 & 1,uVar9 >> 0x11 & 1,uVar9 >> 0x10 & 1);
        uVar9 = *(uint *)(iVar7 + 0x3ec);
        FUN_000107d6(0,uVar9 >> 0xb & 1,uVar9 >> 10 & 1,uVar9 >> 9 & 1,uVar9 >> 8 & 1);
        FUN_000107ea(0,*(undefined *)(iVar7 + 0x3ef));
      }
      iVar7 = FUN_00010800(sVar15,0,4);
      if (iVar7 != 0) {
        iVar14 = unaff_s5 * 0x5d8;
        *(byte *)(iVar14 + 0x3e9) = *(byte *)(iVar14 + 0x3e9) | 8;
        if (*(char *)(iVar14 + 0x411) == '\0') {
          *(char *)(iVar14 + 0x411) = *(char *)(iVar7 + 1) + '\x02';
          _L0(iVar17,iVar7);
          uVar3 = FUN_00010846(iVar17,iVar5 + 0x3eb,iVar5 + 0x3ec);
          *(undefined *)(iVar14 + 0x411) = uVar3;
        }
      }
      iVar5 = iRam00000000;
      iVar7 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar7 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar7 + 0x3ae) & 0x10) == 0) {
          uVar6 = 2;
          goto _L0;
        }
        *(byte *)(iVar7 + 0x3e9) = *(byte *)(iVar7 + 0x3e9) | 2;
        *(undefined *)(iVar5 + 0x3b) = 1;
      }
      else {
        uVar6 = 9;
_L0:
        *(undefined4 *)(iVar5 + 0x30) = uVar6;
      }
      iVar7 = unaff_s5 * 0x5d8;
      FUN_00010928(iVar5 + 0x40,iVar17,*(undefined *)(iVar7 + 0x411));
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(iVar7 + 0x411);
      uVar9 = *(uint *)(iVar7 + 1000);
      FUN_0001095e(0,uVar9 >> 9 & 1,uVar9 >> 0xb & 1,uVar9 >> 0xd & 1,uVar9 >> 0x10 & 1);
    }
    FUN_0001096c(uVar13,0,iVar18);
    FUN_0001097a(sVar15,iVar18);
    FUN_00010988(sVar15,iVar18);
    FUN_00010996(sVar15,iVar18);
    *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(puVar4 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(puVar4 + 0xd) = 1;
  }
_L0:
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_000102de(undefined3 param_1)

{
  int unaff_s0;
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  int unaff_s4;
  int unaff_s5;
  int iVar13;
  undefined4 *unaff_s8;
  int iVar14;
  int in_stack_00000004;
  
  iVar3 = FUN_000102de();
  if (iVar3 == 0) {
    *(undefined *)((int)unaff_s8 + 6) = 0;
  }
  else {
    uVar10 = (uint)*(byte *)(iVar3 + 1);
    if (uVar10 < 0x21) {
      if (uVar10 == 0) goto _L0;
    }
    else {
      uVar10 = 0x20;
    }
    puVar9 = (undefined *)(iVar3 + 2);
    if (*(char *)(iVar3 + 2) != '\0') {
      *(char *)((int)unaff_s8 + 6) = (char)uVar10;
      puVar8 = (undefined *)((int)unaff_s8 + 7);
      while (uVar10 = uVar10 - 1, uVar10 != 0xffffffff) {
        uVar2 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar8 = uVar2;
        puVar8 = puVar8 + 1;
      }
    }
  }
_L0:
  *(undefined *)((int)unaff_s8 + 0x36) = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)((int)unaff_s8 + 0x37) = *(undefined *)(unaff_s0 + 0x19);
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    uVar10 = 0;
    pcVar12 = (char *)(in_stack_00000004 + 0xfc);
    while ((int)uVar10 < (int)(uint)*(byte *)(in_stack_00000004 + 0x150)) {
      if (*pcVar12 == '\0') goto _L0;
      if ((*(char *)((int)unaff_s8 + 6) == *pcVar12) &&
         (iVar3 = FUN_00010384(pcVar12 + 1,(int)unaff_s8 + 7), iVar3 == 0)) break;
      uVar10 = uVar10 + 1;
      pcVar12 = pcVar12 + 0x22;
    }
    if (*(byte *)(in_stack_00000004 + 0x150) == uVar10) goto _L0;
  }
_L0:
  iVar3 = FUN_0001039e(3);
  if (iVar3 == 0) {
    if (*(char *)((int)unaff_s8 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
      uVar4 = _LVL154(*(undefined *)(unaff_s0 + 6),*(undefined2 *)(unaff_s0 + 4));
      unaff_s8[0xb] = uVar4;
      cVar1 = *(char *)(unaff_s0 + 0x18);
_L0:
      *(char *)((int)unaff_s8 + 0x35) = cVar1;
    }
  }
  else {
    uVar10 = (uint)*(byte *)(iVar3 + 2);
    if (*(char *)(unaff_s0 + 6) != '\0') {
      if ((*(char *)(unaff_s0 + 6) == '\x01') && (uVar10 - 1 < 0xa5)) {
        uVar4 = _L0(uVar10 * 5 + 5000);
        return uVar4;
      }
_L0:
      uVar4 = _L0(0xffff);
      return uVar4;
    }
    if (0xd < uVar10 - 1) goto _L0;
    if (uVar10 == 0xe) {
      uVar4 = _L0(0x9b4);
      return uVar4;
    }
    uVar4 = _L0(uVar10 * 5 + 0x967);
    unaff_s8[0xb] = uVar4;
    cVar1 = *(char *)(unaff_s0 + 0x18);
    if (*(char *)((int)unaff_s8 + 0x35) < cVar1) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) != '\0') {
    iVar3 = unaff_s5 * 0x5d8;
    iVar14 = iVar3 + 0x358;
    *(undefined2 *)(iVar3 + 0x3a0) = *(undefined2 *)(unaff_s8 + 10);
    *(undefined4 *)(iVar3 + 0x378) = *unaff_s8;
    *(undefined2 *)(iVar3 + 0x37c) = *(undefined2 *)(unaff_s8 + 1);
    *(undefined2 *)(iVar3 + 0x3ae) = *(undefined2 *)((int)unaff_s8 + 0x32);
    *(undefined2 *)(iVar3 + 0x3ac) = *(undefined2 *)(unaff_s8 + 0xc);
    _L0(iVar3 + 0x37e,(int)unaff_s8 + 6,0x22);
    uVar4 = unaff_s8[0xb];
    *(undefined4 *)(iVar3 + 0x3e0) = 0;
    *(undefined4 *)(iVar3 + 0x3a4) = uVar4;
    *(undefined *)(iVar3 + 0x3d5) = *(undefined *)((int)unaff_s8 + 0x36);
    *(undefined *)(iVar3 + 0x3d6) = *(undefined *)((int)unaff_s8 + 0x37);
    _L0(iVar3 + 0x3b0);
    if (*(char *)(unaff_s8[0xb] + 2) == '\0') {
      uVar10 = FUN_00010498(iVar3 + 0x3b0,1);
      if ((uVar10 & 0xf) == 0) {
        *(undefined *)(iVar3 + 0x3d7) = 1;
      }
      else {
        cVar1 = _L0();
        *(char *)(iVar3 + 0x3d7) = '\x1f' - cVar1;
      }
    }
    iVar5 = FUN_000104c6(0,5);
    if (iVar5 == 0) {
      iVar5 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iVar5 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar5 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar5 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar5 + 0x3d0) = 0xa43;
    }
    else {
      iVar11 = unaff_s5 * 0x5d8;
      *(undefined *)(iVar11 + 0x3c0) = *(undefined *)(iVar5 + 8);
      *(ushort *)(iVar11 + 0x3ae) = *(ushort *)(iVar11 + 0x3ae) | 0x200;
      uVar10 = *(uint *)(iVar5 + 10);
      bVar6 = (byte)(uVar10 >> 3) & 2;
      *(byte *)(iVar11 + 0x3c1) = bVar6;
      *(uint *)(iVar11 + 0x3c8) = uVar10 & 0xf | (uVar10 >> 8) << 4;
      uVar10 = *(uint *)(iVar5 + 0xe);
      bVar6 = (byte)(uVar10 >> 4) & 1 | bVar6;
      *(byte *)(iVar11 + 0x3c1) = bVar6;
      *(uint *)(iVar11 + 0x3c4) = uVar10 & 0xf | (uVar10 >> 8) << 4;
      uVar10 = *(uint *)(iVar5 + 0x12);
      bVar6 = bVar6 | (byte)(uVar10 >> 2) & 4;
      *(byte *)(iVar11 + 0x3c1) = bVar6;
      *(uint *)(iVar11 + 0x3cc) = uVar10 & 0xf | (uVar10 >> 8) << 4;
      uVar10 = *(uint *)(iVar5 + 0x16);
      *(byte *)(iVar11 + 0x3c1) = bVar6 | (byte)(uVar10 >> 1) & 8;
      *(uint *)(iVar11 + 0x3d0) = uVar10 & 0xf | (uVar10 >> 8) << 4;
      *(uint *)(iVar11 + 0x3e0) = *(uint *)(iVar11 + 0x3e0) | 1;
    }
    uVar10 = 0;
    if (DAT_0000002e != '\0') {
      iVar5 = unaff_s5 * 0x5d8;
      uVar10 = *(uint *)(iVar5 + 0x3e0) & 1;
      if (uVar10 != 0) {
        iVar11 = _LVL105(0x2d);
        if (iVar11 != 0) {
          *(undefined2 *)(iVar5 + 0x358) = *(undefined2 *)(iVar11 + 2);
          *(undefined *)(iVar5 + 0x35a) = *(undefined *)(iVar11 + 4);
          iVar5 = 0;
          do {
            *(undefined *)(iVar5 + iVar3 + 0x35b) = *(undefined *)(iVar11 + 5 + iVar5);
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0x10);
          iVar5 = unaff_s5 * 0x5d8;
          *(undefined2 *)(iVar5 + 0x36c) = *(undefined2 *)(iVar11 + 0x15);
          *(uint *)(iVar5 + 0x370) = (uint)*(ushort *)(iVar11 + 0x17);
          *(undefined *)(iVar5 + 0x374) = *(undefined *)(iVar11 + 0x1b);
          *(uint *)(iVar5 + 0x3e0) = *(uint *)(iVar5 + 0x3e0) | 2;
        }
        uVar10 = _LVL120(0x3d);
      }
    }
    iVar5 = unaff_s5 * 0x5d8;
    cVar1 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar5 + 1000) = cVar1;
    if ((cVar1 != '\0') && (-1 < *(int *)(iVar5 + 0x3e0))) {
      FUN_000106d0(iVar3 + 0x3e9,0,2);
      _L0(iVar3 + 0x3ed,0,1);
      FUN_000106fa(iVar3 + 0x3ee,0,1);
      _L0(iVar3 + 0x3eb,0,1);
      _L0(iVar3 + 0x3ec,0,1);
      *(undefined *)(iVar5 + 0x411) = 0;
      *(undefined *)(iVar5 + 0x3ef) = 0;
      *(undefined *)(iVar5 + 0x3f0) = 0;
      iVar11 = FUN_00010742(0x30);
      iVar13 = iVar3 + 0x3f1;
      if (iVar11 != 0) {
        *(char *)(iVar5 + 0x411) = *(char *)(iVar11 + 1) + '\x02';
        _L0(iVar13,iVar11);
        uVar2 = FUN_0001077e(iVar13,iVar3 + 0x3ed,iVar3 + 0x3ee,iVar3 + 0x3ef,iVar3 + 0x3e9,
                             *(undefined *)(iVar5 + 0x3f0));
        uVar7 = *(uint *)(iVar5 + 0x3ec);
        *(undefined *)(iVar5 + 0x411) = uVar2;
        FUN_000107ac(0,uVar7 >> 0x13 & 1,uVar7 >> 0x12 & 1,uVar7 >> 0x11 & 1,uVar7 >> 0x10 & 1);
        uVar7 = *(uint *)(iVar5 + 0x3ec);
        FUN_000107d6(0,uVar7 >> 0xb & 1,uVar7 >> 10 & 1,uVar7 >> 9 & 1,uVar7 >> 8 & 1);
        FUN_000107ea(0,*(undefined *)(iVar5 + 0x3ef));
      }
      iVar5 = FUN_00010800(0,4);
      if (iVar5 != 0) {
        iVar11 = unaff_s5 * 0x5d8;
        *(byte *)(iVar11 + 0x3e9) = *(byte *)(iVar11 + 0x3e9) | 8;
        if (*(char *)(iVar11 + 0x411) == '\0') {
          *(char *)(iVar11 + 0x411) = *(char *)(iVar5 + 1) + '\x02';
          _L0(iVar13,iVar5);
          uVar2 = FUN_00010846(iVar13,iVar3 + 0x3eb,iVar3 + 0x3ec);
          *(undefined *)(iVar11 + 0x411) = uVar2;
        }
      }
      iVar3 = iRam00000000;
      iVar5 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) == 0) {
          uVar4 = 2;
          goto _L0;
        }
        *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
        *(undefined *)(iVar3 + 0x3b) = 1;
      }
      else {
        uVar4 = 9;
_L0:
        *(undefined4 *)(iVar3 + 0x30) = uVar4;
      }
      iVar5 = unaff_s5 * 0x5d8;
      FUN_00010928(iVar3 + 0x40,iVar13,*(undefined *)(iVar5 + 0x411));
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
      uVar7 = *(uint *)(iVar5 + 1000);
      FUN_0001095e(0,uVar7 >> 9 & 1,uVar7 >> 0xb & 1,uVar7 >> 0xd & 1,uVar7 >> 0x10 & 1);
    }
    FUN_0001096c(uVar10,0,iVar14);
    FUN_0001097a(iVar14);
    FUN_00010988(iVar14);
    FUN_00010996(iVar14);
    *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(unaff_s8 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0xd) = 1;
  }
_L0:
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_00010384(char *param_1,undefined3 param_2)

{
  int unaff_s0;
  uint unaff_s1;
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int iVar10;
  undefined4 *unaff_s8;
  int iVar11;
  int in_stack_00000004;
  
  while (iVar3 = FUN_00010384(param_1), iVar3 != 0) {
    do {
      param_1 = unaff_s3;
      unaff_s1 = unaff_s1 + 1;
      unaff_s3 = param_1 + 0x22;
      if ((int)(uint)*(byte *)(in_stack_00000004 + 0x150) <= (int)unaff_s1) goto _L0;
      if (*unaff_s3 == '\0') goto _L0;
    } while (*(char *)((int)unaff_s8 + 6) != *unaff_s3);
    param_1 = param_1 + 0x23;
  }
_L0:
  if (*(byte *)(in_stack_00000004 + 0x150) == unaff_s1) goto _L0;
_L0:
  iVar3 = FUN_0001039e(3);
  if (iVar3 == 0) {
    if (*(char *)((int)unaff_s8 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
      uVar4 = _LVL154(*(undefined *)(unaff_s0 + 6),*(undefined2 *)(unaff_s0 + 4));
      unaff_s8[0xb] = uVar4;
      cVar1 = *(char *)(unaff_s0 + 0x18);
_L0:
      *(char *)((int)unaff_s8 + 0x35) = cVar1;
    }
  }
  else {
    uVar7 = (uint)*(byte *)(iVar3 + 2);
    if (*(char *)(unaff_s0 + 6) != '\0') {
      if ((*(char *)(unaff_s0 + 6) == '\x01') && (uVar7 - 1 < 0xa5)) {
        uVar4 = _L0(uVar7 * 5 + 5000);
        return uVar4;
      }
_L0:
      uVar4 = _L0(0xffff);
      return uVar4;
    }
    if (0xd < uVar7 - 1) goto _L0;
    if (uVar7 == 0xe) {
      uVar4 = _L0(0x9b4);
      return uVar4;
    }
    uVar4 = _L0(uVar7 * 5 + 0x967);
    unaff_s8[0xb] = uVar4;
    cVar1 = *(char *)(unaff_s0 + 0x18);
    if (*(char *)((int)unaff_s8 + 0x35) < cVar1) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) != '\0') {
    iVar3 = unaff_s5 * 0x5d8;
    iVar11 = iVar3 + 0x358;
    *(undefined2 *)(iVar3 + 0x3a0) = *(undefined2 *)(unaff_s8 + 10);
    *(undefined4 *)(iVar3 + 0x378) = *unaff_s8;
    *(undefined2 *)(iVar3 + 0x37c) = *(undefined2 *)(unaff_s8 + 1);
    *(undefined2 *)(iVar3 + 0x3ae) = *(undefined2 *)((int)unaff_s8 + 0x32);
    *(undefined2 *)(iVar3 + 0x3ac) = *(undefined2 *)(unaff_s8 + 0xc);
    _L0(iVar3 + 0x37e,(int)unaff_s8 + 6,0x22);
    uVar4 = unaff_s8[0xb];
    *(undefined4 *)(iVar3 + 0x3e0) = 0;
    *(undefined4 *)(iVar3 + 0x3a4) = uVar4;
    *(undefined *)(iVar3 + 0x3d5) = *(undefined *)((int)unaff_s8 + 0x36);
    *(undefined *)(iVar3 + 0x3d6) = *(undefined *)((int)unaff_s8 + 0x37);
    _L0(iVar3 + 0x3b0);
    if (*(char *)(unaff_s8[0xb] + 2) == '\0') {
      uVar7 = FUN_00010498(iVar3 + 0x3b0,1);
      if ((uVar7 & 0xf) == 0) {
        *(undefined *)(iVar3 + 0x3d7) = 1;
      }
      else {
        cVar1 = _L0();
        *(char *)(iVar3 + 0x3d7) = '\x1f' - cVar1;
      }
    }
    iVar5 = FUN_000104c6(0,5);
    if (iVar5 == 0) {
      iVar5 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iVar5 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar5 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar5 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar5 + 0x3d0) = 0xa43;
    }
    else {
      iVar9 = unaff_s5 * 0x5d8;
      *(undefined *)(iVar9 + 0x3c0) = *(undefined *)(iVar5 + 8);
      *(ushort *)(iVar9 + 0x3ae) = *(ushort *)(iVar9 + 0x3ae) | 0x200;
      uVar7 = *(uint *)(iVar5 + 10);
      bVar6 = (byte)(uVar7 >> 3) & 2;
      *(byte *)(iVar9 + 0x3c1) = bVar6;
      *(uint *)(iVar9 + 0x3c8) = uVar7 & 0xf | (uVar7 >> 8) << 4;
      uVar7 = *(uint *)(iVar5 + 0xe);
      bVar6 = (byte)(uVar7 >> 4) & 1 | bVar6;
      *(byte *)(iVar9 + 0x3c1) = bVar6;
      *(uint *)(iVar9 + 0x3c4) = uVar7 & 0xf | (uVar7 >> 8) << 4;
      uVar7 = *(uint *)(iVar5 + 0x12);
      bVar6 = bVar6 | (byte)(uVar7 >> 2) & 4;
      *(byte *)(iVar9 + 0x3c1) = bVar6;
      *(uint *)(iVar9 + 0x3cc) = uVar7 & 0xf | (uVar7 >> 8) << 4;
      uVar7 = *(uint *)(iVar5 + 0x16);
      *(byte *)(iVar9 + 0x3c1) = bVar6 | (byte)(uVar7 >> 1) & 8;
      *(uint *)(iVar9 + 0x3d0) = uVar7 & 0xf | (uVar7 >> 8) << 4;
      *(uint *)(iVar9 + 0x3e0) = *(uint *)(iVar9 + 0x3e0) | 1;
    }
    uVar7 = 0;
    if (DAT_0000002e != '\0') {
      iVar5 = unaff_s5 * 0x5d8;
      uVar7 = *(uint *)(iVar5 + 0x3e0) & 1;
      if (uVar7 != 0) {
        iVar9 = _LVL105(0x2d);
        if (iVar9 != 0) {
          *(undefined2 *)(iVar5 + 0x358) = *(undefined2 *)(iVar9 + 2);
          *(undefined *)(iVar5 + 0x35a) = *(undefined *)(iVar9 + 4);
          iVar5 = 0;
          do {
            *(undefined *)(iVar5 + iVar3 + 0x35b) = *(undefined *)(iVar9 + 5 + iVar5);
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0x10);
          iVar5 = unaff_s5 * 0x5d8;
          *(undefined2 *)(iVar5 + 0x36c) = *(undefined2 *)(iVar9 + 0x15);
          *(uint *)(iVar5 + 0x370) = (uint)*(ushort *)(iVar9 + 0x17);
          *(undefined *)(iVar5 + 0x374) = *(undefined *)(iVar9 + 0x1b);
          *(uint *)(iVar5 + 0x3e0) = *(uint *)(iVar5 + 0x3e0) | 2;
        }
        uVar7 = _LVL120(0x3d);
      }
    }
    iVar5 = unaff_s5 * 0x5d8;
    cVar1 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar5 + 1000) = cVar1;
    if ((cVar1 != '\0') && (-1 < *(int *)(iVar5 + 0x3e0))) {
      FUN_000106d0(iVar3 + 0x3e9,0,2);
      _L0(iVar3 + 0x3ed,0,1);
      FUN_000106fa(iVar3 + 0x3ee,0,1);
      _L0(iVar3 + 0x3eb,0,1);
      _L0(iVar3 + 0x3ec,0,1);
      *(undefined *)(iVar5 + 0x411) = 0;
      *(undefined *)(iVar5 + 0x3ef) = 0;
      *(undefined *)(iVar5 + 0x3f0) = 0;
      iVar9 = FUN_00010742(0x30);
      iVar10 = iVar3 + 0x3f1;
      if (iVar9 != 0) {
        *(char *)(iVar5 + 0x411) = *(char *)(iVar9 + 1) + '\x02';
        _L0(iVar10,iVar9);
        uVar2 = FUN_0001077e(iVar10,iVar3 + 0x3ed,iVar3 + 0x3ee,iVar3 + 0x3ef,iVar3 + 0x3e9,
                             *(undefined *)(iVar5 + 0x3f0));
        uVar8 = *(uint *)(iVar5 + 0x3ec);
        *(undefined *)(iVar5 + 0x411) = uVar2;
        FUN_000107ac(0,uVar8 >> 0x13 & 1,uVar8 >> 0x12 & 1,uVar8 >> 0x11 & 1,uVar8 >> 0x10 & 1);
        uVar8 = *(uint *)(iVar5 + 0x3ec);
        FUN_000107d6(0,uVar8 >> 0xb & 1,uVar8 >> 10 & 1,uVar8 >> 9 & 1,uVar8 >> 8 & 1);
        FUN_000107ea(0,*(undefined *)(iVar5 + 0x3ef));
      }
      iVar5 = FUN_00010800(0,4);
      if (iVar5 != 0) {
        iVar9 = unaff_s5 * 0x5d8;
        *(byte *)(iVar9 + 0x3e9) = *(byte *)(iVar9 + 0x3e9) | 8;
        if (*(char *)(iVar9 + 0x411) == '\0') {
          *(char *)(iVar9 + 0x411) = *(char *)(iVar5 + 1) + '\x02';
          _L0(iVar10,iVar5);
          uVar2 = FUN_00010846(iVar10,iVar3 + 0x3eb,iVar3 + 0x3ec);
          *(undefined *)(iVar9 + 0x411) = uVar2;
        }
      }
      iVar3 = iRam00000000;
      iVar5 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) == 0) {
          uVar4 = 2;
          goto _L0;
        }
        *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
        *(undefined *)(iVar3 + 0x3b) = 1;
      }
      else {
        uVar4 = 9;
_L0:
        *(undefined4 *)(iVar3 + 0x30) = uVar4;
      }
      iVar5 = unaff_s5 * 0x5d8;
      FUN_00010928(iVar3 + 0x40,iVar10,*(undefined *)(iVar5 + 0x411));
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
      uVar8 = *(uint *)(iVar5 + 1000);
      FUN_0001095e(0,uVar8 >> 9 & 1,uVar8 >> 0xb & 1,uVar8 >> 0xd & 1,uVar8 >> 0x10 & 1);
    }
    FUN_0001096c(uVar7,0,iVar11);
    FUN_0001097a(iVar11);
    FUN_00010988(iVar11);
    FUN_00010996(iVar11);
    *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(unaff_s8 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0xd) = 1;
  }
_L0:
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_0001039e(undefined3 param_1)

{
  int unaff_s0;
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int unaff_s4;
  int unaff_s5;
  int iVar10;
  undefined4 *unaff_s8;
  int iVar11;
  int in_stack_00000004;
  
  iVar3 = FUN_0001039e();
  if (iVar3 == 0) {
    if (*(char *)((int)unaff_s8 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
      uVar4 = _LVL154(*(undefined *)(unaff_s0 + 6),*(undefined2 *)(unaff_s0 + 4));
      unaff_s8[0xb] = uVar4;
      cVar1 = *(char *)(unaff_s0 + 0x18);
_L0:
      *(char *)((int)unaff_s8 + 0x35) = cVar1;
    }
  }
  else {
    uVar7 = (uint)*(byte *)(iVar3 + 2);
    if (*(char *)(unaff_s0 + 6) != '\0') {
      if ((*(char *)(unaff_s0 + 6) == '\x01') && (uVar7 - 1 < 0xa5)) {
        uVar4 = _L0(uVar7 * 5 + 5000);
        return uVar4;
      }
_L0:
      uVar4 = _L0(0xffff);
      return uVar4;
    }
    if (0xd < uVar7 - 1) goto _L0;
    if (uVar7 == 0xe) {
      uVar4 = _L0(0x9b4);
      return uVar4;
    }
    uVar4 = _L0(uVar7 * 5 + 0x967);
    unaff_s8[0xb] = uVar4;
    cVar1 = *(char *)(unaff_s0 + 0x18);
    if (*(char *)((int)unaff_s8 + 0x35) < cVar1) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) == '\0') goto _L0;
  iVar3 = unaff_s5 * 0x5d8;
  iVar11 = iVar3 + 0x358;
  *(undefined2 *)(iVar3 + 0x3a0) = *(undefined2 *)(unaff_s8 + 10);
  *(undefined4 *)(iVar3 + 0x378) = *unaff_s8;
  *(undefined2 *)(iVar3 + 0x37c) = *(undefined2 *)(unaff_s8 + 1);
  *(undefined2 *)(iVar3 + 0x3ae) = *(undefined2 *)((int)unaff_s8 + 0x32);
  *(undefined2 *)(iVar3 + 0x3ac) = *(undefined2 *)(unaff_s8 + 0xc);
  _L0(iVar3 + 0x37e,(int)unaff_s8 + 6,0x22);
  uVar4 = unaff_s8[0xb];
  *(undefined4 *)(iVar3 + 0x3e0) = 0;
  *(undefined4 *)(iVar3 + 0x3a4) = uVar4;
  *(undefined *)(iVar3 + 0x3d5) = *(undefined *)((int)unaff_s8 + 0x36);
  *(undefined *)(iVar3 + 0x3d6) = *(undefined *)((int)unaff_s8 + 0x37);
  _L0(iVar3 + 0x3b0);
  if (*(char *)(unaff_s8[0xb] + 2) == '\0') {
    uVar7 = FUN_00010498(iVar3 + 0x3b0,1);
    if ((uVar7 & 0xf) == 0) {
      *(undefined *)(iVar3 + 0x3d7) = 1;
    }
    else {
      cVar1 = _L0();
      *(char *)(iVar3 + 0x3d7) = '\x1f' - cVar1;
    }
  }
  iVar5 = FUN_000104c6(0,5);
  if (iVar5 == 0) {
    iVar5 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iVar5 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar5 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar5 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar5 + 0x3d0) = 0xa43;
  }
  else {
    iVar9 = unaff_s5 * 0x5d8;
    *(undefined *)(iVar9 + 0x3c0) = *(undefined *)(iVar5 + 8);
    *(ushort *)(iVar9 + 0x3ae) = *(ushort *)(iVar9 + 0x3ae) | 0x200;
    uVar7 = *(uint *)(iVar5 + 10);
    bVar6 = (byte)(uVar7 >> 3) & 2;
    *(byte *)(iVar9 + 0x3c1) = bVar6;
    *(uint *)(iVar9 + 0x3c8) = uVar7 & 0xf | (uVar7 >> 8) << 4;
    uVar7 = *(uint *)(iVar5 + 0xe);
    bVar6 = (byte)(uVar7 >> 4) & 1 | bVar6;
    *(byte *)(iVar9 + 0x3c1) = bVar6;
    *(uint *)(iVar9 + 0x3c4) = uVar7 & 0xf | (uVar7 >> 8) << 4;
    uVar7 = *(uint *)(iVar5 + 0x12);
    bVar6 = bVar6 | (byte)(uVar7 >> 2) & 4;
    *(byte *)(iVar9 + 0x3c1) = bVar6;
    *(uint *)(iVar9 + 0x3cc) = uVar7 & 0xf | (uVar7 >> 8) << 4;
    uVar7 = *(uint *)(iVar5 + 0x16);
    *(byte *)(iVar9 + 0x3c1) = bVar6 | (byte)(uVar7 >> 1) & 8;
    *(uint *)(iVar9 + 0x3d0) = uVar7 & 0xf | (uVar7 >> 8) << 4;
    *(uint *)(iVar9 + 0x3e0) = *(uint *)(iVar9 + 0x3e0) | 1;
  }
  uVar7 = 0;
  if (DAT_0000002e != '\0') {
    iVar5 = unaff_s5 * 0x5d8;
    uVar7 = *(uint *)(iVar5 + 0x3e0) & 1;
    if (uVar7 != 0) {
      iVar9 = _LVL105(0x2d);
      if (iVar9 != 0) {
        *(undefined2 *)(iVar5 + 0x358) = *(undefined2 *)(iVar9 + 2);
        *(undefined *)(iVar5 + 0x35a) = *(undefined *)(iVar9 + 4);
        iVar5 = 0;
        do {
          *(undefined *)(iVar5 + iVar3 + 0x35b) = *(undefined *)(iVar9 + 5 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x10);
        iVar5 = unaff_s5 * 0x5d8;
        *(undefined2 *)(iVar5 + 0x36c) = *(undefined2 *)(iVar9 + 0x15);
        *(uint *)(iVar5 + 0x370) = (uint)*(ushort *)(iVar9 + 0x17);
        *(undefined *)(iVar5 + 0x374) = *(undefined *)(iVar9 + 0x1b);
        *(uint *)(iVar5 + 0x3e0) = *(uint *)(iVar5 + 0x3e0) | 2;
      }
      uVar7 = _LVL120(0x3d);
    }
  }
  iVar5 = unaff_s5 * 0x5d8;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  *(char *)(iVar5 + 1000) = cVar1;
  if ((cVar1 != '\0') && (-1 < *(int *)(iVar5 + 0x3e0))) {
    FUN_000106d0(iVar3 + 0x3e9,0,2);
    _L0(iVar3 + 0x3ed,0,1);
    FUN_000106fa(iVar3 + 0x3ee,0,1);
    _L0(iVar3 + 0x3eb,0,1);
    _L0(iVar3 + 0x3ec,0,1);
    *(undefined *)(iVar5 + 0x411) = 0;
    *(undefined *)(iVar5 + 0x3ef) = 0;
    *(undefined *)(iVar5 + 0x3f0) = 0;
    iVar9 = FUN_00010742(0x30);
    iVar10 = iVar3 + 0x3f1;
    if (iVar9 != 0) {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar9 + 1) + '\x02';
      _L0(iVar10,iVar9);
      uVar2 = FUN_0001077e(iVar10,iVar3 + 0x3ed,iVar3 + 0x3ee,iVar3 + 0x3ef,iVar3 + 0x3e9,
                           *(undefined *)(iVar5 + 0x3f0));
      uVar8 = *(uint *)(iVar5 + 0x3ec);
      *(undefined *)(iVar5 + 0x411) = uVar2;
      FUN_000107ac(0,uVar8 >> 0x13 & 1,uVar8 >> 0x12 & 1,uVar8 >> 0x11 & 1,uVar8 >> 0x10 & 1);
      uVar8 = *(uint *)(iVar5 + 0x3ec);
      FUN_000107d6(0,uVar8 >> 0xb & 1,uVar8 >> 10 & 1,uVar8 >> 9 & 1,uVar8 >> 8 & 1);
      FUN_000107ea(0,*(undefined *)(iVar5 + 0x3ef));
    }
    iVar5 = FUN_00010800(0,4);
    if (iVar5 != 0) {
      iVar9 = unaff_s5 * 0x5d8;
      *(byte *)(iVar9 + 0x3e9) = *(byte *)(iVar9 + 0x3e9) | 8;
      if (*(char *)(iVar9 + 0x411) == '\0') {
        *(char *)(iVar9 + 0x411) = *(char *)(iVar5 + 1) + '\x02';
        _L0(iVar10,iVar5);
        uVar2 = FUN_00010846(iVar10,iVar3 + 0x3eb,iVar3 + 0x3ec);
        *(undefined *)(iVar9 + 0x411) = uVar2;
      }
    }
    iVar3 = iRam00000000;
    iVar5 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iRam00000000 + 0x30) = 0;
    if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
      if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) == 0) {
        uVar4 = 2;
        goto _L0;
      }
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar3 + 0x3b) = 1;
    }
    else {
      uVar4 = 9;
_L0:
      *(undefined4 *)(iVar3 + 0x30) = uVar4;
    }
    iVar5 = unaff_s5 * 0x5d8;
    FUN_00010928(iVar3 + 0x40,iVar10,*(undefined *)(iVar5 + 0x411));
    *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
    uVar8 = *(uint *)(iVar5 + 1000);
    FUN_0001095e(0,uVar8 >> 9 & 1,uVar8 >> 0xb & 1,uVar8 >> 0xd & 1,uVar8 >> 0x10 & 1);
  }
  FUN_0001096c(uVar7,0,iVar11);
  FUN_0001097a(iVar11);
  FUN_00010988(iVar11);
  FUN_00010996(iVar11);
  *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
_L0:
  if (*(char *)(unaff_s8 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0xd) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _L0(undefined3 param_1)

{
  int unaff_s0;
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s4;
  int unaff_s5;
  int iVar10;
  undefined4 *unaff_s8;
  int iVar11;
  int in_stack_00000004;
  
  uVar3 = _L0();
  unaff_s8[0xb] = uVar3;
  if (*(char *)((int)unaff_s8 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
    *(char *)((int)unaff_s8 + 0x35) = *(char *)(unaff_s0 + 0x18);
  }
  if (*(char *)(unaff_s4 + 0x16a) == '\0') goto _L0;
  iVar9 = unaff_s5 * 0x5d8;
  iVar11 = iVar9 + 0x358;
  *(undefined2 *)(iVar9 + 0x3a0) = *(undefined2 *)(unaff_s8 + 10);
  *(undefined4 *)(iVar9 + 0x378) = *unaff_s8;
  *(undefined2 *)(iVar9 + 0x37c) = *(undefined2 *)(unaff_s8 + 1);
  *(undefined2 *)(iVar9 + 0x3ae) = *(undefined2 *)((int)unaff_s8 + 0x32);
  *(undefined2 *)(iVar9 + 0x3ac) = *(undefined2 *)(unaff_s8 + 0xc);
  _L0(iVar9 + 0x37e,(int)unaff_s8 + 6,0x22);
  uVar3 = unaff_s8[0xb];
  *(undefined4 *)(iVar9 + 0x3e0) = 0;
  *(undefined4 *)(iVar9 + 0x3a4) = uVar3;
  *(undefined *)(iVar9 + 0x3d5) = *(undefined *)((int)unaff_s8 + 0x36);
  *(undefined *)(iVar9 + 0x3d6) = *(undefined *)((int)unaff_s8 + 0x37);
  _L0(iVar9 + 0x3b0);
  if (*(char *)(unaff_s8[0xb] + 2) == '\0') {
    uVar4 = FUN_00010498(iVar9 + 0x3b0,1);
    if ((uVar4 & 0xf) == 0) {
      *(undefined *)(iVar9 + 0x3d7) = 1;
    }
    else {
      cVar1 = _L0();
      *(char *)(iVar9 + 0x3d7) = '\x1f' - cVar1;
    }
  }
  iVar5 = FUN_000104c6(0,5);
  if (iVar5 == 0) {
    iVar5 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iVar5 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar5 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar5 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar5 + 0x3d0) = 0xa43;
  }
  else {
    iVar8 = unaff_s5 * 0x5d8;
    *(undefined *)(iVar8 + 0x3c0) = *(undefined *)(iVar5 + 8);
    *(ushort *)(iVar8 + 0x3ae) = *(ushort *)(iVar8 + 0x3ae) | 0x200;
    uVar4 = *(uint *)(iVar5 + 10);
    bVar6 = (byte)(uVar4 >> 3) & 2;
    *(byte *)(iVar8 + 0x3c1) = bVar6;
    *(uint *)(iVar8 + 0x3c8) = uVar4 & 0xf | (uVar4 >> 8) << 4;
    uVar4 = *(uint *)(iVar5 + 0xe);
    bVar6 = (byte)(uVar4 >> 4) & 1 | bVar6;
    *(byte *)(iVar8 + 0x3c1) = bVar6;
    *(uint *)(iVar8 + 0x3c4) = uVar4 & 0xf | (uVar4 >> 8) << 4;
    uVar4 = *(uint *)(iVar5 + 0x12);
    bVar6 = bVar6 | (byte)(uVar4 >> 2) & 4;
    *(byte *)(iVar8 + 0x3c1) = bVar6;
    *(uint *)(iVar8 + 0x3cc) = uVar4 & 0xf | (uVar4 >> 8) << 4;
    uVar4 = *(uint *)(iVar5 + 0x16);
    *(byte *)(iVar8 + 0x3c1) = bVar6 | (byte)(uVar4 >> 1) & 8;
    *(uint *)(iVar8 + 0x3d0) = uVar4 & 0xf | (uVar4 >> 8) << 4;
    *(uint *)(iVar8 + 0x3e0) = *(uint *)(iVar8 + 0x3e0) | 1;
  }
  uVar4 = 0;
  if (DAT_0000002e != '\0') {
    iVar5 = unaff_s5 * 0x5d8;
    uVar4 = *(uint *)(iVar5 + 0x3e0) & 1;
    if (uVar4 != 0) {
      iVar8 = _LVL105(0x2d);
      if (iVar8 != 0) {
        *(undefined2 *)(iVar5 + 0x358) = *(undefined2 *)(iVar8 + 2);
        *(undefined *)(iVar5 + 0x35a) = *(undefined *)(iVar8 + 4);
        iVar5 = 0;
        do {
          *(undefined *)(iVar5 + iVar9 + 0x35b) = *(undefined *)(iVar8 + 5 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x10);
        iVar5 = unaff_s5 * 0x5d8;
        *(undefined2 *)(iVar5 + 0x36c) = *(undefined2 *)(iVar8 + 0x15);
        *(uint *)(iVar5 + 0x370) = (uint)*(ushort *)(iVar8 + 0x17);
        *(undefined *)(iVar5 + 0x374) = *(undefined *)(iVar8 + 0x1b);
        *(uint *)(iVar5 + 0x3e0) = *(uint *)(iVar5 + 0x3e0) | 2;
      }
      uVar4 = _LVL120(0x3d);
    }
  }
  iVar5 = unaff_s5 * 0x5d8;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  *(char *)(iVar5 + 1000) = cVar1;
  if ((cVar1 != '\0') && (-1 < *(int *)(iVar5 + 0x3e0))) {
    FUN_000106d0(iVar9 + 0x3e9,0,2);
    _L0(iVar9 + 0x3ed,0,1);
    FUN_000106fa(iVar9 + 0x3ee,0,1);
    _L0(iVar9 + 0x3eb,0,1);
    _L0(iVar9 + 0x3ec,0,1);
    *(undefined *)(iVar5 + 0x411) = 0;
    *(undefined *)(iVar5 + 0x3ef) = 0;
    *(undefined *)(iVar5 + 0x3f0) = 0;
    iVar8 = FUN_00010742(0x30);
    iVar10 = iVar9 + 0x3f1;
    if (iVar8 != 0) {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar8 + 1) + '\x02';
      _L0(iVar10,iVar8);
      uVar2 = FUN_0001077e(iVar10,iVar9 + 0x3ed,iVar9 + 0x3ee,iVar9 + 0x3ef,iVar9 + 0x3e9,
                           *(undefined *)(iVar5 + 0x3f0));
      uVar7 = *(uint *)(iVar5 + 0x3ec);
      *(undefined *)(iVar5 + 0x411) = uVar2;
      FUN_000107ac(0,uVar7 >> 0x13 & 1,uVar7 >> 0x12 & 1,uVar7 >> 0x11 & 1,uVar7 >> 0x10 & 1);
      uVar7 = *(uint *)(iVar5 + 0x3ec);
      FUN_000107d6(0,uVar7 >> 0xb & 1,uVar7 >> 10 & 1,uVar7 >> 9 & 1,uVar7 >> 8 & 1);
      FUN_000107ea(0,*(undefined *)(iVar5 + 0x3ef));
    }
    iVar5 = FUN_00010800(0,4);
    if (iVar5 != 0) {
      iVar8 = unaff_s5 * 0x5d8;
      *(byte *)(iVar8 + 0x3e9) = *(byte *)(iVar8 + 0x3e9) | 8;
      if (*(char *)(iVar8 + 0x411) == '\0') {
        *(char *)(iVar8 + 0x411) = *(char *)(iVar5 + 1) + '\x02';
        _L0(iVar10,iVar5);
        uVar2 = FUN_00010846(iVar10,iVar9 + 0x3eb,iVar9 + 0x3ec);
        *(undefined *)(iVar8 + 0x411) = uVar2;
      }
    }
    iVar9 = iRam00000000;
    iVar5 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iRam00000000 + 0x30) = 0;
    if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
      if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) == 0) {
        uVar3 = 2;
        goto _L0;
      }
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar9 + 0x3b) = 1;
    }
    else {
      uVar3 = 9;
_L0:
      *(undefined4 *)(iVar9 + 0x30) = uVar3;
    }
    iVar5 = unaff_s5 * 0x5d8;
    FUN_00010928(iVar9 + 0x40,iVar10,*(undefined *)(iVar5 + 0x411));
    *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
    uVar7 = *(uint *)(iVar5 + 1000);
    FUN_0001095e(0,uVar7 >> 9 & 1,uVar7 >> 0xb & 1,uVar7 >> 0xd & 1,uVar7 >> 0x10 & 1);
  }
  FUN_0001096c(uVar4,0,iVar11);
  FUN_0001097a(iVar11);
  FUN_00010988(iVar11);
  FUN_00010996(iVar11);
  *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
_L0:
  if (*(char *)(unaff_s8 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0xd) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _L0(undefined3 param_1)

{
  int unaff_s1;
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int iVar13;
  int unaff_s8;
  int iVar14;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int *piStack00000018;
  
  _L0();
  uVar8 = *(undefined4 *)(unaff_s8 + 0x2c);
  *(undefined4 *)(unaff_s7 + 0x3e0) = 0;
  *(undefined4 *)(unaff_s7 + 0x3a4) = uVar8;
  *(undefined *)(unaff_s7 + 0x3d5) = *(undefined *)(unaff_s8 + 0x36);
  *(undefined *)(unaff_s7 + 0x3d6) = *(undefined *)(unaff_s8 + 0x37);
  _L0();
  if (*(char *)(*(int *)(unaff_s8 + 0x2c) + 2) == '\0') {
    uVar3 = FUN_00010498(1);
    if ((uVar3 & 0xf) == 0) {
      *(undefined *)(unaff_s7 + 0x3d7) = 1;
    }
    else {
      cVar1 = _L0();
      *(char *)(unaff_s7 + 0x3d7) = '\x1f' - cVar1;
    }
  }
  iVar4 = FUN_000104c6(0,5);
  if (iVar4 == 0) {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined4 *)(iVar4 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3d0) = 0xa43;
  }
  else {
    iVar9 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined *)(iVar9 + 0x3c0) = *(undefined *)(iVar4 + 8);
    *(ushort *)(iVar9 + 0x3ae) = *(ushort *)(iVar9 + 0x3ae) | 0x200;
    uVar3 = *(uint *)(iVar4 + 10);
    bVar5 = (byte)(uVar3 >> 3) & 2;
    *(byte *)(iVar9 + 0x3c1) = bVar5;
    *(uint *)(iVar9 + 0x3c8) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0xe);
    bVar5 = (byte)(uVar3 >> 4) & 1 | bVar5;
    *(byte *)(iVar9 + 0x3c1) = bVar5;
    *(uint *)(iVar9 + 0x3c4) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0x12);
    bVar5 = bVar5 | (byte)(uVar3 >> 2) & 4;
    *(byte *)(iVar9 + 0x3c1) = bVar5;
    *(uint *)(iVar9 + 0x3cc) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0x16);
    *(byte *)(iVar9 + 0x3c1) = bVar5 | (byte)(uVar3 >> 1) & 8;
    *(uint *)(iVar9 + 0x3d0) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    *(uint *)(iVar9 + 0x3e0) = *(uint *)(iVar9 + 0x3e0) | 1;
  }
  uVar3 = 0;
  if (DAT_0000002e != '\0') {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    uVar3 = *(uint *)(iVar4 + 0x3e0) & 1;
    if (uVar3 != 0) {
      iVar9 = _LVL105(0x2d);
      if (iVar9 != 0) {
        *(undefined2 *)(iVar4 + 0x358) = *(undefined2 *)(iVar9 + 2);
        *(undefined *)(iVar4 + 0x35a) = *(undefined *)(iVar9 + 4);
        iVar4 = 0;
        do {
          *(undefined *)(iVar4 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar9 + 5 + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0x10);
        iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
        *(undefined2 *)(iVar4 + 0x36c) = *(undefined2 *)(iVar9 + 0x15);
        *(uint *)(iVar4 + 0x370) = (uint)*(ushort *)(iVar9 + 0x17);
        *(undefined *)(iVar4 + 0x374) = *(undefined *)(iVar9 + 0x1b);
        *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 2;
      }
      uVar3 = _LVL120(0x3d);
    }
  }
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar4 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar4 + 0x3e0) < 0)) goto _L0;
  iVar7 = unaff_s3 + 0x3e9 + unaff_s1;
  FUN_000106d0(iVar7,0,2);
  iVar10 = unaff_s3 + 0x3ed + unaff_s1;
  iVar14 = unaff_s3 + 0x3ee + unaff_s1;
  _L0(iVar10,0,1);
  FUN_000106fa(iVar14,0,1);
  iVar11 = unaff_s3 + 0x3eb + unaff_s1;
  _L0(iVar11,0,1);
  iVar12 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iVar12,0,1);
  *(undefined *)(iVar4 + 0x411) = 0;
  *(undefined *)(iVar4 + 0x3ef) = 0;
  *(undefined *)(iVar4 + 0x3f0) = 0;
  iVar9 = FUN_00010742(0x30);
  iVar13 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar9 != 0) {
    *(char *)(iVar4 + 0x411) = *(char *)(iVar9 + 1) + '\x02';
    _L0(iVar13,iVar9);
    uVar2 = FUN_0001077e(iVar13,iVar10,iVar14,unaff_s3 + 0x3ef + unaff_s1,iVar7,
                         *(undefined *)(iVar4 + 0x3f0));
    uVar6 = *(uint *)(iVar4 + 0x3ec);
    *(undefined *)(iVar4 + 0x411) = uVar2;
    FUN_000107ac(0,uVar6 >> 0x13 & 1,uVar6 >> 0x12 & 1,uVar6 >> 0x11 & 1,uVar6 >> 0x10 & 1);
    uVar6 = *(uint *)(iVar4 + 0x3ec);
    FUN_000107d6(0,uVar6 >> 0xb & 1,uVar6 >> 10 & 1,uVar6 >> 9 & 1,uVar6 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(iVar4 + 0x3ef));
  }
  iVar4 = FUN_00010800(0,4);
  if (iVar4 != 0) {
    iVar9 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar9 + 0x3e9) = *(byte *)(iVar9 + 0x3e9) | 8;
    if (*(char *)(iVar9 + 0x411) == '\0') {
      *(char *)(iVar9 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
      _L0(iVar13,iVar4);
      uVar2 = FUN_00010846(iVar13,iVar11,iVar12);
      *(undefined *)(iVar9 + 0x411) = uVar2;
    }
  }
  iVar4 = *piStack00000018;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  iVar9 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar9 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar9 + 0x3ae) & 0x10) == 0) {
      uVar8 = 2;
      goto _L0;
    }
    *(byte *)(iVar9 + 0x3e9) = *(byte *)(iVar9 + 0x3e9) | 2;
    *(undefined *)(iVar4 + 0x3b) = 1;
  }
  else {
    uVar8 = 9;
_L0:
    *(undefined4 *)(iVar4 + 0x30) = uVar8;
  }
  iVar9 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar4 + 0x40,iVar13,*(undefined *)(iVar9 + 0x411));
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(iVar9 + 0x411);
  uVar6 = *(uint *)(iVar9 + 1000);
  FUN_0001095e(0,uVar6 >> 9 & 1,uVar6 >> 0xb & 1,uVar6 >> 0xd & 1,uVar6 >> 0x10 & 1);
_L0:
  FUN_0001096c(uVar3,0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _L0(undefined3 param_1)

{
  int unaff_s1;
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int iVar13;
  int unaff_s8;
  int iVar14;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int *piStack00000018;
  
  _L0();
  if (*(char *)(*(int *)(unaff_s8 + 0x2c) + 2) == '\0') {
    uVar3 = FUN_00010498(1);
    if ((uVar3 & 0xf) == 0) {
      *(undefined *)(unaff_s7 + 0x3d7) = 1;
    }
    else {
      cVar1 = _L0();
      *(char *)(unaff_s7 + 0x3d7) = '\x1f' - cVar1;
    }
  }
  iVar4 = FUN_000104c6(0,5);
  if (iVar4 == 0) {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined4 *)(iVar4 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3d0) = 0xa43;
  }
  else {
    iVar8 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined *)(iVar8 + 0x3c0) = *(undefined *)(iVar4 + 8);
    *(ushort *)(iVar8 + 0x3ae) = *(ushort *)(iVar8 + 0x3ae) | 0x200;
    uVar3 = *(uint *)(iVar4 + 10);
    bVar5 = (byte)(uVar3 >> 3) & 2;
    *(byte *)(iVar8 + 0x3c1) = bVar5;
    *(uint *)(iVar8 + 0x3c8) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0xe);
    bVar5 = (byte)(uVar3 >> 4) & 1 | bVar5;
    *(byte *)(iVar8 + 0x3c1) = bVar5;
    *(uint *)(iVar8 + 0x3c4) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0x12);
    bVar5 = bVar5 | (byte)(uVar3 >> 2) & 4;
    *(byte *)(iVar8 + 0x3c1) = bVar5;
    *(uint *)(iVar8 + 0x3cc) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0x16);
    *(byte *)(iVar8 + 0x3c1) = bVar5 | (byte)(uVar3 >> 1) & 8;
    *(uint *)(iVar8 + 0x3d0) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    *(uint *)(iVar8 + 0x3e0) = *(uint *)(iVar8 + 0x3e0) | 1;
  }
  uVar3 = 0;
  if (DAT_0000002e != '\0') {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    uVar3 = *(uint *)(iVar4 + 0x3e0) & 1;
    if (uVar3 != 0) {
      iVar8 = _LVL105(0x2d);
      if (iVar8 != 0) {
        *(undefined2 *)(iVar4 + 0x358) = *(undefined2 *)(iVar8 + 2);
        *(undefined *)(iVar4 + 0x35a) = *(undefined *)(iVar8 + 4);
        iVar4 = 0;
        do {
          *(undefined *)(iVar4 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar8 + 5 + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0x10);
        iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
        *(undefined2 *)(iVar4 + 0x36c) = *(undefined2 *)(iVar8 + 0x15);
        *(uint *)(iVar4 + 0x370) = (uint)*(ushort *)(iVar8 + 0x17);
        *(undefined *)(iVar4 + 0x374) = *(undefined *)(iVar8 + 0x1b);
        *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 2;
      }
      uVar3 = _LVL120(0x3d);
    }
  }
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar4 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar4 + 0x3e0) < 0)) goto _L0;
  iVar7 = unaff_s3 + 0x3e9 + unaff_s1;
  FUN_000106d0(iVar7,0,2);
  iVar9 = unaff_s3 + 0x3ed + unaff_s1;
  iVar14 = unaff_s3 + 0x3ee + unaff_s1;
  _L0(iVar9,0,1);
  FUN_000106fa(iVar14,0,1);
  iVar10 = unaff_s3 + 0x3eb + unaff_s1;
  _L0(iVar10,0,1);
  iVar11 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iVar11,0,1);
  *(undefined *)(iVar4 + 0x411) = 0;
  *(undefined *)(iVar4 + 0x3ef) = 0;
  *(undefined *)(iVar4 + 0x3f0) = 0;
  iVar8 = FUN_00010742(0x30);
  iVar13 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar8 != 0) {
    *(char *)(iVar4 + 0x411) = *(char *)(iVar8 + 1) + '\x02';
    _L0(iVar13,iVar8);
    uVar2 = FUN_0001077e(iVar13,iVar9,iVar14,unaff_s3 + 0x3ef + unaff_s1,iVar7,
                         *(undefined *)(iVar4 + 0x3f0));
    uVar6 = *(uint *)(iVar4 + 0x3ec);
    *(undefined *)(iVar4 + 0x411) = uVar2;
    FUN_000107ac(0,uVar6 >> 0x13 & 1,uVar6 >> 0x12 & 1,uVar6 >> 0x11 & 1,uVar6 >> 0x10 & 1);
    uVar6 = *(uint *)(iVar4 + 0x3ec);
    FUN_000107d6(0,uVar6 >> 0xb & 1,uVar6 >> 10 & 1,uVar6 >> 9 & 1,uVar6 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(iVar4 + 0x3ef));
  }
  iVar4 = FUN_00010800(0,4);
  if (iVar4 != 0) {
    iVar8 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar8 + 0x3e9) = *(byte *)(iVar8 + 0x3e9) | 8;
    if (*(char *)(iVar8 + 0x411) == '\0') {
      *(char *)(iVar8 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
      _L0(iVar13,iVar4);
      uVar2 = FUN_00010846(iVar13,iVar10,iVar11);
      *(undefined *)(iVar8 + 0x411) = uVar2;
    }
  }
  iVar4 = *piStack00000018;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  iVar8 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar8 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar8 + 0x3ae) & 0x10) == 0) {
      uVar12 = 2;
      goto _L0;
    }
    *(byte *)(iVar8 + 0x3e9) = *(byte *)(iVar8 + 0x3e9) | 2;
    *(undefined *)(iVar4 + 0x3b) = 1;
  }
  else {
    uVar12 = 9;
_L0:
    *(undefined4 *)(iVar4 + 0x30) = uVar12;
  }
  iVar8 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar4 + 0x40,iVar13,*(undefined *)(iVar8 + 0x411));
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(iVar8 + 0x411);
  uVar6 = *(uint *)(iVar8 + 1000);
  FUN_0001095e(0,uVar6 >> 9 & 1,uVar6 >> 0xb & 1,uVar6 >> 0xd & 1,uVar6 >> 0x10 & 1);
_L0:
  FUN_0001096c(uVar3,0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_00010498(undefined3 param_1)

{
  int unaff_s1;
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int iVar13;
  int unaff_s8;
  int iVar14;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int *piStack00000018;
  
  uVar3 = FUN_00010498();
  if ((uVar3 & 0xf) == 0) {
    *(undefined *)(unaff_s7 + 0x3d7) = 1;
  }
  else {
    cVar1 = _L0();
    *(char *)(unaff_s7 + 0x3d7) = '\x1f' - cVar1;
  }
  iVar4 = FUN_000104c6(0,5);
  if (iVar4 == 0) {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined4 *)(iVar4 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3d0) = 0xa43;
  }
  else {
    iVar8 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined *)(iVar8 + 0x3c0) = *(undefined *)(iVar4 + 8);
    *(ushort *)(iVar8 + 0x3ae) = *(ushort *)(iVar8 + 0x3ae) | 0x200;
    uVar3 = *(uint *)(iVar4 + 10);
    bVar5 = (byte)(uVar3 >> 3) & 2;
    *(byte *)(iVar8 + 0x3c1) = bVar5;
    *(uint *)(iVar8 + 0x3c8) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0xe);
    bVar5 = (byte)(uVar3 >> 4) & 1 | bVar5;
    *(byte *)(iVar8 + 0x3c1) = bVar5;
    *(uint *)(iVar8 + 0x3c4) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0x12);
    bVar5 = bVar5 | (byte)(uVar3 >> 2) & 4;
    *(byte *)(iVar8 + 0x3c1) = bVar5;
    *(uint *)(iVar8 + 0x3cc) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0x16);
    *(byte *)(iVar8 + 0x3c1) = bVar5 | (byte)(uVar3 >> 1) & 8;
    *(uint *)(iVar8 + 0x3d0) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    *(uint *)(iVar8 + 0x3e0) = *(uint *)(iVar8 + 0x3e0) | 1;
  }
  uVar3 = 0;
  if (DAT_0000002e != '\0') {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    uVar3 = *(uint *)(iVar4 + 0x3e0) & 1;
    if (uVar3 != 0) {
      iVar8 = _LVL105(0x2d);
      if (iVar8 != 0) {
        *(undefined2 *)(iVar4 + 0x358) = *(undefined2 *)(iVar8 + 2);
        *(undefined *)(iVar4 + 0x35a) = *(undefined *)(iVar8 + 4);
        iVar4 = 0;
        do {
          *(undefined *)(iVar4 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar8 + 5 + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0x10);
        iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
        *(undefined2 *)(iVar4 + 0x36c) = *(undefined2 *)(iVar8 + 0x15);
        *(uint *)(iVar4 + 0x370) = (uint)*(ushort *)(iVar8 + 0x17);
        *(undefined *)(iVar4 + 0x374) = *(undefined *)(iVar8 + 0x1b);
        *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 2;
      }
      uVar3 = _LVL120(0x3d);
    }
  }
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar4 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar4 + 0x3e0) < 0)) goto _L0;
  iVar7 = unaff_s3 + 0x3e9 + unaff_s1;
  FUN_000106d0(iVar7,0,2);
  iVar9 = unaff_s3 + 0x3ed + unaff_s1;
  iVar14 = unaff_s3 + 0x3ee + unaff_s1;
  _L0(iVar9,0,1);
  FUN_000106fa(iVar14,0,1);
  iVar10 = unaff_s3 + 0x3eb + unaff_s1;
  _L0(iVar10,0,1);
  iVar11 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iVar11,0,1);
  *(undefined *)(iVar4 + 0x411) = 0;
  *(undefined *)(iVar4 + 0x3ef) = 0;
  *(undefined *)(iVar4 + 0x3f0) = 0;
  iVar8 = FUN_00010742(0x30);
  iVar13 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar8 != 0) {
    *(char *)(iVar4 + 0x411) = *(char *)(iVar8 + 1) + '\x02';
    _L0(iVar13,iVar8);
    uVar2 = FUN_0001077e(iVar13,iVar9,iVar14,unaff_s3 + 0x3ef + unaff_s1,iVar7,
                         *(undefined *)(iVar4 + 0x3f0));
    uVar6 = *(uint *)(iVar4 + 0x3ec);
    *(undefined *)(iVar4 + 0x411) = uVar2;
    FUN_000107ac(0,uVar6 >> 0x13 & 1,uVar6 >> 0x12 & 1,uVar6 >> 0x11 & 1,uVar6 >> 0x10 & 1);
    uVar6 = *(uint *)(iVar4 + 0x3ec);
    FUN_000107d6(0,uVar6 >> 0xb & 1,uVar6 >> 10 & 1,uVar6 >> 9 & 1,uVar6 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(iVar4 + 0x3ef));
  }
  iVar4 = FUN_00010800(0,4);
  if (iVar4 != 0) {
    iVar8 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar8 + 0x3e9) = *(byte *)(iVar8 + 0x3e9) | 8;
    if (*(char *)(iVar8 + 0x411) == '\0') {
      *(char *)(iVar8 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
      _L0(iVar13,iVar4);
      uVar2 = FUN_00010846(iVar13,iVar10,iVar11);
      *(undefined *)(iVar8 + 0x411) = uVar2;
    }
  }
  iVar4 = *piStack00000018;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  iVar8 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar8 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar8 + 0x3ae) & 0x10) == 0) {
      uVar12 = 2;
      goto _L0;
    }
    *(byte *)(iVar8 + 0x3e9) = *(byte *)(iVar8 + 0x3e9) | 2;
    *(undefined *)(iVar4 + 0x3b) = 1;
  }
  else {
    uVar12 = 9;
_L0:
    *(undefined4 *)(iVar4 + 0x30) = uVar12;
  }
  iVar8 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar4 + 0x40,iVar13,*(undefined *)(iVar8 + 0x411));
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(iVar8 + 0x411);
  uVar6 = *(uint *)(iVar8 + 1000);
  FUN_0001095e(0,uVar6 >> 9 & 1,uVar6 >> 0xb & 1,uVar6 >> 0xd & 1,uVar6 >> 0x10 & 1);
_L0:
  FUN_0001096c(uVar3,0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _L0(undefined3 param_1)

{
  int unaff_s1;
  char cVar1;
  undefined uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int iVar12;
  int unaff_s8;
  uint uVar13;
  int iVar14;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int *piStack00000018;
  
  cVar1 = _L0();
  *(char *)(unaff_s7 + 0x3d7) = '\x1f' - cVar1;
  iVar3 = FUN_000104c6(0,5);
  if (iVar3 == 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined4 *)(iVar3 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3d0) = 0xa43;
  }
  else {
    iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined *)(iVar7 + 0x3c0) = *(undefined *)(iVar3 + 8);
    *(ushort *)(iVar7 + 0x3ae) = *(ushort *)(iVar7 + 0x3ae) | 0x200;
    uVar13 = *(uint *)(iVar3 + 10);
    bVar4 = (byte)(uVar13 >> 3) & 2;
    *(byte *)(iVar7 + 0x3c1) = bVar4;
    *(uint *)(iVar7 + 0x3c8) = uVar13 & 0xf | (uVar13 >> 8) << 4;
    uVar13 = *(uint *)(iVar3 + 0xe);
    bVar4 = (byte)(uVar13 >> 4) & 1 | bVar4;
    *(byte *)(iVar7 + 0x3c1) = bVar4;
    *(uint *)(iVar7 + 0x3c4) = uVar13 & 0xf | (uVar13 >> 8) << 4;
    uVar13 = *(uint *)(iVar3 + 0x12);
    bVar4 = bVar4 | (byte)(uVar13 >> 2) & 4;
    *(byte *)(iVar7 + 0x3c1) = bVar4;
    *(uint *)(iVar7 + 0x3cc) = uVar13 & 0xf | (uVar13 >> 8) << 4;
    uVar13 = *(uint *)(iVar3 + 0x16);
    *(byte *)(iVar7 + 0x3c1) = bVar4 | (byte)(uVar13 >> 1) & 8;
    *(uint *)(iVar7 + 0x3d0) = uVar13 & 0xf | (uVar13 >> 8) << 4;
    *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 1;
  }
  uVar13 = 0;
  if (DAT_0000002e != '\0') {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    uVar13 = *(uint *)(iVar3 + 0x3e0) & 1;
    if (uVar13 != 0) {
      iVar7 = _LVL105(0x2d);
      if (iVar7 != 0) {
        *(undefined2 *)(iVar3 + 0x358) = *(undefined2 *)(iVar7 + 2);
        *(undefined *)(iVar3 + 0x35a) = *(undefined *)(iVar7 + 4);
        iVar3 = 0;
        do {
          *(undefined *)(iVar3 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar7 + 5 + iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0x10);
        iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
        *(undefined2 *)(iVar3 + 0x36c) = *(undefined2 *)(iVar7 + 0x15);
        *(uint *)(iVar3 + 0x370) = (uint)*(ushort *)(iVar7 + 0x17);
        *(undefined *)(iVar3 + 0x374) = *(undefined *)(iVar7 + 0x1b);
        *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 2;
      }
      uVar13 = _LVL120(0x3d);
    }
  }
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar3 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar3 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar3 + 0x3e0) < 0)) goto _L0;
  iVar6 = unaff_s3 + 0x3e9 + unaff_s1;
  FUN_000106d0(iVar6,0,2);
  iVar8 = unaff_s3 + 0x3ed + unaff_s1;
  iVar14 = unaff_s3 + 0x3ee + unaff_s1;
  _L0(iVar8,0,1);
  FUN_000106fa(iVar14,0,1);
  iVar9 = unaff_s3 + 0x3eb + unaff_s1;
  _L0(iVar9,0,1);
  iVar10 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iVar10,0,1);
  *(undefined *)(iVar3 + 0x411) = 0;
  *(undefined *)(iVar3 + 0x3ef) = 0;
  *(undefined *)(iVar3 + 0x3f0) = 0;
  iVar7 = FUN_00010742(0x30);
  iVar12 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar7 != 0) {
    *(char *)(iVar3 + 0x411) = *(char *)(iVar7 + 1) + '\x02';
    _L0(iVar12,iVar7);
    uVar2 = FUN_0001077e(iVar12,iVar8,iVar14,unaff_s3 + 0x3ef + unaff_s1,iVar6,
                         *(undefined *)(iVar3 + 0x3f0));
    uVar5 = *(uint *)(iVar3 + 0x3ec);
    *(undefined *)(iVar3 + 0x411) = uVar2;
    FUN_000107ac(0,uVar5 >> 0x13 & 1,uVar5 >> 0x12 & 1,uVar5 >> 0x11 & 1,uVar5 >> 0x10 & 1);
    uVar5 = *(uint *)(iVar3 + 0x3ec);
    FUN_000107d6(0,uVar5 >> 0xb & 1,uVar5 >> 10 & 1,uVar5 >> 9 & 1,uVar5 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(iVar3 + 0x3ef));
  }
  iVar3 = FUN_00010800(0,4);
  if (iVar3 != 0) {
    iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar7 + 0x3e9) = *(byte *)(iVar7 + 0x3e9) | 8;
    if (*(char *)(iVar7 + 0x411) == '\0') {
      *(char *)(iVar7 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
      _L0(iVar12,iVar3);
      uVar2 = FUN_00010846(iVar12,iVar9,iVar10);
      *(undefined *)(iVar7 + 0x411) = uVar2;
    }
  }
  iVar3 = *piStack00000018;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar7 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar7 + 0x3ae) & 0x10) == 0) {
      uVar11 = 2;
      goto _L0;
    }
    *(byte *)(iVar7 + 0x3e9) = *(byte *)(iVar7 + 0x3e9) | 2;
    *(undefined *)(iVar3 + 0x3b) = 1;
  }
  else {
    uVar11 = 9;
_L0:
    *(undefined4 *)(iVar3 + 0x30) = uVar11;
  }
  iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar3 + 0x40,iVar12,*(undefined *)(iVar7 + 0x411));
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(iVar7 + 0x411);
  uVar5 = *(uint *)(iVar7 + 1000);
  FUN_0001095e(0,uVar5 >> 9 & 1,uVar5 >> 0xb & 1,uVar5 >> 0xd & 1,uVar5 >> 0x10 & 1);
_L0:
  FUN_0001096c(uVar13,0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar3 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_000104c6(undefined3 param_1)

{
  char cVar1;
  int unaff_s1;
  undefined uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int iVar12;
  int unaff_s8;
  uint uVar13;
  int iVar14;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int *piStack00000018;
  
  iVar3 = FUN_000104c6();
  if (iVar3 == 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined4 *)(iVar3 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3d0) = 0xa43;
  }
  else {
    iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined *)(iVar7 + 0x3c0) = *(undefined *)(iVar3 + 8);
    *(ushort *)(iVar7 + 0x3ae) = *(ushort *)(iVar7 + 0x3ae) | 0x200;
    uVar13 = *(uint *)(iVar3 + 10);
    bVar4 = (byte)(uVar13 >> 3) & 2;
    *(byte *)(iVar7 + 0x3c1) = bVar4;
    *(uint *)(iVar7 + 0x3c8) = uVar13 & 0xf | (uVar13 >> 8) << 4;
    uVar13 = *(uint *)(iVar3 + 0xe);
    bVar4 = (byte)(uVar13 >> 4) & 1 | bVar4;
    *(byte *)(iVar7 + 0x3c1) = bVar4;
    *(uint *)(iVar7 + 0x3c4) = uVar13 & 0xf | (uVar13 >> 8) << 4;
    uVar13 = *(uint *)(iVar3 + 0x12);
    bVar4 = bVar4 | (byte)(uVar13 >> 2) & 4;
    *(byte *)(iVar7 + 0x3c1) = bVar4;
    *(uint *)(iVar7 + 0x3cc) = uVar13 & 0xf | (uVar13 >> 8) << 4;
    uVar13 = *(uint *)(iVar3 + 0x16);
    *(byte *)(iVar7 + 0x3c1) = bVar4 | (byte)(uVar13 >> 1) & 8;
    *(uint *)(iVar7 + 0x3d0) = uVar13 & 0xf | (uVar13 >> 8) << 4;
    *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 1;
  }
  uVar13 = 0;
  if (DAT_0000002e != '\0') {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    uVar13 = *(uint *)(iVar3 + 0x3e0) & 1;
    if (uVar13 != 0) {
      iVar7 = _LVL105(0x2d);
      if (iVar7 != 0) {
        *(undefined2 *)(iVar3 + 0x358) = *(undefined2 *)(iVar7 + 2);
        *(undefined *)(iVar3 + 0x35a) = *(undefined *)(iVar7 + 4);
        iVar3 = 0;
        do {
          *(undefined *)(iVar3 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar7 + 5 + iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0x10);
        iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
        *(undefined2 *)(iVar3 + 0x36c) = *(undefined2 *)(iVar7 + 0x15);
        *(uint *)(iVar3 + 0x370) = (uint)*(ushort *)(iVar7 + 0x17);
        *(undefined *)(iVar3 + 0x374) = *(undefined *)(iVar7 + 0x1b);
        *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 2;
      }
      uVar13 = _LVL120(0x3d);
    }
  }
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar3 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar3 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar3 + 0x3e0) < 0)) goto _L0;
  iVar6 = unaff_s3 + 0x3e9 + unaff_s1;
  FUN_000106d0(iVar6,0,2);
  iVar8 = unaff_s3 + 0x3ed + unaff_s1;
  iVar14 = unaff_s3 + 0x3ee + unaff_s1;
  _L0(iVar8,0,1);
  FUN_000106fa(iVar14,0,1);
  iVar9 = unaff_s3 + 0x3eb + unaff_s1;
  _L0(iVar9,0,1);
  iVar10 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iVar10,0,1);
  *(undefined *)(iVar3 + 0x411) = 0;
  *(undefined *)(iVar3 + 0x3ef) = 0;
  *(undefined *)(iVar3 + 0x3f0) = 0;
  iVar7 = FUN_00010742(0x30);
  iVar12 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar7 != 0) {
    *(char *)(iVar3 + 0x411) = *(char *)(iVar7 + 1) + '\x02';
    _L0(iVar12,iVar7);
    uVar2 = FUN_0001077e(iVar12,iVar8,iVar14,unaff_s3 + 0x3ef + unaff_s1,iVar6,
                         *(undefined *)(iVar3 + 0x3f0));
    uVar5 = *(uint *)(iVar3 + 0x3ec);
    *(undefined *)(iVar3 + 0x411) = uVar2;
    FUN_000107ac(0,uVar5 >> 0x13 & 1,uVar5 >> 0x12 & 1,uVar5 >> 0x11 & 1,uVar5 >> 0x10 & 1);
    uVar5 = *(uint *)(iVar3 + 0x3ec);
    FUN_000107d6(0,uVar5 >> 0xb & 1,uVar5 >> 10 & 1,uVar5 >> 9 & 1,uVar5 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(iVar3 + 0x3ef));
  }
  iVar3 = FUN_00010800(0,4);
  if (iVar3 != 0) {
    iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar7 + 0x3e9) = *(byte *)(iVar7 + 0x3e9) | 8;
    if (*(char *)(iVar7 + 0x411) == '\0') {
      *(char *)(iVar7 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
      _L0(iVar12,iVar3);
      uVar2 = FUN_00010846(iVar12,iVar9,iVar10);
      *(undefined *)(iVar7 + 0x411) = uVar2;
    }
  }
  iVar3 = *piStack00000018;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar7 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar7 + 0x3ae) & 0x10) == 0) {
      uVar11 = 2;
      goto _L0;
    }
    *(byte *)(iVar7 + 0x3e9) = *(byte *)(iVar7 + 0x3e9) | 2;
    *(undefined *)(iVar3 + 0x3b) = 1;
  }
  else {
    uVar11 = 9;
_L0:
    *(undefined4 *)(iVar3 + 0x30) = uVar11;
  }
  iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar3 + 0x40,iVar12,*(undefined *)(iVar7 + 0x411));
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(iVar7 + 0x411);
  uVar5 = *(uint *)(iVar7 + 1000);
  FUN_0001095e(0,uVar5 >> 9 & 1,uVar5 >> 0xb & 1,uVar5 >> 0xd & 1,uVar5 >> 0x10 & 1);
_L0:
  FUN_0001096c(uVar13,0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar3 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _LVL105(void)

{
  char cVar1;
  int unaff_s1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int iVar12;
  int unaff_s8;
  int iVar13;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int *piStack00000018;
  
  iVar3 = _LVL105();
  if (iVar3 != 0) {
    *(undefined2 *)(unaff_s7 + 0x358) = *(undefined2 *)(iVar3 + 2);
    *(undefined *)(unaff_s7 + 0x35a) = *(undefined *)(iVar3 + 4);
    iVar7 = 0;
    do {
      *(undefined *)(iVar7 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar3 + 5 + iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x10);
    iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined2 *)(iVar7 + 0x36c) = *(undefined2 *)(iVar3 + 0x15);
    *(uint *)(iVar7 + 0x370) = (uint)*(ushort *)(iVar3 + 0x17);
    *(undefined *)(iVar7 + 0x374) = *(undefined *)(iVar3 + 0x1b);
    *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 2;
  }
  uVar4 = _LVL120(0x3d);
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar3 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar3 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar3 + 0x3e0) < 0)) goto _L0;
  iVar6 = unaff_s3 + 0x3e9 + unaff_s1;
  FUN_000106d0(iVar6,0,2);
  iVar8 = unaff_s3 + 0x3ed + unaff_s1;
  iVar13 = unaff_s3 + 0x3ee + unaff_s1;
  _L0(iVar8,0,1);
  FUN_000106fa(iVar13,0,1);
  iVar9 = unaff_s3 + 0x3eb + unaff_s1;
  _L0(iVar9,0,1);
  iVar10 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iVar10,0,1);
  *(undefined *)(iVar3 + 0x411) = 0;
  *(undefined *)(iVar3 + 0x3ef) = 0;
  *(undefined *)(iVar3 + 0x3f0) = 0;
  iVar7 = FUN_00010742(0x30);
  iVar12 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar7 != 0) {
    *(char *)(iVar3 + 0x411) = *(char *)(iVar7 + 1) + '\x02';
    _L0(iVar12,iVar7);
    uVar2 = FUN_0001077e(iVar12,iVar8,iVar13,unaff_s3 + 0x3ef + unaff_s1,iVar6,
                         *(undefined *)(iVar3 + 0x3f0));
    uVar5 = *(uint *)(iVar3 + 0x3ec);
    *(undefined *)(iVar3 + 0x411) = uVar2;
    FUN_000107ac(0,uVar5 >> 0x13 & 1,uVar5 >> 0x12 & 1,uVar5 >> 0x11 & 1,uVar5 >> 0x10 & 1);
    uVar5 = *(uint *)(iVar3 + 0x3ec);
    FUN_000107d6(0,uVar5 >> 0xb & 1,uVar5 >> 10 & 1,uVar5 >> 9 & 1,uVar5 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(iVar3 + 0x3ef));
  }
  iVar3 = FUN_00010800(0,4);
  if (iVar3 != 0) {
    iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar7 + 0x3e9) = *(byte *)(iVar7 + 0x3e9) | 8;
    if (*(char *)(iVar7 + 0x411) == '\0') {
      *(char *)(iVar7 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
      _L0(iVar12,iVar3);
      uVar2 = FUN_00010846(iVar12,iVar9,iVar10);
      *(undefined *)(iVar7 + 0x411) = uVar2;
    }
  }
  iVar3 = *piStack00000018;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar7 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar7 + 0x3ae) & 0x10) == 0) {
      uVar11 = 2;
      goto _L0;
    }
    *(byte *)(iVar7 + 0x3e9) = *(byte *)(iVar7 + 0x3e9) | 2;
    *(undefined *)(iVar3 + 0x3b) = 1;
  }
  else {
    uVar11 = 9;
_L0:
    *(undefined4 *)(iVar3 + 0x30) = uVar11;
  }
  iVar7 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar3 + 0x40,iVar12,*(undefined *)(iVar7 + 0x411));
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(iVar7 + 0x411);
  uVar5 = *(uint *)(iVar7 + 1000);
  FUN_0001095e(0,uVar5 >> 9 & 1,uVar5 >> 0xb & 1,uVar5 >> 0xd & 1,uVar5 >> 0x10 & 1);
_L0:
  FUN_0001096c(uVar4,0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar3 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _LVL120(void)

{
  char cVar1;
  int unaff_s1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int iVar11;
  int unaff_s8;
  int iVar12;
  int iVar13;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int *piStack00000018;
  
  uVar3 = _LVL120();
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar12 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar12 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar12 + 0x3e0) < 0)) goto _L0;
  iVar6 = unaff_s3 + 0x3e9 + unaff_s1;
  FUN_000106d0(iVar6,0,2);
  iVar7 = unaff_s3 + 0x3ed + unaff_s1;
  iVar13 = unaff_s3 + 0x3ee + unaff_s1;
  _L0(iVar7,0,1);
  FUN_000106fa(iVar13,0,1);
  iVar8 = unaff_s3 + 0x3eb + unaff_s1;
  _L0(iVar8,0,1);
  iVar9 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iVar9,0,1);
  *(undefined *)(iVar12 + 0x411) = 0;
  *(undefined *)(iVar12 + 0x3ef) = 0;
  *(undefined *)(iVar12 + 0x3f0) = 0;
  iVar4 = FUN_00010742(0x30);
  iVar11 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar4 != 0) {
    *(char *)(iVar12 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
    _L0(iVar11,iVar4);
    uVar2 = FUN_0001077e(iVar11,iVar7,iVar13,unaff_s3 + 0x3ef + unaff_s1,iVar6,
                         *(undefined *)(iVar12 + 0x3f0));
    uVar5 = *(uint *)(iVar12 + 0x3ec);
    *(undefined *)(iVar12 + 0x411) = uVar2;
    FUN_000107ac(0,uVar5 >> 0x13 & 1,uVar5 >> 0x12 & 1,uVar5 >> 0x11 & 1,uVar5 >> 0x10 & 1);
    uVar5 = *(uint *)(iVar12 + 0x3ec);
    FUN_000107d6(0,uVar5 >> 0xb & 1,uVar5 >> 10 & 1,uVar5 >> 9 & 1,uVar5 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(iVar12 + 0x3ef));
  }
  iVar12 = FUN_00010800(0,4);
  if (iVar12 != 0) {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 8;
    if (*(char *)(iVar4 + 0x411) == '\0') {
      *(char *)(iVar4 + 0x411) = *(char *)(iVar12 + 1) + '\x02';
      _L0(iVar11,iVar12);
      uVar2 = FUN_00010846(iVar11,iVar8,iVar9);
      *(undefined *)(iVar4 + 0x411) = uVar2;
    }
  }
  iVar12 = *piStack00000018;
  *(undefined4 *)(iVar12 + 0x30) = 0;
  iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar4 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar4 + 0x3ae) & 0x10) == 0) {
      uVar10 = 2;
      goto _L0;
    }
    *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 2;
    *(undefined *)(iVar12 + 0x3b) = 1;
  }
  else {
    uVar10 = 9;
_L0:
    *(undefined4 *)(iVar12 + 0x30) = uVar10;
  }
  iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar12 + 0x40,iVar11,*(undefined *)(iVar4 + 0x411));
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(iVar4 + 0x411);
  uVar5 = *(uint *)(iVar4 + 1000);
  FUN_0001095e(0,uVar5 >> 9 & 1,uVar5 >> 0xb & 1,uVar5 >> 0xd & 1,uVar5 >> 0x10 & 1);
_L0:
  FUN_0001096c(uVar3,0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar12 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar12 + 0x3e0) = *(uint *)(iVar12 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_000106d0(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int iVar5;
  int unaff_s8;
  int unaff_s9;
  int iVar6;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int iStack0000000c;
  int iStack00000010;
  int iStack00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  FUN_000106d0();
  iStack0000000c = unaff_s3 + 0x3ed + unaff_s1;
  iVar6 = unaff_s3 + 0x3ee + unaff_s1;
  _L0(iStack0000000c,0,1);
  FUN_000106fa(iVar6,0,1);
  iStack00000010 = unaff_s3 + 0x3eb + unaff_s1;
  _L0(iStack00000010,0,1);
  iStack00000014 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iStack00000014,0,1);
  *(undefined *)(unaff_s9 + 0x411) = 0;
  *(undefined *)(unaff_s9 + 0x3ef) = 0;
  *(undefined *)(unaff_s9 + 0x3f0) = 0;
  iVar2 = FUN_00010742(0x30);
  iVar5 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar2 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
    _L0(iVar5,iVar2);
    uVar1 = FUN_0001077e(iVar5,iStack0000000c,iVar6,unaff_s3 + 0x3ef + unaff_s1,in_stack_0000001c,
                         *(undefined *)(unaff_s9 + 0x3f0));
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    *(undefined *)(unaff_s9 + 0x411) = uVar1;
    FUN_000107ac(0,uVar3 >> 0x13 & 1,uVar3 >> 0x12 & 1,uVar3 >> 0x11 & 1,uVar3 >> 0x10 & 1);
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    FUN_000107d6(0,uVar3 >> 0xb & 1,uVar3 >> 10 & 1,uVar3 >> 9 & 1,uVar3 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(unaff_s9 + 0x3ef));
  }
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 8;
    if (*(char *)(iVar6 + 0x411) == '\0') {
      *(char *)(iVar6 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar5,iVar2);
      uVar1 = FUN_00010846(iVar5,iStack00000010,iStack00000014);
      *(undefined *)(iVar6 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar6 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar6 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,iVar5,*(undefined *)(iVar6 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar6 + 0x411);
  uVar3 = *(uint *)(iVar6 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_s3;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int iVar6;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int iStack00000010;
  int iStack00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  _L0();
  FUN_000106fa(0,1);
  iStack00000010 = unaff_s3 + 0x3eb + unaff_s1;
  _L0(iStack00000010,0,1);
  iStack00000014 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iStack00000014,0,1);
  *(undefined *)(unaff_s9 + 0x411) = 0;
  *(undefined *)(unaff_s9 + 0x3ef) = 0;
  *(undefined *)(unaff_s9 + 0x3f0) = 0;
  iVar2 = FUN_00010742(0x30);
  iVar6 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar2 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
    _L0(iVar6,iVar2);
    uVar1 = FUN_0001077e(iVar6,in_stack_0000000c,unaff_s3 + 0x3ef + unaff_s1,in_stack_0000001c,
                         *(undefined *)(unaff_s9 + 0x3f0));
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    *(undefined *)(unaff_s9 + 0x411) = uVar1;
    FUN_000107ac(0,uVar3 >> 0x13 & 1,uVar3 >> 0x12 & 1,uVar3 >> 0x11 & 1,uVar3 >> 0x10 & 1);
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    FUN_000107d6(0,uVar3 >> 0xb & 1,uVar3 >> 10 & 1,uVar3 >> 9 & 1,uVar3 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(unaff_s9 + 0x3ef));
  }
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar6,iVar2);
      uVar1 = FUN_00010846(iVar6,iStack00000010,iStack00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,iVar6,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_000106fa(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_s3;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int iVar6;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int iStack00000010;
  int iStack00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  FUN_000106fa();
  iStack00000010 = unaff_s3 + 0x3eb + unaff_s1;
  _L0(iStack00000010,0,1);
  iStack00000014 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iStack00000014,0,1);
  *(undefined *)(unaff_s9 + 0x411) = 0;
  *(undefined *)(unaff_s9 + 0x3ef) = 0;
  *(undefined *)(unaff_s9 + 0x3f0) = 0;
  iVar2 = FUN_00010742(0x30);
  iVar6 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar2 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
    _L0(iVar6,iVar2);
    uVar1 = FUN_0001077e(iVar6,in_stack_0000000c,unaff_s3 + 0x3ef + unaff_s1,in_stack_0000001c,
                         *(undefined *)(unaff_s9 + 0x3f0));
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    *(undefined *)(unaff_s9 + 0x411) = uVar1;
    FUN_000107ac(0,uVar3 >> 0x13 & 1,uVar3 >> 0x12 & 1,uVar3 >> 0x11 & 1,uVar3 >> 0x10 & 1);
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    FUN_000107d6(0,uVar3 >> 0xb & 1,uVar3 >> 10 & 1,uVar3 >> 9 & 1,uVar3 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(unaff_s9 + 0x3ef));
  }
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar6,iVar2);
      uVar1 = FUN_00010846(iVar6,iStack00000010,iStack00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,iVar6,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_s3;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int iVar6;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int iStack00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  _L0();
  iStack00000014 = unaff_s3 + 0x3ec + unaff_s1;
  _L0(iStack00000014,0,1);
  *(undefined *)(unaff_s9 + 0x411) = 0;
  *(undefined *)(unaff_s9 + 0x3ef) = 0;
  *(undefined *)(unaff_s9 + 0x3f0) = 0;
  iVar2 = FUN_00010742(0x30);
  iVar6 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar2 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
    _L0(iVar6,iVar2);
    uVar1 = FUN_0001077e(iVar6,in_stack_0000000c,unaff_s3 + 0x3ef + unaff_s1,in_stack_0000001c,
                         *(undefined *)(unaff_s9 + 0x3f0));
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    *(undefined *)(unaff_s9 + 0x411) = uVar1;
    FUN_000107ac(0,uVar3 >> 0x13 & 1,uVar3 >> 0x12 & 1,uVar3 >> 0x11 & 1,uVar3 >> 0x10 & 1);
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    FUN_000107d6(0,uVar3 >> 0xb & 1,uVar3 >> 10 & 1,uVar3 >> 9 & 1,uVar3 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(unaff_s9 + 0x3ef));
  }
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar6,iVar2);
      uVar1 = FUN_00010846(iVar6,in_stack_00000010,iStack00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,iVar6,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_s3;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int iVar6;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  _L0();
  *(undefined *)(unaff_s9 + 0x411) = 0;
  *(undefined *)(unaff_s9 + 0x3ef) = 0;
  *(undefined *)(unaff_s9 + 0x3f0) = 0;
  iVar2 = FUN_00010742(0x30);
  iVar6 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar2 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
    _L0(iVar6,iVar2);
    uVar1 = FUN_0001077e(iVar6,in_stack_0000000c,unaff_s3 + 0x3ef + unaff_s1,in_stack_0000001c,
                         *(undefined *)(unaff_s9 + 0x3f0));
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    *(undefined *)(unaff_s9 + 0x411) = uVar1;
    FUN_000107ac(0,uVar3 >> 0x13 & 1,uVar3 >> 0x12 & 1,uVar3 >> 0x11 & 1,uVar3 >> 0x10 & 1);
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    FUN_000107d6(0,uVar3 >> 0xb & 1,uVar3 >> 10 & 1,uVar3 >> 9 & 1,uVar3 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(unaff_s9 + 0x3ef));
  }
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar6,iVar2);
      uVar1 = FUN_00010846(iVar6,in_stack_00000010,in_stack_00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,iVar6,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_00010742(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_s3;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int iVar6;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar2 = FUN_00010742();
  iVar6 = unaff_s3 + 0x3f1 + unaff_s1;
  if (iVar2 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
    _L0(iVar6,iVar2);
    uVar1 = FUN_0001077e(iVar6,in_stack_0000000c,unaff_s3 + 0x3ef + unaff_s1,in_stack_0000001c,
                         *(undefined *)(unaff_s9 + 0x3f0));
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    *(undefined *)(unaff_s9 + 0x411) = uVar1;
    FUN_000107ac(0,uVar3 >> 0x13 & 1,uVar3 >> 0x12 & 1,uVar3 >> 0x11 & 1,uVar3 >> 0x10 & 1);
    uVar3 = *(uint *)(unaff_s9 + 0x3ec);
    FUN_000107d6(0,uVar3 >> 0xb & 1,uVar3 >> 10 & 1,uVar3 >> 9 & 1,uVar3 >> 8 & 1);
    FUN_000107ea(0,*(undefined *)(unaff_s9 + 0x3ef));
  }
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar6,iVar2);
      uVar1 = FUN_00010846(iVar6,in_stack_00000010,in_stack_00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,iVar6,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_s3;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  _L0();
  uVar1 = FUN_0001077e(in_stack_0000000c,unaff_s3 + 0x3ef + unaff_s1,in_stack_0000001c,
                       *(undefined *)(unaff_s9 + 0x3f0));
  uVar3 = *(uint *)(unaff_s9 + 0x3ec);
  *(undefined *)(unaff_s9 + 0x411) = uVar1;
  FUN_000107ac(0,uVar3 >> 0x13 & 1,uVar3 >> 0x12 & 1,uVar3 >> 0x11 & 1,uVar3 >> 0x10 & 1);
  uVar3 = *(uint *)(unaff_s9 + 0x3ec);
  FUN_000107d6(0,uVar3 >> 0xb & 1,uVar3 >> 10 & 1,uVar3 >> 9 & 1,uVar3 >> 8 & 1);
  FUN_000107ea(0,*(undefined *)(unaff_s9 + 0x3ef));
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar2);
      uVar1 = FUN_00010846(in_stack_00000010,in_stack_00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_0001077e(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *in_stack_00000018;
  
  uVar1 = FUN_0001077e();
  uVar3 = *(uint *)(unaff_s9 + 0x3ec);
  *(undefined *)(unaff_s9 + 0x411) = uVar1;
  FUN_000107ac(0,uVar3 >> 0x13 & 1,uVar3 >> 0x12 & 1,uVar3 >> 0x11 & 1,uVar3 >> 0x10 & 1);
  uVar3 = *(uint *)(unaff_s9 + 0x3ec);
  FUN_000107d6(0,uVar3 >> 0xb & 1,uVar3 >> 10 & 1,uVar3 >> 9 & 1,uVar3 >> 8 & 1);
  FUN_000107ea(0,*(undefined *)(unaff_s9 + 0x3ef));
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar2);
      uVar1 = FUN_00010846(in_stack_00000010,in_stack_00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_000107ac(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *in_stack_00000018;
  
  FUN_000107ac();
  uVar3 = *(uint *)(unaff_s9 + 0x3ec);
  FUN_000107d6(0,uVar3 >> 0xb & 1,uVar3 >> 10 & 1,uVar3 >> 9 & 1,uVar3 >> 8 & 1);
  FUN_000107ea(0,*(undefined *)(unaff_s9 + 0x3ef));
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar2);
      uVar1 = FUN_00010846(in_stack_00000010,in_stack_00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_000107d6(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *in_stack_00000018;
  
  FUN_000107d6();
  FUN_000107ea(0,*(undefined *)(unaff_s9 + 0x3ef));
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar2);
      uVar1 = FUN_00010846(in_stack_00000010,in_stack_00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_000107ea(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *in_stack_00000018;
  
  FUN_000107ea();
  iVar2 = FUN_00010800(0,4);
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar2);
      uVar1 = FUN_00010846(in_stack_00000010,in_stack_00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_00010800(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *in_stack_00000018;
  
  iVar2 = FUN_00010800();
  if (iVar2 != 0) {
    iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 8;
    if (*(char *)(iVar5 + 0x411) == '\0') {
      *(char *)(iVar5 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0(iVar2);
      uVar1 = FUN_00010846(in_stack_00000010,in_stack_00000014);
      *(undefined *)(iVar5 + 0x411) = uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar5 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar5 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar5 + 0x3e9) = *(byte *)(iVar5 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
_L0:
  iVar5 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,*(undefined *)(iVar5 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar5 + 0x411);
  uVar3 = *(uint *)(iVar5 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *in_stack_00000018;
  
  _L0();
  uVar1 = FUN_00010846(in_stack_00000010,in_stack_00000014);
  *(undefined *)(unaff_s3 + 0x411) = uVar1;
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar4 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar4 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar5 = 2;
  }
  else {
    uVar5 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar5;
_L0:
  iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,*(undefined *)(iVar4 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar4 + 0x411);
  uVar3 = *(uint *)(iVar4 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_00010846(void)

{
  int unaff_s1;
  undefined uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int *in_stack_00000018;
  
  uVar1 = FUN_00010846();
  *(undefined *)(unaff_s3 + 0x411) = uVar1;
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar4 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar4 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar5 = 2;
  }
  else {
    uVar5 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar5;
_L0:
  iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
  FUN_00010928(iVar2 + 0x40,*(undefined *)(iVar4 + 0x411));
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(iVar4 + 0x411);
  uVar3 = *(uint *)(iVar4 + 1000);
  FUN_0001095e(0,uVar3 >> 9 & 1,uVar3 >> 0xb & 1,uVar3 >> 0xd & 1,uVar3 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 _LVL154(undefined3 param_1)

{
  int unaff_s0;
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s4;
  int unaff_s5;
  int iVar10;
  undefined4 *unaff_s8;
  int iVar11;
  int in_stack_00000004;
  
  uVar5 = _LVL154();
  unaff_s8[0xb] = uVar5;
  *(undefined *)((int)unaff_s8 + 0x35) = *(undefined *)(unaff_s0 + 0x18);
  if (*(char *)(unaff_s4 + 0x16a) == '\0') goto _L0;
  iVar9 = unaff_s5 * 0x5d8;
  iVar11 = iVar9 + 0x358;
  *(undefined2 *)(iVar9 + 0x3a0) = *(undefined2 *)(unaff_s8 + 10);
  *(undefined4 *)(iVar9 + 0x378) = *unaff_s8;
  *(undefined2 *)(iVar9 + 0x37c) = *(undefined2 *)(unaff_s8 + 1);
  *(undefined2 *)(iVar9 + 0x3ae) = *(undefined2 *)((int)unaff_s8 + 0x32);
  *(undefined2 *)(iVar9 + 0x3ac) = *(undefined2 *)(unaff_s8 + 0xc);
  _L0(iVar9 + 0x37e,(int)unaff_s8 + 6,0x22);
  uVar5 = unaff_s8[0xb];
  *(undefined4 *)(iVar9 + 0x3e0) = 0;
  *(undefined4 *)(iVar9 + 0x3a4) = uVar5;
  *(undefined *)(iVar9 + 0x3d5) = *(undefined *)((int)unaff_s8 + 0x36);
  *(undefined *)(iVar9 + 0x3d6) = *(undefined *)((int)unaff_s8 + 0x37);
  _L0(iVar9 + 0x3b0);
  if (*(char *)(unaff_s8[0xb] + 2) == '\0') {
    uVar3 = FUN_00010498(iVar9 + 0x3b0,1);
    if ((uVar3 & 0xf) == 0) {
      *(undefined *)(iVar9 + 0x3d7) = 1;
    }
    else {
      cVar1 = _L0();
      *(char *)(iVar9 + 0x3d7) = '\x1f' - cVar1;
    }
  }
  iVar4 = FUN_000104c6(0,5);
  if (iVar4 == 0) {
    iVar4 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iVar4 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3d0) = 0xa43;
  }
  else {
    iVar8 = unaff_s5 * 0x5d8;
    *(undefined *)(iVar8 + 0x3c0) = *(undefined *)(iVar4 + 8);
    *(ushort *)(iVar8 + 0x3ae) = *(ushort *)(iVar8 + 0x3ae) | 0x200;
    uVar3 = *(uint *)(iVar4 + 10);
    bVar6 = (byte)(uVar3 >> 3) & 2;
    *(byte *)(iVar8 + 0x3c1) = bVar6;
    *(uint *)(iVar8 + 0x3c8) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0xe);
    bVar6 = (byte)(uVar3 >> 4) & 1 | bVar6;
    *(byte *)(iVar8 + 0x3c1) = bVar6;
    *(uint *)(iVar8 + 0x3c4) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0x12);
    bVar6 = bVar6 | (byte)(uVar3 >> 2) & 4;
    *(byte *)(iVar8 + 0x3c1) = bVar6;
    *(uint *)(iVar8 + 0x3cc) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0x16);
    *(byte *)(iVar8 + 0x3c1) = bVar6 | (byte)(uVar3 >> 1) & 8;
    *(uint *)(iVar8 + 0x3d0) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    *(uint *)(iVar8 + 0x3e0) = *(uint *)(iVar8 + 0x3e0) | 1;
  }
  uVar3 = 0;
  if (DAT_0000002e != '\0') {
    iVar4 = unaff_s5 * 0x5d8;
    uVar3 = *(uint *)(iVar4 + 0x3e0) & 1;
    if (uVar3 != 0) {
      iVar8 = _LVL105(0x2d);
      if (iVar8 != 0) {
        *(undefined2 *)(iVar4 + 0x358) = *(undefined2 *)(iVar8 + 2);
        *(undefined *)(iVar4 + 0x35a) = *(undefined *)(iVar8 + 4);
        iVar4 = 0;
        do {
          *(undefined *)(iVar4 + iVar9 + 0x35b) = *(undefined *)(iVar8 + 5 + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0x10);
        iVar4 = unaff_s5 * 0x5d8;
        *(undefined2 *)(iVar4 + 0x36c) = *(undefined2 *)(iVar8 + 0x15);
        *(uint *)(iVar4 + 0x370) = (uint)*(ushort *)(iVar8 + 0x17);
        *(undefined *)(iVar4 + 0x374) = *(undefined *)(iVar8 + 0x1b);
        *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 2;
      }
      uVar3 = _LVL120(0x3d);
    }
  }
  iVar4 = unaff_s5 * 0x5d8;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  *(char *)(iVar4 + 1000) = cVar1;
  if ((cVar1 != '\0') && (-1 < *(int *)(iVar4 + 0x3e0))) {
    FUN_000106d0(iVar9 + 0x3e9,0,2);
    _L0(iVar9 + 0x3ed,0,1);
    FUN_000106fa(iVar9 + 0x3ee,0,1);
    _L0(iVar9 + 0x3eb,0,1);
    _L0(iVar9 + 0x3ec,0,1);
    *(undefined *)(iVar4 + 0x411) = 0;
    *(undefined *)(iVar4 + 0x3ef) = 0;
    *(undefined *)(iVar4 + 0x3f0) = 0;
    iVar8 = FUN_00010742(0x30);
    iVar10 = iVar9 + 0x3f1;
    if (iVar8 != 0) {
      *(char *)(iVar4 + 0x411) = *(char *)(iVar8 + 1) + '\x02';
      _L0(iVar10,iVar8);
      uVar2 = FUN_0001077e(iVar10,iVar9 + 0x3ed,iVar9 + 0x3ee,iVar9 + 0x3ef,iVar9 + 0x3e9,
                           *(undefined *)(iVar4 + 0x3f0));
      uVar7 = *(uint *)(iVar4 + 0x3ec);
      *(undefined *)(iVar4 + 0x411) = uVar2;
      FUN_000107ac(0,uVar7 >> 0x13 & 1,uVar7 >> 0x12 & 1,uVar7 >> 0x11 & 1,uVar7 >> 0x10 & 1);
      uVar7 = *(uint *)(iVar4 + 0x3ec);
      FUN_000107d6(0,uVar7 >> 0xb & 1,uVar7 >> 10 & 1,uVar7 >> 9 & 1,uVar7 >> 8 & 1);
      FUN_000107ea(0,*(undefined *)(iVar4 + 0x3ef));
    }
    iVar4 = FUN_00010800(0,4);
    if (iVar4 != 0) {
      iVar8 = unaff_s5 * 0x5d8;
      *(byte *)(iVar8 + 0x3e9) = *(byte *)(iVar8 + 0x3e9) | 8;
      if (*(char *)(iVar8 + 0x411) == '\0') {
        *(char *)(iVar8 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
        _L0(iVar10,iVar4);
        uVar2 = FUN_00010846(iVar10,iVar9 + 0x3eb,iVar9 + 0x3ec);
        *(undefined *)(iVar8 + 0x411) = uVar2;
      }
    }
    iVar9 = iRam00000000;
    iVar4 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iRam00000000 + 0x30) = 0;
    if ((*(uint *)(iVar4 + 1000) & 0x12800) == 0) {
      if ((*(ushort *)(iVar4 + 0x3ae) & 0x10) == 0) {
        uVar5 = 2;
        goto _L0;
      }
      *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 2;
      *(undefined *)(iVar9 + 0x3b) = 1;
    }
    else {
      uVar5 = 9;
_L0:
      *(undefined4 *)(iVar9 + 0x30) = uVar5;
    }
    iVar4 = unaff_s5 * 0x5d8;
    FUN_00010928(iVar9 + 0x40,iVar10,*(undefined *)(iVar4 + 0x411));
    *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(iVar4 + 0x411);
    uVar7 = *(uint *)(iVar4 + 1000);
    FUN_0001095e(0,uVar7 >> 9 & 1,uVar7 >> 0xb & 1,uVar7 >> 0xd & 1,uVar7 >> 0x10 & 1);
  }
  FUN_0001096c(uVar3,0,iVar11);
  FUN_0001097a(iVar11);
  FUN_00010988(iVar11);
  FUN_00010996(iVar11);
  *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
_L0:
  if (*(char *)(unaff_s8 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0xd) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_00010928(void)

{
  int unaff_s1;
  int iVar1;
  uint uVar2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int *in_stack_00000018;
  
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s3 + 0x411);
  uVar2 = *(uint *)(unaff_s3 + 1000);
  FUN_0001095e(0,uVar2 >> 9 & 1,uVar2 >> 0xb & 1,uVar2 >> 0xd & 1,uVar2 >> 0x10 & 1);
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_0001095e(void)

{
  int unaff_s1;
  int iVar1;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  FUN_0001095e();
  FUN_0001096c(0,in_stack_00000008);
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_0001096c(void)

{
  int unaff_s1;
  int iVar1;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  FUN_0001096c();
  FUN_0001097a(in_stack_00000008);
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_0001097a(void)

{
  int unaff_s1;
  int iVar1;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  FUN_0001097a();
  FUN_00010988(in_stack_00000008);
  FUN_00010996(in_stack_00000008);
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_00010988(void)

{
  int unaff_s1;
  int iVar1;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  FUN_00010988();
  FUN_00010996(in_stack_00000008);
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_00010996(void)

{
  int unaff_s1;
  int iVar1;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de(0x1004,0xd,4);
  return 1;
}



undefined4 FUN_000109de(void)

{
  FUN_000109de();
  return 1;
}



mac_scan_result * scanu_search_by_bssid(mac_addr *bssid)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



mac_scan_result * scanu_search_by_ssid(mac_ssid *ssid,int *idx)

{
  int iVar1;
  int iVar2;
  int iVar3;
  mac_scan_result *pmVar4;
  char cVar5;
  
  pmVar4 = (mac_scan_result *)0x0;
  if (ssid->length != '\0') {
    iVar1 = 0;
    iVar3 = 0;
    pmVar4 = (mac_scan_result *)0x0;
    cVar5 = -0x80;
    do {
      if (*(char *)(iVar1 + 0x4c) == '\0') {
        return pmVar4;
      }
      if (((cVar5 < *(char *)(iVar1 + 0x4d)) && (ssid->length == *(uint8_t *)(iVar1 + 0x1e))) &&
         (iVar2 = FUN_00010a6a(iVar1 + 0x1f,ssid->array), iVar2 == 0)) {
        cVar5 = *(char *)(iVar1 + 0x4d);
        pmVar4 = (mac_scan_result *)(iVar1 + 0x18);
        *idx = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x38;
    } while (iVar3 != 6);
  }
  return pmVar4;
}



int FUN_00010a6a(int param_1)

{
  int unaff_s0;
  char *unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  do {
    iVar1 = FUN_00010a6a(param_1);
    if (iVar1 == 0) {
      unaff_s5 = (int)*(char *)(unaff_s0 + 0x4d);
      unaff_s3 = unaff_s0 + 0x18;
      *unaff_s4 = unaff_s2;
    }
    do {
      do {
        param_1 = unaff_s0;
        unaff_s2 = unaff_s2 + 1;
        unaff_s0 = param_1 + 0x38;
        if ((unaff_s2 == unaff_s6) || (*(char *)(param_1 + 0x84) == '\0')) {
          return unaff_s3;
        }
      } while (*(char *)(param_1 + 0x85) <= unaff_s5);
    } while (*unaff_s1 != *(char *)(param_1 + 0x56));
    param_1 = param_1 + 0x57;
  } while( true );
}



void scanu_rm_exist_ssid(mac_ssid *ssid,int index)

{
  int iVar1;
  
  if ((index < 0) || (ssid == (mac_ssid *)0x0)) {
    return;
  }
  iVar1 = index * 0x38;
  if (((*(char *)(iVar1 + 0x4c) != '\0') && (ssid->length == *(uint8_t *)(iVar1 + 0x1e))) &&
     (iVar1 = _LVL188(iVar1 + 0x1f,ssid->array), iVar1 == 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _LVL188(void)

{
  int iVar1;
  
  iVar1 = _LVL188();
  if (iVar1 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void scanu_scan_next(undefined2 param_1,undefined2 param_2,undefined3 param_3,
                    undefined4 uRam00000168)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  iVar2 = iRam00000000;
  while( true ) {
    if (1 < DAT_0000016b) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    uVar12 = 0;
    pbVar9 = (byte *)(iRam00000000 + 2);
    while ((int)uVar12 < (int)(uint)*(byte *)(iRam00000000 + 0x14f)) {
      if (*pbVar9 == DAT_0000016b) goto _L0;
      uVar12 = uVar12 + 1;
      pbVar9 = pbVar9 + 6;
    }
    if (*(byte *)(iRam00000000 + 0x14f) != uVar12) break;
    DAT_0000016b = DAT_0000016b + 1;
  }
_L0:
  iVar4 = FUN_00010b70(0x800,2,4,0x154);
  *(undefined *)(iVar4 + 0x14e) = *(undefined *)(iVar2 + 0x14e);
  *(undefined4 *)(iVar4 + 0x140) = *(undefined4 *)(iVar2 + 0x140);
  *(undefined2 *)(iVar4 + 0x144) = *(undefined2 *)(iVar2 + 0x144);
  *(undefined *)(iVar4 + 0x150) = *(undefined *)(iVar2 + 0x150);
  *(undefined *)(iVar4 + 0x151) = *(undefined *)(iVar2 + 0x151);
  while ((int)uVar12 < (int)(uint)*(byte *)(iVar2 + 0x14f)) {
    if (*(byte *)(uVar12 * 6 + iVar2 + 2) == DAT_0000016b) {
      bVar1 = *(byte *)(iVar4 + 0x14f);
      FUN_00010d64((uint)bVar1 * 6 + iVar4,6);
      *(byte *)(iVar4 + 0x14f) = bVar1 + 1;
    }
    uVar12 = uVar12 + 1;
  }
  iVar13 = 0xfc;
  iVar14 = 0;
  while (iVar14 < (int)(uint)*(byte *)(iVar2 + 0x150)) {
    FUN_00010d80(iVar4 + iVar13,iVar2 + iVar13,0x22);
    iVar14 = iVar14 + 1;
    iVar13 = iVar13 + 0x22;
  }
  uVar12 = (uint)*(ushort *)(iRam00000000 + 0x14c);
  pcVar8 = &DAT_00000010;
  if (200 < uVar12) {
    uVar12 = 0;
  }
  if ((DAT_0000016b == 1) || (*(char *)(iRam00000000 + 0x151) != '\0')) {
    iVar2 = 4;
    iVar13 = 8;
  }
  else {
    iVar2 = 0;
    iVar13 = 0xc;
  }
  iVar14 = 0;
  do {
    puVar10 = (undefined *)(iVar2 + iVar14);
    puVar11 = (undefined *)(iVar14 + 0x26);
    iVar14 = iVar14 + 1;
    *puVar11 = *puVar10;
  } while (iVar14 != 8);
  puVar10 = &DAT_0000002e;
  if ((uVar12 != 0) && (DAT_00000010 == '\n')) {
    uVar5 = DAT_00000011 + 2 & 0xff;
    uVar3 = uVar5;
    iVar2 = 0;
    while( true ) {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) break;
      *puVar10 = *(undefined *)(iVar2 + 0x10);
      iVar2 = iVar2 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar10 = (undefined *)(uVar5 + 0x2e);
    pcVar8 = (char *)(uVar5 + 0x10);
    uVar12 = uVar12 - uVar5 & 0xffff;
  }
  if (iVar13 != 8) {
    uVar3 = iVar13 - 8U & 0xff;
    *puVar10 = 0x32;
    puVar10[1] = (char)uVar3;
    iVar13 = uVar3 + 2;
    iVar2 = 0;
    puVar11 = puVar10 + 2;
    while( true ) {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) break;
      *puVar11 = *(undefined *)(iVar2 + 8);
      iVar2 = iVar2 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar10 = puVar10 + iVar13;
  }
  if (DAT_0000016b == 0) {
    *puVar10 = 3;
    puVar10[1] = 1;
    puVar10 = puVar10 + 3;
  }
  if ((uVar12 != 0) && (*pcVar8 == ';')) {
    uVar3 = 0;
    uVar5 = (byte)pcVar8[1] + 2 & 0xff;
    while (uVar5 != uVar3) {
      pcVar6 = pcVar8 + uVar3;
      pcVar7 = puVar10 + uVar3;
      uVar3 = uVar3 + 1;
      *pcVar7 = *pcVar6;
    }
    puVar10 = puVar10 + uVar5;
    pcVar8 = pcVar8 + uVar5;
    uVar12 = uVar12 - uVar5 & 0xffff;
  }
  if (DAT_0000002e != '\0') {
    *puVar10 = 0x2d;
    puVar10[1] = 0x1a;
    puVar11 = puVar10 + 0x1c;
    iVar2 = 0;
    puVar10 = puVar10 + 2;
    while (puVar11 != puVar10) {
      *puVar10 = *(undefined *)(iVar2 + 0xc);
      iVar2 = iVar2 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  if (uVar12 != 0) {
    uVar3 = 0;
    do {
      pcVar6 = pcVar8 + uVar3;
      pcVar7 = puVar10 + uVar3;
      uVar3 = uVar3 + 1;
      *pcVar7 = *pcVar6;
    } while (uVar12 != uVar3);
    puVar10 = puVar10 + uVar12;
  }
  *(short *)(iVar4 + 0x14c) = (short)puVar10 + -0x24;
  *(undefined4 *)(iVar4 + 0x148) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b70(undefined2 param_1,undefined2 param_2,undefined3 param_3)

{
  byte bVar1;
  uint uVar2;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  int *unaff_s2;
  int unaff_s3;
  int iVar12;
  int iVar13;
  
  iVar3 = FUN_00010b70();
  *(undefined *)(iVar3 + 0x14e) = *(undefined *)(unaff_s1 + 0x14e);
  *(undefined4 *)(iVar3 + 0x140) = *(undefined4 *)(unaff_s1 + 0x140);
  *(undefined2 *)(iVar3 + 0x144) = *(undefined2 *)(unaff_s1 + 0x144);
  *(undefined *)(iVar3 + 0x150) = *(undefined *)(unaff_s1 + 0x150);
  *(undefined *)(iVar3 + 0x151) = *(undefined *)(unaff_s1 + 0x151);
  while (unaff_s3 < (int)(uint)*(byte *)(unaff_s1 + 0x14f)) {
    if (*(char *)(unaff_s3 * 6 + unaff_s1 + 2) == *(char *)((int)unaff_s2 + 0x16b)) {
      bVar1 = *(byte *)(iVar3 + 0x14f);
      FUN_00010d64((uint)bVar1 * 6 + iVar3,6);
      *(byte *)(iVar3 + 0x14f) = bVar1 + 1;
    }
    unaff_s3 = unaff_s3 + 1;
  }
  iVar12 = 0xfc;
  iVar13 = 0;
  while (iVar13 < (int)(uint)*(byte *)(unaff_s1 + 0x150)) {
    FUN_00010d80(iVar3 + iVar12,unaff_s1 + iVar12,0x22);
    iVar13 = iVar13 + 1;
    iVar12 = iVar12 + 0x22;
  }
  uVar8 = (uint)*(ushort *)(*unaff_s2 + 0x14c);
  pcVar7 = &DAT_00000010;
  if (200 < uVar8) {
    uVar8 = 0;
  }
  if ((*(char *)((int)unaff_s2 + 0x16b) == '\x01') || (*(char *)(*unaff_s2 + 0x151) != '\0')) {
    iVar12 = 4;
    iVar13 = 8;
  }
  else {
    iVar12 = 0;
    iVar13 = 0xc;
  }
  iVar9 = 0;
  do {
    puVar10 = (undefined *)(iVar12 + iVar9);
    puVar11 = (undefined *)(iVar9 + 0x26);
    iVar9 = iVar9 + 1;
    *puVar11 = *puVar10;
  } while (iVar9 != 8);
  puVar10 = &DAT_0000002e;
  if ((uVar8 != 0) && (DAT_00000010 == '\n')) {
    uVar4 = DAT_00000011 + 2 & 0xff;
    uVar2 = uVar4;
    iVar12 = 0;
    while( true ) {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0xffffffff) break;
      *puVar10 = *(undefined *)(iVar12 + 0x10);
      iVar12 = iVar12 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar10 = (undefined *)(uVar4 + 0x2e);
    pcVar7 = (char *)(uVar4 + 0x10);
    uVar8 = uVar8 - uVar4 & 0xffff;
  }
  if (iVar13 != 8) {
    uVar2 = iVar13 - 8U & 0xff;
    *puVar10 = 0x32;
    puVar10[1] = (char)uVar2;
    iVar13 = uVar2 + 2;
    iVar12 = 0;
    puVar11 = puVar10 + 2;
    while( true ) {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0xffffffff) break;
      *puVar11 = *(undefined *)(iVar12 + 8);
      iVar12 = iVar12 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar10 = puVar10 + iVar13;
  }
  if (*(char *)((int)unaff_s2 + 0x16b) == '\0') {
    *puVar10 = 3;
    puVar10[1] = 1;
    puVar10 = puVar10 + 3;
  }
  if ((uVar8 != 0) && (*pcVar7 == ';')) {
    uVar2 = 0;
    uVar4 = (byte)pcVar7[1] + 2 & 0xff;
    while (uVar4 != uVar2) {
      pcVar5 = pcVar7 + uVar2;
      pcVar6 = puVar10 + uVar2;
      uVar2 = uVar2 + 1;
      *pcVar6 = *pcVar5;
    }
    puVar10 = puVar10 + uVar4;
    pcVar7 = pcVar7 + uVar4;
    uVar8 = uVar8 - uVar4 & 0xffff;
  }
  if (DAT_0000002e != '\0') {
    *puVar10 = 0x2d;
    puVar10[1] = 0x1a;
    puVar11 = puVar10 + 0x1c;
    iVar12 = 0;
    puVar10 = puVar10 + 2;
    while (puVar11 != puVar10) {
      *puVar10 = *(undefined *)(iVar12 + 0xc);
      iVar12 = iVar12 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    do {
      pcVar5 = pcVar7 + uVar2;
      pcVar6 = puVar10 + uVar2;
      uVar2 = uVar2 + 1;
      *pcVar6 = *pcVar5;
    } while (uVar8 != uVar2);
    puVar10 = puVar10 + uVar8;
  }
  *(short *)(iVar3 + 0x14c) = (short)puVar10 + -0x24;
  *(undefined4 *)(iVar3 + 0x148) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010d64(int param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined3 param_5)

{
  uint uVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  int *unaff_s2;
  int iVar10;
  int unaff_s3;
  int iVar11;
  int unaff_s4;
  int unaff_s5;
  
  do {
    FUN_00010d64(param_1,param_2);
    *(char *)(unaff_s0 + 0x14f) = (char)unaff_s4;
    do {
      unaff_s3 = unaff_s3 + 1;
      if ((int)(uint)*(byte *)(unaff_s1 + 0x14f) <= unaff_s3) {
        iVar10 = 0xfc;
        iVar11 = 0;
        while (iVar11 < (int)(uint)*(byte *)(unaff_s1 + 0x150)) {
          FUN_00010d80(unaff_s0 + iVar10,unaff_s1 + iVar10,0x22);
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 0x22;
        }
        uVar6 = (uint)*(ushort *)(*unaff_s2 + 0x14c);
        pcVar5 = &DAT_00000010;
        if (200 < uVar6) {
          uVar6 = 0;
        }
        if ((*(char *)((int)unaff_s2 + 0x16b) == '\x01') || (*(char *)(*unaff_s2 + 0x151) != '\0'))
        {
          iVar10 = 4;
          iVar11 = 8;
        }
        else {
          iVar10 = 0;
          iVar11 = 0xc;
        }
        iVar7 = 0;
        do {
          puVar8 = (undefined *)(iVar10 + iVar7);
          puVar9 = (undefined *)(iVar7 + 0x26);
          iVar7 = iVar7 + 1;
          *puVar9 = *puVar8;
        } while (iVar7 != 8);
        puVar8 = &DAT_0000002e;
        if ((uVar6 != 0) && (DAT_00000010 == '\n')) {
          uVar2 = DAT_00000011 + 2 & 0xff;
          uVar1 = uVar2;
          iVar10 = 0;
          while( true ) {
            uVar1 = uVar1 - 1;
            if (uVar1 == 0xffffffff) break;
            *puVar8 = *(undefined *)(iVar10 + 0x10);
            iVar10 = iVar10 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar8 = (undefined *)(uVar2 + 0x2e);
          pcVar5 = (char *)(uVar2 + 0x10);
          uVar6 = uVar6 - uVar2 & 0xffff;
        }
        if (iVar11 != 8) {
          uVar1 = iVar11 - 8U & 0xff;
          *puVar8 = 0x32;
          puVar8[1] = (char)uVar1;
          iVar11 = uVar1 + 2;
          iVar10 = 0;
          puVar9 = puVar8 + 2;
          while( true ) {
            uVar1 = uVar1 - 1;
            if (uVar1 == 0xffffffff) break;
            *puVar9 = *(undefined *)(iVar10 + 8);
            iVar10 = iVar10 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = puVar8 + iVar11;
        }
        if (*(char *)((int)unaff_s2 + 0x16b) == '\0') {
          *puVar8 = 3;
          puVar8[1] = 1;
          puVar8 = puVar8 + 3;
        }
        if ((uVar6 != 0) && (*pcVar5 == ';')) {
          uVar1 = 0;
          uVar2 = (byte)pcVar5[1] + 2 & 0xff;
          while (uVar2 != uVar1) {
            pcVar3 = pcVar5 + uVar1;
            pcVar4 = puVar8 + uVar1;
            uVar1 = uVar1 + 1;
            *pcVar4 = *pcVar3;
          }
          puVar8 = puVar8 + uVar2;
          pcVar5 = pcVar5 + uVar2;
          uVar6 = uVar6 - uVar2 & 0xffff;
        }
        if (DAT_0000002e != '\0') {
          *puVar8 = 0x2d;
          puVar8[1] = 0x1a;
          puVar9 = puVar8 + 0x1c;
          iVar10 = 0;
          puVar8 = puVar8 + 2;
          while (puVar9 != puVar8) {
            *puVar8 = *(undefined *)(iVar10 + 0xc);
            iVar10 = iVar10 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        if (uVar6 != 0) {
          uVar1 = 0;
          do {
            pcVar3 = pcVar5 + uVar1;
            pcVar4 = puVar8 + uVar1;
            uVar1 = uVar1 + 1;
            *pcVar4 = *pcVar3;
          } while (uVar6 != uVar1);
          puVar8 = puVar8 + uVar6;
        }
        *(short *)(unaff_s0 + 0x14c) = (short)puVar8 + -0x24;
        *(undefined4 *)(unaff_s0 + 0x148) = 0;
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    } while (*(char *)(unaff_s3 * unaff_s5 + unaff_s1 + 2) != *(char *)((int)unaff_s2 + 0x16b));
    param_2 = 6;
    unaff_s4 = *(byte *)(unaff_s0 + 0x14f) + 1;
    param_1 = (uint)*(byte *)(unaff_s0 + 0x14f) * unaff_s5 + unaff_s0;
  } while( true );
}



void FUN_00010d80(int param_1,int param_2,undefined4 param_3,undefined2 param_4,undefined2 param_5,
                 undefined3 param_6)

{
  int iVar1;
  uint uVar2;
  int unaff_s0;
  int unaff_s1;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  while( true ) {
    FUN_00010d80(param_1,param_2,param_3);
    unaff_s4 = unaff_s4 + 1;
    unaff_s3 = unaff_s3 + 0x22;
    if ((int)(uint)*(byte *)(unaff_s1 + 0x150) <= unaff_s4) break;
    param_2 = unaff_s1 + unaff_s3;
    param_1 = unaff_s0 + unaff_s3;
    param_3 = 0x22;
  }
  uVar7 = (uint)*(ushort *)(*unaff_s2 + 0x14c);
  pcVar6 = &DAT_00000010;
  if (200 < uVar7) {
    uVar7 = 0;
  }
  if ((*(char *)((int)unaff_s2 + 0x16b) == '\x01') || (*(char *)(*unaff_s2 + 0x151) != '\0')) {
    iVar1 = 4;
    iVar8 = 8;
  }
  else {
    iVar1 = 0;
    iVar8 = 0xc;
  }
  iVar9 = 0;
  do {
    puVar10 = (undefined *)(iVar1 + iVar9);
    puVar11 = (undefined *)(iVar9 + 0x26);
    iVar9 = iVar9 + 1;
    *puVar11 = *puVar10;
  } while (iVar9 != 8);
  puVar10 = &DAT_0000002e;
  if ((uVar7 != 0) && (DAT_00000010 == '\n')) {
    uVar3 = DAT_00000011 + 2 & 0xff;
    uVar2 = uVar3;
    iVar1 = 0;
    while( true ) {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0xffffffff) break;
      *puVar10 = *(undefined *)(iVar1 + 0x10);
      iVar1 = iVar1 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar10 = (undefined *)(uVar3 + 0x2e);
    pcVar6 = (char *)(uVar3 + 0x10);
    uVar7 = uVar7 - uVar3 & 0xffff;
  }
  if (iVar8 != 8) {
    uVar2 = iVar8 - 8U & 0xff;
    *puVar10 = 0x32;
    puVar10[1] = (char)uVar2;
    iVar8 = uVar2 + 2;
    iVar1 = 0;
    puVar11 = puVar10 + 2;
    while( true ) {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0xffffffff) break;
      *puVar11 = *(undefined *)(iVar1 + 8);
      iVar1 = iVar1 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar10 = puVar10 + iVar8;
  }
  if (*(char *)((int)unaff_s2 + 0x16b) == '\0') {
    *puVar10 = 3;
    puVar10[1] = 1;
    puVar10 = puVar10 + 3;
  }
  if ((uVar7 != 0) && (*pcVar6 == ';')) {
    uVar2 = 0;
    uVar3 = (byte)pcVar6[1] + 2 & 0xff;
    while (uVar3 != uVar2) {
      pcVar4 = pcVar6 + uVar2;
      pcVar5 = puVar10 + uVar2;
      uVar2 = uVar2 + 1;
      *pcVar5 = *pcVar4;
    }
    puVar10 = puVar10 + uVar3;
    pcVar6 = pcVar6 + uVar3;
    uVar7 = uVar7 - uVar3 & 0xffff;
  }
  if (DAT_0000002e != '\0') {
    *puVar10 = 0x2d;
    puVar10[1] = 0x1a;
    puVar11 = puVar10 + 0x1c;
    iVar1 = 0;
    puVar10 = puVar10 + 2;
    while (puVar11 != puVar10) {
      *puVar10 = *(undefined *)(iVar1 + 0xc);
      iVar1 = iVar1 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  if (uVar7 != 0) {
    uVar2 = 0;
    do {
      pcVar4 = pcVar6 + uVar2;
      pcVar5 = puVar10 + uVar2;
      uVar2 = uVar2 + 1;
      *pcVar5 = *pcVar4;
    } while (uVar7 != uVar2);
    puVar10 = puVar10 + uVar7;
  }
  *(short *)(unaff_s0 + 0x14c) = (short)puVar10 + -0x24;
  *(undefined4 *)(unaff_s0 + 0x148) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void scanu_dma_cb(void *env,int dma_type)

{
  scanu_dma_cb(env,dma_type);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scanu_start(undefined2 uRam00000014,undefined3 param_2)

{
  int iVar1;
  
  if (DAT_0000016a == '\0') {
    iVar1 = 0;
    do {
      *(undefined *)(iVar1 + 0x4c) = 0;
      *(undefined *)(iVar1 + 0x4d) = 0x80;
      iVar1 = iVar1 + 0x38;
    } while (iVar1 != 0x150);
    uRam00000014 = 0;
  }
  FUN_00010e2c(4,1);
  if ((*(int *)(iRam00000000 + 0x148) != 0) && (*(ushort *)(iRam00000000 + 0x14c) < 0xc9)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010e2c(void)

{
  int *unaff_s0;
  
  FUN_00010e2c();
  if ((*(int *)(*unaff_s0 + 0x148) != 0) && (*(ushort *)(*unaff_s0 + 0x14c) < 0xc9)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


