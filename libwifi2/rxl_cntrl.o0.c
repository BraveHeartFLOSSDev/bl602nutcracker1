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

struct ipc_a2e_msg { // DWARF DIE: 3eb1
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

struct mac_addr { // DWARF DIE: a99
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 21dc
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

struct txdesc_host { // DWARF DIE: 24de
    uint32_t ready;
    struct hostdesc host;
    uint32_t pad_txdesc[55];
    uint32_t pad_buf[128];
};

struct ipc_shared_env_tag { // DWARF DIE: 3eef
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

typedef union anon_union.conflict2fea_for_field_0 anon_union.conflict2fea_for_field_0, *Panon_union.conflict2fea_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1545_for_field_3 anon_union.conflict1545_for_field_3, *Panon_union.conflict1545_for_field_3;

typedef union anon_union.conflict156a_for_field_4 anon_union.conflict156a_for_field_4, *Panon_union.conflict156a_for_field_4;

typedef union anon_union.conflict158f_for_field_5 anon_union.conflict158f_for_field_5, *Panon_union.conflict158f_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: e90
    struct co_list_hdr * next;
};

union anon_union.conflict156a_for_field_4 { // DWARF DIE: 156a
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct tx_cfm_tag { // DWARF DIE: 1932
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

union anon_union.conflict158f_for_field_5 { // DWARF DIE: 158f
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

union anon_union.conflict1545_for_field_3 { // DWARF DIE: 1545
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd { // DWARF DIE: 15b4
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1545_for_field_3 field_3;
    union anon_union.conflict156a_for_field_4 field_4;
    union anon_union.conflict158f_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 19a1
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct lmacdesc { // DWARF DIE: 2348
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

struct umacdesc { // DWARF DIE: 22b8
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

struct txdesc { // DWARF DIE: 2464
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 151a
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct dma_desc { // DWARF DIE: f6d
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd { // DWARF DIE: 167d
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct tx_policy_tbl { // DWARF DIE: 14a9
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict2fea_for_field_0 { // DWARF DIE: 2fea
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 2314
    union anon_union.conflict2fea_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct txl_buffer_tag { // DWARF DIE: 2383
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

struct tx_agg_desc { // DWARF DIE: 19d2
    uint8_t reserved;
};

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag { // DWARF DIE: 1330
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct ps_env_tag { // DWARF DIE: 3e15
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

typedef struct anon_struct.conflict41be anon_struct.conflict41be, *Panon_struct.conflict41be;

struct anon_struct.conflict41be { // DWARF DIE: 41be
    uint8_t mac[6];
    uint8_t used;
};

typedef struct apm apm, *Papm;

typedef struct apm_start_req apm_start_req, *Papm_start_req;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: eb6
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct apm_start_req { // DWARF DIE: 4265
};

struct apm { // DWARF DIE: 41e2
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
    struct anon_struct.conflict41be aid_list[10];
    undefined field_0x5e;
    undefined field_0x5f;
};

typedef struct txl_list txl_list, *Ptxl_list;

struct txl_list { // DWARF DIE: 2e48
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 2e90
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 315c
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 30e0
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 3108
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 2804
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

struct bam_env_tag { // DWARF DIE: 2877
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

struct chan_tbtt_tag { // DWARF DIE: 200d
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct mm_chan_ctxt_add_req { // DWARF DIE: 1efa
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 205c
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

struct chan_env_tag { // DWARF DIE: 20ec
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

struct mblock_free { // DWARF DIE: 112f
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 3472
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

struct scan_chan_tag { // DWARF DIE: d62
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct me_chan_config_req { // DWARF DIE: 35d6
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: c71
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

struct me_env_tag { // DWARF DIE: 3786
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

struct mobility_domain { // DWARF DIE: 381a
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

struct Cipher_t { // DWARF DIE: 366a
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct mac_edca_param_set { // DWARF DIE: d29
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset { // DWARF DIE: b1e
    uint8_t length;
    uint8_t array[12];
};

struct mac_ssid { // DWARF DIE: ac9
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct SecurityMode_t { // DWARF DIE: 36d0
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

struct mac_bss_info { // DWARF DIE: 3842
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

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictbc6_for_u anon_union.conflictbc6_for_u, *Panon_union.conflictbc6_for_u;

typedef struct anon_struct.conflictb66 anon_struct.conflictb66, *Panon_struct.conflictb66;

typedef struct anon_struct.conflictb9d anon_struct.conflictb9d, *Panon_struct.conflictb9d;

struct anon_struct.conflictb66 { // DWARF DIE: b66
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictb9d { // DWARF DIE: b9d
    uint32_t key[4];
};

union anon_union.conflictbc6_for_u { // DWARF DIE: bc6
    struct anon_struct.conflictb66 mic;
    struct anon_struct.conflictb9d mfp;
};

struct key_info_tag { // DWARF DIE: beb
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictbc6_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef union anon_union.conflictbc6 anon_union.conflictbc6, *Panon_union.conflictbc6;

union anon_union.conflictbc6 { // DWARF DIE: bc6
    struct anon_struct.conflictb66 mic;
    struct anon_struct.conflictb9d mfp;
};

typedef enum anon_enum_8.conflicta21 {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_VI=2,
    AC_VO=3,
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
    PHY_PRIM=0,
    PHY_SEC=1,
    PS_MODE_OFF=0,
    PS_MODE_ON=1,
    PS_MODE_ON_DYN=2,
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
} anon_enum_8.conflicta21;

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: cd4
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: daa
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

struct ke_msg_handler { // DWARF DIE: 1bff
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1c2b
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 4007
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

struct ipc_emb_env_tag { // DWARF DIE: 3f49
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

typedef enum anon_enum_16.conflict1b08 {
    HAL_AC0_TIMER_BIT=1,
    HAL_AC1_TIMER_BIT=2,
    HAL_AC2_TIMER_BIT=4,
    HAL_AC3_TIMER_BIT=8,
    HAL_BCN_TIMER_BIT=16,
    HAL_IDLE_TIMER_BIT=32,
    HAL_KE_TIMER_BIT=256,
    HAL_MM_TIMER_BIT=-128,
    HAL_RX_TIMER_BIT=64
} anon_enum_16.conflict1b08;

typedef uint wint_t;

typedef long __int32_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 26f1
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

struct rx_cntrl_dupli { // DWARF DIE: 26c6
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 26a9
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 25ae
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

struct rxu_cntrl_env_tag { // DWARF DIE: 272a
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

struct mac_hdr_long_qos { // DWARF DIE: 126e
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
    struct mac_addr addr4;
    uint16_t qos;
};

typedef struct mac_hdr_qos mac_hdr_qos, *Pmac_hdr_qos;

struct mac_hdr_qos { // DWARF DIE: 11fd
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

struct la_mem_format { // DWARF DIE: 1439
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: fc1
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 1371
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 17dd
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

struct phy_channel_info { // DWARF DIE: 1411
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 1872
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 16d2
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

struct rx_payloaddesc { // DWARF DIE: 18d5
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 104d
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef struct rxl_hwdesc_env_tag rxl_hwdesc_env_tag, *Prxl_hwdesc_env_tag;

struct rxl_hwdesc_env_tag { // DWARF DIE: 40db
    struct rx_pbd * last;
    struct rx_pbd * free;
};

typedef struct mm_traffic_req_ind mm_traffic_req_ind, *Pmm_traffic_req_ind;

struct mm_traffic_req_ind { // DWARF DIE: 1f88
    uint8_t sta_idx;
    uint8_t pkt_cnt;
    _Bool uapsd;
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

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct mm_ps_change_ind mm_ps_change_ind, *Pmm_ps_change_ind;

struct mm_ps_change_ind { // DWARF DIE: 1f5d
    uint8_t sta_idx;
    uint8_t ps_state;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 1471
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct rxl_cntrl_env_tag rxl_cntrl_env_tag, *Prxl_cntrl_env_tag;

struct rxl_cntrl_env_tag { // DWARF DIE: ffe
    struct co_list ready;
    struct rx_dmadesc * first;
    struct rx_dmadesc * last;
    struct rx_dmadesc * free;
    uint32_t packet_stack_cnt;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 10e0
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef uint16_t ke_state_t;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict3c17_for_u anon_union.conflict3c17_for_u, *Panon_union.conflict3c17_for_u;

typedef struct anon_struct.conflict3a4f anon_struct.conflict3a4f, *Panon_struct.conflict3a4f;

typedef struct anon_struct.conflict3b1c anon_struct.conflict3b1c, *Panon_struct.conflict3b1c;

struct anon_struct.conflict3a4f { // DWARF DIE: 3a4f
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

struct anon_struct.conflict3b1c { // DWARF DIE: 3b1c
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

union anon_union.conflict3c17_for_u { // DWARF DIE: 3c17
    struct anon_struct.conflict3a4f sta;
    struct anon_struct.conflict3b1c ap;
};

struct vif_info_tag { // DWARF DIE: 3c3a
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
    union anon_union.conflict3c17_for_u u;
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

typedef union anon_union.conflict3c17 anon_union.conflict3c17, *Panon_union.conflict3c17;

union anon_union.conflict3c17 { // DWARF DIE: 3c17
    struct anon_struct.conflict3a4f sta;
    struct anon_struct.conflict3b1c ap;
};

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag { // DWARF DIE: 3d75
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 3370
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 3329
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 2bc9
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

typedef union anon_union.conflict3591_for_rate_map anon_union.conflict3591_for_rate_map, *Panon_union.conflict3591_for_rate_map;

struct rc_rate_stats { // DWARF DIE: 34f4
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step { // DWARF DIE: 356a
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

union anon_union.conflict3591_for_rate_map { // DWARF DIE: 3591
    uint8_t ht[4];
};

struct rc_sta_stats { // DWARF DIE: 2a63
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
    union anon_union.conflict3591_for_rate_map rate_map;
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

struct sta_pol_tbl_cntl { // DWARF DIE: 2a14
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 29d9
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 2c18
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

struct sta_info_env_tag { // DWARF DIE: 2e01
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

typedef struct td_env_tag td_env_tag, *Ptd_env_tag;

struct td_env_tag { // DWARF DIE: 410f
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

typedef union anon_union.conflict3591 anon_union.conflict3591, *Panon_union.conflict3591;

union anon_union.conflict3591 { // DWARF DIE: 3591
    uint8_t ht[4];
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 3416
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 33d1
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 2f39
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef union anon_union.conflict2fea anon_union.conflict2fea, *Panon_union.conflict2fea;

union anon_union.conflict2fea { // DWARF DIE: 2fea
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 2f11
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 2f61
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

struct txl_buffer_env_tag { // DWARF DIE: 300c
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict1545 anon_union.conflict1545, *Panon_union.conflict1545;

union anon_union.conflict1545 { // DWARF DIE: 1545
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict158f anon_union.conflict158f, *Panon_union.conflict158f;

union anon_union.conflict158f { // DWARF DIE: 158f
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict156a anon_union.conflict156a, *Panon_union.conflict156a;

union anon_union.conflict156a { // DWARF DIE: 156a
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




// DWARF DIE: 4f0e

void mm_ps_change_ind(uint8_t sta_idx,uint8_t ps_state)

{
  undefined3 in_register_00002029;
  uint8_t *extraout_a0;
  
  _L0();
  *(uint8_t *)(CONCAT31(in_register_00002029,sta_idx) * 0x1b0 + 0x1c) = ps_state;
  *extraout_a0 = sta_idx;
  extraout_a0[1] = ps_state;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined unaff_s0;
  int unaff_s1;
  undefined *extraout_a0;
  
  _L0();
  *(undefined *)(unaff_s1 * 0x1b0 + 0x1c) = unaff_s0;
  *extraout_a0 = (char)unaff_s1;
  extraout_a0[1] = unaff_s0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4e01

void rxl_mpdu_transfer(rx_swdesc *swdesc)

{
  rx_pbd *prVar1;
  rx_pbd *prVar2;
  rx_pbd *prVar3;
  rx_dmadesc *prVar4;
  
  prVar4 = swdesc->dma_hdrdesc;
  prVar1 = (rx_pbd *)(prVar4->hd).first_pbd_ptr;
  _L0();
  prVar4->payl_offset = uRam00000000;
  swdesc->pbd_count = '\0';
  prVar3 = (rx_pbd *)0x0;
  do {
    prVar2 = prVar1;
    if ((prVar2->bufstatinfo & 1) != 0) {
      swdesc->spare_pbd = prVar2;
      swdesc->last_pbd = prVar3;
      return;
    }
    prVar1 = (rx_pbd *)prVar2->next;
    swdesc->pbd_count = swdesc->pbd_count + '\x01';
    prVar3 = prVar2;
  } while (prVar1 != (rx_pbd *)0x0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s2;
  
  _L0();
  *(undefined4 *)(unaff_s2 + 0x54) = uRam00000000;
  *(undefined *)(unaff_s0 + 0x1d) = 0;
  iVar2 = 0;
  do {
    iVar1 = unaff_s1;
    if ((*(ushort *)(iVar1 + 0x10) & 1) != 0) {
      *(int *)(unaff_s0 + 0x10) = iVar1;
      *(int *)(unaff_s0 + 0xc) = iVar2;
      return;
    }
    unaff_s1 = *(int *)(iVar1 + 4);
    *(char *)(unaff_s0 + 0x1d) = *(char *)(unaff_s0 + 0x1d) + '\x01';
    iVar2 = iVar1;
  } while (unaff_s1 != 0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4b79

void rxl_init(void)

{
  _L0();
  _L0();
  FUN_000100f0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  _L0();
  FUN_000100f0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_000100f0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100f0(void)

{
  FUN_000100f0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 45b7

void rxl_cntrl_dump(void)

{
  int extraout_a0;
  int *piVar1;
  
  _L0();
  piVar1 = piRam00000000;
  if (extraout_a0 != 0) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
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
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 44cb

void rxl_timer_int_handler(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  _DAT_44b0807c = 0xa0000;
  while ((_DAT_00000008 != 0 && (*(int *)(_DAT_00000008 + 0x40) << 0x11 < 0))) {
    iVar2 = *(int *)(_DAT_00000008 + 0xc);
    puVar1 = (undefined4 *)(_DAT_00000008 + 8);
    _DAT_00000008 = *(int *)(_DAT_00000008 + 4);
    *(undefined4 *)(iVar2 + 8) = *puVar1;
    iVar3 = *(int *)(*(int *)(iVar2 + 4) + 8);
    if (*(short *)(*(int *)(iVar2 + 4) + 0x1c) == 0) {
      if (iVar3 != 0) {
        _L0(0xfa);
        return;
      }
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      _L0();
    }
    else {
      if (iVar3 == 0) {
        _L0(0xd8);
      }
      else {
        _LVL44();
      }
    }
  }
  if (iRam00000000 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL44(void)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  int iVar2;
  
  do {
    _LVL44();
    while( true ) {
      while( true ) {
        iVar2 = *(int *)(unaff_s0 + 8);
        if ((iVar2 == 0) || (-1 < *(int *)(iVar2 + 0x40) << 0x11)) {
          if (*unaff_s1 == 0) {
            return;
          }
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        iVar1 = *(int *)(iVar2 + 0xc);
        *(undefined4 *)(unaff_s0 + 8) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
        iVar2 = *(int *)(*(int *)(iVar1 + 4) + 8);
        if (*(short *)(*(int *)(iVar1 + 4) + 0x1c) != 0) break;
        if (iVar2 != 0) {
          _L0(0xfa);
          return;
        }
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        _L0();
      }
      if (iVar2 != 0) break;
      _L0(0xd8);
    }
  } while( true );
}



void _L0(undefined4 param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  int iVar2;
  
  do {
    _L0(param_1);
    while( true ) {
      while( true ) {
        iVar2 = *(int *)(unaff_s0 + 8);
        if ((iVar2 == 0) || (-1 < *(int *)(iVar2 + 0x40) << 0x11)) {
          if (*unaff_s1 == 0) {
            return;
          }
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        iVar1 = *(int *)(iVar2 + 0xc);
        *(undefined4 *)(unaff_s0 + 8) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
        iVar2 = *(int *)(*(int *)(iVar1 + 4) + 8);
        if (*(short *)(*(int *)(iVar1 + 4) + 0x1c) != 0) break;
        if (iVar2 != 0) {
          _L0(0xfa);
          return;
        }
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        _L0();
      }
      if (iVar2 == 0) break;
      _LVL44();
    }
    param_1 = 0xd8;
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  int iVar2;
  
  do {
    _L0();
    while( true ) {
      iVar2 = *(int *)(unaff_s0 + 8);
      if ((iVar2 == 0) || (-1 < *(int *)(iVar2 + 0x40) << 0x11)) {
        if (*unaff_s1 == 0) {
          return;
        }
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar1 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(unaff_s0 + 8) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
      iVar2 = *(int *)(*(int *)(iVar1 + 4) + 8);
      if (*(short *)(*(int *)(iVar1 + 4) + 0x1c) == 0) break;
      if (iVar2 == 0) {
        _L0(0xd8);
      }
      else {
        _LVL44();
      }
    }
    if (iVar2 != 0) {
      _L0(0xfa);
      return;
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4487

void rxl_timeout_int_handler(void)

{
  _DAT_44b0808c = _DAT_44b0808c & 0xffffffbf;
  return;
}



// DWARF DIE: 4474

void rxl_dma_int_handler(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 441b

void rxl_dma_evt(int dummy)

{
  _L0();
  _DAT_44a00020 = 0x20;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  _DAT_44a00020 = 0x20;
  return;
}



// DWARF DIE: 43e0

void rxl_frame_release(rx_swdesc *swdesc)

{
  _LVL64();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL64(void)

{
  _LVL64();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 50a5

void rxl_mpdu_free(rx_swdesc *swdesc)

{
  ushort uVar1;
  rx_pbd *prVar2;
  rx_pbd *prVar3;
  rx_pbd *prVar4;
  
  prVar2 = (rx_pbd *)(swdesc->dma_hdrdesc->hd).first_pbd_ptr;
  _L0();
  swdesc->use_in_tcpip = '\0';
  swdesc->dma_hdrdesc->use_in_tcpip = 0;
  prVar4 = (rx_pbd *)0x0;
  do {
    prVar3 = prVar2;
    uVar1 = prVar3->bufstatinfo;
    prVar3[1].upattern = 0;
    if ((uVar1 & 1) != 0) {
      swdesc->spare_pbd = prVar3;
      swdesc->last_pbd = prVar4;
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    prVar2 = (rx_pbd *)prVar3->next;
    prVar4 = prVar3;
  } while ((rx_pbd *)prVar3->next != (rx_pbd *)0x0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int in_stack_0000000c;
  
  _L0();
  *(undefined *)(in_stack_0000000c + 0x1e) = 0;
  *(undefined4 *)(*(int *)(in_stack_0000000c + 4) + 0x60) = 0;
  iVar2 = 0;
  do {
    iVar1 = unaff_s0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    if ((*(ushort *)(iVar1 + 0x10) & 1) != 0) {
      *(int *)(in_stack_0000000c + 0x10) = iVar1;
      *(int *)(in_stack_0000000c + 0xc) = iVar2;
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    unaff_s0 = *(int *)(iVar1 + 4);
    iVar2 = iVar1;
  } while (*(int *)(iVar1 + 4) != 0);
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



// DWARF DIE: 4619

void rxl_cntrl_evt(int dummy)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  int iStack100;
  undefined4 uStack68;
  uint32_t tim;
  
  iStack100 = 5;
  while( true ) {
    iVar3 = iRam00000000;
    FUN_00010312(0x40000);
    if (iVar3 == 0) {
      return;
    }
    iStack100 += -1;
    if (iStack100 == 0) {
      FUN_0001032a();
      return;
    }
    FUN_00010358(0);
    iVar11 = *(int *)(iVar3 + 4);
    iVar7 = *(int *)(iVar11 + 8);
    if (iVar7 == 0) break;
    uVar13 = *(uint *)(iVar11 + 0x40);
    if ((uVar13 & 0x2002000) == 0x2002000) {
      if ((uVar13 >> 0xf & 0x3f8) == 0) {
        _L0(0,0,0x215);
        return;
      }
      uVar4 = (uVar13 >> 0xf & 0x3ff) - 8 & 0xff;
      iVar10 = uVar4 * 0x1b0;
      if (*(char *)(iVar10 + 0x1d) == '\0') {
        *(uint *)(iVar11 + 0x40) = uVar13 & 0xfdffffff;
      }
      else {
        uVar5 = (uint)*(byte *)(iVar10 + 0x1a);
        _L0();
        *(undefined4 *)(iVar10 + 0x1a8) = extraout_a0_00;
        puVar12 = *(ushort **)(iVar7 + 8);
        uVar2 = *puVar12;
        uVar8 = (uint)*(byte *)(uVar5 * 0x5d8 + 0x57);
        iVar7 = uVar8 * 0x5d8;
        if (*(char *)(iVar7 + 0x56) == '\x02') {
          if (*(char *)(iVar10 + 0x1c) == '\x01') {
            if ((uVar2 & 0x140c) == 8) {
              FUN_00010456(uVar4,0);
              FUN_00010462(iVar7,uVar4);
              cVar6 = *(char *)(iVar7 + 0x34a) + -1;
              *(char *)(iVar7 + 0x34a) = cVar6;
              if (cVar6 == '\0') {
                uVar8 = uVar8 + 10 & 0xff;
                FUN_00010484(uVar8,0);
                FUN_00010490(iVar7,uVar8);
              }
            }
            else {
              if ((uVar2 & 0xfc) == 0xa4) {
                iVar9 = uVar4 * 0x1b0;
                if ((*(byte *)(iVar9 + 0x32) & 2) == 0) {
                  FUN_0001062c(0x4a,0xd,0,3);
                  *extraout_a0_03 = (char)uVar4;
                  extraout_a0_03[1] = 1;
                  extraout_a0_03[2] = 0;
                  _L0();
                }
                else {
                  *(uint *)(iVar9 + 0x34) = *(uint *)(iVar9 + 0x34) | 1;
                  FUN_00010566(iVar7,iVar10,1);
                  *(uint *)(iVar9 + 0x34) = *(uint *)(iVar9 + 0x34) & 0xfffffffe;
                }
              }
              if ((uVar2 & 0x8c) == 0x88) {
                if ((uVar2 & 0x300) == 0x300) {
                  bVar1 = *(byte *)(puVar12 + 0xf);
                }
                else {
                  bVar1 = *(byte *)(puVar12 + 0xc);
                }
                iVar9 = uVar4 * 0x1b0;
                if ((*(byte *)(uint)*(byte *)(bVar1 & 7) & *(byte *)(iVar9 + 0xf2)) != 0) {
                  uVar8 = *(uint *)(iVar9 + 0x34) & 6;
                  if ((*(byte *)(iVar9 + 0x32) & 0xc) == 0) {
                    if (uVar8 == 0) {
                      *(undefined4 *)(iVar9 + 0x34) = 2;
_L0:
                      FUN_00010614((uint)*(byte *)(uVar4 * 0x1b0 + 0x1b),
                                   (uint)(byte *)(bVar1 & 7) | 0x10,0,0);
                      *(undefined4 *)(uVar4 * 0x1b0 + 0x34) = 0;
                    }
                  }
                  else {
                    if (uVar8 == 0) {
                      uVar8 = (uint)*(byte *)(iVar9 + 0xf3);
                      if ((*(byte *)(iVar9 + 0x32) & 8) != 0) {
                        *(undefined4 *)(iVar9 + 0x34) = 2;
                        FUN_000105e6(iVar7,iVar10,uVar8);
                        if ((uVar8 != 0) && (uVar8 -= extraout_a0_02, (int)uVar8 < 1)) goto _L0;
                      }
                      if ((*(byte *)(uVar4 * 0x1b0 + 0x32) & 4) == 0) goto _L0;
                      *(undefined4 *)(uVar4 * 0x1b0 + 0x34) = 4;
                      _L0(0x4a,0xd,0,3);
                      *extraout_a0_04 = (char)uVar4;
                      extraout_a0_04[1] = (char)uVar8;
                      extraout_a0_04[2] = 1;
                      _L0();
                    }
                  }
                }
              }
            }
          }
          else {
            if ((uVar2 & 0x1400) == 0x1000) {
              FUN_000106b4(uVar4,1);
              if (*(char *)(iVar7 + 0x34a) == '\0') {
                FUN_000106cc(uVar8 + 10 & 0xff,1);
              }
              *(char *)(uVar8 * 0x5d8 + 0x34a) = *(char *)(uVar8 * 0x5d8 + 0x34a) + '\x01';
            }
          }
        }
        if (*(char *)(uVar5 * 0x5d8 + 0x58) != '\0') {
          if ((uVar2 & 4) == 0) {
            FUN_000104b8((uint)*(byte *)(uVar5 * 0x5d8 + 0x57),uVar4,1);
          }
          iVar7 = uVar5 * 0x5d8;
          if (*(char *)(iVar7 + 0x56) == '\0') {
            if ((uVar2 & 0xfc) == 0x80) {
              uStack68 = 0;
              _L0(0,iVar11);
              FUN_000104ec(0);
              FUN_000104fc(iVar11,iVar7,iVar10,&uStack68);
              FUN_0001050e(uStack68,(uint)*(ushort *)(iVar11 + 0x1c),iVar7);
              FUN_00010518(iVar7);
              if (*(int *)(iVar7 + 0x40) != 0) {
                FUN_00010528(iVar7,*(undefined4 *)(iVar7 + 0x24));
              }
              if (extraout_a0_01 == 0) goto _L0;
            }
            else {
              if ((uVar2 & 4) == 0) {
                FUN_000106f4(puVar12,uVar13,iVar7);
              }
            }
          }
        }
      }
    }
    FUN_000103f6(iVar3);
    if (extraout_a0 == 0) {
_L0:
      FUN_0001038e(iVar3);
    }
  }
  _L0(0,0,0x205);
  goto _L0;
}



void FUN_00010312(undefined4 param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 unaff_s0;
  uint uVar3;
  uint uVar4;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s6;
  int unaff_s7;
  int iVar10;
  int unaff_s9;
  ushort *puVar11;
  uint uVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_00010312(param_1);
    if (unaff_s9 == 0) {
      return;
    }
    in_stack_0000000c += -1;
    if (in_stack_0000000c == 0) {
      FUN_0001032a();
      return;
    }
    FUN_00010358(unaff_s0);
    iVar10 = *(int *)(unaff_s9 + 4);
    iVar6 = *(int *)(iVar10 + 8);
    if (iVar6 == 0) {
      _L0(0,0,0x205);
_L0:
      FUN_0001038e(unaff_s9);
    }
    else {
      uVar12 = *(uint *)(iVar10 + 0x40);
      if ((uVar12 & 0x2002000) == 0x2002000) {
        if ((uVar12 >> 0xf & 0x3f8) == 0) {
          _L0(0,0,0x215);
          return;
        }
        uVar3 = (uVar12 >> 0xf & 0x3ff) - 8 & 0xff;
        iVar9 = uVar3 * 0x1b0 + unaff_s6;
        if (*(char *)(iVar9 + 0x1d) == '\0') {
          *(uint *)(iVar10 + 0x40) = uVar12 & 0xfdffffff;
        }
        else {
          uVar4 = (uint)*(byte *)(iVar9 + 0x1a);
          _L0();
          *(undefined4 *)(iVar9 + 0x1a8) = extraout_a0_00;
          puVar11 = *(ushort **)(iVar6 + 8);
          uVar2 = *puVar11;
          uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
          iVar6 = uVar7 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar6 + 0x56) == '\x02') {
            if (*(char *)(iVar9 + 0x1c) == '\x01') {
              if ((uVar2 & 0x140c) == 8) {
                FUN_00010456(uVar3,0);
                FUN_00010462(iVar6,uVar3);
                cVar5 = *(char *)(iVar6 + 0x34a) + -1;
                *(char *)(iVar6 + 0x34a) = cVar5;
                if (cVar5 == '\0') {
                  uVar7 = uVar7 + 10 & 0xff;
                  FUN_00010484(uVar7,0);
                  FUN_00010490(iVar6,uVar7);
                }
              }
              else {
                if ((uVar2 & 0xfc) == 0xa4) {
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                    FUN_0001062c(0x4a,0xd,0,3);
                    *extraout_a0_03 = (char)uVar3;
                    extraout_a0_03[1] = 1;
                    extraout_a0_03[2] = 0;
                    _L0();
                  }
                  else {
                    *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                    FUN_00010566(iVar6,iVar9,1);
                    *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
                  }
                }
                if ((uVar2 & 0x8c) == 0x88) {
                  if ((uVar2 & 0x300) == 0x300) {
                    bVar1 = *(byte *)(puVar11 + 0xf);
                  }
                  else {
                    bVar1 = *(byte *)(puVar11 + 0xc);
                  }
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) +
                                in_stack_00000014) & *(byte *)(iVar8 + 0xf2)) != 0) {
                    uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                    if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                      if (uVar7 != 0) goto _L0;
                      *(undefined4 *)(iVar8 + 0x34) = 2;
                    }
                    else {
                      if (uVar7 != 0) goto _L0;
                      uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                      if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                        iVar6 = uVar3 * 0x1b0 + unaff_s6;
                        if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                          *(undefined4 *)(iVar6 + 0x34) = 4;
                          _L0(0x4a,0xd,0,3);
                          *extraout_a0_04 = (char)uVar3;
                          extraout_a0_04[1] = (char)uVar7;
                          extraout_a0_04[2] = 1;
                          _L0();
                          goto _L0;
                        }
                      }
                      else {
                        *(undefined4 *)(iVar8 + 0x34) = 2;
                        FUN_000105e6(iVar6,iVar9,uVar7);
                        if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                      }
                      iVar8 = uVar3 * 0x1b0 + unaff_s6;
                    }
                    FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                    *(undefined4 *)(iVar8 + 0x34) = 0;
                  }
                }
              }
            }
            else {
              if ((uVar2 & 0x1400) == 0x1000) {
                FUN_000106b4(uVar3,1);
                if (*(char *)(iVar6 + 0x34a) == '\0') {
                  FUN_000106cc(uVar7 + 10 & 0xff,1);
                }
                iVar6 = uVar7 * 0x5d8 + unaff_s7;
                *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
              }
            }
          }
_L0:
          iVar6 = uVar4 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar6 + 0x58) != '\0') {
            if ((uVar2 & 4) == 0) {
              FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
            }
            iVar6 = uVar4 * 0x5d8 + unaff_s7;
            if (*(char *)(iVar6 + 0x56) == '\0') {
              if ((uVar2 & 0xfc) == 0x80) {
                in_stack_0000002c = 0;
                _L0(0,iVar10);
                FUN_000104ec(0);
                FUN_000104fc(iVar10,iVar6,iVar9,(undefined4 *)&stack0x0000002c);
                FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(iVar10 + 0x1c),iVar6);
                FUN_00010518(iVar6);
                if (*(int *)(iVar6 + 0x40) != 0) {
                  FUN_00010528(iVar6,*(undefined4 *)(iVar6 + 0x24));
                }
                if (extraout_a0_01 == 0) goto _L0;
              }
              else {
                if ((uVar2 & 4) == 0) {
                  FUN_000106f4(puVar11,uVar12,iVar6);
                }
              }
            }
          }
        }
      }
      FUN_000103f6(unaff_s9);
      if (extraout_a0 == 0) goto _L0;
    }
    unaff_s0 = 0;
    param_1 = 0x40000;
    unaff_s9 = iRam00000000;
  } while( true );
}



void FUN_0001032a(void)

{
  FUN_0001032a();
  return;
}



void FUN_00010358(undefined4 param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s6;
  int unaff_s7;
  int iVar10;
  int unaff_s9;
  ushort *puVar11;
  uint uVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_00010358(param_1);
    iVar10 = *(int *)(unaff_s9 + 4);
    iVar6 = *(int *)(iVar10 + 8);
    if (iVar6 == 0) {
      _L0(0,0,0x205);
_L0:
      FUN_0001038e(unaff_s9);
    }
    else {
      uVar12 = *(uint *)(iVar10 + 0x40);
      if ((uVar12 & 0x2002000) == 0x2002000) {
        if ((uVar12 >> 0xf & 0x3f8) == 0) {
          _L0(0,0,0x215);
          return;
        }
        uVar3 = (uVar12 >> 0xf & 0x3ff) - 8 & 0xff;
        iVar9 = uVar3 * 0x1b0 + unaff_s6;
        if (*(char *)(iVar9 + 0x1d) == '\0') {
          *(uint *)(iVar10 + 0x40) = uVar12 & 0xfdffffff;
        }
        else {
          uVar4 = (uint)*(byte *)(iVar9 + 0x1a);
          _L0();
          *(undefined4 *)(iVar9 + 0x1a8) = extraout_a0_00;
          puVar11 = *(ushort **)(iVar6 + 8);
          uVar2 = *puVar11;
          uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
          iVar6 = uVar7 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar6 + 0x56) == '\x02') {
            if (*(char *)(iVar9 + 0x1c) == '\x01') {
              if ((uVar2 & 0x140c) == 8) {
                FUN_00010456(uVar3,0);
                FUN_00010462(iVar6,uVar3);
                cVar5 = *(char *)(iVar6 + 0x34a) + -1;
                *(char *)(iVar6 + 0x34a) = cVar5;
                if (cVar5 == '\0') {
                  uVar7 = uVar7 + 10 & 0xff;
                  FUN_00010484(uVar7,0);
                  FUN_00010490(iVar6,uVar7);
                }
              }
              else {
                if ((uVar2 & 0xfc) == 0xa4) {
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                    FUN_0001062c(0x4a,0xd,0,3);
                    *extraout_a0_03 = (char)uVar3;
                    extraout_a0_03[1] = 1;
                    extraout_a0_03[2] = 0;
                    _L0();
                  }
                  else {
                    *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                    FUN_00010566(iVar6,iVar9,1);
                    *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
                  }
                }
                if ((uVar2 & 0x8c) == 0x88) {
                  if ((uVar2 & 0x300) == 0x300) {
                    bVar1 = *(byte *)(puVar11 + 0xf);
                  }
                  else {
                    bVar1 = *(byte *)(puVar11 + 0xc);
                  }
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) +
                                in_stack_00000014) & *(byte *)(iVar8 + 0xf2)) != 0) {
                    uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                    if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                      if (uVar7 != 0) goto _L0;
                      *(undefined4 *)(iVar8 + 0x34) = 2;
                    }
                    else {
                      if (uVar7 != 0) goto _L0;
                      uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                      if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                        iVar6 = uVar3 * 0x1b0 + unaff_s6;
                        if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                          *(undefined4 *)(iVar6 + 0x34) = 4;
                          _L0(0x4a,0xd,0,3);
                          *extraout_a0_04 = (char)uVar3;
                          extraout_a0_04[1] = (char)uVar7;
                          extraout_a0_04[2] = 1;
                          _L0();
                          goto _L0;
                        }
                      }
                      else {
                        *(undefined4 *)(iVar8 + 0x34) = 2;
                        FUN_000105e6(iVar6,iVar9,uVar7);
                        if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                      }
                      iVar8 = uVar3 * 0x1b0 + unaff_s6;
                    }
                    FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                    *(undefined4 *)(iVar8 + 0x34) = 0;
                  }
                }
              }
            }
            else {
              if ((uVar2 & 0x1400) == 0x1000) {
                FUN_000106b4(uVar3,1);
                if (*(char *)(iVar6 + 0x34a) == '\0') {
                  FUN_000106cc(uVar7 + 10 & 0xff,1);
                }
                iVar6 = uVar7 * 0x5d8 + unaff_s7;
                *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
              }
            }
          }
_L0:
          iVar6 = uVar4 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar6 + 0x58) != '\0') {
            if ((uVar2 & 4) == 0) {
              FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
            }
            iVar6 = uVar4 * 0x5d8 + unaff_s7;
            if (*(char *)(iVar6 + 0x56) == '\0') {
              if ((uVar2 & 0xfc) == 0x80) {
                in_stack_0000002c = 0;
                _L0(0,iVar10);
                FUN_000104ec(0);
                FUN_000104fc(iVar10,iVar6,iVar9,(undefined4 *)&stack0x0000002c);
                FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(iVar10 + 0x1c),iVar6);
                FUN_00010518(iVar6);
                if (*(int *)(iVar6 + 0x40) != 0) {
                  FUN_00010528(iVar6,*(undefined4 *)(iVar6 + 0x24));
                }
                if (extraout_a0_01 == 0) goto _L0;
              }
              else {
                if ((uVar2 & 4) == 0) {
                  FUN_000106f4(puVar11,uVar12,iVar6);
                }
              }
            }
          }
        }
      }
      FUN_000103f6(unaff_s9);
      if (extraout_a0 == 0) goto _L0;
    }
    unaff_s9 = iRam00000000;
    FUN_00010312(0x40000);
    if (unaff_s9 == 0) {
      return;
    }
    in_stack_0000000c += -1;
    if (in_stack_0000000c == 0) {
      FUN_0001032a();
      return;
    }
    param_1 = 0;
  } while( true );
}



void _L0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s6;
  int unaff_s7;
  int iVar10;
  int unaff_s9;
  ushort *puVar11;
  uint uVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
code_r0x00010384:
  _L0(param_1,param_2,param_3);
  do {
    FUN_0001038e(unaff_s9);
    do {
      unaff_s9 = iRam00000000;
      FUN_00010312(0x40000);
      if (unaff_s9 == 0) {
        return;
      }
      in_stack_0000000c += -1;
      if (in_stack_0000000c == 0) {
        FUN_0001032a();
        return;
      }
      FUN_00010358(0);
      iVar10 = *(int *)(unaff_s9 + 4);
      iVar6 = *(int *)(iVar10 + 8);
      if (iVar6 == 0) {
        param_3 = 0x205;
        param_2 = 0;
        param_1 = 0;
        goto code_r0x00010384;
      }
      uVar12 = *(uint *)(iVar10 + 0x40);
      if ((uVar12 & 0x2002000) == 0x2002000) {
        if ((uVar12 >> 0xf & 0x3f8) == 0) {
          _L0(0,0,0x215);
          return;
        }
        uVar3 = (uVar12 >> 0xf & 0x3ff) - 8 & 0xff;
        iVar9 = uVar3 * 0x1b0 + unaff_s6;
        if (*(char *)(iVar9 + 0x1d) == '\0') {
          *(uint *)(iVar10 + 0x40) = uVar12 & 0xfdffffff;
        }
        else {
          uVar4 = (uint)*(byte *)(iVar9 + 0x1a);
          _L0();
          *(undefined4 *)(iVar9 + 0x1a8) = extraout_a0_00;
          puVar11 = *(ushort **)(iVar6 + 8);
          uVar2 = *puVar11;
          uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
          iVar6 = uVar7 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar6 + 0x56) == '\x02') {
            if (*(char *)(iVar9 + 0x1c) == '\x01') {
              if ((uVar2 & 0x140c) == 8) {
                FUN_00010456(uVar3,0);
                FUN_00010462(iVar6,uVar3);
                cVar5 = *(char *)(iVar6 + 0x34a) + -1;
                *(char *)(iVar6 + 0x34a) = cVar5;
                if (cVar5 == '\0') {
                  uVar7 = uVar7 + 10 & 0xff;
                  FUN_00010484(uVar7,0);
                  FUN_00010490(iVar6,uVar7);
                }
              }
              else {
                if ((uVar2 & 0xfc) == 0xa4) {
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                    FUN_0001062c(0x4a,0xd,0,3);
                    *extraout_a0_03 = (char)uVar3;
                    extraout_a0_03[1] = 1;
                    extraout_a0_03[2] = 0;
                    _L0();
                  }
                  else {
                    *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                    FUN_00010566(iVar6,iVar9,1);
                    *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
                  }
                }
                if ((uVar2 & 0x8c) == 0x88) {
                  if ((uVar2 & 0x300) == 0x300) {
                    bVar1 = *(byte *)(puVar11 + 0xf);
                  }
                  else {
                    bVar1 = *(byte *)(puVar11 + 0xc);
                  }
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) +
                                in_stack_00000014) & *(byte *)(iVar8 + 0xf2)) != 0) {
                    uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                    if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                      if (uVar7 != 0) goto _L0;
                      *(undefined4 *)(iVar8 + 0x34) = 2;
                    }
                    else {
                      if (uVar7 != 0) goto _L0;
                      uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                      if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                        iVar6 = uVar3 * 0x1b0 + unaff_s6;
                        if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                          *(undefined4 *)(iVar6 + 0x34) = 4;
                          _L0(0x4a,0xd,0,3);
                          *extraout_a0_04 = (char)uVar3;
                          extraout_a0_04[1] = (char)uVar7;
                          extraout_a0_04[2] = 1;
                          _L0();
                          goto _L0;
                        }
                      }
                      else {
                        *(undefined4 *)(iVar8 + 0x34) = 2;
                        FUN_000105e6(iVar6,iVar9,uVar7);
                        if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                      }
                      iVar8 = uVar3 * 0x1b0 + unaff_s6;
                    }
                    FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                    *(undefined4 *)(iVar8 + 0x34) = 0;
                  }
                }
              }
            }
            else {
              if ((uVar2 & 0x1400) == 0x1000) {
                FUN_000106b4(uVar3,1);
                if (*(char *)(iVar6 + 0x34a) == '\0') {
                  FUN_000106cc(uVar7 + 10 & 0xff,1);
                }
                iVar6 = uVar7 * 0x5d8 + unaff_s7;
                *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
              }
            }
          }
_L0:
          iVar6 = uVar4 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar6 + 0x58) != '\0') {
            if ((uVar2 & 4) == 0) {
              FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
            }
            iVar6 = uVar4 * 0x5d8 + unaff_s7;
            if (*(char *)(iVar6 + 0x56) == '\0') {
              if ((uVar2 & 0xfc) == 0x80) {
                in_stack_0000002c = 0;
                _L0(0,iVar10);
                FUN_000104ec(0);
                FUN_000104fc(iVar10,iVar6,iVar9,(undefined4 *)&stack0x0000002c);
                FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(iVar10 + 0x1c),iVar6);
                FUN_00010518(iVar6);
                if (*(int *)(iVar6 + 0x40) != 0) {
                  FUN_00010528(iVar6,*(undefined4 *)(iVar6 + 0x24));
                }
                if (extraout_a0_01 == 0) break;
              }
              else {
                if ((uVar2 & 4) == 0) {
                  FUN_000106f4(puVar11,uVar12,iVar6);
                }
              }
            }
          }
        }
      }
      FUN_000103f6(unaff_s9);
    } while (extraout_a0 != 0);
  } while( true );
}



void FUN_0001038e(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s6;
  int unaff_s7;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_0001038e(param_1);
    do {
      param_1 = iRam00000000;
      FUN_00010312(0x40000);
      if (param_1 == 0) {
        return;
      }
      in_stack_0000000c += -1;
      if (in_stack_0000000c == 0) {
        FUN_0001032a();
        return;
      }
      FUN_00010358(0);
      iVar10 = *(int *)(param_1 + 4);
      iVar6 = *(int *)(iVar10 + 8);
      if (iVar6 == 0) {
        _L0(0,0,0x205);
        break;
      }
      uVar12 = *(uint *)(iVar10 + 0x40);
      if ((uVar12 & 0x2002000) == 0x2002000) {
        if ((uVar12 >> 0xf & 0x3f8) == 0) {
          _L0(0,0,0x215);
          return;
        }
        uVar3 = (uVar12 >> 0xf & 0x3ff) - 8 & 0xff;
        iVar9 = uVar3 * 0x1b0 + unaff_s6;
        if (*(char *)(iVar9 + 0x1d) == '\0') {
          *(uint *)(iVar10 + 0x40) = uVar12 & 0xfdffffff;
        }
        else {
          uVar4 = (uint)*(byte *)(iVar9 + 0x1a);
          _L0();
          *(undefined4 *)(iVar9 + 0x1a8) = extraout_a0_00;
          puVar11 = *(ushort **)(iVar6 + 8);
          uVar2 = *puVar11;
          uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
          iVar6 = uVar7 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar6 + 0x56) == '\x02') {
            if (*(char *)(iVar9 + 0x1c) == '\x01') {
              if ((uVar2 & 0x140c) == 8) {
                FUN_00010456(uVar3,0);
                FUN_00010462(iVar6,uVar3);
                cVar5 = *(char *)(iVar6 + 0x34a) + -1;
                *(char *)(iVar6 + 0x34a) = cVar5;
                if (cVar5 == '\0') {
                  uVar7 = uVar7 + 10 & 0xff;
                  FUN_00010484(uVar7,0);
                  FUN_00010490(iVar6,uVar7);
                }
              }
              else {
                if ((uVar2 & 0xfc) == 0xa4) {
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                    FUN_0001062c(0x4a,0xd,0,3);
                    *extraout_a0_03 = (char)uVar3;
                    extraout_a0_03[1] = 1;
                    extraout_a0_03[2] = 0;
                    _L0();
                  }
                  else {
                    *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                    FUN_00010566(iVar6,iVar9,1);
                    *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
                  }
                }
                if ((uVar2 & 0x8c) == 0x88) {
                  if ((uVar2 & 0x300) == 0x300) {
                    bVar1 = *(byte *)(puVar11 + 0xf);
                  }
                  else {
                    bVar1 = *(byte *)(puVar11 + 0xc);
                  }
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) +
                                in_stack_00000014) & *(byte *)(iVar8 + 0xf2)) != 0) {
                    uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                    if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                      if (uVar7 != 0) goto _L0;
                      *(undefined4 *)(iVar8 + 0x34) = 2;
                    }
                    else {
                      if (uVar7 != 0) goto _L0;
                      uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                      if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                        iVar6 = uVar3 * 0x1b0 + unaff_s6;
                        if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                          *(undefined4 *)(iVar6 + 0x34) = 4;
                          _L0(0x4a,0xd,0,3);
                          *extraout_a0_04 = (char)uVar3;
                          extraout_a0_04[1] = (char)uVar7;
                          extraout_a0_04[2] = 1;
                          _L0();
                          goto _L0;
                        }
                      }
                      else {
                        *(undefined4 *)(iVar8 + 0x34) = 2;
                        FUN_000105e6(iVar6,iVar9,uVar7);
                        if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                      }
                      iVar8 = uVar3 * 0x1b0 + unaff_s6;
                    }
                    FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                    *(undefined4 *)(iVar8 + 0x34) = 0;
                  }
                }
              }
            }
            else {
              if ((uVar2 & 0x1400) == 0x1000) {
                FUN_000106b4(uVar3,1);
                if (*(char *)(iVar6 + 0x34a) == '\0') {
                  FUN_000106cc(uVar7 + 10 & 0xff,1);
                }
                iVar6 = uVar7 * 0x5d8 + unaff_s7;
                *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
              }
            }
          }
_L0:
          iVar6 = uVar4 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar6 + 0x58) != '\0') {
            if ((uVar2 & 4) == 0) {
              FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
            }
            iVar6 = uVar4 * 0x5d8 + unaff_s7;
            if (*(char *)(iVar6 + 0x56) == '\0') {
              if ((uVar2 & 0xfc) == 0x80) {
                in_stack_0000002c = 0;
                _L0(0,iVar10);
                FUN_000104ec(0);
                FUN_000104fc(iVar10,iVar6,iVar9,(undefined4 *)&stack0x0000002c);
                FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(iVar10 + 0x1c),iVar6);
                FUN_00010518(iVar6);
                if (*(int *)(iVar6 + 0x40) != 0) {
                  FUN_00010528(iVar6,*(undefined4 *)(iVar6 + 0x24));
                }
                if (extraout_a0_01 == 0) break;
              }
              else {
                if ((uVar2 & 4) == 0) {
                  FUN_000106f4(puVar11,uVar12,iVar6);
                }
              }
            }
          }
        }
      }
      FUN_000103f6(param_1);
    } while (extraout_a0 != 0);
  } while( true );
}



void FUN_000103f6(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s6;
  int unaff_s7;
  int iVar10;
  int unaff_s9;
  ushort *puVar11;
  uint uVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_000103f6(param_1);
    if (extraout_a0 != 0) goto _L0;
    do {
      while( true ) {
        FUN_0001038e(unaff_s9);
_L0:
        param_1 = iRam00000000;
        FUN_00010312(0x40000);
        if (param_1 == 0) {
          return;
        }
        in_stack_0000000c += -1;
        if (in_stack_0000000c == 0) {
          FUN_0001032a();
          return;
        }
        FUN_00010358(0);
        iVar10 = *(int *)(param_1 + 4);
        iVar6 = *(int *)(iVar10 + 8);
        unaff_s9 = param_1;
        if (iVar6 != 0) break;
        _L0(0,0,0x205);
      }
      uVar12 = *(uint *)(iVar10 + 0x40);
      if ((uVar12 & 0x2002000) != 0x2002000) break;
      if ((uVar12 >> 0xf & 0x3f8) == 0) {
        _L0(0,0,0x215);
        return;
      }
      uVar3 = (uVar12 >> 0xf & 0x3ff) - 8 & 0xff;
      iVar9 = uVar3 * 0x1b0 + unaff_s6;
      if (*(char *)(iVar9 + 0x1d) == '\0') {
        *(uint *)(iVar10 + 0x40) = uVar12 & 0xfdffffff;
        break;
      }
      uVar4 = (uint)*(byte *)(iVar9 + 0x1a);
      _L0();
      *(undefined4 *)(iVar9 + 0x1a8) = extraout_a0_00;
      puVar11 = *(ushort **)(iVar6 + 8);
      uVar2 = *puVar11;
      uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
      iVar6 = uVar7 * 0x5d8 + unaff_s7;
      if (*(char *)(iVar6 + 0x56) == '\x02') {
        if (*(char *)(iVar9 + 0x1c) == '\x01') {
          if ((uVar2 & 0x140c) == 8) {
            FUN_00010456(uVar3,0);
            FUN_00010462(iVar6,uVar3);
            cVar5 = *(char *)(iVar6 + 0x34a) + -1;
            *(char *)(iVar6 + 0x34a) = cVar5;
            if (cVar5 == '\0') {
              uVar7 = uVar7 + 10 & 0xff;
              FUN_00010484(uVar7,0);
              FUN_00010490(iVar6,uVar7);
            }
          }
          else {
            if ((uVar2 & 0xfc) == 0xa4) {
              iVar8 = uVar3 * 0x1b0 + unaff_s6;
              if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                FUN_0001062c(0x4a,0xd,0,3);
                *extraout_a0_03 = (char)uVar3;
                extraout_a0_03[1] = 1;
                extraout_a0_03[2] = 0;
                _L0();
              }
              else {
                *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                FUN_00010566(iVar6,iVar9,1);
                *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
              }
            }
            if ((uVar2 & 0x8c) == 0x88) {
              if ((uVar2 & 0x300) == 0x300) {
                bVar1 = *(byte *)(puVar11 + 0xf);
              }
              else {
                bVar1 = *(byte *)(puVar11 + 0xc);
              }
              iVar8 = uVar3 * 0x1b0 + unaff_s6;
              if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
                  *(byte *)(iVar8 + 0xf2)) != 0) {
                uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                  if (uVar7 != 0) goto _L0;
                  *(undefined4 *)(iVar8 + 0x34) = 2;
                }
                else {
                  if (uVar7 != 0) goto _L0;
                  uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                  if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                    iVar6 = uVar3 * 0x1b0 + unaff_s6;
                    if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                      *(undefined4 *)(iVar6 + 0x34) = 4;
                      _L0(0x4a,0xd,0,3);
                      *extraout_a0_04 = (char)uVar3;
                      extraout_a0_04[1] = (char)uVar7;
                      extraout_a0_04[2] = 1;
                      _L0();
                      goto _L0;
                    }
                  }
                  else {
                    *(undefined4 *)(iVar8 + 0x34) = 2;
                    FUN_000105e6(iVar6,iVar9,uVar7);
                    if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                  }
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                }
                FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                *(undefined4 *)(iVar8 + 0x34) = 0;
              }
            }
          }
        }
        else {
          if ((uVar2 & 0x1400) == 0x1000) {
            FUN_000106b4(uVar3,1);
            if (*(char *)(iVar6 + 0x34a) == '\0') {
              FUN_000106cc(uVar7 + 10 & 0xff,1);
            }
            iVar6 = uVar7 * 0x5d8 + unaff_s7;
            *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
          }
        }
      }
_L0:
      iVar6 = uVar4 * 0x5d8 + unaff_s7;
      if (*(char *)(iVar6 + 0x58) == '\0') break;
      if ((uVar2 & 4) == 0) {
        FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
      }
      iVar6 = uVar4 * 0x5d8 + unaff_s7;
      if (*(char *)(iVar6 + 0x56) != '\0') break;
      if ((uVar2 & 0xfc) != 0x80) {
        if ((uVar2 & 4) == 0) {
          FUN_000106f4(puVar11,uVar12,iVar6);
        }
        break;
      }
      in_stack_0000002c = 0;
      _L0(0,iVar10);
      FUN_000104ec(0);
      FUN_000104fc(iVar10,iVar6,iVar9,(undefined4 *)&stack0x0000002c);
      FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(iVar10 + 0x1c),iVar6);
      FUN_00010518(iVar6);
      if (*(int *)(iVar6 + 0x40) != 0) {
        FUN_00010528(iVar6,*(undefined4 *)(iVar6 + 0x24));
      }
    } while (extraout_a0_01 == 0);
  } while( true );
}



void _L0(void)

{
  byte bVar1;
  ushort uVar2;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar3;
  int unaff_s2;
  uint uVar4;
  int iVar5;
  int unaff_s3;
  int iVar6;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *puVar7;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    _L0();
    *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
    puVar7 = *(ushort **)(unaff_s2 + 8);
    uVar2 = *puVar7;
    uVar4 = (uint)*(byte *)(unaff_s1 * unaff_s3 + unaff_s7 + 0x57);
    iVar6 = uVar4 * unaff_s3 + unaff_s7;
    if (*(char *)(iVar6 + 0x56) == '\x02') {
      if (*(char *)(unaff_s4 + 0x1c) == '\x01') {
        if ((uVar2 & 0x140c) == 8) {
          FUN_00010456(unaff_s0,0);
          FUN_00010462(iVar6,unaff_s0);
          cVar3 = *(char *)(iVar6 + 0x34a) + -1;
          *(char *)(iVar6 + 0x34a) = cVar3;
          if (cVar3 == '\0') {
            uVar4 = uVar4 + 10 & 0xff;
            FUN_00010484(uVar4,0);
            FUN_00010490(iVar6,uVar4);
          }
        }
        else {
          if ((uVar2 & 0xfc) == 0xa4) {
            iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
            if ((*(byte *)(iVar5 + 0x32) & 2) == 0) {
              FUN_0001062c(0x4a,0xd,0,3);
              *extraout_a0_03 = (char)unaff_s0;
              extraout_a0_03[1] = 1;
              extraout_a0_03[2] = 0;
              _L0();
            }
            else {
              *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) | 1;
              FUN_00010566(iVar6,unaff_s4,1);
              *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) & 0xfffffffe;
            }
          }
          if ((uVar2 & 0x8c) == 0x88) {
            if ((uVar2 & 0x300) == 0x300) {
              bVar1 = *(byte *)(puVar7 + 0xf);
            }
            else {
              bVar1 = *(byte *)(puVar7 + 0xc);
            }
            iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
            if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
                *(byte *)(iVar5 + 0xf2)) != 0) {
              uVar4 = *(uint *)(iVar5 + 0x34) & 6;
              if ((*(byte *)(iVar5 + 0x32) & 0xc) == 0) {
                if (uVar4 != 0) goto _L0;
                *(undefined4 *)(iVar5 + 0x34) = 2;
              }
              else {
                if (uVar4 != 0) goto _L0;
                uVar4 = (uint)*(byte *)(iVar5 + 0xf3);
                if ((*(byte *)(iVar5 + 0x32) & 8) == 0) {
_L0:
                  iVar6 = unaff_s0 * 0x1b0 + unaff_s6;
                  if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                    *(undefined4 *)(iVar6 + 0x34) = 4;
                    _L0(0x4a,0xd,0,3);
                    *extraout_a0_04 = (char)unaff_s0;
                    extraout_a0_04[1] = (char)uVar4;
                    extraout_a0_04[2] = 1;
                    _L0();
                    goto _L0;
                  }
                }
                else {
                  *(undefined4 *)(iVar5 + 0x34) = 2;
                  FUN_000105e6(iVar6,unaff_s4,uVar4);
                  if ((uVar4 == 0) || (uVar4 -= extraout_a0_02, 0 < (int)uVar4)) goto _L0;
                }
                iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
              }
              FUN_00010614((uint)*(byte *)(iVar5 + 0x1b),bVar1 & 7 | 0x10,0,0);
              *(undefined4 *)(iVar5 + 0x34) = 0;
            }
          }
        }
      }
      else {
        if ((uVar2 & 0x1400) == 0x1000) {
          FUN_000106b4(unaff_s0,1);
          if (*(char *)(iVar6 + 0x34a) == '\0') {
            FUN_000106cc(uVar4 + 10 & 0xff,1);
          }
          iVar6 = uVar4 * 0x5d8 + unaff_s7;
          *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
        }
      }
    }
_L0:
    iVar6 = unaff_s1 * 0x5d8 + unaff_s7;
    if (*(char *)(iVar6 + 0x58) != '\0') {
      if ((uVar2 & 4) == 0) {
        FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),unaff_s0,1);
      }
      iVar6 = unaff_s1 * 0x5d8 + unaff_s7;
      if (*(char *)(iVar6 + 0x56) == '\0') {
        if ((uVar2 & 0xfc) == 0x80) {
          in_stack_0000002c = 0;
          _L0(0,unaff_s8);
          FUN_000104ec(0);
          FUN_000104fc(unaff_s8,iVar6,unaff_s4,(undefined4 *)&stack0x0000002c);
          FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar6);
          FUN_00010518(iVar6);
          if (*(int *)(iVar6 + 0x40) != 0) {
            FUN_00010528(iVar6,*(undefined4 *)(iVar6 + 0x24));
          }
          if (extraout_a0_01 == 0) goto _L0;
        }
        else {
          if ((uVar2 & 4) == 0) {
            FUN_000106f4(puVar7,unaff_s11,iVar6);
          }
        }
      }
    }
    while( true ) {
      do {
        FUN_000103f6(unaff_s9);
        if (extraout_a0 != 0) goto _L0;
_L0:
        while( true ) {
          FUN_0001038e(unaff_s9);
_L0:
          unaff_s9 = iRam00000000;
          FUN_00010312(0x40000);
          if (unaff_s9 == 0) {
            return;
          }
          in_stack_0000000c += -1;
          if (in_stack_0000000c == 0) {
            FUN_0001032a();
            return;
          }
          FUN_00010358(0);
          unaff_s8 = *(int *)(unaff_s9 + 4);
          unaff_s2 = *(int *)(unaff_s8 + 8);
          if (unaff_s2 != 0) break;
          _L0(0,0,0x205);
        }
        unaff_s11 = *(uint *)(unaff_s8 + 0x40);
      } while ((unaff_s11 & 0x2002000) != 0x2002000);
      if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
        _L0(0,0,0x215);
        return;
      }
      unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
      unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
      if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
      *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
    }
    unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
    unaff_s3 = 0x5d8;
  } while( true );
}



void FUN_00010456(uint param_1,undefined4 param_2)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar2;
  int iVar3;
  uint unaff_s2;
  uint uVar4;
  int unaff_s3;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_00010456(param_1,param_2);
    FUN_00010462(unaff_s3,unaff_s0);
    cVar2 = *(char *)(unaff_s3 + 0x34a) + -1;
    *(char *)(unaff_s3 + 0x34a) = cVar2;
    if (cVar2 == '\0') {
      uVar4 = unaff_s2 + 10 & 0xff;
      FUN_00010484(uVar4,0);
      FUN_00010490(unaff_s3,uVar4);
    }
_L0:
    while( true ) {
      do {
        iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
        if (*(char *)(iVar3 + 0x58) != '\0') {
          if ((unaff_s5 & 4) == 0) {
            FUN_000104b8((uint)*(byte *)(iVar3 + 0x57),unaff_s0,1);
          }
          iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar3 + 0x56) == '\0') {
            if ((unaff_s5 & 0xfc) == 0x80) {
              in_stack_0000002c = 0;
              _L0(0,unaff_s8);
              FUN_000104ec(0);
              FUN_000104fc(unaff_s8,iVar3,unaff_s4,(undefined4 *)&stack0x0000002c);
              FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar3);
              FUN_00010518(iVar3);
              if (*(int *)(iVar3 + 0x40) != 0) {
                FUN_00010528(iVar3,*(undefined4 *)(iVar3 + 0x24));
              }
              if (extraout_a0_01 == 0) goto _L0;
            }
            else {
              if ((unaff_s5 & 4) == 0) {
                FUN_000106f4(unaff_s10,unaff_s11,iVar3);
              }
            }
          }
        }
        while( true ) {
          do {
            FUN_000103f6(unaff_s9);
            if (extraout_a0 != 0) goto _L0;
_L0:
            while( true ) {
              FUN_0001038e(unaff_s9);
_L0:
              unaff_s9 = iRam00000000;
              FUN_00010312(0x40000);
              if (unaff_s9 == 0) {
                return;
              }
              in_stack_0000000c += -1;
              if (in_stack_0000000c == 0) {
                FUN_0001032a();
                return;
              }
              FUN_00010358(0);
              unaff_s8 = *(int *)(unaff_s9 + 4);
              iVar3 = *(int *)(unaff_s8 + 8);
              if (iVar3 != 0) break;
              _L0(0,0,0x205);
            }
            unaff_s11 = *(uint *)(unaff_s8 + 0x40);
          } while ((unaff_s11 & 0x2002000) != 0x2002000);
          if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
            _L0(0,0,0x215);
            return;
          }
          unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
          unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
          if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
          *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
        }
        unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
        _L0();
        *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
        unaff_s10 = *(ushort **)(iVar3 + 8);
        unaff_s5 = *unaff_s10;
        unaff_s2 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
        unaff_s3 = unaff_s2 * 0x5d8 + unaff_s7;
      } while (*(char *)(unaff_s3 + 0x56) != '\x02');
      if (*(char *)(unaff_s4 + 0x1c) == '\x01') break;
      if ((unaff_s5 & 0x1400) == 0x1000) {
        FUN_000106b4(unaff_s0,1);
        if (*(char *)(unaff_s3 + 0x34a) == '\0') {
          FUN_000106cc(unaff_s2 + 10 & 0xff,1);
        }
        iVar3 = unaff_s2 * 0x5d8 + unaff_s7;
        *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
      }
    }
    if ((unaff_s5 & 0x140c) != 8) {
      if ((unaff_s5 & 0xfc) == 0xa4) {
        iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
        if ((*(byte *)(iVar3 + 0x32) & 2) == 0) {
          FUN_0001062c(0x4a,0xd,0,3);
          *extraout_a0_03 = (char)unaff_s0;
          extraout_a0_03[1] = 1;
          extraout_a0_03[2] = 0;
          _L0();
        }
        else {
          *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) | 1;
          FUN_00010566(unaff_s3,unaff_s4,1);
          *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xfffffffe;
        }
      }
      if ((unaff_s5 & 0x8c) == 0x88) {
        if ((unaff_s5 & 0x300) == 0x300) {
          bVar1 = *(byte *)(unaff_s10 + 0xf);
        }
        else {
          bVar1 = *(byte *)(unaff_s10 + 0xc);
        }
        iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
        if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
            *(byte *)(iVar3 + 0xf2)) != 0) {
          uVar4 = *(uint *)(iVar3 + 0x34) & 6;
          if ((*(byte *)(iVar3 + 0x32) & 0xc) == 0) {
            if (uVar4 != 0) goto _L0;
            *(undefined4 *)(iVar3 + 0x34) = 2;
          }
          else {
            if (uVar4 != 0) goto _L0;
            uVar4 = (uint)*(byte *)(iVar3 + 0xf3);
            if ((*(byte *)(iVar3 + 0x32) & 8) == 0) {
_L0:
              iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
              if ((*(byte *)(iVar3 + 0x32) & 4) != 0) {
                *(undefined4 *)(iVar3 + 0x34) = 4;
                _L0(0x4a,0xd,0,3);
                *extraout_a0_04 = (char)unaff_s0;
                extraout_a0_04[1] = (char)uVar4;
                extraout_a0_04[2] = 1;
                _L0();
                goto _L0;
              }
            }
            else {
              *(undefined4 *)(iVar3 + 0x34) = 2;
              FUN_000105e6(unaff_s3,unaff_s4,uVar4);
              if ((uVar4 == 0) || (uVar4 -= extraout_a0_02, 0 < (int)uVar4)) goto _L0;
            }
            iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
          }
          FUN_00010614((uint)*(byte *)(iVar3 + 0x1b),bVar1 & 7 | 0x10,0,0);
          *(undefined4 *)(iVar3 + 0x34) = 0;
        }
      }
      goto _L0;
    }
    param_2 = 0;
    param_1 = unaff_s0;
  } while( true );
}



void FUN_00010462(int param_1,uint param_2)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar2;
  int iVar3;
  uint unaff_s2;
  uint uVar4;
  int unaff_s3;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_00010462(param_1,param_2);
    cVar2 = *(char *)(unaff_s3 + 0x34a) + -1;
    *(char *)(unaff_s3 + 0x34a) = cVar2;
    if (cVar2 == '\0') {
      uVar4 = unaff_s2 + 10 & 0xff;
      FUN_00010484(uVar4,0);
      FUN_00010490(unaff_s3,uVar4);
    }
_L0:
    while( true ) {
      do {
        iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
        if (*(char *)(iVar3 + 0x58) != '\0') {
          if ((unaff_s5 & 4) == 0) {
            FUN_000104b8((uint)*(byte *)(iVar3 + 0x57),unaff_s0,1);
          }
          iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar3 + 0x56) == '\0') {
            if ((unaff_s5 & 0xfc) == 0x80) {
              in_stack_0000002c = 0;
              _L0(0,unaff_s8);
              FUN_000104ec(0);
              FUN_000104fc(unaff_s8,iVar3,unaff_s4,(undefined4 *)&stack0x0000002c);
              FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar3);
              FUN_00010518(iVar3);
              if (*(int *)(iVar3 + 0x40) != 0) {
                FUN_00010528(iVar3,*(undefined4 *)(iVar3 + 0x24));
              }
              if (extraout_a0_01 == 0) goto _L0;
            }
            else {
              if ((unaff_s5 & 4) == 0) {
                FUN_000106f4(unaff_s10,unaff_s11,iVar3);
              }
            }
          }
        }
        while( true ) {
          do {
            FUN_000103f6(unaff_s9);
            if (extraout_a0 != 0) goto _L0;
_L0:
            while( true ) {
              FUN_0001038e(unaff_s9);
_L0:
              unaff_s9 = iRam00000000;
              FUN_00010312(0x40000);
              if (unaff_s9 == 0) {
                return;
              }
              in_stack_0000000c += -1;
              if (in_stack_0000000c == 0) {
                FUN_0001032a();
                return;
              }
              FUN_00010358(0);
              unaff_s8 = *(int *)(unaff_s9 + 4);
              iVar3 = *(int *)(unaff_s8 + 8);
              if (iVar3 != 0) break;
              _L0(0,0,0x205);
            }
            unaff_s11 = *(uint *)(unaff_s8 + 0x40);
          } while ((unaff_s11 & 0x2002000) != 0x2002000);
          if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
            _L0(0,0,0x215);
            return;
          }
          unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
          unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
          if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
          *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
        }
        unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
        _L0();
        *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
        unaff_s10 = *(ushort **)(iVar3 + 8);
        unaff_s5 = *unaff_s10;
        unaff_s2 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
        param_1 = unaff_s2 * 0x5d8 + unaff_s7;
      } while (*(char *)(param_1 + 0x56) != '\x02');
      if (*(char *)(unaff_s4 + 0x1c) == '\x01') break;
      if ((unaff_s5 & 0x1400) == 0x1000) {
        FUN_000106b4(unaff_s0,1);
        if (*(char *)(param_1 + 0x34a) == '\0') {
          FUN_000106cc(unaff_s2 + 10 & 0xff,1);
        }
        iVar3 = unaff_s2 * 0x5d8 + unaff_s7;
        *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
      }
    }
    if ((unaff_s5 & 0x140c) != 8) {
      if ((unaff_s5 & 0xfc) == 0xa4) {
        iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
        if ((*(byte *)(iVar3 + 0x32) & 2) == 0) {
          FUN_0001062c(0x4a,0xd,0,3);
          *extraout_a0_03 = (char)unaff_s0;
          extraout_a0_03[1] = 1;
          extraout_a0_03[2] = 0;
          _L0();
        }
        else {
          *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) | 1;
          FUN_00010566(param_1,unaff_s4,1);
          *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xfffffffe;
        }
      }
      if ((unaff_s5 & 0x8c) == 0x88) {
        if ((unaff_s5 & 0x300) == 0x300) {
          bVar1 = *(byte *)(unaff_s10 + 0xf);
        }
        else {
          bVar1 = *(byte *)(unaff_s10 + 0xc);
        }
        iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
        if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
            *(byte *)(iVar3 + 0xf2)) != 0) {
          uVar4 = *(uint *)(iVar3 + 0x34) & 6;
          if ((*(byte *)(iVar3 + 0x32) & 0xc) == 0) {
            if (uVar4 != 0) goto _L0;
            *(undefined4 *)(iVar3 + 0x34) = 2;
          }
          else {
            if (uVar4 != 0) goto _L0;
            uVar4 = (uint)*(byte *)(iVar3 + 0xf3);
            if ((*(byte *)(iVar3 + 0x32) & 8) == 0) {
_L0:
              iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
              if ((*(byte *)(iVar3 + 0x32) & 4) != 0) {
                *(undefined4 *)(iVar3 + 0x34) = 4;
                _L0(0x4a,0xd,0,3);
                *extraout_a0_04 = (char)unaff_s0;
                extraout_a0_04[1] = (char)uVar4;
                extraout_a0_04[2] = 1;
                _L0();
                goto _L0;
              }
            }
            else {
              *(undefined4 *)(iVar3 + 0x34) = 2;
              FUN_000105e6(param_1,unaff_s4,uVar4);
              if ((uVar4 == 0) || (uVar4 -= extraout_a0_02, 0 < (int)uVar4)) goto _L0;
            }
            iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
          }
          FUN_00010614((uint)*(byte *)(iVar3 + 0x1b),bVar1 & 7 | 0x10,0,0);
          *(undefined4 *)(iVar3 + 0x34) = 0;
        }
      }
      goto _L0;
    }
    FUN_00010456(unaff_s0,0);
    param_2 = unaff_s0;
    unaff_s3 = param_1;
  } while( true );
}



void FUN_00010484(uint param_1,undefined4 param_2)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_00010484(param_1,param_2);
    FUN_00010490(unaff_s3,unaff_s2);
_L0:
    do {
      while( true ) {
        do {
          iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar3 + 0x58) != '\0') {
            if ((unaff_s5 & 4) == 0) {
              FUN_000104b8((uint)*(byte *)(iVar3 + 0x57),unaff_s0,1);
            }
            iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
            if (*(char *)(iVar3 + 0x56) == '\0') {
              if ((unaff_s5 & 0xfc) == 0x80) {
                in_stack_0000002c = 0;
                _L0(0,unaff_s8);
                FUN_000104ec(0);
                FUN_000104fc(unaff_s8,iVar3,unaff_s4,(undefined4 *)&stack0x0000002c);
                FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar3);
                FUN_00010518(iVar3);
                if (*(int *)(iVar3 + 0x40) != 0) {
                  FUN_00010528(iVar3,*(undefined4 *)(iVar3 + 0x24));
                }
                if (extraout_a0_01 == 0) goto _L0;
              }
              else {
                if ((unaff_s5 & 4) == 0) {
                  FUN_000106f4(unaff_s10,unaff_s11,iVar3);
                }
              }
            }
          }
          while( true ) {
            do {
              FUN_000103f6(unaff_s9);
              if (extraout_a0 != 0) goto _L0;
_L0:
              while( true ) {
                FUN_0001038e(unaff_s9);
_L0:
                unaff_s9 = iRam00000000;
                FUN_00010312(0x40000);
                if (unaff_s9 == 0) {
                  return;
                }
                in_stack_0000000c += -1;
                if (in_stack_0000000c == 0) {
                  FUN_0001032a();
                  return;
                }
                FUN_00010358(0);
                unaff_s8 = *(int *)(unaff_s9 + 4);
                iVar3 = *(int *)(unaff_s8 + 8);
                if (iVar3 != 0) break;
                _L0(0,0,0x205);
              }
              unaff_s11 = *(uint *)(unaff_s8 + 0x40);
            } while ((unaff_s11 & 0x2002000) != 0x2002000);
            if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
              _L0(0,0,0x215);
              return;
            }
            unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
            unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
            if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
            *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
          }
          unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
          _L0();
          *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
          unaff_s10 = *(ushort **)(iVar3 + 8);
          unaff_s5 = *unaff_s10;
          uVar4 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
          unaff_s3 = uVar4 * 0x5d8 + unaff_s7;
        } while (*(char *)(unaff_s3 + 0x56) != '\x02');
        if (*(char *)(unaff_s4 + 0x1c) == '\x01') break;
        if ((unaff_s5 & 0x1400) == 0x1000) {
          FUN_000106b4(unaff_s0,1);
          if (*(char *)(unaff_s3 + 0x34a) == '\0') {
            FUN_000106cc(uVar4 + 10 & 0xff,1);
          }
          iVar3 = uVar4 * 0x5d8 + unaff_s7;
          *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
        }
      }
      if ((unaff_s5 & 0x140c) != 8) {
        if ((unaff_s5 & 0xfc) == 0xa4) {
          iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
          if ((*(byte *)(iVar3 + 0x32) & 2) == 0) {
            FUN_0001062c(0x4a,0xd,0,3);
            *extraout_a0_03 = (char)unaff_s0;
            extraout_a0_03[1] = 1;
            extraout_a0_03[2] = 0;
            _L0();
          }
          else {
            *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) | 1;
            FUN_00010566(unaff_s3,unaff_s4,1);
            *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xfffffffe;
          }
        }
        if ((unaff_s5 & 0x8c) == 0x88) {
          if ((unaff_s5 & 0x300) == 0x300) {
            bVar1 = *(byte *)(unaff_s10 + 0xf);
          }
          else {
            bVar1 = *(byte *)(unaff_s10 + 0xc);
          }
          iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
          if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
              *(byte *)(iVar3 + 0xf2)) != 0) {
            uVar4 = *(uint *)(iVar3 + 0x34) & 6;
            if ((*(byte *)(iVar3 + 0x32) & 0xc) == 0) {
              if (uVar4 != 0) goto _L0;
              *(undefined4 *)(iVar3 + 0x34) = 2;
            }
            else {
              if (uVar4 != 0) goto _L0;
              uVar4 = (uint)*(byte *)(iVar3 + 0xf3);
              if ((*(byte *)(iVar3 + 0x32) & 8) == 0) {
_L0:
                iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
                if ((*(byte *)(iVar3 + 0x32) & 4) != 0) {
                  *(undefined4 *)(iVar3 + 0x34) = 4;
                  _L0(0x4a,0xd,0,3);
                  *extraout_a0_04 = (char)unaff_s0;
                  extraout_a0_04[1] = (char)uVar4;
                  extraout_a0_04[2] = 1;
                  _L0();
                  goto _L0;
                }
              }
              else {
                *(undefined4 *)(iVar3 + 0x34) = 2;
                FUN_000105e6(unaff_s3,unaff_s4,uVar4);
                if ((uVar4 == 0) || (uVar4 -= extraout_a0_02, 0 < (int)uVar4)) goto _L0;
              }
              iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
            }
            FUN_00010614((uint)*(byte *)(iVar3 + 0x1b),bVar1 & 7 | 0x10,0,0);
            *(undefined4 *)(iVar3 + 0x34) = 0;
          }
        }
        goto _L0;
      }
      FUN_00010456(unaff_s0,0);
      FUN_00010462(unaff_s3,unaff_s0);
      cVar2 = *(char *)(unaff_s3 + 0x34a) + -1;
      *(char *)(unaff_s3 + 0x34a) = cVar2;
    } while (cVar2 != '\0');
    param_1 = uVar4 + 10 & 0xff;
    param_2 = 0;
    unaff_s2 = param_1;
  } while( true );
}



void FUN_00010490(int param_1,uint param_2)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar2;
  int iVar3;
  uint uVar4;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_00010490(param_1,param_2);
_L0:
    do {
      while( true ) {
        do {
          iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar3 + 0x58) != '\0') {
            if ((unaff_s5 & 4) == 0) {
              FUN_000104b8((uint)*(byte *)(iVar3 + 0x57),unaff_s0,1);
            }
            iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
            if (*(char *)(iVar3 + 0x56) == '\0') {
              if ((unaff_s5 & 0xfc) == 0x80) {
                in_stack_0000002c = 0;
                _L0(0,unaff_s8);
                FUN_000104ec(0);
                FUN_000104fc(unaff_s8,iVar3,unaff_s4,(undefined4 *)&stack0x0000002c);
                FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar3);
                FUN_00010518(iVar3);
                if (*(int *)(iVar3 + 0x40) != 0) {
                  FUN_00010528(iVar3,*(undefined4 *)(iVar3 + 0x24));
                }
                if (extraout_a0_01 == 0) goto _L0;
              }
              else {
                if ((unaff_s5 & 4) == 0) {
                  FUN_000106f4(unaff_s10,unaff_s11,iVar3);
                }
              }
            }
          }
          while( true ) {
            do {
              FUN_000103f6(unaff_s9);
              if (extraout_a0 != 0) goto _L0;
_L0:
              while( true ) {
                FUN_0001038e(unaff_s9);
_L0:
                unaff_s9 = iRam00000000;
                FUN_00010312(0x40000);
                if (unaff_s9 == 0) {
                  return;
                }
                in_stack_0000000c += -1;
                if (in_stack_0000000c == 0) {
                  FUN_0001032a();
                  return;
                }
                FUN_00010358(0);
                unaff_s8 = *(int *)(unaff_s9 + 4);
                iVar3 = *(int *)(unaff_s8 + 8);
                if (iVar3 != 0) break;
                _L0(0,0,0x205);
              }
              unaff_s11 = *(uint *)(unaff_s8 + 0x40);
            } while ((unaff_s11 & 0x2002000) != 0x2002000);
            if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
              _L0(0,0,0x215);
              return;
            }
            unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
            unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
            if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
            *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
          }
          unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
          _L0();
          *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
          unaff_s10 = *(ushort **)(iVar3 + 8);
          unaff_s5 = *unaff_s10;
          uVar4 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
          param_1 = uVar4 * 0x5d8 + unaff_s7;
        } while (*(char *)(param_1 + 0x56) != '\x02');
        if (*(char *)(unaff_s4 + 0x1c) == '\x01') break;
        if ((unaff_s5 & 0x1400) == 0x1000) {
          FUN_000106b4(unaff_s0,1);
          if (*(char *)(param_1 + 0x34a) == '\0') {
            FUN_000106cc(uVar4 + 10 & 0xff,1);
          }
          iVar3 = uVar4 * 0x5d8 + unaff_s7;
          *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
        }
      }
      if ((unaff_s5 & 0x140c) != 8) {
        if ((unaff_s5 & 0xfc) == 0xa4) {
          iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
          if ((*(byte *)(iVar3 + 0x32) & 2) == 0) {
            FUN_0001062c(0x4a,0xd,0,3);
            *extraout_a0_03 = (char)unaff_s0;
            extraout_a0_03[1] = 1;
            extraout_a0_03[2] = 0;
            _L0();
          }
          else {
            *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) | 1;
            FUN_00010566(param_1,unaff_s4,1);
            *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xfffffffe;
          }
        }
        if ((unaff_s5 & 0x8c) == 0x88) {
          if ((unaff_s5 & 0x300) == 0x300) {
            bVar1 = *(byte *)(unaff_s10 + 0xf);
          }
          else {
            bVar1 = *(byte *)(unaff_s10 + 0xc);
          }
          iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
          if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
              *(byte *)(iVar3 + 0xf2)) != 0) {
            uVar4 = *(uint *)(iVar3 + 0x34) & 6;
            if ((*(byte *)(iVar3 + 0x32) & 0xc) == 0) {
              if (uVar4 != 0) goto _L0;
              *(undefined4 *)(iVar3 + 0x34) = 2;
            }
            else {
              if (uVar4 != 0) goto _L0;
              uVar4 = (uint)*(byte *)(iVar3 + 0xf3);
              if ((*(byte *)(iVar3 + 0x32) & 8) == 0) {
_L0:
                iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
                if ((*(byte *)(iVar3 + 0x32) & 4) != 0) {
                  *(undefined4 *)(iVar3 + 0x34) = 4;
                  _L0(0x4a,0xd,0,3);
                  *extraout_a0_04 = (char)unaff_s0;
                  extraout_a0_04[1] = (char)uVar4;
                  extraout_a0_04[2] = 1;
                  _L0();
                  goto _L0;
                }
              }
              else {
                *(undefined4 *)(iVar3 + 0x34) = 2;
                FUN_000105e6(param_1,unaff_s4,uVar4);
                if ((uVar4 == 0) || (uVar4 -= extraout_a0_02, 0 < (int)uVar4)) goto _L0;
              }
              iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
            }
            FUN_00010614((uint)*(byte *)(iVar3 + 0x1b),bVar1 & 7 | 0x10,0,0);
            *(undefined4 *)(iVar3 + 0x34) = 0;
          }
        }
        goto _L0;
      }
      FUN_00010456(unaff_s0,0);
      FUN_00010462(param_1,unaff_s0);
      cVar2 = *(char *)(param_1 + 0x34a) + -1;
      *(char *)(param_1 + 0x34a) = cVar2;
    } while (cVar2 != '\0');
    param_2 = uVar4 + 10 & 0xff;
    FUN_00010484(param_2,0);
  } while( true );
}



void FUN_000104b8(uint param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  uint unaff_s1;
  int iVar3;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar4;
  uint uVar5;
  uint unaff_s2;
  int iVar6;
  int unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_000104b8(param_1,param_2,param_3);
    do {
      iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
      if (*(char *)(iVar3 + 0x56) == '\0') {
        if ((unaff_s5 & 0xfc) == 0x80) {
          in_stack_0000002c = 0;
          _L0(0,unaff_s8);
          FUN_000104ec(0);
          FUN_000104fc(unaff_s8,iVar3,unaff_s4,(undefined4 *)&stack0x0000002c);
          FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar3);
          FUN_00010518(iVar3);
          if (*(int *)(iVar3 + 0x40) != 0) {
            FUN_00010528(iVar3,*(undefined4 *)(iVar3 + 0x24));
          }
          if (extraout_a0_01 == 0) goto _L0;
        }
        else {
          if (unaff_s2 == 0) {
            FUN_000106f4(unaff_s10,unaff_s11,iVar3);
          }
        }
      }
      do {
        while( true ) {
          do {
            FUN_000103f6(unaff_s9);
            if (extraout_a0 != 0) goto _L0;
_L0:
            while( true ) {
              FUN_0001038e(unaff_s9);
_L0:
              unaff_s9 = iRam00000000;
              FUN_00010312(0x40000);
              if (unaff_s9 == 0) {
                return;
              }
              in_stack_0000000c += -1;
              if (in_stack_0000000c == 0) {
                FUN_0001032a();
                return;
              }
              FUN_00010358(0);
              unaff_s8 = *(int *)(unaff_s9 + 4);
              iVar3 = *(int *)(unaff_s8 + 8);
              if (iVar3 != 0) break;
              _L0(0,0,0x205);
            }
            unaff_s11 = *(uint *)(unaff_s8 + 0x40);
          } while ((unaff_s11 & 0x2002000) != 0x2002000);
          if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
            _L0(0,0,0x215);
            return;
          }
          param_2 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
          unaff_s4 = param_2 * 0x1b0 + unaff_s6;
          if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
          *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
        }
        unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
        _L0();
        *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
        unaff_s10 = *(ushort **)(iVar3 + 8);
        uVar2 = *unaff_s10;
        unaff_s5 = (uint)uVar2;
        uVar5 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
        iVar3 = uVar5 * 0x5d8 + unaff_s7;
        if (*(char *)(iVar3 + 0x56) == '\x02') {
          if (*(char *)(unaff_s4 + 0x1c) == '\x01') {
            if ((unaff_s5 & 0x140c) == 8) {
              FUN_00010456(param_2,0);
              FUN_00010462(iVar3,param_2);
              cVar4 = *(char *)(iVar3 + 0x34a) + -1;
              *(char *)(iVar3 + 0x34a) = cVar4;
              if (cVar4 == '\0') {
                uVar5 = uVar5 + 10 & 0xff;
                FUN_00010484(uVar5,0);
                FUN_00010490(iVar3,uVar5);
              }
            }
            else {
              if ((unaff_s5 & 0xfc) == 0xa4) {
                iVar6 = param_2 * 0x1b0 + unaff_s6;
                if ((*(byte *)(iVar6 + 0x32) & 2) == 0) {
                  FUN_0001062c(0x4a,0xd,0,3);
                  *extraout_a0_03 = (char)param_2;
                  extraout_a0_03[1] = 1;
                  extraout_a0_03[2] = 0;
                  _L0();
                }
                else {
                  *(uint *)(iVar6 + 0x34) = *(uint *)(iVar6 + 0x34) | 1;
                  FUN_00010566(iVar3,unaff_s4,1);
                  *(uint *)(iVar6 + 0x34) = *(uint *)(iVar6 + 0x34) & 0xfffffffe;
                }
              }
              if ((unaff_s5 & 0x8c) == 0x88) {
                if ((unaff_s5 & 0x300) == 0x300) {
                  bVar1 = *(byte *)(unaff_s10 + 0xf);
                }
                else {
                  bVar1 = *(byte *)(unaff_s10 + 0xc);
                }
                iVar6 = param_2 * 0x1b0 + unaff_s6;
                if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014)
                    & *(byte *)(iVar6 + 0xf2)) != 0) {
                  uVar5 = *(uint *)(iVar6 + 0x34) & 6;
                  if ((*(byte *)(iVar6 + 0x32) & 0xc) == 0) {
                    if (uVar5 != 0) goto _L0;
                    *(undefined4 *)(iVar6 + 0x34) = 2;
                  }
                  else {
                    if (uVar5 != 0) goto _L0;
                    uVar5 = (uint)*(byte *)(iVar6 + 0xf3);
                    if ((*(byte *)(iVar6 + 0x32) & 8) == 0) {
_L0:
                      iVar3 = param_2 * 0x1b0 + unaff_s6;
                      if ((*(byte *)(iVar3 + 0x32) & 4) != 0) {
                        *(undefined4 *)(iVar3 + 0x34) = 4;
                        _L0(0x4a,0xd,0,3);
                        *extraout_a0_04 = (char)param_2;
                        extraout_a0_04[1] = (char)uVar5;
                        extraout_a0_04[2] = 1;
                        _L0();
                        goto _L0;
                      }
                    }
                    else {
                      *(undefined4 *)(iVar6 + 0x34) = 2;
                      FUN_000105e6(iVar3,unaff_s4,uVar5);
                      if ((uVar5 == 0) || (uVar5 -= extraout_a0_02, 0 < (int)uVar5)) goto _L0;
                    }
                    iVar6 = param_2 * 0x1b0 + unaff_s6;
                  }
                  FUN_00010614((uint)*(byte *)(iVar6 + 0x1b),bVar1 & 7 | 0x10,0,0);
                  *(undefined4 *)(iVar6 + 0x34) = 0;
                }
              }
            }
          }
          else {
            if ((unaff_s5 & 0x1400) == 0x1000) {
              FUN_000106b4(param_2,1);
              if (*(char *)(iVar3 + 0x34a) == '\0') {
                FUN_000106cc(uVar5 + 10 & 0xff,1);
              }
              iVar3 = uVar5 * 0x5d8 + unaff_s7;
              *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
            }
          }
        }
_L0:
        iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
      } while (*(char *)(iVar3 + 0x58) == '\0');
      unaff_s2 = unaff_s5 & 4;
    } while ((uVar2 & 4) != 0);
    param_1 = (uint)*(byte *)(iVar3 + 0x57);
    param_3 = 1;
  } while( true );
}



void _L0(undefined4 param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *puVar9;
  uint uVar10;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    _L0(param_1,param_2);
    FUN_000104ec(0);
    FUN_000104fc(unaff_s8,unaff_s1,unaff_s4,(undefined4 *)&stack0x0000002c);
    FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),unaff_s1);
    FUN_00010518(unaff_s1);
    if (*(int *)(unaff_s1 + 0x40) != 0) {
      FUN_00010528(unaff_s1,*(undefined4 *)(unaff_s1 + 0x24));
    }
    if (extraout_a0_01 == 0) goto _L0;
_L0:
    do {
      do {
        while( true ) {
          do {
            FUN_000103f6(unaff_s9);
            if (extraout_a0 != 0) goto _L0;
_L0:
            while( true ) {
              FUN_0001038e(unaff_s9);
_L0:
              unaff_s9 = iRam00000000;
              FUN_00010312(0x40000);
              if (unaff_s9 == 0) {
                return;
              }
              in_stack_0000000c += -1;
              if (in_stack_0000000c == 0) {
                FUN_0001032a();
                return;
              }
              FUN_00010358(0);
              param_2 = *(int *)(unaff_s9 + 4);
              iVar6 = *(int *)(param_2 + 8);
              if (iVar6 != 0) break;
              _L0(0,0,0x205);
            }
            uVar10 = *(uint *)(param_2 + 0x40);
          } while ((uVar10 & 0x2002000) != 0x2002000);
          if ((uVar10 >> 0xf & 0x3f8) == 0) {
            _L0(0,0,0x215);
            return;
          }
          uVar3 = (uVar10 >> 0xf & 0x3ff) - 8 & 0xff;
          unaff_s4 = uVar3 * 0x1b0 + unaff_s6;
          if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
          *(uint *)(param_2 + 0x40) = uVar10 & 0xfdffffff;
        }
        uVar4 = (uint)*(byte *)(unaff_s4 + 0x1a);
        _L0();
        *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
        puVar9 = *(ushort **)(iVar6 + 8);
        uVar2 = *puVar9;
        uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
        iVar6 = uVar7 * 0x5d8 + unaff_s7;
        if (*(char *)(iVar6 + 0x56) == '\x02') {
          if (*(char *)(unaff_s4 + 0x1c) == '\x01') {
            if ((uVar2 & 0x140c) == 8) {
              FUN_00010456(uVar3,0);
              FUN_00010462(iVar6,uVar3);
              cVar5 = *(char *)(iVar6 + 0x34a) + -1;
              *(char *)(iVar6 + 0x34a) = cVar5;
              if (cVar5 == '\0') {
                uVar7 = uVar7 + 10 & 0xff;
                FUN_00010484(uVar7,0);
                FUN_00010490(iVar6,uVar7);
              }
            }
            else {
              if ((uVar2 & 0xfc) == 0xa4) {
                iVar8 = uVar3 * 0x1b0 + unaff_s6;
                if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                  FUN_0001062c(0x4a,0xd,0,3);
                  *extraout_a0_03 = (char)uVar3;
                  extraout_a0_03[1] = 1;
                  extraout_a0_03[2] = 0;
                  _L0();
                }
                else {
                  *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                  FUN_00010566(iVar6,unaff_s4,1);
                  *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
                }
              }
              if ((uVar2 & 0x8c) == 0x88) {
                if ((uVar2 & 0x300) == 0x300) {
                  bVar1 = *(byte *)(puVar9 + 0xf);
                }
                else {
                  bVar1 = *(byte *)(puVar9 + 0xc);
                }
                iVar8 = uVar3 * 0x1b0 + unaff_s6;
                if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014)
                    & *(byte *)(iVar8 + 0xf2)) != 0) {
                  uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                  if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                    if (uVar7 != 0) goto _L0;
                    *(undefined4 *)(iVar8 + 0x34) = 2;
                  }
                  else {
                    if (uVar7 != 0) goto _L0;
                    uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                    if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                      iVar6 = uVar3 * 0x1b0 + unaff_s6;
                      if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                        *(undefined4 *)(iVar6 + 0x34) = 4;
                        _L0(0x4a,0xd,0,3);
                        *extraout_a0_04 = (char)uVar3;
                        extraout_a0_04[1] = (char)uVar7;
                        extraout_a0_04[2] = 1;
                        _L0();
                        goto _L0;
                      }
                    }
                    else {
                      *(undefined4 *)(iVar8 + 0x34) = 2;
                      FUN_000105e6(iVar6,unaff_s4,uVar7);
                      if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                    }
                    iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  }
                  FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                  *(undefined4 *)(iVar8 + 0x34) = 0;
                }
              }
            }
          }
          else {
            if ((uVar2 & 0x1400) == 0x1000) {
              FUN_000106b4(uVar3,1);
              if (*(char *)(iVar6 + 0x34a) == '\0') {
                FUN_000106cc(uVar7 + 10 & 0xff,1);
              }
              iVar6 = uVar7 * 0x5d8 + unaff_s7;
              *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
            }
          }
        }
_L0:
        iVar6 = uVar4 * 0x5d8 + unaff_s7;
      } while (*(char *)(iVar6 + 0x58) == '\0');
      if ((uVar2 & 4) == 0) {
        FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
      }
      unaff_s1 = uVar4 * 0x5d8 + unaff_s7;
    } while (*(char *)(unaff_s1 + 0x56) != '\0');
    if ((uVar2 & 0xfc) != 0x80) {
      if ((uVar2 & 4) == 0) {
        FUN_000106f4(puVar9,uVar10,unaff_s1);
      }
      goto _L0;
    }
    param_1 = 0;
    in_stack_0000002c = 0;
    unaff_s8 = param_2;
  } while( true );
}



void FUN_000104ec(undefined4 param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *puVar9;
  uint uVar10;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_000104ec(param_1);
    FUN_000104fc(unaff_s8,unaff_s1,unaff_s4,(undefined4 *)&stack0x0000002c);
    FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),unaff_s1);
    FUN_00010518(unaff_s1);
    if (*(int *)(unaff_s1 + 0x40) != 0) {
      FUN_00010528(unaff_s1,*(undefined4 *)(unaff_s1 + 0x24));
    }
    if (extraout_a0_01 == 0) goto _L0;
_L0:
    do {
      do {
        while( true ) {
          do {
            FUN_000103f6(unaff_s9);
            if (extraout_a0 != 0) goto _L0;
_L0:
            while( true ) {
              FUN_0001038e(unaff_s9);
_L0:
              unaff_s9 = iRam00000000;
              FUN_00010312(0x40000);
              if (unaff_s9 == 0) {
                return;
              }
              in_stack_0000000c += -1;
              if (in_stack_0000000c == 0) {
                FUN_0001032a();
                return;
              }
              FUN_00010358(0);
              unaff_s8 = *(int *)(unaff_s9 + 4);
              iVar6 = *(int *)(unaff_s8 + 8);
              if (iVar6 != 0) break;
              _L0(0,0,0x205);
            }
            uVar10 = *(uint *)(unaff_s8 + 0x40);
          } while ((uVar10 & 0x2002000) != 0x2002000);
          if ((uVar10 >> 0xf & 0x3f8) == 0) {
            _L0(0,0,0x215);
            return;
          }
          uVar3 = (uVar10 >> 0xf & 0x3ff) - 8 & 0xff;
          unaff_s4 = uVar3 * 0x1b0 + unaff_s6;
          if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
          *(uint *)(unaff_s8 + 0x40) = uVar10 & 0xfdffffff;
        }
        uVar4 = (uint)*(byte *)(unaff_s4 + 0x1a);
        _L0();
        *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
        puVar9 = *(ushort **)(iVar6 + 8);
        uVar2 = *puVar9;
        uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
        iVar6 = uVar7 * 0x5d8 + unaff_s7;
        if (*(char *)(iVar6 + 0x56) == '\x02') {
          if (*(char *)(unaff_s4 + 0x1c) == '\x01') {
            if ((uVar2 & 0x140c) == 8) {
              FUN_00010456(uVar3,0);
              FUN_00010462(iVar6,uVar3);
              cVar5 = *(char *)(iVar6 + 0x34a) + -1;
              *(char *)(iVar6 + 0x34a) = cVar5;
              if (cVar5 == '\0') {
                uVar7 = uVar7 + 10 & 0xff;
                FUN_00010484(uVar7,0);
                FUN_00010490(iVar6,uVar7);
              }
            }
            else {
              if ((uVar2 & 0xfc) == 0xa4) {
                iVar8 = uVar3 * 0x1b0 + unaff_s6;
                if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                  FUN_0001062c(0x4a,0xd,0,3);
                  *extraout_a0_03 = (char)uVar3;
                  extraout_a0_03[1] = 1;
                  extraout_a0_03[2] = 0;
                  _L0();
                }
                else {
                  *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                  FUN_00010566(iVar6,unaff_s4,1);
                  *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
                }
              }
              if ((uVar2 & 0x8c) == 0x88) {
                if ((uVar2 & 0x300) == 0x300) {
                  bVar1 = *(byte *)(puVar9 + 0xf);
                }
                else {
                  bVar1 = *(byte *)(puVar9 + 0xc);
                }
                iVar8 = uVar3 * 0x1b0 + unaff_s6;
                if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014)
                    & *(byte *)(iVar8 + 0xf2)) != 0) {
                  uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                  if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                    if (uVar7 != 0) goto _L0;
                    *(undefined4 *)(iVar8 + 0x34) = 2;
                  }
                  else {
                    if (uVar7 != 0) goto _L0;
                    uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                    if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                      iVar6 = uVar3 * 0x1b0 + unaff_s6;
                      if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                        *(undefined4 *)(iVar6 + 0x34) = 4;
                        _L0(0x4a,0xd,0,3);
                        *extraout_a0_04 = (char)uVar3;
                        extraout_a0_04[1] = (char)uVar7;
                        extraout_a0_04[2] = 1;
                        _L0();
                        goto _L0;
                      }
                    }
                    else {
                      *(undefined4 *)(iVar8 + 0x34) = 2;
                      FUN_000105e6(iVar6,unaff_s4,uVar7);
                      if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                    }
                    iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  }
                  FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                  *(undefined4 *)(iVar8 + 0x34) = 0;
                }
              }
            }
          }
          else {
            if ((uVar2 & 0x1400) == 0x1000) {
              FUN_000106b4(uVar3,1);
              if (*(char *)(iVar6 + 0x34a) == '\0') {
                FUN_000106cc(uVar7 + 10 & 0xff,1);
              }
              iVar6 = uVar7 * 0x5d8 + unaff_s7;
              *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
            }
          }
        }
_L0:
        iVar6 = uVar4 * 0x5d8 + unaff_s7;
      } while (*(char *)(iVar6 + 0x58) == '\0');
      if ((uVar2 & 4) == 0) {
        FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
      }
      unaff_s1 = uVar4 * 0x5d8 + unaff_s7;
    } while (*(char *)(unaff_s1 + 0x56) != '\0');
    if ((uVar2 & 0xfc) != 0x80) {
      if ((uVar2 & 4) == 0) {
        FUN_000106f4(puVar9,uVar10,unaff_s1);
      }
      goto _L0;
    }
    in_stack_0000002c = 0;
    _L0(0,unaff_s8);
    param_1 = 0;
  } while( true );
}



void FUN_000104fc(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *puVar9;
  uint uVar10;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_000104fc(param_1,param_2,param_3,param_4);
    FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),unaff_s1);
    FUN_00010518(unaff_s1);
    if (*(int *)(unaff_s1 + 0x40) != 0) {
      FUN_00010528(unaff_s1,*(undefined4 *)(unaff_s1 + 0x24));
    }
    if (extraout_a0_01 == 0) goto _L0;
_L0:
    do {
      do {
        while( true ) {
          do {
            FUN_000103f6(unaff_s9);
            if (extraout_a0 != 0) goto _L0;
_L0:
            while( true ) {
              FUN_0001038e(unaff_s9);
_L0:
              unaff_s9 = iRam00000000;
              FUN_00010312(0x40000);
              if (unaff_s9 == 0) {
                return;
              }
              in_stack_0000000c += -1;
              if (in_stack_0000000c == 0) {
                FUN_0001032a();
                return;
              }
              FUN_00010358(0);
              param_1 = *(int *)(unaff_s9 + 4);
              iVar6 = *(int *)(param_1 + 8);
              if (iVar6 != 0) break;
              _L0(0,0,0x205);
            }
            uVar10 = *(uint *)(param_1 + 0x40);
          } while ((uVar10 & 0x2002000) != 0x2002000);
          if ((uVar10 >> 0xf & 0x3f8) == 0) {
            _L0(0,0,0x215);
            return;
          }
          uVar3 = (uVar10 >> 0xf & 0x3ff) - 8 & 0xff;
          param_3 = uVar3 * 0x1b0 + unaff_s6;
          if (*(char *)(param_3 + 0x1d) != '\0') break;
          *(uint *)(param_1 + 0x40) = uVar10 & 0xfdffffff;
        }
        uVar4 = (uint)*(byte *)(param_3 + 0x1a);
        _L0();
        *(undefined4 *)(param_3 + 0x1a8) = extraout_a0_00;
        puVar9 = *(ushort **)(iVar6 + 8);
        uVar2 = *puVar9;
        uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
        iVar6 = uVar7 * 0x5d8 + unaff_s7;
        if (*(char *)(iVar6 + 0x56) == '\x02') {
          if (*(char *)(param_3 + 0x1c) == '\x01') {
            if ((uVar2 & 0x140c) == 8) {
              FUN_00010456(uVar3,0);
              FUN_00010462(iVar6,uVar3);
              cVar5 = *(char *)(iVar6 + 0x34a) + -1;
              *(char *)(iVar6 + 0x34a) = cVar5;
              if (cVar5 == '\0') {
                uVar7 = uVar7 + 10 & 0xff;
                FUN_00010484(uVar7,0);
                FUN_00010490(iVar6,uVar7);
              }
            }
            else {
              if ((uVar2 & 0xfc) == 0xa4) {
                iVar8 = uVar3 * 0x1b0 + unaff_s6;
                if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                  FUN_0001062c(0x4a,0xd,0,3);
                  *extraout_a0_03 = (char)uVar3;
                  extraout_a0_03[1] = 1;
                  extraout_a0_03[2] = 0;
                  _L0();
                }
                else {
                  *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                  FUN_00010566(iVar6,param_3,1);
                  *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
                }
              }
              if ((uVar2 & 0x8c) == 0x88) {
                if ((uVar2 & 0x300) == 0x300) {
                  bVar1 = *(byte *)(puVar9 + 0xf);
                }
                else {
                  bVar1 = *(byte *)(puVar9 + 0xc);
                }
                iVar8 = uVar3 * 0x1b0 + unaff_s6;
                if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014)
                    & *(byte *)(iVar8 + 0xf2)) != 0) {
                  uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                  if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                    if (uVar7 != 0) goto _L0;
                    *(undefined4 *)(iVar8 + 0x34) = 2;
                  }
                  else {
                    if (uVar7 != 0) goto _L0;
                    uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                    if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                      iVar6 = uVar3 * 0x1b0 + unaff_s6;
                      if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                        *(undefined4 *)(iVar6 + 0x34) = 4;
                        _L0(0x4a,0xd,0,3);
                        *extraout_a0_04 = (char)uVar3;
                        extraout_a0_04[1] = (char)uVar7;
                        extraout_a0_04[2] = 1;
                        _L0();
                        goto _L0;
                      }
                    }
                    else {
                      *(undefined4 *)(iVar8 + 0x34) = 2;
                      FUN_000105e6(iVar6,param_3,uVar7);
                      if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                    }
                    iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  }
                  FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                  *(undefined4 *)(iVar8 + 0x34) = 0;
                }
              }
            }
          }
          else {
            if ((uVar2 & 0x1400) == 0x1000) {
              FUN_000106b4(uVar3,1);
              if (*(char *)(iVar6 + 0x34a) == '\0') {
                FUN_000106cc(uVar7 + 10 & 0xff,1);
              }
              iVar6 = uVar7 * 0x5d8 + unaff_s7;
              *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
            }
          }
        }
_L0:
        iVar6 = uVar4 * 0x5d8 + unaff_s7;
      } while (*(char *)(iVar6 + 0x58) == '\0');
      if ((uVar2 & 4) == 0) {
        FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
      }
      unaff_s1 = uVar4 * 0x5d8 + unaff_s7;
    } while (*(char *)(unaff_s1 + 0x56) != '\0');
    if ((uVar2 & 0xfc) != 0x80) {
      if ((uVar2 & 4) == 0) {
        FUN_000106f4(puVar9,uVar10,unaff_s1);
      }
      goto _L0;
    }
    in_stack_0000002c = 0;
    _L0(0,param_1);
    FUN_000104ec(0);
    param_4 = (undefined4 *)&stack0x0000002c;
    param_2 = unaff_s1;
    unaff_s8 = param_1;
  } while( true );
}



void FUN_0001050e(undefined4 param_1,uint param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_s0;
  uint uVar4;
  int unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s6;
  int unaff_s7;
  int iVar10;
  int unaff_s9;
  ushort *puVar11;
  uint uVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_0001050e(param_1,param_2,param_3);
    FUN_00010518(unaff_s1);
    if (*(int *)(unaff_s1 + 0x40) != 0) {
      FUN_00010528(unaff_s1,*(undefined4 *)(unaff_s1 + 0x24));
    }
    if (unaff_s0 == 0) goto _L0;
_L0:
    do {
      do {
        while( true ) {
          do {
            FUN_000103f6(unaff_s9);
            if (extraout_a0 != 0) goto _L0;
_L0:
            while( true ) {
              FUN_0001038e(unaff_s9);
_L0:
              unaff_s9 = iRam00000000;
              FUN_00010312(0x40000);
              if (unaff_s9 == 0) {
                return;
              }
              in_stack_0000000c += -1;
              if (in_stack_0000000c == 0) {
                FUN_0001032a();
                return;
              }
              FUN_00010358(0);
              iVar10 = *(int *)(unaff_s9 + 4);
              iVar6 = *(int *)(iVar10 + 8);
              if (iVar6 != 0) break;
              _L0(0,0,0x205);
            }
            uVar12 = *(uint *)(iVar10 + 0x40);
          } while ((uVar12 & 0x2002000) != 0x2002000);
          if ((uVar12 >> 0xf & 0x3f8) == 0) {
            _L0(0,0,0x215);
            return;
          }
          uVar3 = (uVar12 >> 0xf & 0x3ff) - 8 & 0xff;
          iVar9 = uVar3 * 0x1b0 + unaff_s6;
          if (*(char *)(iVar9 + 0x1d) != '\0') break;
          *(uint *)(iVar10 + 0x40) = uVar12 & 0xfdffffff;
        }
        uVar4 = (uint)*(byte *)(iVar9 + 0x1a);
        _L0();
        *(undefined4 *)(iVar9 + 0x1a8) = extraout_a0_00;
        puVar11 = *(ushort **)(iVar6 + 8);
        uVar2 = *puVar11;
        uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
        iVar6 = uVar7 * 0x5d8 + unaff_s7;
        if (*(char *)(iVar6 + 0x56) == '\x02') {
          if (*(char *)(iVar9 + 0x1c) == '\x01') {
            if ((uVar2 & 0x140c) == 8) {
              FUN_00010456(uVar3,0);
              FUN_00010462(iVar6,uVar3);
              cVar5 = *(char *)(iVar6 + 0x34a) + -1;
              *(char *)(iVar6 + 0x34a) = cVar5;
              if (cVar5 == '\0') {
                uVar7 = uVar7 + 10 & 0xff;
                FUN_00010484(uVar7,0);
                FUN_00010490(iVar6,uVar7);
              }
            }
            else {
              if ((uVar2 & 0xfc) == 0xa4) {
                iVar8 = uVar3 * 0x1b0 + unaff_s6;
                if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                  FUN_0001062c(0x4a,0xd,0,3);
                  *extraout_a0_03 = (char)uVar3;
                  extraout_a0_03[1] = 1;
                  extraout_a0_03[2] = 0;
                  _L0();
                }
                else {
                  *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                  FUN_00010566(iVar6,iVar9,1);
                  *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
                }
              }
              if ((uVar2 & 0x8c) == 0x88) {
                if ((uVar2 & 0x300) == 0x300) {
                  bVar1 = *(byte *)(puVar11 + 0xf);
                }
                else {
                  bVar1 = *(byte *)(puVar11 + 0xc);
                }
                iVar8 = uVar3 * 0x1b0 + unaff_s6;
                if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014)
                    & *(byte *)(iVar8 + 0xf2)) != 0) {
                  uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                  if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                    if (uVar7 != 0) goto _L0;
                    *(undefined4 *)(iVar8 + 0x34) = 2;
                  }
                  else {
                    if (uVar7 != 0) goto _L0;
                    uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                    if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                      iVar6 = uVar3 * 0x1b0 + unaff_s6;
                      if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                        *(undefined4 *)(iVar6 + 0x34) = 4;
                        _L0(0x4a,0xd,0,3);
                        *extraout_a0_04 = (char)uVar3;
                        extraout_a0_04[1] = (char)uVar7;
                        extraout_a0_04[2] = 1;
                        _L0();
                        goto _L0;
                      }
                    }
                    else {
                      *(undefined4 *)(iVar8 + 0x34) = 2;
                      FUN_000105e6(iVar6,iVar9,uVar7);
                      if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                    }
                    iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  }
                  FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                  *(undefined4 *)(iVar8 + 0x34) = 0;
                }
              }
            }
          }
          else {
            if ((uVar2 & 0x1400) == 0x1000) {
              FUN_000106b4(uVar3,1);
              if (*(char *)(iVar6 + 0x34a) == '\0') {
                FUN_000106cc(uVar7 + 10 & 0xff,1);
              }
              iVar6 = uVar7 * 0x5d8 + unaff_s7;
              *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
            }
          }
        }
_L0:
        iVar6 = uVar4 * 0x5d8 + unaff_s7;
      } while (*(char *)(iVar6 + 0x58) == '\0');
      if ((uVar2 & 4) == 0) {
        FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
      }
      unaff_s1 = uVar4 * 0x5d8 + unaff_s7;
    } while (*(char *)(unaff_s1 + 0x56) != '\0');
    if ((uVar2 & 0xfc) != 0x80) {
      if ((uVar2 & 4) == 0) {
        FUN_000106f4(puVar11,uVar12,unaff_s1);
      }
      goto _L0;
    }
    in_stack_0000002c = 0;
    _L0(0,iVar10);
    FUN_000104ec(0);
    FUN_000104fc(iVar10,unaff_s1,iVar9,(undefined4 *)&stack0x0000002c);
    param_2 = (uint)*(ushort *)(iVar10 + 0x1c);
    unaff_s0 = extraout_a0_01;
    param_1 = in_stack_0000002c;
    param_3 = unaff_s1;
  } while( true );
}



void FUN_00010518(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_s0;
  uint uVar4;
  int unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s6;
  int unaff_s7;
  int iVar10;
  int unaff_s9;
  ushort *puVar11;
  uint uVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_00010518(param_1);
    if (*(int *)(unaff_s1 + 0x40) != 0) {
      FUN_00010528(unaff_s1,*(undefined4 *)(unaff_s1 + 0x24));
    }
    if (unaff_s0 == 0) goto _L0;
_L0:
    do {
      do {
        while( true ) {
          do {
            FUN_000103f6(unaff_s9);
            if (extraout_a0 != 0) goto _L0;
_L0:
            while( true ) {
              FUN_0001038e(unaff_s9);
_L0:
              unaff_s9 = iRam00000000;
              FUN_00010312(0x40000);
              if (unaff_s9 == 0) {
                return;
              }
              in_stack_0000000c += -1;
              if (in_stack_0000000c == 0) {
                FUN_0001032a();
                return;
              }
              FUN_00010358(0);
              iVar10 = *(int *)(unaff_s9 + 4);
              iVar6 = *(int *)(iVar10 + 8);
              if (iVar6 != 0) break;
              _L0(0,0,0x205);
            }
            uVar12 = *(uint *)(iVar10 + 0x40);
          } while ((uVar12 & 0x2002000) != 0x2002000);
          if ((uVar12 >> 0xf & 0x3f8) == 0) {
            _L0(0,0,0x215);
            return;
          }
          uVar3 = (uVar12 >> 0xf & 0x3ff) - 8 & 0xff;
          iVar9 = uVar3 * 0x1b0 + unaff_s6;
          if (*(char *)(iVar9 + 0x1d) != '\0') break;
          *(uint *)(iVar10 + 0x40) = uVar12 & 0xfdffffff;
        }
        uVar4 = (uint)*(byte *)(iVar9 + 0x1a);
        _L0();
        *(undefined4 *)(iVar9 + 0x1a8) = extraout_a0_00;
        puVar11 = *(ushort **)(iVar6 + 8);
        uVar2 = *puVar11;
        uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
        iVar6 = uVar7 * 0x5d8 + unaff_s7;
        if (*(char *)(iVar6 + 0x56) == '\x02') {
          if (*(char *)(iVar9 + 0x1c) == '\x01') {
            if ((uVar2 & 0x140c) == 8) {
              FUN_00010456(uVar3,0);
              FUN_00010462(iVar6,uVar3);
              cVar5 = *(char *)(iVar6 + 0x34a) + -1;
              *(char *)(iVar6 + 0x34a) = cVar5;
              if (cVar5 == '\0') {
                uVar7 = uVar7 + 10 & 0xff;
                FUN_00010484(uVar7,0);
                FUN_00010490(iVar6,uVar7);
              }
            }
            else {
              if ((uVar2 & 0xfc) == 0xa4) {
                iVar8 = uVar3 * 0x1b0 + unaff_s6;
                if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                  FUN_0001062c(0x4a,0xd,0,3);
                  *extraout_a0_03 = (char)uVar3;
                  extraout_a0_03[1] = 1;
                  extraout_a0_03[2] = 0;
                  _L0();
                }
                else {
                  *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                  FUN_00010566(iVar6,iVar9,1);
                  *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
                }
              }
              if ((uVar2 & 0x8c) == 0x88) {
                if ((uVar2 & 0x300) == 0x300) {
                  bVar1 = *(byte *)(puVar11 + 0xf);
                }
                else {
                  bVar1 = *(byte *)(puVar11 + 0xc);
                }
                iVar8 = uVar3 * 0x1b0 + unaff_s6;
                if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014)
                    & *(byte *)(iVar8 + 0xf2)) != 0) {
                  uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                  if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                    if (uVar7 != 0) goto _L0;
                    *(undefined4 *)(iVar8 + 0x34) = 2;
                  }
                  else {
                    if (uVar7 != 0) goto _L0;
                    uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                    if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                      iVar6 = uVar3 * 0x1b0 + unaff_s6;
                      if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                        *(undefined4 *)(iVar6 + 0x34) = 4;
                        _L0(0x4a,0xd,0,3);
                        *extraout_a0_04 = (char)uVar3;
                        extraout_a0_04[1] = (char)uVar7;
                        extraout_a0_04[2] = 1;
                        _L0();
                        goto _L0;
                      }
                    }
                    else {
                      *(undefined4 *)(iVar8 + 0x34) = 2;
                      FUN_000105e6(iVar6,iVar9,uVar7);
                      if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                    }
                    iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  }
                  FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                  *(undefined4 *)(iVar8 + 0x34) = 0;
                }
              }
            }
          }
          else {
            if ((uVar2 & 0x1400) == 0x1000) {
              FUN_000106b4(uVar3,1);
              if (*(char *)(iVar6 + 0x34a) == '\0') {
                FUN_000106cc(uVar7 + 10 & 0xff,1);
              }
              iVar6 = uVar7 * 0x5d8 + unaff_s7;
              *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
            }
          }
        }
_L0:
        iVar6 = uVar4 * 0x5d8 + unaff_s7;
      } while (*(char *)(iVar6 + 0x58) == '\0');
      if ((uVar2 & 4) == 0) {
        FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
      }
      unaff_s1 = uVar4 * 0x5d8 + unaff_s7;
    } while (*(char *)(unaff_s1 + 0x56) != '\0');
    if ((uVar2 & 0xfc) != 0x80) {
      if ((uVar2 & 4) == 0) {
        FUN_000106f4(puVar11,uVar12,unaff_s1);
      }
      goto _L0;
    }
    in_stack_0000002c = 0;
    _L0(0,iVar10);
    FUN_000104ec(0);
    FUN_000104fc(iVar10,unaff_s1,iVar9,(undefined4 *)&stack0x0000002c);
    FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(iVar10 + 0x1c),unaff_s1);
    unaff_s0 = extraout_a0_01;
    param_1 = unaff_s1;
  } while( true );
}



void FUN_00010528(int param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_s0;
  uint uVar4;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s6;
  int unaff_s7;
  int iVar10;
  int unaff_s9;
  ushort *puVar11;
  uint uVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_00010528(param_1,param_2);
    do {
      if (unaff_s0 == 0) goto _L0;
_L0:
      do {
        do {
          while( true ) {
            do {
              FUN_000103f6(unaff_s9);
              if (extraout_a0 != 0) goto _L0;
_L0:
              while( true ) {
                FUN_0001038e(unaff_s9);
_L0:
                unaff_s9 = iRam00000000;
                FUN_00010312(0x40000);
                if (unaff_s9 == 0) {
                  return;
                }
                in_stack_0000000c += -1;
                if (in_stack_0000000c == 0) {
                  FUN_0001032a();
                  return;
                }
                FUN_00010358(0);
                iVar10 = *(int *)(unaff_s9 + 4);
                iVar6 = *(int *)(iVar10 + 8);
                if (iVar6 != 0) break;
                _L0(0,0,0x205);
              }
              uVar12 = *(uint *)(iVar10 + 0x40);
            } while ((uVar12 & 0x2002000) != 0x2002000);
            if ((uVar12 >> 0xf & 0x3f8) == 0) {
              _L0(0,0,0x215);
              return;
            }
            uVar3 = (uVar12 >> 0xf & 0x3ff) - 8 & 0xff;
            iVar9 = uVar3 * 0x1b0 + unaff_s6;
            if (*(char *)(iVar9 + 0x1d) != '\0') break;
            *(uint *)(iVar10 + 0x40) = uVar12 & 0xfdffffff;
          }
          uVar4 = (uint)*(byte *)(iVar9 + 0x1a);
          _L0();
          *(undefined4 *)(iVar9 + 0x1a8) = extraout_a0_00;
          puVar11 = *(ushort **)(iVar6 + 8);
          uVar2 = *puVar11;
          uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
          iVar6 = uVar7 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar6 + 0x56) == '\x02') {
            if (*(char *)(iVar9 + 0x1c) == '\x01') {
              if ((uVar2 & 0x140c) == 8) {
                FUN_00010456(uVar3,0);
                FUN_00010462(iVar6,uVar3);
                cVar5 = *(char *)(iVar6 + 0x34a) + -1;
                *(char *)(iVar6 + 0x34a) = cVar5;
                if (cVar5 == '\0') {
                  uVar7 = uVar7 + 10 & 0xff;
                  FUN_00010484(uVar7,0);
                  FUN_00010490(iVar6,uVar7);
                }
              }
              else {
                if ((uVar2 & 0xfc) == 0xa4) {
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                    FUN_0001062c(0x4a,0xd,0,3);
                    *extraout_a0_03 = (char)uVar3;
                    extraout_a0_03[1] = 1;
                    extraout_a0_03[2] = 0;
                    _L0();
                  }
                  else {
                    *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                    FUN_00010566(iVar6,iVar9,1);
                    *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
                  }
                }
                if ((uVar2 & 0x8c) == 0x88) {
                  if ((uVar2 & 0x300) == 0x300) {
                    bVar1 = *(byte *)(puVar11 + 0xf);
                  }
                  else {
                    bVar1 = *(byte *)(puVar11 + 0xc);
                  }
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                  if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) +
                                in_stack_00000014) & *(byte *)(iVar8 + 0xf2)) != 0) {
                    uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                    if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                      if (uVar7 != 0) goto _L0;
                      *(undefined4 *)(iVar8 + 0x34) = 2;
                    }
                    else {
                      if (uVar7 != 0) goto _L0;
                      uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                      if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                        iVar6 = uVar3 * 0x1b0 + unaff_s6;
                        if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                          *(undefined4 *)(iVar6 + 0x34) = 4;
                          _L0(0x4a,0xd,0,3);
                          *extraout_a0_04 = (char)uVar3;
                          extraout_a0_04[1] = (char)uVar7;
                          extraout_a0_04[2] = 1;
                          _L0();
                          goto _L0;
                        }
                      }
                      else {
                        *(undefined4 *)(iVar8 + 0x34) = 2;
                        FUN_000105e6(iVar6,iVar9,uVar7);
                        if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                      }
                      iVar8 = uVar3 * 0x1b0 + unaff_s6;
                    }
                    FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                    *(undefined4 *)(iVar8 + 0x34) = 0;
                  }
                }
              }
            }
            else {
              if ((uVar2 & 0x1400) == 0x1000) {
                FUN_000106b4(uVar3,1);
                if (*(char *)(iVar6 + 0x34a) == '\0') {
                  FUN_000106cc(uVar7 + 10 & 0xff,1);
                }
                iVar6 = uVar7 * 0x5d8 + unaff_s7;
                *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
              }
            }
          }
_L0:
          iVar6 = uVar4 * 0x5d8 + unaff_s7;
        } while (*(char *)(iVar6 + 0x58) == '\0');
        if ((uVar2 & 4) == 0) {
          FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
        }
        param_1 = uVar4 * 0x5d8 + unaff_s7;
      } while (*(char *)(param_1 + 0x56) != '\0');
      if ((uVar2 & 0xfc) != 0x80) {
        if ((uVar2 & 4) == 0) {
          FUN_000106f4(puVar11,uVar12,param_1);
        }
        goto _L0;
      }
      in_stack_0000002c = 0;
      _L0(0,iVar10);
      FUN_000104ec(0);
      FUN_000104fc(iVar10,param_1,iVar9,(undefined4 *)&stack0x0000002c);
      FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(iVar10 + 0x1c),param_1);
      FUN_00010518(param_1);
      unaff_s0 = extraout_a0_01;
    } while (*(int *)(param_1 + 0x40) == 0);
    param_2 = *(undefined4 *)(param_1 + 0x24);
  } while( true );
}



void FUN_00010566(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  uint uVar2;
  char cVar3;
  int unaff_s2;
  int iVar4;
  int unaff_s3;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_00010566(param_1,param_2,param_3);
    *(uint *)(unaff_s2 + 0x34) = *(uint *)(unaff_s2 + 0x34) & 0xfffffffe;
    param_1 = unaff_s3;
    param_2 = unaff_s4;
_L0:
    do {
      if ((unaff_s5 & 0x8c) == 0x88) {
        if ((unaff_s5 & 0x300) == 0x300) {
          bVar1 = *(byte *)(unaff_s10 + 0xf);
        }
        else {
          bVar1 = *(byte *)(unaff_s10 + 0xc);
        }
        iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
        if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
            *(byte *)(iVar4 + 0xf2)) != 0) {
          uVar2 = *(uint *)(iVar4 + 0x34) & 6;
          if ((*(byte *)(iVar4 + 0x32) & 0xc) == 0) {
            if (uVar2 != 0) goto _L0;
            *(undefined4 *)(iVar4 + 0x34) = 2;
          }
          else {
            if (uVar2 != 0) goto _L0;
            uVar2 = (uint)*(byte *)(iVar4 + 0xf3);
            if ((*(byte *)(iVar4 + 0x32) & 8) == 0) {
_L0:
              iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
              if ((*(byte *)(iVar4 + 0x32) & 4) != 0) {
                *(undefined4 *)(iVar4 + 0x34) = 4;
                _L0(0x4a,0xd,0,3);
                *extraout_a0_04 = (char)unaff_s0;
                extraout_a0_04[1] = (char)uVar2;
                extraout_a0_04[2] = 1;
                _L0();
                goto _L0;
              }
            }
            else {
              *(undefined4 *)(iVar4 + 0x34) = 2;
              FUN_000105e6(param_1,param_2,uVar2);
              if ((uVar2 == 0) || (uVar2 -= extraout_a0_02, 0 < (int)uVar2)) goto _L0;
            }
            iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
          }
          FUN_00010614((uint)*(byte *)(iVar4 + 0x1b),bVar1 & 7 | 0x10,0,0);
          *(undefined4 *)(iVar4 + 0x34) = 0;
        }
      }
_L0:
      while( true ) {
        while( true ) {
          do {
            iVar4 = unaff_s1 * 0x5d8 + unaff_s7;
            if (*(char *)(iVar4 + 0x58) != '\0') {
              if ((unaff_s5 & 4) == 0) {
                FUN_000104b8((uint)*(byte *)(iVar4 + 0x57),unaff_s0,1);
              }
              iVar4 = unaff_s1 * 0x5d8 + unaff_s7;
              if (*(char *)(iVar4 + 0x56) == '\0') {
                if ((unaff_s5 & 0xfc) == 0x80) {
                  in_stack_0000002c = 0;
                  _L0(0,unaff_s8);
                  FUN_000104ec(0);
                  FUN_000104fc(unaff_s8,iVar4,param_2,(undefined4 *)&stack0x0000002c);
                  FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar4);
                  FUN_00010518(iVar4);
                  if (*(int *)(iVar4 + 0x40) != 0) {
                    FUN_00010528(iVar4,*(undefined4 *)(iVar4 + 0x24));
                  }
                  if (extraout_a0_01 == 0) goto _L0;
                }
                else {
                  if ((unaff_s5 & 4) == 0) {
                    FUN_000106f4(unaff_s10,unaff_s11,iVar4);
                  }
                }
              }
            }
            while( true ) {
              do {
                FUN_000103f6(unaff_s9);
                if (extraout_a0 != 0) goto _L0;
_L0:
                while( true ) {
                  FUN_0001038e(unaff_s9);
_L0:
                  unaff_s9 = iRam00000000;
                  FUN_00010312(0x40000);
                  if (unaff_s9 == 0) {
                    return;
                  }
                  in_stack_0000000c += -1;
                  if (in_stack_0000000c == 0) {
                    FUN_0001032a();
                    return;
                  }
                  FUN_00010358(0);
                  unaff_s8 = *(int *)(unaff_s9 + 4);
                  iVar4 = *(int *)(unaff_s8 + 8);
                  if (iVar4 != 0) break;
                  _L0(0,0,0x205);
                }
                unaff_s11 = *(uint *)(unaff_s8 + 0x40);
              } while ((unaff_s11 & 0x2002000) != 0x2002000);
              if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
                _L0(0,0,0x215);
                return;
              }
              unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
              param_2 = unaff_s0 * 0x1b0 + unaff_s6;
              if (*(char *)(param_2 + 0x1d) != '\0') break;
              *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
            }
            unaff_s1 = (uint)*(byte *)(param_2 + 0x1a);
            _L0();
            *(undefined4 *)(param_2 + 0x1a8) = extraout_a0_00;
            unaff_s10 = *(ushort **)(iVar4 + 8);
            unaff_s5 = *unaff_s10;
            uVar2 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
            param_1 = uVar2 * 0x5d8 + unaff_s7;
          } while (*(char *)(param_1 + 0x56) != '\x02');
          if (*(char *)(param_2 + 0x1c) == '\x01') break;
          if ((unaff_s5 & 0x1400) == 0x1000) {
            FUN_000106b4(unaff_s0,1);
            if (*(char *)(param_1 + 0x34a) == '\0') {
              FUN_000106cc(uVar2 + 10 & 0xff,1);
            }
            iVar4 = uVar2 * 0x5d8 + unaff_s7;
            *(char *)(iVar4 + 0x34a) = *(char *)(iVar4 + 0x34a) + '\x01';
          }
        }
        if ((unaff_s5 & 0x140c) != 8) break;
        FUN_00010456(unaff_s0,0);
        FUN_00010462(param_1,unaff_s0);
        cVar3 = *(char *)(param_1 + 0x34a) + -1;
        *(char *)(param_1 + 0x34a) = cVar3;
        if (cVar3 == '\0') {
          uVar2 = uVar2 + 10 & 0xff;
          FUN_00010484(uVar2,0);
          FUN_00010490(param_1,uVar2);
        }
      }
    } while ((unaff_s5 & 0xfc) != 0xa4);
    unaff_s2 = unaff_s0 * 0x1b0 + unaff_s6;
    if ((*(byte *)(unaff_s2 + 0x32) & 2) == 0) {
      FUN_0001062c(0x4a,0xd,0,3);
      *extraout_a0_03 = (char)unaff_s0;
      extraout_a0_03[1] = 1;
      extraout_a0_03[2] = 0;
      _L0();
      goto _L0;
    }
    param_3 = 1;
    *(uint *)(unaff_s2 + 0x34) = *(uint *)(unaff_s2 + 0x34) | 1;
    unaff_s3 = param_1;
    unaff_s4 = param_2;
  } while( true );
}



void FUN_000105e6(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar2;
  uint uVar3;
  int iVar4;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_0000002c;
  
code_r0x000105e6:
  FUN_000105e6(param_1,param_2,param_3);
  param_2 = unaff_s4;
  if (in_stack_00000018 == 0) goto _L0;
  in_stack_00000018 -= extraout_a0_02;
  if (0 < (int)in_stack_00000018) goto _L0;
_L0:
  iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
  do {
    FUN_00010614((uint)*(byte *)(iVar4 + 0x1b),in_stack_0000001c | 0x10,0,0);
    *(undefined4 *)(iVar4 + 0x34) = 0;
    do {
      while( true ) {
        do {
          do {
            while( true ) {
              while( true ) {
                do {
                  iVar4 = unaff_s1 * 0x5d8 + unaff_s7;
                  if (*(char *)(iVar4 + 0x58) != '\0') {
                    if ((unaff_s5 & 4) == 0) {
                      FUN_000104b8((uint)*(byte *)(iVar4 + 0x57),unaff_s0,1);
                    }
                    iVar4 = unaff_s1 * 0x5d8 + unaff_s7;
                    if (*(char *)(iVar4 + 0x56) == '\0') {
                      if ((unaff_s5 & 0xfc) == 0x80) {
                        in_stack_0000002c = 0;
                        _L0(0,unaff_s8);
                        FUN_000104ec(0);
                        FUN_000104fc(unaff_s8,iVar4,param_2,(undefined4 *)&stack0x0000002c);
                        FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar4);
                        FUN_00010518(iVar4);
                        if (*(int *)(iVar4 + 0x40) != 0) {
                          FUN_00010528(iVar4,*(undefined4 *)(iVar4 + 0x24));
                        }
                        if (extraout_a0_01 == 0) goto _L0;
                      }
                      else {
                        if ((unaff_s5 & 4) == 0) {
                          FUN_000106f4(unaff_s10,unaff_s11,iVar4);
                        }
                      }
                    }
                  }
                  while( true ) {
                    do {
                      FUN_000103f6(unaff_s9);
                      if (extraout_a0 != 0) goto _L0;
_L0:
                      while( true ) {
                        FUN_0001038e(unaff_s9);
_L0:
                        unaff_s9 = iRam00000000;
                        FUN_00010312(0x40000);
                        if (unaff_s9 == 0) {
                          return;
                        }
                        in_stack_0000000c += -1;
                        if (in_stack_0000000c == 0) {
                          FUN_0001032a();
                          return;
                        }
                        FUN_00010358(0);
                        unaff_s8 = *(int *)(unaff_s9 + 4);
                        iVar4 = *(int *)(unaff_s8 + 8);
                        if (iVar4 != 0) break;
                        _L0(0,0,0x205);
                      }
                      unaff_s11 = *(uint *)(unaff_s8 + 0x40);
                    } while ((unaff_s11 & 0x2002000) != 0x2002000);
                    if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
                      _L0(0,0,0x215);
                      return;
                    }
                    unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
                    param_2 = unaff_s0 * 0x1b0 + unaff_s6;
                    if (*(char *)(param_2 + 0x1d) != '\0') break;
                    *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
                  }
                  unaff_s1 = (uint)*(byte *)(param_2 + 0x1a);
                  _L0();
                  *(undefined4 *)(param_2 + 0x1a8) = extraout_a0_00;
                  unaff_s10 = *(ushort **)(iVar4 + 8);
                  unaff_s5 = *unaff_s10;
                  uVar3 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
                  param_1 = uVar3 * 0x5d8 + unaff_s7;
                } while (*(char *)(param_1 + 0x56) != '\x02');
                if (*(char *)(param_2 + 0x1c) == '\x01') break;
                if ((unaff_s5 & 0x1400) == 0x1000) {
                  FUN_000106b4(unaff_s0,1);
                  if (*(char *)(param_1 + 0x34a) == '\0') {
                    FUN_000106cc(uVar3 + 10 & 0xff,1);
                  }
                  iVar4 = uVar3 * 0x5d8 + unaff_s7;
                  *(char *)(iVar4 + 0x34a) = *(char *)(iVar4 + 0x34a) + '\x01';
                }
              }
              if ((unaff_s5 & 0x140c) != 8) break;
              FUN_00010456(unaff_s0,0);
              FUN_00010462(param_1,unaff_s0);
              cVar2 = *(char *)(param_1 + 0x34a) + -1;
              *(char *)(param_1 + 0x34a) = cVar2;
              if (cVar2 == '\0') {
                uVar3 = uVar3 + 10 & 0xff;
                FUN_00010484(uVar3,0);
                FUN_00010490(param_1,uVar3);
              }
            }
            if ((unaff_s5 & 0xfc) == 0xa4) {
              iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
              if ((*(byte *)(iVar4 + 0x32) & 2) == 0) {
                FUN_0001062c(0x4a,0xd,0,3);
                *extraout_a0_03 = (char)unaff_s0;
                extraout_a0_03[1] = 1;
                extraout_a0_03[2] = 0;
                _L0();
              }
              else {
                *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 1;
                FUN_00010566(param_1,param_2,1);
                *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xfffffffe;
              }
            }
          } while ((unaff_s5 & 0x8c) != 0x88);
          if ((unaff_s5 & 0x300) == 0x300) {
            bVar1 = *(byte *)(unaff_s10 + 0xf);
          }
          else {
            bVar1 = *(byte *)(unaff_s10 + 0xc);
          }
          in_stack_0000001c = bVar1 & 7;
          iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
        } while ((*(byte *)((uint)*(byte *)(in_stack_00000010 + in_stack_0000001c) +
                           in_stack_00000014) & *(byte *)(iVar4 + 0xf2)) == 0);
        uVar3 = *(uint *)(iVar4 + 0x34) & 6;
        if ((*(byte *)(iVar4 + 0x32) & 0xc) == 0) break;
        if (uVar3 == 0) {
          param_3 = (uint)*(byte *)(iVar4 + 0xf3);
          in_stack_00000018 = param_3;
          if ((*(byte *)(iVar4 + 0x32) & 8) != 0) {
            *(undefined4 *)(iVar4 + 0x34) = 2;
            unaff_s4 = param_2;
            goto code_r0x000105e6;
          }
_L0:
          iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
          if ((*(byte *)(iVar4 + 0x32) & 4) == 0) goto _L0;
          *(undefined4 *)(iVar4 + 0x34) = 4;
          _L0(0x4a,0xd,0,3);
          *extraout_a0_04 = (char)unaff_s0;
          extraout_a0_04[1] = (char)in_stack_00000018;
          extraout_a0_04[2] = 1;
          _L0();
        }
      }
    } while (uVar3 != 0);
    *(undefined4 *)(iVar4 + 0x34) = 2;
  } while( true );
}



void FUN_00010614(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int unaff_s2;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_00010614(param_1,param_2,param_3,param_4);
    *(undefined4 *)(unaff_s2 + 0x34) = 0;
_L0:
    do {
      do {
        do {
          while( true ) {
            while( true ) {
              do {
                iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
                if (*(char *)(iVar3 + 0x58) != '\0') {
                  if ((unaff_s5 & 4) == 0) {
                    FUN_000104b8((uint)*(byte *)(iVar3 + 0x57),unaff_s0,1);
                  }
                  iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
                  if (*(char *)(iVar3 + 0x56) == '\0') {
                    if ((unaff_s5 & 0xfc) == 0x80) {
                      in_stack_0000002c = 0;
                      _L0(0,unaff_s8);
                      FUN_000104ec(0);
                      FUN_000104fc(unaff_s8,iVar3,unaff_s4,(undefined4 *)&stack0x0000002c);
                      FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar3);
                      FUN_00010518(iVar3);
                      if (*(int *)(iVar3 + 0x40) != 0) {
                        FUN_00010528(iVar3,*(undefined4 *)(iVar3 + 0x24));
                      }
                      if (extraout_a0_01 == 0) goto _L0;
                    }
                    else {
                      if ((unaff_s5 & 4) == 0) {
                        FUN_000106f4(unaff_s10,unaff_s11,iVar3);
                      }
                    }
                  }
                }
                while( true ) {
                  do {
                    FUN_000103f6(unaff_s9);
                    if (extraout_a0 != 0) goto _L0;
_L0:
                    while( true ) {
                      FUN_0001038e(unaff_s9);
_L0:
                      unaff_s9 = iRam00000000;
                      FUN_00010312(0x40000);
                      if (unaff_s9 == 0) {
                        return;
                      }
                      in_stack_0000000c += -1;
                      if (in_stack_0000000c == 0) {
                        FUN_0001032a();
                        return;
                      }
                      FUN_00010358(0);
                      unaff_s8 = *(int *)(unaff_s9 + 4);
                      iVar3 = *(int *)(unaff_s8 + 8);
                      if (iVar3 != 0) break;
                      _L0(0,0,0x205);
                    }
                    unaff_s11 = *(uint *)(unaff_s8 + 0x40);
                  } while ((unaff_s11 & 0x2002000) != 0x2002000);
                  if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
                    _L0(0,0,0x215);
                    return;
                  }
                  unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
                  unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
                  if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
                  *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
                }
                unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
                _L0();
                *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
                unaff_s10 = *(ushort **)(iVar3 + 8);
                unaff_s5 = *unaff_s10;
                uVar4 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
                iVar3 = uVar4 * 0x5d8 + unaff_s7;
              } while (*(char *)(iVar3 + 0x56) != '\x02');
              if (*(char *)(unaff_s4 + 0x1c) == '\x01') break;
              if ((unaff_s5 & 0x1400) == 0x1000) {
                FUN_000106b4(unaff_s0,1);
                if (*(char *)(iVar3 + 0x34a) == '\0') {
                  FUN_000106cc(uVar4 + 10 & 0xff,1);
                }
                iVar3 = uVar4 * 0x5d8 + unaff_s7;
                *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
              }
            }
            if ((unaff_s5 & 0x140c) != 8) break;
            FUN_00010456(unaff_s0,0);
            FUN_00010462(iVar3,unaff_s0);
            cVar2 = *(char *)(iVar3 + 0x34a) + -1;
            *(char *)(iVar3 + 0x34a) = cVar2;
            if (cVar2 == '\0') {
              uVar4 = uVar4 + 10 & 0xff;
              FUN_00010484(uVar4,0);
              FUN_00010490(iVar3,uVar4);
            }
          }
          if ((unaff_s5 & 0xfc) == 0xa4) {
            iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
            if ((*(byte *)(iVar5 + 0x32) & 2) == 0) {
              FUN_0001062c(0x4a,0xd,0,3);
              *extraout_a0_03 = (char)unaff_s0;
              extraout_a0_03[1] = 1;
              extraout_a0_03[2] = 0;
              _L0();
            }
            else {
              *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) | 1;
              FUN_00010566(iVar3,unaff_s4,1);
              *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) & 0xfffffffe;
            }
          }
        } while ((unaff_s5 & 0x8c) != 0x88);
        if ((unaff_s5 & 0x300) == 0x300) {
          bVar1 = *(byte *)(unaff_s10 + 0xf);
        }
        else {
          bVar1 = *(byte *)(unaff_s10 + 0xc);
        }
        unaff_s2 = unaff_s0 * 0x1b0 + unaff_s6;
      } while ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
               *(byte *)(unaff_s2 + 0xf2)) == 0);
      uVar4 = *(uint *)(unaff_s2 + 0x34) & 6;
      if ((*(byte *)(unaff_s2 + 0x32) & 0xc) != 0) {
        if (uVar4 == 0) {
          uVar4 = (uint)*(byte *)(unaff_s2 + 0xf3);
          if ((*(byte *)(unaff_s2 + 0x32) & 8) == 0) {
_L0:
            iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
            if ((*(byte *)(iVar3 + 0x32) & 4) != 0) {
              *(undefined4 *)(iVar3 + 0x34) = 4;
              _L0(0x4a,0xd,0,3);
              *extraout_a0_04 = (char)unaff_s0;
              extraout_a0_04[1] = (char)uVar4;
              extraout_a0_04[2] = 1;
              _L0();
              goto _L0;
            }
          }
          else {
            *(undefined4 *)(unaff_s2 + 0x34) = 2;
            FUN_000105e6(iVar3,unaff_s4,uVar4);
            if ((uVar4 == 0) || (uVar4 -= extraout_a0_02, 0 < (int)uVar4)) goto _L0;
          }
          unaff_s2 = unaff_s0 * 0x1b0 + unaff_s6;
          goto _L0;
        }
        goto _L0;
      }
    } while (uVar4 != 0);
    *(undefined4 *)(unaff_s2 + 0x34) = 2;
_L0:
    param_1 = (uint)*(byte *)(unaff_s2 + 0x1b);
    param_4 = 0;
    param_3 = 0;
    param_2 = bVar1 & 7 | 0x10;
  } while( true );
}



void FUN_0001062c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  uint uVar2;
  char cVar3;
  int iVar4;
  int unaff_s3;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_0001062c(param_1,param_2,param_3,param_4);
    *extraout_a0_03 = (char)unaff_s0;
    extraout_a0_03[1] = 1;
    extraout_a0_03[2] = 0;
    _L0();
_L0:
    do {
      if ((unaff_s5 & 0x8c) == 0x88) {
        if ((unaff_s5 & 0x300) == 0x300) {
          bVar1 = *(byte *)(unaff_s10 + 0xf);
        }
        else {
          bVar1 = *(byte *)(unaff_s10 + 0xc);
        }
        iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
        if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
            *(byte *)(iVar4 + 0xf2)) != 0) {
          uVar2 = *(uint *)(iVar4 + 0x34) & 6;
          if ((*(byte *)(iVar4 + 0x32) & 0xc) == 0) {
            if (uVar2 != 0) goto _L0;
            *(undefined4 *)(iVar4 + 0x34) = 2;
          }
          else {
            if (uVar2 != 0) goto _L0;
            uVar2 = (uint)*(byte *)(iVar4 + 0xf3);
            if ((*(byte *)(iVar4 + 0x32) & 8) == 0) {
_L0:
              iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
              if ((*(byte *)(iVar4 + 0x32) & 4) != 0) {
                *(undefined4 *)(iVar4 + 0x34) = 4;
                _L0(0x4a,0xd,0,3);
                *extraout_a0_04 = (char)unaff_s0;
                extraout_a0_04[1] = (char)uVar2;
                extraout_a0_04[2] = 1;
                _L0();
                goto _L0;
              }
            }
            else {
              *(undefined4 *)(iVar4 + 0x34) = 2;
              FUN_000105e6(unaff_s3,unaff_s4,uVar2);
              if ((uVar2 == 0) || (uVar2 -= extraout_a0_02, 0 < (int)uVar2)) goto _L0;
            }
            iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
          }
          FUN_00010614((uint)*(byte *)(iVar4 + 0x1b),bVar1 & 7 | 0x10,0,0);
          *(undefined4 *)(iVar4 + 0x34) = 0;
        }
      }
_L0:
      while( true ) {
        while( true ) {
          do {
            iVar4 = unaff_s1 * 0x5d8 + unaff_s7;
            if (*(char *)(iVar4 + 0x58) != '\0') {
              if ((unaff_s5 & 4) == 0) {
                FUN_000104b8((uint)*(byte *)(iVar4 + 0x57),unaff_s0,1);
              }
              iVar4 = unaff_s1 * 0x5d8 + unaff_s7;
              if (*(char *)(iVar4 + 0x56) == '\0') {
                if ((unaff_s5 & 0xfc) == 0x80) {
                  in_stack_0000002c = 0;
                  _L0(0,unaff_s8);
                  FUN_000104ec(0);
                  FUN_000104fc(unaff_s8,iVar4,unaff_s4,(undefined4 *)&stack0x0000002c);
                  FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar4);
                  FUN_00010518(iVar4);
                  if (*(int *)(iVar4 + 0x40) != 0) {
                    FUN_00010528(iVar4,*(undefined4 *)(iVar4 + 0x24));
                  }
                  if (extraout_a0_01 == 0) goto _L0;
                }
                else {
                  if ((unaff_s5 & 4) == 0) {
                    FUN_000106f4(unaff_s10,unaff_s11,iVar4);
                  }
                }
              }
            }
            while( true ) {
              do {
                FUN_000103f6(unaff_s9);
                if (extraout_a0 != 0) goto _L0;
_L0:
                while( true ) {
                  FUN_0001038e(unaff_s9);
_L0:
                  unaff_s9 = iRam00000000;
                  FUN_00010312(0x40000);
                  if (unaff_s9 == 0) {
                    return;
                  }
                  in_stack_0000000c += -1;
                  if (in_stack_0000000c == 0) {
                    FUN_0001032a();
                    return;
                  }
                  FUN_00010358(0);
                  unaff_s8 = *(int *)(unaff_s9 + 4);
                  iVar4 = *(int *)(unaff_s8 + 8);
                  if (iVar4 != 0) break;
                  _L0(0,0,0x205);
                }
                unaff_s11 = *(uint *)(unaff_s8 + 0x40);
              } while ((unaff_s11 & 0x2002000) != 0x2002000);
              if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
                _L0(0,0,0x215);
                return;
              }
              unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
              unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
              if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
              *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
            }
            unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
            _L0();
            *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
            unaff_s10 = *(ushort **)(iVar4 + 8);
            unaff_s5 = *unaff_s10;
            uVar2 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
            unaff_s3 = uVar2 * 0x5d8 + unaff_s7;
          } while (*(char *)(unaff_s3 + 0x56) != '\x02');
          if (*(char *)(unaff_s4 + 0x1c) == '\x01') break;
          if ((unaff_s5 & 0x1400) == 0x1000) {
            FUN_000106b4(unaff_s0,1);
            if (*(char *)(unaff_s3 + 0x34a) == '\0') {
              FUN_000106cc(uVar2 + 10 & 0xff,1);
            }
            iVar4 = uVar2 * 0x5d8 + unaff_s7;
            *(char *)(iVar4 + 0x34a) = *(char *)(iVar4 + 0x34a) + '\x01';
          }
        }
        if ((unaff_s5 & 0x140c) != 8) break;
        FUN_00010456(unaff_s0,0);
        FUN_00010462(unaff_s3,unaff_s0);
        cVar3 = *(char *)(unaff_s3 + 0x34a) + -1;
        *(char *)(unaff_s3 + 0x34a) = cVar3;
        if (cVar3 == '\0') {
          uVar2 = uVar2 + 10 & 0xff;
          FUN_00010484(uVar2,0);
          FUN_00010490(unaff_s3,uVar2);
        }
      }
    } while ((unaff_s5 & 0xfc) != 0xa4);
    iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
    if ((*(byte *)(iVar4 + 0x32) & 2) != 0) {
      *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 1;
      FUN_00010566(unaff_s3,unaff_s4,1);
      *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xfffffffe;
      goto _L0;
    }
    param_4 = 3;
    param_3 = 0;
    param_2 = 0xd;
    param_1 = 0x4a;
  } while( true );
}



void _L0(void)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  uint uVar2;
  char cVar3;
  int iVar4;
  int unaff_s3;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    _L0();
_L0:
    do {
      if ((unaff_s5 & 0x8c) == 0x88) {
        if ((unaff_s5 & 0x300) == 0x300) {
          bVar1 = *(byte *)(unaff_s10 + 0xf);
        }
        else {
          bVar1 = *(byte *)(unaff_s10 + 0xc);
        }
        iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
        if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
            *(byte *)(iVar4 + 0xf2)) != 0) {
          uVar2 = *(uint *)(iVar4 + 0x34) & 6;
          if ((*(byte *)(iVar4 + 0x32) & 0xc) == 0) {
            if (uVar2 != 0) goto _L0;
            *(undefined4 *)(iVar4 + 0x34) = 2;
          }
          else {
            if (uVar2 != 0) goto _L0;
            uVar2 = (uint)*(byte *)(iVar4 + 0xf3);
            if ((*(byte *)(iVar4 + 0x32) & 8) == 0) {
_L0:
              iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
              if ((*(byte *)(iVar4 + 0x32) & 4) != 0) {
                *(undefined4 *)(iVar4 + 0x34) = 4;
                _L0(0x4a,0xd,0,3);
                *extraout_a0_04 = (char)unaff_s0;
                extraout_a0_04[1] = (char)uVar2;
                extraout_a0_04[2] = 1;
                _L0();
                goto _L0;
              }
            }
            else {
              *(undefined4 *)(iVar4 + 0x34) = 2;
              FUN_000105e6(unaff_s3,unaff_s4,uVar2);
              if ((uVar2 == 0) || (uVar2 -= extraout_a0_02, 0 < (int)uVar2)) goto _L0;
            }
            iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
          }
          FUN_00010614((uint)*(byte *)(iVar4 + 0x1b),bVar1 & 7 | 0x10,0,0);
          *(undefined4 *)(iVar4 + 0x34) = 0;
        }
      }
_L0:
      while( true ) {
        while( true ) {
          do {
            iVar4 = unaff_s1 * 0x5d8 + unaff_s7;
            if (*(char *)(iVar4 + 0x58) != '\0') {
              if ((unaff_s5 & 4) == 0) {
                FUN_000104b8((uint)*(byte *)(iVar4 + 0x57),unaff_s0,1);
              }
              iVar4 = unaff_s1 * 0x5d8 + unaff_s7;
              if (*(char *)(iVar4 + 0x56) == '\0') {
                if ((unaff_s5 & 0xfc) == 0x80) {
                  in_stack_0000002c = 0;
                  _L0(0,unaff_s8);
                  FUN_000104ec(0);
                  FUN_000104fc(unaff_s8,iVar4,unaff_s4,(undefined4 *)&stack0x0000002c);
                  FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar4);
                  FUN_00010518(iVar4);
                  if (*(int *)(iVar4 + 0x40) != 0) {
                    FUN_00010528(iVar4,*(undefined4 *)(iVar4 + 0x24));
                  }
                  if (extraout_a0_01 == 0) goto _L0;
                }
                else {
                  if ((unaff_s5 & 4) == 0) {
                    FUN_000106f4(unaff_s10,unaff_s11,iVar4);
                  }
                }
              }
            }
            while( true ) {
              do {
                FUN_000103f6(unaff_s9);
                if (extraout_a0 != 0) goto _L0;
_L0:
                while( true ) {
                  FUN_0001038e(unaff_s9);
_L0:
                  unaff_s9 = iRam00000000;
                  FUN_00010312(0x40000);
                  if (unaff_s9 == 0) {
                    return;
                  }
                  in_stack_0000000c += -1;
                  if (in_stack_0000000c == 0) {
                    FUN_0001032a();
                    return;
                  }
                  FUN_00010358(0);
                  unaff_s8 = *(int *)(unaff_s9 + 4);
                  iVar4 = *(int *)(unaff_s8 + 8);
                  if (iVar4 != 0) break;
                  _L0(0,0,0x205);
                }
                unaff_s11 = *(uint *)(unaff_s8 + 0x40);
              } while ((unaff_s11 & 0x2002000) != 0x2002000);
              if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
                _L0(0,0,0x215);
                return;
              }
              unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
              unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
              if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
              *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
            }
            unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
            _L0();
            *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
            unaff_s10 = *(ushort **)(iVar4 + 8);
            unaff_s5 = *unaff_s10;
            uVar2 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
            unaff_s3 = uVar2 * 0x5d8 + unaff_s7;
          } while (*(char *)(unaff_s3 + 0x56) != '\x02');
          if (*(char *)(unaff_s4 + 0x1c) == '\x01') break;
          if ((unaff_s5 & 0x1400) == 0x1000) {
            FUN_000106b4(unaff_s0,1);
            if (*(char *)(unaff_s3 + 0x34a) == '\0') {
              FUN_000106cc(uVar2 + 10 & 0xff,1);
            }
            iVar4 = uVar2 * 0x5d8 + unaff_s7;
            *(char *)(iVar4 + 0x34a) = *(char *)(iVar4 + 0x34a) + '\x01';
          }
        }
        if ((unaff_s5 & 0x140c) != 8) break;
        FUN_00010456(unaff_s0,0);
        FUN_00010462(unaff_s3,unaff_s0);
        cVar3 = *(char *)(unaff_s3 + 0x34a) + -1;
        *(char *)(unaff_s3 + 0x34a) = cVar3;
        if (cVar3 == '\0') {
          uVar2 = uVar2 + 10 & 0xff;
          FUN_00010484(uVar2,0);
          FUN_00010490(unaff_s3,uVar2);
        }
      }
    } while ((unaff_s5 & 0xfc) != 0xa4);
    iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
    if ((*(byte *)(iVar4 + 0x32) & 2) != 0) {
      *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 1;
      FUN_00010566(unaff_s3,unaff_s4,1);
      *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xfffffffe;
      goto _L0;
    }
    FUN_0001062c(0x4a,0xd,0,3);
    *extraout_a0_03 = (char)unaff_s0;
    extraout_a0_03[1] = 1;
    extraout_a0_03[2] = 0;
  } while( true );
}



void _L0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_0000002c;
  
code_r0x00010674:
  _L0(param_1,param_2,param_3,param_4);
  *extraout_a0_04 = (char)unaff_s0;
  extraout_a0_04[1] = (char)in_stack_00000018;
  extraout_a0_04[2] = 1;
  _L0();
_L0:
  do {
    do {
      do {
        while( true ) {
          while( true ) {
            do {
              iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
              if (*(char *)(iVar3 + 0x58) != '\0') {
                if ((unaff_s5 & 4) == 0) {
                  FUN_000104b8((uint)*(byte *)(iVar3 + 0x57),unaff_s0,1);
                }
                iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
                if (*(char *)(iVar3 + 0x56) == '\0') {
                  if ((unaff_s5 & 0xfc) == 0x80) {
                    in_stack_0000002c = 0;
                    _L0(0,unaff_s8);
                    FUN_000104ec(0);
                    FUN_000104fc(unaff_s8,iVar3,unaff_s4,(undefined4 *)&stack0x0000002c);
                    FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar3);
                    FUN_00010518(iVar3);
                    if (*(int *)(iVar3 + 0x40) != 0) {
                      FUN_00010528(iVar3,*(undefined4 *)(iVar3 + 0x24));
                    }
                    if (extraout_a0_01 == 0) goto _L0;
                  }
                  else {
                    if ((unaff_s5 & 4) == 0) {
                      FUN_000106f4(unaff_s10,unaff_s11,iVar3);
                    }
                  }
                }
              }
              while( true ) {
                do {
                  FUN_000103f6(unaff_s9);
                  if (extraout_a0 != 0) goto _L0;
_L0:
                  while( true ) {
                    FUN_0001038e(unaff_s9);
_L0:
                    unaff_s9 = iRam00000000;
                    FUN_00010312(0x40000);
                    if (unaff_s9 == 0) {
                      return;
                    }
                    in_stack_0000000c += -1;
                    if (in_stack_0000000c == 0) {
                      FUN_0001032a();
                      return;
                    }
                    FUN_00010358(0);
                    unaff_s8 = *(int *)(unaff_s9 + 4);
                    iVar3 = *(int *)(unaff_s8 + 8);
                    if (iVar3 != 0) break;
                    _L0(0,0,0x205);
                  }
                  unaff_s11 = *(uint *)(unaff_s8 + 0x40);
                } while ((unaff_s11 & 0x2002000) != 0x2002000);
                if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
                  _L0(0,0,0x215);
                  return;
                }
                unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
                unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
                if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
                *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
              }
              unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
              _L0();
              *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
              unaff_s10 = *(ushort **)(iVar3 + 8);
              unaff_s5 = *unaff_s10;
              uVar4 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
              iVar3 = uVar4 * 0x5d8 + unaff_s7;
            } while (*(char *)(iVar3 + 0x56) != '\x02');
            if (*(char *)(unaff_s4 + 0x1c) == '\x01') break;
            if ((unaff_s5 & 0x1400) == 0x1000) {
              FUN_000106b4(unaff_s0,1);
              if (*(char *)(iVar3 + 0x34a) == '\0') {
                FUN_000106cc(uVar4 + 10 & 0xff,1);
              }
              iVar3 = uVar4 * 0x5d8 + unaff_s7;
              *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
            }
          }
          if ((unaff_s5 & 0x140c) != 8) break;
          FUN_00010456(unaff_s0,0);
          FUN_00010462(iVar3,unaff_s0);
          cVar2 = *(char *)(iVar3 + 0x34a) + -1;
          *(char *)(iVar3 + 0x34a) = cVar2;
          if (cVar2 == '\0') {
            uVar4 = uVar4 + 10 & 0xff;
            FUN_00010484(uVar4,0);
            FUN_00010490(iVar3,uVar4);
          }
        }
        if ((unaff_s5 & 0xfc) == 0xa4) {
          iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
          if ((*(byte *)(iVar5 + 0x32) & 2) == 0) {
            FUN_0001062c(0x4a,0xd,0,3);
            *extraout_a0_03 = (char)unaff_s0;
            extraout_a0_03[1] = 1;
            extraout_a0_03[2] = 0;
            _L0();
          }
          else {
            *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) | 1;
            FUN_00010566(iVar3,unaff_s4,1);
            *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) & 0xfffffffe;
          }
        }
      } while ((unaff_s5 & 0x8c) != 0x88);
      if ((unaff_s5 & 0x300) == 0x300) {
        bVar1 = *(byte *)(unaff_s10 + 0xf);
      }
      else {
        bVar1 = *(byte *)(unaff_s10 + 0xc);
      }
      iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
    } while ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
             *(byte *)(iVar5 + 0xf2)) == 0);
    uVar4 = *(uint *)(iVar5 + 0x34) & 6;
    if ((*(byte *)(iVar5 + 0x32) & 0xc) == 0) goto _L0;
  } while (uVar4 != 0);
  in_stack_00000018 = (uint)*(byte *)(iVar5 + 0xf3);
  if ((*(byte *)(iVar5 + 0x32) & 8) == 0) {
_L0:
    iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
    if ((*(byte *)(iVar3 + 0x32) & 4) != 0) goto _L0;
  }
  else {
    *(undefined4 *)(iVar5 + 0x34) = 2;
    FUN_000105e6(iVar3,unaff_s4,in_stack_00000018);
    if ((in_stack_00000018 == 0) ||
       (in_stack_00000018 -= extraout_a0_02, 0 < (int)in_stack_00000018)) goto _L0;
  }
  iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
  goto _L0;
_L0:
  if (uVar4 == 0) {
    *(undefined4 *)(iVar5 + 0x34) = 2;
_L0:
    FUN_00010614((uint)*(byte *)(iVar5 + 0x1b),bVar1 & 7 | 0x10,0,0);
    *(undefined4 *)(iVar5 + 0x34) = 0;
  }
  goto _L0;
_L0:
  *(undefined4 *)(iVar3 + 0x34) = 4;
  param_4 = 3;
  param_3 = 0;
  param_2 = 0xd;
  param_1 = 0x4a;
  goto code_r0x00010674;
}



void _L0(void)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
code_r0x0001068c:
  _L0();
_L0:
  do {
    do {
      do {
        while( true ) {
          while( true ) {
            do {
              iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
              if (*(char *)(iVar3 + 0x58) != '\0') {
                if ((unaff_s5 & 4) == 0) {
                  FUN_000104b8((uint)*(byte *)(iVar3 + 0x57),unaff_s0,1);
                }
                iVar3 = unaff_s1 * 0x5d8 + unaff_s7;
                if (*(char *)(iVar3 + 0x56) == '\0') {
                  if ((unaff_s5 & 0xfc) == 0x80) {
                    in_stack_0000002c = 0;
                    _L0(0,unaff_s8);
                    FUN_000104ec(0);
                    FUN_000104fc(unaff_s8,iVar3,unaff_s4,(undefined4 *)&stack0x0000002c);
                    FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar3);
                    FUN_00010518(iVar3);
                    if (*(int *)(iVar3 + 0x40) != 0) {
                      FUN_00010528(iVar3,*(undefined4 *)(iVar3 + 0x24));
                    }
                    if (extraout_a0_01 == 0) goto _L0;
                  }
                  else {
                    if ((unaff_s5 & 4) == 0) {
                      FUN_000106f4(unaff_s10,unaff_s11,iVar3);
                    }
                  }
                }
              }
              while( true ) {
                do {
                  FUN_000103f6(unaff_s9);
                  if (extraout_a0 != 0) goto _L0;
_L0:
                  while( true ) {
                    FUN_0001038e(unaff_s9);
_L0:
                    unaff_s9 = iRam00000000;
                    FUN_00010312(0x40000);
                    if (unaff_s9 == 0) {
                      return;
                    }
                    in_stack_0000000c += -1;
                    if (in_stack_0000000c == 0) {
                      FUN_0001032a();
                      return;
                    }
                    FUN_00010358(0);
                    unaff_s8 = *(int *)(unaff_s9 + 4);
                    iVar3 = *(int *)(unaff_s8 + 8);
                    if (iVar3 != 0) break;
                    _L0(0,0,0x205);
                  }
                  unaff_s11 = *(uint *)(unaff_s8 + 0x40);
                } while ((unaff_s11 & 0x2002000) != 0x2002000);
                if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
                  _L0(0,0,0x215);
                  return;
                }
                unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
                unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
                if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
                *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
              }
              unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
              _L0();
              *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
              unaff_s10 = *(ushort **)(iVar3 + 8);
              unaff_s5 = *unaff_s10;
              uVar4 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
              iVar3 = uVar4 * 0x5d8 + unaff_s7;
            } while (*(char *)(iVar3 + 0x56) != '\x02');
            if (*(char *)(unaff_s4 + 0x1c) == '\x01') break;
            if ((unaff_s5 & 0x1400) == 0x1000) {
              FUN_000106b4(unaff_s0,1);
              if (*(char *)(iVar3 + 0x34a) == '\0') {
                FUN_000106cc(uVar4 + 10 & 0xff,1);
              }
              iVar3 = uVar4 * 0x5d8 + unaff_s7;
              *(char *)(iVar3 + 0x34a) = *(char *)(iVar3 + 0x34a) + '\x01';
            }
          }
          if ((unaff_s5 & 0x140c) != 8) break;
          FUN_00010456(unaff_s0,0);
          FUN_00010462(iVar3,unaff_s0);
          cVar2 = *(char *)(iVar3 + 0x34a) + -1;
          *(char *)(iVar3 + 0x34a) = cVar2;
          if (cVar2 == '\0') {
            uVar4 = uVar4 + 10 & 0xff;
            FUN_00010484(uVar4,0);
            FUN_00010490(iVar3,uVar4);
          }
        }
        if ((unaff_s5 & 0xfc) == 0xa4) {
          iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
          if ((*(byte *)(iVar5 + 0x32) & 2) == 0) {
            FUN_0001062c(0x4a,0xd,0,3);
            *extraout_a0_03 = (char)unaff_s0;
            extraout_a0_03[1] = 1;
            extraout_a0_03[2] = 0;
            _L0();
          }
          else {
            *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) | 1;
            FUN_00010566(iVar3,unaff_s4,1);
            *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) & 0xfffffffe;
          }
        }
      } while ((unaff_s5 & 0x8c) != 0x88);
      if ((unaff_s5 & 0x300) == 0x300) {
        bVar1 = *(byte *)(unaff_s10 + 0xf);
      }
      else {
        bVar1 = *(byte *)(unaff_s10 + 0xc);
      }
      iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
    } while ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
             *(byte *)(iVar5 + 0xf2)) == 0);
    uVar4 = *(uint *)(iVar5 + 0x34) & 6;
    if ((*(byte *)(iVar5 + 0x32) & 0xc) == 0) goto _L0;
  } while (uVar4 != 0);
  uVar4 = (uint)*(byte *)(iVar5 + 0xf3);
  if ((*(byte *)(iVar5 + 0x32) & 8) == 0) {
_L0:
    iVar3 = unaff_s0 * 0x1b0 + unaff_s6;
    if ((*(byte *)(iVar3 + 0x32) & 4) != 0) goto _L0;
  }
  else {
    *(undefined4 *)(iVar5 + 0x34) = 2;
    FUN_000105e6(iVar3,unaff_s4,uVar4);
    if ((uVar4 == 0) || (uVar4 -= extraout_a0_02, 0 < (int)uVar4)) goto _L0;
  }
  iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
  goto _L0;
_L0:
  if (uVar4 == 0) {
    *(undefined4 *)(iVar5 + 0x34) = 2;
_L0:
    FUN_00010614((uint)*(byte *)(iVar5 + 0x1b),bVar1 & 7 | 0x10,0,0);
    *(undefined4 *)(iVar5 + 0x34) = 0;
  }
  goto _L0;
_L0:
  *(undefined4 *)(iVar3 + 0x34) = 4;
  _L0(0x4a,0xd,0,3);
  *extraout_a0_04 = (char)unaff_s0;
  extraout_a0_04[1] = (char)uVar4;
  extraout_a0_04[2] = 1;
  goto code_r0x0001068c;
}



void FUN_000106b4(uint param_1,undefined4 param_2)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar2;
  uint uVar3;
  uint unaff_s2;
  int iVar4;
  int unaff_s3;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_000106b4(param_1,param_2);
    if (*(char *)(unaff_s3 + 0x34a) == '\0') {
      FUN_000106cc(unaff_s2 + 10 & 0xff,1);
    }
    iVar4 = unaff_s2 * 0x5d8 + unaff_s7;
    *(char *)(iVar4 + 0x34a) = *(char *)(iVar4 + 0x34a) + '\x01';
_L0:
    do {
      do {
        iVar4 = unaff_s1 * 0x5d8 + unaff_s7;
        if (*(char *)(iVar4 + 0x58) != '\0') {
          if ((unaff_s5 & 4) == 0) {
            FUN_000104b8((uint)*(byte *)(iVar4 + 0x57),unaff_s0,1);
          }
          iVar4 = unaff_s1 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar4 + 0x56) == '\0') {
            if ((unaff_s5 & 0xfc) == 0x80) {
              in_stack_0000002c = 0;
              _L0(0,unaff_s8);
              FUN_000104ec(0);
              FUN_000104fc(unaff_s8,iVar4,unaff_s4,(undefined4 *)&stack0x0000002c);
              FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar4);
              FUN_00010518(iVar4);
              if (*(int *)(iVar4 + 0x40) != 0) {
                FUN_00010528(iVar4,*(undefined4 *)(iVar4 + 0x24));
              }
              if (extraout_a0_01 == 0) goto _L0;
            }
            else {
              if ((unaff_s5 & 4) == 0) {
                FUN_000106f4(unaff_s10,unaff_s11,iVar4);
              }
            }
          }
        }
        while( true ) {
          do {
            FUN_000103f6(unaff_s9);
            if (extraout_a0 != 0) goto _L0;
_L0:
            while( true ) {
              FUN_0001038e(unaff_s9);
_L0:
              unaff_s9 = iRam00000000;
              FUN_00010312(0x40000);
              if (unaff_s9 == 0) {
                return;
              }
              in_stack_0000000c += -1;
              if (in_stack_0000000c == 0) {
                FUN_0001032a();
                return;
              }
              FUN_00010358(0);
              unaff_s8 = *(int *)(unaff_s9 + 4);
              iVar4 = *(int *)(unaff_s8 + 8);
              if (iVar4 != 0) break;
              _L0(0,0,0x205);
            }
            unaff_s11 = *(uint *)(unaff_s8 + 0x40);
          } while ((unaff_s11 & 0x2002000) != 0x2002000);
          if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
            _L0(0,0,0x215);
            return;
          }
          unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
          unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
          if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
          *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
        }
        unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
        _L0();
        *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
        unaff_s10 = *(ushort **)(iVar4 + 8);
        unaff_s5 = *unaff_s10;
        unaff_s2 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
        unaff_s3 = unaff_s2 * 0x5d8 + unaff_s7;
      } while (*(char *)(unaff_s3 + 0x56) != '\x02');
      if (*(char *)(unaff_s4 + 0x1c) == '\x01') {
        if ((unaff_s5 & 0x140c) == 8) {
          FUN_00010456(unaff_s0,0);
          FUN_00010462(unaff_s3,unaff_s0);
          cVar2 = *(char *)(unaff_s3 + 0x34a) + -1;
          *(char *)(unaff_s3 + 0x34a) = cVar2;
          if (cVar2 == '\0') {
            uVar3 = unaff_s2 + 10 & 0xff;
            FUN_00010484(uVar3,0);
            FUN_00010490(unaff_s3,uVar3);
          }
        }
        else {
          if ((unaff_s5 & 0xfc) == 0xa4) {
            iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
            if ((*(byte *)(iVar4 + 0x32) & 2) == 0) {
              FUN_0001062c(0x4a,0xd,0,3);
              *extraout_a0_03 = (char)unaff_s0;
              extraout_a0_03[1] = 1;
              extraout_a0_03[2] = 0;
              _L0();
            }
            else {
              *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 1;
              FUN_00010566(unaff_s3,unaff_s4,1);
              *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xfffffffe;
            }
          }
          if ((unaff_s5 & 0x8c) == 0x88) {
            if ((unaff_s5 & 0x300) == 0x300) {
              bVar1 = *(byte *)(unaff_s10 + 0xf);
            }
            else {
              bVar1 = *(byte *)(unaff_s10 + 0xc);
            }
            iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
            if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
                *(byte *)(iVar4 + 0xf2)) != 0) {
              uVar3 = *(uint *)(iVar4 + 0x34) & 6;
              if ((*(byte *)(iVar4 + 0x32) & 0xc) == 0) {
                if (uVar3 != 0) goto _L0;
                *(undefined4 *)(iVar4 + 0x34) = 2;
              }
              else {
                if (uVar3 != 0) goto _L0;
                uVar3 = (uint)*(byte *)(iVar4 + 0xf3);
                if ((*(byte *)(iVar4 + 0x32) & 8) == 0) {
_L0:
                  iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
                  if ((*(byte *)(iVar4 + 0x32) & 4) != 0) {
                    *(undefined4 *)(iVar4 + 0x34) = 4;
                    _L0(0x4a,0xd,0,3);
                    *extraout_a0_04 = (char)unaff_s0;
                    extraout_a0_04[1] = (char)uVar3;
                    extraout_a0_04[2] = 1;
                    _L0();
                    goto _L0;
                  }
                }
                else {
                  *(undefined4 *)(iVar4 + 0x34) = 2;
                  FUN_000105e6(unaff_s3,unaff_s4,uVar3);
                  if ((uVar3 == 0) || (uVar3 -= extraout_a0_02, 0 < (int)uVar3)) goto _L0;
                }
                iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
              }
              FUN_00010614((uint)*(byte *)(iVar4 + 0x1b),bVar1 & 7 | 0x10,0,0);
              *(undefined4 *)(iVar4 + 0x34) = 0;
            }
          }
        }
        goto _L0;
      }
    } while ((unaff_s5 & 0x1400) != 0x1000);
    param_2 = 1;
    param_1 = unaff_s0;
  } while( true );
}



void FUN_000106cc(uint param_1,undefined4 param_2)

{
  byte bVar1;
  uint unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  int iVar5;
  int unaff_s4;
  ushort unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  ushort *unaff_s10;
  uint unaff_s11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
  do {
    FUN_000106cc(param_1,param_2);
    do {
      iVar5 = unaff_s2 * 0x5d8 + unaff_s7;
      *(char *)(iVar5 + 0x34a) = *(char *)(iVar5 + 0x34a) + '\x01';
_L0:
      do {
        do {
          iVar5 = unaff_s1 * 0x5d8 + unaff_s7;
          if (*(char *)(iVar5 + 0x58) != '\0') {
            if ((unaff_s5 & 4) == 0) {
              FUN_000104b8((uint)*(byte *)(iVar5 + 0x57),unaff_s0,1);
            }
            iVar5 = unaff_s1 * 0x5d8 + unaff_s7;
            if (*(char *)(iVar5 + 0x56) == '\0') {
              if ((unaff_s5 & 0xfc) == 0x80) {
                in_stack_0000002c = 0;
                _L0(0,unaff_s8);
                FUN_000104ec(0);
                FUN_000104fc(unaff_s8,iVar5,unaff_s4,(undefined4 *)&stack0x0000002c);
                FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(unaff_s8 + 0x1c),iVar5);
                FUN_00010518(iVar5);
                if (*(int *)(iVar5 + 0x40) != 0) {
                  FUN_00010528(iVar5,*(undefined4 *)(iVar5 + 0x24));
                }
                if (extraout_a0_01 == 0) goto _L0;
              }
              else {
                if ((unaff_s5 & 4) == 0) {
                  FUN_000106f4(unaff_s10,unaff_s11,iVar5);
                }
              }
            }
          }
          while( true ) {
            do {
              FUN_000103f6(unaff_s9);
              if (extraout_a0 != 0) goto _L0;
_L0:
              while( true ) {
                FUN_0001038e(unaff_s9);
_L0:
                unaff_s9 = iRam00000000;
                FUN_00010312(0x40000);
                if (unaff_s9 == 0) {
                  return;
                }
                in_stack_0000000c += -1;
                if (in_stack_0000000c == 0) {
                  FUN_0001032a();
                  return;
                }
                FUN_00010358(0);
                unaff_s8 = *(int *)(unaff_s9 + 4);
                iVar5 = *(int *)(unaff_s8 + 8);
                if (iVar5 != 0) break;
                _L0(0,0,0x205);
              }
              unaff_s11 = *(uint *)(unaff_s8 + 0x40);
            } while ((unaff_s11 & 0x2002000) != 0x2002000);
            if ((unaff_s11 >> 0xf & 0x3f8) == 0) {
              _L0(0,0,0x215);
              return;
            }
            unaff_s0 = (unaff_s11 >> 0xf & 0x3ff) - 8 & 0xff;
            unaff_s4 = unaff_s0 * 0x1b0 + unaff_s6;
            if (*(char *)(unaff_s4 + 0x1d) != '\0') break;
            *(uint *)(unaff_s8 + 0x40) = unaff_s11 & 0xfdffffff;
          }
          unaff_s1 = (uint)*(byte *)(unaff_s4 + 0x1a);
          _L0();
          *(undefined4 *)(unaff_s4 + 0x1a8) = extraout_a0_00;
          unaff_s10 = *(ushort **)(iVar5 + 8);
          unaff_s5 = *unaff_s10;
          unaff_s2 = (uint)*(byte *)(unaff_s1 * 0x5d8 + unaff_s7 + 0x57);
          iVar5 = unaff_s2 * 0x5d8 + unaff_s7;
        } while (*(char *)(iVar5 + 0x56) != '\x02');
        if (*(char *)(unaff_s4 + 0x1c) == '\x01') {
          if ((unaff_s5 & 0x140c) == 8) {
            FUN_00010456(unaff_s0,0);
            FUN_00010462(iVar5,unaff_s0);
            cVar2 = *(char *)(iVar5 + 0x34a) + -1;
            *(char *)(iVar5 + 0x34a) = cVar2;
            if (cVar2 == '\0') {
              uVar3 = unaff_s2 + 10 & 0xff;
              FUN_00010484(uVar3,0);
              FUN_00010490(iVar5,uVar3);
            }
          }
          else {
            if ((unaff_s5 & 0xfc) == 0xa4) {
              iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
              if ((*(byte *)(iVar4 + 0x32) & 2) == 0) {
                FUN_0001062c(0x4a,0xd,0,3);
                *extraout_a0_03 = (char)unaff_s0;
                extraout_a0_03[1] = 1;
                extraout_a0_03[2] = 0;
                _L0();
              }
              else {
                *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 1;
                FUN_00010566(iVar5,unaff_s4,1);
                *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xfffffffe;
              }
            }
            if ((unaff_s5 & 0x8c) == 0x88) {
              if ((unaff_s5 & 0x300) == 0x300) {
                bVar1 = *(byte *)(unaff_s10 + 0xf);
              }
              else {
                bVar1 = *(byte *)(unaff_s10 + 0xc);
              }
              iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
              if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
                  *(byte *)(iVar4 + 0xf2)) != 0) {
                uVar3 = *(uint *)(iVar4 + 0x34) & 6;
                if ((*(byte *)(iVar4 + 0x32) & 0xc) == 0) {
                  if (uVar3 != 0) goto _L0;
                  *(undefined4 *)(iVar4 + 0x34) = 2;
                }
                else {
                  if (uVar3 != 0) goto _L0;
                  uVar3 = (uint)*(byte *)(iVar4 + 0xf3);
                  if ((*(byte *)(iVar4 + 0x32) & 8) == 0) {
_L0:
                    iVar5 = unaff_s0 * 0x1b0 + unaff_s6;
                    if ((*(byte *)(iVar5 + 0x32) & 4) != 0) {
                      *(undefined4 *)(iVar5 + 0x34) = 4;
                      _L0(0x4a,0xd,0,3);
                      *extraout_a0_04 = (char)unaff_s0;
                      extraout_a0_04[1] = (char)uVar3;
                      extraout_a0_04[2] = 1;
                      _L0();
                      goto _L0;
                    }
                  }
                  else {
                    *(undefined4 *)(iVar4 + 0x34) = 2;
                    FUN_000105e6(iVar5,unaff_s4,uVar3);
                    if ((uVar3 == 0) || (uVar3 -= extraout_a0_02, 0 < (int)uVar3)) goto _L0;
                  }
                  iVar4 = unaff_s0 * 0x1b0 + unaff_s6;
                }
                FUN_00010614((uint)*(byte *)(iVar4 + 0x1b),bVar1 & 7 | 0x10,0,0);
                *(undefined4 *)(iVar4 + 0x34) = 0;
              }
            }
          }
          goto _L0;
        }
      } while ((unaff_s5 & 0x1400) != 0x1000);
      FUN_000106b4(unaff_s0,1);
    } while (*(char *)(iVar5 + 0x34a) != '\0');
    param_2 = 1;
    param_1 = unaff_s2 + 10 & 0xff;
  } while( true );
}



void FUN_000106f4(ushort *param_1,uint param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int extraout_a0;
  undefined4 extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined *extraout_a0_03;
  undefined *extraout_a0_04;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_s6;
  int unaff_s7;
  int iVar10;
  int unaff_s9;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000002c;
  
code_r0x000106f4:
  FUN_000106f4(param_1,param_2,param_3);
  do {
    FUN_000103f6(unaff_s9);
    if (extraout_a0 != 0) goto _L0;
    do {
      while( true ) {
        FUN_0001038e(unaff_s9);
_L0:
        unaff_s9 = iRam00000000;
        FUN_00010312(0x40000);
        if (unaff_s9 == 0) {
          return;
        }
        in_stack_0000000c += -1;
        if (in_stack_0000000c == 0) {
          FUN_0001032a();
          return;
        }
        FUN_00010358(0);
        iVar10 = *(int *)(unaff_s9 + 4);
        iVar6 = *(int *)(iVar10 + 8);
        if (iVar6 != 0) break;
        _L0(0,0,0x205);
      }
      param_2 = *(uint *)(iVar10 + 0x40);
      if ((param_2 & 0x2002000) != 0x2002000) break;
      if ((param_2 >> 0xf & 0x3f8) == 0) {
        _L0(0,0,0x215);
        return;
      }
      uVar3 = (param_2 >> 0xf & 0x3ff) - 8 & 0xff;
      iVar9 = uVar3 * 0x1b0 + unaff_s6;
      if (*(char *)(iVar9 + 0x1d) == '\0') {
        *(uint *)(iVar10 + 0x40) = param_2 & 0xfdffffff;
        break;
      }
      uVar4 = (uint)*(byte *)(iVar9 + 0x1a);
      _L0();
      *(undefined4 *)(iVar9 + 0x1a8) = extraout_a0_00;
      param_1 = *(ushort **)(iVar6 + 8);
      uVar2 = *param_1;
      uVar7 = (uint)*(byte *)(uVar4 * 0x5d8 + unaff_s7 + 0x57);
      iVar6 = uVar7 * 0x5d8 + unaff_s7;
      if (*(char *)(iVar6 + 0x56) == '\x02') {
        if (*(char *)(iVar9 + 0x1c) == '\x01') {
          if ((uVar2 & 0x140c) == 8) {
            FUN_00010456(uVar3,0);
            FUN_00010462(iVar6,uVar3);
            cVar5 = *(char *)(iVar6 + 0x34a) + -1;
            *(char *)(iVar6 + 0x34a) = cVar5;
            if (cVar5 == '\0') {
              uVar7 = uVar7 + 10 & 0xff;
              FUN_00010484(uVar7,0);
              FUN_00010490(iVar6,uVar7);
            }
          }
          else {
            if ((uVar2 & 0xfc) == 0xa4) {
              iVar8 = uVar3 * 0x1b0 + unaff_s6;
              if ((*(byte *)(iVar8 + 0x32) & 2) == 0) {
                FUN_0001062c(0x4a,0xd,0,3);
                *extraout_a0_03 = (char)uVar3;
                extraout_a0_03[1] = 1;
                extraout_a0_03[2] = 0;
                _L0();
              }
              else {
                *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) | 1;
                FUN_00010566(iVar6,iVar9,1);
                *(uint *)(iVar8 + 0x34) = *(uint *)(iVar8 + 0x34) & 0xfffffffe;
              }
            }
            if ((uVar2 & 0x8c) == 0x88) {
              if ((uVar2 & 0x300) == 0x300) {
                bVar1 = *(byte *)(param_1 + 0xf);
              }
              else {
                bVar1 = *(byte *)(param_1 + 0xc);
              }
              iVar8 = uVar3 * 0x1b0 + unaff_s6;
              if ((*(byte *)((uint)*(byte *)(in_stack_00000010 + (bVar1 & 7)) + in_stack_00000014) &
                  *(byte *)(iVar8 + 0xf2)) != 0) {
                uVar7 = *(uint *)(iVar8 + 0x34) & 6;
                if ((*(byte *)(iVar8 + 0x32) & 0xc) == 0) {
                  if (uVar7 != 0) goto _L0;
                  *(undefined4 *)(iVar8 + 0x34) = 2;
                }
                else {
                  if (uVar7 != 0) goto _L0;
                  uVar7 = (uint)*(byte *)(iVar8 + 0xf3);
                  if ((*(byte *)(iVar8 + 0x32) & 8) == 0) {
_L0:
                    iVar6 = uVar3 * 0x1b0 + unaff_s6;
                    if ((*(byte *)(iVar6 + 0x32) & 4) != 0) {
                      *(undefined4 *)(iVar6 + 0x34) = 4;
                      _L0(0x4a,0xd,0,3);
                      *extraout_a0_04 = (char)uVar3;
                      extraout_a0_04[1] = (char)uVar7;
                      extraout_a0_04[2] = 1;
                      _L0();
                      goto _L0;
                    }
                  }
                  else {
                    *(undefined4 *)(iVar8 + 0x34) = 2;
                    FUN_000105e6(iVar6,iVar9,uVar7);
                    if ((uVar7 == 0) || (uVar7 -= extraout_a0_02, 0 < (int)uVar7)) goto _L0;
                  }
                  iVar8 = uVar3 * 0x1b0 + unaff_s6;
                }
                FUN_00010614((uint)*(byte *)(iVar8 + 0x1b),bVar1 & 7 | 0x10,0,0);
                *(undefined4 *)(iVar8 + 0x34) = 0;
              }
            }
          }
        }
        else {
          if ((uVar2 & 0x1400) == 0x1000) {
            FUN_000106b4(uVar3,1);
            if (*(char *)(iVar6 + 0x34a) == '\0') {
              FUN_000106cc(uVar7 + 10 & 0xff,1);
            }
            iVar6 = uVar7 * 0x5d8 + unaff_s7;
            *(char *)(iVar6 + 0x34a) = *(char *)(iVar6 + 0x34a) + '\x01';
          }
        }
      }
_L0:
      iVar6 = uVar4 * 0x5d8 + unaff_s7;
      if (*(char *)(iVar6 + 0x58) == '\0') break;
      if ((uVar2 & 4) == 0) {
        FUN_000104b8((uint)*(byte *)(iVar6 + 0x57),uVar3,1);
      }
      param_3 = uVar4 * 0x5d8 + unaff_s7;
      if (*(char *)(param_3 + 0x56) != '\0') break;
      if ((uVar2 & 0xfc) != 0x80) {
        if ((uVar2 & 4) == 0) goto code_r0x000106f4;
        break;
      }
      in_stack_0000002c = 0;
      _L0(0,iVar10);
      FUN_000104ec(0);
      FUN_000104fc(iVar10,param_3,iVar9,(undefined4 *)&stack0x0000002c);
      FUN_0001050e(in_stack_0000002c,(uint)*(ushort *)(iVar10 + 0x1c),param_3);
      FUN_00010518(param_3);
      if (*(int *)(param_3 + 0x40) != 0) {
        FUN_00010528(param_3,*(undefined4 *)(param_3 + 0x24));
      }
    } while (extraout_a0_01 == 0);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 4332

void bl60x_firmwre_mpdu_free(void *swdesc_ptr)

{
  rx_swdesc *swdesc;
  
  _L0(_DAT_00000014);
  _DAT_00000014 -= (uint)*(byte *)((int)swdesc_ptr + 0x1d);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(int iRam00000014)

{
  int in_stack_0000000c;
  
  _L0(iRam00000014);
  iRam00000014 -= (uint)*(byte *)(in_stack_0000000c + 0x1d);
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
// DWARF DIE: 42ea

void rxl_current_desc_get(rx_hd **rhd,rx_pbd **rbd)

{
  *rhd = _DAT_00000010;
  *rbd = _DAT_00000004;
  return;
}



// DWARF DIE: 429f

void rxl_reset(void)

{
  _L0();
  FUN_00010762();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_00010762();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010762(void)

{
  FUN_00010762();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


