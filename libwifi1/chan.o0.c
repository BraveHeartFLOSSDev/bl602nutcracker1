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
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct ipc_a2e_msg ipc_a2e_msg, *Pipc_a2e_msg;

typedef ulong uint32_t;

struct ipc_a2e_msg { // DWARF DIE: 3ee2
    uint32_t dummy_word;
    uint32_t msg[127];
};

typedef struct ipc_shared_env_tag ipc_shared_env_tag, *Pipc_shared_env_tag;

typedef struct txdesc_host txdesc_host, *Ptxdesc_host;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef ushort uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar uint8_t;

struct mac_addr { // DWARF DIE: a02
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 2af8
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

struct txdesc_host { // DWARF DIE: 2dc6
    uint32_t ready;
    struct hostdesc host;
    uint32_t pad_txdesc[55];
    uint32_t pad_buf[128];
};

struct ipc_shared_env_tag { // DWARF DIE: 3f20
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

typedef union anon_union.conflict3087_for_field_0 anon_union.conflict3087_for_field_0, *Panon_union.conflict3087_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict117c_for_field_3 anon_union.conflict117c_for_field_3, *Panon_union.conflict117c_for_field_3;

typedef union anon_union.conflict11a1_for_field_4 anon_union.conflict11a1_for_field_4, *Panon_union.conflict11a1_for_field_4;

typedef union anon_union.conflict11c6_for_field_5 anon_union.conflict11c6_for_field_5, *Panon_union.conflict11c6_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: e30
    struct co_list_hdr * next;
};

union anon_union.conflict11a1_for_field_4 { // DWARF DIE: 11a1
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_cfm_tag { // DWARF DIE: 15d9
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct lmacdesc { // DWARF DIE: 2c30
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct umacdesc { // DWARF DIE: 2bd4
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

union anon_union.conflict11c6_for_field_5 { // DWARF DIE: 11c6
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict117c_for_field_3 { // DWARF DIE: 117c
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd { // DWARF DIE: 11eb
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict117c_for_field_3 field_3;
    union anon_union.conflict11a1_for_field_4 field_4;
    union anon_union.conflict11c6_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1658
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct txdesc { // DWARF DIE: 2d4c
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 1151
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct tx_policy_tbl { // DWARF DIE: 10e0
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict3087_for_field_0 { // DWARF DIE: 3087
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 260b
    union anon_union.conflict3087_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct tx_pbd { // DWARF DIE: 12b4
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct dma_desc { // DWARF DIE: f48
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct txl_buffer_tag { // DWARF DIE: 2c6b
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

struct tx_agg_desc { // DWARF DIE: 1689
    uint8_t reserved;
};

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag { // DWARF DIE: 1d92
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct ps_env_tag { // DWARF DIE: 3deb
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

struct co_list { // DWARF DIE: e56
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct txl_list { // DWARF DIE: 2ee5
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 2f2d
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct rd_env_tag rd_env_tag, *Prd_env_tag;

struct rd_env_tag { // DWARF DIE: 3dc4
    struct co_list event_free_list;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 31f9
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 317d
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 31a5
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 23e9
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

struct bam_env_tag { // DWARF DIE: 245c
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

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct mm_chan_ctxt_add_req { // DWARF DIE: 1b90
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 1efa
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

typedef enum chan_tbtt_status {
    CHAN_TBTT_NOT_PROG=0,
    CHAN_TBTT_PRESENCE=2,
    CHAN_TBTT_PROG=1,
    CHAN_TBTT_STATUS_MAX=3
} chan_tbtt_status;

typedef enum chan_env_status_bit {
    CHAN_ENV_BCN_DETECT_BIT=6,
    CHAN_ENV_BIT_MAX=7,
    CHAN_ENV_DELAY_PROG_BIT=4,
    CHAN_ENV_ROC_BIT=2,
    CHAN_ENV_ROC_WAIT_BIT=0,
    CHAN_ENV_SCAN_BIT=3,
    CHAN_ENV_SCAN_WAIT_BIT=1,
    CHAN_ENV_TIMEOUT_BIT=5
} chan_env_status_bit;

typedef struct chan_env_tag chan_env_tag, *Pchan_env_tag;

struct chan_env_tag { // DWARF DIE: 1f8a
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

typedef enum chan_ctxt_status {
    CHAN_CTXT_STATUS_MAX=7,
    CHAN_GOTO_IDLE=2,
    CHAN_NOT_PROG=1,
    CHAN_NOT_SCHEDULED=0,
    CHAN_PRESENT=5,
    CHAN_SENDING_NOA=6,
    CHAN_WAITING_END=4,
    CHAN_WAIT_NOA_CFM=3
} chan_ctxt_status;

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

struct chan_tbtt_tag { // DWARF DIE: 1eab
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 907
};

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 2ece
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 3424
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

struct scan_chan_tag { // DWARF DIE: cdb
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct me_chan_config_req { // DWARF DIE: 3588
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: bda
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

struct me_env_tag { // DWARF DIE: 3756
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

struct mobility_domain { // DWARF DIE: 37ea
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

struct Cipher_t { // DWARF DIE: 363a
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct mac_edca_param_set { // DWARF DIE: ca2
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset { // DWARF DIE: a87
    uint8_t length;
    uint8_t array[12];
};

struct mac_ssid { // DWARF DIE: a32
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct SecurityMode_t { // DWARF DIE: 36a0
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

struct mac_bss_info { // DWARF DIE: 3812
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

struct anon_struct.conflictacf { // DWARF DIE: acf
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictb06 { // DWARF DIE: b06
    uint32_t key[4];
};

union anon_union.conflictb2f_for_u { // DWARF DIE: b2f
    struct anon_struct.conflictacf mic;
    struct anon_struct.conflictb06 mfp;
};

struct key_info_tag { // DWARF DIE: b54
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

union anon_union.conflictb2f { // DWARF DIE: b2f
    struct anon_struct.conflictacf mic;
    struct anon_struct.conflictb06 mfp;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: c4d
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef enum anon_enum_8.conflict98a {
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
} anon_enum_8.conflict98a;

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: d23
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

struct ke_msg_handler { // DWARF DIE: 1870
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 189c
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 2a24
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

struct ipc_emb_env_tag { // DWARF DIE: 3f7a
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

struct rx_cntrl_pm_mon { // DWARF DIE: 22d6
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 22ab
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 228e
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 2193
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

struct rxu_cntrl_env_tag { // DWARF DIE: 230f
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

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictf8_for___value anon_union.conflictf8_for___value, *Panon_union.conflictf8_for___value;

union anon_union.conflictf8_for___value { // DWARF DIE: f8
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 12a
    int __count;
    union anon_union.conflictf8_for___value __value;
};

typedef long _off_t;

typedef union anon_union.conflictf8 anon_union.conflictf8, *Panon_union.conflictf8;

union anon_union.conflictf8 { // DWARF DIE: f8
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 1070
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: f9c
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 1dd3
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 1414
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

struct phy_channel_info { // DWARF DIE: 1048
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 14a9
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 1309
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

struct rx_payloaddesc { // DWARF DIE: 157c
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 150c
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct mm_remain_on_channel_req mm_remain_on_channel_req, *Pmm_remain_on_channel_req;

struct mm_remain_on_channel_req { // DWARF DIE: 1c6e
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

struct mm_force_idle_req { // DWARF DIE: 1d0d
    void (* cb)(void);
};

typedef struct mm_chan_ctxt_update_req mm_chan_ctxt_update_req, *Pmm_chan_ctxt_update_req;

struct mm_chan_ctxt_update_req { // DWARF DIE: 1bf8
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

typedef enum mm_remain_on_channel_op {
    MM_ROC_OP_CANCEL=1,
    MM_ROC_OP_MAX=2,
    MM_ROC_OP_START=0
} mm_remain_on_channel_op;

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

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 10a8
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct rxl_cntrl_env_tag rxl_cntrl_env_tag, *Prxl_cntrl_env_tag;

struct rxl_cntrl_env_tag { // DWARF DIE: 3e87
    struct co_list ready;
    struct rx_dmadesc * first;
    struct rx_dmadesc * last;
    struct rx_dmadesc * free;
    uint32_t packet_stack_cnt;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 2e7f
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict3be7_for_u anon_union.conflict3be7_for_u, *Panon_union.conflict3be7_for_u;

typedef struct anon_struct.conflict3a1f anon_struct.conflict3a1f, *Panon_struct.conflict3a1f;

typedef struct anon_struct.conflict3aec anon_struct.conflict3aec, *Panon_struct.conflict3aec;

struct anon_struct.conflict3a1f { // DWARF DIE: 3a1f
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

struct anon_struct.conflict3aec { // DWARF DIE: 3aec
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

union anon_union.conflict3be7_for_u { // DWARF DIE: 3be7
    struct anon_struct.conflict3a1f sta;
    struct anon_struct.conflict3aec ap;
};

struct vif_info_tag { // DWARF DIE: 3c0a
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
    union anon_union.conflict3be7_for_u u;
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

struct vif_mgmt_env_tag { // DWARF DIE: 3d45
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef union anon_union.conflict3be7 anon_union.conflict3be7, *Panon_union.conflict3be7;

union anon_union.conflict3be7 { // DWARF DIE: 3be7
    struct anon_struct.conflict3a1f sta;
    struct anon_struct.conflict3aec ap;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 2104
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 20bd
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 27a5
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

typedef union anon_union.conflict3543_for_rate_map anon_union.conflict3543_for_rate_map, *Panon_union.conflict3543_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 34a6
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step { // DWARF DIE: 351c
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

union anon_union.conflict3543_for_rate_map { // DWARF DIE: 3543
    uint8_t ht[4];
};

struct rc_sta_stats { // DWARF DIE: 263f
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
    union anon_union.conflict3543_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 25bc
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2581
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 27f4
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

struct sta_info_env_tag { // DWARF DIE: 29dd
    struct co_list free_sta_list;
};

typedef enum td_status_bit {
    TD_STATUS_RX=1,
    TD_STATUS_RX_PS=3,
    TD_STATUS_TX=0,
    TD_STATUS_TX_PS=2
} td_status_bit;

typedef struct td_env_tag td_env_tag, *Ptd_env_tag;

struct td_env_tag { // DWARF DIE: 4063
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

typedef union anon_union.conflict3543 anon_union.conflict3543, *Panon_union.conflict3543;

union anon_union.conflict3543 { // DWARF DIE: 3543
    uint8_t ht[4];
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 33c8
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 3383
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 2fd6
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 2fae
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 2ffe
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

typedef union anon_union.conflict3087 anon_union.conflict3087, *Panon_union.conflict3087;

union anon_union.conflict3087 { // DWARF DIE: 3087
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag { // DWARF DIE: 30a9
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict117c anon_union.conflict117c, *Panon_union.conflict117c;

union anon_union.conflict117c { // DWARF DIE: 117c
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict11c6 anon_union.conflict11c6, *Panon_union.conflict11c6;

union anon_union.conflict11c6 { // DWARF DIE: 11c6
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict11a1 anon_union.conflict11a1, *Panon_union.conflict11a1;

union anon_union.conflict11a1 { // DWARF DIE: 11a1
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
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

struct _rand48 { // DWARF DIE: 6fd
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 1f0
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

struct anon_struct.conflict746 { // DWARF DIE: 746
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

struct _Bigint { // DWARF DIE: 180
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 6b8
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 273
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2c8
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct anon_struct.conflict88b { // DWARF DIE: 88b
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8d2_for__new { // DWARF DIE: 8d2
    struct anon_struct.conflict746 _reent;
    struct anon_struct.conflict88b _unused;
};

struct __sbuf { // DWARF DIE: 328
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 356
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

struct _reent { // DWARF DIE: 4c2
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

union anon_union.conflict8d2 { // DWARF DIE: 8d2
    struct anon_struct.conflict746 _reent;
    struct anon_struct.conflict88b _unused;
};

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
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
// DWARF DIE: 5b41

void blmac_pwr_mgt_setf(uint8_t pwrmgt)

{
  uint uVar1;
  undefined3 in_register_00002029;
  
  uVar1 = CONCAT31(in_register_00002029,pwrmgt) << 2;
  if ((uVar1 & 0xfffffffb) != 0) {
    FUN_00010026();
  }
  _DAT_44b0004c = _DAT_44b0004c & 0xfffffffb | uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010026(void)

{
  uint unaff_s0;
  
  FUN_00010026();
  _DAT_44b0004c = _DAT_44b0004c & 0xfffffffb | unaff_s0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5832

chan_ctxt_tag * chan_get_next_chan(void)

{
  int iVar1;
  int iVar2;
  chan_ctxt_tag *pcVar3;
  uint uVar4;
  
  iVar2 = _DAT_44b00120;
  iVar1 = _DAT_00000010;
  if (_DAT_00000020 != (chan_ctxt_tag *)0x0) {
    if ((_DAT_00000010 != 0) && (*(char *)(_DAT_00000010 + 10) == '\x02')) {
      return _DAT_00000020;
    }
    if (-1 < (_DAT_44b00120 + 0x1400) - _DAT_00000044) {
      return _DAT_00000020;
    }
    if (_DAT_00000020->status == '\x04') {
      return _DAT_00000020;
    }
  }
  pcVar3 = _DAT_00000020;
  if ((_DAT_00000010 != 0) && (*(int *)(_DAT_00000010 + 4) - _DAT_00000044 < 0)) {
    pcVar3 = *(chan_ctxt_tag **)((uint)*(byte *)(_DAT_00000010 + 8) * 0x5d8 + 0x40);
    if (pcVar3 == (chan_ctxt_tag *)0x0) {
      FUN_000100c6(_DAT_00000010,uRam00000014,_DAT_0000002c,_DAT_00000030,uRam00000048,_DAT_0000004c
                  );
    }
    if (-1 < (iVar2 + 0x1400) - *(int *)(iVar1 + 4)) goto _L0;
    uVar4 = 0;
    if (pcVar3->nb_res_slots < pcVar3->nb_rem_slots) {
      uVar4 = (uint)(ushort)(pcVar3->nb_rem_slots - pcVar3->nb_res_slots);
    }
    if (((uint)(*(int *)(iVar1 + 4) - iVar2) >> 10 & 0xffff) <= uVar4) {
      return pcVar3;
    }
  }
  _DAT_00000012 = 0;
  if (DAT_00000016 != '\0') {
    pcVar3 = (chan_ctxt_tag *)0x0;
  }
  if ((DAT_00000032 != '\0') && (_DAT_00000012 <= _DAT_0000002e)) {
    pcVar3 = (chan_ctxt_tag *)0x1c;
    _DAT_00000012 = _DAT_0000002e;
  }
  if ((DAT_0000004e != '\0') && (_DAT_00000012 <= _DAT_0000004a)) {
    return (chan_ctxt_tag *)0x38;
  }
_L0:
  if (pcVar3 == (chan_ctxt_tag *)0x0) {
    FUN_00010156();
  }
  return pcVar3;
}



int FUN_000100c6(undefined4 uRam00000010,undefined3 param_2,undefined4 uRam0000002c,
                undefined3 param_4,undefined4 uRam00000048,undefined3 param_6)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int unaff_s2;
  
  FUN_000100c6(uRam00000010,param_2,uRam0000002c,param_4,uRam00000048,param_6);
  if ((unaff_s2 + 0x1400) - *(int *)(unaff_s1 + 4) < 0) {
    uVar1 = 0;
    if (*(ushort *)(unaff_s0 + 0x14) < *(ushort *)(unaff_s0 + 0x12)) {
      uVar1 = (uint)(ushort)(*(ushort *)(unaff_s0 + 0x12) - *(ushort *)(unaff_s0 + 0x14));
    }
    if (((uint)(*(int *)(unaff_s1 + 4) - unaff_s2) >> 10 & 0xffff) <= uVar1) {
      return unaff_s0;
    }
    uRam00000010._2_2_ = 0;
    if (param_2._2_1_ != '\0') {
      unaff_s0 = 0;
    }
    if ((param_4._2_1_ != '\0') && (uRam00000010._2_2_ <= uRam0000002c._2_2_)) {
      unaff_s0 = 0x1c;
      uRam00000010._2_2_ = uRam0000002c._2_2_;
    }
    if ((param_6._2_1_ != '\0') && (uRam00000010._2_2_ <= uRam00000048._2_2_)) {
      return 0x38;
    }
  }
  if (unaff_s0 == 0) {
    FUN_00010156();
  }
  return unaff_s0;
}



void FUN_00010156(void)

{
  FUN_00010156();
  return;
}



// DWARF DIE: 55e3

void chan_conn_less_delay_prog(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5c8b

void chan_upd_nb_rem_slots(uint32_t current_time,chan_ctxt_tag *p_chan_entry)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)current_time;
  uVar3 = (uint)((int)p_chan_entry - _DAT_0000006c) >> 10 & 0xffff;
  uVar2 = (ushort)uVar3;
  if (uVar1 < uVar3) {
    uVar2 = uVar1;
  }
  *(ushort *)current_time = uVar1 - uVar2;
  return;
}



// DWARF DIE: 5cf2

_Bool chan_tbtt_detect_conflict(chan_tbtt_tag *p_tbtt_entry2,chan_tbtt_tag *p_tbtt_entry1)

{
  _Bool _Var1;
  
  if ((((int)(chan_tbtt_tag *)((int)p_tbtt_entry2 - (int)p_tbtt_entry1) < 0) ||
      (_Var1 = true, (int)p_tbtt_entry1 + (0x2800 - (int)p_tbtt_entry2) < 0)) &&
     (_Var1 = false, -1 < (int)((int)p_tbtt_entry1 - (int)p_tbtt_entry2))) {
    _Var1 = (_Bool)((byte)~(byte)((uint)&((chan_tbtt_tag *)((int)p_tbtt_entry2 - (int)p_tbtt_entry1)
                                         )[0x355].time >> 0x18) >> 7);
  }
  return _Var1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4e47

void chan_tbtt_insert(chan_tbtt_tag *p_tbtt_entry)

{
  bool bVar1;
  chan_tbtt_tag *pcVar2;
  char cVar3;
  int iVar4;
  int extraout_a0;
  chan_tbtt_tag *pcVar5;
  int *piVar6;
  int *piVar7;
  
  pcVar2 = (chan_tbtt_tag *)0x0;
  cVar3 = '\0';
  for (pcVar5 = _DAT_00000010; pcVar5 != (chan_tbtt_tag *)0x0;
      pcVar5 = *(chan_tbtt_tag **)&pcVar5->list_hdr) {
    if (pcVar5 == p_tbtt_entry) {
      FUN_00010268(0x668);
    }
    piVar6 = (int *)p_tbtt_entry->time;
    piVar7 = (int *)pcVar5->time;
    if (pcVar5->status == '\x02') {
      if ((piVar6 < piVar7) || (FUN_000102ba(piVar6,piVar7), extraout_a0 != 0)) {
_L63:
        cVar3 = '\x01';
        bVar1 = false;
        pcVar2 = p_tbtt_entry;
        goto _L0;
      }
    }
    else {
      iVar4 = (*(code *)0x10284)(piVar6,piVar7);
      if (iVar4 == 0) {
        if (piVar6 < piVar7) break;
      }
      else {
        if (p_tbtt_entry->priority <= pcVar5->priority) goto _L63;
        if (pcVar2 == (chan_tbtt_tag *)0x0) {
          pcVar2 = pcVar5;
        }
        cVar3 += '\x01';
      }
    }
  }
  bVar1 = true;
_L0:
  while (cVar3 += -1, cVar3 != -1) {
    if (pcVar2 == (chan_tbtt_tag *)0x0) {
      FUN_000102da(0x6b1);
    }
    if (pcVar2 != p_tbtt_entry) {
      if (pcVar2->status == '\x01') {
        FUN_000102f2(0x28);
        pcVar2->status = '\0';
      }
      FUN_00010304(0x10,(int **)pcVar2);
    }
    FUN_00010312(0x18,(int *)pcVar2);
    pcVar2 = *(chan_tbtt_tag **)&pcVar2->list_hdr;
  }
  if (!bVar1) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010268(undefined4 param_1)

{
  bool bVar1;
  int **unaff_s0;
  char unaff_s1;
  int iVar2;
  int extraout_a0;
  int **unaff_s2;
  int **unaff_s3;
  int *piVar3;
  int *piVar4;
  uint unaff_s9;
  
  do {
    FUN_00010268(param_1);
    do {
      piVar3 = unaff_s3[1];
      piVar4 = unaff_s2[1];
      if (*(byte *)((int)unaff_s2 + 10) != unaff_s9) {
        iVar2 = (*(code *)0x10284)(piVar3,piVar4);
        if (iVar2 != 0) {
          if (*(byte *)((int)unaff_s3 + 9) <= *(byte *)((int)unaff_s2 + 9)) goto _L63;
          if (unaff_s0 == (int **)0x0) {
            unaff_s0 = unaff_s2;
          }
          unaff_s1 += '\x01';
          goto _L0;
        }
        if (piVar4 <= piVar3) goto _L0;
_L0:
        bVar1 = true;
        goto _L0;
      }
      if ((piVar3 < piVar4) || (FUN_000102ba(piVar3,piVar4), extraout_a0 != 0)) {
_L63:
        unaff_s1 = '\x01';
        bVar1 = false;
        unaff_s0 = unaff_s3;
_L0:
        while (unaff_s1 += -1, unaff_s1 != -1) {
          if (unaff_s0 == (int **)0x0) {
            FUN_000102da(0x6b1);
          }
          if (unaff_s0 != unaff_s3) {
            if (*(char *)((int)unaff_s0 + 10) == '\x01') {
              FUN_000102f2(0x28);
              *(undefined *)((int)unaff_s0 + 10) = 0;
            }
            FUN_00010304(0x10,unaff_s0);
          }
          FUN_00010312(0x18,(int *)unaff_s0);
          unaff_s0 = (int **)*unaff_s0;
        }
        if (!bVar1) {
          return;
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
_L0:
      unaff_s2 = (int **)*unaff_s2;
      if (unaff_s2 == (int **)0x0) goto _L0;
    } while (unaff_s2 != unaff_s3);
    param_1 = 0x668;
  } while( true );
}



void FUN_000102ba(int *param_1,int *param_2)

{
  bool bVar1;
  int **unaff_s0;
  char unaff_s1;
  int iVar2;
  int extraout_a0;
  int **unaff_s2;
  int **unaff_s3;
  uint unaff_s9;
  
  while (FUN_000102ba(param_1,param_2), extraout_a0 == 0) {
_L0:
    while( true ) {
      unaff_s2 = (int **)*unaff_s2;
      if (unaff_s2 == (int **)0x0) goto _L0;
      if (unaff_s2 == unaff_s3) {
        FUN_00010268(0x668);
      }
      param_1 = unaff_s3[1];
      param_2 = unaff_s2[1];
      if (*(byte *)((int)unaff_s2 + 10) == unaff_s9) break;
      iVar2 = (*(code *)0x10284)(param_1,param_2);
      if (iVar2 == 0) goto _L0;
      if (*(byte *)((int)unaff_s3 + 9) <= *(byte *)((int)unaff_s2 + 9)) goto _L63;
      if (unaff_s0 == (int **)0x0) {
        unaff_s0 = unaff_s2;
      }
      unaff_s1 += '\x01';
    }
    if (param_1 < param_2) break;
  }
_L63:
  unaff_s1 = '\x01';
  bVar1 = false;
  unaff_s0 = unaff_s3;
_L0:
  while (unaff_s1 += -1, unaff_s1 != -1) {
    if (unaff_s0 == (int **)0x0) {
      FUN_000102da(0x6b1);
    }
    if (unaff_s0 != unaff_s3) {
      if (*(char *)((int)unaff_s0 + 10) == '\x01') {
        FUN_000102f2(0x28);
        *(undefined *)((int)unaff_s0 + 10) = 0;
      }
      FUN_00010304(0x10,unaff_s0);
    }
    FUN_00010312(0x18,(int *)unaff_s0);
    unaff_s0 = (int **)*unaff_s0;
  }
  if (!bVar1) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
_L0:
  if (param_1 < param_2) {
_L0:
    bVar1 = true;
    goto _L0;
  }
  goto _L0;
}



void FUN_000102da(undefined4 param_1)

{
  int **unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  int **unaff_s3;
  uint unaff_s4;
  uint unaff_s8;
  int unaff_s9;
  int unaff_s10;
  int unaff_s11;
  
  do {
    FUN_000102da(param_1);
    do {
      if (unaff_s0 != unaff_s3) {
        if (*(byte *)((int)unaff_s0 + 10) == unaff_s8) {
          FUN_000102f2(unaff_s10 + 0x28);
          *(undefined *)((int)unaff_s0 + 10) = 0;
        }
        FUN_00010304(unaff_s9 + 0x10,unaff_s0);
      }
      FUN_00010312(unaff_s11 + 0x18,(int *)unaff_s0);
      unaff_s0 = (int **)*unaff_s0;
      unaff_s1 = unaff_s1 - 1 & 0xff;
      if (unaff_s1 == unaff_s4) {
        if (unaff_s2 == 0) {
          return;
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    } while (unaff_s0 != (int **)0x0);
    param_1 = 0x6b1;
  } while( true );
}



void FUN_000102f2(int param_1)

{
  int **unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  int **unaff_s3;
  uint unaff_s4;
  uint unaff_s8;
  int unaff_s9;
  int unaff_s10;
  int unaff_s11;
  
  do {
    FUN_000102f2(param_1);
    *(undefined *)((int)unaff_s0 + 10) = 0;
    do {
      FUN_00010304(unaff_s9 + 0x10,unaff_s0);
      do {
        FUN_00010312(unaff_s11 + 0x18,(int *)unaff_s0);
        unaff_s0 = (int **)*unaff_s0;
        unaff_s1 = unaff_s1 - 1 & 0xff;
        if (unaff_s1 == unaff_s4) {
          if (unaff_s2 == 0) {
            return;
          }
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        if (unaff_s0 == (int **)0x0) {
          FUN_000102da(0x6b1);
        }
      } while (unaff_s0 == unaff_s3);
    } while (*(byte *)((int)unaff_s0 + 10) != unaff_s8);
    param_1 = unaff_s10 + 0x28;
  } while( true );
}



void FUN_00010304(int param_1,int **param_2)

{
  int **unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  int **unaff_s3;
  uint unaff_s4;
  uint unaff_s8;
  int unaff_s9;
  int unaff_s10;
  int unaff_s11;
  
  do {
    FUN_00010304(param_1,param_2);
    do {
      FUN_00010312(unaff_s11 + 0x18,(int *)unaff_s0);
      unaff_s0 = (int **)*unaff_s0;
      unaff_s1 = unaff_s1 - 1 & 0xff;
      if (unaff_s1 == unaff_s4) {
        if (unaff_s2 == 0) {
          return;
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if (unaff_s0 == (int **)0x0) {
        FUN_000102da(0x6b1);
      }
    } while (unaff_s0 == unaff_s3);
    if (*(byte *)((int)unaff_s0 + 10) == unaff_s8) {
      FUN_000102f2(unaff_s10 + 0x28);
      *(undefined *)((int)unaff_s0 + 10) = 0;
    }
    param_1 = unaff_s9 + 0x10;
    param_2 = unaff_s0;
  } while( true );
}



void FUN_00010312(int param_1,int *param_2)

{
  int **unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  int **unaff_s3;
  uint unaff_s4;
  uint unaff_s8;
  int unaff_s9;
  int unaff_s10;
  int unaff_s11;
  
  while( true ) {
    FUN_00010312(param_1,param_2);
    unaff_s0 = (int **)*unaff_s0;
    unaff_s1 = unaff_s1 - 1 & 0xff;
    if (unaff_s1 == unaff_s4) break;
    if (unaff_s0 == (int **)0x0) {
      FUN_000102da(0x6b1);
    }
    if (unaff_s0 != unaff_s3) {
      if (*(byte *)((int)unaff_s0 + 10) == unaff_s8) {
        FUN_000102f2(unaff_s10 + 0x28);
        *(undefined *)((int)unaff_s0 + 10) = 0;
      }
      FUN_00010304(unaff_s9 + 0x10,unaff_s0);
    }
    param_1 = unaff_s11 + 0x18;
    param_2 = (int *)unaff_s0;
  }
  if (unaff_s2 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5709

void chan_upd_ctxt_status(chan_ctxt_tag *p_chan_entry,uint8_t next_status)

{
  undefined3 in_register_0000202d;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = CONCAT31(in_register_0000202d,next_status);
  if (iVar1 == 2) {
    iVar3 = 0;
    if (2 < p_chan_entry->idx) goto _L0;
    iVar3 = 4000;
  }
  else {
    iVar3 = 0;
    if (iVar1 != 4) goto _L0;
    if (p_chan_entry->idx < 3) {
      if (1 < DAT_00000072) {
        if ((p_chan_entry->nb_res_slots < p_chan_entry->nb_rem_slots) &&
           (uVar2 = (uint)(ushort)(p_chan_entry->nb_rem_slots - p_chan_entry->nb_res_slots),
           4 < uVar2)) {
          iVar3 = uVar2 << 10;
          _DAT_0000006c = _DAT_44b00120;
          goto _L0;
        }
      }
      iVar1 = 5;
      iVar3 = 0;
      goto _L0;
    }
    iVar3 = (uint)p_chan_entry->nb_rem_slots << 10;
  }
_L0:
  iVar3 = iVar3 + _DAT_44b00120;
_L0:
  p_chan_entry->status = (uint8_t)iVar1;
  if (iVar3 != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (iVar1 == 3) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5deb

void chan_switch_start(chan_ctxt_tag *p_chan_entry)

{
  undefined4 *extraout_a0;
  
  if (_DAT_00000020 == p_chan_entry) {
    if ((1 < DAT_00000072) && (_DAT_00000020->idx < 3)) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  else {
    if (_DAT_00000024 == (chan_ctxt_tag *)0x0) {
      _DAT_00000024 = p_chan_entry;
      _L0();
      FUN_0001046a();
      *extraout_a0 = 0;
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void _L0(void)

{
  undefined4 *extraout_a0;
  
  _L0();
  FUN_0001046a();
  *extraout_a0 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001046a(void)

{
  undefined4 *extraout_a0;
  
  FUN_0001046a();
  *extraout_a0 = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5556

void chan_conn_less_delay_evt(void *env)

{
  if ((DAT_00000070 & 1) == 0) {
    if ((DAT_00000070 & 2) == 0) {
      return;
    }
    if ((DAT_00000070 & 8) != 0) {
      FUN_0001050c();
    }
    DAT_00000070 = DAT_00000070 & 0xfd | 8;
  }
  else {
    if ((DAT_00000070 & 4) != 0) {
      FUN_000104be();
    }
    DAT_00000070 = DAT_00000070 & 0xfe | 4;
  }
  if (_DAT_00000024 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_000104be(void)

{
  int unaff_s0;
  
  FUN_000104be();
  *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xfe | 4;
  if (*(int *)(unaff_s0 + 0x24) != 0) {
    return 0x70;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_0001050c(void)

{
  int unaff_s0;
  
  FUN_0001050c();
  *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xfd | 8;
  if (*(int *)(unaff_s0 + 0x24) != 0) {
    return 0x54;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4d8e

void chan_tbtt_switch_evt(void *env)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  
  uVar2 = _DAT_44b00120;
  if (((1 < DAT_00000072) && ((DAT_00000070 & 0xc) == 0)) &&
     ((iVar4 = *(int *)((uint)*(byte *)((int)env + 8) * 0x5d8 + 0x40), _DAT_00000024 == 0 ||
      (_DAT_00000024 == iVar4)))) {
    *(undefined *)((int)env + 9) = 0;
    FUN_00010594();
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar3 = uVar1;
    if (10 < uVar1) {
      uVar3 = 10;
    }
    *(ushort *)(iVar4 + 0x14) = uVar1 - uVar3;
    _DAT_0000006c = uVar2;
    *(undefined *)((int)env + 10) = 2;
    if (_DAT_00000024 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_00010594(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  ushort uVar2;
  int unaff_s2;
  undefined4 unaff_s3;
  
  FUN_00010594();
  uVar1 = *(ushort *)(unaff_s2 + 0x14);
  uVar2 = uVar1;
  if (10 < uVar1) {
    uVar2 = 10;
  }
  *(ushort *)(unaff_s2 + 0x14) = uVar1 - uVar2;
  *(undefined4 *)(unaff_s0 + 0x6c) = unaff_s3;
  *(undefined *)(unaff_s1 + 10) = 2;
  if (*(int *)(unaff_s0 + 0x24) != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4c4c

void chan_tbtt_schedule(chan_tbtt_tag *p_tbtt_entry)

{
  int extraout_a0;
  int iVar1;
  
  if (p_tbtt_entry != (chan_tbtt_tag *)0x0) {
    _L0();
    while (_DAT_00000018 != 0) {
      FUN_00010644(0x18);
      iVar1 = (uint)*(byte *)(extraout_a0 + 8) * 0x5d8;
      if (*(char *)(iVar1 + 0x56) == '\0') {
        iVar1 = *(int *)((uint)*(byte *)(iVar1 + 0x60) * 0x1b0 + 4);
      }
      else {
        iVar1 = (uint)*(ushort *)(iVar1 + 0x33e) << 10;
      }
      *(int *)(extraout_a0 + 4) = iVar1 + *(int *)(extraout_a0 + 4);
      if (*(byte *)(extraout_a0 + 9) < 5) {
        *(byte *)(extraout_a0 + 9) = *(byte *)(extraout_a0 + 9) + 1;
      }
      _L0();
    }
  }
  if ((_DAT_00000010 != 0) && (*(char *)(_DAT_00000010 + 10) == '\0')) {
    if (-1 < (*(int *)(_DAT_00000010 + 4) - _DAT_44b00120) + -2000) {
      *(undefined *)(_DAT_00000010 + 10) = 1;
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int iVar1;
  int unaff_s2;
  
  _L0();
  while (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_00010644(0x18);
    iVar1 = (uint)*(byte *)(extraout_a0 + 8) * 0x5d8 + unaff_s1;
    if (*(char *)(iVar1 + 0x56) == '\0') {
      iVar1 = *(int *)((uint)*(byte *)(iVar1 + 0x60) * 0x1b0 + unaff_s2 + 4);
    }
    else {
      iVar1 = (uint)*(ushort *)(iVar1 + 0x33e) << 10;
    }
    *(int *)(extraout_a0 + 4) = iVar1 + *(int *)(extraout_a0 + 4);
    if (*(byte *)(extraout_a0 + 9) < 5) {
      *(byte *)(extraout_a0 + 9) = *(byte *)(extraout_a0 + 9) + 1;
    }
    _L0();
  }
  iVar1 = *(int *)(unaff_s0 + 0x10);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 10) == '\0')) {
    if (-1 < (*(int *)(iVar1 + 4) - _DAT_44b00120) + -2000) {
      *(int *)(unaff_s0 + 0x30) = iVar1;
      *(undefined *)(iVar1 + 10) = 1;
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010644(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  
  while( true ) {
    FUN_00010644(param_1);
    iVar1 = (uint)*(byte *)(extraout_a0 + 8) * unaff_s4 + unaff_s1;
    if (*(char *)(iVar1 + 0x56) == '\0') {
      iVar1 = *(int *)((uint)*(byte *)(iVar1 + 0x60) * unaff_s5 + unaff_s2 + 4);
    }
    else {
      iVar1 = (uint)*(ushort *)(iVar1 + 0x33e) << 10;
    }
    *(int *)(extraout_a0 + 4) = iVar1 + *(int *)(extraout_a0 + 4);
    if (*(byte *)(extraout_a0 + 9) <= unaff_s6) {
      *(byte *)(extraout_a0 + 9) = *(byte *)(extraout_a0 + 9) + 1;
    }
    _L0();
    if (*(int *)(unaff_s0 + 0x18) == 0) break;
    param_1 = unaff_s3 + 0x18;
  }
  iVar1 = *(int *)(unaff_s0 + 0x10);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 10) == '\0')) {
    if (-1 < (*(int *)(iVar1 + 4) - _DAT_44b00120) + -2000) {
      *(int *)(unaff_s0 + 0x30) = iVar1;
      *(undefined *)(iVar1 + 10) = 1;
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  
  while (_L0(), *(int *)(unaff_s0 + 0x18) != 0) {
    FUN_00010644(unaff_s3 + 0x18);
    iVar1 = (uint)*(byte *)(extraout_a0 + 8) * unaff_s4 + unaff_s1;
    if (*(char *)(iVar1 + 0x56) == '\0') {
      iVar1 = *(int *)((uint)*(byte *)(iVar1 + 0x60) * unaff_s5 + unaff_s2 + 4);
    }
    else {
      iVar1 = (uint)*(ushort *)(iVar1 + 0x33e) << 10;
    }
    *(int *)(extraout_a0 + 4) = iVar1 + *(int *)(extraout_a0 + 4);
    if (*(byte *)(extraout_a0 + 9) <= unaff_s6) {
      *(byte *)(extraout_a0 + 9) = *(byte *)(extraout_a0 + 9) + 1;
    }
  }
  iVar1 = *(int *)(unaff_s0 + 0x10);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 10) == '\0')) {
    if (-1 < (*(int *)(iVar1 + 4) - _DAT_44b00120) + -2000) {
      *(int *)(unaff_s0 + 0x30) = iVar1;
      *(undefined *)(iVar1 + 10) = 1;
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5ea5

void chan_cde_evt(void *env)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_a0;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined2 uVar7;
  uint uVar8;
  
  uVar2 = _DAT_44b00120;
  if ((1 < DAT_00000072) && (uVar3 = DAT_00000070 & 0x2c, (DAT_00000070 & 0x2c) == 0)) {
    FUN_00010736();
    _DAT_0000006c = uVar2;
    uVar8 = 0;
    for (piVar6 = (int *)_DAT_00000008; piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
      iVar4 = piVar6[0x10];
      if (iVar4 != 0) {
        uVar3 = uVar3 + 1 & 0xff;
        if (((*(byte *)((uint)*(byte *)((int)piVar6 + 0x57) * 0x24 + 0x21) & 3) != 0) ||
           (*(char *)(piVar6 + 0x16) == '\0')) {
          uVar8 = uVar8 + 1 & 0xff;
        }
        *(undefined2 *)(iVar4 + 0x10) = 0;
        *(undefined2 *)(iVar4 + 0x14) = 0;
      }
    }
    if (uVar3 != _DAT_00000068 / 0xc800) {
      FUN_00010786();
    }
    if ((uVar8 == 0) || (uVar3 == uVar8)) {
      uVar8 = 0;
      iVar4 = 0x32;
    }
    else {
      iVar4 = 10;
      uVar8 = ((uVar3 - uVar8) * 0x280000 >> 0x10) / uVar8;
    }
    for (piVar6 = (int *)_DAT_00000008; piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
      iVar5 = piVar6[0x10];
      if (iVar5 != 0) {
        if (((*(byte *)((uint)*(byte *)((int)piVar6 + 0x57) * 0x24 + 0x21) & 3) != 0) ||
           (iVar1 = iVar4, *(char *)(piVar6 + 0x16) == '\0')) {
          iVar1 = uVar8 + 0x32;
        }
        uVar7 = (undefined2)(((uint)*(ushort *)(iVar5 + 0x10) + iVar1) * 0x10000 >> 0x10);
        *(undefined2 *)(iVar5 + 0x10) = uVar7;
        *(undefined2 *)(iVar5 + 0x12) = uVar7;
        if (*(char *)((int)piVar6 + 0x56) == '\0') {
          uVar3 = *(uint *)((uint)*(byte *)(piVar6 + 0x18) * 0x1b0 + 4);
        }
        else {
          uVar3 = (uint)*(ushort *)((int)piVar6 + 0x33e) << 10;
        }
        uVar3 = _DAT_00000068 / uVar3;
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        *(ushort *)(iVar5 + 0x14) = ((ushort)uVar3 & 0xff) * 10 + *(short *)(iVar5 + 0x14);
      }
    }
    if (_DAT_00000020 != 0) {
      FUN_000107d8();
    }
    _L0();
    _DAT_00000024 = extraout_a0;
    if (env == (void *)0x0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010736(void)

{
  int iVar1;
  uint unaff_s0;
  int unaff_s1;
  undefined4 extraout_a0;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined2 uVar6;
  int unaff_s2;
  undefined4 unaff_s3;
  uint uVar7;
  
  FUN_00010736();
  piVar5 = (int *)_DAT_00000008;
  *(undefined4 *)(unaff_s2 + 0x6c) = unaff_s3;
  uVar7 = 0;
  for (; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
    iVar2 = piVar5[0x10];
    if (iVar2 != 0) {
      unaff_s0 = unaff_s0 + 1 & 0xff;
      if (((*(byte *)((uint)*(byte *)((int)piVar5 + 0x57) * 0x24 + 0x21) & 3) != 0) ||
         (*(char *)(piVar5 + 0x16) == '\0')) {
        uVar7 = uVar7 + 1 & 0xff;
      }
      *(undefined2 *)(iVar2 + 0x10) = 0;
      *(undefined2 *)(iVar2 + 0x14) = 0;
    }
  }
  if (unaff_s0 != *(uint *)(unaff_s2 + 0x68) / 0xc800) {
    FUN_00010786();
  }
  if ((uVar7 == 0) || (unaff_s0 == uVar7)) {
    uVar7 = 0;
    iVar2 = 0x32;
  }
  else {
    iVar2 = 10;
    uVar7 = ((unaff_s0 - uVar7) * 0x280000 >> 0x10) / uVar7;
  }
  for (piVar5 = (int *)_DAT_00000008; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
    iVar4 = piVar5[0x10];
    if (iVar4 != 0) {
      if (((*(byte *)((uint)*(byte *)((int)piVar5 + 0x57) * 0x24 + 0x21) & 3) != 0) ||
         (iVar1 = iVar2, *(char *)(piVar5 + 0x16) == '\0')) {
        iVar1 = uVar7 + 0x32;
      }
      uVar6 = (undefined2)(((uint)*(ushort *)(iVar4 + 0x10) + iVar1) * 0x10000 >> 0x10);
      *(undefined2 *)(iVar4 + 0x10) = uVar6;
      *(undefined2 *)(iVar4 + 0x12) = uVar6;
      if (*(char *)((int)piVar5 + 0x56) == '\0') {
        uVar3 = *(uint *)((uint)*(byte *)(piVar5 + 0x18) * 0x1b0 + 4);
      }
      else {
        uVar3 = (uint)*(ushort *)((int)piVar5 + 0x33e) << 10;
      }
      uVar3 = *(uint *)(unaff_s2 + 0x68) / uVar3;
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      *(ushort *)(iVar4 + 0x14) = ((ushort)uVar3 & 0xff) * 10 + *(short *)(iVar4 + 0x14);
    }
  }
  if (*(int *)(unaff_s2 + 0x20) != 0) {
    FUN_000107d8();
  }
  _L0();
  if (unaff_s1 != 0) {
    *(undefined4 *)(unaff_s2 + 0x24) = extraout_a0;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010786(void)

{
  int iVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s1;
  undefined4 extraout_a0;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined2 uVar7;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  FUN_00010786();
  if ((unaff_s3 == 0) || (unaff_s0 == unaff_s3)) {
    iVar2 = 0;
    iVar3 = 0x32;
  }
  else {
    iVar3 = 10;
    iVar2 = (int)((uint)((unaff_s0 - unaff_s3) * 0x280000) >> 0x10) / unaff_s3;
  }
  for (piVar6 = *(int **)(unaff_s4 + 8); piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
    iVar5 = piVar6[0x10];
    if (iVar5 != 0) {
      if (((*(byte *)((uint)*(byte *)((int)piVar6 + 0x57) * 0x24 + 0x21) & 3) != 0) ||
         (iVar1 = iVar3, *(char *)(piVar6 + 0x16) == '\0')) {
        iVar1 = iVar2 + 0x32;
      }
      uVar7 = (undefined2)(((uint)*(ushort *)(iVar5 + 0x10) + iVar1) * 0x10000 >> 0x10);
      *(undefined2 *)(iVar5 + 0x10) = uVar7;
      *(undefined2 *)(iVar5 + 0x12) = uVar7;
      if (*(char *)((int)piVar6 + 0x56) == '\0') {
        uVar4 = *(uint *)((uint)*(byte *)(piVar6 + 0x18) * 0x1b0 + 4);
      }
      else {
        uVar4 = (uint)*(ushort *)((int)piVar6 + 0x33e) << 10;
      }
      uVar4 = *(uint *)(unaff_s2 + 0x68) / uVar4;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      *(ushort *)(iVar5 + 0x14) = ((ushort)uVar4 & 0xff) * 10 + *(short *)(iVar5 + 0x14);
    }
  }
  if (*(int *)(unaff_s2 + 0x20) != 0) {
    FUN_000107d8();
  }
  _L0();
  if (unaff_s1 != 0) {
    *(undefined4 *)(unaff_s2 + 0x24) = extraout_a0;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000107d8(void)

{
  int unaff_s1;
  undefined4 extraout_a0;
  int unaff_s2;
  
  FUN_000107d8();
  _L0();
  if (unaff_s1 != 0) {
    *(undefined4 *)(unaff_s2 + 0x24) = extraout_a0;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s1;
  undefined4 extraout_a0;
  int unaff_s2;
  
  _L0();
  if (unaff_s1 != 0) {
    *(undefined4 *)(unaff_s2 + 0x24) = extraout_a0;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 529b

void chan_pre_switch_channel(void)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  
  _L0();
  if ((DAT_00000070 & 0x20) != 0) {
    if ((1 < DAT_00000072) && (_DAT_00000024 != (int **)0x0)) {
      *(undefined *)((int)_DAT_00000024 + 0x16) = 1;
      _DAT_00000024 = (int **)0x0;
    }
    DAT_00000070 &= 0xdf;
  }
  if ((DAT_00000070 & 8) == 0) {
    if ((DAT_00000070 & 4) != 0) {
      ppiVar2 = (int **)&DAT_00000070;
      goto _L0;
    }
    if (_DAT_00000024 == (int **)0x0) {
      if (1 < DAT_00000072) {
        FUN_00010954();
        goto _L0;
      }
      ppiVar2 = _DAT_00000008;
      if (DAT_00000072 != 1) goto _L0;
      goto _L0;
    }
  }
  else {
    ppiVar2 = (int **)0x54;
_L0:
    if (_DAT_00000024 != (int **)0x0) {
      *(undefined *)((int)_DAT_00000024 + 0x16) = 1;
    }
_L0:
    _DAT_00000024 = ppiVar2;
  }
_L0:
  ppiVar2 = _DAT_00000024;
  if (_DAT_00000024 == (int **)0x0) {
    return;
  }
  _L0();
  FUN_00010988();
  _DAT_44b000dc = 0x10;
  _DAT_00000020 = ppiVar2;
  _DAT_00000024 = (int **)0x0;
  _L0();
  ppiVar1 = _DAT_00000020;
  ppiVar3 = _DAT_00000008;
  if (*(char *)((int)ppiVar2 + 0x17) == '\x03') {
    _DAT_44b00220 = 0;
    FUN_00010ac4();
_L0:
    if (*(byte *)((int)ppiVar2 + 0x17) < 3) goto _L0;
  }
  else {
    if (*(char *)((int)ppiVar2 + 0x17) != '\x04') {
      if ((cRam00000000 == '\0') || ((_DAT_00000004 & 8) != 0)) {
        _L0();
        for (; ppiVar3 != (int **)0x0; ppiVar3 = (int **)*ppiVar3) {
          if (((ppiVar1 == (int **)ppiVar3[0x10]) && (*(char *)((int)ppiVar3 + 0x56) == '\0')) &&
             (*(char *)(ppiVar3 + 0x16) != '\0')) {
            FUN_00010a46((uint)*(byte *)(ppiVar3 + 0x18),0,0);
          }
        }
      }
      ppiVar3 = _DAT_00000008;
      if (*(byte *)((int)ppiVar2 + 0x17) < 3) {
        for (; ppiVar3 != (int **)0x0; ppiVar3 = (int **)*ppiVar3) {
          if (ppiVar2 == (int **)ppiVar3[0x10]) {
            *(undefined *)((uint)*(byte *)((int)ppiVar3 + 0x57) * 0x24 + 0x23) = 1;
            _L0((int *)ppiVar3);
          }
        }
        goto _L0;
      }
    }
  }
  _DAT_00000004 |= 2;
  DAT_00000073 = (byte)(_DAT_44b0004c >> 2) & 1;
  _L0();
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  int *piVar4;
  
  _L0();
  if ((*(byte *)(unaff_s0 + 0x70) & 0x20) != 0) {
    if ((1 < *(byte *)(unaff_s0 + 0x72)) && (*(int *)(unaff_s0 + 0x24) != 0)) {
      *(undefined *)(*(int *)(unaff_s0 + 0x24) + 0x16) = 1;
      *(undefined4 *)(unaff_s0 + 0x24) = 0;
    }
    *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xdf;
  }
  iVar1 = *(int *)(unaff_s0 + 0x24);
  if ((*(byte *)(unaff_s0 + 0x70) & 8) == 0) {
    if ((*(byte *)(unaff_s0 + 0x70) & 4) != 0) {
      uVar2 = 0x70;
      goto _L0;
    }
    if (iVar1 == 0) {
      if (1 < *(byte *)(unaff_s0 + 0x72)) {
        FUN_00010954();
        goto _L0;
      }
      if (*(byte *)(unaff_s0 + 0x72) != 1) goto _L0;
      uVar2 = *(undefined4 *)(unaff_s0 + 8);
      goto _L0;
    }
  }
  else {
    uVar2 = 0x54;
_L0:
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x16) = 1;
    }
_L0:
    *(undefined4 *)(unaff_s0 + 0x24) = uVar2;
  }
_L0:
  iVar1 = *(int *)(unaff_s0 + 0x24);
  if (iVar1 == 0) {
    return;
  }
  _L0();
  FUN_00010988();
  _DAT_44b000dc = 0x10;
  *(int *)(unaff_s0 + 0x20) = iVar1;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  _L0();
  ppiVar3 = _DAT_00000008;
  if (*(char *)(iVar1 + 0x17) == '\x03') {
    _DAT_44b00220 = 0;
    FUN_00010ac4();
_L0:
    if (*(byte *)(iVar1 + 0x17) < 3) goto _L0;
  }
  else {
    if (*(char *)(iVar1 + 0x17) != '\x04') {
      if ((cRam00000000 == '\0') || ((_DAT_00000004 & 8) != 0)) {
        piVar4 = *(int **)(unaff_s0 + 0x20);
        _L0();
        for (; ppiVar3 != (int **)0x0; ppiVar3 = (int **)*ppiVar3) {
          if (((piVar4 == ppiVar3[0x10]) && (*(char *)((int)ppiVar3 + 0x56) == '\0')) &&
             (*(char *)(ppiVar3 + 0x16) != '\0')) {
            FUN_00010a46((uint)*(byte *)(ppiVar3 + 0x18),0,0);
          }
        }
      }
      ppiVar3 = _DAT_00000008;
      if (*(byte *)(iVar1 + 0x17) < 3) {
        for (; ppiVar3 != (int **)0x0; ppiVar3 = (int **)*ppiVar3) {
          if ((int *)iVar1 == ppiVar3[0x10]) {
            *(undefined *)((uint)*(byte *)((int)ppiVar3 + 0x57) * 0x24 + 0x23) = 1;
            _L0((int *)ppiVar3);
          }
        }
        goto _L0;
      }
    }
  }
  _DAT_00000004 |= 2;
  *(byte *)(unaff_s0 + 0x73) = (byte)(_DAT_44b0004c >> 2) & 1;
  _L0();
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010954(void)

{
  int unaff_s0;
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  
  FUN_00010954();
  iVar1 = *(int *)(unaff_s0 + 0x24);
  if (iVar1 == 0) {
    return;
  }
  _L0();
  FUN_00010988();
  _DAT_44b000dc = 0x10;
  *(int *)(unaff_s0 + 0x20) = iVar1;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  _L0();
  ppiVar2 = _DAT_00000008;
  if (*(char *)(iVar1 + 0x17) == '\x03') {
    _DAT_44b00220 = 0;
    FUN_00010ac4();
_L0:
    if (*(byte *)(iVar1 + 0x17) < 3) goto _L0;
  }
  else {
    if (*(char *)(iVar1 + 0x17) != '\x04') {
      if ((cRam00000000 == '\0') || ((_DAT_00000004 & 8) != 0)) {
        piVar3 = *(int **)(unaff_s0 + 0x20);
        _L0();
        for (; ppiVar2 != (int **)0x0; ppiVar2 = (int **)*ppiVar2) {
          if (((piVar3 == ppiVar2[0x10]) && (*(char *)((int)ppiVar2 + 0x56) == '\0')) &&
             (*(char *)(ppiVar2 + 0x16) != '\0')) {
            FUN_00010a46((uint)*(byte *)(ppiVar2 + 0x18),0,0);
          }
        }
      }
      ppiVar2 = _DAT_00000008;
      if (*(byte *)(iVar1 + 0x17) < 3) {
        for (; ppiVar2 != (int **)0x0; ppiVar2 = (int **)*ppiVar2) {
          if ((int *)iVar1 == ppiVar2[0x10]) {
            *(undefined *)((uint)*(byte *)((int)ppiVar2 + 0x57) * 0x24 + 0x23) = 1;
            _L0((int *)ppiVar2);
          }
        }
        goto _L0;
      }
    }
  }
  _DAT_00000004 |= 2;
  *(byte *)(unaff_s0 + 0x73) = (byte)(_DAT_44b0004c >> 2) & 1;
  _L0();
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int **ppiVar1;
  int *piVar2;
  
  _L0();
  FUN_00010988();
  *(undefined4 *)(unaff_s2 + 0xdc) = 0x10;
  *(int *)(unaff_s0 + 0x20) = unaff_s1;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  _L0();
  ppiVar1 = _DAT_00000008;
  if (*(char *)(unaff_s1 + 0x17) == '\x03') {
    *(undefined4 *)(unaff_s2 + 0x220) = 0;
    FUN_00010ac4();
_L0:
    if (*(byte *)(unaff_s1 + 0x17) < 3) goto _L0;
  }
  else {
    if (*(char *)(unaff_s1 + 0x17) != '\x04') {
      if ((cRam00000000 == '\0') || ((_DAT_00000004 & 8) != 0)) {
        piVar2 = *(int **)(unaff_s0 + 0x20);
        _L0();
        for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          if (((piVar2 == ppiVar1[0x10]) && (*(char *)((int)ppiVar1 + 0x56) == '\0')) &&
             (*(char *)(ppiVar1 + 0x16) != '\0')) {
            FUN_00010a46((uint)*(byte *)(ppiVar1 + 0x18),0,0);
          }
        }
      }
      ppiVar1 = _DAT_00000008;
      if (*(byte *)(unaff_s1 + 0x17) < 3) {
        for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          if ((int *)unaff_s1 == ppiVar1[0x10]) {
            *(undefined *)((uint)*(byte *)((int)ppiVar1 + 0x57) * 0x24 + 0x23) = 1;
            _L0((int *)ppiVar1);
          }
        }
        goto _L0;
      }
    }
  }
  _DAT_00000004 |= 2;
  *(byte *)(unaff_s0 + 0x73) = (byte)(_DAT_44b0004c >> 2) & 1;
  _L0();
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010988(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int **ppiVar1;
  int *piVar2;
  
  FUN_00010988();
  *(undefined4 *)(unaff_s2 + 0xdc) = 0x10;
  *(int *)(unaff_s0 + 0x20) = unaff_s1;
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  _L0();
  ppiVar1 = _DAT_00000008;
  if (*(char *)(unaff_s1 + 0x17) == '\x03') {
    *(undefined4 *)(unaff_s2 + 0x220) = 0;
    FUN_00010ac4();
_L0:
    if (*(byte *)(unaff_s1 + 0x17) < 3) goto _L0;
  }
  else {
    if (*(char *)(unaff_s1 + 0x17) != '\x04') {
      if ((cRam00000000 == '\0') || ((_DAT_00000004 & 8) != 0)) {
        piVar2 = *(int **)(unaff_s0 + 0x20);
        _L0();
        for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          if (((piVar2 == ppiVar1[0x10]) && (*(char *)((int)ppiVar1 + 0x56) == '\0')) &&
             (*(char *)(ppiVar1 + 0x16) != '\0')) {
            FUN_00010a46((uint)*(byte *)(ppiVar1 + 0x18),0,0);
          }
        }
      }
      ppiVar1 = _DAT_00000008;
      if (*(byte *)(unaff_s1 + 0x17) < 3) {
        for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          if ((int *)unaff_s1 == ppiVar1[0x10]) {
            *(undefined *)((uint)*(byte *)((int)ppiVar1 + 0x57) * 0x24 + 0x23) = 1;
            _L0((int *)ppiVar1);
          }
        }
        goto _L0;
      }
    }
  }
  _DAT_00000004 |= 2;
  *(byte *)(unaff_s0 + 0x73) = (byte)(_DAT_44b0004c >> 2) & 1;
  _L0();
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int **ppiVar1;
  int *piVar2;
  
  _L0();
  ppiVar1 = _DAT_00000008;
  if (*(char *)(unaff_s1 + 0x17) == '\x03') {
    *(undefined4 *)(unaff_s2 + 0x220) = 0;
    FUN_00010ac4();
_L0:
    if (*(byte *)(unaff_s1 + 0x17) < 3) goto _L0;
  }
  else {
    if (*(char *)(unaff_s1 + 0x17) != '\x04') {
      if ((cRam00000000 == '\0') || ((_DAT_00000004 & 8) != 0)) {
        piVar2 = *(int **)(unaff_s0 + 0x20);
        _L0();
        for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          if (((piVar2 == ppiVar1[0x10]) && (*(char *)((int)ppiVar1 + 0x56) == '\0')) &&
             (*(char *)(ppiVar1 + 0x16) != '\0')) {
            FUN_00010a46((uint)*(byte *)(ppiVar1 + 0x18),0,0);
          }
        }
      }
      ppiVar1 = _DAT_00000008;
      if (*(byte *)(unaff_s1 + 0x17) < 3) {
        for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          if ((int *)unaff_s1 == ppiVar1[0x10]) {
            *(undefined *)((uint)*(byte *)((int)ppiVar1 + 0x57) * 0x24 + 0x23) = 1;
            _L0((int *)ppiVar1);
          }
        }
        goto _L0;
      }
    }
  }
  _DAT_00000004 |= 2;
  *(byte *)(unaff_s0 + 0x73) = (byte)(_DAT_44b0004c >> 2) & 1;
  _L0();
_L0:
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int *unaff_s2;
  int **ppiVar1;
  int unaff_s3;
  
  _L0();
  for (; unaff_s2 != (int *)0x0; unaff_s2 = (int *)*unaff_s2) {
    if (((unaff_s3 == unaff_s2[0x10]) && (*(char *)((int)unaff_s2 + 0x56) == '\0')) &&
       (*(char *)(unaff_s2 + 0x16) != '\0')) {
      FUN_00010a46((uint)*(byte *)(unaff_s2 + 0x18),0,0);
    }
  }
  ppiVar1 = _DAT_00000008;
  if (*(byte *)(unaff_s1 + 0x17) < 3) {
    for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
      if ((int *)unaff_s1 == ppiVar1[0x10]) {
        *(undefined *)((uint)*(byte *)((int)ppiVar1 + 0x57) * 0x24 + 0x23) = 1;
        _L0((int *)ppiVar1);
      }
    }
    if (*(byte *)(unaff_s1 + 0x17) < 3) goto _L0;
  }
  _DAT_00000004 |= 2;
  *(byte *)(unaff_s0 + 0x73) = (byte)(_DAT_44b0004c >> 2) & 1;
  _L0();
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a46(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s1;
  int *unaff_s2;
  int **ppiVar1;
  int unaff_s3;
  
  do {
    FUN_00010a46(param_1,param_2,param_3);
    do {
      unaff_s2 = (int *)*unaff_s2;
      if (unaff_s2 == (int *)0x0) {
        ppiVar1 = _DAT_00000008;
        if (2 < *(byte *)(unaff_s1 + 0x17)) goto _L0;
        for (; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          if ((int *)unaff_s1 == ppiVar1[0x10]) {
            *(undefined *)((uint)*(byte *)((int)ppiVar1 + 0x57) * 0x24 + 0x23) = 1;
            _L0((int *)ppiVar1);
          }
        }
        if (2 < *(byte *)(unaff_s1 + 0x17)) {
_L0:
          _DAT_00000004 |= 2;
          *(byte *)(unaff_s0 + 0x73) = (byte)(_DAT_44b0004c >> 2) & 1;
          _L0();
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    } while (((unaff_s3 != unaff_s2[0x10]) || (*(char *)((int)unaff_s2 + 0x56) != '\0')) ||
            (*(char *)(unaff_s2 + 0x16) == '\0'));
    param_1 = (uint)*(byte *)(unaff_s2 + 0x18);
    param_3 = 0;
    param_2 = 0;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(int *param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int **unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined unaff_s5;
  
  do {
    _L0(param_1);
    param_1 = (int *)unaff_s2;
    do {
      param_1 = (int *)*param_1;
      if ((int **)param_1 == (int **)0x0) {
        if (2 < *(byte *)((int)unaff_s1 + 0x17)) {
          _DAT_00000004 |= 2;
          *(byte *)(unaff_s0 + 0x73) = (byte)(_DAT_44b0004c >> 2) & 1;
          _L0();
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    } while (unaff_s1 != ((int **)param_1)[0x10]);
    *(undefined *)((uint)*(byte *)((int)param_1 + 0x57) * unaff_s4 + unaff_s3 + 0x23) = unaff_s5;
    unaff_s2 = (int **)param_1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010ac4(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00010ac4();
  if (2 < *(byte *)(unaff_s1 + 0x17)) {
    _DAT_00000004 |= 2;
    *(byte *)(unaff_s0 + 0x73) = (byte)(_DAT_44b0004c >> 2) & 1;
    _L0();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 50d7

void chan_goto_idle_cb(void)

{
  undefined uVar1;
  int iVar2;
  int *piVar3;
  int extraout_a0;
  int iVar4;
  
  _L0();
  iVar2 = _DAT_00000020;
  piVar3 = (int *)_DAT_00000008;
  if (((_DAT_00000020 != 0) && ((DAT_00000070 & 0x20) == 0)) &&
     ((cRam00000000 == '\0' || ((_DAT_00000004 & 8) != 0)))) {
    iVar4 = 0;
    _L0();
    for (; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      if ((((iVar2 == piVar3[0x10]) && (*(char *)((int)piVar3 + 0x56) == '\0')) &&
          (*(char *)(piVar3 + 0x16) != '\0')) && (*(char *)(piVar3 + 0x18) != -1)) {
        uVar1 = *(undefined *)(iVar2 + 0x16);
        *(undefined *)(iVar2 + 0x16) = 6;
        FUN_00010baa((uint)*(byte *)(piVar3 + 0x18),0);
        if (extraout_a0 == 0) {
          iVar4 += 1;
        }
        *(undefined *)(iVar2 + 0x16) = uVar1;
      }
    }
    DAT_00000071 = (undefined)iVar4;
    if (iVar4 != 0) {
      FUN_00010b5a();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  undefined uVar1;
  int *piVar2;
  int unaff_s1;
  int extraout_a0;
  int iVar3;
  int iVar4;
  
  _L0();
  piVar2 = (int *)_DAT_00000008;
  iVar3 = *(int *)(unaff_s1 + 0x20);
  if (((iVar3 != 0) && ((*(byte *)(unaff_s1 + 0x70) & 0x20) == 0)) &&
     ((cRam00000000 == '\0' || ((_DAT_00000004 & 8) != 0)))) {
    iVar4 = 0;
    _L0();
    for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if ((((iVar3 == piVar2[0x10]) && (*(char *)((int)piVar2 + 0x56) == '\0')) &&
          (*(char *)(piVar2 + 0x16) != '\0')) && (*(char *)(piVar2 + 0x18) != -1)) {
        uVar1 = *(undefined *)(iVar3 + 0x16);
        *(undefined *)(iVar3 + 0x16) = 6;
        FUN_00010baa((uint)*(byte *)(piVar2 + 0x18),0);
        if (extraout_a0 == 0) {
          iVar4 += 1;
        }
        *(undefined *)(iVar3 + 0x16) = uVar1;
      }
    }
    *(char *)(unaff_s1 + 0x71) = (char)iVar4;
    if (iVar4 != 0) {
      FUN_00010b5a();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined uVar1;
  int *unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  _L0();
  for (; unaff_s0 != (int *)0x0; unaff_s0 = (int *)*unaff_s0) {
    if ((((unaff_s2 == unaff_s0[0x10]) && (*(char *)((int)unaff_s0 + 0x56) == '\0')) &&
        (*(char *)(unaff_s0 + 0x16) != '\0')) && (*(char *)(unaff_s0 + 0x18) != -1)) {
      uVar1 = *(undefined *)(unaff_s2 + 0x16);
      *(undefined *)(unaff_s2 + 0x16) = 6;
      FUN_00010baa((uint)*(byte *)(unaff_s0 + 0x18),0);
      if (extraout_a0 == 0) {
        unaff_s3 += 1;
      }
      *(undefined *)(unaff_s2 + 0x16) = uVar1;
    }
  }
  *(char *)(unaff_s1 + 0x71) = (char)unaff_s3;
  if (unaff_s3 == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  FUN_00010b5a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b5a(void)

{
  FUN_00010b5a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010baa(uint param_1,undefined4 param_2)

{
  int *unaff_s0;
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  undefined unaff_s5;
  undefined unaff_s7;
  
  do {
    FUN_00010baa(param_1,param_2);
    if (extraout_a0 == 0) {
      unaff_s3 += 1;
    }
    *(undefined *)(unaff_s2 + 0x16) = unaff_s7;
    do {
      unaff_s0 = (int *)*unaff_s0;
      if (unaff_s0 == (int *)0x0) {
        *(char *)(unaff_s1 + 0x71) = (char)unaff_s3;
        if (unaff_s3 == 0) {
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        FUN_00010b5a();
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    } while ((((unaff_s2 != unaff_s0[0x10]) || (*(char *)((int)unaff_s0 + 0x56) != '\0')) ||
             (*(char *)(unaff_s0 + 0x16) == '\0')) || (*(byte *)(unaff_s0 + 0x18) == unaff_s4));
    unaff_s7 = *(undefined *)(unaff_s2 + 0x16);
    *(undefined *)(unaff_s2 + 0x16) = unaff_s5;
    param_1 = (uint)*(byte *)(unaff_s0 + 0x18);
    param_2 = 0;
  } while( true );
}



// DWARF DIE: 5228

void chan_tx_cfm(void *dummy,uint32_t status)

{
  if (DAT_00000071 == '\0') {
    FUN_00010c06();
  }
  DAT_00000071 += -1;
  if (DAT_00000071 != '\0') {
    return;
  }
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010c06(void)

{
  int unaff_s0;
  char cVar1;
  
  FUN_00010c06();
  cVar1 = *(char *)(unaff_s0 + 0x71) + -1;
  *(char *)(unaff_s0 + 0x71) = cVar1;
  if (cVar1 != '\0') {
    return;
  }
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 60cc

void chan_ctxt_op_evt(void *env)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)((int)env + 0x16);
  if (1 < bVar1) {
    if (bVar1 < 4) {
      DAT_00000070 |= 0x20;
    }
    else {
      if (bVar1 == 4) {
        if (*(byte *)((int)env + 0x17) < 3) {
          *(undefined *)((int)env + 0x16) = 1;
          uVar2 = _DAT_44b00120;
          if ((DAT_00000072 != 1) && (1 < DAT_00000072)) {
            FUN_00010cca();
            _DAT_0000006c = uVar2;
            _L0();
          }
        }
        else {
          _DAT_00000004 &= 0xfffffffd;
          FUN_00010cfc();
          _DAT_00000020 = 0;
          if (*(char *)((int)env + 0x17) == '\x03') {
            DAT_00000070 &= 0xf7;
            _L0();
          }
          else {
            if (*(char *)((int)env + 0x17) == '\x04') {
              if (*(short *)((int)env + 0xe) == 0) {
                DAT_00000070 &= 0xbf;
              }
              DAT_00000070 &= 0xfb;
            }
          }
          *(undefined *)((int)env + 0x17) = 0xff;
          if ((DAT_00000070 & 3) == 0) {
            DAT_00000070 &= 0xef;
          }
          else {
            _L0();
          }
          if (DAT_00000072 != 1) {
            if (1 < DAT_00000072) {
              do {
                    // WARNING: Do nothing block with infinite loop
              } while( true );
            }
            _L0();
            do {
                    // WARNING: Do nothing block with infinite loop
            } while( true );
          }
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  return;
}



void FUN_00010cca(void)

{
  int unaff_s0;
  undefined4 unaff_s2;
  
  FUN_00010cca();
  *(undefined4 *)(unaff_s0 + 0x6c) = unaff_s2;
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



void FUN_00010cfc(void)

{
  int unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  
  FUN_00010cfc();
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  if (*(byte *)(unaff_s1 + 0x17) == unaff_s3) {
    *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xf7;
    _L0();
  }
  else {
    if (*(byte *)(unaff_s1 + 0x17) == unaff_s2) {
      if (*(short *)(unaff_s1 + 0xe) == 0) {
        *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xbf;
      }
      *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xfb;
    }
  }
  *(undefined *)(unaff_s1 + 0x17) = 0xff;
  if ((*(byte *)(unaff_s0 + 0x70) & 3) == 0) {
    *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xef;
  }
  else {
    _L0();
  }
  if (*(byte *)(unaff_s0 + 0x72) != 1) {
    if (*(byte *)(unaff_s0 + 0x72) < 2) {
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _L0();
  *(undefined *)(unaff_s1 + 0x17) = 0xff;
  if ((*(byte *)(unaff_s0 + 0x70) & 3) == 0) {
    *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xef;
  }
  else {
    _L0();
  }
  if (*(byte *)(unaff_s0 + 0x72) != 1) {
    if (*(byte *)(unaff_s0 + 0x72) < 2) {
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  if (*(byte *)(unaff_s0 + 0x72) == 1) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (*(byte *)(unaff_s0 + 0x72) < 2) {
    _L0();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4aa4

void chan_init(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  _L0();
  iVar2 = 0;
  do {
    FUN_00010dfe(iVar1,0,0x1c);
    *(undefined2 *)(iVar1 + 0xe) = 0xff;
    *(undefined *)(iVar1 + 0x17) = 0xff;
    if (iVar2 < 3) {
      FUN_00010e18(iVar1);
    }
    else {
      if (iVar2 == 3) {
        _DAT_0000005c &= 0xffff;
        DAT_00000059 = 0;
      }
    }
    iVar2 += 1;
    iVar1 += 0x1c;
  } while (iVar2 != 5);
  _DAT_0000002c = 0;
  _DAT_0000003c = 0;
  _DAT_00000040 = 0;
  _DAT_0000004c = 0;
  _DAT_0000005c = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s3;
  
  _L0();
  iVar1 = 0;
  do {
    FUN_00010dfe(unaff_s1,0,0x1c);
    *(undefined2 *)(unaff_s1 + 0xe) = 0xff;
    *(undefined *)(unaff_s1 + 0x17) = 0xff;
    if (iVar1 < 3) {
      FUN_00010e18(unaff_s1);
    }
    else {
      if (iVar1 == 3) {
        *(undefined2 *)(unaff_s3 + 0x5e) = 0;
        *(undefined *)(unaff_s3 + 0x59) = 0;
      }
    }
    iVar1 += 1;
    unaff_s1 += 0x1c;
  } while (iVar1 != 5);
  *(undefined4 *)(unaff_s0 + 0x2c) = 0;
  *(undefined4 *)(unaff_s0 + 0x3c) = 0;
  *(undefined4 *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x40) = 0;
  *(undefined4 *)(unaff_s0 + 0x5c) = 0;
  return;
}



void FUN_00010dfe(int param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  undefined unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  while( true ) {
    FUN_00010dfe(param_1,param_2,param_3);
    *(undefined2 *)(unaff_s1 + 0xe) = unaff_s5;
    *(undefined *)(unaff_s1 + 0x17) = unaff_s6;
    if (unaff_s7 < unaff_s2) {
      if (unaff_s2 == unaff_s8) {
        *(undefined2 *)(unaff_s3 + 0x5e) = 0;
        *(undefined *)(unaff_s3 + 0x59) = 0;
      }
    }
    else {
      FUN_00010e18(unaff_s1);
    }
    unaff_s2 += 1;
    unaff_s1 += 0x1c;
    if (unaff_s2 == unaff_s4) break;
    param_3 = 0x1c;
    param_2 = 0;
    param_1 = unaff_s1;
  }
  *(undefined4 *)(unaff_s0 + 0x2c) = 0;
  *(undefined4 *)(unaff_s0 + 0x3c) = 0;
  *(undefined4 *)(unaff_s0 + 0x4c) = 0;
  *(undefined4 *)(unaff_s0 + 0x40) = 0;
  *(undefined4 *)(unaff_s0 + 0x5c) = 0;
  return;
}



void FUN_00010e18(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  undefined unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  do {
    FUN_00010e18(param_1);
    iVar1 = unaff_s1;
    while( true ) {
      unaff_s2 += 1;
      unaff_s1 = iVar1 + 0x1c;
      if (unaff_s2 == unaff_s4) {
        *(undefined4 *)(unaff_s0 + 0x2c) = 0;
        *(undefined4 *)(unaff_s0 + 0x3c) = 0;
        *(undefined4 *)(unaff_s0 + 0x4c) = 0;
        *(undefined4 *)(unaff_s0 + 0x40) = 0;
        *(undefined4 *)(unaff_s0 + 0x5c) = 0;
        return;
      }
      FUN_00010dfe(unaff_s1,0,0x1c);
      *(undefined2 *)(iVar1 + 0x2a) = unaff_s5;
      *(undefined *)(iVar1 + 0x33) = unaff_s6;
      param_1 = unaff_s1;
      if (unaff_s2 <= unaff_s7) break;
      iVar1 = unaff_s1;
      if (unaff_s2 == unaff_s8) {
        *(undefined2 *)(unaff_s3 + 0x5e) = 0;
        *(undefined *)(unaff_s3 + 0x59) = 0;
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 49f3

void chan_scan_req(uint8_t band,uint16_t freq,int8_t pwr,uint32_t duration_us,uint8_t vif_index)

{
  if (DAT_0000006b != -1) {
    _L0(DAT_00000070);
  }
  if ((DAT_00000070 & 0x10) != 0) {
    DAT_00000058 = band;
    _DAT_0000005a = freq;
    _DAT_0000005c = freq;
    DAT_00000060 = pwr;
    _DAT_00000062 = 0xff;
    _DAT_00000066 = (short)(duration_us >> 10);
    _DAT_0000006a = 0x301;
    DAT_0000006d = vif_index;
    DAT_00000070 = DAT_00000070 | 2;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(byte param_1)

{
  int unaff_s0;
  undefined2 unaff_s1;
  undefined unaff_s2;
  undefined unaff_s3;
  uint in_stack_00000008;
  undefined in_stack_0000000c;
  
  _L0(param_1);
  *(undefined *)(unaff_s0 + 0x6d) = in_stack_0000000c;
  *(undefined2 *)(unaff_s0 + 0x62) = 0xff;
  *(undefined2 *)(unaff_s0 + 0x6a) = 0x301;
  *(short *)(unaff_s0 + 0x66) = (short)(in_stack_00000008 >> 10);
  *(undefined *)(unaff_s0 + 0x58) = unaff_s3;
  *(undefined2 *)(unaff_s0 + 0x5c) = unaff_s1;
  *(undefined2 *)(unaff_s0 + 0x5a) = unaff_s1;
  *(undefined *)(unaff_s0 + 0x60) = unaff_s2;
  if ((param_1 & 0x10) != 0) {
    param_1 = param_1 | 2;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4929

uint8_t chan_roc_req(mm_remain_on_channel_req *req,ke_task_id_t taskid)

{
  byte bVar1;
  undefined2 in_register_0000202e;
  
  if (req->op_code == '\0') {
    if (DAT_00000087 == -1) {
      DAT_00000087 = 4;
      DAT_00000074 = req->band;
      DAT_00000075 = req->type;
      _DAT_00000076 = req->prim20_freq;
      _DAT_00000078 = req->center1_freq;
      _DAT_0000007a = req->center2_freq;
      DAT_00000086 = 1;
      _DAT_00000082 = (undefined2)(req->duration_ms * 1000 >> 10);
      DAT_00000089 = req->vif_index;
      DAT_0000007c = req->tx_power;
      _DAT_0000007e = taskid;
      if (CONCAT22(in_register_0000202e,taskid) != 0) {
        bVar1 = DAT_00000070 & 0x10;
        if ((DAT_00000070 & 0x10) != 0) {
          DAT_00000070 = DAT_00000070 | 1;
          DAT_00000086 = 1;
          DAT_00000087 = 4;
          return 0;
        }
        DAT_00000070 = DAT_00000070 | 1;
        _L0();
        return bVar1;
      }
      DAT_00000070 |= 4;
      if (_DAT_00000024 != 0) {
        DAT_00000086 = 1;
        DAT_00000087 = 4;
        return 0;
      }
      FUN_00010fde();
      return 0;
    }
  }
  else {
    if (req->op_code == '\x01') {
      if (DAT_00000087 != -1) {
        if (DAT_00000086 < 4) {
          if (DAT_00000086 < 2) {
            if (DAT_00000086 == 1) {
              DAT_00000070 &= 0xfe;
            }
          }
          else {
            _DAT_00000024 = 0;
            DAT_00000070 &= 0xfb;
          }
        }
        else {
          if (DAT_00000086 == 4) {
            FUN_00011084();
            FUN_00011094();
          }
        }
        DAT_00000087 = -1;
        if ((DAT_00000070 & 0x12) == 0x10) {
          DAT_00000070 &= 0xef;
          _L0();
          DAT_00000070 &= 0xef;
        }
      }
      return 0;
    }
  }
  return (uint8_t)1;
}



void FUN_00010fde(void)

{
  FUN_00010fde();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xef;
  return 0;
}



undefined4 FUN_00011084(void)

{
  int unaff_s0;
  int unaff_s2;
  
  FUN_00011084();
  FUN_00011094();
  *(undefined *)(unaff_s2 + 0x87) = 0xff;
  if ((*(byte *)(unaff_s0 + 0x70) & 0x12) == 0x10) {
    *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xef;
    _L0();
    *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xef;
  }
  return 0;
}



undefined4 FUN_00011094(void)

{
  int unaff_s0;
  int unaff_s2;
  
  FUN_00011094();
  *(undefined *)(unaff_s2 + 0x87) = 0xff;
  if ((*(byte *)(unaff_s0 + 0x70) & 0x12) == 0x10) {
    *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xef;
    _L0();
    *(byte *)(unaff_s0 + 0x70) = *(byte *)(unaff_s0 + 0x70) & 0xef;
  }
  return 0;
}



// DWARF DIE: 4832

uint8_t chan_ctxt_add(mm_chan_ctxt_add_req *p_add_req,uint8_t *idx)

{
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  int extraout_a0;
  
  iVar5 = 0;
  iVar4 = 0;
  while ((*(char *)(iVar5 + 0x17) == -1 || (iVar3 = FUN_000110f4(iVar5 + 4,8), iVar3 != 0))) {
    iVar4 += 1;
    iVar5 += 0x1c;
    if (iVar4 == 3) {
      bVar2 = FUN_00011126();
      extraout_a0 = CONCAT31(extraout_var,bVar2);
      iVar3 = 1;
      if (extraout_a0 != 0) {
        uVar1 = (char)(extraout_a0 >> 2) * -0x49;
        iVar3 = 0;
        *(uint8_t *)(extraout_a0 + 0x17) = uVar1;
        *idx = uVar1;
        *(uint8_t *)(extraout_a0 + 4) = p_add_req->band;
        *(uint8_t *)(extraout_a0 + 5) = p_add_req->type;
        *(uint16_t *)(extraout_a0 + 8) = p_add_req->center1_freq;
        *(uint16_t *)(extraout_a0 + 10) = p_add_req->center2_freq;
        *(uint16_t *)(extraout_a0 + 6) = p_add_req->prim20_freq;
        *(int8_t *)(extraout_a0 + 0xc) = p_add_req->tx_power;
      }
_L0:
      return (uint8_t)iVar3;
    }
  }
  *idx = (uint8_t)iVar4;
  goto _L0;
}



undefined4 FUN_000110f4(int param_1,undefined4 param_2)

{
  char cVar1;
  int unaff_s0;
  undefined *unaff_s1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int unaff_s2;
  int unaff_s3;
  char *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int extraout_a0;
  
  do {
    iVar3 = FUN_000110f4(param_1,param_2);
    if (iVar3 == 0) {
      *unaff_s4 = (char)unaff_s2;
      return 0;
    }
    do {
      iVar3 = unaff_s3;
      unaff_s2 += 1;
      unaff_s3 = iVar3 + 0x1c;
      if (unaff_s2 == unaff_s5) {
        bVar2 = FUN_00011126();
        extraout_a0 = CONCAT31(extraout_var,bVar2);
        if (extraout_a0 == 0) {
          return 1;
        }
        cVar1 = (char)(extraout_a0 - unaff_s0 >> 2) * -0x49;
        *(char *)(extraout_a0 + 0x17) = cVar1;
        *unaff_s4 = cVar1;
        *(undefined *)(extraout_a0 + 4) = *unaff_s1;
        *(undefined *)(extraout_a0 + 5) = unaff_s1[1];
        *(undefined2 *)(extraout_a0 + 8) = *(undefined2 *)(unaff_s1 + 4);
        *(undefined2 *)(extraout_a0 + 10) = *(undefined2 *)(unaff_s1 + 6);
        *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s1 + 2);
        *(undefined *)(extraout_a0 + 0xc) = unaff_s1[8];
        return 0;
      }
    } while (*(byte *)(iVar3 + 0x33) == unaff_s6);
    param_2 = 8;
    param_1 = iVar3 + 0x20;
  } while( true );
}



bool FUN_00011126(void)

{
  char cVar1;
  int unaff_s0;
  undefined *unaff_s1;
  bool bVar2;
  undefined3 extraout_var;
  char *unaff_s4;
  int extraout_a0;
  
  bVar2 = FUN_00011126();
  extraout_a0 = CONCAT31(extraout_var,bVar2);
  if (extraout_a0 != 0) {
    cVar1 = (char)(extraout_a0 - unaff_s0 >> 2) * -0x49;
    *(char *)(extraout_a0 + 0x17) = cVar1;
    *unaff_s4 = cVar1;
    *(undefined *)(extraout_a0 + 4) = *unaff_s1;
    *(undefined *)(extraout_a0 + 5) = unaff_s1[1];
    *(undefined2 *)(extraout_a0 + 8) = *(undefined2 *)(unaff_s1 + 4);
    *(undefined2 *)(extraout_a0 + 10) = *(undefined2 *)(unaff_s1 + 6);
    *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s1 + 2);
    *(undefined *)(extraout_a0 + 0xc) = unaff_s1[8];
  }
  return extraout_a0 == 0;
}



// DWARF DIE: 4758

void chan_ctxt_del(uint8_t chan_idx)

{
  undefined3 in_register_00002029;
  int iVar1;
  
  iVar1 = CONCAT31(in_register_00002029,chan_idx);
  if (*(char *)(iVar1 * 0x1c + 0x17) == -1) {
    FUN_000111c8();
  }
  if (*(char *)(iVar1 * 0x1c + 0x18) != '\0') {
    FUN_000111f4();
  }
  FUN_00011206();
  FUN_00011214();
  *(undefined2 *)(iVar1 * 0x1c + 0xe) = 0xff;
  *(undefined *)(iVar1 * 0x1c + 0x17) = 0xff;
  return;
}



void FUN_000111c8(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  
  FUN_000111c8();
  if (*(char *)(unaff_s2 * 0x1c + unaff_s0 + 0x18) != '\0') {
    FUN_000111f4();
  }
  FUN_00011206();
  FUN_00011214();
  iVar1 = unaff_s0 + unaff_s2 * 0x1c;
  *(undefined2 *)(iVar1 + 0xe) = 0xff;
  *(undefined *)(iVar1 + 0x17) = 0xff;
  return;
}



void FUN_000111f4(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  
  FUN_000111f4();
  FUN_00011206();
  FUN_00011214();
  iVar1 = unaff_s0 + unaff_s2 * 0x1c;
  *(undefined2 *)(iVar1 + 0xe) = 0xff;
  *(undefined *)(iVar1 + 0x17) = 0xff;
  return;
}



void FUN_00011206(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  
  FUN_00011206();
  FUN_00011214();
  iVar1 = unaff_s0 + unaff_s2 * 0x1c;
  *(undefined2 *)(iVar1 + 0xe) = 0xff;
  *(undefined *)(iVar1 + 0x17) = 0xff;
  return;
}



void FUN_00011214(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  
  FUN_00011214();
  iVar1 = unaff_s0 + unaff_s2 * 0x1c;
  *(undefined2 *)(iVar1 + 0xe) = 0xff;
  *(undefined *)(iVar1 + 0x17) = 0xff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 44c0

void chan_ctxt_update(mm_chan_ctxt_update_req *p_upd_req)

{
  int iVar1;
  
  iVar1 = (uint)p_upd_req->chan_index * 0x1c;
  *(uint8_t *)(iVar1 + 4) = p_upd_req->band;
  *(uint8_t *)(iVar1 + 5) = p_upd_req->type;
  *(uint16_t *)(iVar1 + 8) = p_upd_req->center1_freq;
  *(uint16_t *)(iVar1 + 10) = p_upd_req->center2_freq;
  *(uint16_t *)(iVar1 + 6) = p_upd_req->prim20_freq;
  *(int8_t *)(iVar1 + 0xc) = p_upd_req->tx_power;
  if (_DAT_00000020 == iVar1) {
    _L0();
    FUN_000112a6();
    FUN_000112c8();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _L0(void)

{
  _L0();
  FUN_000112a6();
  FUN_000112c8();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000112a6(void)

{
  FUN_000112a6();
  FUN_000112c8();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000112c8(void)

{
  FUN_000112c8();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4434

void chan_tbtt_switch_update(vif_info_tag *p_vif_entry,uint32_t tbtt_time)

{
  if ((((p_vif_entry->chan_ctxt != (chan_ctxt_tag *)0x0) && (p_vif_entry->chan_ctxt->status != '\0')
       ) && ((p_vif_entry->tbtt_switch).time != tbtt_time - 0x9c4)) &&
     (((p_vif_entry->tbtt_switch).time = tbtt_time - 0x9c4, 1 < DAT_00000072 &&
      ((p_vif_entry->tbtt_switch).status != '\x02')))) {
    (p_vif_entry->tbtt_switch).status = '\0';
    FUN_00011338();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_00011338(void)

{
  FUN_00011338();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 42f6

void chan_bcn_to_evt(vif_info_tag *p_vif_entry)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int extraout_a0;
  ushort uVar4;
  uint uVar5;
  
  iVar3 = _DAT_44b00120;
  if ((p_vif_entry->tbtt_switch).status == '\x02') {
    (p_vif_entry->tbtt_switch).status = '\0';
    iVar2 = _DAT_00000020;
    _L0();
    if (((1 < DAT_00000072) && (FUN_000113a8(), (DAT_00000070 & 0xc) == 0)) && (_DAT_00000024 == 0))
    {
      FUN_000113c2();
      uVar1 = *(ushort *)(iVar2 + 0x14);
      if (uVar1 != 0) {
        uVar5 = (uint)(iVar3 - _DAT_0000006c) >> 10 & 0xffff;
        uVar4 = (ushort)uVar5;
        if (uVar1 < uVar5) {
          uVar4 = uVar1;
        }
        *(ushort *)(iVar2 + 0x14) = uVar1 - uVar4;
      }
      _DAT_0000006c = iVar3;
      _L0();
      if (_DAT_00000020 != extraout_a0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  return;
}



void _L0(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  ushort uVar2;
  uint uVar3;
  int unaff_s2;
  int unaff_s4;
  
  _L0();
  if (((1 < *(byte *)(unaff_s4 + 0x72)) && (FUN_000113a8(), (*(byte *)(unaff_s0 + 0x70) & 0xc) == 0)
      ) && (*(int *)(unaff_s0 + 0x24) == 0)) {
    FUN_000113c2();
    uVar1 = *(ushort *)(unaff_s2 + 0x14);
    if (uVar1 != 0) {
      uVar3 = (uint)(unaff_s1 - *(int *)(unaff_s0 + 0x6c)) >> 10 & 0xffff;
      uVar2 = (ushort)uVar3;
      if (uVar1 < uVar3) {
        uVar2 = uVar1;
      }
      *(ushort *)(unaff_s2 + 0x14) = uVar1 - uVar2;
    }
    *(int *)(unaff_s0 + 0x6c) = unaff_s1;
    _L0();
    if (*(int *)(unaff_s0 + 0x20) != extraout_a0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_000113a8(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  ushort uVar2;
  uint uVar3;
  int unaff_s2;
  
  FUN_000113a8();
  if (((*(byte *)(unaff_s0 + 0x70) & 0xc) == 0) && (*(int *)(unaff_s0 + 0x24) == 0)) {
    FUN_000113c2();
    uVar1 = *(ushort *)(unaff_s2 + 0x14);
    if (uVar1 != 0) {
      uVar3 = (uint)(unaff_s1 - *(int *)(unaff_s0 + 0x6c)) >> 10 & 0xffff;
      uVar2 = (ushort)uVar3;
      if (uVar1 < uVar3) {
        uVar2 = uVar1;
      }
      *(ushort *)(unaff_s2 + 0x14) = uVar1 - uVar2;
    }
    *(int *)(unaff_s0 + 0x6c) = unaff_s1;
    _L0();
    if (*(int *)(unaff_s0 + 0x20) != extraout_a0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_000113c2(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  ushort uVar2;
  uint uVar3;
  int unaff_s2;
  
  FUN_000113c2();
  uVar1 = *(ushort *)(unaff_s2 + 0x14);
  if (uVar1 != 0) {
    uVar3 = (uint)(unaff_s1 - *(int *)(unaff_s0 + 0x6c)) >> 10 & 0xffff;
    uVar2 = (ushort)uVar3;
    if (uVar1 < uVar3) {
      uVar2 = uVar1;
    }
    *(ushort *)(unaff_s2 + 0x14) = uVar1 - uVar2;
  }
  *(int *)(unaff_s0 + 0x6c) = unaff_s1;
  _L0();
  if (*(int *)(unaff_s0 + 0x20) == extraout_a0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  
  _L0();
  if (*(int *)(unaff_s0 + 0x20) == extraout_a0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4235

void chan_bcn_detect_start(vif_info_tag *p_vif_entry)

{
  byte bVar1;
  chan_ctxt_tag *pcVar2;
  undefined *extraout_a0;
  
  pcVar2 = p_vif_entry->chan_ctxt;
  if (pcVar2 == (chan_ctxt_tag *)0x0) {
    FUN_00011448(_DAT_00000070);
  }
  if (((_DAT_00000070 & 0x40) == 0) && (1 < DAT_00000072)) {
    bVar1 = *(byte *)&(p_vif_entry->u).field_0x4;
    _L0();
    *extraout_a0 = 0;
    extraout_a0[1] = p_vif_entry->index;
    extraout_a0[2] = (pcVar2->channel).band;
    extraout_a0[3] = (pcVar2->channel).type;
    *(uint16_t *)(extraout_a0 + 4) = (pcVar2->channel).prim20_freq;
    *(uint16_t *)(extraout_a0 + 6) = (pcVar2->channel).center1_freq;
    *(uint16_t *)(extraout_a0 + 8) = (pcVar2->channel).center2_freq;
    *(uint *)(extraout_a0 + 0xc) = (*(int *)((uint)bVar1 * 0x1b0 + 4) - 5000U) / 1000;
    extraout_a0[0x10] = (pcVar2->channel).tx_power;
    _L0();
    _DAT_00000070 |= 0x40;
  }
  return;
}



void FUN_00011448(uint3 param_1)

{
  byte bVar1;
  int unaff_s0;
  undefined *extraout_a0;
  int unaff_s3;
  
  FUN_00011448(param_1);
  if (((param_1 & 0x40) == 0) && (1 < param_1._2_1_)) {
    bVar1 = *(byte *)(unaff_s3 + 0x60);
    _L0();
    *extraout_a0 = 0;
    extraout_a0[1] = *(undefined *)(unaff_s3 + 0x57);
    extraout_a0[2] = *(undefined *)(unaff_s0 + 4);
    extraout_a0[3] = *(undefined *)(unaff_s0 + 5);
    *(undefined2 *)(extraout_a0 + 4) = *(undefined2 *)(unaff_s0 + 6);
    *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(extraout_a0 + 8) = *(undefined2 *)(unaff_s0 + 10);
    *(uint *)(extraout_a0 + 0xc) = (*(int *)((uint)bVar1 * 0x1b0 + 4) - 5000U) / 1000;
    extraout_a0[0x10] = *(undefined *)(unaff_s0 + 0xc);
    _L0();
    param_1 |= 0x40;
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined *extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  _L0();
  *extraout_a0 = 0;
  extraout_a0[1] = *(undefined *)(unaff_s3 + 0x57);
  extraout_a0[2] = *(undefined *)(unaff_s0 + 4);
  extraout_a0[3] = *(undefined *)(unaff_s0 + 5);
  *(undefined2 *)(extraout_a0 + 4) = *(undefined2 *)(unaff_s0 + 6);
  *(undefined2 *)(extraout_a0 + 6) = *(undefined2 *)(unaff_s0 + 8);
  *(undefined2 *)(extraout_a0 + 8) = *(undefined2 *)(unaff_s0 + 10);
  *(uint *)(extraout_a0 + 0xc) = (*(int *)(unaff_s2 * 0x1b0 + 4) - 5000U) / 1000;
  extraout_a0[0x10] = *(undefined *)(unaff_s0 + 0xc);
  _L0();
  *(byte *)(unaff_s1 + 0x70) = *(byte *)(unaff_s1 + 0x70) | 0x40;
  return;
}



void _L0(void)

{
  int unaff_s1;
  
  _L0();
  *(byte *)(unaff_s1 + 0x70) = *(byte *)(unaff_s1 + 0x70) | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 41f7

_Bool chan_is_on_channel(vif_info_tag *p_vif_entry)

{
  chan_ctxt_tag *pcVar1;
  
  if (_DAT_00000020 != 0) {
    if (*(byte *)(_DAT_00000020 + 0x17) < 3) {
      pcVar1 = (chan_ctxt_tag *)((int)p_vif_entry->chan_ctxt - _DAT_00000020);
    }
    else {
      pcVar1 = (chan_ctxt_tag *)((uint)*(byte *)(_DAT_00000020 + 0x19) - (uint)p_vif_entry->index);
    }
    return (_Bool)(pcVar1 == (chan_ctxt_tag *)0x0);
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 41b9

_Bool chan_is_tx_allowed(vif_info_tag *p_vif_entry)

{
  uint uVar1;
  
  uVar1 = _L0(_DAT_00000020,_DAT_00000024);
  if ((uVar1 != 0) && (_DAT_00000024 != 0)) {
    uVar1 = (uint)(*(char *)(_DAT_00000020 + 0x16) == '\x06');
  }
  return SUB41(uVar1,0);
}



uint _L0(int iRam00000020,int iRam00000024)

{
  uint uVar1;
  
  uVar1 = _L0(iRam00000020,iRam00000024);
  if ((uVar1 != 0) && (iRam00000024 != 0)) {
    uVar1 = (uint)(*(char *)(iRam00000020 + 0x16) == '\x06');
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 417b

_Bool chan_is_on_operational_channel(vif_info_tag *p_vif_entry)

{
  bool bVar1;
  
  bVar1 = false;
  if ((_DAT_00000020 != (chan_ctxt_tag *)0x0) && (bVar1 = false, _DAT_00000020->idx < 3)) {
    bVar1 = p_vif_entry->chan_ctxt == _DAT_00000020;
  }
  return (_Bool)bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6212

void chan_update_tx_power(chan_ctxt_tag *p_chan_entry)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  if (p_chan_entry->nb_linked_vif == '\0') {
    return;
  }
  uVar4 = 0x7f;
  if (p_chan_entry == _DAT_00000040) {
    cVar3 = DAT_0000005a;
    if (DAT_00000059 < DAT_0000005a) {
      cVar3 = DAT_00000059;
    }
    uVar4 = SEXT14(cVar3);
  }
  if (p_chan_entry == _DAT_00000618) {
    uVar1 = (uint)DAT_00000632;
    if ((int)uVar4 < (int)(char)DAT_00000632) {
      uVar1 = uVar4;
    }
    uVar2 = SEXT14(DAT_00000631);
    uVar4 = (int)(char)uVar1;
    if ((int)uVar2 < (int)(char)uVar1) goto _L0;
  }
  uVar2 = uVar4;
  if (uVar2 == 0x7f) {
    return;
  }
_L0:
  (p_chan_entry->channel).tx_power = (int8_t)uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4669

void chan_ctxt_link(uint8_t vif_idx,uint8_t chan_idx)

{
  char cVar1;
  undefined3 in_register_00002029;
  undefined3 in_register_0000202d;
  int iVar2;
  int iVar3;
  
  iVar2 = CONCAT31(in_register_0000202d,chan_idx);
  if (*(int *)(CONCAT31(in_register_00002029,vif_idx) * 0x5d8 + 0x40) != 0) {
    FUN_0001164e(_DAT_00000024,_DAT_00000068,_DAT_00000070);
  }
  if (*(char *)(iVar2 * 0x1c + 0x17) == -1) {
    FUN_00011680(_DAT_00000024,_DAT_00000068,_DAT_00000070);
  }
  iVar3 = iVar2 * 0x1c;
  cVar1 = *(char *)(iVar3 + 0x18) + '\x01';
  _DAT_00000068 += 0xc800;
  *(int *)(CONCAT31(in_register_00002029,vif_idx) * 0x5d8 + 0x40) = iVar2 * 0x1c;
  *(char *)(iVar3 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined *)(iVar3 + 0x16) = 1;
    _DAT_00000070 = _DAT_00000070 & 0xffff | (uint3)(byte)(DAT_00000072 + 1) << 0x10;
    _L0();
    if (_DAT_00000024 == 0) {
      if ((_DAT_00000070 & 0xc) == 0) {
        if (DAT_00000072 == '\x01') {
          FUN_000116fc();
        }
        else {
          FUN_0001171e();
        }
      }
    }
    else {
      *(undefined *)(_DAT_00000024 + 0x16) = 1;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001164e(int iRam00000024,int iRam00000068,uint3 param_3)

{
  int unaff_s0;
  char cVar1;
  int unaff_s1;
  int iVar2;
  undefined4 unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  FUN_0001164e(iRam00000024,iRam00000068,param_3);
  if (*(char *)(unaff_s1 * 0x1c + unaff_s0 + 0x17) == -1) {
    FUN_00011680(iRam00000024,iRam00000068,param_3);
  }
  iVar2 = unaff_s1 * 0x1c + unaff_s0;
  cVar1 = *(char *)(iVar2 + 0x18) + '\x01';
  iRam00000068 += 0xc800;
  *(undefined4 *)(unaff_s3 * 0x5d8 + unaff_s4 + 0x40) = unaff_s2;
  *(char *)(iVar2 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined *)(iVar2 + 0x16) = 1;
    param_3 = param_3 & 0xffff | (uint3)(byte)(param_3._2_1_ + 1) << 0x10;
    _L0();
    if (iRam00000024 == 0) {
      if ((param_3 & 0xc) == 0) {
        if (param_3._2_1_ == '\x01') {
          FUN_000116fc();
        }
        else {
          FUN_0001171e();
        }
      }
    }
    else {
      *(undefined *)(iRam00000024 + 0x16) = 1;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011680(int iRam00000024,int iRam00000068,uint3 param_3)

{
  int unaff_s0;
  char cVar1;
  int unaff_s1;
  int iVar2;
  undefined4 unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  FUN_00011680(iRam00000024,iRam00000068,param_3);
  iVar2 = unaff_s1 * 0x1c + unaff_s0;
  cVar1 = *(char *)(iVar2 + 0x18) + '\x01';
  iRam00000068 += 0xc800;
  *(undefined4 *)(unaff_s3 * 0x5d8 + unaff_s4 + 0x40) = unaff_s2;
  *(char *)(iVar2 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined *)(iVar2 + 0x16) = 1;
    param_3 = param_3 & 0xffff | (uint3)(byte)(param_3._2_1_ + 1) << 0x10;
    _L0();
    if (iRam00000024 == 0) {
      if ((param_3 & 0xc) == 0) {
        if (param_3._2_1_ == '\x01') {
          FUN_000116fc();
        }
        else {
          FUN_0001171e();
        }
      }
    }
    else {
      *(undefined *)(iRam00000024 + 0x16) = 1;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  
  _L0();
  if (*(int *)(unaff_s0 + 0x24) == 0) {
    if ((*(byte *)(unaff_s0 + 0x70) & 0xc) == 0) {
      if (*(byte *)(unaff_s0 + 0x72) == unaff_s1) {
        FUN_000116fc();
      }
      else {
        FUN_0001171e();
      }
    }
  }
  else {
    *(char *)(*(int *)(unaff_s0 + 0x24) + 0x16) = (char)unaff_s1;
    *(undefined4 *)(unaff_s0 + 0x24) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000116fc(void)

{
  FUN_000116fc();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001171e(void)

{
  FUN_0001171e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 455a

void chan_ctxt_unlink(uint8_t vif_idx)

{
  int iVar1;
  undefined3 in_register_00002029;
  byte bVar2;
  int iVar3;
  
  iVar1 = *(int *)(CONCAT31(in_register_00002029,vif_idx) * 0x5d8 + 0x40);
  if (iVar1 == 0) {
    FUN_0001176e(_DAT_00000020,_DAT_00000024,_DAT_00000068,_DAT_00000070);
  }
  iVar3 = CONCAT31(in_register_00002029,vif_idx) * 0x5d8;
  _L0(_DAT_00000020,_DAT_00000024,_DAT_00000068,_DAT_00000070);
  *(undefined *)(iVar3 + 0x4e) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(char *)(iVar1 + 0x18) = *(char *)(iVar1 + 0x18) + -1;
  iVar3 = _DAT_00000024;
  if (*(char *)(iVar1 + 0x16) != '\0') {
    _DAT_00000068 += -0xc800;
    if (*(char *)(iVar1 + 0x18) != '\0') goto _L0;
    _L0();
    *(undefined *)(iVar1 + 0x16) = 0;
    bVar2 = DAT_00000072 - 1;
    _DAT_00000070 = _DAT_00000070 & 0xffff | (uint3)bVar2 << 0x10;
    if (_DAT_00000020 == iVar1) {
      _DAT_00000020 = 0;
_L0:
      if (iVar3 == 0) {
        if (bVar2 < 2) {
          if (bVar2 == 1) {
            FUN_0001185e();
          }
        }
        else {
          FUN_0001180a();
        }
        goto _L0;
      }
    }
    else {
      if (iVar3 != iVar1) goto _L0;
      _DAT_00000024 = 0;
    }
    _DAT_00000070 |= 0x20;
  }
_L0:
  if (*(char *)(iVar1 + 0x18) == '\0') {
    FUN_00011832();
  }
_L0:
  FUN_0001183c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001176e(int iRam00000020,int iRam00000024,int iRam00000068,uint3 param_4)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  byte bVar2;
  int unaff_s2;
  
  FUN_0001176e(iRam00000020,iRam00000024,iRam00000068,param_4);
  iVar1 = unaff_s1 + unaff_s2 * 0x5d8;
  _L0(iRam00000020,iRam00000024,iRam00000068,param_4);
  *(undefined *)(iVar1 + 0x4e) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(char *)(unaff_s0 + 0x18) = *(char *)(unaff_s0 + 0x18) + -1;
  iVar1 = iRam00000024;
  if (*(char *)(unaff_s0 + 0x16) != '\0') {
    iRam00000068 += -0xc800;
    if (*(char *)(unaff_s0 + 0x18) != '\0') goto _L0;
    _L0();
    *(undefined *)(unaff_s0 + 0x16) = 0;
    bVar2 = param_4._2_1_ - 1;
    param_4 = param_4 & 0xffff | (uint3)bVar2 << 0x10;
    if (iRam00000020 == unaff_s0) {
      iRam00000020 = 0;
_L0:
      if (iVar1 == 0) {
        if (bVar2 < 2) {
          if (bVar2 == 1) {
            FUN_0001185e();
          }
        }
        else {
          FUN_0001180a();
        }
        goto _L0;
      }
    }
    else {
      if (iVar1 != unaff_s0) goto _L0;
      iRam00000024 = 0;
    }
    param_4 |= 0x20;
  }
_L0:
  if (*(char *)(unaff_s0 + 0x18) == '\0') {
    FUN_00011832();
  }
_L0:
  FUN_0001183c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(int iRam00000020,int iRam00000024,int iRam00000068,uint3 param_4)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  byte bVar2;
  
  _L0(iRam00000020,iRam00000024,iRam00000068,param_4);
  *(undefined *)(unaff_s1 + 0x4e) = 0;
  *(undefined4 *)(unaff_s1 + 0x40) = 0;
  *(char *)(unaff_s0 + 0x18) = *(char *)(unaff_s0 + 0x18) + -1;
  iVar1 = iRam00000024;
  if (*(char *)(unaff_s0 + 0x16) != '\0') {
    iRam00000068 += -0xc800;
    if (*(char *)(unaff_s0 + 0x18) != '\0') goto _L0;
    _L0();
    *(undefined *)(unaff_s0 + 0x16) = 0;
    bVar2 = param_4._2_1_ - 1;
    param_4 = param_4 & 0xffff | (uint3)bVar2 << 0x10;
    if (iRam00000020 == unaff_s0) {
      iRam00000020 = 0;
_L0:
      if (iVar1 == 0) {
        if (bVar2 < 2) {
          if (bVar2 == 1) {
            FUN_0001185e();
          }
        }
        else {
          FUN_0001180a();
        }
        goto _L0;
      }
    }
    else {
      if (iVar1 != unaff_s0) goto _L0;
      iRam00000024 = 0;
    }
    param_4 |= 0x20;
  }
_L0:
  if (*(char *)(unaff_s0 + 0x18) == '\0') {
    FUN_00011832();
  }
_L0:
  FUN_0001183c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  byte bVar1;
  int unaff_s2;
  
  _L0();
  *(undefined *)(unaff_s0 + 0x16) = 0;
  bVar1 = *(char *)(unaff_s1 + 0x72) - 1;
  *(byte *)(unaff_s1 + 0x72) = bVar1;
  if (*(int *)(unaff_s1 + 0x20) == unaff_s0) {
    *(undefined4 *)(unaff_s1 + 0x20) = 0;
_L0:
    if (unaff_s2 == 0) {
      if (bVar1 < 2) {
        if (bVar1 == 1) {
          FUN_0001185e();
        }
      }
      else {
        FUN_0001180a();
      }
      goto _L0;
    }
  }
  else {
    if (unaff_s2 != unaff_s0) goto _L0;
    *(undefined4 *)(unaff_s1 + 0x24) = 0;
  }
  *(byte *)(unaff_s1 + 0x70) = *(byte *)(unaff_s1 + 0x70) | 0x20;
_L0:
  if (*(char *)(unaff_s0 + 0x18) == '\0') {
    FUN_00011832();
  }
  FUN_0001183c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001180a(void)

{
  int unaff_s0;
  
  FUN_0001180a();
  if (*(char *)(unaff_s0 + 0x18) == '\0') {
    FUN_00011832();
  }
  FUN_0001183c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011832(void)

{
  FUN_00011832();
  FUN_0001183c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001183c(void)

{
  FUN_0001183c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001185e(void)

{
  int unaff_s0;
  
  FUN_0001185e();
  if (*(char *)(unaff_s0 + 0x18) == '\0') {
    FUN_00011832();
  }
  FUN_0001183c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


