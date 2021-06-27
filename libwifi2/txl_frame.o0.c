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

typedef union anon_union.conflict2a9d_for_field_0 anon_union.conflict2a9d_for_field_0, *Panon_union.conflict2a9d_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict12ba_for_field_3 anon_union.conflict12ba_for_field_3, *Panon_union.conflict12ba_for_field_3;

typedef union anon_union.conflict12df_for_field_4 anon_union.conflict12df_for_field_4, *Panon_union.conflict12df_for_field_4;

typedef union anon_union.conflict1304_for_field_5 anon_union.conflict1304_for_field_5, *Panon_union.conflict1304_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: ed6
    struct co_list_hdr * next;
};

union anon_union.conflict12df_for_field_4 { // DWARF DIE: 12df
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_compressed_policy_tbl { // DWARF DIE: 128f
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct tx_policy_tbl { // DWARF DIE: 121e
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict2a9d_for_field_0 { // DWARF DIE: 2a9d
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct mac_addr { // DWARF DIE: a94
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 18a2
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

struct tx_cfm_tag { // DWARF DIE: 1717
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

union anon_union.conflict12ba_for_field_3 { // DWARF DIE: 12ba
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct umacdesc { // DWARF DIE: 197e
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

struct lmacdesc { // DWARF DIE: 1a0e
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

union anon_union.conflict1304_for_field_5 { // DWARF DIE: 1304
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: 1329
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict12ba_for_field_3 field_3;
    union anon_union.conflict12df_for_field_4 field_4;
    union anon_union.conflict1304_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1786
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct txdesc { // DWARF DIE: 1b2a
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct txl_buffer_control { // DWARF DIE: 19da
    union anon_union.conflict2a9d_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct dma_desc { // DWARF DIE: 1061
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd { // DWARF DIE: 13f2
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_tag { // DWARF DIE: 1a49
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

struct tx_agg_desc { // DWARF DIE: 17b7
    uint8_t reserved;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

typedef struct txl_list txl_list, *Ptxl_list;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: efc
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct txl_list { // DWARF DIE: 28df
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

struct txl_cntrl_env_tag { // DWARF DIE: 2927
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct mic_calc mic_calc, *Pmic_calc;

struct mic_calc { // DWARF DIE: 1ff1
    uint32_t mic_key_least;
    uint32_t mic_key_most;
    uint32_t last_m_i;
    uint8_t last_m_i_len;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 22b7
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

struct bam_env_tag { // DWARF DIE: 232a
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

struct txl_frame_cfm_tag { // DWARF DIE: 2bdb
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 2c03
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 2c57
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

struct chan_tbtt_tag { // DWARF DIE: 2de1
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

struct mm_chan_ctxt_add_req { // DWARF DIE: 1ece
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 2e30
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

struct mm_timer_tag { // DWARF DIE: 1f89
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct chan_env_tag { // DWARF DIE: 2ec0
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

struct __locale_t { // DWARF DIE: 8f8
};

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 1c37
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 313c
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

struct scan_chan_tag { // DWARF DIE: d5d
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct me_chan_config_req { // DWARF DIE: 32a0
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: c6c
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

struct me_env_tag { // DWARF DIE: 3450
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

struct mobility_domain { // DWARF DIE: 34e4
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

struct Cipher_t { // DWARF DIE: 3334
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct mac_edca_param_set { // DWARF DIE: d24
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset { // DWARF DIE: b19
    uint8_t length;
    uint8_t array[12];
};

struct mac_ssid { // DWARF DIE: ac4
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct SecurityMode_t { // DWARF DIE: 339a
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

struct mac_bss_info { // DWARF DIE: 350c
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

typedef struct anon_struct.conflictb61 anon_struct.conflictb61, *Panon_struct.conflictb61;

struct anon_struct.conflictb61 { // DWARF DIE: b61
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictbc1_for_u anon_union.conflictbc1_for_u, *Panon_union.conflictbc1_for_u;

typedef struct anon_struct.conflictb98 anon_struct.conflictb98, *Panon_struct.conflictb98;

struct anon_struct.conflictb98 { // DWARF DIE: b98
    uint32_t key[4];
};

union anon_union.conflictbc1_for_u { // DWARF DIE: bc1
    struct anon_struct.conflictb61 mic;
    struct anon_struct.conflictb98 mfp;
};

struct key_info_tag { // DWARF DIE: be6
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictbc1_for_u u;
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

struct mac_vhtcapability { // DWARF DIE: ccf
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef union anon_union.conflictbc1 anon_union.conflictbc1, *Panon_union.conflictbc1;

union anon_union.conflictbc1 { // DWARF DIE: bc1
    struct anon_struct.conflictb61 mic;
    struct anon_struct.conflictb98 mfp;
};

typedef enum anon_enum_8.conflicta1c {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_VI=2,
    AC_VO=3,
    BROADCAST_STA_IDX_MAX=11,
    BROADCAST_STA_IDX_MIN=10,
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
    HW_RATE_11MBPS=3,
    HW_RATE_12MBPS=6,
    HW_RATE_18MBPS=7,
    HW_RATE_1MBPS=0,
    HW_RATE_24MBPS=8,
    HW_RATE_2MBPS=1,
    HW_RATE_36MBPS=9,
    HW_RATE_48MBPS=10,
    HW_RATE_54MBPS=11,
    HW_RATE_5_5MBPS=2,
    HW_RATE_6MBPS=4,
    HW_RATE_9MBPS=5,
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
    PHY_BAND_2G4=0,
    PHY_BAND_5G=1,
    PHY_BAND_MAX=2,
    PHY_PRIM=0,
    PHY_SEC=1,
    PORT_CLOSED=0,
    PORT_CONTROLED=1,
    PORT_OPEN=2,
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
    TID_MGT=8,
    TX_CUSTOM=4,
    TX_DEFAULT_24G=0,
    TX_DEFAULT_5G=1,
    TX_DEFAULT_NDP=3,
    TX_DEFAULT_NDPA_BRP=2,
    TX_EXT=1,
    TX_INT=0,
    VIF_AP=2,
    VIF_IBSS=1,
    VIF_MESH_POINT=3,
    VIF_STA=0,
    VIF_UNKNOWN=4
} anon_enum_8.conflicta1c;

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: da5
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

struct ke_msg_handler { // DWARF DIE: 1e3e
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1e6a
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef uint wint_t;

typedef long __int32_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct llc_snap llc_snap, *Pllc_snap;

struct llc_snap { // DWARF DIE: 3abe
    uint16_t dsap_ssap;
    uint16_t control_oui0;
    uint16_t oui1_2;
    uint16_t proto_id;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 21a4
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 2179
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 215c
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 2061
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

struct rxu_cntrl_env_tag { // DWARF DIE: 21dd
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

typedef struct mac_hdr_qos mac_hdr_qos, *Pmac_hdr_qos;

struct mac_hdr_qos { // DWARF DIE: fb3
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
    uint16_t qos;
};

typedef struct mac_hdr mac_hdr, *Pmac_hdr;

struct mac_hdr { // DWARF DIE: f50
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

struct la_mem_format { // DWARF DIE: 1156
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 10b5
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 1fca
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 1552
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

struct phy_channel_info { // DWARF DIE: 112e
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 15e7
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 1447
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

struct rx_payloaddesc { // DWARF DIE: 16ba
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 164a
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

struct debug_env_tag { // DWARF DIE: 118e
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 1be8
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict38e1_for_u anon_union.conflict38e1_for_u, *Panon_union.conflict38e1_for_u;

typedef struct anon_struct.conflict3719 anon_struct.conflict3719, *Panon_struct.conflict3719;

typedef struct anon_struct.conflict37e6 anon_struct.conflict37e6, *Panon_struct.conflict37e6;

struct anon_struct.conflict37e6 { // DWARF DIE: 37e6
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

struct anon_struct.conflict3719 { // DWARF DIE: 3719
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

union anon_union.conflict38e1_for_u { // DWARF DIE: 38e1
    struct anon_struct.conflict3719 sta;
    struct anon_struct.conflict37e6 ap;
};

struct vif_info_tag { // DWARF DIE: 3904
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
    union anon_union.conflict38e1_for_u u;
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

typedef union anon_union.conflict38e1 anon_union.conflict38e1, *Panon_union.conflict38e1;

union anon_union.conflict38e1 { // DWARF DIE: 38e1
    struct anon_struct.conflict3719 sta;
    struct anon_struct.conflict37e6 ap;
};

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag { // DWARF DIE: 3a3f
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 303a
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 2ff3
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 2660
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

typedef union anon_union.conflict325b_for_rate_map anon_union.conflict325b_for_rate_map, *Panon_union.conflict325b_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 31be
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step { // DWARF DIE: 3234
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

union anon_union.conflict325b_for_rate_map { // DWARF DIE: 325b
    uint8_t ht[4];
};

struct rc_sta_stats { // DWARF DIE: 24fa
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
    union anon_union.conflict325b_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 24ab
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2470
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 26af
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

struct sta_info_env_tag { // DWARF DIE: 2898
    struct co_list free_sta_list;
};

typedef union anon_union.conflict325b anon_union.conflict325b, *Panon_union.conflict325b;

union anon_union.conflict325b { // DWARF DIE: 325b
    uint8_t ht[4];
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 30e0
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 309b
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 29ec
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 29c4
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef union anon_union.conflict2a9d anon_union.conflict2a9d, *Panon_union.conflict2a9d;

union anon_union.conflict2a9d { // DWARF DIE: 2a9d
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 2a14
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

struct txl_buffer_env_tag { // DWARF DIE: 2abf
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict12df anon_union.conflict12df, *Panon_union.conflict12df;

union anon_union.conflict12df { // DWARF DIE: 12df
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict12ba anon_union.conflict12ba, *Panon_union.conflict12ba;

union anon_union.conflict12ba { // DWARF DIE: 12ba
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict1304 anon_union.conflict1304, *Panon_union.conflict1304;

union anon_union.conflict1304 { // DWARF DIE: 1304
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




// DWARF DIE: 4bb0

void txl_frame_init_desc(txl_frame_desc_tag *frame,txl_buffer_tag *buffer,tx_hw_desc *hwdesc,
                        txl_buffer_control *bufctrl)

{
  _L0();
  (hwdesc->thd).upatterntx = 0xcafebabe;
  (hwdesc->thd).field_4 = buffer + 1;
  (hwdesc->thd).frmlifetime = 0;
  (hwdesc->thd).optlen[0] = 0;
  (hwdesc->thd).optlen[1] = 0;
  (hwdesc->thd).optlen[2] = 0;
  *(undefined4 *)&bufctrl->field_0 = 0xbadcab1e;
  (frame->txdesc).lmac.hw_desc = hwdesc;
  (frame->txdesc).lmac.buffer = buffer;
  (frame->txdesc).umac.buf_control = bufctrl;
  frame->type = '\x01';
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  undefined4 *in_stack_0000000c;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 4) = 0xcafebabe;
  *(int *)(unaff_s0 + 0x14) = unaff_s2 + 0x14c;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0;
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  *in_stack_0000000c = 0xbadcab1e;
  *(int *)(unaff_s1 + 0x6c) = unaff_s0;
  *(int *)(unaff_s1 + 0x68) = unaff_s2;
  *(undefined4 **)(unaff_s1 + 0x54) = in_stack_0000000c;
  *(undefined *)(unaff_s1 + 0x2d4) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4a9a

void txl_frame_init(_Bool reset)

{
  int *piVar1;
  int iVar2;
  undefined3 in_register_00002029;
  int iVar3;
  int extraout_a0;
  int extraout_a0_00;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  _L0(_DAT_00000010,_DAT_00000014,_DAT_00000018,_DAT_0000001c,_DAT_00000020,_DAT_00000028,
      _DAT_0000002c,_DAT_00000030,_DAT_00000034,_DAT_00000038);
  iVar3 = 8;
  _L0(_DAT_00000010,_DAT_00000014,_DAT_00000018,_DAT_0000001c,_DAT_00000020,_DAT_00000028,
      _DAT_0000002c,_DAT_00000030,_DAT_00000034,_DAT_00000038);
  iVar2 = 0;
  piVar1 = (int *)0x0;
  iVar5 = 0;
  puVar4 = (undefined4 *)0x0;
  iVar6 = 0;
  do {
    if ((CONCAT31(in_register_00002029,reset) == 0) || (*(char *)(iVar2 + 0x2d5) == '\0')) {
      FUN_000100f4(iVar2,0,0x2d8,_DAT_00000010,_DAT_00000014,_DAT_00000018,_DAT_0000001c,
                   _DAT_00000020,_DAT_00000028,_DAT_0000002c,_DAT_00000030,_DAT_00000034,
                   _DAT_00000038);
      piVar1[1] = -0x35014542;
      piVar1[8] = 0;
      piVar1[0xb] = 0;
      piVar1[0xc] = 0;
      piVar1[0xd] = 0;
      *puVar4 = 0xbadcab1e;
      *(int *)(iVar2 + 0x68) = iVar5;
      *(undefined4 **)(iVar2 + 0x54) = puVar4;
      *(int **)(iVar2 + 0x6c) = piVar1;
      *piVar1 = iVar6 * 0x14;
      piVar1[5] = iVar5 + 0x14c;
      *(undefined *)(iVar2 + 0x2d4) = 0;
      iVar3 = 0;
      FUN_00010136(iVar2,_DAT_00000010,_DAT_00000014,_DAT_00000018,_DAT_0000001c,_DAT_00000020,
                   _DAT_00000028,_DAT_0000002c,_DAT_00000030,_DAT_00000034,_DAT_00000038);
    }
    iVar6 += 1;
    iVar2 += 0x2d8;
    piVar1 = piVar1 + 0x12;
    iVar5 += 0x24c;
    puVar4 = puVar4 + 0xf;
  } while (iVar6 != 4);
  uRam00000000 = 0xbadcab1e;
  _DAT_00000034 = 0;
  _DAT_00000038 = 0;
  _L0(_DAT_00000010,_DAT_00000014,_DAT_00000018,_DAT_0000001c,_DAT_00000020,_DAT_00000028,
      _DAT_0000002c,_DAT_00000030,0,0);
  iVar3 <<= 0xe;
  _DAT_00000004 = iVar3;
  _L0(_DAT_00000010,_DAT_00000014,_DAT_00000018,_DAT_0000001c,_DAT_00000020,_DAT_00000028,
      _DAT_0000002c,_DAT_00000030,_DAT_00000034,_DAT_00000038);
  _DAT_00000008 = (1 << (iVar3 + 1U & 0x1f)) + -1;
  _DAT_00000010 = 0xffff0704;
  _DAT_00000014 = 0x400;
  _DAT_0000000c = 0;
  _DAT_00000018 = 0;
  _DAT_0000001c = 0;
  _DAT_00000020 = 0;
  _DAT_00000028 = 0;
  _DAT_0000002c = 0;
  _DAT_00000030 = 0;
  uRam00000000 = 0xbadcab1e;
  _DAT_00000034 = 0;
  _DAT_00000038 = 0;
  _L0();
  _DAT_00000004 = extraout_a0 << 0xe;
  _L0();
  _DAT_00000008 = (1 << (extraout_a0_00 + 1U & 0x1f)) + -1;
  _DAT_0000000c = 0;
  _DAT_00000010 = 0xffff0704;
  _DAT_00000014 = iVar6;
  _DAT_00000018 = 0;
  _DAT_0000001c = 0;
  _DAT_00000020 = 0;
  _DAT_00000028 = 0;
  _DAT_0000002c = 0;
  _DAT_00000030 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 uRam00000010,int iRam00000014,undefined4 uRam00000018,undefined4 uRam0000001c,
        undefined4 uRam00000020,undefined4 uRam00000028,undefined4 uRam0000002c,
        undefined4 uRam00000030,undefined4 uRam00000034,undefined4 uRam00000038)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_a0;
  int extraout_a0_00;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int unaff_s5;
  int unaff_s7;
  
  _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,uRam0000002c,
      uRam00000030,uRam00000034,uRam00000038);
  iVar3 = 8;
  _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,uRam0000002c,
      uRam00000030,uRam00000034,uRam00000038);
  iVar2 = 0;
  piVar1 = (int *)0x0;
  iVar5 = 0;
  puVar4 = (undefined4 *)0x0;
  iVar6 = 0;
  do {
    if ((unaff_s7 == 0) || (*(char *)(iVar2 + 0x2d5) == '\0')) {
      FUN_000100f4(iVar2,0,0x2d8,uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,
                   uRam00000028,uRam0000002c,uRam00000030,uRam00000034,uRam00000038);
      piVar1[1] = -0x35014542;
      piVar1[8] = 0;
      piVar1[0xb] = 0;
      piVar1[0xc] = 0;
      piVar1[0xd] = 0;
      *puVar4 = 0xbadcab1e;
      *(int *)(iVar2 + 0x68) = iVar5;
      *(undefined4 **)(iVar2 + 0x54) = puVar4;
      *(int **)(iVar2 + 0x6c) = piVar1;
      *piVar1 = iVar6 * 0x14;
      piVar1[5] = iVar5 + 0x14c;
      *(undefined *)(iVar2 + 0x2d4) = 0;
      iVar3 = unaff_s5;
      FUN_00010136(iVar2,uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,
                   uRam00000028,uRam0000002c,uRam00000030,uRam00000034,uRam00000038);
    }
    iVar6 += 1;
    iVar2 += 0x2d8;
    piVar1 = piVar1 + 0x12;
    iVar5 += 0x24c;
    puVar4 = puVar4 + 0xf;
  } while (iVar6 != 4);
  uRam00000000 = 0xbadcab1e;
  uRam00000034 = 0;
  uRam00000038 = 0;
  _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,uRam0000002c,
      uRam00000030,0,0);
  iVar3 <<= 0xe;
  _DAT_00000004 = iVar3;
  _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,uRam0000002c,
      uRam00000030,uRam00000034,uRam00000038);
  _DAT_00000008 = (1 << (iVar3 + 1U & 0x1f)) + -1;
  uRam00000010 = 0xffff0704;
  iRam00000014 = 0x400;
  _DAT_0000000c = 0;
  uRam00000018 = 0;
  uRam0000001c = 0;
  uRam00000020 = 0;
  uRam00000028 = 0;
  uRam0000002c = 0;
  uRam00000030 = 0;
  uRam00000000 = 0xbadcab1e;
  uRam00000034 = 0;
  uRam00000038 = 0;
  _L0();
  _DAT_00000004 = extraout_a0 << 0xe;
  _L0();
  _DAT_00000008 = (1 << (extraout_a0_00 + 1U & 0x1f)) + -1;
  _DAT_0000000c = 0;
  uRam00000010 = 0xffff0704;
  iRam00000014 = iVar6;
  uRam00000018 = 0;
  uRam0000001c = 0;
  uRam00000020 = 0;
  uRam00000028 = 0;
  uRam0000002c = 0;
  uRam00000030 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 uRam00000010,int iRam00000014,undefined4 uRam00000018,undefined4 uRam0000001c,
        undefined4 uRam00000020,undefined4 uRam00000028,undefined4 uRam0000002c,
        undefined4 uRam00000030,undefined4 uRam00000034,undefined4 uRam00000038)

{
  int *unaff_s0;
  int unaff_s1;
  int in_a0;
  int extraout_a0;
  int extraout_a0_00;
  int *unaff_s2;
  int unaff_s3;
  int iVar1;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  
  _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,uRam0000002c,
      uRam00000030,uRam00000034,uRam00000038);
  iVar1 = 0;
  do {
    if ((unaff_s7 == 0) || (*(char *)(unaff_s1 + 0x2d5) == '\0')) {
      FUN_000100f4(unaff_s1,0,0x2d8,uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020
                   ,uRam00000028,uRam0000002c,uRam00000030,uRam00000034,uRam00000038);
      unaff_s0[1] = unaff_s8 + -0x542;
      unaff_s0[8] = 0;
      unaff_s0[0xb] = 0;
      unaff_s0[0xc] = 0;
      unaff_s0[0xd] = 0;
      *unaff_s2 = unaff_s9 + -0x4e2;
      *(int *)(unaff_s1 + 0x68) = unaff_s3;
      *(int **)(unaff_s1 + 0x54) = unaff_s2;
      *(int **)(unaff_s1 + 0x6c) = unaff_s0;
      *unaff_s0 = iVar1 * 0x14 + unaff_s6;
      unaff_s0[5] = unaff_s3 + 0x14c;
      *(undefined *)(unaff_s1 + 0x2d4) = 0;
      in_a0 = unaff_s5;
      FUN_00010136(unaff_s1,uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,
                   uRam00000028,uRam0000002c,uRam00000030,uRam00000034,uRam00000038);
    }
    iVar1 += 1;
    unaff_s1 += 0x2d8;
    unaff_s0 = unaff_s0 + 0x12;
    unaff_s3 += 0x24c;
    unaff_s2 = unaff_s2 + 0xf;
  } while (iVar1 != 4);
  uRam00000000 = 0xbadcab1e;
  uRam00000034 = 0;
  uRam00000038 = 0;
  _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,uRam0000002c,
      uRam00000030,0,0);
  in_a0 <<= 0xe;
  _DAT_00000004 = in_a0;
  _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,uRam0000002c,
      uRam00000030,uRam00000034,uRam00000038);
  _DAT_00000008 = (1 << (in_a0 + 1U & 0x1f)) + -1;
  uRam00000010 = 0xffff0704;
  iRam00000014 = 0x400;
  _DAT_0000000c = 0;
  uRam00000018 = 0;
  uRam0000001c = 0;
  uRam00000020 = 0;
  uRam00000028 = 0;
  uRam0000002c = 0;
  uRam00000030 = 0;
  uRam00000000 = 0xbadcab1e;
  uRam00000034 = 0;
  uRam00000038 = 0;
  _L0();
  _DAT_00000004 = extraout_a0 << 0xe;
  _L0();
  _DAT_00000008 = (1 << (extraout_a0_00 + 1U & 0x1f)) + -1;
  _DAT_0000000c = 0;
  uRam00000010 = 0xffff0704;
  iRam00000014 = iVar1;
  uRam00000018 = 0;
  uRam0000001c = 0;
  uRam00000020 = 0;
  uRam00000028 = 0;
  uRam0000002c = 0;
  uRam00000030 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 uRam00000010,
                 int iRam00000014,undefined4 uRam00000018,undefined4 uRam0000001c,
                 undefined4 uRam00000020,undefined4 uRam00000028,undefined4 uRam0000002c,
                 undefined4 uRam00000030,undefined4 uRam00000034,undefined4 uRam00000038)

{
  char *pcVar1;
  int *unaff_s0;
  int unaff_s1;
  int iVar2;
  int iVar3;
  int extraout_a0;
  int extraout_a0_00;
  undefined4 *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined4 unaff_s9;
  int unaff_s10;
  int unaff_s11;
  
  do {
    FUN_000100f4(param_1,param_2,param_3,uRam00000010,iRam00000014,uRam00000018,uRam0000001c,
                 uRam00000020,uRam00000028,uRam0000002c,uRam00000030,uRam00000034,uRam00000038);
    unaff_s0[1] = unaff_s8;
    unaff_s0[8] = 0;
    unaff_s0[0xb] = 0;
    unaff_s0[0xc] = 0;
    unaff_s0[0xd] = 0;
    *unaff_s2 = unaff_s9;
    *(int *)(unaff_s1 + 0x68) = unaff_s3;
    *(undefined4 **)(unaff_s1 + 0x54) = unaff_s2;
    *(int **)(unaff_s1 + 0x6c) = unaff_s0;
    *unaff_s0 = unaff_s4 * unaff_s10 + unaff_s6;
    unaff_s0[5] = unaff_s3 + 0x14c;
    *(undefined *)(unaff_s1 + 0x2d4) = 0;
    iVar3 = unaff_s5;
    FUN_00010136(unaff_s1,uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,
                 uRam00000028,uRam0000002c,uRam00000030,uRam00000034,uRam00000038);
    iVar2 = unaff_s1;
    do {
      unaff_s4 += 1;
      unaff_s1 = iVar2 + 0x2d8;
      unaff_s0 = unaff_s0 + 0x12;
      unaff_s3 += 0x24c;
      unaff_s2 = unaff_s2 + 0xf;
      if (unaff_s4 == unaff_s11) {
        uRam00000000 = 0xbadcab1e;
        uRam00000034 = 0;
        uRam00000038 = 0;
        _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,
            uRam0000002c,uRam00000030,0,0);
        iVar3 <<= 0xe;
        _DAT_00000004 = iVar3;
        _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,
            uRam0000002c,uRam00000030,uRam00000034,uRam00000038);
        _DAT_00000008 = (1 << (iVar3 + 1U & 0x1f)) + -1;
        uRam00000010 = 0xffff0704;
        iRam00000014 = 0x400;
        _DAT_0000000c = 0;
        uRam00000018 = 0;
        uRam0000001c = 0;
        uRam00000020 = 0;
        uRam00000028 = 0;
        uRam0000002c = 0;
        uRam00000030 = 0;
        uRam00000000 = 0xbadcab1e;
        uRam00000034 = 0;
        uRam00000038 = 0;
        _L0();
        _DAT_00000004 = extraout_a0 << 0xe;
        _L0();
        _DAT_00000008 = (1 << (extraout_a0_00 + 1U & 0x1f)) + -1;
        _DAT_0000000c = 0;
        uRam00000010 = 0xffff0704;
        iRam00000014 = unaff_s4;
        uRam00000018 = 0;
        uRam0000001c = 0;
        uRam00000020 = 0;
        uRam00000028 = 0;
        uRam0000002c = 0;
        uRam00000030 = 0;
        return;
      }
    } while ((unaff_s7 != 0) &&
            (pcVar1 = (char *)(iVar2 + 0x5ad), iVar2 = unaff_s1, *pcVar1 != '\0'));
    param_2 = 0;
    param_3 = 0x2d8;
    param_1 = unaff_s1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010136(int param_1,undefined4 uRam00000010,int iRam00000014,undefined4 uRam00000018,
                 undefined4 uRam0000001c,undefined4 uRam00000020,undefined4 uRam00000028,
                 undefined4 uRam0000002c,undefined4 uRam00000030,undefined4 uRam00000034,
                 undefined4 uRam00000038)

{
  int *unaff_s0;
  int *piVar1;
  int unaff_s1;
  int iVar2;
  int in_a0;
  int extraout_a0;
  int extraout_a0_00;
  undefined4 *unaff_s2;
  int unaff_s3;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined4 unaff_s9;
  int unaff_s10;
  int unaff_s11;
  
  do {
    FUN_00010136(param_1,uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,
                 uRam00000028,uRam0000002c,uRam00000030,uRam00000034,uRam00000038);
    do {
      iVar3 = unaff_s3;
      iVar2 = unaff_s1;
      piVar1 = unaff_s0;
      unaff_s4 += 1;
      unaff_s1 = iVar2 + 0x2d8;
      unaff_s0 = piVar1 + 0x12;
      unaff_s3 = iVar3 + 0x24c;
      unaff_s2 = unaff_s2 + 0xf;
      if (unaff_s4 == unaff_s11) {
        uRam00000000 = 0xbadcab1e;
        uRam00000034 = 0;
        uRam00000038 = 0;
        _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,
            uRam0000002c,uRam00000030,0,0);
        in_a0 <<= 0xe;
        _DAT_00000004 = in_a0;
        _L0(uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,
            uRam0000002c,uRam00000030,uRam00000034,uRam00000038);
        _DAT_00000008 = (1 << (in_a0 + 1U & 0x1f)) + -1;
        uRam00000010 = 0xffff0704;
        iRam00000014 = 0x400;
        _DAT_0000000c = 0;
        uRam00000018 = 0;
        uRam0000001c = 0;
        uRam00000020 = 0;
        uRam00000028 = 0;
        uRam0000002c = 0;
        uRam00000030 = 0;
        uRam00000000 = 0xbadcab1e;
        uRam00000034 = 0;
        uRam00000038 = 0;
        _L0();
        _DAT_00000004 = extraout_a0 << 0xe;
        _L0();
        _DAT_00000008 = (1 << (extraout_a0_00 + 1U & 0x1f)) + -1;
        _DAT_0000000c = 0;
        uRam00000010 = 0xffff0704;
        iRam00000014 = unaff_s4;
        uRam00000018 = 0;
        uRam0000001c = 0;
        uRam00000020 = 0;
        uRam00000028 = 0;
        uRam0000002c = 0;
        uRam00000030 = 0;
        return;
      }
    } while ((unaff_s7 != 0) && (*(char *)(iVar2 + 0x5ad) != '\0'));
    FUN_000100f4(unaff_s1,0,0x2d8,uRam00000010,iRam00000014,uRam00000018,uRam0000001c,uRam00000020,
                 uRam00000028,uRam0000002c,uRam00000030,uRam00000034,uRam00000038);
    piVar1[0x13] = unaff_s8;
    piVar1[0x1a] = 0;
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    piVar1[0x1f] = 0;
    *unaff_s2 = unaff_s9;
    *(int *)(iVar2 + 0x340) = unaff_s3;
    *(undefined4 **)(iVar2 + 0x32c) = unaff_s2;
    *(int **)(iVar2 + 0x344) = unaff_s0;
    *unaff_s0 = unaff_s4 * unaff_s10 + unaff_s6;
    piVar1[0x17] = iVar3 + 0x398;
    *(undefined *)(iVar2 + 0x5ac) = 0;
    in_a0 = unaff_s5;
    param_1 = unaff_s1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 uRam00000010,undefined4 uRam00000014,undefined4 uRam00000018,
        undefined4 uRam0000001c,undefined4 uRam00000020,undefined4 uRam00000028,
        undefined4 uRam0000002c,undefined4 uRam00000030,undefined4 uRam00000034,
        undefined4 uRam00000038)

{
  int unaff_s0;
  int in_a0;
  int extraout_a0;
  int extraout_a0_00;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  
  _L0(uRam00000010,uRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,uRam0000002c,
      uRam00000030,uRam00000034,uRam00000038);
  in_a0 <<= 0xe;
  *(int *)(unaff_s0 + 4) = in_a0;
  _L0(uRam00000010,uRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,uRam0000002c,
      uRam00000030,uRam00000034,uRam00000038);
  *(undefined4 *)(unaff_s0 + 0x10) = 0xffff0704;
  *(undefined4 *)(unaff_s0 + 0x14) = 0x400;
  *(int *)(unaff_s0 + 8) = (1 << (in_a0 + 1U & 0x1f)) + -1;
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  *(undefined4 *)(unaff_s0 + 0x18) = 0;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  *(undefined4 *)(unaff_s0 + 0x28) = 0;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0;
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  uRam00000034 = 0;
  uRam00000038 = 0;
  uRam00000000 = unaff_s3;
  _L0();
  _DAT_00000004 = extraout_a0 << 0xe;
  _L0();
  _DAT_00000008 = (1 << (extraout_a0_00 + 1U & 0x1f)) + -1;
  _DAT_0000000c = 0;
  uRam00000010 = 0xffff0704;
  uRam00000014 = unaff_s4;
  uRam00000018 = 0;
  uRam0000001c = 0;
  uRam00000020 = 0;
  uRam00000028 = 0;
  uRam0000002c = 0;
  uRam00000030 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 uRam00000010,undefined4 uRam00000014,undefined4 uRam00000018,
        undefined4 uRam0000001c,undefined4 uRam00000020,undefined4 uRam00000028,
        undefined4 uRam0000002c,undefined4 uRam00000030,undefined4 uRam00000034,
        undefined4 uRam00000038)

{
  int unaff_s0;
  int in_a0;
  int extraout_a0;
  int extraout_a0_00;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  
  _L0(uRam00000010,uRam00000014,uRam00000018,uRam0000001c,uRam00000020,uRam00000028,uRam0000002c,
      uRam00000030,uRam00000034,uRam00000038);
  *(undefined4 *)(unaff_s0 + 0x10) = 0xffff0704;
  *(undefined4 *)(unaff_s0 + 0x14) = 0x400;
  *(int *)(unaff_s0 + 8) = (1 << (in_a0 + 1U & 0x1f)) + -1;
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  *(undefined4 *)(unaff_s0 + 0x18) = 0;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  *(undefined4 *)(unaff_s0 + 0x28) = 0;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0;
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  uRam00000034 = 0;
  uRam00000038 = 0;
  uRam00000000 = unaff_s3;
  _L0();
  _DAT_00000004 = extraout_a0 << 0xe;
  _L0();
  _DAT_00000008 = (1 << (extraout_a0_00 + 1U & 0x1f)) + -1;
  _DAT_0000000c = 0;
  uRam00000010 = 0xffff0704;
  uRam00000014 = unaff_s4;
  uRam00000018 = 0;
  uRam0000001c = 0;
  uRam00000020 = 0;
  uRam00000028 = 0;
  uRam0000002c = 0;
  uRam00000030 = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  undefined4 unaff_s2;
  undefined4 unaff_s4;
  
  _L0();
  *(int *)(unaff_s0 + 4) = extraout_a0 << 0xe;
  _L0();
  *(int *)(unaff_s0 + 8) = (unaff_s1 << (extraout_a0_00 + 1U & 0x1f)) + -1;
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = unaff_s2;
  *(undefined4 *)(unaff_s0 + 0x14) = unaff_s4;
  *(undefined4 *)(unaff_s0 + 0x18) = 0;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  *(undefined4 *)(unaff_s0 + 0x28) = 0;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0;
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  undefined4 unaff_s2;
  undefined4 unaff_s4;
  
  _L0();
  *(int *)(unaff_s0 + 8) = (unaff_s1 << (extraout_a0 + 1U & 0x1f)) + -1;
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  *(undefined4 *)(unaff_s0 + 0x10) = unaff_s2;
  *(undefined4 *)(unaff_s0 + 0x14) = unaff_s4;
  *(undefined4 *)(unaff_s0 + 0x18) = 0;
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  *(undefined4 *)(unaff_s0 + 0x28) = 0;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0;
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  return;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 48fa

txl_frame_desc_tag * txl_frame_get(int type,int len)

{
  tx_hw_desc *ptVar1;
  txl_frame_desc_tag *ptVar2;
  undefined4 extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  txl_buffer_tag *ptVar3;
  
  ptVar2 = (txl_frame_desc_tag *)_L0();
  if (ptVar2 == (txl_frame_desc_tag *)0x0) {
    iRam00000000 += 1;
    if (iRam00000000 == 10) {
      iRam00000000 = 2;
      _L0();
      FUN_0001036e();
      if ((extraout_a0_01 | extraout_a0_00) == 0) {
        _L0();
      }
    }
  }
  else {
    if (iRam00000000 == 1) {
      iRam00000000 = 1;
      _L0();
      FUN_00010290();
      FUN_0001029c();
      ptVar2 = (txl_frame_desc_tag *)0x0;
      _L0();
    }
    else {
      if (iRam00000000 != 0) {
        iRam00000000 += -1;
      }
      ptVar1 = (ptVar2->txdesc).lmac.hw_desc;
      ptVar3 = (ptVar2->txdesc).lmac.buffer;
      (ptVar1->thd).frmlen = len + 4;
      (ptVar1->thd).field_5 = (ptVar1->thd).field_4 + len + -1;
      FUN_00010302();
      FUN_0001030e();
      *(undefined4 *)&(ptVar3->buffer_control).field_0.field_0x24 = extraout_a0;
      (ptVar1->thd).policyentryaddr = (uint32_t)&ptVar3->buffer_control;
      (ptVar1->thd).phyctrlinfo = 0;
      (ptVar1->thd).macctrlinfo2 = 0;
      (ptVar1->thd).field_3 = 0;
      (ptVar2->cfm).cfm_func = (cfm_func_ptr *)0x0;
      (ptVar2->cfm).env = (void *)0x0;
    }
  }
  return ptVar2;
}



int _L0(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  int iVar3;
  int in_stack_0000000c;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    iRam00000000 += 1;
    if (iRam00000000 == 10) {
      iRam00000000 = 2;
      _L0();
      FUN_0001036e();
      if ((extraout_a0_01 | extraout_a0_00) == 0) {
        _L0();
      }
    }
  }
  else {
    if (iRam00000000 == 1) {
      iRam00000000 = 1;
      _L0();
      FUN_00010290();
      FUN_0001029c();
      iVar2 = 0;
      _L0();
    }
    else {
      if (iRam00000000 != 0) {
        iRam00000000 += -1;
      }
      iVar1 = *(int *)(iVar2 + 0x6c);
      iVar3 = *(int *)(iVar2 + 0x68);
      *(int *)(iVar1 + 0x1c) = in_stack_0000000c + 4;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + in_stack_0000000c + -1;
      FUN_00010302();
      FUN_0001030e();
      *(undefined4 *)(iVar3 + 0x114) = extraout_a0;
      *(int *)(iVar1 + 0x28) = iVar3 + 0xf0;
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x2cc) = 0;
      *(undefined4 *)(iVar2 + 0x2d0) = 0;
    }
  }
  return iVar2;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010290();
  FUN_0001029c();
  _L0();
  return 0;
}



undefined4 FUN_00010290(void)

{
  FUN_00010290();
  FUN_0001029c();
  _L0();
  return 0;
}



undefined4 FUN_0001029c(void)

{
  FUN_0001029c();
  _L0();
  return 0;
}



void _L0(void)

{
  _L0();
  return;
}



void FUN_00010302(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 extraout_a0;
  undefined4 unaff_s2;
  int unaff_s3;
  
  FUN_00010302();
  FUN_0001030e();
  *(undefined4 *)(unaff_s3 + 0x114) = extraout_a0;
  *(undefined4 *)(unaff_s1 + 0x28) = unaff_s2;
  *(undefined4 *)(unaff_s1 + 0x24) = 0;
  *(undefined4 *)(unaff_s1 + 0x3c) = 0;
  *(undefined4 *)(unaff_s1 + 0x10) = 0;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(undefined4 *)(unaff_s0 + 0x2d0) = 0;
  return;
}



void FUN_0001030e(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 extraout_a0;
  undefined4 unaff_s2;
  int unaff_s3;
  
  FUN_0001030e();
  *(undefined4 *)(unaff_s3 + 0x114) = extraout_a0;
  *(undefined4 *)(unaff_s1 + 0x28) = unaff_s2;
  *(undefined4 *)(unaff_s1 + 0x24) = 0;
  *(undefined4 *)(unaff_s1 + 0x3c) = 0;
  *(undefined4 *)(unaff_s1 + 0x10) = 0;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(undefined4 *)(unaff_s0 + 0x2d0) = 0;
  return;
}



void _L0(void)

{
  uint extraout_a0;
  uint extraout_a0_00;
  
  _L0();
  FUN_0001036e();
  if ((extraout_a0_00 | extraout_a0) == 0) {
    _L0();
  }
  return;
}



void FUN_0001036e(void)

{
  uint unaff_s1;
  uint extraout_a0;
  
  FUN_0001036e();
  if ((extraout_a0 | unaff_s1) == 0) {
    _L0();
  }
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 4863

_Bool txl_frame_push(txl_frame_desc_tag *frame,uint8_t ac)

{
  byte bVar1;
  tx_hw_desc *ptVar2;
  
  ptVar2 = (frame->txdesc).lmac.hw_desc;
  if (((ptVar2->thd).field_4 & 1) != 0) {
    FUN_000103ae();
  }
  (ptVar2->thd).nextfrmexseq_ptr = 0;
  (ptVar2->thd).nextmpdudesc_ptr = 0;
  (ptVar2->thd).macctrlinfo2 = (ptVar2->thd).macctrlinfo2 & 0xff87ffff;
  bVar1 = *(byte *)((ptVar2->thd).field_4 + 4);
  (ptVar2->thd).statinfo = 0;
  (ptVar2->thd).macctrlinfo1 = (uint)((bVar1 & 1) == 0) << 9;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000103ae(void)

{
  byte bVar1;
  int unaff_s0;
  
  FUN_000103ae();
  *(undefined4 *)(unaff_s0 + 8) = 0;
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  *(uint *)(unaff_s0 + 0x3c) = *(uint *)(unaff_s0 + 0x3c) & 0xff87ffff;
  bVar1 = *(byte *)(*(int *)(unaff_s0 + 0x14) + 4);
  *(undefined4 *)(unaff_s0 + 0x40) = 0;
  *(uint *)(unaff_s0 + 0x38) = (uint)((bVar1 & 1) == 0) << 9;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 47cc

_Bool txl_frame_push_force(txl_frame_desc_tag *frame,uint8_t ac)

{
  byte bVar1;
  tx_hw_desc *ptVar2;
  
  ptVar2 = (frame->txdesc).lmac.hw_desc;
  if (((ptVar2->thd).field_4 & 1) != 0) {
    FUN_0001041e();
  }
  (ptVar2->thd).nextfrmexseq_ptr = 0;
  (ptVar2->thd).nextmpdudesc_ptr = 0;
  (ptVar2->thd).macctrlinfo2 = (ptVar2->thd).macctrlinfo2 & 0xff87ffff;
  bVar1 = *(byte *)((ptVar2->thd).field_4 + 4);
  (ptVar2->thd).statinfo = 0;
  (ptVar2->thd).macctrlinfo1 = (uint)((bVar1 & 1) == 0) << 9;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001041e(void)

{
  byte bVar1;
  int unaff_s0;
  
  FUN_0001041e();
  *(undefined4 *)(unaff_s0 + 8) = 0;
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  *(uint *)(unaff_s0 + 0x3c) = *(uint *)(unaff_s0 + 0x3c) & 0xff87ffff;
  bVar1 = *(byte *)(*(int *)(unaff_s0 + 0x14) + 4);
  *(undefined4 *)(unaff_s0 + 0x40) = 0;
  *(uint *)(unaff_s0 + 0x38) = (uint)((bVar1 & 1) == 0) << 9;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4774

void txl_frame_cfm(txdesc *txdesc)

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



// DWARF DIE: 4701

void txl_frame_release(txdesc *txdesc,_Bool postponed)

{
  co_list_hdr *UNRECOVERED_JUMPTABLE;
  undefined3 in_register_0000202d;
  
  if (*(char *)&txdesc[1].host.packet_addr == '\0') {
    FUN_000104a6();
  }
  if ((CONCAT31(in_register_0000202d,postponed) != 0) &&
     (UNRECOVERED_JUMPTABLE = txdesc[1].list_hdr.next, UNRECOVERED_JUMPTABLE != (co_list_hdr *)0x0))
  {
                    // WARNING: Could not recover jumptable at 0x000104c6. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)UNRECOVERED_JUMPTABLE)(txdesc[1].host.pbuf_addr,0);
    return;
  }
  return;
}



void FUN_000104a6(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_000104a6();
  if ((unaff_s1 != 0) && (*(code **)(unaff_s0 + 0x2cc) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x000104c6. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(unaff_s0 + 0x2cc))(*(undefined4 *)(unaff_s0 + 0x2d0),0);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4660

void txl_frame_evt(int dummy)

{
  int extraout_a0;
  
  _L0();
  while (FUN_00010502(8), extraout_a0 != 0) {
    _DAT_00000050 += -1;
    if ((*(code **)(extraout_a0 + 0x2cc) == (code *)0x0) ||
       ((**(code **)(extraout_a0 + 0x2cc))
                  (*(undefined4 *)(extraout_a0 + 0x2d0),
                   *(undefined4 *)(*(int *)(extraout_a0 + 0x6c) + 0x40)),
       *(char *)(extraout_a0 + 0x2d6) == '\0')) {
      if (*(char *)(extraout_a0 + 0x2d4) == '\0') {
        FUN_00010540(extraout_a0);
      }
    }
    else {
      *(undefined *)(extraout_a0 + 0x2d6) = 0;
    }
  }
  return;
}



void _L0(void)

{
  int unaff_s1;
  int extraout_a0;
  int unaff_s3;
  
  _L0();
  while (FUN_00010502(unaff_s3 + 8), extraout_a0 != 0) {
    *(int *)(unaff_s1 + 0x50) = *(int *)(unaff_s1 + 0x50) + -1;
    if ((*(code **)(extraout_a0 + 0x2cc) == (code *)0x0) ||
       ((**(code **)(extraout_a0 + 0x2cc))
                  (*(undefined4 *)(extraout_a0 + 0x2d0),
                   *(undefined4 *)(*(int *)(extraout_a0 + 0x6c) + 0x40)),
       *(char *)(extraout_a0 + 0x2d6) == '\0')) {
      if (*(char *)(extraout_a0 + 0x2d4) == '\0') {
        FUN_00010540(extraout_a0);
      }
    }
    else {
      *(undefined *)(extraout_a0 + 0x2d6) = 0;
    }
  }
  return;
}



void FUN_00010502(int param_1)

{
  int unaff_s1;
  int extraout_a0;
  int unaff_s3;
  
  while (FUN_00010502(param_1), extraout_a0 != 0) {
    *(int *)(unaff_s1 + 0x50) = *(int *)(unaff_s1 + 0x50) + -1;
    if ((*(code **)(extraout_a0 + 0x2cc) == (code *)0x0) ||
       ((**(code **)(extraout_a0 + 0x2cc))
                  (*(undefined4 *)(extraout_a0 + 0x2d0),
                   *(undefined4 *)(*(int *)(extraout_a0 + 0x6c) + 0x40)),
       *(char *)(extraout_a0 + 0x2d6) == '\0')) {
      if (*(char *)(extraout_a0 + 0x2d4) == '\0') {
        FUN_00010540(extraout_a0);
      }
    }
    else {
      *(undefined *)(extraout_a0 + 0x2d6) = 0;
    }
    param_1 = unaff_s3 + 8;
  }
  return;
}



void FUN_00010540(int param_1)

{
  int unaff_s1;
  int extraout_a0;
  int unaff_s3;
  
  do {
    FUN_00010540(param_1);
    do {
      while( true ) {
        FUN_00010502(unaff_s3 + 8);
        if (extraout_a0 == 0) {
          return;
        }
        *(int *)(unaff_s1 + 0x50) = *(int *)(unaff_s1 + 0x50) + -1;
        if ((*(code **)(extraout_a0 + 0x2cc) == (code *)0x0) ||
           ((**(code **)(extraout_a0 + 0x2cc))
                      (*(undefined4 *)(extraout_a0 + 0x2d0),
                       *(undefined4 *)(*(int *)(extraout_a0 + 0x6c) + 0x40)),
           *(char *)(extraout_a0 + 0x2d6) == '\0')) break;
        *(undefined *)(extraout_a0 + 0x2d6) = 0;
      }
      param_1 = extraout_a0;
    } while (*(char *)(extraout_a0 + 0x2d4) != '\0');
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4491

uint8_t txl_frame_send_null_frame(uint8_t sta_idx,cfm_func_ptr *cfm,void *env)

{
  undefined uVar1;
  int iVar2;
  bool bVar3;
  undefined3 in_register_00002029;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  phy_channel_info phy_info;
  int iVar4;
  
  _L0(_DAT_00000054);
  bVar3 = FUN_0001059e(_DAT_00000054);
  iVar4 = CONCAT31(extraout_var,bVar3);
  if (iVar4 != 0) {
    _LVL93(_DAT_00000054);
    iVar2 = *(int *)(iVar4 + 0x68);
    *(undefined *)(iVar2 + 0x14c) = 0x48;
    *(undefined *)(iVar2 + 0x14d) = 1;
    *(undefined *)(iVar2 + 0x14e) = 0;
    *(undefined *)(iVar2 + 0x14f) = 0;
    FUN_000105ec(_DAT_00000054);
    FUN_000105fe(_DAT_00000054);
    FUN_0001060e(_DAT_00000054);
    uVar5 = (uint)_DAT_00000054;
    _DAT_00000054 = (ushort)((uVar5 + 1) * 0x10000 >> 0x10);
    iVar6 = (uVar5 + 1) * 0x100000;
    *(char *)(iVar2 + 0x162) = (char)((uint)iVar6 >> 0x10);
    *(char *)(iVar2 + 0x163) = (char)((uint)iVar6 >> 0x18);
    *(cfm_func_ptr **)(iVar4 + 0x2cc) = cfm;
    *(void **)(iVar4 + 0x2d0) = env;
    uVar1 = *(undefined *)(CONCAT31(in_register_00002029,sta_idx) * 0x1b0 + 0x1a);
    *(uint8_t *)(iVar4 + 0x30) = sta_idx;
    *(undefined *)(iVar4 + 0x2f) = uVar1;
    _L0();
  }
  return (uint8_t)(iVar4 == 0);
}



bool _L0(ushort uRam00000054)

{
  undefined uVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  int unaff_s2;
  undefined unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  int iVar4;
  
  _L0(uRam00000054);
  bVar3 = FUN_0001059e(uRam00000054);
  iVar4 = CONCAT31(extraout_var,bVar3);
  if (iVar4 != 0) {
    _LVL93(uRam00000054);
    iVar2 = *(int *)(iVar4 + 0x68);
    *(undefined *)(iVar2 + 0x14c) = 0x48;
    *(undefined *)(iVar2 + 0x14d) = 1;
    *(undefined *)(iVar2 + 0x14e) = 0;
    *(undefined *)(iVar2 + 0x14f) = 0;
    FUN_000105ec(uRam00000054);
    FUN_000105fe(uRam00000054);
    FUN_0001060e(uRam00000054);
    uVar5 = (uint)uRam00000054;
    uRam00000054 = (ushort)((uVar5 + 1) * 0x10000 >> 0x10);
    iVar6 = (uVar5 + 1) * 0x100000;
    *(char *)(iVar2 + 0x162) = (char)((uint)iVar6 >> 0x10);
    *(char *)(iVar2 + 0x163) = (char)((uint)iVar6 >> 0x18);
    *(undefined4 *)(iVar4 + 0x2cc) = unaff_s5;
    *(undefined4 *)(iVar4 + 0x2d0) = unaff_s4;
    uVar1 = *(undefined *)(unaff_s2 + 0x1a);
    *(undefined *)(iVar4 + 0x30) = unaff_s3;
    *(undefined *)(iVar4 + 0x2f) = uVar1;
    _L0();
  }
  return iVar4 == 0;
}



bool FUN_0001059e(ushort uRam00000054)

{
  undefined uVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  int unaff_s2;
  undefined unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  int iVar4;
  
  bVar3 = FUN_0001059e(uRam00000054);
  iVar4 = CONCAT31(extraout_var,bVar3);
  if (iVar4 != 0) {
    _LVL93(uRam00000054);
    iVar2 = *(int *)(iVar4 + 0x68);
    *(undefined *)(iVar2 + 0x14c) = 0x48;
    *(undefined *)(iVar2 + 0x14d) = 1;
    *(undefined *)(iVar2 + 0x14e) = 0;
    *(undefined *)(iVar2 + 0x14f) = 0;
    FUN_000105ec(uRam00000054);
    FUN_000105fe(uRam00000054);
    FUN_0001060e(uRam00000054);
    uVar5 = (uint)uRam00000054;
    uRam00000054 = (ushort)((uVar5 + 1) * 0x10000 >> 0x10);
    iVar6 = (uVar5 + 1) * 0x100000;
    *(char *)(iVar2 + 0x162) = (char)((uint)iVar6 >> 0x10);
    *(char *)(iVar2 + 0x163) = (char)((uint)iVar6 >> 0x18);
    *(undefined4 *)(iVar4 + 0x2cc) = unaff_s5;
    *(undefined4 *)(iVar4 + 0x2d0) = unaff_s4;
    uVar1 = *(undefined *)(unaff_s2 + 0x1a);
    *(undefined *)(iVar4 + 0x30) = unaff_s3;
    *(undefined *)(iVar4 + 0x2f) = uVar1;
    _L0();
  }
  return iVar4 == 0;
}



undefined4 _LVL93(ushort uRam00000054)

{
  undefined uVar1;
  int iVar2;
  int unaff_s1;
  uint uVar3;
  int iVar4;
  int unaff_s2;
  undefined unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  
  _LVL93(uRam00000054);
  iVar2 = *(int *)(unaff_s1 + 0x68);
  *(undefined *)(iVar2 + 0x14c) = 0x48;
  *(undefined *)(iVar2 + 0x14d) = 1;
  *(undefined *)(iVar2 + 0x14e) = 0;
  *(undefined *)(iVar2 + 0x14f) = 0;
  FUN_000105ec(uRam00000054);
  FUN_000105fe(uRam00000054);
  FUN_0001060e(uRam00000054);
  uVar3 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar3 + 1) * 0x10000 >> 0x10);
  iVar4 = (uVar3 + 1) * 0x100000;
  *(char *)(iVar2 + 0x162) = (char)((uint)iVar4 >> 0x10);
  *(char *)(iVar2 + 0x163) = (char)((uint)iVar4 >> 0x18);
  *(undefined4 *)(unaff_s1 + 0x2cc) = unaff_s5;
  *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s4;
  uVar1 = *(undefined *)(unaff_s2 + 0x1a);
  *(undefined *)(unaff_s1 + 0x30) = unaff_s3;
  *(undefined *)(unaff_s1 + 0x2f) = uVar1;
  _L0();
  return 0;
}



undefined4 FUN_000105ec(ushort uRam00000054)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  int unaff_s2;
  undefined unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  
  FUN_000105ec(uRam00000054);
  FUN_000105fe(uRam00000054);
  FUN_0001060e(uRam00000054);
  uVar2 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar2 + 1) * 0x10000 >> 0x10);
  iVar3 = (uVar2 + 1) * 0x100000;
  *(char *)(unaff_s0 + 0x162) = (char)((uint)iVar3 >> 0x10);
  *(char *)(unaff_s0 + 0x163) = (char)((uint)iVar3 >> 0x18);
  *(undefined4 *)(unaff_s1 + 0x2cc) = unaff_s5;
  *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s4;
  uVar1 = *(undefined *)(unaff_s2 + 0x1a);
  *(undefined *)(unaff_s1 + 0x30) = unaff_s3;
  *(undefined *)(unaff_s1 + 0x2f) = uVar1;
  _L0();
  return 0;
}



undefined4 FUN_000105fe(ushort uRam00000054)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  int unaff_s2;
  undefined unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  
  FUN_000105fe(uRam00000054);
  FUN_0001060e(uRam00000054);
  uVar2 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar2 + 1) * 0x10000 >> 0x10);
  iVar3 = (uVar2 + 1) * 0x100000;
  *(char *)(unaff_s0 + 0x162) = (char)((uint)iVar3 >> 0x10);
  *(char *)(unaff_s0 + 0x163) = (char)((uint)iVar3 >> 0x18);
  *(undefined4 *)(unaff_s1 + 0x2cc) = unaff_s5;
  *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s4;
  uVar1 = *(undefined *)(unaff_s2 + 0x1a);
  *(undefined *)(unaff_s1 + 0x30) = unaff_s3;
  *(undefined *)(unaff_s1 + 0x2f) = uVar1;
  _L0();
  return 0;
}



undefined4 FUN_0001060e(ushort uRam00000054)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  int unaff_s2;
  undefined unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  
  FUN_0001060e(uRam00000054);
  uVar2 = (uint)uRam00000054;
  uRam00000054 = (ushort)((uVar2 + 1) * 0x10000 >> 0x10);
  iVar3 = (uVar2 + 1) * 0x100000;
  *(char *)(unaff_s0 + 0x162) = (char)((uint)iVar3 >> 0x10);
  *(char *)(unaff_s0 + 0x163) = (char)((uint)iVar3 >> 0x18);
  *(undefined4 *)(unaff_s1 + 0x2cc) = unaff_s5;
  *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s4;
  uVar1 = *(undefined *)(unaff_s2 + 0x1a);
  *(undefined *)(unaff_s1 + 0x30) = unaff_s3;
  *(undefined *)(unaff_s1 + 0x2f) = uVar1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Variable defined which should be unmapped: phy_info
// DWARF DIE: 42e0

uint8_t txl_frame_send_qosnull_frame(uint8_t sta_idx,uint16_t qos,cfm_func_ptr *cfm,void *env)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  uint8_t uVar5;
  undefined3 in_register_00002029;
  int iVar6;
  undefined4 uVar7;
  phy_channel_info phy_info;
  
  bVar1 = *(byte *)(CONCAT31(in_register_00002029,sta_idx) * 0x1b0 + 0x1a);
  _L0();
  iVar6 = FUN_000106c6();
  if (iVar6 == 0) {
    uVar5 = '\x01';
  }
  else {
    _LVL113();
    iVar4 = *(int *)(iVar6 + 0x68);
    *(undefined *)(iVar4 + 0x14c) = 200;
    *(undefined *)(iVar4 + 0x14d) = 0;
    *(undefined *)(iVar4 + 0x14e) = 0;
    *(undefined *)(iVar4 + 0x14f) = 0;
    FUN_00010714();
    FUN_00010728();
    cVar2 = *(char *)((uint)bVar1 * 0x5d8 + 0x56);
    *(undefined *)(iVar4 + 0x14c) = 200;
    if (cVar2 != '\0') {
      *(undefined *)(iVar4 + 0x14d) = 2;
      uVar7 = _L0();
      return (uint8_t)uVar7;
    }
    *(undefined *)(iVar4 + 0x14d) = 1;
    _L0();
    *(char *)(iVar4 + 0x164) = (char)qos;
    *(undefined *)(iVar4 + 0x162) = 0;
    *(undefined *)(iVar4 + 0x163) = 0;
    *(char *)(iVar4 + 0x165) = (char)(qos >> 8);
    *(cfm_func_ptr **)(iVar6 + 0x2cc) = cfm;
    *(void **)(iVar6 + 0x2d0) = env;
    uVar3 = *(undefined *)(CONCAT31(in_register_00002029,sta_idx) * 0x1b0 + 0x1a);
    *(uint8_t *)(iVar6 + 0x30) = sta_idx;
    *(undefined *)(iVar6 + 0x2f) = uVar3;
    _L0();
    uVar5 = '\0';
  }
  return uVar5;
}



undefined4 _L0(void)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  int unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  
  _L0();
  iVar4 = FUN_000106c6();
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  else {
    _LVL113();
    iVar3 = *(int *)(iVar4 + 0x68);
    *(undefined *)(iVar3 + 0x14c) = 200;
    *(undefined *)(iVar3 + 0x14d) = 0;
    *(undefined *)(iVar3 + 0x14e) = 0;
    *(undefined *)(iVar3 + 0x14f) = 0;
    FUN_00010714();
    FUN_00010728();
    cVar1 = *(char *)(unaff_s3 * 0x5d8 + 0x56);
    *(undefined *)(iVar3 + 0x14c) = 200;
    if (cVar1 != '\0') {
      *(undefined *)(iVar3 + 0x14d) = 2;
      uVar5 = _L0();
      return uVar5;
    }
    *(undefined *)(iVar3 + 0x14d) = 1;
    _L0();
    *(char *)(iVar3 + 0x164) = (char)unaff_s5;
    *(undefined *)(iVar3 + 0x162) = 0;
    *(undefined *)(iVar3 + 0x163) = 0;
    *(char *)(iVar3 + 0x165) = (char)((uint)unaff_s5 >> 8);
    *(undefined4 *)(iVar4 + 0x2cc) = unaff_s8;
    *(undefined4 *)(iVar4 + 0x2d0) = unaff_s7;
    uVar2 = *(undefined *)(unaff_s4 + unaff_s6 * 0x1b0 + 0x1a);
    *(char *)(iVar4 + 0x30) = (char)unaff_s6;
    *(undefined *)(iVar4 + 0x2f) = uVar2;
    _L0();
    uVar5 = 0;
  }
  return uVar5;
}



undefined4 FUN_000106c6(void)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  int unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  
  iVar4 = FUN_000106c6();
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  else {
    _LVL113();
    iVar3 = *(int *)(iVar4 + 0x68);
    *(undefined *)(iVar3 + 0x14c) = 200;
    *(undefined *)(iVar3 + 0x14d) = 0;
    *(undefined *)(iVar3 + 0x14e) = 0;
    *(undefined *)(iVar3 + 0x14f) = 0;
    FUN_00010714();
    FUN_00010728();
    cVar1 = *(char *)(unaff_s3 * 0x5d8 + 0x56);
    *(undefined *)(iVar3 + 0x14c) = 200;
    if (cVar1 != '\0') {
      *(undefined *)(iVar3 + 0x14d) = 2;
      uVar5 = _L0();
      return uVar5;
    }
    *(undefined *)(iVar3 + 0x14d) = 1;
    _L0();
    *(char *)(iVar3 + 0x164) = (char)unaff_s5;
    *(undefined *)(iVar3 + 0x162) = 0;
    *(undefined *)(iVar3 + 0x163) = 0;
    *(char *)(iVar3 + 0x165) = (char)((uint)unaff_s5 >> 8);
    *(undefined4 *)(iVar4 + 0x2cc) = unaff_s8;
    *(undefined4 *)(iVar4 + 0x2d0) = unaff_s7;
    uVar2 = *(undefined *)(unaff_s4 + unaff_s6 * 0x1b0 + 0x1a);
    *(char *)(iVar4 + 0x30) = (char)unaff_s6;
    *(undefined *)(iVar4 + 0x2f) = uVar2;
    _L0();
    uVar5 = 0;
  }
  return uVar5;
}



undefined4 _LVL113(void)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int unaff_s1;
  undefined4 uVar4;
  int unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  int unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined unaff_s9;
  
  _LVL113();
  iVar3 = *(int *)(unaff_s1 + 0x68);
  *(undefined *)(iVar3 + 0x14c) = unaff_s9;
  *(undefined *)(iVar3 + 0x14d) = 0;
  *(undefined *)(iVar3 + 0x14e) = 0;
  *(undefined *)(iVar3 + 0x14f) = 0;
  FUN_00010714();
  FUN_00010728();
  cVar1 = *(char *)(unaff_s3 + 0x56);
  *(undefined *)(iVar3 + 0x14c) = unaff_s9;
  if (cVar1 == '\0') {
    *(undefined *)(iVar3 + 0x14d) = 1;
    _L0();
    *(char *)(iVar3 + 0x164) = (char)unaff_s5;
    *(undefined *)(iVar3 + 0x162) = 0;
    *(undefined *)(iVar3 + 0x163) = 0;
    *(char *)(iVar3 + 0x165) = (char)((uint)unaff_s5 >> 8);
    *(undefined4 *)(unaff_s1 + 0x2cc) = unaff_s8;
    *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s7;
    uVar2 = *(undefined *)(unaff_s4 + unaff_s6 * 0x1b0 + 0x1a);
    *(char *)(unaff_s1 + 0x30) = (char)unaff_s6;
    *(undefined *)(unaff_s1 + 0x2f) = uVar2;
    _L0();
    return 0;
  }
  *(undefined *)(iVar3 + 0x14d) = 2;
  uVar4 = _L0();
  return uVar4;
}



undefined4 FUN_00010714(void)

{
  char cVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar3;
  int unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  int unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined unaff_s9;
  
  FUN_00010714();
  FUN_00010728();
  cVar1 = *(char *)(unaff_s3 + 0x56);
  *(undefined *)(unaff_s0 + 0x14c) = unaff_s9;
  if (cVar1 == '\0') {
    *(undefined *)(unaff_s0 + 0x14d) = 1;
    _L0();
    *(char *)(unaff_s0 + 0x164) = (char)unaff_s5;
    *(undefined *)(unaff_s0 + 0x162) = 0;
    *(undefined *)(unaff_s0 + 0x163) = 0;
    *(char *)(unaff_s0 + 0x165) = (char)((uint)unaff_s5 >> 8);
    *(undefined4 *)(unaff_s1 + 0x2cc) = unaff_s8;
    *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s7;
    uVar2 = *(undefined *)(unaff_s4 + unaff_s6 * 0x1b0 + 0x1a);
    *(char *)(unaff_s1 + 0x30) = (char)unaff_s6;
    *(undefined *)(unaff_s1 + 0x2f) = uVar2;
    _L0();
    return 0;
  }
  *(undefined *)(unaff_s0 + 0x14d) = 2;
  uVar3 = _L0();
  return uVar3;
}



undefined4 FUN_00010728(void)

{
  char cVar1;
  undefined uVar2;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar3;
  int unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  int unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined unaff_s9;
  
  FUN_00010728();
  cVar1 = *(char *)(unaff_s3 + 0x56);
  *(undefined *)(unaff_s0 + 0x14c) = unaff_s9;
  if (cVar1 == '\0') {
    *(undefined *)(unaff_s0 + 0x14d) = 1;
    _L0();
    *(char *)(unaff_s0 + 0x164) = (char)unaff_s5;
    *(undefined *)(unaff_s0 + 0x162) = 0;
    *(undefined *)(unaff_s0 + 0x163) = 0;
    *(char *)(unaff_s0 + 0x165) = (char)((uint)unaff_s5 >> 8);
    *(undefined4 *)(unaff_s1 + 0x2cc) = unaff_s8;
    *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s7;
    uVar2 = *(undefined *)(unaff_s4 + unaff_s6 * 0x1b0 + 0x1a);
    *(char *)(unaff_s1 + 0x30) = (char)unaff_s6;
    *(undefined *)(unaff_s1 + 0x2f) = uVar2;
    _L0();
    return 0;
  }
  *(undefined *)(unaff_s0 + 0x14d) = 2;
  uVar3 = _L0();
  return uVar3;
}



undefined4 _L0(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s4;
  undefined4 unaff_s5;
  int unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  
  _L0();
  *(char *)(unaff_s0 + 0x164) = (char)unaff_s5;
  *(undefined *)(unaff_s0 + 0x162) = 0;
  *(undefined *)(unaff_s0 + 0x163) = 0;
  *(char *)(unaff_s0 + 0x165) = (char)((uint)unaff_s5 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = unaff_s8;
  *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s7;
  uVar1 = *(undefined *)(unaff_s4 + unaff_s6 * 0x1b0 + 0x1a);
  *(char *)(unaff_s1 + 0x30) = (char)unaff_s6;
  *(undefined *)(unaff_s1 + 0x2f) = uVar1;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3bc3

uint8_t txl_frame_send_eapol_frame
                  (uint8_t sta_idx,cfm_func_ptr *cfm,void *cfm_env,uint8_t *pBuf,uint32_t pBuf_len)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined3 in_register_00002029;
  int iVar7;
  ushort uVar8;
  undefined2 *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 *puVar13;
  int iVar14;
  ushort *puVar15;
  uint uVar16;
  ushort *unaff_s8;
  uint uVar17;
  phy_channel_info phy_info;
  mic_calc mic;
  
  iVar5 = CONCAT31(in_register_00002029,sta_idx) * 0x1b0;
  bVar1 = *(byte *)(iVar5 + 0x1a);
  uVar17 = (uint)bVar1;
  _L0(_DAT_00000054);
  iVar7 = FUN_00010810(_DAT_00000054);
  if (iVar7 == 0) {
    return '\0';
  }
  *(byte *)(iVar7 + 0x2f) = bVar1;
  *(uint8_t *)(iVar7 + 0x30) = sta_idx;
  *(undefined *)(iVar7 + 0x2e) = 0;
  sVar4 = *(short *)(iVar5 + 0xf8);
  *(ushort *)(iVar5 + 0xf8) = sVar4 + 1U & 0xfff;
  *(undefined2 *)(iVar7 + 0x20) = 0x8e88;
  puVar13 = (undefined2 *)(iVar5 + 0x1e);
  *(short *)(iVar7 + 0x2a) = sVar4;
  iVar14 = uVar17 * 0x5d8;
  *(undefined2 *)(iVar7 + 0x14) = *puVar13;
  *(undefined2 *)(iVar7 + 0x16) = *(undefined2 *)(iVar5 + 0x20);
  puVar9 = (undefined2 *)(iVar14 + 0x50);
  *(undefined2 *)(iVar7 + 0x18) = *(undefined2 *)(iVar5 + 0x22);
  *(undefined2 *)(iVar7 + 0x1a) = *puVar9;
  *(undefined2 *)(iVar7 + 0x1c) = *(undefined2 *)(iVar14 + 0x52);
  *(undefined2 *)(iVar7 + 0x1e) = *(undefined2 *)(iVar14 + 0x54);
  _LVL142(_DAT_00000054);
  iVar6 = *(int *)(iVar7 + 0x68);
  if ((*(uint *)(iVar14 + 0x3e0) & 1) == 0) {
    *(undefined *)(iVar6 + 0x14c) = 8;
    uVar16 = (uint)_DAT_00000054;
    *(undefined *)(iVar6 + 0x14d) = 0;
    puVar15 = (ushort *)(iVar6 + 0x164);
    _DAT_00000054 = (ushort)((uVar16 + 1) * 0x10000 >> 0x10);
    iVar11 = (uVar16 + 1) * 0x100000;
    *(char *)(iVar6 + 0x162) = (char)((uint)iVar11 >> 0x10);
    *(char *)(iVar6 + 0x163) = (char)((uint)iVar11 >> 0x18);
    uVar16 = pBuf_len + 0x20;
  }
  else {
    *(undefined *)(iVar6 + 0x14c) = 0x88;
    *(undefined *)(iVar6 + 0x14d) = 0;
    puVar15 = (ushort *)(iVar6 + 0x166);
    uVar16 = pBuf_len + 0x22;
    iVar11 = (uint)*(ushort *)(iVar7 + 0x2a) << 0x14;
    *(char *)(iVar6 + 0x162) = (char)((uint)iVar11 >> 0x10);
    *(char *)(iVar6 + 0x163) = (char)((uint)iVar11 >> 0x18);
    uVar2 = *(undefined *)(iVar7 + 0x2e);
    *(undefined *)(iVar6 + 0x165) = 0;
    *(undefined *)(iVar6 + 0x164) = uVar2;
  }
  if (0x100 < uVar16) {
    FUN_0001090a();
  }
  uVar8 = *(ushort *)(iVar6 + 0x14c) | 0x100;
  if (*(char *)(uVar17 * 0x5d8 + 0x56) == '\x02') {
    uVar8 = *(ushort *)(iVar6 + 0x14c) | 0x200;
  }
  *(char *)(iVar6 + 0x14c) = (char)uVar8;
  *(char *)(iVar6 + 0x14d) = (char)(uVar8 >> 8);
  *(undefined *)(iVar6 + 0x14e) = 0;
  *(undefined *)(iVar6 + 0x14f) = 0;
  *(undefined2 *)(iVar6 + 0x150) = *puVar13;
  *(undefined2 *)(iVar6 + 0x152) = *(undefined2 *)(iVar5 + 0x20);
  *(undefined2 *)(iVar6 + 0x154) = *(undefined2 *)(iVar5 + 0x22);
  *(undefined2 *)(iVar6 + 0x156) = *puVar9;
  *(undefined2 *)(iVar6 + 0x158) = *(undefined2 *)(iVar14 + 0x52);
  *(undefined2 *)(iVar6 + 0x15a) = *(undefined2 *)(iVar14 + 0x54);
  if (*(char *)(uVar17 * 0x5d8 + 0x56) == '\x02') {
    *(undefined2 *)(iVar6 + 0x15c) = *puVar9;
    *(undefined2 *)(iVar6 + 0x15e) = *(undefined2 *)(iVar14 + 0x52);
    uVar12 = *(undefined2 *)(iVar14 + 0x54);
  }
  else {
    *(undefined2 *)(iVar6 + 0x15c) = *puVar13;
    *(undefined2 *)(iVar6 + 0x15e) = *(undefined2 *)(iVar5 + 0x20);
    uVar12 = *(undefined2 *)(iVar5 + 0x22);
  }
  *(undefined2 *)(iVar6 + 0x160) = uVar12;
  iVar5 = 0;
  if ((*(char *)((uint)*(byte *)(iVar7 + 0x2f) * 0x5d8 + 0x56) != '\0') ||
     (iVar14 = (uint)*(byte *)(iVar7 + 0x30) * 0x1b0, *(char *)(iVar14 + 0x31) != '\x02')) goto _L0;
  iVar5 = **(int **)(iVar14 + 0xac);
  cVar3 = *(char *)(iVar5 + 0x60);
  if (cVar3 == '\x01') {
    uVar17 = *(uint *)(iVar5 + 0x48) + 1;
    *(uint *)(iVar5 + 0x4c) = (uint)(uVar17 < *(uint *)(iVar5 + 0x48)) + *(int *)(iVar5 + 0x4c);
    *(uint *)(iVar5 + 0x48) = uVar17;
    FUN_00010c24();
    iVar14 = 0xc;
_L0:
    iVar5 = 8;
  }
  else {
    if (cVar3 == '\0') {
_L0:
      uVar17 = *(uint *)(iVar5 + 0x48) + 1;
      *(uint *)(iVar5 + 0x4c) = (uint)(uVar17 < *(uint *)(iVar5 + 0x48)) + *(int *)(iVar5 + 0x4c);
      *(uint *)(iVar5 + 0x48) = uVar17;
      FUN_00010a10();
      iVar14 = 4;
      iVar5 = 4;
    }
    else {
      if (cVar3 == '\x02') {
        uVar17 = *(uint *)(iVar5 + 0x48) + 1;
        *(uint *)(iVar5 + 0x4c) = (uint)(uVar17 < *(uint *)(iVar5 + 0x48)) + *(int *)(iVar5 + 0x4c);
        *(uint *)(iVar5 + 0x48) = uVar17;
        FUN_00010c4e();
        iVar14 = 8;
        goto _L0;
      }
      if (cVar3 == '\x03') goto _L0;
      iVar14 = 0;
      iVar5 = 0;
    }
  }
  iVar5 += iVar14;
  if (iVar5 == 0) goto _L0;
  uVar8 = *(ushort *)(iVar6 + 0x14c);
  uVar16 += iVar5;
  *(char *)(iVar6 + 0x14c) = (char)uVar8;
  *(byte *)(iVar6 + 0x14d) = (byte)((uint)uVar8 >> 8) | 0x40;
  uVar17 = (uint)*(byte *)((uint)*(byte *)(iVar7 + 0x2f) * 0x5d8 + 0x56);
  if (uVar17 == 0) {
    iVar6 = (uint)*(byte *)(iVar7 + 0x30) * 0x1b0;
    if (*(char *)(iVar6 + 0x31) == '\x02') {
      iVar14 = **(int **)(iVar6 + 0xac);
      iVar6 = *(int *)(*(int *)(iVar7 + 0x6c) + 0x28);
      cVar3 = *(char *)(iVar14 + 0x60);
      if (cVar3 == '\x01') {
        *puVar15 = *(ushort *)(iVar7 + 0x22) & 0x7f00 | 0x2000 | *(ushort *)(iVar7 + 0x22) >> 8;
        uVar8 = (ushort)*(byte *)(iVar7 + 0x22) | (ushort)*(byte *)(iVar14 + 0x61) << 0xe;
_L0:
        puVar15[1] = uVar8 | 0x2000;
        uVar17 = 8;
        puVar15[2] = *(ushort *)(iVar7 + 0x24);
        puVar15[3] = *(ushort *)(iVar7 + 0x26);
      }
      else {
        if (cVar3 == '\0') {
_L0:
          *puVar15 = *(ushort *)(iVar7 + 0x22);
          puVar15[1] = (ushort)*(byte *)(iVar14 + 0x61) << 0xe | *(ushort *)(iVar7 + 0x24);
          uVar17 = 4;
        }
        else {
          if (cVar3 == '\x02') {
            *puVar15 = *(ushort *)(iVar7 + 0x22);
            uVar8 = (ushort)*(byte *)(iVar14 + 0x61) << 0xe;
            goto _L0;
          }
          if (cVar3 == '\x03') goto _L0;
        }
      }
      *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) & 0xffc00 | (uint)*(byte *)(iVar14 + 0x62);
    }
  }
  else {
    uVar17 = 0;
  }
  puVar15 = (ushort *)((int)puVar15 + uVar17);
  unaff_s8 = puVar15;
_L0:
  *puVar15 = 0xaaaa;
  puVar15[1] = 3;
  puVar15[2] = 0;
  puVar15[3] = *(ushort *)(iVar7 + 0x20);
  FUN_00010ae2();
  if ((iVar5 != 0) &&
     (*(char *)(**(int **)((uint)*(byte *)(iVar7 + 0x30) * 0x1b0 + 0xac) + 0x60) == '\x01')) {
    FUN_00010b1e();
    FUN_00010b2e();
    FUN_00010b38();
    iVar5 = 0;
    do {
      puVar10 = (undefined *)((int)&phy_info.info2 + iVar5);
      iVar6 = iVar5 + pBuf_len + 8;
      iVar5 += 1;
      *(undefined *)((int)unaff_s8 + iVar6) = *puVar10;
    } while (iVar5 != 8);
  }
  iVar5 = *(int *)(iVar7 + 0x6c);
  *(uint *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x14) + -1 + uVar16;
  *(uint *)(iVar5 + 0x1c) = uVar16 + 4;
  if (cfm != (cfm_func_ptr *)0x0) {
    *(cfm_func_ptr **)(iVar7 + 0x2cc) = cfm;
    *(void **)(iVar7 + 0x2d0) = cfm_env;
  }
  FUN_00010b90();
  return '\0';
}



undefined4 _L0(ushort uRam00000054)

{
  undefined uVar1;
  char cVar2;
  short sVar3;
  int unaff_s1;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined2 *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar11;
  int iVar12;
  ushort *puVar13;
  int unaff_s3;
  int unaff_s4;
  undefined unaff_s5;
  uint uVar14;
  int unaff_s6;
  int unaff_s7;
  ushort *unaff_s8;
  undefined2 *puVar15;
  int unaff_s11;
  undefined4 in_stack_00000008;
  
  _L0(uRam00000054);
  iVar5 = FUN_00010810(uRam00000054);
  if (iVar5 == 0) {
    return 0;
  }
  *(char *)(iVar5 + 0x2f) = (char)unaff_s11;
  *(undefined *)(iVar5 + 0x30) = unaff_s5;
  *(undefined *)(iVar5 + 0x2e) = 0;
  sVar3 = *(short *)(unaff_s4 + 0xf8);
  *(ushort *)(unaff_s4 + 0xf8) = sVar3 + 1U & 0xfff;
  *(undefined2 *)(iVar5 + 0x20) = 0x8e88;
  *(short *)(iVar5 + 0x2a) = sVar3;
  puVar15 = (undefined2 *)(unaff_s1 + 0x1e + unaff_s3);
  iVar12 = unaff_s11 * 0x5d8;
  *(undefined2 *)(iVar5 + 0x14) = *puVar15;
  *(undefined2 *)(iVar5 + 0x16) = puVar15[1];
  puVar7 = (undefined2 *)(iVar12 + 0x50);
  *(undefined2 *)(iVar5 + 0x18) = puVar15[2];
  *(undefined2 *)(iVar5 + 0x1a) = *puVar7;
  *(undefined2 *)(iVar5 + 0x1c) = *(undefined2 *)(iVar12 + 0x52);
  *(undefined2 *)(iVar5 + 0x1e) = *(undefined2 *)(iVar12 + 0x54);
  _LVL142(uRam00000054);
  iVar4 = *(int *)(iVar5 + 0x68);
  if ((*(uint *)(iVar12 + 0x3e0) & 1) == 0) {
    *(undefined *)(iVar4 + 0x14c) = 8;
    uVar14 = (uint)uRam00000054;
    *(undefined *)(iVar4 + 0x14d) = 0;
    puVar13 = (ushort *)(iVar4 + 0x164);
    uRam00000054 = (ushort)((uVar14 + 1) * 0x10000 >> 0x10);
    iVar9 = (uVar14 + 1) * 0x100000;
    *(char *)(iVar4 + 0x162) = (char)((uint)iVar9 >> 0x10);
    *(char *)(iVar4 + 0x163) = (char)((uint)iVar9 >> 0x18);
    uVar14 = unaff_s6 + 0x20;
  }
  else {
    *(undefined *)(iVar4 + 0x14c) = 0x88;
    *(undefined *)(iVar4 + 0x14d) = 0;
    puVar13 = (ushort *)(iVar4 + 0x166);
    uVar14 = unaff_s6 + 0x22;
    iVar9 = (uint)*(ushort *)(iVar5 + 0x2a) << 0x14;
    *(char *)(iVar4 + 0x162) = (char)((uint)iVar9 >> 0x10);
    *(char *)(iVar4 + 0x163) = (char)((uint)iVar9 >> 0x18);
    uVar1 = *(undefined *)(iVar5 + 0x2e);
    *(undefined *)(iVar4 + 0x165) = 0;
    *(undefined *)(iVar4 + 0x164) = uVar1;
  }
  if (0x100 < uVar14) {
    FUN_0001090a();
  }
  uVar6 = *(ushort *)(iVar4 + 0x14c) | 0x100;
  if (*(char *)(unaff_s11 * 0x5d8 + 0x56) == '\x02') {
    uVar6 = *(ushort *)(iVar4 + 0x14c) | 0x200;
  }
  *(char *)(iVar4 + 0x14c) = (char)uVar6;
  *(char *)(iVar4 + 0x14d) = (char)(uVar6 >> 8);
  *(undefined *)(iVar4 + 0x14e) = 0;
  *(undefined *)(iVar4 + 0x14f) = 0;
  *(undefined2 *)(iVar4 + 0x150) = *puVar15;
  *(undefined2 *)(iVar4 + 0x152) = puVar15[1];
  *(undefined2 *)(iVar4 + 0x154) = puVar15[2];
  *(undefined2 *)(iVar4 + 0x156) = *puVar7;
  *(undefined2 *)(iVar4 + 0x158) = *(undefined2 *)(iVar12 + 0x52);
  *(undefined2 *)(iVar4 + 0x15a) = *(undefined2 *)(iVar12 + 0x54);
  if (*(char *)(unaff_s11 * 0x5d8 + 0x56) == '\x02') {
    *(undefined2 *)(iVar4 + 0x15c) = *puVar7;
    *(undefined2 *)(iVar4 + 0x15e) = *(undefined2 *)(iVar12 + 0x52);
    uVar11 = *(undefined2 *)(iVar12 + 0x54);
  }
  else {
    *(undefined2 *)(iVar4 + 0x15c) = *puVar15;
    *(undefined2 *)(iVar4 + 0x15e) = puVar15[1];
    uVar11 = puVar15[2];
  }
  *(undefined2 *)(iVar4 + 0x160) = uVar11;
  iVar12 = 0;
  if ((*(char *)((uint)*(byte *)(iVar5 + 0x2f) * 0x5d8 + 0x56) != '\0') ||
     (iVar9 = (uint)*(byte *)(iVar5 + 0x30) * 0x1b0 + unaff_s3, *(char *)(iVar9 + 0x31) != '\x02'))
  goto _L0;
  iVar12 = **(int **)(iVar9 + 0xac);
  cVar2 = *(char *)(iVar12 + 0x60);
  if (cVar2 == '\x01') {
    uVar10 = *(uint *)(iVar12 + 0x48) + 1;
    *(uint *)(iVar12 + 0x4c) = (uint)(uVar10 < *(uint *)(iVar12 + 0x48)) + *(int *)(iVar12 + 0x4c);
    *(uint *)(iVar12 + 0x48) = uVar10;
    FUN_00010c24();
    iVar9 = 0xc;
_L0:
    iVar12 = 8;
  }
  else {
    if (cVar2 == '\0') {
_L0:
      uVar10 = *(uint *)(iVar12 + 0x48) + 1;
      *(uint *)(iVar12 + 0x4c) = (uint)(uVar10 < *(uint *)(iVar12 + 0x48)) + *(int *)(iVar12 + 0x4c)
      ;
      *(uint *)(iVar12 + 0x48) = uVar10;
      FUN_00010a10();
      iVar9 = 4;
      iVar12 = 4;
    }
    else {
      if (cVar2 == '\x02') {
        uVar10 = *(uint *)(iVar12 + 0x48) + 1;
        *(uint *)(iVar12 + 0x4c) =
             (uint)(uVar10 < *(uint *)(iVar12 + 0x48)) + *(int *)(iVar12 + 0x4c);
        *(uint *)(iVar12 + 0x48) = uVar10;
        FUN_00010c4e();
        iVar9 = 8;
        goto _L0;
      }
      if (cVar2 == '\x03') goto _L0;
      iVar9 = 0;
      iVar12 = 0;
    }
  }
  iVar12 += iVar9;
  if (iVar12 == 0) goto _L0;
  uVar6 = *(ushort *)(iVar4 + 0x14c);
  uVar14 += iVar12;
  *(char *)(iVar4 + 0x14c) = (char)uVar6;
  *(byte *)(iVar4 + 0x14d) = (byte)((uint)uVar6 >> 8) | 0x40;
  uVar10 = (uint)*(byte *)((uint)*(byte *)(iVar5 + 0x2f) * 0x5d8 + 0x56);
  if (uVar10 == 0) {
    iVar4 = (uint)*(byte *)(iVar5 + 0x30) * 0x1b0 + unaff_s3;
    if (*(char *)(iVar4 + 0x31) == '\x02') {
      iVar9 = **(int **)(iVar4 + 0xac);
      iVar4 = *(int *)(*(int *)(iVar5 + 0x6c) + 0x28);
      cVar2 = *(char *)(iVar9 + 0x60);
      if (cVar2 == '\x01') {
        *puVar13 = *(ushort *)(iVar5 + 0x22) & 0x7f00 | 0x2000 | *(ushort *)(iVar5 + 0x22) >> 8;
        uVar6 = (ushort)*(byte *)(iVar5 + 0x22) | (ushort)*(byte *)(iVar9 + 0x61) << 0xe;
_L0:
        puVar13[1] = uVar6 | 0x2000;
        uVar10 = 8;
        puVar13[2] = *(ushort *)(iVar5 + 0x24);
        puVar13[3] = *(ushort *)(iVar5 + 0x26);
      }
      else {
        if (cVar2 == '\0') {
_L0:
          *puVar13 = *(ushort *)(iVar5 + 0x22);
          puVar13[1] = (ushort)*(byte *)(iVar9 + 0x61) << 0xe | *(ushort *)(iVar5 + 0x24);
          uVar10 = 4;
        }
        else {
          if (cVar2 == '\x02') {
            *puVar13 = *(ushort *)(iVar5 + 0x22);
            uVar6 = (ushort)*(byte *)(iVar9 + 0x61) << 0xe;
            goto _L0;
          }
          if (cVar2 == '\x03') goto _L0;
        }
      }
      *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xffc00 | (uint)*(byte *)(iVar9 + 0x62);
    }
  }
  else {
    uVar10 = 0;
  }
  puVar13 = (ushort *)((int)puVar13 + uVar10);
  unaff_s8 = puVar13;
_L0:
  *puVar13 = 0xaaaa;
  puVar13[1] = 3;
  puVar13[2] = 0;
  puVar13[3] = *(ushort *)(iVar5 + 0x20);
  FUN_00010ae2();
  if ((iVar12 != 0) &&
     (*(char *)(**(int **)(unaff_s3 + (uint)*(byte *)(iVar5 + 0x30) * 0x1b0 + 0xac) + 0x60) ==
      '\x01')) {
    FUN_00010b1e();
    FUN_00010b2e();
    FUN_00010b38();
    iVar4 = 0;
    do {
      puVar8 = &stack0x00000020 + iVar4;
      iVar12 = iVar4 + unaff_s6 + 8;
      iVar4 += 1;
      *(undefined *)((int)unaff_s8 + iVar12) = *puVar8;
    } while (iVar4 != 8);
  }
  iVar4 = *(int *)(iVar5 + 0x6c);
  *(uint *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x14) + -1 + uVar14;
  *(uint *)(iVar4 + 0x1c) = uVar14 + 4;
  if (unaff_s7 != 0) {
    *(int *)(iVar5 + 0x2cc) = unaff_s7;
    *(undefined4 *)(iVar5 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



undefined4 FUN_00010810(ushort uRam00000054)

{
  undefined uVar1;
  char cVar2;
  short sVar3;
  int unaff_s1;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined2 *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar11;
  int iVar12;
  ushort *puVar13;
  int unaff_s3;
  int unaff_s4;
  undefined unaff_s5;
  uint uVar14;
  int unaff_s6;
  int unaff_s7;
  ushort *unaff_s8;
  undefined2 *puVar15;
  int unaff_s11;
  undefined4 in_stack_00000008;
  
  iVar5 = FUN_00010810(uRam00000054);
  if (iVar5 == 0) {
    return 0;
  }
  *(char *)(iVar5 + 0x2f) = (char)unaff_s11;
  *(undefined *)(iVar5 + 0x30) = unaff_s5;
  *(undefined *)(iVar5 + 0x2e) = 0;
  sVar3 = *(short *)(unaff_s4 + 0xf8);
  *(ushort *)(unaff_s4 + 0xf8) = sVar3 + 1U & 0xfff;
  *(undefined2 *)(iVar5 + 0x20) = 0x8e88;
  *(short *)(iVar5 + 0x2a) = sVar3;
  puVar15 = (undefined2 *)(unaff_s1 + 0x1e + unaff_s3);
  iVar12 = unaff_s11 * 0x5d8;
  *(undefined2 *)(iVar5 + 0x14) = *puVar15;
  *(undefined2 *)(iVar5 + 0x16) = puVar15[1];
  puVar7 = (undefined2 *)(iVar12 + 0x50);
  *(undefined2 *)(iVar5 + 0x18) = puVar15[2];
  *(undefined2 *)(iVar5 + 0x1a) = *puVar7;
  *(undefined2 *)(iVar5 + 0x1c) = *(undefined2 *)(iVar12 + 0x52);
  *(undefined2 *)(iVar5 + 0x1e) = *(undefined2 *)(iVar12 + 0x54);
  _LVL142(uRam00000054);
  iVar4 = *(int *)(iVar5 + 0x68);
  if ((*(uint *)(iVar12 + 0x3e0) & 1) == 0) {
    *(undefined *)(iVar4 + 0x14c) = 8;
    uVar14 = (uint)uRam00000054;
    *(undefined *)(iVar4 + 0x14d) = 0;
    puVar13 = (ushort *)(iVar4 + 0x164);
    uRam00000054 = (ushort)((uVar14 + 1) * 0x10000 >> 0x10);
    iVar9 = (uVar14 + 1) * 0x100000;
    *(char *)(iVar4 + 0x162) = (char)((uint)iVar9 >> 0x10);
    *(char *)(iVar4 + 0x163) = (char)((uint)iVar9 >> 0x18);
    uVar14 = unaff_s6 + 0x20;
  }
  else {
    *(undefined *)(iVar4 + 0x14c) = 0x88;
    *(undefined *)(iVar4 + 0x14d) = 0;
    puVar13 = (ushort *)(iVar4 + 0x166);
    uVar14 = unaff_s6 + 0x22;
    iVar9 = (uint)*(ushort *)(iVar5 + 0x2a) << 0x14;
    *(char *)(iVar4 + 0x162) = (char)((uint)iVar9 >> 0x10);
    *(char *)(iVar4 + 0x163) = (char)((uint)iVar9 >> 0x18);
    uVar1 = *(undefined *)(iVar5 + 0x2e);
    *(undefined *)(iVar4 + 0x165) = 0;
    *(undefined *)(iVar4 + 0x164) = uVar1;
  }
  if (0x100 < uVar14) {
    FUN_0001090a();
  }
  uVar6 = *(ushort *)(iVar4 + 0x14c) | 0x100;
  if (*(char *)(unaff_s11 * 0x5d8 + 0x56) == '\x02') {
    uVar6 = *(ushort *)(iVar4 + 0x14c) | 0x200;
  }
  *(char *)(iVar4 + 0x14c) = (char)uVar6;
  *(char *)(iVar4 + 0x14d) = (char)(uVar6 >> 8);
  *(undefined *)(iVar4 + 0x14e) = 0;
  *(undefined *)(iVar4 + 0x14f) = 0;
  *(undefined2 *)(iVar4 + 0x150) = *puVar15;
  *(undefined2 *)(iVar4 + 0x152) = puVar15[1];
  *(undefined2 *)(iVar4 + 0x154) = puVar15[2];
  *(undefined2 *)(iVar4 + 0x156) = *puVar7;
  *(undefined2 *)(iVar4 + 0x158) = *(undefined2 *)(iVar12 + 0x52);
  *(undefined2 *)(iVar4 + 0x15a) = *(undefined2 *)(iVar12 + 0x54);
  if (*(char *)(unaff_s11 * 0x5d8 + 0x56) == '\x02') {
    *(undefined2 *)(iVar4 + 0x15c) = *puVar7;
    *(undefined2 *)(iVar4 + 0x15e) = *(undefined2 *)(iVar12 + 0x52);
    uVar11 = *(undefined2 *)(iVar12 + 0x54);
  }
  else {
    *(undefined2 *)(iVar4 + 0x15c) = *puVar15;
    *(undefined2 *)(iVar4 + 0x15e) = puVar15[1];
    uVar11 = puVar15[2];
  }
  *(undefined2 *)(iVar4 + 0x160) = uVar11;
  iVar12 = 0;
  if ((*(char *)((uint)*(byte *)(iVar5 + 0x2f) * 0x5d8 + 0x56) != '\0') ||
     (iVar9 = (uint)*(byte *)(iVar5 + 0x30) * 0x1b0 + unaff_s3, *(char *)(iVar9 + 0x31) != '\x02'))
  goto _L0;
  iVar12 = **(int **)(iVar9 + 0xac);
  cVar2 = *(char *)(iVar12 + 0x60);
  if (cVar2 == '\x01') {
    uVar10 = *(uint *)(iVar12 + 0x48) + 1;
    *(uint *)(iVar12 + 0x4c) = (uint)(uVar10 < *(uint *)(iVar12 + 0x48)) + *(int *)(iVar12 + 0x4c);
    *(uint *)(iVar12 + 0x48) = uVar10;
    FUN_00010c24();
    iVar9 = 0xc;
_L0:
    iVar12 = 8;
  }
  else {
    if (cVar2 == '\0') {
_L0:
      uVar10 = *(uint *)(iVar12 + 0x48) + 1;
      *(uint *)(iVar12 + 0x4c) = (uint)(uVar10 < *(uint *)(iVar12 + 0x48)) + *(int *)(iVar12 + 0x4c)
      ;
      *(uint *)(iVar12 + 0x48) = uVar10;
      FUN_00010a10();
      iVar9 = 4;
      iVar12 = 4;
    }
    else {
      if (cVar2 == '\x02') {
        uVar10 = *(uint *)(iVar12 + 0x48) + 1;
        *(uint *)(iVar12 + 0x4c) =
             (uint)(uVar10 < *(uint *)(iVar12 + 0x48)) + *(int *)(iVar12 + 0x4c);
        *(uint *)(iVar12 + 0x48) = uVar10;
        FUN_00010c4e();
        iVar9 = 8;
        goto _L0;
      }
      if (cVar2 == '\x03') goto _L0;
      iVar9 = 0;
      iVar12 = 0;
    }
  }
  iVar12 += iVar9;
  if (iVar12 == 0) goto _L0;
  uVar6 = *(ushort *)(iVar4 + 0x14c);
  uVar14 += iVar12;
  *(char *)(iVar4 + 0x14c) = (char)uVar6;
  *(byte *)(iVar4 + 0x14d) = (byte)((uint)uVar6 >> 8) | 0x40;
  uVar10 = (uint)*(byte *)((uint)*(byte *)(iVar5 + 0x2f) * 0x5d8 + 0x56);
  if (uVar10 == 0) {
    iVar4 = (uint)*(byte *)(iVar5 + 0x30) * 0x1b0 + unaff_s3;
    if (*(char *)(iVar4 + 0x31) == '\x02') {
      iVar9 = **(int **)(iVar4 + 0xac);
      iVar4 = *(int *)(*(int *)(iVar5 + 0x6c) + 0x28);
      cVar2 = *(char *)(iVar9 + 0x60);
      if (cVar2 == '\x01') {
        *puVar13 = *(ushort *)(iVar5 + 0x22) & 0x7f00 | 0x2000 | *(ushort *)(iVar5 + 0x22) >> 8;
        uVar6 = (ushort)*(byte *)(iVar5 + 0x22) | (ushort)*(byte *)(iVar9 + 0x61) << 0xe;
_L0:
        puVar13[1] = uVar6 | 0x2000;
        uVar10 = 8;
        puVar13[2] = *(ushort *)(iVar5 + 0x24);
        puVar13[3] = *(ushort *)(iVar5 + 0x26);
      }
      else {
        if (cVar2 == '\0') {
_L0:
          *puVar13 = *(ushort *)(iVar5 + 0x22);
          puVar13[1] = (ushort)*(byte *)(iVar9 + 0x61) << 0xe | *(ushort *)(iVar5 + 0x24);
          uVar10 = 4;
        }
        else {
          if (cVar2 == '\x02') {
            *puVar13 = *(ushort *)(iVar5 + 0x22);
            uVar6 = (ushort)*(byte *)(iVar9 + 0x61) << 0xe;
            goto _L0;
          }
          if (cVar2 == '\x03') goto _L0;
        }
      }
      *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xffc00 | (uint)*(byte *)(iVar9 + 0x62);
    }
  }
  else {
    uVar10 = 0;
  }
  puVar13 = (ushort *)((int)puVar13 + uVar10);
  unaff_s8 = puVar13;
_L0:
  *puVar13 = 0xaaaa;
  puVar13[1] = 3;
  puVar13[2] = 0;
  puVar13[3] = *(ushort *)(iVar5 + 0x20);
  FUN_00010ae2();
  if ((iVar12 != 0) &&
     (*(char *)(**(int **)(unaff_s3 + (uint)*(byte *)(iVar5 + 0x30) * 0x1b0 + 0xac) + 0x60) ==
      '\x01')) {
    FUN_00010b1e();
    FUN_00010b2e();
    FUN_00010b38();
    iVar4 = 0;
    do {
      puVar8 = &stack0x00000020 + iVar4;
      iVar12 = iVar4 + unaff_s6 + 8;
      iVar4 += 1;
      *(undefined *)((int)unaff_s8 + iVar12) = *puVar8;
    } while (iVar4 != 8);
  }
  iVar4 = *(int *)(iVar5 + 0x6c);
  *(uint *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x14) + -1 + uVar14;
  *(uint *)(iVar4 + 0x1c) = uVar14 + 4;
  if (unaff_s7 != 0) {
    *(int *)(iVar5 + 0x2cc) = unaff_s7;
    *(undefined4 *)(iVar5 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



undefined4 _LVL142(ushort uRam00000054)

{
  undefined uVar1;
  char cVar2;
  int unaff_s0;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined2 uVar8;
  int iVar9;
  int unaff_s2;
  ushort *puVar10;
  int unaff_s3;
  int unaff_s4;
  uint uVar11;
  int unaff_s6;
  int unaff_s7;
  ushort *unaff_s8;
  undefined2 *unaff_s9;
  undefined2 *unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000008;
  
  _LVL142(uRam00000054);
  iVar3 = *(int *)(unaff_s0 + 0x68);
  if ((*(uint *)(unaff_s2 + 0x3e0) & 1) == 0) {
    *(undefined *)(iVar3 + 0x14c) = 8;
    uVar11 = (uint)uRam00000054;
    *(undefined *)(iVar3 + 0x14d) = 0;
    puVar10 = (ushort *)(iVar3 + 0x164);
    uRam00000054 = (ushort)((uVar11 + 1) * 0x10000 >> 0x10);
    iVar6 = (uVar11 + 1) * 0x100000;
    *(char *)(iVar3 + 0x162) = (char)((uint)iVar6 >> 0x10);
    *(char *)(iVar3 + 0x163) = (char)((uint)iVar6 >> 0x18);
    uVar11 = unaff_s6 + 0x20;
  }
  else {
    *(undefined *)(iVar3 + 0x14c) = 0x88;
    *(undefined *)(iVar3 + 0x14d) = 0;
    puVar10 = (ushort *)(iVar3 + 0x166);
    uVar11 = unaff_s6 + 0x22;
    iVar6 = (uint)*(ushort *)(unaff_s0 + 0x2a) << 0x14;
    *(char *)(iVar3 + 0x162) = (char)((uint)iVar6 >> 0x10);
    *(char *)(iVar3 + 0x163) = (char)((uint)iVar6 >> 0x18);
    uVar1 = *(undefined *)(unaff_s0 + 0x2e);
    *(undefined *)(iVar3 + 0x165) = 0;
    *(undefined *)(iVar3 + 0x164) = uVar1;
  }
  if (0x100 < uVar11) {
    FUN_0001090a();
  }
  uVar4 = *(ushort *)(iVar3 + 0x14c) | 0x100;
  if (*(char *)(unaff_s11 * 0x5d8 + unaff_s4 + 0x56) == '\x02') {
    uVar4 = *(ushort *)(iVar3 + 0x14c) | 0x200;
  }
  *(char *)(iVar3 + 0x14c) = (char)uVar4;
  *(char *)(iVar3 + 0x14d) = (char)(uVar4 >> 8);
  *(undefined *)(iVar3 + 0x14e) = 0;
  *(undefined *)(iVar3 + 0x14f) = 0;
  *(undefined2 *)(iVar3 + 0x150) = *unaff_s9;
  *(undefined2 *)(iVar3 + 0x152) = unaff_s9[1];
  *(undefined2 *)(iVar3 + 0x154) = unaff_s9[2];
  *(undefined2 *)(iVar3 + 0x156) = *unaff_s10;
  *(undefined2 *)(iVar3 + 0x158) = unaff_s10[1];
  *(undefined2 *)(iVar3 + 0x15a) = unaff_s10[2];
  if (*(char *)(unaff_s11 * 0x5d8 + unaff_s4 + 0x56) == '\x02') {
    *(undefined2 *)(iVar3 + 0x15c) = *unaff_s10;
    *(undefined2 *)(iVar3 + 0x15e) = unaff_s10[1];
    uVar8 = unaff_s10[2];
  }
  else {
    *(undefined2 *)(iVar3 + 0x15c) = *unaff_s9;
    *(undefined2 *)(iVar3 + 0x15e) = unaff_s9[1];
    uVar8 = unaff_s9[2];
  }
  *(undefined2 *)(iVar3 + 0x160) = uVar8;
  iVar6 = 0;
  if (*(char *)((uint)*(byte *)(unaff_s0 + 0x2f) * 0x5d8 + unaff_s4 + 0x56) != '\0') goto _L0;
  iVar9 = (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + unaff_s3;
  if (*(char *)(iVar9 + 0x31) != '\x02') goto _L0;
  iVar6 = **(int **)(iVar9 + 0xac);
  cVar2 = *(char *)(iVar6 + 0x60);
  if (cVar2 == '\x01') {
    uVar7 = *(uint *)(iVar6 + 0x48) + 1;
    *(uint *)(iVar6 + 0x4c) = (uint)(uVar7 < *(uint *)(iVar6 + 0x48)) + *(int *)(iVar6 + 0x4c);
    *(uint *)(iVar6 + 0x48) = uVar7;
    FUN_00010c24();
    iVar9 = 0xc;
_L0:
    iVar6 = 8;
  }
  else {
    if (cVar2 == '\0') {
_L0:
      uVar7 = *(uint *)(iVar6 + 0x48) + 1;
      *(uint *)(iVar6 + 0x4c) = (uint)(uVar7 < *(uint *)(iVar6 + 0x48)) + *(int *)(iVar6 + 0x4c);
      *(uint *)(iVar6 + 0x48) = uVar7;
      FUN_00010a10();
      iVar9 = 4;
      iVar6 = 4;
    }
    else {
      if (cVar2 == '\x02') {
        uVar7 = *(uint *)(iVar6 + 0x48) + 1;
        *(uint *)(iVar6 + 0x4c) = (uint)(uVar7 < *(uint *)(iVar6 + 0x48)) + *(int *)(iVar6 + 0x4c);
        *(uint *)(iVar6 + 0x48) = uVar7;
        FUN_00010c4e();
        iVar9 = 8;
        goto _L0;
      }
      if (cVar2 == '\x03') goto _L0;
      iVar9 = 0;
      iVar6 = 0;
    }
  }
  iVar6 += iVar9;
  if (iVar6 == 0) goto _L0;
  uVar4 = *(ushort *)(iVar3 + 0x14c);
  uVar11 += iVar6;
  *(char *)(iVar3 + 0x14c) = (char)uVar4;
  *(byte *)(iVar3 + 0x14d) = (byte)((uint)uVar4 >> 8) | 0x40;
  uVar7 = (uint)*(byte *)(unaff_s4 + (uint)*(byte *)(unaff_s0 + 0x2f) * 0x5d8 + 0x56);
  if (uVar7 == 0) {
    iVar3 = (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + unaff_s3;
    if (*(char *)(iVar3 + 0x31) == '\x02') {
      iVar9 = **(int **)(iVar3 + 0xac);
      iVar3 = *(int *)(*(int *)(unaff_s0 + 0x6c) + 0x28);
      cVar2 = *(char *)(iVar9 + 0x60);
      if (cVar2 == '\x01') {
        *puVar10 = *(ushort *)(unaff_s0 + 0x22) & 0x7f00 | 0x2000 |
                   *(ushort *)(unaff_s0 + 0x22) >> 8;
        uVar4 = (ushort)*(byte *)(unaff_s0 + 0x22) | (ushort)*(byte *)(iVar9 + 0x61) << 0xe;
_L0:
        puVar10[1] = uVar4 | 0x2000;
        uVar7 = 8;
        puVar10[2] = *(ushort *)(unaff_s0 + 0x24);
        puVar10[3] = *(ushort *)(unaff_s0 + 0x26);
      }
      else {
        if (cVar2 == '\0') {
_L0:
          *puVar10 = *(ushort *)(unaff_s0 + 0x22);
          puVar10[1] = (ushort)*(byte *)(iVar9 + 0x61) << 0xe | *(ushort *)(unaff_s0 + 0x24);
          uVar7 = 4;
        }
        else {
          if (cVar2 == '\x02') {
            *puVar10 = *(ushort *)(unaff_s0 + 0x22);
            uVar4 = (ushort)*(byte *)(iVar9 + 0x61) << 0xe;
            goto _L0;
          }
          if (cVar2 == '\x03') goto _L0;
        }
      }
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0xffc00 | (uint)*(byte *)(iVar9 + 0x62);
    }
  }
  else {
    uVar7 = 0;
  }
  puVar10 = (ushort *)((int)puVar10 + uVar7);
  unaff_s8 = puVar10;
_L0:
  *puVar10 = 0xaaaa;
  puVar10[1] = 3;
  puVar10[2] = 0;
  puVar10[3] = *(ushort *)(unaff_s0 + 0x20);
  FUN_00010ae2();
  if ((iVar6 != 0) &&
     (*(char *)(**(int **)(unaff_s3 + (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + 0xac) + 0x60) ==
      '\x01')) {
    FUN_00010b1e();
    FUN_00010b2e();
    FUN_00010b38();
    iVar3 = 0;
    do {
      puVar5 = &stack0x00000020 + iVar3;
      iVar6 = iVar3 + unaff_s6 + 8;
      iVar3 += 1;
      *(undefined *)((int)unaff_s8 + iVar6) = *puVar5;
    } while (iVar3 != 8);
  }
  iVar3 = *(int *)(unaff_s0 + 0x6c);
  *(uint *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + uVar11;
  *(uint *)(iVar3 + 0x1c) = uVar11 + 4;
  if (unaff_s7 != 0) {
    *(int *)(unaff_s0 + 0x2cc) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



undefined4 FUN_0001090a(void)

{
  char cVar1;
  int unaff_s0;
  int unaff_s1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  ushort *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  ushort *unaff_s8;
  undefined2 *unaff_s9;
  undefined2 *unaff_s10;
  int unaff_s11;
  int iVar8;
  undefined4 in_stack_00000008;
  
  FUN_0001090a();
  uVar2 = *(ushort *)(unaff_s1 + 0x14c) | 0x100;
  if (*(char *)(unaff_s11 * 0x5d8 + unaff_s4 + 0x56) == '\x02') {
    uVar2 = *(ushort *)(unaff_s1 + 0x14c) | 0x200;
  }
  *(char *)(unaff_s1 + 0x14c) = (char)uVar2;
  *(char *)(unaff_s1 + 0x14d) = (char)(uVar2 >> 8);
  *(undefined *)(unaff_s1 + 0x14e) = 0;
  *(undefined *)(unaff_s1 + 0x14f) = 0;
  *(undefined2 *)(unaff_s1 + 0x150) = *unaff_s9;
  *(undefined2 *)(unaff_s1 + 0x152) = unaff_s9[1];
  *(undefined2 *)(unaff_s1 + 0x154) = unaff_s9[2];
  *(undefined2 *)(unaff_s1 + 0x156) = *unaff_s10;
  *(undefined2 *)(unaff_s1 + 0x158) = unaff_s10[1];
  *(undefined2 *)(unaff_s1 + 0x15a) = unaff_s10[2];
  if (*(char *)(unaff_s11 * 0x5d8 + unaff_s4 + 0x56) == '\x02') {
    *(undefined2 *)(unaff_s1 + 0x15c) = *unaff_s10;
    *(undefined2 *)(unaff_s1 + 0x15e) = unaff_s10[1];
    uVar6 = unaff_s10[2];
  }
  else {
    *(undefined2 *)(unaff_s1 + 0x15c) = *unaff_s9;
    *(undefined2 *)(unaff_s1 + 0x15e) = unaff_s9[1];
    uVar6 = unaff_s9[2];
  }
  *(undefined2 *)(unaff_s1 + 0x160) = uVar6;
  iVar8 = 0;
  if (*(char *)((uint)*(byte *)(unaff_s0 + 0x2f) * 0x5d8 + unaff_s4 + 0x56) != '\0') goto _L0;
  iVar7 = (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + unaff_s3;
  if (*(char *)(iVar7 + 0x31) != '\x02') goto _L0;
  iVar8 = **(int **)(iVar7 + 0xac);
  cVar1 = *(char *)(iVar8 + 0x60);
  if (cVar1 == '\x01') {
    uVar5 = *(uint *)(iVar8 + 0x48) + 1;
    *(uint *)(iVar8 + 0x4c) = (uint)(uVar5 < *(uint *)(iVar8 + 0x48)) + *(int *)(iVar8 + 0x4c);
    *(uint *)(iVar8 + 0x48) = uVar5;
    FUN_00010c24();
    iVar7 = 0xc;
_L0:
    iVar8 = 8;
  }
  else {
    if (cVar1 == '\0') {
_L0:
      uVar5 = *(uint *)(iVar8 + 0x48) + 1;
      *(uint *)(iVar8 + 0x4c) = (uint)(uVar5 < *(uint *)(iVar8 + 0x48)) + *(int *)(iVar8 + 0x4c);
      *(uint *)(iVar8 + 0x48) = uVar5;
      FUN_00010a10();
      iVar7 = 4;
      iVar8 = 4;
    }
    else {
      if (cVar1 == '\x02') {
        uVar5 = *(uint *)(iVar8 + 0x48) + 1;
        *(uint *)(iVar8 + 0x4c) = (uint)(uVar5 < *(uint *)(iVar8 + 0x48)) + *(int *)(iVar8 + 0x4c);
        *(uint *)(iVar8 + 0x48) = uVar5;
        FUN_00010c4e();
        iVar7 = 8;
        goto _L0;
      }
      if (cVar1 == '\x03') goto _L0;
      iVar7 = 0;
      iVar8 = 0;
    }
  }
  iVar8 += iVar7;
  if (iVar8 == 0) goto _L0;
  uVar2 = *(ushort *)(unaff_s1 + 0x14c);
  unaff_s5 += iVar8;
  *(char *)(unaff_s1 + 0x14c) = (char)uVar2;
  *(byte *)(unaff_s1 + 0x14d) = (byte)((uint)uVar2 >> 8) | 0x40;
  uVar5 = (uint)*(byte *)(unaff_s4 + (uint)*(byte *)(unaff_s0 + 0x2f) * 0x5d8 + 0x56);
  if (uVar5 == 0) {
    iVar7 = (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + unaff_s3;
    if (*(char *)(iVar7 + 0x31) == '\x02') {
      iVar3 = **(int **)(iVar7 + 0xac);
      iVar7 = *(int *)(*(int *)(unaff_s0 + 0x6c) + 0x28);
      cVar1 = *(char *)(iVar3 + 0x60);
      if (cVar1 == '\x01') {
        *unaff_s2 = *(ushort *)(unaff_s0 + 0x22) & 0x7f00 | 0x2000 |
                    *(ushort *)(unaff_s0 + 0x22) >> 8;
        uVar2 = (ushort)*(byte *)(unaff_s0 + 0x22) | (ushort)*(byte *)(iVar3 + 0x61) << 0xe;
_L0:
        unaff_s2[1] = uVar2 | 0x2000;
        uVar5 = 8;
        unaff_s2[2] = *(ushort *)(unaff_s0 + 0x24);
        unaff_s2[3] = *(ushort *)(unaff_s0 + 0x26);
      }
      else {
        if (cVar1 == '\0') {
_L0:
          *unaff_s2 = *(ushort *)(unaff_s0 + 0x22);
          unaff_s2[1] = (ushort)*(byte *)(iVar3 + 0x61) << 0xe | *(ushort *)(unaff_s0 + 0x24);
          uVar5 = 4;
        }
        else {
          if (cVar1 == '\x02') {
            *unaff_s2 = *(ushort *)(unaff_s0 + 0x22);
            uVar2 = (ushort)*(byte *)(iVar3 + 0x61) << 0xe;
            goto _L0;
          }
          if (cVar1 == '\x03') goto _L0;
        }
      }
      *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) & 0xffc00 | (uint)*(byte *)(iVar3 + 0x62);
    }
  }
  else {
    uVar5 = 0;
  }
  unaff_s2 = (ushort *)((int)unaff_s2 + uVar5);
  unaff_s8 = unaff_s2;
_L0:
  *unaff_s2 = 0xaaaa;
  unaff_s2[1] = 3;
  unaff_s2[2] = 0;
  unaff_s2[3] = *(ushort *)(unaff_s0 + 0x20);
  FUN_00010ae2();
  if ((iVar8 != 0) &&
     (*(char *)(**(int **)(unaff_s3 + (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + 0xac) + 0x60) ==
      '\x01')) {
    FUN_00010b1e();
    FUN_00010b2e();
    FUN_00010b38();
    iVar8 = 0;
    do {
      puVar4 = &stack0x00000020 + iVar8;
      iVar7 = iVar8 + unaff_s6 + 8;
      iVar8 += 1;
      *(undefined *)((int)unaff_s8 + iVar7) = *puVar4;
    } while (iVar8 != 8);
  }
  iVar8 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x14) + -1 + unaff_s5;
  *(int *)(iVar8 + 0x1c) = unaff_s5 + 4;
  if (unaff_s7 != 0) {
    *(int *)(unaff_s0 + 0x2cc) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



undefined4 FUN_00010a10(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ushort *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  ushort *unaff_s8;
  undefined4 in_stack_00000008;
  
  FUN_00010a10();
  if (false) goto _L0;
  uVar2 = *(ushort *)(unaff_s1 + 0x14c);
  unaff_s5 += 8;
  *(char *)(unaff_s1 + 0x14c) = (char)uVar2;
  *(byte *)(unaff_s1 + 0x14d) = (byte)((uint)uVar2 >> 8) | 0x40;
  uVar5 = (uint)*(byte *)(unaff_s4 + (uint)*(byte *)(unaff_s0 + 0x2f) * 0x5d8 + 0x56);
  if (uVar5 == 0) {
    iVar6 = (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + unaff_s3;
    if (*(char *)(iVar6 + 0x31) == '\x02') {
      iVar3 = **(int **)(iVar6 + 0xac);
      iVar6 = *(int *)(*(int *)(unaff_s0 + 0x6c) + 0x28);
      cVar1 = *(char *)(iVar3 + 0x60);
      if (cVar1 == '\x01') {
        *unaff_s2 = *(ushort *)(unaff_s0 + 0x22) & 0x7f00 | 0x2000 |
                    *(ushort *)(unaff_s0 + 0x22) >> 8;
        uVar2 = (ushort)*(byte *)(unaff_s0 + 0x22) | (ushort)*(byte *)(iVar3 + 0x61) << 0xe;
_L0:
        unaff_s2[1] = uVar2 | 0x2000;
        uVar5 = 8;
        unaff_s2[2] = *(ushort *)(unaff_s0 + 0x24);
        unaff_s2[3] = *(ushort *)(unaff_s0 + 0x26);
      }
      else {
        if (cVar1 == '\0') {
_L0:
          *unaff_s2 = *(ushort *)(unaff_s0 + 0x22);
          unaff_s2[1] = (ushort)*(byte *)(iVar3 + 0x61) << 0xe | *(ushort *)(unaff_s0 + 0x24);
          uVar5 = 4;
        }
        else {
          if (cVar1 == '\x02') {
            *unaff_s2 = *(ushort *)(unaff_s0 + 0x22);
            uVar2 = (ushort)*(byte *)(iVar3 + 0x61) << 0xe;
            goto _L0;
          }
          if (cVar1 == '\x03') goto _L0;
        }
      }
      *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) & 0xffc00 | (uint)*(byte *)(iVar3 + 0x62);
    }
  }
  else {
    uVar5 = 0;
  }
  unaff_s2 = (ushort *)((int)unaff_s2 + uVar5);
  unaff_s8 = unaff_s2;
_L0:
  *unaff_s2 = 0xaaaa;
  unaff_s2[1] = 3;
  unaff_s2[2] = 0;
  unaff_s2[3] = *(ushort *)(unaff_s0 + 0x20);
  FUN_00010ae2();
  if ((true) &&
     (*(char *)(**(int **)(unaff_s3 + (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + 0xac) + 0x60) ==
      '\x01')) {
    FUN_00010b1e();
    FUN_00010b2e();
    FUN_00010b38();
    iVar6 = 0;
    do {
      puVar4 = &stack0x00000020 + iVar6;
      iVar3 = iVar6 + unaff_s6 + 8;
      iVar6 += 1;
      *(undefined *)((int)unaff_s8 + iVar3) = *puVar4;
    } while (iVar6 != 8);
  }
  iVar6 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x14) + -1 + unaff_s5;
  *(int *)(iVar6 + 0x1c) = unaff_s5 + 4;
  if (unaff_s7 != 0) {
    *(int *)(unaff_s0 + 0x2cc) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



undefined4 FUN_00010ae2(void)

{
  int unaff_s0;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s11;
  undefined4 in_stack_00000008;
  
  FUN_00010ae2();
  if ((unaff_s11 != 0) &&
     (*(char *)(**(int **)(unaff_s3 + (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + 0xac) + 0x60) ==
      '\x01')) {
    FUN_00010b1e();
    FUN_00010b2e();
    FUN_00010b38();
    iVar3 = 0;
    do {
      puVar1 = &stack0x00000020 + iVar3;
      puVar2 = (undefined *)(unaff_s6 + 8 + unaff_s8 + iVar3);
      iVar3 += 1;
      *puVar2 = *puVar1;
    } while (iVar3 != 8);
  }
  iVar3 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + unaff_s5;
  *(int *)(iVar3 + 0x1c) = unaff_s5 + 4;
  if (unaff_s7 != 0) {
    *(int *)(unaff_s0 + 0x2cc) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



undefined4 FUN_00010b1e(void)

{
  int unaff_s0;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined4 in_stack_00000008;
  
  FUN_00010b1e();
  FUN_00010b2e();
  FUN_00010b38();
  iVar3 = 0;
  do {
    puVar1 = &stack0x00000020 + iVar3;
    puVar2 = (undefined *)(unaff_s6 + 8 + unaff_s8 + iVar3);
    iVar3 += 1;
    *puVar2 = *puVar1;
  } while (iVar3 != 8);
  iVar3 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + unaff_s5;
  *(int *)(iVar3 + 0x1c) = unaff_s5 + 4;
  if (unaff_s7 != 0) {
    *(int *)(unaff_s0 + 0x2cc) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



undefined4 FUN_00010b2e(void)

{
  int unaff_s0;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined4 in_stack_00000008;
  
  FUN_00010b2e();
  FUN_00010b38();
  iVar3 = 0;
  do {
    puVar1 = &stack0x00000020 + iVar3;
    puVar2 = (undefined *)(unaff_s6 + unaff_s8 + iVar3);
    iVar3 += 1;
    *puVar2 = *puVar1;
  } while (iVar3 != 8);
  iVar3 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + unaff_s5;
  *(int *)(iVar3 + 0x1c) = unaff_s5 + 4;
  if (unaff_s7 != 0) {
    *(int *)(unaff_s0 + 0x2cc) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



undefined4 FUN_00010b38(void)

{
  int unaff_s0;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined4 in_stack_00000008;
  
  FUN_00010b38();
  iVar3 = 0;
  do {
    puVar1 = &stack0x00000020 + iVar3;
    puVar2 = (undefined *)(unaff_s6 + unaff_s8 + iVar3);
    iVar3 += 1;
    *puVar2 = *puVar1;
  } while (iVar3 != 8);
  iVar3 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + unaff_s5;
  *(int *)(iVar3 + 0x1c) = unaff_s5 + 4;
  if (unaff_s7 != 0) {
    *(int *)(unaff_s0 + 0x2cc) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



undefined4 FUN_00010b90(void)

{
  FUN_00010b90();
  return 0;
}



undefined4 FUN_00010c24(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ushort *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  ushort *unaff_s8;
  undefined4 in_stack_00000008;
  
  FUN_00010c24();
  if (false) goto _L0;
  uVar2 = *(ushort *)(unaff_s1 + 0x14c);
  unaff_s5 += 0x14;
  *(char *)(unaff_s1 + 0x14c) = (char)uVar2;
  *(byte *)(unaff_s1 + 0x14d) = (byte)((uint)uVar2 >> 8) | 0x40;
  uVar5 = (uint)*(byte *)(unaff_s4 + (uint)*(byte *)(unaff_s0 + 0x2f) * 0x5d8 + 0x56);
  if (uVar5 == 0) {
    iVar6 = (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + unaff_s3;
    if (*(char *)(iVar6 + 0x31) == '\x02') {
      iVar3 = **(int **)(iVar6 + 0xac);
      iVar6 = *(int *)(*(int *)(unaff_s0 + 0x6c) + 0x28);
      cVar1 = *(char *)(iVar3 + 0x60);
      if (cVar1 == '\x01') {
        *unaff_s2 = *(ushort *)(unaff_s0 + 0x22) & 0x7f00 | 0x2000 |
                    *(ushort *)(unaff_s0 + 0x22) >> 8;
        uVar2 = (ushort)*(byte *)(unaff_s0 + 0x22) | (ushort)*(byte *)(iVar3 + 0x61) << 0xe;
_L0:
        unaff_s2[1] = uVar2 | 0x2000;
        uVar5 = 8;
        unaff_s2[2] = *(ushort *)(unaff_s0 + 0x24);
        unaff_s2[3] = *(ushort *)(unaff_s0 + 0x26);
      }
      else {
        if (cVar1 == '\0') {
_L0:
          *unaff_s2 = *(ushort *)(unaff_s0 + 0x22);
          unaff_s2[1] = (ushort)*(byte *)(iVar3 + 0x61) << 0xe | *(ushort *)(unaff_s0 + 0x24);
          uVar5 = 4;
        }
        else {
          if (cVar1 == '\x02') {
            *unaff_s2 = *(ushort *)(unaff_s0 + 0x22);
            uVar2 = (ushort)*(byte *)(iVar3 + 0x61) << 0xe;
            goto _L0;
          }
          if (cVar1 == '\x03') goto _L0;
        }
      }
      *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) & 0xffc00 | (uint)*(byte *)(iVar3 + 0x62);
    }
  }
  else {
    uVar5 = 0;
  }
  unaff_s2 = (ushort *)((int)unaff_s2 + uVar5);
  unaff_s8 = unaff_s2;
_L0:
  *unaff_s2 = 0xaaaa;
  unaff_s2[1] = 3;
  unaff_s2[2] = 0;
  unaff_s2[3] = *(ushort *)(unaff_s0 + 0x20);
  FUN_00010ae2();
  if ((true) &&
     (*(char *)(**(int **)(unaff_s3 + (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + 0xac) + 0x60) ==
      '\x01')) {
    FUN_00010b1e();
    FUN_00010b2e();
    FUN_00010b38();
    iVar6 = 0;
    do {
      puVar4 = &stack0x00000020 + iVar6;
      iVar3 = iVar6 + unaff_s6 + 8;
      iVar6 += 1;
      *(undefined *)((int)unaff_s8 + iVar3) = *puVar4;
    } while (iVar6 != 8);
  }
  iVar6 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x14) + -1 + unaff_s5;
  *(int *)(iVar6 + 0x1c) = unaff_s5 + 4;
  if (unaff_s7 != 0) {
    *(int *)(unaff_s0 + 0x2cc) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



undefined4 FUN_00010c4e(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ushort *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  ushort *unaff_s8;
  undefined4 in_stack_00000008;
  
  FUN_00010c4e();
  if (false) goto _L0;
  uVar2 = *(ushort *)(unaff_s1 + 0x14c);
  unaff_s5 += 0x10;
  *(char *)(unaff_s1 + 0x14c) = (char)uVar2;
  *(byte *)(unaff_s1 + 0x14d) = (byte)((uint)uVar2 >> 8) | 0x40;
  uVar5 = (uint)*(byte *)(unaff_s4 + (uint)*(byte *)(unaff_s0 + 0x2f) * 0x5d8 + 0x56);
  if (uVar5 == 0) {
    iVar6 = (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + unaff_s3;
    if (*(char *)(iVar6 + 0x31) == '\x02') {
      iVar3 = **(int **)(iVar6 + 0xac);
      iVar6 = *(int *)(*(int *)(unaff_s0 + 0x6c) + 0x28);
      cVar1 = *(char *)(iVar3 + 0x60);
      if (cVar1 == '\x01') {
        *unaff_s2 = *(ushort *)(unaff_s0 + 0x22) & 0x7f00 | 0x2000 |
                    *(ushort *)(unaff_s0 + 0x22) >> 8;
        uVar2 = (ushort)*(byte *)(unaff_s0 + 0x22) | (ushort)*(byte *)(iVar3 + 0x61) << 0xe;
_L0:
        unaff_s2[1] = uVar2 | 0x2000;
        uVar5 = 8;
        unaff_s2[2] = *(ushort *)(unaff_s0 + 0x24);
        unaff_s2[3] = *(ushort *)(unaff_s0 + 0x26);
      }
      else {
        if (cVar1 == '\0') {
_L0:
          *unaff_s2 = *(ushort *)(unaff_s0 + 0x22);
          unaff_s2[1] = (ushort)*(byte *)(iVar3 + 0x61) << 0xe | *(ushort *)(unaff_s0 + 0x24);
          uVar5 = 4;
        }
        else {
          if (cVar1 == '\x02') {
            *unaff_s2 = *(ushort *)(unaff_s0 + 0x22);
            uVar2 = (ushort)*(byte *)(iVar3 + 0x61) << 0xe;
            goto _L0;
          }
          if (cVar1 == '\x03') goto _L0;
        }
      }
      *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) & 0xffc00 | (uint)*(byte *)(iVar3 + 0x62);
    }
  }
  else {
    uVar5 = 0;
  }
  unaff_s2 = (ushort *)((int)unaff_s2 + uVar5);
  unaff_s8 = unaff_s2;
_L0:
  *unaff_s2 = 0xaaaa;
  unaff_s2[1] = 3;
  unaff_s2[2] = 0;
  unaff_s2[3] = *(ushort *)(unaff_s0 + 0x20);
  FUN_00010ae2();
  if ((true) &&
     (*(char *)(**(int **)(unaff_s3 + (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + 0xac) + 0x60) ==
      '\x01')) {
    FUN_00010b1e();
    FUN_00010b2e();
    FUN_00010b38();
    iVar6 = 0;
    do {
      puVar4 = &stack0x00000020 + iVar6;
      iVar3 = iVar6 + unaff_s6 + 8;
      iVar6 += 1;
      *(undefined *)((int)unaff_s8 + iVar3) = *puVar4;
    } while (iVar6 != 8);
  }
  iVar6 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x14) + -1 + unaff_s5;
  *(int *)(iVar6 + 0x1c) = unaff_s5 + 4;
  if (unaff_s7 != 0) {
    *(int *)(unaff_s0 + 0x2cc) = unaff_s7;
    *(undefined4 *)(unaff_s0 + 0x2d0) = in_stack_00000008;
  }
  FUN_00010b90();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3b66

void txl_frame_dump(void)

{
  int extraout_a0;
  int *piVar1;
  int *piVar2;
  
  _L0();
  piVar1 = piRam00000000;
  if (extraout_a0 != 0) {
    for (; piVar2 = _DAT_00000008, piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    }
    for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    }
  }
  return;
}



void _L0(void)

{
  int *unaff_s0;
  int extraout_a0;
  int *piVar1;
  
  _L0();
  if (extraout_a0 != 0) {
    for (piVar1 = (int *)*unaff_s0; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    }
    for (piVar1 = (int *)unaff_s0[2]; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    }
  }
  return;
}


