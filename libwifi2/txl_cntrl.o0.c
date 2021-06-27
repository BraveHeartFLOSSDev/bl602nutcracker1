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

typedef struct ipc_a2e_msg ipc_a2e_msg, *Pipc_a2e_msg;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

struct ipc_a2e_msg { // DWARF DIE: 289c
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

struct mac_addr { // DWARF DIE: a4f
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 2542
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

struct txdesc_host { // DWARF DIE: 2810
    uint32_t ready;
    struct hostdesc host;
    uint32_t pad_txdesc[55];
    uint32_t pad_buf[128];
};

struct ipc_shared_env_tag { // DWARF DIE: 28da
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

typedef union anon_union.conflict2cdd_for_field_0 anon_union.conflict2cdd_for_field_0, *Panon_union.conflict2cdd_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict11b3_for_field_3 anon_union.conflict11b3_for_field_3, *Panon_union.conflict11b3_for_field_3;

typedef union anon_union.conflict11d8_for_field_4 anon_union.conflict11d8_for_field_4, *Panon_union.conflict11d8_for_field_4;

typedef union anon_union.conflict11fd_for_field_5 anon_union.conflict11fd_for_field_5, *Panon_union.conflict11fd_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: 100b
    struct co_list_hdr * next;
};

union anon_union.conflict11fd_for_field_5 { // DWARF DIE: 11fd
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_cfm_tag { // DWARF DIE: 1610
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct tx_policy_tbl { // DWARF DIE: 1117
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 1188
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

union anon_union.conflict2cdd_for_field_0 { // DWARF DIE: 2cdd
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct lmacdesc { // DWARF DIE: 267a
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct umacdesc { // DWARF DIE: 261e
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

union anon_union.conflict11d8_for_field_4 { // DWARF DIE: 11d8
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict11b3_for_field_3 { // DWARF DIE: 11b3
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd { // DWARF DIE: 1222
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict11b3_for_field_3 field_3;
    union anon_union.conflict11d8_for_field_4 field_4;
    union anon_union.conflict11fd_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 168f
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct txdesc { // DWARF DIE: 2796
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct dma_desc { // DWARF DIE: f7a
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd { // DWARF DIE: 12eb
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_control { // DWARF DIE: 2055
    union anon_union.conflict2cdd_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct txl_buffer_tag { // DWARF DIE: 26b5
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

struct tx_agg_desc { // DWARF DIE: 16c0
    uint8_t reserved;
};

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag { // DWARF DIE: 1b47
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct ps_env_tag { // DWARF DIE: 3c69
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

typedef struct anon_struct.conflict3db4 anon_struct.conflict3db4, *Panon_struct.conflict3db4;

struct anon_struct.conflict3db4 { // DWARF DIE: 3db4
    uint8_t mac[6];
    uint8_t used;
};

typedef struct apm apm, *Papm;

typedef struct apm_start_req apm_start_req, *Papm_start_req;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 1031
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct apm_start_req { // DWARF DIE: 3e5b
};

struct apm { // DWARF DIE: 3dd8
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
    struct anon_struct.conflict3db4 aid_list[10];
    undefined field_0x5e;
    undefined field_0x5f;
};

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list { // DWARF DIE: 2b3b
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 2b83
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 2dd3
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 2dfb
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 2e4f
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 1e33
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

struct bam_env_tag { // DWARF DIE: 1ea6
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

struct chan_tbtt_tag { // DWARF DIE: 3067
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct mm_chan_ctxt_add_req { // DWARF DIE: 1990
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 30b6
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

struct chan_env_tag { // DWARF DIE: 3146
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

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 2994
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 32d7
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 8f8
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

struct scan_chan_tag { // DWARF DIE: d28
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct me_chan_config_req { // DWARF DIE: 343b
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: c27
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

struct me_env_tag { // DWARF DIE: 3609
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

struct mobility_domain { // DWARF DIE: 369d
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

struct Cipher_t { // DWARF DIE: 34ed
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct mac_edca_param_set { // DWARF DIE: cef
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset { // DWARF DIE: ad4
    uint8_t length;
    uint8_t array[12];
};

struct mac_ssid { // DWARF DIE: a7f
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct SecurityMode_t { // DWARF DIE: 3553
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

struct mac_bss_info { // DWARF DIE: 36c5
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

typedef struct txl_cfm_env_tag txl_cfm_env_tag, *Ptxl_cfm_env_tag;

struct txl_cfm_env_tag { // DWARF DIE: 2fe5
    struct co_list cfmlist[5];
};

typedef enum anon_enum_8.conflict9d7 {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_VI=2,
    AC_VO=3,
    ATHD_CHK_STATE=1,
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
    IPC_DMA_LLI_CFM_TX=8,
    IPC_DMA_LLI_DATA_AC0_TX=0,
    IPC_DMA_LLI_DATA_AC1_TX=1,
    IPC_DMA_LLI_DATA_AC2_TX=2,
    IPC_DMA_LLI_DATA_AC3_TX=3,
    IPC_DMA_LLI_DATA_BCN_TX=4,
    IPC_DMA_LLI_DATA_RX0=5,
    IPC_DMA_LLI_DBG=7,
    IPC_DMA_LLI_DBG_DUMP=10,
    IPC_DMA_LLI_GP_DL=9,
    IPC_DMA_LLI_GP_UL=11,
    IPC_DMA_LLI_MAX=12,
    IPC_DMA_LLI_MSG=6,
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
    PHY_BAND_2G4=0,
    PHY_BAND_5G=1,
    PHY_BAND_MAX=2,
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
    THD_CHK_STATE=0,
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
} anon_enum_8.conflict9d7;

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictb7c_for_u anon_union.conflictb7c_for_u, *Panon_union.conflictb7c_for_u;

typedef struct anon_struct.conflictb1c anon_struct.conflictb1c, *Panon_struct.conflictb1c;

typedef struct anon_struct.conflictb53 anon_struct.conflictb53, *Panon_struct.conflictb53;

struct anon_struct.conflictb1c { // DWARF DIE: b1c
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictb53 { // DWARF DIE: b53
    uint32_t key[4];
};

union anon_union.conflictb7c_for_u { // DWARF DIE: b7c
    struct anon_struct.conflictb1c mic;
    struct anon_struct.conflictb53 mfp;
};

struct key_info_tag { // DWARF DIE: ba1
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb7c_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef union anon_union.conflictb7c anon_union.conflictb7c, *Panon_union.conflictb7c;

union anon_union.conflictb7c { // DWARF DIE: b7c
    struct anon_struct.conflictb1c mic;
    struct anon_struct.conflictb53 mfp;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: c9a
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: d70
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

struct ke_msg_handler { // DWARF DIE: 1900
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 192c
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 246e
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

struct ipc_emb_env_tag { // DWARF DIE: 2a62
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

typedef long __int32_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 1d20
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

struct rx_cntrl_dupli { // DWARF DIE: 1cf5
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 1cd8
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 1bdd
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

struct rxu_cntrl_env_tag { // DWARF DIE: 1d59
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

struct mac_hdr { // DWARF DIE: e56
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
};

typedef union anon_union.conflicte9 anon_union.conflicte9, *Panon_union.conflicte9;

union anon_union.conflicte9 { // DWARF DIE: e9
    wint_t __wch;
    uchar __wchb[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte9_for___value anon_union.conflicte9_for___value, *Panon_union.conflicte9_for___value;

union anon_union.conflicte9_for___value { // DWARF DIE: e9
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 11b
    int __count;
    union anon_union.conflicte9_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 10a7
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: fce
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 1b88
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 144b
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

struct phy_channel_info { // DWARF DIE: 107f
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 14e0
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 1340
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

struct rx_payloaddesc { // DWARF DIE: 15b3
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 1543
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 10df
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct rxl_cntrl_env_tag rxl_cntrl_env_tag, *Prxl_cntrl_env_tag;

struct rxl_cntrl_env_tag { // DWARF DIE: 300c
    struct co_list ready;
    struct rx_dmadesc * first;
    struct rx_dmadesc * last;
    struct rx_dmadesc * free;
    uint32_t packet_stack_cnt;
};

typedef struct co_read16_struct co_read16_struct, *Pco_read16_struct;

struct co_read16_struct { // DWARF DIE: 5e2e
    uint16_t val;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 2945
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict3a8c_for_u anon_union.conflict3a8c_for_u, *Panon_union.conflict3a8c_for_u;

typedef struct anon_struct.conflict38c4 anon_struct.conflict38c4, *Panon_struct.conflict38c4;

typedef struct anon_struct.conflict3991 anon_struct.conflict3991, *Panon_struct.conflict3991;

struct anon_struct.conflict38c4 { // DWARF DIE: 38c4
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

struct anon_struct.conflict3991 { // DWARF DIE: 3991
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

union anon_union.conflict3a8c_for_u { // DWARF DIE: 3a8c
    struct anon_struct.conflict38c4 sta;
    struct anon_struct.conflict3991 ap;
};

struct vif_info_tag { // DWARF DIE: 3aaf
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
    union anon_union.conflict3a8c_for_u u;
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

typedef union anon_union.conflict3a8c anon_union.conflict3a8c, *Panon_union.conflict3a8c;

union anon_union.conflict3a8c { // DWARF DIE: 3a8c
    struct anon_struct.conflict38c4 sta;
    struct anon_struct.conflict3991 ap;
};

typedef enum VIF_AP_BCMC_STATUS {
    VIF_AP_BCMC_BUFFERED=1,
    VIF_AP_BCMC_MOREDATA=2
} VIF_AP_BCMC_STATUS;

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag { // DWARF DIE: 3bea
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 1ac9
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 1a82
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 21ef
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

typedef struct sta_pol_tbl_cntl sta_pol_tbl_cntl, *Psta_pol_tbl_cntl;

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef struct rc_rate_stats rc_rate_stats, *Prc_rate_stats;

typedef struct step step, *Pstep;

typedef union anon_union.conflict33f6_for_rate_map anon_union.conflict33f6_for_rate_map, *Panon_union.conflict33f6_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 3359
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

union anon_union.conflict33f6_for_rate_map { // DWARF DIE: 33f6
    uint8_t ht[4];
};

struct step { // DWARF DIE: 33cf
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

struct rc_sta_stats { // DWARF DIE: 2089
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
    union anon_union.conflict33f6_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 2006
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 1fcb
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 223e
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

struct sta_info_env_tag { // DWARF DIE: 2427
    struct co_list free_sta_list;
};

typedef struct td_env_tag td_env_tag, *Ptd_env_tag;

struct td_env_tag { // DWARF DIE: 3d05
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

typedef union anon_union.conflict33f6 anon_union.conflict33f6, *Panon_union.conflict33f6;

union anon_union.conflict33f6 { // DWARF DIE: 33f6
    uint8_t ht[4];
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 327b
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 3236
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 2c2c
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef union anon_union.conflict2cdd anon_union.conflict2cdd, *Panon_union.conflict2cdd;

union anon_union.conflict2cdd { // DWARF DIE: 2cdd
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 2c04
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 2c54
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

struct txl_buffer_env_tag { // DWARF DIE: 2cff
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict11b3 anon_union.conflict11b3, *Panon_union.conflict11b3;

union anon_union.conflict11b3 { // DWARF DIE: 11b3
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict11d8 anon_union.conflict11d8, *Panon_union.conflict11d8;

union anon_union.conflict11d8 { // DWARF DIE: 11d8
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict11fd anon_union.conflict11fd, *Panon_union.conflict11fd;

union anon_union.conflict11fd { // DWARF DIE: 11fd
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

struct __tm { // DWARF DIE: 1e1
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

struct _rand48 { // DWARF DIE: 6ee
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict737 { // DWARF DIE: 737
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

struct anon_struct.conflict87c { // DWARF DIE: 87c
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _Bigint { // DWARF DIE: 171
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 6a9
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

union anon_union.conflict8c3_for__new { // DWARF DIE: 8c3
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
};

struct __sbuf { // DWARF DIE: 319
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 347
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

struct _on_exit_args { // DWARF DIE: 264
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2b9
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4b3
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

union anon_union.conflict8c3 { // DWARF DIE: 8c3
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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




// DWARF DIE: 592f

void txl_int_fake_transfer(txdesc *txdesc,uint8_t access_category)

{
  undefined3 in_register_0000202d;
  int iVar1;
  int iVar2;
  txl_buffer_tag *ptVar3;
  
  ptVar3 = (txdesc->lmac).buffer;
  (ptVar3->tbd).upatterntx = 0xcafefade;
  iVar1 = CONCAT31(in_register_0000202d,access_category) + 0x16;
  iVar2 = iVar1 * 8;
  ptVar3->txdesc = txdesc;
  if (*(int *)(iVar2 + 4) == 0) {
    *(txl_buffer_tag **)(iVar2 + 4) = ptVar3;
  }
  else {
    *(txl_buffer_tag **)(*(int *)(iVar2 + 8) + 0x10) = ptVar3;
  }
  *(txl_buffer_tag **)(iVar1 * 8 + 8) = ptVar3;
  ptVar3->next = (txl_buffer_tag *)0x0;
  return;
}



// DWARF DIE: 5aea

void blmac_abs_timer_set(int reg_idx,uint32_t value)

{
  if (9 < reg_idx) {
    FUN_00010062();
  }
  *(uint32_t *)((reg_idx + 0x112c004a) * 4) = value;
  return;
}



void FUN_00010062(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  
  FUN_00010062();
  *(undefined4 *)((unaff_s0 + 0x112c004a) * 4) = unaff_s1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5755

void txl_machdr_format(uint32_t machdrptr)

{
  uint uVar1;
  
  if ((*(byte *)(machdrptr + 0x16) & 0xf) == 0) {
    _DAT_00000054 += 1;
  }
  uVar1 = (uint)_DAT_00000054;
  *(byte *)(machdrptr + 0x16) = (byte)(uVar1 << 4) | *(byte *)(machdrptr + 0x16) & 0xf;
  *(char *)(machdrptr + 0x17) = (char)((uVar1 << 4) >> 8);
  return;
}



// DWARF DIE: 5436

void txl_cntrl_init(undefined2 uRam00000054)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  _L0(uRam00000054);
  _L0(uRam00000054);
  _L0(uRam00000054);
  FUN_000100e0(uRam00000054);
  FUN_000100f6();
  puVar1 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)&DAT_44a00080;
  do {
    FUN_00010116(puVar1 + 1);
    *puVar1 = 0;
    uVar2 = *puVar3;
    *(undefined *)((int)puVar1 + 0xe) = 0;
    puVar3 = puVar3 + 1;
    *(short *)(puVar1 + 3) = (short)uVar2;
    puVar1 = puVar1 + 4;
  } while (puVar3 != (undefined4 *)0x44a00094);
  uRam00000054 = 0;
  return;
}



void _L0(undefined2 uRam00000054)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  _L0(uRam00000054);
  _L0(uRam00000054);
  _L0(uRam00000054);
  FUN_000100e0(uRam00000054);
  FUN_000100f6();
  puVar1 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)&DAT_44a00080;
  do {
    FUN_00010116(puVar1 + 1);
    *puVar1 = 0;
    uVar2 = *puVar3;
    *(undefined *)((int)puVar1 + 0xe) = 0;
    puVar3 = puVar3 + 1;
    *(short *)(puVar1 + 3) = (short)uVar2;
    puVar1 = puVar1 + 4;
  } while (puVar3 != (undefined4 *)0x44a00094);
  uRam00000054 = 0;
  return;
}



void _L0(undefined2 uRam00000054)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  _L0(uRam00000054);
  _L0(uRam00000054);
  FUN_000100e0(uRam00000054);
  FUN_000100f6();
  puVar1 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)&DAT_44a00080;
  do {
    FUN_00010116(puVar1 + 1);
    *puVar1 = 0;
    uVar2 = *puVar3;
    *(undefined *)((int)puVar1 + 0xe) = 0;
    puVar3 = puVar3 + 1;
    *(short *)(puVar1 + 3) = (short)uVar2;
    puVar1 = puVar1 + 4;
  } while (puVar3 != (undefined4 *)0x44a00094);
  uRam00000054 = 0;
  return;
}



void _L0(undefined2 uRam00000054)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  _L0(uRam00000054);
  FUN_000100e0(uRam00000054);
  FUN_000100f6();
  puVar1 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)&DAT_44a00080;
  do {
    FUN_00010116(puVar1 + 1);
    *puVar1 = 0;
    uVar2 = *puVar3;
    *(undefined *)((int)puVar1 + 0xe) = 0;
    puVar3 = puVar3 + 1;
    *(short *)(puVar1 + 3) = (short)uVar2;
    puVar1 = puVar1 + 4;
  } while (puVar3 != (undefined4 *)0x44a00094);
  uRam00000054 = 0;
  return;
}



void FUN_000100e0(undefined2 uRam00000054)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_000100e0(uRam00000054);
  FUN_000100f6();
  puVar1 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)&DAT_44a00080;
  do {
    FUN_00010116(puVar1 + 1);
    *puVar1 = 0;
    uVar2 = *puVar3;
    *(undefined *)((int)puVar1 + 0xe) = 0;
    puVar3 = puVar3 + 1;
    *(short *)(puVar1 + 3) = (short)uVar2;
    puVar1 = puVar1 + 4;
  } while (puVar3 != (undefined4 *)0x44a00094);
  uRam00000054 = 0;
  return;
}



void FUN_000100f6(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_s1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_000100f6();
  puVar3 = (undefined4 *)&DAT_44a00080;
  puVar1 = unaff_s1;
  do {
    FUN_00010116(puVar1 + 1);
    *puVar1 = 0;
    uVar2 = *puVar3;
    *(undefined *)((int)puVar1 + 0xe) = 0;
    puVar3 = puVar3 + 1;
    *(short *)(puVar1 + 3) = (short)uVar2;
    puVar1 = puVar1 + 4;
  } while (puVar3 != (undefined4 *)0x44a00094);
  *(undefined2 *)(unaff_s1 + 0x15) = 0;
  return;
}



void FUN_00010116(undefined4 *param_1)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  undefined4 *unaff_s2;
  undefined4 *unaff_s3;
  
  while( true ) {
    FUN_00010116(param_1);
    *unaff_s0 = 0;
    uVar1 = *unaff_s3;
    *(undefined *)((int)unaff_s0 + 0xe) = 0;
    unaff_s3 = unaff_s3 + 1;
    *(short *)(unaff_s0 + 3) = (short)uVar1;
    if (unaff_s3 == unaff_s2) break;
    param_1 = unaff_s0 + 5;
    unaff_s0 = unaff_s0 + 4;
  }
  *(undefined2 *)(unaff_s1 + 0x54) = 0;
  return;
}



// DWARF DIE: 5eaa

_Bool txl_cntrl_tx_check(vif_info_tag *p_vif_entry)

{
  if (DAT_00000056 != '\0') {
    return false;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 51ef

void txl_cntrl_halt_ac(uint8_t access_category)

{
  undefined3 in_register_00002029;
  code *UNRECOVERED_JUMPTABLE;
  
  if (4 < CONCAT31(in_register_00002029,access_category)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  UNRECOVERED_JUMPTABLE = *(code **)(CONCAT31(in_register_00002029,access_category) * 4);
                    // WARNING: Could not emulate address calculation at 0x00010170
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 50d5

void txl_cntrl_flush_ac(uint8_t access_category,uint32_t status)

{
  uint uVar1;
  undefined3 in_register_00002029;
  uint uVar2;
  
  uVar1 = _DAT_44b0808c;
  uVar2 = 1 << (access_category & 0x1f);
  _L0();
  FUN_00010292();
  *(undefined4 *)(CONCAT31(in_register_00002029,access_category) * 0x10) = 0;
  FUN_000102a2();
  _DAT_44b08088 = uVar2;
  _DAT_44b0808c = ~uVar2 & uVar1;
  return;
}



void _L0(void)

{
  uint unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  uint unaff_s6;
  
  _L0();
  FUN_00010292();
  *unaff_s4 = 0;
  FUN_000102a2();
  *(uint *)(unaff_s3 + 0x8c) = ~unaff_s2 & unaff_s6;
  *(uint *)(unaff_s3 + 0x88) = unaff_s2;
  return;
}



void FUN_00010292(void)

{
  int unaff_s0;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  uint unaff_s6;
  
  FUN_00010292();
  *(undefined4 *)(unaff_s0 + unaff_s4) = 0;
  FUN_000102a2();
  *(uint *)(unaff_s3 + 0x8c) = ~unaff_s2 & unaff_s6;
  *(uint *)(unaff_s3 + 0x88) = unaff_s2;
  return;
}



void FUN_000102a2(void)

{
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s6;
  
  FUN_000102a2();
  *(uint *)(unaff_s3 + 0x8c) = ~unaff_s2 & unaff_s6;
  *(uint *)(unaff_s3 + 0x88) = unaff_s2;
  return;
}



// DWARF DIE: 5072

void txl_cntrl_clear_bcn_ac(void)

{
  FUN_000102d8();
  FUN_000102e6();
  return;
}



void FUN_000102d8(void)

{
  FUN_000102d8();
  FUN_000102e6();
  return;
}



void FUN_000102e6(void)

{
  FUN_000102e6();
  return;
}



// DWARF DIE: 4f5b

void txl_cntrl_clear_all_ac(void)

{
  FUN_00010302();
  FUN_00010310();
  FUN_0001031a();
  FUN_00010328();
  FUN_00010332();
  FUN_00010340();
  FUN_0001034a();
  FUN_00010358();
  FUN_00010362();
  FUN_00010370();
  return;
}



void FUN_00010302(void)

{
  FUN_00010302();
  FUN_00010310();
  FUN_0001031a();
  FUN_00010328();
  FUN_00010332();
  FUN_00010340();
  FUN_0001034a();
  FUN_00010358();
  FUN_00010362();
  FUN_00010370();
  return;
}



void FUN_00010310(void)

{
  FUN_00010310();
  FUN_0001031a();
  FUN_00010328();
  FUN_00010332();
  FUN_00010340();
  FUN_0001034a();
  FUN_00010358();
  FUN_00010362();
  FUN_00010370();
  return;
}



void FUN_0001031a(void)

{
  FUN_0001031a();
  FUN_00010328();
  FUN_00010332();
  FUN_00010340();
  FUN_0001034a();
  FUN_00010358();
  FUN_00010362();
  FUN_00010370();
  return;
}



void FUN_00010328(void)

{
  FUN_00010328();
  FUN_00010332();
  FUN_00010340();
  FUN_0001034a();
  FUN_00010358();
  FUN_00010362();
  FUN_00010370();
  return;
}



void FUN_00010332(void)

{
  FUN_00010332();
  FUN_00010340();
  FUN_0001034a();
  FUN_00010358();
  FUN_00010362();
  FUN_00010370();
  return;
}



void FUN_00010340(void)

{
  FUN_00010340();
  FUN_0001034a();
  FUN_00010358();
  FUN_00010362();
  FUN_00010370();
  return;
}



void FUN_0001034a(void)

{
  FUN_0001034a();
  FUN_00010358();
  FUN_00010362();
  FUN_00010370();
  return;
}



void FUN_00010358(void)

{
  FUN_00010358();
  FUN_00010362();
  FUN_00010370();
  return;
}



void FUN_00010362(void)

{
  FUN_00010362();
  FUN_00010370();
  return;
}



void FUN_00010370(void)

{
  FUN_00010370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4d98

void txl_cntrl_inc_pck_cnt(void)

{
  _DAT_00000050 = _DAT_00000050 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4ac0

void txl_payload_handle(void)

{
  int extraout_a0;
  
  while ((_DAT_44a00024 & 0x1f) != 0) {
    _L0();
    _DAT_44a00020 = 1 << (0x1fU - extraout_a0 & 0x1f);
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  
  do {
    _L0();
    *(int *)(unaff_s0 + 0x20) = unaff_s2 << (unaff_s1 - extraout_a0 & 0x1fU);
  } while ((*(uint *)(unaff_s0 + 0x24) & 0x1f) != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4474

void txl_payload_handle_backup(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  
  iVar9 = 0;
  piVar10 = (int *)0x0;
  uVar2 = 0;
  while (iVar3 = *(int *)(iVar9 + 0xb4), iVar3 == 0) {
_L0:
    uVar2 += 1;
    iVar9 += 8;
    piVar10 = piVar10 + 4;
    if (uVar2 == 5) {
      return;
    }
  }
  uVar1 = uVar2 & 0xff;
  *(undefined4 *)(iVar9 + 0xb4) = *(undefined4 *)(iVar3 + 0x10);
  uVar11 = 1 << (uVar2 & 0x1f);
  do {
    iVar8 = *(int *)(iVar3 + 0x14);
    if (*(int *)(iVar8 + 8) != 0) {
      if (uVar2 == 4) {
        iVar7 = (uint)*(byte *)(iVar8 + 0x2f) * 0x5d8;
        bVar6 = *(byte *)(iVar7 + 0x346);
        if ((*(byte *)(iVar3 + 0x14d) >> 5 & 1) == 0) {
          bVar6 &= 0xfd;
        }
        else {
          bVar6 |= 2;
        }
        *(byte *)(iVar7 + 0x346) = bVar6;
      }
      if (*(char *)(iVar8 + 0x2e) == -1) {
        if ((((*(ushort *)(iVar8 + 0x32) & 8) != 0) && ((*(byte *)(iVar3 + 0x14c) & 0xdc) == 0x10))
           && (*(short *)(iVar3 + 0x166) == 0)) {
          *(ushort *)(iVar8 + 0x32) = *(ushort *)(iVar8 + 0x32) | 0x20;
          _LVL100(iVar3 + 0x150);
        }
        FUN_000104dc(iVar3 + 0x14c);
      }
      iVar3 = *(int *)(iVar8 + 0x68);
      iVar7 = *(int *)(iVar8 + 0x6c);
      if ((*(ushort *)(iVar8 + 0x32) & 8) == 0) {
        _L0(iVar8,uVar1);
        *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar3 + 0x124);
      }
      else {
        *(uint *)(iVar7 + 0x3c) = *(uint *)(iVar7 + 0x3c) & 0xff87ffff;
        bVar6 = *(byte *)(iVar3 + 0x150);
        *(undefined4 *)(iVar7 + 0x40) = 0;
        *(uint *)(iVar7 + 0x38) = (uint)((bVar6 & 1) == 0) << 9;
      }
      *(int *)(iVar7 + 0x28) = iVar3 + 0xf0;
      *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(iVar3 + 0x128);
    }
    *(short *)(piVar10 + 3) = *(short *)(piVar10 + 3) + 1;
    iVar8 = *(int *)(iVar8 + 0x6c) + 4;
    if (*piVar10 == 0) {
      uVar4 = uVar2;
      if (uVar1 == 2) {
        if ((_DAT_44b08188 >> 0xc & 3) == 2) {
          uVar5 = 0x23c;
          goto _L0;
        }
        _DAT_44b08180 = 0x800;
        iVar3 = 400000;
        _DAT_44b081a4 = iVar8;
      }
      else {
        if (2 < uVar1) {
          if (uVar1 == 3) {
            if ((_DAT_44b08188 >> 0x10 & 3) != 2) {
              _DAT_44b08180 = 0x1000;
              _DAT_44b081a8 = iVar8;
              goto _L0;
            }
            uVar5 = 0x236;
          }
          else {
            if (uVar1 != 4) goto _L0;
            if ((_DAT_44b08188 & 3) != 2) {
              _DAT_44b08180 = 0x100;
              uVar4 = 4;
              iVar3 = 50000;
              _DAT_44b08198 = iVar8;
              goto _L0;
            }
            uVar5 = 0x22f;
          }
_L0:
          (*(code *)0x1061c)(0,0,uVar5);
          goto _L0;
        }
        if (uVar1 == 1) {
          if ((_DAT_44b08188 >> 8 & 3) == 2) {
            uVar5 = 0x242;
            goto _L0;
          }
          _DAT_44b08180 = 0x400;
          iVar3 = 2000000;
          _DAT_44b081a0 = iVar8;
        }
        else {
_L0:
          if ((_DAT_44b08188 >> 4 & 3) == 2) {
            uVar5 = 0x248;
            goto _L0;
          }
          _DAT_44b08180 = 0x200;
          _DAT_44b0819c = iVar8;
_L0:
          iVar3 = 200000;
        }
      }
_L0:
      (*(code *)0x1063c)(uVar4,_DAT_44b00120 + iVar3);
      _DAT_44b0808c = uVar11 | _DAT_44b0808c;
      _DAT_44b08088 = uVar11;
    }
    else {
      *(int *)(*piVar10 + 4) = iVar8;
      if (uVar1 == 2) {
        _DAT_44b08180 = 8;
      }
      else {
        if (uVar1 < 3) {
          if (uVar1 == 1) {
            _DAT_44b08180 = 4;
          }
          else {
_L0:
            _DAT_44b08180 = 2;
          }
        }
        else {
          if (uVar1 == 3) {
            _DAT_44b08180 = 0x10;
          }
          else {
            if (uVar1 != 4) goto _L0;
            _DAT_44b08180 = 1;
          }
        }
      }
    }
_L0:
    iVar3 = *(int *)(iVar9 + 0xb4);
    *piVar10 = iVar8;
    if (iVar3 == 0) goto _L0;
    *(undefined4 *)(iVar9 + 0xb4) = *(undefined4 *)(iVar3 + 0x10);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL100(int param_1)

{
  int iVar1;
  uint unaff_s0;
  uint unaff_s1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  int unaff_s11;
  int iVar6;
  
  do {
    _LVL100(param_1);
    do {
      FUN_000104dc(unaff_s11);
      do {
        iVar5 = *(int *)(unaff_s2 + 0x68);
        iVar6 = *(int *)(unaff_s2 + 0x6c);
        if ((*(ushort *)(unaff_s2 + 0x32) & 8) == 0) {
          _L0(unaff_s2,unaff_s0);
          *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(iVar5 + 0x124);
        }
        else {
          *(uint *)(iVar6 + 0x3c) = *(uint *)(iVar6 + 0x3c) & unaff_s7;
          bVar4 = *(byte *)(iVar5 + 0x150);
          *(undefined4 *)(iVar6 + 0x40) = 0;
          *(uint *)(iVar6 + 0x38) = (uint)((bVar4 & 1) == 0) << 9;
        }
        *(int *)(iVar6 + 0x28) = iVar5 + 0xf0;
        *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar5 + 0x128);
        do {
          *(short *)(unaff_s4 + 3) = *(short *)(unaff_s4 + 3) + 1;
          iVar5 = *(int *)(unaff_s2 + 0x6c) + 4;
          if (*unaff_s4 == 0) {
            uVar2 = unaff_s1;
            if (unaff_s0 == 2) {
              iVar6 = unaff_s6;
              uVar3 = unaff_s10;
              iVar1 = iVar5;
              if ((_DAT_44b08188 >> 0xc & 3) == 2) {
                uVar3 = 0x23c;
                goto _L0;
              }
            }
            else {
              iVar1 = _DAT_44b081a4;
              if (2 < unaff_s0) {
                if (unaff_s0 == 3) {
                  uVar3 = unaff_s9;
                  iVar6 = iVar5;
                  if ((_DAT_44b08188 >> 0x10 & 3) != 2) goto _L0;
                  uVar3 = 0x236;
                }
                else {
                  if (unaff_s0 != 4) goto _L0;
                  if ((_DAT_44b08188 & 3) != 2) {
                    _DAT_44b08180 = 0x100;
                    uVar2 = 4;
                    iVar6 = 50000;
                    uVar3 = _DAT_44b08180;
                    _DAT_44b08198 = iVar5;
                    goto _L0;
                  }
                  uVar3 = 0x22f;
                }
_L0:
                (*(code *)0x1061c)(0,0,uVar3);
                goto _L0;
              }
              if (unaff_s0 == 1) {
                if ((_DAT_44b08188 >> 8 & 3) == 2) {
                  uVar3 = 0x242;
                  goto _L0;
                }
                _DAT_44b08180 = 0x400;
                iVar6 = 2000000;
                uVar3 = _DAT_44b08180;
                _DAT_44b081a0 = iVar5;
              }
              else {
_L0:
                if ((_DAT_44b08188 >> 4 & 3) == 2) {
                  uVar3 = 0x248;
                  goto _L0;
                }
                _DAT_44b08180 = 0x200;
                uVar3 = _DAT_44b08180;
                _DAT_44b0819c = iVar5;
                iVar6 = _DAT_44b081a8;
_L0:
                _DAT_44b081a8 = iVar6;
                _DAT_44b08180 = uVar3;
                iVar6 = 200000;
                uVar3 = _DAT_44b08180;
              }
            }
_L0:
            _DAT_44b081a4 = iVar1;
            _DAT_44b08180 = uVar3;
            (*(code *)0x1063c)(uVar2,_DAT_44b00120 + iVar6);
            _DAT_44b0808c = unaff_s5 | _DAT_44b0808c;
            _DAT_44b08088 = unaff_s5;
          }
          else {
            *(int *)(*unaff_s4 + 4) = iVar5;
            if (unaff_s0 == 2) {
              _DAT_44b08180 = 8;
            }
            else {
              if (unaff_s0 < 3) {
                if (unaff_s0 == 1) {
                  _DAT_44b08180 = 4;
                }
                else {
_L0:
                  _DAT_44b08180 = 2;
                }
              }
              else {
                if (unaff_s0 == 3) {
                  _DAT_44b08180 = 0x10;
                }
                else {
                  if (unaff_s0 != 4) goto _L0;
                  _DAT_44b08180 = 1;
                }
              }
            }
          }
_L0:
          iVar6 = *(int *)(unaff_s3 + 0xb4);
          *unaff_s4 = iVar5;
          if (iVar6 == 0) {
            do {
              iVar5 = unaff_s3;
              unaff_s1 += 1;
              unaff_s3 = iVar5 + 8;
              unaff_s4 = unaff_s4 + 4;
              if (unaff_s1 == 5) {
                return;
              }
              iVar6 = *(int *)(iVar5 + 0xbc);
            } while (iVar6 == 0);
            unaff_s0 = unaff_s1 & 0xff;
            *(undefined4 *)(iVar5 + 0xbc) = *(undefined4 *)(iVar6 + 0x10);
            unaff_s5 = 1 << (unaff_s1 & 0x1f);
            unaff_s6 = 400000;
          }
          else {
            *(undefined4 *)(unaff_s3 + 0xb4) = *(undefined4 *)(iVar6 + 0x10);
          }
          unaff_s2 = *(int *)(iVar6 + 0x14);
        } while (*(int *)(unaff_s2 + 8) == 0);
        if (unaff_s1 == 4) {
          iVar5 = (uint)*(byte *)(unaff_s2 + 0x2f) * 0x5d8 + unaff_s8;
          bVar4 = *(byte *)(iVar5 + 0x346);
          if ((*(byte *)(iVar6 + 0x14d) >> 5 & 1) == 0) {
            bVar4 &= 0xfd;
          }
          else {
            bVar4 |= 2;
          }
          *(byte *)(iVar5 + 0x346) = bVar4;
        }
      } while (*(char *)(unaff_s2 + 0x2e) != -1);
      unaff_s11 = iVar6 + 0x14c;
    } while ((((*(ushort *)(unaff_s2 + 0x32) & 8) == 0) ||
             ((*(byte *)(iVar6 + 0x14c) & 0xdc) != 0x10)) || (*(short *)(iVar6 + 0x166) != 0));
    *(ushort *)(unaff_s2 + 0x32) = *(ushort *)(unaff_s2 + 0x32) | 0x20;
    param_1 = iVar6 + 0x150;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000104dc(int param_1)

{
  int iVar1;
  uint unaff_s0;
  uint unaff_s1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  int iVar6;
  
  do {
    FUN_000104dc(param_1);
    do {
      iVar5 = *(int *)(unaff_s2 + 0x68);
      iVar6 = *(int *)(unaff_s2 + 0x6c);
      if ((*(ushort *)(unaff_s2 + 0x32) & 8) == 0) {
        _L0(unaff_s2,unaff_s0);
        *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(iVar5 + 0x124);
      }
      else {
        *(uint *)(iVar6 + 0x3c) = *(uint *)(iVar6 + 0x3c) & unaff_s7;
        bVar4 = *(byte *)(iVar5 + 0x150);
        *(undefined4 *)(iVar6 + 0x40) = 0;
        *(uint *)(iVar6 + 0x38) = (uint)((bVar4 & 1) == 0) << 9;
      }
      *(int *)(iVar6 + 0x28) = iVar5 + 0xf0;
      *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar5 + 0x128);
      do {
        *(short *)(unaff_s4 + 3) = *(short *)(unaff_s4 + 3) + 1;
        iVar5 = *(int *)(unaff_s2 + 0x6c) + 4;
        if (*unaff_s4 == 0) {
          uVar2 = unaff_s1;
          if (unaff_s0 == 2) {
            iVar6 = unaff_s6;
            uVar3 = unaff_s10;
            iVar1 = iVar5;
            if ((_DAT_44b08188 >> 0xc & 3) == 2) {
              uVar3 = 0x23c;
              goto _L0;
            }
          }
          else {
            iVar1 = _DAT_44b081a4;
            if (2 < unaff_s0) {
              if (unaff_s0 == 3) {
                uVar3 = unaff_s9;
                iVar6 = iVar5;
                if ((_DAT_44b08188 >> 0x10 & 3) != 2) goto _L0;
                uVar3 = 0x236;
              }
              else {
                if (unaff_s0 != 4) goto _L0;
                if ((_DAT_44b08188 & 3) != 2) {
                  _DAT_44b08180 = 0x100;
                  uVar2 = 4;
                  iVar6 = 50000;
                  uVar3 = _DAT_44b08180;
                  _DAT_44b08198 = iVar5;
                  goto _L0;
                }
                uVar3 = 0x22f;
              }
_L0:
              (*(code *)0x1061c)(0,0,uVar3);
              goto _L0;
            }
            if (unaff_s0 == 1) {
              if ((_DAT_44b08188 >> 8 & 3) == 2) {
                uVar3 = 0x242;
                goto _L0;
              }
              _DAT_44b08180 = 0x400;
              iVar6 = 2000000;
              uVar3 = _DAT_44b08180;
              _DAT_44b081a0 = iVar5;
            }
            else {
_L0:
              if ((_DAT_44b08188 >> 4 & 3) == 2) {
                uVar3 = 0x248;
                goto _L0;
              }
              _DAT_44b08180 = 0x200;
              uVar3 = _DAT_44b08180;
              _DAT_44b0819c = iVar5;
              iVar6 = _DAT_44b081a8;
_L0:
              _DAT_44b081a8 = iVar6;
              _DAT_44b08180 = uVar3;
              iVar6 = 200000;
              uVar3 = _DAT_44b08180;
            }
          }
_L0:
          _DAT_44b081a4 = iVar1;
          _DAT_44b08180 = uVar3;
          (*(code *)0x1063c)(uVar2,_DAT_44b00120 + iVar6);
          _DAT_44b0808c = unaff_s5 | _DAT_44b0808c;
          _DAT_44b08088 = unaff_s5;
        }
        else {
          *(int *)(*unaff_s4 + 4) = iVar5;
          if (unaff_s0 == 2) {
            _DAT_44b08180 = 8;
          }
          else {
            if (unaff_s0 < 3) {
              if (unaff_s0 == 1) {
                _DAT_44b08180 = 4;
              }
              else {
_L0:
                _DAT_44b08180 = 2;
              }
            }
            else {
              if (unaff_s0 == 3) {
                _DAT_44b08180 = 0x10;
              }
              else {
                if (unaff_s0 != 4) goto _L0;
                _DAT_44b08180 = 1;
              }
            }
          }
        }
_L0:
        iVar6 = *(int *)(unaff_s3 + 0xb4);
        *unaff_s4 = iVar5;
        if (iVar6 == 0) {
          do {
            iVar5 = unaff_s3;
            unaff_s1 += 1;
            unaff_s3 = iVar5 + 8;
            unaff_s4 = unaff_s4 + 4;
            if (unaff_s1 == 5) {
              return;
            }
            iVar6 = *(int *)(iVar5 + 0xbc);
          } while (iVar6 == 0);
          unaff_s0 = unaff_s1 & 0xff;
          *(undefined4 *)(iVar5 + 0xbc) = *(undefined4 *)(iVar6 + 0x10);
          unaff_s5 = 1 << (unaff_s1 & 0x1f);
          unaff_s6 = 400000;
        }
        else {
          *(undefined4 *)(unaff_s3 + 0xb4) = *(undefined4 *)(iVar6 + 0x10);
        }
        unaff_s2 = *(int *)(iVar6 + 0x14);
      } while (*(int *)(unaff_s2 + 8) == 0);
      if (unaff_s1 == 4) {
        iVar5 = (uint)*(byte *)(unaff_s2 + 0x2f) * 0x5d8 + unaff_s8;
        bVar4 = *(byte *)(iVar5 + 0x346);
        if ((*(byte *)(iVar6 + 0x14d) >> 5 & 1) == 0) {
          bVar4 &= 0xfd;
        }
        else {
          bVar4 |= 2;
        }
        *(byte *)(iVar5 + 0x346) = bVar4;
      }
    } while (*(char *)(unaff_s2 + 0x2e) != -1);
    param_1 = iVar6 + 0x14c;
    if ((((*(ushort *)(unaff_s2 + 0x32) & 8) != 0) && ((*(byte *)(iVar6 + 0x14c) & 0xdc) == 0x10))
       && (*(short *)(iVar6 + 0x166) == 0)) {
      *(ushort *)(unaff_s2 + 0x32) = *(ushort *)(unaff_s2 + 0x32) | 0x20;
      _LVL100(iVar6 + 0x150);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(int param_1,uint param_2)

{
  int iVar1;
  uint unaff_s0;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  int unaff_s11;
  int in_stack_00000008;
  int in_stack_0000000c;
  
code_r0x00010566:
  _L0(param_1,param_2);
  *(undefined4 *)(unaff_s11 + 0x38) = *(undefined4 *)(in_stack_0000000c + 0x124);
  param_1 = unaff_s2;
  do {
    *(int *)(unaff_s11 + 0x28) = in_stack_00000008;
    *(undefined4 *)(unaff_s11 + 0x24) = *(undefined4 *)(in_stack_0000000c + 0x128);
    do {
      *(short *)(unaff_s4 + 3) = *(short *)(unaff_s4 + 3) + 1;
      iVar6 = *(int *)(param_1 + 0x6c) + 4;
      if (*unaff_s4 == 0) {
        uVar3 = unaff_s1;
        if (unaff_s0 == 2) {
          iVar2 = unaff_s6;
          uVar4 = unaff_s10;
          iVar1 = iVar6;
          if ((_DAT_44b08188 >> 0xc & 3) == 2) {
            uVar4 = 0x23c;
            goto _L0;
          }
        }
        else {
          iVar1 = _DAT_44b081a4;
          if (2 < unaff_s0) {
            if (unaff_s0 == 3) {
              uVar4 = unaff_s9;
              iVar2 = iVar6;
              if ((_DAT_44b08188 >> 0x10 & 3) != 2) goto _L0;
              uVar4 = 0x236;
            }
            else {
              if (unaff_s0 != 4) goto _L0;
              if ((_DAT_44b08188 & 3) != 2) {
                _DAT_44b08180 = 0x100;
                uVar3 = 4;
                iVar2 = 50000;
                uVar4 = _DAT_44b08180;
                _DAT_44b08198 = iVar6;
                goto _L0;
              }
              uVar4 = 0x22f;
            }
_L0:
            (*(code *)0x1061c)(0,0,uVar4);
            goto _L0;
          }
          if (unaff_s0 == 1) {
            if ((_DAT_44b08188 >> 8 & 3) == 2) {
              uVar4 = 0x242;
              goto _L0;
            }
            _DAT_44b08180 = 0x400;
            iVar2 = 2000000;
            uVar4 = _DAT_44b08180;
            _DAT_44b081a0 = iVar6;
          }
          else {
_L0:
            if ((_DAT_44b08188 >> 4 & 3) == 2) {
              uVar4 = 0x248;
              goto _L0;
            }
            _DAT_44b08180 = 0x200;
            uVar4 = _DAT_44b08180;
            _DAT_44b0819c = iVar6;
            iVar2 = _DAT_44b081a8;
_L0:
            _DAT_44b081a8 = iVar2;
            _DAT_44b08180 = uVar4;
            iVar2 = 200000;
            uVar4 = _DAT_44b08180;
          }
        }
_L0:
        _DAT_44b081a4 = iVar1;
        _DAT_44b08180 = uVar4;
        (*(code *)0x1063c)(uVar3,_DAT_44b00120 + iVar2);
        _DAT_44b0808c = unaff_s5 | _DAT_44b0808c;
        _DAT_44b08088 = unaff_s5;
      }
      else {
        *(int *)(*unaff_s4 + 4) = iVar6;
        if (unaff_s0 == 2) {
          _DAT_44b08180 = 8;
        }
        else {
          if (unaff_s0 < 3) {
            if (unaff_s0 == 1) {
              _DAT_44b08180 = 4;
            }
            else {
_L0:
              _DAT_44b08180 = 2;
            }
          }
          else {
            if (unaff_s0 == 3) {
              _DAT_44b08180 = 0x10;
            }
            else {
              if (unaff_s0 != 4) goto _L0;
              _DAT_44b08180 = 1;
            }
          }
        }
      }
_L0:
      iVar2 = *(int *)(unaff_s3 + 0xb4);
      *unaff_s4 = iVar6;
      if (iVar2 == 0) {
        do {
          iVar6 = unaff_s3;
          unaff_s1 += 1;
          unaff_s3 = iVar6 + 8;
          unaff_s4 = unaff_s4 + 4;
          if (unaff_s1 == 5) {
            return;
          }
          iVar2 = *(int *)(iVar6 + 0xbc);
        } while (iVar2 == 0);
        unaff_s0 = unaff_s1 & 0xff;
        *(undefined4 *)(iVar6 + 0xbc) = *(undefined4 *)(iVar2 + 0x10);
        unaff_s5 = 1 << (unaff_s1 & 0x1f);
        unaff_s6 = 400000;
      }
      else {
        *(undefined4 *)(unaff_s3 + 0xb4) = *(undefined4 *)(iVar2 + 0x10);
      }
      param_1 = *(int *)(iVar2 + 0x14);
    } while (*(int *)(param_1 + 8) == 0);
    if (unaff_s1 == 4) {
      iVar6 = (uint)*(byte *)(param_1 + 0x2f) * 0x5d8 + unaff_s8;
      bVar5 = *(byte *)(iVar6 + 0x346);
      if ((*(byte *)(iVar2 + 0x14d) >> 5 & 1) == 0) {
        bVar5 &= 0xfd;
      }
      else {
        bVar5 |= 2;
      }
      *(byte *)(iVar6 + 0x346) = bVar5;
    }
    if (*(char *)(param_1 + 0x2e) == -1) {
      if ((((*(ushort *)(param_1 + 0x32) & 8) != 0) && ((*(byte *)(iVar2 + 0x14c) & 0xdc) == 0x10))
         && (*(short *)(iVar2 + 0x166) == 0)) {
        *(ushort *)(param_1 + 0x32) = *(ushort *)(param_1 + 0x32) | 0x20;
        _LVL100(iVar2 + 0x150);
      }
      FUN_000104dc(iVar2 + 0x14c);
    }
    in_stack_0000000c = *(int *)(param_1 + 0x68);
    unaff_s11 = *(int *)(param_1 + 0x6c);
    in_stack_00000008 = in_stack_0000000c + 0xf0;
    param_2 = unaff_s0;
    unaff_s2 = param_1;
    if ((*(ushort *)(param_1 + 0x32) & 8) == 0) goto code_r0x00010566;
    *(uint *)(unaff_s11 + 0x3c) = *(uint *)(unaff_s11 + 0x3c) & unaff_s7;
    bVar5 = *(byte *)(in_stack_0000000c + 0x150);
    *(undefined4 *)(unaff_s11 + 0x40) = 0;
    *(uint *)(unaff_s11 + 0x38) = (uint)((bVar5 & 1) == 0) << 9;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4c1d

_Bool txl_cntrl_push_int(txdesc *txdesc,uint8_t access_category)

{
  int iVar1;
  tx_hw_desc *ptVar2;
  
  ptVar2 = (txdesc->lmac).hw_desc;
  iVar1 = FUN_00010734(_DAT_00000050);
  if ((iVar1 == 0) || (iVar1 = FUN_0001075c(_DAT_00000050), iVar1 == 0)) {
    if ((txdesc->host).staid == -1) {
      FUN_0001074e();
      iVar1 = 0;
    }
    else {
      (txdesc->host).tid = access_category;
      *(undefined *)((int)&txdesc[1].host.packet_addr + 1) = 1;
      FUN_000107d4();
      FUN_000107e2();
      iVar1 = 1;
    }
  }
  else {
    (ptVar2->thd).macctrlinfo2 = (ptVar2->thd).macctrlinfo2 | 0x100;
    FUN_0001077c(_DAT_00000050);
    FUN_00010796();
    _DAT_00000050 += 1;
    _L0();
  }
  return SUB41(iVar1,0);
}



int FUN_00010734(int iRam00000050)

{
  int unaff_s0;
  undefined unaff_s1;
  int iVar1;
  int unaff_s3;
  
  iVar1 = FUN_00010734(iRam00000050);
  if ((iVar1 == 0) || (iVar1 = FUN_0001075c(iRam00000050), iVar1 == 0)) {
    if (*(char *)(unaff_s0 + 0x30) == -1) {
      FUN_0001074e();
      iVar1 = 0;
    }
    else {
      *(undefined *)(unaff_s0 + 0x2e) = unaff_s1;
      *(undefined *)(unaff_s0 + 0x2d5) = 1;
      FUN_000107d4();
      FUN_000107e2();
      iVar1 = 1;
    }
  }
  else {
    *(uint *)(unaff_s3 + 0x3c) = *(uint *)(unaff_s3 + 0x3c) | 0x100;
    FUN_0001077c(iRam00000050);
    FUN_00010796();
    iRam00000050 += 1;
    _L0();
  }
  return iVar1;
}



undefined4 FUN_0001074e(void)

{
  FUN_0001074e();
  return 0;
}



int FUN_0001075c(int iRam00000050)

{
  int unaff_s0;
  undefined unaff_s1;
  int iVar1;
  int unaff_s3;
  
  iVar1 = FUN_0001075c(iRam00000050);
  if (iVar1 == 0) {
    if (*(char *)(unaff_s0 + 0x30) == -1) {
      FUN_0001074e();
      iVar1 = 0;
    }
    else {
      *(undefined *)(unaff_s0 + 0x2e) = unaff_s1;
      *(undefined *)(unaff_s0 + 0x2d5) = 1;
      FUN_000107d4();
      FUN_000107e2();
      iVar1 = 1;
    }
  }
  else {
    *(uint *)(unaff_s3 + 0x3c) = *(uint *)(unaff_s3 + 0x3c) | 0x100;
    FUN_0001077c(iRam00000050);
    FUN_00010796();
    iRam00000050 += 1;
    _L0();
  }
  return iVar1;
}



void FUN_0001077c(int iRam00000050)

{
  FUN_0001077c(iRam00000050);
  FUN_00010796();
  iRam00000050 += 1;
  _L0();
  return;
}



void FUN_00010796(void)

{
  int unaff_s1;
  
  FUN_00010796();
  *(int *)(unaff_s1 + 0x50) = *(int *)(unaff_s1 + 0x50) + 1;
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



undefined4 FUN_000107d4(void)

{
  FUN_000107d4();
  FUN_000107e2();
  return 1;
}



undefined4 FUN_000107e2(void)

{
  FUN_000107e2();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4b64

_Bool txl_cntrl_push_int_force(txdesc *txdesc,uint8_t access_category)

{
  tx_hw_desc *ptVar1;
  
  ptVar1 = (txdesc->lmac).hw_desc;
  (ptVar1->thd).macctrlinfo2 = (ptVar1->thd).macctrlinfo2 | 0x100;
  _L0(_DAT_00000050);
  FUN_00010830();
  _DAT_00000050 += 1;
  _L0();
  return true;
}



undefined4 _L0(int iRam00000050)

{
  _L0(iRam00000050);
  FUN_00010830();
  iRam00000050 += 1;
  _L0();
  return 1;
}



undefined4 FUN_00010830(void)

{
  int unaff_s0;
  
  FUN_00010830();
  *(int *)(unaff_s0 + 0x50) = *(int *)(unaff_s0 + 0x50) + 1;
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4dab

_Bool txl_cntrl_push(txdesc *txdesc,uint8_t access_category)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  txl_buffer_tag *extraout_a0;
  undefined4 uVar4;
  tx_hw_desc *ptVar5;
  
  bVar1 = (txdesc->umac).tail_len;
  bVar2 = (txdesc->umac).head_len;
  ptVar5 = (txdesc->lmac).hw_desc;
  uVar3 = (txdesc->host).packet_len;
  (ptVar5->thd).nextmpdudesc_ptr = 0;
  (ptVar5->thd).frmlen = (uint)bVar2 + (uint)bVar1 + (uint)uVar3 + 4;
  (ptVar5->thd).upatterntx = 0xcafebabe;
  (ptVar5->thd).nextfrmexseq_ptr = 0;
  (ptVar5->thd).field_3 = 0;
  (ptVar5->thd).policyentryaddr = 0;
  (ptVar5->thd).macctrlinfo2 = 0;
  (ptVar5->thd).field_4 = 0;
  (ptVar5->thd).field_5 = 0;
  (ptVar5->thd).frmlifetime = 0;
  (ptVar5->thd).statinfo = 0;
  if ((txdesc->host).packet_addr == 0) {
    _L0(_DAT_00000050);
    _L0(_DAT_00000050);
    FUN_000108d0();
    _DAT_00000050 += 1;
    FUN_000108ec();
    FUN_000108fc();
    return false;
  }
  FUN_00010912();
  (txdesc->lmac).buffer = extraout_a0;
  extraout_a0->txdesc = txdesc;
  _LVL205(_DAT_00000050);
  uVar4 = _L0(_DAT_00000050);
  return SUB41(uVar4,0);
}



undefined4 _L0(int iRam00000050)

{
  _L0(iRam00000050);
  _L0(iRam00000050);
  FUN_000108d0();
  iRam00000050 += 1;
  FUN_000108ec();
  FUN_000108fc();
  return 0;
}



undefined4 _L0(int iRam00000050)

{
  _L0(iRam00000050);
  FUN_000108d0();
  iRam00000050 += 1;
  FUN_000108ec();
  FUN_000108fc();
  return 0;
}



undefined4 FUN_000108d0(void)

{
  int unaff_s1;
  
  FUN_000108d0();
  *(int *)(unaff_s1 + 0x50) = *(int *)(unaff_s1 + 0x50) + 1;
  FUN_000108ec();
  FUN_000108fc();
  return 0;
}



undefined4 FUN_000108ec(void)

{
  FUN_000108ec();
  FUN_000108fc();
  return 0;
}



undefined4 FUN_000108fc(void)

{
  FUN_000108fc();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010912(void)

{
  int unaff_s0;
  int extraout_a0;
  
  FUN_00010912();
  *(int *)(unaff_s0 + 0x68) = extraout_a0;
  *(int *)(extraout_a0 + 0x14) = unaff_s0;
  _LVL205(_DAT_00000050);
  _L0(_DAT_00000050);
  return;
}



void _LVL205(int iRam00000050)

{
  _LVL205(iRam00000050);
  _L0(iRam00000050);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 41ac

void txl_transmit_trigger(void)

{
  uint uVar1;
  uint uVar2;
  int extraout_a0;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((_DAT_44b08078 & 0x7c0) == 0) {
    return;
  }
  _L0();
  uVar1 = 0x19U - extraout_a0 & 0xff;
  if (4 < uVar1) {
    FUN_00010980();
  }
  _DAT_44b0807c = 1 << (uVar1 + 6 & 0x1f);
  puVar6 = (undefined4 *)(uVar1 * 0x10);
  uVar2 = ~(1 << (0x19U - extraout_a0 & 0x1f));
  while( true ) {
    iVar5 = puVar6[1];
    if (iVar5 == 0) {
      *puVar6 = 0;
      _DAT_44b0808c = uVar2 & _DAT_44b0808c;
      return;
    }
    piVar4 = *(int **)(iVar5 + 0x6c);
    iVar3 = piVar4[0x10];
    if (-1 < iVar3) break;
    if ((*(int *)(iVar5 + 8) != 0) && (*(int *)(iVar5 + 0x68) != 0)) {
      *(undefined4 *)(iVar5 + 0x68) = 0;
    }
    *(int *)(*piVar4 + 0x10) = iVar3;
    if (piVar4[2] == 0) {
      *puVar6 = 0;
      _DAT_44b0808c &= uVar2;
    }
    else {
      if (-1 < *(int *)(piVar4[2] + 0x3c)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
    _L0();
    if (*(int *)(iVar5 + 8) == 0) {
      FUN_00010a5c(iVar5,iVar3);
    }
    else {
      FUN_00010a7e(iVar5,iVar3);
    }
    _LVL235(_DAT_44b00120 + *(int *)(uVar1 * 4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint uVar2;
  int extraout_a0;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack0000000c;
  
  _L0();
  uVar1 = unaff_s0 - extraout_a0 & 0xff;
  if (4 < uVar1) {
    FUN_00010980();
  }
  _DAT_44b0807c = 1 << (uVar1 + 6 & 0x1f);
  puVar5 = (undefined4 *)(uVar1 * 0x10);
  uVar2 = ~(1 << (unaff_s0 - extraout_a0 & 0x1fU));
  while( true ) {
    iVar4 = puVar5[1];
    if (iVar4 == 0) {
      *puVar5 = 0;
      _DAT_44b0808c = uVar2 & _DAT_44b0808c;
      return;
    }
    piVar3 = *(int **)(iVar4 + 0x6c);
    iStack0000000c = piVar3[0x10];
    if (-1 < iStack0000000c) break;
    if ((*(int *)(iVar4 + 8) != 0) && (*(int *)(iVar4 + 0x68) != 0)) {
      *(undefined4 *)(iVar4 + 0x68) = 0;
    }
    *(int *)(*piVar3 + 0x10) = iStack0000000c;
    if (piVar3[2] == 0) {
      *puVar5 = 0;
      _DAT_44b0808c &= uVar2;
    }
    else {
      if (-1 < *(int *)(piVar3[2] + 0x3c)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
    _L0();
    if (*(int *)(iVar4 + 8) == 0) {
      FUN_00010a5c(iVar4,iStack0000000c);
    }
    else {
      FUN_00010a7e(iVar4,iStack0000000c);
    }
    _LVL235(_DAT_44b00120 + *(int *)(uVar1 * 4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010980(void)

{
  uint unaff_s0;
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iStack0000000c;
  
  FUN_00010980();
  _DAT_44b0807c = 1 << (unaff_s0 + 6 & 0x1f);
  puVar4 = (undefined4 *)(unaff_s0 * 0x10);
  uVar1 = ~(1 << (unaff_s0 & 0x1f));
  while( true ) {
    iVar3 = puVar4[1];
    if (iVar3 == 0) {
      *puVar4 = 0;
      _DAT_44b0808c = uVar1 & _DAT_44b0808c;
      return;
    }
    piVar2 = *(int **)(iVar3 + 0x6c);
    iStack0000000c = piVar2[0x10];
    if (-1 < iStack0000000c) break;
    if ((*(int *)(iVar3 + 8) != 0) && (*(int *)(iVar3 + 0x68) != 0)) {
      *(undefined4 *)(iVar3 + 0x68) = 0;
    }
    *(int *)(*piVar2 + 0x10) = iStack0000000c;
    if (piVar2[2] == 0) {
      *puVar4 = 0;
      _DAT_44b0808c &= uVar1;
    }
    else {
      if (-1 < *(int *)(piVar2[2] + 0x3c)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
    _L0();
    if (*(int *)(iVar3 + 8) == 0) {
      FUN_00010a5c(iVar3,iStack0000000c);
    }
    else {
      FUN_00010a7e(iVar3,iStack0000000c);
    }
    _LVL235(_DAT_44b00120 + *(int *)(unaff_s0 * 4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s1;
  int *piVar1;
  uint uVar2;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s5;
  int unaff_s6;
  int unaff_s8;
  int *unaff_s9;
  int unaff_s10;
  undefined4 *unaff_s11;
  int in_stack_0000000c;
  
  while( true ) {
    _L0();
    if (*(int *)(unaff_s2 + 8) == 0) {
      FUN_00010a5c(unaff_s2,in_stack_0000000c);
    }
    else {
      FUN_00010a7e(unaff_s2,in_stack_0000000c);
    }
    _LVL235(*(int *)(unaff_s10 + 0x120) + *unaff_s9);
    unaff_s2 = *unaff_s5;
    if (unaff_s2 == 0) break;
    piVar1 = *(int **)(unaff_s2 + 0x6c);
    in_stack_0000000c = piVar1[0x10];
    if (-1 < in_stack_0000000c) {
      return;
    }
    if ((*(int *)(unaff_s2 + 8) != 0) && (*(int *)(unaff_s2 + 0x68) != 0)) {
      *(undefined4 *)(unaff_s2 + 0x68) = 0;
    }
    *(int *)(*piVar1 + 0x10) = in_stack_0000000c;
    if (piVar1[2] == 0) {
      uVar2 = *(uint *)(unaff_s8 + 0x8c);
      *unaff_s11 = 0;
      *(uint *)(unaff_s8 + 0x8c) = uVar2 & unaff_s1;
    }
    else {
      if (-1 < *(int *)(piVar1[2] + 0x3c)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  *(undefined4 *)(unaff_s3 + unaff_s6) = 0;
  _DAT_44b0808c = unaff_s1 & _DAT_44b0808c;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a5c(int param_1,int param_2)

{
  uint unaff_s1;
  int *piVar1;
  uint uVar2;
  int unaff_s3;
  int *unaff_s5;
  int unaff_s6;
  int unaff_s8;
  int *unaff_s9;
  int unaff_s10;
  undefined4 *unaff_s11;
  
  do {
    FUN_00010a5c(param_1,param_2);
    while( true ) {
      _LVL235(*(int *)(unaff_s10 + 0x120) + *unaff_s9);
      param_1 = *unaff_s5;
      if (param_1 == 0) {
        *(undefined4 *)(unaff_s3 + unaff_s6) = 0;
        _DAT_44b0808c = unaff_s1 & _DAT_44b0808c;
        return;
      }
      piVar1 = *(int **)(param_1 + 0x6c);
      param_2 = piVar1[0x10];
      if (-1 < param_2) {
        return;
      }
      if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x68) != 0)) {
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      *(int *)(*piVar1 + 0x10) = param_2;
      if (piVar1[2] == 0) {
        uVar2 = *(uint *)(unaff_s8 + 0x8c);
        *unaff_s11 = 0;
        *(uint *)(unaff_s8 + 0x8c) = uVar2 & unaff_s1;
      }
      else {
        if (-1 < *(int *)(piVar1[2] + 0x3c)) {
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
      }
      _L0();
      if (*(int *)(param_1 + 8) == 0) break;
      FUN_00010a7e(param_1,param_2);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL235(int param_1)

{
  uint unaff_s1;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_s3;
  int *unaff_s5;
  int unaff_s6;
  int unaff_s8;
  int *unaff_s9;
  int unaff_s10;
  undefined4 *unaff_s11;
  
  while( true ) {
    _LVL235(param_1);
    iVar4 = *unaff_s5;
    if (iVar4 == 0) {
      *(undefined4 *)(unaff_s3 + unaff_s6) = 0;
      _DAT_44b0808c = unaff_s1 & _DAT_44b0808c;
      return;
    }
    piVar2 = *(int **)(iVar4 + 0x6c);
    iVar1 = piVar2[0x10];
    if (-1 < iVar1) break;
    if ((*(int *)(iVar4 + 8) != 0) && (*(int *)(iVar4 + 0x68) != 0)) {
      *(undefined4 *)(iVar4 + 0x68) = 0;
    }
    *(int *)(*piVar2 + 0x10) = iVar1;
    if (piVar2[2] == 0) {
      uVar3 = *(uint *)(unaff_s8 + 0x8c);
      *unaff_s11 = 0;
      *(uint *)(unaff_s8 + 0x8c) = uVar3 & unaff_s1;
    }
    else {
      if (-1 < *(int *)(piVar2[2] + 0x3c)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
    _L0();
    if (*(int *)(iVar4 + 8) == 0) {
      FUN_00010a5c(iVar4,iVar1);
    }
    else {
      FUN_00010a7e(iVar4,iVar1);
    }
    param_1 = *(int *)(unaff_s10 + 0x120) + *unaff_s9;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a7e(int param_1,int param_2)

{
  uint unaff_s1;
  int *piVar1;
  uint uVar2;
  int unaff_s3;
  int *unaff_s5;
  int unaff_s6;
  int unaff_s8;
  int *unaff_s9;
  int unaff_s10;
  undefined4 *unaff_s11;
  
  do {
    FUN_00010a7e(param_1,param_2);
    while( true ) {
      _LVL235(*(int *)(unaff_s10 + 0x120) + *unaff_s9);
      param_1 = *unaff_s5;
      if (param_1 == 0) {
        *(undefined4 *)(unaff_s3 + unaff_s6) = 0;
        _DAT_44b0808c = unaff_s1 & _DAT_44b0808c;
        return;
      }
      piVar1 = *(int **)(param_1 + 0x6c);
      param_2 = piVar1[0x10];
      if (-1 < param_2) {
        return;
      }
      if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x68) != 0)) {
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      *(int *)(*piVar1 + 0x10) = param_2;
      if (piVar1[2] == 0) {
        uVar2 = *(uint *)(unaff_s8 + 0x8c);
        *unaff_s11 = 0;
        *(uint *)(unaff_s8 + 0x8c) = uVar2 & unaff_s1;
      }
      else {
        if (-1 < *(int *)(piVar1[2] + 0x3c)) {
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
      }
      _L0();
      if (*(int *)(param_1 + 8) != 0) break;
      FUN_00010a5c(param_1,param_2);
    }
  } while( true );
}



// DWARF DIE: 4140

void txl_current_desc_get(int access_category,tx_hd **thd)

{
  tx_hd *ptVar1;
  
  ptVar1 = *(tx_hd **)(access_category * 0x10 + 4);
  if (ptVar1 != (tx_hd *)0x0) {
    ptVar1 = (tx_hd *)(ptVar1[1].optlen[0] + 4);
  }
  *thd = ptVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3fcc

void txl_reset(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = _DAT_00000054;
  _L0();
  do {
  } while ((_DAT_44a00010 & 0xffff) != 0xffff);
  DAT_00000056 = 1;
  iVar7 = 0;
  iVar6 = 4;
  uVar5 = 0;
  do {
    _DAT_44a00020 = 1 << (uVar5 & 0x1f);
    uVar8 = uVar5 & 0xff;
    FUN_00010b4a(uVar8,iVar7,0x40000000);
    uVar5 += 1;
    _L0(uVar8,iVar6,0x40000000);
    iVar7 += 8;
    iVar6 += 0x10;
  } while (uVar5 != 5);
  _L0();
  _L0();
  _L0();
  _L0();
  puVar2 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)&DAT_44a00080;
  _DAT_00000054 = uVar1;
  do {
    FUN_00010bae(puVar2 + 1);
    *puVar2 = 0;
    uVar4 = *puVar3;
    *(undefined *)((int)puVar2 + 0xe) = 0;
    puVar3 = puVar3 + 1;
    *(short *)(puVar2 + 3) = (short)uVar4;
    puVar2 = puVar2 + 4;
  } while (puVar3 != (undefined4 *)0x44a00094);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_s6;
  uint uVar6;
  
  _L0();
  do {
  } while ((_DAT_44a00010 & 0xffff) != 0xffff);
  *(undefined *)((int)unaff_s0 + 0x56) = 1;
  iVar5 = 0;
  iVar4 = 4;
  uVar3 = 0;
  do {
    _DAT_44a00020 = 1 << (uVar3 & 0x1f);
    uVar6 = uVar3 & 0xff;
    FUN_00010b4a(uVar6,iVar5,0x40000000);
    uVar3 += 1;
    _L0(uVar6,iVar4,0x40000000);
    iVar5 += 8;
    iVar4 += 0x10;
  } while (uVar3 != 5);
  _L0();
  _L0();
  _L0();
  _L0();
  *(undefined2 *)(unaff_s0 + 0x15) = unaff_s6;
  puVar1 = (undefined4 *)&DAT_44a00080;
  do {
    FUN_00010bae(unaff_s0 + 1);
    *unaff_s0 = 0;
    uVar2 = *puVar1;
    *(undefined *)((int)unaff_s0 + 0xe) = 0;
    puVar1 = puVar1 + 1;
    *(short *)(unaff_s0 + 3) = (short)uVar2;
    unaff_s0 = unaff_s0 + 4;
  } while (puVar1 != (undefined4 *)0x44a00094);
  return;
}



void FUN_00010b4a(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined2 unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  int unaff_s9;
  
  while( true ) {
    FUN_00010b4a(param_1,param_2,param_3);
    unaff_s2 += 1;
    _L0(unaff_s7,unaff_s3,0x40000000);
    param_2 = unaff_s4 + 8;
    unaff_s3 += 0x10;
    if (unaff_s2 == unaff_s8) break;
    param_1 = unaff_s2 & 0xff;
    *(int *)(unaff_s1 + 0x20) = unaff_s9 << (unaff_s2 & 0x1f);
    param_3 = 0x40000000;
    unaff_s4 = param_2;
    unaff_s7 = param_1;
  }
  _L0();
  _L0();
  _L0();
  _L0();
  *(undefined2 *)(unaff_s5 + 0x54) = unaff_s6;
  puVar1 = (undefined4 *)(unaff_s1 + 0x80);
  do {
    FUN_00010bae(unaff_s0 + 1);
    *unaff_s0 = 0;
    uVar2 = *puVar1;
    *(undefined *)((int)unaff_s0 + 0xe) = 0;
    puVar1 = puVar1 + 1;
    *(short *)(unaff_s0 + 3) = (short)uVar2;
    unaff_s0 = unaff_s0 + 4;
  } while (puVar1 != (undefined4 *)0x44a00094);
  return;
}



void _L0(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined2 unaff_s6;
  uint unaff_s8;
  int unaff_s9;
  
  while( true ) {
    _L0(param_1,param_2,param_3);
    unaff_s4 += 8;
    param_2 = unaff_s3 + 0x10;
    if (unaff_s2 == unaff_s8) break;
    param_1 = unaff_s2 & 0xff;
    *(int *)(unaff_s1 + 0x20) = unaff_s9 << (unaff_s2 & 0x1f);
    FUN_00010b4a(param_1,unaff_s4,0x40000000);
    param_3 = 0x40000000;
    unaff_s2 += 1;
    unaff_s3 = param_2;
  }
  _L0();
  _L0();
  _L0();
  _L0();
  *(undefined2 *)(unaff_s5 + 0x54) = unaff_s6;
  puVar1 = (undefined4 *)(unaff_s1 + 0x80);
  do {
    FUN_00010bae(unaff_s0 + 1);
    *unaff_s0 = 0;
    uVar2 = *puVar1;
    *(undefined *)((int)unaff_s0 + 0xe) = 0;
    puVar1 = puVar1 + 1;
    *(short *)(unaff_s0 + 3) = (short)uVar2;
    unaff_s0 = unaff_s0 + 4;
  } while (puVar1 != (undefined4 *)0x44a00094);
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_s5;
  undefined2 unaff_s6;
  
  _L0();
  _L0();
  _L0();
  _L0();
  *(undefined2 *)(unaff_s5 + 0x54) = unaff_s6;
  puVar1 = (undefined4 *)(unaff_s1 + 0x80);
  do {
    FUN_00010bae(unaff_s0 + 1);
    *unaff_s0 = 0;
    uVar2 = *puVar1;
    *(undefined *)((int)unaff_s0 + 0xe) = 0;
    puVar1 = puVar1 + 1;
    *(short *)(unaff_s0 + 3) = (short)uVar2;
    unaff_s0 = unaff_s0 + 4;
  } while (puVar1 != (undefined4 *)0x44a00094);
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_s5;
  undefined2 unaff_s6;
  
  _L0();
  _L0();
  _L0();
  *(undefined2 *)(unaff_s5 + 0x54) = unaff_s6;
  puVar1 = (undefined4 *)(unaff_s1 + 0x80);
  do {
    FUN_00010bae(unaff_s0 + 1);
    *unaff_s0 = 0;
    uVar2 = *puVar1;
    *(undefined *)((int)unaff_s0 + 0xe) = 0;
    puVar1 = puVar1 + 1;
    *(short *)(unaff_s0 + 3) = (short)uVar2;
    unaff_s0 = unaff_s0 + 4;
  } while (puVar1 != (undefined4 *)0x44a00094);
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_s5;
  undefined2 unaff_s6;
  
  _L0();
  _L0();
  *(undefined2 *)(unaff_s5 + 0x54) = unaff_s6;
  puVar1 = (undefined4 *)(unaff_s1 + 0x80);
  do {
    FUN_00010bae(unaff_s0 + 1);
    *unaff_s0 = 0;
    uVar2 = *puVar1;
    *(undefined *)((int)unaff_s0 + 0xe) = 0;
    puVar1 = puVar1 + 1;
    *(short *)(unaff_s0 + 3) = (short)uVar2;
    unaff_s0 = unaff_s0 + 4;
  } while (puVar1 != (undefined4 *)0x44a00094);
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s5;
  undefined2 unaff_s6;
  
  _L0();
  *(undefined2 *)(unaff_s5 + 0x54) = unaff_s6;
  puVar1 = (undefined4 *)(unaff_s1 + 0x80);
  do {
    FUN_00010bae(unaff_s0 + 1);
    *unaff_s0 = 0;
    uVar2 = *puVar1;
    *(undefined *)((int)unaff_s0 + 0xe) = 0;
    puVar1 = puVar1 + 1;
    *(short *)(unaff_s0 + 3) = (short)uVar2;
    unaff_s0 = unaff_s0 + 4;
  } while (puVar1 != (undefined4 *)(unaff_s2 + 0x94));
  return;
}



void FUN_00010bae(undefined4 *param_1)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  undefined4 *unaff_s2;
  
  while( true ) {
    FUN_00010bae(param_1);
    *unaff_s0 = 0;
    uVar1 = *unaff_s1;
    *(undefined *)((int)unaff_s0 + 0xe) = 0;
    unaff_s1 = unaff_s1 + 1;
    *(short *)(unaff_s0 + 3) = (short)uVar1;
    if (unaff_s1 == unaff_s2) break;
    param_1 = unaff_s0 + 5;
    unaff_s0 = unaff_s0 + 4;
  }
  return;
}



// DWARF DIE: 3ed4

void txl_cntrl_env_dump(void)

{
  int *piVar1;
  int extraout_a0;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)&DAT_00000004;
  do {
    FUN_00010c06(piVar1);
    if (extraout_a0 != 0) {
      piVar4 = (int *)*piVar1;
      for (piVar2 = piVar4; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      }
      for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        for (iVar3 = *(int *)(piVar4[0x1b] + 0x10); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
        }
      }
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 != (int *)&DAT_00000054);
  return;
}



void FUN_00010c06(int *param_1)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_00010c06(param_1);
    if (extraout_a0 != 0) {
      piVar3 = (int *)*unaff_s2;
      for (piVar1 = piVar3; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      }
      for (; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
        for (iVar2 = *(int *)(piVar3[0x1b] + 0x10); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        }
      }
    }
    unaff_s0 += 0x10;
    if (unaff_s0 == unaff_s3) break;
    param_1 = (int *)(unaff_s0 + unaff_s1);
    unaff_s2 = param_1;
  }
  return;
}


