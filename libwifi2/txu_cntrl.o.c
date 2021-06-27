typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
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

typedef union anon_union.conflict2aec_for_field_0 anon_union.conflict2aec_for_field_0, *Panon_union.conflict2aec_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict11bb_for_field_3 anon_union.conflict11bb_for_field_3, *Panon_union.conflict11bb_for_field_3;

typedef union anon_union.conflict11e0_for_field_4 anon_union.conflict11e0_for_field_4, *Panon_union.conflict11e0_for_field_4;

typedef union anon_union.conflict1205_for_field_5 anon_union.conflict1205_for_field_5, *Panon_union.conflict1205_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: e02
    struct co_list_hdr * next;
};

struct mac_addr { // DWARF DIE: 9cd
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 17b3
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

struct tx_cfm_tag { // DWARF DIE: 1618
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

union anon_union.conflict1205_for_field_5 { // DWARF DIE: 1205
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict11e0_for_field_4 { // DWARF DIE: 11e0
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict11bb_for_field_3 { // DWARF DIE: 11bb
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd { // DWARF DIE: 122a
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict11bb_for_field_3 field_3;
    union anon_union.conflict11e0_for_field_4 field_4;
    union anon_union.conflict1205_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1697
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct lmacdesc { // DWARF DIE: 191f
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct umacdesc { // DWARF DIE: 188f
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

struct txdesc { // DWARF DIE: 1a3b
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 1190
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct dma_desc { // DWARF DIE: fd5
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd { // DWARF DIE: 12f3
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct tx_policy_tbl { // DWARF DIE: 111f
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict2aec_for_field_0 { // DWARF DIE: 2aec
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 18eb
    union anon_union.conflict2aec_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct txl_buffer_tag { // DWARF DIE: 195a
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

struct tx_agg_desc { // DWARF DIE: 16c8
    uint8_t reserved;
};

typedef struct txdesc_host txdesc_host, *Ptxdesc_host;

struct txdesc_host { // DWARF DIE: 1ab5
    uint32_t ready;
    struct hostdesc host;
    uint32_t pad_txdesc[55];
    uint32_t pad_buf[128];
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

typedef struct txl_list txl_list, *Ptxl_list;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: e23
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct txl_list { // DWARF DIE: 295f
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

struct txl_cntrl_env_tag { // DWARF DIE: 29a7
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct mic_calc mic_calc, *Pmic_calc;

struct mic_calc { // DWARF DIE: 1d94
    uint32_t mic_key_least;
    uint32_t mic_key_most;
    uint32_t last_m_i;
    uint8_t last_m_i_len;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 205a
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

struct bam_env_tag { // DWARF DIE: 20cd
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

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 2c5e
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 2be2
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 2c0a
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

struct chan_tbtt_tag { // DWARF DIE: 270d
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

struct mm_chan_ctxt_add_req { // DWARF DIE: 1c60
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 275c
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

struct mm_timer_tag { // DWARF DIE: 1d2c
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct chan_env_tag { // DWARF DIE: 27ec
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

struct mblock_free { // DWARF DIE: 2948
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 2f53
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

struct scan_chan_tag { // DWARF DIE: ca6
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct me_chan_config_req { // DWARF DIE: 3096
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: ba5
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

struct me_env_tag { // DWARF DIE: 325e
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

struct mobility_domain { // DWARF DIE: 32f2
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

struct Cipher_t { // DWARF DIE: 3142
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct mac_edca_param_set { // DWARF DIE: c6d
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset { // DWARF DIE: a52
    uint8_t length;
    uint8_t array[12];
};

struct mac_ssid { // DWARF DIE: 9fd
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct SecurityMode_t { // DWARF DIE: 31a8
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

struct mac_bss_info { // DWARF DIE: 331a
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

struct txl_cfm_env_tag { // DWARF DIE: 1b5d
    struct co_list cfmlist[5];
};

typedef union anon_union.conflictafa anon_union.conflictafa, *Panon_union.conflictafa;

typedef struct anon_struct.conflicta9a anon_struct.conflicta9a, *Panon_struct.conflicta9a;

typedef struct anon_struct.conflictad1 anon_struct.conflictad1, *Panon_struct.conflictad1;

struct anon_struct.conflicta9a { // DWARF DIE: a9a
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictad1 { // DWARF DIE: ad1
    uint32_t key[4];
};

union anon_union.conflictafa { // DWARF DIE: afa
    struct anon_struct.conflicta9a mic;
    struct anon_struct.conflictad1 mfp;
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictafa_for_u anon_union.conflictafa_for_u, *Panon_union.conflictafa_for_u;

union anon_union.conflictafa_for_u { // DWARF DIE: afa
    struct anon_struct.conflicta9a mic;
    struct anon_struct.conflictad1 mfp;
};

struct key_info_tag { // DWARF DIE: b1f
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictafa_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef enum anon_enum_8.conflictcee {
    BROADCAST_STA_IDX_MAX=11,
    BROADCAST_STA_IDX_MIN=10,
    CONTROL_PORT_HOST=1,
    CONTROL_PORT_NO_ENC=2,
    DISABLE_HT=4,
    INVALID_STA_IDX=-1,
    MFP_IN_USE=16,
    PHY_BAND_2G4=0,
    PHY_BAND_5G=1,
    PHY_BAND_MAX=2,
    PORT_CLOSED=0,
    PORT_CONTROLED=1,
    PORT_OPEN=2,
    STA_MAX=12,
    VIF_AP=2,
    VIF_IBSS=1,
    VIF_MESH_POINT=3,
    VIF_STA=0,
    VIF_UNKNOWN=4,
    WPA_WPA2_IN_USE=8
} anon_enum_8.conflictcee;

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: c18
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: d1c
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

struct ke_msg_handler { // DWARF DIE: 1c01
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1c2d
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 38cc
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

typedef uint wint_t;

typedef long __int32_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct llc_snap llc_snap, *Pllc_snap;

struct llc_snap { // DWARF DIE: 26bf
    uint16_t dsap_ssap;
    uint16_t control_oui0;
    uint16_t oui1_2;
    uint16_t proto_id;
};

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 1f47
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

struct rx_cntrl_dupli { // DWARF DIE: 1f1c
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 1eff
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 1e04
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

struct rxu_cntrl_env_tag { // DWARF DIE: 1f80
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

typedef struct mac_hdr_long_qos mac_hdr_long_qos, *Pmac_hdr_long_qos;

struct mac_hdr_long_qos { // DWARF DIE: f46
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
    struct mac_addr addr4;
    uint16_t qos;
};

typedef struct mac_hdr mac_hdr, *Pmac_hdr;

struct mac_hdr { // DWARF DIE: e72
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
};

typedef struct mac_hdr_qos mac_hdr_qos, *Pmac_hdr_qos;

struct mac_hdr_qos { // DWARF DIE: ed5
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
    uint16_t qos;
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

struct la_mem_format { // DWARF DIE: 10af
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 1029
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 1d6d
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 1453
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

struct phy_channel_info { // DWARF DIE: 1087
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 14e8
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 1348
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

struct rx_payloaddesc { // DWARF DIE: 15bb
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 154b
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 10e7
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 28f9
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict36ef_for_u anon_union.conflict36ef_for_u, *Panon_union.conflict36ef_for_u;

typedef struct anon_struct.conflict3527 anon_struct.conflict3527, *Panon_struct.conflict3527;

typedef struct anon_struct.conflict35f4 anon_struct.conflict35f4, *Panon_struct.conflict35f4;

struct anon_struct.conflict35f4 { // DWARF DIE: 35f4
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

struct anon_struct.conflict3527 { // DWARF DIE: 3527
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

union anon_union.conflict36ef_for_u { // DWARF DIE: 36ef
    struct anon_struct.conflict3527 sta;
    struct anon_struct.conflict35f4 ap;
};

struct vif_info_tag { // DWARF DIE: 3712
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
    union anon_union.conflict36ef_for_u u;
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

struct vif_mgmt_env_tag { // DWARF DIE: 384d
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef union anon_union.conflict36ef anon_union.conflict36ef, *Panon_union.conflict36ef;

union anon_union.conflict36ef { // DWARF DIE: 36ef
    struct anon_struct.conflict3527 sta;
    struct anon_struct.conflict35f4 ap;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 2e51
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 2e0a
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 2440
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

typedef union anon_union.conflict3051_for_rate_map anon_union.conflict3051_for_rate_map, *Panon_union.conflict3051_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 2fb4
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step { // DWARF DIE: 302a
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

union anon_union.conflict3051_for_rate_map { // DWARF DIE: 3051
    uint8_t ht[4];
};

struct rc_sta_stats { // DWARF DIE: 22da
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
    union anon_union.conflict3051_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 228b
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2250
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 248f
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

struct sta_info_env_tag { // DWARF DIE: 2678
    struct co_list free_sta_list;
};

typedef enum sta_ps_sp {
    ANY_SERVICE_PERIOD_INT=3,
    BCN_SERVICE_PERIOD=8,
    NO_SERVICE_PERIOD=0,
    PS_SERVICE_PERIOD=1,
    UAPSD_SERVICE_PERIOD=6,
    UAPSD_SERVICE_PERIOD_HOST=4,
    UAPSD_SERVICE_PERIOD_INT=2
} sta_ps_sp;

typedef union anon_union.conflict3051 anon_union.conflict3051, *Panon_union.conflict3051;

union anon_union.conflict3051 { // DWARF DIE: 3051
    uint8_t ht[4];
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 2ef7
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 2eb2
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 2a3b
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 2a13
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef union anon_union.conflict2aec anon_union.conflict2aec, *Panon_union.conflict2aec;

union anon_union.conflict2aec { // DWARF DIE: 2aec
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 2a63
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

struct txl_buffer_env_tag { // DWARF DIE: 2b0e
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict11bb anon_union.conflict11bb, *Panon_union.conflict11bb;

union anon_union.conflict11bb { // DWARF DIE: 11bb
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict1205 anon_union.conflict1205, *Panon_union.conflict1205;

union anon_union.conflict1205 { // DWARF DIE: 1205
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict11e0 anon_union.conflict11e0, *Panon_union.conflict11e0;

union anon_union.conflict11e0 { // DWARF DIE: 11e0
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




// DWARF DIE: 4376

uint32_t txu_cntrl_sec_hdr_append(txdesc *txdesc,uint32_t buf,_Bool umac_pol)

{
  char cVar1;
  ushort uVar2;
  uint16_t *puVar3;
  undefined3 in_register_00002031;
  txl_buffer_control *ptVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (uint)(txdesc->host).staid * 0x1b0;
  iVar6 = **(int **)(iVar5 + 0xac);
  if (iVar6 == 0) {
    return (uint32_t)(uint16_t *)buf;
  }
  if (((*(uint *)((uint)(txdesc->host).vif_idx * 0x5d8 + 0x5c4) & 2) != 0) &&
     (uVar2 = (txdesc->host).ethertype,
     (uint)*(ushort *)(iVar5 + 0x38) == ((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)))) {
    return (uint32_t)(uint16_t *)buf;
  }
  cVar1 = *(char *)(iVar6 + 0x60);
  if (cVar1 == '\x01') {
    uVar2 = (txdesc->host).pn[0];
    *(ushort *)(buf - 8) = uVar2 & 0x7f00 | 0x2000 | uVar2 >> 8;
    uVar2 = (ushort)*(byte *)(txdesc->host).pn | (ushort)*(byte *)(iVar6 + 0x61) << 0xe;
_L0:
    puVar3 = (uint16_t *)(buf - 8);
    *(ushort *)(buf - 6) = uVar2 | 0x2000;
    *(uint16_t *)(buf - 4) = (txdesc->host).pn[1];
    *(uint16_t *)(buf - 2) = (txdesc->host).pn[2];
  }
  else {
    if (cVar1 != '\0') {
      if (cVar1 == '\x02') {
        *(uint16_t *)(buf - 8) = (txdesc->host).pn[0];
        uVar2 = (ushort)*(byte *)(iVar6 + 0x61) << 0xe;
        goto _L0;
      }
      puVar3 = (uint16_t *)buf;
      if (cVar1 != '\x03') goto _L0;
    }
    puVar3 = (uint16_t *)(buf - 4);
    *puVar3 = (txdesc->host).pn[0];
    *(ushort *)(buf - 2) = (ushort)*(byte *)(iVar6 + 0x61) << 0xe | (txdesc->host).pn[1];
  }
_L0:
  if (CONCAT31(in_register_00002031,umac_pol) == 0) {
    ptVar4 = &((txdesc->lmac).buffer)->buffer_control;
  }
  else {
    ptVar4 = (txdesc->umac).buf_control;
  }
  *(uint *)&(ptVar4->field_0).field_0xc =
       (uint)*(byte *)(iVar6 + 0x62) | *(uint *)&(ptVar4->field_0).field_0xc & 0xffc00;
  return (uint32_t)puVar3;
}



// DWARF DIE: 4660

int txu_cntrl_sechdr_len_compute(txdesc *txdesc,int *tail_len)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = (txdesc->host).vif_idx;
  iVar7 = **(int **)((uint)(txdesc->host).staid * 0x1b0 + 0xac);
  *tail_len = 0;
  if (iVar7 == 0) {
    return 0;
  }
  if (((*(uint *)((uint)bVar1 * 0x5d8 + 0x5c4) & 2) != 0) &&
     (uVar3 = (txdesc->host).ethertype,
     (uint)*(ushort *)((uint)(txdesc->host).staid * 0x1b0 + 0x38) ==
     ((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)))) {
    return 0;
  }
  cVar2 = *(char *)(iVar7 + 0x60);
  if (cVar2 == '\x01') {
    iVar4 = 0xc;
_L0:
    *tail_len = iVar4;
    if (((txdesc->host).flags & 1) == 0) {
      uVar6 = *(uint *)(iVar7 + 0x48);
      uVar5 = uVar6 + 1;
      *(uint *)(iVar7 + 0x48) = uVar5;
      *(uint *)(iVar7 + 0x4c) = (uint)(uVar5 < uVar6) + *(int *)(iVar7 + 0x4c);
      _LVL33();
    }
    iVar4 = 8;
  }
  else {
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
        iVar4 = 8;
        goto _L0;
      }
      if (cVar2 != '\x03') {
        return 0;
      }
    }
    *tail_len = 4;
    iVar4 = 4;
    if (((txdesc->host).flags & 1) == 0) {
      uVar6 = *(uint *)(iVar7 + 0x48);
      uVar5 = uVar6 + 1;
      *(uint *)(iVar7 + 0x48) = uVar5;
      *(uint *)(iVar7 + 0x4c) = (uint)(uVar5 < uVar6) + *(int *)(iVar7 + 0x4c);
      _LVL29();
    }
  }
  return iVar4;
}



void _LVL29(void)

{
  _LVL29();
  return;
}



undefined4 _LVL33(void)

{
  _LVL33();
  return 8;
}



// DWARF DIE: 42c4

void txu_cntrl_init(void)

{
  return;
}



// DWARF DIE: 412f

void txu_cntrl_frame_build(txdesc *txdesc,uint32_t buf)

{
  uint8_t uVar1;
  char cVar2;
  byte bVar3;
  int extraout_a0;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  
  uVar8 = (txdesc->host).ethertype;
  if (0x5ff < ((uVar8 & 0xff) << 8 | (uint)(uVar8 >> 8))) {
    *(undefined2 *)(buf - 8) = 0xaaaa;
    *(undefined2 *)(buf - 6) = 3;
    *(undefined2 *)(buf - 4) = 0;
    *(uint16_t *)(buf - 2) = (txdesc->host).ethertype;
  }
  _LVL40();
  uVar6 = (uint)(txdesc->host).staid;
  uVar1 = (txdesc->host).tid;
  uVar11 = (uint)(txdesc->host).vif_idx;
  iVar12 = **(int **)(uVar6 * 0x1b0 + 0xac);
  puVar10 = (ushort *)(extraout_a0 + -0x1a);
  if (uVar1 == -1) {
    puVar10 = (ushort *)(extraout_a0 + -0x18);
  }
  puVar4 = puVar10 + 0xc;
  puVar5 = (ushort *)0x0;
  if (((txdesc->host).flags & 0x100) != 0) {
    puVar5 = puVar10 + -3;
    puVar10 = puVar5;
  }
  if (uVar1 == -1) {
    *(undefined *)puVar10 = 0;
    *(undefined *)((int)puVar10 + 1) = 0;
    *(undefined *)(puVar10 + 0xb) = 0;
    *(undefined *)((int)puVar10 + 0x17) = 0;
  }
  else {
    *(undefined *)puVar10 = 0x80;
    *(undefined *)((int)puVar10 + 1) = 0;
    *puVar4 = (ushort)(txdesc->host).tid;
    iVar9 = (uint)(txdesc->host).sn << 0x14;
    *(char *)(puVar10 + 0xb) = (char)((uint)iVar9 >> 0x10);
    *(char *)((int)puVar10 + 0x17) = (char)((uint)iVar9 >> 0x18);
    if (((txdesc->host).flags & 0x200) != 0) {
      *puVar4 = *puVar4 | 0x10;
    }
  }
  uVar7 = *puVar10;
  *(byte *)puVar10 = (byte)uVar7 | 8;
  *(char *)((int)puVar10 + 1) = (char)((uint)uVar7 >> 8);
  uVar8 = (txdesc->host).flags;
  if ((int)((uint)uVar8 << 0x14) < 0) {
    uVar7 = uVar7 & 0xfcff | 8;
_L0:
    *(char *)puVar10 = (char)uVar7;
    *(char *)((int)puVar10 + 1) = (char)(uVar7 >> 8);
  }
  else {
    if ((uVar8 & 0x100) != 0) {
      uVar7 |= 0x308;
      goto _L0;
    }
    cVar2 = *(char *)(uVar11 * 0x5d8 + 0x56);
    if (cVar2 == '\0') {
      uVar7 |= 0x108;
      goto _L0;
    }
    if (cVar2 == '\x02') {
      uVar7 |= 0x208;
      goto _L0;
    }
  }
  if (((txdesc->host).flags & 4) != 0) {
    uVar8 = *puVar10;
    *(char *)puVar10 = (char)uVar8;
    *(byte *)((int)puVar10 + 1) = (byte)((uint)uVar8 >> 8) | 0x20;
  }
  iVar9 = uVar11 * 0x5d8;
  puVar10[5] = *(ushort *)(iVar9 + 0x50);
  puVar10[6] = *(ushort *)(iVar9 + 0x52);
  puVar10[7] = *(ushort *)(iVar9 + 0x54);
  bVar3 = *(byte *)((int)puVar10 + 1) & 3;
  if (bVar3 == 1) {
    iVar9 = uVar6 * 0x1b0;
    puVar10[2] = *(ushort *)(iVar9 + 0x1e);
    puVar10[3] = *(ushort *)(iVar9 + 0x20);
    puVar10[4] = *(ushort *)(iVar9 + 0x22);
    puVar10[8] = (txdesc->host).eth_dest_addr.array[0];
    puVar10[9] = (txdesc->host).eth_dest_addr.array[1];
    uVar8 = (txdesc->host).eth_dest_addr.array[2];
  }
  else {
    if (bVar3 == 2) {
      puVar10[2] = (txdesc->host).eth_dest_addr.array[0];
      puVar10[3] = (txdesc->host).eth_dest_addr.array[1];
      puVar10[4] = (txdesc->host).eth_dest_addr.array[2];
      puVar10[8] = (txdesc->host).eth_src_addr.array[0];
      puVar10[9] = (txdesc->host).eth_src_addr.array[1];
      uVar8 = (txdesc->host).eth_src_addr.array[2];
    }
    else {
      if (bVar3 != 0) {
        iVar9 = uVar6 * 0x1b0;
        puVar5[2] = *(ushort *)(iVar9 + 0x1e);
        puVar5[3] = *(ushort *)(iVar9 + 0x20);
        puVar5[4] = *(ushort *)(iVar9 + 0x22);
        puVar5[8] = (txdesc->host).eth_dest_addr.array[0];
        puVar5[9] = (txdesc->host).eth_dest_addr.array[1];
        puVar5[10] = (txdesc->host).eth_dest_addr.array[2];
        puVar5[0xc] = (txdesc->host).eth_src_addr.array[0];
        puVar5[0xd] = (txdesc->host).eth_src_addr.array[1];
        puVar5[0xe] = (txdesc->host).eth_src_addr.array[2];
        goto _L0;
      }
      puVar10[2] = (txdesc->host).eth_dest_addr.array[0];
      puVar10[3] = (txdesc->host).eth_dest_addr.array[1];
      puVar10[4] = (txdesc->host).eth_dest_addr.array[2];
      puVar10[8] = *(ushort *)(iVar9 + 0x378);
      puVar10[9] = *(ushort *)(iVar9 + 0x37a);
      uVar8 = *(ushort *)(iVar9 + 0x37c);
    }
  }
  puVar10[10] = uVar8;
_L0:
  if ((iVar12 != 0) &&
     (((*(uint *)(uVar11 * 0x5d8 + 0x5c4) & 2) == 0 ||
      (uVar8 = (txdesc->host).ethertype,
      (uint)*(ushort *)((uint)(txdesc->host).staid * 0x1b0 + 0x38) !=
      ((uVar8 & 0xff) << 8 | (uint)(uVar8 >> 8)))))) {
    uVar8 = *puVar10;
    *(char *)puVar10 = (char)uVar8;
    *(byte *)((int)puVar10 + 1) = (byte)((uint)uVar8 >> 8) | 0x40;
  }
  return;
}



void _LVL40(void)

{
  char cVar1;
  byte bVar2;
  int unaff_s0;
  int extraout_a0;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  
  _LVL40();
  uVar5 = (uint)*(byte *)(unaff_s0 + 0x30);
  uVar9 = (uint)*(byte *)(unaff_s0 + 0x2f);
  iVar10 = **(int **)(uVar5 * 0x1b0 + 0xac);
  puVar8 = (ushort *)(extraout_a0 + -0x1a);
  if (*(char *)(unaff_s0 + 0x2e) == -1) {
    puVar8 = (ushort *)(extraout_a0 + -0x18);
  }
  puVar3 = puVar8 + 0xc;
  puVar4 = (ushort *)0x0;
  if ((*(ushort *)(unaff_s0 + 0x32) & 0x100) != 0) {
    puVar4 = puVar8 + -3;
    puVar8 = puVar4;
  }
  if (*(char *)(unaff_s0 + 0x2e) == -1) {
    *(undefined *)puVar8 = 0;
    *(undefined *)((int)puVar8 + 1) = 0;
    *(undefined *)(puVar8 + 0xb) = 0;
    *(undefined *)((int)puVar8 + 0x17) = 0;
  }
  else {
    *(undefined *)puVar8 = 0x80;
    *(undefined *)((int)puVar8 + 1) = 0;
    *puVar3 = (ushort)*(byte *)(unaff_s0 + 0x2e);
    iVar7 = (uint)*(ushort *)(unaff_s0 + 0x2a) << 0x14;
    *(char *)(puVar8 + 0xb) = (char)((uint)iVar7 >> 0x10);
    *(char *)((int)puVar8 + 0x17) = (char)((uint)iVar7 >> 0x18);
    if ((*(ushort *)(unaff_s0 + 0x32) & 0x200) != 0) {
      *puVar3 = *puVar3 | 0x10;
    }
  }
  uVar6 = *puVar8;
  *(byte *)puVar8 = (byte)uVar6 | 8;
  *(char *)((int)puVar8 + 1) = (char)((uint)uVar6 >> 8);
  if ((int)((uint)*(ushort *)(unaff_s0 + 0x32) << 0x14) < 0) {
    uVar6 = uVar6 & 0xfcff | 8;
_L0:
    *(char *)puVar8 = (char)uVar6;
    *(char *)((int)puVar8 + 1) = (char)(uVar6 >> 8);
  }
  else {
    if ((*(ushort *)(unaff_s0 + 0x32) & 0x100) != 0) {
      uVar6 |= 0x308;
      goto _L0;
    }
    cVar1 = *(char *)(uVar9 * 0x5d8 + 0x56);
    if (cVar1 == '\0') {
      uVar6 |= 0x108;
      goto _L0;
    }
    if (cVar1 == '\x02') {
      uVar6 |= 0x208;
      goto _L0;
    }
  }
  if ((*(ushort *)(unaff_s0 + 0x32) & 4) != 0) {
    uVar6 = *puVar8;
    *(char *)puVar8 = (char)uVar6;
    *(byte *)((int)puVar8 + 1) = (byte)((uint)uVar6 >> 8) | 0x20;
  }
  iVar7 = uVar9 * 0x5d8;
  puVar8[5] = *(ushort *)(iVar7 + 0x50);
  puVar8[6] = *(ushort *)(iVar7 + 0x52);
  puVar8[7] = *(ushort *)(iVar7 + 0x54);
  bVar2 = *(byte *)((int)puVar8 + 1) & 3;
  if (bVar2 == 1) {
    iVar7 = uVar5 * 0x1b0;
    puVar8[2] = *(ushort *)(iVar7 + 0x1e);
    puVar8[3] = *(ushort *)(iVar7 + 0x20);
    puVar8[4] = *(ushort *)(iVar7 + 0x22);
    puVar8[8] = *(ushort *)(unaff_s0 + 0x14);
    puVar8[9] = *(ushort *)(unaff_s0 + 0x16);
    uVar6 = *(ushort *)(unaff_s0 + 0x18);
  }
  else {
    if (bVar2 == 2) {
      puVar8[2] = *(ushort *)(unaff_s0 + 0x14);
      puVar8[3] = *(ushort *)(unaff_s0 + 0x16);
      puVar8[4] = *(ushort *)(unaff_s0 + 0x18);
      puVar8[8] = *(ushort *)(unaff_s0 + 0x1a);
      puVar8[9] = *(ushort *)(unaff_s0 + 0x1c);
      uVar6 = *(ushort *)(unaff_s0 + 0x1e);
    }
    else {
      if (bVar2 != 0) {
        iVar7 = uVar5 * 0x1b0;
        puVar4[2] = *(ushort *)(iVar7 + 0x1e);
        puVar4[3] = *(ushort *)(iVar7 + 0x20);
        puVar4[4] = *(ushort *)(iVar7 + 0x22);
        puVar4[8] = *(ushort *)(unaff_s0 + 0x14);
        puVar4[9] = *(ushort *)(unaff_s0 + 0x16);
        puVar4[10] = *(ushort *)(unaff_s0 + 0x18);
        puVar4[0xc] = *(ushort *)(unaff_s0 + 0x1a);
        puVar4[0xd] = *(ushort *)(unaff_s0 + 0x1c);
        puVar4[0xe] = *(ushort *)(unaff_s0 + 0x1e);
        goto _L0;
      }
      puVar8[2] = *(ushort *)(unaff_s0 + 0x14);
      puVar8[3] = *(ushort *)(unaff_s0 + 0x16);
      puVar8[4] = *(ushort *)(unaff_s0 + 0x18);
      puVar8[8] = *(ushort *)(iVar7 + 0x378);
      puVar8[9] = *(ushort *)(iVar7 + 0x37a);
      uVar6 = *(ushort *)(iVar7 + 0x37c);
    }
  }
  puVar8[10] = uVar6;
_L0:
  if ((iVar10 != 0) &&
     (((*(uint *)(uVar9 * 0x5d8 + 0x5c4) & 2) == 0 ||
      ((uint)*(ushort *)((uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + 0x38) !=
       ((*(ushort *)(unaff_s0 + 0x20) & 0xff) << 8 | (uint)(*(ushort *)(unaff_s0 + 0x20) >> 8))))))
  {
    uVar6 = *puVar8;
    *(char *)puVar8 = (char)uVar6;
    *(byte *)((int)puVar8 + 1) = (byte)((uint)uVar6 >> 8) | 0x40;
  }
  return;
}



// DWARF DIE: 3dab

_Bool txu_cntrl_push(txdesc *txdesc,uint8_t access_category)

{
  ushort uVar1;
  ushort uVar2;
  uint16_t uVar3;
  char cVar4;
  undefined extraout_a0;
  undefined uVar5;
  char extraout_a0_00;
  uint8_t uVar6;
  int iVar7;
  undefined4 extraout_a0_01;
  txl_buffer_control *extraout_a0_02;
  int iVar8;
  uint uVar9;
  uint8_t uVar10;
  uint uVar11;
  uint8_t uStack36;
  int tail_len;
  
  iVar7 = _LVL62();
  if (iVar7 == 0) {
code_r0x000106ca:
    _L0();
    FUN_000106de();
    uVar5 = 0;
  }
  else {
    uVar1 = (txdesc->host).flags;
    if ((uVar1 & 8) == 0) {
      uVar11 = (uint)(txdesc->host).staid;
      uVar2 = (txdesc->host).ethertype;
      iVar8 = uVar11 * 0x1b0;
      cVar4 = *(char *)(iVar8 + 0x31);
      if ((uint)*(ushort *)(iVar8 + 0x38) == ((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8))) {
        (txdesc->host).flags = uVar1 & 0xfeff;
      }
      else {
        iVar7 = 0;
      }
      if ((cVar4 != '\x02') && ((cVar4 != '\x01' || (iVar7 == 0)))) goto code_r0x000106ca;
      uVar9 = (uint)(txdesc->host).tid;
      cVar4 = '\x18';
      if ((uVar9 != 0xff) && (cVar4 = '\x1a', ((txdesc->host).flags & 1) == 0)) {
        iVar7 = (uVar11 * 0xd8 + uVar9 + 0x78) * 2;
        uVar3 = *(uint16_t *)(iVar7 + 8);
        *(uint16_t *)(iVar7 + 8) = uVar3 + 1 & 0xfff;
        (txdesc->host).sn = uVar3;
      }
      if (((txdesc->host).flags & 0x100) != 0) {
        cVar4 += '\x06';
      }
      _LVL88();
      uVar1 = (txdesc->host).ethertype;
      uVar6 = extraout_a0_00 + cVar4;
      uVar10 = '\0';
      if (0x600 < ((uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8))) {
        uVar6 += '\b';
        uVar10 = '\b';
      }
      uVar3 = (txdesc->host).packet_len;
      (txdesc->umac).head_len = uVar6;
      (txdesc->umac).payl_len = uVar3;
      (txdesc->umac).hdr_len_802_2 = uVar10;
      (txdesc->umac).tail_len = uStack36;
      _L0();
      FUN_000106ba();
      (txdesc->umac).buf_control = extraout_a0_02;
    }
    else {
      (txdesc->umac).buf_control = (txl_buffer_control *)0x0;
      FUN_0001057a();
      *(undefined4 *)&(((txdesc->umac).buf_control)->field_0).field_0x24 = extraout_a0_01;
      *(undefined4 *)&(((txdesc->umac).buf_control)->field_0).field_0x28 = extraout_a0_01;
      *(undefined4 *)&(((txdesc->umac).buf_control)->field_0).field_0x2c = extraout_a0_01;
      *(undefined4 *)&(((txdesc->umac).buf_control)->field_0).field_0x30 = extraout_a0_01;
      (txdesc->umac).head_len = '\0';
      (txdesc->umac).tail_len = '\0';
    }
    FUN_0001059e();
    uVar5 = extraout_a0;
  }
  return (_Bool)uVar5;
}



undefined4 _LVL62(void)

{
  short sVar1;
  int unaff_s0;
  char extraout_a0;
  char cVar2;
  int iVar3;
  undefined4 extraout_a0_00;
  undefined4 extraout_a0_01;
  undefined4 uVar4;
  undefined4 extraout_a0_02;
  int iVar5;
  undefined uVar6;
  undefined in_stack_0000000c;
  
  iVar3 = _LVL62();
  if (iVar3 == 0) {
code_r0x000106ca:
    _L0();
    FUN_000106de();
    uVar4 = 0;
  }
  else {
    if ((*(ushort *)(unaff_s0 + 0x32) & 8) == 0) {
      iVar5 = (uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0;
      cVar2 = *(char *)(iVar5 + 0x31);
      if ((uint)*(ushort *)(iVar5 + 0x38) ==
          ((*(ushort *)(unaff_s0 + 0x20) & 0xff) << 8 | (uint)(*(ushort *)(unaff_s0 + 0x20) >> 8)))
      {
        *(ushort *)(unaff_s0 + 0x32) = *(ushort *)(unaff_s0 + 0x32) & 0xfeff;
      }
      else {
        iVar3 = 0;
      }
      if ((cVar2 != '\x02') && ((cVar2 != '\x01' || (iVar3 == 0)))) goto code_r0x000106ca;
      cVar2 = '\x18';
      if ((*(byte *)(unaff_s0 + 0x2e) != 0xff) &&
         (cVar2 = '\x1a', (*(ushort *)(unaff_s0 + 0x32) & 1) == 0)) {
        iVar3 = ((uint)*(byte *)(unaff_s0 + 0x30) * 0xd8 + (uint)*(byte *)(unaff_s0 + 0x2e) + 0x78)
                * 2;
        sVar1 = *(short *)(iVar3 + 8);
        *(ushort *)(iVar3 + 8) = sVar1 + 1U & 0xfff;
        *(short *)(unaff_s0 + 0x2a) = sVar1;
      }
      if ((*(ushort *)(unaff_s0 + 0x32) & 0x100) != 0) {
        cVar2 += '\x06';
      }
      _LVL88();
      cVar2 = extraout_a0 + cVar2;
      uVar6 = 0;
      if (0x600 < ((*(ushort *)(unaff_s0 + 0x20) & 0xff) << 8 |
                  (uint)(*(ushort *)(unaff_s0 + 0x20) >> 8))) {
        cVar2 += '\b';
        uVar6 = 8;
      }
      *(char *)(unaff_s0 + 0x5e) = cVar2;
      *(undefined2 *)(unaff_s0 + 0x5c) = *(undefined2 *)(unaff_s0 + 0xc);
      *(undefined *)(unaff_s0 + 0x5f) = uVar6;
      *(undefined *)(unaff_s0 + 0x60) = in_stack_0000000c;
      _L0();
      FUN_000106ba();
      *(undefined4 *)(unaff_s0 + 0x54) = extraout_a0_02;
    }
    else {
      *(undefined4 *)(unaff_s0 + 0x54) = 0;
      FUN_0001057a();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x54) + 0x24) = extraout_a0_00;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x54) + 0x28) = extraout_a0_00;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x54) + 0x2c) = extraout_a0_00;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x54) + 0x30) = extraout_a0_00;
      *(undefined *)(unaff_s0 + 0x5e) = 0;
      *(undefined *)(unaff_s0 + 0x60) = 0;
    }
    FUN_0001059e();
    uVar4 = extraout_a0_01;
  }
  return uVar4;
}



void FUN_0001057a(void)

{
  int unaff_s0;
  undefined4 extraout_a0;
  
  FUN_0001057a();
  *(undefined4 *)(*(int *)(unaff_s0 + 0x54) + 0x24) = extraout_a0;
  *(undefined4 *)(*(int *)(unaff_s0 + 0x54) + 0x28) = extraout_a0;
  *(undefined4 *)(*(int *)(unaff_s0 + 0x54) + 0x2c) = extraout_a0;
  *(undefined4 *)(*(int *)(unaff_s0 + 0x54) + 0x30) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x5e) = 0;
  *(undefined *)(unaff_s0 + 0x60) = 0;
  FUN_0001059e();
  return;
}



void FUN_0001059e(void)

{
  FUN_0001059e();
  return;
}



void _LVL88(void)

{
  int unaff_s0;
  char unaff_s1;
  char extraout_a0;
  char cVar1;
  undefined4 extraout_a0_00;
  undefined uVar2;
  undefined in_stack_0000000c;
  
  _LVL88();
  cVar1 = extraout_a0 + unaff_s1;
  uVar2 = 0;
  if (0x600 < ((*(ushort *)(unaff_s0 + 0x20) & 0xff) << 8 |
              (uint)(*(ushort *)(unaff_s0 + 0x20) >> 8))) {
    cVar1 += '\b';
    uVar2 = 8;
  }
  *(char *)(unaff_s0 + 0x5e) = cVar1;
  *(undefined2 *)(unaff_s0 + 0x5c) = *(undefined2 *)(unaff_s0 + 0xc);
  *(undefined *)(unaff_s0 + 0x5f) = uVar2;
  *(undefined *)(unaff_s0 + 0x60) = in_stack_0000000c;
  _L0();
  FUN_000106ba();
  *(undefined4 *)(unaff_s0 + 0x54) = extraout_a0_00;
  FUN_0001059e();
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined4 extraout_a0;
  
  _L0();
  FUN_000106ba();
  *(undefined4 *)(unaff_s0 + 0x54) = extraout_a0;
  FUN_0001059e();
  return;
}



void FUN_000106ba(void)

{
  int unaff_s0;
  undefined4 extraout_a0;
  
  FUN_000106ba();
  *(undefined4 *)(unaff_s0 + 0x54) = extraout_a0;
  FUN_0001059e();
  return;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000106de();
  return 0;
}



undefined4 FUN_000106de(void)

{
  FUN_000106de();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3b3b

void txu_cntrl_tkip_mic_append(txdesc *txdesc,uint8_t ac)

{
  char cVar1;
  txl_buffer_tag *ptVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  tx_pbd *ptVar6;
  undefined *puVar7;
  undefined *puVar8;
  tx_pbd *ptVar9;
  undefined auStack48 [4];
  mic_calc mic;
  
  iVar4 = **(int **)((uint)(txdesc->host).staid * 0x1b0 + 0xac);
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + 0x60);
    ptVar2 = (txdesc->lmac).buffer;
    if (cVar1 != '\x01') {
      if ((cVar1 == '\0') || (cVar1 == '\x03')) {
        ptVar6 = &ptVar2->tbd;
        do {
          ptVar9 = ptVar6;
          ptVar6 = (tx_pbd *)ptVar9->next;
        } while (ptVar6 != (tx_pbd *)0x0);
        ptVar9->next = (uint32_t)&ptVar2->tkip_mic_icv_pbd;
        (ptVar2->tkip_mic_icv_pbd).datastartptr = (uint32_t)ptVar2->tkip_mic_icv;
        (ptVar2->tkip_mic_icv_pbd).dataendptr = (uint32_t)(ptVar2->tkip_mic_icv + 3);
        (ptVar2->tkip_mic_icv_pbd).upatterntx = 0xcafefade;
        (ptVar2->tkip_mic_icv_pbd).bufctrlinfo = 0;
        (ptVar2->tkip_mic_icv_pbd).next = 0;
      }
      return;
    }
    ptVar6 = &ptVar2->tbd;
    do {
      ptVar9 = ptVar6;
      ptVar6 = (tx_pbd *)ptVar9->next;
    } while (ptVar6 != (tx_pbd *)0x0);
    ptVar9->next = (uint32_t)&ptVar2->tkip_mic_icv_pbd;
    (ptVar2->tkip_mic_icv_pbd).datastartptr = (uint32_t)ptVar2->tkip_mic_icv;
    (ptVar2->tkip_mic_icv_pbd).dataendptr = (uint32_t)(ptVar2->tkip_mic_icv + 0xb);
    (ptVar2->tkip_mic_icv_pbd).upatterntx = 0xcafefade;
    (ptVar2->tkip_mic_icv_pbd).bufctrlinfo = 0;
    (ptVar2->tkip_mic_icv_pbd).next = 0;
    ptVar2 = (txdesc->lmac).buffer;
    _LVL116();
    FUN_000107ce();
    for (uVar3 = (ptVar2->tbd).next; uVar3 != 0; uVar3 = *(uint32_t *)(uVar3 + 4)) {
      iVar4 = *(int *)(uVar3 + 4);
      if (iVar4 == 0) {
        FUN_000107e2();
        iVar5 = *(int *)(uVar3 + 8);
        do {
          puVar7 = auStack48 + iVar4;
          puVar8 = (undefined *)(iVar5 + iVar4);
          iVar4 += 1;
          *puVar8 = *puVar7;
        } while (iVar4 != 8);
        return;
      }
      FUN_00010822((*(int *)(uVar3 + 0xc) + 1) - *(int *)(uVar3 + 8));
    }
    FUN_00010834();
    ebreak();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL116(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int unaff_s2;
  
  _LVL116();
  FUN_000107ce();
  iVar1 = *(int *)(unaff_s2 + 0x3c);
  while( true ) {
    if (iVar1 == 0) {
      FUN_00010834();
      ebreak();
      return;
    }
    iVar2 = *(int *)(iVar1 + 4);
    if (iVar2 == 0) break;
    FUN_00010822((*(int *)(iVar1 + 0xc) + 1) - *(int *)(iVar1 + 8));
    iVar1 = *(int *)(iVar1 + 4);
  }
  FUN_000107e2();
  iVar1 = *(int *)(iVar1 + 8);
  do {
    puVar3 = &stack0x00000000 + iVar2;
    puVar4 = (undefined *)(iVar1 + iVar2);
    iVar2 += 1;
    *puVar4 = *puVar3;
  } while (iVar2 != 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000107ce(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int unaff_s2;
  
  FUN_000107ce();
  iVar1 = *(int *)(unaff_s2 + 0x3c);
  while( true ) {
    if (iVar1 == 0) {
      FUN_00010834();
      ebreak();
      return;
    }
    iVar2 = *(int *)(iVar1 + 4);
    if (iVar2 == 0) break;
    FUN_00010822((*(int *)(iVar1 + 0xc) + 1) - *(int *)(iVar1 + 8));
    iVar1 = *(int *)(iVar1 + 4);
  }
  FUN_000107e2();
  iVar1 = *(int *)(iVar1 + 8);
  do {
    puVar3 = &stack0x00000000 + iVar2;
    puVar4 = (undefined *)(iVar1 + iVar2);
    iVar2 += 1;
    *puVar4 = *puVar3;
  } while (iVar2 != 8);
  return;
}



void FUN_000107e2(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_000107e2();
  iVar1 = *(int *)(unaff_s0 + 8);
  do {
    puVar2 = &stack0x00000000 + unaff_s1;
    puVar3 = (undefined *)(iVar1 + unaff_s1);
    unaff_s1 += 1;
    *puVar3 = *puVar2;
  } while (unaff_s1 != 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010822(int param_1)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  while( true ) {
    FUN_00010822(param_1);
    unaff_s0 = *(int *)(unaff_s0 + 4);
    if (unaff_s0 == 0) {
      FUN_00010834();
      ebreak();
      return;
    }
    iVar1 = *(int *)(unaff_s0 + 4);
    if (iVar1 == 0) break;
    param_1 = (*(int *)(unaff_s0 + 0xc) + 1) - *(int *)(unaff_s0 + 8);
  }
  FUN_000107e2();
  iVar2 = *(int *)(unaff_s0 + 8);
  do {
    puVar3 = &stack0x00000000 + iVar1;
    puVar4 = (undefined *)(iVar2 + iVar1);
    iVar1 += 1;
    *puVar4 = *puVar3;
  } while (iVar1 != 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010834(void)

{
  FUN_00010834();
  ebreak();
  return;
}



// DWARF DIE: 3a52

void txu_cntrl_cfm(txdesc *txdesc)

{
  ushort uVar1;
  tx_cfm_tag *ptVar2;
  uint32_t *puVar3;
  
  puVar3 = (uint32_t *)(txdesc->host).status_addr;
  ptVar2 = ((txdesc->lmac).hw_desc)->cfm_ptr;
  uVar1 = (txdesc->host).flags;
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x200) == 0) goto _L0;
  }
  else {
    if (((uVar1 & 0x20) != 0) && (-1 < (int)(ptVar2->status << 8))) {
      _L0();
    }
    if (((txdesc->host).flags & 0x200) == 0) goto _L0;
    if ((txdesc->host).staid == -1) {
      FUN_000108a4();
    }
    FUN_000108b6();
  }
  *(undefined4 *)((uint)(txdesc->host).staid * 0x1b0 + 0x34) = 0;
_L0:
  ptVar2->status = ptVar2->status | 1;
  *(undefined2 *)&ptVar2->credits = 0x101;
  txdesc[-1].buf[0x6b] = 0;
  *puVar3 = ptVar2->status;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 *unaff_s2;
  
  _L0();
  if ((*(ushort *)(unaff_s0 + 0x32) & 0x200) != 0) {
    if (*(char *)(unaff_s0 + 0x30) == -1) {
      FUN_000108a4();
    }
    FUN_000108b6();
    *(undefined4 *)((uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + 0x34) = 0;
  }
  *(uint *)(unaff_s1 + 0x10) = *(uint *)(unaff_s1 + 0x10) | 1;
  *(undefined2 *)(unaff_s1 + 0xc) = 0x101;
  *(undefined4 *)(unaff_s0 + -0x54) = 0;
  *unaff_s2 = *(undefined4 *)(unaff_s1 + 0x10);
  return;
}



void FUN_000108a4(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 *unaff_s2;
  
  FUN_000108a4();
  FUN_000108b6();
  *(undefined4 *)((uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + 0x34) = 0;
  *(uint *)(unaff_s1 + 0x10) = *(uint *)(unaff_s1 + 0x10) | 1;
  *(undefined2 *)(unaff_s1 + 0xc) = 0x101;
  *(undefined4 *)(unaff_s0 + -0x54) = 0;
  *unaff_s2 = *(undefined4 *)(unaff_s1 + 0x10);
  return;
}



void FUN_000108b6(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 *unaff_s2;
  
  FUN_000108b6();
  *(undefined4 *)((uint)*(byte *)(unaff_s0 + 0x30) * 0x1b0 + 0x34) = 0;
  *(uint *)(unaff_s1 + 0x10) = *(uint *)(unaff_s1 + 0x10) | 1;
  *(undefined2 *)(unaff_s1 + 0xc) = 0x101;
  *(undefined4 *)(unaff_s0 + -0x54) = 0;
  *unaff_s2 = *(undefined4 *)(unaff_s1 + 0x10);
  return;
}



// DWARF DIE: 39a0

void txu_cntrl_protect_mgmt_frame(txdesc *txdesc,uint32_t frame,uint16_t hdr_len)

{
  ushort uVar1;
  uint8_t extraout_a0;
  uint8_t uStack20;
  int tail_len;
  
  if ((txdesc->umac).head_len == '\0') {
    _L0();
    (txdesc->umac).head_len = extraout_a0;
    (txdesc->umac).tail_len = uStack20;
  }
  uVar1 = *(ushort *)frame;
  *(undefined *)frame = *(undefined *)frame;
  *(byte *)(frame + 1) = (byte)((uint)uVar1 >> 8) | 0x40;
  _LVL155();
  return;
}



void _L0(void)

{
  ushort uVar1;
  int unaff_s0;
  ushort *unaff_s1;
  undefined extraout_a0;
  undefined in_stack_0000001c;
  
  _L0();
  *(undefined *)(unaff_s0 + 0x5e) = extraout_a0;
  *(undefined *)(unaff_s0 + 0x60) = in_stack_0000001c;
  uVar1 = *unaff_s1;
  *(char *)unaff_s1 = (char)uVar1;
  *(byte *)((int)unaff_s1 + 1) = (byte)((uint)uVar1 >> 8) | 0x40;
  _LVL155();
  return;
}



void _LVL155(void)

{
  _LVL155();
  return;
}


