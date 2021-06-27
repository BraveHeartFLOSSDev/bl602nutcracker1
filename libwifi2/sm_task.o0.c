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

typedef union anon_union.conflict3494_for_field_0 anon_union.conflict3494_for_field_0, *Panon_union.conflict3494_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict15f7_for_field_3 anon_union.conflict15f7_for_field_3, *Panon_union.conflict15f7_for_field_3;

typedef union anon_union.conflict161c_for_field_4 anon_union.conflict161c_for_field_4, *Panon_union.conflict161c_for_field_4;

typedef union anon_union.conflict1641_for_field_5 anon_union.conflict1641_for_field_5, *Panon_union.conflict1641_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: f6f
    struct co_list_hdr * next;
};

struct mac_addr { // DWARF DIE: a45
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 2f5e
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

struct tx_cfm_tag { // DWARF DIE: 1a54
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct umacdesc { // DWARF DIE: 303a
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

union anon_union.conflict15f7_for_field_3 { // DWARF DIE: 15f7
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflict161c_for_field_4 { // DWARF DIE: 161c
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict1641_for_field_5 { // DWARF DIE: 1641
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: 1666
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict15f7_for_field_3 field_3;
    union anon_union.conflict161c_for_field_4 field_4;
    union anon_union.conflict1641_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1ad3
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct lmacdesc { // DWARF DIE: 3096
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct txdesc { // DWARF DIE: 31b2
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 15cc
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct tx_policy_tbl { // DWARF DIE: 155b
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict3494_for_field_0 { // DWARF DIE: 3494
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 291d
    union anon_union.conflict3494_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct dma_desc { // DWARF DIE: 1401
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd { // DWARF DIE: 172f
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_tag { // DWARF DIE: 30d1
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

struct tx_agg_desc { // DWARF DIE: 1b04
    uint8_t reserved;
};

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag { // DWARF DIE: 23ee
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct ps_env_tag { // DWARF DIE: 44c8
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

typedef enum anon_enum_16.conflict22a8 {
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
    ME_TX_CREDITS_UPDATE_IND=5131,
    SCANU_JOIN_CFM=4099,
    SCANU_JOIN_REQ=4098,
    SCANU_RAW_SEND_CFM=4102,
    SCANU_RAW_SEND_REQ=4101,
    SCANU_RESULT_IND=4100,
    SCANU_START_CFM=4097,
    SCANU_START_REQ=4096
} anon_enum_16.conflict22a8;

typedef struct scanu_start_req scanu_start_req, *Pscanu_start_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

struct scan_chan_tag { // DWARF DIE: db9
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct mac_ssid { // DWARF DIE: a75
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct scanu_start_req { // DWARF DIE: 22e8
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

typedef struct txl_list txl_list, *Ptxl_list;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: f90
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct txl_list { // DWARF DIE: 32f2
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 333a
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 358a
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 35b2
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 3606
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 26da
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

struct bam_env_tag { // DWARF DIE: 274d
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

struct chan_tbtt_tag { // DWARF DIE: 3d5a
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct mm_chan_ctxt_add_req { // DWARF DIE: 1feb
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 3da9
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

struct chan_env_tag { // DWARF DIE: 3e39
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

struct mblock_free { // DWARF DIE: 32db
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 225f
};

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

struct mobility_domain { // DWARF DIE: 3970
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

struct me_chan_config_req { // DWARF DIE: 2eba
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: c1d
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

struct me_env_tag { // DWARF DIE: 38dc
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

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct mac_edca_param_set mac_edca_param_set, *Pmac_edca_param_set;

typedef struct SecurityMode_t SecurityMode_t, *PSecurityMode_t;

typedef struct Cipher_t Cipher_t, *PCipher_t;

typedef ushort UINT16;

typedef uchar UINT8;

struct Cipher_t { // DWARF DIE: 37c0
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct mac_edca_param_set { // DWARF DIE: ce5
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

struct SecurityMode_t { // DWARF DIE: 3826
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

struct mac_bss_info { // DWARF DIE: 3998
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

typedef struct mac_scan_result mac_scan_result, *Pmac_scan_result;

struct mac_scan_result { // DWARF DIE: d1e
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

struct mac_vhtcapability { // DWARF DIE: c90
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: e62
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
    MFP_IN_USE=16,
    PHY_BAND_2G4=0,
    PHY_BAND_5G=1,
    PHY_BAND_MAX=2,
    PORT_CLOSED=0,
    PORT_CONTROLED=1,
    PORT_OPEN=2,
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
} anon_enum_8.conflict9cd;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

typedef uint16_t ke_msg_id_t;

struct ke_msg_handler { // DWARF DIE: 10bf
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 10eb
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 42fb
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

typedef struct me_set_ps_disable_req me_set_ps_disable_req, *Pme_set_ps_disable_req;

struct me_set_ps_disable_req { // DWARF DIE: 2f1c
    _Bool ps_disable;
    uint8_t vif_idx;
};

typedef enum rxu_msg_tag {
    RXU_MGT_IND=11264,
    RXU_NULL_DATA=11265
} rxu_msg_tag;

typedef struct rxu_mgt_ind rxu_mgt_ind, *Prxu_mgt_ind;

struct rxu_mgt_ind { // DWARF DIE: 43f0
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

struct rx_cntrl_pm_mon { // DWARF DIE: 25c7
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 259c
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 257f
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 2484
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

struct rxu_cntrl_env_tag { // DWARF DIE: 2600
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

struct la_mem_format { // DWARF DIE: 14db
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 1455
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 242f
    struct co_list prog;
};

typedef struct sm_disconnect_req sm_disconnect_req, *Psm_disconnect_req;

struct sm_disconnect_req { // DWARF DIE: 3c36
    uint16_t reason_code;
    uint8_t vif_idx;
    undefined field_0x3;
};

typedef struct sm_connect_req sm_connect_req, *Psm_connect_req;

struct sm_connect_req { // DWARF DIE: 1187
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

typedef struct sm_connect_cfm sm_connect_cfm, *Psm_connect_cfm;

struct sm_connect_cfm { // DWARF DIE: 3c0b
    uint8_t status;
};

typedef enum sm_state_tag {
    SM_ACTIVATING=7,
    SM_ASSOCIATING=6,
    SM_AUTHENTICATING=5,
    SM_BSS_PARAM_SETTING=4,
    SM_DISCONNECTING=8,
    SM_IDLE=0,
    SM_JOINING=2,
    SM_SCANNING=1,
    SM_STATE_MAX=9,
    SM_STA_ADDING=3
} sm_state_tag;

typedef enum sm_msg_tag {
    SM_CONNECT_CFM=6145,
    SM_CONNECT_IND=6146,
    SM_CONNECT_REQ=6144,
    SM_DISCONNECT_CFM=6148,
    SM_DISCONNECT_IND=6149,
    SM_DISCONNECT_REQ=6147,
    SM_RSP_TIMEOUT_IND=6150
} sm_msg_tag;

typedef struct sm_connect_ind sm_connect_ind, *Psm_connect_ind;

struct sm_connect_ind { // DWARF DIE: 1267
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

struct rx_swdesc { // DWARF DIE: 188f
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

struct phy_channel_info { // DWARF DIE: 14b3
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 1924
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 1784
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

struct rx_payloaddesc { // DWARF DIE: 19f7
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 1987
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct mm_set_ps_options_req mm_set_ps_options_req, *Pmm_set_ps_options_req;

struct mm_set_ps_options_req { // DWARF DIE: 204e
    uint8_t vif_index;
    undefined field_0x1;
    uint16_t listen_interval;
    _Bool dont_listen_bc_mc;
    undefined field_0x5;
};

typedef struct mm_sta_add_req mm_sta_add_req, *Pmm_sta_add_req;

struct mm_sta_add_req { // DWARF DIE: 1ee2
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

struct mm_sta_add_cfm { // DWARF DIE: 1f8b
    uint8_t status;
    uint8_t sta_idx;
    uint8_t hw_sta_idx;
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

typedef struct mm_connection_loss_ind mm_connection_loss_ind, *Pmm_connection_loss_ind;

struct mm_connection_loss_ind { // DWARF DIE: 1fc9
    uint8_t inst_nbr;
};

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 1523
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 328c
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

typedef union anon_union.conflict411e_for_u anon_union.conflict411e_for_u, *Panon_union.conflict411e_for_u;

typedef struct anon_struct.conflict3f56 anon_struct.conflict3f56, *Panon_struct.conflict3f56;

typedef struct anon_struct.conflict4023 anon_struct.conflict4023, *Panon_struct.conflict4023;

struct anon_struct.conflict4023 { // DWARF DIE: 4023
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

struct anon_struct.conflict3f56 { // DWARF DIE: 3f56
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

union anon_union.conflict411e_for_u { // DWARF DIE: 411e
    struct anon_struct.conflict3f56 sta;
    struct anon_struct.conflict4023 ap;
};

struct vif_info_tag { // DWARF DIE: 4141
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
    union anon_union.conflict411e_for_u u;
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

struct vif_mgmt_env_tag { // DWARF DIE: 427c
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef union anon_union.conflict411e anon_union.conflict411e, *Panon_union.conflict411e;

union anon_union.conflict411e { // DWARF DIE: 411e
    struct anon_struct.conflict3f56 sta;
    struct anon_struct.conflict4023 ap;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 215d
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 2116
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 2ab7
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

typedef union anon_union.conflict2dd3_for_rate_map anon_union.conflict2dd3_for_rate_map, *Panon_union.conflict2dd3_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 2d36
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

union anon_union.conflict2dd3_for_rate_map { // DWARF DIE: 2dd3
    uint8_t ht[4];
};

struct step { // DWARF DIE: 2dac
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

struct rc_sta_stats { // DWARF DIE: 2951
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
    union anon_union.conflict2dd3_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 28ce
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2893
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 2b06
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

struct sta_info_env_tag { // DWARF DIE: 2cef
    struct co_list free_sta_list;
};

typedef union anon_union.conflict2dd3 anon_union.conflict2dd3, *Panon_union.conflict2dd3;

union anon_union.conflict2dd3 { // DWARF DIE: 2dd3
    uint8_t ht[4];
};

typedef struct sm_env_tag sm_env_tag, *Psm_env_tag;

struct sm_env_tag { // DWARF DIE: 111e
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

struct scan_env_tag { // DWARF DIE: 2203
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 21be
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 33e3
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 33bb
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 340b
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

typedef union anon_union.conflict3494 anon_union.conflict3494, *Panon_union.conflict3494;

union anon_union.conflict3494 { // DWARF DIE: 3494
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag { // DWARF DIE: 34b6
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict161c anon_union.conflict161c, *Panon_union.conflict161c;

union anon_union.conflict161c { // DWARF DIE: 161c
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict15f7 anon_union.conflict15f7, *Panon_union.conflict15f7;

union anon_union.conflict15f7 { // DWARF DIE: 15f7
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict1641 anon_union.conflict1641, *Panon_union.conflict1641;

union anon_union.conflict1641 { // DWARF DIE: 1641
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

typedef struct scanu_env_tag scanu_env_tag, *Pscanu_env_tag;

struct scanu_env_tag { // DWARF DIE: 3c7b
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

struct scanu_add_ie_tag { // DWARF DIE: 3d1a
    struct dma_desc dma_desc;
    uint32_t buf[50];
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




// DWARF DIE: 47cc

int me_set_ps_disable_cfm_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if (((iVar1 != 4) && (iVar1 = FUN_00010016(), iVar1 != 0)) && (iVar1 = FUN_00010022(), iVar1 != 8)
     ) {
    FUN_00010044();
  }
  iVar1 = FUN_0001004e();
  if (iVar1 == 4) {
    _L0();
  }
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (((iVar1 != 4) && (iVar1 = FUN_00010016(), iVar1 != 0)) && (iVar1 = FUN_00010022(), iVar1 != 8)
     ) {
    FUN_00010044();
  }
  iVar1 = FUN_0001004e();
  if (iVar1 == 4) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010016(void)

{
  int iVar1;
  
  iVar1 = FUN_00010016();
  if ((iVar1 != 0) && (iVar1 = FUN_00010022(), iVar1 != 8)) {
    FUN_00010044();
  }
  iVar1 = FUN_0001004e();
  if (iVar1 == 4) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010022(void)

{
  int iVar1;
  
  iVar1 = FUN_00010022();
  if (iVar1 != 8) {
    FUN_00010044();
  }
  iVar1 = FUN_0001004e();
  if (iVar1 == 4) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010044(void)

{
  int iVar1;
  
  FUN_00010044();
  iVar1 = FUN_0001004e();
  if (iVar1 == 4) {
    _L0();
  }
  return 0;
}



undefined4 FUN_0001004e(void)

{
  int iVar1;
  
  iVar1 = FUN_0001004e();
  if (iVar1 == 4) {
    _L0();
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 4729

int mm_bss_param_setting_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 4) {
    FUN_00010094();
  }
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 4) {
    FUN_00010094();
  }
  _L0();
  return 0;
}



undefined4 FUN_00010094(void)

{
  FUN_00010094();
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 4c38

int sm_rsp_timeout_ind_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  
  iVar1 = _L0();
  if ((iVar1 == 5) || (iVar1 = FUN_000100d4(), iVar1 == 6)) {
    FUN_000100c2();
  }
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if ((iVar1 == 5) || (iVar1 = FUN_000100d4(), iVar1 == 6)) {
    FUN_000100c2();
  }
  return 0;
}



undefined4 FUN_000100c2(void)

{
  FUN_000100c2();
  return 0;
}



undefined4 FUN_000100d4(void)

{
  int iVar1;
  
  iVar1 = FUN_000100d4();
  if (iVar1 == 6) {
    FUN_000100c2();
  }
  return 0;
}



// DWARF DIE: 4b42

int scanu_start_cfm_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  mac_addr *bssid;
  scan_chan_tag *chan;
  
  iVar1 = _L0();
  if (iVar1 != 1) {
    FUN_00010110();
  }
  FUN_0001011c();
  if ((true) || (true)) {
    FUN_00010140();
  }
  else {
    FUN_0001012e();
  }
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = _L0();
  if (iVar1 != 1) {
    FUN_00010110();
  }
  FUN_0001011c();
  if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
    FUN_00010140();
  }
  else {
    FUN_0001012e();
  }
  return 0;
}



undefined4 FUN_00010110(void)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_00010110();
  FUN_0001011c();
  if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
    FUN_00010140();
  }
  else {
    FUN_0001012e();
  }
  return 0;
}



undefined4 FUN_0001011c(void)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_0001011c();
  if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
    FUN_00010140();
  }
  else {
    FUN_0001012e();
  }
  return 0;
}



undefined4 FUN_0001012e(void)

{
  FUN_0001012e();
  return 0;
}



undefined4 FUN_00010140(void)

{
  FUN_00010140();
  return 0;
}



// DWARF DIE: 4cc8

int mm_connection_loss_ind_handler
              (ke_msg_id_t msgid,mm_connection_loss_ind *param,ke_task_id_t dest_id,
              ke_task_id_t src_id)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = param->inst_nbr;
  iVar3 = _L0();
  iVar2 = 2;
  if (iVar3 == 0) {
    iVar3 = (uint)bVar1 * 0x5d8;
    iVar2 = 0;
    if ((*(char *)(iVar3 + 0x56) == '\0') && (*(char *)(iVar3 + 0x58) != '\0')) {
      FUN_0001018a();
      FUN_00010196();
    }
  }
  return iVar2;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  iVar2 = _L0();
  uVar1 = 2;
  if (iVar2 == 0) {
    uVar1 = 0;
    if ((*(char *)(unaff_s2 * 0x5d8 + 0x56) == '\0') && (*(char *)(unaff_s2 * 0x5d8 + 0x58) != '\0')
       ) {
      FUN_0001018a();
      FUN_00010196();
    }
  }
  return uVar1;
}



void FUN_0001018a(void)

{
  FUN_0001018a();
  FUN_00010196();
  return;
}



void FUN_00010196(void)

{
  FUN_00010196();
  return;
}



// DWARF DIE: 4937

int scanu_join_cfm_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined uVar6;
  uint uVar7;
  uint8_t chan_idx;
  
  iVar3 = iRam00000000;
  iVar4 = _L0();
  if (iVar4 != 2) {
    FUN_000101ea();
  }
  bVar1 = *(byte *)(iVar3 + 0x3d);
  iVar4 = (uint)bVar1 * 0x5d8;
  if (*(int *)(iVar4 + 0x3e0) < 0) {
    iVar5 = FUN_0001021a();
    if (iVar5 == 0) {
      iVar5 = FUN_0001022e();
      FUN_00010240();
      *(undefined *)(iVar5 + 0x11) = *(undefined *)(iVar3 + 0x3d);
      FUN_0001025a();
      *(undefined *)(iVar5 + 0x12) = 0;
      if ((*(uint *)(iVar4 + 0x3e0) & 2) != 0) {
        bVar2 = *(byte *)(iVar4 + 0x35a);
        uVar6 = 1;
        uVar7 = (int)(uint)bVar2 >> 2 & 7;
        if (2 < uVar7) {
          uVar6 = (undefined)(1 << (uVar7 - 3 & 0x1f));
        }
        *(undefined *)(iVar5 + 0x10) = uVar6;
        *(short *)(iVar5 + 8) = (short)(1 << (bVar2 & 3) + 0xd) + -1;
      }
      *(undefined4 *)(iVar5 + 4) = 0;
      _L0();
      FUN_000102b2();
    }
    else {
      FUN_000102f2();
    }
    iVar4 = (uint)bVar1 * 0x5d8;
    *(undefined4 *)(iVar4 + 0x5c4) = *(undefined4 *)(iVar3 + 0x30);
    if ((*(uint *)(iVar3 + 0x30) & 4) != 0) {
      *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) & 0xfffffff9;
    }
  }
  else {
    if (DAT_00000010 == '\0') {
      FUN_0001031a();
    }
    else {
      FUN_0001030e();
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  byte bVar1;
  byte bVar2;
  int unaff_s0;
  int iVar3;
  int iVar4;
  undefined uVar5;
  uint uVar6;
  int unaff_s3;
  
  iVar3 = _L0();
  if (iVar3 != 2) {
    FUN_000101ea();
  }
  bVar1 = *(byte *)(unaff_s3 + 0x3d);
  iVar3 = (uint)bVar1 * 0x5d8;
  if (*(int *)(iVar3 + 0x3e0) < 0) {
    iVar4 = FUN_0001021a();
    if (iVar4 == 0) {
      iVar4 = FUN_0001022e();
      FUN_00010240();
      *(undefined *)(iVar4 + 0x11) = *(undefined *)(unaff_s3 + 0x3d);
      FUN_0001025a();
      *(undefined *)(iVar4 + 0x12) = 0;
      if ((*(uint *)(iVar3 + 0x3e0) & 2) != 0) {
        bVar2 = *(byte *)(iVar3 + 0x35a);
        uVar5 = 1;
        uVar6 = (int)(uint)bVar2 >> 2 & 7;
        if (2 < uVar6) {
          uVar5 = (undefined)(1 << (uVar6 - 3 & 0x1f));
        }
        *(undefined *)(iVar4 + 0x10) = uVar5;
        *(short *)(iVar4 + 8) = (short)(1 << (bVar2 & 3) + 0xd) + -1;
      }
      *(undefined4 *)(iVar4 + 4) = 0;
      _L0();
      FUN_000102b2();
    }
    else {
      FUN_000102f2();
    }
    iVar3 = (uint)bVar1 * 0x5d8;
    *(undefined4 *)(iVar3 + 0x5c4) = *(undefined4 *)(unaff_s3 + 0x30);
    if ((*(uint *)(unaff_s3 + 0x30) & 4) != 0) {
      *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) & 0xfffffff9;
    }
  }
  else {
    if (*(char *)(unaff_s0 + 0x10) == '\0') {
      FUN_0001031a();
    }
    else {
      FUN_0001030e();
    }
  }
  return 0;
}



undefined4 FUN_000101ea(void)

{
  byte bVar1;
  byte bVar2;
  int unaff_s0;
  int iVar3;
  undefined uVar4;
  int iVar5;
  uint uVar6;
  int unaff_s3;
  
  FUN_000101ea();
  bVar1 = *(byte *)(unaff_s3 + 0x3d);
  iVar5 = (uint)bVar1 * 0x5d8;
  if (*(int *)(iVar5 + 0x3e0) < 0) {
    iVar3 = FUN_0001021a();
    if (iVar3 == 0) {
      iVar3 = FUN_0001022e();
      FUN_00010240();
      *(undefined *)(iVar3 + 0x11) = *(undefined *)(unaff_s3 + 0x3d);
      FUN_0001025a();
      *(undefined *)(iVar3 + 0x12) = 0;
      if ((*(uint *)(iVar5 + 0x3e0) & 2) != 0) {
        bVar2 = *(byte *)(iVar5 + 0x35a);
        uVar4 = 1;
        uVar6 = (int)(uint)bVar2 >> 2 & 7;
        if (2 < uVar6) {
          uVar4 = (undefined)(1 << (uVar6 - 3 & 0x1f));
        }
        *(undefined *)(iVar3 + 0x10) = uVar4;
        *(short *)(iVar3 + 8) = (short)(1 << (bVar2 & 3) + 0xd) + -1;
      }
      *(undefined4 *)(iVar3 + 4) = 0;
      _L0();
      FUN_000102b2();
    }
    else {
      FUN_000102f2();
    }
    iVar5 = (uint)bVar1 * 0x5d8;
    *(undefined4 *)(iVar5 + 0x5c4) = *(undefined4 *)(unaff_s3 + 0x30);
    if ((*(uint *)(unaff_s3 + 0x30) & 4) != 0) {
      *(uint *)(iVar5 + 0x3e0) = *(uint *)(iVar5 + 0x3e0) & 0xfffffff9;
    }
  }
  else {
    if (*(char *)(unaff_s0 + 0x10) == '\0') {
      FUN_0001031a();
    }
    else {
      FUN_0001030e();
    }
  }
  return 0;
}



undefined4 FUN_0001021a(void)

{
  byte bVar1;
  int unaff_s1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  iVar2 = FUN_0001021a();
  if (iVar2 == 0) {
    iVar2 = FUN_0001022e();
    FUN_00010240();
    *(undefined *)(iVar2 + 0x11) = *(undefined *)(unaff_s3 + 0x3d);
    FUN_0001025a();
    *(undefined *)(iVar2 + 0x12) = 0;
    if ((*(uint *)(unaff_s1 + 0x3e0) & 2) != 0) {
      bVar1 = *(byte *)(unaff_s1 + 0x35a);
      uVar3 = 1;
      uVar4 = (int)(uint)bVar1 >> 2 & 7;
      if (2 < uVar4) {
        uVar3 = (undefined)(1 << (uVar4 - 3 & 0x1f));
      }
      *(undefined *)(iVar2 + 0x10) = uVar3;
      *(short *)(iVar2 + 8) = (short)(1 << (bVar1 & 3) + 0xd) + -1;
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    _L0();
    FUN_000102b2();
  }
  else {
    FUN_000102f2();
  }
  iVar2 = unaff_s4 * 0x5d8 + unaff_s2;
  *(undefined4 *)(iVar2 + 0x5c4) = *(undefined4 *)(unaff_s3 + 0x30);
  if ((*(uint *)(unaff_s3 + 0x30) & 4) != 0) {
    *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) & 0xfffffff9;
  }
  return 0;
}



undefined4 FUN_0001022e(void)

{
  byte bVar1;
  int unaff_s1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  iVar2 = FUN_0001022e();
  FUN_00010240();
  *(undefined *)(iVar2 + 0x11) = *(undefined *)(unaff_s3 + 0x3d);
  FUN_0001025a();
  *(undefined *)(iVar2 + 0x12) = 0;
  if ((*(uint *)(unaff_s1 + 0x3e0) & 2) != 0) {
    bVar1 = *(byte *)(unaff_s1 + 0x35a);
    uVar3 = 1;
    uVar4 = (int)(uint)bVar1 >> 2 & 7;
    if (2 < uVar4) {
      uVar3 = (undefined)(1 << (uVar4 - 3 & 0x1f));
    }
    *(undefined *)(iVar2 + 0x10) = uVar3;
    *(short *)(iVar2 + 8) = (short)(1 << (bVar1 & 3) + 0xd) + -1;
  }
  *(undefined4 *)(iVar2 + 4) = 0;
  _L0();
  FUN_000102b2();
  iVar2 = unaff_s4 * 0x5d8 + unaff_s2;
  *(undefined4 *)(iVar2 + 0x5c4) = *(undefined4 *)(unaff_s3 + 0x30);
  if ((*(uint *)(unaff_s3 + 0x30) & 4) != 0) {
    *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) & 0xfffffff9;
  }
  return 0;
}



undefined4 FUN_00010240(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  FUN_00010240();
  *(undefined *)(unaff_s0 + 0x11) = *(undefined *)(unaff_s3 + 0x3d);
  FUN_0001025a();
  *(undefined *)(unaff_s0 + 0x12) = 0;
  if ((*(uint *)(unaff_s1 + 0x3e0) & 2) != 0) {
    bVar1 = *(byte *)(unaff_s1 + 0x35a);
    uVar2 = 1;
    uVar3 = (int)(uint)bVar1 >> 2 & 7;
    if (2 < uVar3) {
      uVar2 = (undefined)(1 << (uVar3 - 3 & 0x1f));
    }
    *(undefined *)(unaff_s0 + 0x10) = uVar2;
    *(short *)(unaff_s0 + 8) = (short)(1 << (bVar1 & 3) + 0xd) + -1;
  }
  *(undefined4 *)(unaff_s0 + 4) = 0;
  _L0();
  FUN_000102b2();
  iVar4 = unaff_s4 * 0x5d8 + unaff_s2;
  *(undefined4 *)(iVar4 + 0x5c4) = *(undefined4 *)(unaff_s3 + 0x30);
  if ((*(uint *)(unaff_s3 + 0x30) & 4) != 0) {
    *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) & 0xfffffff9;
  }
  return 0;
}



undefined4 FUN_0001025a(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  FUN_0001025a();
  *(undefined *)(unaff_s0 + 0x12) = 0;
  if ((*(uint *)(unaff_s1 + 0x3e0) & 2) != 0) {
    bVar1 = *(byte *)(unaff_s1 + 0x35a);
    uVar2 = 1;
    uVar3 = (int)(uint)bVar1 >> 2 & 7;
    if (2 < uVar3) {
      uVar2 = (undefined)(1 << (uVar3 - 3 & 0x1f));
    }
    *(undefined *)(unaff_s0 + 0x10) = uVar2;
    *(short *)(unaff_s0 + 8) = (short)(1 << (bVar1 & 3) + 0xd) + -1;
  }
  *(undefined4 *)(unaff_s0 + 4) = 0;
  _L0();
  FUN_000102b2();
  iVar4 = unaff_s4 * 0x5d8 + unaff_s2;
  *(undefined4 *)(iVar4 + 0x5c4) = *(undefined4 *)(unaff_s3 + 0x30);
  if ((*(uint *)(unaff_s3 + 0x30) & 4) != 0) {
    *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) & 0xfffffff9;
  }
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  _L0();
  FUN_000102b2();
  iVar1 = unaff_s4 * 0x5d8 + unaff_s2;
  *(undefined4 *)(iVar1 + 0x5c4) = *(undefined4 *)(unaff_s3 + 0x30);
  if ((*(uint *)(unaff_s3 + 0x30) & 4) != 0) {
    *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) & 0xfffffff9;
  }
  return 0;
}



undefined4 FUN_000102b2(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  FUN_000102b2();
  iVar1 = unaff_s4 * 0x5d8 + unaff_s2;
  *(undefined4 *)(iVar1 + 0x5c4) = *(undefined4 *)(unaff_s3 + 0x30);
  if ((*(uint *)(unaff_s3 + 0x30) & 4) != 0) {
    *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) & 0xfffffff9;
  }
  return 0;
}



undefined4 FUN_000102f2(void)

{
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  FUN_000102f2();
  iVar1 = unaff_s4 * 0x5d8 + unaff_s2;
  *(undefined4 *)(iVar1 + 0x5c4) = *(undefined4 *)(unaff_s3 + 0x30);
  if ((*(uint *)(unaff_s3 + 0x30) & 4) != 0) {
    *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) & 0xfffffff9;
  }
  return 0;
}



undefined4 FUN_0001030e(void)

{
  FUN_0001030e();
  return 0;
}



undefined4 FUN_0001031a(void)

{
  FUN_0001031a();
  return 0;
}



// WARNING: Variable defined which should be unmapped: chan
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4dbd

int sm_connect_req_handler
              (ke_msg_id_t msgid,sm_connect_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined uVar4;
  mac_addr *pmStack40;
  mac_addr *bssid;
  scan_chan_tag *chan;
  
  pmStack40 = (mac_addr *)0x0;
  bssid = (mac_addr *)0x0;
  bVar1 = param->vif_idx;
  iVar2 = _L0(_DAT_00000010,_DAT_00000014);
  if (iVar2 == 8) {
    return 2;
  }
  puVar3 = (undefined *)FUN_00010362(_DAT_00000010,_DAT_00000014);
  iVar2 = _LVL64(_DAT_00000010,_DAT_00000014);
  if (iVar2 == 0) {
    iVar2 = (uint)bVar1 * 0x5d8;
    if ((*(char *)(iVar2 + 0x56) == '\0') && (*(char *)(iVar2 + 0x58) == '\0')) {
      if (param->auth_type != '\x02') {
        if (*(char *)(iVar2 + 0x60) != -1) {
          FUN_000104ca(_DAT_00000010,_DAT_00000014);
        }
        if (*(int *)((uint)bVar1 * 0x5d8 + 0x40) != 0) {
          FUN_000104f8(_DAT_00000010,_DAT_00000014);
        }
      }
    }
    else {
      if (param->auth_type != '\x02') {
        iVar2 = 0;
        uVar4 = 9;
        goto _L0;
      }
    }
    if (psRam00000000 != (sm_connect_req *)0x0) {
      FUN_000103ca();
    }
    psRam00000000 = param;
    if (_DAT_00000004 != 0) {
      FUN_000103ec();
    }
    _DAT_00000004 = FUN_00010402();
    _DAT_00000014 = 0xffffffff;
    _DAT_00000010 &= 0xff;
    _L0();
    if (param->auth_type == '\x02') {
      _DAT_00000010 = CONCAT11(1,DAT_00000010);
      FUN_00010454();
      FUN_00010460();
      FUN_00010474();
    }
    else {
      if ((param->chan).freq == 0xffff) {
        FUN_00010532();
      }
      else {
        pmStack40 = &param->bssid;
        bssid = (mac_addr *)&param->chan;
      }
      if ((pmStack40 == (mac_addr *)0x0) || (bssid == (mac_addr *)0x0)) {
        _L0();
      }
      else {
        FUN_00010524();
      }
    }
    iVar2 = 1;
    uVar4 = 0;
  }
  else {
    iVar2 = 0;
    uVar4 = 8;
  }
_L0:
  *puVar3 = uVar4;
  FUN_00010486();
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(ushort uRam00000010,undefined4 uRam00000014)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined uVar4;
  int unaff_s3;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = _L0(uRam00000010,uRam00000014);
  if (iVar2 == 8) {
    return 2;
  }
  puVar3 = (undefined *)FUN_00010362(uRam00000010,uRam00000014);
  iVar2 = _LVL64(uRam00000010,uRam00000014);
  if (iVar2 == 0) {
    iVar2 = unaff_s3 * 0x5d8;
    if ((*(char *)(iVar2 + 0x56) == '\0') && (*(char *)(iVar2 + 0x58) == '\0')) {
      if (*(char *)(unaff_s0 + 0x3b) != '\x02') {
        if (*(char *)(iVar2 + 0x60) != -1) {
          FUN_000104ca(uRam00000010,uRam00000014);
        }
        if (*(int *)(unaff_s3 * 0x5d8 + 0x40) != 0) {
          FUN_000104f8(uRam00000010,uRam00000014);
        }
      }
    }
    else {
      if (*(char *)(unaff_s0 + 0x3b) != '\x02') {
        uVar1 = 0;
        uVar4 = 9;
        goto _L0;
      }
    }
    if (iRam00000000 != 0) {
      FUN_000103ca();
    }
    iRam00000000 = unaff_s0;
    if (_DAT_00000004 != 0) {
      FUN_000103ec();
    }
    _DAT_00000004 = FUN_00010402();
    uRam00000014 = 0xffffffff;
    uRam00000010 &= 0xff;
    _L0();
    if (*(char *)(unaff_s0 + 0x3b) == '\x02') {
      uRam00000010 = CONCAT11(1,(undefined)uRam00000010);
      FUN_00010454();
      FUN_00010460();
      FUN_00010474();
    }
    else {
      if (*(short *)(unaff_s0 + 0x28) == -1) {
        FUN_00010532();
      }
      else {
        in_stack_00000008 = unaff_s0 + 0x22;
        in_stack_0000000c = unaff_s0 + 0x28;
      }
      if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
        _L0();
      }
      else {
        FUN_00010524();
      }
    }
    uVar1 = 1;
    uVar4 = 0;
  }
  else {
    uVar1 = 0;
    uVar4 = 8;
  }
_L0:
  *puVar3 = uVar4;
  FUN_00010486();
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010362(ushort uRam00000010,undefined4 uRam00000014)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined uVar4;
  int unaff_s3;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  puVar2 = (undefined *)FUN_00010362(uRam00000010,uRam00000014);
  iVar3 = _LVL64(uRam00000010,uRam00000014);
  if (iVar3 == 0) {
    iVar3 = unaff_s3 * 0x5d8;
    if ((*(char *)(iVar3 + 0x56) == '\0') && (*(char *)(iVar3 + 0x58) == '\0')) {
      if (*(char *)(unaff_s0 + 0x3b) != '\x02') {
        if (*(char *)(iVar3 + 0x60) != -1) {
          FUN_000104ca(uRam00000010,uRam00000014);
        }
        if (*(int *)(unaff_s3 * 0x5d8 + 0x40) != 0) {
          FUN_000104f8(uRam00000010,uRam00000014);
        }
      }
    }
    else {
      if (*(char *)(unaff_s0 + 0x3b) != '\x02') {
        uVar1 = 0;
        uVar4 = 9;
        goto _L0;
      }
    }
    if (iRam00000000 != 0) {
      FUN_000103ca();
    }
    iRam00000000 = unaff_s0;
    if (_DAT_00000004 != 0) {
      FUN_000103ec();
    }
    _DAT_00000004 = FUN_00010402();
    uRam00000014 = 0xffffffff;
    uRam00000010 &= 0xff;
    _L0();
    if (*(char *)(unaff_s0 + 0x3b) == '\x02') {
      uRam00000010 = CONCAT11(1,(undefined)uRam00000010);
      FUN_00010454();
      FUN_00010460();
      FUN_00010474();
    }
    else {
      if (*(short *)(unaff_s0 + 0x28) == -1) {
        FUN_00010532();
      }
      else {
        in_stack_00000008 = unaff_s0 + 0x22;
        in_stack_0000000c = unaff_s0 + 0x28;
      }
      if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
        _L0();
      }
      else {
        FUN_00010524();
      }
    }
    uVar1 = 1;
    uVar4 = 0;
  }
  else {
    uVar1 = 0;
    uVar4 = 8;
  }
_L0:
  *puVar2 = uVar4;
  FUN_00010486();
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _LVL64(ushort uRam00000010,undefined4 uRam00000014)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined uVar3;
  int unaff_s3;
  undefined *unaff_s4;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = _LVL64(uRam00000010,uRam00000014);
  if (iVar2 == 0) {
    iVar2 = unaff_s3 * 0x5d8;
    if ((*(char *)(iVar2 + 0x56) == '\0') && (*(char *)(iVar2 + 0x58) == '\0')) {
      if (*(char *)(unaff_s0 + 0x3b) != '\x02') {
        if (*(char *)(iVar2 + 0x60) != -1) {
          FUN_000104ca(uRam00000010,uRam00000014);
        }
        if (*(int *)(unaff_s3 * 0x5d8 + 0x40) != 0) {
          FUN_000104f8(uRam00000010,uRam00000014);
        }
      }
    }
    else {
      if (*(char *)(unaff_s0 + 0x3b) != '\x02') {
        uVar1 = 0;
        uVar3 = 9;
        goto _L0;
      }
    }
    if (iRam00000000 != 0) {
      FUN_000103ca();
    }
    iRam00000000 = unaff_s0;
    if (_DAT_00000004 != 0) {
      FUN_000103ec();
    }
    _DAT_00000004 = FUN_00010402();
    uRam00000014 = 0xffffffff;
    uRam00000010 &= 0xff;
    _L0();
    if (*(char *)(unaff_s0 + 0x3b) == '\x02') {
      uRam00000010 = CONCAT11(1,(undefined)uRam00000010);
      FUN_00010454();
      FUN_00010460();
      FUN_00010474();
    }
    else {
      if (*(short *)(unaff_s0 + 0x28) == -1) {
        FUN_00010532();
      }
      else {
        in_stack_00000008 = unaff_s0 + 0x22;
        in_stack_0000000c = unaff_s0 + 0x28;
      }
      if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
        _L0();
      }
      else {
        FUN_00010524();
      }
    }
    uVar1 = 1;
    uVar3 = 0;
  }
  else {
    uVar1 = 0;
    uVar3 = 8;
  }
_L0:
  *unaff_s4 = uVar3;
  FUN_00010486();
  return uVar1;
}



undefined4 FUN_000103ca(void)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  undefined *unaff_s4;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_000103ca();
  *unaff_s1 = unaff_s0;
  if (unaff_s1[1] != 0) {
    FUN_000103ec();
  }
  iVar1 = FUN_00010402();
  unaff_s1[1] = iVar1;
  unaff_s1[5] = -1;
  *(undefined *)((int)unaff_s1 + 0x11) = 0;
  _L0();
  if (*(char *)(unaff_s0 + 0x3b) == '\x02') {
    *(undefined *)((int)unaff_s1 + 0x11) = 1;
    FUN_00010454();
    FUN_00010460();
    FUN_00010474();
  }
  else {
    if (*(short *)(unaff_s0 + 0x28) == -1) {
      FUN_00010532();
    }
    else {
      in_stack_00000008 = unaff_s0 + 0x22;
      in_stack_0000000c = unaff_s0 + 0x28;
    }
    if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
      _L0();
    }
    else {
      FUN_00010524();
    }
  }
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



undefined4 FUN_000103ec(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  undefined *unaff_s4;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_000103ec();
  uVar1 = FUN_00010402();
  *(undefined4 *)(unaff_s1 + 4) = uVar1;
  *(undefined4 *)(unaff_s1 + 0x14) = 0xffffffff;
  *(undefined *)(unaff_s1 + 0x11) = 0;
  _L0();
  if (*(char *)(unaff_s0 + 0x3b) == '\x02') {
    *(undefined *)(unaff_s1 + 0x11) = 1;
    FUN_00010454();
    FUN_00010460();
    FUN_00010474();
  }
  else {
    if (*(short *)(unaff_s0 + 0x28) == -1) {
      FUN_00010532();
    }
    else {
      in_stack_00000008 = unaff_s0 + 0x22;
      in_stack_0000000c = unaff_s0 + 0x28;
    }
    if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
      _L0();
    }
    else {
      FUN_00010524();
    }
  }
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



undefined4 FUN_00010402(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  undefined *unaff_s4;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  uVar1 = FUN_00010402();
  *(undefined4 *)(unaff_s1 + 4) = uVar1;
  *(undefined4 *)(unaff_s1 + 0x14) = 0xffffffff;
  *(undefined *)(unaff_s1 + 0x11) = 0;
  _L0();
  if (*(char *)(unaff_s0 + 0x3b) == '\x02') {
    *(undefined *)(unaff_s1 + 0x11) = 1;
    FUN_00010454();
    FUN_00010460();
    FUN_00010474();
  }
  else {
    if (*(short *)(unaff_s0 + 0x28) == -1) {
      FUN_00010532();
    }
    else {
      in_stack_00000008 = unaff_s0 + 0x22;
      in_stack_0000000c = unaff_s0 + 0x28;
    }
    if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
      _L0();
    }
    else {
      FUN_00010524();
    }
  }
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined *unaff_s4;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  _L0();
  if (*(char *)(unaff_s0 + 0x3b) == '\x02') {
    *(undefined *)(unaff_s1 + 0x11) = 1;
    FUN_00010454();
    FUN_00010460();
    FUN_00010474();
  }
  else {
    if (*(short *)(unaff_s0 + 0x28) == -1) {
      FUN_00010532();
    }
    else {
      in_stack_00000008 = unaff_s0 + 0x22;
      in_stack_0000000c = unaff_s0 + 0x28;
    }
    if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
      _L0();
    }
    else {
      FUN_00010524();
    }
  }
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



undefined4 FUN_00010454(void)

{
  undefined *unaff_s4;
  
  FUN_00010454();
  FUN_00010460();
  FUN_00010474();
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



undefined4 FUN_00010460(void)

{
  undefined *unaff_s4;
  
  FUN_00010460();
  FUN_00010474();
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



undefined4 FUN_00010474(void)

{
  undefined *unaff_s4;
  
  FUN_00010474();
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



void FUN_00010486(void)

{
  FUN_00010486();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000104ca(ushort param_1,undefined4 uRam00000014)

{
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_000104ca(param_1,uRam00000014);
  if (*(int *)(unaff_s3 * 0x5d8 + unaff_s2 + 0x40) != 0) {
    FUN_000104f8(param_1,uRam00000014);
  }
  if (iRam00000000 != 0) {
    FUN_000103ca();
  }
  iRam00000000 = unaff_s0;
  if (_DAT_00000004 != 0) {
    FUN_000103ec();
  }
  _DAT_00000004 = FUN_00010402();
  uRam00000014 = 0xffffffff;
  param_1 &= 0xff;
  _L0();
  if (*(char *)(unaff_s0 + 0x3b) == '\x02') {
    param_1 = CONCAT11(1,(undefined)param_1);
    FUN_00010454();
    FUN_00010460();
    FUN_00010474();
  }
  else {
    if (*(short *)(unaff_s0 + 0x28) == -1) {
      FUN_00010532();
    }
    else {
      in_stack_00000008 = unaff_s0 + 0x22;
      in_stack_0000000c = unaff_s0 + 0x28;
    }
    if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
      _L0();
    }
    else {
      FUN_00010524();
    }
  }
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000104f8(ushort param_1,undefined4 uRam00000014)

{
  int unaff_s0;
  undefined *unaff_s4;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_000104f8(param_1,uRam00000014);
  if (iRam00000000 != 0) {
    FUN_000103ca();
  }
  iRam00000000 = unaff_s0;
  if (_DAT_00000004 != 0) {
    FUN_000103ec();
  }
  _DAT_00000004 = FUN_00010402();
  uRam00000014 = 0xffffffff;
  param_1 &= 0xff;
  _L0();
  if (*(char *)(unaff_s0 + 0x3b) == '\x02') {
    param_1 = CONCAT11(1,(undefined)param_1);
    FUN_00010454();
    FUN_00010460();
    FUN_00010474();
  }
  else {
    if (*(short *)(unaff_s0 + 0x28) == -1) {
      FUN_00010532();
    }
    else {
      in_stack_00000008 = unaff_s0 + 0x22;
      in_stack_0000000c = unaff_s0 + 0x28;
    }
    if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
      _L0();
    }
    else {
      FUN_00010524();
    }
  }
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



undefined4 FUN_00010524(void)

{
  undefined *unaff_s4;
  
  FUN_00010524();
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



undefined4 FUN_00010532(void)

{
  undefined *unaff_s4;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_00010532();
  if ((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) {
    _L0();
  }
  else {
    FUN_00010524();
  }
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



undefined4 _L0(void)

{
  undefined *unaff_s4;
  
  _L0();
  *unaff_s4 = 0;
  FUN_00010486();
  return 1;
}



// DWARF DIE: 5083

int rxu_mgt_ind_handler(ke_msg_id_t msgid,rxu_mgt_ind *param,ke_task_id_t dest_id,
                       ke_task_id_t src_id)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = param->framectrl & 0xfc;
  if (uVar2 == 0xb0) {
    iVar1 = _LVL90();
    if (iVar1 == 5) {
      FUN_0001057c();
    }
  }
  else {
    if ((uVar2 == 0x10) || (uVar2 == 0x30)) {
      iVar1 = _LVL95();
      if (iVar1 == 6) {
        FUN_000105a6();
      }
    }
    else {
      if (((uVar2 == 0xc0) || (uVar2 == 0xa0)) && (iVar1 = _LVL100(), iVar1 == 0)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  return 0;
}



undefined4 _LVL90(void)

{
  int iVar1;
  
  iVar1 = _LVL90();
  if (iVar1 == 5) {
    FUN_0001057c();
  }
  return 0;
}



undefined4 FUN_0001057c(void)

{
  FUN_0001057c();
  return 0;
}



undefined4 _LVL95(void)

{
  int iVar1;
  
  iVar1 = _LVL95();
  if (iVar1 == 6) {
    FUN_000105a6();
  }
  return 0;
}



undefined4 FUN_000105a6(void)

{
  FUN_000105a6();
  return 0;
}



undefined4 _LVL100(void)

{
  int iVar1;
  
  iVar1 = _LVL100();
  if (iVar1 != 0) {
    return 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 5185

int mm_set_vif_state_cfm_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  
  iVar4 = _L0();
  iVar3 = iRam00000000;
  if (iVar4 == 7) {
    bVar1 = *(byte *)(iRam00000000 + 0x3d);
    iVar4 = (uint)bVar1 * 0x5d8;
    bVar2 = *(byte *)(iVar4 + 0x60);
    puVar5 = (undefined *)_L0();
    puVar5[4] = *(undefined *)(iVar3 + 0x3a);
    *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(iVar3 + 0x38);
    *puVar5 = *(undefined *)(iVar3 + 0x3d);
    _L0();
    iVar7 = (uint)bVar2 * 0x1b0;
    cVar6 = ((*(uint *)(iVar4 + 0x5c4) & 1) == 0) + '\x01';
    *(char *)(iVar7 + 0x31) = cVar6;
    *(ushort *)(iVar7 + 0x38) = *(ushort *)(iVar3 + 0x34) >> 8 | *(ushort *)(iVar3 + 0x34) << 8;
    if (cVar6 == '\x02') {
      puVar5 = (undefined *)FUN_0001069e();
      *puVar5 = 0;
      puVar5[1] = *(undefined *)(iVar3 + 0x3d);
      _L0();
    }
    if ((*(uint *)((uint)bVar1 * 0x5d8 + 1000) & 0x12800) == 0) {
      FUN_000106d4();
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  
  iVar4 = _L0();
  iVar3 = iRam00000000;
  if (iVar4 == 7) {
    bVar1 = *(byte *)(iRam00000000 + 0x3d);
    iVar4 = (uint)bVar1 * 0x5d8;
    bVar2 = *(byte *)(iVar4 + 0x60);
    puVar5 = (undefined *)_L0();
    puVar5[4] = *(undefined *)(iVar3 + 0x3a);
    *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(iVar3 + 0x38);
    *puVar5 = *(undefined *)(iVar3 + 0x3d);
    _L0();
    iVar7 = (uint)bVar2 * 0x1b0;
    cVar6 = ((*(uint *)(iVar4 + 0x5c4) & 1) == 0) + '\x01';
    *(char *)(iVar7 + 0x31) = cVar6;
    *(ushort *)(iVar7 + 0x38) = *(ushort *)(iVar3 + 0x34) >> 8 | *(ushort *)(iVar3 + 0x34) << 8;
    if (cVar6 == '\x02') {
      puVar5 = (undefined *)FUN_0001069e();
      *puVar5 = 0;
      puVar5[1] = *(undefined *)(iVar3 + 0x3d);
      _L0();
    }
    if ((*(uint *)((uint)bVar1 * 0x5d8 + 1000) & 0x12800) == 0) {
      FUN_000106d4();
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  char cVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  puVar1 = (undefined *)_L0();
  puVar1[4] = *(undefined *)(unaff_s1 + 0x3a);
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(unaff_s1 + 0x38);
  *puVar1 = *(undefined *)(unaff_s1 + 0x3d);
  _L0();
  cVar2 = ((*(uint *)(unaff_s3 + 0x5c4) & 1) == 0) + '\x01';
  *(char *)(unaff_s4 * 0x1b0 + 0x31) = cVar2;
  *(ushort *)(unaff_s4 * 0x1b0 + 0x38) =
       *(ushort *)(unaff_s1 + 0x34) >> 8 | *(ushort *)(unaff_s1 + 0x34) << 8;
  if (cVar2 == '\x02') {
    puVar1 = (undefined *)FUN_0001069e();
    *puVar1 = 0;
    puVar1[1] = *(undefined *)(unaff_s1 + 0x3d);
    _L0();
  }
  if ((*(uint *)(unaff_s0 + unaff_s2 * 0x5d8 + 1000) & 0x12800) == 0) {
    FUN_000106d4();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  char cVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  _L0();
  cVar2 = ((*(uint *)(unaff_s3 + 0x5c4) & 1) == 0) + '\x01';
  *(char *)(unaff_s4 * 0x1b0 + 0x31) = cVar2;
  *(ushort *)(unaff_s4 * 0x1b0 + 0x38) =
       *(ushort *)(unaff_s1 + 0x34) >> 8 | *(ushort *)(unaff_s1 + 0x34) << 8;
  if (cVar2 == '\x02') {
    puVar1 = (undefined *)FUN_0001069e();
    *puVar1 = 0;
    puVar1[1] = *(undefined *)(unaff_s1 + 0x3d);
    _L0();
  }
  if ((*(uint *)(unaff_s0 + unaff_s2 * 0x5d8 + 1000) & 0x12800) == 0) {
    FUN_000106d4();
  }
  return 0;
}



undefined4 FUN_0001069e(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  int unaff_s2;
  
  puVar1 = (undefined *)FUN_0001069e();
  *puVar1 = 0;
  puVar1[1] = *(undefined *)(unaff_s1 + 0x3d);
  _L0();
  if ((*(uint *)(unaff_s0 + unaff_s2 * 0x5d8 + 1000) & 0x12800) == 0) {
    FUN_000106d4();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s2;
  
  _L0();
  if ((*(uint *)(unaff_s0 + unaff_s2 * 0x5d8 + 1000) & 0x12800) == 0) {
    FUN_000106d4();
  }
  return 0;
}



undefined4 FUN_000106d4(void)

{
  FUN_000106d4();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 52f6

int me_set_active_cfm_handler
              (ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  mac_addr *bssid;
  scan_chan_tag *chan;
  
  iVar1 = _L0(_DAT_00000010);
  if ((iVar1 != 4) && (iVar1 = FUN_00010704(_DAT_00000010), iVar1 != 8)) {
    FUN_00010726(_DAT_00000010);
  }
  iVar1 = FUN_00010730(_DAT_00000010);
  if (iVar1 == 8) {
    if (DAT_00000011 == '\0') {
      FUN_00010776();
    }
    else {
      _L0();
      FUN_00010762();
    }
  }
  else {
    if (DAT_00000011 == '\0') {
      FUN_00010790();
    }
    else {
      _L0();
    }
  }
  return 0;
}



undefined4 _L0(undefined2 uRam00000010)

{
  int iVar1;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  iVar1 = _L0(uRam00000010);
  if ((iVar1 != 4) && (iVar1 = FUN_00010704(uRam00000010), iVar1 != 8)) {
    FUN_00010726(uRam00000010);
  }
  iVar1 = FUN_00010730(uRam00000010);
  if (iVar1 == 8) {
    if (uRam00000010._1_1_ == '\0') {
      FUN_00010776();
    }
    else {
      uStack00000008 = 0;
      uStack0000000c = 0;
      _L0();
      FUN_00010762();
    }
  }
  else {
    if (uRam00000010._1_1_ == '\0') {
      FUN_00010790();
    }
    else {
      _L0();
    }
  }
  return 0;
}



undefined4 FUN_00010704(undefined2 param_1)

{
  int iVar1;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  iVar1 = FUN_00010704(param_1);
  if (iVar1 != 8) {
    FUN_00010726(param_1);
  }
  iVar1 = FUN_00010730(param_1);
  if (iVar1 == 8) {
    if (param_1._1_1_ == '\0') {
      FUN_00010776();
    }
    else {
      uStack00000008 = 0;
      uStack0000000c = 0;
      _L0();
      FUN_00010762();
    }
  }
  else {
    if (param_1._1_1_ == '\0') {
      FUN_00010790();
    }
    else {
      _L0();
    }
  }
  return 0;
}



undefined4 FUN_00010726(undefined2 uRam00000010)

{
  int iVar1;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  FUN_00010726(uRam00000010);
  iVar1 = FUN_00010730(uRam00000010);
  if (iVar1 == 8) {
    if (uRam00000010._1_1_ == '\0') {
      FUN_00010776();
    }
    else {
      uStack00000008 = 0;
      uStack0000000c = 0;
      _L0();
      FUN_00010762();
    }
  }
  else {
    if (uRam00000010._1_1_ == '\0') {
      FUN_00010790();
    }
    else {
      _L0();
    }
  }
  return 0;
}



undefined4 FUN_00010730(undefined2 param_1)

{
  int iVar1;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  iVar1 = FUN_00010730(param_1);
  if (iVar1 == 8) {
    if (param_1._1_1_ == '\0') {
      FUN_00010776();
    }
    else {
      uStack00000008 = 0;
      uStack0000000c = 0;
      _L0();
      FUN_00010762();
    }
  }
  else {
    if (param_1._1_1_ == '\0') {
      FUN_00010790();
    }
    else {
      _L0();
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010762();
  return 0;
}



undefined4 FUN_00010762(void)

{
  FUN_00010762();
  return 0;
}



undefined4 FUN_00010776(void)

{
  FUN_00010776();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_00010790(void)

{
  FUN_00010790();
  return 0;
}



// DWARF DIE: 5444

int mm_sta_add_cfm_handler
              (ke_msg_id_t msgid,mm_sta_add_cfm *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = _L0();
  if (iVar3 != 3) {
    FUN_000107d0();
  }
  if (param->status == '\0') {
    bVar1 = param->sta_idx;
    iVar3 = (uint)bVar1 * 0x1b0;
    bVar2 = *(byte *)(iVar3 + 0x1a);
    FUN_0001081c();
    uVar4 = *(uint *)((uint)bVar2 * 0x5d8 + 0x3e0);
    if ((uVar4 & 1) != 0) {
      *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) | 1;
    }
    if ((uVar4 & 2) != 0) {
      iVar3 = (uint)bVar1 * 0x1b0;
      *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) | 2;
      FUN_0001086c();
      FUN_0001087c();
    }
    _L0();
  }
  else {
    FUN_000108a2();
  }
  return 0;
}



undefined4 _L0(void)

{
  byte bVar1;
  byte bVar2;
  char *unaff_s0;
  int iVar3;
  uint uVar4;
  
  iVar3 = _L0();
  if (iVar3 != 3) {
    FUN_000107d0();
  }
  if (*unaff_s0 == '\0') {
    bVar1 = unaff_s0[1];
    iVar3 = (uint)bVar1 * 0x1b0;
    bVar2 = *(byte *)(iVar3 + 0x1a);
    FUN_0001081c();
    uVar4 = *(uint *)((uint)bVar2 * 0x5d8 + 0x3e0);
    if ((uVar4 & 1) != 0) {
      *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) | 1;
    }
    if ((uVar4 & 2) != 0) {
      iVar3 = (uint)bVar1 * 0x1b0;
      *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) | 2;
      FUN_0001086c();
      FUN_0001087c();
    }
    _L0();
  }
  else {
    FUN_000108a2();
  }
  return 0;
}



undefined4 FUN_000107d0(void)

{
  byte bVar1;
  byte bVar2;
  char *unaff_s0;
  int iVar3;
  uint uVar4;
  
  FUN_000107d0();
  if (*unaff_s0 == '\0') {
    bVar1 = unaff_s0[1];
    iVar3 = (uint)bVar1 * 0x1b0;
    bVar2 = *(byte *)(iVar3 + 0x1a);
    FUN_0001081c();
    uVar4 = *(uint *)((uint)bVar2 * 0x5d8 + 0x3e0);
    if ((uVar4 & 1) != 0) {
      *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) | 1;
    }
    if ((uVar4 & 2) != 0) {
      iVar3 = (uint)bVar1 * 0x1b0;
      *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) | 2;
      FUN_0001086c();
      FUN_0001087c();
    }
    _L0();
  }
  else {
    FUN_000108a2();
  }
  return 0;
}



undefined4 FUN_0001081c(void)

{
  int unaff_s0;
  int iVar1;
  uint uVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  
  FUN_0001081c();
  uVar2 = *(uint *)(unaff_s5 + 0x3e0);
  if ((uVar2 & 1) != 0) {
    *(uint *)(unaff_s2 + 0xec) = *(uint *)(unaff_s2 + 0xec) | 1;
  }
  if ((uVar2 & 2) != 0) {
    iVar1 = unaff_s0 + unaff_s4 * 0x1b0;
    *(uint *)(iVar1 + 0xec) = *(uint *)(iVar1 + 0xec) | 2;
    FUN_0001086c();
    FUN_0001087c();
  }
  _L0();
  return 0;
}



undefined4 FUN_0001086c(void)

{
  FUN_0001086c();
  FUN_0001087c();
  _L0();
  return 0;
}



undefined4 FUN_0001087c(void)

{
  FUN_0001087c();
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_000108a2(void)

{
  FUN_000108a2();
  return 0;
}



// DWARF DIE: 5592

int sm_disconnect_req_handler
              (ke_msg_id_t msgid,sm_disconnect_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _L0();
  iVar2 = 2;
  if (iVar1 == 0) {
    FUN_000108ca();
    FUN_000108dc();
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _L0();
  uVar2 = 2;
  if (iVar1 == 0) {
    FUN_000108ca();
    FUN_000108dc();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_000108ca(void)

{
  FUN_000108ca();
  FUN_000108dc();
  return 0;
}



undefined4 FUN_000108dc(void)

{
  FUN_000108dc();
  return 0;
}


