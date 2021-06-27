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

typedef union anon_union.conflict3a36_for_field_0 anon_union.conflict3a36_for_field_0, *Panon_union.conflict3a36_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1286_for_field_3 anon_union.conflict1286_for_field_3, *Panon_union.conflict1286_for_field_3;

typedef union anon_union.conflict12ab_for_field_4 anon_union.conflict12ab_for_field_4, *Panon_union.conflict12ab_for_field_4;

typedef union anon_union.conflict12d0_for_field_5 anon_union.conflict12d0_for_field_5, *Panon_union.conflict12d0_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: efa
    struct co_list_hdr * next;
};

struct tx_compressed_policy_tbl { // DWARF DIE: 125b
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct tx_policy_tbl { // DWARF DIE: 11ea
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict3a36_for_field_0 { // DWARF DIE: 3a36
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct mac_addr { // DWARF DIE: a45
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 3500
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

struct tx_cfm_tag { // DWARF DIE: 16e3
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct umacdesc { // DWARF DIE: 35dc
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

struct lmacdesc { // DWARF DIE: 3638
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

union anon_union.conflict12ab_for_field_4 { // DWARF DIE: 12ab
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict1286_for_field_3 { // DWARF DIE: 1286
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflict12d0_for_field_5 { // DWARF DIE: 12d0
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: 12f5
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1286_for_field_3 field_3;
    union anon_union.conflict12ab_for_field_4 field_4;
    union anon_union.conflict12d0_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1762
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct txdesc { // DWARF DIE: 3754
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_pbd { // DWARF DIE: 13be
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct dma_desc { // DWARF DIE: 1027
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct txl_buffer_control { // DWARF DIE: 2d4d
    union anon_union.conflict3a36_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct txl_buffer_tag { // DWARF DIE: 3673
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

struct tx_agg_desc { // DWARF DIE: 1793
    uint8_t reserved;
};

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag { // DWARF DIE: 283f
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct ps_env_tag { // DWARF DIE: 4773
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

struct co_list { // DWARF DIE: f20
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct txl_list { // DWARF DIE: 3894
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 38dc
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 3b2c
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 3b54
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 3ba8
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 2b2b
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

struct bam_env_tag { // DWARF DIE: 2b9e
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

typedef struct chan_env_tag chan_env_tag, *Pchan_env_tag;

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct chan_env_tag { // DWARF DIE: 3410
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

struct mm_chan_ctxt_add_req { // DWARF DIE: 23e9
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 3380
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

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

struct chan_tbtt_tag { // DWARF DIE: 3331
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 387d
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 3dd3
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 8f8
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

struct scan_chan_tag { // DWARF DIE: d59
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct me_chan_config_req { // DWARF DIE: 3f37
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: c58
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

struct me_env_tag { // DWARF DIE: 4105
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

struct mobility_domain { // DWARF DIE: 4199
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

struct Cipher_t { // DWARF DIE: 3fe9
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct mac_edca_param_set { // DWARF DIE: d20
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset { // DWARF DIE: aca
    uint8_t length;
    uint8_t array[12];
};

struct mac_ssid { // DWARF DIE: a75
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct SecurityMode_t { // DWARF DIE: 404f
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

struct mac_bss_info { // DWARF DIE: 41c1
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

typedef struct mac_sec_key mac_sec_key, *Pmac_sec_key;

struct mac_sec_key { // DWARF DIE: c1d
    uint8_t length;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t array[8];
};

typedef union anon_union.conflictb72 anon_union.conflictb72, *Panon_union.conflictb72;

typedef struct anon_struct.conflictb12 anon_struct.conflictb12, *Panon_struct.conflictb12;

typedef struct anon_struct.conflictb49 anon_struct.conflictb49, *Panon_struct.conflictb49;

struct anon_struct.conflictb12 { // DWARF DIE: b12
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictb49 { // DWARF DIE: b49
    uint32_t key[4];
};

union anon_union.conflictb72 { // DWARF DIE: b72
    struct anon_struct.conflictb12 mic;
    struct anon_struct.conflictb49 mfp;
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictb72_for_u anon_union.conflictb72_for_u, *Panon_union.conflictb72_for_u;

union anon_union.conflictb72_for_u { // DWARF DIE: b72
    struct anon_struct.conflictb12 mic;
    struct anon_struct.conflictb49 mfp;
};

struct key_info_tag { // DWARF DIE: b97
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb72_for_u u;
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

struct mac_vhtcapability { // DWARF DIE: ccb
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef enum anon_enum_8.conflict9cd {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_VI=2,
    AC_VO=3,
    API_AC_BE=1,
    API_AC_BK=0,
    API_AC_MAX=4,
    API_AC_VI=2,
    API_AC_VO=3,
    BA_AGMT_ALREADY_EXISTS=1,
    BA_AGMT_DELETED=2,
    BA_AGMT_DOESNT_EXIST=3,
    BA_AGMT_ESTABLISHED=0,
    BA_AGMT_NOT_SUPPORTED=5,
    BA_AGMT_NO_MORE_BA_AGMT=4,
    BA_AGMT_RX=1,
    BA_AGMT_TX=0,
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
    HW_ACTIVE=3,
    HW_DOZE=2,
    HW_IDLE=0,
    HW_RESERVED=1,
    INVALID_STA_IDX=-1,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_DATA_RX=1,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_MAX=4,
    PHY_BAND_2G4=0,
    PHY_BAND_5G=1,
    PHY_BAND_MAX=2,
    PHY_CHNL_BW_160=3,
    PHY_CHNL_BW_20=0,
    PHY_CHNL_BW_40=1,
    PHY_CHNL_BW_80=2,
    PHY_CHNL_BW_80P80=4,
    PHY_CHNL_BW_OTHER=5,
    PHY_PRIM=0,
    PHY_SEC=1,
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
    VIF_AP=2,
    VIF_IBSS=1,
    VIF_MESH_POINT=3,
    VIF_STA=0,
    VIF_UNKNOWN=4
} anon_enum_8.conflict9cd;

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: da1
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

struct ke_msg_handler { // DWARF DIE: 19a1
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 19cd
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 325d
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

typedef enum mm_features {
    MM_FEAT_AMPDU_BIT=9,
    MM_FEAT_AMSDU_BIT=10,
    MM_FEAT_AUTOBCN_BIT=1,
    MM_FEAT_BCN_BIT=0,
    MM_FEAT_BFMEE_BIT=17,
    MM_FEAT_BFMER_BIT=18,
    MM_FEAT_CHNL_CTXT_BIT=11,
    MM_FEAT_CMON_BIT=3,
    MM_FEAT_DPSM_BIT=8,
    MM_FEAT_HWSCAN_BIT=2,
    MM_FEAT_MESH_BIT=23,
    MM_FEAT_MFP_BIT=20,
    MM_FEAT_MROLE_BIT=4,
    MM_FEAT_MU_MIMO_RX_BIT=21,
    MM_FEAT_MU_MIMO_TX_BIT=22,
    MM_FEAT_P2P_BIT=13,
    MM_FEAT_P2P_GO_BIT=14,
    MM_FEAT_PS_BIT=6,
    MM_FEAT_RADAR_BIT=5,
    MM_FEAT_REORD_BIT=12,
    MM_FEAT_TDLS_BIT=24,
    MM_FEAT_UAPSD_BIT=7,
    MM_FEAT_UMAC_BIT=15,
    MM_FEAT_VHT_BIT=16,
    MM_FEAT_WAPI_BIT=19
} mm_features;

typedef uint wint_t;

typedef long __int32_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 2a18
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 29ed
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 29d0
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 28d5
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

struct rxu_cntrl_env_tag { // DWARF DIE: 2a51
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

struct hal_dma_desc_tag { // DWARF DIE: 277a
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

struct mm_bcn_env_tag { // DWARF DIE: 480f
    struct mm_bcn_change_req * param;
    int tx_cfm;
    _Bool tx_pending;
    _Bool update_ongoing;
    _Bool update_pending;
    undefined field_0xb;
    struct hal_dma_desc_tag dma;
    struct co_list tim_list;
};

struct mm_bcn_change_req { // DWARF DIE: 24c2
    uint32_t bcn_ptr;
    uint16_t bcn_len;
    uint16_t tim_oft;
    uint8_t tim_len;
    uint8_t inst_nbr;
    uint8_t csa_oft[2];
    uint8_t[0] bcn_buf;
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

struct la_mem_format { // DWARF DIE: 117a
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 107b
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 2880
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 151e
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

struct phy_channel_info { // DWARF DIE: 1127
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 15b3
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 1413
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

struct rx_payloaddesc { // DWARF DIE: 1686
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 1616
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct mm_ba_add_req mm_ba_add_req, *Pmm_ba_add_req;

struct mm_ba_add_req { // DWARF DIE: 2334
    uint8_t type;
    uint8_t sta_idx;
    uint8_t tid;
    uint8_t bufsz;
    uint16_t ssn;
};

typedef struct mm_monitor_cfm mm_monitor_cfm, *Pmm_monitor_cfm;

struct mm_monitor_cfm { // DWARF DIE: 1c9c
    uint32_t status;
    uint32_t enable;
    uint32_t data[8];
};

typedef struct mm_set_edca_req mm_set_edca_req, *Pmm_set_edca_req;

struct mm_set_edca_req { // DWARF DIE: 1fc8
    uint32_t ac_param;
    _Bool uapsd;
    uint8_t hw_queue;
    uint8_t inst_nbr;
    undefined field_0x7;
};

typedef struct mm_remain_on_channel_req mm_remain_on_channel_req, *Pmm_remain_on_channel_req;

struct mm_remain_on_channel_req { // DWARF DIE: 2576
    uint8_t op_code;
    uint8_t vif_index;
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    undefined field_0xa;
    undefined field_0xb;
    uint32_t duration_ms;
    int8_t tx_power;
    undefined field_0x11;
    undefined field_0x12;
    undefined field_0x13;
};

typedef struct mm_force_idle_req mm_force_idle_req, *Pmm_force_idle_req;

struct mm_force_idle_req { // DWARF DIE: 26ca
    void (* cb)(void);
};

typedef struct mm_set_bssid_req mm_set_bssid_req, *Pmm_set_bssid_req;

struct mm_set_bssid_req { // DWARF DIE: 1f38
    struct mac_addr bssid;
    uint8_t inst_nbr;
};

typedef struct mm_key_add_cfm mm_key_add_cfm, *Pmm_key_add_cfm;

struct mm_key_add_cfm { // DWARF DIE: 22e7
    uint8_t status;
    uint8_t hw_key_idx;
};

typedef struct mm_add_if_cfm mm_add_if_cfm, *Pmm_add_if_cfm;

struct mm_add_if_cfm { // DWARF DIE: 2096
    uint8_t status;
    uint8_t inst_nbr;
};

typedef struct mm_monitor_channel_req mm_monitor_channel_req, *Pmm_monitor_channel_req;

struct mm_monitor_channel_req { // DWARF DIE: 1d30
    uint32_t freq;
    uint32_t use_40Mhz;
    uint32_t higher_band;
};

typedef struct mm_monitor_channel_cfm mm_monitor_channel_cfm, *Pmm_monitor_channel_cfm;

struct mm_monitor_channel_cfm { // DWARF DIE: 1cf7
    uint32_t status;
    uint32_t freq;
    uint32_t data[8];
};

typedef struct mm_remain_on_channel_cfm mm_remain_on_channel_cfm, *Pmm_remain_on_channel_cfm;

struct mm_remain_on_channel_cfm { // DWARF DIE: 2608
    uint8_t op_code;
    uint8_t status;
    uint8_t chan_ctxt_index;
};

typedef struct mm_set_slottime_req mm_set_slottime_req, *Pmm_set_slottime_req;

struct mm_set_slottime_req { // DWARF DIE: 2014
    uint8_t slottime;
};

typedef struct mm_set_basic_rates_req mm_set_basic_rates_req, *Pmm_set_basic_rates_req;

struct mm_set_basic_rates_req { // DWARF DIE: 1efa
    uint32_t rates;
    uint8_t inst_nbr;
    uint8_t band;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_tim_update_req mm_tim_update_req, *Pmm_tim_update_req;

struct mm_tim_update_req { // DWARF DIE: 2538
    uint16_t aid;
    uint8_t tx_avail;
    uint8_t inst_nbr;
};

typedef struct mm_sta_del_req mm_sta_del_req, *Pmm_sta_del_req;

struct mm_sta_del_req { // DWARF DIE: 222d
    uint8_t sta_idx;
};

typedef struct mm_key_add_req mm_key_add_req, *Pmm_key_add_req;

struct mm_key_add_req { // DWARF DIE: 2271
    uint8_t key_idx;
    uint8_t sta_idx;
    undefined field_0x2;
    undefined field_0x3;
    struct mac_sec_key key;
    uint8_t cipher_suite;
    uint8_t inst_nbr;
    uint8_t spp;
    _Bool pairwise;
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

typedef struct mm_set_filter_req mm_set_filter_req, *Pmm_set_filter_req;

struct mm_set_filter_req { // DWARF DIE: 1f68
    uint32_t filter;
};

typedef struct mm_set_channel_req mm_set_channel_req, *Pmm_set_channel_req;

struct mm_set_channel_req { // DWARF DIE: 1dac
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    uint8_t index;
    int8_t tx_power;
};

typedef struct mm_start_req mm_start_req, *Pmm_start_req;

typedef struct phy_cfg_tag phy_cfg_tag, *Pphy_cfg_tag;

struct phy_cfg_tag { // DWARF DIE: 114f
    uint32_t parameters[16];
};

struct mm_start_req { // DWARF DIE: 1d6e
    struct phy_cfg_tag phy_cfg;
    uint32_t uapsd_timeout;
    uint16_t lp_clk_accuracy;
    undefined field_0x46;
    undefined field_0x47;
};

typedef struct mm_set_idle_req mm_set_idle_req, *Pmm_set_idle_req;

struct mm_set_idle_req { // DWARF DIE: 224f
    uint8_t hw_idle;
};

typedef struct mm_sta_add_req mm_sta_add_req, *Pmm_sta_add_req;

struct mm_sta_add_req { // DWARF DIE: 2146
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

typedef struct mm_sta_add_cfm mm_sta_add_cfm, *Pmm_sta_add_cfm;

struct mm_sta_add_cfm { // DWARF DIE: 21f4
    uint8_t status;
    uint8_t sta_idx;
    uint8_t hw_sta_idx;
};

typedef struct mm_set_ps_mode_req mm_set_ps_mode_req, *Pmm_set_ps_mode_req;

struct mm_set_ps_mode_req { // DWARF DIE: 23c7
    uint8_t new_state;
};

typedef struct mm_set_vif_state_req mm_set_vif_state_req, *Pmm_set_vif_state_req;

struct mm_set_vif_state_req { // DWARF DIE: 2058
    uint16_t aid;
    _Bool active;
    uint8_t inst_nbr;
};

typedef struct mm_set_power_cfm mm_set_power_cfm, *Pmm_set_power_cfm;

struct mm_set_power_cfm { // DWARF DIE: 1e9f
    uint8_t radio_idx;
    int8_t power;
};

typedef struct mm_cfg_rssi_req mm_cfg_rssi_req, *Pmm_cfg_rssi_req;

struct mm_cfg_rssi_req { // DWARF DIE: 267f
    uint8_t vif_index;
    int8_t rssi_thold;
    uint8_t rssi_hyst;
};

typedef struct mm_set_mode_req mm_set_mode_req, *Pmm_set_mode_req;

struct mm_set_mode_req { // DWARF DIE: 2036
    uint8_t abgnmode;
};

typedef struct mm_ba_add_cfm mm_ba_add_cfm, *Pmm_ba_add_cfm;

struct mm_ba_add_cfm { // DWARF DIE: 238e
    uint8_t sta_idx;
    uint8_t tid;
    uint8_t status;
};

typedef struct mm_set_ps_options_req mm_set_ps_options_req, *Pmm_set_ps_options_req;

struct mm_set_ps_options_req { // DWARF DIE: 2641
    uint8_t vif_index;
    undefined field_0x1;
    uint16_t listen_interval;
    _Bool dont_listen_bc_mc;
    undefined field_0x5;
};

typedef struct mm_chan_ctxt_update_req mm_chan_ctxt_update_req, *Pmm_chan_ctxt_update_req;

struct mm_chan_ctxt_update_req { // DWARF DIE: 244c
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

typedef struct mm_remove_if_req mm_remove_if_req, *Pmm_remove_if_req;

struct mm_remove_if_req { // DWARF DIE: 20c1
    uint8_t inst_nbr;
};

typedef struct mm_monitor_req mm_monitor_req, *Pmm_monitor_req;

struct mm_monitor_req { // DWARF DIE: 1cd5
    uint32_t enable;
};

typedef struct mm_version_cfm mm_version_cfm, *Pmm_version_cfm;

struct mm_version_cfm { // DWARF DIE: 20e3
    uint32_t version_lmac;
    uint32_t version_machw_1;
    uint32_t version_machw_2;
    uint32_t version_phy_1;
    uint32_t version_phy_2;
    uint32_t features;
};

typedef struct mm_set_beacon_int_req mm_set_beacon_int_req, *Pmm_set_beacon_int_req;

struct mm_set_beacon_int_req { // DWARF DIE: 1eca
    uint16_t beacon_int;
    uint8_t inst_nbr;
    undefined field_0x3;
};

typedef struct mm_set_dtim_req mm_set_dtim_req, *Pmm_set_dtim_req;

struct mm_set_dtim_req { // DWARF DIE: 1e4d
    uint8_t dtim_period;
};

typedef struct mm_set_power_req mm_set_power_req, *Pmm_set_power_req;

struct mm_set_power_req { // DWARF DIE: 1e6f
    uint8_t inst_nbr;
    int8_t power;
};

typedef struct mm_set_channel_cfm mm_set_channel_cfm, *Pmm_set_channel_cfm;

struct mm_set_channel_cfm { // DWARF DIE: 1e22
    uint8_t radio_idx;
    int8_t power;
};

typedef struct mm_add_if_req mm_add_if_req, *Pmm_add_if_req;

struct mm_add_if_req { // DWARF DIE: 1f8a
    uint8_t type;
    struct mac_addr addr;
    _Bool p2p;
};

typedef struct mm_key_del_req mm_key_del_req, *Pmm_key_del_req;

struct mm_key_del_req { // DWARF DIE: 2312
    uint8_t hw_key_idx;
};

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 11b2
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct rxl_cntrl_env_tag rxl_cntrl_env_tag, *Prxl_cntrl_env_tag;

struct rxl_cntrl_env_tag { // DWARF DIE: 488a
    struct co_list ready;
    struct rx_dmadesc * first;
    struct rx_dmadesc * last;
    struct rx_dmadesc * free;
    uint32_t packet_stack_cnt;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 382e
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict4596_for_u anon_union.conflict4596_for_u, *Panon_union.conflict4596_for_u;

typedef struct anon_struct.conflict43ce anon_struct.conflict43ce, *Panon_struct.conflict43ce;

typedef struct anon_struct.conflict449b anon_struct.conflict449b, *Panon_struct.conflict449b;

struct anon_struct.conflict43ce { // DWARF DIE: 43ce
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

struct anon_struct.conflict449b { // DWARF DIE: 449b
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

union anon_union.conflict4596_for_u { // DWARF DIE: 4596
    struct anon_struct.conflict43ce sta;
    struct anon_struct.conflict449b ap;
};

struct vif_info_tag { // DWARF DIE: 45b9
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
    union anon_union.conflict4596_for_u u;
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

typedef union anon_union.conflict4596 anon_union.conflict4596, *Panon_union.conflict4596;

union anon_union.conflict4596 { // DWARF DIE: 4596
    struct anon_struct.conflict43ce sta;
    struct anon_struct.conflict449b ap;
};

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag { // DWARF DIE: 46f4
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 27c1
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 2ee7
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

typedef union anon_union.conflict3ef2_for_rate_map anon_union.conflict3ef2_for_rate_map, *Panon_union.conflict3ef2_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 3e55
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

union anon_union.conflict3ef2_for_rate_map { // DWARF DIE: 3ef2
    uint8_t ht[4];
};

struct step { // DWARF DIE: 3ecb
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

struct rc_sta_stats { // DWARF DIE: 2d81
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
    union anon_union.conflict3ef2_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 2cfe
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2cc3
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 2f36
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

struct sta_info_env_tag { // DWARF DIE: 311f
    struct co_list free_sta_list;
};

typedef union anon_union.conflict3ef2 anon_union.conflict3ef2, *Panon_union.conflict3ef2;

union anon_union.conflict3ef2 { // DWARF DIE: 3ef2
    uint8_t ht[4];
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 3d77
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 3d32
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 3985
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 395d
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef union anon_union.conflict3a36 anon_union.conflict3a36, *Panon_union.conflict3a36;

union anon_union.conflict3a36 { // DWARF DIE: 3a36
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 39ad
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

struct txl_buffer_env_tag { // DWARF DIE: 3a58
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict12d0 anon_union.conflict12d0, *Panon_union.conflict12d0;

union anon_union.conflict12d0 { // DWARF DIE: 12d0
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1286 anon_union.conflict1286, *Panon_union.conflict1286;

union anon_union.conflict1286 { // DWARF DIE: 1286
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict12ab anon_union.conflict12ab, *Panon_union.conflict12ab;

union anon_union.conflict12ab { // DWARF DIE: 12ab
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




// DWARF DIE: 4962

int mm_monitor_channel_req_handler
              (ke_msg_id_t msgid,mm_monitor_channel_req *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_L0();
  *puVar1 = 1;
  puVar1[3] = 0x11111111;
  puVar1[4] = 0x22222222;
  puVar1[5] = 0x33333333;
  puVar1[6] = 0x44444444;
  puVar1[7] = 0x55555555;
  puVar1[8] = 0x66666666;
  puVar1[2] = 0;
  puVar1[9] = 0x77777777;
  puVar1[1] = param->freq;
  FUN_00010088();
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s1;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_L0();
  *puVar1 = 1;
  puVar1[3] = 0x11111111;
  puVar1[4] = 0x22222222;
  puVar1[5] = 0x33333333;
  puVar1[6] = 0x44444444;
  puVar1[7] = 0x55555555;
  puVar1[8] = 0x66666666;
  puVar1[2] = 0;
  puVar1[9] = 0x77777777;
  puVar1[1] = *unaff_s1;
  FUN_00010088();
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 FUN_00010088(void)

{
  undefined4 *unaff_s0;
  
  FUN_00010088();
  *unaff_s0 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 4a37

int mm_monitor_enable_req_handler
              (ke_msg_id_t msgid,mm_monitor_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined4 *puVar1;
  phy_cfg_tag config;
  
  puVar1 = (undefined4 *)_L0();
  *puVar1 = 1;
  puVar1[3] = 0x11111111;
  puVar1[4] = 0x22222222;
  puVar1[5] = 0x33333333;
  puVar1[6] = 0x44444444;
  puVar1[7] = 0x55555555;
  puVar1[8] = 0x66666666;
  puVar1[2] = 0;
  puVar1[9] = 0x77777777;
  puVar1[1] = param->enable;
  FUN_00010130();
  _L0();
  FUN_00010154();
  _L0();
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s1;
  undefined4 *puVar1;
  undefined4 uStack00000000;
  
  puVar1 = (undefined4 *)_L0();
  *puVar1 = 1;
  puVar1[3] = 0x11111111;
  puVar1[4] = 0x22222222;
  puVar1[5] = 0x33333333;
  puVar1[6] = 0x44444444;
  puVar1[7] = 0x55555555;
  puVar1[8] = 0x66666666;
  puVar1[2] = 0;
  puVar1[9] = 0x77777777;
  puVar1[1] = *unaff_s1;
  FUN_00010130();
  uStack00000000 = 0;
  _L0();
  FUN_00010154();
  _L0();
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 FUN_00010130(void)

{
  undefined4 *unaff_s0;
  undefined4 uStack00000000;
  
  FUN_00010130();
  uStack00000000 = 0;
  _L0();
  FUN_00010154();
  _L0();
  *unaff_s0 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s0;
  
  _L0();
  FUN_00010154();
  _L0();
  *unaff_s0 = 0;
  _L0();
  return 0;
}



undefined4 FUN_00010154(void)

{
  undefined4 *unaff_s0;
  
  FUN_00010154();
  _L0();
  *unaff_s0 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s0;
  
  _L0();
  *unaff_s0 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 4b5b

int mm_cfg_rssi_req_handler
              (ke_msg_id_t msgid,mm_cfg_rssi_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  byte bVar1;
  uint8_t uVar2;
  int iVar3;
  
  bVar1 = param->vif_index;
  if (*(char *)((uint)bVar1 * 0x5d8 + 0x56) != '\0') {
    FUN_000101c0();
  }
  iVar3 = (uint)bVar1 * 0x5d8;
  *(int8_t *)(iVar3 + 0x76) = param->rssi_thold;
  uVar2 = param->rssi_hyst;
  *(undefined *)(iVar3 + 0x78) = 0;
  *(uint8_t *)(iVar3 + 0x77) = uVar2;
  return 0;
}



undefined4 FUN_000101c0(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  
  FUN_000101c0();
  iVar2 = unaff_s1 * 0x5d8 + unaff_s0;
  *(undefined *)(iVar2 + 0x76) = *(undefined *)(unaff_s2 + 1);
  uVar1 = *(undefined *)(unaff_s2 + 2);
  *(undefined *)(iVar2 + 0x78) = 0;
  *(undefined *)(iVar2 + 0x77) = uVar1;
  return 0;
}



// DWARF DIE: 4bf7

int mm_set_ps_options_req_handler
              (ke_msg_id_t msgid,mm_set_ps_options_req *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param->vif_index;
  if (*(char *)((uint)bVar1 * 0x5d8 + 0x56) != '\0') {
    _L0();
  }
  iVar2 = (uint)bVar1 * 0x5d8;
  *(uint16_t *)(iVar2 + 0x5c) = param->listen_interval;
  *(_Bool *)(iVar2 + 0x5e) = param->dont_listen_bc_mc;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  
  _L0();
  iVar1 = unaff_s1 * 0x5d8 + unaff_s0;
  *(undefined2 *)(iVar1 + 0x5c) = *(undefined2 *)(unaff_s2 + 2);
  *(undefined *)(iVar1 + 0x5e) = *(undefined *)(unaff_s2 + 4);
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 4d68

int mm_tim_update_req_handler
              (ke_msg_id_t msgid,mm_tim_update_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// DWARF DIE: 4ddf

int mm_bcn_change_req_handler
              (ke_msg_id_t msgid,mm_bcn_change_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// DWARF DIE: 4e50

int mm_remain_on_channel_req_handler
              (ke_msg_id_t msgid,mm_remain_on_channel_req *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  uint8_t uVar1;
  undefined4 uVar2;
  uint8_t *puVar3;
  undefined2 in_register_00002036;
  
  uVar2 = _L0();
  if (CONCAT22(in_register_00002036,src_id) != 0) {
    puVar3 = (uint8_t *)_LVL55();
    uVar1 = param->op_code;
    puVar3[1] = (uint8_t)uVar2;
    *puVar3 = uVar1;
    puVar3[2] = '\x04';
    _L0();
  }
  return 0;
}



undefined4 _L0(void)

{
  undefined uVar1;
  int unaff_s0;
  undefined *unaff_s1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar2 = _L0();
  if (unaff_s0 != 0) {
    puVar3 = (undefined *)_LVL55();
    uVar1 = *unaff_s1;
    puVar3[1] = (char)uVar2;
    *puVar3 = uVar1;
    puVar3[2] = 4;
    _L0();
  }
  return 0;
}



undefined4 _LVL55(void)

{
  undefined uVar1;
  undefined *unaff_s1;
  undefined *puVar2;
  undefined unaff_s2;
  
  puVar2 = (undefined *)_LVL55();
  uVar1 = *unaff_s1;
  puVar2[1] = unaff_s2;
  *puVar2 = uVar1;
  puVar2[2] = 4;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 51ff

int mm_sta_del_req_handler
              (ke_msg_id_t msgid,mm_sta_del_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  _L0();
  FUN_00010322();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010322();
  return 0;
}



undefined4 FUN_00010322(void)

{
  FUN_00010322();
  return 0;
}



// DWARF DIE: 528d

int mm_sta_add_req_handler
              (ke_msg_id_t msgid,mm_sta_add_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined *)_L0();
  uVar2 = FUN_00010356();
  *puVar1 = (char)uVar2;
  FUN_00010364();
  return 0;
}



undefined4 _L0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined *)_L0();
  uVar2 = FUN_00010356();
  *puVar1 = (char)uVar2;
  FUN_00010364();
  return 0;
}



undefined4 FUN_00010356(void)

{
  undefined *unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_00010356();
  *unaff_s0 = (char)uVar1;
  FUN_00010364();
  return 0;
}



undefined4 FUN_00010364(void)

{
  FUN_00010364();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4fec

int mm_key_del_req_handler
              (ke_msg_id_t msgid,mm_key_del_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  if ((_DAT_44b000d8 >> 0x18) + 1 < (uint)param->hw_key_idx) {
    FUN_000103b0();
  }
  FUN_000103bc();
  FUN_000103cc();
  return 0;
}



undefined4 FUN_000103b0(void)

{
  FUN_000103b0();
  FUN_000103bc();
  FUN_000103cc();
  return 0;
}



undefined4 FUN_000103bc(void)

{
  FUN_000103bc();
  FUN_000103cc();
  return 0;
}



undefined4 FUN_000103cc(void)

{
  FUN_000103cc();
  return 0;
}



// DWARF DIE: 50bf

int mm_key_add_req_handler
              (ke_msg_id_t msgid,mm_key_add_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined *)_L0();
  if (3 < param->key_idx) {
    FUN_0001041c();
  }
  if (0x20 < (param->key).length) {
    FUN_00010444();
  }
  if (5 < param->cipher_suite) {
    FUN_0001046a();
  }
  uVar2 = FUN_00010474();
  puVar1[1] = (char)uVar2;
  *puVar1 = 0;
  _LVL92();
  return 0;
}



undefined4 _L0(void)

{
  byte *unaff_s0;
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined *)_L0();
  if (3 < *unaff_s0) {
    FUN_0001041c();
  }
  if (0x20 < unaff_s0[4]) {
    FUN_00010444();
  }
  if (5 < unaff_s0[0x28]) {
    FUN_0001046a();
  }
  uVar2 = FUN_00010474();
  puVar1[1] = (char)uVar2;
  *puVar1 = 0;
  _LVL92();
  return 0;
}



undefined4 FUN_0001041c(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  undefined4 uVar1;
  
  FUN_0001041c();
  if (0x20 < *(byte *)(unaff_s0 + 4)) {
    FUN_00010444();
  }
  if (5 < *(byte *)(unaff_s0 + 0x28)) {
    FUN_0001046a();
  }
  uVar1 = FUN_00010474();
  unaff_s1[1] = (char)uVar1;
  *unaff_s1 = 0;
  _LVL92();
  return 0;
}



undefined4 FUN_00010444(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  undefined4 uVar1;
  
  FUN_00010444();
  if (5 < *(byte *)(unaff_s0 + 0x28)) {
    FUN_0001046a();
  }
  uVar1 = FUN_00010474();
  unaff_s1[1] = (char)uVar1;
  *unaff_s1 = 0;
  _LVL92();
  return 0;
}



undefined4 FUN_0001046a(void)

{
  undefined *unaff_s1;
  undefined4 uVar1;
  
  FUN_0001046a();
  uVar1 = FUN_00010474();
  unaff_s1[1] = (char)uVar1;
  *unaff_s1 = 0;
  _LVL92();
  return 0;
}



undefined4 FUN_00010474(void)

{
  undefined *unaff_s1;
  undefined4 uVar1;
  
  uVar1 = FUN_00010474();
  unaff_s1[1] = (char)uVar1;
  *unaff_s1 = 0;
  _LVL92();
  return 0;
}



undefined4 _LVL92(void)

{
  _LVL92();
  return 0;
}



// DWARF DIE: 557b

int mm_set_power_req_handler
              (ke_msg_id_t msgid,mm_set_power_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = param->inst_nbr;
  iVar3 = _L0();
  iVar2 = (uint)bVar1 * 0x5d8;
  *(int8_t *)(iVar2 + 0x5a) = param->power;
  *(undefined *)(iVar3 + 1) = *(undefined *)(iVar2 + 0x59);
  *(undefined *)(iVar2 + 0x59) = 0x7f;
  _L0();
  FUN_000104f6();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s2;
  
  iVar2 = _L0();
  iVar1 = unaff_s1 * 0x5d8;
  *(undefined *)(iVar1 + 0x5a) = *(undefined *)(unaff_s2 + 1);
  *(undefined *)(iVar2 + 1) = *(undefined *)(iVar1 + 0x59);
  *(undefined *)(iVar1 + 0x59) = 0x7f;
  _L0();
  FUN_000104f6();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000104f6();
  return 0;
}



undefined4 FUN_000104f6(void)

{
  FUN_000104f6();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 539f

int mm_set_idle_req_handler
              (ke_msg_id_t msgid,mm_set_idle_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0(_DAT_00000010,_DAT_00000020);
  if (iVar1 == 3) {
_L0:
    iVar1 = 2;
  }
  else {
    _DAT_00000020 = _DAT_00000020 & 0xffff | (uint3)param->hw_idle << 0x10;
    if (param->hw_idle == 0) {
      iVar1 = _L0();
      if (iVar1 == 2) goto _L0;
      _L0();
    }
    else {
      iVar1 = _L0();
      if (iVar1 != 0) {
        if (iVar1 == 2) {
          return 2;
        }
        _L0();
        FUN_00010572();
        return 2;
      }
      if ((_DAT_44b00038 & 0xf) != 0) {
        FUN_0001059a();
      }
      _DAT_00000010 &= 0xffff;
    }
    FUN_000105ae();
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(uint uRam00000010,uint3 param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte *in_stack_0000000c;
  
  iVar2 = _L0(uRam00000010,param_2);
  if (iVar2 == 3) {
_L0:
    uVar1 = 2;
  }
  else {
    param_2 = param_2 & 0xffff | (uint3)*in_stack_0000000c << 0x10;
    if (*in_stack_0000000c == 0) {
      iVar2 = _L0();
      if (iVar2 == 2) goto _L0;
      _L0();
    }
    else {
      iVar2 = _L0();
      if (iVar2 != 0) {
        if (iVar2 == 2) {
          return 2;
        }
        _L0();
        FUN_00010572();
        return 2;
      }
      if ((_DAT_44b00038 & 0xf) != 0) {
        FUN_0001059a();
      }
      uRam00000010 &= 0xffff;
    }
    FUN_000105ae();
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    if ((_DAT_44b00038 & 0xf) != 0) {
      FUN_0001059a();
    }
    *(undefined2 *)(unaff_s1 + 0x12) = 0;
    FUN_000105ae();
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
    if (iVar2 != 2) {
      _L0();
      FUN_00010572();
      uVar1 = 2;
    }
  }
  return uVar1;
}



void _L0(void)

{
  _L0();
  FUN_00010572();
  return;
}



void FUN_00010572(void)

{
  FUN_00010572();
  return;
}



undefined4 FUN_0001059a(void)

{
  int unaff_s1;
  
  FUN_0001059a();
  *(undefined2 *)(unaff_s1 + 0x12) = 0;
  FUN_000105ae();
  return 0;
}



undefined4 FUN_000105ae(void)

{
  FUN_000105ae();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _L0();
  if (iVar2 == 2) {
    uVar1 = 2;
  }
  else {
    _L0();
    FUN_000105ae();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000105ae();
  return 0;
}



// DWARF DIE: 5b27

int mm_reset_req_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  _L0();
  _L0();
  _L0();
  _L0();
  FUN_0001060a();
  FUN_00010616();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  _L0();
  _L0();
  _L0();
  FUN_0001060a();
  FUN_00010616();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  _L0();
  _L0();
  FUN_0001060a();
  FUN_00010616();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  _L0();
  FUN_0001060a();
  FUN_00010616();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_0001060a();
  FUN_00010616();
  return 0;
}



undefined4 FUN_0001060a(void)

{
  FUN_0001060a();
  FUN_00010616();
  return 0;
}



undefined4 FUN_00010616(void)

{
  FUN_00010616();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5bff

int mm_version_req_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_L0();
  *puVar1 = 0x5040000;
  puVar1[1] = _DAT_44b00004;
  puVar1[2] = _DAT_44b00008;
  _L0();
  puVar1[5] = 0x89df;
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_L0();
  *puVar1 = 0x5040000;
  puVar1[1] = _DAT_44b00004;
  puVar1[2] = _DAT_44b00008;
  _L0();
  puVar1[5] = 0x89df;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x14) = 0x89df;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 59e9

int mm_start_req_handler
              (ke_msg_id_t msgid,mm_start_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0(_DAT_00000020);
  if (iVar1 != 0) {
    FUN_000106aa(_DAT_00000020);
  }
  FUN_000106b4(_DAT_00000020);
  FUN_000106cc(_DAT_00000020);
  FUN_000106d6(_DAT_00000020);
  _DAT_00000020 = param->uapsd_timeout * 1000 & 0xffff0000 | (uint)param->lp_clk_accuracy;
  _L0();
  _L0();
  _L0();
  FUN_0001071e();
  return 0;
}



undefined4 _L0(uint uRam00000020)

{
  int unaff_s1;
  int iVar1;
  
  iVar1 = _L0(uRam00000020);
  if (iVar1 != 0) {
    FUN_000106aa(uRam00000020);
  }
  FUN_000106b4(uRam00000020);
  FUN_000106cc(uRam00000020);
  FUN_000106d6(uRam00000020);
  uRam00000020 = *(int *)(unaff_s1 + 0x40) * 1000 & 0xffff0000U | (uint)*(ushort *)(unaff_s1 + 0x44)
  ;
  _L0();
  _L0();
  _L0();
  FUN_0001071e();
  return 0;
}



undefined4 FUN_000106aa(uint uRam00000020)

{
  int unaff_s1;
  
  FUN_000106aa(uRam00000020);
  FUN_000106b4(uRam00000020);
  FUN_000106cc(uRam00000020);
  FUN_000106d6(uRam00000020);
  uRam00000020 = *(int *)(unaff_s1 + 0x40) * 1000 & 0xffff0000U | (uint)*(ushort *)(unaff_s1 + 0x44)
  ;
  _L0();
  _L0();
  _L0();
  FUN_0001071e();
  return 0;
}



undefined4 FUN_000106b4(uint uRam00000020)

{
  int unaff_s1;
  
  FUN_000106b4(uRam00000020);
  FUN_000106cc(uRam00000020);
  FUN_000106d6(uRam00000020);
  uRam00000020 = *(int *)(unaff_s1 + 0x40) * 1000 & 0xffff0000U | (uint)*(ushort *)(unaff_s1 + 0x44)
  ;
  _L0();
  _L0();
  _L0();
  FUN_0001071e();
  return 0;
}



undefined4 FUN_000106cc(uint uRam00000020)

{
  int unaff_s1;
  
  FUN_000106cc(uRam00000020);
  FUN_000106d6(uRam00000020);
  uRam00000020 = *(int *)(unaff_s1 + 0x40) * 1000 & 0xffff0000U | (uint)*(ushort *)(unaff_s1 + 0x44)
  ;
  _L0();
  _L0();
  _L0();
  FUN_0001071e();
  return 0;
}



undefined4 FUN_000106d6(uint uRam00000020)

{
  int unaff_s1;
  
  FUN_000106d6(uRam00000020);
  uRam00000020 = *(int *)(unaff_s1 + 0x40) * 1000 & 0xffff0000U | (uint)*(ushort *)(unaff_s1 + 0x44)
  ;
  _L0();
  _L0();
  _L0();
  FUN_0001071e();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  _L0();
  _L0();
  FUN_0001071e();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  _L0();
  FUN_0001071e();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_0001071e();
  return 0;
}



undefined4 FUN_0001071e(void)

{
  FUN_0001071e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 62a4

int mm_set_ps_mode_req_handler
              (ke_msg_id_t msgid,mm_set_ps_mode_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int **ppiVar1;
  
  ppiVar1 = _DAT_00000008;
  if (param->new_state == '\x03') {
    for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
      if ((*(char *)((int)ppiVar1 + 0x56) == '\0') && (*(char *)(ppiVar1 + 0x16) != '\0')) {
        FUN_0001077c((int *)ppiVar1);
      }
    }
    FUN_0001075c();
  }
  else {
    _LVL158();
  }
  return 0;
}



undefined4 FUN_0001075c(void)

{
  FUN_0001075c();
  return 0;
}



undefined4 FUN_0001077c(int *param_1)

{
  int *unaff_s0;
  
  do {
    FUN_0001077c(param_1);
    do {
      unaff_s0 = (int *)*unaff_s0;
      if (unaff_s0 == (int *)0x0) {
        FUN_0001075c();
        return 0;
      }
    } while ((*(char *)((int)unaff_s0 + 0x56) != '\0') ||
            (param_1 = unaff_s0, *(char *)(unaff_s0 + 0x16) == '\0'));
  } while( true );
}



undefined4 _LVL158(void)

{
  _LVL158();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6370

int mm_force_idle_req_handler
              (ke_msg_id_t msgid,mm_force_idle_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    if ((_DAT_44b00038 & 0xf) != 0) {
      FUN_000107f0();
    }
    FUN_000107fc();
    iVar1 = 0;
    (*param->cb)(param->cb);
  }
  else {
    iVar1 = 2;
    if (iVar2 != 2) {
      _L0();
      FUN_000107be();
    }
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  code **unaff_s0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    if ((_DAT_44b00038 & 0xf) != 0) {
      FUN_000107f0();
    }
    FUN_000107fc();
    uVar1 = 0;
    (**unaff_s0)(*unaff_s0);
  }
  else {
    uVar1 = 2;
    if (iVar2 != 2) {
      _L0();
      FUN_000107be();
    }
  }
  return uVar1;
}



void _L0(void)

{
  _L0();
  FUN_000107be();
  return;
}



void FUN_000107be(void)

{
  FUN_000107be();
  return;
}



undefined4 FUN_000107f0(void)

{
  code **unaff_s0;
  
  FUN_000107f0();
  FUN_000107fc();
  (**unaff_s0)(*unaff_s0);
  return 0;
}



undefined4 FUN_000107fc(void)

{
  code **unaff_s0;
  
  FUN_000107fc();
  (**unaff_s0)(*unaff_s0);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6476

int mm_hw_config_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined2 in_register_0000202a;
  int iVar6;
  undefined *puVar7;
  undefined *extraout_a0;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined uVar11;
  uint uVar12;
  
  uVar12 = CONCAT22(in_register_0000202a,msgid);
  iVar6 = _L0(_DAT_00000010,_DAT_00000020);
  if (iVar6 != 0) {
    if (1 < (iVar6 - 2U & 0xffff)) {
      DAT_00000013 = (byte)_DAT_44b00038 & 0xf;
      uVar8 = _L0();
      DAT_00000012 = (undefined)uVar8;
      _L0();
      FUN_00010dbc();
    }
    return 2;
  }
  if ((_DAT_44b00038 & 0xf) != 0) {
    FUN_00010864(_DAT_00000010,_DAT_00000020);
  }
  uVar5 = _DAT_00000020;
  if (uVar12 == 0x16) {
                    // WARNING: Load size is inaccurate
    *(undefined4 *)((*(byte *)((int)param + 5) + 4) * 4 + 4) = *param;
    if ((uVar5 != 0) && (*(char *)(uVar5 + 4) == *(char *)((int)param + 5))) {
      _DAT_44b000dc = 0x10;
    }
    iVar6 = _L161();
    return iVar6;
  }
  if (0x16 < uVar12) {
    if (uVar12 == 0x1e) {
      bVar2 = *(byte *)((int)param + 3);
      iVar6 = (uint)bVar2 * 0x5d8;
      if (*(char *)(iVar6 + 0x56) == '\0') {
        if (*(char *)((int)param + 2) == '\0') {
          _L0();
        }
        else {
          iVar10 = (uint)*(byte *)(iVar6 + 0x60) * 0x1b0;
          FUN_00010c8e();
                    // WARNING: Load size is inaccurate
          uVar4 = *param;
          iVar9 = *(int *)(iVar10 + 4);
          *(undefined2 *)(iVar6 + 0x5c) = 0;
          *(undefined2 *)(iVar10 + 0x18) = uVar4;
          uVar12 = _DAT_00000020 & 0xffff;
          *(undefined *)(iVar6 + 0x5e) = 0;
          *(short *)(iVar10 + 0x16) = (short)(((uVar12 + 0x14) * iVar9) / 1000000);
          uVar8 = _DAT_44b00120;
          *(undefined *)(iVar6 + 0x74) = 0;
          *(undefined4 *)(iVar6 + 0x70) = 0;
          *(undefined4 *)(iVar6 + 100) = uVar8;
          *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 1;
          *(undefined4 *)(iVar6 + 0x6c) = _DAT_44b00120;
          _L0();
        }
      }
      iVar6 = (uint)bVar2 * 0x5d8;
      cVar1 = *(char *)((int)param + 2);
      *(char *)(iVar6 + 0x58) = cVar1;
      if (cVar1 != '\0') {
        _DAT_44b00200 = *(undefined4 *)(iVar6 + 0x14);
        _DAT_44b00204 = *(undefined4 *)(iVar6 + 0x14);
        _DAT_44b00208 = *(undefined4 *)(iVar6 + 0x14);
        _DAT_44b0020c = *(undefined4 *)(iVar6 + 0x14);
        _L0();
      }
      iVar6 = _L161();
      return iVar6;
    }
    if (uVar12 < 0x1f) {
      if (uVar12 == 0x1a) {
        uVar12 = (uint)*(byte *)((int)param + 6);
        iVar6 = 0;
                    // WARNING: Load size is inaccurate
        *(undefined4 *)((uVar12 * 0x176 + (uint)*(byte *)((int)param + 5)) * 4 + 8) = *param;
        if (*(char *)(uVar12 * 0x5d8 + 0x58) != '\0') {
          cVar1 = *(char *)((int)param + 5);
                    // WARNING: Load size is inaccurate
          uVar8 = *param;
          if (cVar1 == '\x01') {
            _DAT_44b00204 = uVar8;
            _L0();
            return iVar6;
          }
          if (cVar1 != '\0') {
            if (cVar1 == '\x02') {
              _DAT_44b00208 = uVar8;
              _L0();
              return iVar6;
            }
            _DAT_44b0020c = uVar8;
            _L0();
            return iVar6;
          }
          _DAT_44b00200 = uVar8;
          _L0();
        }
        if (*(char *)(uVar12 * 0x5d8 + 0x56) == '\0') {
          FUN_00010bd6();
        }
        iVar6 = _L161();
        return iVar6;
      }
      if (uVar12 == 0x1c) {
                    // WARNING: Load size is inaccurate
        bVar2 = *param;
        if (((uint)bVar2 << 0xe & 0x3e0000) != 0) {
          FUN_00010c20();
        }
        _DAT_44b0004c = _DAT_44b0004c & 0xfffe3fff | (uint)bVar2 << 0xe;
        iVar6 = _L161();
        return iVar6;
      }
      if (uVar12 == 0x18) {
        FUN_00010940(_DAT_00000010);
        if ((uint)DAT_00000010 + (uint)DAT_00000011 == 1) {
                    // WARNING: Load size is inaccurate
          _DAT_44b00020 = *param;
          _DAT_44b00024 = (uint)*(ushort *)((int)param + 4);
        }
        iVar6 = _L161();
        return iVar6;
      }
    }
    else {
      if (uVar12 == 0x28) {
                    // WARNING: Load size is inaccurate
        uVar11 = 5;
        if (*param != '\0') {
          uVar11 = 0;
          _DAT_44b00054 |= 0x80;
        }
        FUN_00010d5c();
        *extraout_a0 = *(undefined *)((int)param + 1);
        uVar3 = *(undefined *)((int)param + 2);
        extraout_a0[2] = uVar11;
        extraout_a0[1] = uVar3;
        iVar6 = _L0();
        return iVar6;
      }
      if (uVar12 == 0x3b) {
        FUN_00010d7c();
        iVar6 = _L161();
        return iVar6;
      }
      if (uVar12 == 0x20) {
                    // WARNING: Load size is inaccurate
        _DAT_44b000e8 = (uint)*param * (_DAT_44b000e4 & 0xff) * 0x100 | (uint)*param;
        iVar6 = _L161();
        return iVar6;
      }
    }
    goto _L0;
  }
  if (uVar12 == 0xe) {
                    // WARNING: Load size is inaccurate
    uRam00000000 = *param;
    _DAT_44b00060 = uRam00000000 | _DAT_00000004;
    _L161();
_L0:
    iVar6 = 0;
  }
  else {
    if (uVar12 < 0xf) {
      if (uVar12 == 6) {
        puVar7 = (undefined *)FUN_00010a58();
        uVar8 = _LVL212();
        *puVar7 = (char)uVar8;
_L0:
        _L0();
        goto _L0;
      }
      if (uVar12 == 8) {
                    // WARNING: Load size is inaccurate
        if (*param < 2) {
          _L0();
        }
        if (_DAT_00000008 == 0) {
          _L0();
        }
        iVar6 = _L161();
        return iVar6;
      }
    }
    else {
      if (uVar12 == 0x12) {
                    // WARNING: Load size is inaccurate
        _DAT_44b00090 = (uint)*param | _DAT_44b00090 & 0xffffff00 | 0x80000000;
        iVar6 = _L161();
        return iVar6;
      }
      if (uVar12 == 0x14) {
        iVar6 = (uint)*(byte *)((int)param + 2) * 0x5d8;
                    // WARNING: Load size is inaccurate
        if (*(char *)(iVar6 + 0x56) == '\0') {
          *(uint *)((uint)*(byte *)(iVar6 + 0x60) * 0x1b0 + 4) = (uint)*param << 10;
        }
        else {
          _L0();
        }
        iVar6 = _L161();
        return iVar6;
      }
      if (uVar12 == 0x10) {
        FUN_000108ce();
        if (*(char *)((int)param + 8) != '\0') {
          _LVL186();
        }
        goto _L0;
      }
    }
_L0:
    FUN_000108a8();
    iVar6 = 2;
  }
  uVar12 = (uint)DAT_00000013;
  if ((uVar12 << 4 & 0xffffff0f) != 0) {
    FUN_00010a18();
  }
  _DAT_44b00038 = uVar12 << 4;
  FUN_00010a2e();
  return iVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(undefined2 param_1,uint uRam00000020)

{
  byte bVar1;
  ushort uVar2;
  uint *unaff_s0;
  int iVar3;
  undefined *puVar4;
  byte *extraout_a0;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  uint unaff_s2;
  uint uVar10;
  
  iVar3 = _L0(param_1,uRam00000020);
  if (iVar3 != 0) {
    if (1 < (iVar3 - 2U & 0xffff)) {
      DAT_00000013 = (byte)_DAT_44b00038 & 0xf;
      uVar5 = _L0();
      DAT_00000012 = (undefined)uVar5;
      _L0();
      FUN_00010dbc();
    }
    return 2;
  }
  if ((_DAT_44b00038 & 0xf) != 0) {
    FUN_00010864(param_1,uRam00000020);
  }
  uVar10 = uRam00000020;
  if (unaff_s2 == 0x16) {
    *(uint *)((*(byte *)((int)unaff_s0 + 5) + 4) * 4 + 4) = *unaff_s0;
    if ((uVar10 != 0) && (*(byte *)(uVar10 + 4) == *(byte *)((int)unaff_s0 + 5))) {
      _DAT_44b000dc = 0x10;
    }
    uVar5 = _L161();
    return uVar5;
  }
  if (0x16 < unaff_s2) {
    if (unaff_s2 == 0x1e) {
      bVar9 = *(byte *)((int)unaff_s0 + 3);
      iVar3 = (uint)bVar9 * 0x5d8;
      if (*(char *)(iVar3 + 0x56) == '\0') {
        if (*(byte *)((int)unaff_s0 + 2) == 0) {
          _L0();
        }
        else {
          iVar8 = (uint)*(byte *)(iVar3 + 0x60) * 0x1b0;
          FUN_00010c8e();
          uVar2 = *(ushort *)unaff_s0;
          iVar6 = *(int *)(iVar8 + 4);
          *(undefined2 *)(iVar3 + 0x5c) = 0;
          *(ushort *)(iVar8 + 0x18) = uVar2;
          uVar10 = uRam00000020 & 0xffff;
          *(undefined *)(iVar3 + 0x5e) = 0;
          *(short *)(iVar8 + 0x16) = (short)(((uVar10 + 0x14) * iVar6) / 1000000);
          uVar5 = _DAT_44b00120;
          *(undefined *)(iVar3 + 0x74) = 0;
          *(undefined4 *)(iVar3 + 0x70) = 0;
          *(undefined4 *)(iVar3 + 100) = uVar5;
          *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 1;
          *(undefined4 *)(iVar3 + 0x6c) = _DAT_44b00120;
          _L0();
        }
      }
      iVar3 = (uint)bVar9 * 0x5d8;
      bVar9 = *(byte *)((int)unaff_s0 + 2);
      *(byte *)(iVar3 + 0x58) = bVar9;
      if (bVar9 != 0) {
        _DAT_44b00200 = *(uint *)(iVar3 + 0x14);
        _DAT_44b00204 = *(undefined4 *)(iVar3 + 0x14);
        _DAT_44b00208 = *(undefined4 *)(iVar3 + 0x14);
        _DAT_44b0020c = *(undefined4 *)(iVar3 + 0x14);
        _L0();
      }
      uVar5 = _L161();
      return uVar5;
    }
    if (unaff_s2 < 0x1f) {
      if (unaff_s2 == 0x1a) {
        uVar10 = (uint)*(byte *)((int)unaff_s0 + 6);
        uVar5 = 0;
        *(uint *)((uVar10 * 0x176 + (uint)*(byte *)((int)unaff_s0 + 5)) * 4 + 8) = *unaff_s0;
        if (*(char *)(uVar10 * 0x5d8 + 0x58) != '\0') {
          bVar9 = *(byte *)((int)unaff_s0 + 5);
          uVar7 = *unaff_s0;
          if (bVar9 == 1) {
            _DAT_44b00204 = uVar7;
            _L0();
            return uVar5;
          }
          if (bVar9 != 0) {
            if (bVar9 == 2) {
              _DAT_44b00208 = uVar7;
              _L0();
              return uVar5;
            }
            _DAT_44b0020c = uVar7;
            _L0();
            return uVar5;
          }
          _DAT_44b00200 = uVar7;
          _L0();
        }
        if (*(char *)(uVar10 * 0x5d8 + 0x56) == '\0') {
          FUN_00010bd6();
        }
        uVar5 = _L161();
        return uVar5;
      }
      if (unaff_s2 == 0x1c) {
        bVar9 = *(byte *)unaff_s0;
        if (((uint)bVar9 << 0xe & 0x3e0000) != 0) {
          FUN_00010c20();
        }
        _DAT_44b0004c = _DAT_44b0004c & 0xfffe3fff | (uint)bVar9 << 0xe;
        uVar5 = _L161();
        return uVar5;
      }
      if (unaff_s2 == 0x18) {
        FUN_00010940(param_1);
        if ((uint)(byte)param_1 + (uint)param_1._1_1_ == 1) {
          _DAT_44b00020 = *unaff_s0;
          _DAT_44b00024 = (uint)*(ushort *)(unaff_s0 + 1);
        }
        uVar5 = _L161();
        return uVar5;
      }
    }
    else {
      if (unaff_s2 == 0x28) {
        bVar9 = 5;
        if (*(byte *)unaff_s0 != 0) {
          bVar9 = 0;
          _DAT_44b00054 |= 0x80;
        }
        FUN_00010d5c();
        *extraout_a0 = *(byte *)((int)unaff_s0 + 1);
        bVar1 = *(byte *)((int)unaff_s0 + 2);
        extraout_a0[2] = bVar9;
        extraout_a0[1] = bVar1;
        uVar5 = _L0();
        return uVar5;
      }
      if (unaff_s2 == 0x3b) {
        FUN_00010d7c();
        uVar5 = _L161();
        return uVar5;
      }
      if (unaff_s2 == 0x20) {
        _DAT_44b000e8 =
             (uint)*(byte *)unaff_s0 * (_DAT_44b000e4 & 0xff) * 0x100 | (uint)*(byte *)unaff_s0;
        uVar5 = _L161();
        return uVar5;
      }
    }
    goto _L0;
  }
  if (unaff_s2 == 0xe) {
    uRam00000000 = *unaff_s0;
    _DAT_44b00060 = uRam00000000 | _DAT_00000004;
    _L161();
_L0:
    uVar5 = 0;
  }
  else {
    if (unaff_s2 < 0xf) {
      if (unaff_s2 == 6) {
        puVar4 = (undefined *)FUN_00010a58();
        uVar5 = _LVL212();
        *puVar4 = (char)uVar5;
_L0:
        _L0();
        goto _L0;
      }
      if (unaff_s2 == 8) {
        if (*(byte *)unaff_s0 < 2) {
          _L0();
        }
        if (_DAT_00000008 == 0) {
          _L0();
        }
        uVar5 = _L161();
        return uVar5;
      }
    }
    else {
      if (unaff_s2 == 0x12) {
        _DAT_44b00090 = (uint)*(byte *)unaff_s0 | _DAT_44b00090 & 0xffffff00 | 0x80000000;
        uVar5 = _L161();
        return uVar5;
      }
      if (unaff_s2 == 0x14) {
        iVar3 = (uint)*(byte *)((int)unaff_s0 + 2) * 0x5d8;
        if (*(char *)(iVar3 + 0x56) == '\0') {
          *(uint *)((uint)*(byte *)(iVar3 + 0x60) * 0x1b0 + 4) = (uint)*(ushort *)unaff_s0 << 10;
        }
        else {
          _L0();
        }
        uVar5 = _L161();
        return uVar5;
      }
      if (unaff_s2 == 0x10) {
        FUN_000108ce();
        if (*(byte *)(unaff_s0 + 2) != 0) {
          _LVL186();
        }
        goto _L0;
      }
    }
_L0:
    FUN_000108a8();
    uVar5 = 2;
  }
  uVar10 = (uint)DAT_00000013;
  if ((uVar10 << 4 & 0xffffff0f) != 0) {
    FUN_00010a18();
  }
  _DAT_44b00038 = uVar10 << 4;
  FUN_00010a2e();
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010864(undefined2 uRam00000010,uint uRam00000020)

{
  byte bVar1;
  ushort uVar2;
  uint *unaff_s0;
  undefined4 uVar3;
  undefined *puVar4;
  byte *extraout_a0;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  uint unaff_s2;
  uint uVar10;
  
  FUN_00010864(uRam00000010,uRam00000020);
  uVar10 = uRam00000020;
  if (unaff_s2 == 0x16) {
    *(uint *)((*(byte *)((int)unaff_s0 + 5) + 4) * 4 + 4) = *unaff_s0;
    if ((uVar10 != 0) && (*(byte *)(uVar10 + 4) == *(byte *)((int)unaff_s0 + 5))) {
      _DAT_44b000dc = 0x10;
    }
    uVar3 = _L161();
    return uVar3;
  }
  if (0x16 < unaff_s2) {
    if (unaff_s2 == 0x1e) {
      bVar9 = *(byte *)((int)unaff_s0 + 3);
      iVar6 = (uint)bVar9 * 0x5d8;
      if (*(char *)(iVar6 + 0x56) == '\0') {
        if (*(byte *)((int)unaff_s0 + 2) == 0) {
          _L0();
        }
        else {
          iVar8 = (uint)*(byte *)(iVar6 + 0x60) * 0x1b0;
          FUN_00010c8e();
          uVar2 = *(ushort *)unaff_s0;
          iVar5 = *(int *)(iVar8 + 4);
          *(undefined2 *)(iVar6 + 0x5c) = 0;
          *(ushort *)(iVar8 + 0x18) = uVar2;
          uVar10 = uRam00000020 & 0xffff;
          *(undefined *)(iVar6 + 0x5e) = 0;
          *(short *)(iVar8 + 0x16) = (short)(((uVar10 + 0x14) * iVar5) / 1000000);
          uVar3 = _DAT_44b00120;
          *(undefined *)(iVar6 + 0x74) = 0;
          *(undefined4 *)(iVar6 + 0x70) = 0;
          *(undefined4 *)(iVar6 + 100) = uVar3;
          *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 1;
          *(undefined4 *)(iVar6 + 0x6c) = _DAT_44b00120;
          _L0();
        }
      }
      iVar6 = (uint)bVar9 * 0x5d8;
      bVar9 = *(byte *)((int)unaff_s0 + 2);
      *(byte *)(iVar6 + 0x58) = bVar9;
      if (bVar9 != 0) {
        _DAT_44b00200 = *(uint *)(iVar6 + 0x14);
        _DAT_44b00204 = *(undefined4 *)(iVar6 + 0x14);
        _DAT_44b00208 = *(undefined4 *)(iVar6 + 0x14);
        _DAT_44b0020c = *(undefined4 *)(iVar6 + 0x14);
        _L0();
      }
      uVar3 = _L161();
      return uVar3;
    }
    if (unaff_s2 < 0x1f) {
      if (unaff_s2 == 0x1a) {
        uVar10 = (uint)*(byte *)((int)unaff_s0 + 6);
        uVar3 = 0;
        *(uint *)((uVar10 * 0x176 + (uint)*(byte *)((int)unaff_s0 + 5)) * 4 + 8) = *unaff_s0;
        if (*(char *)(uVar10 * 0x5d8 + 0x58) != '\0') {
          bVar9 = *(byte *)((int)unaff_s0 + 5);
          uVar7 = *unaff_s0;
          if (bVar9 == 1) {
            _DAT_44b00204 = uVar7;
            _L0();
            return uVar3;
          }
          if (bVar9 != 0) {
            if (bVar9 != 2) {
              _DAT_44b0020c = uVar7;
              _L0();
              return uVar3;
            }
            _DAT_44b00208 = uVar7;
            _L0();
            return uVar3;
          }
          _DAT_44b00200 = uVar7;
          _L0();
        }
        if (*(char *)(uVar10 * 0x5d8 + 0x56) == '\0') {
          FUN_00010bd6();
        }
        uVar3 = _L161();
        return uVar3;
      }
      if (unaff_s2 == 0x1c) {
        bVar9 = *(byte *)unaff_s0;
        if (((uint)bVar9 << 0xe & 0x3e0000) != 0) {
          FUN_00010c20();
        }
        _DAT_44b0004c = _DAT_44b0004c & 0xfffe3fff | (uint)bVar9 << 0xe;
        uVar3 = _L161();
        return uVar3;
      }
      if (unaff_s2 == 0x18) {
        FUN_00010940(uRam00000010);
        if ((uint)(byte)uRam00000010 + (uint)uRam00000010._1_1_ == 1) {
          _DAT_44b00020 = *unaff_s0;
          _DAT_44b00024 = (uint)*(ushort *)(unaff_s0 + 1);
        }
        uVar3 = _L161();
        return uVar3;
      }
    }
    else {
      if (unaff_s2 == 0x28) {
        bVar9 = 5;
        if (*(byte *)unaff_s0 != 0) {
          bVar9 = 0;
          _DAT_44b00054 |= 0x80;
        }
        FUN_00010d5c();
        *extraout_a0 = *(byte *)((int)unaff_s0 + 1);
        bVar1 = *(byte *)((int)unaff_s0 + 2);
        extraout_a0[2] = bVar9;
        extraout_a0[1] = bVar1;
        uVar3 = _L0();
        return uVar3;
      }
      if (unaff_s2 == 0x3b) {
        FUN_00010d7c();
        uVar3 = _L161();
        return uVar3;
      }
      if (unaff_s2 == 0x20) {
        _DAT_44b000e8 =
             (uint)*(byte *)unaff_s0 * (_DAT_44b000e4 & 0xff) * 0x100 | (uint)*(byte *)unaff_s0;
        uVar3 = _L161();
        return uVar3;
      }
    }
    goto _L0;
  }
  if (unaff_s2 == 0xe) {
    uRam00000000 = *unaff_s0;
    _DAT_44b00060 = uRam00000000 | _DAT_00000004;
    _L161();
_L0:
    uVar3 = 0;
  }
  else {
    if (unaff_s2 < 0xf) {
      if (unaff_s2 == 6) {
        puVar4 = (undefined *)FUN_00010a58();
        uVar3 = _LVL212();
        *puVar4 = (char)uVar3;
_L0:
        _L0();
        goto _L0;
      }
      if (unaff_s2 == 8) {
        if (*(byte *)unaff_s0 < 2) {
          _L0();
        }
        if (_DAT_00000008 == 0) {
          _L0();
        }
        uVar3 = _L161();
        return uVar3;
      }
    }
    else {
      if (unaff_s2 == 0x12) {
        _DAT_44b00090 = (uint)*(byte *)unaff_s0 | _DAT_44b00090 & 0xffffff00 | 0x80000000;
        uVar3 = _L161();
        return uVar3;
      }
      if (unaff_s2 == 0x14) {
        iVar6 = (uint)*(byte *)((int)unaff_s0 + 2) * 0x5d8;
        if (*(char *)(iVar6 + 0x56) == '\0') {
          *(uint *)((uint)*(byte *)(iVar6 + 0x60) * 0x1b0 + 4) = (uint)*(ushort *)unaff_s0 << 10;
        }
        else {
          _L0();
        }
        uVar3 = _L161();
        return uVar3;
      }
      if (unaff_s2 == 0x10) {
        FUN_000108ce();
        if (*(byte *)(unaff_s0 + 2) != 0) {
          _LVL186();
        }
        goto _L0;
      }
    }
_L0:
    FUN_000108a8();
    uVar3 = 2;
  }
  uVar10 = (uint)DAT_00000013;
  if ((uVar10 << 4 & 0xffffff0f) != 0) {
    FUN_00010a18();
  }
  _DAT_44b00038 = uVar10 << 4;
  FUN_00010a2e();
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000108a8(void)

{
  uint uVar1;
  int unaff_s4;
  
  FUN_000108a8();
  uVar1 = (uint)*(byte *)(unaff_s4 + 0x13) << 4;
  if ((uVar1 & 0xffffff0f) != 0) {
    FUN_00010a18();
  }
  _DAT_44b00038 = uVar1;
  FUN_00010a2e();
  return 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000108ce(void)

{
  int unaff_s0;
  uint uVar1;
  int unaff_s4;
  
  FUN_000108ce();
  if (*(char *)(unaff_s0 + 8) != '\0') {
    _LVL186();
  }
  _L0();
  uVar1 = (uint)*(byte *)(unaff_s4 + 0x13) << 4;
  if ((uVar1 & 0xffffff0f) != 0) {
    FUN_00010a18();
  }
  _DAT_44b00038 = uVar1;
  FUN_00010a2e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _LVL186(void)

{
  uint uVar1;
  int unaff_s4;
  
  _LVL186();
  _L0();
  uVar1 = (uint)*(byte *)(unaff_s4 + 0x13) << 4;
  if ((uVar1 & 0xffffff0f) != 0) {
    FUN_00010a18();
  }
  _DAT_44b00038 = uVar1;
  FUN_00010a2e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s4;
  
  _L0();
  uVar1 = (uint)*(byte *)(unaff_s4 + 0x13) << 4;
  if ((uVar1 & 0xffffff0f) != 0) {
    FUN_00010a18();
  }
  _DAT_44b00038 = uVar1;
  FUN_00010a2e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010940(undefined2 param_1)

{
  undefined4 *unaff_s0;
  
  FUN_00010940(param_1);
  if ((uint)(byte)param_1 + (uint)param_1._1_1_ == 1) {
    _DAT_44b00020 = *unaff_s0;
    _DAT_44b00024 = (uint)*(ushort *)(unaff_s0 + 1);
  }
  _L161();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L161(void)

{
  uint uVar1;
  int unaff_s4;
  
  _L161();
  uVar1 = (uint)*(byte *)(unaff_s4 + 0x13) << 4;
  if ((uVar1 & 0xffffff0f) != 0) {
    FUN_00010a18();
  }
  _DAT_44b00038 = uVar1;
  FUN_00010a2e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a18(void)

{
  undefined4 unaff_s2;
  
  FUN_00010a18();
  _DAT_44b00038 = unaff_s2;
  FUN_00010a2e();
  return;
}



void FUN_00010a2e(void)

{
  FUN_00010a2e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010a58(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_s4;
  
  puVar1 = (undefined *)FUN_00010a58();
  uVar2 = _LVL212();
  *puVar1 = (char)uVar2;
  _L0();
  uVar3 = (uint)*(byte *)(unaff_s4 + 0x13) << 4;
  if ((uVar3 & 0xffffff0f) != 0) {
    FUN_00010a18();
  }
  _DAT_44b00038 = uVar3;
  FUN_00010a2e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _LVL212(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *unaff_s2;
  int unaff_s4;
  
  uVar1 = _LVL212();
  *unaff_s2 = (char)uVar1;
  _L0();
  uVar2 = (uint)*(byte *)(unaff_s4 + 0x13) << 4;
  if ((uVar2 & 0xffffff0f) != 0) {
    FUN_00010a18();
  }
  _DAT_44b00038 = uVar2;
  FUN_00010a2e();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  if (_DAT_00000008 == 0) {
    _L0();
  }
  _L161();
  return;
}



void _L0(void)

{
  _L0();
  _L161();
  return;
}



void _L0(void)

{
  _L0();
  _L161();
  return;
}



void _L0(void)

{
  int unaff_s2;
  int unaff_s5;
  
  _L0();
  if (*(char *)(unaff_s5 * 0x5d8 + unaff_s2 + 0x56) == '\0') {
    FUN_00010bd6();
  }
  _L161();
  return;
}



void FUN_00010bd6(void)

{
  FUN_00010bd6();
  _L161();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010c20(void)

{
  uint unaff_s0;
  
  FUN_00010c20();
  _DAT_44b0004c = _DAT_44b0004c & 0xfffe3fff | unaff_s0;
  _L161();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010c8e(void)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined2 *unaff_s0;
  int iVar4;
  undefined4 uVar5;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  FUN_00010c8e();
  uVar2 = *unaff_s0;
  iVar4 = *(int *)(unaff_s6 + 4);
  *(undefined2 *)(unaff_s2 + 0x5c) = 0;
  *(undefined2 *)(unaff_s6 + 0x18) = uVar2;
  uVar3 = *(ushort *)(unaff_s4 + 0x20);
  *(undefined *)(unaff_s2 + 0x5e) = 0;
  *(short *)(unaff_s6 + 0x16) = (short)(((uVar3 + 0x14) * iVar4) / 1000000);
  uVar5 = *(undefined4 *)(unaff_s8 + 0x120);
  *(undefined *)(unaff_s2 + 0x74) = 0;
  *(undefined4 *)(unaff_s2 + 0x70) = 0;
  *(undefined4 *)(unaff_s2 + 100) = uVar5;
  *(uint *)(unaff_s2 + 4) = *(uint *)(unaff_s2 + 4) | 1;
  *(undefined4 *)(unaff_s2 + 0x6c) = *(undefined4 *)(unaff_s8 + 0x120);
  _L0();
  cVar1 = *(char *)(unaff_s0 + 1);
  iVar4 = unaff_s7 * 0x5d8 + unaff_s5;
  *(char *)(iVar4 + 0x58) = cVar1;
  if (cVar1 != '\0') {
    _DAT_44b00200 = *(undefined4 *)(iVar4 + 0x14);
    _DAT_44b00204 = *(undefined4 *)(iVar4 + 0x14);
    _DAT_44b00208 = *(undefined4 *)(iVar4 + 0x14);
    _DAT_44b0020c = *(undefined4 *)(iVar4 + 0x14);
    _L0();
  }
  _L161();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  char cVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s5;
  int unaff_s7;
  
  _L0();
  cVar1 = *(char *)(unaff_s0 + 2);
  iVar2 = unaff_s7 * 0x5d8 + unaff_s5;
  *(char *)(iVar2 + 0x58) = cVar1;
  if (cVar1 != '\0') {
    _DAT_44b00200 = *(undefined4 *)(iVar2 + 0x14);
    _DAT_44b00204 = *(undefined4 *)(iVar2 + 0x14);
    _DAT_44b00208 = *(undefined4 *)(iVar2 + 0x14);
    _DAT_44b0020c = *(undefined4 *)(iVar2 + 0x14);
    _L0();
  }
  _L161();
  return;
}



void _L0(void)

{
  _L0();
  _L161();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  char cVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s5;
  int unaff_s7;
  
  _L0();
  cVar1 = *(char *)(unaff_s0 + 2);
  iVar2 = unaff_s7 * 0x5d8 + unaff_s5;
  *(char *)(iVar2 + 0x58) = cVar1;
  if (cVar1 != '\0') {
    _DAT_44b00200 = *(undefined4 *)(iVar2 + 0x14);
    _DAT_44b00204 = *(undefined4 *)(iVar2 + 0x14);
    _DAT_44b00208 = *(undefined4 *)(iVar2 + 0x14);
    _DAT_44b0020c = *(undefined4 *)(iVar2 + 0x14);
    _L0();
  }
  _L161();
  return;
}



void FUN_00010d5c(void)

{
  undefined uVar1;
  int unaff_s0;
  undefined *extraout_a0;
  undefined unaff_s2;
  
  FUN_00010d5c();
  *extraout_a0 = *(undefined *)(unaff_s0 + 1);
  uVar1 = *(undefined *)(unaff_s0 + 2);
  extraout_a0[2] = unaff_s2;
  extraout_a0[1] = uVar1;
  _L0();
  return;
}



void FUN_00010d7c(void)

{
  FUN_00010d7c();
  _L161();
  return;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = _L0();
  *(char *)(unaff_s0 + 0x12) = (char)uVar1;
  _L0();
  FUN_00010dbc();
  return 2;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010dbc();
  return 2;
}



undefined4 FUN_00010dbc(void)

{
  FUN_00010dbc();
  return 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5cd2

int bl60x_edca_get(int ac,uint8_t *aifs,uint8_t *cwmin,uint8_t *cwmax,uint16_t *txop)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _DAT_44b00200;
  uVar2 = _DAT_44b00204;
  if (ac != 1) {
    if (ac < 2) {
      if (ac == 0) {
        *txop = (uint16_t)(_DAT_44b00200 >> 0xc);
        *cwmax = (byte)(uVar1 >> 8) & 0xf;
        *cwmin = (byte)(uVar1 >> 4) & 0xf;
        *aifs = (byte)uVar1 & 0xf;
        return 0;
      }
    }
    else {
      uVar2 = _DAT_44b00208;
      if ((ac == 2) || (uVar2 = _DAT_44b0020c, ac == 3)) goto _L0;
    }
    return -1;
  }
_L0:
  *txop = (uint16_t)(uVar2 >> 0xc);
  *cwmax = (byte)(uVar2 >> 8) & 0xf;
  *cwmin = (byte)(uVar2 >> 4) & 0xf;
  *aifs = (byte)uVar2 & 0xf;
  return 0;
}


