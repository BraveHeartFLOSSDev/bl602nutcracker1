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

typedef struct scan_start_cfm scan_start_cfm, *Pscan_start_cfm;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

struct scan_start_cfm { // DWARF DIE: 3bfa
    uint8_t status;
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

typedef char __int8_t;

typedef __int8_t int8_t;

struct scan_chan_tag { // DWARF DIE: dc5
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct mac_addr { // DWARF DIE: a51
    uint16_t array[3];
};

struct mac_ssid { // DWARF DIE: a81
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct scan_start_req { // DWARF DIE: 2fc7
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

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictf5_for___value anon_union.conflictf5_for___value, *Panon_union.conflictf5_for___value;

typedef uint wint_t;

union anon_union.conflictf5_for___value { // DWARF DIE: f5
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 127
    int __count;
    union anon_union.conflictf5_for___value __value;
};

typedef union anon_union.conflictf5 anon_union.conflictf5, *Panon_union.conflictf5;

union anon_union.conflictf5 { // DWARF DIE: f5
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 120f
    uint32_t word[4];
};

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

typedef union anon_union.conflict2b12_for_field_0 anon_union.conflict2b12_for_field_0, *Panon_union.conflict2b12_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict131b_for_field_3 anon_union.conflict131b_for_field_3, *Panon_union.conflict131b_for_field_3;

typedef union anon_union.conflict1340_for_field_4 anon_union.conflict1340_for_field_4, *Panon_union.conflict1340_for_field_4;

typedef union anon_union.conflict1365_for_field_5 anon_union.conflict1365_for_field_5, *Panon_union.conflict1365_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: ef3
    struct co_list_hdr * next;
};

struct hostdesc { // DWARF DIE: 1d1d
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

struct tx_cfm_tag { // DWARF DIE: 1778
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

struct tx_policy_tbl { // DWARF DIE: 127f
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 12f0
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

union anon_union.conflict2b12_for_field_0 { // DWARF DIE: 2b12
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct lmacdesc { // DWARF DIE: 1e89
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct umacdesc { // DWARF DIE: 1df9
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

union anon_union.conflict131b_for_field_3 { // DWARF DIE: 131b
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

union anon_union.conflict1365_for_field_5 { // DWARF DIE: 1365
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict1340_for_field_4 { // DWARF DIE: 1340
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_hd { // DWARF DIE: 138a
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict131b_for_field_3 field_3;
    union anon_union.conflict1340_for_field_4 field_4;
    union anon_union.conflict1365_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 17f7
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct txdesc { // DWARF DIE: 1fa5
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct dma_desc { // DWARF DIE: 1135
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd { // DWARF DIE: 1453
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct txl_buffer_control { // DWARF DIE: 1e55
    union anon_union.conflict2b12_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct txl_buffer_tag { // DWARF DIE: 1ec4
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

struct tx_agg_desc { // DWARF DIE: 1828
    uint8_t reserved;
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 1189
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: f14
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag { // DWARF DIE: fc1
    struct co_list prog;
};

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag { // DWARF DIE: f80
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 15b3
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

struct phy_channel_info { // DWARF DIE: 11e7
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 1648
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 14a8
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

struct rx_payloaddesc { // DWARF DIE: 171b
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 16ab
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef uchar UINT8;

typedef ushort UINT16;

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct mm_chan_ctxt_add_req { // DWARF DIE: 1a9f
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 1247
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 20ce
};

struct ke_env_tag { // DWARF DIE: 207f
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

typedef uint16_t ke_state_t;

typedef uint16_t ke_task_id_t;

typedef uint16_t ke_msg_id_t;

typedef struct scanu_raw_send_req scanu_raw_send_req, *Pscanu_raw_send_req;

struct scanu_raw_send_req { // DWARF DIE: 3186
    void * pkt;
    uint32_t len;
};

typedef struct scanu_start_req scanu_start_req, *Pscanu_start_req;

struct scanu_start_req { // DWARF DIE: 30d6
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

typedef enum anon_enum_16.conflict3096 {
    SCANU_JOIN_CFM=4099,
    SCANU_JOIN_REQ=4098,
    SCANU_RAW_SEND_CFM=4102,
    SCANU_RAW_SEND_REQ=4101,
    SCANU_RESULT_IND=4100,
    SCANU_START_CFM=4097,
    SCANU_START_REQ=4096
} anon_enum_16.conflict3096;

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list { // DWARF DIE: 2970
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 29b8
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

typedef union anon_union.conflict38fa_for_u anon_union.conflict38fa_for_u, *Panon_union.conflict38fa_for_u;

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef struct anon_struct.conflict3732 anon_struct.conflict3732, *Panon_struct.conflict3732;

typedef struct anon_struct.conflict37ff anon_struct.conflict37ff, *Panon_struct.conflict37ff;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct mac_edca_param_set mac_edca_param_set, *Pmac_edca_param_set;

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

typedef struct SecurityMode_t SecurityMode_t, *PSecurityMode_t;

typedef struct Cipher_t Cipher_t, *PCipher_t;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictb7e_for_u anon_union.conflictb7e_for_u, *Panon_union.conflictb7e_for_u;

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct anon_struct.conflictb1e anon_struct.conflictb1e, *Panon_struct.conflictb1e;

typedef struct anon_struct.conflictb55 anon_struct.conflictb55, *Panon_struct.conflictb55;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct Cipher_t { // DWARF DIE: 337a
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct chan_tbtt_tag { // DWARF DIE: 1b4e
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

struct mac_edca_param_set { // DWARF DIE: cf1
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct txl_frame_cfm_tag { // DWARF DIE: 2c35
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 2c5d
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

struct anon_struct.conflict37ff { // DWARF DIE: 37ff
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

struct anon_struct.conflict3732 { // DWARF DIE: 3732
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

union anon_union.conflict38fa_for_u { // DWARF DIE: 38fa
    struct anon_struct.conflict3732 sta;
    struct anon_struct.conflict37ff ap;
};

struct mac_rateset { // DWARF DIE: ad6
    uint8_t length;
    uint8_t array[12];
};

struct anon_struct.conflictb1e { // DWARF DIE: b1e
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictb55 { // DWARF DIE: b55
    uint32_t key[4];
};

union anon_union.conflictb7e_for_u { // DWARF DIE: b7e
    struct anon_struct.conflictb1e mic;
    struct anon_struct.conflictb55 mfp;
};

struct key_info_tag { // DWARF DIE: ba3
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb7e_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

struct mobility_domain { // DWARF DIE: 352a
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
};

struct mac_htcapability { // DWARF DIE: c29
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

struct SecurityMode_t { // DWARF DIE: 33e0
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

struct mac_bss_info { // DWARF DIE: 3552
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

struct vif_info_tag { // DWARF DIE: 391d
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
    union anon_union.conflict38fa_for_u u;
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

struct chan_ctxt_tag { // DWARF DIE: 1b9d
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

typedef union anon_union.conflict38fa anon_union.conflict38fa, *Panon_union.conflict38fa;

union anon_union.conflict38fa { // DWARF DIE: 38fa
    struct anon_struct.conflict3732 sta;
    struct anon_struct.conflict37ff ap;
};

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag { // DWARF DIE: 3a58
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 2ec5
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 2e7e
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 2cb1
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 2369
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

struct bam_env_tag { // DWARF DIE: 23dc
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

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 26f1
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

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

typedef struct sta_pol_tbl_cntl sta_pol_tbl_cntl, *Psta_pol_tbl_cntl;

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef struct rc_rate_stats rc_rate_stats, *Prc_rate_stats;

typedef struct step step, *Pstep;

typedef union anon_union.conflict3289_for_rate_map anon_union.conflict3289_for_rate_map, *Panon_union.conflict3289_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 31ec
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

union anon_union.conflict3289_for_rate_map { // DWARF DIE: 3289
    uint8_t ht[4];
};

struct step { // DWARF DIE: 3262
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

struct rc_sta_stats { // DWARF DIE: 258b
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
    union anon_union.conflict3289_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 253c
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2501
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct mac_vhtcapability { // DWARF DIE: c9c
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

struct mac_sta_info { // DWARF DIE: e0d
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

struct sta_info_tag { // DWARF DIE: 2740
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

struct sta_info_env_tag { // DWARF DIE: 2929
    struct co_list free_sta_list;
};

typedef struct chan_env_tag chan_env_tag, *Pchan_env_tag;

struct chan_env_tag { // DWARF DIE: 1c2d
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

struct __locale_t { // DWARF DIE: 904
};

typedef union anon_union.conflict3289 anon_union.conflict3289, *Panon_union.conflict3289;

union anon_union.conflict3289 { // DWARF DIE: 3289
    uint8_t ht[4];
};

typedef long __int32_t;

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

struct me_chan_config_req { // DWARF DIE: 32ce
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct me_env_tag { // DWARF DIE: 3496
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

typedef enum anon_enum_8.conflict9d9 {
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
    TX_DEFAULT_NDPA_BRP=2
} anon_enum_8.conflict9d9;

typedef struct mac_scan_result mac_scan_result, *Pmac_scan_result;

struct mac_scan_result { // DWARF DIE: d2a
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

typedef union anon_union.conflictb7e anon_union.conflictb7e, *Panon_union.conflictb7e;

union anon_union.conflictb7e { // DWARF DIE: b7e
    struct anon_struct.conflictb1e mic;
    struct anon_struct.conflictb55 mfp;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 1a0f
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1a3b
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 2f6b
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 2f26
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 2a61
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef union anon_union.conflict2b12 anon_union.conflict2b12, *Panon_union.conflict2b12;

union anon_union.conflict2b12 { // DWARF DIE: 2b12
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 2a39
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 2a89
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

struct txl_buffer_env_tag { // DWARF DIE: 2b34
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict131b anon_union.conflict131b, *Panon_union.conflict131b;

union anon_union.conflict131b { // DWARF DIE: 131b
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict1365 anon_union.conflict1365, *Panon_union.conflict1365;

union anon_union.conflict1365 { // DWARF DIE: 1365
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1340 anon_union.conflict1340, *Panon_union.conflict1340;

union anon_union.conflict1340 { // DWARF DIE: 1340
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef enum rxu_msg_tag {
    RXU_MGT_IND=11264,
    RXU_NULL_DATA=11265
} rxu_msg_tag;

typedef struct rxu_mgt_ind rxu_mgt_ind, *Prxu_mgt_ind;

struct rxu_mgt_ind { // DWARF DIE: 3c53
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

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8cf_for__new anon_union.conflict8cf_for__new, *Panon_union.conflict8cf_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict743 anon_struct.conflict743, *Panon_struct.conflict743;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 17d
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 6fa
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 6b5
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 325
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 353
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

struct __tm { // DWARF DIE: 1ed
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

struct anon_struct.conflict743 { // DWARF DIE: 743
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

union anon_union.conflict8cf_for__new { // DWARF DIE: 8cf
    struct anon_struct.conflict743 _reent;
    struct anon_struct.conflict743 _unused;
};

struct _on_exit_args { // DWARF DIE: 270
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2c5
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4bf
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
    union anon_union.conflict8cf_for__new _new;
    undefined field_0x128;
    undefined field_0x129;
    undefined field_0x12a;
    undefined field_0x12b;
    undefined field_0x12c;
    undefined field_0x12d;
    undefined field_0x12e;
    undefined field_0x12f;
    undefined field_0x130;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
    undefined field_0x134;
    undefined field_0x135;
    undefined field_0x136;
    undefined field_0x137;
    undefined field_0x138;
    undefined field_0x139;
    undefined field_0x13a;
    undefined field_0x13b;
    undefined field_0x13c;
    undefined field_0x13d;
    undefined field_0x13e;
    undefined field_0x13f;
    undefined field_0x140;
    undefined field_0x141;
    undefined field_0x142;
    undefined field_0x143;
    undefined field_0x144;
    undefined field_0x145;
    undefined field_0x146;
    undefined field_0x147;
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

typedef union anon_union.conflict8cf anon_union.conflict8cf, *Panon_union.conflict8cf;

union anon_union.conflict8cf { // DWARF DIE: 8cf
    struct anon_struct.conflict743 _reent;
    struct anon_struct.conflict743 _unused;
    undefined1 field2[240]; // Automatically generated padding to match DWARF declared size
};

typedef uint size_t;

typedef struct scanu_env_tag scanu_env_tag, *Pscanu_env_tag;

struct scanu_env_tag { // DWARF DIE: 3ad7
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

struct scanu_add_ie_tag { // DWARF DIE: 3b76
    struct dma_desc dma_desc;
    uint32_t buf[50];
};

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

struct rx_cntrl_ipcdesc { // DWARF DIE: 220e
    uint32_t host_id;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 2256
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 222b
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_rx_status { // DWARF DIE: 2113
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

struct rxu_cntrl_env_tag { // DWARF DIE: 228f
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

struct mac_hdr { // DWARF DIE: 1095
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
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




// DWARF DIE: 4176

void cfm_raw_send(void *env,uint32_t status)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 3fa6

int scanu_raw_send_req_handler
              (ke_msg_id_t msgid,scanu_raw_send_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  _L0();
  FUN_00010038();
  uVar1 = param->len;
  iVar2 = _L0();
  if (iVar2 != 0) {
    _LVL13();
    *(undefined *)(iVar2 + 0x30) = 0xff;
    *(undefined4 *)(iVar2 + 0x2cc) = 0;
    iVar3 = *(int *)(iVar2 + 0x6c);
    *(undefined *)(iVar2 + 0x2f) = 0;
    *(undefined *)(iVar2 + 0x5e) = 0;
    *(undefined *)(iVar2 + 0x60) = 0;
    *(int *)(iVar2 + 0x2d0) = iVar2;
    *(uint32_t *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + (uVar1 - 1);
    *(uint32_t *)(iVar3 + 0x1c) = uVar1 + 4;
    FUN_000100a0();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  _L0();
  FUN_00010038();
  iVar1 = *(int *)(unaff_s0 + 4);
  iVar2 = _L0();
  if (iVar2 != 0) {
    _LVL13();
    *(undefined *)(iVar2 + 0x30) = 0xff;
    *(undefined4 *)(iVar2 + 0x2cc) = 0;
    iVar3 = *(int *)(iVar2 + 0x6c);
    *(undefined *)(iVar2 + 0x2f) = 0;
    *(undefined *)(iVar2 + 0x5e) = 0;
    *(undefined *)(iVar2 + 0x60) = 0;
    *(int *)(iVar2 + 0x2d0) = iVar2;
    *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + iVar1 + -1;
    *(int *)(iVar3 + 0x1c) = iVar1 + 4;
    FUN_000100a0();
  }
  return 0;
}



undefined4 FUN_00010038(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00010038();
  iVar1 = *(int *)(unaff_s0 + 4);
  iVar2 = _L0();
  if (iVar2 != 0) {
    _LVL13();
    *(undefined *)(iVar2 + 0x30) = 0xff;
    *(undefined4 *)(iVar2 + 0x2cc) = 0;
    iVar3 = *(int *)(iVar2 + 0x6c);
    *(undefined *)(iVar2 + 0x2f) = 0;
    *(undefined *)(iVar2 + 0x5e) = 0;
    *(undefined *)(iVar2 + 0x60) = 0;
    *(int *)(iVar2 + 0x2d0) = iVar2;
    *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + iVar1 + -1;
    *(int *)(iVar3 + 0x1c) = iVar1 + 4;
    FUN_000100a0();
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    _LVL13();
    *(undefined *)(iVar1 + 0x30) = 0xff;
    *(undefined4 *)(iVar1 + 0x2cc) = 0;
    iVar2 = *(int *)(iVar1 + 0x6c);
    *(undefined *)(iVar1 + 0x2f) = 0;
    *(undefined *)(iVar1 + 0x5e) = 0;
    *(undefined *)(iVar1 + 0x60) = 0;
    *(int *)(iVar1 + 0x2d0) = iVar1;
    *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + unaff_s1 + -1;
    *(int *)(iVar2 + 0x1c) = unaff_s1 + 4;
    FUN_000100a0();
  }
  return 0;
}



undefined4 _LVL13(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  _LVL13();
  *(undefined *)(unaff_s0 + 0x30) = 0xff;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  iVar1 = *(int *)(unaff_s0 + 0x6c);
  *(undefined *)(unaff_s0 + 0x2f) = 0;
  *(undefined *)(unaff_s0 + 0x5e) = 0;
  *(undefined *)(unaff_s0 + 0x60) = 0;
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + unaff_s1 + -1;
  *(int *)(iVar1 + 0x1c) = unaff_s1 + 4;
  FUN_000100a0();
  return 0;
}



undefined4 FUN_000100a0(void)

{
  FUN_000100a0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3ef8

int scanu_join_req_handler
              (ke_msg_id_t msgid,scanu_start_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  *(undefined4 *)((uint)param->vif_idx * 0x5d8 + 0x3e0) = 0;
  _DAT_0000016a = 1;
  _DAT_0000016c = *(undefined4 *)(param->bssid).array;
  _DAT_00000170 = (param->bssid).array[2];
  psRam00000000 = param;
  _DAT_00000168 = src_id;
  if ((*(byte *)(param->bssid).array & 1) != 0) {
    FUN_00010114();
  }
  _L0();
  return 1;
}



undefined4 FUN_00010114(void)

{
  FUN_00010114();
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 41c7

int scanu_start_req_handler
              (ke_msg_id_t msgid,scanu_start_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  _DAT_0000016a = 0;
  _DAT_0000016c = *(undefined4 *)(param->bssid).array;
  _DAT_00000170 = (param->bssid).array[2];
  psRam00000000 = param;
  _DAT_00000168 = src_id;
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// DWARF DIE: 3da6

int rxu_mgt_ind_handler(ke_msg_id_t msgid,rxu_mgt_ind *param,ke_task_id_t dest_id,
                       ke_task_id_t src_id)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 3e2a

int scan_done_ind_handler(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  DAT_0000016b += '\x01';
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3e8e

int scan_start_cfm_handler
              (ke_msg_id_t msgid,scan_start_cfm *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  if (param->status != '\0') {
    _L0();
    return 0;
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}


