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

struct scan_chan_tag { // DWARF DIE: dbe
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct mac_addr { // DWARF DIE: a45
    uint16_t array[3];
};

struct mac_ssid { // DWARF DIE: a75
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct scan_start_req { // DWARF DIE: 1f15
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
    SCAN_CANCEL_CFM=2052,
    SCAN_CANCEL_REQ=2051,
    SCAN_DONE_IND=2050,
    SCAN_MAX=2054,
    SCAN_START_CFM=2049,
    SCAN_START_REQ=2048,
    SCAN_TIMER=2053
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

struct co_list_hdr { // DWARF DIE: 10d9
    struct co_list_hdr * next;
};

union anon_union.conflict12df_for_field_3 { // DWARF DIE: 12df
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct hostdesc { // DWARF DIE: 24a9
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

struct tx_cfm_tag { // DWARF DIE: 173c
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct lmacdesc { // DWARF DIE: 2615
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

union anon_union.conflict1304_for_field_4 { // DWARF DIE: 1304
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict1329_for_field_5 { // DWARF DIE: 1329
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: 134e
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

struct tx_hw_desc { // DWARF DIE: 17bb
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct umacdesc { // DWARF DIE: 2585
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

struct txdesc { // DWARF DIE: 2731
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 12b4
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct dma_desc { // DWARF DIE: 1048
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_policy_tbl { // DWARF DIE: 1243
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict311d_for_field_0 { // DWARF DIE: 311d
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 25e1
    union anon_union.conflict311d_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct tx_pbd { // DWARF DIE: 1417
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_tag { // DWARF DIE: 2650
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

struct tx_agg_desc { // DWARF DIE: 17ec
    uint8_t reserved;
};

typedef struct scanu_raw_send_cfm scanu_raw_send_cfm, *Pscanu_raw_send_cfm;

struct scanu_raw_send_cfm { // DWARF DIE: 2044
    uint32_t status;
};

typedef struct scanu_start_req scanu_start_req, *Pscanu_start_req;

struct scanu_start_req { // DWARF DIE: 1b08
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

struct scanu_start_cfm { // DWARF DIE: 205f
    uint8_t status;
};

typedef enum anon_enum_16.conflict1fe4 {
    SCANU_JOIN_CFM=4099,
    SCANU_JOIN_REQ=4098,
    SCANU_RAW_SEND_CFM=4102,
    SCANU_RAW_SEND_REQ=4101,
    SCANU_RESULT_IND=4100,
    SCANU_START_CFM=4097,
    SCANU_START_REQ=4096
} anon_enum_16.conflict1fe4;

typedef struct txl_list txl_list, *Ptxl_list;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 10fa
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct txl_list { // DWARF DIE: 2f7b
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 2fc3
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 3213
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 323b
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 328f
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 2100
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

struct bam_env_tag { // DWARF DIE: 2173
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

struct chan_tbtt_tag { // DWARF DIE: 22da
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

struct mm_chan_ctxt_add_req { // DWARF DIE: 1dd5
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 2329
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

struct mm_timer_tag { // DWARF DIE: 2272
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct chan_env_tag { // DWARF DIE: 23b9
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

struct mblock_free { // DWARF DIE: 285a
};

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

struct mobility_domain { // DWARF DIE: 376e
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

struct Cipher_t { // DWARF DIE: 35be
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct mac_edca_param_set { // DWARF DIE: cea
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset { // DWARF DIE: acf
    uint8_t length;
    uint8_t array[12];
};

struct mac_htcapability { // DWARF DIE: c22
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

struct SecurityMode_t { // DWARF DIE: 3624
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

struct mac_bss_info { // DWARF DIE: 3796
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

struct me_chan_config_req { // DWARF DIE: 34fb
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct me_env_tag { // DWARF DIE: 36da
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

struct anon_struct.conflictb4e { // DWARF DIE: b4e
    uint32_t key[4];
};

struct anon_struct.conflictb17 { // DWARF DIE: b17
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

union anon_union.conflictb77 { // DWARF DIE: b77
    struct anon_struct.conflictb17 mic;
    struct anon_struct.conflictb4e mfp;
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictb77_for_u anon_union.conflictb77_for_u, *Panon_union.conflictb77_for_u;

union anon_union.conflictb77_for_u { // DWARF DIE: b77
    struct anon_struct.conflictb17 mic;
    struct anon_struct.conflictb4e mfp;
};

struct key_info_tag { // DWARF DIE: b9c
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

struct mac_scan_result { // DWARF DIE: d23
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

struct mac_vhtcapability { // DWARF DIE: c95
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
    ANY_BSS_MODE=3,
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
    INDEPENDENT_BSS_MODE=2,
    INFRASTRUCTURE_MODE=1,
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
    WPA_WPA2_IN_USE=8
} anon_enum_8.conflict9cd;

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: e34
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

struct ke_msg_handler { // DWARF DIE: 1ca3
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1ccf
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct rxu_mgt_ind rxu_mgt_ind, *Prxu_mgt_ind;

struct rxu_mgt_ind { // DWARF DIE: 3d77
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

struct rx_cntrl_pm_mon { // DWARF DIE: 29e2
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 29b7
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 299a
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 289f
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

struct rxu_cntrl_env_tag { // DWARF DIE: 2a1b
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

struct mac_hdr { // DWARF DIE: f41
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
};

struct bcn_frame { // DWARF DIE: fa4
    struct mac_hdr h;
    uint64_t tsf;
    uint16_t bcnint;
    uint16_t capa;
    uint8_t[0] variable;
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

struct la_mem_format { // DWARF DIE: 116b
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 109c
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 22b3
    struct co_list prog;
};

typedef struct sm_connect_req sm_connect_req, *Psm_connect_req;

struct sm_connect_req { // DWARF DIE: 3eb8
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

struct sm_connect_ind { // DWARF DIE: 3f93
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

struct rx_swdesc { // DWARF DIE: 1577
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

struct phy_channel_info { // DWARF DIE: 1143
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 160c
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 146c
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

struct rx_payloaddesc { // DWARF DIE: 16df
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 166f
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
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 11b3
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct co_read16_struct co_read16_struct, *Pco_read16_struct;

struct co_read16_struct { // DWARF DIE: 560a
    uint16_t val;
};

typedef struct co_read32_struct co_read32_struct, *Pco_read32_struct;

struct co_read32_struct { // DWARF DIE: 55bc
    uint32_t val;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 280b
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef struct ke_msg ke_msg, *Pke_msg;

struct ke_msg { // DWARF DIE: 1905
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t[0] param;
};

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict3b3e_for_u anon_union.conflict3b3e_for_u, *Panon_union.conflict3b3e_for_u;

typedef struct anon_struct.conflict3976 anon_struct.conflict3976, *Panon_struct.conflict3976;

typedef struct anon_struct.conflict3a43 anon_struct.conflict3a43, *Panon_struct.conflict3a43;

struct anon_struct.conflict3976 { // DWARF DIE: 3976
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

struct anon_struct.conflict3a43 { // DWARF DIE: 3a43
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

union anon_union.conflict3b3e_for_u { // DWARF DIE: 3b3e
    struct anon_struct.conflict3976 sta;
    struct anon_struct.conflict3a43 ap;
};

struct vif_info_tag { // DWARF DIE: 3b61
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

struct vif_mgmt_env_tag { // DWARF DIE: 3c9c
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef union anon_union.conflict3b3e anon_union.conflict3b3e, *Panon_union.conflict3b3e;

union anon_union.conflict3b3e { // DWARF DIE: 3b3e
    struct anon_struct.conflict3976 sta;
    struct anon_struct.conflict3a43 ap;
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 19d7
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 1a1e
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 2cfc
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

typedef union anon_union.conflict34b6_for_rate_map anon_union.conflict34b6_for_rate_map, *Panon_union.conflict34b6_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 3419
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step { // DWARF DIE: 348f
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

union anon_union.conflict34b6_for_rate_map { // DWARF DIE: 34b6
    uint8_t ht[4];
};

struct rc_sta_stats { // DWARF DIE: 2b96
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

struct sta_pol_tbl_cntl { // DWARF DIE: 2b47
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2b0c
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 2d4b
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

struct sta_info_env_tag { // DWARF DIE: 2f34
    struct co_list free_sta_list;
};

typedef union anon_union.conflict34b6 anon_union.conflict34b6, *Panon_union.conflict34b6;

union anon_union.conflict34b6 { // DWARF DIE: 34b6
    uint8_t ht[4];
};

typedef struct sm_env_tag sm_env_tag, *Psm_env_tag;

struct sm_env_tag { // DWARF DIE: 3e4f
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

struct scan_probe_req_ie_tag { // DWARF DIE: 1e84
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 1eb9
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 306c
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef union anon_union.conflict311d anon_union.conflict311d, *Panon_union.conflict311d;

union anon_union.conflict311d { // DWARF DIE: 311d
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 3044
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 3094
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

struct txl_buffer_env_tag { // DWARF DIE: 313f
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict12df anon_union.conflict12df, *Panon_union.conflict12df;

union anon_union.conflict12df { // DWARF DIE: 12df
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict1329 anon_union.conflict1329, *Panon_union.conflict1329;

union anon_union.conflict1329 { // DWARF DIE: 1329
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1304 anon_union.conflict1304, *Panon_union.conflict1304;

union anon_union.conflict1304 { // DWARF DIE: 1304
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

typedef struct scanu_env_tag scanu_env_tag, *Pscanu_env_tag;

struct scanu_env_tag { // DWARF DIE: 1a7f
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

struct scanu_add_ie_tag { // DWARF DIE: 1bae
    struct dma_desc dma_desc;
    uint32_t buf[50];
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




// DWARF DIE: 5297

void scanu_confirm(uint8_t status)

{
  uint8_t *puVar1;
  uint8_t *extraout_a0;
  uint8_t *extraout_a0_00;
  uint8_t *extraout_a0_01;
  uint8_t *puVar2;
  
  if (DAT_0000016a == '\0') {
    FUN_00010096();
    puVar1 = (uint8_t *)0x0;
    puVar2 = extraout_a0_01;
  }
  else {
    _LVL1();
    FUN_00010042();
    puVar1 = extraout_a0_00;
    puVar2 = extraout_a0;
  }
  *puVar2 = status;
  FUN_00010054();
  uRam00000000 = 0;
  _L0();
  if (puVar1 != (uint8_t *)0x0) {
    *puVar1 = status;
    FUN_00010072();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL1(void)

{
  undefined4 *unaff_s0;
  undefined *extraout_a0;
  undefined *extraout_a0_00;
  undefined unaff_s3;
  
  _LVL1();
  FUN_00010042();
  *extraout_a0 = unaff_s3;
  FUN_00010054();
  *unaff_s0 = 0;
  _L0();
  if (extraout_a0_00 != (undefined *)0x0) {
    *extraout_a0_00 = unaff_s3;
    FUN_00010072();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010042(void)

{
  undefined4 *unaff_s0;
  undefined *extraout_a0;
  undefined *unaff_s2;
  undefined unaff_s3;
  
  FUN_00010042();
  *unaff_s2 = unaff_s3;
  FUN_00010054();
  *unaff_s0 = 0;
  _L0();
  if (extraout_a0 != (undefined *)0x0) {
    *extraout_a0 = unaff_s3;
    FUN_00010072();
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



void FUN_00010096(void)

{
  undefined4 *unaff_s0;
  undefined *extraout_a0;
  undefined unaff_s3;
  
  FUN_00010096();
  *extraout_a0 = unaff_s3;
  FUN_00010054();
  *unaff_s0 = 0;
  _L0();
  if (false) {
    FUN_00010072();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 5221

void scanu_raw_send_cfm(uint8_t status,ke_task_id_t dst_id)

{
  undefined3 in_register_00002029;
  undefined4 *extraout_a0;
  
  _L0();
  *extraout_a0 = CONCAT31(in_register_00002029,status);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined4 unaff_s0;
  undefined4 *extraout_a0;
  
  _L0();
  *extraout_a0 = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 51a5

void scanu_init(undefined4 uRam00000010)

{
  _L0(uRam00000010);
  FUN_000100ec();
  _DAT_00000004 = 0x10;
  _DAT_00000008 = 0;
  _DAT_0000000c = 0;
  uRam00000010 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 uRam00000010)

{
  _L0(uRam00000010);
  FUN_000100ec();
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



// DWARF DIE: 482d

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
// DWARF DIE: 48a1

int scanu_frame_handler(rxu_mgt_ind *frame)

{
  undefined uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  undefined uStack100;
  undefined auStack99 [3];
  mac_ssid ssid_buf;
  
  iVar7 = iRam00000000;
  uVar17 = (uint)*(byte *)(iRam00000000 + 0x14e);
  iVar3 = _L0(uRam0000002c);
  if (iVar3 != 0) {
    uVar13 = (uint)*(byte *)(iVar3 + 1);
    if (uVar13 < 0x21) {
      if (uVar13 == 0) goto _L0;
    }
    else {
      uVar13 = 0x20;
    }
    puVar9 = (undefined *)(iVar3 + 2);
    if (*(char *)(iVar3 + 2) != '\0') {
      uStack100 = (undefined)uVar13;
      puVar10 = &uStack100;
      uVar14 = uVar13;
      while( true ) {
        uVar14 -= 1;
        puVar10 = puVar10 + 1;
        if (uVar14 == 0xffffffff) break;
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar10 = uVar1;
      }
      auStack99[uVar13] = 0;
    }
  }
_L0:
  iVar3 = _LVL40(uRam0000002c);
  if (((iVar3 != 1) ||
      (puVar4 = (undefined4 *)FUN_0001022c(uRam0000002c), puVar4 == (undefined4 *)0x0)) ||
     (((DAT_0000016c & 1) == 0 &&
      (((((*(byte *)&frame[1].tsflo != DAT_0000016c ||
          (*(char *)((int)&frame[1].tsflo + 1) != DAT_0000016d)) ||
         (*(char *)((int)&frame[1].tsflo + 2) != DAT_0000016e)) ||
        ((*(char *)((int)&frame[1].tsflo + 3) != DAT_0000016f ||
         (*(char *)&frame[1].tsfhi != DAT_00000170)))) ||
       (*(char *)((int)&frame[1].tsfhi + 1) != DAT_00000171)))))) goto _L0;
  *(undefined2 *)puVar4 = *(undefined2 *)&frame[1].tsflo;
  *(undefined2 *)((int)puVar4 + 2) = *(undefined2 *)((int)&frame[1].tsflo + 2);
  *(undefined2 *)(puVar4 + 1) = *(undefined2 *)&frame[1].tsfhi;
  *(uint16_t *)(puVar4 + 0xc) = frame[2].center_freq;
  uVar2 = *(ushort *)&frame[2].band;
  *(ushort *)((int)puVar4 + 0x32) = uVar2;
  uVar12 = uVar2 & 1;
  if ((uVar2 & 1) == 0) {
    uVar12 = 2;
  }
  *(ushort *)(puVar4 + 10) = uVar12;
  iVar3 = FUN_000102de(uRam0000002c);
  if (iVar3 == 0) {
    *(undefined *)((int)puVar4 + 6) = 0;
  }
  else {
    uVar13 = (uint)*(byte *)(iVar3 + 1);
    if (uVar13 < 0x21) {
      if (uVar13 == 0) goto _L0;
    }
    else {
      uVar13 = 0x20;
    }
    puVar9 = (undefined *)(iVar3 + 2);
    if (*(char *)(iVar3 + 2) != '\0') {
      *(char *)((int)puVar4 + 6) = (char)uVar13;
      puVar10 = (undefined *)((int)puVar4 + 7);
      while (uVar13 -= 1, uVar13 != 0xffffffff) {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar10 = uVar1;
        puVar10 = puVar10 + 1;
      }
    }
  }
_L0:
  *(int8_t *)((int)puVar4 + 0x36) = frame->ppm_rel;
  *(int8_t *)((int)puVar4 + 0x37) = frame->ppm_abs;
  if (*(char *)(iVar7 + 0x150) != '\0') {
    pcVar16 = (char *)(iVar7 + 0xfc);
    for (uVar13 = 0; (int)uVar13 < (int)(uint)*(byte *)(iVar7 + 0x150); uVar13 += 1) {
      if (*pcVar16 == '\0') goto _L0;
      if ((*(char *)((int)puVar4 + 6) == *pcVar16) &&
         (iVar3 = FUN_00010384(pcVar16 + 1,uRam0000002c), iVar3 == 0)) break;
      pcVar16 = pcVar16 + 0x22;
    }
    if (*(byte *)(iVar7 + 0x150) == uVar13) goto _L0;
  }
_L0:
  iVar3 = FUN_0001039e(uRam0000002c);
  if (iVar3 == 0) {
    if (*(char *)((int)puVar4 + 0x35) < frame->rssi) {
      uVar5 = _LVL154(uRam0000002c);
      puVar4[0xb] = uVar5;
      cVar11 = frame->rssi;
_L0:
      *(char *)((int)puVar4 + 0x35) = cVar11;
    }
  }
  else {
    uVar13 = (uint)*(byte *)(iVar3 + 2);
    if (frame->band != '\0') {
      if ((frame->band == '\x01') && (uVar13 - 1 < 0xa5)) {
        iVar7 = _L0(uRam0000002c);
        return iVar7;
      }
_L0:
      iVar7 = _L0(uRam0000002c);
      return iVar7;
    }
    if (0xd < uVar13 - 1) goto _L0;
    if (uVar13 == 0xe) {
      iVar7 = _L0(uRam0000002c);
      return iVar7;
    }
    uVar5 = _L0(uRam0000002c);
    puVar4[0xb] = uVar5;
    cVar11 = frame->rssi;
    if (*(char *)((int)puVar4 + 0x35) < cVar11) goto _L0;
  }
  if (DAT_0000016a != '\0') {
    iVar3 = uVar17 * 0x5d8;
    *(undefined2 *)(iVar3 + 0x3a0) = *(undefined2 *)(puVar4 + 10);
    *(undefined4 *)(iVar3 + 0x378) = *puVar4;
    *(undefined2 *)(iVar3 + 0x37c) = *(undefined2 *)(puVar4 + 1);
    *(undefined2 *)(iVar3 + 0x3ae) = *(undefined2 *)((int)puVar4 + 0x32);
    *(undefined2 *)(iVar3 + 0x3ac) = *(undefined2 *)(puVar4 + 0xc);
    _L0(uRam0000002c);
    uVar5 = puVar4[0xb];
    *(undefined4 *)(iVar3 + 0x3e0) = 0;
    *(undefined4 *)(iVar3 + 0x3a4) = uVar5;
    *(undefined *)(iVar3 + 0x3d5) = *(undefined *)((int)puVar4 + 0x36);
    *(undefined *)(iVar3 + 0x3d6) = *(undefined *)((int)puVar4 + 0x37);
    _L0(uRam0000002c);
    if (*(char *)(puVar4[0xb] + 2) == '\0') {
      uVar13 = FUN_00010498(uRam0000002c);
      if ((uVar13 & 0xf) == 0) {
        *(undefined *)(iVar3 + 0x3d7) = 1;
      }
      else {
        uVar5 = _L0(uRam0000002c);
        *(char *)(iVar3 + 0x3d7) = '\x1f' - (char)uVar5;
      }
    }
    iVar6 = FUN_000104c6(uRam0000002c);
    if (iVar6 == 0) {
      iVar6 = uVar17 * 0x5d8;
      *(undefined4 *)(iVar6 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3d0) = 0xa43;
    }
    else {
      iVar15 = uVar17 * 0x5d8;
      *(undefined *)(iVar15 + 0x3c0) = *(undefined *)(iVar6 + 8);
      *(ushort *)(iVar15 + 0x3ae) = *(ushort *)(iVar15 + 0x3ae) | 0x200;
      uVar13 = *(uint *)(iVar6 + 10);
      bVar8 = (byte)(uVar13 >> 3) & 2;
      *(byte *)(iVar15 + 0x3c1) = bVar8;
      *(uint *)(iVar15 + 0x3c8) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar6 + 0xe);
      bVar8 = (byte)(uVar13 >> 4) & 1 | bVar8;
      *(byte *)(iVar15 + 0x3c1) = bVar8;
      *(uint *)(iVar15 + 0x3c4) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar6 + 0x12);
      bVar8 |= (byte)(uVar13 >> 2) & 4;
      *(byte *)(iVar15 + 0x3c1) = bVar8;
      *(uint *)(iVar15 + 0x3cc) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      uVar13 = *(uint *)(iVar6 + 0x16);
      *(byte *)(iVar15 + 0x3c1) = bVar8 | (byte)(uVar13 >> 1) & 8;
      *(uint *)(iVar15 + 0x3d0) = uVar13 & 0xf | (uVar13 >> 8) << 4;
      *(uint *)(iVar15 + 0x3e0) = *(uint *)(iVar15 + 0x3e0) | 1;
    }
    if ((DAT_0000002e != '\0') && (iVar6 = uVar17 * 0x5d8, (*(uint *)(iVar6 + 0x3e0) & 1) != 0)) {
      iVar15 = _LVL105();
      if (iVar15 != 0) {
        *(undefined2 *)(iVar6 + 0x358) = *(undefined2 *)(iVar15 + 2);
        *(undefined *)(iVar6 + 0x35a) = *(undefined *)(iVar15 + 4);
        iVar6 = 0;
        do {
          *(undefined *)(iVar6 + iVar3 + 0x35b) = *(undefined *)(iVar15 + 5 + iVar6);
          iVar6 += 1;
        } while (iVar6 != 0x10);
        iVar3 = uVar17 * 0x5d8;
        *(undefined2 *)(iVar3 + 0x36c) = *(undefined2 *)(iVar15 + 0x15);
        *(uint *)(iVar3 + 0x370) = (uint)*(ushort *)(iVar15 + 0x17);
        *(undefined *)(iVar3 + 0x374) = *(undefined *)(iVar15 + 0x1b);
        *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 2;
      }
      _LVL120();
    }
    iVar3 = uVar17 * 0x5d8;
    cVar11 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar3 + 1000) = cVar11;
    if ((cVar11 != '\0') && (-1 < *(int *)(iVar3 + 0x3e0))) {
      FUN_000106d0();
      _L0();
      FUN_000106fa();
      _L0();
      _L0();
      *(undefined *)(iVar3 + 0x411) = 0;
      *(undefined *)(iVar3 + 0x3ef) = 0;
      *(undefined *)(iVar3 + 0x3f0) = 0;
      iVar6 = FUN_00010742();
      if (iVar6 != 0) {
        *(char *)(iVar3 + 0x411) = *(char *)(iVar6 + 1) + '\x02';
        _L0();
        uVar5 = FUN_0001077e();
        *(char *)(iVar3 + 0x411) = (char)uVar5;
        FUN_000107ac();
        FUN_000107d6();
        FUN_000107ea();
      }
      iVar3 = FUN_00010800();
      if (iVar3 != 0) {
        iVar6 = uVar17 * 0x5d8;
        *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 8;
        if (*(char *)(iVar6 + 0x411) == '\0') {
          *(char *)(iVar6 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
          _L0();
          uVar5 = FUN_00010846();
          *(char *)(iVar6 + 0x411) = (char)uVar5;
        }
      }
      iVar3 = iRam00000000;
      iVar6 = uVar17 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar6 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar6 + 0x3ae) & 0x10) == 0) {
          uVar5 = 2;
          goto _L0;
        }
        *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 2;
        *(undefined *)(iVar3 + 0x3b) = 1;
      }
      else {
        uVar5 = 9;
_L0:
        *(undefined4 *)(iVar3 + 0x30) = uVar5;
      }
      FUN_00010928();
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(uVar17 * 0x5d8 + 0x411);
      FUN_0001095e();
    }
    FUN_0001096c();
    FUN_0001097a();
    FUN_00010988();
    FUN_00010996();
    *(uint *)(uVar17 * 0x5d8 + 0x3e0) = *(uint *)(uVar17 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(puVar4 + 0xd) == '\0') {
    _DAT_00000014 += 1;
  }
  if (*(char *)(iVar7 + 0x150) != '\0') {
    *(undefined *)(puVar4 + 0xd) = 1;
  }
_L0:
  FUN_000109de();
  return 1;
}



undefined4 _L0(undefined3 uRam0000002c)

{
  undefined uVar1;
  ushort uVar2;
  int unaff_s0;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int unaff_s4;
  int unaff_s5;
  int in_stack_00000004;
  undefined in_stack_0000002c;
  
  iVar3 = _L0(uRam0000002c);
  if (iVar3 != 0) {
    uVar12 = (uint)*(byte *)(iVar3 + 1);
    if (uVar12 < 0x21) {
      if (uVar12 == 0) goto _L0;
    }
    else {
      uVar12 = 0x20;
    }
    puVar8 = (undefined *)(iVar3 + 2);
    if (*(char *)(iVar3 + 2) != '\0') {
      in_stack_0000002c = (undefined)uVar12;
      puVar9 = &stack0x0000002c;
      uVar13 = uVar12;
      while( true ) {
        uVar13 -= 1;
        puVar9 = puVar9 + 1;
        if (uVar13 == 0xffffffff) break;
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar9 = uVar1;
      }
      (&stack0x0000002d)[uVar12] = 0;
    }
  }
_L0:
  iVar3 = _LVL40(uRam0000002c);
  if (((iVar3 != 1) ||
      (puVar4 = (undefined4 *)FUN_0001022c(uRam0000002c), puVar4 == (undefined4 *)0x0)) ||
     (((*(byte *)(unaff_s4 + 0x16c) & 1) == 0 &&
      (((((*(byte *)(unaff_s0 + 0x2c) != *(byte *)(unaff_s4 + 0x16c) ||
          (*(char *)(unaff_s0 + 0x2d) != *(char *)(unaff_s4 + 0x16d))) ||
         (*(char *)(unaff_s0 + 0x2e) != *(char *)(unaff_s4 + 0x16e))) ||
        ((*(char *)(unaff_s0 + 0x2f) != *(char *)(unaff_s4 + 0x16f) ||
         (*(char *)(unaff_s0 + 0x30) != *(char *)(unaff_s4 + 0x170))))) ||
       (*(char *)(unaff_s0 + 0x31) != *(char *)(unaff_s4 + 0x171))))))) goto _L0;
  *(undefined2 *)puVar4 = *(undefined2 *)(unaff_s0 + 0x2c);
  *(undefined2 *)((int)puVar4 + 2) = *(undefined2 *)(unaff_s0 + 0x2e);
  *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(unaff_s0 + 0x30);
  *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(unaff_s0 + 0x3c);
  uVar2 = *(ushort *)(unaff_s0 + 0x3e);
  *(ushort *)((int)puVar4 + 0x32) = uVar2;
  uVar11 = uVar2 & 1;
  if ((uVar2 & 1) == 0) {
    uVar11 = 2;
  }
  *(ushort *)(puVar4 + 10) = uVar11;
  iVar3 = FUN_000102de(uRam0000002c);
  if (iVar3 == 0) {
    *(undefined *)((int)puVar4 + 6) = 0;
  }
  else {
    uVar12 = (uint)*(byte *)(iVar3 + 1);
    if (uVar12 < 0x21) {
      if (uVar12 == 0) goto _L0;
    }
    else {
      uVar12 = 0x20;
    }
    puVar8 = (undefined *)(iVar3 + 2);
    if (*(char *)(iVar3 + 2) != '\0') {
      *(char *)((int)puVar4 + 6) = (char)uVar12;
      puVar9 = (undefined *)((int)puVar4 + 7);
      while (uVar12 -= 1, uVar12 != 0xffffffff) {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar9 = uVar1;
        puVar9 = puVar9 + 1;
      }
    }
  }
_L0:
  *(undefined *)((int)puVar4 + 0x36) = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)((int)puVar4 + 0x37) = *(undefined *)(unaff_s0 + 0x19);
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    pcVar15 = (char *)(in_stack_00000004 + 0xfc);
    for (uVar12 = 0; (int)uVar12 < (int)(uint)*(byte *)(in_stack_00000004 + 0x150); uVar12 += 1) {
      if (*pcVar15 == '\0') goto _L0;
      if ((*(char *)((int)puVar4 + 6) == *pcVar15) &&
         (iVar3 = FUN_00010384(pcVar15 + 1,uRam0000002c), iVar3 == 0)) break;
      pcVar15 = pcVar15 + 0x22;
    }
    if (*(byte *)(in_stack_00000004 + 0x150) == uVar12) goto _L0;
  }
_L0:
  iVar3 = FUN_0001039e(uRam0000002c);
  if (iVar3 == 0) {
    if (*(char *)((int)puVar4 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
      uVar5 = _LVL154(uRam0000002c);
      puVar4[0xb] = uVar5;
      cVar10 = *(char *)(unaff_s0 + 0x18);
_L0:
      *(char *)((int)puVar4 + 0x35) = cVar10;
    }
  }
  else {
    uVar12 = (uint)*(byte *)(iVar3 + 2);
    if (*(char *)(unaff_s0 + 6) != '\0') {
      if ((*(char *)(unaff_s0 + 6) == '\x01') && (uVar12 - 1 < 0xa5)) {
        uVar5 = _L0(uRam0000002c);
        return uVar5;
      }
_L0:
      uVar5 = _L0(uRam0000002c);
      return uVar5;
    }
    if (0xd < uVar12 - 1) goto _L0;
    if (uVar12 == 0xe) {
      uVar5 = _L0(uRam0000002c);
      return uVar5;
    }
    uVar5 = _L0(uRam0000002c);
    puVar4[0xb] = uVar5;
    cVar10 = *(char *)(unaff_s0 + 0x18);
    if (*(char *)((int)puVar4 + 0x35) < cVar10) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) != '\0') {
    iVar3 = unaff_s5 * 0x5d8;
    *(undefined2 *)(iVar3 + 0x3a0) = *(undefined2 *)(puVar4 + 10);
    *(undefined4 *)(iVar3 + 0x378) = *puVar4;
    *(undefined2 *)(iVar3 + 0x37c) = *(undefined2 *)(puVar4 + 1);
    *(undefined2 *)(iVar3 + 0x3ae) = *(undefined2 *)((int)puVar4 + 0x32);
    *(undefined2 *)(iVar3 + 0x3ac) = *(undefined2 *)(puVar4 + 0xc);
    _L0(uRam0000002c);
    uVar5 = puVar4[0xb];
    *(undefined4 *)(iVar3 + 0x3e0) = 0;
    *(undefined4 *)(iVar3 + 0x3a4) = uVar5;
    *(undefined *)(iVar3 + 0x3d5) = *(undefined *)((int)puVar4 + 0x36);
    *(undefined *)(iVar3 + 0x3d6) = *(undefined *)((int)puVar4 + 0x37);
    _L0(uRam0000002c);
    if (*(char *)(puVar4[0xb] + 2) == '\0') {
      uVar12 = FUN_00010498(uRam0000002c);
      if ((uVar12 & 0xf) == 0) {
        *(undefined *)(iVar3 + 0x3d7) = 1;
      }
      else {
        uVar5 = _L0(uRam0000002c);
        *(char *)(iVar3 + 0x3d7) = '\x1f' - (char)uVar5;
      }
    }
    iVar6 = FUN_000104c6(uRam0000002c);
    if (iVar6 == 0) {
      iVar6 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iVar6 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3d0) = 0xa43;
    }
    else {
      iVar14 = unaff_s5 * 0x5d8;
      *(undefined *)(iVar14 + 0x3c0) = *(undefined *)(iVar6 + 8);
      *(ushort *)(iVar14 + 0x3ae) = *(ushort *)(iVar14 + 0x3ae) | 0x200;
      uVar12 = *(uint *)(iVar6 + 10);
      bVar7 = (byte)(uVar12 >> 3) & 2;
      *(byte *)(iVar14 + 0x3c1) = bVar7;
      *(uint *)(iVar14 + 0x3c8) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar6 + 0xe);
      bVar7 = (byte)(uVar12 >> 4) & 1 | bVar7;
      *(byte *)(iVar14 + 0x3c1) = bVar7;
      *(uint *)(iVar14 + 0x3c4) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar6 + 0x12);
      bVar7 |= (byte)(uVar12 >> 2) & 4;
      *(byte *)(iVar14 + 0x3c1) = bVar7;
      *(uint *)(iVar14 + 0x3cc) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar6 + 0x16);
      *(byte *)(iVar14 + 0x3c1) = bVar7 | (byte)(uVar12 >> 1) & 8;
      *(uint *)(iVar14 + 0x3d0) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      *(uint *)(iVar14 + 0x3e0) = *(uint *)(iVar14 + 0x3e0) | 1;
    }
    if ((uRam0000002c._2_1_ != '\0') &&
       (iVar6 = unaff_s5 * 0x5d8, (*(uint *)(iVar6 + 0x3e0) & 1) != 0)) {
      iVar14 = _LVL105();
      if (iVar14 != 0) {
        *(undefined2 *)(iVar6 + 0x358) = *(undefined2 *)(iVar14 + 2);
        *(undefined *)(iVar6 + 0x35a) = *(undefined *)(iVar14 + 4);
        iVar6 = 0;
        do {
          *(undefined *)(iVar6 + iVar3 + 0x35b) = *(undefined *)(iVar14 + 5 + iVar6);
          iVar6 += 1;
        } while (iVar6 != 0x10);
        iVar3 = unaff_s5 * 0x5d8;
        *(undefined2 *)(iVar3 + 0x36c) = *(undefined2 *)(iVar14 + 0x15);
        *(uint *)(iVar3 + 0x370) = (uint)*(ushort *)(iVar14 + 0x17);
        *(undefined *)(iVar3 + 0x374) = *(undefined *)(iVar14 + 0x1b);
        *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 2;
      }
      _LVL120();
    }
    iVar3 = unaff_s5 * 0x5d8;
    cVar10 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar3 + 1000) = cVar10;
    if ((cVar10 != '\0') && (-1 < *(int *)(iVar3 + 0x3e0))) {
      FUN_000106d0();
      _L0();
      FUN_000106fa();
      _L0();
      _L0();
      *(undefined *)(iVar3 + 0x411) = 0;
      *(undefined *)(iVar3 + 0x3ef) = 0;
      *(undefined *)(iVar3 + 0x3f0) = 0;
      iVar6 = FUN_00010742();
      if (iVar6 != 0) {
        *(char *)(iVar3 + 0x411) = *(char *)(iVar6 + 1) + '\x02';
        _L0();
        uVar5 = FUN_0001077e();
        *(char *)(iVar3 + 0x411) = (char)uVar5;
        FUN_000107ac();
        FUN_000107d6();
        FUN_000107ea();
      }
      iVar3 = FUN_00010800();
      if (iVar3 != 0) {
        iVar6 = unaff_s5 * 0x5d8;
        *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 8;
        if (*(char *)(iVar6 + 0x411) == '\0') {
          *(char *)(iVar6 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
          _L0();
          uVar5 = FUN_00010846();
          *(char *)(iVar6 + 0x411) = (char)uVar5;
        }
      }
      iVar3 = iRam00000000;
      iVar6 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar6 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar6 + 0x3ae) & 0x10) == 0) {
          uVar5 = 2;
          goto _L0;
        }
        *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 2;
        *(undefined *)(iVar3 + 0x3b) = 1;
      }
      else {
        uVar5 = 9;
_L0:
        *(undefined4 *)(iVar3 + 0x30) = uVar5;
      }
      FUN_00010928();
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + 0x411);
      FUN_0001095e();
    }
    FUN_0001096c();
    FUN_0001097a();
    FUN_00010988();
    FUN_00010996();
    *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(puVar4 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(puVar4 + 0xd) = 1;
  }
_L0:
  FUN_000109de();
  return 1;
}



undefined4 _LVL40(undefined3 param_1)

{
  undefined uVar1;
  ushort uVar2;
  int unaff_s0;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int unaff_s4;
  int unaff_s5;
  int in_stack_00000004;
  
  iVar3 = _LVL40(param_1);
  if (((iVar3 != 1) || (puVar4 = (undefined4 *)FUN_0001022c(param_1), puVar4 == (undefined4 *)0x0))
     || (((*(byte *)(unaff_s4 + 0x16c) & 1) == 0 &&
         (((((*(byte *)(unaff_s0 + 0x2c) != *(byte *)(unaff_s4 + 0x16c) ||
             (*(char *)(unaff_s0 + 0x2d) != *(char *)(unaff_s4 + 0x16d))) ||
            (*(char *)(unaff_s0 + 0x2e) != *(char *)(unaff_s4 + 0x16e))) ||
           ((*(char *)(unaff_s0 + 0x2f) != *(char *)(unaff_s4 + 0x16f) ||
            (*(char *)(unaff_s0 + 0x30) != *(char *)(unaff_s4 + 0x170))))) ||
          (*(char *)(unaff_s0 + 0x31) != *(char *)(unaff_s4 + 0x171))))))) goto _L0;
  *(undefined2 *)puVar4 = *(undefined2 *)(unaff_s0 + 0x2c);
  *(undefined2 *)((int)puVar4 + 2) = *(undefined2 *)(unaff_s0 + 0x2e);
  *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(unaff_s0 + 0x30);
  *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(unaff_s0 + 0x3c);
  uVar2 = *(ushort *)(unaff_s0 + 0x3e);
  *(ushort *)((int)puVar4 + 0x32) = uVar2;
  uVar11 = uVar2 & 1;
  if ((uVar2 & 1) == 0) {
    uVar11 = 2;
  }
  *(ushort *)(puVar4 + 10) = uVar11;
  iVar3 = FUN_000102de(param_1);
  if (iVar3 == 0) {
    *(undefined *)((int)puVar4 + 6) = 0;
  }
  else {
    uVar12 = (uint)*(byte *)(iVar3 + 1);
    if (uVar12 < 0x21) {
      if (uVar12 == 0) goto _L0;
    }
    else {
      uVar12 = 0x20;
    }
    puVar9 = (undefined *)(iVar3 + 2);
    if (*(char *)(iVar3 + 2) != '\0') {
      *(char *)((int)puVar4 + 6) = (char)uVar12;
      puVar8 = (undefined *)((int)puVar4 + 7);
      while (uVar12 -= 1, uVar12 != 0xffffffff) {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar8 = uVar1;
        puVar8 = puVar8 + 1;
      }
    }
  }
_L0:
  *(undefined *)((int)puVar4 + 0x36) = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)((int)puVar4 + 0x37) = *(undefined *)(unaff_s0 + 0x19);
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    pcVar14 = (char *)(in_stack_00000004 + 0xfc);
    for (uVar12 = 0; (int)uVar12 < (int)(uint)*(byte *)(in_stack_00000004 + 0x150); uVar12 += 1) {
      if (*pcVar14 == '\0') goto _L0;
      if ((*(char *)((int)puVar4 + 6) == *pcVar14) &&
         (iVar3 = FUN_00010384(pcVar14 + 1,param_1), iVar3 == 0)) break;
      pcVar14 = pcVar14 + 0x22;
    }
    if (*(byte *)(in_stack_00000004 + 0x150) == uVar12) goto _L0;
  }
_L0:
  iVar3 = FUN_0001039e(param_1);
  if (iVar3 == 0) {
    if (*(char *)((int)puVar4 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
      uVar5 = _LVL154(param_1);
      puVar4[0xb] = uVar5;
      cVar10 = *(char *)(unaff_s0 + 0x18);
_L0:
      *(char *)((int)puVar4 + 0x35) = cVar10;
    }
  }
  else {
    uVar12 = (uint)*(byte *)(iVar3 + 2);
    if (*(char *)(unaff_s0 + 6) != '\0') {
      if ((*(char *)(unaff_s0 + 6) == '\x01') && (uVar12 - 1 < 0xa5)) {
        uVar5 = _L0(param_1);
        return uVar5;
      }
_L0:
      uVar5 = _L0(param_1);
      return uVar5;
    }
    if (0xd < uVar12 - 1) goto _L0;
    if (uVar12 == 0xe) {
      uVar5 = _L0(param_1);
      return uVar5;
    }
    uVar5 = _L0(param_1);
    puVar4[0xb] = uVar5;
    cVar10 = *(char *)(unaff_s0 + 0x18);
    if (*(char *)((int)puVar4 + 0x35) < cVar10) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) != '\0') {
    iVar3 = unaff_s5 * 0x5d8;
    *(undefined2 *)(iVar3 + 0x3a0) = *(undefined2 *)(puVar4 + 10);
    *(undefined4 *)(iVar3 + 0x378) = *puVar4;
    *(undefined2 *)(iVar3 + 0x37c) = *(undefined2 *)(puVar4 + 1);
    *(undefined2 *)(iVar3 + 0x3ae) = *(undefined2 *)((int)puVar4 + 0x32);
    *(undefined2 *)(iVar3 + 0x3ac) = *(undefined2 *)(puVar4 + 0xc);
    _L0(param_1);
    uVar5 = puVar4[0xb];
    *(undefined4 *)(iVar3 + 0x3e0) = 0;
    *(undefined4 *)(iVar3 + 0x3a4) = uVar5;
    *(undefined *)(iVar3 + 0x3d5) = *(undefined *)((int)puVar4 + 0x36);
    *(undefined *)(iVar3 + 0x3d6) = *(undefined *)((int)puVar4 + 0x37);
    _L0(param_1);
    if (*(char *)(puVar4[0xb] + 2) == '\0') {
      uVar12 = FUN_00010498(param_1);
      if ((uVar12 & 0xf) == 0) {
        *(undefined *)(iVar3 + 0x3d7) = 1;
      }
      else {
        uVar5 = _L0(param_1);
        *(char *)(iVar3 + 0x3d7) = '\x1f' - (char)uVar5;
      }
    }
    iVar6 = FUN_000104c6(param_1);
    if (iVar6 == 0) {
      iVar6 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iVar6 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3d0) = 0xa43;
    }
    else {
      iVar13 = unaff_s5 * 0x5d8;
      *(undefined *)(iVar13 + 0x3c0) = *(undefined *)(iVar6 + 8);
      *(ushort *)(iVar13 + 0x3ae) = *(ushort *)(iVar13 + 0x3ae) | 0x200;
      uVar12 = *(uint *)(iVar6 + 10);
      bVar7 = (byte)(uVar12 >> 3) & 2;
      *(byte *)(iVar13 + 0x3c1) = bVar7;
      *(uint *)(iVar13 + 0x3c8) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar6 + 0xe);
      bVar7 = (byte)(uVar12 >> 4) & 1 | bVar7;
      *(byte *)(iVar13 + 0x3c1) = bVar7;
      *(uint *)(iVar13 + 0x3c4) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar6 + 0x12);
      bVar7 |= (byte)(uVar12 >> 2) & 4;
      *(byte *)(iVar13 + 0x3c1) = bVar7;
      *(uint *)(iVar13 + 0x3cc) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar6 + 0x16);
      *(byte *)(iVar13 + 0x3c1) = bVar7 | (byte)(uVar12 >> 1) & 8;
      *(uint *)(iVar13 + 0x3d0) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      *(uint *)(iVar13 + 0x3e0) = *(uint *)(iVar13 + 0x3e0) | 1;
    }
    if ((param_1._2_1_ != '\0') && (iVar6 = unaff_s5 * 0x5d8, (*(uint *)(iVar6 + 0x3e0) & 1) != 0))
    {
      iVar13 = _LVL105();
      if (iVar13 != 0) {
        *(undefined2 *)(iVar6 + 0x358) = *(undefined2 *)(iVar13 + 2);
        *(undefined *)(iVar6 + 0x35a) = *(undefined *)(iVar13 + 4);
        iVar6 = 0;
        do {
          *(undefined *)(iVar6 + iVar3 + 0x35b) = *(undefined *)(iVar13 + 5 + iVar6);
          iVar6 += 1;
        } while (iVar6 != 0x10);
        iVar3 = unaff_s5 * 0x5d8;
        *(undefined2 *)(iVar3 + 0x36c) = *(undefined2 *)(iVar13 + 0x15);
        *(uint *)(iVar3 + 0x370) = (uint)*(ushort *)(iVar13 + 0x17);
        *(undefined *)(iVar3 + 0x374) = *(undefined *)(iVar13 + 0x1b);
        *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 2;
      }
      _LVL120();
    }
    iVar3 = unaff_s5 * 0x5d8;
    cVar10 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar3 + 1000) = cVar10;
    if ((cVar10 != '\0') && (-1 < *(int *)(iVar3 + 0x3e0))) {
      FUN_000106d0();
      _L0();
      FUN_000106fa();
      _L0();
      _L0();
      *(undefined *)(iVar3 + 0x411) = 0;
      *(undefined *)(iVar3 + 0x3ef) = 0;
      *(undefined *)(iVar3 + 0x3f0) = 0;
      iVar6 = FUN_00010742();
      if (iVar6 != 0) {
        *(char *)(iVar3 + 0x411) = *(char *)(iVar6 + 1) + '\x02';
        _L0();
        uVar5 = FUN_0001077e();
        *(char *)(iVar3 + 0x411) = (char)uVar5;
        FUN_000107ac();
        FUN_000107d6();
        FUN_000107ea();
      }
      iVar3 = FUN_00010800();
      if (iVar3 != 0) {
        iVar6 = unaff_s5 * 0x5d8;
        *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 8;
        if (*(char *)(iVar6 + 0x411) == '\0') {
          *(char *)(iVar6 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
          _L0();
          uVar5 = FUN_00010846();
          *(char *)(iVar6 + 0x411) = (char)uVar5;
        }
      }
      iVar3 = iRam00000000;
      iVar6 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar6 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar6 + 0x3ae) & 0x10) == 0) {
          uVar5 = 2;
          goto _L0;
        }
        *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 2;
        *(undefined *)(iVar3 + 0x3b) = 1;
      }
      else {
        uVar5 = 9;
_L0:
        *(undefined4 *)(iVar3 + 0x30) = uVar5;
      }
      FUN_00010928();
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + 0x411);
      FUN_0001095e();
    }
    FUN_0001096c();
    FUN_0001097a();
    FUN_00010988();
    FUN_00010996();
    *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(puVar4 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(puVar4 + 0xd) = 1;
  }
_L0:
  FUN_000109de();
  return 1;
}



undefined4 FUN_0001022c(undefined3 uRam0000002c)

{
  undefined uVar1;
  ushort uVar2;
  int unaff_s0;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int unaff_s4;
  int unaff_s5;
  int in_stack_00000004;
  
  puVar3 = (undefined4 *)FUN_0001022c(uRam0000002c);
  if ((puVar3 == (undefined4 *)0x0) ||
     (((*(byte *)(unaff_s4 + 0x16c) & 1) == 0 &&
      (((((*(byte *)(unaff_s0 + 0x2c) != *(byte *)(unaff_s4 + 0x16c) ||
          (*(char *)(unaff_s0 + 0x2d) != *(char *)(unaff_s4 + 0x16d))) ||
         (*(char *)(unaff_s0 + 0x2e) != *(char *)(unaff_s4 + 0x16e))) ||
        ((*(char *)(unaff_s0 + 0x2f) != *(char *)(unaff_s4 + 0x16f) ||
         (*(char *)(unaff_s0 + 0x30) != *(char *)(unaff_s4 + 0x170))))) ||
       (*(char *)(unaff_s0 + 0x31) != *(char *)(unaff_s4 + 0x171))))))) goto _L0;
  *(undefined2 *)puVar3 = *(undefined2 *)(unaff_s0 + 0x2c);
  *(undefined2 *)((int)puVar3 + 2) = *(undefined2 *)(unaff_s0 + 0x2e);
  *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(unaff_s0 + 0x30);
  *(undefined2 *)(puVar3 + 0xc) = *(undefined2 *)(unaff_s0 + 0x3c);
  uVar2 = *(ushort *)(unaff_s0 + 0x3e);
  *(ushort *)((int)puVar3 + 0x32) = uVar2;
  uVar11 = uVar2 & 1;
  if ((uVar2 & 1) == 0) {
    uVar11 = 2;
  }
  *(ushort *)(puVar3 + 10) = uVar11;
  iVar4 = FUN_000102de(uRam0000002c);
  if (iVar4 == 0) {
    *(undefined *)((int)puVar3 + 6) = 0;
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
      *(char *)((int)puVar3 + 6) = (char)uVar12;
      puVar8 = (undefined *)((int)puVar3 + 7);
      while (uVar12 -= 1, uVar12 != 0xffffffff) {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar8 = uVar1;
        puVar8 = puVar8 + 1;
      }
    }
  }
_L0:
  *(undefined *)((int)puVar3 + 0x36) = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)((int)puVar3 + 0x37) = *(undefined *)(unaff_s0 + 0x19);
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    pcVar14 = (char *)(in_stack_00000004 + 0xfc);
    for (uVar12 = 0; (int)uVar12 < (int)(uint)*(byte *)(in_stack_00000004 + 0x150); uVar12 += 1) {
      if (*pcVar14 == '\0') goto _L0;
      if ((*(char *)((int)puVar3 + 6) == *pcVar14) &&
         (iVar4 = FUN_00010384(pcVar14 + 1,uRam0000002c), iVar4 == 0)) break;
      pcVar14 = pcVar14 + 0x22;
    }
    if (*(byte *)(in_stack_00000004 + 0x150) == uVar12) goto _L0;
  }
_L0:
  iVar4 = FUN_0001039e(uRam0000002c);
  if (iVar4 == 0) {
    if (*(char *)((int)puVar3 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
      uVar5 = _LVL154(uRam0000002c);
      puVar3[0xb] = uVar5;
      cVar10 = *(char *)(unaff_s0 + 0x18);
_L0:
      *(char *)((int)puVar3 + 0x35) = cVar10;
    }
  }
  else {
    uVar12 = (uint)*(byte *)(iVar4 + 2);
    if (*(char *)(unaff_s0 + 6) != '\0') {
      if ((*(char *)(unaff_s0 + 6) == '\x01') && (uVar12 - 1 < 0xa5)) {
        uVar5 = _L0(uRam0000002c);
        return uVar5;
      }
_L0:
      uVar5 = _L0(uRam0000002c);
      return uVar5;
    }
    if (0xd < uVar12 - 1) goto _L0;
    if (uVar12 == 0xe) {
      uVar5 = _L0(uRam0000002c);
      return uVar5;
    }
    uVar5 = _L0(uRam0000002c);
    puVar3[0xb] = uVar5;
    cVar10 = *(char *)(unaff_s0 + 0x18);
    if (*(char *)((int)puVar3 + 0x35) < cVar10) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) != '\0') {
    iVar4 = unaff_s5 * 0x5d8;
    *(undefined2 *)(iVar4 + 0x3a0) = *(undefined2 *)(puVar3 + 10);
    *(undefined4 *)(iVar4 + 0x378) = *puVar3;
    *(undefined2 *)(iVar4 + 0x37c) = *(undefined2 *)(puVar3 + 1);
    *(undefined2 *)(iVar4 + 0x3ae) = *(undefined2 *)((int)puVar3 + 0x32);
    *(undefined2 *)(iVar4 + 0x3ac) = *(undefined2 *)(puVar3 + 0xc);
    _L0(uRam0000002c);
    uVar5 = puVar3[0xb];
    *(undefined4 *)(iVar4 + 0x3e0) = 0;
    *(undefined4 *)(iVar4 + 0x3a4) = uVar5;
    *(undefined *)(iVar4 + 0x3d5) = *(undefined *)((int)puVar3 + 0x36);
    *(undefined *)(iVar4 + 0x3d6) = *(undefined *)((int)puVar3 + 0x37);
    _L0(uRam0000002c);
    if (*(char *)(puVar3[0xb] + 2) == '\0') {
      uVar12 = FUN_00010498(uRam0000002c);
      if ((uVar12 & 0xf) == 0) {
        *(undefined *)(iVar4 + 0x3d7) = 1;
      }
      else {
        uVar5 = _L0(uRam0000002c);
        *(char *)(iVar4 + 0x3d7) = '\x1f' - (char)uVar5;
      }
    }
    iVar6 = FUN_000104c6(uRam0000002c);
    if (iVar6 == 0) {
      iVar6 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iVar6 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar6 + 0x3d0) = 0xa43;
    }
    else {
      iVar13 = unaff_s5 * 0x5d8;
      *(undefined *)(iVar13 + 0x3c0) = *(undefined *)(iVar6 + 8);
      *(ushort *)(iVar13 + 0x3ae) = *(ushort *)(iVar13 + 0x3ae) | 0x200;
      uVar12 = *(uint *)(iVar6 + 10);
      bVar7 = (byte)(uVar12 >> 3) & 2;
      *(byte *)(iVar13 + 0x3c1) = bVar7;
      *(uint *)(iVar13 + 0x3c8) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar6 + 0xe);
      bVar7 = (byte)(uVar12 >> 4) & 1 | bVar7;
      *(byte *)(iVar13 + 0x3c1) = bVar7;
      *(uint *)(iVar13 + 0x3c4) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar6 + 0x12);
      bVar7 |= (byte)(uVar12 >> 2) & 4;
      *(byte *)(iVar13 + 0x3c1) = bVar7;
      *(uint *)(iVar13 + 0x3cc) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      uVar12 = *(uint *)(iVar6 + 0x16);
      *(byte *)(iVar13 + 0x3c1) = bVar7 | (byte)(uVar12 >> 1) & 8;
      *(uint *)(iVar13 + 0x3d0) = uVar12 & 0xf | (uVar12 >> 8) << 4;
      *(uint *)(iVar13 + 0x3e0) = *(uint *)(iVar13 + 0x3e0) | 1;
    }
    if ((uRam0000002c._2_1_ != '\0') &&
       (iVar6 = unaff_s5 * 0x5d8, (*(uint *)(iVar6 + 0x3e0) & 1) != 0)) {
      iVar13 = _LVL105();
      if (iVar13 != 0) {
        *(undefined2 *)(iVar6 + 0x358) = *(undefined2 *)(iVar13 + 2);
        *(undefined *)(iVar6 + 0x35a) = *(undefined *)(iVar13 + 4);
        iVar6 = 0;
        do {
          *(undefined *)(iVar6 + iVar4 + 0x35b) = *(undefined *)(iVar13 + 5 + iVar6);
          iVar6 += 1;
        } while (iVar6 != 0x10);
        iVar4 = unaff_s5 * 0x5d8;
        *(undefined2 *)(iVar4 + 0x36c) = *(undefined2 *)(iVar13 + 0x15);
        *(uint *)(iVar4 + 0x370) = (uint)*(ushort *)(iVar13 + 0x17);
        *(undefined *)(iVar4 + 0x374) = *(undefined *)(iVar13 + 0x1b);
        *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 2;
      }
      _LVL120();
    }
    iVar4 = unaff_s5 * 0x5d8;
    cVar10 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar4 + 1000) = cVar10;
    if ((cVar10 != '\0') && (-1 < *(int *)(iVar4 + 0x3e0))) {
      FUN_000106d0();
      _L0();
      FUN_000106fa();
      _L0();
      _L0();
      *(undefined *)(iVar4 + 0x411) = 0;
      *(undefined *)(iVar4 + 0x3ef) = 0;
      *(undefined *)(iVar4 + 0x3f0) = 0;
      iVar6 = FUN_00010742();
      if (iVar6 != 0) {
        *(char *)(iVar4 + 0x411) = *(char *)(iVar6 + 1) + '\x02';
        _L0();
        uVar5 = FUN_0001077e();
        *(char *)(iVar4 + 0x411) = (char)uVar5;
        FUN_000107ac();
        FUN_000107d6();
        FUN_000107ea();
      }
      iVar4 = FUN_00010800();
      if (iVar4 != 0) {
        iVar6 = unaff_s5 * 0x5d8;
        *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 8;
        if (*(char *)(iVar6 + 0x411) == '\0') {
          *(char *)(iVar6 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
          _L0();
          uVar5 = FUN_00010846();
          *(char *)(iVar6 + 0x411) = (char)uVar5;
        }
      }
      iVar4 = iRam00000000;
      iVar6 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar6 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar6 + 0x3ae) & 0x10) == 0) {
          uVar5 = 2;
          goto _L0;
        }
        *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 2;
        *(undefined *)(iVar4 + 0x3b) = 1;
      }
      else {
        uVar5 = 9;
_L0:
        *(undefined4 *)(iVar4 + 0x30) = uVar5;
      }
      FUN_00010928();
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + 0x411);
      FUN_0001095e();
    }
    FUN_0001096c();
    FUN_0001097a();
    FUN_00010988();
    FUN_00010996();
    *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(puVar3 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(puVar3 + 0xd) = 1;
  }
_L0:
  FUN_000109de();
  return 1;
}



undefined4 FUN_000102de(undefined3 uRam0000002c)

{
  undefined uVar1;
  int unaff_s0;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s8;
  int in_stack_00000004;
  
  iVar2 = FUN_000102de(uRam0000002c);
  if (iVar2 == 0) {
    *(undefined *)((int)unaff_s8 + 6) = 0;
  }
  else {
    uVar9 = (uint)*(byte *)(iVar2 + 1);
    if (uVar9 < 0x21) {
      if (uVar9 == 0) goto _L0;
    }
    else {
      uVar9 = 0x20;
    }
    puVar7 = (undefined *)(iVar2 + 2);
    if (*(char *)(iVar2 + 2) != '\0') {
      *(char *)((int)unaff_s8 + 6) = (char)uVar9;
      puVar6 = (undefined *)((int)unaff_s8 + 7);
      while (uVar9 -= 1, uVar9 != 0xffffffff) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  }
_L0:
  *(undefined *)((int)unaff_s8 + 0x36) = *(undefined *)(unaff_s0 + 0x1a);
  *(undefined *)((int)unaff_s8 + 0x37) = *(undefined *)(unaff_s0 + 0x19);
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    pcVar11 = (char *)(in_stack_00000004 + 0xfc);
    for (uVar9 = 0; (int)uVar9 < (int)(uint)*(byte *)(in_stack_00000004 + 0x150); uVar9 += 1) {
      if (*pcVar11 == '\0') goto _L0;
      if ((*(char *)((int)unaff_s8 + 6) == *pcVar11) &&
         (iVar2 = FUN_00010384(pcVar11 + 1,uRam0000002c), iVar2 == 0)) break;
      pcVar11 = pcVar11 + 0x22;
    }
    if (*(byte *)(in_stack_00000004 + 0x150) == uVar9) goto _L0;
  }
_L0:
  iVar2 = FUN_0001039e(uRam0000002c);
  if (iVar2 == 0) {
    if (*(char *)((int)unaff_s8 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
      uVar3 = _LVL154(uRam0000002c);
      unaff_s8[0xb] = uVar3;
      cVar8 = *(char *)(unaff_s0 + 0x18);
_L0:
      *(char *)((int)unaff_s8 + 0x35) = cVar8;
    }
  }
  else {
    uVar9 = (uint)*(byte *)(iVar2 + 2);
    if (*(char *)(unaff_s0 + 6) != '\0') {
      if ((*(char *)(unaff_s0 + 6) == '\x01') && (uVar9 - 1 < 0xa5)) {
        uVar3 = _L0(uRam0000002c);
        return uVar3;
      }
_L0:
      uVar3 = _L0(uRam0000002c);
      return uVar3;
    }
    if (0xd < uVar9 - 1) goto _L0;
    if (uVar9 == 0xe) {
      uVar3 = _L0(uRam0000002c);
      return uVar3;
    }
    uVar3 = _L0(uRam0000002c);
    unaff_s8[0xb] = uVar3;
    cVar8 = *(char *)(unaff_s0 + 0x18);
    if (*(char *)((int)unaff_s8 + 0x35) < cVar8) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) != '\0') {
    iVar2 = unaff_s5 * 0x5d8;
    *(undefined2 *)(iVar2 + 0x3a0) = *(undefined2 *)(unaff_s8 + 10);
    *(undefined4 *)(iVar2 + 0x378) = *unaff_s8;
    *(undefined2 *)(iVar2 + 0x37c) = *(undefined2 *)(unaff_s8 + 1);
    *(undefined2 *)(iVar2 + 0x3ae) = *(undefined2 *)((int)unaff_s8 + 0x32);
    *(undefined2 *)(iVar2 + 0x3ac) = *(undefined2 *)(unaff_s8 + 0xc);
    _L0(uRam0000002c);
    uVar3 = unaff_s8[0xb];
    *(undefined4 *)(iVar2 + 0x3e0) = 0;
    *(undefined4 *)(iVar2 + 0x3a4) = uVar3;
    *(undefined *)(iVar2 + 0x3d5) = *(undefined *)((int)unaff_s8 + 0x36);
    *(undefined *)(iVar2 + 0x3d6) = *(undefined *)((int)unaff_s8 + 0x37);
    _L0(uRam0000002c);
    if (*(char *)(unaff_s8[0xb] + 2) == '\0') {
      uVar9 = FUN_00010498(uRam0000002c);
      if ((uVar9 & 0xf) == 0) {
        *(undefined *)(iVar2 + 0x3d7) = 1;
      }
      else {
        uVar3 = _L0(uRam0000002c);
        *(char *)(iVar2 + 0x3d7) = '\x1f' - (char)uVar3;
      }
    }
    iVar4 = FUN_000104c6(uRam0000002c);
    if (iVar4 == 0) {
      iVar4 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iVar4 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar4 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar4 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar4 + 0x3d0) = 0xa43;
    }
    else {
      iVar10 = unaff_s5 * 0x5d8;
      *(undefined *)(iVar10 + 0x3c0) = *(undefined *)(iVar4 + 8);
      *(ushort *)(iVar10 + 0x3ae) = *(ushort *)(iVar10 + 0x3ae) | 0x200;
      uVar9 = *(uint *)(iVar4 + 10);
      bVar5 = (byte)(uVar9 >> 3) & 2;
      *(byte *)(iVar10 + 0x3c1) = bVar5;
      *(uint *)(iVar10 + 0x3c8) = uVar9 & 0xf | (uVar9 >> 8) << 4;
      uVar9 = *(uint *)(iVar4 + 0xe);
      bVar5 = (byte)(uVar9 >> 4) & 1 | bVar5;
      *(byte *)(iVar10 + 0x3c1) = bVar5;
      *(uint *)(iVar10 + 0x3c4) = uVar9 & 0xf | (uVar9 >> 8) << 4;
      uVar9 = *(uint *)(iVar4 + 0x12);
      bVar5 |= (byte)(uVar9 >> 2) & 4;
      *(byte *)(iVar10 + 0x3c1) = bVar5;
      *(uint *)(iVar10 + 0x3cc) = uVar9 & 0xf | (uVar9 >> 8) << 4;
      uVar9 = *(uint *)(iVar4 + 0x16);
      *(byte *)(iVar10 + 0x3c1) = bVar5 | (byte)(uVar9 >> 1) & 8;
      *(uint *)(iVar10 + 0x3d0) = uVar9 & 0xf | (uVar9 >> 8) << 4;
      *(uint *)(iVar10 + 0x3e0) = *(uint *)(iVar10 + 0x3e0) | 1;
    }
    if ((uRam0000002c._2_1_ != '\0') &&
       (iVar4 = unaff_s5 * 0x5d8, (*(uint *)(iVar4 + 0x3e0) & 1) != 0)) {
      iVar10 = _LVL105();
      if (iVar10 != 0) {
        *(undefined2 *)(iVar4 + 0x358) = *(undefined2 *)(iVar10 + 2);
        *(undefined *)(iVar4 + 0x35a) = *(undefined *)(iVar10 + 4);
        iVar4 = 0;
        do {
          *(undefined *)(iVar4 + iVar2 + 0x35b) = *(undefined *)(iVar10 + 5 + iVar4);
          iVar4 += 1;
        } while (iVar4 != 0x10);
        iVar2 = unaff_s5 * 0x5d8;
        *(undefined2 *)(iVar2 + 0x36c) = *(undefined2 *)(iVar10 + 0x15);
        *(uint *)(iVar2 + 0x370) = (uint)*(ushort *)(iVar10 + 0x17);
        *(undefined *)(iVar2 + 0x374) = *(undefined *)(iVar10 + 0x1b);
        *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 2;
      }
      _LVL120();
    }
    iVar2 = unaff_s5 * 0x5d8;
    cVar8 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar2 + 1000) = cVar8;
    if ((cVar8 != '\0') && (-1 < *(int *)(iVar2 + 0x3e0))) {
      FUN_000106d0();
      _L0();
      FUN_000106fa();
      _L0();
      _L0();
      *(undefined *)(iVar2 + 0x411) = 0;
      *(undefined *)(iVar2 + 0x3ef) = 0;
      *(undefined *)(iVar2 + 0x3f0) = 0;
      iVar4 = FUN_00010742();
      if (iVar4 != 0) {
        *(char *)(iVar2 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
        _L0();
        uVar3 = FUN_0001077e();
        *(char *)(iVar2 + 0x411) = (char)uVar3;
        FUN_000107ac();
        FUN_000107d6();
        FUN_000107ea();
      }
      iVar2 = FUN_00010800();
      if (iVar2 != 0) {
        iVar4 = unaff_s5 * 0x5d8;
        *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 8;
        if (*(char *)(iVar4 + 0x411) == '\0') {
          *(char *)(iVar4 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
          _L0();
          uVar3 = FUN_00010846();
          *(char *)(iVar4 + 0x411) = (char)uVar3;
        }
      }
      iVar2 = iRam00000000;
      iVar4 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar4 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar4 + 0x3ae) & 0x10) == 0) {
          uVar3 = 2;
          goto _L0;
        }
        *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 2;
        *(undefined *)(iVar2 + 0x3b) = 1;
      }
      else {
        uVar3 = 9;
_L0:
        *(undefined4 *)(iVar2 + 0x30) = uVar3;
      }
      FUN_00010928();
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + 0x411);
      FUN_0001095e();
    }
    FUN_0001096c();
    FUN_0001097a();
    FUN_00010988();
    FUN_00010996();
    *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(unaff_s8 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0xd) = 1;
  }
_L0:
  FUN_000109de();
  return 1;
}



undefined4 FUN_00010384(char *param_1,undefined3 param_2)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  char *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s8;
  int in_stack_00000004;
  
  while (iVar1 = FUN_00010384(param_1,param_2), iVar1 != 0) {
    do {
      pcVar8 = unaff_s3;
      unaff_s1 += 1;
      unaff_s3 = pcVar8 + 0x22;
      if ((int)(uint)*(byte *)(in_stack_00000004 + 0x150) <= (int)unaff_s1) goto _L0;
      if (*unaff_s3 == '\0') goto _L0;
    } while (*(char *)((int)unaff_s8 + 6) != *unaff_s3);
    param_1 = pcVar8 + 0x23;
  }
_L0:
  if (*(byte *)(in_stack_00000004 + 0x150) == unaff_s1) goto _L0;
_L0:
  iVar1 = FUN_0001039e(param_2);
  if (iVar1 == 0) {
    if (*(char *)((int)unaff_s8 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
      uVar2 = _LVL154(param_2);
      unaff_s8[0xb] = uVar2;
      cVar6 = *(char *)(unaff_s0 + 0x18);
_L0:
      *(char *)((int)unaff_s8 + 0x35) = cVar6;
    }
  }
  else {
    uVar5 = (uint)*(byte *)(iVar1 + 2);
    if (*(char *)(unaff_s0 + 6) != '\0') {
      if ((*(char *)(unaff_s0 + 6) == '\x01') && (uVar5 - 1 < 0xa5)) {
        uVar2 = _L0(param_2);
        return uVar2;
      }
_L0:
      uVar2 = _L0(param_2);
      return uVar2;
    }
    if (0xd < uVar5 - 1) goto _L0;
    if (uVar5 == 0xe) {
      uVar2 = _L0(param_2);
      return uVar2;
    }
    uVar2 = _L0(param_2);
    unaff_s8[0xb] = uVar2;
    cVar6 = *(char *)(unaff_s0 + 0x18);
    if (*(char *)((int)unaff_s8 + 0x35) < cVar6) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) != '\0') {
    iVar1 = unaff_s5 * 0x5d8;
    *(undefined2 *)(iVar1 + 0x3a0) = *(undefined2 *)(unaff_s8 + 10);
    *(undefined4 *)(iVar1 + 0x378) = *unaff_s8;
    *(undefined2 *)(iVar1 + 0x37c) = *(undefined2 *)(unaff_s8 + 1);
    *(undefined2 *)(iVar1 + 0x3ae) = *(undefined2 *)((int)unaff_s8 + 0x32);
    *(undefined2 *)(iVar1 + 0x3ac) = *(undefined2 *)(unaff_s8 + 0xc);
    _L0(param_2);
    uVar2 = unaff_s8[0xb];
    *(undefined4 *)(iVar1 + 0x3e0) = 0;
    *(undefined4 *)(iVar1 + 0x3a4) = uVar2;
    *(undefined *)(iVar1 + 0x3d5) = *(undefined *)((int)unaff_s8 + 0x36);
    *(undefined *)(iVar1 + 0x3d6) = *(undefined *)((int)unaff_s8 + 0x37);
    _L0(param_2);
    if (*(char *)(unaff_s8[0xb] + 2) == '\0') {
      uVar5 = FUN_00010498(param_2);
      if ((uVar5 & 0xf) == 0) {
        *(undefined *)(iVar1 + 0x3d7) = 1;
      }
      else {
        uVar2 = _L0(param_2);
        *(char *)(iVar1 + 0x3d7) = '\x1f' - (char)uVar2;
      }
    }
    iVar3 = FUN_000104c6(param_2);
    if (iVar3 == 0) {
      iVar3 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iVar3 + 0x3c4) = 0xa43;
      *(undefined4 *)(iVar3 + 0x3c8) = 0xa43;
      *(undefined4 *)(iVar3 + 0x3cc) = 0xa43;
      *(undefined4 *)(iVar3 + 0x3d0) = 0xa43;
    }
    else {
      iVar7 = unaff_s5 * 0x5d8;
      *(undefined *)(iVar7 + 0x3c0) = *(undefined *)(iVar3 + 8);
      *(ushort *)(iVar7 + 0x3ae) = *(ushort *)(iVar7 + 0x3ae) | 0x200;
      uVar5 = *(uint *)(iVar3 + 10);
      bVar4 = (byte)(uVar5 >> 3) & 2;
      *(byte *)(iVar7 + 0x3c1) = bVar4;
      *(uint *)(iVar7 + 0x3c8) = uVar5 & 0xf | (uVar5 >> 8) << 4;
      uVar5 = *(uint *)(iVar3 + 0xe);
      bVar4 = (byte)(uVar5 >> 4) & 1 | bVar4;
      *(byte *)(iVar7 + 0x3c1) = bVar4;
      *(uint *)(iVar7 + 0x3c4) = uVar5 & 0xf | (uVar5 >> 8) << 4;
      uVar5 = *(uint *)(iVar3 + 0x12);
      bVar4 |= (byte)(uVar5 >> 2) & 4;
      *(byte *)(iVar7 + 0x3c1) = bVar4;
      *(uint *)(iVar7 + 0x3cc) = uVar5 & 0xf | (uVar5 >> 8) << 4;
      uVar5 = *(uint *)(iVar3 + 0x16);
      *(byte *)(iVar7 + 0x3c1) = bVar4 | (byte)(uVar5 >> 1) & 8;
      *(uint *)(iVar7 + 0x3d0) = uVar5 & 0xf | (uVar5 >> 8) << 4;
      *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 1;
    }
    if ((param_2._2_1_ != '\0') && (iVar3 = unaff_s5 * 0x5d8, (*(uint *)(iVar3 + 0x3e0) & 1) != 0))
    {
      iVar7 = _LVL105();
      if (iVar7 != 0) {
        *(undefined2 *)(iVar3 + 0x358) = *(undefined2 *)(iVar7 + 2);
        *(undefined *)(iVar3 + 0x35a) = *(undefined *)(iVar7 + 4);
        iVar3 = 0;
        do {
          *(undefined *)(iVar3 + iVar1 + 0x35b) = *(undefined *)(iVar7 + 5 + iVar3);
          iVar3 += 1;
        } while (iVar3 != 0x10);
        iVar1 = unaff_s5 * 0x5d8;
        *(undefined2 *)(iVar1 + 0x36c) = *(undefined2 *)(iVar7 + 0x15);
        *(uint *)(iVar1 + 0x370) = (uint)*(ushort *)(iVar7 + 0x17);
        *(undefined *)(iVar1 + 0x374) = *(undefined *)(iVar7 + 0x1b);
        *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 2;
      }
      _LVL120();
    }
    iVar1 = unaff_s5 * 0x5d8;
    cVar6 = *(char *)(iRam00000000 + 0x140);
    *(char *)(iVar1 + 1000) = cVar6;
    if ((cVar6 != '\0') && (-1 < *(int *)(iVar1 + 0x3e0))) {
      FUN_000106d0();
      _L0();
      FUN_000106fa();
      _L0();
      _L0();
      *(undefined *)(iVar1 + 0x411) = 0;
      *(undefined *)(iVar1 + 0x3ef) = 0;
      *(undefined *)(iVar1 + 0x3f0) = 0;
      iVar3 = FUN_00010742();
      if (iVar3 != 0) {
        *(char *)(iVar1 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
        _L0();
        uVar2 = FUN_0001077e();
        *(char *)(iVar1 + 0x411) = (char)uVar2;
        FUN_000107ac();
        FUN_000107d6();
        FUN_000107ea();
      }
      iVar1 = FUN_00010800();
      if (iVar1 != 0) {
        iVar3 = unaff_s5 * 0x5d8;
        *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
        if (*(char *)(iVar3 + 0x411) == '\0') {
          *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
          _L0();
          uVar2 = FUN_00010846();
          *(char *)(iVar3 + 0x411) = (char)uVar2;
        }
      }
      iVar1 = iRam00000000;
      iVar3 = unaff_s5 * 0x5d8;
      *(undefined4 *)(iRam00000000 + 0x30) = 0;
      if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
        if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) == 0) {
          uVar2 = 2;
          goto _L0;
        }
        *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
        *(undefined *)(iVar1 + 0x3b) = 1;
      }
      else {
        uVar2 = 9;
_L0:
        *(undefined4 *)(iVar1 + 0x30) = uVar2;
      }
      FUN_00010928();
      *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + 0x411);
      FUN_0001095e();
    }
    FUN_0001096c();
    FUN_0001097a();
    FUN_00010988();
    FUN_00010996();
    *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
  }
  if (*(char *)(unaff_s8 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0xd) = 1;
  }
_L0:
  FUN_000109de();
  return 1;
}



undefined4 FUN_0001039e(undefined3 uRam0000002c)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s8;
  int in_stack_00000004;
  
  iVar1 = FUN_0001039e(uRam0000002c);
  if (iVar1 == 0) {
    if (*(char *)((int)unaff_s8 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
      uVar2 = _LVL154(uRam0000002c);
      unaff_s8[0xb] = uVar2;
      cVar6 = *(char *)(unaff_s0 + 0x18);
_L0:
      *(char *)((int)unaff_s8 + 0x35) = cVar6;
    }
  }
  else {
    uVar5 = (uint)*(byte *)(iVar1 + 2);
    if (*(char *)(unaff_s0 + 6) != '\0') {
      if ((*(char *)(unaff_s0 + 6) == '\x01') && (uVar5 - 1 < 0xa5)) {
        uVar2 = _L0(uRam0000002c);
        return uVar2;
      }
_L0:
      uVar2 = _L0(uRam0000002c);
      return uVar2;
    }
    if (0xd < uVar5 - 1) goto _L0;
    if (uVar5 == 0xe) {
      uVar2 = _L0(uRam0000002c);
      return uVar2;
    }
    uVar2 = _L0(uRam0000002c);
    unaff_s8[0xb] = uVar2;
    cVar6 = *(char *)(unaff_s0 + 0x18);
    if (*(char *)((int)unaff_s8 + 0x35) < cVar6) goto _L0;
  }
  if (*(char *)(unaff_s4 + 0x16a) == '\0') goto _L0;
  iVar1 = unaff_s5 * 0x5d8;
  *(undefined2 *)(iVar1 + 0x3a0) = *(undefined2 *)(unaff_s8 + 10);
  *(undefined4 *)(iVar1 + 0x378) = *unaff_s8;
  *(undefined2 *)(iVar1 + 0x37c) = *(undefined2 *)(unaff_s8 + 1);
  *(undefined2 *)(iVar1 + 0x3ae) = *(undefined2 *)((int)unaff_s8 + 0x32);
  *(undefined2 *)(iVar1 + 0x3ac) = *(undefined2 *)(unaff_s8 + 0xc);
  _L0(uRam0000002c);
  uVar2 = unaff_s8[0xb];
  *(undefined4 *)(iVar1 + 0x3e0) = 0;
  *(undefined4 *)(iVar1 + 0x3a4) = uVar2;
  *(undefined *)(iVar1 + 0x3d5) = *(undefined *)((int)unaff_s8 + 0x36);
  *(undefined *)(iVar1 + 0x3d6) = *(undefined *)((int)unaff_s8 + 0x37);
  _L0(uRam0000002c);
  if (*(char *)(unaff_s8[0xb] + 2) == '\0') {
    uVar5 = FUN_00010498(uRam0000002c);
    if ((uVar5 & 0xf) == 0) {
      *(undefined *)(iVar1 + 0x3d7) = 1;
    }
    else {
      uVar2 = _L0(uRam0000002c);
      *(char *)(iVar1 + 0x3d7) = '\x1f' - (char)uVar2;
    }
  }
  iVar3 = FUN_000104c6(uRam0000002c);
  if (iVar3 == 0) {
    iVar3 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iVar3 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3d0) = 0xa43;
  }
  else {
    iVar7 = unaff_s5 * 0x5d8;
    *(undefined *)(iVar7 + 0x3c0) = *(undefined *)(iVar3 + 8);
    *(ushort *)(iVar7 + 0x3ae) = *(ushort *)(iVar7 + 0x3ae) | 0x200;
    uVar5 = *(uint *)(iVar3 + 10);
    bVar4 = (byte)(uVar5 >> 3) & 2;
    *(byte *)(iVar7 + 0x3c1) = bVar4;
    *(uint *)(iVar7 + 0x3c8) = uVar5 & 0xf | (uVar5 >> 8) << 4;
    uVar5 = *(uint *)(iVar3 + 0xe);
    bVar4 = (byte)(uVar5 >> 4) & 1 | bVar4;
    *(byte *)(iVar7 + 0x3c1) = bVar4;
    *(uint *)(iVar7 + 0x3c4) = uVar5 & 0xf | (uVar5 >> 8) << 4;
    uVar5 = *(uint *)(iVar3 + 0x12);
    bVar4 |= (byte)(uVar5 >> 2) & 4;
    *(byte *)(iVar7 + 0x3c1) = bVar4;
    *(uint *)(iVar7 + 0x3cc) = uVar5 & 0xf | (uVar5 >> 8) << 4;
    uVar5 = *(uint *)(iVar3 + 0x16);
    *(byte *)(iVar7 + 0x3c1) = bVar4 | (byte)(uVar5 >> 1) & 8;
    *(uint *)(iVar7 + 0x3d0) = uVar5 & 0xf | (uVar5 >> 8) << 4;
    *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 1;
  }
  if ((uRam0000002c._2_1_ != '\0') &&
     (iVar3 = unaff_s5 * 0x5d8, (*(uint *)(iVar3 + 0x3e0) & 1) != 0)) {
    iVar7 = _LVL105();
    if (iVar7 != 0) {
      *(undefined2 *)(iVar3 + 0x358) = *(undefined2 *)(iVar7 + 2);
      *(undefined *)(iVar3 + 0x35a) = *(undefined *)(iVar7 + 4);
      iVar3 = 0;
      do {
        *(undefined *)(iVar3 + iVar1 + 0x35b) = *(undefined *)(iVar7 + 5 + iVar3);
        iVar3 += 1;
      } while (iVar3 != 0x10);
      iVar1 = unaff_s5 * 0x5d8;
      *(undefined2 *)(iVar1 + 0x36c) = *(undefined2 *)(iVar7 + 0x15);
      *(uint *)(iVar1 + 0x370) = (uint)*(ushort *)(iVar7 + 0x17);
      *(undefined *)(iVar1 + 0x374) = *(undefined *)(iVar7 + 0x1b);
      *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 2;
    }
    _LVL120();
  }
  iVar1 = unaff_s5 * 0x5d8;
  cVar6 = *(char *)(iRam00000000 + 0x140);
  *(char *)(iVar1 + 1000) = cVar6;
  if ((cVar6 != '\0') && (-1 < *(int *)(iVar1 + 0x3e0))) {
    FUN_000106d0();
    _L0();
    FUN_000106fa();
    _L0();
    _L0();
    *(undefined *)(iVar1 + 0x411) = 0;
    *(undefined *)(iVar1 + 0x3ef) = 0;
    *(undefined *)(iVar1 + 0x3f0) = 0;
    iVar3 = FUN_00010742();
    if (iVar3 != 0) {
      *(char *)(iVar1 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
      _L0();
      uVar2 = FUN_0001077e();
      *(char *)(iVar1 + 0x411) = (char)uVar2;
      FUN_000107ac();
      FUN_000107d6();
      FUN_000107ea();
    }
    iVar1 = FUN_00010800();
    if (iVar1 != 0) {
      iVar3 = unaff_s5 * 0x5d8;
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
      if (*(char *)(iVar3 + 0x411) == '\0') {
        *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
        _L0();
        uVar2 = FUN_00010846();
        *(char *)(iVar3 + 0x411) = (char)uVar2;
      }
    }
    iVar1 = iRam00000000;
    iVar3 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iRam00000000 + 0x30) = 0;
    if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
      if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) == 0) {
        uVar2 = 2;
        goto _L0;
      }
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
    }
    else {
      uVar2 = 9;
_L0:
      *(undefined4 *)(iVar1 + 0x30) = uVar2;
    }
    FUN_00010928();
    *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + 0x411);
    FUN_0001095e();
  }
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
_L0:
  if (*(char *)(unaff_s8 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0xd) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _L0(undefined3 uRam0000002c)

{
  char cVar1;
  int unaff_s0;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s8;
  int in_stack_00000004;
  
  uVar2 = _L0(uRam0000002c);
  unaff_s8[0xb] = uVar2;
  if (*(char *)((int)unaff_s8 + 0x35) < *(char *)(unaff_s0 + 0x18)) {
    *(char *)((int)unaff_s8 + 0x35) = *(char *)(unaff_s0 + 0x18);
  }
  if (*(char *)(unaff_s4 + 0x16a) == '\0') goto _L0;
  iVar7 = unaff_s5 * 0x5d8;
  *(undefined2 *)(iVar7 + 0x3a0) = *(undefined2 *)(unaff_s8 + 10);
  *(undefined4 *)(iVar7 + 0x378) = *unaff_s8;
  *(undefined2 *)(iVar7 + 0x37c) = *(undefined2 *)(unaff_s8 + 1);
  *(undefined2 *)(iVar7 + 0x3ae) = *(undefined2 *)((int)unaff_s8 + 0x32);
  *(undefined2 *)(iVar7 + 0x3ac) = *(undefined2 *)(unaff_s8 + 0xc);
  _L0(uRam0000002c);
  uVar2 = unaff_s8[0xb];
  *(undefined4 *)(iVar7 + 0x3e0) = 0;
  *(undefined4 *)(iVar7 + 0x3a4) = uVar2;
  *(undefined *)(iVar7 + 0x3d5) = *(undefined *)((int)unaff_s8 + 0x36);
  *(undefined *)(iVar7 + 0x3d6) = *(undefined *)((int)unaff_s8 + 0x37);
  _L0(uRam0000002c);
  if (*(char *)(unaff_s8[0xb] + 2) == '\0') {
    uVar3 = FUN_00010498(uRam0000002c);
    if ((uVar3 & 0xf) == 0) {
      *(undefined *)(iVar7 + 0x3d7) = 1;
    }
    else {
      uVar2 = _L0(uRam0000002c);
      *(char *)(iVar7 + 0x3d7) = '\x1f' - (char)uVar2;
    }
  }
  iVar4 = FUN_000104c6(uRam0000002c);
  if (iVar4 == 0) {
    iVar4 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iVar4 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3d0) = 0xa43;
  }
  else {
    iVar6 = unaff_s5 * 0x5d8;
    *(undefined *)(iVar6 + 0x3c0) = *(undefined *)(iVar4 + 8);
    *(ushort *)(iVar6 + 0x3ae) = *(ushort *)(iVar6 + 0x3ae) | 0x200;
    uVar3 = *(uint *)(iVar4 + 10);
    bVar5 = (byte)(uVar3 >> 3) & 2;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c8) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0xe);
    bVar5 = (byte)(uVar3 >> 4) & 1 | bVar5;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c4) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0x12);
    bVar5 |= (byte)(uVar3 >> 2) & 4;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3cc) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    uVar3 = *(uint *)(iVar4 + 0x16);
    *(byte *)(iVar6 + 0x3c1) = bVar5 | (byte)(uVar3 >> 1) & 8;
    *(uint *)(iVar6 + 0x3d0) = uVar3 & 0xf | (uVar3 >> 8) << 4;
    *(uint *)(iVar6 + 0x3e0) = *(uint *)(iVar6 + 0x3e0) | 1;
  }
  if ((uRam0000002c._2_1_ != '\0') &&
     (iVar4 = unaff_s5 * 0x5d8, (*(uint *)(iVar4 + 0x3e0) & 1) != 0)) {
    iVar6 = _LVL105();
    if (iVar6 != 0) {
      *(undefined2 *)(iVar4 + 0x358) = *(undefined2 *)(iVar6 + 2);
      *(undefined *)(iVar4 + 0x35a) = *(undefined *)(iVar6 + 4);
      iVar4 = 0;
      do {
        *(undefined *)(iVar4 + iVar7 + 0x35b) = *(undefined *)(iVar6 + 5 + iVar4);
        iVar4 += 1;
      } while (iVar4 != 0x10);
      iVar7 = unaff_s5 * 0x5d8;
      *(undefined2 *)(iVar7 + 0x36c) = *(undefined2 *)(iVar6 + 0x15);
      *(uint *)(iVar7 + 0x370) = (uint)*(ushort *)(iVar6 + 0x17);
      *(undefined *)(iVar7 + 0x374) = *(undefined *)(iVar6 + 0x1b);
      *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 2;
    }
    _LVL120();
  }
  iVar7 = unaff_s5 * 0x5d8;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  *(char *)(iVar7 + 1000) = cVar1;
  if ((cVar1 != '\0') && (-1 < *(int *)(iVar7 + 0x3e0))) {
    FUN_000106d0();
    _L0();
    FUN_000106fa();
    _L0();
    _L0();
    *(undefined *)(iVar7 + 0x411) = 0;
    *(undefined *)(iVar7 + 0x3ef) = 0;
    *(undefined *)(iVar7 + 0x3f0) = 0;
    iVar4 = FUN_00010742();
    if (iVar4 != 0) {
      *(char *)(iVar7 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
      _L0();
      uVar2 = FUN_0001077e();
      *(char *)(iVar7 + 0x411) = (char)uVar2;
      FUN_000107ac();
      FUN_000107d6();
      FUN_000107ea();
    }
    iVar7 = FUN_00010800();
    if (iVar7 != 0) {
      iVar4 = unaff_s5 * 0x5d8;
      *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 8;
      if (*(char *)(iVar4 + 0x411) == '\0') {
        *(char *)(iVar4 + 0x411) = *(char *)(iVar7 + 1) + '\x02';
        _L0();
        uVar2 = FUN_00010846();
        *(char *)(iVar4 + 0x411) = (char)uVar2;
      }
    }
    iVar7 = iRam00000000;
    iVar4 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iRam00000000 + 0x30) = 0;
    if ((*(uint *)(iVar4 + 1000) & 0x12800) == 0) {
      if ((*(ushort *)(iVar4 + 0x3ae) & 0x10) == 0) {
        uVar2 = 2;
        goto _L0;
      }
      *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 2;
      *(undefined *)(iVar7 + 0x3b) = 1;
    }
    else {
      uVar2 = 9;
_L0:
      *(undefined4 *)(iVar7 + 0x30) = uVar2;
    }
    FUN_00010928();
    *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + 0x411);
    FUN_0001095e();
  }
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
_L0:
  if (*(char *)(unaff_s8 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0xd) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _L0(undefined3 uRam0000002c)

{
  char cVar1;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000004;
  int *piStack00000018;
  
  _L0(uRam0000002c);
  uVar5 = *(undefined4 *)(unaff_s8 + 0x2c);
  *(undefined4 *)(unaff_s7 + 0x3e0) = 0;
  *(undefined4 *)(unaff_s7 + 0x3a4) = uVar5;
  *(undefined *)(unaff_s7 + 0x3d5) = *(undefined *)(unaff_s8 + 0x36);
  *(undefined *)(unaff_s7 + 0x3d6) = *(undefined *)(unaff_s8 + 0x37);
  _L0(uRam0000002c);
  if (*(char *)(*(int *)(unaff_s8 + 0x2c) + 2) == '\0') {
    uVar2 = FUN_00010498(uRam0000002c);
    if ((uVar2 & 0xf) == 0) {
      *(undefined *)(unaff_s7 + 0x3d7) = 1;
    }
    else {
      uVar5 = _L0(uRam0000002c);
      *(char *)(unaff_s7 + 0x3d7) = '\x1f' - (char)uVar5;
    }
  }
  iVar3 = FUN_000104c6(uRam0000002c);
  if (iVar3 == 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined4 *)(iVar3 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3d0) = 0xa43;
  }
  else {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined *)(iVar6 + 0x3c0) = *(undefined *)(iVar3 + 8);
    *(ushort *)(iVar6 + 0x3ae) = *(ushort *)(iVar6 + 0x3ae) | 0x200;
    uVar2 = *(uint *)(iVar3 + 10);
    bVar4 = (byte)(uVar2 >> 3) & 2;
    *(byte *)(iVar6 + 0x3c1) = bVar4;
    *(uint *)(iVar6 + 0x3c8) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar3 + 0xe);
    bVar4 = (byte)(uVar2 >> 4) & 1 | bVar4;
    *(byte *)(iVar6 + 0x3c1) = bVar4;
    *(uint *)(iVar6 + 0x3c4) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar3 + 0x12);
    bVar4 |= (byte)(uVar2 >> 2) & 4;
    *(byte *)(iVar6 + 0x3c1) = bVar4;
    *(uint *)(iVar6 + 0x3cc) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar3 + 0x16);
    *(byte *)(iVar6 + 0x3c1) = bVar4 | (byte)(uVar2 >> 1) & 8;
    *(uint *)(iVar6 + 0x3d0) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    *(uint *)(iVar6 + 0x3e0) = *(uint *)(iVar6 + 0x3e0) | 1;
  }
  if ((uRam0000002c._2_1_ != '\0') &&
     (iVar3 = unaff_s5 * 0x5d8 + unaff_s1, (*(uint *)(iVar3 + 0x3e0) & 1) != 0)) {
    iVar6 = _LVL105();
    if (iVar6 != 0) {
      *(undefined2 *)(iVar3 + 0x358) = *(undefined2 *)(iVar6 + 2);
      *(undefined *)(iVar3 + 0x35a) = *(undefined *)(iVar6 + 4);
      iVar3 = 0;
      do {
        *(undefined *)(iVar3 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar6 + 5 + iVar3);
        iVar3 += 1;
      } while (iVar3 != 0x10);
      iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
      *(undefined2 *)(iVar3 + 0x36c) = *(undefined2 *)(iVar6 + 0x15);
      *(uint *)(iVar3 + 0x370) = (uint)*(ushort *)(iVar6 + 0x17);
      *(undefined *)(iVar3 + 0x374) = *(undefined *)(iVar6 + 0x1b);
      *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 2;
    }
    _LVL120();
  }
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar3 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar3 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar3 + 0x3e0) < 0)) goto _L0;
  FUN_000106d0();
  _L0();
  FUN_000106fa();
  _L0();
  _L0();
  *(undefined *)(iVar3 + 0x411) = 0;
  *(undefined *)(iVar3 + 0x3ef) = 0;
  *(undefined *)(iVar3 + 0x3f0) = 0;
  iVar6 = FUN_00010742();
  if (iVar6 != 0) {
    *(char *)(iVar3 + 0x411) = *(char *)(iVar6 + 1) + '\x02';
    _L0();
    uVar5 = FUN_0001077e();
    *(char *)(iVar3 + 0x411) = (char)uVar5;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar3 = FUN_00010800();
  if (iVar3 != 0) {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 8;
    if (*(char *)(iVar6 + 0x411) == '\0') {
      *(char *)(iVar6 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
      _L0();
      uVar5 = FUN_00010846();
      *(char *)(iVar6 + 0x411) = (char)uVar5;
    }
  }
  iVar3 = *piStack00000018;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar6 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar6 + 0x3ae) & 0x10) == 0) {
      uVar5 = 2;
      goto _L0;
    }
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 2;
    *(undefined *)(iVar3 + 0x3b) = 1;
  }
  else {
    uVar5 = 9;
_L0:
    *(undefined4 *)(iVar3 + 0x30) = uVar5;
  }
  FUN_00010928();
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
_L0:
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar3 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _L0(undefined3 uRam0000002c)

{
  char cVar1;
  int unaff_s1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000004;
  int *piStack00000018;
  
  _L0(uRam0000002c);
  if (*(char *)(*(int *)(unaff_s8 + 0x2c) + 2) == '\0') {
    uVar2 = FUN_00010498(uRam0000002c);
    if ((uVar2 & 0xf) == 0) {
      *(undefined *)(unaff_s7 + 0x3d7) = 1;
    }
    else {
      uVar3 = _L0(uRam0000002c);
      *(char *)(unaff_s7 + 0x3d7) = '\x1f' - (char)uVar3;
    }
  }
  iVar4 = FUN_000104c6(uRam0000002c);
  if (iVar4 == 0) {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined4 *)(iVar4 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3d0) = 0xa43;
  }
  else {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined *)(iVar6 + 0x3c0) = *(undefined *)(iVar4 + 8);
    *(ushort *)(iVar6 + 0x3ae) = *(ushort *)(iVar6 + 0x3ae) | 0x200;
    uVar2 = *(uint *)(iVar4 + 10);
    bVar5 = (byte)(uVar2 >> 3) & 2;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c8) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar4 + 0xe);
    bVar5 = (byte)(uVar2 >> 4) & 1 | bVar5;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c4) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar4 + 0x12);
    bVar5 |= (byte)(uVar2 >> 2) & 4;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3cc) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar4 + 0x16);
    *(byte *)(iVar6 + 0x3c1) = bVar5 | (byte)(uVar2 >> 1) & 8;
    *(uint *)(iVar6 + 0x3d0) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    *(uint *)(iVar6 + 0x3e0) = *(uint *)(iVar6 + 0x3e0) | 1;
  }
  if ((uRam0000002c._2_1_ != '\0') &&
     (iVar4 = unaff_s5 * 0x5d8 + unaff_s1, (*(uint *)(iVar4 + 0x3e0) & 1) != 0)) {
    iVar6 = _LVL105();
    if (iVar6 != 0) {
      *(undefined2 *)(iVar4 + 0x358) = *(undefined2 *)(iVar6 + 2);
      *(undefined *)(iVar4 + 0x35a) = *(undefined *)(iVar6 + 4);
      iVar4 = 0;
      do {
        *(undefined *)(iVar4 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar6 + 5 + iVar4);
        iVar4 += 1;
      } while (iVar4 != 0x10);
      iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
      *(undefined2 *)(iVar4 + 0x36c) = *(undefined2 *)(iVar6 + 0x15);
      *(uint *)(iVar4 + 0x370) = (uint)*(ushort *)(iVar6 + 0x17);
      *(undefined *)(iVar4 + 0x374) = *(undefined *)(iVar6 + 0x1b);
      *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 2;
    }
    _LVL120();
  }
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar4 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar4 + 0x3e0) < 0)) goto _L0;
  FUN_000106d0();
  _L0();
  FUN_000106fa();
  _L0();
  _L0();
  *(undefined *)(iVar4 + 0x411) = 0;
  *(undefined *)(iVar4 + 0x3ef) = 0;
  *(undefined *)(iVar4 + 0x3f0) = 0;
  iVar6 = FUN_00010742();
  if (iVar6 != 0) {
    *(char *)(iVar4 + 0x411) = *(char *)(iVar6 + 1) + '\x02';
    _L0();
    uVar3 = FUN_0001077e();
    *(char *)(iVar4 + 0x411) = (char)uVar3;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar4 = FUN_00010800();
  if (iVar4 != 0) {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 8;
    if (*(char *)(iVar6 + 0x411) == '\0') {
      *(char *)(iVar6 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
      _L0();
      uVar3 = FUN_00010846();
      *(char *)(iVar6 + 0x411) = (char)uVar3;
    }
  }
  iVar4 = *piStack00000018;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar6 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar6 + 0x3ae) & 0x10) == 0) {
      uVar3 = 2;
      goto _L0;
    }
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 2;
    *(undefined *)(iVar4 + 0x3b) = 1;
  }
  else {
    uVar3 = 9;
_L0:
    *(undefined4 *)(iVar4 + 0x30) = uVar3;
  }
  FUN_00010928();
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
_L0:
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_00010498(undefined3 param_1)

{
  char cVar1;
  int unaff_s1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000004;
  int *piStack00000018;
  
  uVar2 = FUN_00010498(param_1);
  if ((uVar2 & 0xf) == 0) {
    *(undefined *)(unaff_s7 + 0x3d7) = 1;
  }
  else {
    uVar3 = _L0(param_1);
    *(char *)(unaff_s7 + 0x3d7) = '\x1f' - (char)uVar3;
  }
  iVar4 = FUN_000104c6(param_1);
  if (iVar4 == 0) {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined4 *)(iVar4 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3d0) = 0xa43;
  }
  else {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined *)(iVar6 + 0x3c0) = *(undefined *)(iVar4 + 8);
    *(ushort *)(iVar6 + 0x3ae) = *(ushort *)(iVar6 + 0x3ae) | 0x200;
    uVar2 = *(uint *)(iVar4 + 10);
    bVar5 = (byte)(uVar2 >> 3) & 2;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c8) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar4 + 0xe);
    bVar5 = (byte)(uVar2 >> 4) & 1 | bVar5;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c4) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar4 + 0x12);
    bVar5 |= (byte)(uVar2 >> 2) & 4;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3cc) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar4 + 0x16);
    *(byte *)(iVar6 + 0x3c1) = bVar5 | (byte)(uVar2 >> 1) & 8;
    *(uint *)(iVar6 + 0x3d0) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    *(uint *)(iVar6 + 0x3e0) = *(uint *)(iVar6 + 0x3e0) | 1;
  }
  if ((param_1._2_1_ != '\0') &&
     (iVar4 = unaff_s5 * 0x5d8 + unaff_s1, (*(uint *)(iVar4 + 0x3e0) & 1) != 0)) {
    iVar6 = _LVL105();
    if (iVar6 != 0) {
      *(undefined2 *)(iVar4 + 0x358) = *(undefined2 *)(iVar6 + 2);
      *(undefined *)(iVar4 + 0x35a) = *(undefined *)(iVar6 + 4);
      iVar4 = 0;
      do {
        *(undefined *)(iVar4 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar6 + 5 + iVar4);
        iVar4 += 1;
      } while (iVar4 != 0x10);
      iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
      *(undefined2 *)(iVar4 + 0x36c) = *(undefined2 *)(iVar6 + 0x15);
      *(uint *)(iVar4 + 0x370) = (uint)*(ushort *)(iVar6 + 0x17);
      *(undefined *)(iVar4 + 0x374) = *(undefined *)(iVar6 + 0x1b);
      *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 2;
    }
    _LVL120();
  }
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar4 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar4 + 0x3e0) < 0)) goto _L0;
  FUN_000106d0();
  _L0();
  FUN_000106fa();
  _L0();
  _L0();
  *(undefined *)(iVar4 + 0x411) = 0;
  *(undefined *)(iVar4 + 0x3ef) = 0;
  *(undefined *)(iVar4 + 0x3f0) = 0;
  iVar6 = FUN_00010742();
  if (iVar6 != 0) {
    *(char *)(iVar4 + 0x411) = *(char *)(iVar6 + 1) + '\x02';
    _L0();
    uVar3 = FUN_0001077e();
    *(char *)(iVar4 + 0x411) = (char)uVar3;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar4 = FUN_00010800();
  if (iVar4 != 0) {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 8;
    if (*(char *)(iVar6 + 0x411) == '\0') {
      *(char *)(iVar6 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
      _L0();
      uVar3 = FUN_00010846();
      *(char *)(iVar6 + 0x411) = (char)uVar3;
    }
  }
  iVar4 = *piStack00000018;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar6 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar6 + 0x3ae) & 0x10) == 0) {
      uVar3 = 2;
      goto _L0;
    }
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 2;
    *(undefined *)(iVar4 + 0x3b) = 1;
  }
  else {
    uVar3 = 9;
_L0:
    *(undefined4 *)(iVar4 + 0x30) = uVar3;
  }
  FUN_00010928();
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
_L0:
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _L0(undefined3 param_1)

{
  char cVar1;
  uint uVar2;
  int unaff_s1;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000004;
  int *piStack00000018;
  
  uVar3 = _L0(param_1);
  *(char *)(unaff_s7 + 0x3d7) = '\x1f' - (char)uVar3;
  iVar4 = FUN_000104c6(param_1);
  if (iVar4 == 0) {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined4 *)(iVar4 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar4 + 0x3d0) = 0xa43;
  }
  else {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined *)(iVar6 + 0x3c0) = *(undefined *)(iVar4 + 8);
    *(ushort *)(iVar6 + 0x3ae) = *(ushort *)(iVar6 + 0x3ae) | 0x200;
    uVar2 = *(uint *)(iVar4 + 10);
    bVar5 = (byte)(uVar2 >> 3) & 2;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c8) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar4 + 0xe);
    bVar5 = (byte)(uVar2 >> 4) & 1 | bVar5;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c4) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar4 + 0x12);
    bVar5 |= (byte)(uVar2 >> 2) & 4;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3cc) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar4 + 0x16);
    *(byte *)(iVar6 + 0x3c1) = bVar5 | (byte)(uVar2 >> 1) & 8;
    *(uint *)(iVar6 + 0x3d0) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    *(uint *)(iVar6 + 0x3e0) = *(uint *)(iVar6 + 0x3e0) | 1;
  }
  if ((param_1._2_1_ != '\0') &&
     (iVar4 = unaff_s5 * 0x5d8 + unaff_s1, (*(uint *)(iVar4 + 0x3e0) & 1) != 0)) {
    iVar6 = _LVL105();
    if (iVar6 != 0) {
      *(undefined2 *)(iVar4 + 0x358) = *(undefined2 *)(iVar6 + 2);
      *(undefined *)(iVar4 + 0x35a) = *(undefined *)(iVar6 + 4);
      iVar4 = 0;
      do {
        *(undefined *)(iVar4 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar6 + 5 + iVar4);
        iVar4 += 1;
      } while (iVar4 != 0x10);
      iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
      *(undefined2 *)(iVar4 + 0x36c) = *(undefined2 *)(iVar6 + 0x15);
      *(uint *)(iVar4 + 0x370) = (uint)*(ushort *)(iVar6 + 0x17);
      *(undefined *)(iVar4 + 0x374) = *(undefined *)(iVar6 + 0x1b);
      *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 2;
    }
    _LVL120();
  }
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar4 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar4 + 0x3e0) < 0)) goto _L0;
  FUN_000106d0();
  _L0();
  FUN_000106fa();
  _L0();
  _L0();
  *(undefined *)(iVar4 + 0x411) = 0;
  *(undefined *)(iVar4 + 0x3ef) = 0;
  *(undefined *)(iVar4 + 0x3f0) = 0;
  iVar6 = FUN_00010742();
  if (iVar6 != 0) {
    *(char *)(iVar4 + 0x411) = *(char *)(iVar6 + 1) + '\x02';
    _L0();
    uVar3 = FUN_0001077e();
    *(char *)(iVar4 + 0x411) = (char)uVar3;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar4 = FUN_00010800();
  if (iVar4 != 0) {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 8;
    if (*(char *)(iVar6 + 0x411) == '\0') {
      *(char *)(iVar6 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
      _L0();
      uVar3 = FUN_00010846();
      *(char *)(iVar6 + 0x411) = (char)uVar3;
    }
  }
  iVar4 = *piStack00000018;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar6 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar6 + 0x3ae) & 0x10) == 0) {
      uVar3 = 2;
      goto _L0;
    }
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 2;
    *(undefined *)(iVar4 + 0x3b) = 1;
  }
  else {
    uVar3 = 9;
_L0:
    *(undefined4 *)(iVar4 + 0x30) = uVar3;
  }
  FUN_00010928();
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
_L0:
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_000104c6(undefined3 param_1)

{
  char cVar1;
  uint uVar2;
  int unaff_s1;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  int *piStack00000018;
  
  iVar3 = FUN_000104c6(param_1);
  if (iVar3 == 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined4 *)(iVar3 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3d0) = 0xa43;
  }
  else {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined *)(iVar6 + 0x3c0) = *(undefined *)(iVar3 + 8);
    *(ushort *)(iVar6 + 0x3ae) = *(ushort *)(iVar6 + 0x3ae) | 0x200;
    uVar2 = *(uint *)(iVar3 + 10);
    bVar5 = (byte)(uVar2 >> 3) & 2;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c8) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar3 + 0xe);
    bVar5 = (byte)(uVar2 >> 4) & 1 | bVar5;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c4) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar3 + 0x12);
    bVar5 |= (byte)(uVar2 >> 2) & 4;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3cc) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar3 + 0x16);
    *(byte *)(iVar6 + 0x3c1) = bVar5 | (byte)(uVar2 >> 1) & 8;
    *(uint *)(iVar6 + 0x3d0) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    *(uint *)(iVar6 + 0x3e0) = *(uint *)(iVar6 + 0x3e0) | 1;
  }
  if ((param_1._2_1_ != '\0') &&
     (iVar3 = unaff_s5 * 0x5d8 + unaff_s1, (*(uint *)(iVar3 + 0x3e0) & 1) != 0)) {
    iVar6 = _LVL105();
    if (iVar6 != 0) {
      *(undefined2 *)(iVar3 + 0x358) = *(undefined2 *)(iVar6 + 2);
      *(undefined *)(iVar3 + 0x35a) = *(undefined *)(iVar6 + 4);
      iVar3 = 0;
      do {
        *(undefined *)(iVar3 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar6 + 5 + iVar3);
        iVar3 += 1;
      } while (iVar3 != 0x10);
      iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
      *(undefined2 *)(iVar3 + 0x36c) = *(undefined2 *)(iVar6 + 0x15);
      *(uint *)(iVar3 + 0x370) = (uint)*(ushort *)(iVar6 + 0x17);
      *(undefined *)(iVar3 + 0x374) = *(undefined *)(iVar6 + 0x1b);
      *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 2;
    }
    _LVL120();
  }
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar3 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar3 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar3 + 0x3e0) < 0)) goto _L0;
  FUN_000106d0();
  _L0();
  FUN_000106fa();
  _L0();
  _L0();
  *(undefined *)(iVar3 + 0x411) = 0;
  *(undefined *)(iVar3 + 0x3ef) = 0;
  *(undefined *)(iVar3 + 0x3f0) = 0;
  iVar6 = FUN_00010742();
  if (iVar6 != 0) {
    *(char *)(iVar3 + 0x411) = *(char *)(iVar6 + 1) + '\x02';
    _L0();
    uVar4 = FUN_0001077e();
    *(char *)(iVar3 + 0x411) = (char)uVar4;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar3 = FUN_00010800();
  if (iVar3 != 0) {
    iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 8;
    if (*(char *)(iVar6 + 0x411) == '\0') {
      *(char *)(iVar6 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
      _L0();
      uVar4 = FUN_00010846();
      *(char *)(iVar6 + 0x411) = (char)uVar4;
    }
  }
  iVar3 = *piStack00000018;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  iVar6 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar6 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar6 + 0x3ae) & 0x10) == 0) {
      uVar4 = 2;
      goto _L0;
    }
    *(byte *)(iVar6 + 0x3e9) = *(byte *)(iVar6 + 0x3e9) | 2;
    *(undefined *)(iVar3 + 0x3b) = 1;
  }
  else {
    uVar4 = 9;
_L0:
    *(undefined4 *)(iVar3 + 0x30) = uVar4;
  }
  FUN_00010928();
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
_L0:
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar3 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar3 + 0x3e0) = *(uint *)(iVar3 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _LVL105(void)

{
  char cVar1;
  int unaff_s1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000004;
  int *piStack00000018;
  
  iVar2 = _LVL105();
  if (iVar2 != 0) {
    *(undefined2 *)(unaff_s7 + 0x358) = *(undefined2 *)(iVar2 + 2);
    *(undefined *)(unaff_s7 + 0x35a) = *(undefined *)(iVar2 + 4);
    iVar4 = 0;
    do {
      *(undefined *)(iVar4 + unaff_s3 + 0x35b + unaff_s1) = *(undefined *)(iVar2 + 5 + iVar4);
      iVar4 += 1;
    } while (iVar4 != 0x10);
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    *(undefined2 *)(iVar4 + 0x36c) = *(undefined2 *)(iVar2 + 0x15);
    *(uint *)(iVar4 + 0x370) = (uint)*(ushort *)(iVar2 + 0x17);
    *(undefined *)(iVar4 + 0x374) = *(undefined *)(iVar2 + 0x1b);
    *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 2;
  }
  _LVL120();
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar2 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar2 + 0x3e0) < 0)) goto _L0;
  FUN_000106d0();
  _L0();
  FUN_000106fa();
  _L0();
  _L0();
  *(undefined *)(iVar2 + 0x411) = 0;
  *(undefined *)(iVar2 + 0x3ef) = 0;
  *(undefined *)(iVar2 + 0x3f0) = 0;
  iVar4 = FUN_00010742();
  if (iVar4 != 0) {
    *(char *)(iVar2 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
    _L0();
    uVar3 = FUN_0001077e();
    *(char *)(iVar2 + 0x411) = (char)uVar3;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar2 = FUN_00010800();
  if (iVar2 != 0) {
    iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 8;
    if (*(char *)(iVar4 + 0x411) == '\0') {
      *(char *)(iVar4 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0();
      uVar3 = FUN_00010846();
      *(char *)(iVar4 + 0x411) = (char)uVar3;
    }
  }
  iVar2 = *piStack00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar4 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar4 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar4 + 0x3ae) & 0x10) == 0) {
      uVar3 = 2;
      goto _L0;
    }
    *(byte *)(iVar4 + 0x3e9) = *(byte *)(iVar4 + 0x3e9) | 2;
    *(undefined *)(iVar2 + 0x3b) = 1;
  }
  else {
    uVar3 = 9;
_L0:
    *(undefined4 *)(iVar2 + 0x30) = uVar3;
  }
  FUN_00010928();
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
_L0:
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _LVL120(void)

{
  char cVar1;
  int unaff_s1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int iVar4;
  int in_stack_00000004;
  int *piStack00000018;
  
  _LVL120();
  piStack00000018 = (int *)0x0;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(char *)(iVar4 + 1000) = cVar1;
  if ((cVar1 == '\0') || (*(int *)(iVar4 + 0x3e0) < 0)) goto _L0;
  FUN_000106d0();
  _L0();
  FUN_000106fa();
  _L0();
  _L0();
  *(undefined *)(iVar4 + 0x411) = 0;
  *(undefined *)(iVar4 + 0x3ef) = 0;
  *(undefined *)(iVar4 + 0x3f0) = 0;
  iVar2 = FUN_00010742();
  if (iVar2 != 0) {
    *(char *)(iVar4 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
    _L0();
    uVar3 = FUN_0001077e();
    *(char *)(iVar4 + 0x411) = (char)uVar3;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar4 = FUN_00010800();
  if (iVar4 != 0) {
    iVar2 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar2 + 0x3e9) = *(byte *)(iVar2 + 0x3e9) | 8;
    if (*(char *)(iVar2 + 0x411) == '\0') {
      *(char *)(iVar2 + 0x411) = *(char *)(iVar4 + 1) + '\x02';
      _L0();
      uVar3 = FUN_00010846();
      *(char *)(iVar2 + 0x411) = (char)uVar3;
    }
  }
  iVar4 = *piStack00000018;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  iVar2 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar2 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar2 + 0x3ae) & 0x10) == 0) {
      uVar3 = 2;
      goto _L0;
    }
    *(byte *)(iVar2 + 0x3e9) = *(byte *)(iVar2 + 0x3e9) | 2;
    *(undefined *)(iVar4 + 0x3b) = 1;
  }
  else {
    uVar3 = 9;
_L0:
    *(undefined4 *)(iVar4 + 0x30) = uVar3;
  }
  FUN_00010928();
  *(ushort *)(*piStack00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
_L0:
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar4 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar4 + 0x3e0) = *(uint *)(iVar4 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_000106d0(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s3;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  int iStack0000000c;
  int iStack00000010;
  int iStack00000014;
  int *in_stack_00000018;
  
  FUN_000106d0();
  iStack0000000c = unaff_s3 + 0x3ed + unaff_s1;
  _L0();
  FUN_000106fa();
  iStack00000010 = unaff_s3 + 0x3eb + unaff_s1;
  _L0();
  iStack00000014 = unaff_s3 + 0x3ec + unaff_s1;
  _L0();
  *(undefined *)(unaff_s9 + 0x411) = 0;
  *(undefined *)(unaff_s9 + 0x3ef) = 0;
  *(undefined *)(unaff_s9 + 0x3f0) = 0;
  iVar1 = FUN_00010742();
  if (iVar1 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
    _L0();
    uVar2 = FUN_0001077e();
    *(char *)(unaff_s9 + 0x411) = (char)uVar2;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar1 = FUN_00010800();
  if (iVar1 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
      _L0();
      uVar2 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar2;
    }
  }
  iVar1 = *in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
      goto _L0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s3;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  int iStack00000010;
  int iStack00000014;
  int *in_stack_00000018;
  
  _L0();
  FUN_000106fa();
  iStack00000010 = unaff_s3 + 0x3eb + unaff_s1;
  _L0();
  iStack00000014 = unaff_s3 + 0x3ec + unaff_s1;
  _L0();
  *(undefined *)(unaff_s9 + 0x411) = 0;
  *(undefined *)(unaff_s9 + 0x3ef) = 0;
  *(undefined *)(unaff_s9 + 0x3f0) = 0;
  iVar1 = FUN_00010742();
  if (iVar1 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
    _L0();
    uVar2 = FUN_0001077e();
    *(char *)(unaff_s9 + 0x411) = (char)uVar2;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar1 = FUN_00010800();
  if (iVar1 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
      _L0();
      uVar2 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar2;
    }
  }
  iVar1 = *in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
      goto _L0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_000106fa(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s3;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  int iStack00000010;
  int iStack00000014;
  int *in_stack_00000018;
  
  FUN_000106fa();
  iStack00000010 = unaff_s3 + 0x3eb + unaff_s1;
  _L0();
  iStack00000014 = unaff_s3 + 0x3ec + unaff_s1;
  _L0();
  *(undefined *)(unaff_s9 + 0x411) = 0;
  *(undefined *)(unaff_s9 + 0x3ef) = 0;
  *(undefined *)(unaff_s9 + 0x3f0) = 0;
  iVar1 = FUN_00010742();
  if (iVar1 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
    _L0();
    uVar2 = FUN_0001077e();
    *(char *)(unaff_s9 + 0x411) = (char)uVar2;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar1 = FUN_00010800();
  if (iVar1 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
      _L0();
      uVar2 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar2;
    }
  }
  iVar1 = *in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
      goto _L0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s3;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  int iStack00000014;
  int *in_stack_00000018;
  
  _L0();
  iStack00000014 = unaff_s3 + 0x3ec + unaff_s1;
  _L0();
  *(undefined *)(unaff_s9 + 0x411) = 0;
  *(undefined *)(unaff_s9 + 0x3ef) = 0;
  *(undefined *)(unaff_s9 + 0x3f0) = 0;
  iVar1 = FUN_00010742();
  if (iVar1 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
    _L0();
    uVar2 = FUN_0001077e();
    *(char *)(unaff_s9 + 0x411) = (char)uVar2;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar1 = FUN_00010800();
  if (iVar1 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
      _L0();
      uVar2 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar2;
    }
  }
  iVar1 = *in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
      goto _L0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  _L0();
  *(undefined *)(unaff_s9 + 0x411) = 0;
  *(undefined *)(unaff_s9 + 0x3ef) = 0;
  *(undefined *)(unaff_s9 + 0x3f0) = 0;
  iVar1 = FUN_00010742();
  if (iVar1 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
    _L0();
    uVar2 = FUN_0001077e();
    *(char *)(unaff_s9 + 0x411) = (char)uVar2;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar1 = FUN_00010800();
  if (iVar1 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
      _L0();
      uVar2 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar2;
    }
  }
  iVar1 = *in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
      goto _L0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_00010742(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  iVar1 = FUN_00010742();
  if (iVar1 != 0) {
    *(char *)(unaff_s9 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
    _L0();
    uVar2 = FUN_0001077e();
    *(char *)(unaff_s9 + 0x411) = (char)uVar2;
    FUN_000107ac();
    FUN_000107d6();
    FUN_000107ea();
  }
  iVar1 = FUN_00010800();
  if (iVar1 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
      _L0();
      uVar2 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar2;
    }
  }
  iVar1 = *in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
      goto _L0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  _L0();
  uVar1 = FUN_0001077e();
  *(char *)(unaff_s9 + 0x411) = (char)uVar1;
  FUN_000107ac();
  FUN_000107d6();
  FUN_000107ea();
  iVar2 = FUN_00010800();
  if (iVar2 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0();
      uVar1 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar1;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_0001077e(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int unaff_s9;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  uVar1 = FUN_0001077e();
  *(char *)(unaff_s9 + 0x411) = (char)uVar1;
  FUN_000107ac();
  FUN_000107d6();
  FUN_000107ea();
  iVar2 = FUN_00010800();
  if (iVar2 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar2 + 1) + '\x02';
      _L0();
      uVar1 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar1;
    }
  }
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar1;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_000107ac(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  FUN_000107ac();
  FUN_000107d6();
  FUN_000107ea();
  iVar1 = FUN_00010800();
  if (iVar1 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
      _L0();
      uVar2 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar2;
    }
  }
  iVar1 = *in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
      goto _L0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_000107d6(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  FUN_000107d6();
  FUN_000107ea();
  iVar1 = FUN_00010800();
  if (iVar1 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
      _L0();
      uVar2 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar2;
    }
  }
  iVar1 = *in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
      goto _L0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_000107ea(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  FUN_000107ea();
  iVar1 = FUN_00010800();
  if (iVar1 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
      _L0();
      uVar2 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar2;
    }
  }
  iVar1 = *in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
      goto _L0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_00010800(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  iVar1 = FUN_00010800();
  if (iVar1 != 0) {
    iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
    *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
    if (*(char *)(iVar3 + 0x411) == '\0') {
      *(char *)(iVar3 + 0x411) = *(char *)(iVar1 + 1) + '\x02';
      _L0();
      uVar2 = FUN_00010846();
      *(char *)(iVar3 + 0x411) = (char)uVar2;
    }
  }
  iVar1 = *in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar1 + 0x3b) = 1;
      goto _L0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  _L0();
  uVar1 = FUN_00010846();
  *(char *)(unaff_s3 + 0x411) = (char)uVar1;
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar1;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_00010846(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  uVar1 = FUN_00010846();
  *(char *)(unaff_s3 + 0x411) = (char)uVar1;
  iVar2 = *in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar3 = unaff_s5 * 0x5d8 + unaff_s1;
  if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
    if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) != 0) {
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar2 + 0x3b) = 1;
      goto _L0;
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 9;
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar1;
_L0:
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + unaff_s1 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar2 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar2 + 0x3e0) = *(uint *)(iVar2 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 _LVL154(undefined3 uRam0000002c)

{
  char cVar1;
  int unaff_s0;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s8;
  int in_stack_00000004;
  
  uVar4 = _LVL154(uRam0000002c);
  unaff_s8[0xb] = uVar4;
  *(undefined *)((int)unaff_s8 + 0x35) = *(undefined *)(unaff_s0 + 0x18);
  if (*(char *)(unaff_s4 + 0x16a) == '\0') goto _L0;
  iVar7 = unaff_s5 * 0x5d8;
  *(undefined2 *)(iVar7 + 0x3a0) = *(undefined2 *)(unaff_s8 + 10);
  *(undefined4 *)(iVar7 + 0x378) = *unaff_s8;
  *(undefined2 *)(iVar7 + 0x37c) = *(undefined2 *)(unaff_s8 + 1);
  *(undefined2 *)(iVar7 + 0x3ae) = *(undefined2 *)((int)unaff_s8 + 0x32);
  *(undefined2 *)(iVar7 + 0x3ac) = *(undefined2 *)(unaff_s8 + 0xc);
  _L0(uRam0000002c);
  uVar4 = unaff_s8[0xb];
  *(undefined4 *)(iVar7 + 0x3e0) = 0;
  *(undefined4 *)(iVar7 + 0x3a4) = uVar4;
  *(undefined *)(iVar7 + 0x3d5) = *(undefined *)((int)unaff_s8 + 0x36);
  *(undefined *)(iVar7 + 0x3d6) = *(undefined *)((int)unaff_s8 + 0x37);
  _L0(uRam0000002c);
  if (*(char *)(unaff_s8[0xb] + 2) == '\0') {
    uVar2 = FUN_00010498(uRam0000002c);
    if ((uVar2 & 0xf) == 0) {
      *(undefined *)(iVar7 + 0x3d7) = 1;
    }
    else {
      uVar4 = _L0(uRam0000002c);
      *(char *)(iVar7 + 0x3d7) = '\x1f' - (char)uVar4;
    }
  }
  iVar3 = FUN_000104c6(uRam0000002c);
  if (iVar3 == 0) {
    iVar3 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iVar3 + 0x3c4) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3c8) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3cc) = 0xa43;
    *(undefined4 *)(iVar3 + 0x3d0) = 0xa43;
  }
  else {
    iVar6 = unaff_s5 * 0x5d8;
    *(undefined *)(iVar6 + 0x3c0) = *(undefined *)(iVar3 + 8);
    *(ushort *)(iVar6 + 0x3ae) = *(ushort *)(iVar6 + 0x3ae) | 0x200;
    uVar2 = *(uint *)(iVar3 + 10);
    bVar5 = (byte)(uVar2 >> 3) & 2;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c8) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar3 + 0xe);
    bVar5 = (byte)(uVar2 >> 4) & 1 | bVar5;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3c4) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar3 + 0x12);
    bVar5 |= (byte)(uVar2 >> 2) & 4;
    *(byte *)(iVar6 + 0x3c1) = bVar5;
    *(uint *)(iVar6 + 0x3cc) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    uVar2 = *(uint *)(iVar3 + 0x16);
    *(byte *)(iVar6 + 0x3c1) = bVar5 | (byte)(uVar2 >> 1) & 8;
    *(uint *)(iVar6 + 0x3d0) = uVar2 & 0xf | (uVar2 >> 8) << 4;
    *(uint *)(iVar6 + 0x3e0) = *(uint *)(iVar6 + 0x3e0) | 1;
  }
  if ((uRam0000002c._2_1_ != '\0') &&
     (iVar3 = unaff_s5 * 0x5d8, (*(uint *)(iVar3 + 0x3e0) & 1) != 0)) {
    iVar6 = _LVL105();
    if (iVar6 != 0) {
      *(undefined2 *)(iVar3 + 0x358) = *(undefined2 *)(iVar6 + 2);
      *(undefined *)(iVar3 + 0x35a) = *(undefined *)(iVar6 + 4);
      iVar3 = 0;
      do {
        *(undefined *)(iVar3 + iVar7 + 0x35b) = *(undefined *)(iVar6 + 5 + iVar3);
        iVar3 += 1;
      } while (iVar3 != 0x10);
      iVar7 = unaff_s5 * 0x5d8;
      *(undefined2 *)(iVar7 + 0x36c) = *(undefined2 *)(iVar6 + 0x15);
      *(uint *)(iVar7 + 0x370) = (uint)*(ushort *)(iVar6 + 0x17);
      *(undefined *)(iVar7 + 0x374) = *(undefined *)(iVar6 + 0x1b);
      *(uint *)(iVar7 + 0x3e0) = *(uint *)(iVar7 + 0x3e0) | 2;
    }
    _LVL120();
  }
  iVar7 = unaff_s5 * 0x5d8;
  cVar1 = *(char *)(iRam00000000 + 0x140);
  *(char *)(iVar7 + 1000) = cVar1;
  if ((cVar1 != '\0') && (-1 < *(int *)(iVar7 + 0x3e0))) {
    FUN_000106d0();
    _L0();
    FUN_000106fa();
    _L0();
    _L0();
    *(undefined *)(iVar7 + 0x411) = 0;
    *(undefined *)(iVar7 + 0x3ef) = 0;
    *(undefined *)(iVar7 + 0x3f0) = 0;
    iVar3 = FUN_00010742();
    if (iVar3 != 0) {
      *(char *)(iVar7 + 0x411) = *(char *)(iVar3 + 1) + '\x02';
      _L0();
      uVar4 = FUN_0001077e();
      *(char *)(iVar7 + 0x411) = (char)uVar4;
      FUN_000107ac();
      FUN_000107d6();
      FUN_000107ea();
    }
    iVar7 = FUN_00010800();
    if (iVar7 != 0) {
      iVar3 = unaff_s5 * 0x5d8;
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 8;
      if (*(char *)(iVar3 + 0x411) == '\0') {
        *(char *)(iVar3 + 0x411) = *(char *)(iVar7 + 1) + '\x02';
        _L0();
        uVar4 = FUN_00010846();
        *(char *)(iVar3 + 0x411) = (char)uVar4;
      }
    }
    iVar7 = iRam00000000;
    iVar3 = unaff_s5 * 0x5d8;
    *(undefined4 *)(iRam00000000 + 0x30) = 0;
    if ((*(uint *)(iVar3 + 1000) & 0x12800) == 0) {
      if ((*(ushort *)(iVar3 + 0x3ae) & 0x10) == 0) {
        uVar4 = 2;
        goto _L0;
      }
      *(byte *)(iVar3 + 0x3e9) = *(byte *)(iVar3 + 0x3e9) | 2;
      *(undefined *)(iVar7 + 0x3b) = 1;
    }
    else {
      uVar4 = 9;
_L0:
      *(undefined4 *)(iVar7 + 0x30) = uVar4;
    }
    FUN_00010928();
    *(ushort *)(iRam00000000 + 0x36) = (ushort)*(byte *)(unaff_s5 * 0x5d8 + 0x411);
    FUN_0001095e();
  }
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) = *(uint *)(unaff_s5 * 0x5d8 + 0x3e0) | 0x80000000;
_L0:
  if (*(char *)(unaff_s8 + 0xd) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0xd) = 1;
  }
  FUN_000109de();
  return 1;
}



undefined4 FUN_00010928(void)

{
  int unaff_s1;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int in_stack_00000004;
  int *in_stack_00000018;
  
  FUN_00010928();
  *(ushort *)(*in_stack_00000018 + 0x36) = (ushort)*(byte *)(unaff_s3 + 0x411);
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
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
  
  FUN_0001095e();
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
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
  
  FUN_0001096c();
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
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
  
  FUN_0001097a();
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
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
  
  FUN_00010988();
  FUN_00010996();
  iVar1 = unaff_s1 + unaff_s5 * 0x5d8;
  *(uint *)(iVar1 + 0x3e0) = *(uint *)(iVar1 + 0x3e0) | 0x80000000;
  if (*(char *)(unaff_s8 + 0x34) == '\0') {
    *(short *)(unaff_s4 + 0x14) = *(short *)(unaff_s4 + 0x14) + 1;
  }
  if (*(char *)(in_stack_00000004 + 0x150) != '\0') {
    *(undefined *)(unaff_s8 + 0x34) = 1;
  }
  FUN_000109de();
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
  FUN_000109de();
  return 1;
}



undefined4 FUN_000109de(void)

{
  FUN_000109de();
  return 1;
}



// DWARF DIE: 47e4

mac_scan_result * scanu_search_by_bssid(mac_addr *bssid)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4742

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
         (iVar2 = FUN_00010a6a(iVar1 + 0x1f), iVar2 == 0)) {
        cVar5 = *(char *)(iVar1 + 0x4d);
        pmVar4 = (mac_scan_result *)(iVar1 + 0x18);
        *idx = iVar3;
      }
      iVar3 += 1;
      iVar1 += 0x38;
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
      iVar1 = unaff_s0;
      unaff_s2 += 1;
      unaff_s0 = iVar1 + 0x38;
      if ((unaff_s2 == unaff_s6) || (*(char *)(iVar1 + 0x84) == '\0')) {
        return unaff_s3;
      }
    } while ((*(char *)(iVar1 + 0x85) <= unaff_s5) || (*unaff_s1 != *(char *)(iVar1 + 0x56)));
    param_1 = iVar1 + 0x57;
  } while( true );
}



// DWARF DIE: 46a4

void scanu_rm_exist_ssid(mac_ssid *ssid,int index)

{
  int extraout_a0;
  
  if ((index < 0) || (ssid == (mac_ssid *)0x0)) {
    return;
  }
  if (((*(char *)(index * 0x38 + 0x4c) != '\0') &&
      (ssid->length == *(uint8_t *)(index * 0x38 + 0x1e))) && (_LVL188(), extraout_a0 == 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _LVL188(void)

{
  int extraout_a0;
  
  _LVL188();
  if (extraout_a0 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 40fc

void scanu_scan_next(void)

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
    pbVar9 = (byte *)(iRam00000000 + 2);
    for (uVar12 = 0; (int)uVar12 < (int)(uint)*(byte *)(iRam00000000 + 0x14f); uVar12 += 1) {
      if (*pbVar9 == DAT_0000016b) goto _L0;
      pbVar9 = pbVar9 + 6;
    }
    if (*(byte *)(iRam00000000 + 0x14f) != uVar12) break;
    DAT_0000016b += 1;
  }
_L0:
  iVar4 = 0x800;
  FUN_00010b70(_DAT_00000010,_DAT_00000024,uRam0000002c);
  *(undefined *)(iVar4 + 0x14e) = *(undefined *)(iVar2 + 0x14e);
  *(undefined4 *)(iVar4 + 0x140) = *(undefined4 *)(iVar2 + 0x140);
  *(undefined2 *)(iVar4 + 0x144) = *(undefined2 *)(iVar2 + 0x144);
  *(undefined *)(iVar4 + 0x150) = *(undefined *)(iVar2 + 0x150);
  *(undefined *)(iVar4 + 0x151) = *(undefined *)(iVar2 + 0x151);
  for (; (int)uVar12 < (int)(uint)*(byte *)(iVar2 + 0x14f); uVar12 += 1) {
    if (*(byte *)(uVar12 * 6 + iVar2 + 2) == DAT_0000016b) {
      bVar1 = *(byte *)(iVar4 + 0x14f);
      FUN_00010d64((uint)bVar1 * 6 + iVar4,6,_DAT_00000010,_DAT_00000024,uRam0000002c);
      *(byte *)(iVar4 + 0x14f) = bVar1 + 1;
    }
  }
  iVar13 = 0xfc;
  for (iVar14 = 0; iVar14 < (int)(uint)*(byte *)(iVar2 + 0x150); iVar14 += 1) {
    FUN_00010d80(iVar4 + iVar13,iVar2 + iVar13,0x22,_DAT_00000010,_DAT_00000024,uRam0000002c);
    iVar13 += 0x22;
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
    iVar14 += 1;
    *puVar11 = *puVar10;
  } while (iVar14 != 8);
  puVar10 = &DAT_0000002e;
  if ((uVar12 != 0) && (DAT_00000010 == '\n')) {
    uVar5 = DAT_00000011 + 2 & 0xff;
    uVar3 = uVar5;
    iVar2 = 0;
    while( true ) {
      uVar3 -= 1;
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
      uVar3 -= 1;
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
    uVar5 = (byte)pcVar8[1] + 2 & 0xff;
    for (uVar3 = 0; uVar5 != uVar3; uVar3 += 1) {
      puVar10[uVar3] = pcVar8[uVar3];
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
    for (puVar10 = puVar10 + 2; puVar11 != puVar10; puVar10 = puVar10 + 1) {
      *puVar10 = *(undefined *)(iVar2 + 0xc);
      iVar2 = iVar2 + 1;
    }
  }
  if (uVar12 != 0) {
    uVar3 = 0;
    do {
      pcVar6 = pcVar8 + uVar3;
      pcVar7 = puVar10 + uVar3;
      uVar3 += 1;
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



void FUN_00010b70(undefined2 uRam00000010,undefined2 uRam00000024,undefined3 uRam0000002c)

{
  byte bVar1;
  uint uVar2;
  int unaff_s1;
  int in_a0;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  int *unaff_s2;
  int unaff_s3;
  int iVar11;
  int iVar12;
  
  FUN_00010b70(uRam00000010,uRam00000024,uRam0000002c);
  *(undefined *)(in_a0 + 0x14e) = *(undefined *)(unaff_s1 + 0x14e);
  *(undefined4 *)(in_a0 + 0x140) = *(undefined4 *)(unaff_s1 + 0x140);
  *(undefined2 *)(in_a0 + 0x144) = *(undefined2 *)(unaff_s1 + 0x144);
  *(undefined *)(in_a0 + 0x150) = *(undefined *)(unaff_s1 + 0x150);
  *(undefined *)(in_a0 + 0x151) = *(undefined *)(unaff_s1 + 0x151);
  for (; unaff_s3 < (int)(uint)*(byte *)(unaff_s1 + 0x14f); unaff_s3 += 1) {
    if (*(char *)(unaff_s3 * 6 + unaff_s1 + 2) == *(char *)((int)unaff_s2 + 0x16b)) {
      bVar1 = *(byte *)(in_a0 + 0x14f);
      FUN_00010d64((uint)bVar1 * 6 + in_a0,6,uRam00000010,uRam00000024,uRam0000002c);
      *(byte *)(in_a0 + 0x14f) = bVar1 + 1;
    }
  }
  iVar11 = 0xfc;
  for (iVar12 = 0; iVar12 < (int)(uint)*(byte *)(unaff_s1 + 0x150); iVar12 += 1) {
    FUN_00010d80(in_a0 + iVar11,unaff_s1 + iVar11,0x22,uRam00000010,uRam00000024,uRam0000002c);
    iVar11 += 0x22;
  }
  uVar7 = (uint)*(ushort *)(*unaff_s2 + 0x14c);
  pcVar6 = &DAT_00000010;
  if (200 < uVar7) {
    uVar7 = 0;
  }
  if ((*(char *)((int)unaff_s2 + 0x16b) == '\x01') || (*(char *)(*unaff_s2 + 0x151) != '\0')) {
    iVar11 = 4;
    iVar12 = 8;
  }
  else {
    iVar11 = 0;
    iVar12 = 0xc;
  }
  iVar8 = 0;
  do {
    puVar9 = (undefined *)(iVar11 + iVar8);
    puVar10 = (undefined *)(iVar8 + 0x26);
    iVar8 += 1;
    *puVar10 = *puVar9;
  } while (iVar8 != 8);
  puVar9 = &DAT_0000002e;
  if ((uVar7 != 0) && ((char)uRam00000010 == '\n')) {
    uVar3 = uRam00000010._1_1_ + 2 & 0xff;
    uVar2 = uVar3;
    iVar11 = 0;
    while( true ) {
      uVar2 -= 1;
      if (uVar2 == 0xffffffff) break;
      *puVar9 = *(undefined *)(iVar11 + 0x10);
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar9 = (undefined *)(uVar3 + 0x2e);
    pcVar6 = (char *)(uVar3 + 0x10);
    uVar7 = uVar7 - uVar3 & 0xffff;
  }
  if (iVar12 != 8) {
    uVar2 = iVar12 - 8U & 0xff;
    *puVar9 = 0x32;
    puVar9[1] = (char)uVar2;
    iVar12 = uVar2 + 2;
    iVar11 = 0;
    puVar10 = puVar9 + 2;
    while( true ) {
      uVar2 -= 1;
      if (uVar2 == 0xffffffff) break;
      *puVar10 = *(undefined *)(iVar11 + 8);
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar9 = puVar9 + iVar12;
  }
  if (*(char *)((int)unaff_s2 + 0x16b) == '\0') {
    *puVar9 = 3;
    puVar9[1] = 1;
    puVar9 = puVar9 + 3;
  }
  if ((uVar7 != 0) && (*pcVar6 == ';')) {
    uVar3 = (byte)pcVar6[1] + 2 & 0xff;
    for (uVar2 = 0; uVar3 != uVar2; uVar2 += 1) {
      puVar9[uVar2] = pcVar6[uVar2];
    }
    puVar9 = puVar9 + uVar3;
    pcVar6 = pcVar6 + uVar3;
    uVar7 = uVar7 - uVar3 & 0xffff;
  }
  if (uRam0000002c._2_1_ != '\0') {
    *puVar9 = 0x2d;
    puVar9[1] = 0x1a;
    puVar10 = puVar9 + 0x1c;
    iVar11 = 0;
    for (puVar9 = puVar9 + 2; puVar10 != puVar9; puVar9 = puVar9 + 1) {
      *puVar9 = *(undefined *)(iVar11 + 0xc);
      iVar11 = iVar11 + 1;
    }
  }
  if (uVar7 != 0) {
    uVar2 = 0;
    do {
      pcVar4 = pcVar6 + uVar2;
      pcVar5 = puVar9 + uVar2;
      uVar2 += 1;
      *pcVar5 = *pcVar4;
    } while (uVar7 != uVar2);
    puVar9 = puVar9 + uVar7;
  }
  *(short *)(in_a0 + 0x14c) = (short)puVar9 + -0x24;
  *(undefined4 *)(in_a0 + 0x148) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010d64(int param_1,undefined4 param_2,undefined2 uRam00000010,undefined2 uRam00000024,
                 undefined3 uRam0000002c)

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
    FUN_00010d64(param_1,param_2,uRam00000010,uRam00000024,uRam0000002c);
    *(char *)(unaff_s0 + 0x14f) = (char)unaff_s4;
    do {
      unaff_s3 += 1;
      if ((int)(uint)*(byte *)(unaff_s1 + 0x14f) <= unaff_s3) {
        iVar10 = 0xfc;
        for (iVar11 = 0; iVar11 < (int)(uint)*(byte *)(unaff_s1 + 0x150); iVar11 += 1) {
          FUN_00010d80(unaff_s0 + iVar10,unaff_s1 + iVar10,0x22,uRam00000010,uRam00000024,
                       uRam0000002c);
          iVar10 += 0x22;
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
          iVar7 += 1;
          *puVar9 = *puVar8;
        } while (iVar7 != 8);
        puVar8 = &DAT_0000002e;
        if ((uVar6 != 0) && ((char)uRam00000010 == '\n')) {
          uVar2 = uRam00000010._1_1_ + 2 & 0xff;
          uVar1 = uVar2;
          iVar10 = 0;
          while( true ) {
            uVar1 -= 1;
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
            uVar1 -= 1;
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
          uVar2 = (byte)pcVar5[1] + 2 & 0xff;
          for (uVar1 = 0; uVar2 != uVar1; uVar1 += 1) {
            puVar8[uVar1] = pcVar5[uVar1];
          }
          puVar8 = puVar8 + uVar2;
          pcVar5 = pcVar5 + uVar2;
          uVar6 = uVar6 - uVar2 & 0xffff;
        }
        if (uRam0000002c._2_1_ != '\0') {
          *puVar8 = 0x2d;
          puVar8[1] = 0x1a;
          puVar9 = puVar8 + 0x1c;
          iVar10 = 0;
          for (puVar8 = puVar8 + 2; puVar9 != puVar8; puVar8 = puVar8 + 1) {
            *puVar8 = *(undefined *)(iVar10 + 0xc);
            iVar10 = iVar10 + 1;
          }
        }
        if (uVar6 != 0) {
          uVar1 = 0;
          do {
            pcVar3 = pcVar5 + uVar1;
            pcVar4 = puVar8 + uVar1;
            uVar1 += 1;
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
    FUN_00010d80(param_1,param_2,param_3,param_4,param_5,param_6);
    unaff_s4 += 1;
    unaff_s3 += 0x22;
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
    iVar9 += 1;
    *puVar11 = *puVar10;
  } while (iVar9 != 8);
  puVar10 = &DAT_0000002e;
  if ((uVar7 != 0) && ((char)param_4 == '\n')) {
    uVar3 = param_4._1_1_ + 2 & 0xff;
    uVar2 = uVar3;
    iVar1 = 0;
    while( true ) {
      uVar2 -= 1;
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
      uVar2 -= 1;
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
    uVar3 = (byte)pcVar6[1] + 2 & 0xff;
    for (uVar2 = 0; uVar3 != uVar2; uVar2 += 1) {
      puVar10[uVar2] = pcVar6[uVar2];
    }
    puVar10 = puVar10 + uVar3;
    pcVar6 = pcVar6 + uVar3;
    uVar7 = uVar7 - uVar3 & 0xffff;
  }
  if (param_6._2_1_ != '\0') {
    *puVar10 = 0x2d;
    puVar10[1] = 0x1a;
    puVar11 = puVar10 + 0x1c;
    iVar1 = 0;
    for (puVar10 = puVar10 + 2; puVar11 != puVar10; puVar10 = puVar10 + 1) {
      *puVar10 = *(undefined *)(iVar1 + 0xc);
      iVar1 = iVar1 + 1;
    }
  }
  if (uVar7 != 0) {
    uVar2 = 0;
    do {
      pcVar4 = pcVar6 + uVar2;
      pcVar5 = puVar10 + uVar2;
      uVar2 += 1;
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



// DWARF DIE: 53d7

void scanu_dma_cb(void *env,int dma_type)

{
  scanu_dma_cb(env,dma_type);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4611

void scanu_start(undefined2 uRam00000014,undefined3 param_2)

{
  int iVar1;
  
  if (param_2._2_1_ == '\0') {
    iVar1 = 0;
    do {
      *(undefined *)(iVar1 + 0x4c) = 0;
      *(undefined *)(iVar1 + 0x4d) = 0x80;
      iVar1 += 0x38;
    } while (iVar1 != 0x150);
    uRam00000014 = 0;
  }
  FUN_00010e2c();
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


